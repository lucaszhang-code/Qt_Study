/****************************************************************************
** Meta object code from reading C++ file 'ElaPopularCardPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ElaWidgetTools-1.2.0/src/private/ElaPopularCardPrivate.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaPopularCardPrivate.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSElaPopularCardPrivateENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSElaPopularCardPrivateENDCLASS = QtMocHelpers::stringData(
    "ElaPopularCardPrivate",
    "pHoverYOffsetChanged",
    "",
    "pHoverOpacityChanged",
    "pHoverYOffset",
    "pHoverOpacity"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSElaPopularCardPrivateENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[22];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[14];
    char stringdata5[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSElaPopularCardPrivateENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSElaPopularCardPrivateENDCLASS_t qt_meta_stringdata_CLASSElaPopularCardPrivateENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "ElaPopularCardPrivate"
        QT_MOC_LITERAL(22, 20),  // "pHoverYOffsetChanged"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 20),  // "pHoverOpacityChanged"
        QT_MOC_LITERAL(65, 13),  // "pHoverYOffset"
        QT_MOC_LITERAL(79, 13)   // "pHoverOpacity"
    },
    "ElaPopularCardPrivate",
    "pHoverYOffsetChanged",
    "",
    "pHoverOpacityChanged",
    "pHoverYOffset",
    "pHoverOpacity"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSElaPopularCardPrivateENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    3 /* Public */,
       3,    0,   27,    2, 0x06,    4 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QReal, 0x00015003, uint(0), 0,
       5, QMetaType::QReal, 0x00015003, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ElaPopularCardPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSElaPopularCardPrivateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSElaPopularCardPrivateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSElaPopularCardPrivateENDCLASS_t,
        // property 'pHoverYOffset'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'pHoverOpacity'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ElaPopularCardPrivate, std::true_type>,
        // method 'pHoverYOffsetChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pHoverOpacityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ElaPopularCardPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaPopularCardPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pHoverYOffsetChanged(); break;
        case 1: _t->pHoverOpacityChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaPopularCardPrivate::*)();
            if (_t _q_method = &ElaPopularCardPrivate::pHoverYOffsetChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaPopularCardPrivate::*)();
            if (_t _q_method = &ElaPopularCardPrivate::pHoverOpacityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaPopularCardPrivate *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->_pHoverYOffset; break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->_pHoverOpacity; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaPopularCardPrivate *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_pHoverYOffset != *reinterpret_cast< qreal*>(_v)) {
                _t->_pHoverYOffset = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pHoverYOffsetChanged();
            }
            break;
        case 1:
            if (_t->_pHoverOpacity != *reinterpret_cast< qreal*>(_v)) {
                _t->_pHoverOpacity = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pHoverOpacityChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *ElaPopularCardPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaPopularCardPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSElaPopularCardPrivateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaPopularCardPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ElaPopularCardPrivate::pHoverYOffsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaPopularCardPrivate::pHoverOpacityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
