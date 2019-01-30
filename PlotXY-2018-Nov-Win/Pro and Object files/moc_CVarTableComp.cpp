/****************************************************************************
** Meta object code from reading C++ file 'CVarTableComp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../PlotXY/CVarTableComp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CVarTableComp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CVarTableComp_t {
    QByteArrayData data[27];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CVarTableComp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CVarTableComp_t qt_meta_stringdata_CVarTableComp = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CVarTableComp"
QT_MOC_LITERAL(1, 14, 19), // "numOfTotVarsChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "numOfTotVars"
QT_MOC_LITERAL(4, 48, 13), // "queryFileInfo"
QT_MOC_LITERAL(5, 62, 11), // "QList<int>&"
QT_MOC_LITERAL(6, 74, 8), // "fileNums"
QT_MOC_LITERAL(7, 83, 15), // "QList<QString>&"
QT_MOC_LITERAL(8, 99, 9), // "fileNames"
QT_MOC_LITERAL(9, 109, 7), // "varNums"
QT_MOC_LITERAL(10, 117, 14), // "contentChanged"
QT_MOC_LITERAL(11, 132, 9), // "blankCell"
QT_MOC_LITERAL(12, 142, 9), // "myClicked"
QT_MOC_LITERAL(13, 152, 1), // "r"
QT_MOC_LITERAL(14, 154, 1), // "c"
QT_MOC_LITERAL(15, 156, 11), // "setCurrFile"
QT_MOC_LITERAL(16, 168, 7), // "fileIdx"
QT_MOC_LITERAL(17, 176, 6), // "setVar"
QT_MOC_LITERAL(18, 183, 7), // "varName"
QT_MOC_LITERAL(19, 191, 6), // "varNum"
QT_MOC_LITERAL(20, 198, 11), // "giveFileNum"
QT_MOC_LITERAL(21, 210, 10), // "rightScale"
QT_MOC_LITERAL(22, 221, 10), // "monotonic_"
QT_MOC_LITERAL(23, 232, 5), // "unit_"
QT_MOC_LITERAL(24, 238, 16), // "unselectFileVars"
QT_MOC_LITERAL(25, 255, 9), // "fileIndex"
QT_MOC_LITERAL(26, 265, 9) // "varColumn"

    },
    "CVarTableComp\0numOfTotVarsChanged\0\0"
    "numOfTotVars\0queryFileInfo\0QList<int>&\0"
    "fileNums\0QList<QString>&\0fileNames\0"
    "varNums\0contentChanged\0blankCell\0"
    "myClicked\0r\0c\0setCurrFile\0fileIdx\0"
    "setVar\0varName\0varNum\0giveFileNum\0"
    "rightScale\0monotonic_\0unit_\0"
    "unselectFileVars\0fileIndex\0varColumn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CVarTableComp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    3,   62,    2, 0x06 /* Public */,
      10,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   70,    2, 0x0a /* Public */,
      12,    2,   71,    2, 0x0a /* Public */,
      15,    1,   76,    2, 0x0a /* Public */,
      17,    6,   79,    2, 0x0a /* Public */,
      24,    1,   92,    2, 0x0a /* Public */,
      26,    0,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 5,    6,    8,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool, QMetaType::QString,   18,   19,   20,   21,   22,   23,
    QMetaType::Int, QMetaType::Int,   25,
    QMetaType::Int,

       0        // eod
};

void CVarTableComp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CVarTableComp *_t = static_cast<CVarTableComp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->numOfTotVarsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->queryFileInfo((*reinterpret_cast< QList<int>(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2])),(*reinterpret_cast< QList<int>(*)>(_a[3]))); break;
        case 2: _t->contentChanged(); break;
        case 3: _t->blankCell(); break;
        case 4: _t->myClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->setCurrFile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: { int _r = _t->setVar((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->unselectFileVars((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->varColumn();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CVarTableComp::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CVarTableComp::numOfTotVarsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CVarTableComp::*_t)(QList<int> & , QList<QString> & , QList<int> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CVarTableComp::queryFileInfo)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CVarTableComp::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CVarTableComp::contentChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject CVarTableComp::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_CVarTableComp.data,
      qt_meta_data_CVarTableComp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CVarTableComp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CVarTableComp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CVarTableComp.stringdata0))
        return static_cast<void*>(const_cast< CVarTableComp*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int CVarTableComp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void CVarTableComp::numOfTotVarsChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CVarTableComp::queryFileInfo(QList<int> & _t1, QList<QString> & _t2, QList<int> & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CVarTableComp::contentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
