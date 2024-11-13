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
  __int64 v2; // x2
  _BOOL4 tempForceObi_16_9; // w19

  if ( (byte_4B19F37 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonUI_TypeInfo, method, v2);
    byte_4B19F37 = 1;
  }
  if ( this->fields.hide )
  {
    tempForceObi_16_9 = this->fields.tempForceObi_16_9;
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, method);
    CommonUI__SetForceObi_16_9(tempForceObi_16_9, 0LL);
  }
}


void __fastcall CinemascopeSideFrame__HideLater(CinemascopeSideFrame_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 tempForceObi_16_9; // w19

  if ( (byte_4B19F38 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonUI_TypeInfo, method, v2);
    byte_4B19F38 = 1;
  }
  if ( !this->fields.hide )
  {
    tempForceObi_16_9 = this->fields.tempForceObi_16_9;
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, method);
    CommonUI__SetForceObi_16_9(tempForceObi_16_9, 0LL);
  }
}


System_Nullable_int__o __fastcall CinemascopeSideFrame__Show(
        CinemascopeSideFrame_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x1
  bool IsFullScreenMovie; // w19
  bool v12; // w0
  int32_t v13; // w19
  System_Nullable_int__o v15; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o v16; // 0:x0.8

  if ( (byte_4B19F36 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonUI_TypeInfo, name, method);
    sub_1BCA7E0(&FSUtility_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v7, v8);
    byte_4B19F36 = 1;
  }
  v15 = 0LL;
  if ( this->fields.show )
  {
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, name);
    this->fields.tempForceObi_16_9 = CommonUI__GetForceObi_16_9(0LL);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v9);
    IsFullScreenMovie = FSUtility__IsFullScreenMovie(name, 0LL);
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, v10);
    v12 = !IsFullScreenMovie;
    if ( IsFullScreenMovie )
      v13 = 1344;
    else
      v13 = 1024;
    CommonUI__SetForceObi_16_9(v12, 0LL);
    v16 = (System_Nullable_int__o)&v15;
    System_Nullable_int____ctor(v16, v13, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
  }
  return v15;
}