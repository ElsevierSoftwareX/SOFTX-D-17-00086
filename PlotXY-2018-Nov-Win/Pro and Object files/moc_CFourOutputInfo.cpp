/****************************************************************************
** Meta object code from reading C++ file 'CFourOutputInfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../PlotXY/Dialogs/CFourOutputInfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CFourOutputInfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CFourOutputInfo_t {
    QByteArrayData data[10];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CFourOutputInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CFourOutputInfo_t qt_meta_stringdata_CFourOutputInfo = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CFourOutputInfo"
QT_MOC_LITERAL(1, 16, 9), // "showEvent"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "QShowEvent*"
QT_MOC_LITERAL(4, 39, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(5, 61, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(6, 83, 24), // "on_numDataChkBox_clicked"
QT_MOC_LITERAL(7, 108, 7), // "checked"
QT_MOC_LITERAL(8, 116, 21), // "on_amplChkBox_clicked"
QT_MOC_LITERAL(9, 138, 22) // "on_phaseChkBox_clicked"

    },
    "CFourOutputInfo\0showEvent\0\0QShowEvent*\0"
    "on_buttonBox_accepted\0on_buttonBox_rejected\0"
    "on_numDataChkBox_clicked\0checked\0"
    "on_amplChkBox_clicked\0on_phaseChkBox_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CFourOutputInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    0,   47,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,
       8,    1,   52,    2, 0x08 /* Private */,
       9,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void CFourOutputInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CFourOutputInfo *_t = static_cast<CFourOutputInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 1: _t->on_buttonBox_accepted(); break;
        case 2: _t->on_buttonBox_rejected(); break;
        case 3: _t->on_numDataChkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_amplChkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_phaseChkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CFourOutputInfo::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CFourOutputInfo.data,
      qt_meta_data_CFourOutputInfo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CFourOutputInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CFourOutputInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CFourOutputInfo.stringdata0))
        return static_cast<void*>(const_cast< CFourOutputInfo*>(this));
    return QDialog::qt_metacast(_clname);
}

int CFourOutputInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
