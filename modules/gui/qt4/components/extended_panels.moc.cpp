/****************************************************************************
** Meta object code from reading C++ file 'extended_panels.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "extended_panels.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extended_panels.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ExtVideo[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      26,    9,    9,    9, 0x08,
      48,    9,    9,    9, 0x08,
      61,    9,    9,    9, 0x08,
      74,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ExtVideo[] = {
    "ExtVideo\0\0updateFilters()\0"
    "updateFilterOptions()\0cropChange()\0"
    "browseLogo()\0browseEraseFile()\0"
};

void ExtVideo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExtVideo *_t = static_cast<ExtVideo *>(_o);
        switch (_id) {
        case 0: _t->updateFilters(); break;
        case 1: _t->updateFilterOptions(); break;
        case 2: _t->cropChange(); break;
        case 3: _t->browseLogo(); break;
        case 4: _t->browseEraseFile(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ExtVideo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExtVideo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ExtVideo,
      qt_meta_data_ExtVideo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExtVideo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExtVideo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExtVideo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExtVideo))
        return static_cast<void*>(const_cast< ExtVideo*>(this));
    return QObject::qt_metacast(_clname);
}

int ExtVideo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_ExtV4l2[] = {

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
       9,    8,    8,    8, 0x08,
      25,   19,    8,    8, 0x08,
      42,   19,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ExtV4l2[] = {
    "ExtV4l2\0\0Refresh()\0value\0ValueChange(int)\0"
    "ValueChange(bool)\0"
};

void ExtV4l2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExtV4l2 *_t = static_cast<ExtV4l2 *>(_o);
        switch (_id) {
        case 0: _t->Refresh(); break;
        case 1: _t->ValueChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ValueChange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ExtV4l2::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExtV4l2::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ExtV4l2,
      qt_meta_data_ExtV4l2, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExtV4l2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExtV4l2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExtV4l2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExtV4l2))
        return static_cast<void*>(const_cast< ExtV4l2*>(this));
    return QWidget::qt_metacast(_clname);
}

int ExtV4l2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_FilterSliderData[] = {

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
      20,   18,   17,   17, 0x0a,
      40,   18,   17,   17, 0x0a,
      56,   17,   17,   17, 0x0a,
      72,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FilterSliderData[] = {
    "FilterSliderData\0\0i\0onValueChanged(int)\0"
    "updateText(int)\0writeToConfig()\0"
    "setSaveToConfig(bool)\0"
};

void FilterSliderData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FilterSliderData *_t = static_cast<FilterSliderData *>(_o);
        switch (_id) {
        case 0: _t->onValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateText((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->writeToConfig(); break;
        case 3: _t->setSaveToConfig((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FilterSliderData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FilterSliderData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FilterSliderData,
      qt_meta_data_FilterSliderData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FilterSliderData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FilterSliderData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FilterSliderData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FilterSliderData))
        return static_cast<void*>(const_cast< FilterSliderData*>(this));
    return QObject::qt_metacast(_clname);
}

int FilterSliderData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_AudioFilterControlWidget[] = {

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
      26,   25,   25,   25, 0x09,
      39,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_AudioFilterControlWidget[] = {
    "AudioFilterControlWidget\0\0enable(bool)\0"
    "setSaveToConfig(bool)\0"
};

void AudioFilterControlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AudioFilterControlWidget *_t = static_cast<AudioFilterControlWidget *>(_o);
        switch (_id) {
        case 0: _t->enable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setSaveToConfig((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AudioFilterControlWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AudioFilterControlWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AudioFilterControlWidget,
      qt_meta_data_AudioFilterControlWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AudioFilterControlWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AudioFilterControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AudioFilterControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AudioFilterControlWidget))
        return static_cast<void*>(const_cast< AudioFilterControlWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int AudioFilterControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_EqualizerSliderData[] = {

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
      23,   21,   20,   20, 0x0a,
      43,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EqualizerSliderData[] = {
    "EqualizerSliderData\0\0i\0onValueChanged(int)\0"
    "writeToConfig()\0"
};

void EqualizerSliderData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EqualizerSliderData *_t = static_cast<EqualizerSliderData *>(_o);
        switch (_id) {
        case 0: _t->onValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->writeToConfig(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EqualizerSliderData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EqualizerSliderData::staticMetaObject = {
    { &FilterSliderData::staticMetaObject, qt_meta_stringdata_EqualizerSliderData,
      qt_meta_data_EqualizerSliderData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EqualizerSliderData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EqualizerSliderData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EqualizerSliderData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EqualizerSliderData))
        return static_cast<void*>(const_cast< EqualizerSliderData*>(this));
    return FilterSliderData::qt_metacast(_clname);
}

int EqualizerSliderData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FilterSliderData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_Equalizer[] = {

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
      11,   10,   10,   10, 0x09,
      33,   10,   10,   10, 0x08,
      52,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Equalizer[] = {
    "Equalizer\0\0setSaveToConfig(bool)\0"
    "setCorePreset(int)\0enable2Pass(bool)\0"
};

void Equalizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Equalizer *_t = static_cast<Equalizer *>(_o);
        switch (_id) {
        case 0: _t->setSaveToConfig((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setCorePreset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->enable2Pass((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Equalizer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Equalizer::staticMetaObject = {
    { &AudioFilterControlWidget::staticMetaObject, qt_meta_stringdata_Equalizer,
      qt_meta_data_Equalizer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Equalizer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Equalizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Equalizer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Equalizer))
        return static_cast<void*>(const_cast< Equalizer*>(this));
    return AudioFilterControlWidget::qt_metacast(_clname);
}

int Equalizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioFilterControlWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_Compressor[] = {

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

static const char qt_meta_stringdata_Compressor[] = {
    "Compressor\0"
};

void Compressor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Compressor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Compressor::staticMetaObject = {
    { &AudioFilterControlWidget::staticMetaObject, qt_meta_stringdata_Compressor,
      qt_meta_data_Compressor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Compressor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Compressor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Compressor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Compressor))
        return static_cast<void*>(const_cast< Compressor*>(this));
    return AudioFilterControlWidget::qt_metacast(_clname);
}

int Compressor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioFilterControlWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Spatializer[] = {

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

static const char qt_meta_stringdata_Spatializer[] = {
    "Spatializer\0"
};

void Spatializer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Spatializer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Spatializer::staticMetaObject = {
    { &AudioFilterControlWidget::staticMetaObject, qt_meta_stringdata_Spatializer,
      qt_meta_data_Spatializer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Spatializer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Spatializer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Spatializer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Spatializer))
        return static_cast<void*>(const_cast< Spatializer*>(this));
    return AudioFilterControlWidget::qt_metacast(_clname);
}

int Spatializer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioFilterControlWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_SyncWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   33,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SyncWidget[] = {
    "SyncWidget\0\0valueChanged(double)\0d\0"
    "valueChangedHandler(double)\0"
};

void SyncWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SyncWidget *_t = static_cast<SyncWidget *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->valueChangedHandler((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SyncWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SyncWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SyncWidget,
      qt_meta_data_SyncWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SyncWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SyncWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SyncWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SyncWidget))
        return static_cast<void*>(const_cast< SyncWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SyncWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SyncWidget::valueChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_SyncControls[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      23,   13,   13,   13, 0x08,
      44,   13,   13,   13, 0x08,
      64,   13,   13,   13, 0x08,
      88,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SyncControls[] = {
    "SyncControls\0\0update()\0advanceAudio(double)\0"
    "advanceSubs(double)\0adjustSubsSpeed(double)\0"
    "adjustSubsDuration(double)\0"
};

void SyncControls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SyncControls *_t = static_cast<SyncControls *>(_o);
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->advanceAudio((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->advanceSubs((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->adjustSubsSpeed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->adjustSubsDuration((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SyncControls::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SyncControls::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SyncControls,
      qt_meta_data_SyncControls, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SyncControls::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SyncControls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SyncControls::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SyncControls))
        return static_cast<void*>(const_cast< SyncControls*>(this));
    return QWidget::qt_metacast(_clname);
}

int SyncControls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
