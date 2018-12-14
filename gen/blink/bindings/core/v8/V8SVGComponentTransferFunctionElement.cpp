// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SVGComponentTransferFunctionElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8SVGAnimatedEnumeration.h"
#include "bindings/core/v8/V8SVGAnimatedNumber.h"
#include "bindings/core/v8/V8SVGAnimatedNumberList.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
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
const WrapperTypeInfo V8SVGComponentTransferFunctionElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGComponentTransferFunctionElement::domTemplate, V8SVGComponentTransferFunctionElement::refObject, V8SVGComponentTransferFunctionElement::derefObject, V8SVGComponentTransferFunctionElement::trace, 0, 0, V8SVGComponentTransferFunctionElement::preparePrototypeObject, V8SVGComponentTransferFunctionElement::installConditionallyEnabledProperties, "SVGComponentTransferFunctionElement", &V8SVGElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGComponentTransferFunctionElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGComponentTransferFunctionElement::s_wrapperTypeInfo = V8SVGComponentTransferFunctionElement::wrapperTypeInfo;

namespace SVGComponentTransferFunctionElementV8Internal {

static void SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWNConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    v8SetReturnValueInt(info, 0);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void SVG_FECOMPONENTTRANSFER_TYPE_IDENTITYConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    v8SetReturnValueInt(info, 1);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void SVG_FECOMPONENTTRANSFER_TYPE_TABLEConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    v8SetReturnValueInt(info, 2);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void SVG_FECOMPONENTTRANSFER_TYPE_DISCRETEConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    v8SetReturnValueInt(info, 3);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void SVG_FECOMPONENTTRANSFER_TYPE_LINEARConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    v8SetReturnValueInt(info, 4);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void SVG_FECOMPONENTTRANSFER_TYPE_GAMMAConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    v8SetReturnValueInt(info, 5);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void typeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGComponentTransferFunctionElement* impl = V8SVGComponentTransferFunctionElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->type()), impl);
}

static void typeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGComponentTransferFunctionElementV8Internal::typeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void tableValuesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGComponentTransferFunctionElement* impl = V8SVGComponentTransferFunctionElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->tableValues()), impl);
}

static void tableValuesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGComponentTransferFunctionElementV8Internal::tableValuesAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void slopeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGComponentTransferFunctionElement* impl = V8SVGComponentTransferFunctionElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->slope()), impl);
}

static void slopeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGComponentTransferFunctionElementV8Internal::slopeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void interceptAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGComponentTransferFunctionElement* impl = V8SVGComponentTransferFunctionElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->intercept()), impl);
}

static void interceptAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGComponentTransferFunctionElementV8Internal::interceptAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void amplitudeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGComponentTransferFunctionElement* impl = V8SVGComponentTransferFunctionElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->amplitude()), impl);
}

static void amplitudeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGComponentTransferFunctionElementV8Internal::amplitudeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void exponentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGComponentTransferFunctionElement* impl = V8SVGComponentTransferFunctionElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->exponent()), impl);
}

static void exponentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGComponentTransferFunctionElementV8Internal::exponentAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void offsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGComponentTransferFunctionElement* impl = V8SVGComponentTransferFunctionElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->offset()), impl);
}

static void offsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGComponentTransferFunctionElementV8Internal::offsetAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace SVGComponentTransferFunctionElementV8Internal

static void installV8SVGComponentTransferFunctionElementTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGComponentTransferFunctionElement", V8SVGElement::domTemplate(isolate), V8SVGComponentTransferFunctionElement::internalFieldCount,
        0, 0,
        0, 0,
        0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"type", SVGComponentTransferFunctionElementV8Internal::typeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"tableValues", SVGComponentTransferFunctionElementV8Internal::tableValuesAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"slope", SVGComponentTransferFunctionElementV8Internal::slopeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"intercept", SVGComponentTransferFunctionElementV8Internal::interceptAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"amplitude", SVGComponentTransferFunctionElementV8Internal::amplitudeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"exponent", SVGComponentTransferFunctionElementV8Internal::exponentAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"offset", SVGComponentTransferFunctionElementV8Internal::offsetAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    V8DOMConfiguration::installConstantWithGetter(isolate, functionTemplate, prototypeTemplate, "SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN", SVGComponentTransferFunctionElementV8Internal::SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWNConstantGetterCallback);
    V8DOMConfiguration::installConstantWithGetter(isolate, functionTemplate, prototypeTemplate, "SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY", SVGComponentTransferFunctionElementV8Internal::SVG_FECOMPONENTTRANSFER_TYPE_IDENTITYConstantGetterCallback);
    V8DOMConfiguration::installConstantWithGetter(isolate, functionTemplate, prototypeTemplate, "SVG_FECOMPONENTTRANSFER_TYPE_TABLE", SVGComponentTransferFunctionElementV8Internal::SVG_FECOMPONENTTRANSFER_TYPE_TABLEConstantGetterCallback);
    V8DOMConfiguration::installConstantWithGetter(isolate, functionTemplate, prototypeTemplate, "SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE", SVGComponentTransferFunctionElementV8Internal::SVG_FECOMPONENTTRANSFER_TYPE_DISCRETEConstantGetterCallback);
    V8DOMConfiguration::installConstantWithGetter(isolate, functionTemplate, prototypeTemplate, "SVG_FECOMPONENTTRANSFER_TYPE_LINEAR", SVGComponentTransferFunctionElementV8Internal::SVG_FECOMPONENTTRANSFER_TYPE_LINEARConstantGetterCallback);
    V8DOMConfiguration::installConstantWithGetter(isolate, functionTemplate, prototypeTemplate, "SVG_FECOMPONENTTRANSFER_TYPE_GAMMA", SVGComponentTransferFunctionElementV8Internal::SVG_FECOMPONENTTRANSFER_TYPE_GAMMAConstantGetterCallback);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8SVGComponentTransferFunctionElement::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGComponentTransferFunctionElementTemplate);
}

bool V8SVGComponentTransferFunctionElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGComponentTransferFunctionElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGComponentTransferFunctionElement* V8SVGComponentTransferFunctionElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8SVGComponentTransferFunctionElement::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGComponentTransferFunctionElement>()->ref();
#endif
}

void V8SVGComponentTransferFunctionElement::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGComponentTransferFunctionElement>()->deref();
#endif
}

} // namespace blink
