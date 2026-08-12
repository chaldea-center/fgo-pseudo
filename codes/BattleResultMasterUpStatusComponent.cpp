void BattleResultMasterUpStatusComponent___ctor(BattleResultMasterUpStatusComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultMasterUpStatusComponent__setData(
        BattleResultMasterUpStatusComponent_o *this,
        int32_t oldVal,
        int32_t newVal,
        const MethodInfo *method)
{
  UnityEngine_Object_o *oldParamLabel; // x20
  __int64 v6; // x1
  UILabel_o *v7; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x1
  UnityEngine_Object_o *newParamLabel; // x20
  UILabel_o *v12; // x19
  System_String_o *v13; // x1
  int32_t v14; // [xsp+8h] [xbp-28h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v15 = oldVal;
  v14 = newVal;
  if ( (byte_597450C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597450C = 1;
  }
  oldParamLabel = (UnityEngine_Object_o *)this->fields.oldParamLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&oldVal);
  if ( UnityEngine_Object__op_Inequality(oldParamLabel, 0, 0) )
  {
    v7 = this->fields.oldParamLabel;
    v8 = System_Int32__ToString((int32_t)&v15, 0);
    if ( !v7 )
      goto LABEL_20;
    if ( v8 )
      v10 = v8;
    else
      v10 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v7, v10, 0);
  }
  newParamLabel = (UnityEngine_Object_o *)this->fields.newParamLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(newParamLabel, 0, 0) )
  {
    v12 = this->fields.newParamLabel;
    v8 = System_Int32__ToString((int32_t)&v14, 0);
    if ( v12 )
    {
      if ( v8 )
        v13 = v8;
      else
        v13 = (System_String_o *)StringLiteral_1/*""*/;
      UILabel__set_text(v12, v13, 0);
      return;
    }
LABEL_20:
    sub_2213CDC(v8, v9);
  }
}


void BattleResultMasterUpStatusComponent__setTitle(
        BattleResultMasterUpStatusComponent_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  UnityEngine_Object_o *titleParamLabel; // x21
  __int64 v6; // x1
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x21

  if ( (byte_597450B & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597450B = 1;
  }
  titleParamLabel = (UnityEngine_Object_o *)this->fields.titleParamLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, key);
  if ( UnityEngine_Object__op_Inequality(titleParamLabel, 0, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    v7 = LocalizationManager__Get(key, 0);
    if ( v7 )
    {
      v9 = v7;
      if ( System_String__Equals_75686512(v7, key, 0) )
        return;
      v7 = (System_String_o *)this->fields.titleParamLabel;
      if ( v7 )
      {
        UILabel__set_text((UILabel_o *)v7, v9, 0);
        return;
      }
    }
    sub_2213CDC(v7, v8);
  }
}