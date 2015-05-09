/****************************************************************************
** Meta object code from reading C++ file 'fingerprintdialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fingerprintdialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fingerprintdialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FingerprintDialog[] = {

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
      19,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   18,   18,   18, 0x08,
      62,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FingerprintDialog[] = {
    "FingerprintDialog\0\0metaApplied(input_item_t*)\0"
    "handleResults()\0applyIdentity()\0"
};

void FingerprintDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FingerprintDialog *_t = static_cast<FingerprintDialog *>(_o);
        switch (_id) {
        case 0: _t->metaApplied((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 1: _t->handleResults(); break;
        case 2: _t->applyIdentity(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FingerprintDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FingerprintDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FingerprintDialog,
      qt_meta_data_FingerprintDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FingerprintDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FingerprintDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FingerprintDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FingerprintDialog))
        return static_cast<void*>(const_cast< FingerprintDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int FingerprintDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void FingerprintDialog::metaApplied(input_item_t * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
