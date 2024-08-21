/****************************************************************************
** Meta object code from reading C++ file 'ElaMultiSelectComboBoxPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ElaWidgetTools-1.2.0/src/private/ElaMultiSelectComboBoxPrivate.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaMultiSelectComboBoxPrivate.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSElaMultiSelectComboBoxPrivateENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSElaMultiSelectComboBoxPrivateENDCLASS = QtMocHelpers::stringData(
    "ElaMultiSelectComboBoxPrivate",
    "pExpandIconRotateChanged",
    "",
    "pExpandMarkWidthChanged",
    "onItemPressed",
    "QModelIndex",
    "index",
    "pExpandIconRotate",
    "pExpandMarkWidth"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSElaMultiSelectComboBoxPrivateENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[30];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[14];
    char stringdata5[12];
    char stringdata6[6];
    char stringdata7[18];
    char stringdata8[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSElaMultiSelectComboBoxPrivateENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSElaMultiSelectComboBoxPrivateENDCLASS_t qt_meta_stringdata_CLASSElaMultiSelectComboBoxPrivateENDCLASS = {
    {
        QT_MOC_LITERAL(0, 29),  // "ElaMultiSelectComboBoxPrivate"
        QT_MOC_LITERAL(30, 24),  // "pExpandIconRotateChanged"
        QT_MOC_LITERAL(55, 0),  // ""
        QT_MOC_LITERAL(56, 23),  // "pExpandMarkWidthChanged"
        QT_MOC_LITERAL(80, 13),  // "onItemPressed"
        QT_MOC_LITERAL(94, 11),  // "QModelIndex"
        QT_MOC_LITERAL(106, 5),  // "index"
        QT_MOC_LITERAL(112, 17),  // "pExpandIconRotate"
        QT_MOC_LITERAL(130, 16)   // "pExpandMarkWidth"
    },
    "ElaMultiSelectComboBoxPrivate",
    "pExpandIconRotateChanged",
    "",
    "pExpandMarkWidthChanged",
    "onItemPressed",
    "QModelIndex",
    "index",
    "pExpandIconRotate",
    "pExpandMarkWidth"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSElaMultiSelectComboBoxPrivateENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   37, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    3 /* Public */,
       3,    0,   33,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   34,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

 // properties: name, type, flags
       7, QMetaType::QReal, 0x00015003, uint(0), 0,
       8, QMetaType::QReal, 0x00015003, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ElaMultiSelectComboBoxPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSElaMultiSelectComboBoxPrivateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSElaMultiSelectComboBoxPrivateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSElaMultiSelectComboBoxPrivateENDCLASS_t,
        // property 'pExpandIconRotate'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'pExpandMarkWidth'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ElaMultiSelectComboBoxPrivate, std::true_type>,
        // method 'pExpandIconRotateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pExpandMarkWidthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onItemPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void ElaMultiSelectComboBoxPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaMultiSelectComboBoxPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pExpandIconRotateChanged(); break;
        case 1: _t->pExpandMarkWidthChanged(); break;
        case 2: _t->onItemPressed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaMultiSelectComboBoxPrivate::*)();
            if (_t _q_method = &ElaMultiSelectComboBoxPrivate::pExpandIconRotateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaMultiSelectComboBoxPrivate::*)();
            if (_t _q_method = &ElaMultiSelectComboBoxPrivate::pExpandMarkWidthChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaMultiSelectComboBoxPrivate *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->_pExpandIconRotate; break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->_pExpandMarkWidth; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaMultiSelectComboBoxPrivate *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_pExpandIconRotate != *reinterpret_cast< qreal*>(_v)) {
                _t->_pExpandIconRotate = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pExpandIconRotateChanged();
            }
            break;
        case 1:
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

const QMetaObject *ElaMultiSelectComboBoxPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaMultiSelectComboBoxPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSElaMultiSelectComboBoxPrivateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaMultiSelectComboBoxPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ElaMultiSelectComboBoxPrivate::pExpandIconRotateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaMultiSelectComboBoxPrivate::pExpandMarkWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
