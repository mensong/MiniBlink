// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8StorageQuota.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/inspector/ConsoleMessage.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8StorageQuota::wrapperTypeInfo = { gin::kEmbedderBlink, V8StorageQuota::domTemplate, V8StorageQuota::refObject, V8StorageQuota::derefObject, V8StorageQuota::trace, 0, 0, V8StorageQuota::preparePrototypeObject, V8StorageQuota::installConditionallyEnabledProperties, "StorageQuota", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in StorageQuota.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& StorageQuota::s_wrapperTypeInfo = V8StorageQuota::wrapperTypeInfo;

namespace StorageQuotaV8Internal {

static void supportedTypesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    StorageQuota* impl = V8StorageQuota::toImpl(holder);
    v8SetReturnValue(info, toV8(impl->supportedTypes(), info.Holder(), info.GetIsolate()));
}

static void supportedTypesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    StorageQuotaV8Internal::supportedTypesAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void queryInfoMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    StorageQuota* impl = V8StorageQuota::toImpl(info.Holder());
    V8StringResource<> type;
    {
        type = info[0];
        if (!type.prepare(exceptionState))
            return;
        static const char* validValues[] = {
            "temporary",
            "persistent",
        };
        if (!isValidEnum(type, validValues, WTF_ARRAY_LENGTH(validValues), "StorageType", exceptionState)) {
            exceptionState.throwIfNeeded();
            return;
        }
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->queryInfo(scriptState, type);
    v8SetReturnValue(info, result.v8Value());
}

static void queryInfoMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "queryInfo", "StorageQuota", info.Holder(), info.GetIsolate());
    queryInfoMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void queryInfoMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    StorageQuotaV8Internal::queryInfoMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void requestPersistentQuotaMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    StorageQuota* impl = V8StorageQuota::toImpl(info.Holder());
    unsigned long long newQuota;
    {
        newQuota = toUInt64(info.GetIsolate(), info[0], Clamp, exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->requestPersistentQuota(scriptState, newQuota);
    v8SetReturnValue(info, result.v8Value());
}

static void requestPersistentQuotaMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "requestPersistentQuota", "StorageQuota", info.Holder(), info.GetIsolate());
    requestPersistentQuotaMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void requestPersistentQuotaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    StorageQuotaV8Internal::requestPersistentQuotaMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace StorageQuotaV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8StorageQuotaAccessors[] = {
    {"supportedTypes", StorageQuotaV8Internal::supportedTypesAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8StorageQuotaMethods[] = {
    {"queryInfo", StorageQuotaV8Internal::queryInfoMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"requestPersistentQuota", StorageQuotaV8Internal::requestPersistentQuotaMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8StorageQuotaTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::quotaPromiseEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "StorageQuota", v8::Local<v8::FunctionTemplate>(), V8StorageQuota::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "StorageQuota", v8::Local<v8::FunctionTemplate>(), V8StorageQuota::internalFieldCount,
            0, 0,
            V8StorageQuotaAccessors, WTF_ARRAY_LENGTH(V8StorageQuotaAccessors),
            V8StorageQuotaMethods, WTF_ARRAY_LENGTH(V8StorageQuotaMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8StorageQuota::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8StorageQuotaTemplate);
}

bool V8StorageQuota::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8StorageQuota::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

StorageQuota* V8StorageQuota::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8StorageQuota::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8StorageQuota::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
