/****************************************************************************
** Meta object code from reading C++ file 'FluWatermark.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../Demo1/FluentUI/FluWatermark.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FluWatermark.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluWatermark_t {
    uint offsetsAndSizes[30];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FluWatermark_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_FluWatermark_t qt_meta_stringdata_FluWatermark = {
    {
        QT_MOC_LITERAL(0, 12),  // "FluWatermark"
        QT_MOC_LITERAL(13, 11),  // "QML.Element"
        QT_MOC_LITERAL(25, 11),  // "textChanged"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 10),  // "gapChanged"
        QT_MOC_LITERAL(49, 13),  // "offsetChanged"
        QT_MOC_LITERAL(63, 16),  // "textColorChanged"
        QT_MOC_LITERAL(80, 13),  // "rotateChanged"
        QT_MOC_LITERAL(94, 15),  // "textSizeChanged"
        QT_MOC_LITERAL(110, 4),  // "text"
        QT_MOC_LITERAL(115, 3),  // "gap"
        QT_MOC_LITERAL(119, 6),  // "offset"
        QT_MOC_LITERAL(126, 9),  // "textColor"
        QT_MOC_LITERAL(136, 6),  // "rotate"
        QT_MOC_LITERAL(143, 8)   // "textSize"
    },
    "FluWatermark\0QML.Element\0textChanged\0"
    "\0gapChanged\0offsetChanged\0textColorChanged\0"
    "rotateChanged\0textSizeChanged\0text\0"
    "gap\0offset\0textColor\0rotate\0textSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluWatermark[] = {

 // content:
      10,       // revision
       0,       // classname
       1,   14, // classinfo
       6,   16, // methods
       6,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // classinfo: key, value
       1,    0,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       2,    0,   52,    3, 0x06,    7 /* Public */,
       4,    0,   53,    3, 0x06,    8 /* Public */,
       5,    0,   54,    3, 0x06,    9 /* Public */,
       6,    0,   55,    3, 0x06,   10 /* Public */,
       7,    0,   56,    3, 0x06,   11 /* Public */,
       8,    0,   57,    3, 0x06,   12 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00015003, uint(0), 0,
      10, QMetaType::QPoint, 0x00015003, uint(1), 0,
      11, QMetaType::QPoint, 0x00015003, uint(2), 0,
      12, QMetaType::QColor, 0x00015003, uint(3), 0,
      13, QMetaType::Int, 0x00015003, uint(4), 0,
      14, QMetaType::Int, 0x00015003, uint(5), 0,

       0        // eod
};

void FluWatermark::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluWatermark *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->gapChanged(); break;
        case 2: _t->offsetChanged(); break;
        case 3: _t->textColorChanged(); break;
        case 4: _t->rotateChanged(); break;
        case 5: _t->textSizeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluWatermark::*)();
            if (_t _q_method = &FluWatermark::textChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluWatermark::*)();
            if (_t _q_method = &FluWatermark::gapChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FluWatermark::*)();
            if (_t _q_method = &FluWatermark::offsetChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FluWatermark::*)();
            if (_t _q_method = &FluWatermark::textColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FluWatermark::*)();
            if (_t _q_method = &FluWatermark::rotateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FluWatermark::*)();
            if (_t _q_method = &FluWatermark::textSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluWatermark *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_text; break;
        case 1: *reinterpret_cast< QPoint*>(_v) = _t->_gap; break;
        case 2: *reinterpret_cast< QPoint*>(_v) = _t->_offset; break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->_textColor; break;
        case 4: *reinterpret_cast< int*>(_v) = _t->_rotate; break;
        case 5: *reinterpret_cast< int*>(_v) = _t->_textSize; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluWatermark *>(_o);
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
            if (_t->_gap != *reinterpret_cast< QPoint*>(_v)) {
                _t->_gap = *reinterpret_cast< QPoint*>(_v);
                Q_EMIT _t->gapChanged();
            }
            break;
        case 2:
            if (_t->_offset != *reinterpret_cast< QPoint*>(_v)) {
                _t->_offset = *reinterpret_cast< QPoint*>(_v);
                Q_EMIT _t->offsetChanged();
            }
            break;
        case 3:
            if (_t->_textColor != *reinterpret_cast< QColor*>(_v)) {
                _t->_textColor = *reinterpret_cast< QColor*>(_v);
                Q_EMIT _t->textColorChanged();
            }
            break;
        case 4:
            if (_t->_rotate != *reinterpret_cast< int*>(_v)) {
                _t->_rotate = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->rotateChanged();
            }
            break;
        case 5:
            if (_t->_textSize != *reinterpret_cast< int*>(_v)) {
                _t->_textSize = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->textSizeChanged();
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

const QMetaObject FluWatermark::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickPaintedItem::staticMetaObject>(),
    qt_meta_stringdata_FluWatermark.offsetsAndSizes,
    qt_meta_data_FluWatermark,
    qt_static_metacall,
    nullptr,
qt_metaTypeArray<
QString, QPoint, QPoint, QColor, int, int, FluWatermark, void, void, void, void, void, void



>,
    nullptr
} };


const QMetaObject *FluWatermark::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluWatermark::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluWatermark.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int FluWatermark::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FluWatermark::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FluWatermark::gapChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FluWatermark::offsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FluWatermark::textColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FluWatermark::rotateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void FluWatermark::textSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
