#ifndef INCLUDED_BackgroundGirls
#define INCLUDED_BackgroundGirls

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(BackgroundGirls)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES BackgroundGirls_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef BackgroundGirls_obj OBJ_;
		BackgroundGirls_obj();

	public:
		enum { _hx_ClassId = 0x10bdbe3d };

		void __construct(Float x,Float y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="BackgroundGirls")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"BackgroundGirls"); }
		static ::hx::ObjectPtr< BackgroundGirls_obj > __new(Float x,Float y);
		static ::hx::ObjectPtr< BackgroundGirls_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BackgroundGirls_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BackgroundGirls",a9,eb,7a,b7); }

		bool isPissed;
		bool danceDir;
		void swapDanceType();
		::Dynamic swapDanceType_dyn();

		void dance();
		::Dynamic dance_dyn();

};


#endif /* INCLUDED_BackgroundGirls */ 
