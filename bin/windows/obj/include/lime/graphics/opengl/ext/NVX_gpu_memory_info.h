// Generated by Haxe 4.3.2
#ifndef INCLUDED_lime_graphics_opengl_ext_NVX_gpu_memory_info
#define INCLUDED_lime_graphics_opengl_ext_NVX_gpu_memory_info

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_beb86411f1650ca3_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,NVX_gpu_memory_info)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES NVX_gpu_memory_info_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NVX_gpu_memory_info_obj OBJ_;
		NVX_gpu_memory_info_obj();

	public:
		enum { _hx_ClassId = 0x2d69beb8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.NVX_gpu_memory_info")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.NVX_gpu_memory_info"); }

		inline static ::hx::ObjectPtr< NVX_gpu_memory_info_obj > __new() {
			::hx::ObjectPtr< NVX_gpu_memory_info_obj > __this = new NVX_gpu_memory_info_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NVX_gpu_memory_info_obj > __alloc(::hx::Ctx *_hx_ctx) {
			NVX_gpu_memory_info_obj *__this = (NVX_gpu_memory_info_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NVX_gpu_memory_info_obj), false, "lime.graphics.opengl.ext.NVX_gpu_memory_info"));
			*(void **)__this = NVX_gpu_memory_info_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_beb86411f1650ca3_4_new)
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::NVX_gpu_memory_info)(__this) )->GPU_MEMORY_INFO_EVICTED_MEMORY_NVX = 36939;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::NVX_gpu_memory_info)(__this) )->GPU_MEMORY_INFO_EVICTION_COUNT_NVX = 36938;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::NVX_gpu_memory_info)(__this) )->GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX = 36937;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::NVX_gpu_memory_info)(__this) )->GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX = 36936;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::NVX_gpu_memory_info)(__this) )->GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX = 36935;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NVX_gpu_memory_info_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NVX_gpu_memory_info",6a,ad,9a,42); }

		int GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX;
		int GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX;
		int GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX;
		int GPU_MEMORY_INFO_EVICTION_COUNT_NVX;
		int GPU_MEMORY_INFO_EVICTED_MEMORY_NVX;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_NVX_gpu_memory_info */ 
