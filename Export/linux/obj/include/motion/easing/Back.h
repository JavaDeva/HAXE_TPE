// Generated by Haxe 4.1.1
#ifndef INCLUDED_motion_easing_Back
#define INCLUDED_motion_easing_Back

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(motion,easing,Back)
HX_DECLARE_CLASS2(motion,easing,IEasing)

namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES Back_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Back_obj OBJ_;
		Back_obj();

	public:
		enum { _hx_ClassId = 0x0d38da80 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion.easing.Back")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"motion.easing.Back"); }

		inline static ::hx::ObjectPtr< Back_obj > __new() {
			::hx::ObjectPtr< Back_obj > __this = new Back_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Back_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Back_obj *__this = (Back_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Back_obj), false, "motion.easing.Back"));
			*(void **)__this = Back_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Back_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Back",47,06,ea,2b); }

		static void __boot();
		static ::Dynamic easeIn;
		static ::Dynamic easeInOut;
		static ::Dynamic easeOut;
		static ::Dynamic easeInWith(Float s);
		static ::Dynamic easeInWith_dyn();

		static ::Dynamic easeInOutWith(Float s);
		static ::Dynamic easeInOutWith_dyn();

		static ::Dynamic easeOutWith(Float s);
		static ::Dynamic easeOutWith_dyn();

};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_Back */ 
