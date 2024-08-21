/****************************************************************************
** Meta object code from reading C++ file 'T_Icon.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ElaWidgetTools-1.2.0/example/ExamplePage/T_Icon.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'T_Icon.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASST_IconENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASST_IconENDCLASS = QtMocHelpers::stringData(
    "T_Icon",
    "onSearchEditTextEdit",
    "",
    "searchText"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASST_IconENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[7];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASST_IconENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASST_IconENDCLASS_t qt_meta_stringdata_CLASST_IconENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "T_Icon"
        QT_MOC_LITERAL(7, 20),  // "onSearchEditTextEdit"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 10)   // "searchText"
    },
    "T_Icon",
    "onSearchEditTextEdit",
    "",
    "searchText"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASST_IconENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject T_Icon::staticMetaObject = { {
    QMetaObject::SuperData::link<ElaScrollPage::staticMetaObject>(),
    qt_meta_stringdata_CLASST_IconENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASST_IconENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASST_IconENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<T_Icon, std::true_type>,
        // method 'onSearchEditTextEdit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void T_Icon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<T_Icon *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSearchEditTextEdit((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *T_Icon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *T_Icon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASST_IconENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ElaScrollPage::qt_metacast(_clname);
}

int T_Icon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ElaScrollPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
