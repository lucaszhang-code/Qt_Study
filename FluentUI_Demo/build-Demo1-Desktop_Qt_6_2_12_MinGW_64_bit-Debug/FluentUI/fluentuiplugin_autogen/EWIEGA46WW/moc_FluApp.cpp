/****************************************************************************
** Meta object code from reading C++ file 'FluApp.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../Demo1/FluentUI/FluApp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FluApp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluApp_t {
    uint offsetsAndSizes[32];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FluApp_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_FluApp_t qt_meta_stringdata_FluApp = {
    {
        QT_MOC_LITERAL(0, 6),  // "FluApp"
        QT_MOC_LITERAL(7, 11),  // "QML.Element"
        QT_MOC_LITERAL(19, 13),  // "QML.Singleton"
        QT_MOC_LITERAL(33, 4),  // "true"
        QT_MOC_LITERAL(38, 22),  // "useSystemAppBarChanged"
        QT_MOC_LITERAL(61, 0),  // ""
        QT_MOC_LITERAL(62, 17),  // "windowIconChanged"
        QT_MOC_LITERAL(80, 13),  // "localeChanged"
        QT_MOC_LITERAL(94, 15),  // "launcherChanged"
        QT_MOC_LITERAL(110, 4),  // "init"
        QT_MOC_LITERAL(115, 8),  // "launcher"
        QT_MOC_LITERAL(124, 6),  // "locale"
        QT_MOC_LITERAL(131, 8),  // "iconData"
        QT_MOC_LITERAL(140, 7),  // "keyword"
        QT_MOC_LITERAL(148, 15),  // "useSystemAppBar"
        QT_MOC_LITERAL(164, 10)   // "windowIcon"
    },
    "FluApp\0QML.Element\0QML.Singleton\0true\0"
    "useSystemAppBarChanged\0\0windowIconChanged\0"
    "localeChanged\0launcherChanged\0init\0"
    "launcher\0locale\0iconData\0keyword\0"
    "useSystemAppBar\0windowIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluApp[] = {

 // content:
      10,       // revision
       0,       // classname
       2,   14, // classinfo
       8,   18, // methods
       4,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    0,
       2,    3,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   66,    5, 0x06,    5 /* Public */,
       6,    0,   67,    5, 0x06,    6 /* Public */,
       7,    0,   68,    5, 0x06,    7 /* Public */,
       8,    0,   69,    5, 0x06,    8 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       9,    2,   70,    5, 0x02,    9 /* Public */,
       9,    1,   75,    5, 0x22,   12 /* Public | MethodCloned */,
      12,    1,   78,    5, 0x02,   14 /* Public */,
      12,    0,   81,    5, 0x22,   16 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QLocale,   10,   11,
    QMetaType::Void, QMetaType::QObjectStar,   10,
    QMetaType::QJsonArray, QMetaType::QString,   13,
    QMetaType::QJsonArray,

 // properties: name, type, flags
      14, QMetaType::Bool, 0x00015003, uint(0), 0,
      15, QMetaType::QString, 0x00015003, uint(1), 0,
      11, QMetaType::QLocale, 0x00015003, uint(2), 0,
      10, QMetaType::QObjectStar, 0x00015003, uint(3), 0,

       0        // eod
};

void FluApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluApp *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->useSystemAppBarChanged(); break;
        case 1: _t->windowIconChanged(); break;
        case 2: _t->localeChanged(); break;
        case 3: _t->launcherChanged(); break;
        case 4: _t->init((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QLocale>>(_a[2]))); break;
        case 5: _t->init((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 6: { QJsonArray _r = _t->iconData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonArray*>(_a[0]) = std::move(_r); }  break;
        case 7: { QJsonArray _r = _t->iconData();
            if (_a[0]) *reinterpret_cast< QJsonArray*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluApp::*)();
            if (_t _q_method = &FluApp::useSystemAppBarChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluApp::*)();
            if (_t _q_method = &FluApp::windowIconChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FluApp::*)();
            if (_t _q_method = &FluApp::localeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FluApp::*)();
            if (_t _q_method = &FluApp::launcherChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluApp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->_useSystemAppBar; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_windowIcon; break;
        case 2: *reinterpret_cast< QLocale*>(_v) = _t->_locale; break;
        case 3: *reinterpret_cast< QObject**>(_v) = _t->_launcher; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluApp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_useSystemAppBar != *reinterpret_cast< bool*>(_v)) {
                _t->_useSystemAppBar = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->useSystemAppBarChanged();
            }
            break;
        case 1:
            if (_t->_windowIcon != *reinterpret_cast< QString*>(_v)) {
                _t->_windowIcon = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->windowIconChanged();
            }
            break;
        case 2:
            if (_t->_locale != *reinterpret_cast< QLocale*>(_v)) {
                _t->_locale = *reinterpret_cast< QLocale*>(_v);
                Q_EMIT _t->localeChanged();
            }
            break;
        case 3:
            if (_t->_launcher != *reinterpret_cast< QObject**>(_v)) {
                _t->_launcher = *reinterpret_cast< QObject**>(_v);
                Q_EMIT _t->launcherChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject FluApp::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FluApp.offsetsAndSizes,
    qt_meta_data_FluApp,
    qt_static_metacall,
    nullptr,
qt_metaTypeArray<
bool, QString, QLocale, QObject*, FluApp, void, void, void, void

, void, QObject *, QLocale, void, QObject *, QJsonArray, const QString &, QJsonArray

>,
    nullptr
} };


const QMetaObject *FluApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluApp.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FluApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FluApp::useSystemAppBarChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FluApp::windowIconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FluApp::localeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FluApp::launcherChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
