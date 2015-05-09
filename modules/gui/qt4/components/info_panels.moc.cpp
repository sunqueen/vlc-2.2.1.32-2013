/****************************************************************************
** Meta object code from reading C++ file 'info_panels.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "info_panels.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'info_panels.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MetaPanel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      27,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   10,   10,   10, 0x0a,
      59,   10,   10,   10, 0x0a,
      67,   10,   10,   10, 0x0a,
      81,   10,   10,   10, 0x0a,
     114,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MetaPanel[] = {
    "MetaPanel\0\0uriSet(QString)\0editing()\0"
    "update(input_item_t*)\0clear()\0"
    "fingerprint()\0fingerprintUpdate(input_item_t*)\0"
    "enterEditMode()\0"
};

void MetaPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MetaPanel *_t = static_cast<MetaPanel *>(_o);
        switch (_id) {
        case 0: _t->uriSet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->editing(); break;
        case 2: _t->update((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 3: _t->clear(); break;
        case 4: _t->fingerprint(); break;
        case 5: _t->fingerprintUpdate((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 6: _t->enterEditMode(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MetaPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MetaPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MetaPanel,
      qt_meta_data_MetaPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MetaPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MetaPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MetaPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MetaPanel))
        return static_cast<void*>(const_cast< MetaPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int MetaPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MetaPanel::uriSet(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MetaPanel::editing()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_ExtraMetaPanel[] = {

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
      16,   15,   15,   15, 0x0a,
      38,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ExtraMetaPanel[] = {
    "ExtraMetaPanel\0\0update(input_item_t*)\0"
    "clear()\0"
};

void ExtraMetaPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExtraMetaPanel *_t = static_cast<ExtraMetaPanel *>(_o);
        switch (_id) {
        case 0: _t->update((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 1: _t->clear(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ExtraMetaPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExtraMetaPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ExtraMetaPanel,
      qt_meta_data_ExtraMetaPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExtraMetaPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExtraMetaPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExtraMetaPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExtraMetaPanel))
        return static_cast<void*>(const_cast< ExtraMetaPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int ExtraMetaPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_InputStatsPanel[] = {

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
      17,   16,   16,   16, 0x0a,
      39,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_InputStatsPanel[] = {
    "InputStatsPanel\0\0update(input_item_t*)\0"
    "clear()\0"
};

void InputStatsPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InputStatsPanel *_t = static_cast<InputStatsPanel *>(_o);
        switch (_id) {
        case 0: _t->update((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 1: _t->clear(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData InputStatsPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InputStatsPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InputStatsPanel,
      qt_meta_data_InputStatsPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InputStatsPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InputStatsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InputStatsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputStatsPanel))
        return static_cast<void*>(const_cast< InputStatsPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int InputStatsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_InfoPanel[] = {

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
      11,   10,   10,   10, 0x0a,
      33,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_InfoPanel[] = {
    "InfoPanel\0\0update(input_item_t*)\0"
    "clear()\0"
};

void InfoPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InfoPanel *_t = static_cast<InfoPanel *>(_o);
        switch (_id) {
        case 0: _t->update((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 1: _t->clear(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData InfoPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InfoPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InfoPanel,
      qt_meta_data_InfoPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InfoPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InfoPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InfoPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InfoPanel))
        return static_cast<void*>(const_cast< InfoPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int InfoPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
