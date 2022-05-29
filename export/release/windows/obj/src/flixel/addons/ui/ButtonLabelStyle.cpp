// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_BorderDef
#include <flixel/addons/ui/BorderDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_ButtonLabelStyle
#include <flixel/addons/ui/ButtonLabelStyle.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FontDef
#include <flixel/addons/ui/FontDef.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_29f75fadcd6e737b_5_new,"flixel.addons.ui.ButtonLabelStyle","new",0x18d06f72,"flixel.addons.ui.ButtonLabelStyle.new","flixel/addons/ui/ButtonLabelStyle.hx",5,0x3fd572fd)
HX_LOCAL_STACK_FRAME(_hx_pos_29f75fadcd6e737b_21_apply,"flixel.addons.ui.ButtonLabelStyle","apply",0xcc6b8d00,"flixel.addons.ui.ButtonLabelStyle.apply","flixel/addons/ui/ButtonLabelStyle.hx",21,0x3fd572fd)
namespace flixel{
namespace addons{
namespace ui{

void ButtonLabelStyle_obj::__construct( ::flixel::addons::ui::FontDef Font,::String Align, ::Dynamic Color, ::flixel::addons::ui::BorderDef Border){
            	HX_STACKFRAME(&_hx_pos_29f75fadcd6e737b_5_new)
HXLINE(  10)		this->align = null();
HXLINE(   9)		this->color = null();
HXLINE(   8)		this->border = null();
HXLINE(   7)		this->font = null();
HXLINE(  14)		this->font = Font;
HXLINE(  15)		this->border = Border;
HXLINE(  16)		this->color = Color;
HXLINE(  17)		this->align = Align;
            	}

Dynamic ButtonLabelStyle_obj::__CreateEmpty() { return new ButtonLabelStyle_obj; }

void *ButtonLabelStyle_obj::_hx_vtable = 0;

Dynamic ButtonLabelStyle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonLabelStyle_obj > _hx_result = new ButtonLabelStyle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ButtonLabelStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x17433232;
}

void ButtonLabelStyle_obj::apply( ::flixel::text::FlxText f){
            	HX_STACKFRAME(&_hx_pos_29f75fadcd6e737b_21_apply)
HXLINE(  22)		if (::hx::IsNotNull( this->font )) {
HXLINE(  24)			this->font->apply(null(),f);
            		}
HXLINE(  26)		if (::hx::IsNotNull( this->border )) {
HXLINE(  28)			this->border->apply(f);
            		}
HXLINE(  30)		if (::hx::IsNotNull( this->color )) {
HXLINE(  32)			f->set_color(( (int)(this->color) ));
            		}
HXLINE(  34)		if (::hx::IsNotNull( this->align )) {
HXLINE(  36)			f->set_alignment(this->align);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonLabelStyle_obj,apply,(void))


::hx::ObjectPtr< ButtonLabelStyle_obj > ButtonLabelStyle_obj::__new( ::flixel::addons::ui::FontDef Font,::String Align, ::Dynamic Color, ::flixel::addons::ui::BorderDef Border) {
	::hx::ObjectPtr< ButtonLabelStyle_obj > __this = new ButtonLabelStyle_obj();
	__this->__construct(Font,Align,Color,Border);
	return __this;
}

::hx::ObjectPtr< ButtonLabelStyle_obj > ButtonLabelStyle_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::ui::FontDef Font,::String Align, ::Dynamic Color, ::flixel::addons::ui::BorderDef Border) {
	ButtonLabelStyle_obj *__this = (ButtonLabelStyle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonLabelStyle_obj), true, "flixel.addons.ui.ButtonLabelStyle"));
	*(void **)__this = ButtonLabelStyle_obj::_hx_vtable;
	__this->__construct(Font,Align,Color,Border);
	return __this;
}

ButtonLabelStyle_obj::ButtonLabelStyle_obj()
{
}

void ButtonLabelStyle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ButtonLabelStyle);
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_END_CLASS();
}

void ButtonLabelStyle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(align,"align");
}

::hx::Val ButtonLabelStyle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return ::hx::Val( font ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"align") ) { return ::hx::Val( align ); }
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return ::hx::Val( border ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ButtonLabelStyle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast<  ::flixel::addons::ui::FontDef >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"align") ) { align=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast<  ::flixel::addons::ui::BorderDef >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ButtonLabelStyle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("font",cf,5d,c0,43));
	outFields->push(HX_("border",ec,4c,1a,64));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("align",c5,56,91,21));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ButtonLabelStyle_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::addons::ui::FontDef */ ,(int)offsetof(ButtonLabelStyle_obj,font),HX_("font",cf,5d,c0,43)},
	{::hx::fsObject /*  ::flixel::addons::ui::BorderDef */ ,(int)offsetof(ButtonLabelStyle_obj,border),HX_("border",ec,4c,1a,64)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ButtonLabelStyle_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsString,(int)offsetof(ButtonLabelStyle_obj,align),HX_("align",c5,56,91,21)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ButtonLabelStyle_obj_sStaticStorageInfo = 0;
#endif

static ::String ButtonLabelStyle_obj_sMemberFields[] = {
	HX_("font",cf,5d,c0,43),
	HX_("border",ec,4c,1a,64),
	HX_("color",63,71,5c,4a),
	HX_("align",c5,56,91,21),
	HX_("apply",6e,85,3b,24),
	::String(null()) };

::hx::Class ButtonLabelStyle_obj::__mClass;

void ButtonLabelStyle_obj::__register()
{
	ButtonLabelStyle_obj _hx_dummy;
	ButtonLabelStyle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.ButtonLabelStyle",80,8e,eb,0e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonLabelStyle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonLabelStyle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonLabelStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonLabelStyle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
