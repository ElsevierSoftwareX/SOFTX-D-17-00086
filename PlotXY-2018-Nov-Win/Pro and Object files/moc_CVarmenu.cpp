/****************************************************************************
** Meta object code from reading C++ file 'CVarmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../PlotXY/CVarmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CVarmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CVarMenu_t {
    QByteArrayData data[12];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CVarMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CVarMenu_t qt_meta_stringdata_CVarMenu = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CVarMenu"
QT_MOC_LITERAL(1, 9, 12), // "draggingDone"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 13), // "groupSelected"
QT_MOC_LITERAL(4, 37, 8), // "beginRow"
QT_MOC_LITERAL(5, 46, 6), // "endRow"
QT_MOC_LITERAL(6, 53, 13), // "myCellClicked"
QT_MOC_LITERAL(7, 67, 3), // "row"
QT_MOC_LITERAL(8, 71, 6), // "column"
QT_MOC_LITERAL(9, 78, 8), // "rightBtn"
QT_MOC_LITERAL(10, 87, 11), // "setCurrFile"
QT_MOC_LITERAL(11, 99, 8) // "timerEnd"

    },
    "CVarMenu\0draggingDone\0\0groupSelected\0"
    "beginRow\0endRow\0myCellClicked\0row\0"
    "column\0rightBtn\0setCurrFile\0timerEnd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CVarMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    2,   40,    2, 0x06 /* Public */,
       6,    3,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   52,    2, 0x0a /* Public */,
      11,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    7,    8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void CVarMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CVarMenu *_t = static_cast<CVarMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->draggingDone(); break;
        case 1: _t->groupSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->myCellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->setCurrFile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->timerEnd(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CVarMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CVarMenu::draggingDone)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CVarMenu::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CVarMenu::groupSelected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CVarMenu::*_t)(int , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CVarMenu::myCellClicked)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject CVarMenu::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_CVarMenu.data,
      qt_meta_data_CVarMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CVarMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CVarMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CVarMenu.stringdata0))
        return static_cast<void*>(const_cast< CVarMenu*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int CVarMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CVarMenu::draggingDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void CVarMenu::groupSelected(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CVarMenu::myCellClicked(int _t1, int _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
