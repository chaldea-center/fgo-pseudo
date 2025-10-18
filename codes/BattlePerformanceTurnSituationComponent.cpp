void BattlePerformanceTurnSituationComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct BattlePerformanceTurnSituationComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct BattlePerformanceTurnSituationComponent_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C465C7 & 1) == 0 )
  {
    sub_1C37058(&BattlePerformanceTurnSituationComponent_TypeInfo);
    sub_1C37058(&StringLiteral_2894/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_PREFIX_{0}"*/);
    sub_1C37058(&StringLiteral_2892/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/);
    sub_1C37058(&StringLiteral_2893/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_DAMAGE_NUM_{0}"*/);
    byte_4C465C7 = 1;
  }
  BattlePerformanceTurnSituationComponent_TypeInfo->static_fields->LabelWithRaidPrefixKey = (struct System_String_o *)StringLiteral_2894/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_PREFIX_{0}"*/;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)BattlePerformanceTurnSituationComponent_TypeInfo->static_fields,
    StringLiteral_2894/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_PREFIX_{0}"*/,
    v1,
    v2);
  v3 = StringLiteral_2893/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_DAMAGE_NUM_{0}"*/;
  static_fields = BattlePerformanceTurnSituationComponent_TypeInfo->static_fields;
  static_fields->LabelWithRaidDamageNumKey = (struct System_String_o *)StringLiteral_2893/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_DAMAGE_NUM_{0}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->LabelWithRaidDamageNumKey, v3, v5, v6);
  v7 = StringLiteral_2892/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/;
  v8 = BattlePerformanceTurnSituationComponent_TypeInfo->static_fields;
  v8->LABEL_WITH_RAIDNAME_KEY = (struct System_String_o *)StringLiteral_2892/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->LABEL_WITH_RAIDNAME_KEY, v7, v9, v10);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  UnityEngine_Object_o *numTextLabel; // x22
  BattlePerformanceTurnSituationComponent_c *v16; // x0
  System_String_o *LabelWithRaidPrefixKey; // x22
  Il2CppObject *v18; // x0
  System_String_o *v19; // x22
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  const MethodInfo *v22; // x2
  UILabel_o *v23; // x20
  System_String_o *v24; // x0
  System_String_o *LabelWithRaidDamageNumKey; // x20
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  BattlePerformanceTurnSituationComponent_c *v34; // x0
  System_String_o *LABEL_WITH_RAIDNAME_KEY; // x22
  Il2CppObject *v36; // x0
  System_String_o *v37; // x21
  System_String_o *v38; // x21
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x5
  __int64 v43; // x6
  __int64 v44; // x7
  Il2CppObject *v45; // x0
  System_String_o *v46; // x0
  const MethodInfo *v47; // x2
  int64_t v48; // [xsp+0h] [xbp-60h] BYREF
  int32_t v49; // [xsp+Ch] [xbp-54h] BYREF
  int64_t v50; // [xsp+18h] [xbp-48h] BYREF

  v50 = param;
  if ( (byte_4C465C6 & 1) == 0 )
  {
    sub_1C37058(&BattlePerformanceTurnSituationComponent_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_397/*"#,0"*/);
    byte_4C465C6 = 1;
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
    v16 = BattlePerformanceTurnSituationComponent_TypeInfo;
    if ( !BattlePerformanceTurnSituationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceTurnSituationComponent_TypeInfo);
      v16 = BattlePerformanceTurnSituationComponent_TypeInfo;
    }
    LabelWithRaidPrefixKey = v16->static_fields->LabelWithRaidPrefixKey;
    LODWORD(v48) = situationNo;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v9, v10, v11, v12, v13, v14);
    v19 = System_String__Format(LabelWithRaidPrefixKey, v18, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get(v19, 0);
    v21 = System_String__Format(v20, (Il2CppObject *)bossName, 0);
    BattlePerformanceTurnSituationComponent__setMessage(this, v21, v22);
    v23 = this->fields.numLabel;
    v24 = System_Int64__ToString_65076940((int64_t)&v50, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
    if ( !v23
      || (UILabel__set_text(v23, v24, 0),
          LabelWithRaidDamageNumKey = BattlePerformanceTurnSituationComponent_TypeInfo->static_fields->LabelWithRaidDamageNumKey,
          v49 = situationNo,
          v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v26, v27, v28, v29, v30, v31),
          v33 = System_String__Format(LabelWithRaidDamageNumKey, v32, 0),
          v24 = LocalizationManager__Get(v33, 0),
          !this->fields.numTextLabel) )
    {
      sub_1C372B4(v24);
    }
    UILabel__set_text(this->fields.numTextLabel, v24, 0);
  }
  else
  {
LABEL_16:
    v34 = BattlePerformanceTurnSituationComponent_TypeInfo;
    if ( !BattlePerformanceTurnSituationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceTurnSituationComponent_TypeInfo);
      v34 = BattlePerformanceTurnSituationComponent_TypeInfo;
    }
    LABEL_WITH_RAIDNAME_KEY = v34->static_fields->LABEL_WITH_RAIDNAME_KEY;
    v49 = situationNo;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v9, v10, v11, v12, v13, v14);
    v37 = System_String__Format(LABEL_WITH_RAIDNAME_KEY, v36, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v38 = LocalizationManager__Get(v37, 0);
    v48 = v50;
    v45 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v48, v39, v40, v41, v42, v43, v44);
    v46 = System_String__Format_63602948(v38, (Il2CppObject *)bossName, v45, 0);
    BattlePerformanceTurnSituationComponent__setMessage(this, v46, v47);
  }
}


void BattlePerformanceTurnSituationComponent__setMessage(
        BattlePerformanceTurnSituationComponent_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  _BOOL8 v6; // x0

  if ( (byte_4C465C5 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C465C5 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( !v6 )
  {
    if ( !Component_object )
      sub_1C372B4(v6);
    UILabel__set_text((UILabel_o *)Component_object, message, 0);
  }
}