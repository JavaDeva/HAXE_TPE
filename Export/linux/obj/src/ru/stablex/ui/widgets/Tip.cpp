// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_ru_stablex_TweenSprite
#include <ru/stablex/TweenSprite.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_UIBuilder
#include <ru/stablex/ui/UIBuilder.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_events_WidgetEvent
#include <ru/stablex/ui/events/WidgetEvent.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Box
#include <ru/stablex/ui/widgets/Box.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Floating
#include <ru/stablex/ui/widgets/Floating.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Text
#include <ru/stablex/ui/widgets/Text.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Tip
#include <ru/stablex/ui/widgets/Tip.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Widget
#include <ru/stablex/ui/widgets/Widget.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b67f5ac65ea62b0a_28_new,"ru.stablex.ui.widgets.Tip","new",0x2caab790,"ru.stablex.ui.widgets.Tip.new","ru/stablex/ui/widgets/Tip.hx",28,0x1937d520)
HX_LOCAL_STACK_FRAME(_hx_pos_b67f5ac65ea62b0a_46_get_text,"ru.stablex.ui.widgets.Tip","get_text",0xca199306,"ru.stablex.ui.widgets.Tip.get_text","ru/stablex/ui/widgets/Tip.hx",46,0x1937d520)
HX_LOCAL_STACK_FRAME(_hx_pos_b67f5ac65ea62b0a_55_set_text,"ru.stablex.ui.widgets.Tip","set_text",0x7876ec7a,"ru.stablex.ui.widgets.Tip.set_text","ru/stablex/ui/widgets/Tip.hx",55,0x1937d520)
HX_LOCAL_STACK_FRAME(_hx_pos_b67f5ac65ea62b0a_63_bindTo,"ru.stablex.ui.widgets.Tip","bindTo",0x6a7b9f68,"ru.stablex.ui.widgets.Tip.bindTo","ru/stablex/ui/widgets/Tip.hx",63,0x1937d520)
HX_LOCAL_STACK_FRAME(_hx_pos_b67f5ac65ea62b0a_78_showTooltip,"ru.stablex.ui.widgets.Tip","showTooltip",0x1c81e0b6,"ru.stablex.ui.widgets.Tip.showTooltip","ru/stablex/ui/widgets/Tip.hx",78,0x1937d520)
HX_LOCAL_STACK_FRAME(_hx_pos_b67f5ac65ea62b0a_98_moveTooltip,"ru.stablex.ui.widgets.Tip","moveTooltip",0x18627d22,"ru.stablex.ui.widgets.Tip.moveTooltip","ru/stablex/ui/widgets/Tip.hx",98,0x1937d520)
HX_LOCAL_STACK_FRAME(_hx_pos_b67f5ac65ea62b0a_106_hideTooltip,"ru.stablex.ui.widgets.Tip","hideTooltip",0x3d523391,"ru.stablex.ui.widgets.Tip.hideTooltip","ru/stablex/ui/widgets/Tip.hx",106,0x1937d520)
HX_LOCAL_STACK_FRAME(_hx_pos_b67f5ac65ea62b0a_117__adjustPosition,"ru.stablex.ui.widgets.Tip","_adjustPosition",0x21590827,"ru.stablex.ui.widgets.Tip._adjustPosition","ru/stablex/ui/widgets/Tip.hx",117,0x1937d520)
HX_LOCAL_STACK_FRAME(_hx_pos_b67f5ac65ea62b0a_136_freeTooltip,"ru.stablex.ui.widgets.Tip","freeTooltip",0xd124fce7,"ru.stablex.ui.widgets.Tip.freeTooltip","ru/stablex/ui/widgets/Tip.hx",136,0x1937d520)
HX_LOCAL_STACK_FRAME(_hx_pos_b67f5ac65ea62b0a_145__removeTargetListeners,"ru.stablex.ui.widgets.Tip","_removeTargetListeners",0x4d0da81b,"ru.stablex.ui.widgets.Tip._removeTargetListeners","ru/stablex/ui/widgets/Tip.hx",145,0x1937d520)
HX_LOCAL_STACK_FRAME(_hx_pos_b67f5ac65ea62b0a_157_free,"ru.stablex.ui.widgets.Tip","free",0xe375ff7c,"ru.stablex.ui.widgets.Tip.free","ru/stablex/ui/widgets/Tip.hx",157,0x1937d520)
HX_LOCAL_STACK_FRAME(_hx_pos_b67f5ac65ea62b0a_169_refresh,"ru.stablex.ui.widgets.Tip","refresh",0x2fb3190b,"ru.stablex.ui.widgets.Tip.refresh","ru/stablex/ui/widgets/Tip.hx",169,0x1937d520)
namespace ru{
namespace stablex{
namespace ui{
namespace widgets{

void Tip_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b67f5ac65ea62b0a_28_new)
HXLINE(  29)		super::__construct();
HXLINE(  32)		this->label = ( ( ::ru::stablex::ui::widgets::Text)(::ru::stablex::ui::UIBuilder_obj::create(::hx::ClassOf< ::ru::stablex::ui::widgets::Text >(),null(),null())) );
HXLINE(  33)		this->addChild(this->label);
HXLINE(  36)		this->mouseEnabled = false;
HXLINE(  37)		this->mouseChildren = false;
            	}

Dynamic Tip_obj::__CreateEmpty() { return new Tip_obj; }

void *Tip_obj::_hx_vtable = 0;

Dynamic Tip_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tip_obj > _hx_result = new Tip_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tip_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x1210c5aa) {
			if (inClassId<=(int)0x0c89e854) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x0c89e854;
				}
			} else {
				return inClassId==(int)0x1210c5aa;
			}
		} else {
			return inClassId==(int)0x121e68fa || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x292acd8f) {
			if (inClassId<=(int)0x270e5222) {
				return inClassId==(int)0x2383f585 || inClassId==(int)0x270e5222;
			} else {
				return inClassId==(int)0x292acd8f;
			}
		} else {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
		}
	}
}

::String Tip_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_b67f5ac65ea62b0a_46_get_text)
HXDLIN(  46)		return this->label->get_text();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tip_obj,get_text,return )

::String Tip_obj::set_text(::String s){
            	HX_STACKFRAME(&_hx_pos_b67f5ac65ea62b0a_55_set_text)
HXDLIN(  55)		return this->label->set_text(s);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tip_obj,set_text,return )

void Tip_obj::bindTo( ::ru::stablex::ui::widgets::Widget w){
            	HX_STACKFRAME(&_hx_pos_b67f5ac65ea62b0a_63_bindTo)
HXLINE(  65)		this->_removeTargetListeners();
HXLINE(  67)		this->target = w;
HXLINE(  69)		this->target->addUniqueListener(HX_("mouseOver",19,4a,0d,f6),this->showTooltip_dyn(),null(),null(),null());
HXLINE(  70)		this->target->addUniqueListener(HX_("widgetFree",90,aa,9b,55),this->freeTooltip_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tip_obj,bindTo,(void))

void Tip_obj::showTooltip( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_b67f5ac65ea62b0a_78_showTooltip)
HXLINE(  79)		this->target->addUniqueListener(HX_("mouseOut",69,e7,1d,a4),this->hideTooltip_dyn(),null(),null(),null());
HXLINE(  80)		::openfl::Lib_obj::get_current()->stage->removeEventListener(HX_("mouseMove",d6,9b,b5,f4),this->moveTooltip_dyn(),null());
HXLINE(  81)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("mouseMove",d6,9b,b5,f4),this->moveTooltip_dyn(),null(),null(),null());
HXLINE(  84)		this->renderTo = null();
HXLINE(  86)		this->refresh();
HXLINE(  87)		{
HXLINE(  87)			Float _hx_tmp;
HXDLIN(  87)			Float _hx_tmp1 = (::openfl::Lib_obj::get_current()->get_mouseX() + 10);
HXDLIN(  87)			Float _hx_tmp2 = (_hx_tmp1 + this->get_w());
HXDLIN(  87)			if ((_hx_tmp2 <= ::openfl::Lib_obj::get_current()->stage->stageWidth)) {
HXLINE(  87)				_hx_tmp = (::openfl::Lib_obj::get_current()->get_mouseX() + 10);
            			}
            			else {
HXLINE(  87)				int _hx_tmp1 = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXDLIN(  87)				_hx_tmp = (( (Float)(_hx_tmp1) ) - this->get_w());
            			}
HXDLIN(  87)			this->set_left(_hx_tmp);
HXDLIN(  87)			Float _hx_tmp3;
HXDLIN(  87)			Float _hx_tmp4 = (::openfl::Lib_obj::get_current()->get_mouseY() + 10);
HXDLIN(  87)			Float _hx_tmp5 = (_hx_tmp4 + this->get_h());
HXDLIN(  87)			if ((_hx_tmp5 <= ::openfl::Lib_obj::get_current()->stage->stageHeight)) {
HXLINE(  87)				_hx_tmp3 = (::openfl::Lib_obj::get_current()->get_mouseY() + 10);
            			}
            			else {
HXLINE(  87)				Float _hx_tmp = (::openfl::Lib_obj::get_current()->get_mouseY() - ( (Float)(10) ));
HXDLIN(  87)				_hx_tmp3 = (_hx_tmp - this->get_h());
            			}
HXDLIN(  87)			this->set_top(_hx_tmp3);
            		}
HXLINE(  89)		this->show();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tip_obj,showTooltip,(void))

void Tip_obj::moveTooltip( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_b67f5ac65ea62b0a_98_moveTooltip)
HXDLIN(  98)		Float _hx_tmp;
HXDLIN(  98)		Float _hx_tmp1 = (::openfl::Lib_obj::get_current()->get_mouseX() + 10);
HXDLIN(  98)		Float _hx_tmp2 = (_hx_tmp1 + this->get_w());
HXDLIN(  98)		if ((_hx_tmp2 <= ::openfl::Lib_obj::get_current()->stage->stageWidth)) {
HXDLIN(  98)			_hx_tmp = (::openfl::Lib_obj::get_current()->get_mouseX() + 10);
            		}
            		else {
HXDLIN(  98)			int _hx_tmp1 = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXDLIN(  98)			_hx_tmp = (( (Float)(_hx_tmp1) ) - this->get_w());
            		}
HXDLIN(  98)		this->set_left(_hx_tmp);
HXDLIN(  98)		Float _hx_tmp3;
HXDLIN(  98)		Float _hx_tmp4 = (::openfl::Lib_obj::get_current()->get_mouseY() + 10);
HXDLIN(  98)		Float _hx_tmp5 = (_hx_tmp4 + this->get_h());
HXDLIN(  98)		if ((_hx_tmp5 <= ::openfl::Lib_obj::get_current()->stage->stageHeight)) {
HXDLIN(  98)			_hx_tmp3 = (::openfl::Lib_obj::get_current()->get_mouseY() + 10);
            		}
            		else {
HXDLIN(  98)			Float _hx_tmp = (::openfl::Lib_obj::get_current()->get_mouseY() - ( (Float)(10) ));
HXDLIN(  98)			_hx_tmp3 = (_hx_tmp - this->get_h());
            		}
HXDLIN(  98)		this->set_top(_hx_tmp3);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tip_obj,moveTooltip,(void))

void Tip_obj::hideTooltip( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_b67f5ac65ea62b0a_106_hideTooltip)
HXLINE( 107)		this->target->removeEventListener(HX_("mouseOut",69,e7,1d,a4),this->hideTooltip_dyn(),null());
HXLINE( 108)		::openfl::Lib_obj::get_current()->stage->removeEventListener(HX_("mouseMove",d6,9b,b5,f4),this->moveTooltip_dyn(),null());
HXLINE( 109)		this->hide();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tip_obj,hideTooltip,(void))

void Tip_obj::_adjustPosition(){
            	HX_STACKFRAME(&_hx_pos_b67f5ac65ea62b0a_117__adjustPosition)
HXLINE( 118)		Float _hx_tmp;
HXLINE( 119)		Float _hx_tmp1 = (::openfl::Lib_obj::get_current()->get_mouseX() + 10);
HXDLIN( 119)		Float _hx_tmp2 = (_hx_tmp1 + this->get_w());
HXLINE( 118)		if ((_hx_tmp2 <= ::openfl::Lib_obj::get_current()->stage->stageWidth)) {
HXLINE( 118)			_hx_tmp = (::openfl::Lib_obj::get_current()->get_mouseX() + 10);
            		}
            		else {
HXLINE( 121)			int _hx_tmp1 = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXLINE( 118)			_hx_tmp = (( (Float)(_hx_tmp1) ) - this->get_w());
            		}
HXDLIN( 118)		this->set_left(_hx_tmp);
HXLINE( 123)		Float _hx_tmp3;
HXLINE( 124)		Float _hx_tmp4 = (::openfl::Lib_obj::get_current()->get_mouseY() + 10);
HXDLIN( 124)		Float _hx_tmp5 = (_hx_tmp4 + this->get_h());
HXLINE( 123)		if ((_hx_tmp5 <= ::openfl::Lib_obj::get_current()->stage->stageHeight)) {
HXLINE( 123)			_hx_tmp3 = (::openfl::Lib_obj::get_current()->get_mouseY() + 10);
            		}
            		else {
HXLINE( 126)			Float _hx_tmp = (::openfl::Lib_obj::get_current()->get_mouseY() - ( (Float)(10) ));
HXLINE( 123)			_hx_tmp3 = (_hx_tmp - this->get_h());
            		}
HXDLIN( 123)		this->set_top(_hx_tmp3);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tip_obj,_adjustPosition,(void))

void Tip_obj::freeTooltip( ::ru::stablex::ui::events::WidgetEvent e){
            	HX_STACKFRAME(&_hx_pos_b67f5ac65ea62b0a_136_freeTooltip)
HXDLIN( 136)		this->free(true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tip_obj,freeTooltip,(void))

void Tip_obj::_removeTargetListeners(){
            	HX_STACKFRAME(&_hx_pos_b67f5ac65ea62b0a_145__removeTargetListeners)
HXDLIN( 145)		if (::hx::IsNotNull( this->target )) {
HXLINE( 146)			this->target->removeEventListener(HX_("mouseOut",69,e7,1d,a4),this->hideTooltip_dyn(),null());
HXLINE( 147)			this->target->removeEventListener(HX_("mouseOver",19,4a,0d,f6),this->showTooltip_dyn(),null());
HXLINE( 148)			this->target->removeEventListener(HX_("widgetFree",90,aa,9b,55),this->freeTooltip_dyn(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tip_obj,_removeTargetListeners,(void))

void Tip_obj::free(::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(true);
            	HX_STACKFRAME(&_hx_pos_b67f5ac65ea62b0a_157_free)
HXLINE( 158)		this->_removeTargetListeners();
HXLINE( 159)		::openfl::Lib_obj::get_current()->stage->removeEventListener(HX_("mouseMove",d6,9b,b5,f4),this->moveTooltip_dyn(),null());
HXLINE( 161)		this->super::free(recursive);
            	}


void Tip_obj::refresh(){
            	HX_STACKFRAME(&_hx_pos_b67f5ac65ea62b0a_169_refresh)
HXLINE( 170)		this->label->refresh();
HXLINE( 171)		this->super::refresh();
            	}



::hx::ObjectPtr< Tip_obj > Tip_obj::__new() {
	::hx::ObjectPtr< Tip_obj > __this = new Tip_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Tip_obj > Tip_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Tip_obj *__this = (Tip_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tip_obj), true, "ru.stablex.ui.widgets.Tip"));
	*(void **)__this = Tip_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Tip_obj::Tip_obj()
{
}

void Tip_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tip);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(label,"label");
	 ::ru::stablex::ui::widgets::Floating_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tip_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(label,"label");
	 ::ru::stablex::ui::widgets::Floating_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Tip_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_text() ); }
		if (HX_FIELD_EQ(inName,"free") ) { return ::hx::Val( free_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return ::hx::Val( label ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"bindTo") ) { return ::hx::Val( bindTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return ::hx::Val( refresh_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return ::hx::Val( get_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"showTooltip") ) { return ::hx::Val( showTooltip_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveTooltip") ) { return ::hx::Val( moveTooltip_dyn() ); }
		if (HX_FIELD_EQ(inName,"hideTooltip") ) { return ::hx::Val( hideTooltip_dyn() ); }
		if (HX_FIELD_EQ(inName,"freeTooltip") ) { return ::hx::Val( freeTooltip_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_adjustPosition") ) { return ::hx::Val( _adjustPosition_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_removeTargetListeners") ) { return ::hx::Val( _removeTargetListeners_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Tip_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast<  ::ru::stablex::ui::widgets::Text >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::ru::stablex::ui::widgets::Widget >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tip_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("label",f4,0d,af,6f));
	outFields->push(HX_("text",ad,cc,f9,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Tip_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::ru::stablex::ui::widgets::Widget */ ,(int)offsetof(Tip_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsObject /*  ::ru::stablex::ui::widgets::Text */ ,(int)offsetof(Tip_obj,label),HX_("label",f4,0d,af,6f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Tip_obj_sStaticStorageInfo = 0;
#endif

static ::String Tip_obj_sMemberFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("label",f4,0d,af,6f),
	HX_("get_text",36,88,b4,cc),
	HX_("set_text",aa,e1,11,7b),
	HX_("bindTo",98,e8,0d,ed),
	HX_("showTooltip",86,49,28,47),
	HX_("moveTooltip",f2,e5,08,43),
	HX_("hideTooltip",61,9c,f8,67),
	HX_("_adjustPosition",f7,18,ac,06),
	HX_("freeTooltip",b7,65,cb,fb),
	HX_("_removeTargetListeners",4b,51,39,a8),
	HX_("free",ac,9c,c2,43),
	HX_("refresh",db,d9,20,ed),
	::String(null()) };

::hx::Class Tip_obj::__mClass;

void Tip_obj::__register()
{
	Tip_obj _hx_dummy;
	Tip_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ru.stablex.ui.widgets.Tip",9e,ef,7b,f6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Tip_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Tip_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tip_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tip_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace ru
} // end namespace stablex
} // end namespace ui
} // end namespace widgets
