#ifndef INCLUDED_openfl_display__BlendMode_BlendMode_Impl_
#define INCLUDED_openfl_display__BlendMode_BlendMode_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_BlendMode,BlendMode_Impl_)

namespace openfl{
namespace display{
namespace _BlendMode{


class HXCPP_CLASS_ATTRIBUTES BlendMode_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BlendMode_Impl__obj OBJ_;
		BlendMode_Impl__obj();

	public:
		enum { _hx_ClassId = 0x4ffb4c4d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._BlendMode.BlendMode_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._BlendMode.BlendMode_Impl_"); }

		inline static ::hx::ObjectPtr< BlendMode_Impl__obj > __new() {
			::hx::ObjectPtr< BlendMode_Impl__obj > __this = new BlendMode_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< BlendMode_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			BlendMode_Impl__obj *__this = (BlendMode_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BlendMode_Impl__obj), false, "openfl.display._BlendMode.BlendMode_Impl_"));
			*(void **)__this = BlendMode_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BlendMode_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BlendMode_Impl_",d4,1f,5b,ff); }

		static void __boot();
		static  ::Dynamic ADD;
		static  ::Dynamic ALPHA;
		static  ::Dynamic DARKEN;
		static  ::Dynamic DIFFERENCE;
		static  ::Dynamic ERASE;
		static  ::Dynamic HARDLIGHT;
		static  ::Dynamic INVERT;
		static  ::Dynamic LAYER;
		static  ::Dynamic LIGHTEN;
		static  ::Dynamic MULTIPLY;
		static  ::Dynamic NORMAL;
		static  ::Dynamic OVERLAY;
		static  ::Dynamic SCREEN;
		static  ::Dynamic SHADER;
		static  ::Dynamic SUBTRACT;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _BlendMode

#endif /* INCLUDED_openfl_display__BlendMode_BlendMode_Impl_ */ 
