/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(WEB_AUDIO)

#include "JSScriptProcessorNode.h"

#include "EventListener.h"
#include "JSEventListener.h"
#include "ScriptProcessorNode.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSScriptProcessorNodeTableValues[] =
{
    { "onaudioprocess", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScriptProcessorNodeOnaudioprocess), (intptr_t)setJSScriptProcessorNodeOnaudioprocess },
    { "bufferSize", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScriptProcessorNodeBufferSize), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScriptProcessorNodeConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSScriptProcessorNodeTable = { 8, 7, JSScriptProcessorNodeTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSScriptProcessorNodeConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSScriptProcessorNodeConstructorTable = { 1, 0, JSScriptProcessorNodeConstructorTableValues, 0 };
const ClassInfo JSScriptProcessorNodeConstructor::s_info = { "ScriptProcessorNodeConstructor", &Base::s_info, &JSScriptProcessorNodeConstructorTable, 0, CREATE_METHOD_TABLE(JSScriptProcessorNodeConstructor) };

JSScriptProcessorNodeConstructor::JSScriptProcessorNodeConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSScriptProcessorNodeConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSScriptProcessorNodePrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSScriptProcessorNodeConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSScriptProcessorNodeConstructor, JSDOMWrapper>(exec, JSScriptProcessorNodeConstructorTable, jsCast<JSScriptProcessorNodeConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSScriptProcessorNodePrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSScriptProcessorNodePrototypeTable = { 1, 0, JSScriptProcessorNodePrototypeTableValues, 0 };
const ClassInfo JSScriptProcessorNodePrototype::s_info = { "ScriptProcessorNodePrototype", &Base::s_info, &JSScriptProcessorNodePrototypeTable, 0, CREATE_METHOD_TABLE(JSScriptProcessorNodePrototype) };

JSObject* JSScriptProcessorNodePrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSScriptProcessorNode>(vm, globalObject);
}

const ClassInfo JSScriptProcessorNode::s_info = { "ScriptProcessorNode", &Base::s_info, &JSScriptProcessorNodeTable, 0 , CREATE_METHOD_TABLE(JSScriptProcessorNode) };

JSScriptProcessorNode::JSScriptProcessorNode(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<ScriptProcessorNode> impl)
    : JSAudioNode(structure, globalObject, impl)
{
}

void JSScriptProcessorNode::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSScriptProcessorNode::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSScriptProcessorNodePrototype::create(vm, globalObject, JSScriptProcessorNodePrototype::createStructure(vm, globalObject, JSAudioNodePrototype::self(vm, globalObject)));
}

bool JSScriptProcessorNode::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSScriptProcessorNode* thisObject = jsCast<JSScriptProcessorNode*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSScriptProcessorNode, Base>(exec, JSScriptProcessorNodeTable, thisObject, propertyName, slot);
}

EncodedJSValue jsScriptProcessorNodeOnaudioprocess(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSScriptProcessorNode* castedThis = jsDynamicCast<JSScriptProcessorNode*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    ScriptProcessorNode& impl = castedThis->impl();
    if (EventListener* listener = impl.onaudioprocess()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}


EncodedJSValue jsScriptProcessorNodeBufferSize(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSScriptProcessorNode* castedThis = jsDynamicCast<JSScriptProcessorNode*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    ScriptProcessorNode& impl = castedThis->impl();
    JSValue result = jsNumber(impl.bufferSize());
    return JSValue::encode(result);
}


EncodedJSValue jsScriptProcessorNodeConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSScriptProcessorNode* domObject = jsDynamicCast<JSScriptProcessorNode*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSScriptProcessorNode::getConstructor(exec->vm(), domObject->globalObject()));
}

void JSScriptProcessorNode::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSScriptProcessorNode* thisObject = jsCast<JSScriptProcessorNode*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSScriptProcessorNode, Base>(exec, propertyName, value, JSScriptProcessorNodeTable, thisObject, slot);
}

void setJSScriptProcessorNodeOnaudioprocess(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSScriptProcessorNode* castedThis = jsDynamicCast<JSScriptProcessorNode*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    ScriptProcessorNode& impl = castedThis->impl();
    impl.setOnaudioprocess(createJSAttributeEventListener(exec, value, castedThis));
}


JSValue JSScriptProcessorNode::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSScriptProcessorNodeConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7ScriptProcessorNode@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore19ScriptProcessorNodeE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, ScriptProcessorNode* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSScriptProcessorNode>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7ScriptProcessorNode@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore19ScriptProcessorNodeE[2];
#if COMPILER(CLANG)
    // If this fails ScriptProcessorNode does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(ScriptProcessorNode), ScriptProcessorNode_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // ScriptProcessorNode has subclasses. If ScriptProcessorNode has subclasses that get passed
    // to toJS() we currently require ScriptProcessorNode you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<ScriptProcessorNode>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSScriptProcessorNode>(exec, globalObject, impl);
}

ScriptProcessorNode* toScriptProcessorNode(JSC::JSValue value)
{
    return value.inherits(JSScriptProcessorNode::info()) ? &jsCast<JSScriptProcessorNode*>(value)->impl() : 0;
}

}

#endif // ENABLE(WEB_AUDIO)