// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_AMD_performance_monitor
#include <lime/graphics/opengl/ext/AMD_performance_monitor.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_86b53c0d4ece9a1b_4_new,"lime.graphics.opengl.ext.AMD_performance_monitor","new",0xb6600274,"lime.graphics.opengl.ext.AMD_performance_monitor.new","lime/graphics/opengl/ext/AMD_performance_monitor.hx",4,0x634e329e)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void AMD_performance_monitor_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_86b53c0d4ece9a1b_4_new)
HXLINE(  12)		this->PERFMON_RESULT_AMD = 35782;
HXLINE(  11)		this->PERFMON_RESULT_SIZE_AMD = 35781;
HXLINE(  10)		this->PERFMON_RESULT_AVAILABLE_AMD = 35780;
HXLINE(   9)		this->PERCENTAGE_AMD = 35779;
HXLINE(   8)		this->UNSIGNED_INT64_AMD = 35778;
HXLINE(   7)		this->COUNTER_RANGE_AMD = 35777;
HXLINE(   6)		this->COUNTER_TYPE_AMD = 35776;
            	}

Dynamic AMD_performance_monitor_obj::__CreateEmpty() { return new AMD_performance_monitor_obj; }

void *AMD_performance_monitor_obj::_hx_vtable = 0;

Dynamic AMD_performance_monitor_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AMD_performance_monitor_obj > _hx_result = new AMD_performance_monitor_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AMD_performance_monitor_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2047c696;
}


AMD_performance_monitor_obj::AMD_performance_monitor_obj()
{
}

::hx::Val AMD_performance_monitor_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"PERCENTAGE_AMD") ) { return ::hx::Val( PERCENTAGE_AMD ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"COUNTER_TYPE_AMD") ) { return ::hx::Val( COUNTER_TYPE_AMD ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"COUNTER_RANGE_AMD") ) { return ::hx::Val( COUNTER_RANGE_AMD ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT64_AMD") ) { return ::hx::Val( UNSIGNED_INT64_AMD ); }
		if (HX_FIELD_EQ(inName,"PERFMON_RESULT_AMD") ) { return ::hx::Val( PERFMON_RESULT_AMD ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"PERFMON_RESULT_SIZE_AMD") ) { return ::hx::Val( PERFMON_RESULT_SIZE_AMD ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"PERFMON_RESULT_AVAILABLE_AMD") ) { return ::hx::Val( PERFMON_RESULT_AVAILABLE_AMD ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AMD_performance_monitor_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"PERCENTAGE_AMD") ) { PERCENTAGE_AMD=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"COUNTER_TYPE_AMD") ) { COUNTER_TYPE_AMD=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"COUNTER_RANGE_AMD") ) { COUNTER_RANGE_AMD=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT64_AMD") ) { UNSIGNED_INT64_AMD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PERFMON_RESULT_AMD") ) { PERFMON_RESULT_AMD=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"PERFMON_RESULT_SIZE_AMD") ) { PERFMON_RESULT_SIZE_AMD=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"PERFMON_RESULT_AVAILABLE_AMD") ) { PERFMON_RESULT_AVAILABLE_AMD=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AMD_performance_monitor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("COUNTER_TYPE_AMD",96,b3,5a,5d));
	outFields->push(HX_("COUNTER_RANGE_AMD",93,f4,50,e4));
	outFields->push(HX_("UNSIGNED_INT64_AMD",1c,40,37,a0));
	outFields->push(HX_("PERCENTAGE_AMD",f3,76,ad,36));
	outFields->push(HX_("PERFMON_RESULT_AVAILABLE_AMD",7c,92,8d,67));
	outFields->push(HX_("PERFMON_RESULT_SIZE_AMD",e0,c4,64,06));
	outFields->push(HX_("PERFMON_RESULT_AMD",d2,3e,3f,51));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AMD_performance_monitor_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,COUNTER_TYPE_AMD),HX_("COUNTER_TYPE_AMD",96,b3,5a,5d)},
	{::hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,COUNTER_RANGE_AMD),HX_("COUNTER_RANGE_AMD",93,f4,50,e4)},
	{::hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,UNSIGNED_INT64_AMD),HX_("UNSIGNED_INT64_AMD",1c,40,37,a0)},
	{::hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,PERCENTAGE_AMD),HX_("PERCENTAGE_AMD",f3,76,ad,36)},
	{::hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,PERFMON_RESULT_AVAILABLE_AMD),HX_("PERFMON_RESULT_AVAILABLE_AMD",7c,92,8d,67)},
	{::hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,PERFMON_RESULT_SIZE_AMD),HX_("PERFMON_RESULT_SIZE_AMD",e0,c4,64,06)},
	{::hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,PERFMON_RESULT_AMD),HX_("PERFMON_RESULT_AMD",d2,3e,3f,51)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AMD_performance_monitor_obj_sStaticStorageInfo = 0;
#endif

static ::String AMD_performance_monitor_obj_sMemberFields[] = {
	HX_("COUNTER_TYPE_AMD",96,b3,5a,5d),
	HX_("COUNTER_RANGE_AMD",93,f4,50,e4),
	HX_("UNSIGNED_INT64_AMD",1c,40,37,a0),
	HX_("PERCENTAGE_AMD",f3,76,ad,36),
	HX_("PERFMON_RESULT_AVAILABLE_AMD",7c,92,8d,67),
	HX_("PERFMON_RESULT_SIZE_AMD",e0,c4,64,06),
	HX_("PERFMON_RESULT_AMD",d2,3e,3f,51),
	::String(null()) };

::hx::Class AMD_performance_monitor_obj::__mClass;

void AMD_performance_monitor_obj::__register()
{
	AMD_performance_monitor_obj _hx_dummy;
	AMD_performance_monitor_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.AMD_performance_monitor",82,f8,b0,c5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AMD_performance_monitor_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AMD_performance_monitor_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AMD_performance_monitor_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AMD_performance_monitor_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
