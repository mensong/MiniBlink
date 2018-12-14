// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "bindings/modules/v8/UnionTypesModules.h"


namespace blink {

BooleanOrString::BooleanOrString()
    : m_type(SpecificTypeNone)
{
}

bool BooleanOrString::getAsBoolean() const
{
    ASSERT(isBoolean());
    return m_boolean;
}

void BooleanOrString::setBoolean(bool value)
{
    ASSERT(isNull());
    m_boolean = value;
    m_type = SpecificTypeBoolean;
}

BooleanOrString BooleanOrString::fromBoolean(bool value)
{
    BooleanOrString container;
    container.setBoolean(value);
    return container;
}

String BooleanOrString::getAsString() const
{
    ASSERT(isString());
    return m_string;
}

void BooleanOrString::setString(String value)
{
    ASSERT(isNull());
    m_string = value;
    m_type = SpecificTypeString;
}

BooleanOrString BooleanOrString::fromString(String value)
{
    BooleanOrString container;
    container.setString(value);
    return container;
}

BooleanOrString::BooleanOrString(const BooleanOrString&) = default;
BooleanOrString::~BooleanOrString() = default;
BooleanOrString& BooleanOrString::operator=(const BooleanOrString&) = default;

DEFINE_TRACE(BooleanOrString)
{
}

void V8BooleanOrString::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, BooleanOrString& impl, ExceptionState& exceptionState)
{
    if (v8Value.IsEmpty())
        return;

    if (v8Value->IsBoolean()) {
        impl.setBoolean(v8Value.As<v8::Boolean>()->Value());
        return;
    }

    {
        V8StringResource<> cppValue = v8Value;
        if (!cppValue.prepare(exceptionState))
            return;
        impl.setString(cppValue);
        return;
    }

}

v8::Local<v8::Value> toV8(const BooleanOrString& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case BooleanOrString::SpecificTypeNone:
        return v8::Null(isolate);
    case BooleanOrString::SpecificTypeBoolean:
        return v8Boolean(impl.getAsBoolean(), isolate);
    case BooleanOrString::SpecificTypeString:
        return v8String(isolate, impl.getAsString());
    default:
        ASSERT_NOT_REACHED();
    }
    return v8::Local<v8::Value>();
}

BooleanOrString NativeValueTraits<BooleanOrString>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    BooleanOrString impl;
    V8BooleanOrString::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
