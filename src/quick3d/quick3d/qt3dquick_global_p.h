/****************************************************************************
**
** Copyright (C) 2014 Klaralvdalens Datakonsult AB (KDAB).
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt3D module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:COMM$
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** $QT_END_LICENSE$
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
******************************************************************************/

#ifndef QT3DQUICK_GLOBAL_P_H
#define QT3DQUICK_GLOBAL_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of other Qt classes.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <Qt3DQuick/qt3dquick_global.h>
#include <QtQml/qqml.h>

#include <QColor>
#include <QMatrix4x4>
#include <QVector2D>
#include <QVector3D>

#define Q_3DQUICKSHARED_PRIVATE_EXPORT Q_3DQUICKSHARED_EXPORT

#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
#define QML_ADDED_IN_VERSION(major, minor) QML_ADDED_IN_MINOR_VERSION(minor)
#endif

QT_BEGIN_NAMESPACE

namespace Qt3DCore {
namespace Quick {

Q_3DQUICKSHARED_PRIVATE_EXPORT void Quick3D_initialize();
Q_3DQUICKSHARED_PRIVATE_EXPORT void Quick3D_uninitialize();
Q_3DQUICKSHARED_PRIVATE_EXPORT void Quick3D_registerType(const char *className, const char *quickName, int major, int minor);

template<class T, class E> void registerExtendedType(const char *className, const char *quickName,
                                                     const char *uri, int major, int minor, const char *name)
{
    qmlRegisterExtendedType<T, E>(uri, major, minor, name);
    Quick3D_registerType(className, quickName, major, minor);
}

} // namespace Quick
} // namespace Qt3DCore

QT_END_NAMESPACE

#endif // QT3DQUICK_GLOBAL_P_H
