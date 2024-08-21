/****************************************************************************
** Meta object code from reading C++ file 'ElaLineEdit.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ElaWidgetTools-1.2.0/src/include/ElaLineEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaLineEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaLineEdit_t {
    uint offsetsAndSizes[22];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaLineEdit_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaLineEdit_t qt_meta_stringdata_ElaLineEdit = {
    {
        QT_MOC_LITERAL(0, 11),  // "ElaLineEdit"
        QT_MOC_LITERAL(12, 15),  // "pAwesomeChanged"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 20),  // "pBorderRadiusChanged"
        QT_MOC_LITERAL(50, 7),  // "focusIn"
        QT_MOC_LITERAL(58, 4),  // "text"
        QT_MOC_LITERAL(63, 8),  // "focusOut"
        QT_MOC_LITERAL(72, 10),  // "wmFocusOut"
        QT_MOC_LITERAL(83, 8),  // "pAwesome"
        QT_MOC_LITERAL(92, 11),  // "ElaIconType"
        QT_MOC_LITERAL(104, 13)   // "pBorderRadius"
    },
    "ElaLineEdit\0pAwesomeChanged\0\0"
    "pBorderRadiusChanged\0focusIn\0text\0"
    "focusOut\0wmFocusOut\0pAwesome\0ElaIconType\0"
    "pBorderRadius"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaLineEdit[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   55, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    3 /* Public */,
       3,    0,   45,    2, 0x06,    4 /* Public */,
       4,    1,   46,    2, 0x06,    5 /* Public */,
       6,    1,   49,    2, 0x06,    7 /* Public */,
       7,    1,   52,    2, 0x06,    9 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x0001500b, uint(0), 0,
      10, QMetaType::Int, 0x00015003, uint(1), 0,

       0        // eod
};

void ElaLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaLineEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pAwesomeChanged(); break;
        case 1: _t->pBorderRadiusChanged(); break;
        case 2: _t->focusIn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->focusOut((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->wmFocusOut((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaLineEdit::*)();
            if (_t _q_method = &ElaLineEdit::pAwesomeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaLineEdit::*)();
            if (_t _q_method = &ElaLineEdit::pBorderRadiusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaLineEdit::*)(QString );
            if (_t _q_method = &ElaLineEdit::focusIn; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaLineEdit::*)(QString );
            if (_t _q_method = &ElaLineEdit::focusOut; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ElaLineEdit::*)(QString );
            if (_t _q_method = &ElaLineEdit::wmFocusOut; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaLineEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ElaIconType*>(_v) = _t->getAwesome(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getBorderRadius(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaLineEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAwesome(*reinterpret_cast< ElaIconType*>(_v)); break;
        case 1: _t->setBorderRadius(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ElaLineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_ElaLineEdit.offsetsAndSizes,
    qt_meta_data_ElaLineEdit,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaLineEdit_t
, QtPrivate::TypeAndForceComplete<ElaIconType, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<ElaLineEdit, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>



>,
    nullptr
} };


const QMetaObject *ElaLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaLineEdit.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int ElaLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ElaLineEdit::pAwesomeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaLineEdit::pBorderRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaLineEdit::focusIn(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ElaLineEdit::focusOut(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ElaLineEdit::wmFocusOut(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
