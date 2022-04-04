// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_polymod_format_BaseParseFormat
#include <polymod/format/BaseParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_PlainTextParseFormat
#include <polymod/format/PlainTextParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_TextFileFormat
#include <polymod/format/TextFileFormat.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_19ba14b2e25efefe_944_new,"polymod.format.PlainTextParseFormat","new",0x46979564,"polymod.format.PlainTextParseFormat.new","polymod/format/ParseRules.hx",944,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_19ba14b2e25efefe_949_append,"polymod.format.PlainTextParseFormat","append",0x8f1e1756,"polymod.format.PlainTextParseFormat.append","polymod/format/ParseRules.hx",949,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_19ba14b2e25efefe_976_merge,"polymod.format.PlainTextParseFormat","merge",0x3848b0bc,"polymod.format.PlainTextParseFormat.merge","polymod/format/ParseRules.hx",976,0xc5c5c43b)
namespace polymod{
namespace format{

void PlainTextParseFormat_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_19ba14b2e25efefe_944_new)
HXDLIN( 944)		this->format = ::polymod::format::TextFileFormat_obj::PLAINTEXT_dyn();
            	}

Dynamic PlainTextParseFormat_obj::__CreateEmpty() { return new PlainTextParseFormat_obj; }

void *PlainTextParseFormat_obj::_hx_vtable = 0;

Dynamic PlainTextParseFormat_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlainTextParseFormat_obj > _hx_result = new PlainTextParseFormat_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlainTextParseFormat_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1cf14754;
}

static ::polymod::format::BaseParseFormat_obj _hx_polymod_format_PlainTextParseFormat__hx_polymod_format_BaseParseFormat= {
	( ::String (::hx::Object::*)(::String,::String,::String))&::polymod::format::PlainTextParseFormat_obj::append,
	( ::String (::hx::Object::*)(::String,::String,::String))&::polymod::format::PlainTextParseFormat_obj::merge,
};

void *PlainTextParseFormat_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa2d29dcc: return &_hx_polymod_format_PlainTextParseFormat__hx_polymod_format_BaseParseFormat;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::String PlainTextParseFormat_obj::append(::String baseText,::String appendText,::String id){
            	HX_STACKFRAME(&_hx_pos_19ba14b2e25efefe_949_append)
HXLINE( 950)		::String lastChar = ::polymod::util::Util_obj::uCharAt(baseText,(::polymod::util::Util_obj::uLength(baseText) - 1));
HXLINE( 951)		::String lastLastChar = ::polymod::util::Util_obj::uCharAt(baseText,(::polymod::util::Util_obj::uLength(baseText) - 1));
HXLINE( 952)		::String joiner = HX_("",00,00,00,00);
HXLINE( 954)		::String endLine = HX_("\n",0a,00,00,00);
HXLINE( 956)		int crIndex = ::polymod::util::Util_obj::uIndexOf(baseText,HX_("\r",0d,00,00,00),null());
HXLINE( 957)		int lfIndex = ::polymod::util::Util_obj::uIndexOf(baseText,HX_("\n",0a,00,00,00),null());
HXLINE( 959)		if ((crIndex != -1)) {
HXLINE( 961)			if ((lfIndex == (crIndex + 1))) {
HXLINE( 963)				endLine = HX_("\r\n",5d,0b,00,00);
            			}
            		}
HXLINE( 967)		if ((lastChar != HX_("\n",0a,00,00,00))) {
HXLINE( 969)			joiner = endLine;
            		}
HXLINE( 972)		return ::polymod::util::Util_obj::uCombine(::Array_obj< ::String >::__new(3)->init(0,baseText)->init(1,joiner)->init(2,appendText));
            	}


HX_DEFINE_DYNAMIC_FUNC3(PlainTextParseFormat_obj,append,return )

::String PlainTextParseFormat_obj::merge(::String baseText,::String mergeText,::String id){
            	HX_STACKFRAME(&_hx_pos_19ba14b2e25efefe_976_merge)
HXLINE( 977)		::polymod::Polymod_obj::warning(HX_("merge_error",c1,8f,ea,85),((HX_("(",28,00,00,00) + id) + HX_(") Plain text does not support merging!",cb,64,8e,4a)),null());
HXLINE( 978)		return baseText;
            	}


HX_DEFINE_DYNAMIC_FUNC3(PlainTextParseFormat_obj,merge,return )


::hx::ObjectPtr< PlainTextParseFormat_obj > PlainTextParseFormat_obj::__new() {
	::hx::ObjectPtr< PlainTextParseFormat_obj > __this = new PlainTextParseFormat_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PlainTextParseFormat_obj > PlainTextParseFormat_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PlainTextParseFormat_obj *__this = (PlainTextParseFormat_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlainTextParseFormat_obj), true, "polymod.format.PlainTextParseFormat"));
	*(void **)__this = PlainTextParseFormat_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PlainTextParseFormat_obj::PlainTextParseFormat_obj()
{
}

void PlainTextParseFormat_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlainTextParseFormat);
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_END_CLASS();
}

void PlainTextParseFormat_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(format,"format");
}

::hx::Val PlainTextParseFormat_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { return ::hx::Val( merge_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return ::hx::Val( format ); }
		if (HX_FIELD_EQ(inName,"append") ) { return ::hx::Val( append_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlainTextParseFormat_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast<  ::polymod::format::TextFileFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlainTextParseFormat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("format",37,8f,8e,fd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlainTextParseFormat_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::polymod::format::TextFileFormat */ ,(int)offsetof(PlainTextParseFormat_obj,format),HX_("format",37,8f,8e,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PlainTextParseFormat_obj_sStaticStorageInfo = 0;
#endif

static ::String PlainTextParseFormat_obj_sMemberFields[] = {
	HX_("format",37,8f,8e,fd),
	HX_("append",da,e1,d3,8f),
	HX_("merge",b8,a2,c6,05),
	::String(null()) };

::hx::Class PlainTextParseFormat_obj::__mClass;

void PlainTextParseFormat_obj::__register()
{
	PlainTextParseFormat_obj _hx_dummy;
	PlainTextParseFormat_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.format.PlainTextParseFormat",72,53,08,9e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlainTextParseFormat_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlainTextParseFormat_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlainTextParseFormat_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlainTextParseFormat_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace format
