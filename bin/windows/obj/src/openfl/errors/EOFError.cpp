// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_errors_EOFError
#include <openfl/errors/EOFError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IOError
#include <openfl/errors/IOError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6527ad318e200d9c_22_new,"openfl.errors.EOFError","new",0xc20c3743,"openfl.errors.EOFError.new","openfl/errors/EOFError.hx",22,0x8db2236d)
namespace openfl{
namespace errors{

void EOFError_obj::__construct(::String message,::hx::Null< int >  __o_id){
            		int id = __o_id.Default(0);
            	HX_STACKFRAME(&_hx_pos_6527ad318e200d9c_22_new)
HXLINE(  23)		super::__construct(HX_("End of file was encountered",fb,7f,d6,0b));
HXLINE(  25)		this->name = HX_("EOFError",8c,e5,0a,43);
HXLINE(  26)		this->errorID = 2030;
            	}

Dynamic EOFError_obj::__CreateEmpty() { return new EOFError_obj; }

void *EOFError_obj::_hx_vtable = 0;

Dynamic EOFError_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EOFError_obj > _hx_result = new EOFError_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool EOFError_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2be3de43) {
		if (inClassId<=(int)0x29fe34f3) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x29fe34f3;
		} else {
			return inClassId==(int)0x2be3de43;
		}
	} else {
		return inClassId==(int)0x3495c9c5 || inClassId==(int)0x677ddc49;
	}
}


::hx::ObjectPtr< EOFError_obj > EOFError_obj::__new(::String message,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< EOFError_obj > __this = new EOFError_obj();
	__this->__construct(message,__o_id);
	return __this;
}

::hx::ObjectPtr< EOFError_obj > EOFError_obj::__alloc(::hx::Ctx *_hx_ctx,::String message,::hx::Null< int >  __o_id) {
	EOFError_obj *__this = (EOFError_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EOFError_obj), true, "openfl.errors.EOFError"));
	*(void **)__this = EOFError_obj::_hx_vtable;
	__this->__construct(message,__o_id);
	return __this;
}

EOFError_obj::EOFError_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EOFError_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EOFError_obj_sStaticStorageInfo = 0;
#endif

::hx::Class EOFError_obj::__mClass;

void EOFError_obj::__register()
{
	EOFError_obj _hx_dummy;
	EOFError_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.errors.EOFError",d1,d9,b0,40);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< EOFError_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EOFError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EOFError_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace errors
