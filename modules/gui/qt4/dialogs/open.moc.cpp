/****************************************************************************
** Meta object code from reading C++ file 'open.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "open.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'open.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OpenDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      26,   11,   11,   11, 0x0a,
      49,   33,   11,   11, 0x0a,
      62,   11,   11,   11, 0x2a,
      81,   71,   11,   11, 0x0a,
      95,   11,   11,   11, 0x2a,
     105,   11,   11,   11, 0x0a,
     117,   11,   11,   11, 0x08,
     133,   11,   11,   11, 0x08,
     142,   11,   11,   11, 0x08,
     150,   11,   11,   11, 0x08,
     174,  172,   11,   11, 0x08,
     205,   11,   11,   11, 0x08,
     217,   11,   11,   11, 0x08,
     243,   11,   11,   11, 0x08,
     262,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OpenDialog[] = {
    "OpenDialog\0\0selectSlots()\0play()\0"
    "b_transode_only\0stream(bool)\0stream()\0"
    "b_enqueue\0enqueue(bool)\0enqueue()\0"
    "transcode()\0setMenuAction()\0cancel()\0"
    "close()\0toggleAdvancedPanel()\0,\0"
    "updateMRL(QStringList,QString)\0"
    "updateMRL()\0newCachingMethod(QString)\0"
    "signalCurrent(int)\0browseInputSlave()\0"
};

void OpenDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OpenDialog *_t = static_cast<OpenDialog *>(_o);
        switch (_id) {
        case 0: _t->selectSlots(); break;
        case 1: _t->play(); break;
        case 2: _t->stream((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->stream(); break;
        case 4: _t->enqueue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->enqueue(); break;
        case 6: _t->transcode(); break;
        case 7: _t->setMenuAction(); break;
        case 8: _t->cancel(); break;
        case 9: _t->close(); break;
        case 10: _t->toggleAdvancedPanel(); break;
        case 11: _t->updateMRL((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->updateMRL(); break;
        case 13: _t->newCachingMethod((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->signalCurrent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->browseInputSlave(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OpenDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OpenDialog::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_OpenDialog,
      qt_meta_data_OpenDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OpenDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OpenDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OpenDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OpenDialog))
        return static_cast<void*>(const_cast< OpenDialog*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int OpenDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
