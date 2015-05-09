/****************************************************************************
** Meta object code from reading C++ file 'playlist.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlist.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlist.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlaylistWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PlaylistWidget[] = {
    "PlaylistWidget\0\0index\0changeView(QModelIndex)\0"
};

void PlaylistWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlaylistWidget *_t = static_cast<PlaylistWidget *>(_o);
        switch (_id) {
        case 0: _t->changeView((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlaylistWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlaylistWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PlaylistWidget,
      qt_meta_data_PlaylistWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlaylistWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlaylistWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlaylistWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistWidget))
        return static_cast<void*>(const_cast< PlaylistWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int PlaylistWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_LocationBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   12,   12,   12, 0x0a,
      59,   49,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LocationBar[] = {
    "LocationBar\0\0invoked(QModelIndex)\0"
    "setRootIndex()\0i_item_id\0invoke(int)\0"
};

void LocationBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LocationBar *_t = static_cast<LocationBar *>(_o);
        switch (_id) {
        case 0: _t->invoked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->setRootIndex(); break;
        case 2: _t->invoke((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LocationBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LocationBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LocationBar,
      qt_meta_data_LocationBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LocationBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LocationBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LocationBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LocationBar))
        return static_cast<void*>(const_cast< LocationBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int LocationBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void LocationBar::invoked(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
