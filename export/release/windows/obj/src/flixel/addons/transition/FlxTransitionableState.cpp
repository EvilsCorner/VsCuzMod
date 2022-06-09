#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_Transition
#include <flixel/addons/transition/Transition.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d118940668e85bda_30_new,"flixel.addons.transition.FlxTransitionableState","new",0x52dd5b72,"flixel.addons.transition.FlxTransitionableState.new","flixel/addons/transition/FlxTransitionableState.hx",30,0x6a23403d)
HX_LOCAL_STACK_FRAME(_hx_pos_d118940668e85bda_68_destroy,"flixel.addons.transition.FlxTransitionableState","destroy",0xff67a90c,"flixel.addons.transition.FlxTransitionableState.destroy","flixel/addons/transition/FlxTransitionableState.hx",68,0x6a23403d)
HX_LOCAL_STACK_FRAME(_hx_pos_d118940668e85bda_76_create,"flixel.addons.transition.FlxTransitionableState","create",0x91b4932a,"flixel.addons.transition.FlxTransitionableState.create","flixel/addons/transition/FlxTransitionableState.hx",76,0x6a23403d)
HX_LOCAL_STACK_FRAME(_hx_pos_d118940668e85bda_82_switchTo,"flixel.addons.transition.FlxTransitionableState","switchTo",0xb8420c3d,"flixel.addons.transition.FlxTransitionableState.switchTo","flixel/addons/transition/FlxTransitionableState.hx",82,0x6a23403d)
HX_LOCAL_STACK_FRAME(_hx_pos_d118940668e85bda_98_transitionToState,"flixel.addons.transition.FlxTransitionableState","transitionToState",0x46017013,"flixel.addons.transition.FlxTransitionableState.transitionToState","flixel/addons/transition/FlxTransitionableState.hx",98,0x6a23403d)
HX_LOCAL_STACK_FRAME(_hx_pos_d118940668e85bda_93_transitionToState,"flixel.addons.transition.FlxTransitionableState","transitionToState",0x46017013,"flixel.addons.transition.FlxTransitionableState.transitionToState","flixel/addons/transition/FlxTransitionableState.hx",93,0x6a23403d)
HX_LOCAL_STACK_FRAME(_hx_pos_d118940668e85bda_113_transitionIn,"flixel.addons.transition.FlxTransitionableState","transitionIn",0x16879f88,"flixel.addons.transition.FlxTransitionableState.transitionIn","flixel/addons/transition/FlxTransitionableState.hx",113,0x6a23403d)
HX_LOCAL_STACK_FRAME(_hx_pos_d118940668e85bda_139_transitionOut,"flixel.addons.transition.FlxTransitionableState","transitionOut",0xa0288b8b,"flixel.addons.transition.FlxTransitionableState.transitionOut","flixel/addons/transition/FlxTransitionableState.hx",139,0x6a23403d)
HX_LOCAL_STACK_FRAME(_hx_pos_d118940668e85bda_164_get_hasTransIn,"flixel.addons.transition.FlxTransitionableState","get_hasTransIn",0xb80fac6a,"flixel.addons.transition.FlxTransitionableState.get_hasTransIn","flixel/addons/transition/FlxTransitionableState.hx",164,0x6a23403d)
HX_LOCAL_STACK_FRAME(_hx_pos_d118940668e85bda_169_get_hasTransOut,"flixel.addons.transition.FlxTransitionableState","get_hasTransOut",0x55abc469,"flixel.addons.transition.FlxTransitionableState.get_hasTransOut","flixel/addons/transition/FlxTransitionableState.hx",169,0x6a23403d)
HX_LOCAL_STACK_FRAME(_hx_pos_d118940668e85bda_174_createTransition,"flixel.addons.transition.FlxTransitionableState","createTransition",0x66287d5f,"flixel.addons.transition.FlxTransitionableState.createTransition","flixel/addons/transition/FlxTransitionableState.hx",174,0x6a23403d)
HX_LOCAL_STACK_FRAME(_hx_pos_d118940668e85bda_184_finishTransIn,"flixel.addons.transition.FlxTransitionableState","finishTransIn",0x6791efac,"flixel.addons.transition.FlxTransitionableState.finishTransIn","flixel/addons/transition/FlxTransitionableState.hx",184,0x6a23403d)
HX_LOCAL_STACK_FRAME(_hx_pos_d118940668e85bda_188_finishTransOut,"flixel.addons.transition.FlxTransitionableState","finishTransOut",0x38245ae7,"flixel.addons.transition.FlxTransitionableState.finishTransOut","flixel/addons/transition/FlxTransitionableState.hx",188,0x6a23403d)
HX_LOCAL_STACK_FRAME(_hx_pos_d118940668e85bda_33_boot,"flixel.addons.transition.FlxTransitionableState","boot",0x26eba8e0,"flixel.addons.transition.FlxTransitionableState.boot","flixel/addons/transition/FlxTransitionableState.hx",33,0x6a23403d)
HX_LOCAL_STACK_FRAME(_hx_pos_d118940668e85bda_34_boot,"flixel.addons.transition.FlxTransitionableState","boot",0x26eba8e0,"flixel.addons.transition.FlxTransitionableState.boot","flixel/addons/transition/FlxTransitionableState.hx",34,0x6a23403d)
HX_LOCAL_STACK_FRAME(_hx_pos_d118940668e85bda_36_boot,"flixel.addons.transition.FlxTransitionableState","boot",0x26eba8e0,"flixel.addons.transition.FlxTransitionableState.boot","flixel/addons/transition/FlxTransitionableState.hx",36,0x6a23403d)
HX_LOCAL_STACK_FRAME(_hx_pos_d118940668e85bda_37_boot,"flixel.addons.transition.FlxTransitionableState","boot",0x26eba8e0,"flixel.addons.transition.FlxTransitionableState.boot","flixel/addons/transition/FlxTransitionableState.hx",37,0x6a23403d)
namespace flixel{
namespace addons{
namespace transition{

void FlxTransitionableState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_d118940668e85bda_30_new)
HXLINE( 159)		this->_exiting = false;
HXLINE( 157)		this->transOutFinished = false;
HXLINE(  53)		this->transIn = TransIn;
HXLINE(  54)		this->transOut = TransOut;
HXLINE(  56)		bool _hx_tmp;
HXDLIN(  56)		if (::hx::IsNull( this->transIn )) {
HXLINE(  56)			_hx_tmp = ::hx::IsNotNull( ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransIn );
            		}
            		else {
HXLINE(  56)			_hx_tmp = false;
            		}
HXDLIN(  56)		if (_hx_tmp) {
HXLINE(  58)			this->transIn = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransIn;
            		}
HXLINE(  60)		bool _hx_tmp1;
HXDLIN(  60)		if (::hx::IsNull( this->transOut )) {
HXLINE(  60)			_hx_tmp1 = ::hx::IsNotNull( ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransOut );
            		}
            		else {
HXLINE(  60)			_hx_tmp1 = false;
            		}
HXDLIN(  60)		if (_hx_tmp1) {
HXLINE(  62)			this->transOut = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransOut;
            		}
HXLINE(  64)		super::__construct(null());
            	}

Dynamic FlxTransitionableState_obj::__CreateEmpty() { return new FlxTransitionableState_obj; }

void *FlxTransitionableState_obj::_hx_vtable = 0;

Dynamic FlxTransitionableState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTransitionableState_obj > _hx_result = new FlxTransitionableState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxTransitionableState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2f064378) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2f064378;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void FlxTransitionableState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_d118940668e85bda_68_destroy)
HXLINE(  69)		this->super::destroy();
HXLINE(  70)		this->transIn = null();
HXLINE(  71)		this->transOut = null();
HXLINE(  72)		this->_onExit = null();
            	}


void FlxTransitionableState_obj::create(){
            	HX_STACKFRAME(&_hx_pos_d118940668e85bda_76_create)
HXLINE(  77)		this->super::create();
HXLINE(  78)		this->transitionIn();
            	}


bool FlxTransitionableState_obj::switchTo( ::flixel::FlxState nextState){
            	HX_STACKFRAME(&_hx_pos_d118940668e85bda_82_switchTo)
HXLINE(  83)		if (!(this->get_hasTransOut())) {
HXLINE(  84)			return true;
            		}
HXLINE(  86)		if (!(this->_exiting)) {
HXLINE(  87)			this->transitionToState(nextState);
            		}
HXLINE(  89)		return this->transOutFinished;
            	}


void FlxTransitionableState_obj::transitionToState( ::flixel::FlxState nextState){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxState,nextState) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_d118940668e85bda_98_transitionToState)
HXLINE(  98)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  98)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_d118940668e85bda_93_transitionToState)
HXLINE(  95)		this->_exiting = true;
HXLINE(  96)		this->transitionOut( ::Dynamic(new _hx_Closure_0(nextState)));
HXLINE( 101)		if (::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut) {
HXLINE( 103)			::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut = false;
HXLINE( 104)			this->finishTransOut();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTransitionableState_obj,transitionToState,(void))

void FlxTransitionableState_obj::transitionIn(){
            	HX_STACKFRAME(&_hx_pos_d118940668e85bda_113_transitionIn)
HXDLIN( 113)		bool _hx_tmp;
HXDLIN( 113)		if (::hx::IsNotNull( this->transIn )) {
HXDLIN( 113)			_hx_tmp = (this->transIn->type != HX_("none",b8,12,0a,49));
            		}
            		else {
HXDLIN( 113)			_hx_tmp = false;
            		}
HXDLIN( 113)		if (_hx_tmp) {
HXLINE( 115)			if (::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn) {
HXLINE( 117)				::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn = false;
HXLINE( 118)				if (::hx::IsNotNull( this->finishTransIn_dyn() )) {
HXLINE( 120)					this->finishTransIn();
            				}
HXLINE( 122)				return;
            			}
HXLINE( 125)			 ::flixel::addons::transition::Transition _trans = this->createTransition(this->transIn);
HXLINE( 127)			_trans->setStatus(3);
HXLINE( 128)			this->openSubState(_trans);
HXLINE( 130)			_trans->set_finishCallback(this->finishTransIn_dyn());
HXLINE( 131)			_trans->start(1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTransitionableState_obj,transitionIn,(void))

void FlxTransitionableState_obj::transitionOut( ::Dynamic OnExit){
            	HX_STACKFRAME(&_hx_pos_d118940668e85bda_139_transitionOut)
HXLINE( 140)		this->_onExit = OnExit;
HXLINE( 141)		if (this->get_hasTransOut()) {
HXLINE( 143)			 ::flixel::addons::transition::Transition _trans = this->createTransition(this->transOut);
HXLINE( 145)			_trans->setStatus(2);
HXLINE( 146)			this->openSubState(_trans);
HXLINE( 148)			_trans->set_finishCallback(this->finishTransOut_dyn());
HXLINE( 149)			_trans->start(0);
            		}
            		else {
HXLINE( 153)			this->_onExit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTransitionableState_obj,transitionOut,(void))

bool FlxTransitionableState_obj::get_hasTransIn(){
            	HX_STACKFRAME(&_hx_pos_d118940668e85bda_164_get_hasTransIn)
HXDLIN( 164)		if (::hx::IsNotNull( this->transIn )) {
HXDLIN( 164)			return (this->transIn->type != HX_("none",b8,12,0a,49));
            		}
            		else {
HXDLIN( 164)			return false;
            		}
HXDLIN( 164)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTransitionableState_obj,get_hasTransIn,return )

bool FlxTransitionableState_obj::get_hasTransOut(){
            	HX_STACKFRAME(&_hx_pos_d118940668e85bda_169_get_hasTransOut)
HXDLIN( 169)		if (::hx::IsNotNull( this->transOut )) {
HXDLIN( 169)			return (this->transOut->type != HX_("none",b8,12,0a,49));
            		}
            		else {
HXDLIN( 169)			return false;
            		}
HXDLIN( 169)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTransitionableState_obj,get_hasTransOut,return )

 ::flixel::addons::transition::Transition FlxTransitionableState_obj::createTransition( ::flixel::addons::transition::TransitionData data){
            	HX_GC_STACKFRAME(&_hx_pos_d118940668e85bda_174_createTransition)
HXDLIN( 174)		::String _hx_switch_0 = data->type;
            		if (  (_hx_switch_0==HX_("fade",7c,b5,b5,43)) ){
HXLINE( 177)			return  ::flixel::addons::transition::Transition_obj::__alloc( HX_CTX ,data);
HXDLIN( 177)			goto _hx_goto_10;
            		}
            		if (  (_hx_switch_0==HX_("tiles",85,fd,34,10)) ){
HXLINE( 176)			return  ::flixel::addons::transition::Transition_obj::__alloc( HX_CTX ,data);
HXDLIN( 176)			goto _hx_goto_10;
            		}
            		/* default */{
HXLINE( 178)			return null();
            		}
            		_hx_goto_10:;
HXLINE( 174)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTransitionableState_obj,createTransition,return )

void FlxTransitionableState_obj::finishTransIn(){
            	HX_STACKFRAME(&_hx_pos_d118940668e85bda_184_finishTransIn)
HXDLIN( 184)		this->closeSubState();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTransitionableState_obj,finishTransIn,(void))

void FlxTransitionableState_obj::finishTransOut(){
            	HX_STACKFRAME(&_hx_pos_d118940668e85bda_188_finishTransOut)
HXLINE( 189)		this->transOutFinished = true;
HXLINE( 191)		if (!(this->_exiting)) {
HXLINE( 193)			this->closeSubState();
            		}
HXLINE( 196)		if (::hx::IsNotNull( this->_onExit )) {
HXLINE( 198)			this->_onExit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTransitionableState_obj,finishTransOut,(void))

 ::flixel::addons::transition::TransitionData FlxTransitionableState_obj::defaultTransIn;

 ::flixel::addons::transition::TransitionData FlxTransitionableState_obj::defaultTransOut;

bool FlxTransitionableState_obj::skipNextTransIn;

bool FlxTransitionableState_obj::skipNextTransOut;


::hx::ObjectPtr< FlxTransitionableState_obj > FlxTransitionableState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< FlxTransitionableState_obj > __this = new FlxTransitionableState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< FlxTransitionableState_obj > FlxTransitionableState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	FlxTransitionableState_obj *__this = (FlxTransitionableState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTransitionableState_obj), true, "flixel.addons.transition.FlxTransitionableState"));
	*(void **)__this = FlxTransitionableState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

FlxTransitionableState_obj::FlxTransitionableState_obj()
{
}

void FlxTransitionableState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTransitionableState);
	HX_MARK_MEMBER_NAME(transIn,"transIn");
	HX_MARK_MEMBER_NAME(transOut,"transOut");
	HX_MARK_MEMBER_NAME(transOutFinished,"transOutFinished");
	HX_MARK_MEMBER_NAME(_exiting,"_exiting");
	HX_MARK_MEMBER_NAME(_onExit,"_onExit");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTransitionableState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(transIn,"transIn");
	HX_VISIT_MEMBER_NAME(transOut,"transOut");
	HX_VISIT_MEMBER_NAME(transOutFinished,"transOutFinished");
	HX_VISIT_MEMBER_NAME(_exiting,"_exiting");
	HX_VISIT_MEMBER_NAME(_onExit,"_onExit");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTransitionableState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"transIn") ) { return ::hx::Val( transIn ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onExit") ) { return ::hx::Val( _onExit ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"transOut") ) { return ::hx::Val( transOut ); }
		if (HX_FIELD_EQ(inName,"switchTo") ) { return ::hx::Val( switchTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"_exiting") ) { return ::hx::Val( _exiting ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hasTransIn") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hasTransIn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasTransOut") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hasTransOut() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"transitionIn") ) { return ::hx::Val( transitionIn_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitionOut") ) { return ::hx::Val( transitionOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"finishTransIn") ) { return ::hx::Val( finishTransIn_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_hasTransIn") ) { return ::hx::Val( get_hasTransIn_dyn() ); }
		if (HX_FIELD_EQ(inName,"finishTransOut") ) { return ::hx::Val( finishTransOut_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_hasTransOut") ) { return ::hx::Val( get_hasTransOut_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transOutFinished") ) { return ::hx::Val( transOutFinished ); }
		if (HX_FIELD_EQ(inName,"createTransition") ) { return ::hx::Val( createTransition_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"transitionToState") ) { return ::hx::Val( transitionToState_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTransitionableState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"defaultTransIn") ) { outValue = ( defaultTransIn ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultTransOut") ) { outValue = ( defaultTransOut ); return true; }
		if (HX_FIELD_EQ(inName,"skipNextTransIn") ) { outValue = ( skipNextTransIn ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipNextTransOut") ) { outValue = ( skipNextTransOut ); return true; }
	}
	return false;
}

::hx::Val FlxTransitionableState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"transIn") ) { transIn=inValue.Cast<  ::flixel::addons::transition::TransitionData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onExit") ) { _onExit=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"transOut") ) { transOut=inValue.Cast<  ::flixel::addons::transition::TransitionData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_exiting") ) { _exiting=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transOutFinished") ) { transOutFinished=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTransitionableState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"defaultTransIn") ) { defaultTransIn=ioValue.Cast<  ::flixel::addons::transition::TransitionData >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultTransOut") ) { defaultTransOut=ioValue.Cast<  ::flixel::addons::transition::TransitionData >(); return true; }
		if (HX_FIELD_EQ(inName,"skipNextTransIn") ) { skipNextTransIn=ioValue.Cast< bool >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipNextTransOut") ) { skipNextTransOut=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void FlxTransitionableState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("transIn",2d,32,54,8f));
	outFields->push(HX_("transOut",46,49,5c,da));
	outFields->push(HX_("hasTransIn",f3,19,08,1a));
	outFields->push(HX_("hasTransOut",c0,2e,13,ad));
	outFields->push(HX_("transOutFinished",d8,4e,10,8a));
	outFields->push(HX_("_exiting",05,36,93,5e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTransitionableState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::addons::transition::TransitionData */ ,(int)offsetof(FlxTransitionableState_obj,transIn),HX_("transIn",2d,32,54,8f)},
	{::hx::fsObject /*  ::flixel::addons::transition::TransitionData */ ,(int)offsetof(FlxTransitionableState_obj,transOut),HX_("transOut",46,49,5c,da)},
	{::hx::fsBool,(int)offsetof(FlxTransitionableState_obj,transOutFinished),HX_("transOutFinished",d8,4e,10,8a)},
	{::hx::fsBool,(int)offsetof(FlxTransitionableState_obj,_exiting),HX_("_exiting",05,36,93,5e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTransitionableState_obj,_onExit),HX_("_onExit",7c,11,1f,54)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxTransitionableState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::addons::transition::TransitionData */ ,(void *) &FlxTransitionableState_obj::defaultTransIn,HX_("defaultTransIn",6c,8b,94,be)},
	{::hx::fsObject /*  ::flixel::addons::transition::TransitionData */ ,(void *) &FlxTransitionableState_obj::defaultTransOut,HX_("defaultTransOut",27,07,6a,03)},
	{::hx::fsBool,(void *) &FlxTransitionableState_obj::skipNextTransIn,HX_("skipNextTransIn",3b,4d,fe,f4)},
	{::hx::fsBool,(void *) &FlxTransitionableState_obj::skipNextTransOut,HX_("skipNextTransOut",78,da,89,69)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxTransitionableState_obj_sMemberFields[] = {
	HX_("transIn",2d,32,54,8f),
	HX_("transOut",46,49,5c,da),
	HX_("destroy",fa,2c,86,24),
	HX_("create",fc,66,0f,7c),
	HX_("switchTo",8f,f8,d6,0d),
	HX_("transitionToState",81,69,49,dc),
	HX_("transitionIn",da,1c,de,8d),
	HX_("transitionOut",f9,b5,7f,94),
	HX_("transOutFinished",d8,4e,10,8a),
	HX_("_exiting",05,36,93,5e),
	HX_("_onExit",7c,11,1f,54),
	HX_("get_hasTransIn",3c,a2,fd,8f),
	HX_("get_hasTransOut",57,e6,f4,6d),
	HX_("createTransition",b1,0b,dd,8d),
	HX_("finishTransIn",1a,1a,e9,5b),
	HX_("finishTransOut",b9,50,12,10),
	::String(null()) };

static void FlxTransitionableState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTransitionableState_obj::defaultTransIn,"defaultTransIn");
	HX_MARK_MEMBER_NAME(FlxTransitionableState_obj::defaultTransOut,"defaultTransOut");
	HX_MARK_MEMBER_NAME(FlxTransitionableState_obj::skipNextTransIn,"skipNextTransIn");
	HX_MARK_MEMBER_NAME(FlxTransitionableState_obj::skipNextTransOut,"skipNextTransOut");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxTransitionableState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTransitionableState_obj::defaultTransIn,"defaultTransIn");
	HX_VISIT_MEMBER_NAME(FlxTransitionableState_obj::defaultTransOut,"defaultTransOut");
	HX_VISIT_MEMBER_NAME(FlxTransitionableState_obj::skipNextTransIn,"skipNextTransIn");
	HX_VISIT_MEMBER_NAME(FlxTransitionableState_obj::skipNextTransOut,"skipNextTransOut");
};

#endif

::hx::Class FlxTransitionableState_obj::__mClass;

static ::String FlxTransitionableState_obj_sStaticFields[] = {
	HX_("defaultTransIn",6c,8b,94,be),
	HX_("defaultTransOut",27,07,6a,03),
	HX_("skipNextTransIn",3b,4d,fe,f4),
	HX_("skipNextTransOut",78,da,89,69),
	::String(null())
};

void FlxTransitionableState_obj::__register()
{
	FlxTransitionableState_obj _hx_dummy;
	FlxTransitionableState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.transition.FlxTransitionableState",80,7a,12,ad);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTransitionableState_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxTransitionableState_obj::__SetStatic;
	__mClass->mMarkFunc = FlxTransitionableState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxTransitionableState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTransitionableState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTransitionableState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxTransitionableState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTransitionableState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTransitionableState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxTransitionableState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d118940668e85bda_33_boot)
HXDLIN(  33)		defaultTransIn = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_d118940668e85bda_34_boot)
HXDLIN(  34)		defaultTransOut = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_d118940668e85bda_36_boot)
HXDLIN(  36)		skipNextTransIn = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d118940668e85bda_37_boot)
HXDLIN(  37)		skipNextTransOut = false;
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace transition
