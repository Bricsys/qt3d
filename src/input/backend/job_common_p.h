/****************************************************************************
**
** Copyright (C) 2016 Paul Lemire
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
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#ifndef QT3DINPUT_INPUT_JOB_COMMON_P_H
#define QT3DINPUT_INPUT_JOB_COMMON_P_H

#include <Qt3DCore/private/qaspectjob_p.h>

QT_BEGIN_NAMESPACE

namespace Qt3DInput {

namespace Input {

namespace JobTypes {

    enum JobType {
        AssignKeyboardFocus = 1024,
        KeyEventDispatcher,
        MouseEventDispatcher,
        UpdateAxisAction,
        DeviceProxyLoading,
        AxisAccumulatorIntegration
    };

} // JobTypes

} // Input

} // Qt3DInput

QT_END_NAMESPACE

#endif // QT3DINPUT_INPUT_JOB_COMMON_P_H
