void BattlePerformanceTurnSituationComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct BattlePerformanceTurnSituationComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct BattlePerformanceTurnSituationComponent_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5974122 & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceTurnSituationComponent_TypeInfo);
    sub_2213A60(&StringLiteral_3010/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_PREFIX_{0}"*/);
    sub_2213A60(&StringLiteral_3008/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/);
    sub_2213A60(&StringLiteral_3009/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_DAMAGE_NUM_{0}"*/);
    byte_5974122 = 1;
  }
  v7 = StringLiteral_3010/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_PREFIX_{0}"*/;
  BattlePerformanceTurnSituationComponent_TypeInfo->static_fields->LabelWithRaidPrefixKey = (struct System_String_o *)StringLiteral_3010/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_PREFIX_{0}"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattlePerformanceTurnSituationComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_3009/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_DAMAGE_NUM_{0}"*/;
  static_fields = BattlePerformanceTurnSituationComponent_TypeInfo->static_fields;
  static_fields->LabelWithRaidDamageNumKey = (struct System_String_o *)StringLiteral_3009/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_DAMAGE_NUM_{0}"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->LabelWithRaidDamageNumKey,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_3008/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/;
  v17 = BattlePerformanceTurnSituationComponent_TypeInfo->static_fields;
  v17->LABEL_WITH_RAIDNAME_KEY = (struct System_String_o *)StringLiteral_3008/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->LABEL_WITH_RAIDNAME_KEY, v16, v18, v19, v20, v21, v22, v23);
}


void BattlePerformanceTurnSituationComponent___ctor(
        BattlePerformanceTurnSituationComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceTurnSituationComponent__SetLabelWithRaidName(
        BattlePerformanceTurnSituationComponent_o *this,
        int32_t situationNo,
        System_String_o *bossName,
        int64_t param,
        const MethodInfo *method)
{
  UnityEngine_Object_o *numLabel; // x23
  __int64 v10; // x1
  UnityEngine_Object_o *numTextLabel; // x23
  BattlePerformanceTurnSituationComponent_c *v12; // x0
  System_String_o *LabelWithRaidPrefixKey; // x22
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x22
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  UILabel_o *v20; // x20
  System_String_o *v21; // x0
  __int64 v22; // x1
  System_String_o *LabelWithRaidDamageNumKey; // x20
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  BattlePerformanceTurnSituationComponent_c *v26; // x0
  struct BattlePerformanceTurnSituationComponent_StaticFields *static_fields; // x8
  System_String_o *LABEL_WITH_RAIDNAME_KEY; // x23
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  System_String_o *v31; // x21
  System_String_o *v32; // x21
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  const MethodInfo *v35; // x2
  int64_t v36; // [xsp+0h] [xbp-60h] BYREF
  int32_t v37; // [xsp+Ch] [xbp-54h] BYREF
  int64_t v38; // [xsp+18h] [xbp-48h] BYREF

  v38 = param;
  if ( (byte_5974121 & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceTurnSituationComponent_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_422/*"#,0"*/);
    byte_5974121 = 1;
  }
  numLabel = (UnityEngine_Object_o *)this->fields.numLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&situationNo);
  if ( !UnityEngine_Object__op_Inequality(numLabel, 0, 0) )
    goto LABEL_16;
  numTextLabel = (UnityEngine_Object_o *)this->fields.numTextLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(numTextLabel, 0, 0) )
  {
    v12 = BattlePerformanceTurnSituationComponent_TypeInfo;
    if ( !*(&BattlePerformanceTurnSituationComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceTurnSituationComponent_TypeInfo, v10);
      v12 = BattlePerformanceTurnSituationComponent_TypeInfo;
    }
    LabelWithRaidPrefixKey = v12->static_fields->LabelWithRaidPrefixKey;
    LODWORD(v36) = situationNo;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v36);
    v16 = System_String__Format(LabelWithRaidPrefixKey, v14, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
    v17 = LocalizationManager__Get(v16, 0);
    v18 = System_String__Format(v17, (Il2CppObject *)bossName, 0);
    BattlePerformanceTurnSituationComponent__setMessage(this, v18, v19);
    v20 = this->fields.numLabel;
    v21 = System_Int64__ToString_77143864((int64_t)&v38, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
    if ( !v20
      || (UILabel__set_text(v20, v21, 0),
          v37 = situationNo,
          LabelWithRaidDamageNumKey = BattlePerformanceTurnSituationComponent_TypeInfo->static_fields->LabelWithRaidDamageNumKey,
          v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v37),
          v25 = System_String__Format(LabelWithRaidDamageNumKey, v24, 0),
          v21 = LocalizationManager__Get(v25, 0),
          !this->fields.numTextLabel) )
    {
      sub_2213CDC(v21, v22);
    }
    UILabel__set_text(this->fields.numTextLabel, v21, 0);
  }
  else
  {
LABEL_16:
    v26 = BattlePerformanceTurnSituationComponent_TypeInfo;
    if ( !*(&BattlePerformanceTurnSituationComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceTurnSituationComponent_TypeInfo, v10);
      v26 = BattlePerformanceTurnSituationComponent_TypeInfo;
    }
    static_fields = v26->static_fields;
    v37 = situationNo;
    LABEL_WITH_RAIDNAME_KEY = static_fields->LABEL_WITH_RAIDNAME_KEY;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v37);
    v31 = System_String__Format(LABEL_WITH_RAIDNAME_KEY, v29, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
    v32 = LocalizationManager__Get(v31, 0);
    v36 = param;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v36);
    v34 = System_String__Format_75697880(v32, (Il2CppObject *)bossName, v33, 0);
    BattlePerformanceTurnSituationComponent__setMessage(this, v34, v35);
  }
}


void BattlePerformanceTurnSituationComponent__setMessage(
        BattlePerformanceTurnSituationComponent_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_5974120 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974120 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( !v7 )
  {
    if ( !Component_object )
      sub_2213CDC(v7, v8);
    UILabel__set_text((UILabel_o *)Component_object, message, 0);
  }
}