// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing__Cubic_CubicEaseOut
#include <motion/easing/_Cubic/CubicEaseOut.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f73321db1672e18b_77_new,"motion.easing._Cubic.CubicEaseOut","new",0x9abaa300,"motion.easing._Cubic.CubicEaseOut.new","motion/easing/Cubic.hx",77,0x157bb7df)
HX_LOCAL_STACK_FRAME(_hx_pos_f73321db1672e18b_86_calculate,"motion.easing._Cubic.CubicEaseOut","calculate",0x09252006,"motion.easing._Cubic.CubicEaseOut.calculate","motion/easing/Cubic.hx",86,0x157bb7df)
HX_LOCAL_STACK_FRAME(_hx_pos_f73321db1672e18b_93_ease,"motion.easing._Cubic.CubicEaseOut","ease",0xc29e054e,"motion.easing._Cubic.CubicEaseOut.ease","motion/easing/Cubic.hx",93,0x157bb7df)
namespace motion{
namespace easing{
namespace _Cubic{

void CubicEaseOut_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f73321db1672e18b_77_new)
            	}

Dynamic CubicEaseOut_obj::__CreateEmpty() { return new CubicEaseOut_obj; }

void *CubicEaseOut_obj::_hx_vtable = 0;

Dynamic CubicEaseOut_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CubicEaseOut_obj > _hx_result = new CubicEaseOut_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CubicEaseOut_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x66b8aae6;
}

static ::motion::easing::IEasing_obj _hx_motion_easing__Cubic_CubicEaseOut__hx_motion_easing_IEasing= {
	( Float (::hx::Object::*)(Float))&::motion::easing::_Cubic::CubicEaseOut_obj::calculate,
	( Float (::hx::Object::*)(Float,Float,Float,Float))&::motion::easing::_Cubic::CubicEaseOut_obj::ease,
};

void *CubicEaseOut_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x864e8b53: return &_hx_motion_easing__Cubic_CubicEaseOut__hx_motion_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float CubicEaseOut_obj::calculate(Float k){
            	HX_STACKFRAME(&_hx_pos_f73321db1672e18b_86_calculate)
HXDLIN(  86)		k = (k - ( (Float)(1) ));
HXDLIN(  86)		return (((k * k) * k) + 1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CubicEaseOut_obj,calculate,return )

Float CubicEaseOut_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACKFRAME(&_hx_pos_f73321db1672e18b_93_ease)
HXDLIN(  93)		t = ((t / d) - ( (Float)(1) ));
HXDLIN(  93)		return ((c * (((t * t) * t) + 1)) + b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(CubicEaseOut_obj,ease,return )


::hx::ObjectPtr< CubicEaseOut_obj > CubicEaseOut_obj::__new() {
	::hx::ObjectPtr< CubicEaseOut_obj > __this = new CubicEaseOut_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CubicEaseOut_obj > CubicEaseOut_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CubicEaseOut_obj *__this = (CubicEaseOut_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CubicEaseOut_obj), false, "motion.easing._Cubic.CubicEaseOut"));
	*(void **)__this = CubicEaseOut_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CubicEaseOut_obj::CubicEaseOut_obj()
{
}

::hx::Val CubicEaseOut_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ::hx::Val( ease_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return ::hx::Val( calculate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CubicEaseOut_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CubicEaseOut_obj_sStaticStorageInfo = 0;
#endif

static ::String CubicEaseOut_obj_sMemberFields[] = {
	HX_("calculate",66,95,6a,05),
	HX_("ease",ee,8b,0c,43),
	::String(null()) };

::hx::Class CubicEaseOut_obj::__mClass;

void CubicEaseOut_obj::__register()
{
	CubicEaseOut_obj _hx_dummy;
	CubicEaseOut_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.easing._Cubic.CubicEaseOut",0e,63,75,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CubicEaseOut_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CubicEaseOut_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CubicEaseOut_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CubicEaseOut_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing
} // end namespace _Cubic
