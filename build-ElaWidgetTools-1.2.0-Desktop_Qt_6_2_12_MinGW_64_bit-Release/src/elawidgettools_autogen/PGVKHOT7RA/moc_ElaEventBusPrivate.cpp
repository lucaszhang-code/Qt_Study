/****************************************************************************
** Meta object code from reading C++ file 'ElaEventBusPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ElaWidgetTools-1.2.0/src/private/ElaEventBusPrivate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaEventBusPrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaEventPrivate_t {
    uint offsetsAndSizes[2];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaEventPrivate_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaEventPrivate_t qt_meta_stringdata_ElaEventPrivate = {
    {
        QT_MOC_LITERAL(0, 15)   // "ElaEventPrivate"
    },
    "ElaEventPrivate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaEventPrivate[] = {

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

void ElaEventPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject ElaEventPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ElaEventPrivate.offsetsAndSizes,
    qt_meta_data_ElaEventPrivate,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaEventPrivate_t
, QtPrivate::TypeAndForceComplete<ElaEventPrivate, std::true_type>



>,
    nullptr
} };


const QMetaObject *ElaEventPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaEventPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaEventPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaEventPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ElaEventBusPrivate_t {
    uint offsetsAndSizes[2];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaEventBusPrivate_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaEventBusPrivate_t qt_meta_stringdata_ElaEventBusPrivate = {
    {
        QT_MOC_LITERAL(0, 18)   // "ElaEventBusPrivate"
    },
    "ElaEventBusPrivate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaEventBusPrivate[] = {

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

void ElaEventBusPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject ElaEventBusPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ElaEventBusPrivate.offsetsAndSizes,
    qt_meta_data_ElaEventBusPrivate,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaEventBusPrivate_t
, QtPrivate::TypeAndForceComplete<ElaEventBusPrivate, std::true_type>



>,
    nullptr
} };


const QMetaObject *ElaEventBusPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaEventBusPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaEventBusPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaEventBusPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE