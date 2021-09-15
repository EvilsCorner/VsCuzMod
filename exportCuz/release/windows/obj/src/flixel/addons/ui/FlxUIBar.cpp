// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIBar
#include <flixel/addons/ui/FlxUIBar.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#include <flixel/ui/FlxBarFillDirection.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a3896e68573bc9ad_39_new,"flixel.addons.ui.FlxUIBar","new",0x9ff03c70,"flixel.addons.ui.FlxUIBar.new","flixel/addons/ui/FlxUIBar.hx",39,0xaa1a78bf)
HX_LOCAL_STACK_FRAME(_hx_pos_a3896e68573bc9ad_43_clone,"flixel.addons.ui.FlxUIBar","clone",0x58fea36d,"flixel.addons.ui.FlxUIBar.clone","flixel/addons/ui/FlxUIBar.hx",43,0xaa1a78bf)
HX_LOCAL_STACK_FRAME(_hx_pos_a3896e68573bc9ad_62_set_style,"flixel.addons.ui.FlxUIBar","set_style",0x8f24c5a4,"flixel.addons.ui.FlxUIBar.set_style","flixel/addons/ui/FlxUIBar.hx",62,0xaa1a78bf)
HX_LOCAL_STACK_FRAME(_hx_pos_a3896e68573bc9ad_69_resize,"flixel.addons.ui.FlxUIBar","resize",0x7ffdd7e4,"flixel.addons.ui.FlxUIBar.resize","flixel/addons/ui/FlxUIBar.hx",69,0xaa1a78bf)
static const int _hx_array_data_d9a5847e_4[] = {
	(int)-16777216,
};
static const int _hx_array_data_d9a5847e_5[] = {
	(int)-65536,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a3896e68573bc9ad_111_set_params,"flixel.addons.ui.FlxUIBar","set_params",0x88b03f73,"flixel.addons.ui.FlxUIBar.set_params","flixel/addons/ui/FlxUIBar.hx",111,0xaa1a78bf)
namespace flixel{
namespace addons{
namespace ui{

void FlxUIBar_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::flixel::ui::FlxBarFillDirection direction,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height, ::Dynamic parentRef,::String __o_variable,::hx::Null< Float >  __o_min,::hx::Null< Float >  __o_max,::hx::Null< bool >  __o_showBorder){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		int width = __o_width.Default(100);
            		int height = __o_height.Default(10);
            		::String variable = __o_variable;
            		if (::hx::IsNull(__o_variable)) variable = HX_("",00,00,00,00);
            		Float min = __o_min.Default(0);
            		Float max = __o_max.Default(100);
            		bool showBorder = __o_showBorder.Default(false);
            	HX_STACKFRAME(&_hx_pos_a3896e68573bc9ad_39_new)
HXDLIN(  39)		super::__construct(x,y,direction,width,height,parentRef,variable,min,max,showBorder);
            	}

Dynamic FlxUIBar_obj::__CreateEmpty() { return new FlxUIBar_obj; }

void *FlxUIBar_obj::_hx_vtable = 0;

Dynamic FlxUIBar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUIBar_obj > _hx_result = new FlxUIBar_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9]);
	return _hx_result;
}

bool FlxUIBar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x38192630) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x0a9ceb91) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0a9ceb91;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x38192630;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

static ::flixel::IFlxSprite_obj _hx_flixel_addons_ui_FlxUIBar__hx_flixel_IFlxSprite= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIBar_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIBar_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIBar_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIBar_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIBar_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIBar_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIBar_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIBar_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIBar_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUIBar_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIBar_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIBar_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIBar_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIBar_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUIBar_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIBar_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIBar_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUIBar_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUIBar_obj::setPosition,
};

static ::flixel::IFlxBasic_obj _hx_flixel_addons_ui_FlxUIBar__hx_flixel_IFlxBasic= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIBar_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIBar_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIBar_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIBar_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIBar_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIBar_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIBar_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIBar_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIBar_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUIBar_obj::toString,
};

static ::flixel::addons::ui::interfaces::IFlxUIWidget_obj _hx_flixel_addons_ui_FlxUIBar__hx_flixel_addons_ui_interfaces_IFlxUIWidget= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIBar_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIBar_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIBar_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIBar_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIBar_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIBar_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIBar_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIBar_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIBar_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUIBar_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIBar_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIBar_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIBar_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIBar_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUIBar_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIBar_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIBar_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUIBar_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUIBar_obj::setPosition,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUIBar_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIBar_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUIBar_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIBar_obj::set_height,
};

static ::flixel::addons::ui::interfaces::IHasParams_obj _hx_flixel_addons_ui_FlxUIBar__hx_flixel_addons_ui_interfaces_IHasParams= {
	( ::cpp::VirtualArray (::hx::Object::*)(::cpp::VirtualArray))&::flixel::addons::ui::FlxUIBar_obj::set_params,
};

static ::flixel::addons::ui::interfaces::IResizable_obj _hx_flixel_addons_ui_FlxUIBar__hx_flixel_addons_ui_interfaces_IResizable= {
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUIBar_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIBar_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUIBar_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIBar_obj::set_height,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUIBar_obj::resize,
};

void *FlxUIBar_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x897c83aa: return &_hx_flixel_addons_ui_FlxUIBar__hx_flixel_IFlxSprite;
		case (int)0x284cfea9: return &_hx_flixel_addons_ui_FlxUIBar__hx_flixel_IFlxBasic;
		case (int)0x998525de: return &_hx_flixel_addons_ui_FlxUIBar__hx_flixel_addons_ui_interfaces_IFlxUIWidget;
		case (int)0x9e5db374: return &_hx_flixel_addons_ui_FlxUIBar__hx_flixel_addons_ui_interfaces_IHasParams;
		case (int)0x194a3c9f: return &_hx_flixel_addons_ui_FlxUIBar__hx_flixel_addons_ui_interfaces_IResizable;
	}
	return super::_hx_getInterface(inHash);
}

 ::flixel::FlxSprite FlxUIBar_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_a3896e68573bc9ad_43_clone)
HXLINE(  44)		int w = ::Std_obj::_hx_int(this->get_width());
HXLINE(  45)		int h = ::Std_obj::_hx_int(this->get_height());
HXLINE(  46)		bool showBorder;
HXDLIN(  46)		if (::hx::IsNotNull( this->style )) {
HXLINE(  46)			showBorder = ::hx::IsNotNull( this->style->__Field(HX_("borderColor",d7,3c,d5,d6),::hx::paccDynamic) );
            		}
            		else {
HXLINE(  46)			showBorder = false;
            		}
HXLINE(  47)		if (showBorder) {
HXLINE(  49)			w = (w - 2);
HXLINE(  50)			h = (h - 2);
            		}
HXLINE(  52)		 ::flixel::addons::ui::FlxUIBar b =  ::flixel::addons::ui::FlxUIBar_obj::__alloc( HX_CTX ,this->x,this->y,this->fillDirection,w,h,this->parent,this->parentVariable,this->min,this->max,showBorder);
HXLINE(  53)		b->set_style(this->style);
HXLINE(  54)		b->set_value(this->get_value());
HXLINE(  55)		return b;
            	}


 ::Dynamic FlxUIBar_obj::set_style( ::Dynamic Style){
            	HX_STACKFRAME(&_hx_pos_a3896e68573bc9ad_62_set_style)
HXLINE(  63)		this->style = Style;
HXLINE(  64)		this->resize(( (Float)(this->barWidth) ),( (Float)(this->barHeight) ));
HXLINE(  65)		return this->style;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIBar_obj,set_style,return )

void FlxUIBar_obj::resize(Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_a3896e68573bc9ad_69_resize)
HXLINE(  70)		this->set_width(w);
HXLINE(  71)		this->set_height(h);
HXLINE(  73)		this->barWidth = ::Std_obj::_hx_int(this->get_width());
HXLINE(  74)		this->barHeight = ::Std_obj::_hx_int(this->get_height());
HXLINE(  76)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE(  78)			this->makeGraphic(this->barWidth,this->barHeight,0,true,null());
            		}
HXLINE(  81)		bool showBorder = ::hx::IsNotNull( this->style->__Field(HX_("borderColor",d7,3c,d5,d6),::hx::paccDynamic) );
HXLINE(  83)		 ::Dynamic ec;
HXDLIN(  83)		if (::hx::IsNull( this->style->__Field(HX_("emptyColor",96,47,af,ca),::hx::paccDynamic) )) {
HXLINE(  83)			ec = -16777216;
            		}
            		else {
HXLINE(  83)			ec = this->style->__Field(HX_("emptyColor",96,47,af,ca),::hx::paccDynamic);
            		}
HXLINE(  84)		 ::Dynamic fc;
HXDLIN(  84)		if (::hx::IsNull( this->style->__Field(HX_("filledColor",61,28,7c,97),::hx::paccDynamic) )) {
HXLINE(  84)			fc = -65536;
            		}
            		else {
HXLINE(  84)			fc = this->style->__Field(HX_("filledColor",61,28,7c,97),::hx::paccDynamic);
            		}
HXLINE(  85)		 ::Dynamic bc;
HXDLIN(  85)		if (::hx::IsNull( this->style->__Field(HX_("borderColor",d7,3c,d5,d6),::hx::paccDynamic) )) {
HXLINE(  85)			bc = -16777216;
            		}
            		else {
HXLINE(  85)			bc = this->style->__Field(HX_("borderColor",d7,3c,d5,d6),::hx::paccDynamic);
            		}
HXLINE(  87)		if (::hx::IsNotNull( this->style->__Field(HX_("filledColor",61,28,7c,97),::hx::paccDynamic) )) {
HXLINE(  89)			this->createFilledBar(( (int)(ec) ),( (int)(fc) ),showBorder,bc);
            		}
HXLINE(  92)		if (::hx::IsNotNull( this->style->__Field(HX_("filledColors",f2,2c,27,f5),::hx::paccDynamic) )) {
HXLINE(  94)			::Array< int > ecs;
HXDLIN(  94)			if (::hx::IsNull( this->style->__Field(HX_("emptyColors",1d,5c,af,8e),::hx::paccDynamic) )) {
HXLINE(  94)				ecs = ::Array_obj< int >::fromData( _hx_array_data_d9a5847e_4,1);
            			}
            			else {
HXLINE(  94)				ecs = ( (::Array< int >)(this->style->__Field(HX_("emptyColors",1d,5c,af,8e),::hx::paccDynamic)) );
            			}
HXLINE(  95)			::Array< int > fcs;
HXDLIN(  95)			if (::hx::IsNull( this->style->__Field(HX_("filledColors",f2,2c,27,f5),::hx::paccDynamic) )) {
HXLINE(  95)				fcs = ::Array_obj< int >::fromData( _hx_array_data_d9a5847e_5,1);
            			}
            			else {
HXLINE(  95)				fcs = ( (::Array< int >)(this->style->__Field(HX_("filledColors",f2,2c,27,f5),::hx::paccDynamic)) );
            			}
HXLINE(  96)			 ::Dynamic chunk;
HXDLIN(  96)			if (::hx::IsNull( this->style->__Field(HX_("chunkSize",ce,cd,77,9f),::hx::paccDynamic) )) {
HXLINE(  96)				chunk = 1;
            			}
            			else {
HXLINE(  96)				chunk = this->style->__Field(HX_("chunkSize",ce,cd,77,9f),::hx::paccDynamic);
            			}
HXLINE(  97)			 ::Dynamic gradRot;
HXDLIN(  97)			if (::hx::IsNull( this->style->__Field(HX_("emptyImgSrc",0e,0d,a3,ca),::hx::paccDynamic) )) {
HXLINE(  97)				gradRot = 180;
            			}
            			else {
HXLINE(  97)				gradRot = this->style->__Field(HX_("gradRotation",2c,47,cd,fb),::hx::paccDynamic);
            			}
HXLINE(  98)			this->createGradientBar(ecs,fcs,chunk,gradRot,showBorder,bc);
            		}
HXLINE( 101)		if (::hx::IsNotEq( this->style->__Field(HX_("filledImgSrc",e3,dd,1a,31),::hx::paccDynamic),HX_("",00,00,00,00) )) {
HXLINE( 103)			this->createImageBar( ::Dynamic(this->style->__Field(HX_("emptyImgSrc",0e,0d,a3,ca),::hx::paccDynamic)), ::Dynamic(this->style->__Field(HX_("filledImgSrc",e3,dd,1a,31),::hx::paccDynamic)),ec,fc);
            		}
HXLINE( 106)		this->setRange(this->min,this->max);
HXLINE( 107)		this->set_value(this->get_value());
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIBar_obj,resize,(void))

::cpp::VirtualArray FlxUIBar_obj::set_params(::cpp::VirtualArray p){
            	HX_STACKFRAME(&_hx_pos_a3896e68573bc9ad_111_set_params)
HXLINE( 112)		this->params = p;
HXLINE( 113)		return this->params;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIBar_obj,set_params,return )


::hx::ObjectPtr< FlxUIBar_obj > FlxUIBar_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::flixel::ui::FlxBarFillDirection direction,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height, ::Dynamic parentRef,::String __o_variable,::hx::Null< Float >  __o_min,::hx::Null< Float >  __o_max,::hx::Null< bool >  __o_showBorder) {
	::hx::ObjectPtr< FlxUIBar_obj > __this = new FlxUIBar_obj();
	__this->__construct(__o_x,__o_y,direction,__o_width,__o_height,parentRef,__o_variable,__o_min,__o_max,__o_showBorder);
	return __this;
}

::hx::ObjectPtr< FlxUIBar_obj > FlxUIBar_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::flixel::ui::FlxBarFillDirection direction,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height, ::Dynamic parentRef,::String __o_variable,::hx::Null< Float >  __o_min,::hx::Null< Float >  __o_max,::hx::Null< bool >  __o_showBorder) {
	FlxUIBar_obj *__this = (FlxUIBar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUIBar_obj), true, "flixel.addons.ui.FlxUIBar"));
	*(void **)__this = FlxUIBar_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,direction,__o_width,__o_height,parentRef,__o_variable,__o_min,__o_max,__o_showBorder);
	return __this;
}

FlxUIBar_obj::FlxUIBar_obj()
{
}

void FlxUIBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIBar);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	 ::flixel::ui::FlxBar_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	 ::flixel::ui::FlxBar_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxUIBar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return ::hx::Val( style ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return ::hx::Val( params ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_style") ) { return ::hx::Val( set_style_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_params") ) { return ::hx::Val( set_params_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return ::hx::Val( broadcastToFlxUI ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxUIBar_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_style(inValue.Cast<  ::Dynamic >()) );style=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_params(inValue.Cast< ::cpp::VirtualArray >()) );params=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("style",31,a5,1d,84));
	outFields->push(HX_("params",46,fb,7a,ed));
	outFields->push(HX_("broadcastToFlxUI",ca,32,56,1a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUIBar_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FlxUIBar_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxUIBar_obj,style),HX_("style",31,a5,1d,84)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxUIBar_obj,params),HX_("params",46,fb,7a,ed)},
	{::hx::fsBool,(int)offsetof(FlxUIBar_obj,broadcastToFlxUI),HX_("broadcastToFlxUI",ca,32,56,1a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxUIBar_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxUIBar_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("style",31,a5,1d,84),
	HX_("params",46,fb,7a,ed),
	HX_("broadcastToFlxUI",ca,32,56,1a),
	HX_("clone",5d,13,63,48),
	HX_("set_style",94,ed,17,ab),
	HX_("resize",f4,59,7b,08),
	HX_("set_params",83,09,80,e1),
	::String(null()) };

::hx::Class FlxUIBar_obj::__mClass;

void FlxUIBar_obj::__register()
{
	FlxUIBar_obj _hx_dummy;
	FlxUIBar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUIBar",7e,84,a5,d9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUIBar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUIBar_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUIBar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUIBar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
