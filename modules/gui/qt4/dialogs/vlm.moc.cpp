/****************************************************************************
** Meta object code from reading C++ file 'vlm.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vlm.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vlm.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VLMDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      38,   10,   10,   10, 0x0a,
      70,   10,   10,   10, 0x08,
      83,   10,   10,   10, 0x08,
      98,   10,   10,   10, 0x08,
     118,   10,   10,   10, 0x08,
     142,   10,   10,   10, 0x08,
     161,   10,   10,   10, 0x08,
     175,   10,   10,   10, 0x08,
     195,   10,  190,   10, 0x08,
     211,   10,  190,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VLMDialog[] = {
    "VLMDialog\0\0removeVLMItem(VLMAWidget*)\0"
    "startModifyVLMItem(VLMAWidget*)\0"
    "addVLMItem()\0clearWidgets()\0"
    "saveModifications()\0showScheduleWidget(int)\0"
    "selectVLMItem(int)\0selectInput()\0"
    "selectOutput()\0bool\0exportVLMConf()\0"
    "importVLMConf()\0"
};

void VLMDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VLMDialog *_t = static_cast<VLMDialog *>(_o);
        switch (_id) {
        case 0: _t->removeVLMItem((*reinterpret_cast< VLMAWidget*(*)>(_a[1]))); break;
        case 1: _t->startModifyVLMItem((*reinterpret_cast< VLMAWidget*(*)>(_a[1]))); break;
        case 2: _t->addVLMItem(); break;
        case 3: _t->clearWidgets(); break;
        case 4: _t->saveModifications(); break;
        case 5: _t->showScheduleWidget((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->selectVLMItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->selectInput(); break;
        case 8: _t->selectOutput(); break;
        case 9: { bool _r = _t->exportVLMConf();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->importVLMConf();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VLMDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VLMDialog::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_VLMDialog,
      qt_meta_data_VLMDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VLMDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VLMDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VLMDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VLMDialog))
        return static_cast<void*>(const_cast< VLMDialog*>(this));
    if (!strcmp(_clname, "Singleton<VLMDialog>"))
        return static_cast< Singleton<VLMDialog>*>(const_cast< VLMDialog*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int VLMDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
static const uint qt_meta_data_VLMAWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      21,   11,   11,   11, 0x08,
      27,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VLMAWidget[] = {
    "VLMAWidget\0\0modify()\0del()\0"
    "toggleEnabled(bool)\0"
};

void VLMAWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VLMAWidget *_t = static_cast<VLMAWidget *>(_o);
        switch (_id) {
        case 0: _t->modify(); break;
        case 1: _t->del(); break;
        case 2: _t->toggleEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VLMAWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VLMAWidget::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_VLMAWidget,
      qt_meta_data_VLMAWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VLMAWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VLMAWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VLMAWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VLMAWidget))
        return static_cast<void*>(const_cast< VLMAWidget*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int VLMAWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_VLMBroadcast[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      21,   13,   13,   13, 0x08,
      39,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VLMBroadcast[] = {
    "VLMBroadcast\0\0stop()\0togglePlayPause()\0"
    "toggleLoop()\0"
};

void VLMBroadcast::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VLMBroadcast *_t = static_cast<VLMBroadcast *>(_o);
        switch (_id) {
        case 0: _t->stop(); break;
        case 1: _t->togglePlayPause(); break;
        case 2: _t->toggleLoop(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VLMBroadcast::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VLMBroadcast::staticMetaObject = {
    { &VLMAWidget::staticMetaObject, qt_meta_stringdata_VLMBroadcast,
      qt_meta_data_VLMBroadcast, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VLMBroadcast::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VLMBroadcast::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VLMBroadcast::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VLMBroadcast))
        return static_cast<void*>(const_cast< VLMBroadcast*>(this));
    return VLMAWidget::qt_metacast(_clname);
}

int VLMBroadcast::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VLMAWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_VLMVod[] = {

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

static const char qt_meta_stringdata_VLMVod[] = {
    "VLMVod\0"
};

void VLMVod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VLMVod::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VLMVod::staticMetaObject = {
    { &VLMAWidget::staticMetaObject, qt_meta_stringdata_VLMVod,
      qt_meta_data_VLMVod, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VLMVod::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VLMVod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VLMVod::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VLMVod))
        return static_cast<void*>(const_cast< VLMVod*>(this));
    return VLMAWidget::qt_metacast(_clname);
}

int VLMVod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VLMAWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_VLMSchedule[] = {

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

static const char qt_meta_stringdata_VLMSchedule[] = {
    "VLMSchedule\0"
};

void VLMSchedule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VLMSchedule::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VLMSchedule::staticMetaObject = {
    { &VLMAWidget::staticMetaObject, qt_meta_stringdata_VLMSchedule,
      qt_meta_data_VLMSchedule, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VLMSchedule::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VLMSchedule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VLMSchedule::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VLMSchedule))
        return static_cast<void*>(const_cast< VLMSchedule*>(this));
    return VLMAWidget::qt_metacast(_clname);
}

int VLMSchedule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VLMAWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
