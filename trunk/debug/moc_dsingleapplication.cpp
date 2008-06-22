/****************************************************************************
** Meta object code from reading C++ file 'dsingleapplication.h'
**
** Created: Mon Dec 24 11:17:36 2007
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/dsingleapplication.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dsingleapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_DSingleApplication[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      28,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   20,   53,   19, 0x0a,
      79,   20,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DSingleApplication[] = {
    "DSingleApplication\0\0message\0"
    "messageReceived(QString)\0bool\0"
    "sendMessage(QString)\0onClientMessage(QString)\0"
};

const QMetaObject DSingleApplication::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DSingleApplication,
      qt_meta_data_DSingleApplication, 0 }
};

const QMetaObject *DSingleApplication::metaObject() const
{
    return &staticMetaObject;
}

void *DSingleApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DSingleApplication))
	return static_cast<void*>(const_cast< DSingleApplication*>(this));
    return QObject::qt_metacast(_clname);
}

int DSingleApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: messageReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { bool _r = sendMessage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: onClientMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DSingleApplication::messageReceived(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_DPortChecker[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_DPortChecker[] = {
    "DPortChecker\0"
};

const QMetaObject DPortChecker::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DPortChecker,
      qt_meta_data_DPortChecker, 0 }
};

const QMetaObject *DPortChecker::metaObject() const
{
    return &staticMetaObject;
}

void *DPortChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DPortChecker))
	return static_cast<void*>(const_cast< DPortChecker*>(this));
    return QThread::qt_metacast(_clname);
}

int DPortChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_DTalker[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      17,    9,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,    9,    8,    8, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DTalker[] = {
    "DTalker\0\0message\0messageReceived(QString)\0"
    "onClientMessage(QString)\0"
};

const QMetaObject DTalker::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_DTalker,
      qt_meta_data_DTalker, 0 }
};

const QMetaObject *DTalker::metaObject() const
{
    return &staticMetaObject;
}

void *DTalker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DTalker))
	return static_cast<void*>(const_cast< DTalker*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int DTalker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: messageReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: onClientMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void DTalker::messageReceived(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_DListner[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      18,   10,    9,    9, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_DListner[] = {
    "DListner\0\0message\0messageReceived(QString)\0"
};

const QMetaObject DListner::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DListner,
      qt_meta_data_DListner, 0 }
};

const QMetaObject *DListner::metaObject() const
{
    return &staticMetaObject;
}

void *DListner::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DListner))
	return static_cast<void*>(const_cast< DListner*>(this));
    return QThread::qt_metacast(_clname);
}

int DListner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: messageReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void DListner::messageReceived(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
