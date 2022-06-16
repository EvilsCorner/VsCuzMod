#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferIO
#include <lime/utils/ArrayBufferIO.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_43b917087f5df710_494_getInt16,"lime.utils.ArrayBufferIO","getInt16",0x764c5d83,"lime.utils.ArrayBufferIO.getInt16","lime/utils/ArrayBufferView.hx",494,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_43b917087f5df710_508_getInt16_BE,"lime.utils.ArrayBufferIO","getInt16_BE",0x50eb063f,"lime.utils.ArrayBufferIO.getInt16_BE","lime/utils/ArrayBufferView.hx",508,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_43b917087f5df710_522_setInt16,"lime.utils.ArrayBufferIO","setInt16",0x24a9b6f7,"lime.utils.ArrayBufferIO.setInt16","lime/utils/ArrayBufferView.hx",522,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_43b917087f5df710_537_setInt16_BE,"lime.utils.ArrayBufferIO","setInt16_BE",0x5b580d4b,"lime.utils.ArrayBufferIO.setInt16_BE","lime/utils/ArrayBufferView.hx",537,0xb543acf8)
namespace lime{
namespace utils{

void ArrayBufferIO_obj::__construct() { }

Dynamic ArrayBufferIO_obj::__CreateEmpty() { return new ArrayBufferIO_obj; }

void *ArrayBufferIO_obj::_hx_vtable = 0;

Dynamic ArrayBufferIO_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArrayBufferIO_obj > _hx_result = new ArrayBufferIO_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ArrayBufferIO_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x09198603;
}

int ArrayBufferIO_obj::getInt16( ::haxe::io::Bytes buffer,int byteOffset){
            	HX_STACKFRAME(&_hx_pos_43b917087f5df710_494_getInt16)
HXDLIN( 494)		return  ::__hxcpp_memory_get_i16(buffer->b,byteOffset);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferIO_obj,getInt16,return )

int ArrayBufferIO_obj::getInt16_BE( ::haxe::io::Bytes buffer,int byteOffset){
            	HX_STACKFRAME(&_hx_pos_43b917087f5df710_508_getInt16_BE)
HXDLIN( 508)		return  ::__hxcpp_memory_get_i16(buffer->b,byteOffset);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferIO_obj,getInt16_BE,return )

void ArrayBufferIO_obj::setInt16( ::haxe::io::Bytes buffer,int byteOffset,int value){
            	HX_STACKFRAME(&_hx_pos_43b917087f5df710_522_setInt16)
HXDLIN( 522)		 ::__hxcpp_memory_set_i16(buffer->b,byteOffset,value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,setInt16,(void))

void ArrayBufferIO_obj::setInt16_BE( ::haxe::io::Bytes buffer,int byteOffset,int value){
            	HX_STACKFRAME(&_hx_pos_43b917087f5df710_537_setInt16_BE)
HXDLIN( 537)		 ::__hxcpp_memory_set_i16(buffer->b,byteOffset,value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,setInt16_BE,(void))


ArrayBufferIO_obj::ArrayBufferIO_obj()
{
}

bool ArrayBufferIO_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getInt16") ) { outValue = getInt16_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setInt16") ) { outValue = setInt16_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInt16_BE") ) { outValue = getInt16_BE_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setInt16_BE") ) { outValue = setInt16_BE_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ArrayBufferIO_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ArrayBufferIO_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ArrayBufferIO_obj::__mClass;

static ::String ArrayBufferIO_obj_sStaticFields[] = {
	HX_("getInt16",1e,a1,f7,1d),
	HX_("getInt16_BE",84,b5,df,35),
	HX_("setInt16",92,fa,54,cc),
	HX_("setInt16_BE",90,bc,4c,40),
	::String(null())
};

void ArrayBufferIO_obj::__register()
{
	ArrayBufferIO_obj _hx_dummy;
	ArrayBufferIO_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils.ArrayBufferIO",a9,c4,7c,14);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayBufferIO_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ArrayBufferIO_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ArrayBufferIO_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayBufferIO_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayBufferIO_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
