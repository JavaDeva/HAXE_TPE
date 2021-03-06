// Generated by Haxe 4.1.1
#ifndef INCLUDED_ru_stablex_ui_widgets_Floating
#define INCLUDED_ru_stablex_ui_widgets_Floating

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_ru_stablex_ui_widgets_Box
#include <ru/stablex/ui/widgets/Box.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(ru,stablex,TweenSprite)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Box)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Floating)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Widget)

namespace ru{
namespace stablex{
namespace ui{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Floating_obj : public  ::ru::stablex::ui::widgets::Box_obj
{
	public:
		typedef  ::ru::stablex::ui::widgets::Box_obj super;
		typedef Floating_obj OBJ_;
		Floating_obj();

	public:
		enum { _hx_ClassId = 0x292acd8f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ru.stablex.ui.widgets.Floating")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ru.stablex.ui.widgets.Floating"); }
		static ::hx::ObjectPtr< Floating_obj > __new();
		static ::hx::ObjectPtr< Floating_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Floating_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Floating",e6,6c,51,b7); }

		bool shown;
		::String renderTo;
		Float scaleContent;
		void show();
		::Dynamic show_dyn();

		void hide();
		::Dynamic hide_dyn();

		bool _usingParentSize();
		::Dynamic _usingParentSize_dyn();

		void _onStageResize( ::openfl::events::Event e);
		::Dynamic _onStageResize_dyn();

		 ::openfl::display::DisplayObject getRenderTarget();
		::Dynamic getRenderTarget_dyn();

		virtual void free(::hx::Null< bool >  recursive);

		Float set_scaleContent(Float scaleContent);
		::Dynamic set_scaleContent_dyn();

};

} // end namespace ru
} // end namespace stablex
} // end namespace ui
} // end namespace widgets

#endif /* INCLUDED_ru_stablex_ui_widgets_Floating */ 
