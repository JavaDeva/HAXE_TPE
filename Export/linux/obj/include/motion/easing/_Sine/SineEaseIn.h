// Generated by Haxe 4.1.1
#ifndef INCLUDED_motion_easing__Sine_SineEaseIn
#define INCLUDED_motion_easing__Sine_SineEaseIn

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS3(motion,easing,_Sine,SineEaseIn)

namespace motion{
namespace easing{
namespace _Sine{


class HXCPP_CLASS_ATTRIBUTES SineEaseIn_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SineEaseIn_obj OBJ_;
		SineEaseIn_obj();

	public:
		enum { _hx_ClassId = 0x34c6169f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion.easing._Sine.SineEaseIn")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"motion.easing._Sine.SineEaseIn"); }
		static ::hx::ObjectPtr< SineEaseIn_obj > __new();
		static ::hx::ObjectPtr< SineEaseIn_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SineEaseIn_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("SineEaseIn",c0,69,9c,95); }

		Float calculate(Float k);
		::Dynamic calculate_dyn();

		Float ease(Float t,Float b,Float c,Float d);
		::Dynamic ease_dyn();

};

} // end namespace motion
} // end namespace easing
} // end namespace _Sine

#endif /* INCLUDED_motion_easing__Sine_SineEaseIn */ 
