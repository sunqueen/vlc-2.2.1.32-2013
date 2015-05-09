/****************************************************************************
** Meta object code from reading C++ file 'plugins.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "plugins.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugins.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PluginDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_PluginDialog[] = {
    "PluginDialog\0"
};

void PluginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PluginDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PluginDialog::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_PluginDialog,
      qt_meta_data_PluginDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PluginDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PluginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PluginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PluginDialog))
        return static_cast<void*>(const_cast< PluginDialog*>(this));
    if (!strcmp(_clname, "Singleton<PluginDialog>"))
        return static_cast< Singleton<PluginDialog>*>(const_cast< PluginDialog*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int PluginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PluginTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PluginTab[] = {
    "PluginTab\0\0search(QString)\0"
};

void PluginTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PluginTab *_t = static_cast<PluginTab *>(_o);
        switch (_id) {
        case 0: _t->search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PluginTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PluginTab::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_PluginTab,
      qt_meta_data_PluginTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PluginTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PluginTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PluginTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PluginTab))
        return static_cast<void*>(const_cast< PluginTab*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int PluginTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_ExtensionTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      32,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ExtensionTab[] = {
    "ExtensionTab\0\0moreInformation()\0"
    "updateButtons()\0"
};

void ExtensionTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExtensionTab *_t = static_cast<ExtensionTab *>(_o);
        switch (_id) {
        case 0: _t->moreInformation(); break;
        case 1: _t->updateButtons(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ExtensionTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExtensionTab::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_ExtensionTab,
      qt_meta_data_ExtensionTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExtensionTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExtensionTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExtensionTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExtensionTab))
        return static_cast<void*>(const_cast< ExtensionTab*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int ExtensionTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_AddonsTab[] = {

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
      11,   10,   10,   10, 0x08,
      29,   10,   10,   10, 0x08,
      49,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddonsTab[] = {
    "AddonsTab\0\0moreInformation()\0"
    "installChecked(int)\0reposync()\0"
};

void AddonsTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddonsTab *_t = static_cast<AddonsTab *>(_o);
        switch (_id) {
        case 0: _t->moreInformation(); break;
        case 1: _t->installChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->reposync(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AddonsTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddonsTab::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_AddonsTab,
      qt_meta_data_AddonsTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddonsTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddonsTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddonsTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddonsTab))
        return static_cast<void*>(const_cast< AddonsTab*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int AddonsTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_ExtensionListModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ExtensionListModel[] = {
    "ExtensionListModel\0\0updateList()\0"
};

void ExtensionListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExtensionListModel *_t = static_cast<ExtensionListModel *>(_o);
        switch (_id) {
        case 0: _t->updateList(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ExtensionListModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExtensionListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_ExtensionListModel,
      qt_meta_data_ExtensionListModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExtensionListModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExtensionListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExtensionListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExtensionListModel))
        return static_cast<void*>(const_cast< ExtensionListModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int ExtensionListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_AddonsListModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x09,
      44,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_AddonsListModel[] = {
    "AddonsListModel\0\0addonAdded(addon_entry_t*)\0"
    "addonChanged(const addon_entry_t*)\0"
};

void AddonsListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddonsListModel *_t = static_cast<AddonsListModel *>(_o);
        switch (_id) {
        case 0: _t->addonAdded((*reinterpret_cast< addon_entry_t*(*)>(_a[1]))); break;
        case 1: _t->addonChanged((*reinterpret_cast< const addon_entry_t*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AddonsListModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddonsListModel::staticMetaObject = {
    { &ExtensionListModel::staticMetaObject, qt_meta_stringdata_AddonsListModel,
      qt_meta_data_AddonsListModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddonsListModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddonsListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddonsListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddonsListModel))
        return static_cast<void*>(const_cast< AddonsListModel*>(this));
    return ExtensionListModel::qt_metacast(_clname);
}

int AddonsListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtensionListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_AddonsSortFilterProxyModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x0a,
      47,   27,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AddonsSortFilterProxyModel[] = {
    "AddonsSortFilterProxyModel\0\0"
    "setTypeFilter(int)\0setStatusFilter(int)\0"
};

void AddonsSortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddonsSortFilterProxyModel *_t = static_cast<AddonsSortFilterProxyModel *>(_o);
        switch (_id) {
        case 0: _t->setTypeFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setStatusFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AddonsSortFilterProxyModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddonsSortFilterProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_AddonsSortFilterProxyModel,
      qt_meta_data_AddonsSortFilterProxyModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddonsSortFilterProxyModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddonsSortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddonsSortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddonsSortFilterProxyModel))
        return static_cast<void*>(const_cast< AddonsSortFilterProxyModel*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int AddonsSortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_ExtensionItemDelegate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_ExtensionItemDelegate[] = {
    "ExtensionItemDelegate\0"
};

void ExtensionItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ExtensionItemDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExtensionItemDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_ExtensionItemDelegate,
      qt_meta_data_ExtensionItemDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExtensionItemDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExtensionItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExtensionItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExtensionItemDelegate))
        return static_cast<void*>(const_cast< ExtensionItemDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int ExtensionItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_AddonItemDelegate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AddonItemDelegate[] = {
    "AddonItemDelegate\0\0showInfo()\0"
    "editButtonClicked()\0"
};

void AddonItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddonItemDelegate *_t = static_cast<AddonItemDelegate *>(_o);
        switch (_id) {
        case 0: _t->showInfo(); break;
        case 1: _t->editButtonClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AddonItemDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddonItemDelegate::staticMetaObject = {
    { &ExtensionItemDelegate::staticMetaObject, qt_meta_stringdata_AddonItemDelegate,
      qt_meta_data_AddonItemDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddonItemDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddonItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddonItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddonItemDelegate))
        return static_cast<void*>(const_cast< AddonItemDelegate*>(this));
    return ExtensionItemDelegate::qt_metacast(_clname);
}

int AddonItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtensionItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AddonItemDelegate::showInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
