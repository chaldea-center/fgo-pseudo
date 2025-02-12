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

  if ( (byte_4BB77E1 & 1) == 0 )
  {
    sub_1C13D24(&BattlePerformanceTurnSituationComponent_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_3033/*"BATTLE_SVT_COMMON_FLAG"*/, v8);
    byte_4BB77E1 = 1;
  }
  BattlePerformanceTurnSituationComponent_TypeInfo->static_fields->LABEL_WITH_RAIDNAME_KEY = (struct System_String_o *)StringLiteral_3033/*"BATTLE_SVT_COMMON_FLAG"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)BattlePerformanceTurnSituationComponent_TypeInfo->static_fields,
    StringLiteral_3033/*"BATTLE_SVT_COMMON_FLAG"*/,
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
  __int64 v10; // x1
  __int64 v11; // x1
  BattlePerformanceTurnSituationComponent_c *v12; // x0
  System_String_o *LABEL_WITH_RAIDNAME_KEY; // x23
  Il2CppObject *v14; // x0
  System_String_o *v15; // x22
  System_String_o *v16; // x22
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  const MethodInfo *v22; // x2
  int64_t v23; // [xsp+0h] [xbp-50h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BB77E0 & 1) == 0 )
  {
    sub_1C13D24(&BattlePerformanceTurnSituationComponent_TypeInfo, *(_QWORD *)&situationNo);
    sub_1C13D24(&int_TypeInfo, v9);
    sub_1C13D24(&long_TypeInfo, v10);
    sub_1C13D24(&LocalizationManager_TypeInfo, v11);
    byte_4BB77E0 = 1;
  }
  v12 = BattlePerformanceTurnSituationComponent_TypeInfo;
  if ( !BattlePerformanceTurnSituationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceTurnSituationComponent_TypeInfo);
    v12 = BattlePerformanceTurnSituationComponent_TypeInfo;
  }
  LABEL_WITH_RAIDNAME_KEY = v12->static_fields->LABEL_WITH_RAIDNAME_KEY;
  v24 = situationNo;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, bossName, param, method);
  v15 = System_String__Format(LABEL_WITH_RAIDNAME_KEY, v14, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get(v15, 0LL);
  v23 = param;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23, v17, v18, v19);
  v21 = System_String__Format_62982316(v16, (Il2CppObject *)bossName, v20, 0LL);
  BattlePerformanceTurnSituationComponent__setMessage(this, v21, v22);
}


void __fastcall BattlePerformanceTurnSituationComponent__setMessage(
        BattlePerformanceTurnSituationComponent_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BB77DF & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UILabel___, message);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    byte_4BB77DF = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Component_object )
      sub_1C13F80(v7, v8);
    UILabel__set_text((UILabel_o *)Component_object, message, 0LL);
  }
}