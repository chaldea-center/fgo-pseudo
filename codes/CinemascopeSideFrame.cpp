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

  if ( (byte_4A5EDC7 & 1) == 0 )
  {
    sub_1B885B0(&CommonUI_TypeInfo);
    byte_4A5EDC7 = 1;
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

  if ( (byte_4A5EDC8 & 1) == 0 )
  {
    sub_1B885B0(&CommonUI_TypeInfo);
    byte_4A5EDC8 = 1;
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
  bool IsFullScreenMovie; // w19
  bool v6; // w0
  int32_t v7; // w19
  System_Nullable_int__o v9; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o v10; // 0:x0.8

  if ( (byte_4A5EDC6 & 1) == 0 )
  {
    sub_1B885B0(&CommonUI_TypeInfo);
    sub_1B885B0(&FSUtility_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_int___ctor__);
    byte_4A5EDC6 = 1;
  }
  v9 = 0LL;
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
    v6 = !IsFullScreenMovie;
    if ( IsFullScreenMovie )
      v7 = 1344;
    else
      v7 = 1024;
    CommonUI__SetForceObi_16_9(v6, 0LL);
    v10 = (System_Nullable_int__o)&v9;
    System_Nullable_int____ctor(v10, v7, (const MethodInfo_361A2C0 *)Method_System_Nullable_int___ctor__);
  }
  return v9;
}