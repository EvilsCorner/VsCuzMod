// Generated by Haxe 4.1.5
#ifndef INCLUDED_lime_graphics_ImageChannel
#define INCLUDED_lime_graphics_ImageChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,ImageChannel)
namespace lime{
namespace graphics{


class ImageChannel_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ImageChannel_obj OBJ_;

	public:
		ImageChannel_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("lime.graphics.ImageChannel",32,a4,e9,ce); }
		::String __ToString() const { return HX_("ImageChannel.",66,28,81,92) + _hx_tag; }

		static ::lime::graphics::ImageChannel ALPHA;
		static inline ::lime::graphics::ImageChannel ALPHA_dyn() { return ALPHA; }
		static ::lime::graphics::ImageChannel BLUE;
		static inline ::lime::graphics::ImageChannel BLUE_dyn() { return BLUE; }
		static ::lime::graphics::ImageChannel GREEN;
		static inline ::lime::graphics::ImageChannel GREEN_dyn() { return GREEN; }
		static ::lime::graphics::ImageChannel RED;
		static inline ::lime::graphics::ImageChannel RED_dyn() { return RED; }
};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_ImageChannel */ 
