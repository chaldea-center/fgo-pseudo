void __fastcall BattlePerformanceTurnSituationComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E960F & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceTurnSituationComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_2589/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/, v8, v9, v10);
    byte_42E960F = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceTurnSituationComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_2589/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2589/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  BattlePerformanceTurnSituationComponent_c *v18; // x0
  System_String_o *LABEL_WITH_RAIDNAME_KEY; // x23
  Il2CppObject *v20; // x0
  System_String_o *v21; // x22
  System_String_o *v22; // x22
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  const MethodInfo *v25; // x2
  int64_t v26; // [xsp+8h] [xbp-38h] BYREF
  int32_t v27; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42E960E & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceTurnSituationComponent_TypeInfo, situationNo, (_DWORD)bossName, param);
    sub_B5D5C4(&int_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&long_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    byte_42E960E = 1;
  }
  v18 = BattlePerformanceTurnSituationComponent_TypeInfo;
  if ( (BYTE3(BattlePerformanceTurnSituationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceTurnSituationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceTurnSituationComponent_TypeInfo);
    v18 = BattlePerformanceTurnSituationComponent_TypeInfo;
  }
  LABEL_WITH_RAIDNAME_KEY = v18->static_fields->LABEL_WITH_RAIDNAME_KEY;
  v27 = situationNo;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  v21 = System_String__Format(LABEL_WITH_RAIDNAME_KEY, v20, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v22 = LocalizationManager__Get(v21, 0LL);
  v26 = param;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v26);
  v24 = System_String__Format_44573324(v22, (Il2CppObject *)bossName, v23, 0LL);
  BattlePerformanceTurnSituationComponent__setMessage(this, v24, v25);
}


void __fastcall BattlePerformanceTurnSituationComponent__setMessage(
        BattlePerformanceTurnSituationComponent_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *Component_WebViewObject; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E960D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UILabel___, (_DWORD)message, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E960D = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL);
  if ( !v10 )
  {
    if ( !Component_WebViewObject )
      sub_B5D69C(v10, v11);
    UILabel__set_text((UILabel_o *)Component_WebViewObject, message, 0LL);
  }
}