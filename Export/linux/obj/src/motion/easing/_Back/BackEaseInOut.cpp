// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing__Back_BackEaseInOut
#include <motion/easing/_Back/BackEaseInOut.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b89d543da2e3275d_79_new,"motion.easing._Back.BackEaseInOut","new",0x45aa08b3,"motion.easing._Back.BackEaseInOut.new","motion/easing/Back.hx",79,0x81c0c12c)
HX_LOCAL_STACK_FRAME(_hx_pos_b89d543da2e3275d_84_calculate,"motion.easing._Back.BackEaseInOut","calculate",0x1cb04df9,"motion.easing._Back.BackEaseInOut.calculate","motion/easing/Back.hx",84,0x81c0c12c)
HX_LOCAL_STACK_FRAME(_hx_pos_b89d543da2e3275d_92_ease,"motion.easing._Back.BackEaseInOut","ease",0xa9279c3b,"motion.easing._Back.BackEaseInOut.ease","motion/easing/Back.hx",92,0x81c0c12c)
namespace motion{
namespace easing{
namespace _Back{

void BackEaseInOut_obj::__construct(Float s){
            	HX_STACKFRAME(&_hx_pos_b89d543da2e3275d_79_new)
HXDLIN(  79)		this->s = s;
            	}

Dynamic BackEaseInOut_obj::__CreateEmpty() { return new BackEaseInOut_obj; }

void *BackEaseInOut_obj::_hx_vtable = 0;

Dynamic BackEaseInOut_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BackEaseInOut_obj > _hx_result = new BackEaseInOut_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BackEaseInOut_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x393c0e17;
}

static ::motion::easing::IEasing_obj _hx_motion_easing__Back_BackEaseInOut__hx_motion_easing_IEasing= {
	( Float (::hx::Object::*)(Float))&::motion::easing::_Back::BackEaseInOut_obj::calculate,
	( Float (::hx::Object::*)(Float,Float,Float,Float))&::motion::easing::_Back::BackEaseInOut_obj::ease,
};

void *BackEaseInOut_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x864e8b53: return &_hx_motion_easing__Back_BackEaseInOut__hx_motion_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float BackEaseInOut_obj::calculate(Float k){
            	HX_STACKFRAME(&_hx_pos_b89d543da2e3275d_84_calculate)
HXLINE(  86)		k = (k / ((Float)0.5));
HXDLIN(  86)		if ((k < 1)) {
HXLINE(  86)			 ::motion::easing::_Back::BackEaseInOut _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  86)			_hx_tmp->s = (_hx_tmp->s * ((Float)1.525));
HXDLIN(  86)			return (((Float)0.5) * ((k * k) * (((_hx_tmp->s + 1) * k) - this->s)));
            		}
HXLINE(  87)		k = (k - ( (Float)(2) ));
HXDLIN(  87)		 ::motion::easing::_Back::BackEaseInOut _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  87)		_hx_tmp->s = (_hx_tmp->s * ((Float)1.525));
HXDLIN(  87)		return (((Float)0.5) * (((k * k) * (((_hx_tmp->s + 1) * k) + this->s)) + 2));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BackEaseInOut_obj,calculate,return )

Float BackEaseInOut_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACKFRAME(&_hx_pos_b89d543da2e3275d_92_ease)
HXLINE(  94)		t = (t / (d / ( (Float)(2) )));
HXDLIN(  94)		if ((t < 1)) {
HXLINE(  94)			 ::motion::easing::_Back::BackEaseInOut _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  94)			_hx_tmp->s = (_hx_tmp->s * ((Float)1.525));
HXDLIN(  94)			return (((c / ( (Float)(2) )) * ((t * t) * (((_hx_tmp->s + 1) * t) - this->s))) + b);
            		}
HXLINE(  95)		t = (t - ( (Float)(2) ));
HXDLIN(  95)		 ::motion::easing::_Back::BackEaseInOut _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  95)		_hx_tmp->s = (_hx_tmp->s * ((Float)1.525));
HXDLIN(  95)		return (((c / ( (Float)(2) )) * (((t * t) * (((_hx_tmp->s + 1) * t) + this->s)) + 2)) + b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(BackEaseInOut_obj,ease,return )


::hx::ObjectPtr< BackEaseInOut_obj > BackEaseInOut_obj::__new(Float s) {
	::hx::ObjectPtr< BackEaseInOut_obj > __this = new BackEaseInOut_obj();
	__this->__construct(s);
	return __this;
}

::hx::ObjectPtr< BackEaseInOut_obj > BackEaseInOut_obj::__alloc(::hx::Ctx *_hx_ctx,Float s) {
	BackEaseInOut_obj *__this = (BackEaseInOut_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BackEaseInOut_obj), false, "motion.easing._Back.BackEaseInOut"));
	*(void **)__this = BackEaseInOut_obj::_hx_vtable;
	__this->__construct(s);
	return __this;
}

BackEaseInOut_obj::BackEaseInOut_obj()
{
}

::hx::Val BackEaseInOut_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val BackEaseInOut_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BackEaseInOut_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("s",73,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BackEaseInOut_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(BackEaseInOut_obj,s),HX_("s",73,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BackEaseInOut_obj_sStaticStorageInfo = 0;
#endif

static ::String BackEaseInOut_obj_sMemberFields[] = {
	HX_("s",73,00,00,00),
	HX_("calculate",66,95,6a,05),
	HX_("ease",ee,8b,0c,43),
	::String(null()) };

::hx::Class BackEaseInOut_obj::__mClass;

void BackEaseInOut_obj::__register()
{
	BackEaseInOut_obj _hx_dummy;
	BackEaseInOut_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.easing._Back.BackEaseInOut",41,33,cd,df);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BackEaseInOut_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BackEaseInOut_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BackEaseInOut_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BackEaseInOut_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing
} // end namespace _Back
