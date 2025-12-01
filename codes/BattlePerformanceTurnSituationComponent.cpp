void BattlePerformanceTurnSituationComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct BattlePerformanceTurnSituationComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct BattlePerformanceTurnSituationComponent_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4CCAADC & 1) == 0 )
  {
    sub_1C713B0(&BattlePerformanceTurnSituationComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_2888/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_PREFIX_{0}"*/);
    sub_1C713B0(&StringLiteral_2886/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/);
    sub_1C713B0(&StringLiteral_2887/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_DAMAGE_NUM_{0}"*/);
    byte_4CCAADC = 1;
  }
  BattlePerformanceTurnSituationComponent_TypeInfo->static_fields->LabelWithRaidPrefixKey = (struct System_String_o *)StringLiteral_2888/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_PREFIX_{0}"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)BattlePerformanceTurnSituationComponent_TypeInfo->static_fields,
    StringLiteral_2888/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_PREFIX_{0}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_2887/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_DAMAGE_NUM_{0}"*/;
  static_fields = BattlePerformanceTurnSituationComponent_TypeInfo->static_fields;
  static_fields->LabelWithRaidDamageNumKey = (struct System_String_o *)StringLiteral_2887/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_DAMAGE_NUM_{0}"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->LabelWithRaidDamageNumKey, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_2886/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/;
  v16 = BattlePerformanceTurnSituationComponent_TypeInfo->static_fields;
  v16->LABEL_WITH_RAIDNAME_KEY = (struct System_String_o *)StringLiteral_2886/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v16->LABEL_WITH_RAIDNAME_KEY, v15, v17, v18, v19, v20, v21, v22);
}


void BattlePerformanceTurnSituationComponent___ctor(
        BattlePerformanceTurnSituationComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattlePerformanceTurnSituationComponent__SetLabelWithRaidName(
        BattlePerformanceTurnSituationComponent_o *this,
        int32_t situationNo,
        System_String_o *bossName,
        int64_t param,
        const MethodInfo *method)
{
  UnityEngine_Object_o *numLabel; // x22
  UnityEngine_Object_o *numTextLabel; // x22
  BattlePerformanceTurnSituationComponent_c *v10; // x0
  System_String_o *LabelWithRaidPrefixKey; // x22
  Il2CppObject *v12; // x0
  System_String_o *v13; // x22
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  const MethodInfo *v16; // x2
  UILabel_o *v17; // x20
  System_String_o *v18; // x0
  __int64 v19; // x1
  System_String_o *LabelWithRaidDamageNumKey; // x20
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  BattlePerformanceTurnSituationComponent_c *v23; // x0
  System_String_o *LABEL_WITH_RAIDNAME_KEY; // x22
  Il2CppObject *v25; // x0
  System_String_o *v26; // x21
  System_String_o *v27; // x21
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  const MethodInfo *v30; // x2
  int64_t v31; // [xsp+0h] [xbp-60h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-54h] BYREF
  int64_t v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = param;
  if ( (byte_4CCAADB & 1) == 0 )
  {
    sub_1C713B0(&BattlePerformanceTurnSituationComponent_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&long_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_396/*"#,0"*/);
    byte_4CCAADB = 1;
  }
  numLabel = (UnityEngine_Object_o *)this->fields.numLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(numLabel, 0, 0) )
    goto LABEL_16;
  numTextLabel = (UnityEngine_Object_o *)this->fields.numTextLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(numTextLabel, 0, 0) )
  {
    v10 = BattlePerformanceTurnSituationComponent_TypeInfo;
    if ( !BattlePerformanceTurnSituationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceTurnSituationComponent_TypeInfo);
      v10 = BattlePerformanceTurnSituationComponent_TypeInfo;
    }
    LabelWithRaidPrefixKey = v10->static_fields->LabelWithRaidPrefixKey;
    LODWORD(v31) = situationNo;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
    v13 = System_String__Format(LabelWithRaidPrefixKey, v12, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get(v13, 0);
    v15 = System_String__Format(v14, (Il2CppObject *)bossName, 0);
    BattlePerformanceTurnSituationComponent__setMessage(this, v15, v16);
    v17 = this->fields.numLabel;
    v18 = System_Int64__ToString_65545396((int64_t)&v33, (System_String_o *)StringLiteral_396/*"#,0"*/, 0);
    if ( !v17
      || (UILabel__set_text(v17, v18, 0),
          LabelWithRaidDamageNumKey = BattlePerformanceTurnSituationComponent_TypeInfo->static_fields->LabelWithRaidDamageNumKey,
          v32 = situationNo,
          v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32),
          v22 = System_String__Format(LabelWithRaidDamageNumKey, v21, 0),
          v18 = LocalizationManager__Get(v22, 0),
          !this->fields.numTextLabel) )
    {
      sub_1C71608(v18, v19);
    }
    UILabel__set_text(this->fields.numTextLabel, v18, 0);
  }
  else
  {
LABEL_16:
    v23 = BattlePerformanceTurnSituationComponent_TypeInfo;
    if ( !BattlePerformanceTurnSituationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceTurnSituationComponent_TypeInfo);
      v23 = BattlePerformanceTurnSituationComponent_TypeInfo;
    }
    LABEL_WITH_RAIDNAME_KEY = v23->static_fields->LABEL_WITH_RAIDNAME_KEY;
    v32 = situationNo;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    v26 = System_String__Format(LABEL_WITH_RAIDNAME_KEY, v25, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = LocalizationManager__Get(v26, 0);
    v31 = v33;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v31);
    v29 = System_String__Format_64073032(v27, (Il2CppObject *)bossName, v28, 0);
    BattlePerformanceTurnSituationComponent__setMessage(this, v29, v30);
  }
}


void BattlePerformanceTurnSituationComponent__setMessage(
        BattlePerformanceTurnSituationComponent_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4CCAADA & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAADA = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UILabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( !v6 )
  {
    if ( !Component_object )
      sub_1C71608(v6, v7);
    UILabel__set_text((UILabel_o *)Component_object, message, 0);
  }
}