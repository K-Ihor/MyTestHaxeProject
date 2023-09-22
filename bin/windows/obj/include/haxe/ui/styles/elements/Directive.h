// Generated by Haxe 4.3.2
#ifndef INCLUDED_haxe_ui_styles_elements_Directive
#define INCLUDED_haxe_ui_styles_elements_Directive

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,styles,Value)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,Directive)

namespace haxe{
namespace ui{
namespace styles{
namespace elements{


class HXCPP_CLASS_ATTRIBUTES Directive_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Directive_obj OBJ_;
		Directive_obj();

	public:
		enum { _hx_ClassId = 0x2f4782d0 };

		void __construct(::String directive, ::haxe::ui::styles::Value value,::hx::Null< bool >  __o_defective);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.elements.Directive")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.elements.Directive"); }
		static ::hx::ObjectPtr< Directive_obj > __new(::String directive, ::haxe::ui::styles::Value value,::hx::Null< bool >  __o_defective);
		static ::hx::ObjectPtr< Directive_obj > __alloc(::hx::Ctx *_hx_ctx,::String directive, ::haxe::ui::styles::Value value,::hx::Null< bool >  __o_defective);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Directive_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Directive",2f,48,13,b2); }

		::String directive;
		 ::haxe::ui::styles::Value value;
		bool defective;
};

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace elements

#endif /* INCLUDED_haxe_ui_styles_elements_Directive */ 
