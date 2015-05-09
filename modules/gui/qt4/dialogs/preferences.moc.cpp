/****************************************************************************
** Meta object code from reading C++ file 'preferences.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "preferences.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preferences.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrefsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      27,   12,   12,   12, 0x08,
      39,   12,   12,   12, 0x08,
      72,   12,   12,   12, 0x08,
      95,   12,   12,   12, 0x08,
     130,   12,   12,   12, 0x08,
     150,   12,   12,   12, 0x08,
     157,   12,   12,   12, 0x08,
     166,   12,   12,   12, 0x08,
     174,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PrefsDialog[] = {
    "PrefsDialog\0\0setAdvanced()\0setSimple()\0"
    "changeAdvPanel(QTreeWidgetItem*)\0"
    "changeSimplePanel(int)\0"
    "advancedTreeFilterChanged(QString)\0"
    "onlyLoadedToggled()\0save()\0cancel()\0"
    "reset()\0close()\0"
};

void PrefsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PrefsDialog *_t = static_cast<PrefsDialog *>(_o);
        switch (_id) {
        case 0: _t->setAdvanced(); break;
        case 1: _t->setSimple(); break;
        case 2: _t->changeAdvPanel((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->changeSimplePanel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->advancedTreeFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onlyLoadedToggled(); break;
        case 6: _t->save(); break;
        case 7: _t->cancel(); break;
        case 8: _t->reset(); break;
        case 9: _t->close(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PrefsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PrefsDialog::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_PrefsDialog,
      qt_meta_data_PrefsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrefsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrefsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrefsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrefsDialog))
        return static_cast<void*>(const_cast< PrefsDialog*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int PrefsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
