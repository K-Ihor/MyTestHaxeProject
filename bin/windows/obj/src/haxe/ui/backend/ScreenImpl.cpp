// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_openfl_EventMapper
#include <haxe/ui/backend/openfl/EventMapper.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_events_KeyboardEvent
#include <haxe/ui/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7a615936dd15791e_16_new,"haxe.ui.backend.ScreenImpl","new",0x83c2272a,"haxe.ui.backend.ScreenImpl.new","haxe/ui/backend/ScreenImpl.hx",16,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_23_get_width,"haxe.ui.backend.ScreenImpl","get_width",0xddce9ca7,"haxe.ui.backend.ScreenImpl.get_width","haxe/ui/backend/ScreenImpl.hx",23,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_30_get_height,"haxe.ui.backend.ScreenImpl","get_height",0xed49ee26,"haxe.ui.backend.ScreenImpl.get_height","haxe/ui/backend/ScreenImpl.hx",30,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_38_get_dpi,"haxe.ui.backend.ScreenImpl","get_dpi",0xbe038fbe,"haxe.ui.backend.ScreenImpl.get_dpi","haxe/ui/backend/ScreenImpl.hx",38,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_41_set_title,"haxe.ui.backend.ScreenImpl","set_title",0x06f7e845,"haxe.ui.backend.ScreenImpl.set_title","haxe/ui/backend/ScreenImpl.hx",41,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_52_get_title,"haxe.ui.backend.ScreenImpl","get_title",0x23a6fc39,"haxe.ui.backend.ScreenImpl.get_title","haxe/ui/backend/ScreenImpl.hx",52,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_55_addComponent,"haxe.ui.backend.ScreenImpl","addComponent",0x6c819252,"haxe.ui.backend.ScreenImpl.addComponent","haxe/ui/backend/ScreenImpl.hx",55,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_66_removeComponent,"haxe.ui.backend.ScreenImpl","removeComponent",0xf4ece9a3,"haxe.ui.backend.ScreenImpl.removeComponent","haxe/ui/backend/ScreenImpl.hx",66,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_72_handleSetComponentIndex,"haxe.ui.backend.ScreenImpl","handleSetComponentIndex",0xc8d2ab59,"haxe.ui.backend.ScreenImpl.handleSetComponentIndex","haxe/ui/backend/ScreenImpl.hx",72,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_88_onContainerResize,"haxe.ui.backend.ScreenImpl","onContainerResize",0xb016d000,"haxe.ui.backend.ScreenImpl.onContainerResize","haxe/ui/backend/ScreenImpl.hx",88,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_100_get_container,"haxe.ui.backend.ScreenImpl","get_container",0x414dc062,"haxe.ui.backend.ScreenImpl.get_container","haxe/ui/backend/ScreenImpl.hx",100,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_122_supportsEvent,"haxe.ui.backend.ScreenImpl","supportsEvent",0x6f292f40,"haxe.ui.backend.ScreenImpl.supportsEvent","haxe/ui/backend/ScreenImpl.hx",122,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_130_mapEvent,"haxe.ui.backend.ScreenImpl","mapEvent",0xaff804d4,"haxe.ui.backend.ScreenImpl.mapEvent","haxe/ui/backend/ScreenImpl.hx",130,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_153_unmapEvent,"haxe.ui.backend.ScreenImpl","unmapEvent",0x6d4195ad,"haxe.ui.backend.ScreenImpl.unmapEvent","haxe/ui/backend/ScreenImpl.hx",153,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_169___onMouseEvent,"haxe.ui.backend.ScreenImpl","__onMouseEvent",0x33c7ca4a,"haxe.ui.backend.ScreenImpl.__onMouseEvent","haxe/ui/backend/ScreenImpl.hx",169,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_186___onKeyEvent,"haxe.ui.backend.ScreenImpl","__onKeyEvent",0x2e523d50,"haxe.ui.backend.ScreenImpl.__onKeyEvent","haxe/ui/backend/ScreenImpl.hx",186,0x18a34445)
namespace haxe{
namespace ui{
namespace backend{

void ScreenImpl_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_7a615936dd15791e_16_new)
HXLINE(  98)		this->_containerReady = false;
HXLINE(  19)		super::__construct();
HXLINE(  20)		this->_mapping =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic ScreenImpl_obj::__CreateEmpty() { return new ScreenImpl_obj; }

void *ScreenImpl_obj::_hx_vtable = 0;

Dynamic ScreenImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScreenImpl_obj > _hx_result = new ScreenImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScreenImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7f344a3f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7f344a3f;
	} else {
		return inClassId==(int)0x7faef962;
	}
}

Float ScreenImpl_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_23_get_width)
HXLINE(  24)		 ::openfl::display::DisplayObjectContainer _hx_tmp = this->get_container();
HXDLIN(  24)		if (::hx::IsInstanceEq( _hx_tmp,::openfl::Lib_obj::get_current()->stage )) {
HXLINE(  25)			int _hx_tmp1 = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXDLIN(  25)			return (( (Float)(_hx_tmp1) ) / ::haxe::ui::Toolkit_obj::get_scaleX());
            		}
HXLINE(  27)		Float _hx_tmp2 = this->get_container()->get_width();
HXDLIN(  27)		return (_hx_tmp2 / ::haxe::ui::Toolkit_obj::get_scaleX());
            	}


Float ScreenImpl_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_30_get_height)
HXLINE(  31)		 ::openfl::display::DisplayObjectContainer _hx_tmp = this->get_container();
HXDLIN(  31)		if (::hx::IsInstanceEq( _hx_tmp,::openfl::Lib_obj::get_current()->stage )) {
HXLINE(  32)			int _hx_tmp1 = ::openfl::Lib_obj::get_current()->stage->stageHeight;
HXDLIN(  32)			return (( (Float)(_hx_tmp1) ) / ::haxe::ui::Toolkit_obj::get_scaleY());
            		}
HXLINE(  34)		Float _hx_tmp2 = this->get_container()->get_height();
HXDLIN(  34)		return (_hx_tmp2 / ::haxe::ui::Toolkit_obj::get_scaleY());
            	}


Float ScreenImpl_obj::get_dpi(){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_38_get_dpi)
HXDLIN(  38)		return ::lime::_hx_system::System_obj::getDisplay(0)->dpi;
            	}


::String ScreenImpl_obj::set_title(::String s){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_41_set_title)
HXLINE(  45)		::openfl::Lib_obj::get_current()->stage->window->set_title(s);
HXLINE(  46)		return s;
            	}


::String ScreenImpl_obj::get_title(){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_52_get_title)
HXDLIN(  52)		return ::openfl::Lib_obj::get_current()->stage->window->_hx___title;
            	}


 ::haxe::ui::core::Component ScreenImpl_obj::addComponent( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_55_addComponent)
HXLINE(  56)		component->set_scaleX(::haxe::ui::Toolkit_obj::get_scaleX());
HXLINE(  57)		component->set_scaleY(::haxe::ui::Toolkit_obj::get_scaleY());
HXLINE(  58)		if ((this->rootComponents->indexOf(component,null()) == -1)) {
HXLINE(  59)			this->rootComponents->push(component);
HXLINE(  60)			this->get_container()->addChild(component);
HXLINE(  61)			this->onContainerResize(null());
            		}
HXLINE(  63)		return component;
            	}


 ::haxe::ui::core::Component ScreenImpl_obj::removeComponent( ::haxe::ui::core::Component component,::hx::Null< bool >  __o_dispose){
            		bool dispose = __o_dispose.Default(true);
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_66_removeComponent)
HXLINE(  67)		this->rootComponents->remove(component);
HXLINE(  68)		this->get_container()->removeChild(component);
HXLINE(  69)		return component;
            	}


void ScreenImpl_obj::handleSetComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_72_handleSetComponentIndex)
HXLINE(  73)		this->rootComponents->remove(child);
HXLINE(  74)		this->rootComponents->insert(index,child);
HXLINE(  76)		int offset = 0;
HXLINE(  77)		{
HXLINE(  77)			int _g = 0;
HXDLIN(  77)			int _g1 = this->get_container()->get_numChildren();
HXDLIN(  77)			while((_g < _g1)){
HXLINE(  77)				_g = (_g + 1);
HXDLIN(  77)				int i = (_g - 1);
HXLINE(  78)				 ::openfl::display::DisplayObject c = this->get_container()->getChildAt(i);
HXLINE(  79)				if (::Std_obj::isOfType(c,::hx::ClassOf< ::haxe::ui::core::Component >())) {
HXLINE(  80)					offset = i;
HXLINE(  81)					goto _hx_goto_8;
            				}
            			}
            			_hx_goto_8:;
            		}
HXLINE(  85)		this->get_container()->setChildIndex(child,(index + offset));
            	}


void ScreenImpl_obj::onContainerResize( ::openfl::events::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_7a615936dd15791e_88_onContainerResize)
HXLINE(  89)		this->resizeRootComponents();
HXLINE(  91)		 ::Dynamic fn = this->_mapping->get(HX_("resize",f4,59,7b,08));
HXLINE(  92)		if (::hx::IsNotNull( fn )) {
HXLINE(  93)			 ::haxe::ui::events::UIEvent uiEvent =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("resize",f4,59,7b,08),null(),null());
HXLINE(  94)			fn(uiEvent);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenImpl_obj,onContainerResize,(void))

 ::openfl::display::DisplayObjectContainer ScreenImpl_obj::get_container(){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_100_get_container)
HXLINE( 101)		 ::openfl::display::Stage c = null();
HXLINE( 102)		bool _hx_tmp;
HXDLIN( 102)		if (::hx::IsNotNull( this->get_options() )) {
HXLINE( 102)			_hx_tmp = ::hx::IsNull( this->get_options()->__Field(HX_("container",41,75,73,bf),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 102)			_hx_tmp = true;
            		}
HXDLIN( 102)		if (_hx_tmp) {
HXLINE( 103)			c = ::openfl::Lib_obj::get_current()->stage;
            		}
            		else {
HXLINE( 105)			c = ( ( ::openfl::display::Stage)(this->get_options()->__Field(HX_("container",41,75,73,bf),::hx::paccDynamic)) );
            		}
HXLINE( 108)		if ((this->_containerReady == false)) {
HXLINE( 109)			c->stage->set_quality(0);
HXLINE( 110)			c->set_scaleMode(2);
HXLINE( 111)			c->align = 6;
HXLINE( 112)			c->addEventListener(HX_("resize",f4,59,7b,08),this->onContainerResize_dyn(),false,0,true);
HXLINE( 113)			this->_containerReady = true;
            		}
HXLINE( 116)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenImpl_obj,get_container,return )

bool ScreenImpl_obj::supportsEvent(::String type){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_122_supportsEvent)
HXLINE( 123)		if ((type == HX_("resize",f4,59,7b,08))) {
HXLINE( 124)			return true;
            		}
HXLINE( 126)		return ::hx::IsNotNull( ::haxe::ui::backend::openfl::EventMapper_obj::HAXEUI_TO_OPENFL->get(type) );
            	}


void ScreenImpl_obj::mapEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_130_mapEvent)
HXDLIN( 130)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("keydown",81,3d,6e,b1)) ||  (_hx_switch_0==HX_("keyup",ba,d5,fe,de)) ){
HXLINE( 140)			if ((this->_mapping->exists(type) == false)) {
HXLINE( 141)				this->_mapping->set(type,listener);
HXLINE( 142)				 ::openfl::display::Stage _hx_tmp = ::openfl::Lib_obj::get_current()->stage;
HXDLIN( 142)				_hx_tmp->addEventListener(::haxe::ui::backend::openfl::EventMapper_obj::HAXEUI_TO_OPENFL->get_string(type),this->_hx___onKeyEvent_dyn(),false,0,true);
            			}
HXLINE( 140)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==HX_("resize",f4,59,7b,08)) ){
HXLINE( 146)			if ((this->_mapping->exists(type) == false)) {
HXLINE( 147)				this->_mapping->set(type,listener);
            			}
HXLINE( 146)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==HX_("click",48,7c,5e,48)) ||  (_hx_switch_0==HX_("doubleclick",97,93,48,3a)) ||  (_hx_switch_0==HX_("mousedown",07,85,e9,03)) ||  (_hx_switch_0==HX_("mousemove",b6,6f,dc,09)) ||  (_hx_switch_0==HX_("mouseout",89,2f,36,a4)) ||  (_hx_switch_0==HX_("mouseover",f9,1d,34,0b)) ||  (_hx_switch_0==HX_("mouseup",c0,0f,73,c0)) ||  (_hx_switch_0==HX_("rightclick",ec,f2,f5,b7)) ||  (_hx_switch_0==HX_("rightmousedown",ab,1d,2b,41)) ||  (_hx_switch_0==HX_("rightmouseup",64,77,d0,dd)) ){
HXLINE( 134)			if ((this->_mapping->exists(type) == false)) {
HXLINE( 135)				this->_mapping->set(type,listener);
HXLINE( 136)				 ::openfl::display::Stage _hx_tmp1 = ::openfl::Lib_obj::get_current()->stage;
HXDLIN( 136)				_hx_tmp1->addEventListener(::haxe::ui::backend::openfl::EventMapper_obj::HAXEUI_TO_OPENFL->get_string(type),this->_hx___onMouseEvent_dyn(),false,0,true);
            			}
HXLINE( 134)			goto _hx_goto_13;
            		}
            		_hx_goto_13:;
            	}


void ScreenImpl_obj::unmapEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_153_unmapEvent)
HXDLIN( 153)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("keydown",81,3d,6e,b1)) ||  (_hx_switch_0==HX_("keyup",ba,d5,fe,de)) ){
HXLINE( 161)			this->_mapping->remove(type);
HXLINE( 162)			 ::openfl::display::Stage _hx_tmp = ::openfl::Lib_obj::get_current()->stage;
HXDLIN( 162)			_hx_tmp->removeEventListener(::haxe::ui::backend::openfl::EventMapper_obj::HAXEUI_TO_OPENFL->get_string(type),this->_hx___onKeyEvent_dyn(),null());
HXLINE( 160)			goto _hx_goto_15;
            		}
            		if (  (_hx_switch_0==HX_("resize",f4,59,7b,08)) ){
HXLINE( 165)			this->_mapping->remove(type);
HXDLIN( 165)			goto _hx_goto_15;
            		}
            		if (  (_hx_switch_0==HX_("click",48,7c,5e,48)) ||  (_hx_switch_0==HX_("doubleclick",97,93,48,3a)) ||  (_hx_switch_0==HX_("mousedown",07,85,e9,03)) ||  (_hx_switch_0==HX_("mousemove",b6,6f,dc,09)) ||  (_hx_switch_0==HX_("mouseout",89,2f,36,a4)) ||  (_hx_switch_0==HX_("mouseover",f9,1d,34,0b)) ||  (_hx_switch_0==HX_("mouseup",c0,0f,73,c0)) ||  (_hx_switch_0==HX_("rightclick",ec,f2,f5,b7)) ||  (_hx_switch_0==HX_("rightmousedown",ab,1d,2b,41)) ||  (_hx_switch_0==HX_("rightmouseup",64,77,d0,dd)) ){
HXLINE( 157)			this->_mapping->remove(type);
HXLINE( 158)			 ::openfl::display::Stage _hx_tmp1 = ::openfl::Lib_obj::get_current()->stage;
HXDLIN( 158)			_hx_tmp1->removeEventListener(::haxe::ui::backend::openfl::EventMapper_obj::HAXEUI_TO_OPENFL->get_string(type),this->_hx___onMouseEvent_dyn(),null());
HXLINE( 154)			goto _hx_goto_15;
            		}
            		_hx_goto_15:;
            	}


void ScreenImpl_obj::_hx___onMouseEvent( ::openfl::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_7a615936dd15791e_169___onMouseEvent)
HXLINE( 170)		::String type = ::haxe::ui::backend::openfl::EventMapper_obj::OPENFL_TO_HAXEUI->get_string(event->type);
HXLINE( 171)		if (::hx::IsNotNull( type )) {
HXLINE( 172)			 ::Dynamic fn = this->_mapping->get(type);
HXLINE( 173)			if (::hx::IsNotNull( fn )) {
HXLINE( 174)				 ::haxe::ui::events::MouseEvent mouseEvent =  ::haxe::ui::events::MouseEvent_obj::__alloc( HX_CTX ,type);
HXLINE( 175)				mouseEvent->_originalEvent = event;
HXLINE( 176)				Float event1 = event->stageX;
HXDLIN( 176)				mouseEvent->screenX = (event1 / ::haxe::ui::Toolkit_obj::get_scaleX());
HXLINE( 177)				Float event2 = event->stageY;
HXDLIN( 177)				mouseEvent->screenY = (event2 / ::haxe::ui::Toolkit_obj::get_scaleY());
HXLINE( 178)				mouseEvent->buttonDown = event->buttonDown;
HXLINE( 179)				mouseEvent->ctrlKey = event->ctrlKey;
HXLINE( 180)				mouseEvent->shiftKey = event->shiftKey;
HXLINE( 181)				fn(mouseEvent);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenImpl_obj,_hx___onMouseEvent,(void))

void ScreenImpl_obj::_hx___onKeyEvent( ::openfl::events::KeyboardEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_7a615936dd15791e_186___onKeyEvent)
HXLINE( 187)		::String type = ::haxe::ui::backend::openfl::EventMapper_obj::OPENFL_TO_HAXEUI->get_string(event->type);
HXLINE( 188)		if (::hx::IsNotNull( type )) {
HXLINE( 189)			 ::Dynamic fn = this->_mapping->get(type);
HXLINE( 190)			if (::hx::IsNotNull( fn )) {
HXLINE( 191)				 ::haxe::ui::events::KeyboardEvent keyboardEvent =  ::haxe::ui::events::KeyboardEvent_obj::__alloc( HX_CTX ,type);
HXLINE( 192)				keyboardEvent->_originalEvent = event;
HXLINE( 193)				keyboardEvent->keyCode = event->keyCode;
HXLINE( 194)				keyboardEvent->ctrlKey = event->ctrlKey;
HXLINE( 195)				keyboardEvent->shiftKey = event->shiftKey;
HXLINE( 196)				fn(keyboardEvent);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenImpl_obj,_hx___onKeyEvent,(void))


::hx::ObjectPtr< ScreenImpl_obj > ScreenImpl_obj::__new() {
	::hx::ObjectPtr< ScreenImpl_obj > __this = new ScreenImpl_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ScreenImpl_obj > ScreenImpl_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ScreenImpl_obj *__this = (ScreenImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScreenImpl_obj), true, "haxe.ui.backend.ScreenImpl"));
	*(void **)__this = ScreenImpl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScreenImpl_obj::ScreenImpl_obj()
{
}

void ScreenImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScreenImpl);
	HX_MARK_MEMBER_NAME(_mapping,"_mapping");
	HX_MARK_MEMBER_NAME(_containerReady,"_containerReady");
	HX_MARK_MEMBER_NAME(container,"container");
	 ::haxe::ui::backend::ScreenBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScreenImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_mapping,"_mapping");
	HX_VISIT_MEMBER_NAME(_containerReady,"_containerReady");
	HX_VISIT_MEMBER_NAME(container,"container");
	 ::haxe::ui::backend::ScreenBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScreenImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"get_dpi") ) { return ::hx::Val( get_dpi_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_mapping") ) { return ::hx::Val( _mapping ); }
		if (HX_FIELD_EQ(inName,"mapEvent") ) { return ::hx::Val( mapEvent_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return ::hx::Val( set_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_title") ) { return ::hx::Val( get_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"container") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_container() : container ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"unmapEvent") ) { return ::hx::Val( unmapEvent_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"__onKeyEvent") ) { return ::hx::Val( _hx___onKeyEvent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_container") ) { return ::hx::Val( get_container_dyn() ); }
		if (HX_FIELD_EQ(inName,"supportsEvent") ) { return ::hx::Val( supportsEvent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__onMouseEvent") ) { return ::hx::Val( _hx___onMouseEvent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_containerReady") ) { return ::hx::Val( _containerReady ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onContainerResize") ) { return ::hx::Val( onContainerResize_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"handleSetComponentIndex") ) { return ::hx::Val( handleSetComponentIndex_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScreenImpl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_mapping") ) { _mapping=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"container") ) { container=inValue.Cast<  ::openfl::display::DisplayObjectContainer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_containerReady") ) { _containerReady=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_mapping",8f,d4,32,7e));
	outFields->push(HX_("_containerReady",01,38,5f,e1));
	outFields->push(HX_("container",41,75,73,bf));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScreenImpl_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ScreenImpl_obj,_mapping),HX_("_mapping",8f,d4,32,7e)},
	{::hx::fsBool,(int)offsetof(ScreenImpl_obj,_containerReady),HX_("_containerReady",01,38,5f,e1)},
	{::hx::fsObject /*  ::openfl::display::DisplayObjectContainer */ ,(int)offsetof(ScreenImpl_obj,container),HX_("container",41,75,73,bf)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScreenImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String ScreenImpl_obj_sMemberFields[] = {
	HX_("_mapping",8f,d4,32,7e),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("get_dpi",f4,0b,c1,26),
	HX_("set_title",fb,5d,35,37),
	HX_("get_title",ef,71,e4,53),
	HX_("addComponent",5c,12,a8,0e),
	HX_("removeComponent",d9,8b,72,50),
	HX_("handleSetComponentIndex",8f,73,b6,f4),
	HX_("onContainerResize",b6,eb,f1,31),
	HX_("_containerReady",01,38,5f,e1),
	HX_("container",41,75,73,bf),
	HX_("get_container",18,49,d7,80),
	HX_("supportsEvent",f6,b7,b2,ae),
	HX_("mapEvent",de,37,07,ed),
	HX_("unmapEvent",37,1f,cb,72),
	HX_("__onMouseEvent",d4,e0,95,8c),
	HX_("__onKeyEvent",5a,bd,78,d0),
	::String(null()) };

::hx::Class ScreenImpl_obj::__mClass;

void ScreenImpl_obj::__register()
{
	ScreenImpl_obj _hx_dummy;
	ScreenImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.ScreenImpl",38,0a,49,cc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScreenImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScreenImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScreenImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScreenImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
