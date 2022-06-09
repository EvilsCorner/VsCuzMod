#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_DialogueBox
#include <DialogueBox.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_text_FlxTypeText
#include <flixel/addons/text/FlxTypeText.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
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
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
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
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
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
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_16_new,"DialogueBox","new",0x1f391625,"DialogueBox.new","DialogueBox.hx",16,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_143_update,"DialogueBox","update",0x23306964,"DialogueBox.update","DialogueBox.hx",143,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_209_update,"DialogueBox","update",0x23306964,"DialogueBox.update","DialogueBox.hx",209,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_235_update,"DialogueBox","update",0x23306964,"DialogueBox.update","DialogueBox.hx",235,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_255_startDialogue,"DialogueBox","startDialogue",0x59859d9f,"DialogueBox.startDialogue","DialogueBox.hx",255,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_289_cleanDialog,"DialogueBox","cleanDialog",0x0fc249f6,"DialogueBox.cleanDialog","DialogueBox.hx",289,0x0149b4eb)

void DialogueBox_obj::__construct(::hx::Null< bool >  __o_talkingRight,::Array< ::String > dialogueList){
            		bool talkingRight = __o_talkingRight.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_16_new)
HXLINE( 140)		this->dialogueStarted = false;
HXLINE( 139)		this->dialogueOpened = false;
HXLINE(  46)		this->noAdvance = false;
HXLINE(  45)		this->isEnding = false;
HXLINE(  25)		this->dialogueList = ::Array_obj< ::String >::__new(0);
HXLINE(  22)		this->curEmote = HX_("",00,00,00,00);
HXLINE(  21)		this->curPosition = HX_("",00,00,00,00);
HXLINE(  20)		this->curCharacter = HX_("",00,00,00,00);
HXLINE(  50)		super::__construct(null(),null(),null());
HXLINE(  54)		( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase();
HXLINE(  71)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-200,-200,null());
HXDLIN(  71)		int _hx_tmp1 = ::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.3)));
HXDLIN(  71)		this->bgFade = _hx_tmp->makeGraphic(_hx_tmp1,::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.3))),-4988968,null(),null());
HXLINE(  72)		this->bgFade->scrollFactor->set(null(),null());
HXLINE(  73)		this->bgFade->set_alpha(( (Float)(0) ));
HXLINE(  85)		this->box =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-20,45,null());
HXLINE(  87)		bool hasDialog = false;
HXLINE(  88)		hasDialog = true;
HXLINE(  92)		 ::flixel::FlxSprite _hx_tmp2 = this->box;
HXDLIN(  92)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(HX_("speech_bubble_talkingALT",09,38,7b,8b),null());
HXDLIN(  92)		bool xmlExists = false;
HXDLIN(  92)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("speech_bubble_talkingALT",09,38,7b,8b)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  92)			xmlExists = true;
            		}
HXDLIN(  92)		 ::Dynamic _hx_tmp3;
HXDLIN(  92)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  92)			_hx_tmp3 = imageLoaded;
            		}
            		else {
HXLINE(  92)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("speech_bubble_talkingALT",09,38,7b,8b),HX_("shared",a5,5e,2b,1d));
HXDLIN(  92)			_hx_tmp3 = returnAsset;
            		}
HXDLIN(  92)		::String _hx_tmp4;
HXDLIN(  92)		if (xmlExists) {
HXLINE(  92)			_hx_tmp4 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("speech_bubble_talkingALT",09,38,7b,8b)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE(  92)			_hx_tmp4 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("speech_bubble_talkingALT",09,38,7b,8b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("shared",a5,5e,2b,1d));
            		}
HXDLIN(  92)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,_hx_tmp4));
HXLINE(  93)		this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("Speech Bubble Normal Open",0d,59,3f,7c),24,false,null(),null());
HXLINE(  94)		this->box->animation->addByPrefix(HX_("normal",27,72,69,30),HX_("speech bubble normal",bd,d5,bc,a7),24,true,null(),null());
HXLINE(  95)		this->box->set_width(( (Float)(200) ));
HXLINE(  96)		this->box->set_height(( (Float)(200) ));
HXLINE(  97)		this->box->set_x(( (Float)(100) ));
HXLINE(  98)		this->box->set_y(( (Float)(425) ));
HXLINE( 100)		this->swagDialogue =  ::flixel::addons::text::FlxTypeText_obj::__alloc( HX_CTX ,( (Float)(200) ),( (Float)(465) ),::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.7))),HX_("",00,00,00,00),32,null());
HXLINE( 101)		 ::flixel::addons::text::FlxTypeText _hx_tmp5 = this->swagDialogue;
HXDLIN( 101)		::String file = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("Dominican.TTF",e6,33,f3,31)));
HXDLIN( 101)		::String _hx_tmp6;
HXDLIN( 101)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 101)			_hx_tmp6 = file;
            		}
            		else {
HXLINE( 101)			_hx_tmp6 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("Dominican.TTF",e6,33,f3,31));
            		}
HXDLIN( 101)		_hx_tmp5->setFormat(_hx_tmp6,60,null(),null(),null(),null(),null());
HXLINE( 102)		this->swagDialogue->set_color(-16777216);
HXLINE( 103)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp7 = ::flixel::FlxG_obj::sound;
HXDLIN( 103)		 ::flixel::_hx_system::FlxSound _hx_tmp8 = _hx_tmp7->load(::Paths_obj::sound(HX_("pixelText",53,7a,83,06),null()),((Float)0.6),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 103)		this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp8);
HXLINE( 105)		Float _hx_tmp9 = (this->swagDialogue->x + 2);
HXDLIN( 105)		Float _hx_tmp10 = (this->swagDialogue->y + 2);
HXDLIN( 105)		this->dropText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,_hx_tmp9,_hx_tmp10,::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.6))),HX_("",00,00,00,00),32,null());
HXLINE( 106)		 ::flixel::text::FlxText _hx_tmp11 = this->dropText;
HXDLIN( 106)		::String file1 = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("Dominican.TTF",e6,33,f3,31)));
HXDLIN( 106)		::String _hx_tmp12;
HXDLIN( 106)		if (::sys::FileSystem_obj::exists(file1)) {
HXLINE( 106)			_hx_tmp12 = file1;
            		}
            		else {
HXLINE( 106)			_hx_tmp12 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("Dominican.TTF",e6,33,f3,31));
            		}
HXDLIN( 106)		_hx_tmp11->setFormat(_hx_tmp12,60,null(),null(),null(),null(),null());
HXLINE( 107)		this->dropText->set_color(-16777216);
HXLINE( 109)		this->dialogueList = dialogueList;
HXLINE( 111)		if (!(hasDialog)) {
HXLINE( 112)			return;
            		}
HXLINE( 115)		this->cutSceneBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE( 116)		this->add(this->cutSceneBG);
HXLINE( 117)		this->cutSceneBG->set_visible(false);
HXLINE( 119)		this->tempPortrait =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE( 120)		this->add(this->tempPortrait);
HXLINE( 121)		this->tempPortrait->set_visible(false);
HXLINE( 123)		this->box->animation->play(HX_("normalOpen",91,41,38,70),null(),null(),null());
HXLINE( 124)		 ::flixel::FlxSprite _hx_tmp13 = this->box;
HXDLIN( 124)		Float _hx_tmp14 = this->box->get_width();
HXDLIN( 124)		_hx_tmp13->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp14 * ::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE( 125)		this->box->updateHitbox();
HXLINE( 126)		this->add(this->box);
HXLINE( 127)		{
HXLINE( 127)			 ::flixel::FlxSprite _this = this->box;
HXDLIN( 127)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN( 127)			if (::hx::IsNull( axes )) {
HXLINE( 127)				axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN( 127)			bool _hx_tmp15;
HXDLIN( 127)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE( 127)					_hx_tmp15 = true;
            				}
            				break;
            				default:{
HXLINE( 127)					_hx_tmp15 = false;
            				}
            			}
HXDLIN( 127)			if (_hx_tmp15) {
HXLINE( 127)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 127)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 127)			bool _hx_tmp16;
HXDLIN( 127)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE( 127)					_hx_tmp16 = true;
            				}
            				break;
            				default:{
HXLINE( 127)					_hx_tmp16 = false;
            				}
            			}
HXDLIN( 127)			if (_hx_tmp16) {
HXLINE( 127)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 127)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 128)		 ::flixel::FlxSprite fh = this->box;
HXDLIN( 128)		fh->set_x((fh->x + 25));
HXLINE( 134)		this->add(this->swagDialogue);
            	}

Dynamic DialogueBox_obj::__CreateEmpty() { return new DialogueBox_obj; }

void *DialogueBox_obj::_hx_vtable = 0;

Dynamic DialogueBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DialogueBox_obj > _hx_result = new DialogueBox_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DialogueBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x288ce903) {
			if (inClassId<=(int)0x04b35cb7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x04b35cb7;
			} else {
				return inClassId==(int)0x288ce903;
			}
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void DialogueBox_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_143_update)
HXDLIN( 143)		 ::DialogueBox _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 145)		this->dropText->set_text(this->swagDialogue->text);
HXLINE( 151)		if (::hx::IsNotNull( this->box->animation->_curAnim )) {
HXLINE( 153)			bool _hx_tmp;
HXDLIN( 153)			if ((this->box->animation->_curAnim->name == HX_("normalOpen",91,41,38,70))) {
HXLINE( 153)				_hx_tmp = this->box->animation->_curAnim->finished;
            			}
            			else {
HXLINE( 153)				_hx_tmp = false;
            			}
HXDLIN( 153)			if (_hx_tmp) {
HXLINE( 155)				this->box->animation->play(HX_("normal",27,72,69,30),null(),null(),null());
HXLINE( 156)				this->dialogueOpened = true;
            			}
            		}
HXLINE( 161)		bool _hx_tmp;
HXDLIN( 161)		if (this->dialogueOpened) {
HXLINE( 161)			_hx_tmp = !(this->dialogueStarted);
            		}
            		else {
HXLINE( 161)			_hx_tmp = false;
            		}
HXDLIN( 161)		if (_hx_tmp) {
HXLINE( 163)			this->startDialogue();
HXLINE( 164)			this->dialogueStarted = true;
            		}
HXLINE( 167)		bool _hx_tmp1;
HXDLIN( 167)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 167)		if (_this->keyManager->checkStatusUnsafe(27,_this->status)) {
HXLINE( 167)			_hx_tmp1 = this->dialogueStarted;
            		}
            		else {
HXLINE( 167)			_hx_tmp1 = false;
            		}
HXDLIN( 167)		if (_hx_tmp1) {
HXLINE( 168)			this->isEnding = true;
            		}
HXLINE( 171)		bool _hx_tmp2;
HXDLIN( 171)		bool _hx_tmp3;
HXDLIN( 171)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 171)			_hx_tmp3 = this->dialogueStarted;
            		}
            		else {
HXLINE( 171)			_hx_tmp3 = false;
            		}
HXDLIN( 171)		if (_hx_tmp3) {
HXLINE( 171)			_hx_tmp2 = !(this->noAdvance);
            		}
            		else {
HXLINE( 171)			_hx_tmp2 = false;
            		}
HXDLIN( 171)		if (_hx_tmp2) {
HXLINE( 174)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 174)			_hx_tmp->play(::Paths_obj::sound(HX_("SNAP",4a,1e,18,37),null()),((Float)0.8),null(),null(),null(),null());
HXLINE( 177)			if (::hx::IsNull( this->dialogueList->__get(1) )) {
HXLINE( 179)				this->isEnding = true;
            			}
            			else {
HXLINE( 187)				this->dialogueList->remove(this->dialogueList->__get(0));
HXLINE( 188)				this->startDialogue();
            			}
            		}
HXLINE( 192)		if (this->isEnding) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::DialogueBox,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_209_update)
HXLINE( 210)				 ::flixel::FlxSprite fh = _gthis->box;
HXDLIN( 210)				fh->set_alpha((fh->alpha - ((Float)0.01)));
HXLINE( 212)				 ::flixel::FlxSprite fh1 = _gthis->cutSceneBG;
HXDLIN( 212)				fh1->set_alpha((fh1->alpha - ((Float)0.01)));
HXLINE( 216)				 ::flixel::addons::text::FlxTypeText fh2 = _gthis->swagDialogue;
HXDLIN( 216)				fh2->set_alpha((fh2->alpha - ((Float)0.01)));
HXLINE( 217)				_gthis->dropText->set_alpha(_gthis->swagDialogue->alpha);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::DialogueBox,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_235_update)
HXLINE( 236)				_gthis->finishThing();
HXLINE( 237)				_gthis->kill();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 194)			this->isEnding = false;
HXLINE( 195)			this->noAdvance = true;
HXLINE( 197)			this->tempPortrait->set_visible(false);
HXLINE( 208)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.01), ::Dynamic(new _hx_Closure_0(_gthis)),100);
HXLINE( 234)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)1.2), ::Dynamic(new _hx_Closure_1(_gthis)),null());
            		}
HXLINE( 240)		this->super::update(elapsed);
            	}


void DialogueBox_obj::startDialogue(){
            	HX_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_255_startDialogue)
HXLINE( 256)		this->cleanDialog();
HXLINE( 259)		::String portraitName = (((HX_("",00,00,00,00) + this->curCharacter) + HX_(" ",20,00,00,00)) + this->curEmote);
HXLINE( 260)		 ::flixel::FlxSprite _hx_tmp = this->tempPortrait;
HXDLIN( 260)		::String key = (HX_("Talk Sprites/",15,f9,4e,fb) + portraitName);
HXDLIN( 260)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(key,null());
HXDLIN( 260)		bool xmlExists = false;
HXDLIN( 260)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 260)			xmlExists = true;
            		}
HXDLIN( 260)		 ::Dynamic _hx_tmp1;
HXDLIN( 260)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 260)			_hx_tmp1 = imageLoaded;
            		}
            		else {
HXLINE( 260)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(key,HX_("shared",a5,5e,2b,1d));
HXDLIN( 260)			_hx_tmp1 = returnAsset;
            		}
HXDLIN( 260)		::String _hx_tmp2;
HXDLIN( 260)		if (xmlExists) {
HXLINE( 260)			_hx_tmp2 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE( 260)			_hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("shared",a5,5e,2b,1d));
            		}
HXDLIN( 260)		_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,_hx_tmp2));
HXLINE( 261)		if (::hx::IsNull( this->tempPortrait->frames )) {
HXLINE( 263)			 ::flixel::FlxSprite _hx_tmp = this->tempPortrait;
HXDLIN( 263)			::String key = ((HX_("Talk Sprites/",15,f9,4e,fb) + this->curCharacter) + HX_(" Unknown",4a,8f,1a,d5));
HXDLIN( 263)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(key,null());
HXDLIN( 263)			bool xmlExists = false;
HXDLIN( 263)			if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 263)				xmlExists = true;
            			}
HXDLIN( 263)			 ::Dynamic _hx_tmp1;
HXDLIN( 263)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 263)				_hx_tmp1 = imageLoaded;
            			}
            			else {
HXLINE( 263)				 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(key,HX_("shared",a5,5e,2b,1d));
HXDLIN( 263)				_hx_tmp1 = returnAsset;
            			}
HXDLIN( 263)			::String _hx_tmp2;
HXDLIN( 263)			if (xmlExists) {
HXLINE( 263)				_hx_tmp2 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE( 263)				_hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("shared",a5,5e,2b,1d));
            			}
HXDLIN( 263)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,_hx_tmp2));
HXLINE( 264)			::haxe::Log_obj::trace(((HX_("portrait ",65,0e,8e,e0) + portraitName) + HX_(" was not found",9e,6d,3d,b1)),::hx::SourceInfo(HX_("source/DialogueBox.hx",df,86,e3,ca),264,HX_("DialogueBox",b3,1f,c8,ff),HX_("startDialogue",9a,8f,4f,ac)));
            		}
HXLINE( 266)		this->tempPortrait->animation->addByPrefix(HX_("enter",18,6d,86,70),portraitName,24,false,null(),null());
HXLINE( 267)		 ::flixel::FlxSprite _hx_tmp3 = this->tempPortrait;
HXDLIN( 267)		_hx_tmp3->setGraphicSize(::Std_obj::_hx_int(this->tempPortrait->get_width()),null());
HXLINE( 268)		this->tempPortrait->updateHitbox();
HXLINE( 269)		this->tempPortrait->scrollFactor->set(null(),null());
HXLINE( 271)		::String _hx_switch_0 = this->curPosition;
            		if (  (_hx_switch_0==HX_("l",6c,00,00,00)) ){
HXLINE( 277)			this->tempPortrait->set_flipX(true);
HXLINE( 278)			this->tempPortrait->setPosition(80,-65);
HXLINE( 276)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("r",72,00,00,00)) ){
HXLINE( 274)			this->tempPortrait->set_flipX(false);
HXLINE( 275)			this->tempPortrait->setPosition(675,-65);
HXLINE( 273)			goto _hx_goto_4;
            		}
            		_hx_goto_4:;
HXLINE( 281)		this->tempPortrait->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
HXLINE( 283)		this->swagDialogue->resetText(this->dialogueList->__get(0));
HXLINE( 284)		this->swagDialogue->start(((Float)0.04),true,null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBox_obj,startDialogue,(void))

void DialogueBox_obj::cleanDialog(){
            	HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_289_cleanDialog)
HXLINE( 302)		::Array< ::String > splits = this->dialogueList->__get(0).split(HX_(":",3a,00,00,00));
HXLINE( 307)		if ((splits->__get(1) == HX_("SCENE",2c,11,c0,f6))) {
HXLINE( 309)			 ::flixel::FlxSprite _hx_tmp = this->cutSceneBG;
HXDLIN( 309)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic((HX_("scenes/",a8,28,f4,b3) + splits->__get(2)),HX_("weekCuz",f4,4d,eb,24));
HXDLIN( 309)			_hx_tmp->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE( 311)			 ::flixel::FlxSprite _hx_tmp1 = this->cutSceneBG;
HXDLIN( 311)			_hx_tmp1->setGraphicSize(::Std_obj::_hx_int(this->cutSceneBG->get_width()),null());
HXLINE( 312)			this->dialogueList[0] = HX_(" ",20,00,00,00);
HXLINE( 313)			this->cutSceneBG->set_visible(true);
HXLINE( 314)			this->tempPortrait->set_visible(false);
HXLINE( 315)			this->box->set_visible(false);
HXLINE( 319)			if (::hx::IsNotNull( splits->__get(3) )) {
HXLINE( 320)				 ::flixel::_hx_system::FlxSound sound_ =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX );
HXDLIN( 320)				 ::flixel::_hx_system::FlxSound sound_1 = sound_->loadEmbedded(::Paths_obj::sound(splits->__get(3),null()),null(),null(),null());
HXLINE( 321)				sound_1->play(null(),null(),null());
            			}
HXLINE( 336)			if (::hx::IsNotNull( splits->__get(4) )) {
HXLINE( 337)				int colour = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(splits->__get(5)));
HXLINE( 338)				Float time = ::Std_obj::parseFloat(splits->__get(6));
HXLINE( 339)				::haxe::Log_obj::trace((HX_("colour = ",97,ec,3a,f6) + colour),::hx::SourceInfo(HX_("source/DialogueBox.hx",df,86,e3,ca),339,HX_("DialogueBox",b3,1f,c8,ff),HX_("cleanDialog",31,37,ca,9e)));
HXLINE( 340)				::haxe::Log_obj::trace((HX_("time = ",76,f7,ba,d8) + time),::hx::SourceInfo(HX_("source/DialogueBox.hx",df,86,e3,ca),340,HX_("DialogueBox",b3,1f,c8,ff),HX_("cleanDialog",31,37,ca,9e)));
HXLINE( 341)				::String _hx_switch_0 = splits->__get(4);
            				if (  (_hx_switch_0==HX_("fade",7c,b5,b5,43)) ){
HXLINE( 350)					::haxe::Log_obj::trace(HX_("---in fade",6a,42,7c,a9),::hx::SourceInfo(HX_("source/DialogueBox.hx",df,86,e3,ca),350,HX_("DialogueBox",b3,1f,c8,ff),HX_("cleanDialog",31,37,ca,9e)));
HXLINE( 351)					::String type = splits->__get(7);
HXLINE( 352)					bool fade = false;
HXLINE( 353)					::String _hx_switch_1 = type;
            					if (  (_hx_switch_1==HX_("in",e5,5b,00,00)) ){
HXLINE( 355)						fade = true;
HXDLIN( 355)						goto _hx_goto_7;
            					}
            					if (  (_hx_switch_1==HX_("out",8e,a0,54,00)) ){
HXLINE( 357)						fade = false;
HXDLIN( 357)						goto _hx_goto_7;
            					}
            					_hx_goto_7:;
HXLINE( 359)					::flixel::FlxG_obj::cameras->fade(colour,time,fade,null(),null());
HXLINE( 349)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("flash",b0,35,8c,02)) ){
HXLINE( 344)					::haxe::Log_obj::trace(HX_("---in flash",02,f9,80,aa),::hx::SourceInfo(HX_("source/DialogueBox.hx",df,86,e3,ca),344,HX_("DialogueBox",b3,1f,c8,ff),HX_("cleanDialog",31,37,ca,9e)));
HXLINE( 345)					::flixel::FlxG_obj::cameras->flash(colour,time,null(),null());
HXLINE( 343)					goto _hx_goto_6;
            				}
            				_hx_goto_6:;
            			}
            		}
            		else {
HXLINE( 366)			this->tempPortrait->set_visible(true);
HXLINE( 367)			this->box->set_visible(true);
HXLINE( 368)			this->curCharacter = splits->__get(1);
HXLINE( 369)			this->curPosition = splits->__get(2);
HXLINE( 370)			this->curEmote = splits->__get(3);
HXLINE( 372)			if (::hx::IsNotNull( splits->__get(5) )) {
HXLINE( 373)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 373)				_hx_tmp->play(::Paths_obj::sound(splits->__get(5),null()),((Float)0.8),null(),null(),null(),null());
            			}
HXLINE( 376)			this->dialogueList[0] = splits->__get(4);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBox_obj,cleanDialog,(void))


::hx::ObjectPtr< DialogueBox_obj > DialogueBox_obj::__new(::hx::Null< bool >  __o_talkingRight,::Array< ::String > dialogueList) {
	::hx::ObjectPtr< DialogueBox_obj > __this = new DialogueBox_obj();
	__this->__construct(__o_talkingRight,dialogueList);
	return __this;
}

::hx::ObjectPtr< DialogueBox_obj > DialogueBox_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_talkingRight,::Array< ::String > dialogueList) {
	DialogueBox_obj *__this = (DialogueBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DialogueBox_obj), true, "DialogueBox"));
	*(void **)__this = DialogueBox_obj::_hx_vtable;
	__this->__construct(__o_talkingRight,dialogueList);
	return __this;
}

DialogueBox_obj::DialogueBox_obj()
{
}

void DialogueBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogueBox);
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_MEMBER_NAME(curCharacter,"curCharacter");
	HX_MARK_MEMBER_NAME(curPosition,"curPosition");
	HX_MARK_MEMBER_NAME(curEmote,"curEmote");
	HX_MARK_MEMBER_NAME(dialogue,"dialogue");
	HX_MARK_MEMBER_NAME(dialogueList,"dialogueList");
	HX_MARK_MEMBER_NAME(swagDialogue,"swagDialogue");
	HX_MARK_MEMBER_NAME(dropText,"dropText");
	HX_MARK_MEMBER_NAME(finishThing,"finishThing");
	HX_MARK_MEMBER_NAME(portraitLeft,"portraitLeft");
	HX_MARK_MEMBER_NAME(portraitRight,"portraitRight");
	HX_MARK_MEMBER_NAME(cutSceneBG,"cutSceneBG");
	HX_MARK_MEMBER_NAME(handSelect,"handSelect");
	HX_MARK_MEMBER_NAME(bgFade,"bgFade");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(tempPortrait,"tempPortrait");
	HX_MARK_MEMBER_NAME(isEnding,"isEnding");
	HX_MARK_MEMBER_NAME(noAdvance,"noAdvance");
	HX_MARK_MEMBER_NAME(dialogueOpened,"dialogueOpened");
	HX_MARK_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DialogueBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(box,"box");
	HX_VISIT_MEMBER_NAME(curCharacter,"curCharacter");
	HX_VISIT_MEMBER_NAME(curPosition,"curPosition");
	HX_VISIT_MEMBER_NAME(curEmote,"curEmote");
	HX_VISIT_MEMBER_NAME(dialogue,"dialogue");
	HX_VISIT_MEMBER_NAME(dialogueList,"dialogueList");
	HX_VISIT_MEMBER_NAME(swagDialogue,"swagDialogue");
	HX_VISIT_MEMBER_NAME(dropText,"dropText");
	HX_VISIT_MEMBER_NAME(finishThing,"finishThing");
	HX_VISIT_MEMBER_NAME(portraitLeft,"portraitLeft");
	HX_VISIT_MEMBER_NAME(portraitRight,"portraitRight");
	HX_VISIT_MEMBER_NAME(cutSceneBG,"cutSceneBG");
	HX_VISIT_MEMBER_NAME(handSelect,"handSelect");
	HX_VISIT_MEMBER_NAME(bgFade,"bgFade");
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(tempPortrait,"tempPortrait");
	HX_VISIT_MEMBER_NAME(isEnding,"isEnding");
	HX_VISIT_MEMBER_NAME(noAdvance,"noAdvance");
	HX_VISIT_MEMBER_NAME(dialogueOpened,"dialogueOpened");
	HX_VISIT_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DialogueBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return ::hx::Val( box ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return ::hx::Val( sound ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { return ::hx::Val( bgFade ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curEmote") ) { return ::hx::Val( curEmote ); }
		if (HX_FIELD_EQ(inName,"dialogue") ) { return ::hx::Val( dialogue ); }
		if (HX_FIELD_EQ(inName,"dropText") ) { return ::hx::Val( dropText ); }
		if (HX_FIELD_EQ(inName,"isEnding") ) { return ::hx::Val( isEnding ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"noAdvance") ) { return ::hx::Val( noAdvance ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cutSceneBG") ) { return ::hx::Val( cutSceneBG ); }
		if (HX_FIELD_EQ(inName,"handSelect") ) { return ::hx::Val( handSelect ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curPosition") ) { return ::hx::Val( curPosition ); }
		if (HX_FIELD_EQ(inName,"finishThing") ) { return ::hx::Val( finishThing ); }
		if (HX_FIELD_EQ(inName,"cleanDialog") ) { return ::hx::Val( cleanDialog_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { return ::hx::Val( curCharacter ); }
		if (HX_FIELD_EQ(inName,"dialogueList") ) { return ::hx::Val( dialogueList ); }
		if (HX_FIELD_EQ(inName,"swagDialogue") ) { return ::hx::Val( swagDialogue ); }
		if (HX_FIELD_EQ(inName,"portraitLeft") ) { return ::hx::Val( portraitLeft ); }
		if (HX_FIELD_EQ(inName,"tempPortrait") ) { return ::hx::Val( tempPortrait ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"portraitRight") ) { return ::hx::Val( portraitRight ); }
		if (HX_FIELD_EQ(inName,"startDialogue") ) { return ::hx::Val( startDialogue_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dialogueOpened") ) { return ::hx::Val( dialogueOpened ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { return ::hx::Val( dialogueStarted ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DialogueBox_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { bgFade=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curEmote") ) { curEmote=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogue") ) { dialogue=inValue.Cast<  ::Alphabet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dropText") ) { dropText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isEnding") ) { isEnding=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"noAdvance") ) { noAdvance=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cutSceneBG") ) { cutSceneBG=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handSelect") ) { handSelect=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curPosition") ) { curPosition=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finishThing") ) { finishThing=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { curCharacter=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogueList") ) { dialogueList=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swagDialogue") ) { swagDialogue=inValue.Cast<  ::flixel::addons::text::FlxTypeText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"portraitLeft") ) { portraitLeft=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tempPortrait") ) { tempPortrait=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"portraitRight") ) { portraitRight=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dialogueOpened") ) { dialogueOpened=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { dialogueStarted=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DialogueBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("box",0b,be,4a,00));
	outFields->push(HX_("curCharacter",09,86,7c,d7));
	outFields->push(HX_("curPosition",49,62,39,4c));
	outFields->push(HX_("curEmote",98,72,87,b7));
	outFields->push(HX_("dialogue",18,2d,94,a7));
	outFields->push(HX_("dialogueList",96,e1,d8,0d));
	outFields->push(HX_("swagDialogue",c2,ad,00,ad));
	outFields->push(HX_("dropText",7c,74,94,f2));
	outFields->push(HX_("portraitLeft",02,9f,53,0d));
	outFields->push(HX_("portraitRight",81,90,e4,12));
	outFields->push(HX_("cutSceneBG",af,34,42,31));
	outFields->push(HX_("handSelect",cb,77,90,7c));
	outFields->push(HX_("bgFade",e1,fd,cd,ab));
	outFields->push(HX_("sound",cf,8c,cc,80));
	outFields->push(HX_("tempPortrait",8f,d4,31,5e));
	outFields->push(HX_("isEnding",71,3f,f2,52));
	outFields->push(HX_("noAdvance",41,ca,f7,2c));
	outFields->push(HX_("dialogueOpened",e1,e5,9f,10));
	outFields->push(HX_("dialogueStarted",09,77,22,70));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DialogueBox_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,box),HX_("box",0b,be,4a,00)},
	{::hx::fsString,(int)offsetof(DialogueBox_obj,curCharacter),HX_("curCharacter",09,86,7c,d7)},
	{::hx::fsString,(int)offsetof(DialogueBox_obj,curPosition),HX_("curPosition",49,62,39,4c)},
	{::hx::fsString,(int)offsetof(DialogueBox_obj,curEmote),HX_("curEmote",98,72,87,b7)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(DialogueBox_obj,dialogue),HX_("dialogue",18,2d,94,a7)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DialogueBox_obj,dialogueList),HX_("dialogueList",96,e1,d8,0d)},
	{::hx::fsObject /*  ::flixel::addons::text::FlxTypeText */ ,(int)offsetof(DialogueBox_obj,swagDialogue),HX_("swagDialogue",c2,ad,00,ad)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(DialogueBox_obj,dropText),HX_("dropText",7c,74,94,f2)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBox_obj,finishThing),HX_("finishThing",9b,aa,8e,36)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,portraitLeft),HX_("portraitLeft",02,9f,53,0d)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,portraitRight),HX_("portraitRight",81,90,e4,12)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,cutSceneBG),HX_("cutSceneBG",af,34,42,31)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,handSelect),HX_("handSelect",cb,77,90,7c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,bgFade),HX_("bgFade",e1,fd,cd,ab)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(DialogueBox_obj,sound),HX_("sound",cf,8c,cc,80)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,tempPortrait),HX_("tempPortrait",8f,d4,31,5e)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,isEnding),HX_("isEnding",71,3f,f2,52)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,noAdvance),HX_("noAdvance",41,ca,f7,2c)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,dialogueOpened),HX_("dialogueOpened",e1,e5,9f,10)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,dialogueStarted),HX_("dialogueStarted",09,77,22,70)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DialogueBox_obj_sStaticStorageInfo = 0;
#endif

static ::String DialogueBox_obj_sMemberFields[] = {
	HX_("box",0b,be,4a,00),
	HX_("curCharacter",09,86,7c,d7),
	HX_("curPosition",49,62,39,4c),
	HX_("curEmote",98,72,87,b7),
	HX_("dialogue",18,2d,94,a7),
	HX_("dialogueList",96,e1,d8,0d),
	HX_("swagDialogue",c2,ad,00,ad),
	HX_("dropText",7c,74,94,f2),
	HX_("finishThing",9b,aa,8e,36),
	HX_("portraitLeft",02,9f,53,0d),
	HX_("portraitRight",81,90,e4,12),
	HX_("cutSceneBG",af,34,42,31),
	HX_("handSelect",cb,77,90,7c),
	HX_("bgFade",e1,fd,cd,ab),
	HX_("sound",cf,8c,cc,80),
	HX_("tempPortrait",8f,d4,31,5e),
	HX_("isEnding",71,3f,f2,52),
	HX_("noAdvance",41,ca,f7,2c),
	HX_("dialogueOpened",e1,e5,9f,10),
	HX_("dialogueStarted",09,77,22,70),
	HX_("update",09,86,05,87),
	HX_("startDialogue",9a,8f,4f,ac),
	HX_("cleanDialog",31,37,ca,9e),
	::String(null()) };

::hx::Class DialogueBox_obj::__mClass;

void DialogueBox_obj::__register()
{
	DialogueBox_obj _hx_dummy;
	DialogueBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DialogueBox",b3,1f,c8,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DialogueBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DialogueBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogueBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogueBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

