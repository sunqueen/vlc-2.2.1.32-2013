/****************************************************************************
** Meta object code from reading C++ file 'playlist_model.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlist_model.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlist_model.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PLModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      47,    8,    8,    8, 0x08,
      84,   72,    8,    8, 0x08,
     138,  108,    8,    8, 0x08,
     172,  165,    8,    8, 0x08,
     209,  203,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PLModel[] = {
    "PLModel\0\0processInputItemUpdate(input_item_t*)\0"
    "processInputItemUpdate()\0i_pl_itemid\0"
    "processItemRemoval(int)\0"
    "i_pl_itemid,i_pl_itemidparent\0"
    "processItemAppend(int,int)\0p_item\0"
    "activateItem(playlist_item_t*)\0index\0"
    "activateItem(QModelIndex)\0"
};

void PLModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PLModel *_t = static_cast<PLModel *>(_o);
        switch (_id) {
        case 0: _t->processInputItemUpdate((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 1: _t->processInputItemUpdate(); break;
        case 2: _t->processItemRemoval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->processItemAppend((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->activateItem((*reinterpret_cast< playlist_item_t*(*)>(_a[1]))); break;
        case 5: _t->activateItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PLModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PLModel::staticMetaObject = {
    { &VLCModel::staticMetaObject, qt_meta_stringdata_PLModel,
      qt_meta_data_PLModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PLModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PLModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PLModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PLModel))
        return static_cast<void*>(const_cast< PLModel*>(this));
    return VLCModel::qt_metacast(_clname);
}

int PLModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VLCModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_PlMimeData[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_PlMimeData[] = {
    "PlMimeData\0"
};

void PlMimeData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PlMimeData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlMimeData::staticMetaObject = {
    { &QMimeData::staticMetaObject, qt_meta_stringdata_PlMimeData,
      qt_meta_data_PlMimeData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlMimeData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlMimeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlMimeData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlMimeData))
        return static_cast<void*>(const_cast< PlMimeData*>(this));
    return QMimeData::qt_metacast(_clname);
}

int PlMimeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMimeData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
