/****************************************************************************
** Meta object code from reading C++ file 'actions_manager.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "actions_manager.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actions_manager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ActionsManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      34,   15,   15,   15, 0x0a,
      44,   15,   15,   15, 0x0a,
      56,   15,   15,   15, 0x0a,
      63,   15,   15,   15, 0x0a,
      72,   15,   15,   15, 0x0a,
      86,   15,   15,   15, 0x0a,
     101,   15,   15,   15, 0x0a,
     120,   15,   15,   15, 0x09,
     133,   15,   15,   15, 0x09,
     144,   15,   15,   15, 0x09,
     155,   15,   15,   15, 0x09,
     163,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ActionsManager[] = {
    "ActionsManager\0\0toggleMuteAudio()\0"
    "AudioUp()\0AudioDown()\0play()\0record()\0"
    "skipForward()\0skipBackward()\0"
    "PPaction(QAction*)\0fullscreen()\0"
    "snapshot()\0playlist()\0frame()\0"
    "doAction(int)\0"
};

void ActionsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ActionsManager *_t = static_cast<ActionsManager *>(_o);
        switch (_id) {
        case 0: _t->toggleMuteAudio(); break;
        case 1: _t->AudioUp(); break;
        case 2: _t->AudioDown(); break;
        case 3: _t->play(); break;
        case 4: _t->record(); break;
        case 5: _t->skipForward(); break;
        case 6: _t->skipBackward(); break;
        case 7: _t->PPaction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 8: _t->fullscreen(); break;
        case 9: _t->snapshot(); break;
        case 10: _t->playlist(); break;
        case 11: _t->frame(); break;
        case 12: _t->doAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ActionsManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ActionsManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ActionsManager,
      qt_meta_data_ActionsManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ActionsManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ActionsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ActionsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ActionsManager))
        return static_cast<void*>(const_cast< ActionsManager*>(this));
    if (!strcmp(_clname, "Singleton<ActionsManager>"))
        return static_cast< Singleton<ActionsManager>*>(const_cast< ActionsManager*>(this));
    return QObject::qt_metacast(_clname);
}

int ActionsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
