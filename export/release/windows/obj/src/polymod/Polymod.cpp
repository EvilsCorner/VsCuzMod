// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_polymod_Framework
#include <polymod/Framework.h>
#endif
#ifndef INCLUDED_polymod_ModMetadata
#include <polymod/ModMetadata.h>
#endif
#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_polymod_PolymodError
#include <polymod/PolymodError.h>
#endif
#ifndef INCLUDED_polymod_PolymodErrorType
#include <polymod/PolymodErrorType.h>
#endif
#ifndef INCLUDED_polymod_backends_PolymodAssetLibrary
#include <polymod/backends/PolymodAssetLibrary.h>
#endif
#ifndef INCLUDED_polymod_backends_PolymodAssets
#include <polymod/backends/PolymodAssets.h>
#endif
#ifndef INCLUDED_polymod_format_ParseRules
#include <polymod/format/ParseRules.h>
#endif
#ifndef INCLUDED_polymod_util_SemanticVersion
#include <polymod/util/SemanticVersion.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_137_init,"polymod.Polymod","init",0x00ecc620,"polymod.Polymod.init","polymod/Polymod.hx",137,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_336_error,"polymod.Polymod","error",0x8351eeb8,"polymod.Polymod.error","polymod/Polymod.hx",336,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_344_warning,"polymod.Polymod","warning",0x8e76994c,"polymod.Polymod.warning","polymod/Polymod.hx",344,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_352_notice,"polymod.Polymod","notice",0x44af4728,"polymod.Polymod.notice","polymod/Polymod.hx",352,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_367_getMetadata,"polymod.Polymod","getMetadata",0xda1aa115,"polymod.Polymod.getMetadata","polymod/Polymod.hx",367,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_425_initModPack,"polymod.Polymod","initModPack",0x0bf5087b,"polymod.Polymod.initModPack","polymod/Polymod.hx",425,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_440_getModPack,"polymod.Polymod","getModPack",0xa5a25fd5,"polymod.Polymod.getModPack","polymod/Polymod.hx",440,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_128_boot,"polymod.Polymod","boot",0xfc4d0f42,"polymod.Polymod.boot","polymod/Polymod.hx",128,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_129_boot,"polymod.Polymod","boot",0xfc4d0f42,"polymod.Polymod.boot","polymod/Polymod.hx",129,0xd80c6d61)
namespace polymod{

void Polymod_obj::__construct() { }

Dynamic Polymod_obj::__CreateEmpty() { return new Polymod_obj; }

void *Polymod_obj::_hx_vtable = 0;

Dynamic Polymod_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Polymod_obj > _hx_result = new Polymod_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Polymod_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4937d120;
}

 ::Dynamic Polymod_obj::onError;

 ::polymod::backends::PolymodAssetLibrary Polymod_obj::library;

::Array< ::Dynamic> Polymod_obj::init( ::Dynamic params){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_137_init)
HXLINE( 138)		::polymod::Polymod_obj::onError = params->__Field(HX_("errorCallback",ad,29,bf,d7),::hx::paccDynamic);
HXLINE( 140)		::String modRoot = ( (::String)(params->__Field(HX_("modRoot",04,ba,da,e0),::hx::paccDynamic)) );
HXLINE( 141)		::Array< ::String > dirs = ( (::Array< ::String >)(params->__Field(HX_("dirs",86,66,69,42),::hx::paccDynamic)) );
HXLINE( 142)		 ::polymod::util::SemanticVersion apiVersion = null();
HXLINE( 143)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 145)			::String apiStr = ( (::String)(params->__Field(HX_("apiVersion",9e,39,c9,e5),::hx::paccDynamic)) );
HXLINE( 146)			bool _hx_tmp;
HXDLIN( 146)			if (::hx::IsNotNull( apiStr )) {
HXLINE( 146)				_hx_tmp = (apiStr == HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 146)				_hx_tmp = true;
            			}
HXDLIN( 146)			if (_hx_tmp) {
HXLINE( 148)				apiStr = HX_("*.*.*",a2,34,5c,4d);
            			}
HXLINE( 150)			apiVersion = ::polymod::util::SemanticVersion_obj::fromString(apiStr);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(   1)				 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 154)				::polymod::Polymod_obj::error(HX_("parse_api_version",e7,a5,59,ab),((HX_("Error parsing api version: (",d8,67,2c,ab) + ::Std_obj::string(msg)) + HX_(")",29,00,00,00)),HX_("init",10,3b,bb,45));
HXLINE( 155)				return ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 158)		::Array< ::Dynamic> modMeta = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 159)		::Array< ::Dynamic> modVers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 161)		if (::hx::IsNotNull( params->__Field(HX_("modVersions",3d,b3,b4,55),::hx::paccDynamic) )) {
HXLINE( 163)			int _g = 0;
HXDLIN( 163)			::Array< ::String > _g1 = ( (::Array< ::String >)(params->__Field(HX_("modVersions",3d,b3,b4,55),::hx::paccDynamic)) );
HXDLIN( 163)			while((_g < _g1->length)){
HXLINE( 163)				::String str = _g1->__get(_g);
HXDLIN( 163)				_g = (_g + 1);
HXLINE( 165)				 ::polymod::util::SemanticVersion semVer = null();
HXLINE( 166)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 168)					semVer = ::polymod::util::SemanticVersion_obj::fromString(str);
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE(   1)						 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 171)						{
HXLINE( 172)							::polymod::Polymod_obj::error(HX_("param_mod_version",69,37,99,54),(HX_("There was an error with one of the mod version patterns you provided: ",a5,c6,14,8b) + ::Std_obj::string(msg)),HX_("init",10,3b,bb,45));
HXLINE( 173)							semVer = ::polymod::util::SemanticVersion_obj::fromString(HX_("*.*.*",a2,34,5c,4d));
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXLINE( 175)				modVers->push(semVer);
            			}
            		}
HXLINE( 179)		{
HXLINE( 179)			int _g = 0;
HXDLIN( 179)			int _g1 = dirs->length;
HXDLIN( 179)			while((_g < _g1)){
HXLINE( 179)				_g = (_g + 1);
HXDLIN( 179)				int i = (_g - 1);
HXLINE( 181)				if (::hx::IsNotNull( dirs->__get(i) )) {
HXLINE( 183)					::String origDir = dirs->__get(i);
HXLINE( 184)					dirs[i] = ::polymod::util::Util_obj::pathJoin(modRoot,dirs->__get(i));
HXLINE( 185)					 ::polymod::ModMetadata meta = ::polymod::Polymod_obj::getMetadata(dirs->__get(i));
HXLINE( 187)					if (::hx::IsNotNull( meta )) {
HXLINE( 189)						meta->id = origDir;
HXLINE( 190)						int apiScore = meta->apiVersion->checkCompatibility(apiVersion);
HXLINE( 191)						if ((apiScore < 3)) {
HXLINE( 193)							::String _hx_tmp = ((((HX_("Mod \"",24,57,85,9f) + origDir) + HX_("\" was built for incompatible API version ",c7,84,bf,95)) + meta->apiVersion->toString()) + HX_(", current API version is ",6d,fd,69,3f));
HXDLIN( 193)							::polymod::Polymod_obj::error(HX_("version_conflict_api",b4,79,7a,d1),(_hx_tmp + ( (::String)(params->__Field(HX_("apiVersion",9e,39,c9,e5),::hx::paccDynamic)) ).toString()),HX_("init",10,3b,bb,45));
            						}
            						else {
HXLINE( 197)							if ((apiVersion->major == 0)) {
HXLINE( 200)								if ((apiVersion->minor != meta->apiVersion->minor)) {
HXLINE( 204)									::String _hx_tmp = (((((HX_("Modding API is in pre-release, some things might have changed!\n",23,df,36,3a) + HX_("Mod \"",24,57,85,9f)) + origDir) + HX_("\" was built for API version ",5c,9c,7b,4e)) + meta->apiVersion->toString()) + HX_(", current API version is ",6d,fd,69,3f));
HXLINE( 202)									::polymod::Polymod_obj::warning(HX_("version_prerelease_api",26,70,a7,43),(_hx_tmp + apiVersion->toString()),HX_("init",10,3b,bb,45));
            								}
            							}
            						}
HXLINE( 210)						 ::polymod::util::SemanticVersion modVer;
HXDLIN( 210)						if ((modVers->length > i)) {
HXLINE( 210)							modVer = modVers->__get(i).StaticCast<  ::polymod::util::SemanticVersion >();
            						}
            						else {
HXLINE( 210)							modVer = null();
            						}
HXLINE( 211)						if (::hx::IsNotNull( modVer )) {
HXLINE( 213)							int score = modVer->checkCompatibility(meta->modVersion);
HXLINE( 214)							if ((score < 3)) {
HXLINE( 216)								::String _hx_tmp = ((HX_("Mod pack wants version ",0e,47,1b,3b) + modVer->toString()) + HX_(" of mod(",af,f2,b6,ab));
HXDLIN( 216)								::String _hx_tmp1 = ((_hx_tmp + meta->id) + HX_("), found incompatible version ",74,75,29,24));
HXDLIN( 216)								::polymod::Polymod_obj::error(HX_("version_conflict_mod",dc,93,83,d1),((_hx_tmp1 + meta->modVersion->toString()) + HX_(" instead",62,18,ec,b3)),HX_("init",10,3b,bb,45));
            							}
            						}
HXLINE( 219)						modMeta->push(meta);
            					}
            				}
            			}
            		}
HXLINE( 224)		::polymod::Polymod_obj::library = ::polymod::backends::PolymodAssets_obj::init( ::Dynamic(::hx::Anon_obj::Create(7)
            			->setFixed(0,HX_("customBackend",63,24,96,a5), ::Dynamic(params->__Field(HX_("customBackend",63,24,96,a5),::hx::paccDynamic)))
            			->setFixed(1,HX_("parseRules",c4,aa,37,1b), ::Dynamic(params->__Field(HX_("parseRules",c4,aa,37,1b),::hx::paccDynamic)))
            			->setFixed(2,HX_("extensionMap",5d,28,7a,23), ::Dynamic(params->__Field(HX_("extensionMap",5d,28,7a,23),::hx::paccDynamic)))
            			->setFixed(3,HX_("frameworkParams",64,76,eb,26), ::Dynamic(params->__Field(HX_("frameworkParams",64,76,eb,26),::hx::paccDynamic)))
            			->setFixed(4,HX_("dirs",86,66,69,42),dirs)
            			->setFixed(5,HX_("framework",7e,94,a4,51), ::Dynamic(params->__Field(HX_("framework",7e,94,a4,51),::hx::paccDynamic)))
            			->setFixed(6,HX_("ignoredFiles",05,36,92,57), ::Dynamic(params->__Field(HX_("ignoredFiles",05,36,92,57),::hx::paccDynamic)))));
HXLINE( 234)		if (::hx::IsNull( ::polymod::Polymod_obj::library )) {
HXLINE( 235)			return null();
            		}
HXLINE( 238)		if (::polymod::backends::PolymodAssets_obj::exists(HX_("_polymod_pack.txt",63,9d,09,cb))) {
HXLINE( 240)			::polymod::Polymod_obj::initModPack(params);
            		}
HXLINE( 243)		return modMeta;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,init,return )

void Polymod_obj::error(::String code,::String message,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("unknown",8a,23,7b,e1);
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_336_error)
HXDLIN( 336)		if (::hx::IsNotNull( ::polymod::Polymod_obj::onError )) {
HXLINE( 338)			::polymod::Polymod_obj::onError( ::polymod::PolymodError_obj::__alloc( HX_CTX ,::polymod::PolymodErrorType_obj::ERROR_dyn(),code,message,origin));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polymod_obj,error,(void))

void Polymod_obj::warning(::String code,::String message,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("unknown",8a,23,7b,e1);
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_344_warning)
HXDLIN( 344)		if (::hx::IsNotNull( ::polymod::Polymod_obj::onError )) {
HXLINE( 346)			::polymod::Polymod_obj::onError( ::polymod::PolymodError_obj::__alloc( HX_CTX ,::polymod::PolymodErrorType_obj::WARNING_dyn(),code,message,origin));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polymod_obj,warning,(void))

void Polymod_obj::notice(::String code,::String message,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("unknown",8a,23,7b,e1);
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_352_notice)
HXDLIN( 352)		if (::hx::IsNotNull( ::polymod::Polymod_obj::onError )) {
HXLINE( 354)			::polymod::Polymod_obj::onError( ::polymod::PolymodError_obj::__alloc( HX_CTX ,::polymod::PolymodErrorType_obj::NOTICE_dyn(),code,message,origin));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polymod_obj,notice,(void))

 ::polymod::ModMetadata Polymod_obj::getMetadata(::String dir){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_367_getMetadata)
HXLINE( 368)		if (::sys::FileSystem_obj::exists(dir)) {
HXLINE( 370)			 ::polymod::ModMetadata meta = null();
HXLINE( 372)			::String metaFile = ::polymod::util::Util_obj::pathJoin(dir,HX_("_polymod_meta.json",69,fc,10,06));
HXLINE( 373)			::String iconFile = ::polymod::util::Util_obj::pathJoin(dir,HX_("_polymod_icon.png",3c,6c,4c,14));
HXLINE( 374)			::String packFile = ::polymod::util::Util_obj::pathJoin(dir,HX_("_polymod_pack.txt",63,9d,09,cb));
HXLINE( 375)			if (!(::sys::FileSystem_obj::exists(metaFile))) {
HXLINE( 377)				::polymod::Polymod_obj::warning(HX_("missing_meta",7e,15,b8,7b),((HX_("Could not find mod metadata file: \"",a8,ef,82,b2) + metaFile) + HX_("\"",22,00,00,00)),null());
            			}
            			else {
HXLINE( 381)				::String metaText;
HXDLIN( 381)				if (!(::sys::FileSystem_obj::exists(metaFile))) {
HXLINE( 381)					metaText = null();
            				}
            				else {
HXLINE( 381)					metaText = ::sys::io::File_obj::getContent(metaFile);
            				}
HXDLIN( 381)				::String metaText1 = metaText;
HXLINE( 382)				meta = ::polymod::ModMetadata_obj::fromJsonStr(metaText1);
            			}
HXLINE( 384)			if (!(::sys::FileSystem_obj::exists(iconFile))) {
HXLINE( 386)				::polymod::Polymod_obj::warning(HX_("missing_icon",32,b2,11,79),((HX_("Could not find mod icon file: \"",32,09,de,8d) + iconFile) + HX_("\"",22,00,00,00)),null());
            			}
            			else {
HXLINE( 390)				 ::haxe::io::Bytes iconBytes;
HXDLIN( 390)				if (!(::sys::FileSystem_obj::exists(iconFile))) {
HXLINE( 390)					iconBytes = null();
            				}
            				else {
HXLINE( 390)					iconBytes = ::sys::io::File_obj::getBytes(iconFile);
            				}
HXDLIN( 390)				 ::haxe::io::Bytes iconBytes1 = iconBytes;
HXLINE( 391)				meta->icon = iconBytes1;
            			}
HXLINE( 393)			if (::sys::FileSystem_obj::exists(packFile)) {
HXLINE( 395)				meta->isModPack = true;
HXLINE( 396)				::String packText;
HXDLIN( 396)				if (!(::sys::FileSystem_obj::exists(packFile))) {
HXLINE( 396)					packText = null();
            				}
            				else {
HXLINE( 396)					packText = ::sys::io::File_obj::getContent(packFile);
            				}
HXDLIN( 396)				::String packText1 = packText;
HXLINE( 397)				meta->modPack = ::polymod::Polymod_obj::getModPack(packText1);
            			}
HXLINE( 399)			return meta;
            		}
            		else {
HXLINE( 403)			::polymod::Polymod_obj::error(HX_("missing_mod",29,c6,4d,c8),((HX_("Could not find mod directory: \"",88,65,de,46) + dir) + HX_("\"",22,00,00,00)),null());
            		}
HXLINE( 405)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,getMetadata,return )

void Polymod_obj::initModPack( ::Dynamic params){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_425_initModPack)
HXLINE( 426)		::String polymodpack = ::polymod::backends::PolymodAssets_obj::getText(HX_("_polymod_pack.txt",63,9d,09,cb));
HXLINE( 427)		if (::hx::IsNotNull( polymodpack )) {
HXLINE( 429)			 ::Dynamic data = ::polymod::Polymod_obj::getModPack(polymodpack);
HXLINE( 430)			::Array< ::String > mods = ( (::Array< ::String >)(data->__Field(HX_("mods",71,d3,60,48),::hx::paccDynamic)) );
HXLINE( 431)			::Array< ::String > vers = ( (::Array< ::String >)(data->__Field(HX_("versions",5b,4e,b8,d6),::hx::paccDynamic)) );
HXLINE( 433)			params->__SetField(HX_("dirs",86,66,69,42),mods,::hx::paccDynamic);
HXLINE( 434)			params->__SetField(HX_("modVersions",3d,b3,b4,55),vers,::hx::paccDynamic);
HXLINE( 435)			::polymod::Polymod_obj::init(params);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,initModPack,(void))

 ::Dynamic Polymod_obj::getModPack(::String text){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_440_getModPack)
HXLINE( 441)		if (::hx::IsNotNull( text )) {
HXLINE( 443)			::Array< ::String > mods = text.split(HX_(",",2c,00,00,00));
HXLINE( 444)			bool _hx_tmp;
HXDLIN( 444)			if (::hx::IsNotNull( mods )) {
HXLINE( 444)				_hx_tmp = (mods->length == 0);
            			}
            			else {
HXLINE( 444)				_hx_tmp = true;
            			}
HXDLIN( 444)			if (_hx_tmp) {
HXLINE( 446)				return null();
            			}
HXLINE( 448)			::Array< ::String > vers = ::Array_obj< ::String >::__new(0);
HXLINE( 449)			{
HXLINE( 449)				int _g = 0;
HXDLIN( 449)				int _g1 = mods->length;
HXDLIN( 449)				while((_g < _g1)){
HXLINE( 449)					_g = (_g + 1);
HXDLIN( 449)					int i = (_g - 1);
HXLINE( 451)					vers[i] = HX_("*.*.*",a2,34,5c,4d);
HXLINE( 452)					if ((mods->__get(i).indexOf(HX_(":",3a,00,00,00),null()) != -1)) {
HXLINE( 454)						::Array< ::String > arr = mods->__get(i).split(HX_(":",3a,00,00,00));
HXLINE( 455)						bool _hx_tmp;
HXDLIN( 455)						if (::hx::IsNotNull( arr )) {
HXLINE( 455)							_hx_tmp = (arr->length == 2);
            						}
            						else {
HXLINE( 455)							_hx_tmp = false;
            						}
HXDLIN( 455)						if (_hx_tmp) {
HXLINE( 457)							mods[i] = arr->__get(0);
HXLINE( 458)							vers[i] = arr->__get(1);
            						}
            					}
            				}
            			}
HXLINE( 462)			return  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("versions",5b,4e,b8,d6),vers)
            				->setFixed(1,HX_("mods",71,d3,60,48),mods));
            		}
HXLINE( 464)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,getModPack,return )


Polymod_obj::Polymod_obj()
{
}

bool Polymod_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { outValue = error_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"notice") ) { outValue = notice_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { outValue = ( onError ); return true; }
		if (HX_FIELD_EQ(inName,"library") ) { outValue = ( library ); return true; }
		if (HX_FIELD_EQ(inName,"warning") ) { outValue = warning_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getModPack") ) { outValue = getModPack_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getMetadata") ) { outValue = getMetadata_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"initModPack") ) { outValue = initModPack_dyn(); return true; }
	}
	return false;
}

bool Polymod_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { onError=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"library") ) { library=ioValue.Cast<  ::polymod::backends::PolymodAssetLibrary >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Polymod_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Polymod_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Polymod_obj::onError,HX_("onError",29,6a,67,09)},
	{::hx::fsObject /*  ::polymod::backends::PolymodAssetLibrary */ ,(void *) &Polymod_obj::library,HX_("library",fb,26,70,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Polymod_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Polymod_obj::onError,"onError");
	HX_MARK_MEMBER_NAME(Polymod_obj::library,"library");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Polymod_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Polymod_obj::onError,"onError");
	HX_VISIT_MEMBER_NAME(Polymod_obj::library,"library");
};

#endif

::hx::Class Polymod_obj::__mClass;

static ::String Polymod_obj_sStaticFields[] = {
	HX_("onError",29,6a,67,09),
	HX_("library",fb,26,70,3f),
	HX_("init",10,3b,bb,45),
	HX_("error",c8,cb,29,73),
	HX_("warning",5c,da,cb,09),
	HX_("notice",18,d8,b8,31),
	HX_("getMetadata",25,aa,0d,66),
	HX_("initModPack",8b,11,e8,97),
	HX_("getModPack",c5,28,df,2e),
	::String(null())
};

void Polymod_obj::__register()
{
	Polymod_obj _hx_dummy;
	Polymod_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.Polymod",5e,af,2e,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Polymod_obj::__GetStatic;
	__mClass->mSetStaticField = &Polymod_obj::__SetStatic;
	__mClass->mMarkFunc = Polymod_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Polymod_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Polymod_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Polymod_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Polymod_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Polymod_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Polymod_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_128_boot)
HXDLIN( 128)		onError = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_129_boot)
HXDLIN( 129)		library = null();
            	}
}

} // end namespace polymod
