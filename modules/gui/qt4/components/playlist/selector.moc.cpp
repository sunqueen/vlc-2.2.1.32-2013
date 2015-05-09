/****************************************************************************
** Meta object code from reading C++ file 'selector.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "selector.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selector.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PLSelItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   10,   10,   10, 0x0a,
      43,   10,   10,   10, 0x0a,
      56,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PLSelItem[] = {
    "PLSelItem\0\0action(PLSelItem*)\0"
    "showAction()\0hideAction()\0triggerAction()\0"
};

void PLSelItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PLSelItem *_t = static_cast<PLSelItem *>(_o);
        switch (_id) {
        case 0: _t->action((*reinterpret_cast< PLSelItem*(*)>(_a[1]))); break;
        case 1: _t->showAction(); break;
        case 2: _t->hideAction(); break;
        case 3: _t->triggerAction(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PLSelItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PLSelItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PLSelItem,
      qt_meta_data_PLSelItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PLSelItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PLSelItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PLSelItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PLSelItem))
        return static_cast<void*>(const_cast< PLSelItem*>(this));
    return QWidget::qt_metacast(_clname);
}

int PLSelItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PLSelItem::action(PLSelItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_PLSelector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   12,   11,   11, 0x05,
      55,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      85,   80,   11,   11, 0x08,
     113,   12,   11,   11, 0x08,
     134,   11,   11,   11, 0x08,
     153,   11,   11,   11, 0x08,
     184,   11,   11,   11, 0x08,
     207,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PLSelector[] = {
    "PLSelector\0\0,\0categoryActivated(playlist_item_t*,bool)\0"
    "SDCategorySelected(bool)\0item\0"
    "setSource(QTreeWidgetItem*)\0"
    "plItemAdded(int,int)\0plItemRemoved(int)\0"
    "inputItemUpdate(input_item_t*)\0"
    "podcastAdd(PLSelItem*)\0podcastRemove(PLSelItem*)\0"
};

void PLSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PLSelector *_t = static_cast<PLSelector *>(_o);
        switch (_id) {
        case 0: _t->categoryActivated((*reinterpret_cast< playlist_item_t*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->SDCategorySelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setSource((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->plItemAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->plItemRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->inputItemUpdate((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 6: _t->podcastAdd((*reinterpret_cast< PLSelItem*(*)>(_a[1]))); break;
        case 7: _t->podcastRemove((*reinterpret_cast< PLSelItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PLSelector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PLSelector::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_PLSelector,
      qt_meta_data_PLSelector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PLSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PLSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PLSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PLSelector))
        return static_cast<void*>(const_cast< PLSelector*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int PLSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void PLSelector::categoryActivated(playlist_item_t * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PLSelector::SDCategorySelected(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
