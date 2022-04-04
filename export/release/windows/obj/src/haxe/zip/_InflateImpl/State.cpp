// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_zip__InflateImpl_State
#include <haxe/zip/_InflateImpl/State.h>
#endif
namespace haxe{
namespace zip{
namespace _InflateImpl{

::haxe::zip::_InflateImpl::State State_obj::Block;

::haxe::zip::_InflateImpl::State State_obj::CData;

::haxe::zip::_InflateImpl::State State_obj::Crc;

::haxe::zip::_InflateImpl::State State_obj::Dist;

::haxe::zip::_InflateImpl::State State_obj::DistOne;

::haxe::zip::_InflateImpl::State State_obj::Done;

::haxe::zip::_InflateImpl::State State_obj::Flat;

::haxe::zip::_InflateImpl::State State_obj::Head;

bool State_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Block",2d,e5,29,48)) { outValue = State_obj::Block; return true; }
	if (inName==HX_("CData",0d,60,15,c1)) { outValue = State_obj::CData; return true; }
	if (inName==HX_("Crc",b4,3a,33,00)) { outValue = State_obj::Crc; return true; }
	if (inName==HX_("Dist",86,93,42,2d)) { outValue = State_obj::Dist; return true; }
	if (inName==HX_("DistOne",80,36,2a,8b)) { outValue = State_obj::DistOne; return true; }
	if (inName==HX_("Done",a2,1c,47,2d)) { outValue = State_obj::Done; return true; }
	if (inName==HX_("Flat",d9,37,97,2e)) { outValue = State_obj::Flat; return true; }
	if (inName==HX_("Head",40,55,e4,2f)) { outValue = State_obj::Head; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(State_obj)

int State_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Block",2d,e5,29,48)) return 1;
	if (inName==HX_("CData",0d,60,15,c1)) return 2;
	if (inName==HX_("Crc",b4,3a,33,00)) return 4;
	if (inName==HX_("Dist",86,93,42,2d)) return 5;
	if (inName==HX_("DistOne",80,36,2a,8b)) return 6;
	if (inName==HX_("Done",a2,1c,47,2d)) return 7;
	if (inName==HX_("Flat",d9,37,97,2e)) return 3;
	if (inName==HX_("Head",40,55,e4,2f)) return 0;
	return super::__FindIndex(inName);
}

int State_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Block",2d,e5,29,48)) return 0;
	if (inName==HX_("CData",0d,60,15,c1)) return 0;
	if (inName==HX_("Crc",b4,3a,33,00)) return 0;
	if (inName==HX_("Dist",86,93,42,2d)) return 0;
	if (inName==HX_("DistOne",80,36,2a,8b)) return 0;
	if (inName==HX_("Done",a2,1c,47,2d)) return 0;
	if (inName==HX_("Flat",d9,37,97,2e)) return 0;
	if (inName==HX_("Head",40,55,e4,2f)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val State_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Block",2d,e5,29,48)) return Block;
	if (inName==HX_("CData",0d,60,15,c1)) return CData;
	if (inName==HX_("Crc",b4,3a,33,00)) return Crc;
	if (inName==HX_("Dist",86,93,42,2d)) return Dist;
	if (inName==HX_("DistOne",80,36,2a,8b)) return DistOne;
	if (inName==HX_("Done",a2,1c,47,2d)) return Done;
	if (inName==HX_("Flat",d9,37,97,2e)) return Flat;
	if (inName==HX_("Head",40,55,e4,2f)) return Head;
	return super::__Field(inName,inCallProp);
}

static ::String State_obj_sStaticFields[] = {
	HX_("Head",40,55,e4,2f),
	HX_("Block",2d,e5,29,48),
	HX_("CData",0d,60,15,c1),
	HX_("Flat",d9,37,97,2e),
	HX_("Crc",b4,3a,33,00),
	HX_("Dist",86,93,42,2d),
	HX_("DistOne",80,36,2a,8b),
	HX_("Done",a2,1c,47,2d),
	::String(null())
};

::hx::Class State_obj::__mClass;

Dynamic __Create_State_obj() { return new State_obj; }

void State_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("haxe.zip._InflateImpl.State",a0,c2,8b,f6), ::hx::TCanCast< State_obj >,State_obj_sStaticFields,0,
	&__Create_State_obj, &__Create,
	&super::__SGetClass(), &CreateState_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &State_obj::__GetStatic;
}

void State_obj::__boot()
{
Block = ::hx::CreateConstEnum< State_obj >(HX_("Block",2d,e5,29,48),1);
CData = ::hx::CreateConstEnum< State_obj >(HX_("CData",0d,60,15,c1),2);
Crc = ::hx::CreateConstEnum< State_obj >(HX_("Crc",b4,3a,33,00),4);
Dist = ::hx::CreateConstEnum< State_obj >(HX_("Dist",86,93,42,2d),5);
DistOne = ::hx::CreateConstEnum< State_obj >(HX_("DistOne",80,36,2a,8b),6);
Done = ::hx::CreateConstEnum< State_obj >(HX_("Done",a2,1c,47,2d),7);
Flat = ::hx::CreateConstEnum< State_obj >(HX_("Flat",d9,37,97,2e),3);
Head = ::hx::CreateConstEnum< State_obj >(HX_("Head",40,55,e4,2f),0);
}


} // end namespace haxe
} // end namespace zip
} // end namespace _InflateImpl
