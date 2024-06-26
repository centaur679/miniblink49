// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SVGPreserveAspectRatio.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8SVGElement.h"
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
const WrapperTypeInfo V8SVGPreserveAspectRatio::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGPreserveAspectRatio::domTemplate, V8SVGPreserveAspectRatio::refObject, V8SVGPreserveAspectRatio::derefObject, V8SVGPreserveAspectRatio::trace, 0, V8SVGPreserveAspectRatio::visitDOMWrapper, V8SVGPreserveAspectRatio::preparePrototypeObject, V8SVGPreserveAspectRatio::installConditionallyEnabledProperties, "SVGPreserveAspectRatio", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGPreserveAspectRatioTearOff.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGPreserveAspectRatioTearOff::s_wrapperTypeInfo = V8SVGPreserveAspectRatio::wrapperTypeInfo;

namespace SVGPreserveAspectRatioTearOffV8Internal {

static void alignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGPreserveAspectRatioTearOff* impl = V8SVGPreserveAspectRatio::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->align());
}

static void alignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGPreserveAspectRatioTearOffV8Internal::alignAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void alignAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "align", "SVGPreserveAspectRatio", holder, info.GetIsolate());
    SVGPreserveAspectRatioTearOff* impl = V8SVGPreserveAspectRatio::toImpl(holder);
    unsigned cppValue = toUInt16(info.GetIsolate(), v8Value, NormalConversion, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setAlign(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void alignAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    SVGPreserveAspectRatioTearOffV8Internal::alignAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void meetOrSliceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGPreserveAspectRatioTearOff* impl = V8SVGPreserveAspectRatio::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->meetOrSlice());
}

static void meetOrSliceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGPreserveAspectRatioTearOffV8Internal::meetOrSliceAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void meetOrSliceAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "meetOrSlice", "SVGPreserveAspectRatio", holder, info.GetIsolate());
    SVGPreserveAspectRatioTearOff* impl = V8SVGPreserveAspectRatio::toImpl(holder);
    unsigned cppValue = toUInt16(info.GetIsolate(), v8Value, NormalConversion, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setMeetOrSlice(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void meetOrSliceAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    SVGPreserveAspectRatioTearOffV8Internal::meetOrSliceAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace SVGPreserveAspectRatioTearOffV8Internal

void V8SVGPreserveAspectRatio::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    SVGPreserveAspectRatioTearOff* impl = scriptWrappable->toImpl<SVGPreserveAspectRatioTearOff>();
    v8::Local<v8::Object> creationContext = v8::Local<v8::Object>::New(isolate, wrapper);
    V8WrapperInstantiationScope scope(creationContext, isolate);
    SVGElement* contextElement = impl->contextElement();
    if (contextElement) {
        if (DOMDataStore::containsWrapper(contextElement, isolate))
            DOMDataStore::setWrapperReference(wrapper, contextElement, isolate);
    }
}

static const V8DOMConfiguration::AccessorConfiguration V8SVGPreserveAspectRatioAccessors[] = {
    {"align", SVGPreserveAspectRatioTearOffV8Internal::alignAttributeGetterCallback, SVGPreserveAspectRatioTearOffV8Internal::alignAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"meetOrSlice", SVGPreserveAspectRatioTearOffV8Internal::meetOrSliceAttributeGetterCallback, SVGPreserveAspectRatioTearOffV8Internal::meetOrSliceAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8SVGPreserveAspectRatioTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::svg1DOMEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGPreserveAspectRatio", v8::Local<v8::FunctionTemplate>(), V8SVGPreserveAspectRatio::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGPreserveAspectRatio", v8::Local<v8::FunctionTemplate>(), V8SVGPreserveAspectRatio::internalFieldCount,
            0, 0,
            V8SVGPreserveAspectRatioAccessors, WTF_ARRAY_LENGTH(V8SVGPreserveAspectRatioAccessors),
            0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    static const V8DOMConfiguration::ConstantConfiguration V8SVGPreserveAspectRatioConstants[] = {
        {"SVG_PRESERVEASPECTRATIO_UNKNOWN", 0, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_PRESERVEASPECTRATIO_NONE", 1, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_PRESERVEASPECTRATIO_XMINYMIN", 2, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_PRESERVEASPECTRATIO_XMIDYMIN", 3, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_PRESERVEASPECTRATIO_XMAXYMIN", 4, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_PRESERVEASPECTRATIO_XMINYMID", 5, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_PRESERVEASPECTRATIO_XMIDYMID", 6, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_PRESERVEASPECTRATIO_XMAXYMID", 7, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_PRESERVEASPECTRATIO_XMINYMAX", 8, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_PRESERVEASPECTRATIO_XMIDYMAX", 9, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_PRESERVEASPECTRATIO_XMAXYMAX", 10, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_MEETORSLICE_UNKNOWN", 0, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_MEETORSLICE_MEET", 1, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_MEETORSLICE_SLICE", 2, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
    };
    V8DOMConfiguration::installConstants(isolate, functionTemplate, prototypeTemplate, V8SVGPreserveAspectRatioConstants, WTF_ARRAY_LENGTH(V8SVGPreserveAspectRatioConstants));
    static_assert(0 == SVGPreserveAspectRatioTearOff::SVG_PRESERVEASPECTRATIO_UNKNOWN, "the value of SVGPreserveAspectRatioTearOff_SVG_PRESERVEASPECTRATIO_UNKNOWN does not match with implementation");
    static_assert(1 == SVGPreserveAspectRatioTearOff::SVG_PRESERVEASPECTRATIO_NONE, "the value of SVGPreserveAspectRatioTearOff_SVG_PRESERVEASPECTRATIO_NONE does not match with implementation");
    static_assert(2 == SVGPreserveAspectRatioTearOff::SVG_PRESERVEASPECTRATIO_XMINYMIN, "the value of SVGPreserveAspectRatioTearOff_SVG_PRESERVEASPECTRATIO_XMINYMIN does not match with implementation");
    static_assert(3 == SVGPreserveAspectRatioTearOff::SVG_PRESERVEASPECTRATIO_XMIDYMIN, "the value of SVGPreserveAspectRatioTearOff_SVG_PRESERVEASPECTRATIO_XMIDYMIN does not match with implementation");
    static_assert(4 == SVGPreserveAspectRatioTearOff::SVG_PRESERVEASPECTRATIO_XMAXYMIN, "the value of SVGPreserveAspectRatioTearOff_SVG_PRESERVEASPECTRATIO_XMAXYMIN does not match with implementation");
    static_assert(5 == SVGPreserveAspectRatioTearOff::SVG_PRESERVEASPECTRATIO_XMINYMID, "the value of SVGPreserveAspectRatioTearOff_SVG_PRESERVEASPECTRATIO_XMINYMID does not match with implementation");
    static_assert(6 == SVGPreserveAspectRatioTearOff::SVG_PRESERVEASPECTRATIO_XMIDYMID, "the value of SVGPreserveAspectRatioTearOff_SVG_PRESERVEASPECTRATIO_XMIDYMID does not match with implementation");
    static_assert(7 == SVGPreserveAspectRatioTearOff::SVG_PRESERVEASPECTRATIO_XMAXYMID, "the value of SVGPreserveAspectRatioTearOff_SVG_PRESERVEASPECTRATIO_XMAXYMID does not match with implementation");
    static_assert(8 == SVGPreserveAspectRatioTearOff::SVG_PRESERVEASPECTRATIO_XMINYMAX, "the value of SVGPreserveAspectRatioTearOff_SVG_PRESERVEASPECTRATIO_XMINYMAX does not match with implementation");
    static_assert(9 == SVGPreserveAspectRatioTearOff::SVG_PRESERVEASPECTRATIO_XMIDYMAX, "the value of SVGPreserveAspectRatioTearOff_SVG_PRESERVEASPECTRATIO_XMIDYMAX does not match with implementation");
    static_assert(10 == SVGPreserveAspectRatioTearOff::SVG_PRESERVEASPECTRATIO_XMAXYMAX, "the value of SVGPreserveAspectRatioTearOff_SVG_PRESERVEASPECTRATIO_XMAXYMAX does not match with implementation");
    static_assert(0 == SVGPreserveAspectRatioTearOff::SVG_MEETORSLICE_UNKNOWN, "the value of SVGPreserveAspectRatioTearOff_SVG_MEETORSLICE_UNKNOWN does not match with implementation");
    static_assert(1 == SVGPreserveAspectRatioTearOff::SVG_MEETORSLICE_MEET, "the value of SVGPreserveAspectRatioTearOff_SVG_MEETORSLICE_MEET does not match with implementation");
    static_assert(2 == SVGPreserveAspectRatioTearOff::SVG_MEETORSLICE_SLICE, "the value of SVGPreserveAspectRatioTearOff_SVG_MEETORSLICE_SLICE does not match with implementation");

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8SVGPreserveAspectRatio::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGPreserveAspectRatioTemplate);
}

bool V8SVGPreserveAspectRatio::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGPreserveAspectRatio::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGPreserveAspectRatioTearOff* V8SVGPreserveAspectRatio::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8SVGPreserveAspectRatio::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGPreserveAspectRatioTearOff>()->ref();
#endif
}

void V8SVGPreserveAspectRatio::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGPreserveAspectRatioTearOff>()->deref();
#endif
}

} // namespace blink
