/****************************************************************************
** Meta object code from reading C++ file 'FluQrCodeItem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../Demo1/FluentUI/FluQrCodeItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FluQrCodeItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluQrCodeItem_t {
    uint offsetsAndSizes[22];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FluQrCodeItem_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_FluQrCodeItem_t qt_meta_stringdata_FluQrCodeItem = {
    {
        QT_MOC_LITERAL(0, 13),  // "FluQrCodeItem"
        QT_MOC_LITERAL(14, 11),  // "QML.Element"
        QT_MOC_LITERAL(26, 11),  // "textChanged"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 12),  // "colorChanged"
        QT_MOC_LITERAL(52, 14),  // "bgColorChanged"
        QT_MOC_LITERAL(67, 11),  // "sizeChanged"
        QT_MOC_LITERAL(79, 4),  // "text"
        QT_MOC_LITERAL(84, 5),  // "color"
        QT_MOC_LITERAL(90, 7),  // "bgColor"
        QT_MOC_LITERAL(98, 4)   // "size"
    },
    "FluQrCodeItem\0QML.Element\0textChanged\0"
    "\0colorChanged\0bgColorChanged\0sizeChanged\0"
    "text\0color\0bgColor\0size"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluQrCodeItem[] = {

 // content:
      10,       // revision
       0,       // classname
       1,   14, // classinfo
       4,   16, // methods
       4,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    0,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       2,    0,   40,    3, 0x06,    5 /* Public */,
       4,    0,   41,    3, 0x06,    6 /* Public */,
       5,    0,   42,    3, 0x06,    7 /* Public */,
       6,    0,   43,    3, 0x06,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00015003, uint(0), 0,
       8, QMetaType::QColor, 0x00015003, uint(1), 0,
       9, QMetaType::QColor, 0x00015003, uint(2), 0,
      10, QMetaType::Int, 0x00015003, uint(3), 0,

       0        // eod
};

void FluQrCodeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluQrCodeItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->colorChanged(); break;
        case 2: _t->bgColorChanged(); break;
        case 3: _t->sizeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluQrCodeItem::*)();
            if (_t _q_method = &FluQrCodeItem::textChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluQrCodeItem::*)();
            if (_t _q_method = &FluQrCodeItem::colorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FluQrCodeItem::*)();
            if (_t _q_method = &FluQrCodeItem::bgColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FluQrCodeItem::*)();
            if (_t _q_method = &FluQrCodeItem::sizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluQrCodeItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_text; break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->_color; break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->_bgColor; break;
        case 3: *reinterpret_cast< int*>(_v) = _t->_size; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluQrCodeItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_text != *reinterpret_cast< QString*>(_v)) {
                _t->_text = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->textChanged();
            }
            break;
        case 1:
            if (_t->_color != *reinterpret_cast< QColor*>(_v)) {
                _t->_color = *reinterpret_cast< QColor*>(_v);
                Q_EMIT _t->colorChanged();
            }
            break;
        case 2:
            if (_t->_bgColor != *reinterpret_cast< QColor*>(_v)) {
                _t->_bgColor = *reinterpret_cast< QColor*>(_v);
                Q_EMIT _t->bgColorChanged();
            }
            break;
        case 3:
            if (_t->_size != *reinterpret_cast< int*>(_v)) {
                _t->_size = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->sizeChanged();
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

const QMetaObject FluQrCodeItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickPaintedItem::staticMetaObject>(),
    qt_meta_stringdata_FluQrCodeItem.offsetsAndSizes,
    qt_meta_data_FluQrCodeItem,
    qt_static_metacall,
    nullptr,
qt_metaTypeArray<
QString, QColor, QColor, int, FluQrCodeItem, void, void, void, void



>,
    nullptr
} };


const QMetaObject *FluQrCodeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluQrCodeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluQrCodeItem.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int FluQrCodeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
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
void FluQrCodeItem::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FluQrCodeItem::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FluQrCodeItem::bgColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FluQrCodeItem::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
