// Copyright (C) 2015 Klaralvdalens Datakonsult AB (KDAB).
// SPDX-License-Identifier: LicenseRef-Qt-Commercial

#include "nodraw_p.h"
#include <Qt3DRender/qnodraw.h>

QT_BEGIN_NAMESPACE

using namespace Qt3DCore;

namespace Qt3DRender {
namespace Render {

NoDraw::NoDraw()
    : FrameGraphNode(FrameGraphNode::NoDraw)
{
}

NoDraw::~NoDraw()
{
}

} // namespace Render
} // namespace Qt3DRender

QT_END_NAMESPACE
