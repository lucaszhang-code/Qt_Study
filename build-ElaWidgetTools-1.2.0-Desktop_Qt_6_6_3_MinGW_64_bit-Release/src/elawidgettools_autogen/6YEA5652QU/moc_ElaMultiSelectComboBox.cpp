/****************************************************************************
** Meta object code from reading C++ file 'ElaMultiSelectComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ElaWidgetTools-1.2.0/src/include/ElaMultiSelectComboBox.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaMultiSelectComboBox.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSElaMultiSelectComboBoxENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSElaMultiSelectComboBoxENDCLASS = QtMocHelpers::stringData(
    "ElaMultiSelectComboBox",
    "pBorderRadiusChanged",
    "",
    "itemSelectionChanged",
    "QList<bool>",
    "itemSelection",
    "currentTextListChanged",
    "selectedTextList",
    "pBorderRadius"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSElaMultiSelectComboBoxENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[23];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[12];
    char stringdata5[14];
    char stringdata6[23];
    char stringdata7[17];
    char stringdata8[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSElaMultiSelectComboBoxENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSElaMultiSelectComboBoxENDCLASS_t qt_meta_stringdata_CLASSElaMultiSelectComboBoxENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "ElaMultiSelectComboBox"
        QT_MOC_LITERAL(23, 20),  // "pBorderRadiusChanged"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 20),  // "itemSelectionChanged"
        QT_MOC_LITERAL(66, 11),  // "QList<bool>"
        QT_MOC_LITERAL(78, 13),  // "itemSelection"
        QT_MOC_LITERAL(92, 22),  // "currentTextListChanged"
        QT_MOC_LITERAL(115, 16),  // "selectedTextList"
        QT_MOC_LITERAL(132, 13)   // "pBorderRadius"
    },
    "ElaMultiSelectComboBox",
    "pBorderRadiusChanged",
    "",
    "itemSelectionChanged",
    "QList<bool>",
    "itemSelection",
    "currentTextListChanged",
    "selectedTextList",
    "pBorderRadius"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSElaMultiSelectComboBoxENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    2 /* Public */,
       3,    1,   33,    2, 0x06,    3 /* Public */,
       6,    1,   36,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QStringList,    7,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00015003, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ElaMultiSelectComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSElaMultiSelectComboBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSElaMultiSelectComboBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSElaMultiSelectComboBoxENDCLASS_t,
        // property 'pBorderRadius'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ElaMultiSelectComboBox, std::true_type>,
        // method 'pBorderRadiusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'itemSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<bool>, std::false_type>,
        // method 'currentTextListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>
    >,
    nullptr
} };

void ElaMultiSelectComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaMultiSelectComboBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pBorderRadiusChanged(); break;
        case 1: _t->itemSelectionChanged((*reinterpret_cast< std::add_pointer_t<QList<bool>>>(_a[1]))); break;
        case 2: _t->currentTextListChanged((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<bool> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaMultiSelectComboBox::*)();
            if (_t _q_method = &ElaMultiSelectComboBox::pBorderRadiusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaMultiSelectComboBox::*)(QVector<bool> );
            if (_t _q_method = &ElaMultiSelectComboBox::itemSelectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaMultiSelectComboBox::*)(QStringList );
            if (_t _q_method = &ElaMultiSelectComboBox::currentTextListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaMultiSelectComboBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getBorderRadius(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaMultiSelectComboBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBorderRadius(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ElaMultiSelectComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaMultiSelectComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSElaMultiSelectComboBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int ElaMultiSelectComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ElaMultiSelectComboBox::pBorderRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaMultiSelectComboBox::itemSelectionChanged(QVector<bool> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ElaMultiSelectComboBox::currentTextListChanged(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
