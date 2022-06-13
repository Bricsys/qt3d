/****************************************************************************
**
** Copyright (C) 2015 Paul Lemire paul.lemire350@gmail.com
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

#ifndef QT3DRENDER_RENDER_TRIANGLESVISITOR_P_H
#define QT3DRENDER_RENDER_TRIANGLESVISITOR_P_H

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

#include <Qt3DCore/qnodeid.h>
#include <Qt3DRender/private/bufferutils_p.h>
#include <Qt3DCore/private/vector3d_p.h>
#include <Qt3DCore/private/vector4d_p.h>

#include <private/qt3drender_global_p.h>

QT_BEGIN_NAMESPACE

namespace Qt3DCore {
class QEntity;
}

namespace Qt3DRender {

namespace Render {

class GeometryRenderer;
class PickingProxy;
class NodeManagers;
class Attribute;
class Buffer;

class Q_AUTOTEST_EXPORT TrianglesVisitor
{
public:
    explicit TrianglesVisitor(NodeManagers *manager) : m_manager(manager) { }
    virtual ~TrianglesVisitor();

    void apply(const Qt3DCore::QEntity *entity);
    void apply(const GeometryRenderer *renderer, const Qt3DCore::QNodeId id);
    void apply(const PickingProxy *proxy, const Qt3DCore::QNodeId id);

    virtual void visit(uint andx, const Vector3D &a,
                       uint bndx, const Vector3D &b,
                       uint cndx, const Vector3D &c) = 0;

protected:
    NodeManagers *m_manager;
    Qt3DCore::QNodeId m_nodeId;
};

class Q_3DRENDERSHARED_PRIVATE_EXPORT CoordinateReader
{
public:
    explicit CoordinateReader(NodeManagers *manager)
        : m_manager(manager)
        , m_attribute(nullptr)
        , m_buffer(nullptr)
    {
    }

    bool setGeometry(const GeometryRenderer *renderer, const QString &attributeName);

    Vector4D getCoordinate(uint vertexIndex);

protected:
    NodeManagers *m_manager;
    Attribute *m_attribute;
    Buffer *m_buffer;
    BufferInfo m_bufferInfo;
};

} // namespace Render

} // namespace Qt3DRender

QT_END_NAMESPACE


#endif // QT3DRENDER_RENDER_TRIANGLESVISITOR_P_H
