// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SVGPathSegArcAbs.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
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
const WrapperTypeInfo V8SVGPathSegArcAbs::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGPathSegArcAbs::domTemplate, V8SVGPathSegArcAbs::refObject, V8SVGPathSegArcAbs::derefObject, V8SVGPathSegArcAbs::trace, 0, 0, V8SVGPathSegArcAbs::preparePrototypeObject, V8SVGPathSegArcAbs::installConditionallyEnabledProperties, "SVGPathSegArcAbs", &V8SVGPathSeg::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGPathSegArcAbs.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGPathSegArcAbs::s_wrapperTypeInfo = V8SVGPathSegArcAbs::wrapperTypeInfo;

namespace SVGPathSegArcAbsV8Internal {

static void xAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGPathSegArcAbs* impl = V8SVGPathSegArcAbs::toImpl(holder);
    v8SetReturnValue(info, impl->x());
}

static void xAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGPathSegArcAbsV8Internal::xAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void xAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "x", "SVGPathSegArcAbs", holder, info.GetIsolate());
    SVGPathSegArcAbs* impl = V8SVGPathSegArcAbs::toImpl(holder);
    float cppValue = toRestrictedFloat(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setX(cppValue);
}

static void xAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    SVGPathSegArcAbsV8Internal::xAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void yAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGPathSegArcAbs* impl = V8SVGPathSegArcAbs::toImpl(holder);
    v8SetReturnValue(info, impl->y());
}

static void yAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGPathSegArcAbsV8Internal::yAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void yAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "y", "SVGPathSegArcAbs", holder, info.GetIsolate());
    SVGPathSegArcAbs* impl = V8SVGPathSegArcAbs::toImpl(holder);
    float cppValue = toRestrictedFloat(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setY(cppValue);
}

static void yAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    SVGPathSegArcAbsV8Internal::yAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void r1AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGPathSegArcAbs* impl = V8SVGPathSegArcAbs::toImpl(holder);
    v8SetReturnValue(info, impl->r1());
}

static void r1AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGPathSegArcAbsV8Internal::r1AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void r1AttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "r1", "SVGPathSegArcAbs", holder, info.GetIsolate());
    SVGPathSegArcAbs* impl = V8SVGPathSegArcAbs::toImpl(holder);
    float cppValue = toRestrictedFloat(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setR1(cppValue);
}

static void r1AttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    SVGPathSegArcAbsV8Internal::r1AttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void r2AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGPathSegArcAbs* impl = V8SVGPathSegArcAbs::toImpl(holder);
    v8SetReturnValue(info, impl->r2());
}

static void r2AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGPathSegArcAbsV8Internal::r2AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void r2AttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "r2", "SVGPathSegArcAbs", holder, info.GetIsolate());
    SVGPathSegArcAbs* impl = V8SVGPathSegArcAbs::toImpl(holder);
    float cppValue = toRestrictedFloat(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setR2(cppValue);
}

static void r2AttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    SVGPathSegArcAbsV8Internal::r2AttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void angleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGPathSegArcAbs* impl = V8SVGPathSegArcAbs::toImpl(holder);
    v8SetReturnValue(info, impl->angle());
}

static void angleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGPathSegArcAbsV8Internal::angleAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void angleAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "angle", "SVGPathSegArcAbs", holder, info.GetIsolate());
    SVGPathSegArcAbs* impl = V8SVGPathSegArcAbs::toImpl(holder);
    float cppValue = toRestrictedFloat(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setAngle(cppValue);
}

static void angleAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    SVGPathSegArcAbsV8Internal::angleAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void largeArcFlagAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGPathSegArcAbs* impl = V8SVGPathSegArcAbs::toImpl(holder);
    v8SetReturnValueBool(info, impl->largeArcFlag());
}

static void largeArcFlagAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGPathSegArcAbsV8Internal::largeArcFlagAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void largeArcFlagAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "largeArcFlag", "SVGPathSegArcAbs", holder, info.GetIsolate());
    SVGPathSegArcAbs* impl = V8SVGPathSegArcAbs::toImpl(holder);
    bool cppValue = toBoolean(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setLargeArcFlag(cppValue);
}

static void largeArcFlagAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    SVGPathSegArcAbsV8Internal::largeArcFlagAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void sweepFlagAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGPathSegArcAbs* impl = V8SVGPathSegArcAbs::toImpl(holder);
    v8SetReturnValueBool(info, impl->sweepFlag());
}

static void sweepFlagAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGPathSegArcAbsV8Internal::sweepFlagAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void sweepFlagAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "sweepFlag", "SVGPathSegArcAbs", holder, info.GetIsolate());
    SVGPathSegArcAbs* impl = V8SVGPathSegArcAbs::toImpl(holder);
    bool cppValue = toBoolean(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setSweepFlag(cppValue);
}

static void sweepFlagAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    SVGPathSegArcAbsV8Internal::sweepFlagAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace SVGPathSegArcAbsV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8SVGPathSegArcAbsAccessors[] = {
    {"x", SVGPathSegArcAbsV8Internal::xAttributeGetterCallback, SVGPathSegArcAbsV8Internal::xAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"y", SVGPathSegArcAbsV8Internal::yAttributeGetterCallback, SVGPathSegArcAbsV8Internal::yAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"r1", SVGPathSegArcAbsV8Internal::r1AttributeGetterCallback, SVGPathSegArcAbsV8Internal::r1AttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"r2", SVGPathSegArcAbsV8Internal::r2AttributeGetterCallback, SVGPathSegArcAbsV8Internal::r2AttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"angle", SVGPathSegArcAbsV8Internal::angleAttributeGetterCallback, SVGPathSegArcAbsV8Internal::angleAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"largeArcFlag", SVGPathSegArcAbsV8Internal::largeArcFlagAttributeGetterCallback, SVGPathSegArcAbsV8Internal::largeArcFlagAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"sweepFlag", SVGPathSegArcAbsV8Internal::sweepFlagAttributeGetterCallback, SVGPathSegArcAbsV8Internal::sweepFlagAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8SVGPathSegArcAbsTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::svg1DOMEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGPathSegArcAbs", V8SVGPathSeg::domTemplate(isolate), V8SVGPathSegArcAbs::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGPathSegArcAbs", V8SVGPathSeg::domTemplate(isolate), V8SVGPathSegArcAbs::internalFieldCount,
            0, 0,
            V8SVGPathSegArcAbsAccessors, WTF_ARRAY_LENGTH(V8SVGPathSegArcAbsAccessors),
            0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8SVGPathSegArcAbs::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGPathSegArcAbsTemplate);
}

bool V8SVGPathSegArcAbs::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGPathSegArcAbs::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGPathSegArcAbs* V8SVGPathSegArcAbs::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8SVGPathSegArcAbs::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGPathSegArcAbs>()->ref();
#endif
}

void V8SVGPathSegArcAbs::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGPathSegArcAbs>()->deref();
#endif
}

} // namespace blink
