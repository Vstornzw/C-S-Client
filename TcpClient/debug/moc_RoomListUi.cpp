/****************************************************************************
** Meta object code from reading C++ file 'RoomListUi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../RoomListUi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RoomListUi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RoomListUi_t {
    QByteArrayData data[11];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoomListUi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoomListUi_t qt_meta_stringdata_RoomListUi = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RoomListUi"
QT_MOC_LITERAL(1, 11, 12), // "sigCloseRoom"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "sigDeleteUser"
QT_MOC_LITERAL(4, 39, 14), // "sigChargeMoney"
QT_MOC_LITERAL(5, 54, 3), // "str"
QT_MOC_LITERAL(6, 58, 17), // "sigCreateHostRoom"
QT_MOC_LITERAL(7, 76, 16), // "onBtnQuitClicked"
QT_MOC_LITERAL(8, 93, 15), // "onBtnDeleteUser"
QT_MOC_LITERAL(9, 109, 16), // "onBtnChargeMoney"
QT_MOC_LITERAL(10, 126, 19) // "onBtnCreateHostRoom"

    },
    "RoomListUi\0sigCloseRoom\0\0sigDeleteUser\0"
    "sigChargeMoney\0str\0sigCreateHostRoom\0"
    "onBtnQuitClicked\0onBtnDeleteUser\0"
    "onBtnChargeMoney\0onBtnCreateHostRoom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoomListUi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    1,   56,    2, 0x06 /* Public */,
       6,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RoomListUi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RoomListUi *_t = static_cast<RoomListUi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigCloseRoom(); break;
        case 1: _t->sigDeleteUser(); break;
        case 2: _t->sigChargeMoney((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->sigCreateHostRoom(); break;
        case 4: _t->onBtnQuitClicked(); break;
        case 5: _t->onBtnDeleteUser(); break;
        case 6: _t->onBtnChargeMoney(); break;
        case 7: _t->onBtnCreateHostRoom(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RoomListUi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoomListUi::sigCloseRoom)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RoomListUi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoomListUi::sigDeleteUser)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (RoomListUi::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoomListUi::sigChargeMoney)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (RoomListUi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoomListUi::sigCreateHostRoom)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject RoomListUi::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RoomListUi.data,
      qt_meta_data_RoomListUi,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RoomListUi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoomListUi::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RoomListUi.stringdata0))
        return static_cast<void*>(const_cast< RoomListUi*>(this));
    return QWidget::qt_metacast(_clname);
}

int RoomListUi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void RoomListUi::sigCloseRoom()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void RoomListUi::sigDeleteUser()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void RoomListUi::sigChargeMoney(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RoomListUi::sigCreateHostRoom()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
