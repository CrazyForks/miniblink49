// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8TextDecoder.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8ArrayBuffer.h"
#include "bindings/core/v8/V8ArrayBufferView.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/UnionTypesModules.h"
#include "bindings/modules/v8/V8TextDecodeOptions.h"
#include "bindings/modules/v8/V8TextDecoderOptions.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
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
const WrapperTypeInfo V8TextDecoder::wrapperTypeInfo = { gin::kEmbedderBlink, V8TextDecoder::domTemplate, V8TextDecoder::refObject, V8TextDecoder::derefObject, V8TextDecoder::trace, 0, 0, V8TextDecoder::preparePrototypeObject, V8TextDecoder::installConditionallyEnabledProperties, "TextDecoder", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TextDecoder.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& TextDecoder::s_wrapperTypeInfo = V8TextDecoder::wrapperTypeInfo;

namespace TextDecoderV8Internal {

static void encodingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TextDecoder* impl = V8TextDecoder::toImpl(holder);
    v8SetReturnValueString(info, impl->encoding(), info.GetIsolate());
}

static void encodingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TextDecoderV8Internal::encodingAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void fatalAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TextDecoder* impl = V8TextDecoder::toImpl(holder);
    v8SetReturnValueBool(info, impl->fatal());
}

static void fatalAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TextDecoderV8Internal::fatalAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void ignoreBOMAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TextDecoder* impl = V8TextDecoder::toImpl(holder);
    v8SetReturnValueBool(info, impl->ignoreBOM());
}

static void ignoreBOMAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TextDecoderV8Internal::ignoreBOMAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void decodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "decode", "TextDecoder", info.Holder(), info.GetIsolate());
    TextDecoder* impl = V8TextDecoder::toImpl(info.Holder());
    ArrayBufferOrArrayBufferView input;
    TextDecodeOptions options;
    {
        if (UNLIKELY(info.Length() <= 0)) {
            String result = impl->decode(exceptionState);
            if (exceptionState.hadException()) {
                exceptionState.throwIfNeeded();
                return;
            }
            v8SetReturnValueString(info, result, info.GetIsolate());
            return;
        }
        V8ArrayBufferOrArrayBufferView::toImpl(info.GetIsolate(), info[0], input, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('options') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        V8TextDecodeOptions::toImpl(info.GetIsolate(), info[1], options, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    String result = impl->decode(input, options, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueString(info, result, info.GetIsolate());
}

static void decodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::TextDecoderDecode);
    TextDecoderV8Internal::decodeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "TextDecoder", info.Holder(), info.GetIsolate());
    V8StringResource<> label;
    TextDecoderOptions options;
    {
        if (!info[0]->IsUndefined()) {
            label = info[0];
            if (!label.prepare())
                return;
        } else {
            label = String("utf-8");
        }
        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('options') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        V8TextDecoderOptions::toImpl(info.GetIsolate(), info[1], options, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    RawPtr<TextDecoder> impl = TextDecoder::create(label, options, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8TextDecoder::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace TextDecoderV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8TextDecoderAccessors[] = {
    {"encoding", TextDecoderV8Internal::encodingAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"fatal", TextDecoderV8Internal::fatalAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"ignoreBOM", TextDecoderV8Internal::ignoreBOMAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8TextDecoderMethods[] = {
    {"decode", TextDecoderV8Internal::decodeMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

void V8TextDecoder::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "DOMConstructor");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::TextDecoderConstructor);
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("TextDecoder"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    TextDecoderV8Internal::constructor(info);
}

static void installV8TextDecoderTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "TextDecoder", v8::Local<v8::FunctionTemplate>(), V8TextDecoder::internalFieldCount,
        0, 0,
        V8TextDecoderAccessors, WTF_ARRAY_LENGTH(V8TextDecoderAccessors),
        V8TextDecoderMethods, WTF_ARRAY_LENGTH(V8TextDecoderMethods));
    functionTemplate->SetCallHandler(V8TextDecoder::constructorCallback);
    functionTemplate->SetLength(0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8TextDecoder::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8TextDecoderTemplate);
}

bool V8TextDecoder::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8TextDecoder::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

TextDecoder* V8TextDecoder::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8TextDecoder::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8TextDecoder::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
