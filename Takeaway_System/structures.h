#ifndef STRUCTURES_H
#define STRUCTURES_H
#include <QString>
#include <QList>

// 商品结构
struct Product {
    int id;
    QString name;
    QString imagePath;
    double price;
    int salesCount;
};

// 用户选择的商品结构
struct userSelectProduct{
    QString name;
    QString imagePath;
    int count;
    // 选择的此项商品总价
    double subSum;
};

// 订单信息结构体
struct Order {
    QString order_id;   // 订单编号
    QString order_name; //收件人姓名
    QString order_gender;   // 收件人性别
    QString order_contactInfo;  // 收件人联系方式
    QString order_address;  // 订单地址
    QString order_date; // 订单时间
    QList<userSelectProduct> cartList; // 用户当前的购物车信息
    double orderSum;    // 订单金额
    bool canDelete = true;
};

struct Point
{
    int x;
    int y;
    QString name;
};

struct Coordinate
{
    int x;
    int y;
};

struct LineTwoPoints
{
    int x1; // 第一个点的x坐标
    int y1; // 第一个点的y坐标
    int x2; // 第二个点的x坐标
    int y2; // 第二个点的y坐标

    bool operator<(const LineTwoPoints& other) const {
        return std::tie(x1, y1, x2, y2) < std::tie(other.x1, other.y1, other.x2, other.y2);
    }
};

struct Store
{
    QString id;
    QString storeMain; // 店铺主体（企业/个体）
    QString storeKind; // 店铺类型（餐饮/专营）
    QString name; // 营业者姓名
    QString idNum;  // 营业者身份证号
    QString bankCard;   // 营业者银行卡号
    QString licence;    // 营业执照，（路径: ":/image/图片名称"）
    bool auditStatus;   // 审核状态（true/false）
    QString isPass; // 是否通过
};

// 投诉结构体
struct Complain
{
    QString complainId; // 投诉编号
    QString id; // 订单编号
    QString complainText;   // 投诉信息
    QString complainImage;  // 投诉图片
    QString answer; // 平台回复
    bool processingStatus;  // 处理状态
};


#endif // STRUCTURES_H
