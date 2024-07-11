#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <structures.h>
#include <QPushButton>
#include <QMainWindow>
#include <QSpinBox>
#include <QWidget>
#include <QGraphicsScene>
#include <QListWidget>
#include <QScrollArea>
#include <QLabel>
#include <QGridLayout>
#include <QPen>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

// // 商品结构
// struct Product {
//     int id;
//     QString name;
//     QString imagePath;
//     double price;
//     int salesCount;
// };

// // 用户选择的商品结构
// struct userSelectProduct{
//     QString name;
//     QString imagePath;
//     int count;
//     // 选择的此项商品总价
//     double subSum;
// };

// // 订单信息结构体
// struct Order {
//     QString order_id;   // 订单编号
//     QString order_name; //收件人姓名
//     QString order_gender;   // 收件人性别
//     QString order_contactInfo;  // 收件人联系方式
//     QString order_address;  // 订单地址
//     QString order_date; // 订单时间
//     QList<userSelectProduct> cartList; // 用户当前的购物车信息
//     double orderSum;    // 订单金额
//     bool canDelete = true;
// };

// struct Point
// {
//     int x;
//     int y;
//     QString name;
// };

// struct Coordinate
// {
//     int x;
//     int y;
// };

// struct LineTwoPoints
// {
//     int x1; // 第一个点的x坐标
//     int y1; // 第一个点的y坐标
//     int x2; // 第二个点的x坐标
//     int y2; // 第二个点的y坐标

//     bool operator<(const LineTwoPoints& other) const {
//         return std::tie(x1, y1, x2, y2) < std::tie(other.x1, other.y1, other.x2, other.y2);
//     }
// };


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    // 读文件
    QList<Product> loadProductsFromJson(const QString &filePath);

    QList<Order> loadOrdersFromJson(const QString &filePath);

    // 写文件
    void saveProductsToJson(const QList<Product> &products, const QString &filePath);

    void saveOrdersToJson(const QList<Order> &orders, const QString &filePath);

    //QString fileProduct = "C:/Users/Lucas/Desktop/Study/Qt_Study/build-Takeaway_System-Desktop_Qt_6_2_12_MinGW_64_bit-Debug/release/data/products.json";
    // QString fileOrder = "C:\\Users\\Lucas\\Desktop\\Study\\Qt_Study\\Takeaway_System\\data\\order.json";

    QString fileProduct = "/data/products.json";
    QString fileOrder = "/data/orders.json";


    // 商品数据
    QList<Product> products /*= {
        {1, "鲁——糖醋黄河鲤鱼", ":/image/lu_tcfish.jpeg", 36, 23},
        {2, "川——麻婆豆腐", ":/image/chuan_mpdoufu.jpg", 15, 12},
        {3, "粤——白切鸡", ":/image/yue_bcchick.jpg", 25, 24},
        {4, "苏——松鼠鳜鱼", ":/image/su_ssfish.jpg", 36, 12},
        {5, "闽——沙县拌面", ":/image/min_sxnodooss.png", 36, 34},
        {6, "浙——西湖醋鱼", ":/image/zhe_xhfish.png", 30, 23},
        {7, "湘——剁椒鱼头", ":/image/xaing_mdoufu.jpg", 25, 29},
        {8, "徽——毛豆腐", ":/image/hui_mdoufu.png", 14, 34},
        {9, "鲁——葱爆海参", ":/image/lu_cbhaishen.jpg", 38, 56},
        {10, "川——水煮牛肉", ":/image/chuan_szmeet.jpg", 36, 12},
        {11, "粤——烧鹅", ":/image/yue_sgoosse.jpg", 20, 45},
        {12, "苏——扬州炒饭", ":/image/su_yzrice.png", 15, 67},
        {13, "闽——福州鱼丸", ":/image/min_fzyw.jpg", 20, 23},
        {14, "浙——龙井虾仁", ":/image/zhe_ljxr.png", 38, 23},
        {15, "湘——湘西外婆菜", ":/image/xiang_xxwpc.jpg", 12, 50},
        {16, "徽——徽州臭鳜鱼", ":/image/hui_cjfish.png", 20,16},
        {17, "鲁——九转大肠", ":/image/lu_jzdc.jpg", 36, 20},
        {18, "川——宫保鸡丁", ":/image/chuan_gbchick.png", 34, 10},
        {19, "粤——蜜汁叉烧", ":/image/yue_mzcs.png", 20, 18},
        {20, "苏——清炖蟹粉狮子头", ":/image/su_szt.png", 36, 20}
    }*/;

    int productSize;

    // 记录当前购物车的商品信息
    QList<userSelectProduct> cartList;
    // 记录全部购物车订单信息
    QList<QList<userSelectProduct>> recordCartList;

    QList<Point> pointsPosition = {
        {420, 80, "商家"},  // 商家
        {460, 170, "校门"}, // 校门
        {200, 280, "文科楼"}, // 文科楼
        {560, 310, "行知楼"}, // 行知楼
        {340, 465, "一教"}, // 一教
        {40, 500, "球类馆"},  // 球类馆
        {100, 610, "D区宿舍"}, // D区宿舍
        {396, 580, "科技楼"}, // 科技楼
        {586, 505, "三教"}, // 三教
        {760, 445, "C区宿舍"}, // C区宿舍
        {860, 558, "四创中心"}, // 四创中心
        {730, 770, "电子图书馆"}, // 电子图书馆
        {628, 645, "校医院"}, // 校医院
        {528, 940, "十一教"}, // 十一教
        {430, 745, "图书馆"}, // 图书馆
        {80, 840, "F区宿舍"}   // F区宿舍
    };


    Point startPoint = {420, 80};

    int numPoints = 16;
    int routes[16][16] = {
        {0, 623, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000},
        {623, 0, 658, 702, 780, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000},
        {5000, 658, 0, 5000, 5000, 596, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000},
        {5000, 702, 5000, 0, 322, 5000, 5000, 5000, 423, 254, 5000, 5000, 5000, 5000, 5000, 5000},
        {5000, 780, 5000, 322, 0, 536, 5000, 186, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000},
        {5000, 5000, 596, 5000, 536, 0, 650, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000},
        {5000, 5000, 5000, 5000, 5000, 650, 0, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 1500, 465},
        {5000, 5000, 5000, 5000, 186, 5000, 5000, 0, 103, 5000, 5000, 5000, 5000, 5000, 365, 5000},
        {5000, 5000, 5000, 423, 5000, 5000, 5000, 103, 0, 5000, 723, 5000, 120, 5000, 5000, 5000},
        {5000, 5000, 5000, 254, 5000, 5000, 5000, 5000, 5000, 0, 604, 5000, 5000, 5000, 5000, 5000},
        {5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 723, 604, 0, 308, 5000, 5000, 5000, 5000},
        {5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 308, 0, 465, 673, 5000, 5000},
        {5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 120, 5000, 5000, 465, 0, 5000, 5000, 5000},
        {5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 673, 5000, 0, 212, 1241},
        {5000, 5000, 5000, 5000, 5000, 5000, 1500, 365, 5000, 5000, 5000, 5000, 5000, 212, 0, 5000},
        {5000, 5000, 5000, 5000, 5000, 5000, 465, 5000, 5000, 5000, 5000, 5000, 5000, 1241, 5000, 0}
    };

    QMap<QString, Coordinate> addressToCoordinate = {
        {"校门", {460, 170}},
        {"文科楼", {200, 280}},
        {"行知楼", {560, 310}},
        {"一教", {340, 465}},
        {"球类馆", {40, 500}},
        {"D区宿舍", {100, 610}},
        {"科技楼", {396, 580}},
        {"三教", {586, 505}},
        {"C区宿舍", {760, 445}},
        {"四创中心", {860, 558}},
        {"电子图书馆", {730, 770}},
        {"校医院", {628, 645}},
        {"十一教", {528, 940}},
        {"图书馆", {430, 745}},
        {"F区宿舍", {80, 840}}
    };

    QMap<QString, int> addressToIndex = {
        {"校门", 1},
        {"文科楼", 2},
        {"行知楼", 3},
        {"一教", 4},
        {"球类馆", 5},
        {"D区宿舍", 6},
        {"科技楼", 7},
        {"三教", 8},
        {"C区宿舍", 9},
        {"四创中心", 10},
        {"电子图书馆", 11},
        {"校医院", 12},
        {"十一教", 13},
        {"图书馆", 14},
        {"F区宿舍", 15}
    };

    QMap<LineTwoPoints, QGraphicsLineItem *> pointFindLineMap;


    // 记录购物的商品数据
    QList<userSelectProduct> updateCartList(const Product &product, int count);

    // 存储订单信息
    QList<Order> orderMsg;

    QList<Order> recentOrderMsg = {
        // {
        //     "20240701120032", "宋一", "男", "12076587349", "一教", "2024-7-1 12:00:32",
        //     {
        //         {"鲁——糖醋黄河鲤鱼", ":/image/lu_tcfish.jpeg", 1, 36}
        //     },
        //     36, // 订单金额
        //     false // 是否可以删除
        // },
        // {
        //     "20240701132436", "宋二", "女", "17896543876", "四创中心", "2024-7-1 13:24:36",
        //     {
        //         {"粤——蜜汁叉烧", ":/image/yue_mzcs.png", 1, 20}
        //     },
        //     40,
        //     false
        // },
        // {
        //     "20240701142022", "宋三", "男", "13098234568", "图书馆", "2024-7-1 14:20:22",
        //     {
        //         {"川——麻婆豆腐", ":/image/chuan_mpdoufu.jpg", 1, 15}
        //     },
        //     15,
        //     false
        // },
        // {
        //     "20240701150230", "宋四", "男", "19856783456", "文科楼", "2024-7-1 15:02:30",
        //     {
        //         {"川——宫保鸡丁", ":/image/chuan_gbchick.png", 1, 34}
        //     },
        //     34,
        //     false
        // },
        // {
        //     "20240710164010", "宋五", "女", "10023458765", "科技楼", "2024-7-1 16:40:10",
        //     {
        //         {"鲁-葱爆海参", ":/image/lu_cbhaishen.jpg", 1, 38}
        //     },
        //     38,
        //     false
        // }
    };


    // 当前订单金额
    double currentSum;

    // 将当前订单currentOrder与定时器绑定
    QMap<int, QTimer*> orderTimers;
    // 保存每个订单的倒计时数据
    QMap<int, int> countdownMap;

    // 将订单列表的item与Order绑定
    QMap<QListWidgetItem*, int> itemOrder;


    QMap<QSpinBox *, double> spinBoxPrices;
    QMap<QSpinBox *, int> spinBoxPreviousValues; // 保存每个 QSpinBox 的前一个值
    // 创建一个 QMap 用于存储 QSpinBox 和对应的商品信息
    QMap<QSpinBox *, Product> spinBoxProducts;
    // 将QSpinBox和saleCount相关联
    QMap<QSpinBox *, int> spinboxSalesCountMap;

    // 枚举页面
    enum order_header {order_id, order_name, order_date};
    enum pageIndex{userPage = 0, orderPage, billPage, mapPage, dishesEdit_page, editDishes_page,
                     addDishes_page, orderManagement_page, dishesSummary_page};

    int currentOrder = 0;
    int recentOrderMsgSize = 0;

    int currentOrderDisplayed = -1; // 当前显示的订单ID

    int currentRow = 0;
    int currentCol = 0;
    const int columnCount = 4; // 每行展示的商品数量

    int editCurrentRow = 0;
    int editCurrentCol = 0;
    const int editColumnCount = 4;

    // 添加订单按钮
    QPushButton *btn_add_order;

    // 总共选择的商品数量
    int totalDishesCount = 0;
    // 商品总金额
    double totalPrice = 0.0;

    // 在编辑菜单界面，将每个按钮与当前的item绑定
    QMap<QPushButton*, Product> buttonProductMap;

    QGraphicsScene *scene;

    Product currentEditingProduct;

    QMap<QWidget*, Product> productWidgetMap;
    QMap<QPushButton*, QWidget*> buttonWidgetMap;
    QMap<int, QWidget*> productIdWidgetMap;
    QMap<int, QWidget*> orderIdWidgetMap;
    // 记录当前正在编辑的按钮
    QPushButton *currentEditingButton = nullptr;

    // 过滤后的数据
    QList<Order> filtterdOrderMsg;
    QList<Product> filteredProducts;



    void updateOrderCountdownLabel(int orderId);

    void addOrder(const QString &orderId, const QString &orderName, const QString &orderDate);
    void connectSlot();
    void graph_dishes_list();

    // 点击支付按钮后初始化页面
    void clearContainer();

    // 选菜界面
    void graph_menu();

    // 订单界面用户选择的菜品展示
    void graph_bill_list();

    void renderCartList(QScrollArea *cartWidget, QList<userSelectProduct> cartList);


    void startOrderTime(int currentOrde);

    // 绘制地图路线函数
    void graph_map();

    // 绘制管理菜品列表渲染函数
    void graph_editDishes_list();

    // 槽函数，点击修改菜品按钮的函数
    void onProductButtonClicked();

    void addProductItem(const Product &product, QGridLayout *gridLayout);

    void saveEditedProduct();

    void updateProductItem(const Product &product);

    void addEditProductItem(const Product &product, QGridLayout *gridLayout);

    void deleteProductItem();

    void refreshEditGridLayout(QGridLayout *gridLayout, int &currentCol, int &currentRow);

    void loadDataIntoTable();

    void reloadDataIntoTable(const QList<Order>& sortedOrderMsg);

    void initializeHistoricalOrders();

    void sortOrders(int column, bool ascending);

    void setupTable();

    void quickSort(QList<Order> &list, int left, int right, int column, bool ascending);

    bool compare(const Order &a, const Order &b, int column);

    void quickDishesSort(QList<Product> &list, int left, int right, int column, bool ascending);

    void reloadDishesDataIntoTable(const QList<Product>& sortedDishesMsg);

    void sortDishes(int column, bool ascending);

    void setupDishesTable();

    bool compareDishes(const Product &a, const Product &b, int column);

    void render_map_point(QPen pen);

    void render_map_routes(QPen pen);

    std::vector<int> Dijkstra(int start, int end, int numPoints, int routes[16][16]);

    void highlight_shortest_path(const std::vector<int>& shortestPath);

    void calculate_and_render_shortest_path(int endIndex);

    void on_userSelectEndPoint(int endIndex);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_act_add_order_triggered();

    void on_btn_change_avator_clicked();

    void on_btn_clear_carts_clicked();

    void on_btn_back_clicked();

    void on_act_delete_order_triggered(bool checked);

    void on_btn_checkAll_dishes_clicked();


    void on_btn_addImage_clicked();

    void on_act_add_dishes_triggered();

    void on_btn_editDishes_updateImage_clicked();

    void on_btn_orderManagement_clicked();

    void payBill();

    void on_act_summaryDishes_triggered();

    void on_act_orderList_visible_triggered(bool checked);

    void on_btn_search_orderBuyer_clicked();


    void on_btn_searchDishes_clicked();

    void on_btn_admin_edit_clicked();

private:
    Ui::MainWindow *ui;


};
#endif // MAINWINDOW_H
