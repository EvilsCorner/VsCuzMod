#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#define INCLUDED_flixel_addons_ui_FlxUITypedButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITypedButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUITypedButton_obj : public  ::flixel::ui::FlxTypedButton_obj
{
	public:
		typedef  ::flixel::ui::FlxTypedButton_obj super;
		typedef FlxUITypedButton_obj OBJ_;
		FlxUITypedButton_obj();

	public:
		enum { _hx_ClassId = 0x2a6d0b59 };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic OnClick);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUITypedButton")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUITypedButton"); }
		static ::hx::ObjectPtr< FlxUITypedButton_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic OnClick);
		static ::hx::ObjectPtr< FlxUITypedButton_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic OnClick);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUITypedButton_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxUITypedButton",76,b0,9b,ce); }

		static void __boot();
		static ::String CLICK_EVENT;
		static ::String OVER_EVENT;
		static ::String DOWN_EVENT;
		static ::String OUT_EVENT;
		::String name;
		Float resize_ratio;
		int resize_ratio_axis;
		 ::flixel::math::FlxPoint resize_point;
		int tile;
		bool has_toggle;
		bool toggled;
		bool set_toggled(bool b);
		::Dynamic set_toggled_dyn();

		bool broadcastToFlxUI;
		 ::flixel::input::FlxInput inputOver;
		bool get_justMousedOver();
		::Dynamic get_justMousedOver_dyn();

		bool get_justMousedOut();
		::Dynamic get_justMousedOut_dyn();

		bool get_mouseIsOver();
		::Dynamic get_mouseIsOver_dyn();

		bool get_mouseIsOut();
		::Dynamic get_mouseIsOut_dyn();

		 ::Dynamic up_color;
		 ::Dynamic over_color;
		 ::Dynamic down_color;
		 ::Dynamic up_toggle_color;
		 ::Dynamic over_toggle_color;
		 ::Dynamic down_toggle_color;
		bool up_visible;
		bool over_visible;
		bool down_visible;
		bool up_toggle_visible;
		bool over_toggle_visible;
		bool down_toggle_visible;
		 ::flixel::FlxSprite toggle_label;
		 ::flixel::FlxSprite set_toggle_label( ::flixel::FlxSprite f);
		::Dynamic set_toggle_label_dyn();

		bool set_visible(bool Value);

		bool round_labels;
		bool skipButtonUpdate;
		bool set_skipButtonUpdate(bool b);
		::Dynamic set_skipButtonUpdate_dyn();

		::cpp::VirtualArray params;
		::cpp::VirtualArray set_params(::cpp::VirtualArray p);
		::Dynamic set_params_dyn();

		virtual void destroy();

		bool autoResizeLabel;
		void graphicLoaded();

		void copyGraphic( ::flixel::addons::ui::FlxUITypedButton other);
		::Dynamic copyGraphic_dyn();

		virtual void copyStyle( ::flixel::addons::ui::FlxUITypedButton other);
		::Dynamic copyStyle_dyn();

		void setAllLabelOffsets(Float X,Float Y);
		::Dynamic setAllLabelOffsets_dyn();

		void update(Float elapsed);

		void updateStatusAnimation();

		void draw();

		virtual void resize(Float W,Float H);
		::Dynamic resize_dyn();

		void doResize(Float W,Float H,::hx::Null< bool >  Redraw);
		::Dynamic doResize_dyn();

		 ::openfl::display::BitmapData getBmp( ::Dynamic asset);
		::Dynamic getBmp_dyn();

		void loadGraphicsMultiple(::cpp::VirtualArray assets,::String Key);
		::Dynamic loadGraphicsMultiple_dyn();

		void loadGraphicsUpOverDown( ::Dynamic asset,::hx::Null< bool >  for_toggle,::String key);
		::Dynamic loadGraphicsUpOverDown_dyn();

		void loadGraphicSlice9(::cpp::VirtualArray assets,::hx::Null< int >  W,::hx::Null< int >  H,::Array< ::Dynamic> slice9,::hx::Null< int >  Tile,::hx::Null< Float >  Resize_Ratio,::hx::Null< bool >  isToggle,::hx::Null< int >  src_w,::hx::Null< int >  src_h,::Array< int > frame_indeces);
		::Dynamic loadGraphicSlice9_dyn();

		virtual void autoCenterLabel();
		::Dynamic autoCenterLabel_dyn();

		void setCenterLabelOffset(Float X,Float Y);
		::Dynamic setCenterLabelOffset_dyn();

		 ::flixel::math::FlxPoint getCenterLabelOffset();
		::Dynamic getCenterLabelOffset_dyn();

		void forceStateHandler(::String event);
		::Dynamic forceStateHandler_dyn();

		 ::openfl::display::BitmapData grabButtonFrame( ::openfl::display::BitmapData all_frames,int button_state,::hx::Null< bool >  for_toggle,::hx::Null< int >  src_w,::hx::Null< int >  src_h,::String key);
		::Dynamic grabButtonFrame_dyn();

		 ::openfl::display::BitmapData combineToggleBitmaps( ::openfl::display::BitmapData normal, ::openfl::display::BitmapData toggle);
		::Dynamic combineToggleBitmaps_dyn();

		 ::openfl::display::BitmapData assembleButtonFrames( ::openfl::display::BitmapData upB, ::openfl::display::BitmapData overB, ::openfl::display::BitmapData downB);
		::Dynamic assembleButtonFrames_dyn();

		void updateButton();

		void addToCleanup(::String str);
		::Dynamic addToCleanup_dyn();

		void cleanup();
		::Dynamic cleanup_dyn();

		 ::flixel::FlxSprite fetchAndShowCorrectLabel();
		::Dynamic fetchAndShowCorrectLabel_dyn();

		virtual void onUpHandler();

		virtual void onDownHandler();

		virtual void onOverHandler();

		virtual void onOutHandler();

		Float set_x(Float NewX);

		Float set_y(Float NewY);

		bool _autoCleanup;
		::Array< ::String > _assetsToCleanup;
		bool _no_graphic;
		int _src_w;
		int _src_h;
		::Array< int > _frame_indeces;
		::Array< ::Dynamic> _slice9_arrays;
		::cpp::VirtualArray _slice9_assets;
		 ::flixel::math::FlxPoint _centerLabelOffset;
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUITypedButton */ 
