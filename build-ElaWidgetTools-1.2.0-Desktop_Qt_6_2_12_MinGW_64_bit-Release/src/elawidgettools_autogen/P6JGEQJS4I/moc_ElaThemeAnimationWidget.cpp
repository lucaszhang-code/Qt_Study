/****************************************************************************
** Meta object code from reading C++ file 'ElaThemeAnimationWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ElaWidgetTools-1.2.0/src/DeveloperComponents/ElaThemeAnimationWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaThemeAnimationWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaThemeAnimationWidget_t {
    uint offsetsAndSizes[26];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ElaThemeAnimationWidget_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ElaThemeAnimationWidget_t qt_meta_stringdata_ElaThemeAnimationWidget = {
    {
        QT_MOC_LITERAL(0, 23),  // "ElaThemeAnimationWidget"
        QT_MOC_LITERAL(24, 14),  // "pRadiusChanged"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 17),  // "pEndRadiusChanged"
        QT_MOC_LITERAL(58, 14),  // "pCenterChanged"
        QT_MOC_LITERAL(73, 27),  // "pOldWindowBackgroundChanged"
        QT_MOC_LITERAL(101, 27),  // "pNewWindowBackgroundChanged"
        QT_MOC_LITERAL(129, 17),  // "animationFinished"
        QT_MOC_LITERAL(147, 7),  // "pRadius"
        QT_MOC_LITERAL(155, 10),  // "pEndRadius"
        QT_MOC_LITERAL(166, 7),  // "pCenter"
        QT_MOC_LITERAL(174, 20),  // "pOldWindowBackground"
        QT_MOC_LITERAL(195, 20)   // "pNewWindowBackground"
    },
    "ElaThemeAnimationWidget\0pRadiusChanged\0"
    "\0pEndRadiusChanged\0pCenterChanged\0"
    "pOldWindowBackgroundChanged\0"
    "pNewWindowBackgroundChanged\0"
    "animationFinished\0pRadius\0pEndRadius\0"
    "pCenter\0pOldWindowBackground\0"
    "pNewWindowBackground"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaThemeAnimationWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    6 /* Public */,
       3,    0,   51,    2, 0x06,    7 /* Public */,
       4,    0,   52,    2, 0x06,    8 /* Public */,
       5,    0,   53,    2, 0x06,    9 /* Public */,
       6,    0,   54,    2, 0x06,   10 /* Public */,
       7,    0,   55,    2, 0x06,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QReal, 0x00015003, uint(0), 0,
       9, QMetaType::QReal, 0x00015003, uint(1), 0,
      10, QMetaType::QPoint, 0x00015003, uint(2), 0,
      11, QMetaType::QImage, 0x00015003, uint(3), 0,
      12, QMetaType::QImage, 0x00015003, uint(4), 0,

       0        // eod
};

void ElaThemeAnimationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaThemeAnimationWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pRadiusChanged(); break;
        case 1: _t->pEndRadiusChanged(); break;
        case 2: _t->pCenterChanged(); break;
        case 3: _t->pOldWindowBackgroundChanged(); break;
        case 4: _t->pNewWindowBackgroundChanged(); break;
        case 5: _t->animationFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaThemeAnimationWidget::*)();
            if (_t _q_method = &ElaThemeAnimationWidget::pRadiusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaThemeAnimationWidget::*)();
            if (_t _q_method = &ElaThemeAnimationWidget::pEndRadiusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaThemeAnimationWidget::*)();
            if (_t _q_method = &ElaThemeAnimationWidget::pCenterChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaThemeAnimationWidget::*)();
            if (_t _q_method = &ElaThemeAnimationWidget::pOldWindowBackgroundChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ElaThemeAnimationWidget::*)();
            if (_t _q_method = &ElaThemeAnimationWidget::pNewWindowBackgroundChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ElaThemeAnimationWidget::*)();
            if (_t _q_method = &ElaThemeAnimationWidget::animationFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaThemeAnimationWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->_pRadius; break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->_pEndRadius; break;
        case 2: *reinterpret_cast< QPoint*>(_v) = _t->_pCenter; break;
        case 3: *reinterpret_cast< QImage*>(_v) = _t->_pOldWindowBackground; break;
        case 4: *reinterpret_cast< QImage*>(_v) = _t->_pNewWindowBackground; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaThemeAnimationWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_pRadius != *reinterpret_cast< qreal*>(_v)) {
                _t->_pRadius = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pRadiusChanged();
            }
            break;
        case 1:
            if (_t->_pEndRadius != *reinterpret_cast< qreal*>(_v)) {
                _t->_pEndRadius = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pEndRadiusChanged();
            }
            break;
        case 2:
            if (_t->_pCenter != *reinterpret_cast< QPoint*>(_v)) {
                _t->_pCenter = *reinterpret_cast< QPoint*>(_v);
                Q_EMIT _t->pCenterChanged();
            }
            break;
        case 3:
            if (_t->_pOldWindowBackground != *reinterpret_cast< QImage*>(_v)) {
                _t->_pOldWindowBackground = *reinterpret_cast< QImage*>(_v);
                Q_EMIT _t->pOldWindowBackgroundChanged();
            }
            break;
        case 4:
            if (_t->_pNewWindowBackground != *reinterpret_cast< QImage*>(_v)) {
                _t->_pNewWindowBackground = *reinterpret_cast< QImage*>(_v);
                Q_EMIT _t->pNewWindowBackgroundChanged();
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

const QMetaObject ElaThemeAnimationWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ElaThemeAnimationWidget.offsetsAndSizes,
    qt_meta_data_ElaThemeAnimationWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ElaThemeAnimationWidget_t
, QtPrivate::TypeAndForceComplete<qreal, std::true_type>, QtPrivate::TypeAndForceComplete<qreal, std::true_type>, QtPrivate::TypeAndForceComplete<QPoint, std::true_type>, QtPrivate::TypeAndForceComplete<QImage, std::true_type>, QtPrivate::TypeAndForceComplete<QImage, std::true_type>, QtPrivate::TypeAndForceComplete<ElaThemeAnimationWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *ElaThemeAnimationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaThemeAnimationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaThemeAnimationWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ElaThemeAnimationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ElaThemeAnimationWidget::pRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaThemeAnimationWidget::pEndRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaThemeAnimationWidget::pCenterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ElaThemeAnimationWidget::pOldWindowBackgroundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ElaThemeAnimationWidget::pNewWindowBackgroundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ElaThemeAnimationWidget::animationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
