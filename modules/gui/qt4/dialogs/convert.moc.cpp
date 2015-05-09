/****************************************************************************
** Meta object code from reading C++ file 'convert.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "convert.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'convert.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConvertDialog[] = {

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
      15,   14,   14,   14, 0x08,
      23,   14,   14,   14, 0x08,
      32,   14,   14,   14, 0x08,
      45,   14,   14,   14, 0x08,
      75,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ConvertDialog[] = {
    "ConvertDialog\0\0close()\0cancel()\0"
    "fileBrowse()\0setDestinationFileExtension()\0"
    "validate()\0"
};

void ConvertDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConvertDialog *_t = static_cast<ConvertDialog *>(_o);
        switch (_id) {
        case 0: _t->close(); break;
        case 1: _t->cancel(); break;
        case 2: _t->fileBrowse(); break;
        case 3: _t->setDestinationFileExtension(); break;
        case 4: _t->validate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ConvertDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ConvertDialog::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_ConvertDialog,
      qt_meta_data_ConvertDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConvertDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConvertDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConvertDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConvertDialog))
        return static_cast<void*>(const_cast< ConvertDialog*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int ConvertDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
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
