/****************************************************************************
** Meta object code from reading C++ file 'CFourWin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../PlotXY/CFourWin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CFourWin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CFourWin_t {
    QByteArrayData data[16];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CFourWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CFourWin_t qt_meta_stringdata_CFourWin = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CFourWin"
QT_MOC_LITERAL(1, 9, 18), // "updateChartOptions"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "SOptions"
QT_MOC_LITERAL(4, 38, 4), // "opts"
QT_MOC_LITERAL(5, 43, 13), // "valChangedAmp"
QT_MOC_LITERAL(6, 57, 9), // "SXYValues"
QT_MOC_LITERAL(7, 67, 6), // "values"
QT_MOC_LITERAL(8, 74, 12), // "valChangedPh"
QT_MOC_LITERAL(9, 87, 21), // "on_optionsBtn_clicked"
QT_MOC_LITERAL(10, 109, 18), // "on_infoBtn_clicked"
QT_MOC_LITERAL(11, 128, 18), // "on_copyBtn_clicked"
QT_MOC_LITERAL(12, 147, 19), // "on_printBtn_clicked"
QT_MOC_LITERAL(13, 167, 21), // "on_gridChkBox_clicked"
QT_MOC_LITERAL(14, 189, 21), // "on_saveSetBtn_clicked"
QT_MOC_LITERAL(15, 211, 14) // "resetStateBtns"

    },
    "CFourWin\0updateChartOptions\0\0SOptions\0"
    "opts\0valChangedAmp\0SXYValues\0values\0"
    "valChangedPh\0on_optionsBtn_clicked\0"
    "on_infoBtn_clicked\0on_copyBtn_clicked\0"
    "on_printBtn_clicked\0on_gridChkBox_clicked\0"
    "on_saveSetBtn_clicked\0resetStateBtns"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CFourWin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       5,    3,   67,    2, 0x0a /* Public */,
       8,    3,   74,    2, 0x0a /* Public */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,
      14,    0,   86,    2, 0x08 /* Private */,
      15,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool, QMetaType::Bool,    7,    2,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool, QMetaType::Bool,    7,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CFourWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CFourWin *_t = static_cast<CFourWin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateChartOptions((*reinterpret_cast< SOptions(*)>(_a[1]))); break;
        case 1: _t->valChangedAmp((*reinterpret_cast< SXYValues(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->valChangedPh((*reinterpret_cast< SXYValues(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->on_optionsBtn_clicked(); break;
        case 4: _t->on_infoBtn_clicked(); break;
        case 5: _t->on_copyBtn_clicked(); break;
        case 6: _t->on_printBtn_clicked(); break;
        case 7: _t->on_gridChkBox_clicked(); break;
        case 8: _t->on_saveSetBtn_clicked(); break;
        case 9: _t->resetStateBtns(); break;
        default: ;
        }
    }
}

const QMetaObject CFourWin::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CFourWin.data,
      qt_meta_data_CFourWin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CFourWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CFourWin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CFourWin.stringdata0))
        return static_cast<void*>(const_cast< CFourWin*>(this));
    return QWidget::qt_metacast(_clname);
}

int CFourWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
