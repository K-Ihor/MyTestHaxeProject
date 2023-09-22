// Generated by Haxe 4.3.2
#ifndef INCLUDED_haxe_ui_backend_openfl_FilterConverter
#define INCLUDED_haxe_ui_backend_openfl_FilterConverter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,backend,openfl,FilterConverter)
HX_DECLARE_CLASS3(haxe,ui,filters,Filter)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)

namespace haxe{
namespace ui{
namespace backend{
namespace openfl{


class HXCPP_CLASS_ATTRIBUTES FilterConverter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FilterConverter_obj OBJ_;
		FilterConverter_obj();

	public:
		enum { _hx_ClassId = 0x61f10722 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.openfl.FilterConverter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.openfl.FilterConverter"); }

		inline static ::hx::ObjectPtr< FilterConverter_obj > __new() {
			::hx::ObjectPtr< FilterConverter_obj > __this = new FilterConverter_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FilterConverter_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FilterConverter_obj *__this = (FilterConverter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FilterConverter_obj), false, "haxe.ui.backend.openfl.FilterConverter"));
			*(void **)__this = FilterConverter_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FilterConverter_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FilterConverter",28,0a,50,c8); }

		static  ::openfl::filters::BitmapFilter convertFilter( ::haxe::ui::filters::Filter input);
		static ::Dynamic convertFilter_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace openfl

#endif /* INCLUDED_haxe_ui_backend_openfl_FilterConverter */ 
