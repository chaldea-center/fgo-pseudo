void __fastcall BattlePerformanceTurnSituationComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FF34F & 1) == 0 )
  {
    sub_1B640C8(&BattlePerformanceTurnSituationComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_2981/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/, v4);
    byte_49FF34F = 1;
  }
  BattlePerformanceTurnSituationComponent_TypeInfo->static_fields->LABEL_WITH_RAIDNAME_KEY = (struct System_String_o *)StringLiteral_2981/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattlePerformanceTurnSituationComponent_TypeInfo->static_fields,
    StringLiteral_2981/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/,
    v2,
    v3);
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
  int64_t v20; // [xsp+0h] [xbp-50h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FF34E & 1) == 0 )
  {
    sub_1B640C8(&BattlePerformanceTurnSituationComponent_TypeInfo, *(_QWORD *)&situationNo);
    sub_1B640C8(&int_TypeInfo, v9);
    sub_1B640C8(&long_TypeInfo, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    byte_49FF34E = 1;
  }
  v12 = BattlePerformanceTurnSituationComponent_TypeInfo;
  if ( !BattlePerformanceTurnSituationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceTurnSituationComponent_TypeInfo);
    v12 = BattlePerformanceTurnSituationComponent_TypeInfo;
  }
  LABEL_WITH_RAIDNAME_KEY = v12->static_fields->LABEL_WITH_RAIDNAME_KEY;
  v21 = situationNo;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v15 = System_String__Format(LABEL_WITH_RAIDNAME_KEY, v14, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get(v15, 0LL);
  v20 = param;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v20);
  v18 = System_String__Format_61389768(v16, (Il2CppObject *)bossName, v17, 0LL);
  BattlePerformanceTurnSituationComponent__setMessage(this, v18, v19);
}


void __fastcall BattlePerformanceTurnSituationComponent__setMessage(
        BattlePerformanceTurnSituationComponent_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v7; // x0

  if ( (byte_49FF34D & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UILabel___, message);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FF34D = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Component_object )
      sub_1B64324(v7);
    UILabel__set_text((UILabel_o *)Component_object, message, 0LL);
  }
}