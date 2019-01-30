/****************************************************************************
** Meta object code from reading C++ file 'CPlotOptions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../PlotXY/Dialogs/CPlotOptions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CPlotOptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CPlotOptions_t {
    QByteArrayData data[12];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CPlotOptions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CPlotOptions_t qt_meta_stringdata_CPlotOptions = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CPlotOptions"
QT_MOC_LITERAL(1, 13, 23), // "on_linesTypeBtn_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 22), // "on_barsTypeBtn_clicked"
QT_MOC_LITERAL(4, 61, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(5, 83, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(6, 105, 22), // "on_dotsTypeBtn_clicked"
QT_MOC_LITERAL(7, 128, 7), // "checked"
QT_MOC_LITERAL(8, 136, 24), // "on_pointPixelBtn_clicked"
QT_MOC_LITERAL(9, 161, 25), // "on_pointSquareBtn_clicked"
QT_MOC_LITERAL(10, 187, 37), // "on_fontPointCombo_currentInde..."
QT_MOC_LITERAL(11, 225, 26) // "on_autoAxisFontBtn_clicked"

    },
    "CPlotOptions\0on_linesTypeBtn_clicked\0"
    "\0on_barsTypeBtn_clicked\0on_buttonBox_accepted\0"
    "on_buttonBox_rejected\0on_dotsTypeBtn_clicked\0"
    "checked\0on_pointPixelBtn_clicked\0"
    "on_pointSquareBtn_clicked\0"
    "on_fontPointCombo_currentIndexChanged\0"
    "on_autoAxisFontBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CPlotOptions[] = {

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
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    1,   68,    2, 0x08 /* Private */,
       1,    1,   71,    2, 0x08 /* Private */,
       8,    1,   74,    2, 0x08 /* Private */,
       9,    1,   77,    2, 0x08 /* Private */,
      10,    1,   80,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void CPlotOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CPlotOptions *_t = static_cast<CPlotOptions *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_linesTypeBtn_clicked(); break;
        case 1: _t->on_barsTypeBtn_clicked(); break;
        case 2: _t->on_buttonBox_accepted(); break;
        case 3: _t->on_buttonBox_rejected(); break;
        case 4: _t->on_dotsTypeBtn_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_linesTypeBtn_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_pointPixelBtn_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_pointSquareBtn_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_fontPointCombo_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_autoAxisFontBtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject CPlotOptions::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CPlotOptions.data,
      qt_meta_data_CPlotOptions,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CPlotOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CPlotOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CPlotOptions.stringdata0))
        return static_cast<void*>(const_cast< CPlotOptions*>(this));
    return QDialog::qt_metacast(_clname);
}

int CPlotOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
