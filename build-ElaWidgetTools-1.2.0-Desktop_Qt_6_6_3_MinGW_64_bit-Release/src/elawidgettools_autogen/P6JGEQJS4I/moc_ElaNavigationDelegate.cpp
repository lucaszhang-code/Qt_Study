/****************************************************************************
** Meta object code from reading C++ file 'ElaNavigationDelegate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ElaWidgetTools-1.2.0/src/DeveloperComponents/ElaNavigationDelegate.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaNavigationDelegate.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSElaNavigationDelegateENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSElaNavigationDelegateENDCLASS = QtMocHelpers::stringData(
    "ElaNavigationDelegate",
    "pOpacityChanged",
    "",
    "pRotateChanged",
    "pNavigationViewChanged",
    "pOpacity",
    "pRotate"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSElaNavigationDelegateENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[22];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[23];
    char stringdata5[9];
    char stringdata6[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSElaNavigationDelegateENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSElaNavigationDelegateENDCLASS_t qt_meta_stringdata_CLASSElaNavigationDelegateENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "ElaNavigationDelegate"
        QT_MOC_LITERAL(22, 15),  // "pOpacityChanged"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 14),  // "pRotateChanged"
        QT_MOC_LITERAL(54, 22),  // "pNavigationViewChanged"
        QT_MOC_LITERAL(77, 8),  // "pOpacity"
        QT_MOC_LITERAL(86, 7)   // "pRotate"
    },
    "ElaNavigationDelegate",
    "pOpacityChanged",
    "",
    "pRotateChanged",
    "pNavigationViewChanged",
    "pOpacity",
    "pRotate"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSElaNavigationDelegateENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   35, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    3 /* Public */,
       3,    0,   33,    2, 0x06,    4 /* Public */,
       4,    0,   34,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QReal, 0x00015003, uint(0), 0,
       6, QMetaType::QReal, 0x00015003, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ElaNavigationDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_CLASSElaNavigationDelegateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSElaNavigationDelegateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSElaNavigationDelegateENDCLASS_t,
        // property 'pOpacity'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'pRotate'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ElaNavigationDelegate, std::true_type>,
        // method 'pOpacityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pRotateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pNavigationViewChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ElaNavigationDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaNavigationDelegate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pOpacityChanged(); break;
        case 1: _t->pRotateChanged(); break;
        case 2: _t->pNavigationViewChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaNavigationDelegate::*)();
            if (_t _q_method = &ElaNavigationDelegate::pOpacityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaNavigationDelegate::*)();
            if (_t _q_method = &ElaNavigationDelegate::pRotateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaNavigationDelegate::*)();
            if (_t _q_method = &ElaNavigationDelegate::pNavigationViewChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaNavigationDelegate *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->getOpacity(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->getRotate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaNavigationDelegate *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setRotate(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *ElaNavigationDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaNavigationDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSElaNavigationDelegateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int ElaNavigationDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ElaNavigationDelegate::pOpacityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaNavigationDelegate::pRotateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaNavigationDelegate::pNavigationViewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
