/****************************************************************************
** Meta object code from reading C++ file 'ElaMenuBar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ElaWidgetTools-1.2.0/src/include/ElaMenuBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaMenuBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaMenuBar_t {
    uint offsetsAndSizes[2];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaMenuBar_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaMenuBar_t qt_meta_stringdata_ElaMenuBar = {
    {
        QT_MOC_LITERAL(0, 10)   // "ElaMenuBar"
    },
    "ElaMenuBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaMenuBar[] = {

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

void ElaMenuBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject ElaMenuBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenuBar::staticMetaObject>(),
    qt_meta_stringdata_ElaMenuBar.offsetsAndSizes,
    qt_meta_data_ElaMenuBar,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaMenuBar_t
, QtPrivate::TypeAndForceComplete<ElaMenuBar, std::true_type>



>,
    nullptr
} };


const QMetaObject *ElaMenuBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaMenuBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaMenuBar.stringdata0))
        return static_cast<void*>(this);
    return QMenuBar::qt_metacast(_clname);
}

int ElaMenuBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenuBar::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
