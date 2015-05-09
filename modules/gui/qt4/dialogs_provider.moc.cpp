/****************************************************************************
** Meta object code from reading C++ file 'dialogs_provider.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialogs_provider.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogs_provider.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogsProvider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   16,   16,   16, 0x0a,
      55,   16,   16,   16, 0x0a,
      73,   16,   16,   16, 0x0a,
      91,   16,   16,   16, 0x0a,
     110,   16,   16,   16, 0x0a,
     124,   16,   16,   16, 0x0a,
     141,   16,   16,   16, 0x0a,
     157,   16,   16,   16, 0x0a,
     174,   16,   16,   16, 0x0a,
     186,   16,   16,   16, 0x0a,
     199,   16,   16,   16, 0x0a,
     213,   16,   16,   16, 0x0a,
     230,   16,   16,   16, 0x0a,
     255,   16,   16,   16, 0x0a,
     271,   16,   16,   16, 0x0a,
     286,   16,   16,   16, 0x0a,
     298,   16,   16,   16, 0x0a,
     341,   16,   16,   16, 0x0a,
     360,   16,   16,   16, 0x0a,
     373,   16,   16,   16, 0x0a,
     390,   16,   16,   16, 0x0a,
     407,   16,   16,   16, 0x0a,
     423,   16,   16,   16, 0x0a,
     439,   16,   16,   16, 0x0a,
     463,  459,   16,   16, 0x0a,
     483,   16,   16,   16, 0x2a,
     500,  459,   16,   16, 0x0a,
     520,   16,   16,   16, 0x2a,
     537,   16,   16,   16, 0x0a,
     549,   16,   16,   16, 0x0a,
     591,  563,   16,   16, 0x0a,
     662,  642,   16,   16, 0x2a,
     712,  701,   16,   16, 0x2a,
     746,   16,   16,   16, 0x0a,
     772,   16,   16,   16, 0x0a,
     800,   16,   16,   16, 0x0a,
     816,   16,   16,   16, 0x0a,
     840,   16,   16,   16, 0x0a,
     864,   16,   16,   16, 0x0a,
     884,   16,   16,   16, 0x0a,
     891,   16,   16,   16, 0x08,
     912,   16,   16,   16, 0x08,
     939,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogsProvider[] = {
    "DialogsProvider\0\0toolBarConfUpdated()\0"
    "playlistDialog()\0bookmarksDialog()\0"
    "mediaInfoDialog()\0mediaCodecDialog()\0"
    "prefsDialog()\0extendedDialog()\0"
    "synchroDialog()\0messagesDialog()\0"
    "vlmDialog()\0helpDialog()\0aboutDialog()\0"
    "gotoTimeDialog()\0podcastConfigureDialog()\0"
    "toolbarDialog()\0pluginDialog()\0"
    "epgDialog()\0openFileGenericDialog(intf_dialog_args_t*)\0"
    "simpleOpenDialog()\0openDialog()\0"
    "openDiscDialog()\0openFileDialog()\0"
    "openUrlDialog()\0openNetDialog()\0"
    "openCaptureDialog()\0tab\0PLAppendDialog(int)\0"
    "PLAppendDialog()\0MLAppendDialog(int)\0"
    "MLAppendDialog()\0PLOpenDir()\0PLAppendDir()\0"
    "parent,mrl,b_stream,options\0"
    "streamingDialog(QWidget*,QString,bool,QStringList)\0"
    "parent,mrl,b_stream\0"
    "streamingDialog(QWidget*,QString,bool)\0"
    "parent,mrl\0streamingDialog(QWidget*,QString)\0"
    "openAndStreamingDialogs()\0"
    "openAndTranscodingDialogs()\0openAPlaylist()\0"
    "savePlayingToPlaylist()\0saveRecentsToPlaylist()\0"
    "loadSubtitlesFile()\0quit()\0"
    "menuAction(QObject*)\0menuUpdateAction(QObject*)\0"
    "SDMenuAction(QString)\0"
};

void DialogsProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogsProvider *_t = static_cast<DialogsProvider *>(_o);
        switch (_id) {
        case 0: _t->toolBarConfUpdated(); break;
        case 1: _t->playlistDialog(); break;
        case 2: _t->bookmarksDialog(); break;
        case 3: _t->mediaInfoDialog(); break;
        case 4: _t->mediaCodecDialog(); break;
        case 5: _t->prefsDialog(); break;
        case 6: _t->extendedDialog(); break;
        case 7: _t->synchroDialog(); break;
        case 8: _t->messagesDialog(); break;
        case 9: _t->vlmDialog(); break;
        case 10: _t->helpDialog(); break;
        case 11: _t->aboutDialog(); break;
        case 12: _t->gotoTimeDialog(); break;
        case 13: _t->podcastConfigureDialog(); break;
        case 14: _t->toolbarDialog(); break;
        case 15: _t->pluginDialog(); break;
        case 16: _t->epgDialog(); break;
        case 17: _t->openFileGenericDialog((*reinterpret_cast< intf_dialog_args_t*(*)>(_a[1]))); break;
        case 18: _t->simpleOpenDialog(); break;
        case 19: _t->openDialog(); break;
        case 20: _t->openDiscDialog(); break;
        case 21: _t->openFileDialog(); break;
        case 22: _t->openUrlDialog(); break;
        case 23: _t->openNetDialog(); break;
        case 24: _t->openCaptureDialog(); break;
        case 25: _t->PLAppendDialog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->PLAppendDialog(); break;
        case 27: _t->MLAppendDialog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->MLAppendDialog(); break;
        case 29: _t->PLOpenDir(); break;
        case 30: _t->PLAppendDir(); break;
        case 31: _t->streamingDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QStringList(*)>(_a[4]))); break;
        case 32: _t->streamingDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 33: _t->streamingDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 34: _t->openAndStreamingDialogs(); break;
        case 35: _t->openAndTranscodingDialogs(); break;
        case 36: _t->openAPlaylist(); break;
        case 37: _t->savePlayingToPlaylist(); break;
        case 38: _t->saveRecentsToPlaylist(); break;
        case 39: _t->loadSubtitlesFile(); break;
        case 40: _t->quit(); break;
        case 41: _t->menuAction((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 42: _t->menuUpdateAction((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 43: _t->SDMenuAction((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DialogsProvider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogsProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DialogsProvider,
      qt_meta_data_DialogsProvider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogsProvider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogsProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogsProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogsProvider))
        return static_cast<void*>(const_cast< DialogsProvider*>(this));
    return QObject::qt_metacast(_clname);
}

int DialogsProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }
    return _id;
}

// SIGNAL 0
void DialogsProvider::toolBarConfUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
