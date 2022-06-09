#include <hxcpp.h>

#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#include <flixel/ui/FlxBarFillDirection.h>
#endif
namespace flixel{
namespace ui{

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::BOTTOM_TO_TOP;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::HORIZONTAL_INSIDE_OUT;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::HORIZONTAL_OUTSIDE_IN;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::LEFT_TO_RIGHT;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::RIGHT_TO_LEFT;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::TOP_TO_BOTTOM;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::VERTICAL_INSIDE_OUT;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::VERTICAL_OUTSIDE_IN;

bool FlxBarFillDirection_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BOTTOM_TO_TOP",85,ec,ed,b3)) { outValue = FlxBarFillDirection_obj::BOTTOM_TO_TOP; return true; }
	if (inName==HX_("HORIZONTAL_INSIDE_OUT",26,1a,06,ee)) { outValue = FlxBarFillDirection_obj::HORIZONTAL_INSIDE_OUT; return true; }
	if (inName==HX_("HORIZONTAL_OUTSIDE_IN",da,a4,a6,68)) { outValue = FlxBarFillDirection_obj::HORIZONTAL_OUTSIDE_IN; return true; }
	if (inName==HX_("LEFT_TO_RIGHT",30,11,7b,07)) { outValue = FlxBarFillDirection_obj::LEFT_TO_RIGHT; return true; }
	if (inName==HX_("RIGHT_TO_LEFT",c8,1d,8d,7b)) { outValue = FlxBarFillDirection_obj::RIGHT_TO_LEFT; return true; }
	if (inName==HX_("TOP_TO_BOTTOM",e5,52,9a,32)) { outValue = FlxBarFillDirection_obj::TOP_TO_BOTTOM; return true; }
	if (inName==HX_("VERTICAL_INSIDE_OUT",d4,a3,4c,1d)) { outValue = FlxBarFillDirection_obj::VERTICAL_INSIDE_OUT; return true; }
	if (inName==HX_("VERTICAL_OUTSIDE_IN",88,2e,ed,97)) { outValue = FlxBarFillDirection_obj::VERTICAL_OUTSIDE_IN; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxBarFillDirection_obj)

int FlxBarFillDirection_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BOTTOM_TO_TOP",85,ec,ed,b3)) return 3;
	if (inName==HX_("HORIZONTAL_INSIDE_OUT",26,1a,06,ee)) return 4;
	if (inName==HX_("HORIZONTAL_OUTSIDE_IN",da,a4,a6,68)) return 5;
	if (inName==HX_("LEFT_TO_RIGHT",30,11,7b,07)) return 0;
	if (inName==HX_("RIGHT_TO_LEFT",c8,1d,8d,7b)) return 1;
	if (inName==HX_("TOP_TO_BOTTOM",e5,52,9a,32)) return 2;
	if (inName==HX_("VERTICAL_INSIDE_OUT",d4,a3,4c,1d)) return 6;
	if (inName==HX_("VERTICAL_OUTSIDE_IN",88,2e,ed,97)) return 7;
	return super::__FindIndex(inName);
}

int FlxBarFillDirection_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BOTTOM_TO_TOP",85,ec,ed,b3)) return 0;
	if (inName==HX_("HORIZONTAL_INSIDE_OUT",26,1a,06,ee)) return 0;
	if (inName==HX_("HORIZONTAL_OUTSIDE_IN",da,a4,a6,68)) return 0;
	if (inName==HX_("LEFT_TO_RIGHT",30,11,7b,07)) return 0;
	if (inName==HX_("RIGHT_TO_LEFT",c8,1d,8d,7b)) return 0;
	if (inName==HX_("TOP_TO_BOTTOM",e5,52,9a,32)) return 0;
	if (inName==HX_("VERTICAL_INSIDE_OUT",d4,a3,4c,1d)) return 0;
	if (inName==HX_("VERTICAL_OUTSIDE_IN",88,2e,ed,97)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxBarFillDirection_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BOTTOM_TO_TOP",85,ec,ed,b3)) return BOTTOM_TO_TOP;
	if (inName==HX_("HORIZONTAL_INSIDE_OUT",26,1a,06,ee)) return HORIZONTAL_INSIDE_OUT;
	if (inName==HX_("HORIZONTAL_OUTSIDE_IN",da,a4,a6,68)) return HORIZONTAL_OUTSIDE_IN;
	if (inName==HX_("LEFT_TO_RIGHT",30,11,7b,07)) return LEFT_TO_RIGHT;
	if (inName==HX_("RIGHT_TO_LEFT",c8,1d,8d,7b)) return RIGHT_TO_LEFT;
	if (inName==HX_("TOP_TO_BOTTOM",e5,52,9a,32)) return TOP_TO_BOTTOM;
	if (inName==HX_("VERTICAL_INSIDE_OUT",d4,a3,4c,1d)) return VERTICAL_INSIDE_OUT;
	if (inName==HX_("VERTICAL_OUTSIDE_IN",88,2e,ed,97)) return VERTICAL_OUTSIDE_IN;
	return super::__Field(inName,inCallProp);
}

static ::String FlxBarFillDirection_obj_sStaticFields[] = {
	HX_("LEFT_TO_RIGHT",30,11,7b,07),
	HX_("RIGHT_TO_LEFT",c8,1d,8d,7b),
	HX_("TOP_TO_BOTTOM",e5,52,9a,32),
	HX_("BOTTOM_TO_TOP",85,ec,ed,b3),
	HX_("HORIZONTAL_INSIDE_OUT",26,1a,06,ee),
	HX_("HORIZONTAL_OUTSIDE_IN",da,a4,a6,68),
	HX_("VERTICAL_INSIDE_OUT",d4,a3,4c,1d),
	HX_("VERTICAL_OUTSIDE_IN",88,2e,ed,97),
	::String(null())
};

::hx::Class FlxBarFillDirection_obj::__mClass;

Dynamic __Create_FlxBarFillDirection_obj() { return new FlxBarFillDirection_obj; }

void FlxBarFillDirection_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.ui.FlxBarFillDirection",93,96,f4,4c), ::hx::TCanCast< FlxBarFillDirection_obj >,FlxBarFillDirection_obj_sStaticFields,0,
	&__Create_FlxBarFillDirection_obj, &__Create,
	&super::__SGetClass(), &CreateFlxBarFillDirection_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxBarFillDirection_obj::__GetStatic;
}

void FlxBarFillDirection_obj::__boot()
{
BOTTOM_TO_TOP = ::hx::CreateConstEnum< FlxBarFillDirection_obj >(HX_("BOTTOM_TO_TOP",85,ec,ed,b3),3);
HORIZONTAL_INSIDE_OUT = ::hx::CreateConstEnum< FlxBarFillDirection_obj >(HX_("HORIZONTAL_INSIDE_OUT",26,1a,06,ee),4);
HORIZONTAL_OUTSIDE_IN = ::hx::CreateConstEnum< FlxBarFillDirection_obj >(HX_("HORIZONTAL_OUTSIDE_IN",da,a4,a6,68),5);
LEFT_TO_RIGHT = ::hx::CreateConstEnum< FlxBarFillDirection_obj >(HX_("LEFT_TO_RIGHT",30,11,7b,07),0);
RIGHT_TO_LEFT = ::hx::CreateConstEnum< FlxBarFillDirection_obj >(HX_("RIGHT_TO_LEFT",c8,1d,8d,7b),1);
TOP_TO_BOTTOM = ::hx::CreateConstEnum< FlxBarFillDirection_obj >(HX_("TOP_TO_BOTTOM",e5,52,9a,32),2);
VERTICAL_INSIDE_OUT = ::hx::CreateConstEnum< FlxBarFillDirection_obj >(HX_("VERTICAL_INSIDE_OUT",d4,a3,4c,1d),6);
VERTICAL_OUTSIDE_IN = ::hx::CreateConstEnum< FlxBarFillDirection_obj >(HX_("VERTICAL_OUTSIDE_IN",88,2e,ed,97),7);
}


} // end namespace flixel
} // end namespace ui
