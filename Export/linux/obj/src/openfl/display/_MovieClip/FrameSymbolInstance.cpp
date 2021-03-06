// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__MovieClip_FrameSymbolInstance
#include <openfl/display/_MovieClip/FrameSymbolInstance.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e7c49b2409073623_1164_new,"openfl.display._MovieClip.FrameSymbolInstance","new",0xd335e789,"openfl.display._MovieClip.FrameSymbolInstance.new","openfl/display/MovieClip.hx",1164,0x2b84738a)
namespace openfl{
namespace display{
namespace _MovieClip{

void FrameSymbolInstance_obj::__construct(int initFrame,int initFrameObjectID,int characterID,int depth, ::openfl::display::DisplayObject displayObject,int clipDepth){
            	HX_STACKFRAME(&_hx_pos_e7c49b2409073623_1164_new)
HXLINE(1165)		this->initFrame = initFrame;
HXLINE(1166)		this->initFrameObjectID = initFrameObjectID;
HXLINE(1167)		this->characterID = characterID;
HXLINE(1168)		this->depth = depth;
HXLINE(1169)		this->displayObject = displayObject;
HXLINE(1170)		this->clipDepth = clipDepth;
            	}

Dynamic FrameSymbolInstance_obj::__CreateEmpty() { return new FrameSymbolInstance_obj; }

void *FrameSymbolInstance_obj::_hx_vtable = 0;

Dynamic FrameSymbolInstance_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FrameSymbolInstance_obj > _hx_result = new FrameSymbolInstance_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FrameSymbolInstance_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7207c88b;
}


::hx::ObjectPtr< FrameSymbolInstance_obj > FrameSymbolInstance_obj::__new(int initFrame,int initFrameObjectID,int characterID,int depth, ::openfl::display::DisplayObject displayObject,int clipDepth) {
	::hx::ObjectPtr< FrameSymbolInstance_obj > __this = new FrameSymbolInstance_obj();
	__this->__construct(initFrame,initFrameObjectID,characterID,depth,displayObject,clipDepth);
	return __this;
}

::hx::ObjectPtr< FrameSymbolInstance_obj > FrameSymbolInstance_obj::__alloc(::hx::Ctx *_hx_ctx,int initFrame,int initFrameObjectID,int characterID,int depth, ::openfl::display::DisplayObject displayObject,int clipDepth) {
	FrameSymbolInstance_obj *__this = (FrameSymbolInstance_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FrameSymbolInstance_obj), true, "openfl.display._MovieClip.FrameSymbolInstance"));
	*(void **)__this = FrameSymbolInstance_obj::_hx_vtable;
	__this->__construct(initFrame,initFrameObjectID,characterID,depth,displayObject,clipDepth);
	return __this;
}

FrameSymbolInstance_obj::FrameSymbolInstance_obj()
{
}

void FrameSymbolInstance_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FrameSymbolInstance);
	HX_MARK_MEMBER_NAME(characterID,"characterID");
	HX_MARK_MEMBER_NAME(clipDepth,"clipDepth");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(displayObject,"displayObject");
	HX_MARK_MEMBER_NAME(initFrame,"initFrame");
	HX_MARK_MEMBER_NAME(initFrameObjectID,"initFrameObjectID");
	HX_MARK_END_CLASS();
}

void FrameSymbolInstance_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(characterID,"characterID");
	HX_VISIT_MEMBER_NAME(clipDepth,"clipDepth");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(displayObject,"displayObject");
	HX_VISIT_MEMBER_NAME(initFrame,"initFrame");
	HX_VISIT_MEMBER_NAME(initFrameObjectID,"initFrameObjectID");
}

::hx::Val FrameSymbolInstance_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return ::hx::Val( depth ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clipDepth") ) { return ::hx::Val( clipDepth ); }
		if (HX_FIELD_EQ(inName,"initFrame") ) { return ::hx::Val( initFrame ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"characterID") ) { return ::hx::Val( characterID ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayObject") ) { return ::hx::Val( displayObject ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"initFrameObjectID") ) { return ::hx::Val( initFrameObjectID ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FrameSymbolInstance_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clipDepth") ) { clipDepth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initFrame") ) { initFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"characterID") ) { characterID=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayObject") ) { displayObject=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"initFrameObjectID") ) { initFrameObjectID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FrameSymbolInstance_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("characterID",c4,17,bf,be));
	outFields->push(HX_("clipDepth",13,40,41,f5));
	outFields->push(HX_("depth",03,f1,29,d7));
	outFields->push(HX_("displayObject",a1,3a,a2,d6));
	outFields->push(HX_("initFrame",fd,92,15,22));
	outFields->push(HX_("initFrameObjectID",77,40,6a,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FrameSymbolInstance_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FrameSymbolInstance_obj,characterID),HX_("characterID",c4,17,bf,be)},
	{::hx::fsInt,(int)offsetof(FrameSymbolInstance_obj,clipDepth),HX_("clipDepth",13,40,41,f5)},
	{::hx::fsInt,(int)offsetof(FrameSymbolInstance_obj,depth),HX_("depth",03,f1,29,d7)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(FrameSymbolInstance_obj,displayObject),HX_("displayObject",a1,3a,a2,d6)},
	{::hx::fsInt,(int)offsetof(FrameSymbolInstance_obj,initFrame),HX_("initFrame",fd,92,15,22)},
	{::hx::fsInt,(int)offsetof(FrameSymbolInstance_obj,initFrameObjectID),HX_("initFrameObjectID",77,40,6a,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FrameSymbolInstance_obj_sStaticStorageInfo = 0;
#endif

static ::String FrameSymbolInstance_obj_sMemberFields[] = {
	HX_("characterID",c4,17,bf,be),
	HX_("clipDepth",13,40,41,f5),
	HX_("depth",03,f1,29,d7),
	HX_("displayObject",a1,3a,a2,d6),
	HX_("initFrame",fd,92,15,22),
	HX_("initFrameObjectID",77,40,6a,42),
	::String(null()) };

::hx::Class FrameSymbolInstance_obj::__mClass;

void FrameSymbolInstance_obj::__register()
{
	FrameSymbolInstance_obj _hx_dummy;
	FrameSymbolInstance_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._MovieClip.FrameSymbolInstance",17,6f,5f,e0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FrameSymbolInstance_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FrameSymbolInstance_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FrameSymbolInstance_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FrameSymbolInstance_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _MovieClip
