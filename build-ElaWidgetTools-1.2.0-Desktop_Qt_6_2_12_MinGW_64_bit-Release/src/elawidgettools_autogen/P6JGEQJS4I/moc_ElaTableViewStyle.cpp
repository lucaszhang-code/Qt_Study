/****************************************************************************
** Meta object code from reading C++ file 'ElaTableViewStyle.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ElaWidgetTools-1.2.0/src/DeveloperComponents/ElaTableViewStyle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaTableViewStyle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaTableViewStyle_t {
    uint offsetsAndSizes[10];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaTableViewStyle_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaTableViewStyle_t qt_meta_stringdata_ElaTableViewStyle = {
    {
        QT_MOC_LITERAL(0, 17),  // "ElaTableViewStyle"
        QT_MOC_LITERAL(18, 14),  // "onThemeChanged"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 23),  // "ElaThemeType::ThemeMode"
        QT_MOC_LITERAL(58, 9)   // "themeMode"
    },
    "ElaTableViewStyle\0onThemeChanged\0\0"
    "ElaThemeType::ThemeMode\0themeMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaTableViewStyle[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void ElaTableViewStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaTableViewStyle *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onThemeChanged((*reinterpret_cast< std::add_pointer_t<ElaThemeType::ThemeMode>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ElaTableViewStyle::staticMetaObject = { {
    QMetaObject::SuperData::link<QProxyStyle::staticMetaObject>(),
    qt_meta_stringdata_ElaTableViewStyle.offsetsAndSizes,
    qt_meta_data_ElaTableViewStyle,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaTableViewStyle_t
, QtPrivate::TypeAndForceComplete<ElaTableViewStyle, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ElaThemeType::ThemeMode, std::false_type>


>,
    nullptr
} };


const QMetaObject *ElaTableViewStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaTableViewStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaTableViewStyle.stringdata0))
        return static_cast<void*>(this);
    return QProxyStyle::qt_metacast(_clname);
}

int ElaTableViewStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProxyStyle::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
