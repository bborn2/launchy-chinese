/****************************************************************************
** Meta object code from reading C++ file 'catalog_builder.h'
**
** Created: Tue Dec 25 17:37:30 2007
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/catalog_builder.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'catalog_builder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_CatBuilder[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      30,   11,   11,   11, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_CatBuilder[] = {
    "CatBuilder\0\0catalogFinished()\0"
    "catalogIncrement(float)\0"
};

const QMetaObject CatBuilder::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_CatBuilder,
      qt_meta_data_CatBuilder, 0 }
};

const QMetaObject *CatBuilder::metaObject() const
{
    return &staticMetaObject;
}

void *CatBuilder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CatBuilder))
	return static_cast<void*>(const_cast< CatBuilder*>(this));
    return QThread::qt_metacast(_clname);
}

int CatBuilder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: catalogFinished(); break;
        case 1: catalogIncrement((*reinterpret_cast< float(*)>(_a[1]))); break;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CatBuilder::catalogFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CatBuilder::catalogIncrement(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
