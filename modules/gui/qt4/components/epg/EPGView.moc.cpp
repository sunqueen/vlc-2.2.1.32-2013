/****************************************************************************
** Meta object code from reading C++ file 'EPGView.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "EPGView.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EPGView.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EPGGraphicsScene[] = {

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

static const char qt_meta_stringdata_EPGGraphicsScene[] = {
    "EPGGraphicsScene\0"
};

void EPGGraphicsScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData EPGGraphicsScene::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EPGGraphicsScene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_EPGGraphicsScene,
      qt_meta_data_EPGGraphicsScene, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EPGGraphicsScene::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EPGGraphicsScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EPGGraphicsScene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EPGGraphicsScene))
        return static_cast<void*>(const_cast< EPGGraphicsScene*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int EPGGraphicsScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_EPGView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,    9,    8,    8, 0x05,
      55,   47,    8,    8, 0x05,
      76,    8,    8,    8, 0x05,
      98,    8,    8,    8, 0x05,
     120,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     144,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EPGView[] = {
    "EPGView\0\0startTime\0startTimeChanged(QDateTime)\0"
    "seconds\0durationChanged(int)\0"
    "itemFocused(EPGItem*)\0channelAdded(QString)\0"
    "channelRemoved(QString)\0focusItem(EPGItem*)\0"
};

void EPGView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EPGView *_t = static_cast<EPGView *>(_o);
        switch (_id) {
        case 0: _t->startTimeChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 1: _t->durationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->itemFocused((*reinterpret_cast< EPGItem*(*)>(_a[1]))); break;
        case 3: _t->channelAdded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->channelRemoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->focusItem((*reinterpret_cast< EPGItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EPGView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EPGView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_EPGView,
      qt_meta_data_EPGView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EPGView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EPGView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EPGView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EPGView))
        return static_cast<void*>(const_cast< EPGView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int EPGView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void EPGView::startTimeChanged(const QDateTime & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EPGView::durationChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EPGView::itemFocused(EPGItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void EPGView::channelAdded(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void EPGView::channelRemoved(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
