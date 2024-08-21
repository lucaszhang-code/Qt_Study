/****************************************************************************
** Meta object code from reading C++ file 'ElaAppBarPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ElaWidgetTools-1.2.0/src/private/ElaAppBarPrivate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaAppBarPrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaAppBarPrivate_t {
    uint offsetsAndSizes[12];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaAppBarPrivate_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaAppBarPrivate_t qt_meta_stringdata_ElaAppBarPrivate = {
    {
        QT_MOC_LITERAL(0, 16),  // "ElaAppBarPrivate"
        QT_MOC_LITERAL(17, 18),  // "onMinButtonClicked"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 18),  // "onMaxButtonClicked"
        QT_MOC_LITERAL(56, 20),  // "onCloseButtonClicked"
        QT_MOC_LITERAL(77, 22)   // "onStayTopButtonClicked"
    },
    "ElaAppBarPrivate\0onMinButtonClicked\0"
    "\0onMaxButtonClicked\0onCloseButtonClicked\0"
    "onStayTopButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaAppBarPrivate[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x0a,    1 /* Public */,
       3,    0,   39,    2, 0x0a,    2 /* Public */,
       4,    0,   40,    2, 0x0a,    3 /* Public */,
       5,    0,   41,    2, 0x0a,    4 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ElaAppBarPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaAppBarPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onMinButtonClicked(); break;
        case 1: _t->onMaxButtonClicked(); break;
        case 2: _t->onCloseButtonClicked(); break;
        case 3: _t->onStayTopButtonClicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject ElaAppBarPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ElaAppBarPrivate.offsetsAndSizes,
    qt_meta_data_ElaAppBarPrivate,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaAppBarPrivate_t
, QtPrivate::TypeAndForceComplete<ElaAppBarPrivate, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ElaAppBarPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaAppBarPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaAppBarPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaAppBarPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
