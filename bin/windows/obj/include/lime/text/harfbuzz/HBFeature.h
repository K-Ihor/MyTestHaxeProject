// Generated by Haxe 4.3.2
#ifndef INCLUDED_lime_text_harfbuzz_HBFeature
#define INCLUDED_lime_text_harfbuzz_HBFeature

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_e935673f08494dca_6_new)
HX_DECLARE_CLASS3(lime,text,harfbuzz,HBFeature)

namespace lime{
namespace text{
namespace harfbuzz{


class HXCPP_CLASS_ATTRIBUTES HBFeature_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HBFeature_obj OBJ_;
		HBFeature_obj();

	public:
		enum { _hx_ClassId = 0x6f399a5a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.text.harfbuzz.HBFeature")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.text.harfbuzz.HBFeature"); }

		inline static ::hx::ObjectPtr< HBFeature_obj > __new() {
			::hx::ObjectPtr< HBFeature_obj > __this = new HBFeature_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< HBFeature_obj > __alloc(::hx::Ctx *_hx_ctx) {
			HBFeature_obj *__this = (HBFeature_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HBFeature_obj), false, "lime.text.harfbuzz.HBFeature"));
			*(void **)__this = HBFeature_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_e935673f08494dca_6_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HBFeature_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HBFeature",dc,0e,b5,fa); }

};

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz

#endif /* INCLUDED_lime_text_harfbuzz_HBFeature */ 
