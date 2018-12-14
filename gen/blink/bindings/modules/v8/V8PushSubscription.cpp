// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8PushSubscription.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
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
const WrapperTypeInfo V8PushSubscription::wrapperTypeInfo = { gin::kEmbedderBlink, V8PushSubscription::domTemplate, V8PushSubscription::refObject, V8PushSubscription::derefObject, V8PushSubscription::trace, 0, 0, V8PushSubscription::preparePrototypeObject, V8PushSubscription::installConditionallyEnabledProperties, "PushSubscription", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PushSubscription.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& PushSubscription::s_wrapperTypeInfo = V8PushSubscription::wrapperTypeInfo;

namespace PushSubscriptionV8Internal {

static void endpointAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PushSubscription* impl = V8PushSubscription::toImpl(holder);
    v8SetReturnValueString(info, impl->endpoint(), info.GetIsolate());
}

static void endpointAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    PushSubscriptionV8Internal::endpointAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void unsubscribeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PushSubscription* impl = V8PushSubscription::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->unsubscribe(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void unsubscribeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    PushSubscriptionV8Internal::unsubscribeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void toJSONMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PushSubscription* impl = V8PushSubscription::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptValue result = impl->toJSONForBinding(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void toJSONMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    PushSubscriptionV8Internal::toJSONMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace PushSubscriptionV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8PushSubscriptionAccessors[] = {
    {"endpoint", PushSubscriptionV8Internal::endpointAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8PushSubscriptionMethods[] = {
    {"unsubscribe", PushSubscriptionV8Internal::unsubscribeMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"toJSON", PushSubscriptionV8Internal::toJSONMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8PushSubscriptionTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::pushMessagingEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "PushSubscription", v8::Local<v8::FunctionTemplate>(), V8PushSubscription::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "PushSubscription", v8::Local<v8::FunctionTemplate>(), V8PushSubscription::internalFieldCount,
            0, 0,
            V8PushSubscriptionAccessors, WTF_ARRAY_LENGTH(V8PushSubscriptionAccessors),
            V8PushSubscriptionMethods, WTF_ARRAY_LENGTH(V8PushSubscriptionMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8PushSubscription::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8PushSubscriptionTemplate);
}

bool V8PushSubscription::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8PushSubscription::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

PushSubscription* V8PushSubscription::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8PushSubscription::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8PushSubscription::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
