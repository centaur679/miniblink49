// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8OESVertexArrayObject.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8GCController.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8WebGLVertexArrayObjectOES.h"
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
const WrapperTypeInfo V8OESVertexArrayObject::wrapperTypeInfo = { gin::kEmbedderBlink, V8OESVertexArrayObject::domTemplate, V8OESVertexArrayObject::refObject, V8OESVertexArrayObject::derefObject, V8OESVertexArrayObject::trace, 0, V8OESVertexArrayObject::visitDOMWrapper, V8OESVertexArrayObject::preparePrototypeObject, V8OESVertexArrayObject::installConditionallyEnabledProperties, "OESVertexArrayObject", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in OESVertexArrayObject.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& OESVertexArrayObject::s_wrapperTypeInfo = V8OESVertexArrayObject::wrapperTypeInfo;

namespace OESVertexArrayObjectV8Internal {

static void createVertexArrayOESMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    OESVertexArrayObject* impl = V8OESVertexArrayObject::toImpl(info.Holder());
    v8SetReturnValue(info, impl->createVertexArrayOES());
}

static void createVertexArrayOESMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    OESVertexArrayObjectV8Internal::createVertexArrayOESMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void deleteVertexArrayOESMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    OESVertexArrayObject* impl = V8OESVertexArrayObject::toImpl(info.Holder());
    WebGLVertexArrayObjectOES* arrayObject;
    {
        arrayObject = V8WebGLVertexArrayObjectOES::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!arrayObject && !isUndefinedOrNull(info[0])) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("deleteVertexArrayOES", "OESVertexArrayObject", "parameter 1 is not of type 'WebGLVertexArrayObjectOES'."));
            return;
        }
    }
    impl->deleteVertexArrayOES(arrayObject);
}

static void deleteVertexArrayOESMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    OESVertexArrayObjectV8Internal::deleteVertexArrayOESMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void isVertexArrayOESMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    OESVertexArrayObject* impl = V8OESVertexArrayObject::toImpl(info.Holder());
    WebGLVertexArrayObjectOES* arrayObject;
    {
        arrayObject = V8WebGLVertexArrayObjectOES::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!arrayObject && !isUndefinedOrNull(info[0])) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("isVertexArrayOES", "OESVertexArrayObject", "parameter 1 is not of type 'WebGLVertexArrayObjectOES'."));
            return;
        }
    }
    v8SetReturnValueBool(info, impl->isVertexArrayOES(arrayObject));
}

static void isVertexArrayOESMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    OESVertexArrayObjectV8Internal::isVertexArrayOESMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void bindVertexArrayOESMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    OESVertexArrayObject* impl = V8OESVertexArrayObject::toImpl(info.Holder());
    WebGLVertexArrayObjectOES* arrayObject;
    {
        arrayObject = V8WebGLVertexArrayObjectOES::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!arrayObject && !isUndefinedOrNull(info[0])) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("bindVertexArrayOES", "OESVertexArrayObject", "parameter 1 is not of type 'WebGLVertexArrayObjectOES'."));
            return;
        }
    }
    impl->bindVertexArrayOES(arrayObject);
}

static void bindVertexArrayOESMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    OESVertexArrayObjectV8Internal::bindVertexArrayOESMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace OESVertexArrayObjectV8Internal

void V8OESVertexArrayObject::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    OESVertexArrayObject* impl = scriptWrappable->toImpl<OESVertexArrayObject>();
    // The canvas() method may return a reference or a pointer.
    if (Node* owner = WTF::getPtr(impl->canvas())) {
        Node* root = V8GCController::opaqueRootForGC(isolate, owner);
        isolate->SetReferenceFromGroup(v8::UniqueId(reinterpret_cast<intptr_t>(root)), wrapper);
        return;
    }
}

static const V8DOMConfiguration::MethodConfiguration V8OESVertexArrayObjectMethods[] = {
    {"createVertexArrayOES", OESVertexArrayObjectV8Internal::createVertexArrayOESMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"deleteVertexArrayOES", OESVertexArrayObjectV8Internal::deleteVertexArrayOESMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"isVertexArrayOES", OESVertexArrayObjectV8Internal::isVertexArrayOESMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"bindVertexArrayOES", OESVertexArrayObjectV8Internal::bindVertexArrayOESMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8OESVertexArrayObjectTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "OESVertexArrayObject", v8::Local<v8::FunctionTemplate>(), V8OESVertexArrayObject::internalFieldCount,
        0, 0,
        0, 0,
        V8OESVertexArrayObjectMethods, WTF_ARRAY_LENGTH(V8OESVertexArrayObjectMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    static const V8DOMConfiguration::ConstantConfiguration V8OESVertexArrayObjectConstants[] = {
        {"VERTEX_ARRAY_BINDING_OES", 0x85B5, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
    };
    V8DOMConfiguration::installConstants(isolate, functionTemplate, prototypeTemplate, V8OESVertexArrayObjectConstants, WTF_ARRAY_LENGTH(V8OESVertexArrayObjectConstants));

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8OESVertexArrayObject::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8OESVertexArrayObjectTemplate);
}

bool V8OESVertexArrayObject::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8OESVertexArrayObject::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

OESVertexArrayObject* V8OESVertexArrayObject::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8OESVertexArrayObject::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<OESVertexArrayObject>()->ref();
#endif
}

void V8OESVertexArrayObject::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<OESVertexArrayObject>()->deref();
#endif
}

} // namespace blink
