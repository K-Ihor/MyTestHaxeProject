// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <haxe/ui/backend/PlatformBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformImpl
#include <haxe/ui/backend/PlatformImpl.h>
#endif
#ifndef INCLUDED_openfl_system_Capabilities
#include <openfl/system/Capabilities.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cd6becf6ec623f70_5_new,"haxe.ui.backend.PlatformImpl","new",0xbfd74871,"haxe.ui.backend.PlatformImpl.new","haxe/ui/backend/PlatformImpl.hx",5,0x6a0d169e)
HX_LOCAL_STACK_FRAME(_hx_pos_cd6becf6ec623f70_7_getSystemLocale,"haxe.ui.backend.PlatformImpl","getSystemLocale",0xb45f0030,"haxe.ui.backend.PlatformImpl.getSystemLocale","haxe/ui/backend/PlatformImpl.hx",7,0x6a0d169e)
namespace haxe{
namespace ui{
namespace backend{

void PlatformImpl_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cd6becf6ec623f70_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic PlatformImpl_obj::__CreateEmpty() { return new PlatformImpl_obj; }

void *PlatformImpl_obj::_hx_vtable = 0;

Dynamic PlatformImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlatformImpl_obj > _hx_result = new PlatformImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlatformImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7903ebde) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7903ebde;
	} else {
		return inClassId==(int)0x7dad82ad;
	}
}

::String PlatformImpl_obj::getSystemLocale(){
            	HX_STACKFRAME(&_hx_pos_cd6becf6ec623f70_7_getSystemLocale)
HXDLIN(   7)		return ::openfl::_hx_system::Capabilities_obj::get_language();
            	}



::hx::ObjectPtr< PlatformImpl_obj > PlatformImpl_obj::__new() {
	::hx::ObjectPtr< PlatformImpl_obj > __this = new PlatformImpl_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PlatformImpl_obj > PlatformImpl_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PlatformImpl_obj *__this = (PlatformImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlatformImpl_obj), true, "haxe.ui.backend.PlatformImpl"));
	*(void **)__this = PlatformImpl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PlatformImpl_obj::PlatformImpl_obj()
{
}

::hx::Val PlatformImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"getSystemLocale") ) { return ::hx::Val( getSystemLocale_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PlatformImpl_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PlatformImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String PlatformImpl_obj_sMemberFields[] = {
	HX_("getSystemLocale",9f,32,bf,5f),
	::String(null()) };

::hx::Class PlatformImpl_obj::__mClass;

void PlatformImpl_obj::__register()
{
	PlatformImpl_obj _hx_dummy;
	PlatformImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.PlatformImpl",ff,3b,b4,3f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlatformImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlatformImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlatformImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlatformImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend