// Generated by Haxe 4.1.5
#ifndef INCLUDED_openfl_filters__GlowFilter_InnerCombineKnockoutShader
#define INCLUDED_openfl_filters__GlowFilter_InnerCombineKnockoutShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderInput_openfl_display_BitmapData)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilterShader)
HX_DECLARE_CLASS3(openfl,filters,_GlowFilter,InnerCombineKnockoutShader)

namespace openfl{
namespace filters{
namespace _GlowFilter{


class HXCPP_CLASS_ATTRIBUTES InnerCombineKnockoutShader_obj : public  ::openfl::filters::BitmapFilterShader_obj
{
	public:
		typedef  ::openfl::filters::BitmapFilterShader_obj super;
		typedef InnerCombineKnockoutShader_obj OBJ_;
		InnerCombineKnockoutShader_obj();

	public:
		enum { _hx_ClassId = 0x27e02ba1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filters._GlowFilter.InnerCombineKnockoutShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.filters._GlowFilter.InnerCombineKnockoutShader"); }
		static ::hx::ObjectPtr< InnerCombineKnockoutShader_obj > __new();
		static ::hx::ObjectPtr< InnerCombineKnockoutShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~InnerCombineKnockoutShader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InnerCombineKnockoutShader",48,4a,09,24); }

		 ::openfl::display::ShaderParameter_Float offset;
		 ::openfl::display::ShaderInput_openfl_display_BitmapData sourceBitmap;
};

} // end namespace openfl
} // end namespace filters
} // end namespace _GlowFilter

#endif /* INCLUDED_openfl_filters__GlowFilter_InnerCombineKnockoutShader */ 
