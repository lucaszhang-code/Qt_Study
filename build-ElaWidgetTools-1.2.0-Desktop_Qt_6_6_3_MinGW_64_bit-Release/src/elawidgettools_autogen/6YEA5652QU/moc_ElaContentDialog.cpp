/****************************************************************************
** Meta object code from reading C++ file 'ElaContentDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ElaWidgetTools-1.2.0/src/include/ElaContentDialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaContentDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSElaContentDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSElaContentDialogENDCLASS = QtMocHelpers::stringData(
    "ElaContentDialog",
    "leftButtonClicked",
    "",
    "middleButtonClicked",
    "rightButtonClicked",
    "onLeftButtonClicked",
    "onMiddleButtonClicked",
    "onRightButtonClicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSElaContentDialogENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[17];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[19];
    char stringdata5[20];
    char stringdata6[22];
    char stringdata7[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSElaContentDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSElaContentDialogENDCLASS_t qt_meta_stringdata_CLASSElaContentDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "ElaContentDialog"
        QT_MOC_LITERAL(17, 17),  // "leftButtonClicked"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 19),  // "middleButtonClicked"
        QT_MOC_LITERAL(56, 18),  // "rightButtonClicked"
        QT_MOC_LITERAL(75, 19),  // "onLeftButtonClicked"
        QT_MOC_LITERAL(95, 21),  // "onMiddleButtonClicked"
        QT_MOC_LITERAL(117, 20)   // "onRightButtonClicked"
    },
    "ElaContentDialog",
    "leftButtonClicked",
    "",
    "middleButtonClicked",
    "rightButtonClicked",
    "onLeftButtonClicked",
    "onMiddleButtonClicked",
    "onRightButtonClicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSElaContentDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    0,   51,    2, 0x06,    2 /* Public */,
       4,    0,   52,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   53,    2, 0x0a,    4 /* Public */,
       6,    0,   54,    2, 0x0a,    5 /* Public */,
       7,    0,   55,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ElaContentDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSElaContentDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSElaContentDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSElaContentDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ElaContentDialog, std::true_type>,
        // method 'leftButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'middleButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rightButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLeftButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMiddleButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRightButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ElaContentDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaContentDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->leftButtonClicked(); break;
        case 1: _t->middleButtonClicked(); break;
        case 2: _t->rightButtonClicked(); break;
        case 3: _t->onLeftButtonClicked(); break;
        case 4: _t->onMiddleButtonClicked(); break;
        case 5: _t->onRightButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaContentDialog::*)();
            if (_t _q_method = &ElaContentDialog::leftButtonClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaContentDialog::*)();
            if (_t _q_method = &ElaContentDialog::middleButtonClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaContentDialog::*)();
            if (_t _q_method = &ElaContentDialog::rightButtonClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *ElaContentDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaContentDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSElaContentDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ElaContentDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ElaContentDialog::leftButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaContentDialog::middleButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaContentDialog::rightButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP