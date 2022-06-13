/****************************************************************************
**
** Copyright (C) 2016 Klaralvdalens Datakonsult AB (KDAB).
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

#ifndef QT3DRENDER_SCENE3DSGNODE_P_H
#define QT3DRENDER_SCENE3DSGNODE_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <QtQuick/QSGGeometryNode>

#include <scene3dsgmaterial_p.h>

QT_BEGIN_NAMESPACE

class QSGTexture;

namespace Qt3DRender {

class Scene3DSGNode : public QSGGeometryNode
{
public:
    Scene3DSGNode();
    ~Scene3DSGNode();

    void setTexture(QSGTexture *texture) noexcept
    {
        m_material.setTexture(texture);
        m_opaqueMaterial.setTexture(texture);
        markDirty(DirtyMaterial);
    }
    QSGTexture *texture() const noexcept { return m_material.texture(); }

    void setRect(const QRectF &rect, bool mirrorVertically = false);
    QRectF rect() const noexcept { return m_rect; }

    void show();

private:
    Scene3DSGMaterial m_material;
    Scene3DSGMaterial m_opaqueMaterial;
    QSGGeometry m_geometry;
    QRectF m_rect;
};

} // namespace Qt3DRender

QT_END_NAMESPACE

#endif // QT3DRENDER_SCENE3DSGNODE_P_H
