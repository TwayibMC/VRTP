/****************************************************************************
** Meta object code from reading C++ file 'vrwidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../vrwidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vrwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN8VRWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto VRWidget::qt_create_metaobjectdata<qt_meta_tag_ZN8VRWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VRWidget",
        "update",
        "",
        "startAnimation",
        "startAnimationLight",
        "changeFov",
        "changeOpacity",
        "changeSize",
        "value",
        "changeSaturation",
        "changeCulling",
        "changeWireframe",
        "addBody",
        "QVector3D",
        "pos",
        "QQuaternion",
        "orientation",
        "corps",
        "setSkyboxImage",
        "img",
        "changeXLight",
        "newX",
        "changeYLight",
        "newY",
        "changeZLight",
        "newZ",
        "changeSpecCoeff",
        "newCoeff",
        "rotateLight",
        "angle",
        "getImage",
        "QPixmap"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'update'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'startAnimation'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'startAnimationLight'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'changeFov'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'changeOpacity'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'changeSize'
        QtMocHelpers::SlotData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'changeSaturation'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'changeCulling'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'changeWireframe'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'addBody'
        QtMocHelpers::SlotData<void(QVector3D, QQuaternion, QString)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { 0x80000000 | 15, 16 }, { QMetaType::QString, 17 },
        }}),
        // Slot 'setSkyboxImage'
        QtMocHelpers::SlotData<void(QString)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 19 },
        }}),
        // Slot 'changeXLight'
        QtMocHelpers::SlotData<void(double)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 21 },
        }}),
        // Slot 'changeYLight'
        QtMocHelpers::SlotData<void(double)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 23 },
        }}),
        // Slot 'changeZLight'
        QtMocHelpers::SlotData<void(double)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 25 },
        }}),
        // Slot 'changeSpecCoeff'
        QtMocHelpers::SlotData<void(int)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 27 },
        }}),
        // Slot 'rotateLight'
        QtMocHelpers::SlotData<void(float)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 29 },
        }}),
        // Slot 'getImage'
        QtMocHelpers::SlotData<QPixmap()>(30, 2, QMC::AccessPublic, 0x80000000 | 31),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VRWidget, qt_meta_tag_ZN8VRWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VRWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8VRWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8VRWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8VRWidgetE_t>.metaTypes,
    nullptr
} };

void VRWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VRWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->startAnimation(); break;
        case 2: _t->startAnimationLight(); break;
        case 3: _t->changeFov((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->changeOpacity((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->changeSize((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->changeSaturation((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->changeCulling(); break;
        case 8: _t->changeWireframe(); break;
        case 9: _t->addBody((*reinterpret_cast<std::add_pointer_t<QVector3D>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QQuaternion>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 10: _t->setSkyboxImage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->changeXLight((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 12: _t->changeYLight((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 13: _t->changeZLight((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 14: _t->changeSpecCoeff((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->rotateLight((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 16: { QPixmap _r = _t->getImage();
            if (_a[0]) *reinterpret_cast<QPixmap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *VRWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VRWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8VRWidgetE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QOpenGLFunctions"))
        return static_cast< QOpenGLFunctions*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int VRWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
