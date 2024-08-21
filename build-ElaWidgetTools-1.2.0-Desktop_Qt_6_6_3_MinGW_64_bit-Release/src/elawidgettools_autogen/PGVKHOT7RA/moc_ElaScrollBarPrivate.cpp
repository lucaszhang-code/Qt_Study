/****************************************************************************
** Meta object code from reading C++ file 'ElaScrollBarPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ElaWidgetTools-1.2.0/src/private/ElaScrollBarPrivate.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaScrollBarPrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSElaScrollBarPrivateENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSElaScrollBarPrivateENDCLASS = QtMocHelpers::stringData(
    "ElaScrollBarPrivate",
    "pTargetMaximumChanged",
    "",
    "onRangeChanged",
    "min",
    "max",
    "pTargetMaximum"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSElaScrollBarPrivateENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[20];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[4];
    char stringdata5[4];
    char stringdata6[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSElaScrollBarPrivateENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSElaScrollBarPrivateENDCLASS_t qt_meta_stringdata_CLASSElaScrollBarPrivateENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "ElaScrollBarPrivate"
        QT_MOC_LITERAL(20, 21),  // "pTargetMaximumChanged"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 14),  // "onRangeChanged"
        QT_MOC_LITERAL(58, 3),  // "min"
        QT_MOC_LITERAL(62, 3),  // "max"
        QT_MOC_LITERAL(66, 14)   // "pTargetMaximum"
    },
    "ElaScrollBarPrivate",
    "pTargetMaximumChanged",
    "",
    "onRangeChanged",
    "min",
    "max",
    "pTargetMaximum"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSElaScrollBarPrivateENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    2,   27,    2, 0x0a,    3 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,

 // properties: name, type, flags
       6, QMetaType::Int, 0x00015003, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ElaScrollBarPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSElaScrollBarPrivateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSElaScrollBarPrivateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSElaScrollBarPrivateENDCLASS_t,
        // property 'pTargetMaximum'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ElaScrollBarPrivate, std::true_type>,
        // method 'pTargetMaximumChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRangeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void ElaScrollBarPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaScrollBarPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pTargetMaximumChanged(); break;
        case 1: _t->onRangeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaScrollBarPrivate::*)();
            if (_t _q_method = &ElaScrollBarPrivate::pTargetMaximumChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaScrollBarPrivate *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->_pTargetMaximum; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaScrollBarPrivate *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_pTargetMaximum != *reinterpret_cast< int*>(_v)) {
                _t->_pTargetMaximum = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->pTargetMaximumChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ElaScrollBarPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaScrollBarPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSElaScrollBarPrivateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaScrollBarPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ElaScrollBarPrivate::pTargetMaximumChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
