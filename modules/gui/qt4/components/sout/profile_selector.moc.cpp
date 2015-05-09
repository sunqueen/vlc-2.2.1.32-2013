/****************************************************************************
** Meta object code from reading C++ file 'profile_selector.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "profile_selector.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'profile_selector.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VLCProfileSelector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   19,   19,   19, 0x08,
      50,   19,   19,   19, 0x08,
      64,   19,   19,   19, 0x08,
      82,   80,   19,   19, 0x08,
     101,   80,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VLCProfileSelector[] = {
    "VLCProfileSelector\0\0optionsChanged()\0"
    "newProfile()\0editProfile()\0deleteProfile()\0"
    "i\0updateOptions(int)\0updateOptionsOldFormat(int)\0"
};

void VLCProfileSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VLCProfileSelector *_t = static_cast<VLCProfileSelector *>(_o);
        switch (_id) {
        case 0: _t->optionsChanged(); break;
        case 1: _t->newProfile(); break;
        case 2: _t->editProfile(); break;
        case 3: _t->deleteProfile(); break;
        case 4: _t->updateOptions((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateOptionsOldFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VLCProfileSelector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VLCProfileSelector::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VLCProfileSelector,
      qt_meta_data_VLCProfileSelector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VLCProfileSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VLCProfileSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VLCProfileSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VLCProfileSelector))
        return static_cast<void*>(const_cast< VLCProfileSelector*>(this));
    return QWidget::qt_metacast(_clname);
}

int VLCProfileSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void VLCProfileSelector::optionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_VLCProfileEditor[] = {

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
      18,   17,   17,   17, 0x09,
      26,   17,   17,   17, 0x08,
      40,   17,   17,   17, 0x08,
      56,   17,   17,   17, 0x08,
      73,   17,   17,   17, 0x08,
      90,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VLCProfileEditor[] = {
    "VLCProfileEditor\0\0close()\0muxSelected()\0"
    "codecSelected()\0activatePanels()\0"
    "fixBirateState()\0fixQPState()\0"
};

void VLCProfileEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VLCProfileEditor *_t = static_cast<VLCProfileEditor *>(_o);
        switch (_id) {
        case 0: _t->close(); break;
        case 1: _t->muxSelected(); break;
        case 2: _t->codecSelected(); break;
        case 3: _t->activatePanels(); break;
        case 4: _t->fixBirateState(); break;
        case 5: _t->fixQPState(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VLCProfileEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VLCProfileEditor::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_VLCProfileEditor,
      qt_meta_data_VLCProfileEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VLCProfileEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VLCProfileEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VLCProfileEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VLCProfileEditor))
        return static_cast<void*>(const_cast< VLCProfileEditor*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int VLCProfileEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
