/****************************************************************************
** Meta object code from reading C++ file 'ElaImageCard.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ElaWidgetTools-1.2.0/src/include/ElaImageCard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaImageCard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaImageCard_t {
    uint offsetsAndSizes[20];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaImageCard_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaImageCard_t qt_meta_stringdata_ElaImageCard = {
    {
        QT_MOC_LITERAL(0, 12),  // "ElaImageCard"
        QT_MOC_LITERAL(13, 17),  // "pCardImageChanged"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 20),  // "pBorderRadiusChanged"
        QT_MOC_LITERAL(53, 28),  // "pIsPreserveAspectCropChanged"
        QT_MOC_LITERAL(82, 26),  // "pMaximumAspectRatioChanged"
        QT_MOC_LITERAL(109, 10),  // "pCardImage"
        QT_MOC_LITERAL(120, 13),  // "pBorderRadius"
        QT_MOC_LITERAL(134, 21),  // "pIsPreserveAspectCrop"
        QT_MOC_LITERAL(156, 19)   // "pMaximumAspectRatio"
    },
    "ElaImageCard\0pCardImageChanged\0\0"
    "pBorderRadiusChanged\0pIsPreserveAspectCropChanged\0"
    "pMaximumAspectRatioChanged\0pCardImage\0"
    "pBorderRadius\0pIsPreserveAspectCrop\0"
    "pMaximumAspectRatio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaImageCard[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    5 /* Public */,
       3,    0,   39,    2, 0x06,    6 /* Public */,
       4,    0,   40,    2, 0x06,    7 /* Public */,
       5,    0,   41,    2, 0x06,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QImage, 0x00015003, uint(0), 0,
       7, QMetaType::Int, 0x00015003, uint(1), 0,
       8, QMetaType::Bool, 0x00015003, uint(2), 0,
       9, QMetaType::QReal, 0x00015003, uint(3), 0,

       0        // eod
};

void ElaImageCard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaImageCard *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pCardImageChanged(); break;
        case 1: _t->pBorderRadiusChanged(); break;
        case 2: _t->pIsPreserveAspectCropChanged(); break;
        case 3: _t->pMaximumAspectRatioChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaImageCard::*)();
            if (_t _q_method = &ElaImageCard::pCardImageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaImageCard::*)();
            if (_t _q_method = &ElaImageCard::pBorderRadiusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaImageCard::*)();
            if (_t _q_method = &ElaImageCard::pIsPreserveAspectCropChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaImageCard::*)();
            if (_t _q_method = &ElaImageCard::pMaximumAspectRatioChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaImageCard *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QImage*>(_v) = _t->_pCardImage; break;
        case 1: *reinterpret_cast< int*>(_v) = _t->_pBorderRadius; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->_pIsPreserveAspectCrop; break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->_pMaximumAspectRatio; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaImageCard *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_pCardImage != *reinterpret_cast< QImage*>(_v)) {
                _t->_pCardImage = *reinterpret_cast< QImage*>(_v);
                Q_EMIT _t->pCardImageChanged();
            }
            break;
        case 1:
            if (_t->_pBorderRadius != *reinterpret_cast< int*>(_v)) {
                _t->_pBorderRadius = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->pBorderRadiusChanged();
            }
            break;
        case 2:
            if (_t->_pIsPreserveAspectCrop != *reinterpret_cast< bool*>(_v)) {
                _t->_pIsPreserveAspectCrop = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->pIsPreserveAspectCropChanged();
            }
            break;
        case 3:
            if (_t->_pMaximumAspectRatio != *reinterpret_cast< qreal*>(_v)) {
                _t->_pMaximumAspectRatio = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pMaximumAspectRatioChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

const QMetaObject ElaImageCard::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ElaImageCard.offsetsAndSizes,
    qt_meta_data_ElaImageCard,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaImageCard_t
, QtPrivate::TypeAndForceComplete<QImage, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<qreal, std::true_type>, QtPrivate::TypeAndForceComplete<ElaImageCard, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *ElaImageCard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaImageCard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaImageCard.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ElaImageCard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ElaImageCard::pCardImageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaImageCard::pBorderRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaImageCard::pIsPreserveAspectCropChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ElaImageCard::pMaximumAspectRatioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
