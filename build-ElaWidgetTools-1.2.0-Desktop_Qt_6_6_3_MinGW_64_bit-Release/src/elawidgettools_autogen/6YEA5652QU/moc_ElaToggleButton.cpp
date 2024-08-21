/****************************************************************************
** Meta object code from reading C++ file 'ElaToggleButton.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ElaWidgetTools-1.2.0/src/include/ElaToggleButton.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaToggleButton.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSElaToggleButtonENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSElaToggleButtonENDCLASS = QtMocHelpers::stringData(
    "ElaToggleButton",
    "pBorderRadiusChanged",
    "",
    "pTextChanged",
    "toggled",
    "checked",
    "pBorderRadius",
    "pText"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSElaToggleButtonENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[16];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[8];
    char stringdata5[8];
    char stringdata6[14];
    char stringdata7[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSElaToggleButtonENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSElaToggleButtonENDCLASS_t qt_meta_stringdata_CLASSElaToggleButtonENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "ElaToggleButton"
        QT_MOC_LITERAL(16, 20),  // "pBorderRadiusChanged"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 12),  // "pTextChanged"
        QT_MOC_LITERAL(51, 7),  // "toggled"
        QT_MOC_LITERAL(59, 7),  // "checked"
        QT_MOC_LITERAL(67, 13),  // "pBorderRadius"
        QT_MOC_LITERAL(81, 5)   // "pText"
    },
    "ElaToggleButton",
    "pBorderRadiusChanged",
    "",
    "pTextChanged",
    "toggled",
    "checked",
    "pBorderRadius",
    "pText"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSElaToggleButtonENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   37, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    3 /* Public */,
       3,    0,   33,    2, 0x06,    4 /* Public */,
       4,    1,   34,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,

 // properties: name, type, flags
       6, QMetaType::Int, 0x00015003, uint(0), 0,
       7, QMetaType::QString, 0x00015003, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ElaToggleButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSElaToggleButtonENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSElaToggleButtonENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSElaToggleButtonENDCLASS_t,
        // property 'pBorderRadius'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'pText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ElaToggleButton, std::true_type>,
        // method 'pBorderRadiusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void ElaToggleButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaToggleButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pBorderRadiusChanged(); break;
        case 1: _t->pTextChanged(); break;
        case 2: _t->toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaToggleButton::*)();
            if (_t _q_method = &ElaToggleButton::pBorderRadiusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaToggleButton::*)();
            if (_t _q_method = &ElaToggleButton::pTextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaToggleButton::*)(bool );
            if (_t _q_method = &ElaToggleButton::toggled; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaToggleButton *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getBorderRadius(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaToggleButton *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBorderRadius(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ElaToggleButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaToggleButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSElaToggleButtonENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ElaToggleButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void ElaToggleButton::pBorderRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaToggleButton::pTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaToggleButton::toggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
