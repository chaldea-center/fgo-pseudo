void __fastcall BattlePerformanceTurnSituationComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4215203 & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformanceTurnSituationComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_2546/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/, v8);
    byte_4215203 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceTurnSituationComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_2546/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2546/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall BattlePerformanceTurnSituationComponent___ctor(
        BattlePerformanceTurnSituationComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceTurnSituationComponent__SetLabelWithRaidName(
        BattlePerformanceTurnSituationComponent_o *this,
        int32_t situationNo,
        System_String_o *bossName,
        int64_t param,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattlePerformanceTurnSituationComponent_c *v12; // x0
  System_String_o *LABEL_WITH_RAIDNAME_KEY; // x23
  Il2CppObject *v14; // x0
  System_String_o *v15; // x22
  System_String_o *v16; // x22
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  int64_t v20; // [xsp+8h] [xbp-38h] BYREF
  int32_t v21; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4215202 & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformanceTurnSituationComponent_TypeInfo, *(_QWORD *)&situationNo);
    sub_B0D8A4(&int_TypeInfo, v9);
    sub_B0D8A4(&long_TypeInfo, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    byte_4215202 = 1;
  }
  v12 = BattlePerformanceTurnSituationComponent_TypeInfo;
  if ( (BYTE3(BattlePerformanceTurnSituationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceTurnSituationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceTurnSituationComponent_TypeInfo);
    v12 = BattlePerformanceTurnSituationComponent_TypeInfo;
  }
  LABEL_WITH_RAIDNAME_KEY = v12->static_fields->LABEL_WITH_RAIDNAME_KEY;
  v21 = situationNo;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v15 = System_String__Format(LABEL_WITH_RAIDNAME_KEY, v14, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get(v15, 0LL);
  v20 = param;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v20);
  v18 = System_String__Format_43845440(v16, (Il2CppObject *)bossName, v17, 0LL);
  BattlePerformanceTurnSituationComponent__setMessage(this, v18, v19);
}


void __fastcall BattlePerformanceTurnSituationComponent__setMessage(
        BattlePerformanceTurnSituationComponent_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *Component_WebViewObject; // x20
  _BOOL8 v7; // x0

  if ( (byte_4215201 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UILabel___, message);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4215201 = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Component_WebViewObject )
      sub_B0D97C(v7);
    UILabel__set_text((UILabel_o *)Component_WebViewObject, message, 0LL);
  }
}