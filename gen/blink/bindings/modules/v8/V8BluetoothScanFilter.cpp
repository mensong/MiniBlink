// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8BluetoothScanFilter.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/modules/v8/UnionTypesModules.h"

namespace blink {

void V8BluetoothScanFilter::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, BluetoothScanFilter& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value))
        return;
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    v8::TryCatch block;
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    {
        v8::Local<v8::Value> servicesValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "services")).ToLocal(&servicesValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (servicesValue.IsEmpty() || servicesValue->IsUndefined()) {
            // Do nothing.
        } else {
            HeapVector<StringOrUnsignedLong> services = toImplArray<HeapVector<StringOrUnsignedLong>>(servicesValue, 0, isolate, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setServices(services);
        }
    }

}

v8::Local<v8::Value> toV8(const BluetoothScanFilter& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8BluetoothScanFilter(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8BluetoothScanFilter(const BluetoothScanFilter& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasServices()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "services"), toV8(impl.services(), creationContext, isolate))))
            return false;
    }

    return true;
}

BluetoothScanFilter NativeValueTraits<BluetoothScanFilter>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    BluetoothScanFilter impl;
    V8BluetoothScanFilter::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
