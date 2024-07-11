#include "usermainwindow.h"
#include "ui_usermainwindow.h"
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

userMainWindow::userMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::userMainWindow)
{
    ui->setupUi(this);

     QString appDir = QDir::currentPath();

    // 读取商品和订单数据
     products = loadProductsFromJson(appDir + fileProduct);
     recentOrderMsg = loadOrdersFromJson(appDir + fileOrder);

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
    graph_map();
    graph_dishes_list();

    connectSlot();


    productSize = products.size();

    currentOrder = 0;

    initializeHistoricalOrders();


}

// 从文件中读取商品数据
QList<Product> userMainWindow::loadProductsFromJson(const QString &filePath) {
    QList<Product> products;
    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly)) {
        qWarning("Couldn't open products file.");
        return products;
    }

    QByteArray jsonData = file.readAll();
    file.close();

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

    return products;
}

// 从文件读取历史订单数据
QList<Order> userMainWindow::loadOrdersFromJson(const QString &filePath) {
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

void userMainWindow::connectSlot(){
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

        ui->text_bill_name->setText(userName);
        ui->text_bill_contactInfo->setText(userContactInfo);
        ui->radio_bill_male->setChecked(true);

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

    connect(ui->btn_pay, &QPushButton::clicked, this,  userMainWindow::payBill);

    connect(ui->order_list, &QListWidget::itemClicked, [this](QListWidgetItem *item){
        QListWidget *listWidget = item->listWidget();
        QListWidgetItem *currentItem = listWidget->currentItem();

        // 检查 itemOrder 中的索引是否在合法范围内
        if (itemOrder.contains(currentItem) && itemOrder[currentItem] >= 0 && itemOrder[currentItem] < orderMsg.size()) {
            // ui->act_check_order->setEnabuserled(true);
            ui->act_delete_order->setEnabled(true);

            ui->stackedWidget->setCurrentIndex(mapPage);
            on_userSelectEndPoint(addressToIndex[orderMsg[itemOrder[currentItem]].order_address]);

            ui->label_map_date_2->setText(orderMsg[itemOrder[currentItem]].order_date);
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
            // ui->act_check_order->setEnabled(false);
            ui->act_delete_order->setEnabled(false);
        }
    });
}

// 支付函数
void userMainWindow::payBill() {
    QString bill_address = ui->comboBox_bill_address->currentText();
    QString bill_name = ui->text_bill_name->text();
    ui->buttonGroup->setId(ui->radio_bill_male, 0);
    ui->buttonGroup->setId(ui->radio_bill_female, 1);
    int radio_checked = ui->buttonGroup->checkedId();
    QString bill_gender = (radio_checked == 0) ? "男" : "女";
    qDebug()<<bill_gender;
    QString bill_contactInfo = ui->text_bill_contactInfo->text();
    qDebug() << "payBill: " << bill_name << bill_gender << bill_contactInfo;

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
    else{
        orderMsg.append({
            QDateTime::currentDateTime().toString("yyyyMMddhhmmss"),
            bill_name,
            bill_gender,
            bill_contactInfo,
            bill_address,
            QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"),
            cartList,
            currentSum
        });
    }


    ui->label_map_date_2->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));

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

    // reloadDataIntoTable(orderMsg);
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
void userMainWindow::initializeHistoricalOrders() {
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

        ui->stackedWidget->setCurrentIndex(orderPage);
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
void userMainWindow::startOrderTime(int orderId) {
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
void userMainWindow::updateOrderCountdownLabel(int orderId) {
    if (countdownMap.contains(orderId)) {
        int remainingTime = countdownMap[orderId];
        ui->label_map_timeout->setText(QString("%1秒内可撤销订单").arg(remainingTime));
        if(remainingTime == 0)
            ui->label_map_timeout->setText(QString("订单已锁定"));
    } else {
        ui->label_map_timeout->setText(QString("订单已锁定"));
        // reloadDishesDataIntoTable(products);
        // reloadDataIntoTable(orderMsg);
    }
}

void userMainWindow::graph_dishes_list() {
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

void userMainWindow::addProductItem(const Product &product, QGridLayout *gridLayout) {
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

// 获取用户选择的商品
QList<userSelectProduct> userMainWindow::updateCartList(const Product &product, int count) {
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
void userMainWindow::renderCartList(QScrollArea *scrollArea, QList<userSelectProduct> cartList) {

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

void userMainWindow::clearContainer() {
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

void userMainWindow::addOrder(const QString &orderId, const QString &orderAddress, const QString &orderDate) {
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

// void userMainWindow::graph_editDishes_list() {
//     QWidget *container = new QWidget;
//     QGridLayout *gridLayout = new QGridLayout(container);

//     editCurrentCol = 0;
//     editCurrentRow = 0;

//     for (Product &product : products) {
//         addEditProductItem(product, gridLayout);
//     }

//     // 设置容器的布局
//     container->setLayout(gridLayout);

//     // 将容器设置为QScrollArea的内容
//     ui->scrollArea_dishes->setWidget(container);
//     ui->scrollArea_dishes->setWidgetResizable(true); // 确保容器自动调整大小以适应滚动区域
// }


void userMainWindow::graph_map() {
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

// 最短路径算法
std::vector<int> userMainWindow::Dijkstra(int start, int end, int numPoints, int routes[16][16]) {
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

// 计算最短路径
void userMainWindow::calculate_and_render_shortest_path(int endIndex) {
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

// 最短路径的线高亮效果
void userMainWindow::highlight_shortest_path(const std::vector<int>& shortestPath) {
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

// 调用最短路线渲染函数
void userMainWindow::on_userSelectEndPoint(int endIndex) {
    // 先清除场景
    scene->clear();

    // 重新渲染地图和路径
    graph_map();

    // 计算并渲染最短路径
    calculate_and_render_shortest_path(endIndex);
}


// 点渲染函数
void userMainWindow::render_map_point(QPen pen) {
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

// 路线渲染函数
void userMainWindow::render_map_routes(QPen pen) {
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

void userMainWindow::on_btn_clear_carts_clicked()
{
    clearContainer();
}

void userMainWindow::on_btn_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(orderPage);
}

// 删除订单
void userMainWindow::on_act_delete_order_triggered(bool checked)
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
            saveDeleteNum.push_back(row);

            QMessageBox::information(this, "提示", "订单已删除");
            ui->stackedWidget->setCurrentIndex(orderPage);
            qDebug()<<row;
        }
    }
}

void userMainWindow::on_act_orderList_visible_triggered(bool checked)
{
    ui->dockWidget->setVisible(checked);
}

void userMainWindow::saveProductsToJson(const QList<Product> &products, const QString &filePath) {
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

bool userMainWindow::binarySearchDelete(QList<int>& list, int key) {
    int left = 0;
    int right = list.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (list[mid] == key) {
            return true;
        }
        if (list[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}

// 将订单数据写回文件
void userMainWindow::saveOrdersToJson(const QList<Order> &orders, const QString &filePath) {
    std::sort(saveDeleteNum.begin(), saveDeleteNum.end());

    QJsonArray jsonArray;
    for (int i = 0; i < orders.size(); ++i) {
        if (binarySearchDelete(saveDeleteNum, i)) {
            continue; // 跳过需要删除的下标
        }

        const Order &order = orders[i];
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

userMainWindow::~userMainWindow()
{
    QString appDir = QDir::currentPath();
    saveProductsToJson(products, appDir + fileProduct);
    saveOrdersToJson(orderMsg, appDir + fileOrder);
    delete ui;
}

// 修改账户信息
void userMainWindow::on_btn_admin_edit_clicked()
{
    userName = ui->text_admin_name->text();
    userContactInfo = ui->text_userContactInfo->text();
    QMessageBox::information(this, "提示", "修改成功");
}

