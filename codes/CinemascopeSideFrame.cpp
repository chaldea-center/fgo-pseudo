void CinemascopeSideFrame___ctor(CinemascopeSideFrame_o *this, bool show, bool hide, const MethodInfo *method)
{
  bool v4; // w20
  bool v6; // w21

  v4 = show;
  v6 = hide;
  *(_WORD *)&this->fields.show = 257;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.show = v4;
  this->fields.hide = v6;
}


void CinemascopeSideFrame__Hide(CinemascopeSideFrame_o *this, const MethodInfo *method)
{
  _BOOL4 tempForceObi_16_9; // w19

  if ( (byte_4D2A995 & 1) == 0 )
  {
    sub_1C93AD4(&CommonUI_TypeInfo);
    byte_4D2A995 = 1;
  }
  if ( this->fields.hide )
  {
    tempForceObi_16_9 = this->fields.tempForceObi_16_9;
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    CommonUI__SetForceObi_16_9(tempForceObi_16_9, 0);
  }
}


void CinemascopeSideFrame__HideLater(CinemascopeSideFrame_o *this, const MethodInfo *method)
{
  _BOOL4 tempForceObi_16_9; // w19

  if ( (byte_4D2A996 & 1) == 0 )
  {
    sub_1C93AD4(&CommonUI_TypeInfo);
    byte_4D2A996 = 1;
  }
  if ( !this->fields.hide )
  {
    tempForceObi_16_9 = this->fields.tempForceObi_16_9;
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    CommonUI__SetForceObi_16_9(tempForceObi_16_9, 0);
  }
}


System_Nullable_int__o CinemascopeSideFrame__Show(
        CinemascopeSideFrame_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  bool IsFullScreenMovie; // w19
  bool v6; // w0
  int32_t v7; // w19
  System_Nullable_int__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2A994 & 1) == 0 )
  {
    sub_1C93AD4(&CommonUI_TypeInfo);
    sub_1C93AD4(&FSUtility_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_int___ctor__);
    byte_4D2A994 = 1;
  }
  v8 = 0;
  if ( this->fields.show )
  {
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    this->fields.tempForceObi_16_9 = CommonUI__GetForceObi_16_9(0);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    IsFullScreenMovie = FSUtility__IsFullScreenMovie(name, 0);
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    v6 = !IsFullScreenMovie;
    if ( IsFullScreenMovie )
      v7 = 1344;
    else
      v7 = 1024;
    CommonUI__SetForceObi_16_9(v6, 0);
    System_Nullable_int____ctor(
      (System_Nullable_int__o)&v8,
      v7,
      (const MethodInfo_399F80C *)Method_System_Nullable_int___ctor__);
  }
  return v8;
}