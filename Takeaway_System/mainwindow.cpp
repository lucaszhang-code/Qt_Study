#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "structures.h"
#include <QDateTime>
#include <QLabel>
#include <QLineEdit>
#include <QPixmap>
#include <QFileDialog>
#include <QMouseEvent>
#include <QSpinBox>
#include <QGraphicsPixmapItem>
#include <QGraphicsEllipseItem>
#include <QGraphicsLineItem>
#include <QMessageBox>
#include <QTimer>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QVector>
#include <QSplitter>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
#include <QDir>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 设置工作目录为应用程序目录
    // QDir  appDir = QCoreApplication::applicationDirPath();

    QString appDir = QDir::currentPath();
    // 读取商品和订单数据
    products = loadProductsFromJson(appDir + fileProduct);

    qDebug()<<appDir + fileProduct;
    recentOrderMsg = loadOrdersFromJson(appDir+ fileOrder);

    recentOrderMsgSize = recentOrderMsg.size() - 1;


    // 创建 QSplitter 实例并将其添加到 splitter 容器
    QSplitter *spliter = new QSplitter(Qt::Vertical, ui->splitter);

    // 将组件添加到 QSplitter 中
    spliter->addWidget(ui->view_map);
    spliter->addWidget(ui->map_checkList);

    // 创建一个布局并将 QSplitter 添加到布局中
    QVBoxLayout *layout = new QVBoxLayout(ui->splitter);
    layout->addWidget(spliter);

    // 将布局设置到 splitter
    ui->splitter->setLayout(layout);


    QPixmap avatar_image(":/image/testImage.jpg");
    // 缩放图片以适应 QLabel 的宽度
    avatar_image = avatar_image.scaledToWidth(ui->avatar_frame->width(), Qt::SmoothTransformation);

    ui->avatar_frame->setPixmap(avatar_image);

    // 初始化购物车和订单历史记录
    cartList.clear();

    recordCartList.clear();

    graph_editDishes_list();
    graph_dishes_list();
    graph_map();

    setupTable();
    setupDishesTable();

    // Initial data load
    reloadDataIntoTable(orderMsg);
    reloadDishesDataIntoTable(products);

    connectSlot();

    productSize = products.size();

    currentOrder = 0;

    initializeHistoricalOrders();
}

MainWindow::~MainWindow()
{
    QString appDir = QDir::currentPath();
    saveProductsToJson(products, appDir + fileProduct);
    saveOrdersToJson(orderMsg, appDir + fileOrder);
    delete ui;
}

// 从文件中读取商品数据
QList<Product> MainWindow::loadProductsFromJson(const QString &filePath) {
    QList<Product> products;
    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly)) {
        qWarning("Couldn't open products file.");
        return products;
    }

    QByteArray jsonData = file.readAll();


    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);
    QJsonArray jsonArray = jsonDoc.array();

    for (const QJsonValue &value : jsonArray) {
        QJsonObject jsonObj = value.toObject();
        Product product;
        product.id = jsonObj["id"].toInt();
        product.name = jsonObj["name"].toString();
        product.imagePath = jsonObj["imagePath"].toString();
        product.price = jsonObj["price"].toDouble();
        product.salesCount = jsonObj["salesCount"].toInt();
        products.append(product);
    }
    file.close();
    return products;
}

// 从文件读取历史订单数据
QList<Order> MainWindow::loadOrdersFromJson(const QString &filePath) {
    QList<Order> orders;
    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly)) {
        qWarning("Couldn't open orders file.");
        return orders;
    }

    QByteArray jsonData = file.readAll();
    file.close();

    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);
    QJsonArray jsonArray = jsonDoc.array();

    for (const QJsonValue &value : jsonArray) {
        QJsonObject jsonObj = value.toObject();
        Order order;
        order.order_id = jsonObj["order_id"].toString();
        order.order_name = jsonObj["order_name"].toString();
        order.order_gender = jsonObj["order_gender"].toString();
        order.order_contactInfo = jsonObj["order_contactInfo"].toString();
        order.order_address = jsonObj["order_address"].toString();
        order.order_date = jsonObj["order_date"].toString();
        order.orderSum = jsonObj["orderSum"].toDouble();
        order.canDelete = jsonObj["canDelete"].toBool();

        QJsonArray cartArray = jsonObj["cartList"].toArray();
        for (const QJsonValue &cartValue : cartArray) {
            QJsonObject cartObj = cartValue.toObject();
            userSelectProduct cartItem;
            cartItem.name = cartObj["name"].toString();
            cartItem.imagePath = cartObj["imagePath"].toString();
            cartItem.count = cartObj["count"].toInt();
            cartItem.subSum = cartObj["subSum"].toDouble();
            order.cartList.append(cartItem);
        }

        orders.append(order);
    }

    return orders;
}

// 将最新数据写入文件
void MainWindow::saveProductsToJson(const QList<Product> &products, const QString &filePath) {
    QJsonArray jsonArray;
    for (const Product &product : products) {
        QJsonObject jsonObj;
        jsonObj["id"] = product.id;
        jsonObj["name"] = product.name;
        jsonObj["imagePath"] = product.imagePath;
        jsonObj["price"] = product.price;
        jsonObj["salesCount"] = product.salesCount;
        jsonArray.append(jsonObj);
    }

    QJsonDocument jsonDoc(jsonArray);
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        qWarning() << "Couldn't open save file:" << filePath;
        qWarning() << file.errorString();
        return;
    }
    file.write(jsonDoc.toJson());
    file.close();
}

void MainWindow::saveOrdersToJson(const QList<Order> &orders, const QString &filePath) {
    QJsonArray jsonArray;
    for (const Order &order : orders) {
        QJsonObject jsonObj;
        jsonObj["order_id"] = order.order_id;
        jsonObj["order_name"] = order.order_name;
        jsonObj["order_gender"] = order.order_gender;
        jsonObj["order_contactInfo"] = order.order_contactInfo;
        jsonObj["order_address"] = order.order_address;
        jsonObj["order_date"] = order.order_date;
        jsonObj["orderSum"] = order.orderSum;
        jsonObj["canDelete"] = order.canDelete;

        QJsonArray cartArray;
        for (const userSelectProduct &cartItem : order.cartList) {
            QJsonObject cartObj;
            cartObj["name"] = cartItem.name;
            cartObj["imagePath"] = cartItem.imagePath;
            cartObj["count"] = cartItem.count;
            cartObj["subSum"] = cartItem.subSum;
            cartArray.append(cartObj);
        }
        jsonObj["cartList"] = cartArray;

        jsonArray.append(jsonObj);
    }

    QJsonDocument jsonDoc(jsonArray);
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        qWarning() << "Couldn't open save file:" << filePath;
        qWarning() << file.errorString();
        return;
    }
    file.write(jsonDoc.toJson());
    file.close();
}



// 专门用于存放信号和槽函数
void MainWindow::connectSlot(){
    connect(ui->act_check_account, &QAction::triggered, [this](){
        ui->stackedWidget->setCurrentIndex(userPage);
    });

    connect(ui->act_add_order, &QAction::triggered, [this](){
        ui->stackedWidget->setCurrentIndex(orderPage);
    });

    connect(ui->btn_generate_bills, &QPushButton::clicked, [this]() {
        if(cartList.isEmpty()) {
            QMessageBox::warning(this, "警告", "请至少选择一项");
            return;
        }

        // 切换到账单页面
        ui->stackedWidget->setCurrentIndex(billPage);

        // 渲染购物车列表
        renderCartList(ui->checked_list, cartList);

        // 生成账单ID和日期
        QString bill_id = QDateTime::currentDateTime().toString("yyyyMMddhhmmss");
        ui->label_bill_id->setText(bill_id);
        QString bill_date = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
        ui->label_bill_date->setText(bill_date);

        // 总金额
        currentSum = 0;
        for(const auto &item : cartList) {
            currentSum += item.subSum;
        }
        QFont font;
        font.setBold(true);
        font.setPointSize(12);
        ui->label_bill_sum->setFont(font);
        ui->label_bill_sum->setText(QString("总金额: %1 元").arg(currentSum));

    });

    connect(ui->btn_pay, &QPushButton::clicked, this,  MainWindow::payBill);

    connect(ui->order_list, &QListWidget::itemClicked, [this](QListWidgetItem *item){
        QListWidget *listWidget = item->listWidget();
        QListWidgetItem *currentItem = listWidget->currentItem();

        // 检查 itemOrder 中的索引是否在合法范围内
        if (itemOrder.contains(currentItem) && itemOrder[currentItem] >= 0 && itemOrder[currentItem] < orderMsg.size()) {
            ui->act_check_order->setEnabled(true);
            ui->act_delete_order->setEnabled(true);

            ui->stackedWidget->setCurrentIndex(mapPage);
            on_userSelectEndPoint(addressToIndex[orderMsg[itemOrder[currentItem]].order_address]);

            ui->label_map_date->setText(orderMsg[itemOrder[currentItem]].order_date);
            renderCartList(ui->map_checkList, recordCartList[itemOrder[currentItem]]);

            currentOrderDisplayed = itemOrder[currentItem];
            updateOrderCountdownLabel(itemOrder[currentItem]);
        } else {
            qWarning() << "Order index is out of range or invalid: " << itemOrder[currentItem];
        }
    });


    // 连接 currentItemChanged 信号到槽函数，当没有选择任何项时禁用按钮
    connect(ui->order_list, &QListWidget::currentItemChanged, [this](QListWidgetItem *current, QListWidgetItem *previous){
        if (!current) {
            // 禁用按钮
            ui->act_check_order->setEnabled(false);
            ui->act_delete_order->setEnabled(false);
        }
    });

    connect(ui->btn_addDishes, &QPushButton::clicked, [this]() {
        QString addDishes_name = ui->text_addDishes_name->text();
        QString addDishes_price = ui->text_addDishes_price->text();
        QString imagePath = ui->label_addDishes_image->property("imagePath").toString();

        if (addDishes_name.isEmpty() || addDishes_price.isEmpty()) {
            QMessageBox::warning(this, "警告", "名称和价格不能为空");
            return;
        }

        bool ok;
        double price = addDishes_price.toDouble(&ok);

        if (!ok) {
            QMessageBox::warning( this, "警告", "价格必须是一个有效的数字");
            return;
        }

        Product newProduct = { ++productSize, addDishes_name, imagePath, price, 0};
        products.append(newProduct);

        // 获取当前的布局
        QGridLayout *gridLayout = qobject_cast<QGridLayout *>(ui->scrollArea->widget()->layout());
        if (!gridLayout) {
            qWarning() << "Failed to get grid layout";
            return;
        }
        // 获取当前的布局
        QGridLayout *editGridLayout = qobject_cast<QGridLayout *>(ui->scrollArea_dishes->widget()->layout());
        if (!editGridLayout) {
            qWarning() << "Failed to get grid layout";
            return;
        }

        // 直接添加新的商品项到当前页面
        addProductItem(newProduct, gridLayout);
        addEditProductItem(newProduct, editGridLayout);

        QMessageBox::information(this, "提醒", "添加成功");
        ui->text_addDishes_name->setText("");
        ui->text_addDishes_price->setText("");
        ui->label_addDishes_image->clear();
        ui->stackedWidget->setCurrentIndex(dishesEdit_page);

        reloadDataIntoTable(orderMsg);
    });


    connect(ui->act_edit_dishes, &QAction::triggered, [this](){
        ui->stackedWidget->setCurrentIndex(dishesEdit_page);
    });
    // 点击更改菜品按钮修改菜品
    connect(ui->btn_editDishes, &QPushButton::clicked, this, &MainWindow::saveEditedProduct);

    connect(ui->btn_deleteDishes, &QPushButton::clicked, this, &MainWindow::deleteProductItem);

    // 订单管理
    connect(ui->act_orderManagement, &QAction::triggered, this, [this](){
        ui->stackedWidget->setCurrentIndex(orderManagement_page);
    });

}

// 支付函数
void MainWindow::payBill() {
    QString bill_address = ui->comboBox_bill_address->currentText();
    QString bill_name = ui->text_bill_name->text();
    // int radio_checked = ui->buttonGroup_2->checkedId();
    // QString bill_gender = (radio_checked == 0) ? "男" : "女";
    QString bill_contactInfo = ui->text_bill_contactInfo->text();
    // qDebug() << "payBill: " << bill_name << bill_gender << bill_contactInfo;

    if (bill_name.isEmpty() || bill_contactInfo.isEmpty()) {
        QMessageBox::warning(this, "警告", "请完善订单信息");
        return;
    }

    // 获取地址对应的坐标
    Coordinate coordinate = addressToCoordinate.value(bill_address, {0, 0});

    if(recentOrderMsgSize >= 0){
        orderMsg.append({
            recentOrderMsg[currentOrder].order_id,
            recentOrderMsg[currentOrder].order_name,
            recentOrderMsg[currentOrder].order_gender,
            recentOrderMsg[currentOrder].order_contactInfo,
            recentOrderMsg[currentOrder].order_address,
            recentOrderMsg[currentOrder].order_date,
            recentOrderMsg[currentOrder].cartList,
            recentOrderMsg[currentOrder].orderSum
        });
    }
    // else{
    //     orderMsg.append({
    //         QDateTime::currentDateTime().toString("yyyyMMddhhmmss"),
    //         bill_name,
    //         bill_gender,
    //         bill_contactInfo,
    //         bill_address,
    //         QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"),
    //         cartList,
    //         currentSum
    //     });
    // }


    ui->label_map_date->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));

    ui->stackedWidget->setCurrentIndex(mapPage);

    if (currentOrder >= 0 && currentOrder < orderMsg.size()) {
        qDebug() << "Adding order: " << orderMsg[currentOrder].order_id;
        addOrder(orderMsg[currentOrder].order_id, orderMsg[currentOrder].order_address, orderMsg[currentOrder].order_date);
    } else {
        qWarning() << "currentOrder is out of range: " << currentOrder;
    }

    recordCartList.append(cartList);

    // 更新所有产品的销量
    for (QSpinBox *spinBox : spinboxSalesCountMap.keys()) {
        Product &product = spinBoxProducts[spinBox];
        auto it = std::find_if(products.begin(), products.end(), [&](const Product& p) {
            return p.id == product.id;
        });
        if (it != products.end()) {
            it->salesCount = product.salesCount;
        }
    }

    // reloadDishesDataIntoTable(products);

    renderCartList(ui->map_checkList, recordCartList[currentOrder]);

    if(recentOrderMsgSize < 0){
        QMessageBox::information(this, "提醒", "支付成功");
    }

    reloadDataIntoTable(orderMsg);
    cartList.clear();
    clearContainer();

    startOrderTime(currentOrder);

    // 渲染最短路径
    on_userSelectEndPoint(addressToIndex[orderMsg[currentOrder].order_address]);
    qDebug()<< addressToCoordinate[orderMsg[currentOrder].order_address].x<<" "<<addressToCoordinate[orderMsg[currentOrder].order_address].y;

    recentOrderMsgSize--;
    currentOrder++;
}

// 初始化历史数据
void MainWindow::initializeHistoricalOrders() {
    // ui->stackedWidget->blockSignals(true); // 暂时阻止信号

    for (const Order &order : recentOrderMsg) {
        qDebug() << "Initializing order: " << order.order_id;

        // 将当前订单设置为 orderMsg
        // orderMsg.append(order);

        // 设置当前订单信息到 UI
        ui->label_bill_date->setText(order.order_date);
        ui->label_bill_id->setText(order.order_id);
        ui->comboBox_bill_address->setCurrentText(order.order_address);
        ui->text_bill_name->setText(order.order_name);
        if (order.order_gender == "男") {
            ui->radio_bill_male->setChecked(true);
        } else if (order.order_gender == "女") {
            ui->radio_bill_female->setChecked(true);
        }
        ui->text_bill_contactInfo->setText(order.order_contactInfo);
        cartList = order.cartList;
        currentSum = order.orderSum;

        payBill(); // 调用支付函数

        ui->stackedWidget->setCurrentIndex(orderManagement_page);
        ui->dockWidget->setVisible(false);

        // 清理和重置相关状态
        ui->label_bill_id->setText("");
        ui->label_bill_date->setText("");
        ui->comboBox_bill_address->clearEditText();
        ui->text_bill_name->clear();
        ui->radio_bill_male->setAutoExclusive(false);
        ui->radio_bill_female->setAutoExclusive(false);
        ui->radio_bill_male->setChecked(false);
        ui->radio_bill_female->setChecked(false);
        ui->radio_bill_male->setAutoExclusive(true);
        ui->radio_bill_female->setAutoExclusive(true);
        ui->text_bill_contactInfo->clear();
        cartList.clear();
        currentSum = 0;
    }

}


// 定时器
// 启动订单倒计时
void MainWindow::startOrderTime(int orderId) {
    if (orderTimers.contains(orderId)) {
        // 如果已经有定时器在运行，则先停止它
        orderTimers[orderId]->stop();
        orderTimers[orderId]->deleteLater();
    }

    QTimer* orderTimer = new QTimer(this);
    countdownMap[orderId] = 60; // 初始倒计时时间为60秒
    orderTimers[orderId] = orderTimer;

    connect(orderTimer, &QTimer::timeout, [=]() mutable {
        if (countdownMap[orderId] > 0) {
            countdownMap[orderId]--;
        } else {
            orderTimer->stop();
            orderMsg[orderId].canDelete = false;
            orderTimer->deleteLater();
            orderTimers.remove(orderId);        
        }

        // 更新当前显示订单的倒计时
        if (currentOrderDisplayed == orderId) {
            updateOrderCountdownLabel(orderId);
        }
    });

    orderTimer->start(1000); // 每秒更新一次
}

// 更新标签显示
void MainWindow::updateOrderCountdownLabel(int orderId) {
    if (countdownMap.contains(orderId)) {
        int remainingTime = countdownMap[orderId];
        ui->label_map_timeout->setText(QString("%1秒内可撤销订单").arg(remainingTime));
        if(remainingTime == 0)
            ui->label_map_timeout->setText(QString("订单已锁定"));
    } else {
        ui->label_map_timeout->setText(QString("订单已锁定"));
        reloadDishesDataIntoTable(products);
        reloadDataIntoTable(orderMsg);
    }
}

void MainWindow::graph_dishes_list() {
    QWidget *container = new QWidget;
    QGridLayout *gridLayout = new QGridLayout(container);

    // 初始化行列索引
    currentRow = 0;
    currentCol = 0;
    const int columnCount = 4; // 每行展示的商品数量

    for (const Product &product : products) {
        addProductItem(product, gridLayout); // 使用新的函数添加商品项
    }

    // 设置容器的布局
    container->setLayout(gridLayout);

    // 将容器设置为QScrollArea的内容
    ui->scrollArea->setWidget(container);
    ui->scrollArea->setWidgetResizable(true); // 确保容器自动调整大小以适应滚动区域
}


// 获取用户选择的商品
QList<userSelectProduct> MainWindow::updateCartList(const Product &product, int count) {
    // 检查购物车列表中是否已存在该商品
    auto it = std::find_if(cartList.begin(), cartList.end(), [&product](const userSelectProduct &p) {
        return p.name == product.name;
    });

    if (it != cartList.end()) {
        // 更新现有商品的数量和小计
        it->count = count;
        it->subSum = count * product.price;
    } else {
        // 添加新商品到购物车列表
        if (count > 0) {
            cartList.append({product.name, product.imagePath, count, count * product.price});
        }
    }

    // 移除数量为0的商品
    cartList.erase(std::remove_if(cartList.begin(), cartList.end(), [](const userSelectProduct &p) {
        return p.count == 0;
    }), cartList.end());

    return cartList;
}

// 渲染购物车列表
void MainWindow::renderCartList(QScrollArea *scrollArea, QList<userSelectProduct> cartList) {

    // 创建一个 QListWidget
    QListWidget *listWidget = new QListWidget(this);

    for (const userSelectProduct &product : cartList) {
        // 创建一个 QListWidgetItem
        QListWidgetItem *item = new QListWidgetItem(listWidget);
        item->setSizeHint(QSize(300, 100)); // 设置项的大小

        // 创建一个 QWidget 作为容器
        QWidget *itemWidget = new QWidget(listWidget);

        // 创建一个 QHBoxLayout
        QHBoxLayout *layout = new QHBoxLayout(itemWidget);

        // 创建并设置 QLabel 用于显示图片
        QLabel *imageLabel = new QLabel(itemWidget);
        QPixmap pixmap(product.imagePath);
        QSize iconSize(100, 100);  // 设置图标的宽度和高度
        pixmap = pixmap.scaled(iconSize, Qt::KeepAspectRatio); // 缩放图像到指定大小
        imageLabel->setPixmap(pixmap);
        imageLabel->setFixedSize(iconSize); // 设置 QLabel 的固定大小
        layout->addWidget(imageLabel);

        // 创建并设置 QLabel 用于显示商品名称
        QLabel *nameLabel = new QLabel(product.name, itemWidget);
        layout->addWidget(nameLabel);

        // 创建并设置 QLabel 用于显示商品数量
        QLabel *countLabel = new QLabel(QString("数量: %1").arg(product.count), itemWidget);
        layout->addWidget(countLabel);

        // 创建并设置 QLabel 用于显示商品小计
        QLabel *subSumLabel = new QLabel(QString("小计: %1元").arg(product.subSum), itemWidget);
        layout->addWidget(subSumLabel);

        // 设置布局到 QWidget
        itemWidget->setLayout(layout);

        // 将 QWidget 设置为 QListWidgetItem 的内容
        listWidget->setItemWidget(item, itemWidget);
    }

    // 将 QListWidget 设置为 ui->checked_list 的内容
    scrollArea->setWidget(listWidget);
    scrollArea->setWidgetResizable(true);

}

void MainWindow::clearContainer() {
    // 重置所有 QSpinBox 的值为 0
    for (QSpinBox *spinBox : spinBoxPrices.keys()) {
        spinBox->setValue(0);
    }

    ui->label_bill_id->setText("");
    ui->text_bill_name->setText("");
    ui->radio_bill_male->setChecked(false);
    ui->radio_bill_female->setChecked(false);
    ui->text_bill_contactInfo->setText("");
    ui->comboBox_bill_address->setCurrentIndex(0);
    ui->label_bill_date->setText("");
}

void MainWindow::addOrder(const QString &orderId, const QString &orderAddress, const QString &orderDate) {
    QListWidgetItem* item = new QListWidgetItem();
    item->setText(QString("%1\t%2\t%3").arg(orderId).arg(orderAddress).arg(orderDate));
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
    item->setCheckState(Qt::Checked);
    if (currentOrder >= 0 && currentOrder < orderMsg.size()) {
        itemOrder.insert(item, currentOrder);
    } else {
        qWarning() << "currentOrder is out of range: " << currentOrder;
        return;
    }
    ui->order_list->addItem(item);
}

void MainWindow::on_act_add_order_triggered()
{
    currentOrder;
}

void MainWindow::on_btn_change_avator_clicked()
{
    QStringList files = QFileDialog::getOpenFileNames(this, "选择文件", "", "Images(*.jpg)");
    if(files.isEmpty()) return;
    // 只选择第一张图片
    QString fileName = files.first();
    QPixmap newPixmap;
    if (newPixmap.load(fileName)) {
        ui->avatar_frame->setPixmap(newPixmap.scaledToWidth(ui->avatar_frame->width(), Qt::SmoothTransformation));
    }
}

void MainWindow::graph_editDishes_list() {
    QWidget *container = new QWidget;
    QGridLayout *gridLayout = new QGridLayout(container);

    editCurrentCol = 0;
    editCurrentRow = 0;

    for (Product &product : products) {
        addEditProductItem(product, gridLayout);
    }

    // 设置容器的布局
    container->setLayout(gridLayout);

    // 将容器设置为QScrollArea的内容
    ui->scrollArea_dishes->setWidget(container);
    ui->scrollArea_dishes->setWidgetResizable(true); // 确保容器自动调整大小以适应滚动区域
}


void MainWindow::graph_map() {
    // 创建场景
    scene = new QGraphicsScene(this);

    // 加载地图图像
    QPixmap map(":/map/map.png"); // 使用你的地图图像路径
    QGraphicsPixmapItem *mapItem = new QGraphicsPixmapItem(map);
    scene->addItem(mapItem);

    // 标记点
    QPen pen(Qt::black);
    pen.setWidth(3);

    render_map_point(pen);
    render_map_routes(pen);

    // 将场景设置到QGraphicsView
    ui->view_map->setScene(scene);
}

std::vector<int> MainWindow::Dijkstra(int start, int end, int numPoints, int routes[16][16]) {
    std::vector<int> dist(numPoints, std::numeric_limits<int>::max());
    std::vector<int> path(numPoints, -1);
    std::vector<bool> visited(numPoints, false);

    dist[start] = 0;

    for (int i = 0; i < numPoints; ++i) {
        int minDist = std::numeric_limits<int>::max();
        int u = -1;

        for (int j = 0; j < numPoints; ++j) {
            if (!visited[j] && dist[j] < minDist) {
                minDist = dist[j];
                u = j;
            }
        }

        if (u == -1) break;
        visited[u] = true;

        for (int v = 0; v < numPoints; ++v) {
            if (!visited[v] && routes[u][v] != 5000 && dist[u] + routes[u][v] < dist[v]) {
                dist[v] = dist[u] + routes[u][v];
                path[v] = u;
            }
        }
    }

    std::vector<int> shortestPath;
    for (int at = end; at != -1; at = path[at]) {
        shortestPath.push_back(at);
    }
    std::reverse(shortestPath.begin(), shortestPath.end());
    return shortestPath;
}

void MainWindow::calculate_and_render_shortest_path(int endIndex) {
    int start = 0; // 假设起点是“商家”，它在 pointsPosition 列表中的索引是 0
    int end = endIndex; // 用户选择的终点的索引
    std::vector<int> shortestPath = Dijkstra(start, end, numPoints, routes);
    // 打印路径以调试
    qDebug() << "Shortest Path:";
    for (int node : shortestPath) {
        qDebug() << node;
    }

    highlight_shortest_path(shortestPath);
}

void MainWindow::highlight_shortest_path(const std::vector<int>& shortestPath) {
    QPen redPen(Qt::yellow);
    redPen.setWidth(5);
    for (int i = 0; i < shortestPath.size() - 1; i++) {
        int u = shortestPath[i];
        int v = shortestPath[i + 1];
        // 打印正在绘制的线以调试
        qDebug() << "Drawing line from" << u << "to" << v;

        LineTwoPoints linePoints = {pointsPosition[u].x, pointsPosition[u].y, pointsPosition[v].x, pointsPosition[v].y};
        QGraphicsLineItem *line = pointFindLineMap.value(linePoints, nullptr);
        if (line) {
            line->setPen(redPen);
        }
    }
}


void MainWindow::on_userSelectEndPoint(int endIndex) {
    // 先清除场景
    scene->clear();

    // 重新渲染地图和路径
    graph_map();

    // 计算并渲染最短路径
    calculate_and_render_shortest_path(endIndex);
}



void MainWindow::render_map_point(QPen pen) {
    for (const Point& point : pointsPosition) {
        // 绘制点
        QGraphicsEllipseItem* ellipseItem = new QGraphicsEllipseItem(point.x - 5, point.y - 5, 5, 5);
        ellipseItem->setPen(pen);
        ellipseItem->setBrush(Qt::black);
        scene->addItem(ellipseItem);

        // 绘制点的名称
        QGraphicsTextItem* textItem = new QGraphicsTextItem(point.name);
        QFont font = textItem->font();
        font.setPointSize(10);
        textItem->setFont(font);
        textItem->setPos(point.x + 5, point.y - 5);
        scene->addItem(textItem);
    }
}


void MainWindow::render_map_routes(QPen pen) {
    for (int i = 0; i < numPoints; ++i) {
        for (int j = i + 1; j < numPoints; ++j) {
            if (routes[i][j] != 5000) {
                QGraphicsLineItem *line = new QGraphicsLineItem(
                    pointsPosition[i].x, pointsPosition[i].y,
                    pointsPosition[j].x, pointsPosition[j].y
                    );
                line->setPen(pen);
                LineTwoPoints linePoints = {pointsPosition[i].x, pointsPosition[i].y, pointsPosition[j].x, pointsPosition[j].y};
                pointFindLineMap.insert(linePoints, line);
                scene->addItem(line);
            }
        }
    }
}

void MainWindow::on_btn_clear_carts_clicked()
{
    clearContainer();
}


void MainWindow::on_btn_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(orderPage);
}

// 删除订单
void MainWindow::on_act_delete_order_triggered(bool checked)
{
    // 获取当前选中的项
    QListWidgetItem *currentItem = ui->order_list->currentItem();
    if(currentItem){
        // 获取 currentOrder 对应的索引
        int row = itemOrder[currentItem];
        // 检查当前行是否有效
        if(row >= 0 && row < orderMsg.size()){
            // 检查订单是否可以删除
            if(!orderMsg[row].canDelete){
                QMessageBox::warning(this, "警告", "订单已锁定，无法删除");
                return;
            }

            delete ui->order_list->takeItem(ui->order_list->row(currentItem));

            // 从 itemOrder 中移除该项
            itemOrder.remove(currentItem);

            QMessageBox::information(this, "提示", "订单已删除");
            ui->stackedWidget->setCurrentIndex(orderPage);
            reloadDataIntoTable(orderMsg);
            reloadDishesDataIntoTable(products);
            qDebug()<<row;
        }
    }
}

// 点击查看所有菜品按钮进入编辑菜单界面
void MainWindow::on_btn_checkAll_dishes_clicked()
{
    ui->stackedWidget->setCurrentIndex(dishesEdit_page);
}

void MainWindow::onProductButtonClicked() {
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button) {
        Product product = buttonProductMap.value(button);
        currentEditingButton = button; // 记录当前编辑的按钮

        // 保存当前编辑的产品
        currentEditingProduct = product;

        // 处理产品信息，将信息加载到编辑页面
        ui->text_editDishes_name->setText(product.name);
        ui->text_editDishes_price->setText(QString::number(product.price, 'f', 2));
        QPixmap pixmap(product.imagePath);
        int labelWidth = ui->label_editDishes_image->width();
        QPixmap scaledPixmap = pixmap.scaledToWidth(labelWidth, Qt::SmoothTransformation);
        ui->label_editDishes_image->setPixmap(scaledPixmap);
        ui->label_editDishes_image->setProperty("editDishes_imagePath", product.imagePath);

        ui->stackedWidget->setCurrentIndex(editDishes_page);
    }
}

// 当用户点击保存按钮时，将编辑后的商品信息保存并更新界面
void MainWindow::saveEditedProduct() {
    QString newName = ui->text_editDishes_name->text();
    QString newPriceStr = ui->text_editDishes_price->text();
    QString newImagePath = ui->label_editDishes_image->property("editDishes_imagePath").toString();

    if (newName.isEmpty() || newPriceStr.isEmpty()) {
        QMessageBox::warning(this, "警告", "名称和价格不能为空");
        return;
    }

    bool ok;
    double newPrice = newPriceStr.toDouble(&ok);
    if (!ok) {
        QMessageBox::warning(this, "警告", "价格必须是一个有效的数字");
        return;
    }

    // 更新产品信息
    currentEditingProduct.name = newName;
    currentEditingProduct.price = newPrice;
    currentEditingProduct.imagePath = newImagePath;

    // 更新产品列表中的对应项
    for (Product &product : products) {
        if (product.id == currentEditingProduct.id) {
            product = currentEditingProduct;
            break;
        }
    }

    // 使用当前编辑按钮找到对应的商品项
    if (currentEditingButton) {
        QWidget *productWidget = buttonWidgetMap.value(currentEditingButton);
        if (productWidget) {
            QVBoxLayout *productLayout = qobject_cast<QVBoxLayout *>(productWidget->layout());
            if (productLayout) {
                QLabel *imageLabel = qobject_cast<QLabel *>(productLayout->itemAt(0)->widget());
                QLabel *nameLabel = qobject_cast<QLabel *>(productLayout->itemAt(1)->widget());
                QLabel *priceLabel = qobject_cast<QLabel *>(productLayout->itemAt(3)->widget());

                QPixmap pixmap(newImagePath);
                if (!pixmap.isNull()) {
                    imageLabel->setPixmap(pixmap.scaled(100, 100, Qt::KeepAspectRatio));
                    qDebug() << "Updated image for product:" << newName;
                } else {
                    qWarning() << "Failed to load image for product:" << newName;
                }

                if (nameLabel->text() != newName) {
                    nameLabel->setText(newName);
                    qDebug() << "Updated name for product:" << newName;
                }

                QString newPriceText = QString("%1元").arg(newPrice);
                if (priceLabel->text() != newPriceText) {
                    priceLabel->setText(newPriceText);
                    qDebug() << "Updated price for product:" << newName;
                }
            } else {
                qWarning() << "Failed to cast layout to QVBoxLayout for product:" << newName;
            }
        } else {
            qWarning() << "Failed to find product widget for" << newName;
        }
    } else {
        qWarning() << "No editing button recorded.";
    }

    // 更新界面
    updateProductItem(currentEditingProduct);
    reloadDishesDataIntoTable(products);

    QMessageBox::information(this, "提醒", "商品已修改");
    ui->label_editDishes_image->clear();


    // 返回到商品列表页面
    ui->stackedWidget->setCurrentIndex(dishesEdit_page);
}

// 更新界面中的商品项：
void MainWindow::updateProductItem(const Product &product) {
    QWidget *productWidget = nullptr;

    // 查找对应的商品项
    for (auto it = productWidgetMap.begin(); it != productWidgetMap.end(); ++it) {
        if (it.value().id == product.id) {
            productWidget = it.key();
            break;
        }
    }

    if (productWidget) {
        // 更新商品项内容
        QVBoxLayout *productLayout = qobject_cast<QVBoxLayout *>(productWidget->layout());
        if (productLayout) {
            QLabel *imageLabel = qobject_cast<QLabel *>(productLayout->itemAt(0)->widget());
            QLabel *nameLabel = qobject_cast<QLabel *>(productLayout->itemAt(1)->widget());
            QLabel *priceLabel = qobject_cast<QLabel *>(productLayout->itemAt(3)->widget());

            QPixmap pixmap(product.imagePath);
            if (!pixmap.isNull()) {
                imageLabel->setPixmap(pixmap.scaled(100, 100, Qt::KeepAspectRatio));
            } else {
                qWarning() << "Failed to load image for product:" << product.name;
            }
            nameLabel->setText(product.name);
            priceLabel->setText(QString("%1元").arg(product.price));
        }
    } else {
        qWarning() << "Failed to find product widget for" << product.name;
    }
}


// 删除菜品
void MainWindow::deleteProductItem() {

    // 创建确认框
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "确认删除", "确定要删除该商品吗？",
                                  QMessageBox::Yes | QMessageBox::No);

    if(reply == QMessageBox::Yes){
        int currentId = currentEditingProduct.id;
        // 使用标准算法删除匹配的产品
        auto it = std::remove_if(products.begin(), products.end(), [currentId](const Product& product) {
            return product.id == currentId;
        });

        // 使用erase删除所有被标记为删除的元素
        products.erase(it, products.end());

        // 删除对应商品元素
        QWidget *productWidget = productIdWidgetMap.value(currentId, nullptr);
        QWidget *orderWidget = orderIdWidgetMap.value(currentId, nullptr);
        if (productWidget) {
            // 从布局中移除并删除productWidget
            QLayout *productLayout = productWidget->parentWidget()->layout();
            if (productLayout) {
                productLayout->removeWidget(productWidget);
            }
            delete productWidget;

            QLayout *orderLayout = orderWidget->parentWidget()->layout();
            if(orderLayout){
                orderLayout->removeWidget(orderWidget);
            }
            delete orderWidget;

            // 从QMap中移除对应的条目
            productIdWidgetMap.remove(currentId);
            orderIdWidgetMap.remove(currentId);

            // 重新布局
            QGridLayout *gridLayoutOrders = qobject_cast<QGridLayout*>(ui->scrollArea->widget()->layout());
            if (gridLayoutOrders) {
                refreshEditGridLayout(gridLayoutOrders, currentCol, currentRow);
            }

            QGridLayout *gridLayoutDishes = qobject_cast<QGridLayout*>(ui->scrollArea_dishes->widget()->layout());
            if (gridLayoutDishes) {
                refreshEditGridLayout(gridLayoutDishes, editCurrentCol, editCurrentRow);
            }
        }

        QMessageBox::information(this, "提醒", "删除成功");
        ui->stackedWidget->setCurrentIndex(dishesEdit_page);
    }
    else{
        return;
    }

}

void MainWindow::refreshEditGridLayout(QGridLayout *gridLayout, int &currentCol, int &currentRow) {
    // 获取所有小部件
    QList<QLayoutItem*> items;
    while (QLayoutItem* item = gridLayout->takeAt(0)) {
        items.append(item);
    }

    // 清空网格布局
    for (QLayoutItem* item : items) {
        if (item->widget()) {
            item->widget()->hide();
            gridLayout->removeItem(item);
        }
    }

    // 重新将小部件添加到网格布局
    int row = 0, col = 0;
    for (QLayoutItem* item : items) {
        if (item->widget()) {
            gridLayout->addWidget(item->widget(), row, col);
            item->widget()->show();

            col++;
            if (col >= editColumnCount) {
                col = 0;
                row++;
            }
        }
    }

    // 更新全局行列索引
    currentRow = row;
    currentCol = col;
}


// 添加菜品界面添加图片
void MainWindow::on_btn_addImage_clicked()
{
    QStringList files = QFileDialog::getOpenFileNames(this, "选择文件", "", "Images(*.jpg)");
    if(files.isEmpty()) return;
    // 只选择第一张图片
    QString fileName = files.first();
    QPixmap newPixmap;
    if (newPixmap.load(fileName)) {
        ui->label_addDishes_image->setPixmap(newPixmap.scaledToWidth(ui->avatar_frame->width(), Qt::SmoothTransformation));
        // 存储图片路径
        ui->label_addDishes_image->setProperty("imagePath", fileName);
    }
}


void MainWindow::on_act_add_dishes_triggered()
{
    ui->stackedWidget->setCurrentIndex(addDishes_page);
}

void MainWindow::addProductItem(const Product &product, QGridLayout *gridLayout) {
    QWidget *productWidget = new QWidget(ui->scrollArea->widget());
    QVBoxLayout *productLayout = new QVBoxLayout(productWidget);
    productWidgetMap[productWidget] = product;

    QLabel *imageLabel = new QLabel(productWidget);
    QPixmap pixmap(product.imagePath);
    if (!pixmap.isNull()) {
        imageLabel->setPixmap(pixmap.scaled(100, 100, Qt::KeepAspectRatio));
    } else {
        qWarning() << "Failed to load image for product:" << product.name;
    }
    productLayout->addWidget(imageLabel);

    QLabel *nameLabel = new QLabel(product.name, productWidget);
    productLayout->addWidget(nameLabel);

    QSpinBox *counter = new QSpinBox();
    counter->setMaximumWidth(50);
    productLayout->addWidget(counter);

    QLabel *priceLabel = new QLabel(QString("%1元").arg(product.price), productWidget);
    QFont currentFont = priceLabel->font();
    currentFont.setBold(true);
    currentFont.setPointSize(12);
    priceLabel->setFont(currentFont);
    productLayout->addWidget(priceLabel);

    // 将 QSpinBox 和商品价格存入 QMap
    spinBoxPrices[counter] = product.price;
    orderIdWidgetMap.insert(product.id, productWidget);

    // 将商品项添加到网格布局中
    gridLayout->addWidget(productWidget, currentRow, currentCol);

    // 更新行列索引
    currentCol++;
    if (currentCol >= columnCount) {
        currentCol = 0;
        currentRow++;
    }

    // 将 QSpinBox 和商品信息存入 QMap
    spinBoxProducts[counter] = product;
    spinboxSalesCountMap[counter] = product.salesCount;  // 初始为原始销量
    spinBoxPreviousValues[counter] = 0;

    // 连接 QSpinBox 的 valueChanged 信号到槽函数，用于统计数量和总金额
    connect(counter, QOverload<int>::of(&QSpinBox::valueChanged), [=](int newValue) {
        int previousValue = spinBoxPreviousValues[counter];
        totalDishesCount = totalDishesCount - previousValue + newValue;
        ui->dishesCount->setText(QString::number(totalDishesCount));

        spinBoxPreviousValues[counter] = newValue;
        spinboxSalesCountMap[counter] = product.salesCount + newValue;  // 更新为原始销量加购买数量

        qDebug()<<"当前菜品销量是:"<<spinboxSalesCountMap[counter];
        spinBoxProducts[counter].salesCount = spinboxSalesCountMap[counter];

        totalPrice = 0.0;
        for (QSpinBox *spinBox : spinBoxPrices.keys()) {
            totalPrice += spinBox->value() * spinBoxPrices[spinBox];
        }

        ui->totalPrice->setText(QString("%1元").arg(totalPrice));
        cartList = updateCartList(spinBoxProducts[counter], newValue);
    });
}

// 增加菜品
void MainWindow::addEditProductItem(const Product &product, QGridLayout *gridLayout) {
    QWidget *productWidget = new QWidget(ui->scrollArea_dishes->widget());
    QVBoxLayout *productLayout = new QVBoxLayout(productWidget);

    QLabel *imageLabel = new QLabel(productWidget);
    QPixmap pixmap(product.imagePath);
    if (!pixmap.isNull()) {
        imageLabel->setPixmap(pixmap.scaled(100, 100, Qt::KeepAspectRatio));
    } else {
        qWarning() << "Failed to load image for product:" << product.name;
    }
    productLayout->addWidget(imageLabel);

    QLabel *nameLabel = new QLabel(product.name, productWidget);
    productLayout->addWidget(nameLabel);

    QPushButton *btn_editDishes = new QPushButton("编辑菜品");
    productLayout->addWidget(btn_editDishes);
    buttonProductMap.insert(btn_editDishes, product);
    buttonWidgetMap.insert(btn_editDishes, productWidget);
    productIdWidgetMap.insert(product.id, productWidget);
    connect(btn_editDishes, &QPushButton::clicked, this, &MainWindow::onProductButtonClicked);

    QLabel *priceLabel = new QLabel(QString("%1元").arg(product.price), productWidget);
    QFont currentFont = priceLabel->font();
    currentFont.setBold(true);
    currentFont.setPointSize(12);
    priceLabel->setFont(currentFont);
    productLayout->addWidget(priceLabel);

    // 将商品项添加到网格布局中
    gridLayout->addWidget(productWidget, editCurrentRow, editCurrentCol);

    // 更新行列索引
    editCurrentCol++;
    if (editCurrentCol >= editColumnCount) {
        editCurrentCol = 0;
        editCurrentRow++;
    }
}



void MainWindow::on_btn_editDishes_updateImage_clicked()
{
    QStringList files = QFileDialog::getOpenFileNames(this, "选择文件", "", "Images(*.jpg)");
    if(files.isEmpty()) return;
    // 只选择第一张图片
    QString fileName = files.first();
    QPixmap newPixmap;
    if (newPixmap.load(fileName)) {
        ui->label_editDishes_image->setPixmap(newPixmap.scaledToWidth(ui->avatar_frame->width(), Qt::SmoothTransformation));
        // 存储图片路径
        ui->label_editDishes_image->setProperty("editDishes_imagePath", fileName);
    }
}

void MainWindow::quickSort(QList<Order> &list, int left, int right, int column, bool ascending) {
    for (int i = left + 1; i <= right; ++i) {
        Order key = list[i];
        int j = i - 1;

        while (j >= left && (ascending ? compare(list[j], key, column) : compare(key, list[j], column))) {
            list[j + 1] = list[j];
            j--;
        }
        list[j + 1] = key;
    }
}


// 更新表格数据
void MainWindow::reloadDataIntoTable(const QList<Order>& sortedOrderMsg) {
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableView_order->model());
    if (!model) {
        return;
    }

    // 清空现有数据时禁用更新
    model->blockSignals(true);
    model->removeRows(0, model->rowCount());
    model->blockSignals(false);

    // 设置表头
    model->setHorizontalHeaderLabels({"订单编号", "购买者", "性别", "联系方式", "地址", "下单时间", "订单总额", "是否锁定"});

    // 批量添加数据
    QList<QStandardItem*> items;
    for (const Order &order : sortedOrderMsg) {
        items.clear();
        items << new QStandardItem(order.order_id)
              << new QStandardItem(order.order_name)
              << new QStandardItem(order.order_gender)
              << new QStandardItem(order.order_contactInfo)
              << new QStandardItem(order.order_address)
              << new QStandardItem(order.order_date)
              << new QStandardItem(QString::number(order.orderSum))
              << new QStandardItem(order.canDelete ? "否" : "是");
        model->appendRow(items);
    }
    double sumPrice = 0;
    for(Order &subOrder : orderMsg){
        sumPrice += subOrder.orderSum;
    }
    ui->label_revenue_sumPrice->setText(QString("总营业额:%1元").arg(sumPrice));
}


bool MainWindow::compare(const Order &a, const Order &b, int column) {
    switch (column) {
    case 0: return a.order_id < b.order_id;
    case 1: return a.order_name < b.order_name;
    case 2: return a.order_gender < b.order_gender;
    case 3: return a.order_contactInfo < b.order_contactInfo;
    case 4: return a.order_address < b.order_address;
    case 5: return a.order_date < b.order_date;
    case 6: return a.orderSum < b.orderSum;
    case 7: return a.canDelete < b.canDelete;
    default: return false;
    }
}


void MainWindow::sortOrders(int column, bool ascending) {
    // 创建 orderMsg 的副本
    QList<Order> copyOrderMsg;

    if(!filtterdOrderMsg.isEmpty())
        copyOrderMsg = filtterdOrderMsg;
    else
        copyOrderMsg = orderMsg;

    // 调用手写的快速排序函数
    quickSort(copyOrderMsg, 0, copyOrderMsg.size() - 1, column, ascending);

    // 重新加载数据到表格
    reloadDataIntoTable(copyOrderMsg);
}

void MainWindow::setupTable() {
    // 创建 QSplitter 实例并将其添加到 splitter 容器
    QSplitter *spliter = new QSplitter(Qt::Vertical, ui->widget_containSearchOrderTable);

    // 将组件添加到 QSplitter 中
    spliter->addWidget(ui->widget_revenue_management);
    spliter->addWidget(ui->tableView_order);

    // 创建一个布局并将 QSplitter 添加到布局中
    QVBoxLayout *layout = new QVBoxLayout(ui->widget_containSearchOrderTable);
    layout->addWidget(spliter);

    // 将布局设置到 splitter
    ui->widget_containSearchOrderTable->setLayout(layout);


    // 设置表格模型
    QStandardItemModel *model = new QStandardItemModel(this);
    ui->tableView_order->setModel(model);

    // 连接表头点击信号到排序函数
    connect(ui->tableView_order->horizontalHeader(), &QHeaderView::sectionClicked, this, [this](int column) {
        static bool ascending = true;
        sortOrders(column, ascending);
        ascending = !ascending;
    });

    // 初始加载数据
    reloadDataIntoTable(orderMsg);
}

void MainWindow::quickDishesSort(QList<Product> &list, int left, int right, int column, bool ascending) {
    if (left >= right) return;

    int i = left, j = right;
    Product pivot = list[left + (right - left) / 2];

    while (i <= j) {
        while (ascending ? compareDishes(list[i], pivot, column) : compareDishes(pivot, list[i], column)) i++;
        while (ascending ? compareDishes(pivot, list[j], column) : compareDishes(list[j], pivot, column)) j--;
        if (i <= j) {
            std::swap(list[i], list[j]);
            i++;
            j--;
        }
    }

    if (left < j) quickDishesSort(list, left, j, column, ascending);
    if (i < right) quickDishesSort(list, i, right, column, ascending);
}


// 更新菜品表格数据
void MainWindow::reloadDishesDataIntoTable(const QList<Product>& sortedDishesMsg) {
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableView_dishes->model());
    if (!model) {
        return;
    }

    // 清空现有数据时禁用更新
    model->blockSignals(true);
    model->removeRows(0, model->rowCount());
    model->blockSignals(false);

    // 设置表头
    model->setHorizontalHeaderLabels({"菜品编号", "菜品名称", "菜品单价", "销量"});

    // 批量添加数据
    QList<QStandardItem*> items;
    for (const Product &product : sortedDishesMsg) {
        items.clear();
        items << new QStandardItem(QString::number(product.id))
              << new QStandardItem(product.name)
              << new QStandardItem(QString::number(product.price, 'f', 2))
              << new QStandardItem(QString::number(product.salesCount));
        model->appendRow(items);
    }
}

bool MainWindow::compareDishes(const Product &a, const Product &b, int column) {
    switch (column) {
    case 0: return a.id < b.id;
    case 1: return a.name < b.name;
    case 2: return a.price < b.price;
    case 3: return a.salesCount < b.salesCount;
    default: return false;
    }
}


void MainWindow::sortDishes(int column, bool ascending) {
    QList<Product> copyProducts;

    if(!filteredProducts.isEmpty())
        // 创建 orderMsg 的副本
        copyProducts = filteredProducts;
    else
        copyProducts = products;

    // 调用手写的快速排序函数
    quickDishesSort(copyProducts, 0, copyProducts.size() - 1, column, ascending);

    // 重新加载数据到表格
    reloadDishesDataIntoTable(copyProducts);
}

void MainWindow::setupDishesTable() {
    // 创建 QSplitter 实例并将其添加到 splitter 容器
    QSplitter *spliter = new QSplitter(Qt::Vertical, ui->widget_dishesSummary);

    // 将组件添加到 QSplitter 中
    spliter->addWidget(ui->widget_dishesSearch);
    spliter->addWidget(ui->tableView_dishes);

    // 创建一个布局并将 QSplitter 添加到布局中
    QVBoxLayout *layout = new QVBoxLayout(ui->widget_dishesSummary);
    layout->addWidget(spliter);

    // 将布局设置到 splitter
    ui->widget_dishesSummary->setLayout(layout);

    // 设置表格模型
    QStandardItemModel *model = new QStandardItemModel(this);
    ui->tableView_dishes->setModel(model);

    // 连接表头点击信号到排序函数
    connect(ui->tableView_dishes->horizontalHeader(), &QHeaderView::sectionClicked, this, [this](int column) {
        static bool ascending = true;
        sortDishes(column, ascending);
        ascending = !ascending;
    });

    // 初始加载数据
    reloadDishesDataIntoTable(products);
}


void MainWindow::on_btn_orderManagement_clicked()
{
    ui->stackedWidget->setCurrentIndex(orderManagement_page);
}


void MainWindow::on_act_summaryDishes_triggered()
{
    ui->stackedWidget->setCurrentIndex(dishesSummary_page);
}


void MainWindow::on_act_orderList_visible_triggered(bool checked)
{
    ui->dockWidget->setVisible(checked);
}

// 根据姓名和地点查找订单
void MainWindow::on_btn_search_orderBuyer_clicked()
{
    QString searchCriteria = ui->comboBox_searchName->currentText();
    QString text_search_value = ui->text_search_orderBuyer->text();
    QList<Order> searchResult;

    // 清空之前的搜索结果
    searchResult.clear();

    // 根据选择的搜索条件进行搜索
    for(const Order &order : orderMsg) {
        if(searchCriteria == "姓名" && order.order_name == text_search_value) {
            searchResult.append(order);
        }
        else if(searchCriteria == "地点" && order.order_address == text_search_value) {
            searchResult.append(order);
        }
    }
    if(text_search_value.isEmpty()){
        searchResult = orderMsg;
    }

    filtterdOrderMsg = searchResult;

    // 重新加载搜索结果到表格中
    reloadDataIntoTable(searchResult);
}


// 根据菜系、菜名、价格区间查询
void MainWindow::on_btn_searchDishes_clicked()
{
    QList<Product> searchResult;

    QString currentComboxValue = ui->comboBox_cuisine->currentText();
    QString dishesName = ui->text_dishesName->text();
    QString lowPriceStr = ui->text_lowPrice->text();
    QString highPriceStr = ui->text_highPrice->text();

    if(lowPriceStr > highPriceStr){
        QMessageBox::warning(this, "警告", "请输入正确的价格区间");
        return;
    }

    // 转换价格范围为数值类型
    bool lowPriceOk, highPriceOk;
    double lowPrice = lowPriceStr.toDouble(&lowPriceOk);
    double highPrice = highPriceStr.toDouble(&highPriceOk);

    searchResult.clear();

    for (const Product &product : products) {
        bool match = true;

        // 检查菜系
        if (!currentComboxValue.isEmpty() && currentComboxValue != "全部" && product.name.left(1) != currentComboxValue) {
            match = false;
        }

        // 检查菜名
        if (!dishesName.isEmpty() && !product.name.contains(dishesName, Qt::CaseInsensitive)) {
            match = false;
        }

        // 检查价格范围
        if (lowPriceOk && product.price < lowPrice) {
            match = false;
        }
        if (highPriceOk && product.price > highPrice) {
            match = false;
        }

        // 如果匹配所有条件，则添加到搜索结果
        if (match) {
            searchResult.append(product);
        }
    }

    // 存储当前筛选结果，以便在排序时使用
    filteredProducts = searchResult;

    // 重新加载搜索结果到表格中
    reloadDishesDataIntoTable(searchResult);
}




void MainWindow::on_btn_admin_edit_clicked()
{
    QMessageBox::information(this, "提示", "修改成功");
}

