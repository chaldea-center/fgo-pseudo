void __fastcall BattleResultMasterUpStatusComponent___ctor(
        BattleResultMasterUpStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultMasterUpStatusComponent__setData(
        BattleResultMasterUpStatusComponent_o *this,
        int32_t oldVal,
        int32_t newVal,
        const MethodInfo *method)
{
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *oldParamLabel; // x20
  UILabel_o *v9; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x1
  UnityEngine_Object_o *newParamLabel; // x20
  UILabel_o *v14; // x19
  System_String_o *v15; // x1
  int32_t v16; // [xsp+8h] [xbp-18h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-14h] BYREF

  v16 = newVal;
  v17 = oldVal;
  if ( (byte_42E5727 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, oldVal, newVal, method);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E5727 = 1;
  }
  oldParamLabel = (UnityEngine_Object_o *)this->fields.oldParamLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(oldParamLabel, 0LL, 0LL) )
  {
    v9 = this->fields.oldParamLabel;
    v10 = System_Int32__ToString((int32_t)&v17, 0LL);
    if ( !v9 )
      goto LABEL_22;
    if ( v10 )
      v12 = v10;
    else
      v12 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v9, v12, 0LL);
  }
  newParamLabel = (UnityEngine_Object_o *)this->fields.newParamLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(newParamLabel, 0LL, 0LL) )
  {
    v14 = this->fields.newParamLabel;
    v10 = System_Int32__ToString((int32_t)&v16, 0LL);
    if ( v14 )
    {
      if ( v10 )
        v15 = v10;
      else
        v15 = (System_String_o *)StringLiteral_1/*""*/;
      UILabel__set_text(v14, v15, 0LL);
      return;
    }
LABEL_22:
    sub_B5D69C(v10, v11);
  }
}


void __fastcall BattleResultMasterUpStatusComponent__setTitle(
        BattleResultMasterUpStatusComponent_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *titleParamLabel; // x21
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x21

  if ( (byte_42E5726 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)key, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E5726 = 1;
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
    v10 = LocalizationManager__Get(key, 0LL);
    if ( v10 )
    {
      v12 = v10;
      if ( System_String__Equals_44565128(v10, key, 0LL) )
        return;
      v10 = (System_String_o *)this->fields.titleParamLabel;
      if ( v10 )
      {
        UILabel__set_text((UILabel_o *)v10, v12, 0LL);
        return;
      }
    }
    sub_B5D69C(v10, v11);
  }
}