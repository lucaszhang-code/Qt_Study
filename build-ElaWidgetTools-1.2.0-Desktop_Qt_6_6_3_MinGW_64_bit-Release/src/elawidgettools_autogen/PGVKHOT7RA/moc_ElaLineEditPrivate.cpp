/****************************************************************************
** Meta object code from reading C++ file 'ElaLineEditPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ElaWidgetTools-1.2.0/src/private/ElaLineEditPrivate.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaLineEditPrivate.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSElaLineEditPrivateENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSElaLineEditPrivateENDCLASS = QtMocHelpers::stringData(
    "ElaLineEditPrivate",
    "pExpandMarkWidthChanged",
    "",
    "onThemeChanged",
    "ElaThemeType::ThemeMode",
    "themeMode",
    "onWMWindowClickedEvent",
    "data",
    "pExpandMarkWidth"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSElaLineEditPrivateENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[19];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[24];
    char stringdata5[10];
    char stringdata6[23];
    char stringdata7[5];
    char stringdata8[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSElaLineEditPrivateENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSElaLineEditPrivateENDCLASS_t qt_meta_stringdata_CLASSElaLineEditPrivateENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "ElaLineEditPrivate"
        QT_MOC_LITERAL(19, 23),  // "pExpandMarkWidthChanged"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 14),  // "onThemeChanged"
        QT_MOC_LITERAL(59, 23),  // "ElaThemeType::ThemeMode"
        QT_MOC_LITERAL(83, 9),  // "themeMode"
        QT_MOC_LITERAL(93, 22),  // "onWMWindowClickedEvent"
        QT_MOC_LITERAL(116, 4),  // "data"
        QT_MOC_LITERAL(121, 16)   // "pExpandMarkWidth"
    },
    "ElaLineEditPrivate",
    "pExpandMarkWidthChanged",
    "",
    "onThemeChanged",
    "ElaThemeType::ThemeMode",
    "themeMode",
    "onWMWindowClickedEvent",
    "data",
    "pExpandMarkWidth"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSElaLineEditPrivateENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   33,    2, 0x0a,    3 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   36,    2, 0x02,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

 // methods: parameters
    QMetaType::Void, QMetaType::QVariantMap,    7,

 // properties: name, type, flags
       8, QMetaType::QReal, 0x00015003, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ElaLineEditPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSElaLineEditPrivateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSElaLineEditPrivateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSElaLineEditPrivateENDCLASS_t,
        // property 'pExpandMarkWidth'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ElaLineEditPrivate, std::true_type>,
        // method 'pExpandMarkWidthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onThemeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ElaThemeType::ThemeMode, std::false_type>,
        // method 'onWMWindowClickedEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>
    >,
    nullptr
} };

void ElaLineEditPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaLineEditPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pExpandMarkWidthChanged(); break;
        case 1: _t->onThemeChanged((*reinterpret_cast< std::add_pointer_t<ElaThemeType::ThemeMode>>(_a[1]))); break;
        case 2: _t->onWMWindowClickedEvent((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaLineEditPrivate::*)();
            if (_t _q_method = &ElaLineEditPrivate::pExpandMarkWidthChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaLineEditPrivate *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->_pExpandMarkWidth; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaLineEditPrivate *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_pExpandMarkWidth != *reinterpret_cast< qreal*>(_v)) {
                _t->_pExpandMarkWidth = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pExpandMarkWidthChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ElaLineEditPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaLineEditPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSElaLineEditPrivateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaLineEditPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ElaLineEditPrivate::pExpandMarkWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
