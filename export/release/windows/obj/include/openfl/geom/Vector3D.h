#ifndef INCLUDED_openfl_geom_Vector3D
#define INCLUDED_openfl_geom_Vector3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace openfl{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES Vector3D_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Vector3D_obj OBJ_;
		Vector3D_obj();

	public:
		enum { _hx_ClassId = 0x4d8b0de0 };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.geom.Vector3D")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.geom.Vector3D"); }
		static ::hx::ObjectPtr< Vector3D_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w);
		static ::hx::ObjectPtr< Vector3D_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Vector3D_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Vector3D",54,90,6f,48); }

		static Float angleBetween( ::openfl::geom::Vector3D a, ::openfl::geom::Vector3D b);
		static ::Dynamic angleBetween_dyn();

		static Float distance( ::openfl::geom::Vector3D pt1, ::openfl::geom::Vector3D pt2);
		static ::Dynamic distance_dyn();

		static  ::openfl::geom::Vector3D get_X_AXIS();
		static ::Dynamic get_X_AXIS_dyn();

		static  ::openfl::geom::Vector3D get_Y_AXIS();
		static ::Dynamic get_Y_AXIS_dyn();

		static  ::openfl::geom::Vector3D get_Z_AXIS();
		static ::Dynamic get_Z_AXIS_dyn();

		Float w;
		Float x;
		Float y;
		Float z;
		 ::openfl::geom::Vector3D add( ::openfl::geom::Vector3D a);
		::Dynamic add_dyn();

		 ::openfl::geom::Vector3D clone();
		::Dynamic clone_dyn();

		void copyFrom( ::openfl::geom::Vector3D sourceVector3D);
		::Dynamic copyFrom_dyn();

		 ::openfl::geom::Vector3D crossProduct( ::openfl::geom::Vector3D a);
		::Dynamic crossProduct_dyn();

		void decrementBy( ::openfl::geom::Vector3D a);
		::Dynamic decrementBy_dyn();

		Float dotProduct( ::openfl::geom::Vector3D a);
		::Dynamic dotProduct_dyn();

		bool equals( ::openfl::geom::Vector3D toCompare,::hx::Null< bool >  allFour);
		::Dynamic equals_dyn();

		void incrementBy( ::openfl::geom::Vector3D a);
		::Dynamic incrementBy_dyn();

		bool nearEquals( ::openfl::geom::Vector3D toCompare,Float tolerance, ::Dynamic allFour);
		::Dynamic nearEquals_dyn();

		void negate();
		::Dynamic negate_dyn();

		Float normalize();
		::Dynamic normalize_dyn();

		void project();
		::Dynamic project_dyn();

		void scaleBy(Float s);
		::Dynamic scaleBy_dyn();

		void setTo(Float xa,Float ya,Float za);
		::Dynamic setTo_dyn();

		 ::openfl::geom::Vector3D subtract( ::openfl::geom::Vector3D a);
		::Dynamic subtract_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		Float get_length();
		::Dynamic get_length_dyn();

		Float get_lengthSquared();
		::Dynamic get_lengthSquared_dyn();

};

} // end namespace openfl
} // end namespace geom

#endif /* INCLUDED_openfl_geom_Vector3D */ 
