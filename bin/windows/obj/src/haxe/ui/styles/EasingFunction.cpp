// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_EasingFunction
#include <haxe/ui/styles/EasingFunction.h>
#endif
namespace haxe{
namespace ui{
namespace styles{

::haxe::ui::styles::EasingFunction EasingFunction_obj::EASE;

::haxe::ui::styles::EasingFunction EasingFunction_obj::EASE_IN;

::haxe::ui::styles::EasingFunction EasingFunction_obj::EASE_IN_OUT;

::haxe::ui::styles::EasingFunction EasingFunction_obj::EASE_OUT;

::haxe::ui::styles::EasingFunction EasingFunction_obj::LINEAR;

bool EasingFunction_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("EASE",ee,53,cd,2d)) { outValue = EasingFunction_obj::EASE; return true; }
	if (inName==HX_("EASE_IN",d6,aa,a1,2a)) { outValue = EasingFunction_obj::EASE_IN; return true; }
	if (inName==HX_("EASE_IN_OUT",45,4f,86,24)) { outValue = EasingFunction_obj::EASE_IN_OUT; return true; }
	if (inName==HX_("EASE_OUT",5d,64,d8,22)) { outValue = EasingFunction_obj::EASE_OUT; return true; }
	if (inName==HX_("LINEAR",e5,fd,22,9f)) { outValue = EasingFunction_obj::LINEAR; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(EasingFunction_obj)

int EasingFunction_obj::__FindIndex(::String inName)
{
	if (inName==HX_("EASE",ee,53,cd,2d)) return 1;
	if (inName==HX_("EASE_IN",d6,aa,a1,2a)) return 2;
	if (inName==HX_("EASE_IN_OUT",45,4f,86,24)) return 4;
	if (inName==HX_("EASE_OUT",5d,64,d8,22)) return 3;
	if (inName==HX_("LINEAR",e5,fd,22,9f)) return 0;
	return super::__FindIndex(inName);
}

int EasingFunction_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("EASE",ee,53,cd,2d)) return 0;
	if (inName==HX_("EASE_IN",d6,aa,a1,2a)) return 0;
	if (inName==HX_("EASE_IN_OUT",45,4f,86,24)) return 0;
	if (inName==HX_("EASE_OUT",5d,64,d8,22)) return 0;
	if (inName==HX_("LINEAR",e5,fd,22,9f)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val EasingFunction_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("EASE",ee,53,cd,2d)) return EASE;
	if (inName==HX_("EASE_IN",d6,aa,a1,2a)) return EASE_IN;
	if (inName==HX_("EASE_IN_OUT",45,4f,86,24)) return EASE_IN_OUT;
	if (inName==HX_("EASE_OUT",5d,64,d8,22)) return EASE_OUT;
	if (inName==HX_("LINEAR",e5,fd,22,9f)) return LINEAR;
	return super::__Field(inName,inCallProp);
}

static ::String EasingFunction_obj_sStaticFields[] = {
	HX_("LINEAR",e5,fd,22,9f),
	HX_("EASE",ee,53,cd,2d),
	HX_("EASE_IN",d6,aa,a1,2a),
	HX_("EASE_OUT",5d,64,d8,22),
	HX_("EASE_IN_OUT",45,4f,86,24),
	::String(null())
};

::hx::Class EasingFunction_obj::__mClass;

Dynamic __Create_EasingFunction_obj() { return new EasingFunction_obj; }

void EasingFunction_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("haxe.ui.styles.EasingFunction",7d,97,05,57), ::hx::TCanCast< EasingFunction_obj >,EasingFunction_obj_sStaticFields,0,
	&__Create_EasingFunction_obj, &__Create,
	&super::__SGetClass(), &CreateEasingFunction_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &EasingFunction_obj::__GetStatic;
}

void EasingFunction_obj::__boot()
{
EASE = ::hx::CreateConstEnum< EasingFunction_obj >(HX_("EASE",ee,53,cd,2d),1);
EASE_IN = ::hx::CreateConstEnum< EasingFunction_obj >(HX_("EASE_IN",d6,aa,a1,2a),2);
EASE_IN_OUT = ::hx::CreateConstEnum< EasingFunction_obj >(HX_("EASE_IN_OUT",45,4f,86,24),4);
EASE_OUT = ::hx::CreateConstEnum< EasingFunction_obj >(HX_("EASE_OUT",5d,64,d8,22),3);
LINEAR = ::hx::CreateConstEnum< EasingFunction_obj >(HX_("LINEAR",e5,fd,22,9f),0);
}


} // end namespace haxe
} // end namespace ui
} // end namespace styles
