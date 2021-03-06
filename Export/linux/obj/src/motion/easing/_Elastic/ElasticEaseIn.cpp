// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing__Elastic_ElasticEaseIn
#include <motion/easing/_Elastic/ElasticEaseIn.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9f21a8be24c7001b_47_new,"motion.easing._Elastic.ElasticEaseIn","new",0x8663e16d,"motion.easing._Elastic.ElasticEaseIn.new","motion/easing/Elastic.hx",47,0x73ac9cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_9f21a8be24c7001b_55_calculate,"motion.easing._Elastic.ElasticEaseIn","calculate",0x80f46e33,"motion.easing._Elastic.ElasticEaseIn.calculate","motion/easing/Elastic.hx",55,0x73ac9cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_9f21a8be24c7001b_66_ease,"motion.easing._Elastic.ElasticEaseIn","ease",0x0b0b6641,"motion.easing._Elastic.ElasticEaseIn.ease","motion/easing/Elastic.hx",66,0x73ac9cf4)
namespace motion{
namespace easing{
namespace _Elastic{

void ElasticEaseIn_obj::__construct(Float a,Float p){
            	HX_STACKFRAME(&_hx_pos_9f21a8be24c7001b_47_new)
HXLINE(  49)		this->a = a;
HXLINE(  50)		this->p = p;
            	}

Dynamic ElasticEaseIn_obj::__CreateEmpty() { return new ElasticEaseIn_obj; }

void *ElasticEaseIn_obj::_hx_vtable = 0;

Dynamic ElasticEaseIn_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ElasticEaseIn_obj > _hx_result = new ElasticEaseIn_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ElasticEaseIn_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x368599ad;
}

static ::motion::easing::IEasing_obj _hx_motion_easing__Elastic_ElasticEaseIn__hx_motion_easing_IEasing= {
	( Float (::hx::Object::*)(Float))&::motion::easing::_Elastic::ElasticEaseIn_obj::calculate,
	( Float (::hx::Object::*)(Float,Float,Float,Float))&::motion::easing::_Elastic::ElasticEaseIn_obj::ease,
};

void *ElasticEaseIn_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x864e8b53: return &_hx_motion_easing__Elastic_ElasticEaseIn__hx_motion_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float ElasticEaseIn_obj::calculate(Float k){
            	HX_STACKFRAME(&_hx_pos_9f21a8be24c7001b_55_calculate)
HXLINE(  57)		if ((k == 0)) {
HXLINE(  57)			return ( (Float)(0) );
            		}
HXDLIN(  57)		if ((k == 1)) {
HXLINE(  57)			return ( (Float)(1) );
            		}
HXLINE(  58)		Float s;
HXLINE(  59)		if ((this->a < 1)) {
HXLINE(  59)			this->a = ( (Float)(1) );
HXDLIN(  59)			s = (this->p / ( (Float)(4) ));
            		}
            		else {
HXLINE(  60)			s = ((this->p / (( (Float)(2) ) * ::Math_obj::PI)) * ::Math_obj::asin((( (Float)(1) ) / this->a)));
            		}
HXLINE(  61)		k = (k - ( (Float)(1) ));
HXDLIN(  61)		return -(((this->a * ::Math_obj::exp((((Float)6.931471805599453) * k))) * ::Math_obj::sin((((k - s) * (( (Float)(2) ) * ::Math_obj::PI)) / this->p))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ElasticEaseIn_obj,calculate,return )

Float ElasticEaseIn_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACKFRAME(&_hx_pos_9f21a8be24c7001b_66_ease)
HXLINE(  68)		if ((t == 0)) {
HXLINE(  69)			return b;
            		}
HXLINE(  71)		t = (t / d);
HXDLIN(  71)		if ((t == 1)) {
HXLINE(  72)			return (b + c);
            		}
HXLINE(  74)		Float s;
HXLINE(  75)		if ((this->a < ::Math_obj::abs(c))) {
HXLINE(  76)			this->a = c;
HXLINE(  77)			s = (this->p / ( (Float)(4) ));
            		}
            		else {
HXLINE(  80)			s = ((this->p / (( (Float)(2) ) * ::Math_obj::PI)) * ::Math_obj::asin((c / this->a)));
            		}
HXLINE(  82)		t = (t - ( (Float)(1) ));
HXDLIN(  82)		return (-(((this->a * ::Math_obj::exp((((Float)6.931471805599453) * t))) * ::Math_obj::sin(((((t * d) - s) * (( (Float)(2) ) * ::Math_obj::PI)) / this->p)))) + b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(ElasticEaseIn_obj,ease,return )


::hx::ObjectPtr< ElasticEaseIn_obj > ElasticEaseIn_obj::__new(Float a,Float p) {
	::hx::ObjectPtr< ElasticEaseIn_obj > __this = new ElasticEaseIn_obj();
	__this->__construct(a,p);
	return __this;
}

::hx::ObjectPtr< ElasticEaseIn_obj > ElasticEaseIn_obj::__alloc(::hx::Ctx *_hx_ctx,Float a,Float p) {
	ElasticEaseIn_obj *__this = (ElasticEaseIn_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ElasticEaseIn_obj), false, "motion.easing._Elastic.ElasticEaseIn"));
	*(void **)__this = ElasticEaseIn_obj::_hx_vtable;
	__this->__construct(a,p);
	return __this;
}

ElasticEaseIn_obj::ElasticEaseIn_obj()
{
}

::hx::Val ElasticEaseIn_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return ::hx::Val( a ); }
		if (HX_FIELD_EQ(inName,"p") ) { return ::hx::Val( p ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ::hx::Val( ease_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return ::hx::Val( calculate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ElasticEaseIn_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ElasticEaseIn_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("a",61,00,00,00));
	outFields->push(HX_("p",70,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ElasticEaseIn_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(ElasticEaseIn_obj,a),HX_("a",61,00,00,00)},
	{::hx::fsFloat,(int)offsetof(ElasticEaseIn_obj,p),HX_("p",70,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ElasticEaseIn_obj_sStaticStorageInfo = 0;
#endif

static ::String ElasticEaseIn_obj_sMemberFields[] = {
	HX_("a",61,00,00,00),
	HX_("p",70,00,00,00),
	HX_("calculate",66,95,6a,05),
	HX_("ease",ee,8b,0c,43),
	::String(null()) };

::hx::Class ElasticEaseIn_obj::__mClass;

void ElasticEaseIn_obj::__register()
{
	ElasticEaseIn_obj _hx_dummy;
	ElasticEaseIn_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.easing._Elastic.ElasticEaseIn",fb,a6,49,85);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ElasticEaseIn_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ElasticEaseIn_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ElasticEaseIn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ElasticEaseIn_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing
} // end namespace _Elastic
