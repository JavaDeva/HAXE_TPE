// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing__Back_BackEaseIn
#include <motion/easing/_Back/BackEaseIn.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1ab906598189da13_49_new,"motion.easing._Back.BackEaseIn","new",0xddea3ebf,"motion.easing._Back.BackEaseIn.new","motion/easing/Back.hx",49,0x81c0c12c)
HX_LOCAL_STACK_FRAME(_hx_pos_1ab906598189da13_56_calculate,"motion.easing._Back.BackEaseIn","calculate",0xdefe9505,"motion.easing._Back.BackEaseIn.calculate","motion/easing/Back.hx",56,0x81c0c12c)
HX_LOCAL_STACK_FRAME(_hx_pos_1ab906598189da13_63_ease,"motion.easing._Back.BackEaseIn","ease",0x4916b0af,"motion.easing._Back.BackEaseIn.ease","motion/easing/Back.hx",63,0x81c0c12c)
namespace motion{
namespace easing{
namespace _Back{

void BackEaseIn_obj::__construct(Float s){
            	HX_STACKFRAME(&_hx_pos_1ab906598189da13_49_new)
HXDLIN(  49)		this->s = s;
            	}

Dynamic BackEaseIn_obj::__CreateEmpty() { return new BackEaseIn_obj; }

void *BackEaseIn_obj::_hx_vtable = 0;

Dynamic BackEaseIn_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BackEaseIn_obj > _hx_result = new BackEaseIn_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BackEaseIn_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0bb98a7f;
}

static ::motion::easing::IEasing_obj _hx_motion_easing__Back_BackEaseIn__hx_motion_easing_IEasing= {
	( Float (::hx::Object::*)(Float))&::motion::easing::_Back::BackEaseIn_obj::calculate,
	( Float (::hx::Object::*)(Float,Float,Float,Float))&::motion::easing::_Back::BackEaseIn_obj::ease,
};

void *BackEaseIn_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x864e8b53: return &_hx_motion_easing__Back_BackEaseIn__hx_motion_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float BackEaseIn_obj::calculate(Float k){
            	HX_STACKFRAME(&_hx_pos_1ab906598189da13_56_calculate)
HXDLIN(  56)		return ((k * k) * (((this->s + 1) * k) - this->s));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BackEaseIn_obj,calculate,return )

Float BackEaseIn_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACKFRAME(&_hx_pos_1ab906598189da13_63_ease)
HXDLIN(  63)		t = (t / d);
HXDLIN(  63)		return ((((c * t) * t) * (((this->s + 1) * t) - this->s)) + b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(BackEaseIn_obj,ease,return )


::hx::ObjectPtr< BackEaseIn_obj > BackEaseIn_obj::__new(Float s) {
	::hx::ObjectPtr< BackEaseIn_obj > __this = new BackEaseIn_obj();
	__this->__construct(s);
	return __this;
}

::hx::ObjectPtr< BackEaseIn_obj > BackEaseIn_obj::__alloc(::hx::Ctx *_hx_ctx,Float s) {
	BackEaseIn_obj *__this = (BackEaseIn_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BackEaseIn_obj), false, "motion.easing._Back.BackEaseIn"));
	*(void **)__this = BackEaseIn_obj::_hx_vtable;
	__this->__construct(s);
	return __this;
}

BackEaseIn_obj::BackEaseIn_obj()
{
}

::hx::Val BackEaseIn_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return ::hx::Val( s ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ::hx::Val( ease_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return ::hx::Val( calculate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BackEaseIn_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BackEaseIn_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("s",73,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BackEaseIn_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(BackEaseIn_obj,s),HX_("s",73,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BackEaseIn_obj_sStaticStorageInfo = 0;
#endif

static ::String BackEaseIn_obj_sMemberFields[] = {
	HX_("s",73,00,00,00),
	HX_("calculate",66,95,6a,05),
	HX_("ease",ee,8b,0c,43),
	::String(null()) };

::hx::Class BackEaseIn_obj::__mClass;

void BackEaseIn_obj::__register()
{
	BackEaseIn_obj _hx_dummy;
	BackEaseIn_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.easing._Back.BackEaseIn",4d,73,9e,2d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BackEaseIn_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BackEaseIn_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BackEaseIn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BackEaseIn_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing
} // end namespace _Back
