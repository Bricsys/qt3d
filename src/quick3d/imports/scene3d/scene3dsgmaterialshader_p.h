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

#ifndef QT3DRENDER_SCENE3DSGMATERIALSHADER_P_H
#define QT3DRENDER_SCENE3DSGMATERIALSHADER_P_H

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

#include <QtQuick/QSGMaterialShader>

QT_BEGIN_NAMESPACE

namespace Qt3DRender {

class Scene3DSGMaterialShader : public QSGMaterialShader
{
public:
    Scene3DSGMaterialShader();
    static QSGMaterialType type;

protected:
    // QSGMaterialShader interface
#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
    bool updateUniformData(RenderState &state, QSGMaterial *newMaterial, QSGMaterial *oldMaterial) final;
    void updateSampledImage(RenderState &state, int binding, QSGTexture **texture, QSGMaterial *newMaterial, QSGMaterial *oldMaterial) final;
#else
public:
    char const *const *attributeNames() const final;
    void updateState(const RenderState &state, QSGMaterial *newMaterial, QSGMaterial *oldMaterial) final;

protected:
    const char *vertexShader() const final;
    const char *fragmentShader() const final;
    void initialize() final;

private:
    int m_matrixId = -1;
    int m_opacityId = -1;
#endif
};

} // namespace Qt3DRender

QT_END_NAMESPACE

#endif // QT3DRENDER_SCENE3DSGMATERIALSHADER_P_H
