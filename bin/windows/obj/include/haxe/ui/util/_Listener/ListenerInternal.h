// Generated by Haxe 4.3.2
#ifndef INCLUDED_haxe_ui_util__Listener_ListenerInternal
#define INCLUDED_haxe_ui_util__Listener_ListenerInternal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_19e42336dc92e684_30_new)
HX_DECLARE_CLASS4(haxe,ui,util,_Listener,ListenerInternal)

namespace haxe{
namespace ui{
namespace util{
namespace _Listener{


class HXCPP_CLASS_ATTRIBUTES ListenerInternal_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ListenerInternal_obj OBJ_;
		ListenerInternal_obj();

	public:
		enum { _hx_ClassId = 0x57b89020 };

		void __construct( ::Dynamic callback,int priority);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.util._Listener.ListenerInternal")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.util._Listener.ListenerInternal"); }

		inline static ::hx::ObjectPtr< ListenerInternal_obj > __new( ::Dynamic callback,int priority) {
			::hx::ObjectPtr< ListenerInternal_obj > __this = new ListenerInternal_obj();
			__this->__construct(callback,priority);
			return __this;
		}

		inline static ::hx::ObjectPtr< ListenerInternal_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic callback,int priority) {
			ListenerInternal_obj *__this = (ListenerInternal_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ListenerInternal_obj), true, "haxe.ui.util._Listener.ListenerInternal"));
			*(void **)__this = ListenerInternal_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_19e42336dc92e684_30_new)
HXLINE(  31)		( ( ::haxe::ui::util::_Listener::ListenerInternal)(__this) )->callback = callback;
HXLINE(  32)		( ( ::haxe::ui::util::_Listener::ListenerInternal)(__this) )->priority = priority;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ListenerInternal_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ListenerInternal",f1,93,b8,6b); }

		 ::Dynamic callback;
		int priority;
};

} // end namespace haxe
} // end namespace ui
} // end namespace util
} // end namespace _Listener

#endif /* INCLUDED_haxe_ui_util__Listener_ListenerInternal */ 
