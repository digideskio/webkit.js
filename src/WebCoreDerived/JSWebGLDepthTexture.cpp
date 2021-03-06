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

#if ENABLE(WEBGL)

#include "JSWebGLDepthTexture.h"

#include "WebGLDepthTexture.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table for prototype */

static const HashTableValue JSWebGLDepthTexturePrototypeTableValues[] =
{
    { "UNSIGNED_INT_24_8_WEBGL", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLDepthTextureUNSIGNED_INT_24_8_WEBGL), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWebGLDepthTexturePrototypeTable = { 2, 1, JSWebGLDepthTexturePrototypeTableValues, 0 };
const ClassInfo JSWebGLDepthTexturePrototype::s_info = { "WebGLDepthTexturePrototype", &Base::s_info, &JSWebGLDepthTexturePrototypeTable, 0, CREATE_METHOD_TABLE(JSWebGLDepthTexturePrototype) };

JSObject* JSWebGLDepthTexturePrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebGLDepthTexture>(vm, globalObject);
}

bool JSWebGLDepthTexturePrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWebGLDepthTexturePrototype* thisObject = jsCast<JSWebGLDepthTexturePrototype*>(object);
    return getStaticValueSlot<JSWebGLDepthTexturePrototype, JSObject>(exec, JSWebGLDepthTexturePrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSWebGLDepthTexture::s_info = { "WebGLDepthTexture", &Base::s_info, 0, 0 , CREATE_METHOD_TABLE(JSWebGLDepthTexture) };

JSWebGLDepthTexture::JSWebGLDepthTexture(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebGLDepthTexture> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSWebGLDepthTexture::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSWebGLDepthTexture::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSWebGLDepthTexturePrototype::create(vm, globalObject, JSWebGLDepthTexturePrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSWebGLDepthTexture::destroy(JSC::JSCell* cell)
{
    JSWebGLDepthTexture* thisObject = static_cast<JSWebGLDepthTexture*>(cell);
    thisObject->JSWebGLDepthTexture::~JSWebGLDepthTexture();
}

JSWebGLDepthTexture::~JSWebGLDepthTexture()
{
    releaseImplIfNotNull();
}

// Constant getters

EncodedJSValue jsWebGLDepthTextureUNSIGNED_INT_24_8_WEBGL(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0x84FA)));
}

static inline bool isObservable(JSWebGLDepthTexture* jsWebGLDepthTexture)
{
    if (jsWebGLDepthTexture->hasCustomProperties())
        return true;
    return false;
}

bool JSWebGLDepthTextureOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSWebGLDepthTexture* jsWebGLDepthTexture = jsCast<JSWebGLDepthTexture*>(handle.get().asCell());
    if (!isObservable(jsWebGLDepthTexture))
        return false;
    WebGLRenderingContext* root = jsWebGLDepthTexture->impl().context();
    return visitor.containsOpaqueRoot(root);
}

void JSWebGLDepthTextureOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSWebGLDepthTexture* jsWebGLDepthTexture = jsCast<JSWebGLDepthTexture*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsWebGLDepthTexture->impl(), jsWebGLDepthTexture);
    jsWebGLDepthTexture->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7WebGLDepthTexture@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore17WebGLDepthTextureE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WebGLDepthTexture* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWebGLDepthTexture>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7WebGLDepthTexture@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore17WebGLDepthTextureE[2];
#if COMPILER(CLANG)
    // If this fails WebGLDepthTexture does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(WebGLDepthTexture), WebGLDepthTexture_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // WebGLDepthTexture has subclasses. If WebGLDepthTexture has subclasses that get passed
    // to toJS() we currently require WebGLDepthTexture you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<WebGLDepthTexture>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSWebGLDepthTexture>(exec, globalObject, impl);
}

WebGLDepthTexture* toWebGLDepthTexture(JSC::JSValue value)
{
    return value.inherits(JSWebGLDepthTexture::info()) ? &jsCast<JSWebGLDepthTexture*>(value)->impl() : 0;
}

}

#endif // ENABLE(WEBGL)
