/****************************************************************************
** Meta object code from reading C++ file 'ex3.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SRGGE/ex3.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ex3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ex3_t {
    QByteArrayData data[10];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ex3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ex3_t qt_meta_stringdata_ex3 = {
    {
QT_MOC_LITERAL(0, 0, 3), // "ex3"
QT_MOC_LITERAL(1, 4, 11), // "SetVertices"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 8), // "SetFaces"
QT_MOC_LITERAL(4, 26, 12), // "setNumberlod"
QT_MOC_LITERAL(5, 39, 10), // "deactivate"
QT_MOC_LITERAL(6, 50, 13), // "activateBasic"
QT_MOC_LITERAL(7, 64, 14), // "activateOctree"
QT_MOC_LITERAL(8, 79, 12), // "createOctree"
QT_MOC_LITERAL(9, 92, 13) // "createQuadric"

    },
    "ex3\0SetVertices\0\0SetFaces\0setNumberlod\0"
    "deactivate\0activateBasic\0activateOctree\0"
    "createOctree\0createQuadric"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ex3[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   60,    2, 0x0a /* Public */,
       5,    0,   63,    2, 0x0a /* Public */,
       6,    0,   64,    2, 0x0a /* Public */,
       7,    0,   65,    2, 0x0a /* Public */,
       8,    0,   66,    2, 0x0a /* Public */,
       9,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ex3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ex3 *_t = static_cast<ex3 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetVertices((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SetFaces((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setNumberlod((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->deactivate(); break;
        case 4: _t->activateBasic(); break;
        case 5: _t->activateOctree(); break;
        case 6: _t->createOctree(); break;
        case 7: _t->createQuadric(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ex3::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ex3::SetVertices)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ex3::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ex3::SetFaces)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ex3::staticMetaObject = {
    { &ex2::staticMetaObject, qt_meta_stringdata_ex3.data,
      qt_meta_data_ex3,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ex3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ex3::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ex3.stringdata0))
        return static_cast<void*>(this);
    return ex2::qt_metacast(_clname);
}

int ex3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ex2::qt_metacall(_c, _id, _a);
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
void ex3::SetVertices(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ex3::SetFaces(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
