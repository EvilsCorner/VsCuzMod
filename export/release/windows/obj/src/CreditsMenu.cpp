// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_CreditsMenu
#include <CreditsMenu.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b6d32e0584996624_22_new,"CreditsMenu","new",0xb6301e2b,"CreditsMenu.new","CreditsMenu.hx",22,0xf7a20fa5)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d32e0584996624_48_create,"CreditsMenu","create",0x434f8a11,"CreditsMenu.create","CreditsMenu.hx",48,0xf7a20fa5)
static const int _hx_array_data_c64d2cb9_3[] = {
	(int)0,(int)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_b6d32e0584996624_129_update,"CreditsMenu","update",0x4e45a91e,"CreditsMenu.update","CreditsMenu.hx",129,0xf7a20fa5)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d32e0584996624_209_changeItem,"CreditsMenu","changeItem",0xa500cc38,"CreditsMenu.changeItem","CreditsMenu.hx",209,0xf7a20fa5)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d32e0584996624_202_changeItem,"CreditsMenu","changeItem",0xa500cc38,"CreditsMenu.changeItem","CreditsMenu.hx",202,0xf7a20fa5)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d32e0584996624_34_boot,"CreditsMenu","boot",0xac034807,"CreditsMenu.boot","CreditsMenu.hx",34,0xf7a20fa5)
static const ::String _hx_array_data_c64d2cb9_9[] = {
	HX_("- Acrylicqueen - \nDirector, Sprite Artist, \nWriting, Backgrounds",a0,00,ea,3a),HX_("- EvilsCorner - \nDirector, Animator, Backgrounds",f2,9d,07,58),HX_("- Splootulu - \nCutscene Illustrator",82,2a,a6,26),HX_("- Crashtroid - \nComposer, Charts",18,01,32,74),HX_("- Damonj17_ - \nComposer, Charts",0b,4f,d2,ea),HX_("- Sikowny - \nCode",f9,60,1f,26),
};

void CreditsMenu_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_GC_STACKFRAME(&_hx_pos_b6d32e0584996624_22_new)
HXLINE(  42)		this->staffIcons =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  41)		this->CreditsText = ::Array_obj< ::Dynamic>::__new();
HXLINE(  30)		this->consoleInput = HX_("TEST",52,90,ba,37);
HXLINE(  28)		this->acceptInput = true;
HXLINE(  26)		this->curSelected = -1;
HXLINE(  22)		super::__construct(TransIn,TransOut);
            	}

Dynamic CreditsMenu_obj::__CreateEmpty() { return new CreditsMenu_obj; }

void *CreditsMenu_obj::_hx_vtable = 0;

Dynamic CreditsMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CreditsMenu_obj > _hx_result = new CreditsMenu_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CreditsMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x794871f9 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void CreditsMenu_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b6d32e0584996624_48_create)
HXLINE(  50)		::CreditsMenu_obj::instance = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  51)		 ::flixel::FlxSprite menuBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  51)		::String library = null();
HXDLIN(  51)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("menuDesat",26,91,04,72),library);
HXDLIN(  51)		 ::flixel::FlxSprite menuBG1 = menuBG->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE(  54)		menuBG1->setGraphicSize(::Std_obj::_hx_int((menuBG1->get_width() * ((Float)1.1))),null());
HXLINE(  55)		menuBG1->updateHitbox();
HXLINE(  56)		menuBG1->screenCenter(null());
HXLINE(  57)		menuBG1->set_antialiasing(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("antialiasing",f4,16,b3,48),::hx::paccDynamic)) ));
HXLINE(  58)		this->add(menuBG1);
HXLINE(  67)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,400,(( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(32) )),null());
HXDLIN(  67)		this->consoleBox = _hx_tmp->makeGraphic(480,::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.9375))),-16777216,null(),null());
HXLINE(  70)		this->consoleBox->set_alpha(((Float)0.6));
HXLINE(  71)		this->add(this->consoleBox);
HXLINE(  73)		this->add(this->staffIcons);
HXLINE(  76)		{
HXLINE(  76)			int _g = 0;
HXDLIN(  76)			int _g1 = ::CreditsMenu_obj::CreditsArray->length;
HXDLIN(  76)			while((_g < _g1)){
HXLINE(  76)				_g = (_g + 1);
HXDLIN(  76)				int i = (_g - 1);
HXLINE(  77)				Float offsetY = (( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(9) ));
HXLINE(  78)				 ::flixel::FlxSprite staffIcon_ =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE(  80)				::String library = null();
HXDLIN(  80)				 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic((HX_("credits/credits",e5,b9,41,d5) + i),library);
HXDLIN(  80)				staffIcon_->loadGraphic(returnAsset,true,148,189,null(),null());
HXLINE(  81)				staffIcon_->animation->add(HX_("icon",79,e7,b2,45),::Array_obj< int >::fromData( _hx_array_data_c64d2cb9_3,2),0,false,null(),null());
HXLINE(  82)				staffIcon_->animation->play(HX_("icon",79,e7,b2,45),null(),null(),null());
HXLINE(  83)				if ((i > 0)) {
HXLINE(  85)					offsetY = (offsetY + (( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(32) )));
            				}
HXLINE(  87)				staffIcon_->ID = i;
HXLINE(  88)				Float _hx_tmp = ((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(4) )) + ((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(4) )) * ( (Float)((2 * ::hx::Mod((i + 1),2))) )));
HXDLIN(  88)				staffIcon_->set_x((_hx_tmp - (staffIcon_->get_width() / ( (Float)(2) ))));
HXLINE(  89)				staffIcon_->set_y(((offsetY * ( (Float)((i + 1)) )) - (staffIcon_->get_height() / ( (Float)(2) ))));
HXLINE(  90)				staffIcon_->updateHitbox();
HXLINE(  91)				staffIcon_->set_antialiasing(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("antialiasing",f4,16,b3,48),::hx::paccDynamic)) ));
HXLINE(  93)				this->staffIcons->add(staffIcon_).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  99)				 ::flixel::text::FlxText temp =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,::CreditsMenu_obj::CreditsArray->__get(i),24,null());
HXLINE( 100)				temp->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),24,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 101)				temp->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 102)				{
HXLINE( 102)					 ::flixel::text::FlxText _g1 = temp;
HXDLIN( 102)					_g1->set_x(_g1->x);
            				}
HXLINE( 103)				temp->set_y((offsetY * ( (Float)((i + 1)) )));
HXLINE( 104)				this->CreditsText->push(temp);
HXLINE( 105)				this->add(this->CreditsText->__get(i).StaticCast<  ::flixel::text::FlxText >());
HXLINE( 107)				this->scaleHelper = ::Std_obj::_hx_int(staffIcon_->get_width());
            			}
            		}
HXLINE( 112)		 ::flixel::text::FlxText instruct1 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(32) )),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.9375)),0,(HX_("[ENTER] - Visit twitter page     ",bc,f5,73,fb) + HX_("[ESC] - Back to menu",5b,be,22,4f)),20,null());
HXLINE( 115)		instruct1->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 116)		this->add(instruct1);
HXLINE( 123)		this->super::create();
            	}


void CreditsMenu_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_b6d32e0584996624_129_update)
HXLINE( 132)		{
HXLINE( 132)			int _g = 0;
HXDLIN( 132)			int _g1 = ::CreditsMenu_obj::CreditsArray->length;
HXDLIN( 132)			while((_g < _g1)){
HXLINE( 132)				_g = (_g + 1);
HXDLIN( 132)				int i = (_g - 1);
HXLINE( 133)				if ((i == this->curSelected)) {
HXLINE( 135)					this->CreditsText->__get(i).StaticCast<  ::flixel::text::FlxText >()->set_alpha(((Float)1.0));
            				}
            				else {
HXLINE( 139)					this->CreditsText->__get(i).StaticCast<  ::flixel::text::FlxText >()->set_alpha(((Float)0.5));
            				}
            			}
            		}
HXLINE( 143)		if (this->acceptInput) {
HXLINE( 146)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 146)			if (_this->keyManager->checkStatus(38,_this->status)) {
HXLINE( 148)				if ((this->curSelected > 0)) {
HXLINE( 150)					this->changeItem(-1);
            				}
            			}
HXLINE( 153)			 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 153)			if (_this1->keyManager->checkStatus(40,_this1->status)) {
HXLINE( 154)				if ((this->curSelected < (::CreditsMenu_obj::CreditsArray->length - 1))) {
HXLINE( 156)					this->changeItem(1);
            				}
            			}
HXLINE( 158)			if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 160)				 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 160)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 160)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
HXLINE( 162)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 164)				switch((int)(this->curSelected)){
            					case (int)0: {
HXLINE( 167)						::CoolUtil_obj::browserLoad(HX_("https://twitter.com/acrylicpoppy",f5,42,3c,f3));
            					}
            					break;
            					case (int)1: {
HXLINE( 169)						::CoolUtil_obj::browserLoad(HX_("https://twitter.com/EvilsCorner",7c,6f,1e,aa));
            					}
            					break;
            					case (int)2: {
HXLINE( 171)						::CoolUtil_obj::browserLoad(HX_("https://twitter.com/splootulu",e1,3a,71,2b));
            					}
            					break;
            					case (int)3: {
HXLINE( 173)						::CoolUtil_obj::browserLoad(HX_("https://twitter.com/crashtroid",fd,a3,8f,db));
            					}
            					break;
            					case (int)4: {
HXLINE( 175)						::CoolUtil_obj::browserLoad(HX_("https://twitter.com/Damonj17_",66,3c,89,a6));
            					}
            					break;
            					case (int)5: {
HXLINE( 177)						::CoolUtil_obj::browserLoad(HX_("https://twitter.com/sikowny",10,88,7c,0a));
            					}
            					break;
            					default:{
            					}
            				}
            			}
HXLINE( 181)			 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 181)			if (_this2->keyManager->checkStatus(39,_this2->status)) {
HXLINE( 183)				this->consoleBox->set_alpha(( (Float)(0) ));
            			}
HXLINE( 185)			 ::flixel::input::keyboard::FlxKeyList _this3 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 185)			if (_this3->keyManager->checkStatus(37,_this3->status)) {
HXLINE( 187)				this->consoleBox->set_alpha(((Float)0.6));
            			}
HXLINE( 190)			 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->lastActive;
            		}
HXLINE( 193)		if ((this->curSelected == -1)) {
HXLINE( 194)			this->changeItem(1);
            		}
HXLINE( 196)		::flixel::FlxG_obj::save->flush(null(),null());
HXLINE( 197)		this->super::update(elapsed);
            	}


void CreditsMenu_obj::changeItem(::hx::Null< int >  __o_huh){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::CreditsMenu,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite spr){
            			HX_STACKFRAME(&_hx_pos_b6d32e0584996624_209_changeItem)
HXLINE( 212)			if ((spr->ID == _gthis->curSelected)) {
HXLINE( 214)				spr->animation->_curAnim->set_curFrame(1);
HXLINE( 216)				spr->setGraphicSize(::Std_obj::_hx_int((( (Float)(_gthis->scaleHelper) ) * ((Float)1.1))),null());
            			}
            			else {
HXLINE( 220)				spr->animation->_curAnim->set_curFrame(0);
HXLINE( 221)				spr->setGraphicSize(::Std_obj::_hx_int((( (Float)(_gthis->scaleHelper) ) * ((Float)1.0))),null());
            			}
HXLINE( 226)			spr->updateHitbox();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		int huh = __o_huh.Default(0);
            	HX_STACKFRAME(&_hx_pos_b6d32e0584996624_202_changeItem)
HXLINE( 201)		 ::CreditsMenu _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 203)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 203)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 204)		 ::CreditsMenu _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + huh);
HXLINE( 208)		this->staffIcons->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsMenu_obj,changeItem,(void))

 ::CreditsMenu CreditsMenu_obj::instance;

::Array< ::String > CreditsMenu_obj::CreditsArray;


::hx::ObjectPtr< CreditsMenu_obj > CreditsMenu_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< CreditsMenu_obj > __this = new CreditsMenu_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< CreditsMenu_obj > CreditsMenu_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	CreditsMenu_obj *__this = (CreditsMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CreditsMenu_obj), true, "CreditsMenu"));
	*(void **)__this = CreditsMenu_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

CreditsMenu_obj::CreditsMenu_obj()
{
}

void CreditsMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CreditsMenu);
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(acceptInput,"acceptInput");
	HX_MARK_MEMBER_NAME(consoleInput,"consoleInput");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(consoleText,"consoleText");
	HX_MARK_MEMBER_NAME(CreditsText,"CreditsText");
	HX_MARK_MEMBER_NAME(staffIcons,"staffIcons");
	HX_MARK_MEMBER_NAME(consoleBox,"consoleBox");
	HX_MARK_MEMBER_NAME(scaleHelper,"scaleHelper");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CreditsMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(acceptInput,"acceptInput");
	HX_VISIT_MEMBER_NAME(consoleInput,"consoleInput");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(consoleText,"consoleText");
	HX_VISIT_MEMBER_NAME(CreditsText,"CreditsText");
	HX_VISIT_MEMBER_NAME(staffIcons,"staffIcons");
	HX_VISIT_MEMBER_NAME(consoleBox,"consoleBox");
	HX_VISIT_MEMBER_NAME(scaleHelper,"scaleHelper");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CreditsMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return ::hx::Val( input ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"staffIcons") ) { return ::hx::Val( staffIcons ); }
		if (HX_FIELD_EQ(inName,"consoleBox") ) { return ::hx::Val( consoleBox ); }
		if (HX_FIELD_EQ(inName,"changeItem") ) { return ::hx::Val( changeItem_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"acceptInput") ) { return ::hx::Val( acceptInput ); }
		if (HX_FIELD_EQ(inName,"consoleText") ) { return ::hx::Val( consoleText ); }
		if (HX_FIELD_EQ(inName,"CreditsText") ) { return ::hx::Val( CreditsText ); }
		if (HX_FIELD_EQ(inName,"scaleHelper") ) { return ::hx::Val( scaleHelper ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"consoleInput") ) { return ::hx::Val( consoleInput ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CreditsMenu_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"CreditsArray") ) { outValue = ( CreditsArray ); return true; }
	}
	return false;
}

::hx::Val CreditsMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::flixel::input::keyboard::FlxKeyboard >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"staffIcons") ) { staffIcons=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"consoleBox") ) { consoleBox=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceptInput") ) { acceptInput=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"consoleText") ) { consoleText=inValue.Cast<  ::Alphabet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CreditsText") ) { CreditsText=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleHelper") ) { scaleHelper=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"consoleInput") ) { consoleInput=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CreditsMenu_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::CreditsMenu >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"CreditsArray") ) { CreditsArray=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

void CreditsMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("acceptInput",e2,a3,6a,39));
	outFields->push(HX_("consoleInput",33,cd,2d,bb));
	outFields->push(HX_("input",0a,c4,1d,be));
	outFields->push(HX_("consoleText",a4,db,56,21));
	outFields->push(HX_("CreditsText",c7,b3,ed,ca));
	outFields->push(HX_("staffIcons",da,dc,ed,46));
	outFields->push(HX_("consoleBox",f4,fa,22,e9));
	outFields->push(HX_("scaleHelper",98,43,52,f0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CreditsMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(CreditsMenu_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsBool,(int)offsetof(CreditsMenu_obj,acceptInput),HX_("acceptInput",e2,a3,6a,39)},
	{::hx::fsString,(int)offsetof(CreditsMenu_obj,consoleInput),HX_("consoleInput",33,cd,2d,bb)},
	{::hx::fsObject /*  ::flixel::input::keyboard::FlxKeyboard */ ,(int)offsetof(CreditsMenu_obj,input),HX_("input",0a,c4,1d,be)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(CreditsMenu_obj,consoleText),HX_("consoleText",a4,db,56,21)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CreditsMenu_obj,CreditsText),HX_("CreditsText",c7,b3,ed,ca)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(CreditsMenu_obj,staffIcons),HX_("staffIcons",da,dc,ed,46)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CreditsMenu_obj,consoleBox),HX_("consoleBox",f4,fa,22,e9)},
	{::hx::fsInt,(int)offsetof(CreditsMenu_obj,scaleHelper),HX_("scaleHelper",98,43,52,f0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo CreditsMenu_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::CreditsMenu */ ,(void *) &CreditsMenu_obj::instance,HX_("instance",95,1f,e1,59)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &CreditsMenu_obj::CreditsArray,HX_("CreditsArray",3f,bd,05,dd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CreditsMenu_obj_sMemberFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("acceptInput",e2,a3,6a,39),
	HX_("consoleInput",33,cd,2d,bb),
	HX_("input",0a,c4,1d,be),
	HX_("consoleText",a4,db,56,21),
	HX_("CreditsText",c7,b3,ed,ca),
	HX_("staffIcons",da,dc,ed,46),
	HX_("consoleBox",f4,fa,22,e9),
	HX_("scaleHelper",98,43,52,f0),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("changeItem",a3,fa,08,20),
	::String(null()) };

static void CreditsMenu_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CreditsMenu_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(CreditsMenu_obj::CreditsArray,"CreditsArray");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CreditsMenu_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CreditsMenu_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(CreditsMenu_obj::CreditsArray,"CreditsArray");
};

#endif

::hx::Class CreditsMenu_obj::__mClass;

static ::String CreditsMenu_obj_sStaticFields[] = {
	HX_("instance",95,1f,e1,59),
	HX_("CreditsArray",3f,bd,05,dd),
	::String(null())
};

void CreditsMenu_obj::__register()
{
	CreditsMenu_obj _hx_dummy;
	CreditsMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CreditsMenu",b9,2c,4d,c6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CreditsMenu_obj::__GetStatic;
	__mClass->mSetStaticField = &CreditsMenu_obj::__SetStatic;
	__mClass->mMarkFunc = CreditsMenu_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CreditsMenu_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CreditsMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CreditsMenu_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CreditsMenu_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CreditsMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CreditsMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CreditsMenu_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b6d32e0584996624_34_boot)
HXDLIN(  34)		CreditsArray = ::Array_obj< ::String >::fromData( _hx_array_data_c64d2cb9_9,6);
            	}
}

