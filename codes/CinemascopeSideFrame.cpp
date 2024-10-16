void __fastcall CinemascopeSideFrame___ctor(
        CinemascopeSideFrame_o *this,
        bool show,
        bool hide,
        const MethodInfo *method)
{
  bool v4; // w20
  bool v6; // w21

  v4 = show;
  v6 = hide;
  *(_WORD *)&this->fields.show = 257;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.show = v4;
  this->fields.hide = v6;
}


void __fastcall CinemascopeSideFrame__Hide(CinemascopeSideFrame_o *this, const MethodInfo *method)
{
  _BOOL4 tempForceObi_16_9; // w19

  if ( (byte_4AB9A07 & 1) == 0 )
  {
    sub_1BAB41C(&CommonUI_TypeInfo, method);
    byte_4AB9A07 = 1;
  }
  if ( this->fields.hide )
  {
    tempForceObi_16_9 = this->fields.tempForceObi_16_9;
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    CommonUI__SetForceObi_16_9(tempForceObi_16_9, 0LL);
  }
}


void __fastcall CinemascopeSideFrame__HideLater(CinemascopeSideFrame_o *this, const MethodInfo *method)
{
  _BOOL4 tempForceObi_16_9; // w19

  if ( (byte_4AB9A08 & 1) == 0 )
  {
    sub_1BAB41C(&CommonUI_TypeInfo, method);
    byte_4AB9A08 = 1;
  }
  if ( !this->fields.hide )
  {
    tempForceObi_16_9 = this->fields.tempForceObi_16_9;
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    CommonUI__SetForceObi_16_9(tempForceObi_16_9, 0LL);
  }
}


System_Nullable_int__o __fastcall CinemascopeSideFrame__Show(
        CinemascopeSideFrame_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  bool IsFullScreenMovie; // w19
  bool v8; // w0
  int32_t v9; // w19
  System_Nullable_int__o v11; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o v12; // 0:x0.8

  if ( (byte_4AB9A06 & 1) == 0 )
  {
    sub_1BAB41C(&CommonUI_TypeInfo, name);
    sub_1BAB41C(&FSUtility_TypeInfo, v5);
    sub_1BAB41C(&Method_System_Nullable_int___ctor__, v6);
    byte_4AB9A06 = 1;
  }
  v11 = 0LL;
  if ( this->fields.show )
  {
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    this->fields.tempForceObi_16_9 = CommonUI__GetForceObi_16_9(0LL);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    IsFullScreenMovie = FSUtility__IsFullScreenMovie(name, 0LL);
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    v8 = !IsFullScreenMovie;
    if ( IsFullScreenMovie )
      v9 = 1344;
    else
      v9 = 1024;
    CommonUI__SetForceObi_16_9(v8, 0LL);
    v12 = (System_Nullable_int__o)&v11;
    System_Nullable_int____ctor(v12, v9, (const MethodInfo_366A5D4 *)Method_System_Nullable_int___ctor__);
  }
  return v11;
}