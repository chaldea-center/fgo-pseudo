void __fastcall CinemascopeSideFrame___ctor(
        CinemascopeSideFrame_o *this,
        bool show,
        bool hide,
        const MethodInfo *method)
{
  *(_WORD *)&this->fields.show = 257;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.show = show;
  this->fields.hide = hide;
}


void __fastcall CinemascopeSideFrame__Hide(CinemascopeSideFrame_o *this, const MethodInfo *method)
{
  _BOOL4 tempForceObi_16_9; // w19

  if ( (byte_42B37D4 & 1) == 0 )
  {
    sub_B52984(&CommonUI_TypeInfo);
    byte_42B37D4 = 1;
  }
  if ( this->fields.hide )
  {
    tempForceObi_16_9 = this->fields.tempForceObi_16_9;
    if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    CommonUI__SetForceObi_16_9(tempForceObi_16_9, 0LL);
  }
}


void __fastcall CinemascopeSideFrame__HideLater(CinemascopeSideFrame_o *this, const MethodInfo *method)
{
  _BOOL4 tempForceObi_16_9; // w19

  if ( (byte_42B37D5 & 1) == 0 )
  {
    sub_B52984(&CommonUI_TypeInfo);
    byte_42B37D5 = 1;
  }
  if ( !this->fields.hide )
  {
    tempForceObi_16_9 = this->fields.tempForceObi_16_9;
    if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    CommonUI__SetForceObi_16_9(tempForceObi_16_9, 0LL);
  }
}


System_Nullable_int__o __fastcall CinemascopeSideFrame__Show(
        CinemascopeSideFrame_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t v5; // w1
  System_Nullable_int__o v7; // [xsp+8h] [xbp-18h] BYREF
  System_Nullable_int__o v8; // 0:x0.8

  if ( (byte_42B37D3 & 1) == 0 )
  {
    sub_B52984(&CommonUI_TypeInfo);
    sub_B52984(&FSUtility_TypeInfo);
    sub_B52984(&Method_System_Nullable_int___ctor__);
    byte_42B37D3 = 1;
  }
  v7 = 0LL;
  if ( this->fields.show )
  {
    if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    this->fields.tempForceObi_16_9 = CommonUI__GetForceObi_16_9(0LL);
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    if ( FSUtility__IsFullScreenMovie(name, 0LL) )
    {
      if ( (WORD1(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
      CommonUI__SetForceObi_16_9(0, 0LL);
      v8 = (System_Nullable_int__o)&v7;
      v5 = 1344;
    }
    else
    {
      if ( (WORD1(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
      CommonUI__SetForceObi_16_9(1, 0LL);
      v8 = (System_Nullable_int__o)&v7;
      v5 = 1024;
    }
    System_Nullable_int____ctor(v8, v5, (const MethodInfo_21718F4 *)Method_System_Nullable_int___ctor__);
  }
  return v7;
}