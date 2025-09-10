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

  if ( (byte_4C2A896 & 1) == 0 )
  {
    sub_1C2D490(&BattlePerformanceTurnSituationComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_2891/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_PREFIX_{0}"*/);
    sub_1C2D490(&StringLiteral_2889/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/);
    sub_1C2D490(&StringLiteral_2890/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_DAMAGE_NUM_{0}"*/);
    byte_4C2A896 = 1;
  }
  BattlePerformanceTurnSituationComponent_TypeInfo->static_fields->LabelWithRaidPrefixKey = (struct System_String_o *)StringLiteral_2891/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_PREFIX_{0}"*/;
  sub_1C2D434(
    (CGThumbnailListItem_o *)BattlePerformanceTurnSituationComponent_TypeInfo->static_fields,
    StringLiteral_2891/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_PREFIX_{0}"*/,
    v1,
    v2);
  v3 = StringLiteral_2890/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_DAMAGE_NUM_{0}"*/;
  static_fields = BattlePerformanceTurnSituationComponent_TypeInfo->static_fields;
  static_fields->LabelWithRaidDamageNumKey = (struct System_String_o *)StringLiteral_2890/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAID_DAMAGE_NUM_{0}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->LabelWithRaidDamageNumKey, v3, v5, v6);
  v7 = StringLiteral_2889/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/;
  v8 = BattlePerformanceTurnSituationComponent_TypeInfo->static_fields;
  v8->LABEL_WITH_RAIDNAME_KEY = (struct System_String_o *)StringLiteral_2889/*"BATTLE_TURN_SITUATTION_LABEL_WITH_RAIDNAME_{0}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->LABEL_WITH_RAIDNAME_KEY, v7, v9, v10);
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
  UnityEngine_Object_o *numTextLabel; // x22
  BattlePerformanceTurnSituationComponent_c *v13; // x0
  System_String_o *LabelWithRaidPrefixKey; // x22
  Il2CppObject *v15; // x0
  System_String_o *v16; // x22
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  UILabel_o *v20; // x20
  System_String_o *v21; // x0
  __int64 v22; // x1
  System_String_o *LabelWithRaidDamageNumKey; // x20
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  BattlePerformanceTurnSituationComponent_c *v29; // x0
  System_String_o *LABEL_WITH_RAIDNAME_KEY; // x22
  Il2CppObject *v31; // x0
  System_String_o *v32; // x21
  System_String_o *v33; // x21
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  const MethodInfo *v39; // x2
  int64_t v40; // [xsp+0h] [xbp-60h] BYREF
  int32_t v41; // [xsp+Ch] [xbp-54h] BYREF
  int64_t v42; // [xsp+18h] [xbp-48h] BYREF

  v42 = param;
  if ( (byte_4C2A895 & 1) == 0 )
  {
    sub_1C2D490(&BattlePerformanceTurnSituationComponent_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_397/*"#,0"*/);
    byte_4C2A895 = 1;
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
    v13 = BattlePerformanceTurnSituationComponent_TypeInfo;
    if ( !BattlePerformanceTurnSituationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceTurnSituationComponent_TypeInfo);
      v13 = BattlePerformanceTurnSituationComponent_TypeInfo;
    }
    LabelWithRaidPrefixKey = v13->static_fields->LabelWithRaidPrefixKey;
    LODWORD(v40) = situationNo;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v9, v10, v11);
    v16 = System_String__Format(LabelWithRaidPrefixKey, v15, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get(v16, 0);
    v18 = System_String__Format(v17, (Il2CppObject *)bossName, 0);
    BattlePerformanceTurnSituationComponent__setMessage(this, v18, v19);
    v20 = this->fields.numLabel;
    v21 = System_Int64__ToString_64973892((int64_t)&v42, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
    if ( !v20
      || (UILabel__set_text(v20, v21, 0),
          LabelWithRaidDamageNumKey = BattlePerformanceTurnSituationComponent_TypeInfo->static_fields->LabelWithRaidDamageNumKey,
          v41 = situationNo,
          v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v24, v25, v26),
          v28 = System_String__Format(LabelWithRaidDamageNumKey, v27, 0),
          v21 = LocalizationManager__Get(v28, 0),
          !this->fields.numTextLabel) )
    {
      sub_1C2D6EC(v21, v22);
    }
    UILabel__set_text(this->fields.numTextLabel, v21, 0);
  }
  else
  {
LABEL_16:
    v29 = BattlePerformanceTurnSituationComponent_TypeInfo;
    if ( !BattlePerformanceTurnSituationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceTurnSituationComponent_TypeInfo);
      v29 = BattlePerformanceTurnSituationComponent_TypeInfo;
    }
    LABEL_WITH_RAIDNAME_KEY = v29->static_fields->LABEL_WITH_RAIDNAME_KEY;
    v41 = situationNo;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v9, v10, v11);
    v32 = System_String__Format(LABEL_WITH_RAIDNAME_KEY, v31, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v33 = LocalizationManager__Get(v32, 0);
    v40 = v42;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v40, v34, v35, v36);
    v38 = System_String__Format_63499156(v33, (Il2CppObject *)bossName, v37, 0);
    BattlePerformanceTurnSituationComponent__setMessage(this, v38, v39);
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

  if ( (byte_4C2A894 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A894 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( !v6 )
  {
    if ( !Component_object )
      sub_1C2D6EC(v6, v7);
    UILabel__set_text((UILabel_o *)Component_object, message, 0);
  }
}