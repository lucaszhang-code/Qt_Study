/****************************************************************************
** Meta object code from reading C++ file 'ElaGraphicsScene.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ElaWidgetTools-1.2.0/src/include/ElaGraphicsScene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaGraphicsScene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaGraphicsScene_t {
    uint offsetsAndSizes[32];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaGraphicsScene_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaGraphicsScene_t qt_meta_stringdata_ElaGraphicsScene = {
    {
        QT_MOC_LITERAL(0, 16),  // "ElaGraphicsScene"
        QT_MOC_LITERAL(17, 7),  // "Version"
        QT_MOC_LITERAL(25, 5),  // "1.0.0"
        QT_MOC_LITERAL(31, 19),  // "pIsAutoSobelChanged"
        QT_MOC_LITERAL(51, 0),  // ""
        QT_MOC_LITERAL(52, 23),  // "pIsCheckLinkPortChanged"
        QT_MOC_LITERAL(76, 21),  // "pSerializePathChanged"
        QT_MOC_LITERAL(98, 12),  // "showItemLink"
        QT_MOC_LITERAL(111, 20),  // "mouseLeftClickedItem"
        QT_MOC_LITERAL(132, 16),  // "ElaGraphicsItem*"
        QT_MOC_LITERAL(149, 4),  // "item"
        QT_MOC_LITERAL(154, 21),  // "mouseRightClickedItem"
        QT_MOC_LITERAL(176, 22),  // "mouseDoubleClickedItem"
        QT_MOC_LITERAL(199, 12),  // "pIsAutoSobel"
        QT_MOC_LITERAL(212, 16),  // "pIsCheckLinkPort"
        QT_MOC_LITERAL(229, 14)   // "pSerializePath"
    },
    "ElaGraphicsScene\0Version\0""1.0.0\0"
    "pIsAutoSobelChanged\0\0pIsCheckLinkPortChanged\0"
    "pSerializePathChanged\0showItemLink\0"
    "mouseLeftClickedItem\0ElaGraphicsItem*\0"
    "item\0mouseRightClickedItem\0"
    "mouseDoubleClickedItem\0pIsAutoSobel\0"
    "pIsCheckLinkPort\0pSerializePath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaGraphicsScene[] = {

 // content:
      10,       // revision
       0,       // classname
       1,   14, // classinfo
       7,   16, // methods
       3,   71, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   58,    4, 0x06,    4 /* Public */,
       5,    0,   59,    4, 0x06,    5 /* Public */,
       6,    0,   60,    4, 0x06,    6 /* Public */,
       7,    0,   61,    4, 0x06,    7 /* Public */,
       8,    1,   62,    4, 0x06,    8 /* Public */,
      11,    1,   65,    4, 0x06,   10 /* Public */,
      12,    1,   68,    4, 0x06,   12 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00015003, uint(0), 0,
      14, QMetaType::Bool, 0x00015003, uint(1), 0,
      15, QMetaType::QString, 0x00015003, uint(2), 0,

       0        // eod
};

void ElaGraphicsScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaGraphicsScene *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pIsAutoSobelChanged(); break;
        case 1: _t->pIsCheckLinkPortChanged(); break;
        case 2: _t->pSerializePathChanged(); break;
        case 3: _t->showItemLink(); break;
        case 4: _t->mouseLeftClickedItem((*reinterpret_cast< std::add_pointer_t<ElaGraphicsItem*>>(_a[1]))); break;
        case 5: _t->mouseRightClickedItem((*reinterpret_cast< std::add_pointer_t<ElaGraphicsItem*>>(_a[1]))); break;
        case 6: _t->mouseDoubleClickedItem((*reinterpret_cast< std::add_pointer_t<ElaGraphicsItem*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaGraphicsScene::*)();
            if (_t _q_method = &ElaGraphicsScene::pIsAutoSobelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsScene::*)();
            if (_t _q_method = &ElaGraphicsScene::pIsCheckLinkPortChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsScene::*)();
            if (_t _q_method = &ElaGraphicsScene::pSerializePathChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsScene::*)();
            if (_t _q_method = &ElaGraphicsScene::showItemLink; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsScene::*)(ElaGraphicsItem * );
            if (_t _q_method = &ElaGraphicsScene::mouseLeftClickedItem; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsScene::*)(ElaGraphicsItem * );
            if (_t _q_method = &ElaGraphicsScene::mouseRightClickedItem; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsScene::*)(ElaGraphicsItem * );
            if (_t _q_method = &ElaGraphicsScene::mouseDoubleClickedItem; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaGraphicsScene *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getIsAutoSobel(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getIsCheckLinkPort(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getSerializePath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaGraphicsScene *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsAutoSobel(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setIsCheckLinkPort(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setSerializePath(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ElaGraphicsScene::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_ElaGraphicsScene.offsetsAndSizes,
    qt_meta_data_ElaGraphicsScene,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaGraphicsScene_t
, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<ElaGraphicsScene, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ElaGraphicsItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ElaGraphicsItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ElaGraphicsItem *, std::false_type>



>,
    nullptr
} };


const QMetaObject *ElaGraphicsScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaGraphicsScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaGraphicsScene.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int ElaGraphicsScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ElaGraphicsScene::pIsAutoSobelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaGraphicsScene::pIsCheckLinkPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaGraphicsScene::pSerializePathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ElaGraphicsScene::showItemLink()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ElaGraphicsScene::mouseLeftClickedItem(ElaGraphicsItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ElaGraphicsScene::mouseRightClickedItem(ElaGraphicsItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ElaGraphicsScene::mouseDoubleClickedItem(ElaGraphicsItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
