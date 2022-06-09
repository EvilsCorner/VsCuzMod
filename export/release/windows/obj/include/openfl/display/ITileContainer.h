#ifndef INCLUDED_openfl_display_ITileContainer
#define INCLUDED_openfl_display_ITileContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,ITileContainer)
HX_DECLARE_CLASS2(openfl,display,Tile)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES ITileContainer_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		int (::hx::Object :: *_hx_get_numTiles)(); 
		static inline int get_numTiles( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::display::ITileContainer_obj *>(_hx_.mPtr->_hx_getInterface(0xcad54adc)))->_hx_get_numTiles)();
		}
		 ::openfl::display::Tile (::hx::Object :: *_hx_addTile)( ::openfl::display::Tile tile); 
		static inline  ::openfl::display::Tile addTile( ::Dynamic _hx_, ::openfl::display::Tile tile) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::display::ITileContainer_obj *>(_hx_.mPtr->_hx_getInterface(0xcad54adc)))->_hx_addTile)(tile);
		}
		 ::openfl::display::Tile (::hx::Object :: *_hx_addTileAt)( ::openfl::display::Tile tile,int index); 
		static inline  ::openfl::display::Tile addTileAt( ::Dynamic _hx_, ::openfl::display::Tile tile,int index) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::display::ITileContainer_obj *>(_hx_.mPtr->_hx_getInterface(0xcad54adc)))->_hx_addTileAt)(tile,index);
		}
		::Array< ::Dynamic> (::hx::Object :: *_hx_addTiles)(::Array< ::Dynamic> tiles); 
		static inline ::Array< ::Dynamic> addTiles( ::Dynamic _hx_,::Array< ::Dynamic> tiles) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::display::ITileContainer_obj *>(_hx_.mPtr->_hx_getInterface(0xcad54adc)))->_hx_addTiles)(tiles);
		}
		bool (::hx::Object :: *_hx_contains)( ::openfl::display::Tile tile); 
		static inline bool contains( ::Dynamic _hx_, ::openfl::display::Tile tile) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::display::ITileContainer_obj *>(_hx_.mPtr->_hx_getInterface(0xcad54adc)))->_hx_contains)(tile);
		}
		 ::openfl::display::Tile (::hx::Object :: *_hx_getTileAt)(int index); 
		static inline  ::openfl::display::Tile getTileAt( ::Dynamic _hx_,int index) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::display::ITileContainer_obj *>(_hx_.mPtr->_hx_getInterface(0xcad54adc)))->_hx_getTileAt)(index);
		}
		int (::hx::Object :: *_hx_getTileIndex)( ::openfl::display::Tile tile); 
		static inline int getTileIndex( ::Dynamic _hx_, ::openfl::display::Tile tile) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::display::ITileContainer_obj *>(_hx_.mPtr->_hx_getInterface(0xcad54adc)))->_hx_getTileIndex)(tile);
		}
		 ::openfl::display::Tile (::hx::Object :: *_hx_removeTile)( ::openfl::display::Tile tile); 
		static inline  ::openfl::display::Tile removeTile( ::Dynamic _hx_, ::openfl::display::Tile tile) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::display::ITileContainer_obj *>(_hx_.mPtr->_hx_getInterface(0xcad54adc)))->_hx_removeTile)(tile);
		}
		 ::openfl::display::Tile (::hx::Object :: *_hx_removeTileAt)(int index); 
		static inline  ::openfl::display::Tile removeTileAt( ::Dynamic _hx_,int index) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::display::ITileContainer_obj *>(_hx_.mPtr->_hx_getInterface(0xcad54adc)))->_hx_removeTileAt)(index);
		}
		void (::hx::Object :: *_hx_removeTiles)(::hx::Null< int >  beginIndex,::hx::Null< int >  endIndex); 
		static inline void removeTiles( ::Dynamic _hx_,::hx::Null< int >  beginIndex,::hx::Null< int >  endIndex) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::display::ITileContainer_obj *>(_hx_.mPtr->_hx_getInterface(0xcad54adc)))->_hx_removeTiles)(beginIndex,endIndex);
		}
		void (::hx::Object :: *_hx_setTileIndex)( ::openfl::display::Tile tile,int index); 
		static inline void setTileIndex( ::Dynamic _hx_, ::openfl::display::Tile tile,int index) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::display::ITileContainer_obj *>(_hx_.mPtr->_hx_getInterface(0xcad54adc)))->_hx_setTileIndex)(tile,index);
		}
		void (::hx::Object :: *_hx_sortTiles)( ::Dynamic compareFunction); 
		static inline void sortTiles( ::Dynamic _hx_, ::Dynamic compareFunction) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::display::ITileContainer_obj *>(_hx_.mPtr->_hx_getInterface(0xcad54adc)))->_hx_sortTiles)(compareFunction);
		}
		void (::hx::Object :: *_hx_swapTiles)( ::openfl::display::Tile tile1, ::openfl::display::Tile tile2); 
		static inline void swapTiles( ::Dynamic _hx_, ::openfl::display::Tile tile1, ::openfl::display::Tile tile2) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::display::ITileContainer_obj *>(_hx_.mPtr->_hx_getInterface(0xcad54adc)))->_hx_swapTiles)(tile1,tile2);
		}
		void (::hx::Object :: *_hx_swapTilesAt)(int index1,int index2); 
		static inline void swapTilesAt( ::Dynamic _hx_,int index1,int index2) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::display::ITileContainer_obj *>(_hx_.mPtr->_hx_getInterface(0xcad54adc)))->_hx_swapTilesAt)(index1,index2);
		}
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_ITileContainer */ 
