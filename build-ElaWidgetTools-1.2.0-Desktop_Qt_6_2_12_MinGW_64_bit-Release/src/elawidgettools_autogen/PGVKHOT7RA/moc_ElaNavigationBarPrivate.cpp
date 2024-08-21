/****************************************************************************
** Meta object code from reading C++ file 'ElaNavigationBarPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ElaWidgetTools-1.2.0/src/private/ElaNavigationBarPrivate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaNavigationBarPrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaNavigationBarPrivate_t {
    uint offsetsAndSizes[14];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaNavigationBarPrivate_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaNavigationBarPrivate_t qt_meta_stringdata_ElaNavigationBarPrivate = {
    {
        QT_MOC_LITERAL(0, 23),  // "ElaNavigationBarPrivate"
        QT_MOC_LITERAL(24, 14),  // "onThemeChanged"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 23),  // "ElaThemeType::ThemeMode"
        QT_MOC_LITERAL(64, 9),  // "themeMode"
        QT_MOC_LITERAL(74, 21),  // "onNavigationRouteBack"
        QT_MOC_LITERAL(96, 9)   // "routeData"
    },
    "ElaNavigationBarPrivate\0onThemeChanged\0"
    "\0ElaThemeType::ThemeMode\0themeMode\0"
    "onNavigationRouteBack\0routeData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaNavigationBarPrivate[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x0a,    1 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   29,    2, 0x02,    3 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // methods: parameters
    QMetaType::Void, QMetaType::QVariantMap,    6,

       0        // eod
};

void ElaNavigationBarPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaNavigationBarPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onThemeChanged((*reinterpret_cast< std::add_pointer_t<ElaThemeType::ThemeMode>>(_a[1]))); break;
        case 1: _t->onNavigationRouteBack((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ElaNavigationBarPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ElaNavigationBarPrivate.offsetsAndSizes,
    qt_meta_data_ElaNavigationBarPrivate,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaNavigationBarPrivate_t
, QtPrivate::TypeAndForceComplete<ElaNavigationBarPrivate, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ElaThemeType::ThemeMode, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>

>,
    nullptr
} };


const QMetaObject *ElaNavigationBarPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaNavigationBarPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaNavigationBarPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaNavigationBarPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
