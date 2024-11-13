void __fastcall BattlePerformanceTurnSituationComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B1923E & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceTurnSituationComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_3022/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/, v8, v9);
    byte_4B1923E = 1;
  }
  BattlePerformanceTurnSituationComponent_TypeInfo->static_fields->LABEL_WITH_RAIDNAME_KEY = (struct System_String_o *)StringLiteral_3022/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattlePerformanceTurnSituationComponent_TypeInfo->static_fields,
    StringLiteral_3022/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  BattlePerformanceTurnSituationComponent_c *v15; // x0
  System_String_o *LABEL_WITH_RAIDNAME_KEY; // x23
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x22
  System_String_o *v20; // x22
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  const MethodInfo *v23; // x2
  int64_t v24; // [xsp+0h] [xbp-50h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1923D & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceTurnSituationComponent_TypeInfo, *(_QWORD *)&situationNo, bossName);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&long_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    byte_4B1923D = 1;
  }
  v15 = BattlePerformanceTurnSituationComponent_TypeInfo;
  if ( !BattlePerformanceTurnSituationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceTurnSituationComponent_TypeInfo, *(_QWORD *)&situationNo);
    v15 = BattlePerformanceTurnSituationComponent_TypeInfo;
  }
  LABEL_WITH_RAIDNAME_KEY = v15->static_fields->LABEL_WITH_RAIDNAME_KEY;
  v25 = situationNo;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v19 = System_String__Format(LABEL_WITH_RAIDNAME_KEY, v17, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
  v20 = LocalizationManager__Get(v19, 0LL);
  v24 = param;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v24);
  v22 = System_String__Format_62415592(v20, (Il2CppObject *)bossName, v21, 0LL);
  BattlePerformanceTurnSituationComponent__setMessage(this, v22, v23);
}


void __fastcall BattlePerformanceTurnSituationComponent__setMessage(
        BattlePerformanceTurnSituationComponent_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B1923C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UILabel___, message, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B1923C = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Component_object )
      sub_1BCAA3C(v9, v10);
    UILabel__set_text((UILabel_o *)Component_object, message, 0LL);
  }
}