/****************************************************************************
** Meta object code from reading C++ file 'external.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "external.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'external.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogHandler[] = {

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
      17,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   15,   14,   14, 0x08,
      70,   14,   14,   14, 0x08,
      93,   14,   14,   14, 0x08,
     113,   14,   14,   14, 0x08,
     134,   14,   14,   14, 0x08,
     158,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogHandler[] = {
    "DialogHandler\0\0,\0error(QString,QString)\0"
    "displayError(QString,QString)\0"
    "displayCritical(void*)\0requestLogin(void*)\0"
    "requestAnswer(void*)\0startProgressBar(void*)\0"
    "stopProgressBar(QWidget*)\0"
};

void DialogHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogHandler *_t = static_cast<DialogHandler *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->displayError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->displayCritical((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 3: _t->requestLogin((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 4: _t->requestAnswer((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 5: _t->startProgressBar((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 6: _t->stopProgressBar((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DialogHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DialogHandler,
      qt_meta_data_DialogHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogHandler))
        return static_cast<void*>(const_cast< DialogHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int DialogHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void DialogHandler::error(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QVLCProgressDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      36,   19,   19,   19, 0x05,
      55,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QVLCProgressDialog[] = {
    "QVLCProgressDialog\0\0progressed(int)\0"
    "described(QString)\0released()\0"
    "saveCancel()\0"
};

void QVLCProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QVLCProgressDialog *_t = static_cast<QVLCProgressDialog *>(_o);
        switch (_id) {
        case 0: _t->progressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->described((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->released(); break;
        case 3: _t->saveCancel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QVLCProgressDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QVLCProgressDialog::staticMetaObject = {
    { &QProgressDialog::staticMetaObject, qt_meta_stringdata_QVLCProgressDialog,
      qt_meta_data_QVLCProgressDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QVLCProgressDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QVLCProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QVLCProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QVLCProgressDialog))
        return static_cast<void*>(const_cast< QVLCProgressDialog*>(this));
    return QProgressDialog::qt_metacast(_clname);
}

int QVLCProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProgressDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QVLCProgressDialog::progressed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QVLCProgressDialog::described(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QVLCProgressDialog::released()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
