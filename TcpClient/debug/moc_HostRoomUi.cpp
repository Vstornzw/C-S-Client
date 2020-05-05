/****************************************************************************
** Meta object code from reading C++ file 'HostRoomUi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../HostRoomUi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HostRoomUi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HostRoomUi_t {
    QByteArrayData data[15];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HostRoomUi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HostRoomUi_t qt_meta_stringdata_HostRoomUi = {
    {
QT_MOC_LITERAL(0, 0, 10), // "HostRoomUi"
QT_MOC_LITERAL(1, 11, 16), // "sigCloseHostRoom"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 3), // "str"
QT_MOC_LITERAL(4, 33, 15), // "onCloseHostRoom"
QT_MOC_LITERAL(5, 49, 10), // "onViewOpen"
QT_MOC_LITERAL(6, 60, 13), // "onFrameChange"
QT_MOC_LITERAL(7, 74, 11), // "QVideoFrame"
QT_MOC_LITERAL(8, 86, 5), // "frame"
QT_MOC_LITERAL(9, 92, 15), // "onReadyReadSlot"
QT_MOC_LITERAL(10, 108, 11), // "onViewClose"
QT_MOC_LITERAL(11, 120, 11), // "onAudioOpen"
QT_MOC_LITERAL(12, 132, 23), // "onCaptureDataFromDevice"
QT_MOC_LITERAL(13, 156, 16), // "onReadyReadAudio"
QT_MOC_LITERAL(14, 173, 12) // "onAudioClose"

    },
    "HostRoomUi\0sigCloseHostRoom\0\0str\0"
    "onCloseHostRoom\0onViewOpen\0onFrameChange\0"
    "QVideoFrame\0frame\0onReadyReadSlot\0"
    "onViewClose\0onAudioOpen\0onCaptureDataFromDevice\0"
    "onReadyReadAudio\0onAudioClose"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HostRoomUi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   67,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    1,   69,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,
      13,    0,   76,    2, 0x08 /* Private */,
      14,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HostRoomUi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HostRoomUi *_t = static_cast<HostRoomUi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigCloseHostRoom((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onCloseHostRoom(); break;
        case 2: _t->onViewOpen(); break;
        case 3: _t->onFrameChange((*reinterpret_cast< QVideoFrame(*)>(_a[1]))); break;
        case 4: _t->onReadyReadSlot(); break;
        case 5: _t->onViewClose(); break;
        case 6: _t->onAudioOpen(); break;
        case 7: _t->onCaptureDataFromDevice(); break;
        case 8: _t->onReadyReadAudio(); break;
        case 9: _t->onAudioClose(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoFrame >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HostRoomUi::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HostRoomUi::sigCloseHostRoom)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject HostRoomUi::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_HostRoomUi.data,
      qt_meta_data_HostRoomUi,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HostRoomUi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HostRoomUi::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HostRoomUi.stringdata0))
        return static_cast<void*>(const_cast< HostRoomUi*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int HostRoomUi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void HostRoomUi::sigCloseHostRoom(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
