#include <hxcpp.h>

#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_utils_AssetCache
#include <lime/utils/AssetCache.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_53_excludeAsset,"Paths","excludeAsset",0x536bc616,"Paths.excludeAsset","Paths.hx",53,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_64_clearUnusedMemory,"Paths","clearUnusedMemory",0xc76b6c84,"Paths.clearUnusedMemory","Paths.hx",64,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_87_clearStoredMemory,"Paths","clearStoredMemory",0xf472dc91,"Paths.clearStoredMemory","Paths.hx",87,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_118_setCurrentLevel,"Paths","setCurrentLevel",0x8a8c27ed,"Paths.setCurrentLevel","Paths.hx",118,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_122_getPath,"Paths","getPath",0x5f104ffb,"Paths.getPath","Paths.hx",122,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_150_getLibraryPath,"Paths","getLibraryPath",0xe56efeaa,"Paths.getLibraryPath","Paths.hx",150,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_154_getLibraryPathForce,"Paths","getLibraryPathForce",0xe1e5bae1,"Paths.getLibraryPathForce","Paths.hx",154,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_161_getPreloadPath,"Paths","getPreloadPath",0x2fdd9e78,"Paths.getPreloadPath","Paths.hx",161,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_166_file,"Paths","file",0x8f872fdc,"Paths.file","Paths.hx",166,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_171_txt,"Paths","txt",0x5a3a5910,"Paths.txt","Paths.hx",171,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_176_xml,"Paths","xml",0x5a3d5877,"Paths.xml","Paths.hx",176,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_181_json,"Paths","json",0x9233a388,"Paths.json","Paths.hx",181,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_186_shaderFragment,"Paths","shaderFragment",0x1089e175,"Paths.shaderFragment","Paths.hx",186,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_190_shaderVertex,"Paths","shaderVertex",0x334c39c9,"Paths.shaderVertex","Paths.hx",190,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_194_lua,"Paths","lua",0x5a344458,"Paths.lua","Paths.hx",194,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_198_video,"Paths","video",0x3d25e71b,"Paths.video","Paths.hx",198,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_209_sound,"Paths","sound",0x86f65f6f,"Paths.sound","Paths.hx",209,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_216_soundRandom,"Paths","soundRandom",0x8e79b2d2,"Paths.soundRandom","Paths.hx",216,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_220_music,"Paths","music",0x1684a345,"Paths.music","Paths.hx",220,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_226_voices,"Paths","voices",0xbbb84fe1,"Paths.voices","Paths.hx",226,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_233_inst,"Paths","inst",0x9186a526,"Paths.inst","Paths.hx",233,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_240_image,"Paths","image",0xc392f1fb,"Paths.image","Paths.hx",240,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_247_getTextFromFile,"Paths","getTextFromFile",0xab54cb29,"Paths.getTextFromFile","Paths.hx",247,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_275_font,"Paths","font",0x8f8bbf2f,"Paths.font","Paths.hx",275,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_286_fileExists,"Paths","fileExists",0x907b0ed8,"Paths.fileExists","Paths.hx",286,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_300_getSparrowAtlas,"Paths","getSparrowAtlas",0x5a1f05f5,"Paths.getSparrowAtlas","Paths.hx",300,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_316_getPackerAtlas,"Paths","getPackerAtlas",0xa8de8c4f,"Paths.getPackerAtlas","Paths.hx",316,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_331_formatToSongPath,"Paths","formatToSongPath",0xb1c0282c,"Paths.formatToSongPath","Paths.hx",331,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_336_returnGraphic,"Paths","returnGraphic",0xc1c34678,"Paths.returnGraphic","Paths.hx",336,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_365_returnSound,"Paths","returnSound",0xb166e49f,"Paths.returnSound","Paths.hx",365,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_392_mods,"Paths","mods",0x942c34d1,"Paths.mods","Paths.hx",392,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_396_modsFont,"Paths","modsFont",0x75aefb40,"Paths.modsFont","Paths.hx",396,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_400_modsJson,"Paths","modsJson",0x7856df99,"Paths.modsJson","Paths.hx",400,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_404_modsVideo,"Paths","modsVideo",0xb5d739ea,"Paths.modsVideo","Paths.hx",404,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_408_modsSounds,"Paths","modsSounds",0xb3144475,"Paths.modsSounds","Paths.hx",408,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_412_modsImages,"Paths","modsImages",0x7f77ec69,"Paths.modsImages","Paths.hx",412,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_416_modsXml,"Paths","modsXml",0x38d50986,"Paths.modsXml","Paths.hx",416,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_420_modsTxt,"Paths","modsTxt",0x38d20a1f,"Paths.modsTxt","Paths.hx",420,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_425_modsShaderFragment,"Paths","modsShaderFragment",0xd0553cc6,"Paths.modsShaderFragment","Paths.hx",425,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_429_modsShaderVertex,"Paths","modsShaderVertex",0x0b136eda,"Paths.modsShaderVertex","Paths.hx",429,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_432_modsAchievements,"Paths","modsAchievements",0x804e9795,"Paths.modsAchievements","Paths.hx",432,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_435_modFolders,"Paths","modFolders",0xd05558c3,"Paths.modFolders","Paths.hx",435,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_444_getModDirectories,"Paths","getModDirectories",0x27c7a23f,"Paths.getModDirectories","Paths.hx",444,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_29_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",29,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_30_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",30,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_33_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",33,0x309ea470)
static const ::String _hx_array_data_50847b0e_50[] = {
	HX_("characters",aa,58,ce,55),HX_("custom_events",27,a1,9e,e1),HX_("custom_notetypes",f9,35,37,af),HX_("data",2a,56,63,42),HX_("songs",fe,36,c7,80),HX_("music",a5,d0,5a,10),HX_("sounds",c4,a8,2e,32),HX_("shaders",ae,81,86,5f),HX_("videos",98,d7,95,e5),HX_("images",b8,50,92,fe),HX_("stages",f5,fb,f1,05),HX_("weeks",ff,95,be,c7),HX_("fonts",c4,b7,91,04),HX_("scripts",08,fc,e3,2c),HX_("achievements",24,a1,6b,86),
};
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_58_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",58,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_86_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",86,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_114_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",114,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_335_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",335,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_364_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",364,0x309ea470)

void Paths_obj::__construct() { }

Dynamic Paths_obj::__CreateEmpty() { return new Paths_obj; }

void *Paths_obj::_hx_vtable = 0;

Dynamic Paths_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Paths_obj > _hx_result = new Paths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Paths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x44c8e46a;
}

::String Paths_obj::SOUND_EXT;

::String Paths_obj::VIDEO_EXT;

::Array< ::String > Paths_obj::ignoreModFolders;

void Paths_obj::excludeAsset(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_53_excludeAsset)
HXDLIN(  53)		if (!(::Paths_obj::dumpExclusions->contains(key))) {
HXLINE(  54)			::Paths_obj::dumpExclusions->push(key);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,excludeAsset,(void))

::Array< ::String > Paths_obj::dumpExclusions;

void Paths_obj::clearUnusedMemory(){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_64_clearUnusedMemory)
HXLINE(  66)		{
HXLINE(  66)			 ::Dynamic key = ::Paths_obj::currentTrackedAssets->keys();
HXDLIN(  66)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  66)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  68)				bool _hx_tmp;
HXDLIN(  68)				if (!(::Paths_obj::localTrackedAssets->contains(key1))) {
HXLINE(  68)					_hx_tmp = !(::Paths_obj::dumpExclusions->contains(key1));
            				}
            				else {
HXLINE(  68)					_hx_tmp = false;
            				}
HXDLIN(  68)				if (_hx_tmp) {
HXLINE(  71)					 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(::Paths_obj::currentTrackedAssets->get(key1)) );
HXLINE(  73)					if (::hx::IsNotNull( obj )) {
HXLINE(  74)						::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key1);
HXLINE(  75)						::flixel::FlxG_obj::bitmap->_cache->remove(key1);
HXLINE(  76)						obj->destroy();
HXLINE(  77)						::Paths_obj::currentTrackedAssets->remove(key1);
            					}
            				}
            			}
            		}
HXLINE(  82)		::openfl::_hx_system::System_obj::gc();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Paths_obj,clearUnusedMemory,(void))

::Array< ::String > Paths_obj::localTrackedAssets;

void Paths_obj::clearStoredMemory( ::Dynamic __o_cleanUnused){
            		 ::Dynamic cleanUnused = __o_cleanUnused;
            		if (::hx::IsNull(__o_cleanUnused)) cleanUnused = false;
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_87_clearStoredMemory)
HXLINE(  90)		{
HXLINE(  90)			 ::Dynamic key = ::flixel::FlxG_obj::bitmap->_cache->keys();
HXDLIN(  90)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  90)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  92)				 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key1)) );
HXLINE(  93)				bool _hx_tmp;
HXDLIN(  93)				if (::hx::IsNotNull( obj )) {
HXLINE(  93)					_hx_tmp = !(::Paths_obj::currentTrackedAssets->exists(key1));
            				}
            				else {
HXLINE(  93)					_hx_tmp = false;
            				}
HXDLIN(  93)				if (_hx_tmp) {
HXLINE(  94)					::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key1);
HXLINE(  95)					::flixel::FlxG_obj::bitmap->_cache->remove(key1);
HXLINE(  96)					obj->destroy();
            				}
            			}
            		}
HXLINE( 101)		{
HXLINE( 101)			 ::Dynamic key1 = ::Paths_obj::currentTrackedSounds->keys();
HXDLIN( 101)			while(( (bool)(key1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 101)				::String key = ( (::String)(key1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 102)				bool _hx_tmp;
HXDLIN( 102)				bool _hx_tmp1;
HXDLIN( 102)				if (!(::Paths_obj::localTrackedAssets->contains(key))) {
HXLINE( 102)					_hx_tmp1 = !(::Paths_obj::dumpExclusions->contains(key));
            				}
            				else {
HXLINE( 102)					_hx_tmp1 = false;
            				}
HXDLIN( 102)				if (_hx_tmp1) {
HXLINE( 102)					_hx_tmp = ::hx::IsNotNull( key );
            				}
            				else {
HXLINE( 102)					_hx_tmp = false;
            				}
HXDLIN( 102)				if (_hx_tmp) {
HXLINE( 105)					::lime::utils::Assets_obj::cache->clear(key);
HXLINE( 106)					::Paths_obj::currentTrackedSounds->remove(key);
            				}
            			}
            		}
HXLINE( 110)		::Paths_obj::localTrackedAssets = ::Array_obj< ::String >::__new(0);
HXLINE( 111)		::openfl::utils::IAssetCache_obj::clear(::openfl::utils::Assets_obj::cache,HX_("songs",fe,36,c7,80));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,clearStoredMemory,(void))

::String Paths_obj::currentModDirectory;

::String Paths_obj::currentLevel;

void Paths_obj::setCurrentLevel(::String name){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_118_setCurrentLevel)
HXDLIN( 118)		::Paths_obj::currentLevel = name.toLowerCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,setCurrentLevel,(void))

::String Paths_obj::getPath(::String file,::String type,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_122_getPath)
HXLINE( 124)		if (::hx::IsNotNull( library )) {
HXLINE( 126)			::haxe::Log_obj::trace(HX_("oh, my library was null apparently",5c,4c,d2,c8),::hx::SourceInfo(HX_("source/Paths.hx",64,c7,bd,1c),126,HX_("Paths",0e,7b,84,50),HX_("getPath",5b,95,d4,1c)));
HXLINE( 127)			return ::Paths_obj::getLibraryPath(file,library);
            		}
HXLINE( 130)		if (::hx::IsNotNull( ::Paths_obj::currentLevel )) {
HXLINE( 132)			::String levelPath = HX_("",00,00,00,00);
HXLINE( 133)			if ((::Paths_obj::currentLevel != HX_("shared",a5,5e,2b,1d))) {
HXLINE( 135)				::String library = ::Paths_obj::currentLevel;
HXDLIN( 135)				::String returnPath = (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + file);
HXDLIN( 135)				levelPath = returnPath;
HXLINE( 136)				if (::openfl::utils::Assets_obj::exists(levelPath,type)) {
HXLINE( 137)					return levelPath;
            				}
            			}
HXLINE( 140)			::String returnPath = ((((HX_("shared",a5,5e,2b,1d) + HX_(":assets/",52,05,4a,2c)) + HX_("shared",a5,5e,2b,1d)) + HX_("/",2f,00,00,00)) + file);
HXDLIN( 140)			levelPath = returnPath;
HXLINE( 141)			if (::openfl::utils::Assets_obj::exists(levelPath,type)) {
HXLINE( 142)				return levelPath;
            			}
            		}
HXLINE( 145)		::String file1 = file;
HXDLIN( 145)		if (::hx::IsNull( file1 )) {
HXLINE( 145)			file1 = HX_("",00,00,00,00);
            		}
HXDLIN( 145)		return (HX_("assets/",4c,2a,dc,36) + file1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,getPath,return )

::String Paths_obj::getLibraryPath(::String file,::String __o_library){
            		::String library = __o_library;
            		if (::hx::IsNull(__o_library)) library = HX_("preload",c9,47,43,35);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_150_getLibraryPath)
HXDLIN( 150)		bool _hx_tmp;
HXDLIN( 150)		if ((library != HX_("preload",c9,47,43,35))) {
HXDLIN( 150)			_hx_tmp = (library == HX_("default",c1,d8,c3,9b));
            		}
            		else {
HXDLIN( 150)			_hx_tmp = true;
            		}
HXDLIN( 150)		if (_hx_tmp) {
HXDLIN( 150)			::String file1 = file;
HXDLIN( 150)			if (::hx::IsNull( file1 )) {
HXDLIN( 150)				file1 = HX_("",00,00,00,00);
            			}
HXDLIN( 150)			return (HX_("assets/",4c,2a,dc,36) + file1);
            		}
            		else {
HXDLIN( 150)			::String returnPath = (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + file);
HXDLIN( 150)			return returnPath;
            		}
HXDLIN( 150)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getLibraryPath,return )

::String Paths_obj::getLibraryPathForce(::String file,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_154_getLibraryPathForce)
HXLINE( 155)		::String returnPath = (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + file);
HXLINE( 156)		return returnPath;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getLibraryPathForce,return )

::String Paths_obj::getPreloadPath(::String __o_file){
            		::String file = __o_file;
            		if (::hx::IsNull(__o_file)) file = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_161_getPreloadPath)
HXDLIN( 161)		return (HX_("assets/",4c,2a,dc,36) + file);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,getPreloadPath,return )

::String Paths_obj::file(::String file,::String __o_type,::String library){
            		::String type = __o_type;
            		if (::hx::IsNull(__o_type)) type = HX_("TEXT",ad,94,ba,37);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_166_file)
HXDLIN( 166)		return ::Paths_obj::getPath(file,type,library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,file,return )

::String Paths_obj::txt(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_171_txt)
HXDLIN( 171)		return ::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,txt,return )

::String Paths_obj::xml(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_176_xml)
HXDLIN( 176)		return ::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,xml,return )

::String Paths_obj::json(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_181_json)
HXDLIN( 181)		return ::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".json",56,f1,d6,c2)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,json,return )

::String Paths_obj::shaderFragment(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_186_shaderFragment)
HXDLIN( 186)		return ::Paths_obj::getPath(((HX_("shaders/",c1,f6,2a,36) + key) + HX_(".frag",60,48,31,c0)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,shaderFragment,return )

::String Paths_obj::shaderVertex(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_190_shaderVertex)
HXDLIN( 190)		return ::Paths_obj::getPath(((HX_("shaders/",c1,f6,2a,36) + key) + HX_(".vert",df,e3,ba,ca)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,shaderVertex,return )

::String Paths_obj::lua(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_194_lua)
HXDLIN( 194)		return ::Paths_obj::getPath(((HX_("",00,00,00,00) + key) + HX_(".lua",4a,2a,ba,1e)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,lua,return )

::String Paths_obj::video(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_198_video)
HXLINE( 200)		::String file = ::Paths_obj::modFolders((((HX_("videos/",97,cd,86,fd) + key) + HX_(".",2e,00,00,00)) + HX_("mp4",71,17,53,00)));
HXLINE( 201)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 202)			return file;
            		}
HXLINE( 205)		return (((HX_("assets/videos/",cb,c4,dd,db) + key) + HX_(".",2e,00,00,00)) + HX_("mp4",71,17,53,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,video,return )

 ::openfl::media::Sound Paths_obj::sound(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_209_sound)
HXLINE( 210)		 ::openfl::media::Sound sound = ::Paths_obj::returnSound(HX_("sounds",c4,a8,2e,32),key,library);
HXLINE( 211)		return sound;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,sound,return )

 ::openfl::media::Sound Paths_obj::soundRandom(::String key,int min,int max,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_216_soundRandom)
HXDLIN( 216)		return ::Paths_obj::sound((key + ::flixel::FlxG_obj::random->_hx_int(min,max,null())),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Paths_obj,soundRandom,return )

 ::openfl::media::Sound Paths_obj::music(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_220_music)
HXLINE( 221)		 ::openfl::media::Sound file = ::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),key,library);
HXLINE( 222)		return file;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,music,return )

 ::Dynamic Paths_obj::voices(::String song){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_226_voices)
HXLINE( 227)		::String songKey = ((HX_("",00,00,00,00) + ::StringTools_obj::replace(song.toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00))) + HX_("/Voices",10,18,4f,34));
HXLINE( 228)		 ::openfl::media::Sound voices = ::Paths_obj::returnSound(HX_("songs",fe,36,c7,80),songKey,null());
HXLINE( 229)		return voices;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,voices,return )

 ::Dynamic Paths_obj::inst(::String song){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_233_inst)
HXLINE( 234)		::String songKey = ((HX_("",00,00,00,00) + ::StringTools_obj::replace(song.toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00))) + HX_("/Inst",95,b3,69,40));
HXLINE( 235)		 ::openfl::media::Sound inst = ::Paths_obj::returnSound(HX_("songs",fe,36,c7,80),songKey,null());
HXLINE( 236)		return inst;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,inst,return )

 ::flixel::graphics::FlxGraphic Paths_obj::image(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_240_image)
HXLINE( 242)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(key,library);
HXLINE( 243)		return returnAsset;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,image,return )

::String Paths_obj::getTextFromFile(::String key, ::Dynamic __o_ignoreMods){
            		 ::Dynamic ignoreMods = __o_ignoreMods;
            		if (::hx::IsNull(__o_ignoreMods)) ignoreMods = false;
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_247_getTextFromFile)
HXLINE( 250)		bool _hx_tmp;
HXDLIN( 250)		if (!(( (bool)(ignoreMods) ))) {
HXLINE( 250)			_hx_tmp = ::sys::FileSystem_obj::exists(::Paths_obj::modFolders(key));
            		}
            		else {
HXLINE( 250)			_hx_tmp = false;
            		}
HXDLIN( 250)		if (_hx_tmp) {
HXLINE( 251)			return ::sys::io::File_obj::getContent(::Paths_obj::modFolders(key));
            		}
HXLINE( 254)		::String file = key;
HXDLIN( 254)		if (::hx::IsNull( file )) {
HXLINE( 254)			file = HX_("",00,00,00,00);
            		}
HXDLIN( 254)		if (::sys::FileSystem_obj::exists((HX_("assets/",4c,2a,dc,36) + file))) {
HXLINE( 255)			::String file = key;
HXDLIN( 255)			if (::hx::IsNull( file )) {
HXLINE( 255)				file = HX_("",00,00,00,00);
            			}
HXDLIN( 255)			return ::sys::io::File_obj::getContent((HX_("assets/",4c,2a,dc,36) + file));
            		}
HXLINE( 257)		if (::hx::IsNotNull( ::Paths_obj::currentLevel )) {
HXLINE( 259)			::String levelPath = HX_("",00,00,00,00);
HXLINE( 260)			if ((::Paths_obj::currentLevel != HX_("shared",a5,5e,2b,1d))) {
HXLINE( 261)				::String library = ::Paths_obj::currentLevel;
HXDLIN( 261)				::String returnPath = (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + key);
HXDLIN( 261)				levelPath = returnPath;
HXLINE( 262)				if (::sys::FileSystem_obj::exists(levelPath)) {
HXLINE( 263)					return ::sys::io::File_obj::getContent(levelPath);
            				}
            			}
HXLINE( 266)			::String returnPath = ((((HX_("shared",a5,5e,2b,1d) + HX_(":assets/",52,05,4a,2c)) + HX_("shared",a5,5e,2b,1d)) + HX_("/",2f,00,00,00)) + key);
HXDLIN( 266)			levelPath = returnPath;
HXLINE( 267)			if (::sys::FileSystem_obj::exists(levelPath)) {
HXLINE( 268)				return ::sys::io::File_obj::getContent(levelPath);
            			}
            		}
HXLINE( 271)		return ::lime::utils::Assets_obj::getText(::Paths_obj::getPath(key,HX_("TEXT",ad,94,ba,37),null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getTextFromFile,return )

::String Paths_obj::font(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_275_font)
HXLINE( 277)		::String file = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + key));
HXLINE( 278)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 279)			return file;
            		}
HXLINE( 282)		return (HX_("assets/fonts/",37,ff,a5,9c) + key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,font,return )

bool Paths_obj::fileExists(::String key,::String type, ::Dynamic __o_ignoreMods,::String library){
            		 ::Dynamic ignoreMods = __o_ignoreMods;
            		if (::hx::IsNull(__o_ignoreMods)) ignoreMods = false;
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_286_fileExists)
HXLINE( 288)		bool _hx_tmp;
HXDLIN( 288)		::String key1 = ((::Paths_obj::currentModDirectory + HX_("/",2f,00,00,00)) + key);
HXDLIN( 288)		if (::hx::IsNull( key1 )) {
HXLINE( 288)			key1 = HX_("",00,00,00,00);
            		}
HXDLIN( 288)		if (!(::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key1)))) {
HXLINE( 288)			::String key1 = key;
HXDLIN( 288)			if (::hx::IsNull( key1 )) {
HXLINE( 288)				key1 = HX_("",00,00,00,00);
            			}
HXDLIN( 288)			_hx_tmp = ::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key1));
            		}
            		else {
HXLINE( 288)			_hx_tmp = true;
            		}
HXDLIN( 288)		if (_hx_tmp) {
HXLINE( 289)			return true;
            		}
HXLINE( 293)		if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(key,type,null()),null())) {
HXLINE( 294)			return true;
            		}
HXLINE( 296)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Paths_obj,fileExists,return )

 ::flixel::graphics::frames::FlxAtlasFrames Paths_obj::getSparrowAtlas(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_300_getSparrowAtlas)
HXLINE( 302)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(key,null());
HXLINE( 303)		bool xmlExists = false;
HXLINE( 304)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 305)			xmlExists = true;
            		}
HXLINE( 308)		 ::Dynamic _hx_tmp;
HXDLIN( 308)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 308)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE( 308)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(key,library);
HXDLIN( 308)			_hx_tmp = returnAsset;
            		}
HXDLIN( 308)		::String _hx_tmp1;
HXDLIN( 308)		if (xmlExists) {
HXLINE( 308)			_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE( 308)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN( 308)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getSparrowAtlas,return )

 ::flixel::graphics::frames::FlxAtlasFrames Paths_obj::getPackerAtlas(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_316_getPackerAtlas)
HXLINE( 318)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(key,null());
HXLINE( 319)		bool txtExists = false;
HXLINE( 320)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e))))) {
HXLINE( 321)			txtExists = true;
            		}
HXLINE( 324)		 ::Dynamic _hx_tmp;
HXDLIN( 324)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 324)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE( 324)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(key,library);
HXDLIN( 324)			_hx_tmp = returnAsset;
            		}
HXDLIN( 324)		::String _hx_tmp1;
HXDLIN( 324)		if (txtExists) {
HXLINE( 324)			_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e))));
            		}
            		else {
HXLINE( 324)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN( 324)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(_hx_tmp,_hx_tmp1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getPackerAtlas,return )

::String Paths_obj::formatToSongPath(::String path){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_331_formatToSongPath)
HXDLIN( 331)		return ::StringTools_obj::replace(path.toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,formatToSongPath,return )

 ::haxe::ds::StringMap Paths_obj::currentTrackedAssets;

 ::flixel::graphics::FlxGraphic Paths_obj::returnGraphic(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_336_returnGraphic)
HXLINE( 338)		::String modKey = ::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)));
HXLINE( 339)		if (::sys::FileSystem_obj::exists(modKey)) {
HXLINE( 340)			if (!(::Paths_obj::currentTrackedAssets->exists(modKey))) {
HXLINE( 341)				 ::openfl::display::BitmapData newBitmap = ::openfl::display::BitmapData_obj::fromFile(modKey);
HXLINE( 342)				 ::flixel::graphics::FlxGraphic newGraphic = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(newBitmap,false,modKey,null());
HXLINE( 343)				::Paths_obj::currentTrackedAssets->set(modKey,newGraphic);
            			}
HXLINE( 345)			::Paths_obj::localTrackedAssets->push(modKey);
HXLINE( 346)			return ( ( ::flixel::graphics::FlxGraphic)(::Paths_obj::currentTrackedAssets->get(modKey)) );
            		}
HXLINE( 350)		::String path = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXLINE( 351)		if (::openfl::utils::Assets_obj::exists(path,HX_("IMAGE",3b,57,57,3b))) {
HXLINE( 352)			if (!(::Paths_obj::currentTrackedAssets->exists(path))) {
HXLINE( 353)				 ::flixel::graphics::FlxGraphic newGraphic = ::flixel::FlxG_obj::bitmap->add(path,false,path);
HXLINE( 354)				::Paths_obj::currentTrackedAssets->set(path,newGraphic);
            			}
HXLINE( 356)			::Paths_obj::localTrackedAssets->push(path);
HXLINE( 357)			return ( ( ::flixel::graphics::FlxGraphic)(::Paths_obj::currentTrackedAssets->get(path)) );
            		}
HXLINE( 359)		::haxe::Log_obj::trace(HX_("oh no its returning null NOOOO",93,c9,d3,00),::hx::SourceInfo(HX_("source/Paths.hx",64,c7,bd,1c),359,HX_("Paths",0e,7b,84,50),HX_("returnGraphic",d8,d3,95,0b)));
HXLINE( 360)		::haxe::Log_obj::trace((((HX_("path was:",4c,77,57,1e) + key) + HX_(" , ",94,6e,18,00)) + library),::hx::SourceInfo(HX_("source/Paths.hx",64,c7,bd,1c),360,HX_("Paths",0e,7b,84,50),HX_("returnGraphic",d8,d3,95,0b)));
HXLINE( 361)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,returnGraphic,return )

 ::haxe::ds::StringMap Paths_obj::currentTrackedSounds;

 ::openfl::media::Sound Paths_obj::returnSound(::String path,::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_365_returnSound)
HXLINE( 367)		::String file = ::Paths_obj::modFolders(((((path + HX_("/",2f,00,00,00)) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXLINE( 368)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 369)			if (!(::Paths_obj::currentTrackedSounds->exists(file))) {
HXLINE( 370)				::Dynamic this1 = ::Paths_obj::currentTrackedSounds;
HXDLIN( 370)				( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            			}
HXLINE( 372)			::Paths_obj::localTrackedAssets->push(key);
HXLINE( 373)			return ( ( ::openfl::media::Sound)(::Paths_obj::currentTrackedSounds->get(file)) );
            		}
HXLINE( 377)		::String gottenPath = ::Paths_obj::getPath((((((HX_("",00,00,00,00) + path) + HX_("/",2f,00,00,00)) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("SOUND",af,c4,ba,fe),library);
HXLINE( 378)		int gottenPath1 = (gottenPath.indexOf(HX_(":",3a,00,00,00),null()) + 1);
HXDLIN( 378)		gottenPath = gottenPath.substring(gottenPath1,gottenPath.length);
HXLINE( 380)		if (!(::Paths_obj::currentTrackedSounds->exists(gottenPath))) {
HXLINE( 382)			::Dynamic this1 = ::Paths_obj::currentTrackedSounds;
HXDLIN( 382)			( ( ::haxe::ds::StringMap)(this1) )->set(gottenPath,::openfl::media::Sound_obj::fromFile((HX_("./",41,28,00,00) + gottenPath)));
            		}
HXLINE( 386)		::Paths_obj::localTrackedAssets->push(gottenPath);
HXLINE( 387)		return ( ( ::openfl::media::Sound)(::Paths_obj::currentTrackedSounds->get(gottenPath)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,returnSound,return )

::String Paths_obj::mods(::String __o_key){
            		::String key = __o_key;
            		if (::hx::IsNull(__o_key)) key = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_392_mods)
HXDLIN( 392)		return (HX_("mods/",9e,2f,58,0c) + key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,mods,return )

::String Paths_obj::modsFont(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_396_modsFont)
HXDLIN( 396)		return ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + key));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsFont,return )

::String Paths_obj::modsJson(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_400_modsJson)
HXDLIN( 400)		return ::Paths_obj::modFolders(((HX_("data/",c5,0e,88,d4) + key) + HX_(".json",56,f1,d6,c2)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsJson,return )

::String Paths_obj::modsVideo(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_404_modsVideo)
HXDLIN( 404)		return ::Paths_obj::modFolders((((HX_("videos/",97,cd,86,fd) + key) + HX_(".",2e,00,00,00)) + HX_("mp4",71,17,53,00)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsVideo,return )

::String Paths_obj::modsSounds(::String path,::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_408_modsSounds)
HXDLIN( 408)		return ::Paths_obj::modFolders(((((path + HX_("/",2f,00,00,00)) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,modsSounds,return )

::String Paths_obj::modsImages(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_412_modsImages)
HXDLIN( 412)		return ::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsImages,return )

::String Paths_obj::modsXml(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_416_modsXml)
HXDLIN( 416)		return ::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsXml,return )

::String Paths_obj::modsTxt(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_420_modsTxt)
HXDLIN( 420)		return ::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsTxt,return )

::String Paths_obj::modsShaderFragment(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_425_modsShaderFragment)
HXDLIN( 425)		return ::Paths_obj::modFolders(((HX_("shaders/",c1,f6,2a,36) + key) + HX_(".frag",60,48,31,c0)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,modsShaderFragment,return )

::String Paths_obj::modsShaderVertex(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_429_modsShaderVertex)
HXDLIN( 429)		return ::Paths_obj::modFolders(((HX_("shaders/",c1,f6,2a,36) + key) + HX_(".vert",df,e3,ba,ca)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,modsShaderVertex,return )

::String Paths_obj::modsAchievements(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_432_modsAchievements)
HXDLIN( 432)		return ::Paths_obj::modFolders(((HX_("achievements/",8b,5e,c1,17) + key) + HX_(".json",56,f1,d6,c2)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsAchievements,return )

::String Paths_obj::modFolders(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_435_modFolders)
HXLINE( 436)		bool _hx_tmp;
HXDLIN( 436)		if (::hx::IsNotNull( ::Paths_obj::currentModDirectory )) {
HXLINE( 436)			_hx_tmp = (::Paths_obj::currentModDirectory.length > 0);
            		}
            		else {
HXLINE( 436)			_hx_tmp = false;
            		}
HXDLIN( 436)		if (_hx_tmp) {
HXLINE( 437)			::String key1 = ((::Paths_obj::currentModDirectory + HX_("/",2f,00,00,00)) + key);
HXDLIN( 437)			if (::hx::IsNull( key1 )) {
HXLINE( 437)				key1 = HX_("",00,00,00,00);
            			}
HXDLIN( 437)			::String fileToCheck = (HX_("mods/",9e,2f,58,0c) + key1);
HXLINE( 438)			if (::sys::FileSystem_obj::exists(fileToCheck)) {
HXLINE( 439)				return fileToCheck;
            			}
            		}
HXLINE( 442)		return (HX_("mods/",9e,2f,58,0c) + key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modFolders,return )

::Array< ::String > Paths_obj::getModDirectories(){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_444_getModDirectories)
HXLINE( 445)		::Array< ::String > list = ::Array_obj< ::String >::__new(0);
HXLINE( 446)		::String modsFolder = HX_("mods/",9e,2f,58,0c);
HXLINE( 447)		if (::sys::FileSystem_obj::exists(modsFolder)) {
HXLINE( 448)			int _g = 0;
HXDLIN( 448)			::Array< ::String > _g1 = ::sys::FileSystem_obj::readDirectory(modsFolder);
HXDLIN( 448)			while((_g < _g1->length)){
HXLINE( 448)				::String folder = _g1->__get(_g);
HXDLIN( 448)				_g = (_g + 1);
HXLINE( 449)				::String path = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,modsFolder)->init(1,folder));
HXLINE( 450)				bool _hx_tmp;
HXDLIN( 450)				bool _hx_tmp1;
HXDLIN( 450)				if (::sys::FileSystem_obj::isDirectory(path)) {
HXLINE( 450)					_hx_tmp1 = !(::Paths_obj::ignoreModFolders->contains(folder));
            				}
            				else {
HXLINE( 450)					_hx_tmp1 = false;
            				}
HXDLIN( 450)				if (_hx_tmp1) {
HXLINE( 450)					_hx_tmp = !(list->contains(folder));
            				}
            				else {
HXLINE( 450)					_hx_tmp = false;
            				}
HXDLIN( 450)				if (_hx_tmp) {
HXLINE( 451)					list->push(folder);
            				}
            			}
            		}
HXLINE( 455)		return list;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Paths_obj,getModDirectories,return )


Paths_obj::Paths_obj()
{
}

bool Paths_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"txt") ) { outValue = txt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"xml") ) { outValue = xml_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lua") ) { outValue = lua_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { outValue = file_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"json") ) { outValue = json_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"inst") ) { outValue = inst_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"font") ) { outValue = font_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mods") ) { outValue = mods_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"video") ) { outValue = video_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sound") ) { outValue = sound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"music") ) { outValue = music_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"image") ) { outValue = image_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"voices") ) { outValue = voices_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsXml") ) { outValue = modsXml_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsTxt") ) { outValue = modsTxt_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modsFont") ) { outValue = modsFont_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsJson") ) { outValue = modsJson_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"modsVideo") ) { outValue = modsVideo_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fileExists") ) { outValue = fileExists_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsSounds") ) { outValue = modsSounds_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsImages") ) { outValue = modsImages_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modFolders") ) { outValue = modFolders_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"soundRandom") ) { outValue = soundRandom_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"returnSound") ) { outValue = returnSound_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"excludeAsset") ) { outValue = excludeAsset_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"currentLevel") ) { outValue = ( currentLevel ); return true; }
		if (HX_FIELD_EQ(inName,"shaderVertex") ) { outValue = shaderVertex_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"returnGraphic") ) { outValue = returnGraphic_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dumpExclusions") ) { outValue = ( dumpExclusions ); return true; }
		if (HX_FIELD_EQ(inName,"getLibraryPath") ) { outValue = getLibraryPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPreloadPath") ) { outValue = getPreloadPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"shaderFragment") ) { outValue = shaderFragment_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPackerAtlas") ) { outValue = getPackerAtlas_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setCurrentLevel") ) { outValue = setCurrentLevel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getTextFromFile") ) { outValue = getTextFromFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSparrowAtlas") ) { outValue = getSparrowAtlas_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignoreModFolders") ) { outValue = ( ignoreModFolders ); return true; }
		if (HX_FIELD_EQ(inName,"formatToSongPath") ) { outValue = formatToSongPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsShaderVertex") ) { outValue = modsShaderVertex_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsAchievements") ) { outValue = modsAchievements_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"clearUnusedMemory") ) { outValue = clearUnusedMemory_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"clearStoredMemory") ) { outValue = clearStoredMemory_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getModDirectories") ) { outValue = getModDirectories_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"localTrackedAssets") ) { outValue = ( localTrackedAssets ); return true; }
		if (HX_FIELD_EQ(inName,"modsShaderFragment") ) { outValue = modsShaderFragment_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentModDirectory") ) { outValue = ( currentModDirectory ); return true; }
		if (HX_FIELD_EQ(inName,"getLibraryPathForce") ) { outValue = getLibraryPathForce_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"currentTrackedAssets") ) { outValue = ( currentTrackedAssets ); return true; }
		if (HX_FIELD_EQ(inName,"currentTrackedSounds") ) { outValue = ( currentTrackedSounds ); return true; }
	}
	return false;
}

bool Paths_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"currentLevel") ) { currentLevel=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dumpExclusions") ) { dumpExclusions=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignoreModFolders") ) { ignoreModFolders=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"localTrackedAssets") ) { localTrackedAssets=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentModDirectory") ) { currentModDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"currentTrackedAssets") ) { currentTrackedAssets=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"currentTrackedSounds") ) { currentTrackedSounds=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Paths_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Paths_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Paths_obj::SOUND_EXT,HX_("SOUND_EXT",b1,35,8c,6f)},
	{::hx::fsString,(void *) &Paths_obj::VIDEO_EXT,HX_("VIDEO_EXT",5d,03,77,8a)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Paths_obj::ignoreModFolders,HX_("ignoreModFolders",15,37,dd,7e)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Paths_obj::dumpExclusions,HX_("dumpExclusions",39,38,dc,ef)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Paths_obj::localTrackedAssets,HX_("localTrackedAssets",62,77,3a,fc)},
	{::hx::fsString,(void *) &Paths_obj::currentModDirectory,HX_("currentModDirectory",24,ad,ec,de)},
	{::hx::fsString,(void *) &Paths_obj::currentLevel,HX_("currentLevel",8b,fa,6e,b9)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Paths_obj::currentTrackedAssets,HX_("currentTrackedAssets",d4,7b,e5,0f)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Paths_obj::currentTrackedSounds,HX_("currentTrackedSounds",15,dc,10,f6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Paths_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Paths_obj::SOUND_EXT,"SOUND_EXT");
	HX_MARK_MEMBER_NAME(Paths_obj::VIDEO_EXT,"VIDEO_EXT");
	HX_MARK_MEMBER_NAME(Paths_obj::ignoreModFolders,"ignoreModFolders");
	HX_MARK_MEMBER_NAME(Paths_obj::dumpExclusions,"dumpExclusions");
	HX_MARK_MEMBER_NAME(Paths_obj::localTrackedAssets,"localTrackedAssets");
	HX_MARK_MEMBER_NAME(Paths_obj::currentModDirectory,"currentModDirectory");
	HX_MARK_MEMBER_NAME(Paths_obj::currentLevel,"currentLevel");
	HX_MARK_MEMBER_NAME(Paths_obj::currentTrackedAssets,"currentTrackedAssets");
	HX_MARK_MEMBER_NAME(Paths_obj::currentTrackedSounds,"currentTrackedSounds");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Paths_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Paths_obj::SOUND_EXT,"SOUND_EXT");
	HX_VISIT_MEMBER_NAME(Paths_obj::VIDEO_EXT,"VIDEO_EXT");
	HX_VISIT_MEMBER_NAME(Paths_obj::ignoreModFolders,"ignoreModFolders");
	HX_VISIT_MEMBER_NAME(Paths_obj::dumpExclusions,"dumpExclusions");
	HX_VISIT_MEMBER_NAME(Paths_obj::localTrackedAssets,"localTrackedAssets");
	HX_VISIT_MEMBER_NAME(Paths_obj::currentModDirectory,"currentModDirectory");
	HX_VISIT_MEMBER_NAME(Paths_obj::currentLevel,"currentLevel");
	HX_VISIT_MEMBER_NAME(Paths_obj::currentTrackedAssets,"currentTrackedAssets");
	HX_VISIT_MEMBER_NAME(Paths_obj::currentTrackedSounds,"currentTrackedSounds");
};

#endif

::hx::Class Paths_obj::__mClass;

static ::String Paths_obj_sStaticFields[] = {
	HX_("SOUND_EXT",b1,35,8c,6f),
	HX_("VIDEO_EXT",5d,03,77,8a),
	HX_("ignoreModFolders",15,37,dd,7e),
	HX_("excludeAsset",b6,04,50,31),
	HX_("dumpExclusions",39,38,dc,ef),
	HX_("clearUnusedMemory",e4,29,80,28),
	HX_("localTrackedAssets",62,77,3a,fc),
	HX_("clearStoredMemory",f1,99,87,55),
	HX_("currentModDirectory",24,ad,ec,de),
	HX_("currentLevel",8b,fa,6e,b9),
	HX_("setCurrentLevel",4d,cd,24,d8),
	HX_("getPath",5b,95,d4,1c),
	HX_("getLibraryPath",4a,25,d8,33),
	HX_("getLibraryPathForce",41,90,ac,3f),
	HX_("getPreloadPath",18,c5,46,7e),
	HX_("file",7c,ce,bb,43),
	HX_("txt",70,6e,58,00),
	HX_("xml",d7,6d,5b,00),
	HX_("json",28,42,68,46),
	HX_("shaderFragment",15,08,f3,5e),
	HX_("shaderVertex",69,78,30,11),
	HX_("lua",b8,59,52,00),
	HX_("video",7b,14,fc,36),
	HX_("sound",cf,8c,cc,80),
	HX_("soundRandom",32,28,bc,6a),
	HX_("music",a5,d0,5a,10),
	HX_("voices",81,d6,49,5d),
	HX_("inst",c6,43,bb,45),
	HX_("image",5b,1f,69,bd),
	HX_("getTextFromFile",89,70,ed,f8),
	HX_("font",cf,5d,c0,43),
	HX_("fileExists",78,65,64,a0),
	HX_("getSparrowAtlas",55,ab,b7,a7),
	HX_("getPackerAtlas",ef,b2,47,f7),
	HX_("formatToSongPath",cc,36,b8,49),
	HX_("currentTrackedAssets",d4,7b,e5,0f),
	HX_("returnGraphic",d8,d3,95,0b),
	HX_("currentTrackedSounds",15,dc,10,f6),
	HX_("returnSound",ff,59,a9,8d),
	HX_("mods",71,d3,60,48),
	HX_("modsFont",e0,69,a7,c3),
	HX_("modsJson",39,4e,4f,c6),
	HX_("modsVideo",4a,97,3f,a1),
	HX_("modsSounds",15,9b,fd,c2),
	HX_("modsImages",09,43,61,8f),
	HX_("modsXml",e6,4e,99,f6),
	HX_("modsTxt",7f,4f,96,f6),
	HX_("modsShaderFragment",66,33,66,61),
	HX_("modsShaderVertex",7a,7d,0b,a3),
	HX_("modsAchievements",35,a6,46,18),
	HX_("modFolders",63,af,3e,e0),
	HX_("getModDirectories",9f,5f,dc,88),
	::String(null())
};

void Paths_obj::__register()
{
	Paths_obj _hx_dummy;
	Paths_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Paths",0e,7b,84,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Paths_obj::__GetStatic;
	__mClass->mSetStaticField = &Paths_obj::__SetStatic;
	__mClass->mMarkFunc = Paths_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Paths_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Paths_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Paths_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Paths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Paths_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Paths_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_29_boot)
HXDLIN(  29)		SOUND_EXT = HX_("ogg",4f,94,54,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_30_boot)
HXDLIN(  30)		VIDEO_EXT = HX_("mp4",71,17,53,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_33_boot)
HXDLIN(  33)		ignoreModFolders = ::Array_obj< ::String >::fromData( _hx_array_data_50847b0e_50,15);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_58_boot)
HXDLIN(  58)		dumpExclusions = ::Array_obj< ::String >::__new(3)->init(0,(HX_("assets/music/freakyMenu.",03,7e,c4,03) + HX_("ogg",4f,94,54,00)))->init(1,(HX_("assets/shared/music/breakfast.",7b,5a,11,eb) + HX_("ogg",4f,94,54,00)))->init(2,(HX_("assets/shared/music/tea-time.",7c,11,5c,52) + HX_("ogg",4f,94,54,00)));
            	}
{
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_86_boot)
HXDLIN(  86)		localTrackedAssets = ::Array_obj< ::String >::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_114_boot)
HXDLIN( 114)		currentModDirectory = HX_("",00,00,00,00);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_d75e02b628d1544a_335_boot)
HXDLIN( 335)		currentTrackedAssets =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_d75e02b628d1544a_364_boot)
HXDLIN( 364)		currentTrackedSounds =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

