void __fastcall BattlePerformanceTurnSituationComponent___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7

  if ( (byte_4BDF67B & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceTurnSituationComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_3045/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/);
    byte_4BDF67B = 1;
  }
  BattlePerformanceTurnSituationComponent_TypeInfo->static_fields->LABEL_WITH_RAIDNAME_KEY = (struct System_String_o *)StringLiteral_3045/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattlePerformanceTurnSituationComponent_TypeInfo->static_fields,
    StringLiteral_3045/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  int64_t v20; // [xsp+0h] [xbp-50h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDF67A & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceTurnSituationComponent_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    byte_4BDF67A = 1;
  }
  v9 = BattlePerformanceTurnSituationComponent_TypeInfo;
  if ( !BattlePerformanceTurnSituationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceTurnSituationComponent_TypeInfo);
    v9 = BattlePerformanceTurnSituationComponent_TypeInfo;
  }
  LABEL_WITH_RAIDNAME_KEY = v9->static_fields->LABEL_WITH_RAIDNAME_KEY;
  v21 = situationNo;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, bossName, param, method);
  v12 = System_String__Format(LABEL_WITH_RAIDNAME_KEY, v11, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get(v12, 0LL);
  v20 = param;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v20, v14, v15, v16);
  v18 = System_String__Format_63129848(v13, (Il2CppObject *)bossName, v17, 0LL);
  BattlePerformanceTurnSituationComponent__setMessage(this, v18, v19);
}


void __fastcall BattlePerformanceTurnSituationComponent__setMessage(
        BattlePerformanceTurnSituationComponent_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BDF679 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF679 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !Component_object )
      sub_1C22094(v6, v7);
    UILabel__set_text((UILabel_o *)Component_object, message, 0LL);
  }
}