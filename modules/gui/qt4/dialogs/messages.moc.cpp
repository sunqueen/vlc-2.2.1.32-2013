/****************************************************************************
** Meta object code from reading C++ file 'messages.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "messages.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messages.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MessagesDialog[] = {

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
      21,   15,   16,   15, 0x08,
      28,   15,   15,   15, 0x08,
      43,   15,   15,   15, 0x08,
      64,   15,   15,   15, 0x08,
      80,   15,   15,   15, 0x08,
      96,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MessagesDialog[] = {
    "MessagesDialog\0\0bool\0save()\0updateConfig()\0"
    "changeVerbosity(int)\0updateOrClear()\0"
    "tabChanged(int)\0filterMessages()\0"
};

void MessagesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MessagesDialog *_t = static_cast<MessagesDialog *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->updateConfig(); break;
        case 2: _t->changeVerbosity((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateOrClear(); break;
        case 4: _t->tabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->filterMessages(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MessagesDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MessagesDialog::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_MessagesDialog,
      qt_meta_data_MessagesDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MessagesDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MessagesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MessagesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessagesDialog))
        return static_cast<void*>(const_cast< MessagesDialog*>(this));
    if (!strcmp(_clname, "Singleton<MessagesDialog>"))
        return static_cast< Singleton<MessagesDialog>*>(const_cast< MessagesDialog*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int MessagesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
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
