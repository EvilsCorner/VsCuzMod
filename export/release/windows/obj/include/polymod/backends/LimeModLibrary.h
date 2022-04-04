// Generated by Haxe 4.1.5
#ifndef INCLUDED_polymod_backends_LimeModLibrary
#define INCLUDED_polymod_backends_LimeModLibrary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,media,AudioBuffer)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(lime,utils,AssetLibrary)
HX_DECLARE_CLASS2(polymod,backends,IBackend)
HX_DECLARE_CLASS2(polymod,backends,LimeBackend)
HX_DECLARE_CLASS2(polymod,backends,LimeModLibrary)
HX_DECLARE_CLASS2(polymod,backends,PolymodAssetLibrary)

namespace polymod{
namespace backends{


class HXCPP_CLASS_ATTRIBUTES LimeModLibrary_obj : public  ::lime::utils::AssetLibrary_obj
{
	public:
		typedef  ::lime::utils::AssetLibrary_obj super;
		typedef LimeModLibrary_obj OBJ_;
		LimeModLibrary_obj();

	public:
		enum { _hx_ClassId = 0x333eca03 };

		void __construct( ::polymod::backends::LimeBackend backend, ::lime::utils::AssetLibrary fallback,::String __o_pathPrefix);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="polymod.backends.LimeModLibrary")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"polymod.backends.LimeModLibrary"); }
		static ::hx::ObjectPtr< LimeModLibrary_obj > __new( ::polymod::backends::LimeBackend backend, ::lime::utils::AssetLibrary fallback,::String __o_pathPrefix);
		static ::hx::ObjectPtr< LimeModLibrary_obj > __alloc(::hx::Ctx *_hx_ctx, ::polymod::backends::LimeBackend backend, ::lime::utils::AssetLibrary fallback,::String __o_pathPrefix);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LimeModLibrary_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LimeModLibrary",ee,af,32,ef); }

		static ::String LimeToPoly(::String type);
		static ::Dynamic LimeToPoly_dyn();

		::String pathPrefix;
		 ::polymod::backends::LimeBackend b;
		 ::polymod::backends::PolymodAssetLibrary p;
		 ::lime::utils::AssetLibrary fallback;
		bool hasFallback;
		 ::haxe::ds::StringMap type;
		void destroy();
		::Dynamic destroy_dyn();

		 ::Dynamic getAsset(::String id,::String type);

		bool exists(::String id,::String type);

		 ::lime::media::AudioBuffer getAudioBuffer(::String id);

		 ::haxe::io::Bytes getBytes(::String id);

		 ::lime::text::Font getFont(::String id);

		 ::lime::graphics::Image getImage(::String id);

		::String getText(::String id);

		 ::lime::app::Future loadBytes(::String id);

		 ::lime::app::Future loadFont(::String id);

		 ::lime::app::Future loadImage(::String id);

		 ::lime::app::Future loadAudioBuffer(::String id);

		 ::lime::app::Future loadText(::String id);

		bool isLocal(::String id,::String type);

};

} // end namespace polymod
} // end namespace backends

#endif /* INCLUDED_polymod_backends_LimeModLibrary */ 
