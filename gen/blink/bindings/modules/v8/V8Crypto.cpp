// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8Crypto.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8ArrayBufferView.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8SubtleCrypto.h"
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
const WrapperTypeInfo V8Crypto::wrapperTypeInfo = { gin::kEmbedderBlink, V8Crypto::domTemplate, V8Crypto::refObject, V8Crypto::derefObject, V8Crypto::trace, 0, 0, V8Crypto::preparePrototypeObject, V8Crypto::installConditionallyEnabledProperties, "Crypto", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Crypto.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Crypto::s_wrapperTypeInfo = V8Crypto::wrapperTypeInfo;

namespace CryptoV8Internal {

static void subtleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
//     v8::Local<v8::Object> holder = info.Holder();
//     Crypto* impl = V8Crypto::toImpl(holder);
//     RawPtr<SubtleCrypto> cppValue(impl->subtle());
//     if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
//         return;
//     v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
//     if (!v8Value.IsEmpty()) {
//         V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "subtle"), v8Value);
//         v8SetReturnValue(info, v8Value);
//     }
    OutputDebugStringA("subtleAttributeGetter not implemented\n");
}

static void subtleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    CryptoV8Internal::subtleAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getRandomValuesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getRandomValues", "Crypto", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Crypto* impl = V8Crypto::toImpl(info.Holder());
    DOMArrayBufferView* array;
    {
        array = info[0]->IsArrayBufferView() ? V8ArrayBufferView::toImpl(v8::Local<v8::ArrayBufferView>::Cast(info[0])) : 0;
    }
    RefPtr<DOMArrayBufferView> result = impl->getRandomValues(array, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void getRandomValuesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::CryptoGetRandomValues);
    CryptoV8Internal::getRandomValuesMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace CryptoV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8CryptoAccessors[] = {
    {"subtle", CryptoV8Internal::subtleAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8CryptoMethods[] = {
    {"getRandomValues", CryptoV8Internal::getRandomValuesMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8CryptoTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "Crypto", v8::Local<v8::FunctionTemplate>(), V8Crypto::internalFieldCount,
        0, 0,
        V8CryptoAccessors, WTF_ARRAY_LENGTH(V8CryptoAccessors),
        V8CryptoMethods, WTF_ARRAY_LENGTH(V8CryptoMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8Crypto::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8CryptoTemplate);
}

bool V8Crypto::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Crypto::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Crypto* V8Crypto::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8Crypto::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8Crypto::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
