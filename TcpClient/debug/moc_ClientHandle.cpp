/****************************************************************************
** Meta object code from reading C++ file 'ClientHandle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ClientHandle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClientHandle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClientHandle_t {
    QByteArrayData data[13];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientHandle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientHandle_t qt_meta_stringdata_ClientHandle = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ClientHandle"
QT_MOC_LITERAL(1, 13, 15), // "onReadyReadSlot"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "onBtnRegistClicked"
QT_MOC_LITERAL(4, 49, 17), // "onBtnLoginClicked"
QT_MOC_LITERAL(5, 67, 15), // "onQuitCloseRoom"
QT_MOC_LITERAL(6, 83, 12), // "onDeleteUser"
QT_MOC_LITERAL(7, 96, 13), // "onChargeMoney"
QT_MOC_LITERAL(8, 110, 3), // "str"
QT_MOC_LITERAL(9, 114, 16), // "onHostRoomCreate"
QT_MOC_LITERAL(10, 131, 15), // "onCloseHostRoom"
QT_MOC_LITERAL(11, 147, 14), // "onJoinHostRoom"
QT_MOC_LITERAL(12, 162, 14) // "host_room_name"

    },
    "ClientHandle\0onReadyReadSlot\0\0"
    "onBtnRegistClicked\0onBtnLoginClicked\0"
    "onQuitCloseRoom\0onDeleteUser\0onChargeMoney\0"
    "str\0onHostRoomCreate\0onCloseHostRoom\0"
    "onJoinHostRoom\0host_room_name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientHandle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    1,   64,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    1,   68,    2, 0x08 /* Private */,
      11,    1,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void ClientHandle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientHandle *_t = static_cast<ClientHandle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onReadyReadSlot(); break;
        case 1: _t->onBtnRegistClicked(); break;
        case 2: _t->onBtnLoginClicked(); break;
        case 3: _t->onQuitCloseRoom(); break;
        case 4: _t->onDeleteUser(); break;
        case 5: _t->onChargeMoney((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->onHostRoomCreate(); break;
        case 7: _t->onCloseHostRoom((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->onJoinHostRoom((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ClientHandle::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ClientHandle.data,
      qt_meta_data_ClientHandle,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClientHandle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientHandle::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClientHandle.stringdata0))
        return static_cast<void*>(const_cast< ClientHandle*>(this));
    return QWidget::qt_metacast(_clname);
}

int ClientHandle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
