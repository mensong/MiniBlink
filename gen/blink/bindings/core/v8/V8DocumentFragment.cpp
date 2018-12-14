// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8DocumentFragment.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/UnionTypesCore.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Element.h"
#include "bindings/core/v8/V8HTMLCollection.h"
#include "bindings/core/v8/V8Node.h"
#include "bindings/core/v8/V8NodeList.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ClassCollection.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/dom/NameNodeList.h"
#include "core/dom/NodeList.h"
#include "core/dom/NonElementParentNode.h"
#include "core/dom/ParentNode.h"
#include "core/dom/StaticNodeList.h"
#include "core/dom/TagCollection.h"
#include "core/dom/custom/CustomElementProcessingStack.h"
#include "core/frame/LocalDOMWindow.h"
#include "core/html/HTMLCollection.h"
#include "core/html/HTMLDataListOptionsCollection.h"
#include "core/html/HTMLFormControlsCollection.h"
#include "core/html/HTMLTableRowsCollection.h"
#include "core/html/LabelsNodeList.h"
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
const WrapperTypeInfo V8DocumentFragment::wrapperTypeInfo = { gin::kEmbedderBlink, V8DocumentFragment::domTemplate, V8DocumentFragment::refObject, V8DocumentFragment::derefObject, V8DocumentFragment::trace, 0, 0, V8DocumentFragment::preparePrototypeObject, V8DocumentFragment::installConditionallyEnabledProperties, "DocumentFragment", &V8Node::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DocumentFragment.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& DocumentFragment::s_wrapperTypeInfo = V8DocumentFragment::wrapperTypeInfo;

namespace DocumentFragmentV8Internal {

static void childrenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DocumentFragment* impl = V8DocumentFragment::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(ParentNode::children(*impl)), impl);
}

static void childrenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DocumentFragmentV8Internal::childrenAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void childrenAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DocumentFragment* impl = V8DocumentFragment::toImpl(holder);
    v8SetReturnValueForMainWorld(info, WTF::getPtr(ParentNode::children(*impl)));
}

static void childrenAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DocumentFragmentV8Internal::childrenAttributeGetterForMainWorld(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void firstElementChildAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DocumentFragment* impl = V8DocumentFragment::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(ParentNode::firstElementChild(*impl)), impl);
}

static void firstElementChildAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DocumentFragmentV8Internal::firstElementChildAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void firstElementChildAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DocumentFragment* impl = V8DocumentFragment::toImpl(holder);
    v8SetReturnValueForMainWorld(info, WTF::getPtr(ParentNode::firstElementChild(*impl)));
}

static void firstElementChildAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DocumentFragmentV8Internal::firstElementChildAttributeGetterForMainWorld(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void lastElementChildAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DocumentFragment* impl = V8DocumentFragment::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(ParentNode::lastElementChild(*impl)), impl);
}

static void lastElementChildAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DocumentFragmentV8Internal::lastElementChildAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void lastElementChildAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DocumentFragment* impl = V8DocumentFragment::toImpl(holder);
    v8SetReturnValueForMainWorld(info, WTF::getPtr(ParentNode::lastElementChild(*impl)));
}

static void lastElementChildAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DocumentFragmentV8Internal::lastElementChildAttributeGetterForMainWorld(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void childElementCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DocumentFragment* impl = V8DocumentFragment::toImpl(holder);
    v8SetReturnValueUnsigned(info, ParentNode::childElementCount(*impl));
}

static void childElementCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DocumentFragmentV8Internal::childElementCountAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getElementByIdMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getElementById", "DocumentFragment", 1, info.Length()), info.GetIsolate());
        return;
    }
    DocumentFragment* impl = V8DocumentFragment::toImpl(info.Holder());
    V8StringResource<> elementId;
    {
        elementId = info[0];
        if (!elementId.prepare())
            return;
    }
    v8SetReturnValueFast(info, WTF::getPtr(NonElementParentNode::getElementById(*impl, elementId)), impl);
}

static void getElementByIdMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DocumentFragmentV8Internal::getElementByIdMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getElementByIdMethodForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getElementById", "DocumentFragment", 1, info.Length()), info.GetIsolate());
        return;
    }
    DocumentFragment* impl = V8DocumentFragment::toImpl(info.Holder());
    V8StringResource<> elementId;
    {
        elementId = info[0];
        if (!elementId.prepare())
            return;
    }
    v8SetReturnValueForMainWorld(info, WTF::getPtr(NonElementParentNode::getElementById(*impl, elementId)));
}

static void getElementByIdMethodCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DocumentFragmentV8Internal::getElementByIdMethodForMainWorld(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void prependMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "prepend", "DocumentFragment", info.Holder(), info.GetIsolate());
    DocumentFragment* impl = V8DocumentFragment::toImpl(info.Holder());
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HeapVector<NodeOrString> nodes;
    {
        nodes = toImplArguments<HeapVector<NodeOrString>>(info, 0, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ParentNode::prepend(*impl, nodes, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void prependMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DocumentFragmentV8Internal::prependMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void appendMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "append", "DocumentFragment", info.Holder(), info.GetIsolate());
    DocumentFragment* impl = V8DocumentFragment::toImpl(info.Holder());
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HeapVector<NodeOrString> nodes;
    {
        nodes = toImplArguments<HeapVector<NodeOrString>>(info, 0, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ParentNode::append(*impl, nodes, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void appendMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DocumentFragmentV8Internal::appendMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void querySelectorMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "querySelector", "DocumentFragment", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    DocumentFragment* impl = V8DocumentFragment::toImpl(info.Holder());
    V8StringResource<> selectors;
    {
        selectors = info[0];
        if (!selectors.prepare())
            return;
    }
    RefPtrWillBeRawPtr<Element> result = ParentNode::querySelector(*impl, selectors, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueFast(info, WTF::getPtr(result.release()), impl);
}

static void querySelectorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DocumentFragmentV8Internal::querySelectorMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void querySelectorAllMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "querySelectorAll", "DocumentFragment", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    DocumentFragment* impl = V8DocumentFragment::toImpl(info.Holder());
    V8StringResource<> selectors;
    {
        selectors = info[0];
        if (!selectors.prepare())
            return;
    }
    RefPtrWillBeRawPtr<NodeList> result = ParentNode::querySelectorAll(*impl, selectors, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueFast(info, WTF::getPtr(result.release()), impl);
}

static void querySelectorAllMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DocumentFragmentV8Internal::querySelectorAllMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Document& document = *toDocument(currentExecutionContext(info.GetIsolate()));
    RefPtrWillBeRawPtr<DocumentFragment> impl = DocumentFragment::create(document);
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8DocumentFragment::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace DocumentFragmentV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8DocumentFragmentAccessors[] = {
    {"children", DocumentFragmentV8Internal::childrenAttributeGetterCallback, 0, DocumentFragmentV8Internal::childrenAttributeGetterCallbackForMainWorld, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"firstElementChild", DocumentFragmentV8Internal::firstElementChildAttributeGetterCallback, 0, DocumentFragmentV8Internal::firstElementChildAttributeGetterCallbackForMainWorld, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"lastElementChild", DocumentFragmentV8Internal::lastElementChildAttributeGetterCallback, 0, DocumentFragmentV8Internal::lastElementChildAttributeGetterCallbackForMainWorld, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"childElementCount", DocumentFragmentV8Internal::childElementCountAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8DocumentFragmentMethods[] = {
    {"getElementById", DocumentFragmentV8Internal::getElementByIdMethodCallback, DocumentFragmentV8Internal::getElementByIdMethodCallbackForMainWorld, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"querySelector", DocumentFragmentV8Internal::querySelectorMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"querySelectorAll", DocumentFragmentV8Internal::querySelectorAllMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

void V8DocumentFragment::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("DocumentFragment"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    DocumentFragmentV8Internal::constructor(info);
}

static void installV8DocumentFragmentTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "DocumentFragment", V8Node::domTemplate(isolate), V8DocumentFragment::internalFieldCount,
        0, 0,
        V8DocumentFragmentAccessors, WTF_ARRAY_LENGTH(V8DocumentFragmentAccessors),
        V8DocumentFragmentMethods, WTF_ARRAY_LENGTH(V8DocumentFragmentMethods));
    functionTemplate->SetCallHandler(V8DocumentFragment::constructorCallback);
    functionTemplate->SetLength(0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    if (RuntimeEnabledFeatures::dOMConvenienceAPIEnabled()) {
        const V8DOMConfiguration::MethodConfiguration prependMethodConfiguration = {
            "prepend", DocumentFragmentV8Internal::prependMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, prependMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::dOMConvenienceAPIEnabled()) {
        const V8DOMConfiguration::MethodConfiguration appendMethodConfiguration = {
            "append", DocumentFragmentV8Internal::appendMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, appendMethodConfiguration);
    }

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8DocumentFragment::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DocumentFragmentTemplate);
}

bool V8DocumentFragment::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DocumentFragment::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DocumentFragment* V8DocumentFragment::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8DocumentFragment::preparePrototypeObject(v8::Isolate* isolate, v8::Local<v8::Object> prototypeObject, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    v8::Local<v8::Context> v8Context(prototypeObject->CreationContext());
    v8::Local<v8::Name> unscopablesSymbol(v8::Symbol::GetUnscopables(isolate));
    v8::Local<v8::Object> unscopeables;
    if (v8CallBoolean(prototypeObject->HasOwnProperty(v8Context, unscopablesSymbol)))
        unscopeables = prototypeObject->Get(v8Context, unscopablesSymbol).ToLocalChecked().As<v8::Object>();
    else
        unscopeables = v8::Object::New(isolate);
    if (RuntimeEnabledFeatures::dOMConvenienceAPIEnabled()) {
        unscopeables->CreateDataProperty(v8Context, v8AtomicString(isolate, "append"), v8::True(isolate)).FromJust();
    }
    if (RuntimeEnabledFeatures::dOMConvenienceAPIEnabled()) {
        unscopeables->CreateDataProperty(v8Context, v8AtomicString(isolate, "prepend"), v8::True(isolate)).FromJust();
    }
    prototypeObject->CreateDataProperty(v8Context, unscopablesSymbol, unscopeables).FromJust();
}

void V8DocumentFragment::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<DocumentFragment>()->ref();
#endif
}

void V8DocumentFragment::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<DocumentFragment>()->deref();
#endif
}

} // namespace blink
