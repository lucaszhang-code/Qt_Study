/****************************************************************************
** Meta object code from reading C++ file 'ElaSuggestBox.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ElaWidgetTools-1.2.0/src/include/ElaSuggestBox.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaSuggestBox.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSElaSuggestBoxENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSElaSuggestBoxENDCLASS = QtMocHelpers::stringData(
    "ElaSuggestBox",
    "pBorderRadiusChanged",
    "",
    "pCaseSensitivityChanged",
    "suggestionClicked",
    "suggestText",
    "suggestData",
    "pBorderRadius",
    "pCaseSensitivity",
    "Qt::CaseSensitivity"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSElaSuggestBoxENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[14];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[18];
    char stringdata5[12];
    char stringdata6[12];
    char stringdata7[14];
    char stringdata8[17];
    char stringdata9[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSElaSuggestBoxENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSElaSuggestBoxENDCLASS_t qt_meta_stringdata_CLASSElaSuggestBoxENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "ElaSuggestBox"
        QT_MOC_LITERAL(14, 20),  // "pBorderRadiusChanged"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 23),  // "pCaseSensitivityChanged"
        QT_MOC_LITERAL(60, 17),  // "suggestionClicked"
        QT_MOC_LITERAL(78, 11),  // "suggestText"
        QT_MOC_LITERAL(90, 11),  // "suggestData"
        QT_MOC_LITERAL(102, 13),  // "pBorderRadius"
        QT_MOC_LITERAL(116, 16),  // "pCaseSensitivity"
        QT_MOC_LITERAL(133, 19)   // "Qt::CaseSensitivity"
    },
    "ElaSuggestBox",
    "pBorderRadiusChanged",
    "",
    "pCaseSensitivityChanged",
    "suggestionClicked",
    "suggestText",
    "suggestData",
    "pBorderRadius",
    "pCaseSensitivity",
    "Qt::CaseSensitivity"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSElaSuggestBoxENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    3 /* Public */,
       3,    0,   33,    2, 0x06,    4 /* Public */,
       4,    2,   34,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap,    5,    6,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00015003, uint(0), 0,
       8, 0x80000000 | 9, 0x0001500b, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ElaSuggestBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSElaSuggestBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSElaSuggestBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSElaSuggestBoxENDCLASS_t,
        // property 'pBorderRadius'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'pCaseSensitivity'
        QtPrivate::TypeAndForceComplete<Qt::CaseSensitivity, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ElaSuggestBox, std::true_type>,
        // method 'pBorderRadiusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pCaseSensitivityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'suggestionClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>
    >,
    nullptr
} };

void ElaSuggestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaSuggestBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pBorderRadiusChanged(); break;
        case 1: _t->pCaseSensitivityChanged(); break;
        case 2: _t->suggestionClicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaSuggestBox::*)();
            if (_t _q_method = &ElaSuggestBox::pBorderRadiusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaSuggestBox::*)();
            if (_t _q_method = &ElaSuggestBox::pCaseSensitivityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaSuggestBox::*)(QString , QVariantMap );
            if (_t _q_method = &ElaSuggestBox::suggestionClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaSuggestBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getBorderRadius(); break;
        case 1: *reinterpret_cast< Qt::CaseSensitivity*>(_v) = _t->getCaseSensitivity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaSuggestBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBorderRadius(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setCaseSensitivity(*reinterpret_cast< Qt::CaseSensitivity*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ElaSuggestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaSuggestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSElaSuggestBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ElaSuggestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void ElaSuggestBox::pBorderRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaSuggestBox::pCaseSensitivityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaSuggestBox::suggestionClicked(QString _t1, QVariantMap _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
