#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#define INCLUDED_flixel_graphics_frames_FlxFramesCollection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrameCollectionType)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace flixel{
namespace graphics{
namespace frames{


class HXCPP_CLASS_ATTRIBUTES FlxFramesCollection_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxFramesCollection_obj OBJ_;
		FlxFramesCollection_obj();

	public:
		enum { _hx_ClassId = 0x7907b929 };

		void __construct( ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxPoint border);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.frames.FlxFramesCollection")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.graphics.frames.FlxFramesCollection"); }
		static ::hx::ObjectPtr< FlxFramesCollection_obj > __new( ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxPoint border);
		static ::hx::ObjectPtr< FlxFramesCollection_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxPoint border);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxFramesCollection_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxFramesCollection",16,6a,85,c6); }

		::Array< ::Dynamic> frames;
		 ::haxe::ds::StringMap framesHash;
		 ::flixel::graphics::FlxGraphic parent;
		 ::flixel::graphics::frames::FlxFrameCollectionType type;
		 ::flixel::math::FlxPoint border;
		 ::flixel::graphics::frames::FlxFrame getByName(::String name);
		::Dynamic getByName_dyn();

		 ::flixel::graphics::frames::FlxFrame getByIndex(int index);
		::Dynamic getByIndex_dyn();

		int getIndexByName(::String name);
		::Dynamic getIndexByName_dyn();

		int getFrameIndex( ::flixel::graphics::frames::FlxFrame frame);
		::Dynamic getFrameIndex_dyn();

		virtual void destroy();
		::Dynamic destroy_dyn();

		 ::flixel::graphics::frames::FlxFrame addEmptyFrame( ::flixel::math::FlxRect size);
		::Dynamic addEmptyFrame_dyn();

		 ::flixel::graphics::frames::FlxFrame addSpriteSheetFrame( ::flixel::math::FlxRect region);
		::Dynamic addSpriteSheetFrame_dyn();

		 ::flixel::graphics::frames::FlxFrame addAtlasFrame( ::flixel::math::FlxRect frame, ::flixel::math::FlxPoint sourceSize, ::flixel::math::FlxPoint offset,::String name,::hx::Null< int >  angle,::hx::Null< bool >  flipX,::hx::Null< bool >  flipY);
		::Dynamic addAtlasFrame_dyn();

		 ::flixel::math::FlxRect checkFrame( ::flixel::math::FlxRect frame,::String name);
		::Dynamic checkFrame_dyn();

		 ::flixel::graphics::frames::FlxFrame pushFrame( ::flixel::graphics::frames::FlxFrame frameObj);
		::Dynamic pushFrame_dyn();

		virtual  ::flixel::graphics::frames::FlxFramesCollection addBorder( ::flixel::math::FlxPoint border);
		::Dynamic addBorder_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		int get_numFrames();
		::Dynamic get_numFrames_dyn();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace frames

#endif /* INCLUDED_flixel_graphics_frames_FlxFramesCollection */ 
