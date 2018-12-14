// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8MediaController.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8TimeRanges.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
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
const WrapperTypeInfo V8MediaController::wrapperTypeInfo = { gin::kEmbedderBlink, V8MediaController::domTemplate, V8MediaController::refObject, V8MediaController::derefObject, V8MediaController::trace, 0, 0, V8MediaController::preparePrototypeObject, V8MediaController::installConditionallyEnabledProperties, "MediaController", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MediaController.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& MediaController::s_wrapperTypeInfo = V8MediaController::wrapperTypeInfo;

namespace MediaControllerV8Internal {

static void bufferedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaController* impl = V8MediaController::toImpl(holder);
    RefPtrWillBeRawPtr<TimeRanges> cppValue(impl->buffered());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "buffered"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void bufferedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MediaControllerV8Internal::bufferedAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void seekableAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaController* impl = V8MediaController::toImpl(holder);
    RefPtrWillBeRawPtr<TimeRanges> cppValue(impl->seekable());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "seekable"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void seekableAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MediaControllerV8Internal::seekableAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void durationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaController* impl = V8MediaController::toImpl(holder);
    v8SetReturnValue(info, impl->duration());
}

static void durationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MediaControllerV8Internal::durationAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void currentTimeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaController* impl = V8MediaController::toImpl(holder);
    v8SetReturnValue(info, impl->currentTime());
}

static void currentTimeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MediaControllerV8Internal::currentTimeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void currentTimeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "currentTime", "MediaController", holder, info.GetIsolate());
    MediaController* impl = V8MediaController::toImpl(holder);
    double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setCurrentTime(cppValue);
}

static void currentTimeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    MediaControllerV8Internal::currentTimeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void pausedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaController* impl = V8MediaController::toImpl(holder);
    v8SetReturnValueBool(info, impl->paused());
}

static void pausedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MediaControllerV8Internal::pausedAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void playbackStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaController* impl = V8MediaController::toImpl(holder);
    v8SetReturnValueString(info, impl->playbackState(), info.GetIsolate());
}

static void playbackStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MediaControllerV8Internal::playbackStateAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void playedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaController* impl = V8MediaController::toImpl(holder);
    RefPtrWillBeRawPtr<TimeRanges> cppValue(impl->played());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "played"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void playedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MediaControllerV8Internal::playedAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void defaultPlaybackRateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaController* impl = V8MediaController::toImpl(holder);
    v8SetReturnValue(info, impl->defaultPlaybackRate());
}

static void defaultPlaybackRateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MediaControllerV8Internal::defaultPlaybackRateAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void defaultPlaybackRateAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "defaultPlaybackRate", "MediaController", holder, info.GetIsolate());
    MediaController* impl = V8MediaController::toImpl(holder);
    double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setDefaultPlaybackRate(cppValue);
}

static void defaultPlaybackRateAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    MediaControllerV8Internal::defaultPlaybackRateAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void playbackRateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaController* impl = V8MediaController::toImpl(holder);
    v8SetReturnValue(info, impl->playbackRate());
}

static void playbackRateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MediaControllerV8Internal::playbackRateAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void playbackRateAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "playbackRate", "MediaController", holder, info.GetIsolate());
    MediaController* impl = V8MediaController::toImpl(holder);
    double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setPlaybackRate(cppValue);
}

static void playbackRateAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    MediaControllerV8Internal::playbackRateAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void volumeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaController* impl = V8MediaController::toImpl(holder);
    v8SetReturnValue(info, impl->volume());
}

static void volumeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MediaControllerV8Internal::volumeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void volumeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "volume", "MediaController", holder, info.GetIsolate());
    MediaController* impl = V8MediaController::toImpl(holder);
    double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setVolume(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void volumeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    MediaControllerV8Internal::volumeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void mutedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaController* impl = V8MediaController::toImpl(holder);
    v8SetReturnValueBool(info, impl->muted());
}

static void mutedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MediaControllerV8Internal::mutedAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void mutedAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "muted", "MediaController", holder, info.GetIsolate());
    MediaController* impl = V8MediaController::toImpl(holder);
    bool cppValue = toBoolean(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setMuted(cppValue);
}

static void mutedAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    MediaControllerV8Internal::mutedAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void pauseMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaController* impl = V8MediaController::toImpl(info.Holder());
    impl->pause();
}

static void pauseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    MediaControllerV8Internal::pauseMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void unpauseMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaController* impl = V8MediaController::toImpl(info.Holder());
    impl->unpause();
}

static void unpauseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    MediaControllerV8Internal::unpauseMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void playMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaController* impl = V8MediaController::toImpl(info.Holder());
    impl->play();
}

static void playMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    MediaControllerV8Internal::playMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    RefPtrWillBeRawPtr<MediaController> impl = MediaController::create(executionContext);
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8MediaController::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace MediaControllerV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8MediaControllerAccessors[] = {
    {"buffered", MediaControllerV8Internal::bufferedAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"seekable", MediaControllerV8Internal::seekableAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"duration", MediaControllerV8Internal::durationAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"currentTime", MediaControllerV8Internal::currentTimeAttributeGetterCallback, MediaControllerV8Internal::currentTimeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"paused", MediaControllerV8Internal::pausedAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"playbackState", MediaControllerV8Internal::playbackStateAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"played", MediaControllerV8Internal::playedAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"defaultPlaybackRate", MediaControllerV8Internal::defaultPlaybackRateAttributeGetterCallback, MediaControllerV8Internal::defaultPlaybackRateAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"playbackRate", MediaControllerV8Internal::playbackRateAttributeGetterCallback, MediaControllerV8Internal::playbackRateAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"volume", MediaControllerV8Internal::volumeAttributeGetterCallback, MediaControllerV8Internal::volumeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"muted", MediaControllerV8Internal::mutedAttributeGetterCallback, MediaControllerV8Internal::mutedAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8MediaControllerMethods[] = {
    {"pause", MediaControllerV8Internal::pauseMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"unpause", MediaControllerV8Internal::unpauseMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"play", MediaControllerV8Internal::playMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

void V8MediaController::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("MediaController"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    MediaControllerV8Internal::constructor(info);
}

static void installV8MediaControllerTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::mediaControllerEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "MediaController", V8EventTarget::domTemplate(isolate), V8MediaController::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "MediaController", V8EventTarget::domTemplate(isolate), V8MediaController::internalFieldCount,
            0, 0,
            V8MediaControllerAccessors, WTF_ARRAY_LENGTH(V8MediaControllerAccessors),
            V8MediaControllerMethods, WTF_ARRAY_LENGTH(V8MediaControllerMethods));
    functionTemplate->SetCallHandler(V8MediaController::constructorCallback);
    functionTemplate->SetLength(0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8MediaController::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8MediaControllerTemplate);
}

bool V8MediaController::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8MediaController::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

MediaController* V8MediaController::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8MediaController::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<MediaController>()->ref();
#endif
}

void V8MediaController::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<MediaController>()->deref();
#endif
}

} // namespace blink
