/****************************************************************************
** Meta object code from reading C++ file 'ElaAppBar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ElaWidgetTools-1.2.0/src/include/ElaAppBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaAppBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaAppBar_t {
    uint offsetsAndSizes[42];
    char stringdata0[398];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaAppBar_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaAppBar_t qt_meta_stringdata_ElaAppBar = {
    {
        QT_MOC_LITERAL(0, 9),  // "ElaAppBar"
        QT_MOC_LITERAL(10, 17),  // "pIsStayTopChanged"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 19),  // "pIsFixedSizeChanged"
        QT_MOC_LITERAL(49, 23),  // "pIsDefaultClosedChanged"
        QT_MOC_LITERAL(73, 30),  // "pIsOnlyAllowMinAndCloseChanged"
        QT_MOC_LITERAL(104, 20),  // "pAppBarHeightChanged"
        QT_MOC_LITERAL(125, 20),  // "pCustomWidgetChanged"
        QT_MOC_LITERAL(146, 32),  // "pCustomWidgetMaximumWidthChanged"
        QT_MOC_LITERAL(179, 22),  // "routeBackButtonClicked"
        QT_MOC_LITERAL(202, 23),  // "navigationButtonClicked"
        QT_MOC_LITERAL(226, 24),  // "themeChangeButtonClicked"
        QT_MOC_LITERAL(251, 18),  // "closeButtonClicked"
        QT_MOC_LITERAL(270, 10),  // "pIsStayTop"
        QT_MOC_LITERAL(281, 12),  // "pIsFixedSize"
        QT_MOC_LITERAL(294, 16),  // "pIsDefaultClosed"
        QT_MOC_LITERAL(311, 23),  // "pIsOnlyAllowMinAndClose"
        QT_MOC_LITERAL(335, 13),  // "pAppBarHeight"
        QT_MOC_LITERAL(349, 13),  // "pCustomWidget"
        QT_MOC_LITERAL(363, 8),  // "QWidget*"
        QT_MOC_LITERAL(372, 25)   // "pCustomWidgetMaximumWidth"
    },
    "ElaAppBar\0pIsStayTopChanged\0\0"
    "pIsFixedSizeChanged\0pIsDefaultClosedChanged\0"
    "pIsOnlyAllowMinAndCloseChanged\0"
    "pAppBarHeightChanged\0pCustomWidgetChanged\0"
    "pCustomWidgetMaximumWidthChanged\0"
    "routeBackButtonClicked\0navigationButtonClicked\0"
    "themeChangeButtonClicked\0closeButtonClicked\0"
    "pIsStayTop\0pIsFixedSize\0pIsDefaultClosed\0"
    "pIsOnlyAllowMinAndClose\0pAppBarHeight\0"
    "pCustomWidget\0QWidget*\0pCustomWidgetMaximumWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaAppBar[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       7,   91, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    8 /* Public */,
       3,    0,   81,    2, 0x06,    9 /* Public */,
       4,    0,   82,    2, 0x06,   10 /* Public */,
       5,    0,   83,    2, 0x06,   11 /* Public */,
       6,    0,   84,    2, 0x06,   12 /* Public */,
       7,    0,   85,    2, 0x06,   13 /* Public */,
       8,    0,   86,    2, 0x06,   14 /* Public */,
       9,    0,   87,    2, 0x06,   15 /* Public */,
      10,    0,   88,    2, 0x06,   16 /* Public */,
      11,    0,   89,    2, 0x06,   17 /* Public */,
      12,    0,   90,    2, 0x06,   18 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00015003, uint(0), 0,
      14, QMetaType::Bool, 0x00015003, uint(1), 0,
      15, QMetaType::Bool, 0x00015003, uint(2), 0,
      16, QMetaType::Bool, 0x00015003, uint(3), 0,
      17, QMetaType::Int, 0x00015003, uint(4), 0,
      18, 0x80000000 | 19, 0x0001500b, uint(5), 0,
      20, QMetaType::Int, 0x00015003, uint(6), 0,

       0        // eod
};

void ElaAppBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaAppBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pIsStayTopChanged(); break;
        case 1: _t->pIsFixedSizeChanged(); break;
        case 2: _t->pIsDefaultClosedChanged(); break;
        case 3: _t->pIsOnlyAllowMinAndCloseChanged(); break;
        case 4: _t->pAppBarHeightChanged(); break;
        case 5: _t->pCustomWidgetChanged(); break;
        case 6: _t->pCustomWidgetMaximumWidthChanged(); break;
        case 7: _t->routeBackButtonClicked(); break;
        case 8: _t->navigationButtonClicked(); break;
        case 9: _t->themeChangeButtonClicked(); break;
        case 10: _t->closeButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaAppBar::*)();
            if (_t _q_method = &ElaAppBar::pIsStayTopChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaAppBar::*)();
            if (_t _q_method = &ElaAppBar::pIsFixedSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaAppBar::*)();
            if (_t _q_method = &ElaAppBar::pIsDefaultClosedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaAppBar::*)();
            if (_t _q_method = &ElaAppBar::pIsOnlyAllowMinAndCloseChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ElaAppBar::*)();
            if (_t _q_method = &ElaAppBar::pAppBarHeightChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ElaAppBar::*)();
            if (_t _q_method = &ElaAppBar::pCustomWidgetChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ElaAppBar::*)();
            if (_t _q_method = &ElaAppBar::pCustomWidgetMaximumWidthChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ElaAppBar::*)();
            if (_t _q_method = &ElaAppBar::routeBackButtonClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ElaAppBar::*)();
            if (_t _q_method = &ElaAppBar::navigationButtonClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ElaAppBar::*)();
            if (_t _q_method = &ElaAppBar::themeChangeButtonClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ElaAppBar::*)();
            if (_t _q_method = &ElaAppBar::closeButtonClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaAppBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getIsStayTop(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getIsFixedSize(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getIsDefaultClosed(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getIsOnlyAllowMinAndClose(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getAppBarHeight(); break;
        case 5: *reinterpret_cast< QWidget**>(_v) = _t->getCustomWidget(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->getCustomWidgetMaximumWidth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaAppBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsStayTop(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setIsFixedSize(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setIsDefaultClosed(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setIsOnlyAllowMinAndClose(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setAppBarHeight(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setCustomWidget(*reinterpret_cast< QWidget**>(_v)); break;
        case 6: _t->setCustomWidgetMaximumWidth(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ElaAppBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ElaAppBar.offsetsAndSizes,
    qt_meta_data_ElaAppBar,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaAppBar_t
, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<QWidget*, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<ElaAppBar, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *ElaAppBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaAppBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaAppBar.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QAbstractNativeEventFilter"))
        return static_cast< QAbstractNativeEventFilter*>(this);
    return QWidget::qt_metacast(_clname);
}

int ElaAppBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ElaAppBar::pIsStayTopChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaAppBar::pIsFixedSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaAppBar::pIsDefaultClosedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ElaAppBar::pIsOnlyAllowMinAndCloseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ElaAppBar::pAppBarHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ElaAppBar::pCustomWidgetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ElaAppBar::pCustomWidgetMaximumWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ElaAppBar::routeBackButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ElaAppBar::navigationButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ElaAppBar::themeChangeButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void ElaAppBar::closeButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
