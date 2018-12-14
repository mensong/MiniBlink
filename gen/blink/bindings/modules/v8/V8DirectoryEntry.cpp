// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8DirectoryEntry.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8VoidCallback.h"
#include "bindings/modules/v8/V8DirectoryReader.h"
#include "bindings/modules/v8/V8EntryCallback.h"
#include "bindings/modules/v8/V8ErrorCallback.h"
#include "bindings/modules/v8/V8FileSystemFlags.h"
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
const WrapperTypeInfo V8DirectoryEntry::wrapperTypeInfo = { gin::kEmbedderBlink, V8DirectoryEntry::domTemplate, V8DirectoryEntry::refObject, V8DirectoryEntry::derefObject, V8DirectoryEntry::trace, 0, 0, V8DirectoryEntry::preparePrototypeObject, V8DirectoryEntry::installConditionallyEnabledProperties, "DirectoryEntry", &V8Entry::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DirectoryEntry.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& DirectoryEntry::s_wrapperTypeInfo = V8DirectoryEntry::wrapperTypeInfo;

namespace DirectoryEntryV8Internal {

static void createReaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DirectoryEntry* impl = V8DirectoryEntry::toImpl(info.Holder());
    v8SetReturnValue(info, impl->createReader());
}

static void createReaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DirectoryEntryV8Internal::createReaderMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getFileMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getFile", "DirectoryEntry", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    DirectoryEntry* impl = V8DirectoryEntry::toImpl(info.Holder());
    V8StringResource<TreatNullAndUndefinedAsNullString> path;
    FileSystemFlags options;
    EntryCallback* successCallback;
    ErrorCallback* errorCallback;
    {
        path = info[0];
        if (!path.prepare())
            return;
        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('options') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        V8FileSystemFlags::toImpl(info.GetIsolate(), info[1], options, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        if (!isUndefinedOrNull(info[2])) {
            if (!info[2]->IsFunction()) {
                exceptionState.throwTypeError("The callback provided as parameter 3 is not a function.");
                exceptionState.throwIfNeeded();
                return;
            }
            successCallback = V8EntryCallback::create(v8::Local<v8::Function>::Cast(info[2]), ScriptState::current(info.GetIsolate()));
        } else {
            successCallback = nullptr;
        }
        if (!isUndefinedOrNull(info[3])) {
            if (!info[3]->IsFunction()) {
                exceptionState.throwTypeError("The callback provided as parameter 4 is not a function.");
                exceptionState.throwIfNeeded();
                return;
            }
            errorCallback = V8ErrorCallback::create(v8::Local<v8::Function>::Cast(info[3]), ScriptState::current(info.GetIsolate()));
        } else {
            errorCallback = nullptr;
        }
    }
    impl->getFile(path, options, successCallback, errorCallback);
}

static void getFileMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DirectoryEntryV8Internal::getFileMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getDirectoryMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getDirectory", "DirectoryEntry", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    DirectoryEntry* impl = V8DirectoryEntry::toImpl(info.Holder());
    V8StringResource<TreatNullAndUndefinedAsNullString> path;
    FileSystemFlags options;
    EntryCallback* successCallback;
    ErrorCallback* errorCallback;
    {
        path = info[0];
        if (!path.prepare())
            return;
        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('options') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        V8FileSystemFlags::toImpl(info.GetIsolate(), info[1], options, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        if (!isUndefinedOrNull(info[2])) {
            if (!info[2]->IsFunction()) {
                exceptionState.throwTypeError("The callback provided as parameter 3 is not a function.");
                exceptionState.throwIfNeeded();
                return;
            }
            successCallback = V8EntryCallback::create(v8::Local<v8::Function>::Cast(info[2]), ScriptState::current(info.GetIsolate()));
        } else {
            successCallback = nullptr;
        }
        if (!isUndefinedOrNull(info[3])) {
            if (!info[3]->IsFunction()) {
                exceptionState.throwTypeError("The callback provided as parameter 4 is not a function.");
                exceptionState.throwIfNeeded();
                return;
            }
            errorCallback = V8ErrorCallback::create(v8::Local<v8::Function>::Cast(info[3]), ScriptState::current(info.GetIsolate()));
        } else {
            errorCallback = nullptr;
        }
    }
    impl->getDirectory(path, options, successCallback, errorCallback);
}

static void getDirectoryMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DirectoryEntryV8Internal::getDirectoryMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void removeRecursivelyMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "removeRecursively", "DirectoryEntry", 1, info.Length()), info.GetIsolate());
        return;
    }
    DirectoryEntry* impl = V8DirectoryEntry::toImpl(info.Holder());
    VoidCallback* successCallback;
    ErrorCallback* errorCallback;
    {
        if (info.Length() <= 0 || !info[0]->IsFunction()) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("removeRecursively", "DirectoryEntry", "The callback provided as parameter 1 is not a function."));
            return;
        }
        successCallback = V8VoidCallback::create(v8::Local<v8::Function>::Cast(info[0]), ScriptState::current(info.GetIsolate()));
        if (!isUndefinedOrNull(info[1])) {
            if (!info[1]->IsFunction()) {
                V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("removeRecursively", "DirectoryEntry", "The callback provided as parameter 2 is not a function."));
                return;
            }
            errorCallback = V8ErrorCallback::create(v8::Local<v8::Function>::Cast(info[1]), ScriptState::current(info.GetIsolate()));
        } else {
            errorCallback = nullptr;
        }
    }
    impl->removeRecursively(successCallback, errorCallback);
}

static void removeRecursivelyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DirectoryEntryV8Internal::removeRecursivelyMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace DirectoryEntryV8Internal

static const V8DOMConfiguration::MethodConfiguration V8DirectoryEntryMethods[] = {
    {"createReader", DirectoryEntryV8Internal::createReaderMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"getFile", DirectoryEntryV8Internal::getFileMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"getDirectory", DirectoryEntryV8Internal::getDirectoryMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"removeRecursively", DirectoryEntryV8Internal::removeRecursivelyMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8DirectoryEntryTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "DirectoryEntry", V8Entry::domTemplate(isolate), V8DirectoryEntry::internalFieldCount,
        0, 0,
        0, 0,
        V8DirectoryEntryMethods, WTF_ARRAY_LENGTH(V8DirectoryEntryMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8DirectoryEntry::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DirectoryEntryTemplate);
}

bool V8DirectoryEntry::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DirectoryEntry::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DirectoryEntry* V8DirectoryEntry::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8DirectoryEntry::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8DirectoryEntry::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
