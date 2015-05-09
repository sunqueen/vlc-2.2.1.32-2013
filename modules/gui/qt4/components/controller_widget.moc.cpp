/****************************************************************************
** Meta object code from reading C++ file 'controller_widget.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "controller_widget.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controller_widget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlayButton[] = {

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
      12,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PlayButton[] = {
    "PlayButton\0\0updateButtonIcons(bool)\0"
};

void PlayButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlayButton *_t = static_cast<PlayButton *>(_o);
        switch (_id) {
        case 0: _t->updateButtonIcons((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlayButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlayButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_PlayButton,
      qt_meta_data_PlayButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlayButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlayButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlayButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlayButton))
        return static_cast<void*>(const_cast< PlayButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int PlayButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_LoopButton[] = {

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
      12,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LoopButton[] = {
    "LoopButton\0\0updateButtonIcons(int)\0"
};

void LoopButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LoopButton *_t = static_cast<LoopButton *>(_o);
        switch (_id) {
        case 0: _t->updateButtonIcons((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LoopButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LoopButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_LoopButton,
      qt_meta_data_LoopButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LoopButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LoopButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LoopButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LoopButton))
        return static_cast<void*>(const_cast< LoopButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int LoopButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_AtoB_Button[] = {

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
      15,   13,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AtoB_Button[] = {
    "AtoB_Button\0\0,\0updateButtonIcons(bool,bool)\0"
};

void AtoB_Button::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AtoB_Button *_t = static_cast<AtoB_Button *>(_o);
        switch (_id) {
        case 0: _t->updateButtonIcons((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AtoB_Button::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AtoB_Button::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_AtoB_Button,
      qt_meta_data_AtoB_Button, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AtoB_Button::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AtoB_Button::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AtoB_Button::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AtoB_Button))
        return static_cast<void*>(const_cast< AtoB_Button*>(this));
    return QToolButton::qt_metacast(_clname);
}

int AtoB_Button::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_AspectRatioComboBox[] = {

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
      21,   20,   20,   20, 0x0a,
      36,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AspectRatioComboBox[] = {
    "AspectRatioComboBox\0\0updateRatios()\0"
    "updateAspectRatio(int)\0"
};

void AspectRatioComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AspectRatioComboBox *_t = static_cast<AspectRatioComboBox *>(_o);
        switch (_id) {
        case 0: _t->updateRatios(); break;
        case 1: _t->updateAspectRatio((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AspectRatioComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AspectRatioComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_AspectRatioComboBox,
      qt_meta_data_AspectRatioComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AspectRatioComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AspectRatioComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AspectRatioComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AspectRatioComboBox))
        return static_cast<void*>(const_cast< AspectRatioComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int AspectRatioComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_SoundWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   12,   12,   12, 0x09,
      59,   12,   12,   12, 0x09,
      82,   12,   12,   12, 0x09,
     105,   12,   12,   12, 0x09,
     125,  121,   12,   12, 0x09,
     148,   12,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SoundWidget[] = {
    "SoundWidget\0\0valueReallyChanged(int)\0"
    "userUpdateVolume(int)\0libUpdateVolume(float)\0"
    "updateMuteStatus(bool)\0refreshLabels()\0"
    "pos\0showVolumeMenu(QPoint)\0"
    "valueChangedFilter(int)\0"
};

void SoundWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SoundWidget *_t = static_cast<SoundWidget *>(_o);
        switch (_id) {
        case 0: _t->valueReallyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->userUpdateVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->libUpdateVolume((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->updateMuteStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->refreshLabels(); break;
        case 5: _t->showVolumeMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 6: _t->valueChangedFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SoundWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SoundWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SoundWidget,
      qt_meta_data_SoundWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SoundWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SoundWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SoundWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SoundWidget))
        return static_cast<void*>(const_cast< SoundWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SoundWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SoundWidget::valueReallyChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
