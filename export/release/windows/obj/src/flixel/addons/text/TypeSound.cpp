#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_text_TypeSound
#include <flixel/addons/text/TypeSound.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_542cd778bed1ec4a_328_new,"flixel.addons.text.TypeSound","new",0xea1a5b8f,"flixel.addons.text.TypeSound.new","openfl/utils/_internal/AssetsMacro.hx",328,0xfdd54705)
HX_LOCAL_STACK_FRAME(_hx_pos_5b66793e2c0d6454_14_boot,"flixel.addons.text.TypeSound","boot",0xe50ec223,"flixel.addons.text.TypeSound.boot","flixel/addons/text/FlxTypeText.hx",14,0x9451ed7e)
namespace flixel{
namespace addons{
namespace text{

void TypeSound_obj::__construct( ::openfl::net::URLRequest stream, ::openfl::media::SoundLoaderContext context){
            	HX_STACKFRAME(&_hx_pos_542cd778bed1ec4a_328_new)
HXLINE( 329)		super::__construct(null(),null());
HXLINE( 331)		 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::addons::text::TypeSound_obj::resourceName));
HXLINE( 332)		this->loadCompressedDataFromByteArray(byteArray,::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(byteArray));
            	}

Dynamic TypeSound_obj::__CreateEmpty() { return new TypeSound_obj; }

void *TypeSound_obj::_hx_vtable = 0;

Dynamic TypeSound_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TypeSound_obj > _hx_result = new TypeSound_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TypeSound_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0ce018c7) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x0ce018c7;
		}
	} else {
		return inClassId==(int)0x16e33749;
	}
}

::String TypeSound_obj::resourceName;


::hx::ObjectPtr< TypeSound_obj > TypeSound_obj::__new( ::openfl::net::URLRequest stream, ::openfl::media::SoundLoaderContext context) {
	::hx::ObjectPtr< TypeSound_obj > __this = new TypeSound_obj();
	__this->__construct(stream,context);
	return __this;
}

::hx::ObjectPtr< TypeSound_obj > TypeSound_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::net::URLRequest stream, ::openfl::media::SoundLoaderContext context) {
	TypeSound_obj *__this = (TypeSound_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TypeSound_obj), true, "flixel.addons.text.TypeSound"));
	*(void **)__this = TypeSound_obj::_hx_vtable;
	__this->__construct(stream,context);
	return __this;
}

TypeSound_obj::TypeSound_obj()
{
}

bool TypeSound_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool TypeSound_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TypeSound_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo TypeSound_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &TypeSound_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void TypeSound_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TypeSound_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TypeSound_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TypeSound_obj::resourceName,"resourceName");
};

#endif

::hx::Class TypeSound_obj::__mClass;

static ::String TypeSound_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void TypeSound_obj::__register()
{
	TypeSound_obj _hx_dummy;
	TypeSound_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.text.TypeSound",1d,e8,ab,f0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TypeSound_obj::__GetStatic;
	__mClass->mSetStaticField = &TypeSound_obj::__SetStatic;
	__mClass->mMarkFunc = TypeSound_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TypeSound_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TypeSound_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TypeSound_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TypeSound_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TypeSound_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TypeSound_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5b66793e2c0d6454_14_boot)
HXDLIN(  14)		resourceName = HX_("__ASSET__:sound_flixel_addons_text_TypeSound",86,8d,a7,7b);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace text
