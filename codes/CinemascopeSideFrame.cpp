void CinemascopeSideFrame___ctor(CinemascopeSideFrame_o *this, bool show, bool hide, const MethodInfo *method)
{
  *(_WORD *)&this->fields.show = 257;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.show = show;
  this->fields.hide = hide;
}


void CinemascopeSideFrame__Hide(CinemascopeSideFrame_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 tempForceObi_16_9; // w19

  if ( (byte_596A460 & 1) == 0 )
  {
    sub_2213A60(&CommonUI_TypeInfo);
    byte_596A460 = 1;
  }
  if ( this->fields.hide )
  {
    tempForceObi_16_9 = this->fields.tempForceObi_16_9;
    if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, method, v2);
    CommonUI__SetForceObi_16_9(tempForceObi_16_9, 0);
  }
}


void CinemascopeSideFrame__HideLater(CinemascopeSideFrame_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 tempForceObi_16_9; // w19

  if ( (byte_596A461 & 1) == 0 )
  {
    sub_2213A60(&CommonUI_TypeInfo);
    byte_596A461 = 1;
  }
  if ( !this->fields.hide )
  {
    tempForceObi_16_9 = this->fields.tempForceObi_16_9;
    if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, method, v2);
    CommonUI__SetForceObi_16_9(tempForceObi_16_9, 0);
  }
}


System_Nullable_int__o CinemascopeSideFrame__Show(
        CinemascopeSideFrame_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  _BOOL4 show; // w8
  __int64 v6; // x1
  __int64 v7; // x2
  bool ForceObi_16_9; // w8
  FSUtility_c *v9; // x0
  int v10; // w9
  __int64 v11; // x1
  __int64 v12; // x2
  bool IsFullScreenMovie; // w8
  bool v14; // w21
  int32_t v15; // w19
  System_Nullable_int__o v16; // x0
  System_Nullable_int__o v18; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596A45F & 1) == 0 )
  {
    sub_2213A60(&CommonUI_TypeInfo);
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    byte_596A45F = 1;
  }
  show = this->fields.show;
  v18 = 0;
  if ( show )
  {
    if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, name, method);
    ForceObi_16_9 = CommonUI__GetForceObi_16_9(0);
    v9 = FSUtility_TypeInfo;
    v10 = *(&FSUtility_TypeInfo->_2.cctor_finished + 1);
    this->fields.tempForceObi_16_9 = ForceObi_16_9;
    if ( !v10 )
      j_il2cpp_runtime_class_init_0(v9, v6, v7);
    IsFullScreenMovie = FSUtility__IsFullScreenMovie(name, 0);
    v14 = !IsFullScreenMovie;
    if ( IsFullScreenMovie )
      v15 = 1344;
    else
      v15 = 1024;
    if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, v11, v12);
    CommonUI__SetForceObi_16_9(v14, 0);
    v16 = (System_Nullable_int__o)&v18;
    System_Nullable_int____ctor(v16, v15, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
  }
  return v18;
}