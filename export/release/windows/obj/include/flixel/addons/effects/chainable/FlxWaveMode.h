#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveMode
#define INCLUDED_flixel_addons_effects_chainable_FlxWaveMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxWaveMode)
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{


class FlxWaveMode_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxWaveMode_obj OBJ_;

	public:
		FlxWaveMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.addons.effects.chainable.FlxWaveMode",46,8c,cd,8e); }
		::String __ToString() const { return HX_("FlxWaveMode.",40,18,b3,03) + _hx_tag; }

		static ::flixel::addons::effects::chainable::FlxWaveMode ALL;
		static inline ::flixel::addons::effects::chainable::FlxWaveMode ALL_dyn() { return ALL; }
		static ::flixel::addons::effects::chainable::FlxWaveMode END;
		static inline ::flixel::addons::effects::chainable::FlxWaveMode END_dyn() { return END; }
		static ::flixel::addons::effects::chainable::FlxWaveMode START;
		static inline ::flixel::addons::effects::chainable::FlxWaveMode START_dyn() { return START; }
};

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable

#endif /* INCLUDED_flixel_addons_effects_chainable_FlxWaveMode */ 
