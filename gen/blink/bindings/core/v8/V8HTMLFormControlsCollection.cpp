// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8HTMLFormControlsCollection.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/UnionTypesCore.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Element.h"
#include "bindings/core/v8/V8GCController.h"
#include "bindings/core/v8/V8Node.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8RadioNodeList.h"
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
const WrapperTypeInfo V8HTMLFormControlsCollection::wrapperTypeInfo = { gin::kEmbedderBlink, V8HTMLFormControlsCollection::domTemplate, V8HTMLFormControlsCollection::refObject, V8HTMLFormControlsCollection::derefObject, V8HTMLFormControlsCollection::trace, 0, V8HTMLFormControlsCollection::visitDOMWrapper, V8HTMLFormControlsCollection::preparePrototypeObject, V8HTMLFormControlsCollection::installConditionallyEnabledProperties, "HTMLFormControlsCollection", &V8HTMLCollection::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLFormControlsCollection.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& HTMLFormControlsCollection::s_wrapperTypeInfo = V8HTMLFormControlsCollection::wrapperTypeInfo;

namespace HTMLFormControlsCollectionV8Internal {

static void namedItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "namedItem", "HTMLFormControlsCollection", 1, info.Length()), info.GetIsolate());
        return;
    }
    HTMLFormControlsCollection* impl = V8HTMLFormControlsCollection::toImpl(info.Holder());
    V8StringResource<> name;
    {
        name = info[0];
        if (!name.prepare())
            return;
    }
    RadioNodeListOrElement result;
    impl->namedGetter(name, result);
    v8SetReturnValue(info, result);
}

static void namedItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HTMLFormControlsCollectionV8Internal::namedItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    HTMLFormControlsCollection* impl = V8HTMLFormControlsCollection::toImpl(info.Holder());
    RefPtrWillBeRawPtr<Node> result = impl->item(index);
    if (!result)
        return;
    v8SetReturnValueFast(info, WTF::getPtr(result.release()), impl);
}

static void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMIndexedProperty");
    HTMLFormControlsCollectionV8Internal::indexedPropertyGetter(index, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedPropertyGetter(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    auto nameString = name.As<v8::String>();
    HTMLFormControlsCollection* impl = V8HTMLFormControlsCollection::toImpl(info.Holder());
    AtomicString propertyName = toCoreAtomicString(nameString);
    RadioNodeListOrElement result;
    impl->namedGetter(propertyName, result);
    if (result.isNull())
        return;
    v8SetReturnValue(info, result);
}

static void namedPropertyGetterCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMNamedProperty");
    HTMLFormControlsCollectionV8Internal::namedPropertyGetter(name, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedPropertyQuery(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Integer>& info)
{
    HTMLFormControlsCollection* impl = V8HTMLFormControlsCollection::toImpl(info.Holder());
    AtomicString propertyName = toCoreAtomicString(name.As<v8::String>());
    v8::String::Utf8Value namedProperty(info.GetIsolate(), name);
    ExceptionState exceptionState(ExceptionState::GetterContext, *namedProperty, "HTMLFormControlsCollection", info.Holder(), info.GetIsolate());
    bool result = impl->namedPropertyQuery(propertyName, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (!result)
        return;
    v8SetReturnValueInt(info, v8::None);
}

static void namedPropertyQueryCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Integer>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMNamedProperty");
    HTMLFormControlsCollectionV8Internal::namedPropertyQuery(name, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedPropertyEnumerator(const v8::PropertyCallbackInfo<v8::Array>& info)
{
    HTMLFormControlsCollection* impl = V8HTMLFormControlsCollection::toImpl(info.Holder());
    Vector<String> names;
    ExceptionState exceptionState(ExceptionState::EnumerationContext, "HTMLFormControlsCollection", info.Holder(), info.GetIsolate());
    impl->namedPropertyEnumerator(names, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    v8::Local<v8::Array> v8names = v8::Array::New(info.GetIsolate(), names.size());
    for (size_t i = 0; i < names.size(); ++i) {
        if (!v8CallBoolean(v8names->Set(info.GetIsolate()->GetCurrentContext(), v8::Integer::New(info.GetIsolate(), i), v8String(info.GetIsolate(), names[i]))))
            return;
    }
    v8SetReturnValue(info, v8names);
}

static void namedPropertyEnumeratorCallback(const v8::PropertyCallbackInfo<v8::Array>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMNamedProperty");
    HTMLFormControlsCollectionV8Internal::namedPropertyEnumerator(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace HTMLFormControlsCollectionV8Internal

void V8HTMLFormControlsCollection::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    HTMLFormControlsCollection* impl = scriptWrappable->toImpl<HTMLFormControlsCollection>();
    // The ownerNode() method may return a reference or a pointer.
    if (Node* owner = WTF::getPtr(impl->ownerNode())) {
        Node* root = V8GCController::opaqueRootForGC(isolate, owner);
        isolate->SetReferenceFromGroup(v8::UniqueId(reinterpret_cast<intptr_t>(root)), wrapper);
        return;
    }
}

static const V8DOMConfiguration::MethodConfiguration V8HTMLFormControlsCollectionMethods[] = {
    {"namedItem", HTMLFormControlsCollectionV8Internal::namedItemMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8HTMLFormControlsCollectionTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "HTMLFormControlsCollection", V8HTMLCollection::domTemplate(isolate), V8HTMLFormControlsCollection::internalFieldCount,
        0, 0,
        0, 0,
        V8HTMLFormControlsCollectionMethods, WTF_ARRAY_LENGTH(V8HTMLFormControlsCollectionMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    {
        v8::IndexedPropertyHandlerConfiguration config(HTMLFormControlsCollectionV8Internal::indexedPropertyGetterCallback, 0, 0, 0, indexedPropertyEnumerator<HTMLFormControlsCollection>);
        functionTemplate->InstanceTemplate()->SetHandler(config);
    }
    {
        v8::NamedPropertyHandlerConfiguration config(HTMLFormControlsCollectionV8Internal::namedPropertyGetterCallback, 0, HTMLFormControlsCollectionV8Internal::namedPropertyQueryCallback, 0, HTMLFormControlsCollectionV8Internal::namedPropertyEnumeratorCallback);
        config.flags = static_cast<v8::PropertyHandlerFlags>(static_cast<int>(config.flags) | static_cast<int>(v8::PropertyHandlerFlags::kOnlyInterceptStrings));
        config.flags = static_cast<v8::PropertyHandlerFlags>(static_cast<int>(config.flags) | static_cast<int>(v8::PropertyHandlerFlags::kNonMasking));
        functionTemplate->InstanceTemplate()->SetHandler(config);
    }

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8HTMLFormControlsCollection::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8HTMLFormControlsCollectionTemplate);
}

bool V8HTMLFormControlsCollection::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8HTMLFormControlsCollection::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLFormControlsCollection* V8HTMLFormControlsCollection::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8HTMLFormControlsCollection::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<HTMLFormControlsCollection>()->ref();
#endif
}

void V8HTMLFormControlsCollection::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<HTMLFormControlsCollection>()->deref();
#endif
}

} // namespace blink
