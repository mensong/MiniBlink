// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "IDBObjectStoreParameters.h"


namespace blink {

IDBObjectStoreParameters::IDBObjectStoreParameters()
{
    setAutoIncrement(false);
}

DEFINE_TRACE(IDBObjectStoreParameters)
{
    visitor->trace(m_keyPath);
}

} // namespace blink
