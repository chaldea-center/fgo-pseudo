void BattleResultMasterUpStatusComponent___ctor(BattleResultMasterUpStatusComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleResultMasterUpStatusComponent__setData(
        BattleResultMasterUpStatusComponent_o *this,
        int32_t oldVal,
        int32_t newVal,
        const MethodInfo *method)
{
  UnityEngine_Object_o *oldParamLabel; // x20
  UILabel_o *v6; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x1
  UnityEngine_Object_o *newParamLabel; // x20
  UILabel_o *v10; // x19
  System_String_o *v11; // x1
  int32_t v12; // [xsp+8h] [xbp-28h] BYREF
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v12 = newVal;
  v13 = oldVal;
  if ( (byte_4C46881 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C46881 = 1;
  }
  oldParamLabel = (UnityEngine_Object_o *)this->fields.oldParamLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(oldParamLabel, 0, 0) )
  {
    v6 = this->fields.oldParamLabel;
    v7 = System_Int32__ToString((int32_t)&v13, 0);
    if ( !v6 )
      goto LABEL_20;
    if ( v7 )
      v8 = v7;
    else
      v8 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v6, v8, 0);
  }
  newParamLabel = (UnityEngine_Object_o *)this->fields.newParamLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(newParamLabel, 0, 0) )
  {
    v10 = this->fields.newParamLabel;
    v7 = System_Int32__ToString((int32_t)&v12, 0);
    if ( v10 )
    {
      if ( v7 )
        v11 = v7;
      else
        v11 = (System_String_o *)StringLiteral_1/*""*/;
      UILabel__set_text(v10, v11, 0);
      return;
    }
LABEL_20:
    sub_1C372B4(v7);
  }
}


void BattleResultMasterUpStatusComponent__setTitle(
        BattleResultMasterUpStatusComponent_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  UnityEngine_Object_o *titleParamLabel; // x21
  System_String_o *v6; // x0
  System_String_o *v7; // x21

  if ( (byte_4C46880 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46880 = 1;
  }
  titleParamLabel = (UnityEngine_Object_o *)this->fields.titleParamLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleParamLabel, 0, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get(key, 0);
    if ( v6 )
    {
      v7 = v6;
      if ( System_String__Equals_63596960(v6, key, 0) )
        return;
      v6 = (System_String_o *)this->fields.titleParamLabel;
      if ( v6 )
      {
        UILabel__set_text((UILabel_o *)v6, v7, 0);
        return;
      }
    }
    sub_1C372B4(v6);
  }
}