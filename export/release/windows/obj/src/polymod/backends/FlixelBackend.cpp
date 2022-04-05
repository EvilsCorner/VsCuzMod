#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif
#ifndef INCLUDED_polymod_backends_FlixelBackend
#include <polymod/backends/FlixelBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_IBackend
#include <polymod/backends/IBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_LimeBackend
#include <polymod/backends/LimeBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_OpenFLBackend
#include <polymod/backends/OpenFLBackend.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_25c02a9b4a4d1d66_36_new,"polymod.backends.FlixelBackend","new",0xf1013513,"polymod.backends.FlixelBackend.new","polymod/backends/FlixelBackend.hx",36,0xa9a7859d)
HX_LOCAL_STACK_FRAME(_hx_pos_25c02a9b4a4d1d66_43_clearCache,"polymod.backends.FlixelBackend","clearCache",0xf7ebc122,"polymod.backends.FlixelBackend.clearCache","polymod/backends/FlixelBackend.hx",43,0xa9a7859d)
namespace polymod{
namespace backends{

void FlixelBackend_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_25c02a9b4a4d1d66_36_new)
HXDLIN(  36)		super::__construct();
            	}

Dynamic FlixelBackend_obj::__CreateEmpty() { return new FlixelBackend_obj; }

void *FlixelBackend_obj::_hx_vtable = 0;

Dynamic FlixelBackend_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlixelBackend_obj > _hx_result = new FlixelBackend_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlixelBackend_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12bf7dcf) {
		if (inClassId<=(int)0x0065a5e7) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0065a5e7;
		} else {
			return inClassId==(int)0x12bf7dcf;
		}
	} else {
		return inClassId==(int)0x7a28a88e;
	}
}

void FlixelBackend_obj::clearCache(){
            	HX_STACKFRAME(&_hx_pos_25c02a9b4a4d1d66_43_clearCache)
HXLINE(  45)		{
HXLINE(  45)			 ::Dynamic key = ::flixel::FlxG_obj::bitmap->_cache->keys();
HXDLIN(  45)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  45)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  47)				 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key1)) );
HXLINE(  48)				if (::hx::IsNotNull( obj )) {
HXLINE(  50)					::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key1);
HXLINE(  51)					::flixel::FlxG_obj::bitmap->_cache->remove(key1);
HXLINE(  52)					obj->destroy();
            				}
            			}
            		}
HXLINE(  55)		this->super::clearCache();
            	}



::hx::ObjectPtr< FlixelBackend_obj > FlixelBackend_obj::__new() {
	::hx::ObjectPtr< FlixelBackend_obj > __this = new FlixelBackend_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlixelBackend_obj > FlixelBackend_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlixelBackend_obj *__this = (FlixelBackend_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlixelBackend_obj), true, "polymod.backends.FlixelBackend"));
	*(void **)__this = FlixelBackend_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlixelBackend_obj::FlixelBackend_obj()
{
}

::hx::Val FlixelBackend_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { return ::hx::Val( clearCache_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlixelBackend_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlixelBackend_obj_sStaticStorageInfo = 0;
#endif

static ::String FlixelBackend_obj_sMemberFields[] = {
	HX_("clearCache",75,d9,1e,16),
	::String(null()) };

::hx::Class FlixelBackend_obj::__mClass;

void FlixelBackend_obj::__register()
{
	FlixelBackend_obj _hx_dummy;
	FlixelBackend_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.backends.FlixelBackend",a1,af,3e,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlixelBackend_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlixelBackend_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlixelBackend_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlixelBackend_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace backends
