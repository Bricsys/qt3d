/****************************************************************************
**
** Copyright (C) 2017 Klaralvdalens Datakonsult AB (KDAB).
** Contact: http://www.qt-project.org/legal
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

#ifndef QT3DANIMATION_QANIMATIONCLIPLOADER_P_H
#define QT3DANIMATION_QANIMATIONCLIPLOADER_P_H

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

#include <Qt3DAnimation/private/qabstractanimationclip_p.h>
#include "qanimationcliploader.h"

QT_BEGIN_NAMESPACE

namespace Qt3DAnimation {

class QAnimationClipLoaderPrivate : public QAbstractAnimationClipPrivate
{
public:
    QAnimationClipLoaderPrivate();

    void setStatus(QAnimationClipLoader::Status status);

    Q_DECLARE_PUBLIC(QAnimationClipLoader)

    QUrl m_source;
    QAnimationClipLoader::Status m_status;
};

struct QAnimationClipLoaderData
{
    QUrl source;
};

} // namespace Qt3DAnimation


QT_END_NAMESPACE

#endif // QT3DANIMATION_QANIMATIONCLIPLOADER_P_H
