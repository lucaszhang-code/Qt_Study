/****************************************************************************
** Meta object code from reading C++ file 'ElaSuggestBoxPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ElaWidgetTools-1.2.0/src/private/ElaSuggestBoxPrivate.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaSuggestBoxPrivate.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSElaSuggestionENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSElaSuggestionENDCLASS = QtMocHelpers::stringData(
    "ElaSuggestion",
    "pElaIconChanged",
    "",
    "pSuggestTextChanged",
    "pSuggestDataChanged",
    "pElaIcon",
    "ElaIconType",
    "pSuggestText",
    "pSuggestData"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSElaSuggestionENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[14];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[20];
    char stringdata5[9];
    char stringdata6[12];
    char stringdata7[13];
    char stringdata8[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSElaSuggestionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSElaSuggestionENDCLASS_t qt_meta_stringdata_CLASSElaSuggestionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "ElaSuggestion"
        QT_MOC_LITERAL(14, 15),  // "pElaIconChanged"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 19),  // "pSuggestTextChanged"
        QT_MOC_LITERAL(51, 19),  // "pSuggestDataChanged"
        QT_MOC_LITERAL(71, 8),  // "pElaIcon"
        QT_MOC_LITERAL(80, 11),  // "ElaIconType"
        QT_MOC_LITERAL(92, 12),  // "pSuggestText"
        QT_MOC_LITERAL(105, 12)   // "pSuggestData"
    },
    "ElaSuggestion",
    "pElaIconChanged",
    "",
    "pSuggestTextChanged",
    "pSuggestDataChanged",
    "pElaIcon",
    "ElaIconType",
    "pSuggestText",
    "pSuggestData"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSElaSuggestionENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   35, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    4 /* Public */,
       3,    0,   33,    2, 0x06,    5 /* Public */,
       4,    0,   34,    2, 0x06,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0001500b, uint(0), 0,
       7, QMetaType::QString, 0x00015003, uint(1), 0,
       8, QMetaType::QVariantMap, 0x00015003, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ElaSuggestion::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSElaSuggestionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSElaSuggestionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSElaSuggestionENDCLASS_t,
        // property 'pElaIcon'
        QtPrivate::TypeAndForceComplete<ElaIconType, std::true_type>,
        // property 'pSuggestText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'pSuggestData'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ElaSuggestion, std::true_type>,
        // method 'pElaIconChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pSuggestTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pSuggestDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ElaSuggestion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaSuggestion *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pElaIconChanged(); break;
        case 1: _t->pSuggestTextChanged(); break;
        case 2: _t->pSuggestDataChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaSuggestion::*)();
            if (_t _q_method = &ElaSuggestion::pElaIconChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaSuggestion::*)();
            if (_t _q_method = &ElaSuggestion::pSuggestTextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaSuggestion::*)();
            if (_t _q_method = &ElaSuggestion::pSuggestDataChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaSuggestion *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ElaIconType*>(_v) = _t->_pElaIcon; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_pSuggestText; break;
        case 2: *reinterpret_cast< QVariantMap*>(_v) = _t->_pSuggestData; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaSuggestion *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_pElaIcon != *reinterpret_cast< ElaIconType*>(_v)) {
                _t->_pElaIcon = *reinterpret_cast< ElaIconType*>(_v);
                Q_EMIT _t->pElaIconChanged();
            }
            break;
        case 1:
            if (_t->_pSuggestText != *reinterpret_cast< QString*>(_v)) {
                _t->_pSuggestText = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->pSuggestTextChanged();
            }
            break;
        case 2:
            if (_t->_pSuggestData != *reinterpret_cast< QVariantMap*>(_v)) {
                _t->_pSuggestData = *reinterpret_cast< QVariantMap*>(_v);
                Q_EMIT _t->pSuggestDataChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *ElaSuggestion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaSuggestion::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSElaSuggestionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaSuggestion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ElaSuggestion::pElaIconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaSuggestion::pSuggestTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaSuggestion::pSuggestDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSElaSuggestBoxPrivateENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSElaSuggestBoxPrivateENDCLASS = QtMocHelpers::stringData(
    "ElaSuggestBoxPrivate",
    "onSearchEditTextEdit",
    "",
    "searchText",
    "onSearchViewClicked",
    "QModelIndex",
    "index"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSElaSuggestBoxPrivateENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[21];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[20];
    char stringdata5[12];
    char stringdata6[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSElaSuggestBoxPrivateENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSElaSuggestBoxPrivateENDCLASS_t qt_meta_stringdata_CLASSElaSuggestBoxPrivateENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "ElaSuggestBoxPrivate"
        QT_MOC_LITERAL(21, 20),  // "onSearchEditTextEdit"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 10),  // "searchText"
        QT_MOC_LITERAL(54, 19),  // "onSearchViewClicked"
        QT_MOC_LITERAL(74, 11),  // "QModelIndex"
        QT_MOC_LITERAL(86, 5)   // "index"
    },
    "ElaSuggestBoxPrivate",
    "onSearchEditTextEdit",
    "",
    "searchText",
    "onSearchViewClicked",
    "QModelIndex",
    "index"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSElaSuggestBoxPrivateENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x0a,    1 /* Public */,
       4,    1,   29,    2, 0x0a,    3 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject ElaSuggestBoxPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSElaSuggestBoxPrivateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSElaSuggestBoxPrivateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSElaSuggestBoxPrivateENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ElaSuggestBoxPrivate, std::true_type>,
        // method 'onSearchEditTextEdit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onSearchViewClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void ElaSuggestBoxPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaSuggestBoxPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSearchEditTextEdit((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->onSearchViewClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ElaSuggestBoxPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaSuggestBoxPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSElaSuggestBoxPrivateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaSuggestBoxPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP