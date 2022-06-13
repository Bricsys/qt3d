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

#ifndef QT3D_QUICK_QUICK3DNODE_P_H
#define QT3D_QUICK_QUICK3DNODE_P_H

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

#include <Qt3DCore/qnode.h>
#include <QtQml/QQmlListProperty>

#include <Qt3DQuick/private/qt3dquick_global_p.h>

QT_BEGIN_NAMESPACE

namespace Qt3DCore {
namespace Quick {

class Q_3DQUICKSHARED_PRIVATE_EXPORT Quick3DNode : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QQmlListProperty<QObject> data READ data)
    Q_PROPERTY(QQmlListProperty<Qt3DCore::QNode> childNodes READ childNodes)
    Q_CLASSINFO("DefaultProperty", "data")
public:
    explicit Quick3DNode(QObject *parent = 0);

    QQmlListProperty<QObject> data();
    QQmlListProperty<Qt3DCore::QNode> childNodes();

    inline QNode *parentNode() const { return qobject_cast<QNode*>(parent()); }

private Q_SLOTS:
    void childAppended(int idx, QObject *child);
    void childRemoved(int idx, QObject *child);
};

} // namespace Quick
} // namespace Qt3DCore

QT_END_NAMESPACE

#endif // QT3D_QUICK_QUICK3DNODE_P_H
