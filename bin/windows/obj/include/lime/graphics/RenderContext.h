// Generated by Haxe 4.3.2
#ifndef INCLUDED_lime_graphics_RenderContext
#define INCLUDED_lime_graphics_RenderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_96059818be203dd4_91_new)
HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeOpenGLRenderContext)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS3(lime,graphics,cairo,Cairo)
HX_DECLARE_CLASS2(lime,ui,Window)

namespace lime{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES RenderContext_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RenderContext_obj OBJ_;
		RenderContext_obj();

	public:
		enum { _hx_ClassId = 0x7e9c9209 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.graphics.RenderContext")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.graphics.RenderContext"); }

		inline static ::hx::ObjectPtr< RenderContext_obj > __new() {
			::hx::ObjectPtr< RenderContext_obj > __this = new RenderContext_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< RenderContext_obj > __alloc(::hx::Ctx *_hx_ctx) {
			RenderContext_obj *__this = (RenderContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RenderContext_obj), true, "lime.graphics.RenderContext"));
			*(void **)__this = RenderContext_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_96059818be203dd4_91_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RenderContext_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RenderContext",19,59,55,5d); }

		 ::Dynamic attributes;
		 ::lime::graphics::cairo::Cairo cairo;
		 ::Dynamic canvas2D;
		 ::Dynamic dom;
		 ::Dynamic flash;
		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl;
		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gles2;
		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gles3;
		::String type;
		::String version;
		 ::lime::_internal::backend::native::NativeOpenGLRenderContext webgl;
		 ::lime::_internal::backend::native::NativeOpenGLRenderContext webgl2;
		 ::lime::ui::Window window;
};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_RenderContext */ 
