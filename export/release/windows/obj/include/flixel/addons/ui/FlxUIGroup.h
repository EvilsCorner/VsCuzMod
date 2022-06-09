#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#define INCLUDED_flixel_addons_ui_FlxUIGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUIGroup_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef FlxUIGroup_obj OBJ_;
		FlxUIGroup_obj();

	public:
		enum { _hx_ClassId = 0x398eb8dc };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUIGroup")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUIGroup"); }
		static ::hx::ObjectPtr< FlxUIGroup_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y);
		static ::hx::ObjectPtr< FlxUIGroup_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUIGroup_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxUIGroup",39,7a,aa,8d); }

		::String name;
		bool broadcastToFlxUI;
		bool autoBounds;
		virtual void destroy();

		virtual  ::Dynamic add( ::Dynamic _tmp_Object);

		 ::Dynamic remove( ::Dynamic _tmp_Object,::hx::Null< bool >  Splice);

		void setScrollFactor(Float X,Float Y);
		::Dynamic setScrollFactor_dyn();

		bool hasThis( ::flixel::FlxSprite Object);
		::Dynamic hasThis_dyn();

		void calcBounds( ::flixel::math::FlxRect rect);
		::Dynamic calcBounds_dyn();

		void floorAll();
		::Dynamic floorAll_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIGroup */ 
