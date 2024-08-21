/****************************************************************************
** Meta object code from reading C++ file 'ElaEventBus.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ElaWidgetTools-1.2.0/src/include/ElaEventBus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaEventBus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaEvent_t {
    uint offsetsAndSizes[18];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaEvent_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaEvent_t qt_meta_stringdata_ElaEvent = {
    {
        QT_MOC_LITERAL(0, 8),  // "ElaEvent"
        QT_MOC_LITERAL(9, 17),  // "pEventNameChanged"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 20),  // "pFunctionNameChanged"
        QT_MOC_LITERAL(49, 22),  // "pConnectionTypeChanged"
        QT_MOC_LITERAL(72, 10),  // "pEventName"
        QT_MOC_LITERAL(83, 13),  // "pFunctionName"
        QT_MOC_LITERAL(97, 15),  // "pConnectionType"
        QT_MOC_LITERAL(113, 18)   // "Qt::ConnectionType"
    },
    "ElaEvent\0pEventNameChanged\0\0"
    "pFunctionNameChanged\0pConnectionTypeChanged\0"
    "pEventName\0pFunctionName\0pConnectionType\0"
    "Qt::ConnectionType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaEvent[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   35, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    4 /* Public */,
       3,    0,   33,    2, 0x06,    5 /* Public */,
       4,    0,   34,    2, 0x06,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00015003, uint(0), 0,
       6, QMetaType::QString, 0x00015003, uint(1), 0,
       7, 0x80000000 | 8, 0x0001500b, uint(2), 0,

       0        // eod
};

void ElaEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaEvent *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pEventNameChanged(); break;
        case 1: _t->pFunctionNameChanged(); break;
        case 2: _t->pConnectionTypeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaEvent::*)();
            if (_t _q_method = &ElaEvent::pEventNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaEvent::*)();
            if (_t _q_method = &ElaEvent::pFunctionNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaEvent::*)();
            if (_t _q_method = &ElaEvent::pConnectionTypeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaEvent *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getEventName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getFunctionName(); break;
        case 2: *reinterpret_cast< Qt::ConnectionType*>(_v) = _t->getConnectionType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaEvent *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEventName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFunctionName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setConnectionType(*reinterpret_cast< Qt::ConnectionType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

const QMetaObject ElaEvent::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ElaEvent.offsetsAndSizes,
    qt_meta_data_ElaEvent,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaEvent_t
, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<Qt::ConnectionType, std::true_type>, QtPrivate::TypeAndForceComplete<ElaEvent, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *ElaEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ElaEvent::pEventNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaEvent::pFunctionNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaEvent::pConnectionTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_ElaEventBus_t {
    uint offsetsAndSizes[2];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaEventBus_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaEventBus_t qt_meta_stringdata_ElaEventBus = {
    {
        QT_MOC_LITERAL(0, 11)   // "ElaEventBus"
    },
    "ElaEventBus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaEventBus[] = {

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

void ElaEventBus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject ElaEventBus::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ElaEventBus.offsetsAndSizes,
    qt_meta_data_ElaEventBus,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaEventBus_t
, QtPrivate::TypeAndForceComplete<ElaEventBus, std::true_type>



>,
    nullptr
} };


const QMetaObject *ElaEventBus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaEventBus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaEventBus.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaEventBus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
