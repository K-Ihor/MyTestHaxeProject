// Generated by Haxe 4.3.2
#ifndef INCLUDED_haxe_ui_locale_LocaleString
#define INCLUDED_haxe_ui_locale_LocaleString

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,locale,LocaleString)
HX_DECLARE_CLASS4(haxe,ui,locale,_LocaleString,LocaleStringPart)

namespace haxe{
namespace ui{
namespace locale{


class HXCPP_CLASS_ATTRIBUTES LocaleString_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LocaleString_obj OBJ_;
		LocaleString_obj();

	public:
		enum { _hx_ClassId = 0x5c3257a3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.locale.LocaleString")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.locale.LocaleString"); }
		static ::hx::ObjectPtr< LocaleString_obj > __new();
		static ::hx::ObjectPtr< LocaleString_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LocaleString_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LocaleString",2b,cd,8e,7e); }

		::String id;
		::Array< ::Dynamic> parts;
		bool _isSimple;
		::String _cachedValue;
		::String build( ::Dynamic param0, ::Dynamic param1, ::Dynamic param2, ::Dynamic param3);
		::Dynamic build_dyn();

		void parse(::String s);
		::Dynamic parse_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace locale

#endif /* INCLUDED_haxe_ui_locale_LocaleString */ 
