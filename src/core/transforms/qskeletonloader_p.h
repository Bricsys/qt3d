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

#ifndef QT3DCORE_QSKELETONLOADER_P_H
#define QT3DCORE_QSKELETONLOADER_P_H

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

#include <Qt3DCore/private/qabstractskeleton_p.h>
#include "qskeletonloader.h"

#include <memory>

QT_BEGIN_NAMESPACE

namespace Qt3DCore {

class QJoint;

class Q_3DCORE_PRIVATE_EXPORT QSkeletonLoaderPrivate : public QAbstractSkeletonPrivate
{
public:
    QSkeletonLoaderPrivate();

    void setStatus(QSkeletonLoader::Status status);
    void setRootJoint(QJoint *rootJoint);

    Q_DECLARE_PUBLIC(QSkeletonLoader)

    QUrl m_source;
    bool m_createJoints;

    // Set by the backend
    QSkeletonLoader::Status m_status;
    Qt3DCore::QJoint* m_rootJoint;
};

struct QSkeletonLoaderData
{
    QUrl source;
    bool createJoints;
};

class QJoint;

} // namespace Qt3DCore

QT_END_NAMESPACE

#endif // QT3DCORE_QSKELETONLOADER_P_H
