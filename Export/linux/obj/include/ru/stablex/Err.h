// Generated by Haxe 4.1.1
#ifndef INCLUDED_ru_stablex_Err
#define INCLUDED_ru_stablex_Err

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_658ae668b369d9c5_33_new)
HX_DECLARE_CLASS2(ru,stablex,Err)

namespace ru{
namespace stablex{


class HXCPP_CLASS_ATTRIBUTES Err_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Err_obj OBJ_;
		Err_obj();

	public:
		enum { _hx_ClassId = 0x2379de8b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="ru.stablex.Err")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"ru.stablex.Err"); }

		inline static ::hx::ObjectPtr< Err_obj > __new() {
			::hx::ObjectPtr< Err_obj > __this = new Err_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Err_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Err_obj *__this = (Err_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Err_obj), false, "ru.stablex.Err"));
			*(void **)__this = Err_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_658ae668b369d9c5_33_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Err_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Err",45,bf,34,00); }

		static void trigger(::String msg);
		static ::Dynamic trigger_dyn();

};

} // end namespace ru
} // end namespace stablex

#endif /* INCLUDED_ru_stablex_Err */ 
