/****************************************************************************
** Meta object code from reading C++ file 'ElaGraphicsItem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ElaWidgetTools-1.2.0/src/include/ElaGraphicsItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaGraphicsItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaGraphicsItem_t {
    uint offsetsAndSizes[38];
    char stringdata0[298];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaGraphicsItem_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaGraphicsItem_t qt_meta_stringdata_ElaGraphicsItem = {
    {
        QT_MOC_LITERAL(0, 15),  // "ElaGraphicsItem"
        QT_MOC_LITERAL(16, 13),  // "pWidthChanged"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 14),  // "pHeightChanged"
        QT_MOC_LITERAL(46, 17),  // "pItemImageChanged"
        QT_MOC_LITERAL(64, 25),  // "pItemSelectedImageChanged"
        QT_MOC_LITERAL(90, 16),  // "pItemNameChanged"
        QT_MOC_LITERAL(107, 18),  // "pDataRoutesChanged"
        QT_MOC_LITERAL(126, 24),  // "pMaxLinkPortCountChanged"
        QT_MOC_LITERAL(151, 28),  // "pCurrentLinkPortCountChanged"
        QT_MOC_LITERAL(180, 10),  // "getItemUID"
        QT_MOC_LITERAL(191, 6),  // "pWidth"
        QT_MOC_LITERAL(198, 7),  // "pHeight"
        QT_MOC_LITERAL(206, 10),  // "pItemImage"
        QT_MOC_LITERAL(217, 18),  // "pItemSelectedImage"
        QT_MOC_LITERAL(236, 9),  // "pItemName"
        QT_MOC_LITERAL(246, 11),  // "pDataRoutes"
        QT_MOC_LITERAL(258, 17),  // "pMaxLinkPortCount"
        QT_MOC_LITERAL(276, 21)   // "pCurrentLinkPortCount"
    },
    "ElaGraphicsItem\0pWidthChanged\0\0"
    "pHeightChanged\0pItemImageChanged\0"
    "pItemSelectedImageChanged\0pItemNameChanged\0"
    "pDataRoutesChanged\0pMaxLinkPortCountChanged\0"
    "pCurrentLinkPortCountChanged\0getItemUID\0"
    "pWidth\0pHeight\0pItemImage\0pItemSelectedImage\0"
    "pItemName\0pDataRoutes\0pMaxLinkPortCount\0"
    "pCurrentLinkPortCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaGraphicsItem[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       8,   77, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    9 /* Public */,
       3,    0,   69,    2, 0x06,   10 /* Public */,
       4,    0,   70,    2, 0x06,   11 /* Public */,
       5,    0,   71,    2, 0x06,   12 /* Public */,
       6,    0,   72,    2, 0x06,   13 /* Public */,
       7,    0,   73,    2, 0x06,   14 /* Public */,
       8,    0,   74,    2, 0x06,   15 /* Public */,
       9,    0,   75,    2, 0x06,   16 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   76,    2, 0x102,   17 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString,

 // properties: name, type, flags
      11, QMetaType::Int, 0x00015003, uint(0), 0,
      12, QMetaType::Int, 0x00015003, uint(1), 0,
      13, QMetaType::QImage, 0x00015003, uint(2), 0,
      14, QMetaType::QImage, 0x00015003, uint(3), 0,
      15, QMetaType::QString, 0x00015003, uint(4), 0,
      16, QMetaType::QJsonObject, 0x00015003, uint(5), 0,
      17, QMetaType::Int, 0x00015003, uint(6), 0,
      18, QMetaType::Int, 0x00015003, uint(7), 0,

       0        // eod
};

void ElaGraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaGraphicsItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pWidthChanged(); break;
        case 1: _t->pHeightChanged(); break;
        case 2: _t->pItemImageChanged(); break;
        case 3: _t->pItemSelectedImageChanged(); break;
        case 4: _t->pItemNameChanged(); break;
        case 5: _t->pDataRoutesChanged(); break;
        case 6: _t->pMaxLinkPortCountChanged(); break;
        case 7: _t->pCurrentLinkPortCountChanged(); break;
        case 8: { QString _r = _t->getItemUID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaGraphicsItem::*)();
            if (_t _q_method = &ElaGraphicsItem::pWidthChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsItem::*)();
            if (_t _q_method = &ElaGraphicsItem::pHeightChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsItem::*)();
            if (_t _q_method = &ElaGraphicsItem::pItemImageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsItem::*)();
            if (_t _q_method = &ElaGraphicsItem::pItemSelectedImageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsItem::*)();
            if (_t _q_method = &ElaGraphicsItem::pItemNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsItem::*)();
            if (_t _q_method = &ElaGraphicsItem::pDataRoutesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsItem::*)();
            if (_t _q_method = &ElaGraphicsItem::pMaxLinkPortCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsItem::*)();
            if (_t _q_method = &ElaGraphicsItem::pCurrentLinkPortCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaGraphicsItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getWidth(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getHeight(); break;
        case 2: *reinterpret_cast< QImage*>(_v) = _t->getItemImage(); break;
        case 3: *reinterpret_cast< QImage*>(_v) = _t->getItemSelectedImage(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getItemName(); break;
        case 5: *reinterpret_cast< QJsonObject*>(_v) = _t->getDataRoutes(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->getMaxLinkPortCount(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->getCurrentLinkPortCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaGraphicsItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWidth(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setHeight(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setItemImage(*reinterpret_cast< QImage*>(_v)); break;
        case 3: _t->setItemSelectedImage(*reinterpret_cast< QImage*>(_v)); break;
        case 4: _t->setItemName(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setDataRoutes(*reinterpret_cast< QJsonObject*>(_v)); break;
        case 6: _t->setMaxLinkPortCount(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setCurrentLinkPortCount(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ElaGraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsObject::staticMetaObject>(),
    qt_meta_stringdata_ElaGraphicsItem.offsetsAndSizes,
    qt_meta_data_ElaGraphicsItem,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaGraphicsItem_t
, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<QImage, std::true_type>, QtPrivate::TypeAndForceComplete<QImage, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QJsonObject, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<ElaGraphicsItem, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>

, QtPrivate::TypeAndForceComplete<QString, std::false_type>

>,
    nullptr
} };


const QMetaObject *ElaGraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaGraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaGraphicsItem.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsObject::qt_metacast(_clname);
}

int ElaGraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ElaGraphicsItem::pWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaGraphicsItem::pHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaGraphicsItem::pItemImageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ElaGraphicsItem::pItemSelectedImageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ElaGraphicsItem::pItemNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ElaGraphicsItem::pDataRoutesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ElaGraphicsItem::pMaxLinkPortCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ElaGraphicsItem::pCurrentLinkPortCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
