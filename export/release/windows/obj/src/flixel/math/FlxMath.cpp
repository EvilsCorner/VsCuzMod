// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_65_roundDecimal,"flixel.math.FlxMath","roundDecimal",0xaa14776b,"flixel.math.FlxMath.roundDecimal","flixel/math/FlxMath.hx",65,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_287_remapToRange,"flixel.math.FlxMath","remapToRange",0x60fbca01,"flixel.math.FlxMath.remapToRange","flixel/math/FlxMath.hx",287,0x837802f8)
namespace flixel{
namespace math{

void FlxMath_obj::__construct() { }

Dynamic FlxMath_obj::__CreateEmpty() { return new FlxMath_obj; }

void *FlxMath_obj::_hx_vtable = 0;

Dynamic FlxMath_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxMath_obj > _hx_result = new FlxMath_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxMath_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7a539556;
}

Float FlxMath_obj::roundDecimal(Float Value,int Precision){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_65_roundDecimal)
HXLINE(  66)		Float mult = ( (Float)(1) );
HXLINE(  67)		{
HXLINE(  67)			int _g = 0;
HXDLIN(  67)			int _g1 = Precision;
HXDLIN(  67)			while((_g < _g1)){
HXLINE(  67)				_g = (_g + 1);
HXDLIN(  67)				int i = (_g - 1);
HXLINE(  69)				mult = (mult * ( (Float)(10) ));
            			}
            		}
HXLINE(  71)		return (::Math_obj::fround((Value * mult)) / mult);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,roundDecimal,return )

Float FlxMath_obj::remapToRange(Float value,Float start1,Float stop1,Float start2,Float stop2){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_287_remapToRange)
HXDLIN( 287)		return (start2 + ((value - start1) * ((stop2 - start2) / (stop1 - start1))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxMath_obj,remapToRange,return )


FlxMath_obj::FlxMath_obj()
{
}

bool FlxMath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"roundDecimal") ) { outValue = roundDecimal_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"remapToRange") ) { outValue = remapToRange_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxMath_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxMath_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxMath_obj::__mClass;

static ::String FlxMath_obj_sStaticFields[] = {
	HX_("roundDecimal",e3,a9,4c,b9),
	HX_("remapToRange",79,fc,33,70),
	::String(null())
};

void FlxMath_obj::__register()
{
	FlxMath_obj _hx_dummy;
	FlxMath_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.math.FlxMath",e6,47,47,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxMath_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxMath_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxMath_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxMath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxMath_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace math
