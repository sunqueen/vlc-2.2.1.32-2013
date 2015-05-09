/****************************************************************************
** Meta object code from reading C++ file 'podcast_configuration.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "podcast_configuration.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'podcast_configuration.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PodcastConfigDialog[] = {

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
      21,   20,   20,   20, 0x0a,
      30,   20,   20,   20, 0x0a,
      36,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PodcastConfigDialog[] = {
    "PodcastConfigDialog\0\0accept()\0add()\0"
    "remove()\0"
};

void PodcastConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PodcastConfigDialog *_t = static_cast<PodcastConfigDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->add(); break;
        case 2: _t->remove(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PodcastConfigDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PodcastConfigDialog::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_PodcastConfigDialog,
      qt_meta_data_PodcastConfigDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PodcastConfigDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PodcastConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PodcastConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PodcastConfigDialog))
        return static_cast<void*>(const_cast< PodcastConfigDialog*>(this));
    if (!strcmp(_clname, "Singleton<PodcastConfigDialog>"))
        return static_cast< Singleton<PodcastConfigDialog>*>(const_cast< PodcastConfigDialog*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int PodcastConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
