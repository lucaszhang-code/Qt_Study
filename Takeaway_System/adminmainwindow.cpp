#include "adminmainwindow.h"
#include "ui_adminmainwindow.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
#include <QDir>
#include <QList>
#include <QMessageBox>


AdminMainWindow::AdminMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AdminMainWindow)
{
    ui->setupUi(this);

    QString appDir = QDir::currentPath();

    storeMsg = loadStoresFromJson(appDir + "/data/stores.json");
    initListWidget(); // 初始化列表

    complainMsg = loadComplainFromJson(appDir + "/data/complains.json");
    initComplainList(); // 初始化投诉列表

    ui->stackedWidget->setCurrentIndex(page_verifyLicence);

    QPixmap avator(":/image/testImage.jpg");
    avator = avator.scaled(ui->avatar_frame->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->avatar_frame->setPixmap(avator);


    connect(ui->listWidget, &QListWidget::itemClicked, [this](QListWidgetItem *item){
        QListWidget *listWidget = item->listWidget();
        QListWidgetItem *currentItem = listWidget->currentItem();
        storeRow = listWidget->currentRow();

        ui->stackedWidget->setCurrentIndex(page_verifyLicence);
        ui->label_storeMain->setText(storeMsg[storeRow].storeMain);
        ui->label_storeKind->setText(storeMsg[storeRow].storeKind);
        ui->label_storeName->setText(storeMsg[storeRow].name);
        ui->label_storeIdNum->setText(storeMsg[storeRow].idNum);
        ui->label_storeBankCard->setText(storeMsg[storeRow].bankCard);
        ui->label_isPass->setText(storeMsg[storeRow].isPass);
        QPixmap pix(storeMsg[storeRow].licence);
        pix = pix.scaled(ui->label_licence->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
        ui->label_licence->setPixmap(pix);

        // 审核是否通过
        connect(ui->btn_licence_access, &QPushButton::clicked, [this](){
            if(!storeMsg[storeRow].auditStatus){
                storeMsg[storeRow].auditStatus = true;
                ui->label_isPass->setText("通过");
                storeMsg[storeRow].isPass = "通过";
                ui->listWidget->clear();
                initListWidget();
            }
        });

        connect(ui->btn_licence_refuse, &QPushButton::clicked, [this](){
            if(!storeMsg[storeRow].auditStatus){
                storeMsg[storeRow].auditStatus = true;
                ui->label_isPass->setText("不通过");
                storeMsg[storeRow].isPass = "不通过";
                ui->listWidget->clear();
                initListWidget();
            }
        });
    });

    // 点击投诉列表
    connect(ui->complainList, &QListWidget::itemClicked, [this](QListWidgetItem *item){
        QListWidget *listComplain = item->listWidget();
        QListWidgetItem *currentItem = listComplain->currentItem();
        complainRow = listComplain->currentRow();

        ui->label_orderId->setText(complainMsg[complainRow].id);
        ui->text_complainText->setText(complainMsg[complainRow].complainText);
        QPixmap pix(complainMsg[complainRow].complainImage);
        pix = pix.scaled(ui->label_complainImage->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
        ui->label_complainImage->setPixmap(pix);
        ui->text_anwser->setText(complainMsg[complainRow].answer);

        // 平台回复信息保存
        connect(ui->btn_saveAnswer, &QPushButton::clicked, [this]() {
            QString anwser = ui->text_anwser->toPlainText();

            if(!complainMsg[complainRow].processingStatus) {
                complainMsg[complainRow].answer = anwser;
                complainMsg[complainRow].processingStatus = true;
                QMessageBox::information(this, "提示", "保存成功");
                ui->complainList->clear();
                initComplainList();
            }
        });
    });
}

// 从文件中读取审核数据
QList<Store> AdminMainWindow::loadStoresFromJson(const QString &filePath) {
    QList<Store> storeMsg;
    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly)) {
        qWarning("Couldn't open stores file.");
        return storeMsg;
    }

    QByteArray jsonData = file.readAll();


    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);
    QJsonArray jsonArray = jsonDoc.array();

    for (const QJsonValue &value : jsonArray) {
        QJsonObject jsonObj = value.toObject();
        Store store;
        store.id = jsonObj["id"].toString();
        store.storeMain = jsonObj["storeMain"].toString();
        store.storeKind = jsonObj["storeKind"].toString();
        store.name = jsonObj["name"].toString();
        store.idNum = jsonObj["idNum"].toString();
        store.bankCard = jsonObj["bankCard"].toString();
        store.licence = jsonObj["licence"].toString();
        store.auditStatus = jsonObj["auditStatus"].toBool();
        store.isPass = jsonObj["isPass"].toString();
        storeMsg.append(store);

    }
    file.close();
    return storeMsg;
}

// 从文件中读取审核数据
QList<Complain> AdminMainWindow::loadComplainFromJson(const QString &filePath) {
    QList<Complain> complainMsg;
    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly)) {
        qWarning("Couldn't open stores file.");
        return complainMsg;
    }

    QByteArray jsonData = file.readAll();


    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);
    QJsonArray jsonArray = jsonDoc.array();

    for (const QJsonValue &value : jsonArray) {
        QJsonObject jsonObj = value.toObject();
        Complain complain;
        complain.complainId = jsonObj["complainId"].toString();
        complain.id = jsonObj["id"].toString();
        complain.complainText = jsonObj["complainText"].toString();
        complain.complainImage = jsonObj["complainImage"].toString();
        complain.answer = jsonObj["answer"].toString();
        complain.processingStatus = jsonObj["processingStatus"].toBool();
        complainMsg.append(complain);
    }
    file.close();
    return complainMsg;
}


// 初始化列表
void AdminMainWindow::initListWidget(){
    for(Store &store : storeMsg){
        addStoreList(store.id, store.auditStatus);
    }
}

// 待审核列表添加事项
void AdminMainWindow::addStoreList(QString id, bool status) {
    QString status_str = status ? "已审核" : "未审核";
    QListWidgetItem* item = new QListWidgetItem();
    item->setText(QString("%1\t%2").arg(id).arg(status_str));
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
    item->setCheckState(Qt::Checked);
    ui->listWidget->addItem(item);
}

// 初始化投诉列表
void AdminMainWindow::initComplainList(){
    for(Complain &complain : complainMsg){
        addComplainList(complain.id, complain.processingStatus);
    }
}

// 待处理投诉事项列表
void AdminMainWindow::addComplainList(QString id, bool status){
    QString status_str = status ? "已审核" : "未审核";
    QListWidgetItem* item = new QListWidgetItem();
    item->setText(QString("%1\t%2").arg(id).arg(status_str));
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
    item->setCheckState(Qt::Checked);
    ui->complainList->addItem(item);
}


AdminMainWindow::~AdminMainWindow()
{
    delete ui;
}

void AdminMainWindow::on_act_account_setting_triggered()
{
    ui->stackedWidget->setCurrentIndex(page_admin);
}

void AdminMainWindow::on_act_qualification_review_triggered()
{
    ui->stackedWidget->setCurrentIndex(page_verifyLicence);
}


void AdminMainWindow::on_act_complaint_handing_triggered()
{
    ui->stackedWidget->setCurrentIndex(page_complain);
}

