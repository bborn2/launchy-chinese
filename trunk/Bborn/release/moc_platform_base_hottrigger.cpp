/****************************************************************************
** Meta object code from reading C++ file 'platform_base_hottrigger.h'
**
** Created: Tue Dec 25 17:37:28 2007
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/platform_base_hottrigger.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'platform_base_hottrigger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_GlobalShortcutManager__KeyTrigger[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      35,   34,   34,   34, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_GlobalShortcutManager__KeyTrigger[] = {
    "GlobalShortcutManager::KeyTrigger\0\0"
    "activated()\0"
};

const QMetaObject GlobalShortcutManager::KeyTrigger::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GlobalShortcutManager__KeyTrigger,
      qt_meta_data_GlobalShortcutManager__KeyTrigger, 0 }
};

const QMetaObject *GlobalShortcutManager::KeyTrigger::metaObject() const
{
    return &staticMetaObject;
}

void *GlobalShortcutManager::KeyTrigger::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalShortcutManager__KeyTrigger))
	return static_cast<void*>(const_cast< KeyTrigger*>(this));
    return QObject::qt_metacast(_clname);
}

int GlobalShortcutManager::KeyTrigger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: activated(); break;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void GlobalShortcutManager::KeyTrigger::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
