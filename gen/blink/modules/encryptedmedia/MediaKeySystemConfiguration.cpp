// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "MediaKeySystemConfiguration.h"


namespace blink {

MediaKeySystemConfiguration::MediaKeySystemConfiguration()
{
    setDistinctiveIdentifier(String("optional"));
    setPersistentState(String("optional"));
}

DEFINE_TRACE(MediaKeySystemConfiguration)
{
    visitor->trace(m_audioCapabilities);
    visitor->trace(m_videoCapabilities);
}

} // namespace blink
