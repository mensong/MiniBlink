// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8DevToolsHost.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Document.h"
#include "bindings/core/v8/V8MouseEvent.h"
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
WrapperTypeInfo V8DevToolsHost::wrapperTypeInfo = { gin::kEmbedderBlink, V8DevToolsHost::domTemplate, V8DevToolsHost::refObject, V8DevToolsHost::derefObject, V8DevToolsHost::trace, 0, 0, V8DevToolsHost::preparePrototypeObject, V8DevToolsHost::installConditionallyEnabledProperties, "DevToolsHost", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DevToolsHost.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& DevToolsHost::s_wrapperTypeInfo = V8DevToolsHost::wrapperTypeInfo;

namespace DevToolsHostV8Internal {

static void zoomFactorMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DevToolsHost* impl = V8DevToolsHost::toImpl(info.Holder());
    v8SetReturnValue(info, impl->zoomFactor());
}

static void zoomFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DevToolsHostV8Internal::zoomFactorMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void setInjectedScriptForOriginMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 2)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "setInjectedScriptForOrigin", "DevToolsHost", 2, info.Length()), info.GetIsolate());
        return;
    }
    DevToolsHost* impl = V8DevToolsHost::toImpl(info.Holder());
    V8StringResource<> origin;
    V8StringResource<> script;
    {
        origin = info[0];
        if (!origin.prepare())
            return;
        script = info[1];
        if (!script.prepare())
            return;
    }
    impl->setInjectedScriptForOrigin(origin, script);
}

static void setInjectedScriptForOriginMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DevToolsHostV8Internal::setInjectedScriptForOriginMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void copyTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "copyText", "DevToolsHost", 1, info.Length()), info.GetIsolate());
        return;
    }
    DevToolsHost* impl = V8DevToolsHost::toImpl(info.Holder());
    V8StringResource<> text;
    {
        text = info[0];
        if (!text.prepare())
            return;
    }
    impl->copyText(text);
}

static void copyTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DevToolsHostV8Internal::copyTextMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void platformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    V8DevToolsHost::platformMethodCustom(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void showContextMenuMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    V8DevToolsHost::showContextMenuMethodCustom(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void showContextMenuAtPointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    V8DevToolsHost::showContextMenuAtPointMethodCustom(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void sendMessageToBackendMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "sendMessageToBackend", "DevToolsHost", 1, info.Length()), info.GetIsolate());
        return;
    }
    DevToolsHost* impl = V8DevToolsHost::toImpl(info.Holder());
    V8StringResource<> message;
    {
        message = info[0];
        if (!message.prepare())
            return;
    }
    impl->sendMessageToBackend(message);
}

static void sendMessageToBackendMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DevToolsHostV8Internal::sendMessageToBackendMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void sendMessageToEmbedderMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "sendMessageToEmbedder", "DevToolsHost", 1, info.Length()), info.GetIsolate());
        return;
    }
    DevToolsHost* impl = V8DevToolsHost::toImpl(info.Holder());
    V8StringResource<> message;
    {
        message = info[0];
        if (!message.prepare())
            return;
    }
    impl->sendMessageToEmbedder(message);
}

static void sendMessageToEmbedderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DevToolsHostV8Internal::sendMessageToEmbedderMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getSelectionBackgroundColorMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DevToolsHost* impl = V8DevToolsHost::toImpl(info.Holder());
    v8SetReturnValueString(info, impl->getSelectionBackgroundColor(), info.GetIsolate());
}

static void getSelectionBackgroundColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DevToolsHostV8Internal::getSelectionBackgroundColorMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getSelectionForegroundColorMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DevToolsHost* impl = V8DevToolsHost::toImpl(info.Holder());
    v8SetReturnValueString(info, impl->getSelectionForegroundColor(), info.GetIsolate());
}

static void getSelectionForegroundColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DevToolsHostV8Internal::getSelectionForegroundColorMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void isUnderTestMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DevToolsHost* impl = V8DevToolsHost::toImpl(info.Holder());
    v8SetReturnValueBool(info, impl->isUnderTest());
}

static void isUnderTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DevToolsHostV8Internal::isUnderTestMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void isHostedModeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DevToolsHost* impl = V8DevToolsHost::toImpl(info.Holder());
    v8SetReturnValueBool(info, impl->isHostedMode());
}

static void isHostedModeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DevToolsHostV8Internal::isHostedModeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace DevToolsHostV8Internal

static const V8DOMConfiguration::MethodConfiguration V8DevToolsHostMethods[] = {
    {"zoomFactor", DevToolsHostV8Internal::zoomFactorMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"setInjectedScriptForOrigin", DevToolsHostV8Internal::setInjectedScriptForOriginMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
    {"copyText", DevToolsHostV8Internal::copyTextMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"platform", DevToolsHostV8Internal::platformMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"showContextMenu", DevToolsHostV8Internal::showContextMenuMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
    {"showContextMenuAtPoint", DevToolsHostV8Internal::showContextMenuAtPointMethodCallback, 0, 3, V8DOMConfiguration::ExposedToAllScripts},
    {"sendMessageToBackend", DevToolsHostV8Internal::sendMessageToBackendMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"sendMessageToEmbedder", DevToolsHostV8Internal::sendMessageToEmbedderMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"getSelectionBackgroundColor", DevToolsHostV8Internal::getSelectionBackgroundColorMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"getSelectionForegroundColor", DevToolsHostV8Internal::getSelectionForegroundColorMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"isUnderTest", DevToolsHostV8Internal::isUnderTestMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"isHostedMode", DevToolsHostV8Internal::isHostedModeMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

void V8DevToolsHost::installV8DevToolsHostTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "DevToolsHost", v8::Local<v8::FunctionTemplate>(), V8DevToolsHost::internalFieldCount,
        0, 0,
        0, 0,
        V8DevToolsHostMethods, WTF_ARRAY_LENGTH(V8DevToolsHostMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8DevToolsHost::domTemplate(v8::Isolate* isolate)
{
    ASSERT(V8DevToolsHost::installV8DevToolsHostTemplateFunction != V8DevToolsHost::installV8DevToolsHostTemplate);
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), V8DevToolsHost::installV8DevToolsHostTemplateFunction);
}

bool V8DevToolsHost::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DevToolsHost::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DevToolsHost* V8DevToolsHost::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8DevToolsHost::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<DevToolsHost>()->ref();
#endif
}

void V8DevToolsHost::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<DevToolsHost>()->deref();
#endif
}

InstallTemplateFunction V8DevToolsHost::installV8DevToolsHostTemplateFunction = (InstallTemplateFunction)&V8DevToolsHost::installV8DevToolsHostTemplate;

void V8DevToolsHost::updateWrapperTypeInfo(InstallTemplateFunction installTemplateFunction, PreparePrototypeObjectFunction preparePrototypeObjectFunction)
{
    V8DevToolsHost::installV8DevToolsHostTemplateFunction = installTemplateFunction;
    if (preparePrototypeObjectFunction)
        V8DevToolsHost::wrapperTypeInfo.preparePrototypeObjectFunction = preparePrototypeObjectFunction;
}

} // namespace blink
