QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Takeaway_System
TEMPLATE = app

SOURCES += main.cpp \
           adminmainwindow.cpp \
           mainwindow.cpp \
           usermainwindow.cpp \
           login_dialog.cpp

HEADERS += mainwindow.h \
           adminmainwindow.h \
           usermainwindow.h \
           login_dialog.h \
           structures.h

FORMS += mainwindow.ui \
         adminmainwindow.ui \
         usermainwindow.ui \
         login_dialog.ui

RESOURCES += res.qrc

# 指定 JSON 文件的路径
JSON_FILES += $$PWD/data/products.json \
              $$PWD/data/orders.json

# 定义一个新的目标来复制 JSON 文件
QMAKE_EXTRA_TARGETS += copy_json_files

# 使用平台特定的复制命令
macx|unix {
    copy_json_files.commands = mkdir -p $$OUT_PWD/data && cp $$JSON_FILES $$OUT_PWD/data
} else:win32 {
    copy_json_files.commands = if not exist $$OUT_PWD\data mkdir $$OUT_PWD\data & copy $$JSON_FILES $$OUT_PWD\data
}

# 确保在构建目标之前复制 JSON 文件
PRE_TARGETDEPS += $$JSON_FILES


