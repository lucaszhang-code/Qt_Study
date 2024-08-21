/****************************************************************************
** Meta object code from reading C++ file 'ElaDxgiManagerPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ElaWidgetTools-1.2.0/src/private/ElaDxgiManagerPrivate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaDxgiManagerPrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaDxgiManagerPrivate_t {
    uint offsetsAndSizes[6];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaDxgiManagerPrivate_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaDxgiManagerPrivate_t qt_meta_stringdata_ElaDxgiManagerPrivate = {
    {
        QT_MOC_LITERAL(0, 21),  // "ElaDxgiManagerPrivate"
        QT_MOC_LITERAL(22, 10),  // "grabScreen"
        QT_MOC_LITERAL(33, 0)   // ""
    },
    "ElaDxgiManagerPrivate\0grabScreen\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaDxgiManagerPrivate[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x04,    1 /* Private */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void ElaDxgiManagerPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaDxgiManagerPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->grabScreen(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaDxgiManagerPrivate::*)();
            if (_t _q_method = &ElaDxgiManagerPrivate::grabScreen; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject ElaDxgiManagerPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ElaDxgiManagerPrivate.offsetsAndSizes,
    qt_meta_data_ElaDxgiManagerPrivate,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaDxgiManagerPrivate_t
, QtPrivate::TypeAndForceComplete<ElaDxgiManagerPrivate, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *ElaDxgiManagerPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaDxgiManagerPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaDxgiManagerPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaDxgiManagerPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ElaDxgiManagerPrivate::grabScreen()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ElaDxgiScreenPrivate_t {
    uint offsetsAndSizes[2];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaDxgiScreenPrivate_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaDxgiScreenPrivate_t qt_meta_stringdata_ElaDxgiScreenPrivate = {
    {
        QT_MOC_LITERAL(0, 20)   // "ElaDxgiScreenPrivate"
    },
    "ElaDxgiScreenPrivate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaDxgiScreenPrivate[] = {

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

void ElaDxgiScreenPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject ElaDxgiScreenPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ElaDxgiScreenPrivate.offsetsAndSizes,
    qt_meta_data_ElaDxgiScreenPrivate,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaDxgiScreenPrivate_t
, QtPrivate::TypeAndForceComplete<ElaDxgiScreenPrivate, std::true_type>



>,
    nullptr
} };


const QMetaObject *ElaDxgiScreenPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaDxgiScreenPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaDxgiScreenPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaDxgiScreenPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
