/****************************************************************************
** Meta object code from reading C++ file 'ElaNavigationModel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ElaWidgetTools-1.2.0/src/DeveloperComponents/ElaNavigationModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaNavigationModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaNavigationModel_t {
    uint offsetsAndSizes[8];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaNavigationModel_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaNavigationModel_t qt_meta_stringdata_ElaNavigationModel = {
    {
        QT_MOC_LITERAL(0, 18),  // "ElaNavigationModel"
        QT_MOC_LITERAL(19, 20),  // "pSelectedNodeChanged"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 28)   // "pSelectedExpandedNodeChanged"
    },
    "ElaNavigationModel\0pSelectedNodeChanged\0"
    "\0pSelectedExpandedNodeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaNavigationModel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    1 /* Public */,
       3,    0,   27,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ElaNavigationModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaNavigationModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pSelectedNodeChanged(); break;
        case 1: _t->pSelectedExpandedNodeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaNavigationModel::*)();
            if (_t _q_method = &ElaNavigationModel::pSelectedNodeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaNavigationModel::*)();
            if (_t _q_method = &ElaNavigationModel::pSelectedExpandedNodeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject ElaNavigationModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_ElaNavigationModel.offsetsAndSizes,
    qt_meta_data_ElaNavigationModel,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaNavigationModel_t
, QtPrivate::TypeAndForceComplete<ElaNavigationModel, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *ElaNavigationModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaNavigationModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaNavigationModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int ElaNavigationModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ElaNavigationModel::pSelectedNodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaNavigationModel::pSelectedExpandedNodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
