// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED___ASSET__flixel_flixel_ui_img_button_arrow_down_png
#include <__ASSET__flixel_flixel_ui_img_button_arrow_down_png.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c3174dcb7fd665f5_346_new,"__ASSET__flixel_flixel_ui_img_button_arrow_down_png","new",0x3b7e342a,"__ASSET__flixel_flixel_ui_img_button_arrow_down_png.new","lime/_internal/macros/AssetsMacro.hx",346,0xc651f030)
HX_LOCAL_STACK_FRAME(_hx_pos_7697836be679a96d_639_boot,"__ASSET__flixel_flixel_ui_img_button_arrow_down_png","boot",0xcb087128,"__ASSET__flixel_flixel_ui_img_button_arrow_down_png.boot","ManifestResources.hx",639,0xf77aa668)

void __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::__construct( ::lime::graphics::ImageBuffer buffer, ::Dynamic offsetX, ::Dynamic offsetY, ::Dynamic width, ::Dynamic height, ::Dynamic color, ::lime::graphics::ImageType type){
            	HX_STACKFRAME(&_hx_pos_c3174dcb7fd665f5_346_new)
HXLINE( 375)		super::__construct(null(),null(),null(),null(),null(),null(),null());
HXLINE( 377)		this->_hx___fromBytes(::haxe::Resource_obj::getBytes(::__ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::resourceName),null());
            	}

Dynamic __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::__CreateEmpty() { return new __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj; }

void *__ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::_hx_vtable = 0;

Dynamic __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj > _hx_result = new __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x33f052f7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x33f052f7;
	} else {
		return inClassId==(int)0x6a7a1c78;
	}
}

::String __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::resourceName;


::hx::ObjectPtr< __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj > __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::__new( ::lime::graphics::ImageBuffer buffer, ::Dynamic offsetX, ::Dynamic offsetY, ::Dynamic width, ::Dynamic height, ::Dynamic color, ::lime::graphics::ImageType type) {
	::hx::ObjectPtr< __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj > __this = new __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj();
	__this->__construct(buffer,offsetX,offsetY,width,height,color,type);
	return __this;
}

::hx::ObjectPtr< __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj > __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::__alloc(::hx::Ctx *_hx_ctx, ::lime::graphics::ImageBuffer buffer, ::Dynamic offsetX, ::Dynamic offsetY, ::Dynamic width, ::Dynamic height, ::Dynamic color, ::lime::graphics::ImageType type) {
	__ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj *__this = (__ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(__ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj), true, "__ASSET__flixel_flixel_ui_img_button_arrow_down_png"));
	*(void **)__this = __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::_hx_vtable;
	__this->__construct(buffer,offsetX,offsetY,width,height,color,type);
	return __this;
}

__ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::__ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj()
{
}

bool __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *__ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &__ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(__ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::resourceName,"resourceName");
};

#endif

::hx::Class __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::__mClass;

static ::String __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::__register()
{
	__ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj _hx_dummy;
	__ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("__ASSET__flixel_flixel_ui_img_button_arrow_down_png",38,97,ba,f7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &__ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::__GetStatic;
	__mClass->mSetStaticField = &__ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::__SetStatic;
	__mClass->mMarkFunc = __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(__ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void __ASSET__flixel_flixel_ui_img_button_arrow_down_png_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7697836be679a96d_639_boot)
HXDLIN( 639)		resourceName = HX_("__ASSET__:image___ASSET__flixel_flixel_ui_img_button_arrow_down_png",6a,37,2c,53);
            	}
}

