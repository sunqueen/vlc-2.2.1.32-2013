/****************************************************************************
** Meta object code from reading C++ file 'pictureflow.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pictureflow.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pictureflow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PictureFlow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       4,   59, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   13,   12,   12, 0x0a,
      63,   12,   12,   12, 0x0a,
      71,   12,   12,   12, 0x0a,
      86,   12,   12,   12, 0x0a,
      97,   13,   12,   12, 0x0a,
     112,   12,   12,   12, 0x0a,
     121,   12,   12,   12, 0x0a,
     137,   12,   12,   12, 0x08,

 // properties: name, type, flags
     162,  155, 0x43095103,
     184,  178, 0x15095103,
     198,  194, 0x02095001,
     209,  194, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_PictureFlow[] = {
    "PictureFlow\0\0index\0centerIndexChanged(int)\0"
    "setCenterIndex(int)\0clear()\0showPrevious()\0"
    "showNext()\0showSlide(int)\0render()\0"
    "triggerRender()\0updateAnimation()\0"
    "QColor\0backgroundColor\0QSize\0slideSize\0"
    "int\0slideCount\0centerIndex\0"
};

void PictureFlow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PictureFlow *_t = static_cast<PictureFlow *>(_o);
        switch (_id) {
        case 0: _t->centerIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setCenterIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->clear(); break;
        case 3: _t->showPrevious(); break;
        case 4: _t->showNext(); break;
        case 5: _t->showSlide((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->render(); break;
        case 7: _t->triggerRender(); break;
        case 8: _t->updateAnimation(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PictureFlow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PictureFlow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PictureFlow,
      qt_meta_data_PictureFlow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PictureFlow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PictureFlow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PictureFlow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PictureFlow))
        return static_cast<void*>(const_cast< PictureFlow*>(this));
    return QWidget::qt_metacast(_clname);
}

int PictureFlow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = backgroundColor(); break;
        case 1: *reinterpret_cast< QSize*>(_v) = slideSize(); break;
        case 2: *reinterpret_cast< int*>(_v) = slideCount(); break;
        case 3: *reinterpret_cast< int*>(_v) = centerIndex(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setSlideSize(*reinterpret_cast< QSize*>(_v)); break;
        case 3: setCenterIndex(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PictureFlow::centerIndexChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_PictureFlowPrivate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      37,   20,   19,   19, 0x0a,
      83,   20,   19,   19, 0x0a,
     128,   20,   19,   19, 0x0a,
     165,   20,   19,   19, 0x0a,
     221,  201,   19,   19, 0x0a,
     281,  258,   19,   19, 0x0a,
     324,   19,   19,   19, 0x0a,
     349,   19,   19,   19, 0x0a,
     365,   19,   19,   19, 0x0a,
     387,   19,   19,   19, 0x0a,
     400,   20,   19,   19, 0x0a,
     443,   20,   19,   19, 0x0a,
     485,   20,   19,   19, 0x0a,
     519,   20,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PictureFlowPrivate[] = {
    "PictureFlowPrivate\0\0parent,start,end\0"
    "columnsAboutToBeInserted(QModelIndex,int,int)\0"
    "columnsAboutToBeRemoved(QModelIndex,int,int)\0"
    "columnsInserted(QModelIndex,int,int)\0"
    "columnsRemoved(QModelIndex,int,int)\0"
    "topLeft,bottomRight\0"
    "dataChanged(QModelIndex,QModelIndex)\0"
    "orientation,first,last\0"
    "headerDataChanged(Qt::Orientation,int,int)\0"
    "layoutAboutToBeChanged()\0layoutChanged()\0"
    "modelAboutToBeReset()\0modelReset()\0"
    "rowsAboutToBeInserted(QModelIndex,int,int)\0"
    "rowsAboutToBeRemoved(QModelIndex,int,int)\0"
    "rowsInserted(QModelIndex,int,int)\0"
    "rowsRemoved(QModelIndex,int,int)\0"
};

void PictureFlowPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PictureFlowPrivate *_t = static_cast<PictureFlowPrivate *>(_o);
        switch (_id) {
        case 0: _t->columnsAboutToBeInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->columnsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->columnsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->columnsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->headerDataChanged((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->layoutAboutToBeChanged(); break;
        case 7: _t->layoutChanged(); break;
        case 8: _t->modelAboutToBeReset(); break;
        case 9: _t->modelReset(); break;
        case 10: _t->rowsAboutToBeInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->rowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->rowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PictureFlowPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PictureFlowPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PictureFlowPrivate,
      qt_meta_data_PictureFlowPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PictureFlowPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PictureFlowPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PictureFlowPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PictureFlowPrivate))
        return static_cast<void*>(const_cast< PictureFlowPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int PictureFlowPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
