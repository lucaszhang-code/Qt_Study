/****************************************************************************
** Meta object code from reading C++ file 'ElaComboBoxStyle.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ElaWidgetTools-1.2.0/src/DeveloperComponents/ElaComboBoxStyle.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaComboBoxStyle.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSElaComboBoxStyleENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSElaComboBoxStyleENDCLASS = QtMocHelpers::stringData(
    "ElaComboBoxStyle",
    "pExpandIconRotateChanged",
    "",
    "pExpandMarkWidthChanged",
    "pExpandIconRotate",
    "pExpandMarkWidth"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSElaComboBoxStyleENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[17];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[18];
    char stringdata5[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSElaComboBoxStyleENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSElaComboBoxStyleENDCLASS_t qt_meta_stringdata_CLASSElaComboBoxStyleENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "ElaComboBoxStyle"
        QT_MOC_LITERAL(17, 24),  // "pExpandIconRotateChanged"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 23),  // "pExpandMarkWidthChanged"
        QT_MOC_LITERAL(67, 17),  // "pExpandIconRotate"
        QT_MOC_LITERAL(85, 16)   // "pExpandMarkWidth"
    },
    "ElaComboBoxStyle",
    "pExpandIconRotateChanged",
    "",
    "pExpandMarkWidthChanged",
    "pExpandIconRotate",
    "pExpandMarkWidth"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSElaComboBoxStyleENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject ElaComboBoxStyle::staticMetaObject = { {
    QMetaObject::SuperData::link<QProxyStyle::staticMetaObject>(),
    qt_meta_stringdata_CLASSElaComboBoxStyleENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSElaComboBoxStyleENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSElaComboBoxStyleENDCLASS_t,
        // property 'pExpandIconRotate'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'pExpandMarkWidth'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ElaComboBoxStyle, std::true_type>,
        // method 'pExpandIconRotateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pExpandMarkWidthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ElaComboBoxStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaComboBoxStyle *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pExpandIconRotateChanged(); break;
        case 1: _t->pExpandMarkWidthChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaComboBoxStyle::*)();
            if (_t _q_method = &ElaComboBoxStyle::pExpandIconRotateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaComboBoxStyle::*)();
            if (_t _q_method = &ElaComboBoxStyle::pExpandMarkWidthChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaComboBoxStyle *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->_pExpandIconRotate; break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->_pExpandMarkWidth; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaComboBoxStyle *>(_o);
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
    (void)_a;
}

const QMetaObject *ElaComboBoxStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaComboBoxStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSElaComboBoxStyleENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QProxyStyle::qt_metacast(_clname);
}

int ElaComboBoxStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProxyStyle::qt_metacall(_c, _id, _a);
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
void ElaComboBoxStyle::pExpandIconRotateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaComboBoxStyle::pExpandMarkWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
