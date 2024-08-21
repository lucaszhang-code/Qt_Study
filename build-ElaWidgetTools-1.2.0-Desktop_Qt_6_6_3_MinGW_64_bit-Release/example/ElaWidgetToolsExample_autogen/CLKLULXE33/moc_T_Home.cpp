/****************************************************************************
** Meta object code from reading C++ file 'T_Home.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ElaWidgetTools-1.2.0/example/ExamplePage/T_Home.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'T_Home.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASST_HomeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASST_HomeENDCLASS = QtMocHelpers::stringData(
    "T_Home",
    "elaScreenNavigation",
    "",
    "elaBaseComponentNavigation",
    "elaSceneNavigation",
    "elaCardNavigation",
    "elaIconNavigation"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASST_HomeENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[7];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[19];
    char stringdata5[18];
    char stringdata6[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASST_HomeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASST_HomeENDCLASS_t qt_meta_stringdata_CLASST_HomeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "T_Home"
        QT_MOC_LITERAL(7, 19),  // "elaScreenNavigation"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 26),  // "elaBaseComponentNavigation"
        QT_MOC_LITERAL(55, 18),  // "elaSceneNavigation"
        QT_MOC_LITERAL(74, 17),  // "elaCardNavigation"
        QT_MOC_LITERAL(92, 17)   // "elaIconNavigation"
    },
    "T_Home",
    "elaScreenNavigation",
    "",
    "elaBaseComponentNavigation",
    "elaSceneNavigation",
    "elaCardNavigation",
    "elaIconNavigation"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASST_HomeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,
       4,    0,   46,    2, 0x06,    3 /* Public */,
       5,    0,   47,    2, 0x06,    4 /* Public */,
       6,    0,   48,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject T_Home::staticMetaObject = { {
    QMetaObject::SuperData::link<ElaScrollPage::staticMetaObject>(),
    qt_meta_stringdata_CLASST_HomeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASST_HomeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASST_HomeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<T_Home, std::true_type>,
        // method 'elaScreenNavigation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'elaBaseComponentNavigation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'elaSceneNavigation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'elaCardNavigation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'elaIconNavigation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void T_Home::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<T_Home *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->elaScreenNavigation(); break;
        case 1: _t->elaBaseComponentNavigation(); break;
        case 2: _t->elaSceneNavigation(); break;
        case 3: _t->elaCardNavigation(); break;
        case 4: _t->elaIconNavigation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (T_Home::*)();
            if (_t _q_method = &T_Home::elaScreenNavigation; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (T_Home::*)();
            if (_t _q_method = &T_Home::elaBaseComponentNavigation; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (T_Home::*)();
            if (_t _q_method = &T_Home::elaSceneNavigation; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (T_Home::*)();
            if (_t _q_method = &T_Home::elaCardNavigation; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (T_Home::*)();
            if (_t _q_method = &T_Home::elaIconNavigation; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *T_Home::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *T_Home::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASST_HomeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ElaScrollPage::qt_metacast(_clname);
}

int T_Home::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ElaScrollPage::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void T_Home::elaScreenNavigation()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void T_Home::elaBaseComponentNavigation()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void T_Home::elaSceneNavigation()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void T_Home::elaCardNavigation()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void T_Home::elaIconNavigation()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
