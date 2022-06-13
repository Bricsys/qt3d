/****************************************************************************
**
** Copyright (C) 2017 Klaralvdalens Datakonsult AB (KDAB).
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

#ifndef QT3DCORE_QJOINT_P_H
#define QT3DCORE_QJOINT_P_H

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

#include <Qt3DCore/private/qnode_p.h>
#include <Qt3DCore/qjoint.h>

QT_BEGIN_NAMESPACE

namespace Qt3DCore {

class QJoint;

class Q_3DCORE_PRIVATE_EXPORT QJointPrivate : public QNodePrivate
{
public:
    QJointPrivate();

    Q_DECLARE_PUBLIC(QJoint)

    QMatrix4x4 m_inverseBindMatrix;
    QList<QJoint *> m_childJoints;
    QQuaternion m_rotation;
    QVector3D m_translation;
    QVector3D m_scale;
    QString m_name;

    // Not sent to backend. Purely internal convenience
    QVector3D m_eulerRotationAngles;
};

struct QJointData
{
    QMatrix4x4 inverseBindMatrix;
    QNodeIdVector childJointIds;
    QQuaternion rotation;
    QVector3D translation;
    QVector3D scale;
    QString name;
};

} // namespace Qt3DCore

QT_END_NAMESPACE

#endif // QT3DCORE_QJOINT_P_H
