// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8NodeList.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8GCController.h"
#include "bindings/core/v8/V8Node.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/dom/Element.h"
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
const WrapperTypeInfo V8NodeList::wrapperTypeInfo = { gin::kEmbedderBlink, V8NodeList::domTemplate, V8NodeList::refObject, V8NodeList::derefObject, V8NodeList::trace, 0, V8NodeList::visitDOMWrapper, V8NodeList::preparePrototypeObject, V8NodeList::installConditionallyEnabledProperties, "NodeList", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in NodeList.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& NodeList::s_wrapperTypeInfo = V8NodeList::wrapperTypeInfo;

namespace NodeListV8Internal {

static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    NodeList* impl = V8NodeList::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->length());
}

static void lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    NodeListV8Internal::lengthAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void itemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "item", "NodeList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    NodeList* impl = V8NodeList::toImpl(info.Holder());
    unsigned index;
    {
        index = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    v8SetReturnValue(info, impl->item(index));
}

static void itemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    NodeListV8Internal::itemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void keysMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "keys", "NodeList", info.Holder(), info.GetIsolate());
    NodeList* impl = V8NodeList::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::forReceiverObject(info);

    Iterator* result = impl->keysForBinding(scriptState, exceptionState);
    if (exceptionState.hadException())
        return;
    
    v8SetReturnValue(info, result);
}

CORE_EXPORT  void keysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NodeListV8Internal::keysMethod(info);
}

static void valuesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "values", "NodeList", info.Holder(), info.GetIsolate());
    NodeList* impl = V8NodeList::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::forReceiverObject(info);

    Iterator* result = impl->valuesForBinding(scriptState, exceptionState);
    if (exceptionState.hadException())
        return;
    
    v8SetReturnValue(info, result);
}

CORE_EXPORT void valuesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NodeListV8Internal::valuesMethod(info);
}

static void entriesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "entries", "NodeList", info.Holder(), info.GetIsolate());
    NodeList* impl = V8NodeList::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::forReceiverObject(info);

    Iterator* result = impl->entriesForBinding(scriptState, exceptionState);
    if (exceptionState.hadException())
        return;
    
    v8SetReturnValue(info, result);
}

CORE_EXPORT  void entriesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NodeListV8Internal::entriesMethod(info);
}

static void forEachMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "forEach", "NodeList", info.Holder(), info.GetIsolate());
    NodeList* impl = V8NodeList::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::forReceiverObject(info);

    if (UNLIKELY(info.Length() < 1)) {
        exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
        return;
    }

    ScriptValue callback;
    ScriptValue thisArg;
    if (!(info[0]->IsObject() && v8::Local<v8::Object>::Cast(info[0])->IsCallable())) {
        exceptionState.throwTypeError("The callback provided as parameter 1 is not a function.");
        return;
    }

    callback = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);
    thisArg = ScriptValue(ScriptState::current(info.GetIsolate()), info[1]);

    impl->forEachForBinding(scriptState, ScriptValue(scriptState, info.Holder()), callback, thisArg, exceptionState);
    if (exceptionState.hadException())
        return;
}

CORE_EXPORT void forEachMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NodeListV8Internal::forEachMethod(info);
}

static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    NodeList* impl = V8NodeList::toImpl(info.Holder());
    RefPtrWillBeRawPtr<Node> result = impl->item(index);
    if (!result)
        return;
    v8SetReturnValueFast(info, WTF::getPtr(result.release()), impl);
}

static void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMIndexedProperty");
    NodeListV8Internal::indexedPropertyGetter(index, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace NodeListV8Internal

void V8NodeList::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    NodeList* impl = scriptWrappable->toImpl<NodeList>();
    // The virtualOwnerNode() method may return a reference or a pointer.
    if (Node* owner = WTF::getPtr(impl->virtualOwnerNode())) {
        Node* root = V8GCController::opaqueRootForGC(isolate, owner);
        isolate->SetReferenceFromGroup(v8::UniqueId(reinterpret_cast<intptr_t>(root)), wrapper);
        return;
    }
}

static const V8DOMConfiguration::AccessorConfiguration V8NodeListAccessors[] = {
    {"length", NodeListV8Internal::lengthAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8NodeListMethods[] = {
    {"item", NodeListV8Internal::itemMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    { "keys", NodeListV8Internal::keysMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts },
    { "values", NodeListV8Internal::valuesMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts },
    { "entries", NodeListV8Internal::entriesMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts },
    { "forEach", NodeListV8Internal::forEachMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts },
};

static void installV8NodeListTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "NodeList", v8::Local<v8::FunctionTemplate>(), V8NodeList::internalFieldCount,
        0, 0,
        V8NodeListAccessors, WTF_ARRAY_LENGTH(V8NodeListAccessors),
        V8NodeListMethods, WTF_ARRAY_LENGTH(V8NodeListMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    {
        v8::IndexedPropertyHandlerConfiguration config(NodeListV8Internal::indexedPropertyGetterCallback, 0, 0, 0, indexedPropertyEnumerator<NodeList>);
        functionTemplate->InstanceTemplate()->SetHandler(config);
    }

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8NodeList::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8NodeListTemplate);
}

bool V8NodeList::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8NodeList::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

NodeList* V8NodeList::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8NodeList::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<NodeList>()->ref();
#endif
}

void V8NodeList::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<NodeList>()->deref();
#endif
}

} // namespace blink
