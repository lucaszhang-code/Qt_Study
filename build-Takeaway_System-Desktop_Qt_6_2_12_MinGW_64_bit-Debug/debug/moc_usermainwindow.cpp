/****************************************************************************
** Meta object code from reading C++ file 'usermainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Takeaway_System/usermainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usermainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_userMainWindow_t {
    uint offsetsAndSizes[16];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_userMainWindow_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_userMainWindow_t qt_meta_stringdata_userMainWindow = {
    {
        QT_MOC_LITERAL(0, 14),  // "userMainWindow"
        QT_MOC_LITERAL(15, 26),  // "on_btn_clear_carts_clicked"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 19),  // "on_btn_back_clicked"
        QT_MOC_LITERAL(63, 29),  // "on_act_delete_order_triggered"
        QT_MOC_LITERAL(93, 7),  // "checked"
        QT_MOC_LITERAL(101, 34),  // "on_act_orderList_visible_trig..."
        QT_MOC_LITERAL(136, 25)   // "on_btn_admin_edit_clicked"
    },
    "userMainWindow\0on_btn_clear_carts_clicked\0"
    "\0on_btn_back_clicked\0on_act_delete_order_triggered\0"
    "checked\0on_act_orderList_visible_triggered\0"
    "on_btn_admin_edit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_userMainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    1,   46,    2, 0x08,    3 /* Private */,
       6,    1,   49,    2, 0x08,    5 /* Private */,
       7,    0,   52,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

       0        // eod
};

void userMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<userMainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btn_clear_carts_clicked(); break;
        case 1: _t->on_btn_back_clicked(); break;
        case 2: _t->on_act_delete_order_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->on_act_orderList_visible_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->on_btn_admin_edit_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject userMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_userMainWindow.offsetsAndSizes,
    qt_meta_data_userMainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_userMainWindow_t
, QtPrivate::TypeAndForceComplete<userMainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *userMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *userMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_userMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int userMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
