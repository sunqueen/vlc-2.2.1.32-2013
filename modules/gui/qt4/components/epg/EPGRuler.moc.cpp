/****************************************************************************
** Meta object code from reading C++ file 'EPGRuler.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "EPGRuler.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EPGRuler.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EPGRuler[] = {

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
      16,   10,    9,    9, 0x0a,
      43,   33,    9,    9, 0x0a,
      76,   67,    9,    9, 0x0a,
     100,   93,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EPGRuler[] = {
    "EPGRuler\0\0scale\0setScale(double)\0"
    "startTime\0setStartTime(QDateTime)\0"
    "duration\0setDuration(int)\0offset\0"
    "setOffset(int)\0"
};

void EPGRuler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EPGRuler *_t = static_cast<EPGRuler *>(_o);
        switch (_id) {
        case 0: _t->setScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setStartTime((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 2: _t->setDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setOffset((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EPGRuler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EPGRuler::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EPGRuler,
      qt_meta_data_EPGRuler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EPGRuler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EPGRuler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EPGRuler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EPGRuler))
        return static_cast<void*>(const_cast< EPGRuler*>(this));
    return QWidget::qt_metacast(_clname);
}

int EPGRuler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
