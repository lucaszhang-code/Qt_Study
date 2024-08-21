/****************************************************************************
** Meta object code from reading C++ file 'ElaNavigationBar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ElaWidgetTools-1.2.0/src/include/ElaNavigationBar.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaNavigationBar.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSElaNavigationBarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSElaNavigationBarENDCLASS = QtMocHelpers::stringData(
    "ElaNavigationBar",
    "pIsTransparentChanged",
    "",
    "userInfoCardClicked",
    "navigationNodeClicked",
    "ElaNavigationType::NavigationNodeType",
    "nodeType",
    "nodeKey",
    "navigationNodeAdded",
    "QWidget*",
    "page",
    "pIsTransparent"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSElaNavigationBarENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[17];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[22];
    char stringdata5[38];
    char stringdata6[9];
    char stringdata7[8];
    char stringdata8[20];
    char stringdata9[9];
    char stringdata10[5];
    char stringdata11[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSElaNavigationBarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSElaNavigationBarENDCLASS_t qt_meta_stringdata_CLASSElaNavigationBarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "ElaNavigationBar"
        QT_MOC_LITERAL(17, 21),  // "pIsTransparentChanged"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 19),  // "userInfoCardClicked"
        QT_MOC_LITERAL(60, 21),  // "navigationNodeClicked"
        QT_MOC_LITERAL(82, 37),  // "ElaNavigationType::Navigation..."
        QT_MOC_LITERAL(120, 8),  // "nodeType"
        QT_MOC_LITERAL(129, 7),  // "nodeKey"
        QT_MOC_LITERAL(137, 19),  // "navigationNodeAdded"
        QT_MOC_LITERAL(157, 8),  // "QWidget*"
        QT_MOC_LITERAL(166, 4),  // "page"
        QT_MOC_LITERAL(171, 14)   // "pIsTransparent"
    },
    "ElaNavigationBar",
    "pIsTransparentChanged",
    "",
    "userInfoCardClicked",
    "navigationNodeClicked",
    "ElaNavigationType::NavigationNodeType",
    "nodeType",
    "nodeKey",
    "navigationNodeAdded",
    "QWidget*",
    "page",
    "pIsTransparent"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSElaNavigationBarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    2 /* Public */,
       3,    0,   39,    2, 0x06,    3 /* Public */,
       4,    2,   40,    2, 0x06,    4 /* Public */,
       8,    3,   45,    2, 0x06,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    7,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString, 0x80000000 | 9,    6,    7,   10,

 // properties: name, type, flags
      11, QMetaType::Bool, 0x00015003, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ElaNavigationBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSElaNavigationBarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSElaNavigationBarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSElaNavigationBarENDCLASS_t,
        // property 'pIsTransparent'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ElaNavigationBar, std::true_type>,
        // method 'pIsTransparentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'userInfoCardClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'navigationNodeClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ElaNavigationType::NavigationNodeType, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'navigationNodeAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ElaNavigationType::NavigationNodeType, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>
    >,
    nullptr
} };

void ElaNavigationBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaNavigationBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pIsTransparentChanged(); break;
        case 1: _t->userInfoCardClicked(); break;
        case 2: _t->navigationNodeClicked((*reinterpret_cast< std::add_pointer_t<ElaNavigationType::NavigationNodeType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->navigationNodeAdded((*reinterpret_cast< std::add_pointer_t<ElaNavigationType::NavigationNodeType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaNavigationBar::*)();
            if (_t _q_method = &ElaNavigationBar::pIsTransparentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaNavigationBar::*)();
            if (_t _q_method = &ElaNavigationBar::userInfoCardClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaNavigationBar::*)(ElaNavigationType::NavigationNodeType , QString );
            if (_t _q_method = &ElaNavigationBar::navigationNodeClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaNavigationBar::*)(ElaNavigationType::NavigationNodeType , QString , QWidget * );
            if (_t _q_method = &ElaNavigationBar::navigationNodeAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaNavigationBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getIsTransparent(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaNavigationBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsTransparent(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ElaNavigationBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaNavigationBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSElaNavigationBarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ElaNavigationBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ElaNavigationBar::pIsTransparentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaNavigationBar::userInfoCardClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaNavigationBar::navigationNodeClicked(ElaNavigationType::NavigationNodeType _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ElaNavigationBar::navigationNodeAdded(ElaNavigationType::NavigationNodeType _t1, QString _t2, QWidget * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
