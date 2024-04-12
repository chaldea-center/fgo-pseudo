void __fastcall BattlePerformanceTurnSituationComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_42B09EA & 1) == 0 )
  {
    sub_B52984(&BattlePerformanceTurnSituationComponent_TypeInfo);
    sub_B52984(&StringLiteral_2567/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/);
    byte_42B09EA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceTurnSituationComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_2567/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2567/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall BattlePerformanceTurnSituationComponent___ctor(
        BattlePerformanceTurnSituationComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceTurnSituationComponent__SetLabelWithRaidName(
        BattlePerformanceTurnSituationComponent_o *this,
        int32_t situationNo,
        System_String_o *bossName,
        int64_t param,
        const MethodInfo *method)
{
  BattlePerformanceTurnSituationComponent_c *v9; // x0
  System_String_o *LABEL_WITH_RAIDNAME_KEY; // x23
  Il2CppObject *v11; // x0
  System_String_o *v12; // x22
  System_String_o *v13; // x22
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  const MethodInfo *v16; // x2
  int64_t v17; // [xsp+8h] [xbp-38h] BYREF
  int32_t v18; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42B09E9 & 1) == 0 )
  {
    sub_B52984(&BattlePerformanceTurnSituationComponent_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42B09E9 = 1;
  }
  v9 = BattlePerformanceTurnSituationComponent_TypeInfo;
  if ( (BYTE3(BattlePerformanceTurnSituationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceTurnSituationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceTurnSituationComponent_TypeInfo);
    v9 = BattlePerformanceTurnSituationComponent_TypeInfo;
  }
  LABEL_WITH_RAIDNAME_KEY = v9->static_fields->LABEL_WITH_RAIDNAME_KEY;
  v18 = situationNo;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v12 = System_String__Format(LABEL_WITH_RAIDNAME_KEY, v11, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get(v12, 0LL);
  v17 = param;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17);
  v15 = System_String__Format_44563852(v13, (Il2CppObject *)bossName, v14, 0LL);
  BattlePerformanceTurnSituationComponent__setMessage(this, v15, v16);
}


void __fastcall BattlePerformanceTurnSituationComponent__setMessage(
        BattlePerformanceTurnSituationComponent_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Component_WebViewObject; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_42B09E8 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B09E8 = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !Component_WebViewObject )
      sub_B52A5C(v6, v7);
    UILabel__set_text((UILabel_o *)Component_WebViewObject, message, 0LL);
  }
}