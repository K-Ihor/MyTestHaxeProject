// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_program_binary
#include <lime/graphics/opengl/ext/IMG_program_binary.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ad90b26c872a9ef8_6_new,"lime.graphics.opengl.ext.IMG_program_binary","new",0x8d5e10cc,"lime.graphics.opengl.ext.IMG_program_binary.new","lime/graphics/opengl/ext/IMG_program_binary.hx",6,0xcae1b442)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void IMG_program_binary_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ad90b26c872a9ef8_6_new)
HXDLIN(   6)		this->SGX_PROGRAM_BINARY_IMG = 37168;
            	}

Dynamic IMG_program_binary_obj::__CreateEmpty() { return new IMG_program_binary_obj; }

void *IMG_program_binary_obj::_hx_vtable = 0;

Dynamic IMG_program_binary_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IMG_program_binary_obj > _hx_result = new IMG_program_binary_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool IMG_program_binary_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x66322462;
}


IMG_program_binary_obj::IMG_program_binary_obj()
{
}

::hx::Val IMG_program_binary_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"SGX_PROGRAM_BINARY_IMG") ) { return ::hx::Val( SGX_PROGRAM_BINARY_IMG ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val IMG_program_binary_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"SGX_PROGRAM_BINARY_IMG") ) { SGX_PROGRAM_BINARY_IMG=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IMG_program_binary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("SGX_PROGRAM_BINARY_IMG",fb,cf,26,21));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo IMG_program_binary_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(IMG_program_binary_obj,SGX_PROGRAM_BINARY_IMG),HX_("SGX_PROGRAM_BINARY_IMG",fb,cf,26,21)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *IMG_program_binary_obj_sStaticStorageInfo = 0;
#endif

static ::String IMG_program_binary_obj_sMemberFields[] = {
	HX_("SGX_PROGRAM_BINARY_IMG",fb,cf,26,21),
	::String(null()) };

::hx::Class IMG_program_binary_obj::__mClass;

void IMG_program_binary_obj::__register()
{
	IMG_program_binary_obj _hx_dummy;
	IMG_program_binary_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.IMG_program_binary",da,fa,42,f3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IMG_program_binary_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IMG_program_binary_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IMG_program_binary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IMG_program_binary_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
