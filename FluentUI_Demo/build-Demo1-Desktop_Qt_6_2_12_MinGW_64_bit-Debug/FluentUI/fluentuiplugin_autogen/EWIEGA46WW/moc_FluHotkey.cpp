/****************************************************************************
** Meta object code from reading C++ file 'FluHotkey.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../Demo1/FluentUI/FluHotkey.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FluHotkey.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluHotkey_t {
    uint offsetsAndSizes[20];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FluHotkey_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_FluHotkey_t qt_meta_stringdata_FluHotkey = {
    {
        QT_MOC_LITERAL(0, 9),  // "FluHotkey"
        QT_MOC_LITERAL(10, 11),  // "QML.Element"
        QT_MOC_LITERAL(22, 15),  // "sequenceChanged"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 11),  // "nameChanged"
        QT_MOC_LITERAL(51, 19),  // "isRegisteredChanged"
        QT_MOC_LITERAL(71, 9),  // "activated"
        QT_MOC_LITERAL(81, 8),  // "sequence"
        QT_MOC_LITERAL(90, 4),  // "name"
        QT_MOC_LITERAL(95, 12)   // "isRegistered"
    },
    "FluHotkey\0QML.Element\0sequenceChanged\0"
    "\0nameChanged\0isRegisteredChanged\0"
    "activated\0sequence\0name\0isRegistered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluHotkey[] = {

 // content:
      10,       // revision
       0,       // classname
       1,   14, // classinfo
       4,   16, // methods
       3,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    0,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       2,    0,   40,    3, 0x06,    4 /* Public */,
       4,    0,   41,    3, 0x06,    5 /* Public */,
       5,    0,   42,    3, 0x06,    6 /* Public */,
       6,    0,   43,    3, 0x06,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00015003, uint(0), 0,
       8, QMetaType::QString, 0x00015003, uint(1), 0,
       9, QMetaType::Bool, 0x00015801, uint(2), 0,

       0        // eod
};

void FluHotkey::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluHotkey *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sequenceChanged(); break;
        case 1: _t->nameChanged(); break;
        case 2: _t->isRegisteredChanged(); break;
        case 3: _t->activated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluHotkey::*)();
            if (_t _q_method = &FluHotkey::sequenceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluHotkey::*)();
            if (_t _q_method = &FluHotkey::nameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FluHotkey::*)();
            if (_t _q_method = &FluHotkey::isRegisteredChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FluHotkey::*)();
            if (_t _q_method = &FluHotkey::activated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluHotkey *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_sequence; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_name; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isRegistered(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluHotkey *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_sequence != *reinterpret_cast< QString*>(_v)) {
                _t->_sequence = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->sequenceChanged();
            }
            break;
        case 1:
            if (_t->_name != *reinterpret_cast< QString*>(_v)) {
                _t->_name = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->nameChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

const QMetaObject FluHotkey::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FluHotkey.offsetsAndSizes,
    qt_meta_data_FluHotkey,
    qt_static_metacall,
    nullptr,
qt_metaTypeArray<
QString, QString, bool, FluHotkey, void, void, void, void



>,
    nullptr
} };


const QMetaObject *FluHotkey::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluHotkey::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluHotkey.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FluHotkey::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FluHotkey::sequenceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FluHotkey::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FluHotkey::isRegisteredChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FluHotkey::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
