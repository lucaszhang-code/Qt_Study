/****************************************************************************
** Meta object code from reading C++ file 'ElaPromotionCardPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ElaWidgetTools-1.2.0/src/private/ElaPromotionCardPrivate.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaPromotionCardPrivate.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSElaPromotionCardPrivateENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSElaPromotionCardPrivateENDCLASS = QtMocHelpers::stringData(
    "ElaPromotionCardPrivate",
    "pPressRadiusChanged",
    "",
    "pHoverOpacityChanged",
    "pPressOpacityChanged",
    "pPressRadius",
    "pHoverOpacity",
    "pPressOpacity"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSElaPromotionCardPrivateENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[24];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[21];
    char stringdata5[13];
    char stringdata6[14];
    char stringdata7[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSElaPromotionCardPrivateENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSElaPromotionCardPrivateENDCLASS_t qt_meta_stringdata_CLASSElaPromotionCardPrivateENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "ElaPromotionCardPrivate"
        QT_MOC_LITERAL(24, 19),  // "pPressRadiusChanged"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 20),  // "pHoverOpacityChanged"
        QT_MOC_LITERAL(66, 20),  // "pPressOpacityChanged"
        QT_MOC_LITERAL(87, 12),  // "pPressRadius"
        QT_MOC_LITERAL(100, 13),  // "pHoverOpacity"
        QT_MOC_LITERAL(114, 13)   // "pPressOpacity"
    },
    "ElaPromotionCardPrivate",
    "pPressRadiusChanged",
    "",
    "pHoverOpacityChanged",
    "pPressOpacityChanged",
    "pPressRadius",
    "pHoverOpacity",
    "pPressOpacity"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSElaPromotionCardPrivateENDCLASS[] = {

 // content:
      12,       // revision
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
       5, QMetaType::QReal, 0x00015003, uint(0), 0,
       6, QMetaType::QReal, 0x00015003, uint(1), 0,
       7, QMetaType::QReal, 0x00015003, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ElaPromotionCardPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSElaPromotionCardPrivateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSElaPromotionCardPrivateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSElaPromotionCardPrivateENDCLASS_t,
        // property 'pPressRadius'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'pHoverOpacity'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'pPressOpacity'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ElaPromotionCardPrivate, std::true_type>,
        // method 'pPressRadiusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pHoverOpacityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pPressOpacityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ElaPromotionCardPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaPromotionCardPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pPressRadiusChanged(); break;
        case 1: _t->pHoverOpacityChanged(); break;
        case 2: _t->pPressOpacityChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaPromotionCardPrivate::*)();
            if (_t _q_method = &ElaPromotionCardPrivate::pPressRadiusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaPromotionCardPrivate::*)();
            if (_t _q_method = &ElaPromotionCardPrivate::pHoverOpacityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaPromotionCardPrivate::*)();
            if (_t _q_method = &ElaPromotionCardPrivate::pPressOpacityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaPromotionCardPrivate *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->_pPressRadius; break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->_pHoverOpacity; break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->_pPressOpacity; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaPromotionCardPrivate *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_pPressRadius != *reinterpret_cast< qreal*>(_v)) {
                _t->_pPressRadius = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pPressRadiusChanged();
            }
            break;
        case 1:
            if (_t->_pHoverOpacity != *reinterpret_cast< qreal*>(_v)) {
                _t->_pHoverOpacity = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pHoverOpacityChanged();
            }
            break;
        case 2:
            if (_t->_pPressOpacity != *reinterpret_cast< qreal*>(_v)) {
                _t->_pPressOpacity = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pPressOpacityChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *ElaPromotionCardPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaPromotionCardPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSElaPromotionCardPrivateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaPromotionCardPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ElaPromotionCardPrivate::pPressRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaPromotionCardPrivate::pHoverOpacityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaPromotionCardPrivate::pPressOpacityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
