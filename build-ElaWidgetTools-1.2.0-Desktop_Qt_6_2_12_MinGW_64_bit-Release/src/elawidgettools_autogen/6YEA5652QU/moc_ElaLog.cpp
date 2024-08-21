/****************************************************************************
** Meta object code from reading C++ file 'ElaLog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ElaWidgetTools-1.2.0/src/include/ElaLog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaLog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaLog_t {
    uint offsetsAndSizes[20];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaLog_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaLog_t qt_meta_stringdata_ElaLog = {
    {
        QT_MOC_LITERAL(0, 6),  // "ElaLog"
        QT_MOC_LITERAL(7, 19),  // "pLogSavePathChanged"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 19),  // "pLogFileNameChanged"
        QT_MOC_LITERAL(48, 29),  // "pIsLogFileNameWithTimeChanged"
        QT_MOC_LITERAL(78, 10),  // "logMessage"
        QT_MOC_LITERAL(89, 3),  // "log"
        QT_MOC_LITERAL(93, 12),  // "pLogSavePath"
        QT_MOC_LITERAL(106, 12),  // "pLogFileName"
        QT_MOC_LITERAL(119, 22)   // "pIsLogFileNameWithTime"
    },
    "ElaLog\0pLogSavePathChanged\0\0"
    "pLogFileNameChanged\0pIsLogFileNameWithTimeChanged\0"
    "logMessage\0log\0pLogSavePath\0pLogFileName\0"
    "pIsLogFileNameWithTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaLog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    4 /* Public */,
       3,    0,   39,    2, 0x06,    5 /* Public */,
       4,    0,   40,    2, 0x06,    6 /* Public */,
       5,    1,   41,    2, 0x06,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00015003, uint(0), 0,
       8, QMetaType::QString, 0x00015003, uint(1), 0,
       9, QMetaType::Bool, 0x00015003, uint(2), 0,

       0        // eod
};

void ElaLog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaLog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pLogSavePathChanged(); break;
        case 1: _t->pLogFileNameChanged(); break;
        case 2: _t->pIsLogFileNameWithTimeChanged(); break;
        case 3: _t->logMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaLog::*)();
            if (_t _q_method = &ElaLog::pLogSavePathChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaLog::*)();
            if (_t _q_method = &ElaLog::pLogFileNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaLog::*)();
            if (_t _q_method = &ElaLog::pIsLogFileNameWithTimeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaLog::*)(QString );
            if (_t _q_method = &ElaLog::logMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaLog *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getLogSavePath(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getLogFileName(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getIsLogFileNameWithTime(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaLog *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLogSavePath(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setLogFileName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setIsLogFileNameWithTime(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ElaLog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ElaLog.offsetsAndSizes,
    qt_meta_data_ElaLog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaLog_t
, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<ElaLog, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>



>,
    nullptr
} };


const QMetaObject *ElaLog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaLog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaLog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaLog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ElaLog::pLogSavePathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaLog::pLogFileNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaLog::pIsLogFileNameWithTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ElaLog::logMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
