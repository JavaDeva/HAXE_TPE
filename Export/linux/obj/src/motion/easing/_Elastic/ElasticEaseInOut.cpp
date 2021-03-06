// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing__Elastic_ElasticEaseInOut
#include <motion/easing/_Elastic/ElasticEaseInOut.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c778e7512bd48fc4_97_new,"motion.easing._Elastic.ElasticEaseInOut","new",0xf664c6c5,"motion.easing._Elastic.ElasticEaseInOut.new","motion/easing/Elastic.hx",97,0x73ac9cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_c778e7512bd48fc4_104_calculate,"motion.easing._Elastic.ElasticEaseInOut","calculate",0xef8fe58b,"motion.easing._Elastic.ElasticEaseInOut.calculate","motion/easing/Elastic.hx",104,0x73ac9cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_c778e7512bd48fc4_125_ease,"motion.easing._Elastic.ElasticEaseInOut","ease",0x9bd32de9,"motion.easing._Elastic.ElasticEaseInOut.ease","motion/easing/Elastic.hx",125,0x73ac9cf4)
namespace motion{
namespace easing{
namespace _Elastic{

void ElasticEaseInOut_obj::__construct(Float a,Float p){
            	HX_STACKFRAME(&_hx_pos_c778e7512bd48fc4_97_new)
HXLINE(  99)		this->a = a;
HXLINE( 100)		this->p = p;
            	}

Dynamic ElasticEaseInOut_obj::__CreateEmpty() { return new ElasticEaseInOut_obj; }

void *ElasticEaseInOut_obj::_hx_vtable = 0;

Dynamic ElasticEaseInOut_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ElasticEaseInOut_obj > _hx_result = new ElasticEaseInOut_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ElasticEaseInOut_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0cc1327d;
}

static ::motion::easing::IEasing_obj _hx_motion_easing__Elastic_ElasticEaseInOut__hx_motion_easing_IEasing= {
	( Float (::hx::Object::*)(Float))&::motion::easing::_Elastic::ElasticEaseInOut_obj::calculate,
	( Float (::hx::Object::*)(Float,Float,Float,Float))&::motion::easing::_Elastic::ElasticEaseInOut_obj::ease,
};

void *ElasticEaseInOut_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x864e8b53: return &_hx_motion_easing__Elastic_ElasticEaseInOut__hx_motion_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float ElasticEaseInOut_obj::calculate(Float k){
            	HX_STACKFRAME(&_hx_pos_c778e7512bd48fc4_104_calculate)
HXLINE( 106)		if ((k == 0)) {
HXLINE( 107)			return ( (Float)(0) );
            		}
HXLINE( 109)		k = (k / ((Float)0.5));
HXDLIN( 109)		if ((k == 2)) {
HXLINE( 110)			return ( (Float)(1) );
            		}
HXLINE( 113)		Float p = ((Float)0.449999999999999956);
HXLINE( 114)		Float a = ( (Float)(1) );
HXLINE( 115)		Float s = (p / ( (Float)(4) ));
HXLINE( 117)		if ((k < 1)) {
HXLINE( 118)			k = (k - ( (Float)(1) ));
HXDLIN( 118)			return (((Float)-0.5) * (::Math_obj::exp((((Float)6.931471805599453) * k)) * ::Math_obj::sin((((k - s) * (( (Float)(2) ) * ::Math_obj::PI)) / p))));
            		}
HXLINE( 120)		k = (k - ( (Float)(1) ));
HXDLIN( 120)		return (((::Math_obj::exp((((Float)-6.931471805599453) * k)) * ::Math_obj::sin((((k - s) * (( (Float)(2) ) * ::Math_obj::PI)) / p))) * ((Float)0.5)) + 1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ElasticEaseInOut_obj,calculate,return )

Float ElasticEaseInOut_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACKFRAME(&_hx_pos_c778e7512bd48fc4_125_ease)
HXLINE( 127)		if ((t == 0)) {
HXLINE( 128)			return b;
            		}
HXLINE( 130)		t = (t / (d / ( (Float)(2) )));
HXDLIN( 130)		if ((t == 2)) {
HXLINE( 131)			return (b + c);
            		}
HXLINE( 133)		Float s;
HXLINE( 134)		if ((this->a < ::Math_obj::abs(c))) {
HXLINE( 135)			this->a = c;
HXLINE( 136)			s = (this->p / ( (Float)(4) ));
            		}
            		else {
HXLINE( 139)			s = ((this->p / (( (Float)(2) ) * ::Math_obj::PI)) * ::Math_obj::asin((c / this->a)));
            		}
HXLINE( 141)		if ((t < 1)) {
HXLINE( 142)			t = (t - ( (Float)(1) ));
HXDLIN( 142)			return ((((Float)-0.5) * ((this->a * ::Math_obj::exp((((Float)6.931471805599453) * t))) * ::Math_obj::sin(((((t * d) - s) * (( (Float)(2) ) * ::Math_obj::PI)) / this->p)))) + b);
            		}
HXLINE( 144)		t = (t - ( (Float)(1) ));
HXDLIN( 144)		return (((((this->a * ::Math_obj::exp((((Float)-6.931471805599453) * t))) * ::Math_obj::sin(((((t * d) - s) * (( (Float)(2) ) * ::Math_obj::PI)) / this->p))) * ((Float)0.5)) + c) + b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(ElasticEaseInOut_obj,ease,return )


::hx::ObjectPtr< ElasticEaseInOut_obj > ElasticEaseInOut_obj::__new(Float a,Float p) {
	::hx::ObjectPtr< ElasticEaseInOut_obj > __this = new ElasticEaseInOut_obj();
	__this->__construct(a,p);
	return __this;
}

::hx::ObjectPtr< ElasticEaseInOut_obj > ElasticEaseInOut_obj::__alloc(::hx::Ctx *_hx_ctx,Float a,Float p) {
	ElasticEaseInOut_obj *__this = (ElasticEaseInOut_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ElasticEaseInOut_obj), false, "motion.easing._Elastic.ElasticEaseInOut"));
	*(void **)__this = ElasticEaseInOut_obj::_hx_vtable;
	__this->__construct(a,p);
	return __this;
}

ElasticEaseInOut_obj::ElasticEaseInOut_obj()
{
}

::hx::Val ElasticEaseInOut_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val ElasticEaseInOut_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ElasticEaseInOut_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("a",61,00,00,00));
	outFields->push(HX_("p",70,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ElasticEaseInOut_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(ElasticEaseInOut_obj,a),HX_("a",61,00,00,00)},
	{::hx::fsFloat,(int)offsetof(ElasticEaseInOut_obj,p),HX_("p",70,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ElasticEaseInOut_obj_sStaticStorageInfo = 0;
#endif

static ::String ElasticEaseInOut_obj_sMemberFields[] = {
	HX_("a",61,00,00,00),
	HX_("p",70,00,00,00),
	HX_("calculate",66,95,6a,05),
	HX_("ease",ee,8b,0c,43),
	::String(null()) };

::hx::Class ElasticEaseInOut_obj::__mClass;

void ElasticEaseInOut_obj::__register()
{
	ElasticEaseInOut_obj _hx_dummy;
	ElasticEaseInOut_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.easing._Elastic.ElasticEaseInOut",53,00,e7,8d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ElasticEaseInOut_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ElasticEaseInOut_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ElasticEaseInOut_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ElasticEaseInOut_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing
} // end namespace _Elastic
