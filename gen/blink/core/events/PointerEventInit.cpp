// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "PointerEventInit.h"


namespace blink {

PointerEventInit::PointerEventInit()
{
    setHeight(0);
    setIsPrimary(false);
    setPointerId(0);
    setPointerType(String(""));
    setPressure(0);
    setTiltX(0);
    setTiltY(0);
    setWidth(0);
}

DEFINE_TRACE(PointerEventInit)
{
    MouseEventInit::trace(visitor);
}

} // namespace blink
