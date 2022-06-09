#ifndef INCLUDED_flixel_input_gamepad_id_MFiID
#define INCLUDED_flixel_input_gamepad_id_MFiID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS4(flixel,input,gamepad,id,MFiID)

namespace flixel{
namespace input{
namespace gamepad{
namespace id{


class HXCPP_CLASS_ATTRIBUTES MFiID_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MFiID_obj OBJ_;
		MFiID_obj();

	public:
		enum { _hx_ClassId = 0x4fcc453d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id.MFiID")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.input.gamepad.id.MFiID"); }

		inline static ::hx::ObjectPtr< MFiID_obj > __new() {
			::hx::ObjectPtr< MFiID_obj > __this = new MFiID_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< MFiID_obj > __alloc(::hx::Ctx *_hx_ctx) {
			MFiID_obj *__this = (MFiID_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MFiID_obj), false, "flixel.input.gamepad.id.MFiID"));
			*(void **)__this = MFiID_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MFiID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MFiID",cb,86,6f,84); }

		static void __boot();
		static int A;
		static int B;
		static int X;
		static int Y;
		static int LB;
		static int RB;
		static int BACK;
		static int START;
		static int LEFT_STICK_CLICK;
		static int RIGHT_STICK_CLICK;
		static int GUIDE;
		static int DPAD_UP;
		static int DPAD_DOWN;
		static int DPAD_LEFT;
		static int DPAD_RIGHT;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick LEFT_ANALOG_STICK;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick RIGHT_ANALOG_STICK;
		static int LEFT_TRIGGER;
		static int RIGHT_TRIGGER;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id

#endif /* INCLUDED_flixel_input_gamepad_id_MFiID */ 
