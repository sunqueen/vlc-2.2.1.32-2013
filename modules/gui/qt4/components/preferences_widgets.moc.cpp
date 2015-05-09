/****************************************************************************
** Meta object code from reading C++ file 'preferences_widgets.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "preferences_widgets.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preferences_widgets.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InterfacePreviewWidget[] = {

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
      24,   23,   23,   23, 0x0a,
      57,   47,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_InterfacePreviewWidget[] = {
    "InterfacePreviewWidget\0\0setPreview(enum_style)\0"
    "b_minimal\0setNormalPreview(bool)\0"
};

void InterfacePreviewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InterfacePreviewWidget *_t = static_cast<InterfacePreviewWidget *>(_o);
        switch (_id) {
        case 0: _t->setPreview((*reinterpret_cast< enum_style(*)>(_a[1]))); break;
        case 1: _t->setNormalPreview((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData InterfacePreviewWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InterfacePreviewWidget::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_InterfacePreviewWidget,
      qt_meta_data_InterfacePreviewWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InterfacePreviewWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InterfacePreviewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InterfacePreviewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InterfacePreviewWidget))
        return static_cast<void*>(const_cast< InterfacePreviewWidget*>(this));
    return QLabel::qt_metacast(_clname);
}

int InterfacePreviewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_ConfigControl[] = {

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

static const char qt_meta_stringdata_ConfigControl[] = {
    "ConfigControl\0\0changed()\0"
};

void ConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConfigControl *_t = static_cast<ConfigControl *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ConfigControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ConfigControl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ConfigControl,
      qt_meta_data_ConfigControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigControl))
        return static_cast<void*>(const_cast< ConfigControl*>(this));
    return QObject::qt_metacast(_clname);
}

int ConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void ConfigControl::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_VIntConfigControl[] = {

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

static const char qt_meta_stringdata_VIntConfigControl[] = {
    "VIntConfigControl\0"
};

void VIntConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VIntConfigControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VIntConfigControl::staticMetaObject = {
    { &ConfigControl::staticMetaObject, qt_meta_stringdata_VIntConfigControl,
      qt_meta_data_VIntConfigControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VIntConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VIntConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VIntConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VIntConfigControl))
        return static_cast<void*>(const_cast< VIntConfigControl*>(this));
    return ConfigControl::qt_metacast(_clname);
}

int VIntConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_IntegerConfigControl[] = {

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

static const char qt_meta_stringdata_IntegerConfigControl[] = {
    "IntegerConfigControl\0"
};

void IntegerConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData IntegerConfigControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IntegerConfigControl::staticMetaObject = {
    { &VIntConfigControl::staticMetaObject, qt_meta_stringdata_IntegerConfigControl,
      qt_meta_data_IntegerConfigControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IntegerConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IntegerConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IntegerConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IntegerConfigControl))
        return static_cast<void*>(const_cast< IntegerConfigControl*>(this));
    return VIntConfigControl::qt_metacast(_clname);
}

int IntegerConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VIntConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_IntegerRangeConfigControl[] = {

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

static const char qt_meta_stringdata_IntegerRangeConfigControl[] = {
    "IntegerRangeConfigControl\0"
};

void IntegerRangeConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData IntegerRangeConfigControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IntegerRangeConfigControl::staticMetaObject = {
    { &IntegerConfigControl::staticMetaObject, qt_meta_stringdata_IntegerRangeConfigControl,
      qt_meta_data_IntegerRangeConfigControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IntegerRangeConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IntegerRangeConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IntegerRangeConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IntegerRangeConfigControl))
        return static_cast<void*>(const_cast< IntegerRangeConfigControl*>(this));
    return IntegerConfigControl::qt_metacast(_clname);
}

int IntegerRangeConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IntegerConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_IntegerRangeSliderConfigControl[] = {

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

static const char qt_meta_stringdata_IntegerRangeSliderConfigControl[] = {
    "IntegerRangeSliderConfigControl\0"
};

void IntegerRangeSliderConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData IntegerRangeSliderConfigControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IntegerRangeSliderConfigControl::staticMetaObject = {
    { &VIntConfigControl::staticMetaObject, qt_meta_stringdata_IntegerRangeSliderConfigControl,
      qt_meta_data_IntegerRangeSliderConfigControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IntegerRangeSliderConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IntegerRangeSliderConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IntegerRangeSliderConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IntegerRangeSliderConfigControl))
        return static_cast<void*>(const_cast< IntegerRangeSliderConfigControl*>(this));
    return VIntConfigControl::qt_metacast(_clname);
}

int IntegerRangeSliderConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VIntConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_IntegerListConfigControl[] = {

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

static const char qt_meta_stringdata_IntegerListConfigControl[] = {
    "IntegerListConfigControl\0"
};

void IntegerListConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData IntegerListConfigControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IntegerListConfigControl::staticMetaObject = {
    { &VIntConfigControl::staticMetaObject, qt_meta_stringdata_IntegerListConfigControl,
      qt_meta_data_IntegerListConfigControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IntegerListConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IntegerListConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IntegerListConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IntegerListConfigControl))
        return static_cast<void*>(const_cast< IntegerListConfigControl*>(this));
    return VIntConfigControl::qt_metacast(_clname);
}

int IntegerListConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VIntConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_BoolConfigControl[] = {

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

static const char qt_meta_stringdata_BoolConfigControl[] = {
    "BoolConfigControl\0"
};

void BoolConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BoolConfigControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BoolConfigControl::staticMetaObject = {
    { &VIntConfigControl::staticMetaObject, qt_meta_stringdata_BoolConfigControl,
      qt_meta_data_BoolConfigControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BoolConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BoolConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BoolConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BoolConfigControl))
        return static_cast<void*>(const_cast< BoolConfigControl*>(this));
    return VIntConfigControl::qt_metacast(_clname);
}

int BoolConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VIntConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ColorConfigControl[] = {

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
      20,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ColorConfigControl[] = {
    "ColorConfigControl\0\0selectColor()\0"
};

void ColorConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ColorConfigControl *_t = static_cast<ColorConfigControl *>(_o);
        switch (_id) {
        case 0: _t->selectColor(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ColorConfigControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ColorConfigControl::staticMetaObject = {
    { &VIntConfigControl::staticMetaObject, qt_meta_stringdata_ColorConfigControl,
      qt_meta_data_ColorConfigControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ColorConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ColorConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ColorConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColorConfigControl))
        return static_cast<void*>(const_cast< ColorConfigControl*>(this));
    return VIntConfigControl::qt_metacast(_clname);
}

int ColorConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VIntConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_VFloatConfigControl[] = {

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

static const char qt_meta_stringdata_VFloatConfigControl[] = {
    "VFloatConfigControl\0"
};

void VFloatConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VFloatConfigControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VFloatConfigControl::staticMetaObject = {
    { &ConfigControl::staticMetaObject, qt_meta_stringdata_VFloatConfigControl,
      qt_meta_data_VFloatConfigControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VFloatConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VFloatConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VFloatConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VFloatConfigControl))
        return static_cast<void*>(const_cast< VFloatConfigControl*>(this));
    return ConfigControl::qt_metacast(_clname);
}

int VFloatConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_FloatConfigControl[] = {

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

static const char qt_meta_stringdata_FloatConfigControl[] = {
    "FloatConfigControl\0"
};

void FloatConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FloatConfigControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FloatConfigControl::staticMetaObject = {
    { &VFloatConfigControl::staticMetaObject, qt_meta_stringdata_FloatConfigControl,
      qt_meta_data_FloatConfigControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FloatConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FloatConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FloatConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FloatConfigControl))
        return static_cast<void*>(const_cast< FloatConfigControl*>(this));
    return VFloatConfigControl::qt_metacast(_clname);
}

int FloatConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VFloatConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_FloatRangeConfigControl[] = {

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

static const char qt_meta_stringdata_FloatRangeConfigControl[] = {
    "FloatRangeConfigControl\0"
};

void FloatRangeConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FloatRangeConfigControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FloatRangeConfigControl::staticMetaObject = {
    { &FloatConfigControl::staticMetaObject, qt_meta_stringdata_FloatRangeConfigControl,
      qt_meta_data_FloatRangeConfigControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FloatRangeConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FloatRangeConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FloatRangeConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FloatRangeConfigControl))
        return static_cast<void*>(const_cast< FloatRangeConfigControl*>(this));
    return FloatConfigControl::qt_metacast(_clname);
}

int FloatRangeConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FloatConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_VStringConfigControl[] = {

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

static const char qt_meta_stringdata_VStringConfigControl[] = {
    "VStringConfigControl\0"
};

void VStringConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VStringConfigControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VStringConfigControl::staticMetaObject = {
    { &ConfigControl::staticMetaObject, qt_meta_stringdata_VStringConfigControl,
      qt_meta_data_VStringConfigControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VStringConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VStringConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VStringConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VStringConfigControl))
        return static_cast<void*>(const_cast< VStringConfigControl*>(this));
    return ConfigControl::qt_metacast(_clname);
}

int VStringConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_StringConfigControl[] = {

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

static const char qt_meta_stringdata_StringConfigControl[] = {
    "StringConfigControl\0"
};

void StringConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData StringConfigControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StringConfigControl::staticMetaObject = {
    { &VStringConfigControl::staticMetaObject, qt_meta_stringdata_StringConfigControl,
      qt_meta_data_StringConfigControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StringConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StringConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StringConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StringConfigControl))
        return static_cast<void*>(const_cast< StringConfigControl*>(this));
    return VStringConfigControl::qt_metacast(_clname);
}

int StringConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_FileConfigControl[] = {

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
      19,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FileConfigControl[] = {
    "FileConfigControl\0\0updateField()\0"
};

void FileConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileConfigControl *_t = static_cast<FileConfigControl *>(_o);
        switch (_id) {
        case 0: _t->updateField(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FileConfigControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FileConfigControl::staticMetaObject = {
    { &VStringConfigControl::staticMetaObject, qt_meta_stringdata_FileConfigControl,
      qt_meta_data_FileConfigControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileConfigControl))
        return static_cast<void*>(const_cast< FileConfigControl*>(this));
    return VStringConfigControl::qt_metacast(_clname);
}

int FileConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_DirectoryConfigControl[] = {

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
      24,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DirectoryConfigControl[] = {
    "DirectoryConfigControl\0\0updateField()\0"
};

void DirectoryConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DirectoryConfigControl *_t = static_cast<DirectoryConfigControl *>(_o);
        switch (_id) {
        case 0: _t->updateField(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DirectoryConfigControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DirectoryConfigControl::staticMetaObject = {
    { &FileConfigControl::staticMetaObject, qt_meta_stringdata_DirectoryConfigControl,
      qt_meta_data_DirectoryConfigControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DirectoryConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DirectoryConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DirectoryConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DirectoryConfigControl))
        return static_cast<void*>(const_cast< DirectoryConfigControl*>(this));
    return FileConfigControl::qt_metacast(_clname);
}

int DirectoryConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_FontConfigControl[] = {

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

static const char qt_meta_stringdata_FontConfigControl[] = {
    "FontConfigControl\0"
};

void FontConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FontConfigControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FontConfigControl::staticMetaObject = {
    { &VStringConfigControl::staticMetaObject, qt_meta_stringdata_FontConfigControl,
      qt_meta_data_FontConfigControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FontConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FontConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FontConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FontConfigControl))
        return static_cast<void*>(const_cast< FontConfigControl*>(this));
    return VStringConfigControl::qt_metacast(_clname);
}

int FontConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ModuleConfigControl[] = {

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

static const char qt_meta_stringdata_ModuleConfigControl[] = {
    "ModuleConfigControl\0"
};

void ModuleConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ModuleConfigControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ModuleConfigControl::staticMetaObject = {
    { &VStringConfigControl::staticMetaObject, qt_meta_stringdata_ModuleConfigControl,
      qt_meta_data_ModuleConfigControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ModuleConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ModuleConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ModuleConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModuleConfigControl))
        return static_cast<void*>(const_cast< ModuleConfigControl*>(this));
    return VStringConfigControl::qt_metacast(_clname);
}

int ModuleConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ModuleListConfigControl[] = {

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
      25,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ModuleListConfigControl[] = {
    "ModuleListConfigControl\0\0onUpdate()\0"
};

void ModuleListConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ModuleListConfigControl *_t = static_cast<ModuleListConfigControl *>(_o);
        switch (_id) {
        case 0: _t->onUpdate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ModuleListConfigControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ModuleListConfigControl::staticMetaObject = {
    { &VStringConfigControl::staticMetaObject, qt_meta_stringdata_ModuleListConfigControl,
      qt_meta_data_ModuleListConfigControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ModuleListConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ModuleListConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ModuleListConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModuleListConfigControl))
        return static_cast<void*>(const_cast< ModuleListConfigControl*>(this));
    return VStringConfigControl::qt_metacast(_clname);
}

int ModuleListConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_StringListConfigControl[] = {

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
      25,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StringListConfigControl[] = {
    "StringListConfigControl\0\0"
    "comboIndexChanged(int)\0"
};

void StringListConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StringListConfigControl *_t = static_cast<StringListConfigControl *>(_o);
        switch (_id) {
        case 0: _t->comboIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StringListConfigControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StringListConfigControl::staticMetaObject = {
    { &VStringConfigControl::staticMetaObject, qt_meta_stringdata_StringListConfigControl,
      qt_meta_data_StringListConfigControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StringListConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StringListConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StringListConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StringListConfigControl))
        return static_cast<void*>(const_cast< StringListConfigControl*>(this));
    return VStringConfigControl::qt_metacast(_clname);
}

int StringListConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_KeySelectorControl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   20,   19,   19, 0x08,
      60,   19,   19,   19, 0x28,
      88,   19,   19,   19, 0x28,
     100,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_KeySelectorControl[] = {
    "KeySelectorControl\0\0,column\0"
    "selectKey(QTreeWidgetItem*,int)\0"
    "selectKey(QTreeWidgetItem*)\0selectKey()\0"
    "filter(QString)\0"
};

void KeySelectorControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        KeySelectorControl *_t = static_cast<KeySelectorControl *>(_o);
        switch (_id) {
        case 0: _t->selectKey((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->selectKey((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->selectKey(); break;
        case 3: _t->filter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData KeySelectorControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject KeySelectorControl::staticMetaObject = {
    { &ConfigControl::staticMetaObject, qt_meta_stringdata_KeySelectorControl,
      qt_meta_data_KeySelectorControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &KeySelectorControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *KeySelectorControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *KeySelectorControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KeySelectorControl))
        return static_cast<void*>(const_cast< KeySelectorControl*>(this));
    return ConfigControl::qt_metacast(_clname);
}

int KeySelectorControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_KeyInputDialog[] = {

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
      16,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_KeyInputDialog[] = {
    "KeyInputDialog\0\0unsetAction()\0"
};

void KeyInputDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        KeyInputDialog *_t = static_cast<KeyInputDialog *>(_o);
        switch (_id) {
        case 0: _t->unsetAction(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData KeyInputDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject KeyInputDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_KeyInputDialog,
      qt_meta_data_KeyInputDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &KeyInputDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *KeyInputDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *KeyInputDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KeyInputDialog))
        return static_cast<void*>(const_cast< KeyInputDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int KeyInputDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
