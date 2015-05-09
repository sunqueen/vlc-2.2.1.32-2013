/****************************************************************************
** Meta object code from reading C++ file 'sout_widgets.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sout_widgets.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sout_widgets.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VirtualDestBox[] = {

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

static const char qt_meta_stringdata_VirtualDestBox[] = {
    "VirtualDestBox\0\0mrlUpdated()\0"
};

void VirtualDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VirtualDestBox *_t = static_cast<VirtualDestBox *>(_o);
        switch (_id) {
        case 0: _t->mrlUpdated(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VirtualDestBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VirtualDestBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VirtualDestBox,
      qt_meta_data_VirtualDestBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VirtualDestBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VirtualDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VirtualDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VirtualDestBox))
        return static_cast<void*>(const_cast< VirtualDestBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int VirtualDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void VirtualDestBox::mrlUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_FileDestBox[] = {

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
      13,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FileDestBox[] = {
    "FileDestBox\0\0fileBrowse()\0"
};

void FileDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileDestBox *_t = static_cast<FileDestBox *>(_o);
        switch (_id) {
        case 0: _t->fileBrowse(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FileDestBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FileDestBox::staticMetaObject = {
    { &VirtualDestBox::staticMetaObject, qt_meta_stringdata_FileDestBox,
      qt_meta_data_FileDestBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileDestBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileDestBox))
        return static_cast<void*>(const_cast< FileDestBox*>(this));
    return VirtualDestBox::qt_metacast(_clname);
}

int FileDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_HTTPDestBox[] = {

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

static const char qt_meta_stringdata_HTTPDestBox[] = {
    "HTTPDestBox\0"
};

void HTTPDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData HTTPDestBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HTTPDestBox::staticMetaObject = {
    { &VirtualDestBox::staticMetaObject, qt_meta_stringdata_HTTPDestBox,
      qt_meta_data_HTTPDestBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HTTPDestBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HTTPDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HTTPDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HTTPDestBox))
        return static_cast<void*>(const_cast< HTTPDestBox*>(this));
    return VirtualDestBox::qt_metacast(_clname);
}

int HTTPDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_MMSHDestBox[] = {

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

static const char qt_meta_stringdata_MMSHDestBox[] = {
    "MMSHDestBox\0"
};

void MMSHDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MMSHDestBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MMSHDestBox::staticMetaObject = {
    { &VirtualDestBox::staticMetaObject, qt_meta_stringdata_MMSHDestBox,
      qt_meta_data_MMSHDestBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MMSHDestBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MMSHDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MMSHDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MMSHDestBox))
        return static_cast<void*>(const_cast< MMSHDestBox*>(this));
    return VirtualDestBox::qt_metacast(_clname);
}

int MMSHDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_RTSPDestBox[] = {

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

static const char qt_meta_stringdata_RTSPDestBox[] = {
    "RTSPDestBox\0"
};

void RTSPDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData RTSPDestBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RTSPDestBox::staticMetaObject = {
    { &VirtualDestBox::staticMetaObject, qt_meta_stringdata_RTSPDestBox,
      qt_meta_data_RTSPDestBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RTSPDestBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RTSPDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RTSPDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RTSPDestBox))
        return static_cast<void*>(const_cast< RTSPDestBox*>(this));
    return VirtualDestBox::qt_metacast(_clname);
}

int RTSPDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UDPDestBox[] = {

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

static const char qt_meta_stringdata_UDPDestBox[] = {
    "UDPDestBox\0"
};

void UDPDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UDPDestBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UDPDestBox::staticMetaObject = {
    { &VirtualDestBox::staticMetaObject, qt_meta_stringdata_UDPDestBox,
      qt_meta_data_UDPDestBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UDPDestBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UDPDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UDPDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UDPDestBox))
        return static_cast<void*>(const_cast< UDPDestBox*>(this));
    return VirtualDestBox::qt_metacast(_clname);
}

int UDPDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_RTPDestBox[] = {

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

static const char qt_meta_stringdata_RTPDestBox[] = {
    "RTPDestBox\0"
};

void RTPDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData RTPDestBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RTPDestBox::staticMetaObject = {
    { &VirtualDestBox::staticMetaObject, qt_meta_stringdata_RTPDestBox,
      qt_meta_data_RTPDestBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RTPDestBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RTPDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RTPDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RTPDestBox))
        return static_cast<void*>(const_cast< RTPDestBox*>(this));
    return VirtualDestBox::qt_metacast(_clname);
}

int RTPDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ICEDestBox[] = {

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

static const char qt_meta_stringdata_ICEDestBox[] = {
    "ICEDestBox\0"
};

void ICEDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ICEDestBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ICEDestBox::staticMetaObject = {
    { &VirtualDestBox::staticMetaObject, qt_meta_stringdata_ICEDestBox,
      qt_meta_data_ICEDestBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ICEDestBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ICEDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ICEDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ICEDestBox))
        return static_cast<void*>(const_cast< ICEDestBox*>(this));
    return VirtualDestBox::qt_metacast(_clname);
}

int ICEDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
