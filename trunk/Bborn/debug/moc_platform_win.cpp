/****************************************************************************
** Meta object code from reading C++ file 'platform_win.h'
**
** Created: Tue Dec 25 13:34:56 2007
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/platform_win.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'platform_win.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QLaunchyAlphaBorder[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_QLaunchyAlphaBorder[] = {
    "QLaunchyAlphaBorder\0"
};

const QMetaObject QLaunchyAlphaBorder::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QLaunchyAlphaBorder,
      qt_meta_data_QLaunchyAlphaBorder, 0 }
};

const QMetaObject *QLaunchyAlphaBorder::metaObject() const
{
    return &staticMetaObject;
}

void *QLaunchyAlphaBorder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLaunchyAlphaBorder))
	return static_cast<void*>(const_cast< QLaunchyAlphaBorder*>(this));
    return QWidget::qt_metacast(_clname);
}

int QLaunchyAlphaBorder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
