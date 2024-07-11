/****************************************************************************
** Meta object code from reading C++ file 'FluTreeModel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../Demo1/FluentUI/FluTreeModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FluTreeModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluTreeNode_t {
    uint offsetsAndSizes[20];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FluTreeNode_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_FluTreeNode_t qt_meta_stringdata_FluTreeNode = {
    {
        QT_MOC_LITERAL(0, 11),  // "FluTreeNode"
        QT_MOC_LITERAL(12, 5),  // "depth"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 10),  // "isExpanded"
        QT_MOC_LITERAL(30, 4),  // "data"
        QT_MOC_LITERAL(35, 11),  // "hasChildren"
        QT_MOC_LITERAL(47, 18),  // "hasNextNodeByIndex"
        QT_MOC_LITERAL(66, 5),  // "index"
        QT_MOC_LITERAL(72, 7),  // "checked"
        QT_MOC_LITERAL(80, 14)   // "hideLineFooter"
    },
    "FluTreeNode\0depth\0\0isExpanded\0data\0"
    "hasChildren\0hasNextNodeByIndex\0index\0"
    "checked\0hideLineFooter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluTreeNode[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   65, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x102,    5 /* Public | MethodIsConst  */,
       3,    0,   57,    2, 0x102,    6 /* Public | MethodIsConst  */,
       4,    0,   58,    2, 0x102,    7 /* Public | MethodIsConst  */,
       5,    0,   59,    2, 0x102,    8 /* Public | MethodIsConst  */,
       6,    1,   60,    2, 0x02,    9 /* Public */,
       8,    0,   63,    2, 0x102,   11 /* Public | MethodIsConst  */,
       9,    0,   64,    2, 0x02,   12 /* Public */,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::QVariantMap,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Int,    7,
    QMetaType::Bool,
    QMetaType::Bool,

 // properties: name, type, flags
       4, QMetaType::QVariantMap, 0x00015401, uint(-1), 0,
       1, QMetaType::Int, 0x00015401, uint(-1), 0,
       3, QMetaType::Bool, 0x00015401, uint(-1), 0,
       8, QMetaType::Bool, 0x00015401, uint(-1), 0,

       0        // eod
};

void FluTreeNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluTreeNode *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { int _r = _t->depth();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->isExpanded();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { QVariantMap _r = _t->data();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->hasChildren();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->hasNextNodeByIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->checked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->hideLineFooter();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluTreeNode *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantMap*>(_v) = _t->data(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->depth(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isExpanded(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->checked(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject FluTreeNode::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FluTreeNode.offsetsAndSizes,
    qt_meta_data_FluTreeNode,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_FluTreeNode_t
, QtPrivate::TypeAndForceComplete<QVariantMap, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<FluTreeNode, std::true_type>

, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>

>,
    nullptr
} };


const QMetaObject *FluTreeNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluTreeNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluTreeNode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FluTreeNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_FluTreeModel_t {
    uint offsetsAndSizes[60];
    char stringdata0[364];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FluTreeModel_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_FluTreeModel_t qt_meta_stringdata_FluTreeModel = {
    {
        QT_MOC_LITERAL(0, 12),  // "FluTreeModel"
        QT_MOC_LITERAL(13, 11),  // "QML.Element"
        QT_MOC_LITERAL(25, 21),  // "dataSourceSizeChanged"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 19),  // "columnSourceChanged"
        QT_MOC_LITERAL(68, 10),  // "removeRows"
        QT_MOC_LITERAL(79, 3),  // "row"
        QT_MOC_LITERAL(83, 5),  // "count"
        QT_MOC_LITERAL(89, 10),  // "insertRows"
        QT_MOC_LITERAL(100, 19),  // "QList<FluTreeNode*>"
        QT_MOC_LITERAL(120, 4),  // "data"
        QT_MOC_LITERAL(125, 6),  // "getRow"
        QT_MOC_LITERAL(132, 6),  // "setRow"
        QT_MOC_LITERAL(139, 7),  // "setData"
        QT_MOC_LITERAL(147, 13),  // "setDataSource"
        QT_MOC_LITERAL(161, 29),  // "QList<QMap<QString,QVariant>>"
        QT_MOC_LITERAL(191, 8),  // "collapse"
        QT_MOC_LITERAL(200, 6),  // "expand"
        QT_MOC_LITERAL(207, 7),  // "getNode"
        QT_MOC_LITERAL(215, 12),  // "FluTreeNode*"
        QT_MOC_LITERAL(228, 11),  // "refreshNode"
        QT_MOC_LITERAL(240, 8),  // "checkRow"
        QT_MOC_LITERAL(249, 7),  // "checked"
        QT_MOC_LITERAL(257, 22),  // "hitHasChildrenExpanded"
        QT_MOC_LITERAL(280, 9),  // "allExpand"
        QT_MOC_LITERAL(290, 11),  // "allCollapse"
        QT_MOC_LITERAL(302, 14),  // "selectionModel"
        QT_MOC_LITERAL(317, 14),  // "dataSourceSize"
        QT_MOC_LITERAL(332, 12),  // "columnSource"
        QT_MOC_LITERAL(345, 18)   // "QList<QVariantMap>"
    },
    "FluTreeModel\0QML.Element\0dataSourceSizeChanged\0"
    "\0columnSourceChanged\0removeRows\0row\0"
    "count\0insertRows\0QList<FluTreeNode*>\0"
    "data\0getRow\0setRow\0setData\0setDataSource\0"
    "QList<QMap<QString,QVariant>>\0collapse\0"
    "expand\0getNode\0FluTreeNode*\0refreshNode\0"
    "checkRow\0checked\0hitHasChildrenExpanded\0"
    "allExpand\0allCollapse\0selectionModel\0"
    "dataSourceSize\0columnSource\0"
    "QList<QVariantMap>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluTreeModel[] = {

 // content:
      10,       // revision
       0,       // classname
       1,   14, // classinfo
      17,   16, // methods
       2,  167, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    0,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       2,    0,  118,    3, 0x06,    3 /* Public */,
       4,    0,  119,    3, 0x06,    4 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    2,  120,    3, 0x02,    5 /* Public */,
       8,    2,  125,    3, 0x02,    8 /* Public */,
      11,    1,  130,    3, 0x02,   11 /* Public */,
      12,    2,  133,    3, 0x02,   13 /* Public */,
      13,    1,  138,    3, 0x02,   16 /* Public */,
      14,    1,  141,    3, 0x02,   18 /* Public */,
      16,    1,  144,    3, 0x02,   20 /* Public */,
      17,    1,  147,    3, 0x02,   22 /* Public */,
      18,    1,  150,    3, 0x02,   24 /* Public */,
      20,    1,  153,    3, 0x02,   26 /* Public */,
      21,    2,  156,    3, 0x02,   28 /* Public */,
      23,    1,  161,    3, 0x02,   31 /* Public */,
      24,    0,  164,    3, 0x02,   33 /* Public */,
      25,    0,  165,    3, 0x02,   34 /* Public */,
      26,    0,  166,    3, 0x02,   35 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    6,   10,
    QMetaType::QObjectStar, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QVariantMap,    6,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 15,   10,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    0x80000000 | 19, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    6,   22,
    QMetaType::Bool, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QVariant,

 // properties: name, type, flags
      27, QMetaType::Int, 0x00015003, uint(0), 0,
      28, 0x80000000 | 29, 0x0001500b, uint(1), 0,

       0        // eod
};

void FluTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluTreeModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataSourceSizeChanged(); break;
        case 1: _t->columnSourceChanged(); break;
        case 2: _t->removeRows((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->insertRows((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<FluTreeNode*>>>(_a[2]))); break;
        case 4: { QObject* _r = _t->getRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[2]))); break;
        case 6: _t->setData((*reinterpret_cast< std::add_pointer_t<QList<FluTreeNode*>>>(_a[1]))); break;
        case 7: _t->setDataSource((*reinterpret_cast< std::add_pointer_t<QList<QMap<QString,QVariant>>>>(_a[1]))); break;
        case 8: _t->collapse((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->expand((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: { FluTreeNode* _r = _t->getNode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluTreeNode**>(_a[0]) = std::move(_r); }  break;
        case 11: _t->refreshNode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->checkRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 13: { bool _r = _t->hitHasChildrenExpanded((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->allExpand(); break;
        case 15: _t->allCollapse(); break;
        case 16: { QVariant _r = _t->selectionModel();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<FluTreeNode*> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<FluTreeNode*> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QMap<QString,QVariant>> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluTreeModel::*)();
            if (_t _q_method = &FluTreeModel::dataSourceSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluTreeModel::*)();
            if (_t _q_method = &FluTreeModel::columnSourceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QVariantMap> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluTreeModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->_dataSourceSize; break;
        case 1: *reinterpret_cast< QList<QVariantMap>*>(_v) = _t->_columnSource; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluTreeModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_dataSourceSize != *reinterpret_cast< int*>(_v)) {
                _t->_dataSourceSize = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->dataSourceSizeChanged();
            }
            break;
        case 1:
            if (_t->_columnSource != *reinterpret_cast< QList<QVariantMap>*>(_v)) {
                _t->_columnSource = *reinterpret_cast< QList<QVariantMap>*>(_v);
                Q_EMIT _t->columnSourceChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject FluTreeModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_FluTreeModel.offsetsAndSizes,
    qt_meta_data_FluTreeModel,
    qt_static_metacall,
    nullptr,
qt_metaTypeArray<
int, QList<QVariantMap>, FluTreeModel, void, void

, void, int, int, void, int, const QList<FluTreeNode*> &, QObject *, int, void, int, QVariantMap, void, QList<FluTreeNode*>, void, QList<QMap<QString,QVariant>>, void, int, void, int, FluTreeNode *, int, void, int, void, int, bool, bool, int, void, void, QVariant

>,
    nullptr
} };


const QMetaObject *FluTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluTreeModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int FluTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FluTreeModel::dataSourceSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FluTreeModel::columnSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
