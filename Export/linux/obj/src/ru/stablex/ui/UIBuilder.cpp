// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListNode
#include <haxe/ds/_List/ListNode.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_ru_stablex_TweenSprite
#include <ru/stablex/TweenSprite.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_UIBuilder
#include <ru/stablex/ui/UIBuilder.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_skins_Skin
#include <ru/stablex/ui/skins/Skin.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Widget
#include <ru/stablex/ui/widgets/Widget.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_105_pos,"ru.stablex.ui.UIBuilder","pos",0x9b2eab6f,"ru.stablex.ui.UIBuilder.pos","ru/stablex/ui/UIBuilder.hx",105,0xeeae4854)
HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_917_createId,"ru.stablex.ui.UIBuilder","createId",0xa96bf63c,"ru.stablex.ui.UIBuilder.createId","ru/stablex/ui/UIBuilder.hx",917,0xeeae4854)
HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_933_create,"ru.stablex.ui.UIBuilder","create",0xe505f401,"ru.stablex.ui.UIBuilder.create","ru/stablex/ui/UIBuilder.hx",933,0xeeae4854)
HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_993_apply,"ru.stablex.ui.UIBuilder","apply",0x22684009,"ru.stablex.ui.UIBuilder.apply","ru/stablex/ui/UIBuilder.hx",993,0xeeae4854)
HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_1012_applyDefaults,"ru.stablex.ui.UIBuilder","applyDefaults",0x18707dbb,"ru.stablex.ui.UIBuilder.applyDefaults","ru/stablex/ui/UIBuilder.hx",1012,0xeeae4854)
HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_1030_initCreatedWidget,"ru.stablex.ui.UIBuilder","initCreatedWidget",0x672459b7,"ru.stablex.ui.UIBuilder.initCreatedWidget","ru/stablex/ui/UIBuilder.hx",1030,0xeeae4854)
HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_1048_skin,"ru.stablex.ui.UIBuilder","skin",0x2f9fe842,"ru.stablex.ui.UIBuilder.skin","ru/stablex/ui/UIBuilder.hx",1048,0xeeae4854)
HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_1057_get,"ru.stablex.ui.UIBuilder","get",0x9b27ce71,"ru.stablex.ui.UIBuilder.get","ru/stablex/ui/UIBuilder.hx",1057,0xeeae4854)
HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_1065_getAs,"ru.stablex.ui.UIBuilder","getAs",0x8f8d45c3,"ru.stablex.ui.UIBuilder.getAs","ru/stablex/ui/UIBuilder.hx",1065,0xeeae4854)
HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_1076_save,"ru.stablex.ui.UIBuilder","save",0x2f985d02,"ru.stablex.ui.UIBuilder.save","ru/stablex/ui/UIBuilder.hx",1076,0xeeae4854)
HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_1089_forget,"ru.stablex.ui.UIBuilder","forget",0x66809232,"ru.stablex.ui.UIBuilder.forget","ru/stablex/ui/UIBuilder.hx",1089,0xeeae4854)
HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_1098_queueSkin,"ru.stablex.ui.UIBuilder","queueSkin",0x1a2b10c9,"ru.stablex.ui.UIBuilder.queueSkin","ru/stablex/ui/UIBuilder.hx",1098,0xeeae4854)
HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_1115_skinQueue,"ru.stablex.ui.UIBuilder","skinQueue",0xf05ce5ef,"ru.stablex.ui.UIBuilder.skinQueue","ru/stablex/ui/UIBuilder.hx",1115,0xeeae4854)
HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_1137___default_customStringReplace,"ru.stablex.ui.UIBuilder","__default_customStringReplace",0x13462baf,"ru.stablex.ui.UIBuilder.__default_customStringReplace","ru/stablex/ui/UIBuilder.hx",1137,0xeeae4854)
HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_1143_recurSet,"ru.stablex.ui.UIBuilder","recurSet",0x9cb6823a,"ru.stablex.ui.UIBuilder.recurSet","ru/stablex/ui/UIBuilder.hx",1143,0xeeae4854)
HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_75_boot,"ru.stablex.ui.UIBuilder","boot",0x246655f7,"ru.stablex.ui.UIBuilder.boot","ru/stablex/ui/UIBuilder.hx",75,0xeeae4854)
HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_78_boot,"ru.stablex.ui.UIBuilder","boot",0x246655f7,"ru.stablex.ui.UIBuilder.boot","ru/stablex/ui/UIBuilder.hx",78,0xeeae4854)
HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_81_boot,"ru.stablex.ui.UIBuilder","boot",0x246655f7,"ru.stablex.ui.UIBuilder.boot","ru/stablex/ui/UIBuilder.hx",81,0xeeae4854)
HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_84_boot,"ru.stablex.ui.UIBuilder","boot",0x246655f7,"ru.stablex.ui.UIBuilder.boot","ru/stablex/ui/UIBuilder.hx",84,0xeeae4854)
HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_87_boot,"ru.stablex.ui.UIBuilder","boot",0x246655f7,"ru.stablex.ui.UIBuilder.boot","ru/stablex/ui/UIBuilder.hx",87,0xeeae4854)
HX_LOCAL_STACK_FRAME(_hx_pos_9ffa3f1738be6922_90_boot,"ru.stablex.ui.UIBuilder","boot",0x246655f7,"ru.stablex.ui.UIBuilder.boot","ru/stablex/ui/UIBuilder.hx",90,0xeeae4854)
namespace ru{
namespace stablex{
namespace ui{

void UIBuilder_obj::__construct() { }

Dynamic UIBuilder_obj::__CreateEmpty() { return new UIBuilder_obj; }

void *UIBuilder_obj::_hx_vtable = 0;

Dynamic UIBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UIBuilder_obj > _hx_result = new UIBuilder_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool UIBuilder_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x29aa6559;
}

 ::haxe::ds::StringMap UIBuilder_obj::defaults;

 ::openfl::events::EventDispatcher UIBuilder_obj::dispatcher;

 ::haxe::ds::StringMap UIBuilder_obj::_objects;

 ::haxe::ds::StringMap UIBuilder_obj::skins;

int UIBuilder_obj::_nextId;

 ::haxe::ds::List UIBuilder_obj::_skinQueue;

::String UIBuilder_obj::pos( ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_9ffa3f1738be6922_105_pos)
HXDLIN( 105)		return ( (::String)(((pos->__Field(HX_("className",a3,92,3d,dc),::hx::paccDynamic) + HX_(":",3a,00,00,00)) + pos->__Field(HX_("lineNumber",dd,81,22,76),::hx::paccDynamic))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIBuilder_obj,pos,return )

::String UIBuilder_obj::createId(){
            	HX_STACKFRAME(&_hx_pos_9ffa3f1738be6922_917_createId)
HXDLIN( 917)		return (HX_("__widget__",04,ef,09,d5) + ::Std_obj::string(::ru::stablex::ui::UIBuilder_obj::_nextId++));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(UIBuilder_obj,createId,return )

 ::Dynamic UIBuilder_obj::create(::hx::Class cls, ::Dynamic properties,::cpp::VirtualArray constructorArguments){
            	HX_STACKFRAME(&_hx_pos_9ffa3f1738be6922_933_create)
HXLINE( 935)		::cpp::VirtualArray obj;
HXDLIN( 935)		if (::hx::IsNull( constructorArguments )) {
HXLINE( 935)			obj = ::cpp::VirtualArray_obj::__new(0);
            		}
            		else {
HXLINE( 935)			obj = constructorArguments;
            		}
HXDLIN( 935)		 ::ru::stablex::ui::widgets::Widget obj1 = ( ( ::ru::stablex::ui::widgets::Widget)(::Type_obj::createInstance(cls,obj)) );
HXLINE( 938)		obj1->defaults = ( (::String)(::Reflect_obj::field(properties,HX_("defaults",92,d0,99,af))) );
HXLINE( 939)		if (::hx::IsNull( obj1->defaults )) {
HXLINE( 939)			obj1->defaults = HX_("Default",a1,00,15,69);
            		}
HXLINE( 940)		{
HXLINE( 940)			 ::Dynamic _obj = obj1;
HXDLIN( 940)			if (::Std_obj::isOfType(_obj,( ( ::Dynamic)(::hx::ClassOf< ::ru::stablex::ui::widgets::Widget >()) ))) {
HXLINE( 940)				 ::ru::stablex::ui::widgets::Widget obj = ::hx::TCast<  ::ru::stablex::ui::widgets::Widget >::cast(_obj);
HXDLIN( 940)				::String clsName = ::Type_obj::getClassName(::Type_obj::getClass(obj));
HXDLIN( 940)				::Dynamic this1 = ::ru::stablex::ui::UIBuilder_obj::defaults;
HXDLIN( 940)				 ::haxe::ds::StringMap widgetDefaults = ( ( ::haxe::ds::StringMap)(( ( ::haxe::ds::StringMap)(this1) )->get(clsName.substr((clsName.lastIndexOf(HX_(".",2e,00,00,00),(clsName.length - 1)) + 1),null()))) );
HXDLIN( 940)				if (::hx::IsNotNull( widgetDefaults )) {
HXLINE( 940)					::Array< ::String > defs = obj->defaults.split(HX_(",",2c,00,00,00));
HXDLIN( 940)					{
HXLINE( 940)						int _g = 0;
HXDLIN( 940)						int _g1 = defs->length;
HXDLIN( 940)						while((_g < _g1)){
HXLINE( 940)							_g = (_g + 1);
HXDLIN( 940)							int i = (_g - 1);
HXDLIN( 940)							 ::Dynamic defaultsFn = widgetDefaults->get(::StringTools_obj::trim(defs->__get(i)));
HXDLIN( 940)							if (::hx::IsNotNull( defaultsFn )) {
HXLINE( 940)								defaultsFn(obj);
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 944)		::cpp::VirtualArray children = ( (::cpp::VirtualArray)(::Reflect_obj::field(properties,HX_("children",3f,19,6a,70))) );
HXLINE( 945)		if (::hx::IsNotNull( children )) {
HXLINE( 946)			::Reflect_obj::deleteField(properties,HX_("children",3f,19,6a,70));
            		}
HXLINE( 951)		if (::hx::IsNotNull( properties )) {
HXLINE( 952)			::ru::stablex::ui::UIBuilder_obj::apply(obj1,properties);
            		}
HXLINE( 955)		obj1->_onInitialize();
HXLINE( 958)		if (::hx::IsNotNull( children )) {
HXLINE( 959)			int _g = 0;
HXDLIN( 959)			int _g1 = children->get_length();
HXDLIN( 959)			while((_g < _g1)){
HXLINE( 959)				_g = (_g + 1);
HXDLIN( 959)				int i = (_g - 1);
HXLINE( 960)				if (::Std_obj::isOfType(children->__get(i),( ( ::Dynamic)(::hx::ClassOf< ::ru::stablex::ui::widgets::Widget >()) ))) {
HXLINE( 961)					obj1->addChild(( ( ::openfl::display::DisplayObject)(children->__get(i)) ));
            				}
            			}
            		}
HXLINE( 966)		obj1->_onCreate();
HXLINE( 968)		return obj1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(UIBuilder_obj,create,return )

void UIBuilder_obj::apply( ::Dynamic obj, ::Dynamic properties){
            	HX_STACKFRAME(&_hx_pos_9ffa3f1738be6922_993_apply)
HXDLIN( 993)		int _g = 0;
HXDLIN( 993)		::Array< ::String > _g1 = ::Reflect_obj::fields(properties);
HXDLIN( 993)		while((_g < _g1->length)){
HXDLIN( 993)			::String property = _g1->__get(_g);
HXDLIN( 993)			_g = (_g + 1);
HXLINE( 996)			if (::hx::IsEq( ::Type_obj::_hx_typeof(::Reflect_obj::field(properties,property)),::ValueType_obj::TObject_dyn() )) {
HXLINE( 997)				 ::Dynamic _hx_tmp = ::Reflect_obj::getProperty(obj,property);
HXDLIN( 997)				::ru::stablex::ui::UIBuilder_obj::apply(_hx_tmp,::Reflect_obj::field(properties,property));
            			}
            			else {
HXLINE(1001)				::Reflect_obj::setProperty(obj,property,::Reflect_obj::field(properties,property));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UIBuilder_obj,apply,(void))

void UIBuilder_obj::applyDefaults( ::Dynamic _obj){
            	HX_STACKFRAME(&_hx_pos_9ffa3f1738be6922_1012_applyDefaults)
HXLINE(1013)		if (!(::Std_obj::isOfType(_obj,( ( ::Dynamic)(::hx::ClassOf< ::ru::stablex::ui::widgets::Widget >()) )))) {
HXLINE(1013)			return;
            		}
HXLINE(1014)		 ::ru::stablex::ui::widgets::Widget obj = ::hx::TCast<  ::ru::stablex::ui::widgets::Widget >::cast(_obj);
HXLINE(1015)		::String clsName = ::Type_obj::getClassName(::Type_obj::getClass(obj));
HXLINE(1016)		::Dynamic this1 = ::ru::stablex::ui::UIBuilder_obj::defaults;
HXDLIN(1016)		 ::haxe::ds::StringMap widgetDefaults = ( ( ::haxe::ds::StringMap)(( ( ::haxe::ds::StringMap)(this1) )->get(clsName.substr((clsName.lastIndexOf(HX_(".",2e,00,00,00),(clsName.length - 1)) + 1),null()))) );
HXLINE(1018)		if (::hx::IsNotNull( widgetDefaults )) {
HXLINE(1019)			::Array< ::String > defs = obj->defaults.split(HX_(",",2c,00,00,00));
HXLINE(1020)			{
HXLINE(1020)				int _g = 0;
HXDLIN(1020)				int _g1 = defs->length;
HXDLIN(1020)				while((_g < _g1)){
HXLINE(1020)					_g = (_g + 1);
HXDLIN(1020)					int i = (_g - 1);
HXLINE(1021)					 ::Dynamic defaultsFn = widgetDefaults->get(::StringTools_obj::trim(defs->__get(i)));
HXLINE(1022)					if (::hx::IsNotNull( defaultsFn )) {
HXLINE(1023)						defaultsFn(obj);
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIBuilder_obj,applyDefaults,(void))

void UIBuilder_obj::initCreatedWidget( ::Dynamic maybeWidget){
            	HX_STACKFRAME(&_hx_pos_9ffa3f1738be6922_1030_initCreatedWidget)
HXDLIN(1030)		if (::Std_obj::isOfType(maybeWidget,( ( ::Dynamic)(::hx::ClassOf< ::ru::stablex::ui::widgets::Widget >()) ))) {
HXLINE(1031)			 ::ru::stablex::ui::widgets::Widget widget = ::hx::TCast<  ::ru::stablex::ui::widgets::Widget >::cast(maybeWidget);
HXLINE(1032)			{
HXLINE(1032)				 ::Dynamic _obj = widget;
HXDLIN(1032)				if (::Std_obj::isOfType(_obj,( ( ::Dynamic)(::hx::ClassOf< ::ru::stablex::ui::widgets::Widget >()) ))) {
HXLINE(1032)					 ::ru::stablex::ui::widgets::Widget obj = ::hx::TCast<  ::ru::stablex::ui::widgets::Widget >::cast(_obj);
HXDLIN(1032)					::String clsName = ::Type_obj::getClassName(::Type_obj::getClass(obj));
HXDLIN(1032)					::Dynamic this1 = ::ru::stablex::ui::UIBuilder_obj::defaults;
HXDLIN(1032)					 ::haxe::ds::StringMap widgetDefaults = ( ( ::haxe::ds::StringMap)(( ( ::haxe::ds::StringMap)(this1) )->get(clsName.substr((clsName.lastIndexOf(HX_(".",2e,00,00,00),(clsName.length - 1)) + 1),null()))) );
HXDLIN(1032)					if (::hx::IsNotNull( widgetDefaults )) {
HXLINE(1032)						::Array< ::String > defs = obj->defaults.split(HX_(",",2c,00,00,00));
HXDLIN(1032)						{
HXLINE(1032)							int _g = 0;
HXDLIN(1032)							int _g1 = defs->length;
HXDLIN(1032)							while((_g < _g1)){
HXLINE(1032)								_g = (_g + 1);
HXDLIN(1032)								int i = (_g - 1);
HXDLIN(1032)								 ::Dynamic defaultsFn = widgetDefaults->get(::StringTools_obj::trim(defs->__get(i)));
HXDLIN(1032)								if (::hx::IsNotNull( defaultsFn )) {
HXLINE(1032)									defaultsFn(obj);
            								}
            							}
            						}
            					}
            				}
            			}
HXLINE(1033)			widget->_onInitialize();
HXLINE(1034)			widget->_onCreate();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIBuilder_obj,initCreatedWidget,(void))

 ::Dynamic UIBuilder_obj::skin(::String skinName){
            	HX_STACKFRAME(&_hx_pos_9ffa3f1738be6922_1048_skin)
HXDLIN(1048)		return ::ru::stablex::ui::UIBuilder_obj::skins->get(skinName);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIBuilder_obj,skin,return )

 ::ru::stablex::ui::widgets::Widget UIBuilder_obj::get(::String id){
            	HX_STACKFRAME(&_hx_pos_9ffa3f1738be6922_1057_get)
HXDLIN(1057)		return ( ( ::ru::stablex::ui::widgets::Widget)(::ru::stablex::ui::UIBuilder_obj::_objects->get(id)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIBuilder_obj,get,return )

 ::Dynamic UIBuilder_obj::getAs(::String id,::hx::Class cls){
            	HX_STACKFRAME(&_hx_pos_9ffa3f1738be6922_1065_getAs)
HXLINE(1066)		 ::ru::stablex::ui::widgets::Widget w = ( ( ::ru::stablex::ui::widgets::Widget)(::ru::stablex::ui::UIBuilder_obj::_objects->get(id)) );
HXLINE(1067)		if (::Std_obj::isOfType(w,( ( ::Dynamic)(cls) ))) {
HXLINE(1067)			return w;
            		}
            		else {
HXLINE(1067)			return null();
            		}
HXDLIN(1067)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UIBuilder_obj,getAs,return )

void UIBuilder_obj::save( ::ru::stablex::ui::widgets::Widget obj){
            	HX_STACKFRAME(&_hx_pos_9ffa3f1738be6922_1076_save)
HXDLIN(1076)		if (::ru::stablex::ui::UIBuilder_obj::_objects->exists(obj->id)) {
HXLINE(1077)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Widget id \"",59,36,9e,8f) + obj->id) + HX_("\" is already used",bd,b5,7b,b9))));
            		}
            		else {
HXLINE(1079)			::ru::stablex::ui::UIBuilder_obj::_objects->set(obj->id,obj);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIBuilder_obj,save,(void))

void UIBuilder_obj::forget(::String id){
            	HX_STACKFRAME(&_hx_pos_9ffa3f1738be6922_1089_forget)
HXDLIN(1089)		::ru::stablex::ui::UIBuilder_obj::_objects->remove(id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIBuilder_obj,forget,(void))

void UIBuilder_obj::queueSkin( ::ru::stablex::ui::widgets::Widget w){
            	HX_STACKFRAME(&_hx_pos_9ffa3f1738be6922_1098_queueSkin)
HXDLIN(1098)		bool _hx_tmp;
HXDLIN(1098)		if (::hx::IsNotNull( w->skin )) {
HXDLIN(1098)			_hx_tmp = !(w->_skinQueued);
            		}
            		else {
HXDLIN(1098)			_hx_tmp = false;
            		}
HXDLIN(1098)		if (_hx_tmp) {
HXLINE(1099)			::ru::stablex::ui::UIBuilder_obj::_skinQueue->add(w);
HXLINE(1100)			w->_skinQueued = true;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIBuilder_obj,queueSkin,(void))

void UIBuilder_obj::skinQueue( ::openfl::events::Event e){
            	HX_GC_STACKFRAME(&_hx_pos_9ffa3f1738be6922_1115_skinQueue)
HXDLIN(1115)		if ((::ru::stablex::ui::UIBuilder_obj::_skinQueue->length > 0)) {
HXLINE(1117)			 ::haxe::ds::List lst = ::ru::stablex::ui::UIBuilder_obj::_skinQueue;
HXLINE(1119)			::ru::stablex::ui::UIBuilder_obj::_skinQueue =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE(1121)			{
HXLINE(1121)				 ::haxe::ds::_List::ListNode _g_head = lst->h;
HXDLIN(1121)				while(::hx::IsNotNull( _g_head )){
HXLINE(1121)					 ::ru::stablex::ui::widgets::Widget val = ( ( ::ru::stablex::ui::widgets::Widget)(_g_head->item) );
HXDLIN(1121)					_g_head = _g_head->next;
HXDLIN(1121)					 ::ru::stablex::ui::widgets::Widget w = val;
HXLINE(1122)					w->applySkin();
HXLINE(1123)					w->_skinQueued = false;
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIBuilder_obj,skinQueue,(void))

HX_BEGIN_DEFAULT_FUNC(__default_customStringReplace,UIBuilder_obj)
::String _hx_run(::String s){
            	HX_STACKFRAME(&_hx_pos_9ffa3f1738be6922_1137___default_customStringReplace)
HXDLIN(1137)		return s;
            	}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

::Dynamic UIBuilder_obj::customStringReplace;

void UIBuilder_obj::recurSet( ::Dynamic trg,::Array< ::String > path, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_9ffa3f1738be6922_1143_recurSet)
HXLINE(1144)		::String key = ( (::String)(path->shift()) );
HXLINE(1145)		if ((path->length == 0)) {
HXLINE(1146)			::Reflect_obj::setProperty(trg,key,value);
HXLINE(1147)			return;
            		}
HXLINE(1149)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN(1149)		{
HXLINE(1149)			int _g1 = 0;
HXDLIN(1149)			::Array< ::String > _g2 = ::Type_obj::getInstanceFields(::Type_obj::getClass(trg));
HXDLIN(1149)			while((_g1 < _g2->length)){
HXLINE(1149)				::String v = _g2->__get(_g1);
HXDLIN(1149)				_g1 = (_g1 + 1);
HXDLIN(1149)				bool hasClassfield;
HXDLIN(1149)				if ((v != key)) {
HXLINE(1149)					hasClassfield = (v == (HX_("set_",7d,92,50,4c) + key));
            				}
            				else {
HXLINE(1149)					hasClassfield = true;
            				}
HXDLIN(1149)				if (hasClassfield) {
HXLINE(1149)					_g->push(v);
            				}
            			}
            		}
HXDLIN(1149)		bool hasClassfield = (_g->length > 0);
HXLINE(1150)		 ::Dynamic newTrg;
HXLINE(1151)		bool newTrg1;
HXDLIN(1151)		if (!(::Reflect_obj::hasField(trg,key))) {
HXLINE(1151)			newTrg1 = hasClassfield;
            		}
            		else {
HXLINE(1151)			newTrg1 = true;
            		}
HXDLIN(1151)		if (newTrg1) {
HXLINE(1150)			newTrg = ::Reflect_obj::getProperty(trg,key);
            		}
            		else {
HXLINE(1150)			newTrg = trg->__Field(HX_("resolve",ec,12,60,67),::hx::paccDynamic)(key);
            		}
HXLINE(1156)		::ru::stablex::ui::UIBuilder_obj::recurSet(newTrg,path,value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(UIBuilder_obj,recurSet,(void))


UIBuilder_obj::UIBuilder_obj()
{
}

bool UIBuilder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { outValue = pos_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"skin") ) { outValue = skin_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"save") ) { outValue = save_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"skins") ) { outValue = ( skins ); return true; }
		if (HX_FIELD_EQ(inName,"apply") ) { outValue = apply_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getAs") ) { outValue = getAs_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"forget") ) { outValue = forget_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_nextId") ) { outValue = ( _nextId ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"defaults") ) { outValue = ( defaults ); return true; }
		if (HX_FIELD_EQ(inName,"_objects") ) { outValue = ( _objects ); return true; }
		if (HX_FIELD_EQ(inName,"createId") ) { outValue = createId_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"recurSet") ) { outValue = recurSet_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"queueSkin") ) { outValue = queueSkin_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"skinQueue") ) { outValue = skinQueue_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { outValue = ( dispatcher ); return true; }
		if (HX_FIELD_EQ(inName,"_skinQueue") ) { outValue = ( _skinQueue ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"applyDefaults") ) { outValue = applyDefaults_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"initCreatedWidget") ) { outValue = initCreatedWidget_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"customStringReplace") ) { outValue = ( customStringReplace ); return true; }
	}
	return false;
}

bool UIBuilder_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"skins") ) { skins=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_nextId") ) { _nextId=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"defaults") ) { defaults=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"_objects") ) { _objects=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { dispatcher=ioValue.Cast<  ::openfl::events::EventDispatcher >(); return true; }
		if (HX_FIELD_EQ(inName,"_skinQueue") ) { _skinQueue=ioValue.Cast<  ::haxe::ds::List >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"customStringReplace") ) { customStringReplace=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *UIBuilder_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo UIBuilder_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &UIBuilder_obj::defaults,HX_("defaults",92,d0,99,af)},
	{::hx::fsObject /*  ::openfl::events::EventDispatcher */ ,(void *) &UIBuilder_obj::dispatcher,HX_("dispatcher",a7,c9,00,5a)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &UIBuilder_obj::_objects,HX_("_objects",55,c2,07,bc)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &UIBuilder_obj::skins,HX_("skins",56,97,1e,7e)},
	{::hx::fsInt,(void *) &UIBuilder_obj::_nextId,HX_("_nextId",4d,39,db,e0)},
	{::hx::fsObject /*  ::haxe::ds::List */ ,(void *) &UIBuilder_obj::_skinQueue,HX_("_skinQueue",95,bd,d1,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &UIBuilder_obj::customStringReplace,HX_("customStringReplace",f2,80,39,b7)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void UIBuilder_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIBuilder_obj::defaults,"defaults");
	HX_MARK_MEMBER_NAME(UIBuilder_obj::dispatcher,"dispatcher");
	HX_MARK_MEMBER_NAME(UIBuilder_obj::_objects,"_objects");
	HX_MARK_MEMBER_NAME(UIBuilder_obj::skins,"skins");
	HX_MARK_MEMBER_NAME(UIBuilder_obj::_nextId,"_nextId");
	HX_MARK_MEMBER_NAME(UIBuilder_obj::_skinQueue,"_skinQueue");
	HX_MARK_MEMBER_NAME(UIBuilder_obj::customStringReplace,"customStringReplace");
};

#ifdef HXCPP_VISIT_ALLOCS
static void UIBuilder_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIBuilder_obj::defaults,"defaults");
	HX_VISIT_MEMBER_NAME(UIBuilder_obj::dispatcher,"dispatcher");
	HX_VISIT_MEMBER_NAME(UIBuilder_obj::_objects,"_objects");
	HX_VISIT_MEMBER_NAME(UIBuilder_obj::skins,"skins");
	HX_VISIT_MEMBER_NAME(UIBuilder_obj::_nextId,"_nextId");
	HX_VISIT_MEMBER_NAME(UIBuilder_obj::_skinQueue,"_skinQueue");
	HX_VISIT_MEMBER_NAME(UIBuilder_obj::customStringReplace,"customStringReplace");
};

#endif

::hx::Class UIBuilder_obj::__mClass;

static ::String UIBuilder_obj_sStaticFields[] = {
	HX_("defaults",92,d0,99,af),
	HX_("dispatcher",a7,c9,00,5a),
	HX_("_objects",55,c2,07,bc),
	HX_("skins",56,97,1e,7e),
	HX_("_nextId",4d,39,db,e0),
	HX_("_skinQueue",95,bd,d1,00),
	HX_("pos",94,5d,55,00),
	HX_("createId",f7,5d,f4,2b),
	HX_("create",fc,66,0f,7c),
	HX_("apply",6e,85,3b,24),
	HX_("applyDefaults",20,30,cf,ef),
	HX_("initCreatedWidget",9c,a2,3c,c0),
	HX_("skin",7d,16,55,4c),
	HX_("get",96,80,4e,00),
	HX_("getAs",28,8b,60,91),
	HX_("save",3d,8b,4d,4c),
	HX_("forget",2d,05,8a,fd),
	HX_("queueSkin",ae,6c,fd,ce),
	HX_("skinQueue",d4,41,2f,a5),
	HX_("customStringReplace",f2,80,39,b7),
	HX_("recurSet",f5,e9,3e,1f),
	::String(null())
};

void UIBuilder_obj::__register()
{
	UIBuilder_obj _hx_dummy;
	UIBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ru.stablex.ui.UIBuilder",c9,e4,a4,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UIBuilder_obj::__GetStatic;
	__mClass->mSetStaticField = &UIBuilder_obj::__SetStatic;
	__mClass->mMarkFunc = UIBuilder_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(UIBuilder_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< UIBuilder_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = UIBuilder_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UIBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UIBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void UIBuilder_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_9ffa3f1738be6922_75_boot)
HXDLIN(  75)		defaults =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_9ffa3f1738be6922_78_boot)
HXDLIN(  78)		dispatcher =  ::openfl::events::EventDispatcher_obj::__alloc( HX_CTX ,null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_9ffa3f1738be6922_81_boot)
HXDLIN(  81)		_objects =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_9ffa3f1738be6922_84_boot)
HXDLIN(  84)		skins =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_9ffa3f1738be6922_87_boot)
HXDLIN(  87)		_nextId = 0;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_9ffa3f1738be6922_90_boot)
HXDLIN(  90)		_skinQueue =  ::haxe::ds::List_obj::__alloc( HX_CTX );
            	}
	customStringReplace = new __default_customStringReplace;

}

} // end namespace ru
} // end namespace stablex
} // end namespace ui