/****************************************************************************
** Meta object code from reading C++ file 'ElaMessageBarPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ElaWidgetTools-1.2.0/src/private/ElaMessageBarPrivate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaMessageBarPrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaMessageBarManager_t {
    uint offsetsAndSizes[2];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaMessageBarManager_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaMessageBarManager_t qt_meta_stringdata_ElaMessageBarManager = {
    {
        QT_MOC_LITERAL(0, 20)   // "ElaMessageBarManager"
    },
    "ElaMessageBarManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaMessageBarManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ElaMessageBarManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject ElaMessageBarManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ElaMessageBarManager.offsetsAndSizes,
    qt_meta_data_ElaMessageBarManager,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaMessageBarManager_t
, QtPrivate::TypeAndForceComplete<ElaMessageBarManager, std::true_type>



>,
    nullptr
} };


const QMetaObject *ElaMessageBarManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaMessageBarManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaMessageBarManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaMessageBarManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ElaMessageBarPrivate_t {
    uint offsetsAndSizes[16];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaMessageBarPrivate_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaMessageBarPrivate_t qt_meta_stringdata_ElaMessageBarPrivate = {
    {
        QT_MOC_LITERAL(0, 20),  // "ElaMessageBarPrivate"
        QT_MOC_LITERAL(21, 20),  // "onCloseButtonClicked"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 20),  // "onOtherMessageBarEnd"
        QT_MOC_LITERAL(64, 9),  // "eventData"
        QT_MOC_LITERAL(74, 13),  // "messageBarEnd"
        QT_MOC_LITERAL(88, 17),  // "_messageBarCreate"
        QT_MOC_LITERAL(106, 11)   // "displayMsec"
    },
    "ElaMessageBarPrivate\0onCloseButtonClicked\0"
    "\0onOtherMessageBarEnd\0eventData\0"
    "messageBarEnd\0_messageBarCreate\0"
    "displayMsec"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaMessageBarPrivate[] = {

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

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   39,    2, 0x02,    2 /* Public */,
       5,    1,   42,    2, 0x02,    4 /* Public */,
       6,    1,   45,    2, 0x00,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QVariantMap,    4,
    QMetaType::Void, QMetaType::QVariantMap,    4,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void ElaMessageBarPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaMessageBarPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCloseButtonClicked(); break;
        case 1: _t->onOtherMessageBarEnd((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 2: _t->messageBarEnd((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 3: _t->_messageBarCreate((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ElaMessageBarPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ElaMessageBarPrivate.offsetsAndSizes,
    qt_meta_data_ElaMessageBarPrivate,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaMessageBarPrivate_t
, QtPrivate::TypeAndForceComplete<ElaMessageBarPrivate, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>

>,
    nullptr
} };


const QMetaObject *ElaMessageBarPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaMessageBarPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaMessageBarPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaMessageBarPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
