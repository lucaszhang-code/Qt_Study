/****************************************************************************
** Meta object code from reading C++ file 'ElaPushButton.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ElaWidgetTools-1.2.0/src/include/ElaPushButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaPushButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaPushButton_t {
    uint offsetsAndSizes[32];
    char stringdata0[298];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaPushButton_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaPushButton_t qt_meta_stringdata_ElaPushButton = {
    {
        QT_MOC_LITERAL(0, 13),  // "ElaPushButton"
        QT_MOC_LITERAL(14, 20),  // "pBorderRadiusChanged"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 25),  // "pLightDefaultColorChanged"
        QT_MOC_LITERAL(62, 24),  // "pDarkDefaultColorChanged"
        QT_MOC_LITERAL(87, 23),  // "pLightHoverColorChanged"
        QT_MOC_LITERAL(111, 22),  // "pDarkHoverColorChanged"
        QT_MOC_LITERAL(134, 23),  // "pLightPressColorChanged"
        QT_MOC_LITERAL(158, 22),  // "pDarkPressColorChanged"
        QT_MOC_LITERAL(181, 13),  // "pBorderRadius"
        QT_MOC_LITERAL(195, 18),  // "pLightDefaultColor"
        QT_MOC_LITERAL(214, 17),  // "pDarkDefaultColor"
        QT_MOC_LITERAL(232, 16),  // "pLightHoverColor"
        QT_MOC_LITERAL(249, 15),  // "pDarkHoverColor"
        QT_MOC_LITERAL(265, 16),  // "pLightPressColor"
        QT_MOC_LITERAL(282, 15)   // "pDarkPressColor"
    },
    "ElaPushButton\0pBorderRadiusChanged\0\0"
    "pLightDefaultColorChanged\0"
    "pDarkDefaultColorChanged\0"
    "pLightHoverColorChanged\0pDarkHoverColorChanged\0"
    "pLightPressColorChanged\0pDarkPressColorChanged\0"
    "pBorderRadius\0pLightDefaultColor\0"
    "pDarkDefaultColor\0pLightHoverColor\0"
    "pDarkHoverColor\0pLightPressColor\0"
    "pDarkPressColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaPushButton[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       7,   63, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    8 /* Public */,
       3,    0,   57,    2, 0x06,    9 /* Public */,
       4,    0,   58,    2, 0x06,   10 /* Public */,
       5,    0,   59,    2, 0x06,   11 /* Public */,
       6,    0,   60,    2, 0x06,   12 /* Public */,
       7,    0,   61,    2, 0x06,   13 /* Public */,
       8,    0,   62,    2, 0x06,   14 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Int, 0x00015003, uint(0), 0,
      10, QMetaType::QColor, 0x00015003, uint(1), 0,
      11, QMetaType::QColor, 0x00015003, uint(2), 0,
      12, QMetaType::QColor, 0x00015003, uint(3), 0,
      13, QMetaType::QColor, 0x00015003, uint(4), 0,
      14, QMetaType::QColor, 0x00015003, uint(5), 0,
      15, QMetaType::QColor, 0x00015003, uint(6), 0,

       0        // eod
};

void ElaPushButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaPushButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pBorderRadiusChanged(); break;
        case 1: _t->pLightDefaultColorChanged(); break;
        case 2: _t->pDarkDefaultColorChanged(); break;
        case 3: _t->pLightHoverColorChanged(); break;
        case 4: _t->pDarkHoverColorChanged(); break;
        case 5: _t->pLightPressColorChanged(); break;
        case 6: _t->pDarkPressColorChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaPushButton::*)();
            if (_t _q_method = &ElaPushButton::pBorderRadiusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaPushButton::*)();
            if (_t _q_method = &ElaPushButton::pLightDefaultColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaPushButton::*)();
            if (_t _q_method = &ElaPushButton::pDarkDefaultColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaPushButton::*)();
            if (_t _q_method = &ElaPushButton::pLightHoverColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ElaPushButton::*)();
            if (_t _q_method = &ElaPushButton::pDarkHoverColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ElaPushButton::*)();
            if (_t _q_method = &ElaPushButton::pLightPressColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ElaPushButton::*)();
            if (_t _q_method = &ElaPushButton::pDarkPressColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaPushButton *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getBorderRadius(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getLightDefaultColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getDarkDefaultColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getLightHoverColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->getDarkHoverColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->getLightPressColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->getDarkPressColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaPushButton *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBorderRadius(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setLightDefaultColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setDarkDefaultColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setLightHoverColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setDarkHoverColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setLightPressColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setDarkPressColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

const QMetaObject ElaPushButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_ElaPushButton.offsetsAndSizes,
    qt_meta_data_ElaPushButton,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaPushButton_t
, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<ElaPushButton, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *ElaPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaPushButton.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int ElaPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
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
void ElaPushButton::pBorderRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaPushButton::pLightDefaultColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaPushButton::pDarkDefaultColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ElaPushButton::pLightHoverColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ElaPushButton::pDarkHoverColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ElaPushButton::pLightPressColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ElaPushButton::pDarkPressColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
