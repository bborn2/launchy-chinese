/****************************************************************************
** Meta object code from reading C++ file 'options.h'
**
** Created: Tue Dec 25 17:37:28 2007
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/options.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'options.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_OptionsDlg[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      21,   11,   11,   11, 0x0a,
      30,   11,   11,   11, 0x0a,
      55,   51,   11,   11, 0x0a,
      73,   71,   11,   11, 0x0a,
      97,   71,   11,   11, 0x0a,
     122,   71,   11,   11, 0x0a,
     148,   71,   11,   11, 0x0a,
     175,   11,   11,   11, 0x0a,
     199,   11,   11,   11, 0x0a,
     223,   11,   11,   11, 0x0a,
     244,   11,   11,   11, 0x0a,
     270,   11,   11,   11, 0x0a,
     285,   11,   11,   11, 0x0a,
     308,   51,   11,   11, 0x0a,
     333,  327,   11,   11, 0x0a,
     373,  369,   11,   11, 0x0a,
     394,  389,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OptionsDlg[] = {
    "OptionsDlg\0\0accept()\0reject()\0"
    "skinChanged(QString)\0row\0dirChanged(int)\0"
    "c\0catDirPlusClicked(bool)\0"
    "catDirMinusClicked(bool)\0"
    "catTypesPlusClicked(bool)\0"
    "catTypesMinusClicked(bool)\0"
    "catTypesDirChanged(int)\0catTypesExeChanged(int)\0"
    "catDepthChanged(int)\0catProgressUpdated(float)\0"
    "catalogBuilt()\0catRescanClicked(bool)\0"
    "pluginChanged(int)\0state\0"
    "pluginItemChanged(QListWidgetItem*)\0"
    "tab\0tabChanged(int)\0item\0"
    "catDirTextChanged(QListWidgetItem*)\0"
};

const QMetaObject OptionsDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OptionsDlg,
      qt_meta_data_OptionsDlg, 0 }
};

const QMetaObject *OptionsDlg::metaObject() const
{
    return &staticMetaObject;
}

void *OptionsDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OptionsDlg))
	return static_cast<void*>(const_cast< OptionsDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int OptionsDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: accept(); break;
        case 1: reject(); break;
        case 2: skinChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: dirChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: catDirPlusClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: catDirMinusClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: catTypesPlusClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: catTypesMinusClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: catTypesDirChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: catTypesExeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: catDepthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: catProgressUpdated((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: catalogBuilt(); break;
        case 13: catRescanClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: pluginChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: pluginItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 16: tabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: catDirTextChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        }
        _id -= 18;
    }
    return _id;
}
