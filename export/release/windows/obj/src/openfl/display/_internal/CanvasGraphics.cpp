// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_CanvasRenderer
#include <openfl/display/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasGraphics
#include <openfl/display/_internal/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_1461_renderMask,"openfl.display._internal.CanvasGraphics","renderMask",0x605729b1,"openfl.display._internal.CanvasGraphics.renderMask","openfl/display/_internal/CanvasGraphics.hx",1461,0x5a71bf7c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_34_boot,"openfl.display._internal.CanvasGraphics","boot",0x19dfbd41,"openfl.display._internal.CanvasGraphics.boot","openfl/display/_internal/CanvasGraphics.hx",34,0x5a71bf7c)
namespace openfl{
namespace display{
namespace _internal{

void CanvasGraphics_obj::__construct() { }

Dynamic CanvasGraphics_obj::__CreateEmpty() { return new CanvasGraphics_obj; }

void *CanvasGraphics_obj::_hx_vtable = 0;

Dynamic CanvasGraphics_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CanvasGraphics_obj > _hx_result = new CanvasGraphics_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CanvasGraphics_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1d4500f1;
}

void CanvasGraphics_obj::renderMask( ::openfl::display::Graphics graphics, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_1461_renderMask)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasGraphics_obj,renderMask,(void))


CanvasGraphics_obj::CanvasGraphics_obj()
{
}

bool CanvasGraphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CanvasGraphics_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CanvasGraphics_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CanvasGraphics_obj::__mClass;

static ::String CanvasGraphics_obj_sStaticFields[] = {
	HX_("renderMask",62,3b,60,e5),
	::String(null())
};

void CanvasGraphics_obj::__register()
{
	CanvasGraphics_obj _hx_dummy;
	CanvasGraphics_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CanvasGraphics",bf,c1,78,cf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CanvasGraphics_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CanvasGraphics_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CanvasGraphics_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasGraphics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasGraphics_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CanvasGraphics_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_34_boot)
HXDLIN(  34)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
