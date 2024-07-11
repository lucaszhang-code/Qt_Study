/****************************************************************************
** Meta object code from reading C++ file 'qhotkey.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../Demo1/FluentUI/qhotkey/qhotkey.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhotkey.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QHotkey_t {
    uint offsetsAndSizes[38];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QHotkey_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_QHotkey_t qt_meta_stringdata_QHotkey = {
    {
        QT_MOC_LITERAL(0, 7),  // "QHotkey"
        QT_MOC_LITERAL(8, 9),  // "activated"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 8),  // "released"
        QT_MOC_LITERAL(28, 17),  // "registeredChanged"
        QT_MOC_LITERAL(46, 10),  // "registered"
        QT_MOC_LITERAL(57, 13),  // "setRegistered"
        QT_MOC_LITERAL(71, 11),  // "setShortcut"
        QT_MOC_LITERAL(83, 12),  // "QKeySequence"
        QT_MOC_LITERAL(96, 8),  // "shortcut"
        QT_MOC_LITERAL(105, 12),  // "autoRegister"
        QT_MOC_LITERAL(118, 7),  // "Qt::Key"
        QT_MOC_LITERAL(126, 7),  // "keyCode"
        QT_MOC_LITERAL(134, 21),  // "Qt::KeyboardModifiers"
        QT_MOC_LITERAL(156, 9),  // "modifiers"
        QT_MOC_LITERAL(166, 13),  // "resetShortcut"
        QT_MOC_LITERAL(180, 17),  // "setNativeShortcut"
        QT_MOC_LITERAL(198, 23),  // "QHotkey::NativeShortcut"
        QT_MOC_LITERAL(222, 14)   // "nativeShortcut"
    },
    "QHotkey\0activated\0\0released\0"
    "registeredChanged\0registered\0setRegistered\0"
    "setShortcut\0QKeySequence\0shortcut\0"
    "autoRegister\0Qt::Key\0keyCode\0"
    "Qt::KeyboardModifiers\0modifiers\0"
    "resetShortcut\0setNativeShortcut\0"
    "QHotkey::NativeShortcut\0nativeShortcut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHotkey[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       2,  117, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    3 /* Public */,
       3,    0,   81,    2, 0x06,    4 /* Public */,
       4,    1,   82,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   85,    2, 0x0a,    7 /* Public */,
       7,    2,   88,    2, 0x0a,    9 /* Public */,
       7,    1,   93,    2, 0x2a,   12 /* Public | MethodCloned */,
       7,    3,   96,    2, 0x0a,   14 /* Public */,
       7,    2,  103,    2, 0x2a,   18 /* Public | MethodCloned */,
      15,    0,  108,    2, 0x0a,   21 /* Public */,
      16,    2,  109,    2, 0x0a,   22 /* Public */,
      16,    1,  114,    2, 0x2a,   25 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Bool, QMetaType::Bool,    5,
    QMetaType::Bool, 0x80000000 | 8, QMetaType::Bool,    9,   10,
    QMetaType::Bool, 0x80000000 | 8,    9,
    QMetaType::Bool, 0x80000000 | 11, 0x80000000 | 13, QMetaType::Bool,   12,   14,   10,
    QMetaType::Bool, 0x80000000 | 11, 0x80000000 | 13,   12,   14,
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 17, QMetaType::Bool,   18,   10,
    QMetaType::Bool, 0x80000000 | 17,   18,

 // properties: name, type, flags
       5, QMetaType::Bool, 0x00015103, uint(2), 0,
       9, 0x80000000 | 8, 0x0001510f, uint(-1), 0,

       0        // eod
};

void QHotkey::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QHotkey *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activated(QPrivateSignal()); break;
        case 1: _t->released(QPrivateSignal()); break;
        case 2: _t->registeredChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: { bool _r = _t->setRegistered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->setShortcut((*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->setShortcut((*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->setShortcut((*reinterpret_cast< std::add_pointer_t<Qt::Key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::KeyboardModifiers>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->setShortcut((*reinterpret_cast< std::add_pointer_t<Qt::Key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::KeyboardModifiers>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->resetShortcut();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->setNativeShortcut((*reinterpret_cast< std::add_pointer_t<QHotkey::NativeShortcut>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->setNativeShortcut((*reinterpret_cast< std::add_pointer_t<QHotkey::NativeShortcut>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QHotkey::NativeShortcut >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QHotkey::NativeShortcut >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QHotkey::*)(QPrivateSignal);
            if (_t _q_method = &QHotkey::activated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QHotkey::*)(QPrivateSignal);
            if (_t _q_method = &QHotkey::released; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QHotkey::*)(bool );
            if (_t _q_method = &QHotkey::registeredChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QHotkey *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isRegistered(); break;
        case 1: *reinterpret_cast< QKeySequence*>(_v) = _t->shortcut(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QHotkey *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRegistered(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setShortcut(*reinterpret_cast< QKeySequence*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        auto *_t = static_cast<QHotkey *>(_o);
        (void)_t;
        switch (_id) {
        case 1: _t->resetShortcut(); break;
        default: break;
        }
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QHotkey::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QHotkey.offsetsAndSizes,
    qt_meta_data_QHotkey,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QHotkey_t
, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QKeySequence, std::true_type>, QtPrivate::TypeAndForceComplete<QHotkey, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<const QKeySequence &, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<const QKeySequence &, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<Qt::Key, std::false_type>, QtPrivate::TypeAndForceComplete<Qt::KeyboardModifiers, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<Qt::Key, std::false_type>, QtPrivate::TypeAndForceComplete<Qt::KeyboardModifiers, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QHotkey::NativeShortcut, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QHotkey::NativeShortcut, std::false_type>


>,
    nullptr
} };


const QMetaObject *QHotkey::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHotkey::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QHotkey.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QHotkey::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
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
void QHotkey::activated(QPrivateSignal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QHotkey::released(QPrivateSignal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QHotkey::registeredChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
