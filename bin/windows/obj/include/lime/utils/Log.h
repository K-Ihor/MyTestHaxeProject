// Generated by Haxe 4.3.2
#ifndef INCLUDED_lime_utils_Log
#define INCLUDED_lime_utils_Log

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Sys)
HX_DECLARE_CLASS2(lime,utils,Log)

namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES Log_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Log_obj OBJ_;
		Log_obj();

	public:
		enum { _hx_ClassId = 0x78ec8de8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.utils.Log")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.utils.Log"); }

		inline static ::hx::ObjectPtr< Log_obj > __new() {
			::hx::ObjectPtr< Log_obj > __this = new Log_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Log_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Log_obj *__this = (Log_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Log_obj), false, "lime.utils.Log"));
			*(void **)__this = Log_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Log_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		static void __init__();

		::String __ToString() const { return HX_("Log",64,0c,3a,00); }

		static void __boot();
		static int level;
		static bool throwErrors;
		static void debug( ::Dynamic message, ::Dynamic info);
		static ::Dynamic debug_dyn();

		static void error( ::Dynamic message, ::Dynamic info);
		static ::Dynamic error_dyn();

		static void info( ::Dynamic message, ::Dynamic info);
		static ::Dynamic info_dyn();

		static void print( ::Dynamic message);
		static ::Dynamic print_dyn();

		static void println( ::Dynamic message);
		static ::Dynamic println_dyn();

		static void verbose( ::Dynamic message, ::Dynamic info);
		static ::Dynamic verbose_dyn();

		static void warn( ::Dynamic message, ::Dynamic info);
		static ::Dynamic warn_dyn();

};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_Log */ 
