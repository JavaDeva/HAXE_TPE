// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Quad
#include <motion/easing/Quad.h>
#endif
#ifndef INCLUDED_motion_easing__Quad_QuadEaseIn
#include <motion/easing/_Quad/QuadEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing__Quad_QuadEaseInOut
#include <motion/easing/_Quad/QuadEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing__Quad_QuadEaseOut
#include <motion/easing/_Quad/QuadEaseOut.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3784bb7fa9fa2f27_11_boot,"motion.easing.Quad","boot",0x7183fcce,"motion.easing.Quad.boot","motion/easing/Quad.hx",11,0xc538468c)
HX_LOCAL_STACK_FRAME(_hx_pos_3784bb7fa9fa2f27_12_boot,"motion.easing.Quad","boot",0x7183fcce,"motion.easing.Quad.boot","motion/easing/Quad.hx",12,0xc538468c)
HX_LOCAL_STACK_FRAME(_hx_pos_3784bb7fa9fa2f27_13_boot,"motion.easing.Quad","boot",0x7183fcce,"motion.easing.Quad.boot","motion/easing/Quad.hx",13,0xc538468c)
namespace motion{
namespace easing{

void Quad_obj::__construct() { }

Dynamic Quad_obj::__CreateEmpty() { return new Quad_obj; }

void *Quad_obj::_hx_vtable = 0;

Dynamic Quad_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Quad_obj > _hx_result = new Quad_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Quad_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x035bcdbc;
}

::Dynamic Quad_obj::easeIn;

::Dynamic Quad_obj::easeInOut;

::Dynamic Quad_obj::easeOut;


Quad_obj::Quad_obj()
{
}

bool Quad_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

bool Quad_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *Quad_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Quad_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Quad_obj::easeIn,HX_("easeIn",73,23,3a,88)},
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Quad_obj::easeInOut,HX_("easeInOut",db,9e,bd,46)},
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Quad_obj::easeOut,HX_("easeOut",40,75,a9,aa)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Quad_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Quad_obj::easeIn,"easeIn");
	HX_MARK_MEMBER_NAME(Quad_obj::easeInOut,"easeInOut");
	HX_MARK_MEMBER_NAME(Quad_obj::easeOut,"easeOut");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Quad_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Quad_obj::easeIn,"easeIn");
	HX_VISIT_MEMBER_NAME(Quad_obj::easeInOut,"easeInOut");
	HX_VISIT_MEMBER_NAME(Quad_obj::easeOut,"easeOut");
};

#endif

::hx::Class Quad_obj::__mClass;

static ::String Quad_obj_sStaticFields[] = {
	HX_("easeIn",73,23,3a,88),
	HX_("easeInOut",db,9e,bd,46),
	HX_("easeOut",40,75,a9,aa),
	::String(null())
};

void Quad_obj::__register()
{
	Quad_obj _hx_dummy;
	Quad_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.easing.Quad",52,ad,f6,d6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Quad_obj::__GetStatic;
	__mClass->mSetStaticField = &Quad_obj::__SetStatic;
	__mClass->mMarkFunc = Quad_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Quad_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Quad_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Quad_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Quad_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Quad_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Quad_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_3784bb7fa9fa2f27_11_boot)
HXDLIN(  11)		easeIn =  ::motion::easing::_Quad::QuadEaseIn_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_3784bb7fa9fa2f27_12_boot)
HXDLIN(  12)		easeInOut =  ::motion::easing::_Quad::QuadEaseInOut_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_3784bb7fa9fa2f27_13_boot)
HXDLIN(  13)		easeOut =  ::motion::easing::_Quad::QuadEaseOut_obj::__alloc( HX_CTX );
            	}
}

} // end namespace motion
} // end namespace easing
