void __fastcall BattleResultMasterUpStatusComponent___ctor(
        BattleResultMasterUpStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultMasterUpStatusComponent__setData(
        BattleResultMasterUpStatusComponent_o *this,
        int32_t oldVal,
        int32_t newVal,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *oldParamLabel; // x20
  UILabel_o *v7; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x1
  UnityEngine_Object_o *newParamLabel; // x20
  UILabel_o *v11; // x19
  System_String_o *v12; // x1
  int32_t v13; // [xsp+8h] [xbp-18h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  v13 = newVal;
  v14 = oldVal;
  if ( (byte_421493B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&oldVal);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_421493B = 1;
  }
  oldParamLabel = (UnityEngine_Object_o *)this->fields.oldParamLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(oldParamLabel, 0LL, 0LL) )
  {
    v7 = this->fields.oldParamLabel;
    v8 = System_Int32__ToString((int32_t)&v14, 0LL);
    if ( !v7 )
      goto LABEL_22;
    if ( v8 )
      v9 = v8;
    else
      v9 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v7, v9, 0LL);
  }
  newParamLabel = (UnityEngine_Object_o *)this->fields.newParamLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(newParamLabel, 0LL, 0LL) )
  {
    v11 = this->fields.newParamLabel;
    v8 = System_Int32__ToString((int32_t)&v13, 0LL);
    if ( v11 )
    {
      if ( v8 )
        v12 = v8;
      else
        v12 = (System_String_o *)StringLiteral_1/*""*/;
      UILabel__set_text(v11, v12, 0LL);
      return;
    }
LABEL_22:
    sub_B0D97C(v8);
  }
}


void __fastcall BattleResultMasterUpStatusComponent__setTitle(
        BattleResultMasterUpStatusComponent_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *titleParamLabel; // x21
  System_String_o *v7; // x0
  System_String_o *v8; // x21

  if ( (byte_421493A & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, key);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_421493A = 1;
  }
  titleParamLabel = (UnityEngine_Object_o *)this->fields.titleParamLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleParamLabel, 0LL, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = LocalizationManager__Get(key, 0LL);
    if ( v7 )
    {
      v8 = v7;
      if ( System_String__Equals_43837244(v7, key, 0LL) )
        return;
      v7 = (System_String_o *)this->fields.titleParamLabel;
      if ( v7 )
      {
        UILabel__set_text((UILabel_o *)v7, v8, 0LL);
        return;
      }
    }
    sub_B0D97C(v7);
  }
}