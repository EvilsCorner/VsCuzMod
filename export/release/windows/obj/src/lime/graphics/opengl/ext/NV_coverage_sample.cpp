#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_NV_coverage_sample
#include <lime/graphics/opengl/ext/NV_coverage_sample.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d197f49e97430958_4_new,"lime.graphics.opengl.ext.NV_coverage_sample","new",0x08bce1be,"lime.graphics.opengl.ext.NV_coverage_sample.new","lime/graphics/opengl/ext/NV_coverage_sample.hx",4,0xb353c790)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void NV_coverage_sample_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d197f49e97430958_4_new)
HXLINE(  14)		this->COVERAGE_BUFFER_BIT_NV = 32768;
HXLINE(  13)		this->COVERAGE_AUTOMATIC_NV = 36567;
HXLINE(  12)		this->COVERAGE_EDGE_FRAGMENTS_NV = 36566;
HXLINE(  11)		this->COVERAGE_ALL_FRAGMENTS_NV = 36565;
HXLINE(  10)		this->COVERAGE_SAMPLES_NV = 36564;
HXLINE(   9)		this->COVERAGE_BUFFERS_NV = 36563;
HXLINE(   8)		this->COVERAGE_ATTACHMENT_NV = 36562;
HXLINE(   7)		this->COVERAGE_COMPONENT4_NV = 36561;
HXLINE(   6)		this->COVERAGE_COMPONENT_NV = 36560;
            	}

Dynamic NV_coverage_sample_obj::__CreateEmpty() { return new NV_coverage_sample_obj; }

void *NV_coverage_sample_obj::_hx_vtable = 0;

Dynamic NV_coverage_sample_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NV_coverage_sample_obj > _hx_result = new NV_coverage_sample_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NV_coverage_sample_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3cf51454;
}


NV_coverage_sample_obj::NV_coverage_sample_obj()
{
}

::hx::Val NV_coverage_sample_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"COVERAGE_BUFFERS_NV") ) { return ::hx::Val( COVERAGE_BUFFERS_NV ); }
		if (HX_FIELD_EQ(inName,"COVERAGE_SAMPLES_NV") ) { return ::hx::Val( COVERAGE_SAMPLES_NV ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"COVERAGE_COMPONENT_NV") ) { return ::hx::Val( COVERAGE_COMPONENT_NV ); }
		if (HX_FIELD_EQ(inName,"COVERAGE_AUTOMATIC_NV") ) { return ::hx::Val( COVERAGE_AUTOMATIC_NV ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"COVERAGE_COMPONENT4_NV") ) { return ::hx::Val( COVERAGE_COMPONENT4_NV ); }
		if (HX_FIELD_EQ(inName,"COVERAGE_ATTACHMENT_NV") ) { return ::hx::Val( COVERAGE_ATTACHMENT_NV ); }
		if (HX_FIELD_EQ(inName,"COVERAGE_BUFFER_BIT_NV") ) { return ::hx::Val( COVERAGE_BUFFER_BIT_NV ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"COVERAGE_ALL_FRAGMENTS_NV") ) { return ::hx::Val( COVERAGE_ALL_FRAGMENTS_NV ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"COVERAGE_EDGE_FRAGMENTS_NV") ) { return ::hx::Val( COVERAGE_EDGE_FRAGMENTS_NV ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NV_coverage_sample_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"COVERAGE_BUFFERS_NV") ) { COVERAGE_BUFFERS_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COVERAGE_SAMPLES_NV") ) { COVERAGE_SAMPLES_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"COVERAGE_COMPONENT_NV") ) { COVERAGE_COMPONENT_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COVERAGE_AUTOMATIC_NV") ) { COVERAGE_AUTOMATIC_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"COVERAGE_COMPONENT4_NV") ) { COVERAGE_COMPONENT4_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COVERAGE_ATTACHMENT_NV") ) { COVERAGE_ATTACHMENT_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COVERAGE_BUFFER_BIT_NV") ) { COVERAGE_BUFFER_BIT_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"COVERAGE_ALL_FRAGMENTS_NV") ) { COVERAGE_ALL_FRAGMENTS_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"COVERAGE_EDGE_FRAGMENTS_NV") ) { COVERAGE_EDGE_FRAGMENTS_NV=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NV_coverage_sample_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("COVERAGE_COMPONENT_NV",e1,59,e0,37));
	outFields->push(HX_("COVERAGE_COMPONENT4_NV",f9,fd,0e,90));
	outFields->push(HX_("COVERAGE_ATTACHMENT_NV",8d,46,b8,a8));
	outFields->push(HX_("COVERAGE_BUFFERS_NV",2b,1d,ec,5b));
	outFields->push(HX_("COVERAGE_SAMPLES_NV",55,9d,83,26));
	outFields->push(HX_("COVERAGE_ALL_FRAGMENTS_NV",79,00,b4,19));
	outFields->push(HX_("COVERAGE_EDGE_FRAGMENTS_NV",ef,e8,79,d6));
	outFields->push(HX_("COVERAGE_AUTOMATIC_NV",b3,d6,d0,ac));
	outFields->push(HX_("COVERAGE_BUFFER_BIT_NV",a2,50,cd,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NV_coverage_sample_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(NV_coverage_sample_obj,COVERAGE_COMPONENT_NV),HX_("COVERAGE_COMPONENT_NV",e1,59,e0,37)},
	{::hx::fsInt,(int)offsetof(NV_coverage_sample_obj,COVERAGE_COMPONENT4_NV),HX_("COVERAGE_COMPONENT4_NV",f9,fd,0e,90)},
	{::hx::fsInt,(int)offsetof(NV_coverage_sample_obj,COVERAGE_ATTACHMENT_NV),HX_("COVERAGE_ATTACHMENT_NV",8d,46,b8,a8)},
	{::hx::fsInt,(int)offsetof(NV_coverage_sample_obj,COVERAGE_BUFFERS_NV),HX_("COVERAGE_BUFFERS_NV",2b,1d,ec,5b)},
	{::hx::fsInt,(int)offsetof(NV_coverage_sample_obj,COVERAGE_SAMPLES_NV),HX_("COVERAGE_SAMPLES_NV",55,9d,83,26)},
	{::hx::fsInt,(int)offsetof(NV_coverage_sample_obj,COVERAGE_ALL_FRAGMENTS_NV),HX_("COVERAGE_ALL_FRAGMENTS_NV",79,00,b4,19)},
	{::hx::fsInt,(int)offsetof(NV_coverage_sample_obj,COVERAGE_EDGE_FRAGMENTS_NV),HX_("COVERAGE_EDGE_FRAGMENTS_NV",ef,e8,79,d6)},
	{::hx::fsInt,(int)offsetof(NV_coverage_sample_obj,COVERAGE_AUTOMATIC_NV),HX_("COVERAGE_AUTOMATIC_NV",b3,d6,d0,ac)},
	{::hx::fsInt,(int)offsetof(NV_coverage_sample_obj,COVERAGE_BUFFER_BIT_NV),HX_("COVERAGE_BUFFER_BIT_NV",a2,50,cd,9f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NV_coverage_sample_obj_sStaticStorageInfo = 0;
#endif

static ::String NV_coverage_sample_obj_sMemberFields[] = {
	HX_("COVERAGE_COMPONENT_NV",e1,59,e0,37),
	HX_("COVERAGE_COMPONENT4_NV",f9,fd,0e,90),
	HX_("COVERAGE_ATTACHMENT_NV",8d,46,b8,a8),
	HX_("COVERAGE_BUFFERS_NV",2b,1d,ec,5b),
	HX_("COVERAGE_SAMPLES_NV",55,9d,83,26),
	HX_("COVERAGE_ALL_FRAGMENTS_NV",79,00,b4,19),
	HX_("COVERAGE_EDGE_FRAGMENTS_NV",ef,e8,79,d6),
	HX_("COVERAGE_AUTOMATIC_NV",b3,d6,d0,ac),
	HX_("COVERAGE_BUFFER_BIT_NV",a2,50,cd,9f),
	::String(null()) };

::hx::Class NV_coverage_sample_obj::__mClass;

void NV_coverage_sample_obj::__register()
{
	NV_coverage_sample_obj _hx_dummy;
	NV_coverage_sample_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.NV_coverage_sample",cc,ea,05,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NV_coverage_sample_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NV_coverage_sample_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NV_coverage_sample_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NV_coverage_sample_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
