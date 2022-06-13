/****************************************************************************
**
** Copyright (C) 2019 Klaralvdalens Datakonsult AB (KDAB).
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

#ifndef QT3DRENDER_QPICKTRIANGLEEVENT_P_H
#define QT3DRENDER_QPICKTRIANGLEEVENT_P_H

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

#include <Qt3DRender/private/qpickevent_p.h>

QT_BEGIN_NAMESPACE

namespace Qt3DRender {
class QPickTriangleEvent;

class Q_3DRENDERSHARED_PRIVATE_EXPORT QPickTriangleEventPrivate : public QPickEventPrivate
{
public:
    QPickTriangleEventPrivate();

    static const QPickTriangleEventPrivate *get(const QPickTriangleEvent *ev);
    QPickTriangleEvent *clone() const;

    uint m_triangleIndex;
    uint m_vertex1Index;
    uint m_vertex2Index;
    uint m_vertex3Index;
    QVector3D m_uvw;
};

} // Qt3DRender

QT_END_NAMESPACE

#endif // QT3DRENDER_QPICKTRIANGLEEVENT_P_H
