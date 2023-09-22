// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Blur
#include <haxe/ui/filters/Blur.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_DropShadow
#include <haxe/ui/filters/DropShadow.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_FilterParser
#include <haxe/ui/filters/FilterParser.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Grayscale
#include <haxe/ui/filters/Grayscale.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Outline
#include <haxe/ui/filters/Outline.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_31bcc7ff180c92b7_6_parseFilter,"haxe.ui.filters.FilterParser","parseFilter",0xbacdfa59,"haxe.ui.filters.FilterParser.parseFilter","haxe/ui/filters/FilterParser.hx",6,0x8c53ed41)
HX_LOCAL_STACK_FRAME(_hx_pos_31bcc7ff180c92b7_20_parseDropShadow,"haxe.ui.filters.FilterParser","parseDropShadow",0x4c218090,"haxe.ui.filters.FilterParser.parseDropShadow","haxe/ui/filters/FilterParser.hx",20,0x8c53ed41)
HX_LOCAL_STACK_FRAME(_hx_pos_31bcc7ff180c92b7_46_parseBlur,"haxe.ui.filters.FilterParser","parseBlur",0x48188308,"haxe.ui.filters.FilterParser.parseBlur","haxe/ui/filters/FilterParser.hx",46,0x8c53ed41)
HX_LOCAL_STACK_FRAME(_hx_pos_31bcc7ff180c92b7_64_parseOutline,"haxe.ui.filters.FilterParser","parseOutline",0x91e489c1,"haxe.ui.filters.FilterParser.parseOutline","haxe/ui/filters/FilterParser.hx",64,0x8c53ed41)
HX_LOCAL_STACK_FRAME(_hx_pos_31bcc7ff180c92b7_83_copyFilterDefaults,"haxe.ui.filters.FilterParser","copyFilterDefaults",0x7dd676b1,"haxe.ui.filters.FilterParser.copyFilterDefaults","haxe/ui/filters/FilterParser.hx",83,0x8c53ed41)
HX_LOCAL_STACK_FRAME(_hx_pos_31bcc7ff180c92b7_103_parseGrayscale,"haxe.ui.filters.FilterParser","parseGrayscale",0xcf8e47c6,"haxe.ui.filters.FilterParser.parseGrayscale","haxe/ui/filters/FilterParser.hx",103,0x8c53ed41)
HX_LOCAL_STACK_FRAME(_hx_pos_31bcc7ff180c92b7_121_buildDefaults,"haxe.ui.filters.FilterParser","buildDefaults",0xd6b8936e,"haxe.ui.filters.FilterParser.buildDefaults","haxe/ui/filters/FilterParser.hx",121,0x8c53ed41)
namespace haxe{
namespace ui{
namespace filters{

void FilterParser_obj::__construct() { }

Dynamic FilterParser_obj::__CreateEmpty() { return new FilterParser_obj; }

void *FilterParser_obj::_hx_vtable = 0;

Dynamic FilterParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FilterParser_obj > _hx_result = new FilterParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FilterParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2ed0f618;
}

 ::haxe::ds::StringMap FilterParser_obj::filterParamDefaults;

 ::haxe::ui::filters::Filter FilterParser_obj::parseFilter(::cpp::VirtualArray filterDetails){
            	HX_STACKFRAME(&_hx_pos_31bcc7ff180c92b7_6_parseFilter)
HXLINE(   7)		 ::haxe::ui::filters::Filter filter = null();
HXLINE(   8)		if (::hx::IsEq( filterDetails->__get(0),HX_("drop-shadow",7e,63,30,e1) )) {
HXLINE(   9)			filter = ::haxe::ui::filters::FilterParser_obj::parseDropShadow(filterDetails);
            		}
            		else {
HXLINE(  10)			if (::hx::IsEq( filterDetails->__get(0),HX_("blur",a7,42,19,41) )) {
HXLINE(  11)				filter = ::haxe::ui::filters::FilterParser_obj::parseBlur(filterDetails);
            			}
            			else {
HXLINE(  12)				if (::hx::IsEq( filterDetails->__get(0),HX_("outline",82,17,be,e1) )) {
HXLINE(  13)					filter = ::haxe::ui::filters::FilterParser_obj::parseOutline(filterDetails);
            				}
            				else {
HXLINE(  14)					if (::hx::IsEq( filterDetails->__get(0),HX_("grayscale",c7,87,37,f3) )) {
HXLINE(  15)						filter = ::haxe::ui::filters::FilterParser_obj::parseGrayscale(filterDetails);
            					}
            				}
            			}
            		}
HXLINE(  17)		return filter;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FilterParser_obj,parseFilter,return )

 ::haxe::ui::filters::DropShadow FilterParser_obj::parseDropShadow(::cpp::VirtualArray filterDetails){
            	HX_GC_STACKFRAME(&_hx_pos_31bcc7ff180c92b7_20_parseDropShadow)
HXLINE(  21)		bool _hx_tmp;
HXDLIN(  21)		if (::hx::IsNotNull( filterDetails )) {
HXLINE(  21)			_hx_tmp = (filterDetails->get_length() == 0);
            		}
            		else {
HXLINE(  21)			_hx_tmp = true;
            		}
HXDLIN(  21)		if (_hx_tmp) {
HXLINE(  22)			return null();
            		}
HXLINE(  25)		::cpp::VirtualArray copy = filterDetails->copy();
HXLINE(  26)		::haxe::ui::filters::FilterParser_obj::buildDefaults();
HXLINE(  28)		::String filterName = ( (::String)(copy->__get(0)) );
HXLINE(  29)		copy->remove(filterName);
HXLINE(  31)		copy = ::haxe::ui::filters::FilterParser_obj::copyFilterDefaults(filterName,copy);
HXLINE(  33)		 ::haxe::ui::filters::DropShadow dropShadow =  ::haxe::ui::filters::DropShadow_obj::__alloc( HX_CTX );
HXLINE(  34)		dropShadow->distance = ( (Float)(copy->__get(0)) );
HXLINE(  35)		dropShadow->angle = ( (Float)(copy->__get(1)) );
HXLINE(  36)		dropShadow->color = ( (int)(copy->__get(2)) );
HXLINE(  37)		dropShadow->alpha = ( (Float)(copy->__get(3)) );
HXLINE(  38)		dropShadow->blurX = ( (Float)(copy->__get(4)) );
HXLINE(  39)		dropShadow->blurY = ( (Float)(copy->__get(5)) );
HXLINE(  40)		dropShadow->strength = ( (Float)(copy->__get(6)) );
HXLINE(  41)		dropShadow->quality = ( (int)(copy->__get(7)) );
HXLINE(  42)		dropShadow->inner = ( (bool)(copy->__get(8)) );
HXLINE(  43)		return dropShadow;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FilterParser_obj,parseDropShadow,return )

 ::haxe::ui::filters::Blur FilterParser_obj::parseBlur(::cpp::VirtualArray filterDetails){
            	HX_GC_STACKFRAME(&_hx_pos_31bcc7ff180c92b7_46_parseBlur)
HXLINE(  47)		bool _hx_tmp;
HXDLIN(  47)		if (::hx::IsNotNull( filterDetails )) {
HXLINE(  47)			_hx_tmp = (filterDetails->get_length() == 0);
            		}
            		else {
HXLINE(  47)			_hx_tmp = true;
            		}
HXDLIN(  47)		if (_hx_tmp) {
HXLINE(  48)			return null();
            		}
HXLINE(  51)		::cpp::VirtualArray copy = filterDetails->copy();
HXLINE(  52)		::haxe::ui::filters::FilterParser_obj::buildDefaults();
HXLINE(  54)		::String filterName = ( (::String)(copy->__get(0)) );
HXLINE(  55)		copy->remove(filterName);
HXLINE(  57)		copy = ::haxe::ui::filters::FilterParser_obj::copyFilterDefaults(filterName,copy);
HXLINE(  59)		 ::haxe::ui::filters::Blur blur =  ::haxe::ui::filters::Blur_obj::__alloc( HX_CTX );
HXLINE(  60)		blur->amount = ( (Float)(copy->__get(0)) );
HXLINE(  61)		return blur;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FilterParser_obj,parseBlur,return )

 ::haxe::ui::filters::Outline FilterParser_obj::parseOutline(::cpp::VirtualArray filterDetails){
            	HX_GC_STACKFRAME(&_hx_pos_31bcc7ff180c92b7_64_parseOutline)
HXLINE(  65)		bool _hx_tmp;
HXDLIN(  65)		if (::hx::IsNotNull( filterDetails )) {
HXLINE(  65)			_hx_tmp = (filterDetails->get_length() == 0);
            		}
            		else {
HXLINE(  65)			_hx_tmp = true;
            		}
HXDLIN(  65)		if (_hx_tmp) {
HXLINE(  66)			return null();
            		}
HXLINE(  69)		::cpp::VirtualArray copy = filterDetails->copy();
HXLINE(  70)		::haxe::ui::filters::FilterParser_obj::buildDefaults();
HXLINE(  72)		::String filterName = ( (::String)(copy->__get(0)) );
HXLINE(  73)		copy->remove(filterName);
HXLINE(  75)		copy = ::haxe::ui::filters::FilterParser_obj::copyFilterDefaults(filterName,copy);
HXLINE(  77)		 ::haxe::ui::filters::Outline outline =  ::haxe::ui::filters::Outline_obj::__alloc( HX_CTX );
HXLINE(  78)		outline->color = ( (int)(copy->__get(0)) );
HXLINE(  79)		outline->size = ( (int)(copy->__get(1)) );
HXLINE(  80)		return outline;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FilterParser_obj,parseOutline,return )

::cpp::VirtualArray FilterParser_obj::copyFilterDefaults(::String filterName,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_31bcc7ff180c92b7_83_copyFilterDefaults)
HXLINE(  84)		::cpp::VirtualArray copy = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  86)		::cpp::VirtualArray defaultParams = ( (::cpp::VirtualArray)(::haxe::ui::filters::FilterParser_obj::filterParamDefaults->get(filterName)) );
HXLINE(  87)		if (::hx::IsNotNull( defaultParams )) {
HXLINE(  88)			int _g = 0;
HXDLIN(  88)			while((_g < defaultParams->get_length())){
HXLINE(  88)				 ::Dynamic p = defaultParams->__get(_g);
HXDLIN(  88)				_g = (_g + 1);
HXLINE(  89)				copy->push(p);
            			}
            		}
HXLINE(  92)		if (::hx::IsNotNull( params )) {
HXLINE(  93)			int n = 0;
HXLINE(  94)			{
HXLINE(  94)				int _g1 = 0;
HXDLIN(  94)				while((_g1 < params->get_length())){
HXLINE(  94)					 ::Dynamic p1 = params->__get(_g1);
HXDLIN(  94)					_g1 = (_g1 + 1);
HXLINE(  95)					copy->set(n,p1);
HXLINE(  96)					n = (n + 1);
            				}
            			}
            		}
HXLINE( 100)		return copy;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FilterParser_obj,copyFilterDefaults,return )

 ::haxe::ui::filters::Grayscale FilterParser_obj::parseGrayscale(::cpp::VirtualArray filterDetails){
            	HX_GC_STACKFRAME(&_hx_pos_31bcc7ff180c92b7_103_parseGrayscale)
HXLINE( 104)		bool _hx_tmp;
HXDLIN( 104)		if (::hx::IsNotNull( filterDetails )) {
HXLINE( 104)			_hx_tmp = (filterDetails->get_length() == 0);
            		}
            		else {
HXLINE( 104)			_hx_tmp = true;
            		}
HXDLIN( 104)		if (_hx_tmp) {
HXLINE( 105)			return null();
            		}
HXLINE( 108)		::cpp::VirtualArray copy = filterDetails->copy();
HXLINE( 109)		::haxe::ui::filters::FilterParser_obj::buildDefaults();
HXLINE( 111)		::String filterName = ( (::String)(copy->__get(0)) );
HXLINE( 112)		copy->remove(filterName);
HXLINE( 114)		copy = ::haxe::ui::filters::FilterParser_obj::copyFilterDefaults(filterName,copy);
HXLINE( 116)		 ::haxe::ui::filters::Grayscale grayscale =  ::haxe::ui::filters::Grayscale_obj::__alloc( HX_CTX );
HXLINE( 117)		grayscale->amount = ( (Float)(copy->__get(0)) );
HXLINE( 118)		return grayscale;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FilterParser_obj,parseGrayscale,return )

void FilterParser_obj::buildDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_31bcc7ff180c92b7_121_buildDefaults)
HXLINE( 122)		if (::hx::IsNotNull( ::haxe::ui::filters::FilterParser_obj::filterParamDefaults )) {
HXLINE( 123)			return;
            		}
HXLINE( 126)		::haxe::ui::filters::FilterParser_obj::filterParamDefaults =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 127)		{
HXLINE( 127)			::cpp::VirtualArray v = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 127)			::haxe::ui::filters::FilterParser_obj::filterParamDefaults->set(HX_("drop-shadow",7e,63,30,e1),v);
            		}
HXLINE( 128)		{
HXLINE( 128)			::Dynamic this1 = ::haxe::ui::filters::FilterParser_obj::filterParamDefaults;
HXDLIN( 128)			::cpp::VirtualArray v1 = ( (::cpp::VirtualArray)(::haxe::ui::filters::FilterParser_obj::filterParamDefaults->get(HX_("drop-shadow",7e,63,30,e1))) )->concat(::cpp::VirtualArray_obj::__new(11)->init(0,4)->init(1,45)->init(2,0)->init(3,1)->init(4,4)->init(5,4)->init(6,1)->init(7,1)->init(8,false)->init(9,false)->init(10,false));
HXDLIN( 128)			( ( ::haxe::ds::StringMap)(this1) )->set(HX_("drop-shadow",7e,63,30,e1),v1);
            		}
HXLINE( 130)		{
HXLINE( 130)			::cpp::VirtualArray v2 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 130)			::haxe::ui::filters::FilterParser_obj::filterParamDefaults->set(HX_("blur",a7,42,19,41),v2);
            		}
HXLINE( 131)		{
HXLINE( 131)			::Dynamic this2 = ::haxe::ui::filters::FilterParser_obj::filterParamDefaults;
HXDLIN( 131)			::cpp::VirtualArray v3 = ( (::cpp::VirtualArray)(::haxe::ui::filters::FilterParser_obj::filterParamDefaults->get(HX_("blur",a7,42,19,41))) )->concat(::cpp::VirtualArray_obj::__new(1)->init(0,1));
HXDLIN( 131)			( ( ::haxe::ds::StringMap)(this2) )->set(HX_("blur",a7,42,19,41),v3);
            		}
HXLINE( 133)		{
HXLINE( 133)			::cpp::VirtualArray v4 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 133)			::haxe::ui::filters::FilterParser_obj::filterParamDefaults->set(HX_("outline",82,17,be,e1),v4);
            		}
HXLINE( 134)		{
HXLINE( 134)			::Dynamic this3 = ::haxe::ui::filters::FilterParser_obj::filterParamDefaults;
HXDLIN( 134)			::cpp::VirtualArray v5 = ( (::cpp::VirtualArray)(::haxe::ui::filters::FilterParser_obj::filterParamDefaults->get(HX_("outline",82,17,be,e1))) )->concat(::cpp::VirtualArray_obj::__new(2)->init(0,0)->init(1,1));
HXDLIN( 134)			( ( ::haxe::ds::StringMap)(this3) )->set(HX_("outline",82,17,be,e1),v5);
            		}
HXLINE( 136)		{
HXLINE( 136)			::cpp::VirtualArray v6 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 136)			::haxe::ui::filters::FilterParser_obj::filterParamDefaults->set(HX_("grayscale",c7,87,37,f3),v6);
            		}
HXLINE( 137)		{
HXLINE( 137)			::Dynamic this4 = ::haxe::ui::filters::FilterParser_obj::filterParamDefaults;
HXDLIN( 137)			::cpp::VirtualArray v7 = ( (::cpp::VirtualArray)(::haxe::ui::filters::FilterParser_obj::filterParamDefaults->get(HX_("grayscale",c7,87,37,f3))) )->concat(::cpp::VirtualArray_obj::__new(1)->init(0,100));
HXDLIN( 137)			( ( ::haxe::ds::StringMap)(this4) )->set(HX_("grayscale",c7,87,37,f3),v7);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FilterParser_obj,buildDefaults,(void))


FilterParser_obj::FilterParser_obj()
{
}

bool FilterParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"parseBlur") ) { outValue = parseBlur_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"parseFilter") ) { outValue = parseFilter_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"parseOutline") ) { outValue = parseOutline_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"buildDefaults") ) { outValue = buildDefaults_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parseGrayscale") ) { outValue = parseGrayscale_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parseDropShadow") ) { outValue = parseDropShadow_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"copyFilterDefaults") ) { outValue = copyFilterDefaults_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"filterParamDefaults") ) { outValue = ( filterParamDefaults ); return true; }
	}
	return false;
}

bool FilterParser_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"filterParamDefaults") ) { filterParamDefaults=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FilterParser_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FilterParser_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &FilterParser_obj::filterParamDefaults,HX_("filterParamDefaults",67,9f,5f,d6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FilterParser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FilterParser_obj::filterParamDefaults,"filterParamDefaults");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FilterParser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FilterParser_obj::filterParamDefaults,"filterParamDefaults");
};

#endif

::hx::Class FilterParser_obj::__mClass;

static ::String FilterParser_obj_sStaticFields[] = {
	HX_("filterParamDefaults",67,9f,5f,d6),
	HX_("parseFilter",4b,cc,71,00),
	HX_("parseDropShadow",82,33,7a,b5),
	HX_("parseBlur",7a,94,bf,c8),
	HX_("parseOutline",8f,6b,98,3b),
	HX_("copyFilterDefaults",ff,a6,6e,c3),
	HX_("parseGrayscale",14,b9,58,37),
	HX_("buildDefaults",e0,45,6a,aa),
	::String(null())
};

void FilterParser_obj::__register()
{
	FilterParser_obj _hx_dummy;
	FilterParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.filters.FilterParser",7c,31,b4,0a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FilterParser_obj::__GetStatic;
	__mClass->mSetStaticField = &FilterParser_obj::__SetStatic;
	__mClass->mMarkFunc = FilterParser_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FilterParser_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FilterParser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FilterParser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FilterParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FilterParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace filters
