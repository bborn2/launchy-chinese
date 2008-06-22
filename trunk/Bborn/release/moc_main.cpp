/****************************************************************************
** Meta object code from reading C++ file 'main.h'
**
** Created: Tue Dec 25 17:37:29 2007
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/main.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QLineEditMenu[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QLineEditMenu[] = {
    "QLineEditMenu\0\0menuEvent(QContextMenuEvent*)\0"
};

const QMetaObject QLineEditMenu::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_QLineEditMenu,
      qt_meta_data_QLineEditMenu, 0 }
};

const QMetaObject *QLineEditMenu::metaObject() const
{
    return &staticMetaObject;
}

void *QLineEditMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLineEditMenu))
	return static_cast<void*>(const_cast< QLineEditMenu*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int QLineEditMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: menuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QLineEditMenu::menuEvent(QContextMenuEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QCharLineEdit[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      42,   38,   14,   14, 0x05,
      67,   65,   14,   14, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QCharLineEdit[] = {
    "QCharLineEdit\0\0keyPressed(QKeyEvent*)\0"
    "evt\0focusOut(QFocusEvent*)\0e\0"
    "inputMethod(QInputMethodEvent*)\0"
};

const QMetaObject QCharLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_QCharLineEdit,
      qt_meta_data_QCharLineEdit, 0 }
};

const QMetaObject *QCharLineEdit::metaObject() const
{
    return &staticMetaObject;
}

void *QCharLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCharLineEdit))
	return static_cast<void*>(const_cast< QCharLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int QCharLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: keyPressed((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 1: focusOut((*reinterpret_cast< QFocusEvent*(*)>(_a[1]))); break;
        case 2: inputMethod((*reinterpret_cast< QInputMethodEvent*(*)>(_a[1]))); break;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QCharLineEdit::keyPressed(QKeyEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCharLineEdit::focusOut(QFocusEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCharLineEdit::inputMethod(QInputMethodEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_QCharListWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      44,   40,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QCharListWidget[] = {
    "QCharListWidget\0\0keyPressed(QKeyEvent*)\0"
    "evt\0focusOut(QFocusEvent*)\0"
};

const QMetaObject QCharListWidget::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_QCharListWidget,
      qt_meta_data_QCharListWidget, 0 }
};

const QMetaObject *QCharListWidget::metaObject() const
{
    return &staticMetaObject;
}

void *QCharListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCharListWidget))
	return static_cast<void*>(const_cast< QCharListWidget*>(this));
    return QListWidget::qt_metacast(_clname);
}

int QCharListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: keyPressed((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 1: focusOut((*reinterpret_cast< QFocusEvent*(*)>(_a[1]))); break;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QCharListWidget::keyPressed(QKeyEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCharListWidget::focusOut(QFocusEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_Fader[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,
      25,    6,    6,    6, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Fader[] = {
    "Fader\0\0fadeLevel(double)\0finishedFade(double)\0"
};

const QMetaObject Fader::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_Fader,
      qt_meta_data_Fader, 0 }
};

const QMetaObject *Fader::metaObject() const
{
    return &staticMetaObject;
}

void *Fader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Fader))
	return static_cast<void*>(const_cast< Fader*>(this));
    return QThread::qt_metacast(_clname);
}

int Fader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: fadeLevel((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: finishedFade((*reinterpret_cast< double(*)>(_a[1]))); break;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Fader::fadeLevel(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Fader::finishedFade(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_MyWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      24,    9,    9,    9, 0x0a,
      35,    9,    9,    9, 0x0a,
      51,    9,    9,    9, 0x0a,
      65,    9,    9,    9, 0x0a,
      85,    9,    9,    9, 0x0a,
     104,    9,    9,    9, 0x0a,
     122,    9,    9,    9, 0x0a,
     146,  139,    9,    9, 0x0a,
     168,    9,    9,    9, 0x0a,
     185,  183,    9,    9, 0x0a,
     222,    9,    9,    9, 0x0a,
     252,  248,    9,    9, 0x0a,
     283,  248,    9,    9, 0x0a,
     316,  312,    9,    9, 0x0a,
     348,  344,    9,    9, 0x0a,
     367,    9,    9,    9, 0x0a,
     390,  388,    9,    9, 0x0a,
     411,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MyWidget[] = {
    "MyWidget\0\0menuOptions()\0onHotKey()\0"
    "updateTimeout()\0dropTimeout()\0"
    "setAlwaysShow(bool)\0setAlwaysTop(bool)\0"
    "setPortable(bool)\0setSkin(QString)\0"
    "result\0httpGetFinished(bool)\0"
    "catalogBuilt()\0e\0inputMethodEvent(QInputMethodEvent*)\0"
    "keyPressEvent(QKeyEvent*)\0key\0"
    "inputKeyPressEvent(QKeyEvent*)\0"
    "altKeyPressEvent(QKeyEvent*)\0evt\0"
    "focusOutEvent(QFocusEvent*)\0val\0"
    "setOpaqueness(int)\0setFadeLevel(double)\0"
    "d\0finishedFade(double)\0"
    "menuEvent(QContextMenuEvent*)\0"
};

const QMetaObject MyWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MyWidget,
      qt_meta_data_MyWidget, 0 }
};

const QMetaObject *MyWidget::metaObject() const
{
    return &staticMetaObject;
}

void *MyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyWidget))
	return static_cast<void*>(const_cast< MyWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int MyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: menuOptions(); break;
        case 1: onHotKey(); break;
        case 2: updateTimeout(); break;
        case 3: dropTimeout(); break;
        case 4: setAlwaysShow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: setAlwaysTop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: setPortable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: setSkin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: httpGetFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: catalogBuilt(); break;
        case 10: inputMethodEvent((*reinterpret_cast< QInputMethodEvent*(*)>(_a[1]))); break;
        case 11: keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 12: inputKeyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 13: altKeyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 14: focusOutEvent((*reinterpret_cast< QFocusEvent*(*)>(_a[1]))); break;
        case 15: setOpaqueness((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: setFadeLevel((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: finishedFade((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: menuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        }
        _id -= 19;
    }
    return _id;
}
