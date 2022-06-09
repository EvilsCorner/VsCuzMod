#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime__internal_format_GZip
#include <lime/_internal/format/GZip.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d82d32e5304980fb_17_compress,"lime._internal.format.GZip","compress",0x187e488a,"lime._internal.format.GZip.compress","lime/_internal/format/GZip.hx",17,0xd3eb8ad9)
HX_LOCAL_STACK_FRAME(_hx_pos_d82d32e5304980fb_39_decompress,"lime._internal.format.GZip","decompress",0x5d43930b,"lime._internal.format.GZip.decompress","lime/_internal/format/GZip.hx",39,0xd3eb8ad9)
namespace lime{
namespace _internal{
namespace format{

void GZip_obj::__construct() { }

Dynamic GZip_obj::__CreateEmpty() { return new GZip_obj; }

void *GZip_obj::_hx_vtable = 0;

Dynamic GZip_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GZip_obj > _hx_result = new GZip_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GZip_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f2141c8;
}

 ::haxe::io::Bytes GZip_obj::compress( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_d82d32e5304980fb_17_compress)
HXDLIN(  17)		::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > _hx_tmp = ::lime::_internal::backend::native::NativeCFFI_obj::lime_gzip_compress;
HXDLIN(  17)		return ( ( ::Dynamic)(_hx_tmp(::hx::DynamicPtr(bytes),::hx::DynamicPtr(::haxe::io::Bytes_obj::alloc(0)))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GZip_obj,compress,return )

 ::haxe::io::Bytes GZip_obj::decompress( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_d82d32e5304980fb_39_decompress)
HXDLIN(  39)		::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > _hx_tmp = ::lime::_internal::backend::native::NativeCFFI_obj::lime_gzip_decompress;
HXDLIN(  39)		return ( ( ::Dynamic)(_hx_tmp(::hx::DynamicPtr(bytes),::hx::DynamicPtr(::haxe::io::Bytes_obj::alloc(0)))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GZip_obj,decompress,return )


GZip_obj::GZip_obj()
{
}

bool GZip_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"compress") ) { outValue = compress_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decompress") ) { outValue = decompress_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GZip_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GZip_obj_sStaticStorageInfo = 0;
#endif

::hx::Class GZip_obj::__mClass;

static ::String GZip_obj_sStaticFields[] = {
	HX_("compress",a2,47,bf,83),
	HX_("decompress",23,88,14,da),
	::String(null())
};

void GZip_obj::__register()
{
	GZip_obj _hx_dummy;
	GZip_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.format.GZip",86,1c,99,63);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GZip_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GZip_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GZip_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GZip_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GZip_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace format
