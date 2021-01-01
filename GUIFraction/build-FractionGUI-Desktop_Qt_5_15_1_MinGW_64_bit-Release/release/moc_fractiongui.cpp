/****************************************************************************
** Meta object code from reading C++ file 'fractiongui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../FractionGUI/fractiongui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fractiongui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FractionGUI_t {
    QByteArrayData data[13];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FractionGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FractionGUI_t qt_meta_stringdata_FractionGUI = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FractionGUI"
QT_MOC_LITERAL(1, 12, 27), // "on_equalsPushButton_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 39), // "on_operatorComboBox_currentIn..."
QT_MOC_LITERAL(4, 81, 4), // "arg1"
QT_MOC_LITERAL(5, 86, 20), // "on_numLE_textChanged"
QT_MOC_LITERAL(6, 107, 20), // "on_denLE_textChanged"
QT_MOC_LITERAL(7, 128, 22), // "on_numLE_2_textChanged"
QT_MOC_LITERAL(8, 151, 22), // "on_denLE_2_textChanged"
QT_MOC_LITERAL(9, 174, 11), // "eventFilter"
QT_MOC_LITERAL(10, 186, 7), // "watched"
QT_MOC_LITERAL(11, 194, 7), // "QEvent*"
QT_MOC_LITERAL(12, 202, 5) // "event"

    },
    "FractionGUI\0on_equalsPushButton_clicked\0"
    "\0on_operatorComboBox_currentIndexChanged\0"
    "arg1\0on_numLE_textChanged\0"
    "on_denLE_textChanged\0on_numLE_2_textChanged\0"
    "on_denLE_2_textChanged\0eventFilter\0"
    "watched\0QEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FractionGUI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    1,   50,    2, 0x08 /* Private */,
       5,    1,   53,    2, 0x08 /* Private */,
       6,    1,   56,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
       9,    2,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 11,   10,   12,

       0        // eod
};

void FractionGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FractionGUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_equalsPushButton_clicked(); break;
        case 1: _t->on_operatorComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_numLE_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_denLE_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_numLE_2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_denLE_2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FractionGUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_FractionGUI.data,
    qt_meta_data_FractionGUI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FractionGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FractionGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FractionGUI.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FractionGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
