// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

namespace openfl{
namespace display{


static ::String IBitmapDrawable_obj_sMemberFields[] = {
	HX_("__drawableType",98,b4,3c,42),
	HX_("__renderTransform",16,b8,95,b1),
	HX_("__worldAlpha",cc,d2,d6,c5),
	HX_("__worldColorTransform",5b,ce,21,a3),
	HX_("__getBounds",8b,58,a0,10),
	HX_("__update",29,f1,34,2f),
	HX_("__mask",0c,a4,4e,f7),
	HX_("__scrollRect",f1,56,fa,41),
	::String(null()) };

::hx::Class IBitmapDrawable_obj::__mClass;

void IBitmapDrawable_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.IBitmapDrawable",cc,6b,fd,68);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IBitmapDrawable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xc1c6fbe4 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
