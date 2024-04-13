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
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 tempForceObi_16_9; // w19

  if ( (byte_42E9BB6 & 1) == 0 )
  {
    sub_B5D5C4(&CommonUI_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9BB6 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 tempForceObi_16_9; // w19

  if ( (byte_42E9BB7 & 1) == 0 )
  {
    sub_B5D5C4(&CommonUI_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9BB7 = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int32_t v12; // w1
  System_Nullable_int__o v14; // [xsp+8h] [xbp-18h] BYREF
  System_Nullable_int__o v15; // 0:x0.8

  if ( (byte_42E9BB5 & 1) == 0 )
  {
    sub_B5D5C4(&CommonUI_TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&FSUtility_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Nullable_int___ctor__, v9, v10, v11);
    byte_42E9BB5 = 1;
  }
  v14 = 0LL;
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
      v15 = (System_Nullable_int__o)&v14;
      v12 = 1344;
    }
    else
    {
      if ( (WORD1(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
      CommonUI__SetForceObi_16_9(1, 0LL);
      v15 = (System_Nullable_int__o)&v14;
      v12 = 1024;
    }
    System_Nullable_int____ctor(v15, v12, (const MethodInfo_234B2F0 *)Method_System_Nullable_int___ctor__);
  }
  return v14;
}