#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_multisampled_render_to_texture
#include <lime/graphics/opengl/ext/IMG_multisampled_render_to_texture.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ebcce84ebca33b42_4_new,"lime.graphics.opengl.ext.IMG_multisampled_render_to_texture","new",0xa9dd9932,"lime.graphics.opengl.ext.IMG_multisampled_render_to_texture.new","lime/graphics/opengl/ext/IMG_multisampled_render_to_texture.hx",4,0x560a569c)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void IMG_multisampled_render_to_texture_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ebcce84ebca33b42_4_new)
HXLINE(   9)		this->TEXTURE_SAMPLES_IMG = 37174;
HXLINE(   8)		this->MAX_SAMPLES_IMG = 37173;
HXLINE(   7)		this->FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG = 37172;
HXLINE(   6)		this->RENDERBUFFER_SAMPLES_IMG = 37171;
            	}

Dynamic IMG_multisampled_render_to_texture_obj::__CreateEmpty() { return new IMG_multisampled_render_to_texture_obj; }

void *IMG_multisampled_render_to_texture_obj::_hx_vtable = 0;

Dynamic IMG_multisampled_render_to_texture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IMG_multisampled_render_to_texture_obj > _hx_result = new IMG_multisampled_render_to_texture_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool IMG_multisampled_render_to_texture_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6b4991c8;
}


IMG_multisampled_render_to_texture_obj::IMG_multisampled_render_to_texture_obj()
{
}

::hx::Val IMG_multisampled_render_to_texture_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES_IMG") ) { return ::hx::Val( MAX_SAMPLES_IMG ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TEXTURE_SAMPLES_IMG") ) { return ::hx::Val( TEXTURE_SAMPLES_IMG ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES_IMG") ) { return ::hx::Val( RENDERBUFFER_SAMPLES_IMG ); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG") ) { return ::hx::Val( FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val IMG_multisampled_render_to_texture_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES_IMG") ) { MAX_SAMPLES_IMG=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TEXTURE_SAMPLES_IMG") ) { TEXTURE_SAMPLES_IMG=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES_IMG") ) { RENDERBUFFER_SAMPLES_IMG=inValue.Cast< int >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG") ) { FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IMG_multisampled_render_to_texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("RENDERBUFFER_SAMPLES_IMG",24,ea,a6,7a));
	outFields->push(HX_("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG",38,77,46,27));
	outFields->push(HX_("MAX_SAMPLES_IMG",d2,b8,8f,83));
	outFields->push(HX_("TEXTURE_SAMPLES_IMG",89,a5,7d,e8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo IMG_multisampled_render_to_texture_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(IMG_multisampled_render_to_texture_obj,RENDERBUFFER_SAMPLES_IMG),HX_("RENDERBUFFER_SAMPLES_IMG",24,ea,a6,7a)},
	{::hx::fsInt,(int)offsetof(IMG_multisampled_render_to_texture_obj,FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG),HX_("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG",38,77,46,27)},
	{::hx::fsInt,(int)offsetof(IMG_multisampled_render_to_texture_obj,MAX_SAMPLES_IMG),HX_("MAX_SAMPLES_IMG",d2,b8,8f,83)},
	{::hx::fsInt,(int)offsetof(IMG_multisampled_render_to_texture_obj,TEXTURE_SAMPLES_IMG),HX_("TEXTURE_SAMPLES_IMG",89,a5,7d,e8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *IMG_multisampled_render_to_texture_obj_sStaticStorageInfo = 0;
#endif

static ::String IMG_multisampled_render_to_texture_obj_sMemberFields[] = {
	HX_("RENDERBUFFER_SAMPLES_IMG",24,ea,a6,7a),
	HX_("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG",38,77,46,27),
	HX_("MAX_SAMPLES_IMG",d2,b8,8f,83),
	HX_("TEXTURE_SAMPLES_IMG",89,a5,7d,e8),
	::String(null()) };

::hx::Class IMG_multisampled_render_to_texture_obj::__mClass;

void IMG_multisampled_render_to_texture_obj::__register()
{
	IMG_multisampled_render_to_texture_obj _hx_dummy;
	IMG_multisampled_render_to_texture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.IMG_multisampled_render_to_texture",40,d8,30,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IMG_multisampled_render_to_texture_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IMG_multisampled_render_to_texture_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IMG_multisampled_render_to_texture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IMG_multisampled_render_to_texture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
