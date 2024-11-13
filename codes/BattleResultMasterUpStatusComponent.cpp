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
  __int64 v6; // x2
  UnityEngine_Object_o *oldParamLabel; // x20
  __int64 v8; // x1
  UILabel_o *v9; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x1
  UnityEngine_Object_o *newParamLabel; // x20
  UILabel_o *v14; // x19
  System_String_o *v15; // x1
  int32_t v16; // [xsp+8h] [xbp-28h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  v16 = newVal;
  v17 = oldVal;
  if ( (byte_4B19584 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&oldVal, *(_QWORD *)&newVal);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B19584 = 1;
  }
  oldParamLabel = (UnityEngine_Object_o *)this->fields.oldParamLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&oldVal);
  if ( UnityEngine_Object__op_Inequality(oldParamLabel, 0LL, 0LL) )
  {
    v9 = this->fields.oldParamLabel;
    v10 = System_Int32__ToString((int32_t)&v17, 0LL);
    if ( !v9 )
      goto LABEL_20;
    if ( v10 )
      v12 = v10;
    else
      v12 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v9, v12, 0LL);
  }
  newParamLabel = (UnityEngine_Object_o *)this->fields.newParamLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
LABEL_20:
    sub_1BCAA3C(v10, v11);
  }
}


void __fastcall BattleResultMasterUpStatusComponent__setTitle(
        BattleResultMasterUpStatusComponent_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *titleParamLabel; // x21
  __int64 v8; // x1
  System_String_o *v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x21

  if ( (byte_4B19583 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, key, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B19583 = 1;
  }
  titleParamLabel = (UnityEngine_Object_o *)this->fields.titleParamLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, key);
  if ( UnityEngine_Object__op_Inequality(titleParamLabel, 0LL, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
    v9 = LocalizationManager__Get(key, 0LL);
    if ( v9 )
    {
      v11 = v9;
      if ( System_String__Equals_62409536(v9, key, 0LL) )
        return;
      v9 = (System_String_o *)this->fields.titleParamLabel;
      if ( v9 )
      {
        UILabel__set_text((UILabel_o *)v9, v11, 0LL);
        return;
      }
    }
    sub_1BCAA3C(v9, v10);
  }
}