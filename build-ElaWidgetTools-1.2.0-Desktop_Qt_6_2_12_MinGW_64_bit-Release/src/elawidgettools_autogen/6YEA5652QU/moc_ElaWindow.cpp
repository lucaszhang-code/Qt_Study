/****************************************************************************
** Meta object code from reading C++ file 'ElaWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ElaWidgetTools-1.2.0/src/include/ElaWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaWindow_t {
    uint offsetsAndSizes[26];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaWindow_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaWindow_t qt_meta_stringdata_ElaWindow = {
    {
        QT_MOC_LITERAL(0, 9),  // "ElaWindow"
        QT_MOC_LITERAL(10, 23),  // "pThemeChangeTimeChanged"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 32),  // "pNavigationBarDisplayModeChanged"
        QT_MOC_LITERAL(68, 19),  // "userInfoCardClicked"
        QT_MOC_LITERAL(88, 18),  // "closeButtonClicked"
        QT_MOC_LITERAL(107, 21),  // "navigationNodeClicked"
        QT_MOC_LITERAL(129, 37),  // "ElaNavigationType::Navigation..."
        QT_MOC_LITERAL(167, 8),  // "nodeType"
        QT_MOC_LITERAL(176, 7),  // "nodeKey"
        QT_MOC_LITERAL(184, 16),  // "pThemeChangeTime"
        QT_MOC_LITERAL(201, 25),  // "pNavigationBarDisplayMode"
        QT_MOC_LITERAL(227, 40)   // "ElaNavigationType::Navigation..."
    },
    "ElaWindow\0pThemeChangeTimeChanged\0\0"
    "pNavigationBarDisplayModeChanged\0"
    "userInfoCardClicked\0closeButtonClicked\0"
    "navigationNodeClicked\0"
    "ElaNavigationType::NavigationNodeType\0"
    "nodeType\0nodeKey\0pThemeChangeTime\0"
    "pNavigationBarDisplayMode\0"
    "ElaNavigationType::NavigationDisplayMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   53, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    3 /* Public */,
       3,    0,   45,    2, 0x06,    4 /* Public */,
       4,    0,   46,    2, 0x06,    5 /* Public */,
       5,    0,   47,    2, 0x06,    6 /* Public */,
       6,    2,   48,    2, 0x06,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    9,

 // properties: name, type, flags
      10, QMetaType::Int, 0x00015003, uint(0), 0,
      11, 0x80000000 | 12, 0x0001500b, uint(1), 0,

       0        // eod
};

void ElaWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pThemeChangeTimeChanged(); break;
        case 1: _t->pNavigationBarDisplayModeChanged(); break;
        case 2: _t->userInfoCardClicked(); break;
        case 3: _t->closeButtonClicked(); break;
        case 4: _t->navigationNodeClicked((*reinterpret_cast< std::add_pointer_t<ElaNavigationType::NavigationNodeType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaWindow::*)();
            if (_t _q_method = &ElaWindow::pThemeChangeTimeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaWindow::*)();
            if (_t _q_method = &ElaWindow::pNavigationBarDisplayModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaWindow::*)();
            if (_t _q_method = &ElaWindow::userInfoCardClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaWindow::*)();
            if (_t _q_method = &ElaWindow::closeButtonClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ElaWindow::*)(ElaNavigationType::NavigationNodeType , QString );
            if (_t _q_method = &ElaWindow::navigationNodeClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaWindow *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getThemeChangeTime(); break;
        case 1: *reinterpret_cast< ElaNavigationType::NavigationDisplayMode*>(_v) = _t->getNavigationBarDisplayMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaWindow *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setThemeChangeTime(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setNavigationBarDisplayMode(*reinterpret_cast< ElaNavigationType::NavigationDisplayMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_ElaWindow[] = {
    QMetaObject::SuperData::link<ElaNavigationType::staticMetaObject>(),
    nullptr
};

const QMetaObject ElaWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ElaWindow.offsetsAndSizes,
    qt_meta_data_ElaWindow,
    qt_static_metacall,
    qt_meta_extradata_ElaWindow,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaWindow_t
, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<ElaNavigationType::NavigationDisplayMode, std::true_type>, QtPrivate::TypeAndForceComplete<ElaWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ElaNavigationType::NavigationNodeType, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>



>,
    nullptr
} };


const QMetaObject *ElaWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ElaWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void ElaWindow::pThemeChangeTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaWindow::pNavigationBarDisplayModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaWindow::userInfoCardClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ElaWindow::closeButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ElaWindow::navigationNodeClicked(ElaNavigationType::NavigationNodeType _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE