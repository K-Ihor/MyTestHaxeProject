// Generated by Haxe 4.3.2
#ifndef INCLUDED_lime_net__IHTTPRequest
#define INCLUDED_lime_net__IHTTPRequest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,net,HTTPRequestHeader)
HX_DECLARE_CLASS2(lime,net,_IHTTPRequest)

namespace lime{
namespace net{


class HXCPP_CLASS_ATTRIBUTES _IHTTPRequest_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_cancel)(); 
		static inline void cancel( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::lime::net::_IHTTPRequest_obj *>(_hx_.mPtr->_hx_getInterface(0x154a91b5)))->_hx_cancel)();
		}
};

} // end namespace lime
} // end namespace net

#endif /* INCLUDED_lime_net__IHTTPRequest */ 
