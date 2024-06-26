// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SpeechGrammarList.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8SpeechGrammar.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
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
const WrapperTypeInfo V8SpeechGrammarList::wrapperTypeInfo = { gin::kEmbedderBlink, V8SpeechGrammarList::domTemplate, V8SpeechGrammarList::refObject, V8SpeechGrammarList::derefObject, V8SpeechGrammarList::trace, 0, 0, V8SpeechGrammarList::preparePrototypeObject, V8SpeechGrammarList::installConditionallyEnabledProperties, "SpeechGrammarList", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SpeechGrammarList.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SpeechGrammarList::s_wrapperTypeInfo = V8SpeechGrammarList::wrapperTypeInfo;

namespace SpeechGrammarListV8Internal {

static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SpeechGrammarList* impl = V8SpeechGrammarList::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->length());
}

static void lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SpeechGrammarListV8Internal::lengthAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void itemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "item", "SpeechGrammarList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SpeechGrammarList* impl = V8SpeechGrammarList::toImpl(info.Holder());
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
    SpeechGrammarListV8Internal::itemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void addFromUriMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "addFromUri", "SpeechGrammarList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SpeechGrammarList* impl = V8SpeechGrammarList::toImpl(info.Holder());
    V8StringResource<> src;
    float weight;
    {
        src = info[0];
        if (!src.prepare())
            return;
        if (UNLIKELY(info.Length() <= 1)) {
            ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
            impl->addFromUri(executionContext, src);
            return;
        }
        weight = toRestrictedFloat(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    impl->addFromUri(executionContext, src, weight);
}

static void addFromUriMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SpeechGrammarListV8Internal::addFromUriMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void addFromStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "addFromString", "SpeechGrammarList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SpeechGrammarList* impl = V8SpeechGrammarList::toImpl(info.Holder());
    V8StringResource<> string;
    float weight;
    {
        string = info[0];
        if (!string.prepare())
            return;
        if (UNLIKELY(info.Length() <= 1)) {
            impl->addFromString(string);
            return;
        }
        weight = toRestrictedFloat(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->addFromString(string, weight);
}

static void addFromStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SpeechGrammarListV8Internal::addFromStringMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    RawPtr<SpeechGrammarList> impl = SpeechGrammarList::create();
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8SpeechGrammarList::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    SpeechGrammarList* impl = V8SpeechGrammarList::toImpl(info.Holder());
    RawPtr<SpeechGrammar> result = impl->item(index);
    if (!result)
        return;
    v8SetReturnValueFast(info, WTF::getPtr(result.release()), impl);
}

static void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMIndexedProperty");
    SpeechGrammarListV8Internal::indexedPropertyGetter(index, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace SpeechGrammarListV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8SpeechGrammarListAccessors[] = {
    {"length", SpeechGrammarListV8Internal::lengthAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8SpeechGrammarListMethods[] = {
    {"item", SpeechGrammarListV8Internal::itemMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"addFromUri", SpeechGrammarListV8Internal::addFromUriMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"addFromString", SpeechGrammarListV8Internal::addFromStringMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

void V8SpeechGrammarList::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("SpeechGrammarList"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    SpeechGrammarListV8Internal::constructor(info);
}

static void installV8SpeechGrammarListTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SpeechGrammarList", v8::Local<v8::FunctionTemplate>(), V8SpeechGrammarList::internalFieldCount,
        0, 0,
        V8SpeechGrammarListAccessors, WTF_ARRAY_LENGTH(V8SpeechGrammarListAccessors),
        V8SpeechGrammarListMethods, WTF_ARRAY_LENGTH(V8SpeechGrammarListMethods));
    functionTemplate->SetCallHandler(V8SpeechGrammarList::constructorCallback);
    functionTemplate->SetLength(0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    {
        v8::IndexedPropertyHandlerConfiguration config(SpeechGrammarListV8Internal::indexedPropertyGetterCallback, 0, 0, 0, indexedPropertyEnumerator<SpeechGrammarList>);
        functionTemplate->InstanceTemplate()->SetHandler(config);
    }

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8SpeechGrammarList::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SpeechGrammarListTemplate);
}

bool V8SpeechGrammarList::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SpeechGrammarList::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SpeechGrammarList* V8SpeechGrammarList::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8SpeechGrammarList::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8SpeechGrammarList::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
