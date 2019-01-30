/****************************************************************************
** Meta object code from reading C++ file 'CPlotWin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../PlotXY/CPlotWin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CPlotWin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CPlotWin_t {
    QByteArrayData data[23];
    char stringdata0[357];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CPlotWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CPlotWin_t qt_meta_stringdata_CPlotWin = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CPlotWin"
QT_MOC_LITERAL(1, 9, 12), // "winActivated"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 16), // "setInterpolation"
QT_MOC_LITERAL(4, 40, 25), // "on_interpolateBox_clicked"
QT_MOC_LITERAL(5, 66, 7), // "checked"
QT_MOC_LITERAL(6, 74, 19), // "on_diffTBtn_clicked"
QT_MOC_LITERAL(7, 94, 17), // "on_SVGBtn_clicked"
QT_MOC_LITERAL(8, 112, 18), // "on_copyBtn_clicked"
QT_MOC_LITERAL(9, 131, 21), // "on_optionsBtn_clicked"
QT_MOC_LITERAL(10, 153, 18), // "on_markBtn_clicked"
QT_MOC_LITERAL(11, 172, 19), // "on_titleBtn_clicked"
QT_MOC_LITERAL(12, 192, 20), // "on_scaleTBtn_clicked"
QT_MOC_LITERAL(13, 213, 20), // "on_printTBtn_clicked"
QT_MOC_LITERAL(14, 234, 18), // "chartValuesChanged"
QT_MOC_LITERAL(15, 253, 9), // "SXYValues"
QT_MOC_LITERAL(16, 263, 6), // "values"
QT_MOC_LITERAL(17, 270, 11), // "hDifference"
QT_MOC_LITERAL(18, 282, 11), // "vDifference"
QT_MOC_LITERAL(19, 294, 19), // "on_dataTBtn_clicked"
QT_MOC_LITERAL(20, 314, 18), // "updateChartOptions"
QT_MOC_LITERAL(21, 333, 8), // "SOptions"
QT_MOC_LITERAL(22, 342, 14) // "programOptions"

    },
    "CPlotWin\0winActivated\0\0setInterpolation\0"
    "on_interpolateBox_clicked\0checked\0"
    "on_diffTBtn_clicked\0on_SVGBtn_clicked\0"
    "on_copyBtn_clicked\0on_optionsBtn_clicked\0"
    "on_markBtn_clicked\0on_titleBtn_clicked\0"
    "on_scaleTBtn_clicked\0on_printTBtn_clicked\0"
    "chartValuesChanged\0SXYValues\0values\0"
    "hDifference\0vDifference\0on_dataTBtn_clicked\0"
    "updateChartOptions\0SOptions\0programOptions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CPlotWin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    1,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   90,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    1,   98,    2, 0x08 /* Private */,
      12,    0,  101,    2, 0x08 /* Private */,
      13,    0,  102,    2, 0x08 /* Private */,
      14,    3,  103,    2, 0x0a /* Public */,
      19,    1,  110,    2, 0x0a /* Public */,
      20,    1,  113,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, QMetaType::Bool, QMetaType::Bool,   16,   17,   18,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 21,   22,

       0        // eod
};

void CPlotWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CPlotWin *_t = static_cast<CPlotWin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->winActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setInterpolation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_interpolateBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_diffTBtn_clicked(); break;
        case 4: _t->on_SVGBtn_clicked(); break;
        case 5: _t->on_copyBtn_clicked(); break;
        case 6: _t->on_optionsBtn_clicked(); break;
        case 7: _t->on_markBtn_clicked(); break;
        case 8: _t->on_titleBtn_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_scaleTBtn_clicked(); break;
        case 10: _t->on_printTBtn_clicked(); break;
        case 11: _t->chartValuesChanged((*reinterpret_cast< SXYValues(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 12: _t->on_dataTBtn_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->updateChartOptions((*reinterpret_cast< SOptions(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CPlotWin::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CPlotWin::winActivated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CPlotWin::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CPlotWin::setInterpolation)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CPlotWin::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CPlotWin.data,
      qt_meta_data_CPlotWin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CPlotWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CPlotWin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CPlotWin.stringdata0))
        return static_cast<void*>(const_cast< CPlotWin*>(this));
    return QWidget::qt_metacast(_clname);
}

int CPlotWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void CPlotWin::winActivated(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CPlotWin::setInterpolation(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
