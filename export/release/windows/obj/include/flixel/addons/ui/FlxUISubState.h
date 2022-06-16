#ifndef INCLUDED_flixel_addons_ui_FlxUISubState
#define INCLUDED_flixel_addons_ui_FlxUISubState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUI)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUICursor)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISubState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITooltip)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITooltipManager)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFireTongue)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUISubState_obj : public  ::flixel::FlxSubState_obj
{
	public:
		typedef  ::flixel::FlxSubState_obj super;
		typedef FlxUISubState_obj OBJ_;
		FlxUISubState_obj();

	public:
		enum { _hx_ClassId = 0x4ba866f4 };

		void __construct(::hx::Null< int >  __o_BGColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUISubState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUISubState"); }
		static ::hx::ObjectPtr< FlxUISubState_obj > __new(::hx::Null< int >  __o_BGColor);
		static ::hx::ObjectPtr< FlxUISubState_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_BGColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUISubState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxUISubState",b7,1d,14,0a); }

		bool destroyed;
		 ::flixel::addons::ui::FlxUICursor cursor;
		bool _makeCursor;
		 ::flixel::addons::ui::FlxUITooltipManager tooltips;
		::String _xml_id;
		 ::flixel::addons::ui::FlxUI _ui;
		::Dynamic _tongue;
		bool reload_ui_on_resize;
		bool _reload;
		int _reload_countdown;
		 ::Dynamic getTextFallback;
		Dynamic getTextFallback_dyn() { return getTextFallback;}
		void forceScrollFactor(Float X,Float Y);
		::Dynamic forceScrollFactor_dyn();

		void forceFocus(bool b,::Dynamic thing);
		::Dynamic forceFocus_dyn();

		virtual void create();

		void onCursorEvent(::String code,::Dynamic target);
		::Dynamic onCursorEvent_dyn();

		void onShowTooltip( ::flixel::addons::ui::FlxUITooltip t);
		::Dynamic onShowTooltip_dyn();

		void onResize(int Width,int Height);

		void update(Float elapsed);

		void destroy();

		virtual void getEvent(::String id,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);
		::Dynamic getEvent_dyn();

		 ::Dynamic getRequest(::String id,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);
		::Dynamic getRequest_dyn();

		::String getText(::String Flag,::String Context,::hx::Null< bool >  Safe);
		::Dynamic getText_dyn();

		void cleanup();
		::Dynamic cleanup_dyn();

		 ::flixel::addons::ui::FlxUICursor createCursor();
		::Dynamic createCursor_dyn();

		 ::flixel::addons::ui::FlxUI createUI( ::Xml data,::Dynamic ptr, ::flixel::addons::ui::FlxUI superIndex_,::Dynamic tongue_,::String liveFilePath_);
		::Dynamic createUI_dyn();

		void reloadUI();
		::Dynamic reloadUI_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUISubState */ 
