/****************************************************************************
** Meta object code from reading C++ file 'AddMultiChoice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../AddMultiChoice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddMultiChoice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddMultiChoice_t {
    QByteArrayData data[14];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddMultiChoice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddMultiChoice_t qt_meta_stringdata_AddMultiChoice = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AddMultiChoice"
QT_MOC_LITERAL(1, 15, 8), // "updateOK"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 19), // "sendMultiChoicePage"
QT_MOC_LITERAL(4, 45, 15), // "AddMultiChoice*"
QT_MOC_LITERAL(5, 61, 9), // "checkData"
QT_MOC_LITERAL(6, 71, 15), // "checkUpdateData"
QT_MOC_LITERAL(7, 87, 9), // "resetData"
QT_MOC_LITERAL(8, 97, 13), // "convertAnswer"
QT_MOC_LITERAL(9, 111, 5), // "bool*"
QT_MOC_LITERAL(10, 117, 6), // "answer"
QT_MOC_LITERAL(11, 124, 11), // "receiveData"
QT_MOC_LITERAL(12, 136, 6), // "Choice"
QT_MOC_LITERAL(13, 143, 1) // "c"

    },
    "AddMultiChoice\0updateOK\0\0sendMultiChoicePage\0"
    "AddMultiChoice*\0checkData\0checkUpdateData\0"
    "resetData\0convertAnswer\0bool*\0answer\0"
    "receiveData\0Choice\0c"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddMultiChoice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   55,    2, 0x08 /* Private */,
       6,    0,   56,    2, 0x08 /* Private */,
       7,    0,   57,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x08 /* Private */,
      11,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void AddMultiChoice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddMultiChoice *_t = static_cast<AddMultiChoice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateOK((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sendMultiChoicePage((*reinterpret_cast< AddMultiChoice*(*)>(_a[1]))); break;
        case 2: _t->checkData(); break;
        case 3: _t->checkUpdateData(); break;
        case 4: _t->resetData(); break;
        case 5: { QString _r = _t->convertAnswer((*reinterpret_cast< bool*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->receiveData((*reinterpret_cast< Choice(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AddMultiChoice* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddMultiChoice::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddMultiChoice::updateOK)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AddMultiChoice::*)(AddMultiChoice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddMultiChoice::sendMultiChoicePage)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AddMultiChoice::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddMultiChoice.data,
      qt_meta_data_AddMultiChoice,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AddMultiChoice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddMultiChoice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddMultiChoice.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddMultiChoice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void AddMultiChoice::updateOK(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AddMultiChoice::sendMultiChoicePage(AddMultiChoice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
