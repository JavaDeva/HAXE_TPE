// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Sine
#include <motion/easing/Sine.h>
#endif
#ifndef INCLUDED_motion_easing__Sine_SineEaseIn
#include <motion/easing/_Sine/SineEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing__Sine_SineEaseInOut
#include <motion/easing/_Sine/SineEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing__Sine_SineEaseOut
#include <motion/easing/_Sine/SineEaseOut.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_57a26110c664ea61_11_boot,"motion.easing.Sine","boot",0xebfbd988,"motion.easing.Sine.boot","motion/easing/Sine.hx",11,0xc8f9a0c6)
HX_LOCAL_STACK_FRAME(_hx_pos_57a26110c664ea61_12_boot,"motion.easing.Sine","boot",0xebfbd988,"motion.easing.Sine.boot","motion/easing/Sine.hx",12,0xc8f9a0c6)
HX_LOCAL_STACK_FRAME(_hx_pos_57a26110c664ea61_13_boot,"motion.easing.Sine","boot",0xebfbd988,"motion.easing.Sine.boot","motion/easing/Sine.hx",13,0xc8f9a0c6)
namespace motion{
namespace easing{

void Sine_obj::__construct() { }

Dynamic Sine_obj::__CreateEmpty() { return new Sine_obj; }

void *Sine_obj::_hx_vtable = 0;

Dynamic Sine_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Sine_obj > _hx_result = new Sine_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sine_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x04a52b42;
}

::Dynamic Sine_obj::easeIn;

::Dynamic Sine_obj::easeInOut;

::Dynamic Sine_obj::easeOut;


Sine_obj::Sine_obj()
{
}

bool Sine_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"easeIn") ) { outValue = ( easeIn ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { outValue = ( easeOut ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { outValue = ( easeInOut ); return true; }
	}
	return false;
}

bool Sine_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"easeIn") ) { easeIn=ioValue.Cast< ::Dynamic >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { easeOut=ioValue.Cast< ::Dynamic >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { easeInOut=ioValue.Cast< ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Sine_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Sine_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Sine_obj::easeIn,HX_("easeIn",73,23,3a,88)},
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Sine_obj::easeInOut,HX_("easeInOut",db,9e,bd,46)},
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Sine_obj::easeOut,HX_("easeOut",40,75,a9,aa)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Sine_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sine_obj::easeIn,"easeIn");
	HX_MARK_MEMBER_NAME(Sine_obj::easeInOut,"easeInOut");
	HX_MARK_MEMBER_NAME(Sine_obj::easeOut,"easeOut");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Sine_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sine_obj::easeIn,"easeIn");
	HX_VISIT_MEMBER_NAME(Sine_obj::easeInOut,"easeInOut");
	HX_VISIT_MEMBER_NAME(Sine_obj::easeOut,"easeOut");
};

#endif

::hx::Class Sine_obj::__mClass;

static ::String Sine_obj_sStaticFields[] = {
	HX_("easeIn",73,23,3a,88),
	HX_("easeInOut",db,9e,bd,46),
	HX_("easeOut",40,75,a9,aa),
	::String(null())
};

void Sine_obj::__register()
{
	Sine_obj _hx_dummy;
	Sine_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.easing.Sine",d8,0a,40,d8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sine_obj::__GetStatic;
	__mClass->mSetStaticField = &Sine_obj::__SetStatic;
	__mClass->mMarkFunc = Sine_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Sine_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Sine_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Sine_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sine_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sine_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Sine_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_57a26110c664ea61_11_boot)
HXDLIN(  11)		easeIn =  ::motion::easing::_Sine::SineEaseIn_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_57a26110c664ea61_12_boot)
HXDLIN(  12)		easeInOut =  ::motion::easing::_Sine::SineEaseInOut_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_57a26110c664ea61_13_boot)
HXDLIN(  13)		easeOut =  ::motion::easing::_Sine::SineEaseOut_obj::__alloc( HX_CTX );
            	}
}

} // end namespace motion
} // end namespace easing
