/****************************************************************************
** Meta object code from reading C++ file 'animators.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "animators.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animators.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BasicAnimator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_BasicAnimator[] = {
    "BasicAnimator\0\0frameChanged()\0"
};

void BasicAnimator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BasicAnimator *_t = static_cast<BasicAnimator *>(_o);
        switch (_id) {
        case 0: _t->frameChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BasicAnimator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BasicAnimator::staticMetaObject = {
    { &QAbstractAnimation::staticMetaObject, qt_meta_stringdata_BasicAnimator,
      qt_meta_data_BasicAnimator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BasicAnimator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BasicAnimator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BasicAnimator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BasicAnimator))
        return static_cast<void*>(const_cast< BasicAnimator*>(this));
    return QAbstractAnimation::qt_metacast(_clname);
}

int BasicAnimator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractAnimation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void BasicAnimator::frameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_PixmapAnimator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_PixmapAnimator[] = {
    "PixmapAnimator\0\0pixmapReady(QPixmap)\0"
};

void PixmapAnimator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PixmapAnimator *_t = static_cast<PixmapAnimator *>(_o);
        switch (_id) {
        case 0: _t->pixmapReady((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PixmapAnimator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PixmapAnimator::staticMetaObject = {
    { &BasicAnimator::staticMetaObject, qt_meta_stringdata_PixmapAnimator,
      qt_meta_data_PixmapAnimator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PixmapAnimator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PixmapAnimator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PixmapAnimator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PixmapAnimator))
        return static_cast<void*>(const_cast< PixmapAnimator*>(this));
    return BasicAnimator::qt_metacast(_clname);
}

int PixmapAnimator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasicAnimator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void PixmapAnimator::pixmapReady(const QPixmap & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_DelegateAnimationHelper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x0a,
      35,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DelegateAnimationHelper[] = {
    "DelegateAnimationHelper\0\0run(bool)\0"
    "updateDelegate()\0"
};

void DelegateAnimationHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DelegateAnimationHelper *_t = static_cast<DelegateAnimationHelper *>(_o);
        switch (_id) {
        case 0: _t->run((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateDelegate(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DelegateAnimationHelper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DelegateAnimationHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DelegateAnimationHelper,
      qt_meta_data_DelegateAnimationHelper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DelegateAnimationHelper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DelegateAnimationHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DelegateAnimationHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DelegateAnimationHelper))
        return static_cast<void*>(const_cast< DelegateAnimationHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int DelegateAnimationHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
