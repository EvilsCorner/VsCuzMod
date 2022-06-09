#ifndef INCLUDED_flixel_addons_ui_FlxUITileTest
#define INCLUDED_flixel_addons_ui_FlxUITileTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITileTest)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUITileTest_obj : public  ::flixel::addons::ui::FlxUISprite_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxUISprite_obj super;
		typedef FlxUITileTest_obj OBJ_;
		FlxUITileTest_obj();

	public:
		enum { _hx_ClassId = 0x1574cf3f };

		void __construct(Float X,Float Y,int TileWidth,int TileHeight,int tilesWide,int tilesTall,::hx::Null< int >  __o_color1,::hx::Null< int >  __o_color2,::hx::Null< bool >  __o_FloorToEven);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUITileTest")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUITileTest"); }
		static ::hx::ObjectPtr< FlxUITileTest_obj > __new(Float X,Float Y,int TileWidth,int TileHeight,int tilesWide,int tilesTall,::hx::Null< int >  __o_color1,::hx::Null< int >  __o_color2,::hx::Null< bool >  __o_FloorToEven);
		static ::hx::ObjectPtr< FlxUITileTest_obj > __alloc(::hx::Ctx *_hx_ctx,Float X,Float Y,int TileWidth,int TileHeight,int tilesWide,int tilesTall,::hx::Null< int >  __o_color1,::hx::Null< int >  __o_color2,::hx::Null< bool >  __o_FloorToEven);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUITileTest_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxUITileTest",e6,3f,e9,97); }

		int tileWidth;
		int tileHeight;
		int get_widthInTiles();
		::Dynamic get_widthInTiles_dyn();

		int get_heightInTiles();
		::Dynamic get_heightInTiles_dyn();

		int _tilesWide;
		int _tilesTall;
		int _color1;
		int _color2;
		bool floorToEven;
		int baseTileSize;
		void makeTiles(int tileWidth,int tileHeight,int tilesWide,int tilesTall,::hx::Null< int >  color1,::hx::Null< int >  color2);
		::Dynamic makeTiles_dyn();

		 ::flixel::math::FlxPoint constrain(Float w,Float h);
		::Dynamic constrain_dyn();

		void resize(Float w,Float h);

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUITileTest */ 
