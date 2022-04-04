// Generated by Haxe 4.1.5
#ifndef INCLUDED_SectionRender
#define INCLUDED_SectionRender

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(SectionRender)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES SectionRender_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef SectionRender_obj OBJ_;
		SectionRender_obj();

	public:
		enum { _hx_ClassId = 0x69726473 };

		void __construct(Float x,Float y,int GRID_SIZE, ::Dynamic __o_Height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="SectionRender")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"SectionRender"); }
		static ::hx::ObjectPtr< SectionRender_obj > __new(Float x,Float y,int GRID_SIZE, ::Dynamic __o_Height);
		static ::hx::ObjectPtr< SectionRender_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,int GRID_SIZE, ::Dynamic __o_Height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SectionRender_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SectionRender",fb,2e,8b,ef); }

		 ::Dynamic section;
		 ::flixel::FlxSprite icon;
		bool lastUpdated;
		void update(Float elapsed);

};


#endif /* INCLUDED_SectionRender */ 
