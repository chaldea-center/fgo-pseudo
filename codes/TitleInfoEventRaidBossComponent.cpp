void __fastcall TitleInfoEventRaidBossComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t v12; // x1
  struct TitleInfoEventRaidBossComponent_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1
  struct TitleInfoEventRaidBossComponent_StaticFields *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  struct TitleInfoEventRaidBossComponent_StaticFields *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  TitleInfoEventRaidBossComponent_c *v36; // x8
  struct TitleInfoEventRaidBossComponent_StaticFields *v37; // x9
  struct TitleInfoEventRaidBossComponent_StaticFields *v38; // x8

  if ( (byte_4BFBA20 & 1) == 0 )
  {
    sub_1C2E12C(&TitleInfoEventRaidBossComponent_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_12756/*"SaveKeyStartRaidClearAnimation"*/, v8);
    sub_1C2E12C(&StringLiteral_23190/*"raid_boss_icon_"*/, v9);
    sub_1C2E12C(&StringLiteral_14746/*"TitleInfoEventRaidBossEffect_Dead"*/, v10);
    sub_1C2E12C(&StringLiteral_23191/*"raid_boss_icon_last_"*/, v11);
    byte_4BFBA20 = 1;
  }
  TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_23190/*"raid_boss_icon_"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields,
    StringLiteral_23190/*"raid_boss_icon_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_23191/*"raid_boss_icon_last_"*/;
  static_fields = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  static_fields->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_23191/*"raid_boss_icon_last_"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&static_fields->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX,
    v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = StringLiteral_14746/*"TitleInfoEventRaidBossEffect_Dead"*/;
  v21 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v21->RAIDBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14746/*"TitleInfoEventRaidBossEffect_Dead"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v21->RAIDBOSS_CLEAR_EFFECT_PREFAB, v20, v22, v23, v24, v25, v26, v27);
  v28 = StringLiteral_12756/*"SaveKeyStartRaidClearAnimation"*/;
  v29 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v29->SAVEKEY_START_RAID_CLEAR_ANIMATION = (struct System_String_o *)StringLiteral_12756/*"SaveKeyStartRaidClearAnimation"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v29->SAVEKEY_START_RAID_CLEAR_ANIMATION, v28, v30, v31, v32, v33, v34, v35);
  v36 = TitleInfoEventRaidBossComponent_TypeInfo;
  v37 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v37->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v37->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v38 = v36->static_fields;
  *(_OWORD *)&v38->ANIM_DURATION_FRAME_IN_BOSS = xmmword_C065A0;
  *(_QWORD *)&v38->REST_TIME_UPDATE_INTERVAL_SEC = 0xE23F800000LL;
  *(_QWORD *)&v38->CLEAR_END_CALLBACK_DELAY = 0x3FC000003F000000LL;
  v38->CLEAR_END_CALLBACK_DELAY_NORMAL = 1.0;
}


void __fastcall TitleInfoEventRaidBossComponent___ctor(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


float __fastcall TitleInfoEventRaidBossComponent__ConvertHpToRate(
        TitleInfoEventRaidBossComponent_o *this,
        int64_t hp,
        int64_t maxHp,
        const MethodInfo *method)
{
  return 1.0 - (double)hp / (double)maxHp;
}


void __fastcall TitleInfoEventRaidBossComponent__Destroy(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventRaidBossComponent__DisableCheckTutorial(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventRaidBossComponent__DoClearCallback(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  TitleInfoEventRaidBossComponent_c *v5; // x0
  struct TitleInfoEventRaidBossComponent_StaticFields *static_fields; // x8
  BalanceConfig_c *v7; // x0
  int32_t warId; // w23
  float CLEAR_END_CALLBACK_DELAY_NORMAL; // s8
  _BOOL4 isJumbleRaid; // w22
  TitleInfoEventRaidBossComponent_c *v11; // x0
  __int64 v12; // x9

  if ( (byte_4BFBA19 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, method);
    sub_1C2E12C(&TitleInfoEventRaidBossComponent_TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_10083/*"OnEndAnimation"*/, v4);
    byte_4BFBA19 = 1;
  }
  TitleInfoEventRaidBossComponent__OnStartFadeOutAnimation(this, method);
  v5 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v5 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  static_fields = v5->static_fields;
  v7 = BalanceConfig_TypeInfo;
  warId = this->fields.warId;
  CLEAR_END_CALLBACK_DELAY_NORMAL = static_fields->CLEAR_END_CALLBACK_DELAY_NORMAL;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  isJumbleRaid = this->fields.isJumbleRaid;
  if ( warId != v7->static_fields->FesWarId )
  {
    if ( !this->fields.isJumbleRaid )
      goto LABEL_15;
    isJumbleRaid = 1;
  }
  v11 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v11 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  v12 = 72LL;
  if ( !isJumbleRaid )
    v12 = 68LL;
  CLEAR_END_CALLBACK_DELAY_NORMAL = *(float *)((char *)&v11->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX + v12);
LABEL_15:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10083/*"OnEndAnimation"*/,
    CLEAR_END_CALLBACK_DELAY_NORMAL,
    0LL);
}


System_String_o *__fastcall TitleInfoEventRaidBossComponent__GetAiModeName(
        TitleInfoEventRaidBossComponent_o *this,
        int64_t totalDamage,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  struct System_String_array *splitAiMode; // x9
  System_Collections_Generic_IEnumerable_TSource__o *splitHp; // x20
  System_Func_long__bool__o *v15; // x22
  struct EventRaidEntity_o *v16; // x8
  struct System_String_array *v17; // x8
  System_String_o **v18; // x8

  if ( (byte_4BFBA1B & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Count_long___, totalDamage);
    sub_1C2E12C(&System_Func_long__bool__TypeInfo, v5);
    sub_1C2E12C(&Method_TitleInfoEventRaidBossComponent___c__DisplayClass96_0__GetAiModeName_b__0__, v6);
    sub_1C2E12C(&TitleInfoEventRaidBossComponent___c__DisplayClass96_0_TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_1/*""*/, v8);
    byte_4BFBA1B = 1;
  }
  v9 = (Il2CppObject *)sub_1C2E378(TitleInfoEventRaidBossComponent___c__DisplayClass96_0_TypeInfo);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  v9[1].klass = (Il2CppClass *)totalDamage;
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_13;
  splitAiMode = eventRaidEntity->fields.splitAiMode;
  if ( !splitAiMode )
    goto LABEL_13;
  if ( !*(_QWORD *)&splitAiMode->max_length )
  {
    v18 = (System_String_o **)&StringLiteral_1/*""*/;
    return *v18;
  }
  splitHp = (System_Collections_Generic_IEnumerable_TSource__o *)eventRaidEntity->fields.splitHp;
  v15 = (System_Func_long__bool__o *)sub_1C2E378(System_Func_long__bool__TypeInfo);
  System_Func_long__bool____ctor(
    v15,
    v9,
    Method_TitleInfoEventRaidBossComponent___c__DisplayClass96_0__GetAiModeName_b__0__,
    0LL);
  v10 = System_Linq_Enumerable__Count_long_(
          splitHp,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_2FEDFB0 *)Method_System_Linq_Enumerable_Count_long___);
  v16 = this->fields.eventRaidEntity;
  if ( !v16 || (v17 = v16->fields.splitAiMode) == 0LL )
LABEL_13:
    sub_1C2E388(v10, v11);
  if ( (unsigned int)v10 >= v17->max_length )
    sub_1C2E390(v10, v11);
  v18 = &v17->m_Items[(int)v10];
  return *v18;
}


UnityEngine_AnimationClip_o *__fastcall TitleInfoEventRaidBossComponent__GetClearBossAnimClip(
        TitleInfoEventRaidBossComponent_o *this,
        UnityEngine_Animation_o *animation,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  struct EventRaidEntity_o *eventRaidEntity; // x8
  Il2CppObject *v13; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct EventRaidEntity_o *v17; // x8
  Il2CppObject *v18; // x22
  Il2CppObject *v19; // x0
  UnityEngine_Object_o *Clip; // x21
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  struct EventRaidEntity_o *v24; // x8
  Il2CppObject *RAIDBOSS_CLEAR_EFFECT_PREFAB; // x21
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  struct EventRaidEntity_o *v31; // x8
  Il2CppObject *v32; // x20
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  TitleInfoEventRaidBossComponent_c *v35; // x0
  int32_t iconId; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BFBA1E & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, animation);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    sub_1C2E12C(&TitleInfoEventRaidBossComponent_TypeInfo, v8);
    sub_1C2E12C(&StringLiteral_25569/*"{0}_{1}"*/, v9);
    sub_1C2E12C(&StringLiteral_25571/*"{0}_{1}_{2}"*/, v10);
    byte_4BFBA1E = 1;
  }
  v11 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v11 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  }
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_27;
  v13 = (Il2CppObject *)*((_QWORD *)v11[11].monitor + 2);
  eventId = eventRaidEntity->fields.eventId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, method, v3, v4);
  v17 = this->fields.eventRaidEntity;
  if ( !v17 )
    goto LABEL_27;
  v18 = v11;
  iconId = v17->fields.iconId;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v14, v15, v16);
  v11 = (Il2CppObject *)System_String__Format_63250024((System_String_o *)StringLiteral_25571/*"{0}_{1}_{2}"*/, v13, v18, v19, 0LL);
  if ( !animation )
    goto LABEL_27;
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, (System_String_o *)v11, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(Clip, 0LL, 0LL) )
  {
    v11 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v24 = this->fields.eventRaidEntity;
    if ( !v24 )
      goto LABEL_27;
    RAIDBOSS_CLEAR_EFFECT_PREFAB = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
    eventId = v24->fields.eventId;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v21, v22, v23);
    v27 = System_String__Format_63249956((System_String_o *)StringLiteral_25569/*"{0}_{1}"*/, RAIDBOSS_CLEAR_EFFECT_PREFAB, v26, 0LL);
    Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, v27, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(Clip, 0LL, 0LL) )
    {
      v11 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
      if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
      v31 = this->fields.eventRaidEntity;
      if ( v31 )
      {
        v32 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
        eventId = v31->fields.day;
        v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v28, v29, v30);
        v34 = System_String__Format_63249956((System_String_o *)StringLiteral_25569/*"{0}_{1}"*/, v32, v33, 0LL);
        Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, v34, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(Clip, 0LL, 0LL) )
        {
          v35 = TitleInfoEventRaidBossComponent_TypeInfo;
          if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
            v35 = TitleInfoEventRaidBossComponent_TypeInfo;
          }
          return UnityEngine_Animation__GetClip(animation, v35->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB, 0LL);
        }
        return (UnityEngine_AnimationClip_o *)Clip;
      }
LABEL_27:
      sub_1C2E388(v11, animation);
    }
  }
  return (UnityEngine_AnimationClip_o *)Clip;
}


UnityEngine_GameObject_o *__fastcall TitleInfoEventRaidBossComponent__GetClearBossEffect(
        TitleInfoEventRaidBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *v12; // x0
  struct EventRaidEntity_o *eventRaidEntity; // x8
  Il2CppObject *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct EventRaidEntity_o *v18; // x8
  Il2CppObject *v19; // x22
  Il2CppObject *v20; // x0
  Il2CppObject *Object_object__50017172; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  struct EventRaidEntity_o *v25; // x8
  Il2CppObject *RAIDBOSS_CLEAR_EFFECT_PREFAB; // x21
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  struct EventRaidEntity_o *v32; // x8
  Il2CppObject *v33; // x20
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  TitleInfoEventRaidBossComponent_c *v36; // x0
  int32_t iconId; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BFBA1D & 1) == 0 )
  {
    sub_1C2E12C(&Method_AssetData_GetObject_GameObject____77757312, mapAssetData);
    sub_1C2E12C(&int_TypeInfo, v7);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v8);
    sub_1C2E12C(&TitleInfoEventRaidBossComponent_TypeInfo, v9);
    sub_1C2E12C(&StringLiteral_25569/*"{0}_{1}"*/, v10);
    sub_1C2E12C(&StringLiteral_25571/*"{0}_{1}_{2}"*/, v11);
    byte_4BFBA1D = 1;
  }
  v12 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v12 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  }
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_27;
  v14 = (Il2CppObject *)*((_QWORD *)v12[11].monitor + 2);
  eventId = eventRaidEntity->fields.eventId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, method, v3, v4);
  v18 = this->fields.eventRaidEntity;
  if ( !v18 )
    goto LABEL_27;
  v19 = v12;
  iconId = v18->fields.iconId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v15, v16, v17);
  v12 = (Il2CppObject *)System_String__Format_63250024((System_String_o *)StringLiteral_25571/*"{0}_{1}_{2}"*/, v14, v19, v20, 0LL);
  if ( !mapAssetData )
    goto LABEL_27;
  Object_object__50017172 = AssetData__GetObject_object__50017172(
                              mapAssetData,
                              (System_String_o *)v12,
                              (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_GameObject____77757312);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__50017172, 0LL, 0LL) )
  {
    v12 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v25 = this->fields.eventRaidEntity;
    if ( !v25 )
      goto LABEL_27;
    RAIDBOSS_CLEAR_EFFECT_PREFAB = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
    eventId = v25->fields.eventId;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v22, v23, v24);
    v28 = System_String__Format_63249956((System_String_o *)StringLiteral_25569/*"{0}_{1}"*/, RAIDBOSS_CLEAR_EFFECT_PREFAB, v27, 0LL);
    Object_object__50017172 = AssetData__GetObject_object__50017172(
                                mapAssetData,
                                v28,
                                (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_GameObject____77757312);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__50017172, 0LL, 0LL) )
    {
      v12 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
      if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
      v32 = this->fields.eventRaidEntity;
      if ( v32 )
      {
        v33 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
        eventId = v32->fields.day;
        v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v29, v30, v31);
        v35 = System_String__Format_63249956((System_String_o *)StringLiteral_25569/*"{0}_{1}"*/, v33, v34, 0LL);
        Object_object__50017172 = AssetData__GetObject_object__50017172(
                                    mapAssetData,
                                    v35,
                                    (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_GameObject____77757312);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__50017172, 0LL, 0LL) )
        {
          v36 = TitleInfoEventRaidBossComponent_TypeInfo;
          if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
            v36 = TitleInfoEventRaidBossComponent_TypeInfo;
          }
          return (UnityEngine_GameObject_o *)AssetData__GetObject_object__50017172(
                                               mapAssetData,
                                               v36->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB,
                                               (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_GameObject____77757312);
        }
        return (UnityEngine_GameObject_o *)Object_object__50017172;
      }
LABEL_27:
      sub_1C2E388(v12, mapAssetData);
    }
  }
  return (UnityEngine_GameObject_o *)Object_object__50017172;
}


EventRaidEntity_o *__fastcall TitleInfoEventRaidBossComponent__GetEventRaidEntity(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.eventRaidEntity;
}


float __fastcall TitleInfoEventRaidBossComponent__GetHpSplitPositionX(
        TitleInfoEventRaidBossComponent_o *this,
        int64_t splitHp,
        int64_t maxHp,
        const MethodInfo *method)
{
  float v4; // s0

  v4 = -(double)splitHp / (double)maxHp;
  return this->fields.barSizeX * v4;
}


int64_t __fastcall TitleInfoEventRaidBossComponent__GetRaidBossMaxHP(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  struct EventRaidEntity_o *eventRaidEntity; // x8

  eventRaidEntity = this->fields.eventRaidEntity;
  if ( eventRaidEntity )
    return eventRaidEntity->fields.maxHp;
  else
    return 0LL;
}


int64_t __fastcall TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t result; // x0
  __int64 v5; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  bool v7; // w8
  struct EventRaidEntity_o *v8; // x8
  int64_t maxHp; // x8
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BFBA0F & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_TotalEventRaidMaster___, method);
    sub_1C2E12C(&DataManager_TypeInfo, v3);
    byte_4BFBA0F = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_TotalEventRaidMaster___);
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity || !result )
    goto LABEL_14;
  v7 = TotalEventRaidMaster__TryGetEntity(
         (TotalEventRaidMaster_o *)result,
         &entity,
         this->fields.eventId,
         eventRaidEntity->fields.day,
         0LL);
  result = 0LL;
  if ( !v7 )
    return result;
  v8 = this->fields.eventRaidEntity;
  if ( !v8 || !entity )
LABEL_14:
    sub_1C2E388(result, v5);
  maxHp = v8->fields.maxHp;
  if ( maxHp <= entity->fields.totalDamage )
    return maxHp;
  else
    return entity->fields.totalDamage;
}


System_String_o *__fastcall TitleInfoEventRaidBossComponent__GetRestCountText(
        TitleInfoEventRaidBossComponent_o *this,
        int64_t totalHp,
        int64_t totalDamage,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  System_String_o *CountFormat; // x22
  System_String_o *v16; // x21
  System_Text_StringBuilder_o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x21
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v27; // x19
  Il2CppObject *NumberFormat_39713480; // x1
  System_String_o *v29; // x0
  System_String_o *v30; // x19
  System_String_o *v31; // x19
  System_String_o *v32; // x19
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  int64_t v36; // [xsp+0h] [xbp-40h] BYREF
  int64_t v37; // [xsp+8h] [xbp-38h] BYREF

  v37 = totalHp;
  if ( (byte_4BFBA1C & 1) == 0 )
  {
    sub_1C2E12C(&long_TypeInfo, totalHp);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v7);
    sub_1C2E12C(&System_Text_StringBuilder_TypeInfo, v8);
    sub_1C2E12C(&StringLiteral_5798/*"EVENT_RAID_REST_COUNT_AFTER"*/, v9);
    sub_1C2E12C(&StringLiteral_5799/*"EVENT_RAID_REST_COUNT_BEFORE"*/, v10);
    sub_1C2E12C(&StringLiteral_117/*" "*/, v11);
    sub_1C2E12C(&StringLiteral_5730/*"EVENT_DEFEAT_COUNT_TXT"*/, v12);
    sub_1C2E12C(&StringLiteral_13627/*"TITLE_INFO_RAID_TOTALHP"*/, v13);
    byte_4BFBA1C = 1;
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity )
  {
    CountFormat = EventBossStatusUiEntity__GetCountFormat(eventBossStatusUiEntity, 0LL);
    if ( !System_String__IsNullOrEmpty(CountFormat, 0LL) )
    {
      v27 = System_Int64__ToString((int64_t)&v37, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      NumberFormat_39713480 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39713480(v27, 0LL);
      v29 = CountFormat;
      return System_String__Format(v29, NumberFormat_39713480, 0LL);
    }
  }
  if ( !this->fields.isJumbleRaid && !this->fields.isSingleRaid )
  {
    if ( this->fields.isRaidDefeatCount && !this->fields.isTimeLimitRaid )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_5730/*"EVENT_DEFEAT_COUNT_TXT"*/, 0LL);
      v36 = totalDamage;
      NumberFormat_39713480 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v36, v33, v34, v35);
      v29 = v32;
    }
    else
    {
      v30 = System_Int64__ToString((int64_t)&v37, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = LocalizationManager__GetNumberFormat_39713480(v30, 0LL);
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_13627/*"TITLE_INFO_RAID_TOTALHP"*/, 0LL);
      NumberFormat_39713480 = (Il2CppObject *)v31;
    }
    return System_String__Format(v29, NumberFormat_39713480, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5799/*"EVENT_RAID_REST_COUNT_BEFORE"*/, 0LL);
  v17 = (System_Text_StringBuilder_o *)sub_1C2E378(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_62390560(v17, v16, 0LL);
  if ( !v17 )
    sub_1C2E388(v18, v19);
  System_Text_StringBuilder__Append_62396736(v17, (System_String_o *)StringLiteral_117/*" "*/, 0LL);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5798/*"EVENT_RAID_REST_COUNT_AFTER"*/, 0LL);
  v36 = totalHp;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v36, v21, v22, v23);
  v25 = System_String__Format(v20, v24, 0LL);
  System_Text_StringBuilder__Append_62396736(v17, v25, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v17->klass->vtable._3_ToString.method)(
                              v17,
                              v17->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


bool __fastcall TitleInfoEventRaidBossComponent__IsAliveRaidBoss(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  struct EventRaidEntity_o *eventRaidEntity; // x8
  int64_t maxHp; // x19

  eventRaidEntity = this->fields.eventRaidEntity;
  if ( eventRaidEntity )
    maxHp = eventRaidEntity->fields.maxHp;
  else
    maxHp = 0LL;
  return maxHp - TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(this, method) > 0;
}


bool __fastcall TitleInfoEventRaidBossComponent__IsClear(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isRaidClear;
}


bool __fastcall TitleInfoEventRaidBossComponent__IsDispPossible(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 268LL;
  if ( this->fields.isRaidDefeatCount )
    v2 = 289LL;
  return *((_BYTE *)&this->klass + v2);
}


bool __fastcall TitleInfoEventRaidBossComponent__IsEventRaidBoss(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall TitleInfoEventRaidBossComponent__IsJumbleSingleRaidLastBattle(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  EventRaidEntity_o *eventRaidEntity; // x0

  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    sub_1C2E388(0LL, method);
  return EventRaidEntity__IsJumbleSingleRaid(eventRaidEntity, 0LL) && this->fields.isLastBattleRelease;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TitleInfoEventRaidBossComponent__IsPlayClearAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        int32_t raidDeadQuestId,
        bool isJumbleSingleRaid,
        const MethodInfo *method)
{
  __int64 v7; // x1
  clsQuestCheck_o *eventRaidEntity; // x0
  struct EventRaidEntity_o *v9; // x8
  int32_t eventId; // w19
  int32_t day; // w20

  if ( (byte_4BFBA17 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, *(_QWORD *)&raidDeadQuestId);
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v7);
    byte_4BFBA17 = 1;
  }
  eventRaidEntity = (clsQuestCheck_o *)this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_20;
  if ( !EventRaidEntity__IsValidDefeatedTime((EventRaidEntity_o *)eventRaidEntity, 0LL)
    || !this->fields.isJumbleRaid
    || isJumbleSingleRaid )
  {
    if ( this->fields.HPto > 0.0 )
      return 0;
    eventRaidEntity = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( eventRaidEntity )
      return clsQuestCheck__IsQuestClear(eventRaidEntity, raidDeadQuestId, 0, 0LL) || this->fields.isJumbleRaid;
LABEL_20:
    sub_1C2E388(eventRaidEntity, *(_QWORD *)&raidDeadQuestId);
  }
  eventRaidEntity = (clsQuestCheck_o *)this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_20;
  eventRaidEntity = (clsQuestCheck_o *)EventRaidEntity__IsJustDefeated((EventRaidEntity_o *)eventRaidEntity, 0LL);
  if ( ((unsigned __int8)eventRaidEntity & 1) == 0 )
    return 0;
  v9 = this->fields.eventRaidEntity;
  if ( !v9 )
    goto LABEL_20;
  eventId = this->fields.eventId;
  day = v9->fields.day;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return !TerminalPramsManager__IsPlayedEventRaidDefeatedEffect(eventId, day, 0LL);
}


bool __fastcall TitleInfoEventRaidBossComponent__IsTargetRaid(
        TitleInfoEventRaidBossComponent_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  struct EventRaidEntity_o *eventRaidEntity; // x8

  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    sub_1C2E388(this, eventId);
  return eventRaidEntity->fields.eventId == eventId && eventRaidEntity->fields.day == day;
}


bool __fastcall TitleInfoEventRaidBossComponent__IsTerminalSceneRefreshRequest(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  int64_t maxHp; // x20
  __int64 v14; // x1
  QuestBoardListViewManager_o *ObjectList; // x0
  ListViewSort_c *klass; // x8
  __int64 v18; // x8
  _BOOL8 v19; // x0
  __int64 v20; // x1
  bool v21; // w20
  Il2CppObject *current; // x21
  QuestBoardListViewItem_o *Item; // x0
  __int64 v24; // x1
  Il2CppObject *Master_object; // x22
  QuestBoardListViewItem_o *v26; // x0
  __int64 v27; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  System_Object_array *ListByQuestID; // x21
  System_Func_object__bool__o *v30; // x22
  int v31; // w19
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BFBA1F & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_Any_QuestReleaseEntity____77760848, method);
    sub_1C2E12C(&Method_DataManager_GetMaster_QuestReleaseMaster___, v3);
    sub_1C2E12C(&DataManager_TypeInfo, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__, v7);
    sub_1C2E12C(&System_Func_QuestReleaseEntity__bool__TypeInfo, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__, v9);
    sub_1C2E12C(&TerminalSceneComponent_TypeInfo, v10);
    sub_1C2E12C(&Method_TitleInfoEventRaidBossComponent__IsTerminalSceneRefreshRequest_b__104_0__, v11);
    byte_4BFBA1F = 1;
  }
  memset(&v33, 0, sizeof(v33));
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    return 0;
  maxHp = eventRaidEntity->fields.maxHp;
  if ( maxHp - TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(this, method) >= 1 || !this->fields.isFolderRaid )
    return 0;
  if ( this->fields.initDispHp > 0 )
    return 1;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BF8363 )
  {
    sub_1C2E12C(&TerminalSceneComponent_TypeInfo, v14);
    byte_4BF8363 = 1;
  }
  ObjectList = (QuestBoardListViewManager_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    ObjectList = (QuestBoardListViewManager_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = ObjectList->fields.sort->klass;
  if ( !klass
    || (v18 = *(_QWORD *)&klass->_2.static_fields_size) == 0
    || (ObjectList = *(QuestBoardListViewManager_o **)(v18 + 296)) == 0LL
    || (ObjectList = (QuestBoardListViewManager_o *)QuestBoardListViewManager__get_ObjectList(ObjectList, 0LL)) == 0LL )
  {
    sub_1C2E388(ObjectList, v14);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)ObjectList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    v21 = v19;
    if ( !v19 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_1C2E388(v19, v20);
    Item = QuestBoardListViewObject__GetItem((QuestBoardListViewObject_o *)v33.fields._current, 0LL);
    if ( !Item )
      sub_1C2E388(0LL, v24);
    if ( Item->fields._quest_info_k__BackingField )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
      v26 = QuestBoardListViewObject__GetItem((QuestBoardListViewObject_o *)current, 0LL);
      if ( !v26 )
        sub_1C2E388(0LL, v27);
      quest_info_k__BackingField = v26->fields._quest_info_k__BackingField;
      if ( !quest_info_k__BackingField )
        sub_1C2E388(v26, v27);
      if ( !Master_object )
        sub_1C2E388(v26, v27);
      ListByQuestID = (System_Object_array *)QuestReleaseMaster__getListByQuestID(
                                               (QuestReleaseMaster_o *)Master_object,
                                               quest_info_k__BackingField->fields.questId,
                                               0LL);
      v30 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_QuestReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v30,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaidBossComponent__IsTerminalSceneRefreshRequest_b__104_0__,
        0LL);
      if ( BasicHelper__Any_object__50053864(
             ListByQuestID,
             (System_Func_T__bool__o *)v30,
             (const MethodInfo_2FBC2E8 *)Method_BasicHelper_Any_QuestReleaseEntity____77760848) )
      {
        v31 = 7;
        goto LABEL_32;
      }
    }
  }
  v31 = 3;
LABEL_32:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
  return v21 && v31 == 7;
}


void __fastcall TitleInfoEventRaidBossComponent__OnDestroy(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventRaidBossComponent__OnEndAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Action_o *animEndCall; // x20
  const MethodInfo *v10; // x1

  animEndCall = this->fields.animEndCall;
  this->fields.animEndCall = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.animEndCall, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndCall, 0LL);
  TitleInfoEventRaidBossComponent__SetDisp(this, v10);
}


void __fastcall TitleInfoEventRaidBossComponent__OnStartFadeOutAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  System_Action_o *onClearCall; // x20
  __int64 v12; // x1
  UnityEngine_Component_o *raidBossIconSp; // x0
  struct EventRaidEntity_o *eventRaidEntity; // x8
  int32_t eventId; // w20
  int32_t day; // w21
  TitleInfoEventRaidBossComponent_c *v17; // x0
  TitleInfoEventRaidBossComponent_c *v18; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventRaidBossComponent_c *v20; // x8
  UnityEngine_GameObject_o *v21; // x19

  if ( (byte_4BFBA1A & 1) == 0 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, method);
    sub_1C2E12C(&TitleInfoEventRaidBossComponent_TypeInfo, v9);
    sub_1C2E12C(&Method_UITweener_Begin_TweenAlpha___, v10);
    byte_4BFBA1A = 1;
  }
  onClearCall = this->fields.onClearCall;
  this->fields.onClearCall = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.onClearCall, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(onClearCall, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BFACFB )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v12);
    byte_4BFACFB = 1;
  }
  raidBossIconSp = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    raidBossIconSp = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_QWORD *)(*(_QWORD *)&raidBossIconSp[7].fields.m_CachedPtr + 440LL) )
  {
    if ( !LODWORD(raidBossIconSp[9].monitor) )
      j_il2cpp_runtime_class_init_0(raidBossIconSp);
    TerminalPramsManager__LoadEventRaidDefeatedEffectInfo(0LL);
  }
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_28;
  eventId = this->fields.eventId;
  day = eventRaidEntity->fields.day;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__UpdateEventRaidDefeatedEffectInfo(eventId, day, 0LL);
  TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(0LL);
  if ( this->fields.isFolderRaid )
  {
    v17 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
      v17 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    if ( UnityEngine_PlayerPrefs__GetInt_70947428(v17->static_fields->SAVEKEY_START_RAID_CLEAR_ANIMATION, 0LL) )
    {
      v18 = TitleInfoEventRaidBossComponent_TypeInfo;
      if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
        v18 = TitleInfoEventRaidBossComponent_TypeInfo;
      }
      UnityEngine_PlayerPrefs__DeleteKey(v18->static_fields->SAVEKEY_START_RAID_CLEAR_ANIMATION, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
  raidBossIconSp = (UnityEngine_Component_o *)this->fields.raidBossIconSp;
  this->fields.isRaidClear = 1;
  if ( !raidBossIconSp )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject(raidBossIconSp, 0LL);
  v20 = TitleInfoEventRaidBossComponent_TypeInfo;
  v21 = gameObject;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v20 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  raidBossIconSp = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                v21,
                                                v20->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                (const MethodInfo_3086DBC *)Method_UITweener_Begin_TweenAlpha___);
  if ( !raidBossIconSp )
LABEL_28:
    sub_1C2E388(raidBossIconSp, v12);
  raidBossIconSp[5].monitor = (void *)1065353216;
  LODWORD(raidBossIconSp[1].monitor) = 1;
}


void __fastcall TitleInfoEventRaidBossComponent__PlayFrameInBoss(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *Child; // x0
  __int64 v7; // x1
  float ANIM_DURATION_FRAME_IN_BOSS; // s8
  TitleInfoEventRaidBossComponent_c *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  TitleInfoEventRaidBossComponent_c *v11; // x8
  float32x2_t v12; // d8
  float z; // s9
  UnityEngine_Component_o *v14; // x20
  float32x2_t *static_fields; // x8
  intptr_t v16; // s0
  __int64 v17; // x9
  UnityEngine_GameObject_o *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4BFBA14 & 1) == 0 )
  {
    sub_1C2E12C(&TitleInfoEventRaidBossComponent_TypeInfo, method);
    sub_1C2E12C(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_1C2E12C(&StringLiteral_10855/*"PlayHpNameAlpha"*/, v4);
    byte_4BFBA14 = 1;
  }
  if ( this->fields.isJumbleRaid || this->fields.isSingleRaid )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(gameObject, 0, 0LL);
    if ( !Child )
      goto LABEL_16;
    Child = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
    if ( !Child )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Child, 1, 0LL);
  }
  ANIM_DURATION_FRAME_IN_BOSS = 0.0;
  if ( !this->fields.isFolderRaid )
  {
    v9 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
      v9 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    ANIM_DURATION_FRAME_IN_BOSS = v9->static_fields->ANIM_DURATION_FRAME_IN_BOSS;
  }
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Child = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                       v10,
                                       ANIM_DURATION_FRAME_IN_BOSS,
                                       (const MethodInfo_3086DBC *)Method_UITweener_Begin_TweenPosition___);
  v11 = TitleInfoEventRaidBossComponent_TypeInfo;
  v12.n64_u64[0] = *(unsigned __int64 *)&this->fields.originPos.fields.x;
  z = this->fields.originPos.fields.z;
  v14 = Child;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v11 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  if ( !v14 )
LABEL_16:
    sub_1C2E388(Child, v7);
  static_fields = (float32x2_t *)v11->static_fields;
  *(float *)&v16 = z + static_fields[5].n64_f32[0];
  v14[5].monitor = (void *)vadd_f32(v12, static_fields[4]).n64_u64[0];
  v14[5].fields.m_CachedPtr = v16;
  *(float *)&static_fields = this->fields.originPos.fields.z;
  v17 = *(_QWORD *)&this->fields.originPos.fields.x;
  LODWORD(v14[1].monitor) = 2;
  HIDWORD(v14[6].klass) = (_DWORD)static_fields;
  *(_QWORD *)(&v14[5].fields + 1) = v17;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14[3].monitor = v18;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v14[3].monitor, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_10855/*"PlayHpNameAlpha"*/;
  *(_QWORD *)&v14[3].fields.m_CachedPtr = StringLiteral_10855/*"PlayHpNameAlpha"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v14[3].fields, v25, v26, v27, v28, v29, v30, v31);
}


void __fastcall TitleInfoEventRaidBossComponent__PlayHpCut(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  TitleInfoEventRaidBossComponent_c *v10; // x8
  EasingObject_o *v11; // x20
  TitleInfoEventRaidBossComponent___c_c *v12; // x0
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *_9__88_0; // x21
  Il2CppObject *v15; // x22
  struct TitleInfoEventRaidBossComponent___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Action_o *v23; // x22
  __int64 v24; // x0
  __int64 v25; // x1

  if ( (byte_4BFBA15 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v3);
    sub_1C2E12C(&Method_TitleInfoEventRaidBossComponent_PlayHpDeletion__, v4);
    sub_1C2E12C(&TitleInfoEventRaidBossComponent_TypeInfo, v5);
    sub_1C2E12C(&Method_TitleInfoEventRaidBossComponent___c__PlayHpCut_b__88_0__, v6);
    sub_1C2E12C(&TitleInfoEventRaidBossComponent___c_TypeInfo, v7);
    byte_4BFBA15 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_30245F4 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  v10 = TitleInfoEventRaidBossComponent_TypeInfo;
  v11 = (EasingObject_o *)Component_object;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v10 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  v12 = TitleInfoEventRaidBossComponent___c_TypeInfo;
  ANIM_DURATION_HP_CUT = v10->static_fields->ANIM_DURATION_HP_CUT;
  if ( !TitleInfoEventRaidBossComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent___c_TypeInfo);
    v12 = TitleInfoEventRaidBossComponent___c_TypeInfo;
  }
  _9__88_0 = v12->static_fields->__9__88_0;
  if ( !_9__88_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = TitleInfoEventRaidBossComponent___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__88_0 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(_9__88_0, v15, Method_TitleInfoEventRaidBossComponent___c__PlayHpCut_b__88_0__, 0LL);
    static_fields = TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields;
    static_fields->__9__88_0 = _9__88_0;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__88_0,
      (int64_t)_9__88_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_TitleInfoEventRaidBossComponent_PlayHpDeletion__, 0LL);
  if ( !v11 )
    sub_1C2E388(v24, v25);
  EasingObject__Play(v11, ANIM_DURATION_HP_CUT, _9__88_0, v23, 0.0, 0, 0LL);
}


void __fastcall TitleInfoEventRaidBossComponent__PlayHpDeletion(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 eventId; // x1
  EventRaidMaster_o *v12; // x20
  struct EventRaidEntity_o *eventRaidEntity; // x8
  int32_t RaidGroupDeadQuestId; // w0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  int32_t v16; // w20
  int64_t v17; // x22
  const MethodInfo *v18; // x3
  int64_t m_CancellationTokenSource; // x2
  struct EventRaidEntity_o *v20; // x8
  UILabel_o *useTotalLabel; // x21
  bool IsJumbleSingleRaid; // w0
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  UnityEngine_Object_o *clearBossEffect; // x20
  Il2CppObject *v26; // x21
  Il2CppObject *v27; // x20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v29; // x1
  System_Action_o *v30; // x21
  System_Action_o *v31; // x21
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4BFBA16 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventRaidMaster___, v3);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v4);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C2E12C(&Method_TitleInfoEventRaidBossComponent_OnEndAnimation__, v8);
    sub_1C2E12C(&Method_TitleInfoEventRaidBossComponent_OnStartFadeOutAnimation__, v9);
    byte_4BFBA16 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !this->fields.eventRaidEntity )
    goto LABEL_40;
  v12 = (EventRaidMaster_o *)Instance;
  Instance = (DataManager_o *)EventRaidEntity__IsJumbleSingleRaid(this->fields.eventRaidEntity, 0LL);
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_40;
  eventId = (unsigned int)this->fields.eventId;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_40;
    RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                             v12,
                             eventId,
                             eventRaidEntity->fields.groupIndex,
                             0LL);
  }
  else
  {
    if ( !v12 )
      goto LABEL_40;
    RaidGroupDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(v12, eventId, eventRaidEntity->fields.day, 0LL);
  }
  userEventRaidEntity = this->fields.userEventRaidEntity;
  v16 = RaidGroupDeadQuestId;
  v17 = userEventRaidEntity ? userEventRaidEntity->fields.damage : 0LL;
  Instance = (DataManager_o *)this->fields.eventRaidEntity;
  if ( !Instance
    || ((Instance = (DataManager_o *)EventRaidEntity__getTotalEventRaidEntity((EventRaidEntity_o *)Instance, 0LL)) == 0LL
      ? (m_CancellationTokenSource = 0LL)
      : (m_CancellationTokenSource = (int64_t)Instance->fields.m_CancellationTokenSource),
        (v20 = this->fields.eventRaidEntity) == 0LL
     || (useTotalLabel = this->fields.useTotalLabel,
         Instance = (DataManager_o *)TitleInfoEventRaidBossComponent__GetRestCountText(
                                       this,
                                       (v20->fields.maxHp - (m_CancellationTokenSource + v17)) & ~((v20->fields.maxHp
                                                                                                  - (m_CancellationTokenSource
                                                                                                   + v17)) >> 63),
                                       m_CancellationTokenSource,
                                       v18),
         !useTotalLabel)
     || (UILabel__set_text(useTotalLabel, (System_String_o *)Instance, 0LL),
         (Instance = (DataManager_o *)this->fields.eventRaidEntity) == 0LL)) )
  {
LABEL_40:
    sub_1C2E388(Instance, eventId);
  }
  IsJumbleSingleRaid = EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)Instance, 0LL);
  if ( TitleInfoEventRaidBossComponent__IsPlayClearAnimation(this, v16, IsJumbleSingleRaid, v23) )
  {
    clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v26 = 0LL;
    if ( UnityEngine_Object__op_Inequality(clearBossEffect, 0LL, 0LL) )
    {
      v27 = (Il2CppObject *)this->fields.clearBossEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v26 = UnityEngine_Object__Instantiate_object_(
              v27,
              (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v26, (UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v26, 0LL);
    }
    this->fields.isEncountRaidBoss = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0LL, 0LL);
    Component_object = 0LL;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v26 )
        goto LABEL_40;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v26,
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      v30 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(
        v30,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaidBossComponent_OnStartFadeOutAnimation__,
        0LL);
      if ( Component_object )
      {
        CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v30, 0LL);
        v31 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
        System_Action___ctor(v31, (Il2CppObject *)this, Method_TitleInfoEventRaidBossComponent_OnEndAnimation__, 0LL);
        Component_object[2].monitor = v31;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&Component_object[2].monitor,
          (int64_t)v31,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
        return;
      }
      goto LABEL_40;
    }
    TitleInfoEventRaidBossComponent__SetClearAlpha(this, v29);
  }
  else
  {
    TitleInfoEventRaidBossComponent__OnEndAnimation(this, v24);
  }
}


// attributes: thunk
void __fastcall TitleInfoEventRaidBossComponent__PlayHpNameAlpha(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventRaidBossComponent__PlayHpCut(this, method);
}


void __fastcall TitleInfoEventRaidBossComponent__SetBossIcon(
        TitleInfoEventRaidBossComponent_o *this,
        EventRaidEntity_o *eventRaidEnt,
        bool isLastBattle,
        const MethodInfo *method)
{
  __int64 v7; // x1
  void *v8; // x0
  UISprite_o *raidBossIconSp; // x21
  System_String_o *RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX; // x22
  System_String_o *v11; // x0
  System_String_o *v12; // x22
  UISprite_o *v13; // x21
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX; // x22
  System_String_o *v15; // x0
  System_String_o *v16; // x20

  if ( (byte_4BFBA0B & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, eventRaidEnt);
    sub_1C2E12C(&TitleInfoEventRaidBossComponent_TypeInfo, v7);
    byte_4BFBA0B = 1;
  }
  if ( isLastBattle )
  {
    v8 = TitleInfoEventRaidBossComponent_TypeInfo;
    raidBossIconSp = this->fields.raidBossIconSp;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    if ( !eventRaidEnt )
      goto LABEL_19;
    RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX = TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX;
    v11 = System_Int32__ToString((int)eventRaidEnt + 64, 0LL);
    v12 = System_String__Concat_63235584(RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX, v11, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( AtlasManager__SetEventUI(raidBossIconSp, v12, 0LL) )
      goto LABEL_16;
  }
  v8 = TitleInfoEventRaidBossComponent_TypeInfo;
  v13 = this->fields.raidBossIconSp;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
  if ( !eventRaidEnt )
    goto LABEL_19;
  RAIDBOSS_ICON_SPNAME_PREFIX = TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX;
  v15 = System_Int32__ToString((int)eventRaidEnt + 64, 0LL);
  v16 = System_String__Concat_63235584(RAIDBOSS_ICON_SPNAME_PREFIX, v15, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEventUI(v13, v16, 0LL) )
  {
LABEL_16:
    v8 = this->fields.raidBossIconSp;
    if ( v8 )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v8 + 840LL))(v8, *(_QWORD *)(*(_QWORD *)v8 + 848LL));
      return;
    }
LABEL_19:
    sub_1C2E388(v8, eventRaidEnt);
  }
}


void __fastcall TitleInfoEventRaidBossComponent__SetClearAlpha(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  TitleInfoEventRaidBossComponent_c *v7; // x0
  struct TitleInfoEventRaidBossComponent_StaticFields *static_fields; // x8
  BalanceConfig_c *v9; // x0
  int32_t warId; // w21
  float CLEAR_CALLBACK_DELAY; // s8
  UnityEngine_Object_o *clearBossEffect; // x20
  __int64 v13; // x1
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *v15; // x0
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *ClearBossAnimClip; // x20
  float length; // s8
  TitleInfoEventRaidBossComponent_c *v19; // x0

  if ( (byte_4BFBA18 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, method);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    sub_1C2E12C(&TitleInfoEventRaidBossComponent_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_5447/*"DoClearCallback"*/, v6);
    byte_4BFBA18 = 1;
  }
  v7 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v7 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  static_fields = v7->static_fields;
  v9 = BalanceConfig_TypeInfo;
  warId = this->fields.warId;
  CLEAR_CALLBACK_DELAY = static_fields->CLEAR_CALLBACK_DELAY;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  if ( warId != v9->static_fields->FesWarId && !this->fields.isJumbleRaid )
  {
    clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = 0LL;
    if ( UnityEngine_Object__op_Inequality(clearBossEffect, 0LL, 0LL) )
    {
      v15 = this->fields.clearBossEffect;
      if ( !v15 )
        goto LABEL_27;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v15,
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ClearBossAnimClip = 0LL;
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      ClearBossAnimClip = (UnityEngine_Object_o *)TitleInfoEventRaidBossComponent__GetClearBossAnimClip(
                                                    this,
                                                    (UnityEngine_Animation_o *)Component_object,
                                                    v16);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(ClearBossAnimClip, 0LL, 0LL);
    length = 0.0;
    if ( ((unsigned __int8)v15 & 1) == 0 )
      goto LABEL_23;
    if ( ClearBossAnimClip )
    {
      length = UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)ClearBossAnimClip, 0LL);
LABEL_23:
      v19 = TitleInfoEventRaidBossComponent_TypeInfo;
      if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
        v19 = TitleInfoEventRaidBossComponent_TypeInfo;
      }
      CLEAR_CALLBACK_DELAY = fmaxf(length - v19->static_fields->CLEAR_END_CALLBACK_DELAY_NORMAL, 0.0);
      goto LABEL_26;
    }
LABEL_27:
    sub_1C2E388(v15, v13);
  }
LABEL_26:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5447/*"DoClearCallback"*/,
    CLEAR_CALLBACK_DELAY,
    0LL);
}


void __fastcall TitleInfoEventRaidBossComponent__SetDamageAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        System_Action_o *onClearCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  int64_t totalDamage; // x9
  double v17; // d0
  struct EventRaidEntity_o *v18; // x9
  double maxHp; // d1
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s3
  float v24; // s0
  float v25; // s1
  _BOOL4 isJumbleRaid; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BFBA12 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, onClearCallback);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BFBA12 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity || !Instance )
    goto LABEL_31;
  TotalEventRaidMaster__TryGetEntity(
    (TotalEventRaidMaster_o *)Instance,
    &entity,
    this->fields.eventId,
    eventRaidEntity->fields.day,
    0LL);
  this->fields.onClearCall = onClearCallback;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.onClearCall,
    (int64_t)onClearCallback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( userEventRaidEntity )
    userEventRaidEntity = (struct UserEventRaidEntity_o *)userEventRaidEntity->fields.damage;
  if ( entity )
  {
    totalDamage = entity->fields.totalDamage;
    userEventRaidEntity = (struct UserEventRaidEntity_o *)((char *)userEventRaidEntity + totalDamage);
    v17 = (double)totalDamage;
  }
  else
  {
    v17 = 0.0;
  }
  v18 = this->fields.eventRaidEntity;
  if ( !v18 )
    goto LABEL_31;
  maxHp = (double)v18->fields.maxHp;
  Instance = (DataManager_o *)this->fields.useBarSlider;
  v20 = 1.0 - v17 / maxHp;
  v21 = 1.0 - (double)(__int64)userEventRaidEntity / maxHp;
  v22 = fminf(v20, 1.0);
  v23 = fminf(v21, 1.0);
  v24 = v20 < 0.0 ? 0.0 : v22;
  v25 = v21 < 0.0 ? 0.0 : v23;
  this->fields.HPfrom = v24;
  this->fields.HPto = v25;
  if ( !Instance )
    goto LABEL_31;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v24, 0LL);
  Instance = (DataManager_o *)this->fields.defeatCntBarSliderWhite;
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (DataManager_o *)this->fields.defeatCntBarSliderWhite;
  if ( !Instance )
    goto LABEL_31;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, this->fields.HPfrom, 0LL);
  Instance = (DataManager_o *)this->fields.defeatCntBarSliderWhite;
  if ( !Instance )
    goto LABEL_31;
  UIProgressBar__set_alpha((UIProgressBar_o *)Instance, 0.0, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_31;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  isJumbleRaid = this->fields.isJumbleRaid;
  this->fields.originPos = localPosition;
  if ( isJumbleRaid || this->fields.isSingleRaid )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Instance = (DataManager_o *)GameObjectExtensions__GetChild(gameObject, 0, 0LL);
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        return;
      }
    }
LABEL_31:
    sub_1C2E388(Instance, v7);
  }
}


void __fastcall TitleInfoEventRaidBossComponent__SetDisp(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  bool *p_isRaidDefeatCount; // x20
  int64_t Instance; // x0
  const MethodInfo *v10; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  struct EventRaidEntity_o *v14; // x8
  struct System_Int64_array *splitHp; // x8
  il2cpp_array_size_t max_length; // w20
  _BOOL4 isRaidDefeatCount; // w8
  _BOOL4 v18; // w9
  int v19; // w21
  struct UISprite_array *hpBarSplitters; // x27
  struct UISprite_array **p_hpBarSplitters; // x21
  int64_t v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_Component_o *v29; // x22
  il2cpp_array_size_t v30; // w28
  struct UISprite_array *v31; // x23
  Il2CppObject *defeatCntBarSplitter; // x24
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x24
  Il2CppClass **v40; // x0
  struct UISprite_array *v41; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x24
  struct EventRaidEntity_o *v50; // x8
  struct System_Int64_array *v51; // x9
  struct UISprite_array *v52; // x10
  __int64 maxHp; // d9
  __int64 v54; // d10
  float barSizeX; // s8
  float v56; // s0
  float r; // s9
  float g; // s11
  float b; // s8
  float a; // s10
  struct EventRaidEntity_o *v61; // x8
  __int64 v62; // x22
  const MethodInfo *v63; // x2
  __int64 RaidBossTotalDamage; // x20
  UILabel_o *modeName; // x21
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x3
  UILabel_o *useTotalLabel; // x21
  const MethodInfo *v69; // x2
  UnityEngine_Object_o *bossName; // x21
  const MethodInfo *v71; // x2
  struct EventRaidEntity_o *v72; // x8
  float v73; // s0
  struct EventRaidEntity_o *v74; // x8
  const MethodInfo *v75; // x2
  UnityEngine_Object_o *v76; // x20
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x2
  __int64 v79; // x0
  bool *v80; // [xsp+0h] [xbp-90h]
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BFBA0E & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, method);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v3);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1C2E12C(&UISprite___TypeInfo, v7);
    byte_4BFBA0E = 1;
  }
  entity = 0LL;
  if ( this->fields.isEncountRaidBoss )
  {
    p_isRaidDefeatCount = &this->fields.isRaidDefeatCount;
    if ( !this->fields.isRaidDefeatCount )
      goto LABEL_9;
  }
  else
  {
    if ( !this->fields.isRaidDefeatCount )
      return;
    p_isRaidDefeatCount = &this->fields.isRaidDefeatCount;
  }
  this->fields.isDefeatRaidDisp = 1;
LABEL_9:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_87;
  if ( !Instance )
    goto LABEL_87;
  TotalEventRaidMaster__TryGetEntity(
    (TotalEventRaidMaster_o *)Instance,
    &entity,
    this->fields.eventId,
    eventRaidEntity->fields.day,
    0LL);
  TitleInfoEventRaidBossComponent__SetBossIcon(
    this,
    this->fields.eventRaidEntity,
    this->fields.isLastBattleRelease,
    v12);
  v14 = this->fields.eventRaidEntity;
  if ( !v14 )
    goto LABEL_87;
  splitHp = v14->fields.splitHp;
  v80 = p_isRaidDefeatCount;
  if ( !splitHp )
    goto LABEL_87;
  max_length = splitHp->max_length;
  isRaidDefeatCount = this->fields.isRaidDefeatCount;
  v18 = (int)max_length > 0;
  v19 = isRaidDefeatCount && v18;
  TitleInfoEventRaidBossComponent__SetHpBarSplitters(this, isRaidDefeatCount && v18, v13);
  if ( v19 )
  {
    hpBarSplitters = this->fields.hpBarSplitters;
    p_hpBarSplitters = &this->fields.hpBarSplitters;
    if ( !hpBarSplitters )
    {
      v22 = sub_1C2E1D4(UISprite___TypeInfo, max_length);
      *p_hpBarSplitters = (struct UISprite_array *)v22;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.hpBarSplitters, v22, v23, v24, v25, v26, v27, v28);
    }
    Instance = (int64_t)GameObjectExtensions__GetParent(this->fields.defeatCntBarSplitter, 0LL);
    v29 = (UnityEngine_Component_o *)Instance;
    v30 = 0;
    do
    {
      if ( !hpBarSplitters )
      {
        v31 = this->fields.hpBarSplitters;
        defeatCntBarSplitter = (Il2CppObject *)this->fields.defeatCntBarSplitter;
        if ( v30 )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Instance = (int64_t)UnityEngine_Object__Instantiate_object_(
                                defeatCntBarSplitter,
                                (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !Instance )
            goto LABEL_87;
          Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Instance,
                                (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( !v31 )
            goto LABEL_87;
          v39 = Instance;
          if ( Instance )
          {
            Instance = sub_1C2E268(Instance, v31->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_89;
          }
          if ( v30 >= v31->max_length )
            goto LABEL_88;
          v40 = &v31->obj.klass + (int)v30;
          v40[4] = (Il2CppClass *)v39;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v40 + 4), v39, v33, v34, v35, v36, v37, v38);
          v41 = *p_hpBarSplitters;
          if ( !*p_hpBarSplitters )
            goto LABEL_87;
          if ( v30 >= v41->max_length )
            goto LABEL_88;
          Instance = (int64_t)v41->m_Items[v30];
          if ( !Instance )
            goto LABEL_87;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          GameObjectExtensions__SafeSetParent(gameObject, v29, 0LL);
        }
        else
        {
          if ( !defeatCntBarSplitter )
            goto LABEL_87;
          Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                this->fields.defeatCntBarSplitter,
                                (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( !v31 )
            goto LABEL_87;
          v49 = Instance;
          if ( Instance )
          {
            Instance = sub_1C2E268(Instance, v31->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_89:
              v79 = sub_1C2E3AC(Instance);
              sub_1C2E254(v79, 0LL);
            }
          }
          if ( !v31->max_length )
            goto LABEL_88;
          v31->m_Items[0] = (UISprite_o *)v49;
          sub_1C2E0D0((PartyOrganizationUtility_o *)v31->m_Items, v49, v43, v44, v45, v46, v47, v48);
        }
      }
      v50 = this->fields.eventRaidEntity;
      if ( !v50 )
        goto LABEL_87;
      v51 = v50->fields.splitHp;
      if ( !v51 )
        goto LABEL_87;
      if ( v30 >= v51->max_length )
        goto LABEL_88;
      v52 = this->fields.hpBarSplitters;
      if ( !v52 )
        goto LABEL_87;
      if ( v30 >= v52->max_length )
LABEL_88:
        sub_1C2E390(Instance, v10);
      Instance = (int64_t)v52->m_Items[v30];
      if ( !Instance )
        goto LABEL_87;
      maxHp = v50->fields.maxHp;
      v54 = v51->m_Items[v30];
      barSizeX = this->fields.barSizeX;
      Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_87;
      v56 = -(double)v54 / (double)maxHp;
      v82.fields.x = barSizeX * v56;
      v82.fields.y = 0.0;
      v82.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v82, 0LL);
    }
    while ( max_length != ++v30 );
  }
  Instance = (int64_t)this->fields.eventBossStatusUiEntity;
  if ( Instance )
  {
    v83.fields.g = 0.035294;
    v83.fields.r = 0.37647;
    v83.fields.a = 1.0;
    v83.fields.b = 0.035294;
    TextEffectColor = EventBossStatusUiEntity__GetTextEffectColor((EventBossStatusUiEntity_o *)Instance, v83, 0LL);
    r = TextEffectColor.fields.r;
    g = TextEffectColor.fields.g;
    b = TextEffectColor.fields.b;
    a = TextEffectColor.fields.a;
  }
  else
  {
    b = 0.035294;
    r = 0.37647;
    a = 1.0;
    g = 0.035294;
  }
  v61 = this->fields.eventRaidEntity;
  if ( !v61 )
    goto LABEL_87;
  v62 = v61->fields.maxHp;
  RaidBossTotalDamage = TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(this, v10);
  if ( this->fields.isRaidDefeatCount )
  {
    modeName = this->fields.modeName;
    Instance = (int64_t)TitleInfoEventRaidBossComponent__GetAiModeName(this, RaidBossTotalDamage, v63);
    if ( !modeName )
      goto LABEL_87;
    UILabel__set_text(modeName, (System_String_o *)Instance, 0LL);
    v85.fields.r = r;
    v85.fields.g = g;
    v85.fields.b = b;
    v85.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, this->fields.modeName, v85, v66);
  }
  Instance = (int64_t)this->fields.useTotalLabel;
  if ( !Instance )
    goto LABEL_87;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_87;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    useTotalLabel = this->fields.useTotalLabel;
    Instance = (int64_t)TitleInfoEventRaidBossComponent__GetRestCountText(
                          this,
                          v62 - RaidBossTotalDamage,
                          RaidBossTotalDamage,
                          v67);
    if ( !useTotalLabel )
      goto LABEL_87;
    UILabel__set_text(useTotalLabel, (System_String_o *)Instance, 0LL);
    v86.fields.r = r;
    v86.fields.g = g;
    v86.fields.b = b;
    v86.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, this->fields.useTotalLabel, v86, v69);
  }
  bossName = (UnityEngine_Object_o *)this->fields.bossName;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bossName, 0LL, 0LL) )
  {
    Instance = (int64_t)this->fields.bossName;
    if ( !Instance )
      goto LABEL_87;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_87;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, this->fields.isJumbleRaid, 0LL);
    if ( this->fields.isJumbleRaid )
    {
      v72 = this->fields.eventRaidEntity;
      if ( !v72 )
        goto LABEL_87;
      Instance = (int64_t)this->fields.bossName;
      if ( !Instance )
        goto LABEL_87;
      UILabel__set_text((UILabel_o *)Instance, v72->fields.name, 0LL);
    }
    v87.fields.r = r;
    v87.fields.g = g;
    v87.fields.b = b;
    v87.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, this->fields.bossName, v87, v71);
  }
  Instance = (int64_t)this->fields.useBarSlider;
  if ( !Instance )
    goto LABEL_87;
  v73 = 1.0 - (double)RaidBossTotalDamage / (double)v62;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v73, 0LL);
  if ( this->fields.isJumbleRaid )
  {
    Instance = (int64_t)this->fields.eventRaidEntity;
    if ( !Instance )
      goto LABEL_87;
    Instance = EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)Instance, 0LL);
    if ( (Instance & 1) == 0 )
      goto LABEL_75;
  }
  if ( !*v80 )
    goto LABEL_75;
  if ( !this->fields.isLastBattleRelease )
  {
    v74 = this->fields.eventRaidEntity;
    if ( !v74 )
      goto LABEL_87;
    if ( v74->fields.maxHp > RaidBossTotalDamage )
    {
LABEL_75:
      Instance = (int64_t)this->fields.lastBattleSpr;
      if ( Instance )
      {
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          goto LABEL_84;
        }
      }
LABEL_87:
      sub_1C2E388(Instance, v10);
    }
  }
  Instance = (int64_t)this->fields.lastBattleSpr;
  if ( !Instance )
    goto LABEL_87;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v88.fields.r = r;
  v88.fields.g = g;
  v88.fields.b = b;
  v88.fields.a = a;
  TitleInfoEventRaidBossComponent__SetOutlineLastColor(this, this->fields.useTotalLabel, v88, v75);
  v76 = (UnityEngine_Object_o *)this->fields.bossName;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
  {
    v89.fields.r = r;
    v89.fields.g = g;
    v89.fields.b = b;
    v89.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineLastColor(this, this->fields.bossName, v89, v77);
  }
LABEL_84:
  Instance = (int64_t)this->fields.restTimeLabel;
  if ( !Instance )
    goto LABEL_87;
  v90.fields.r = r;
  v90.fields.g = g;
  v90.fields.b = b;
  v90.fields.a = a;
  UILabel__set_effectColor((UILabel_o *)Instance, v90, 0LL);
  TitleInfoEventRaidBossComponent__UpdateRestTime(this, 1, v78);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidBossComponent__SetHpBarSplitters(
        TitleInfoEventRaidBossComponent_o *this,
        bool isFlag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *defeatCntBarSplitter; // x0
  struct UISprite_array *hpBarSplitters; // x21
  __int64 v7; // x8
  unsigned __int64 i; // x22
  UnityEngine_Object_o *v9; // x20

  if ( (byte_4BFBA10 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, isFlag);
    byte_4BFBA10 = 1;
  }
  defeatCntBarSplitter = this->fields.defeatCntBarSplitter;
  if ( !defeatCntBarSplitter
    || (defeatCntBarSplitter = UnityEngine_GameObject__get_gameObject(defeatCntBarSplitter, 0LL)) == 0LL )
  {
LABEL_17:
    sub_1C2E388(defeatCntBarSplitter, isFlag);
  }
  UnityEngine_GameObject__SetActive(defeatCntBarSplitter, isFlag, 0LL);
  hpBarSplitters = this->fields.hpBarSplitters;
  if ( hpBarSplitters )
  {
    v7 = *(_QWORD *)&hpBarSplitters->max_length;
    if ( (int)v7 >= 1 )
    {
      for ( i = 0LL; (__int64)i < (int)v7; ++i )
      {
        if ( i >= (unsigned int)v7 )
          sub_1C2E390(defeatCntBarSplitter, isFlag);
        v9 = (UnityEngine_Object_o *)hpBarSplitters->m_Items[i];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        defeatCntBarSplitter = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
        if ( ((unsigned __int8)defeatCntBarSplitter & 1) != 0 )
        {
          if ( !v9 )
            goto LABEL_17;
          defeatCntBarSplitter = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
          if ( !defeatCntBarSplitter )
            goto LABEL_17;
          UnityEngine_GameObject__SetActive(defeatCntBarSplitter, isFlag, 0LL);
        }
        LODWORD(v7) = hpBarSplitters->max_length;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidBossComponent__SetLastBattleIcon(
        TitleInfoEventRaidBossComponent_o *this,
        UISprite_o *sprite,
        System_String_o *prefix,
        int32_t eventId,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *v13; // x23
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_String_o *v18; // x22
  Il2CppObject *v19; // x0
  System_String_o *v20; // x21
  int32_t v21; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v22; // [xsp+18h] [xbp-48h] BYREF
  int32_t v23; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4BFBA0D & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, sprite);
    sub_1C2E12C(&int_TypeInfo, v10);
    sub_1C2E12C(&StringLiteral_25569/*"{0}_{1}"*/, v11);
    sub_1C2E12C(&StringLiteral_25571/*"{0}_{1}_{2}"*/, v12);
    byte_4BFBA0D = 1;
  }
  if ( (iconId & 0x80000000) != 0 )
    goto LABEL_10;
  v23 = eventId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, prefix, *(_QWORD *)&eventId, *(_QWORD *)&iconId);
  v22 = iconId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v14, v15, v16);
  v18 = System_String__Format_63250024((System_String_o *)StringLiteral_25571/*"{0}_{1}_{2}"*/, (Il2CppObject *)prefix, v13, v17, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v18, 0LL) )
  {
LABEL_10:
    if ( (eventId & 0x80000000) != 0 )
      goto LABEL_16;
    v21 = eventId;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, prefix, *(_QWORD *)&eventId, *(_QWORD *)&iconId);
    v20 = System_String__Format_63249956((System_String_o *)StringLiteral_25569/*"{0}_{1}"*/, (Il2CppObject *)prefix, v19, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( !AtlasManager__SetEventUI(sprite, v20, 0LL) )
    {
LABEL_16:
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(sprite, prefix, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidBossComponent__SetOutlineBattleColor(
        TitleInfoEventRaidBossComponent_o *this,
        UILabel_o *label,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0

  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity )
    defaultColor = EventBossStatusUiEntity__GetStatusBattleColor(eventBossStatusUiEntity, defaultColor, 0LL);
  if ( !label )
    sub_1C2E388(eventBossStatusUiEntity, label);
  UILabel__set_effectColor(label, defaultColor, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidBossComponent__SetOutlineLastColor(
        TitleInfoEventRaidBossComponent_o *this,
        UILabel_o *label,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0

  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity )
    defaultColor = EventBossStatusUiEntity__GetStatusLastColor(eventBossStatusUiEntity, defaultColor, 0LL);
  if ( !label )
    sub_1C2E388(eventBossStatusUiEntity, label);
  UILabel__set_effectColor(label, defaultColor, 0LL);
}


void __fastcall TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
        TitleInfoEventRaidBossComponent_o *this,
        UISprite_o *sprite,
        System_String_o *prefix,
        int32_t gaugeId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  System_String_o *v9; // x0
  System_String_o *v10; // x21
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = gaugeId;
  if ( (byte_4BFBA0C & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, sprite);
    sub_1C2E12C(&StringLiteral_16410/*"_"*/, v8);
    byte_4BFBA0C = 1;
  }
  if ( (gaugeId & 0x80000000) != 0 )
    goto LABEL_12;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  v10 = System_String__Concat_63246844(prefix, (System_String_o *)StringLiteral_16410/*"_"*/, v9, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v10, 0LL) )
  {
LABEL_12:
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(sprite, prefix, 0LL);
  }
}


void __fastcall TitleInfoEventRaidBossComponent__Setup(
        TitleInfoEventRaidBossComponent_o *this,
        UIAtlas_o *terminalAtlas,
        int32_t eventId,
        int32_t warId,
        int32_t day,
        bool isJumbleRaid,
        bool isSingleRaid,
        bool isEventFolderRaid,
        const MethodInfo *method)
{
  bool v13; // w26
  bool v14; // w25
  bool v15; // w24
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  int64_t Instance; // x0
  unsigned __int64 v36; // x1
  DataManager_o *v37; // x23
  EventRaidMaster_o *v38; // x22
  struct EventRaidEntity_o *Entity; // x0
  struct EventRaidEntity_o **p_eventRaidEntity; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct UserEventRaidEntity_o *EntityFromEventIdAndDay; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  bool isRaidDefeatCount; // w0
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  const MethodInfo *v62; // x5
  int32_t v63; // w23
  TitleInfoEventRaidBossComponent_o *v64; // x0
  const MethodInfo *v65; // x4
  TitleInfoEventRaidBossComponent_o *v66; // x0
  const MethodInfo *v67; // x4
  TitleInfoEventRaidBossComponent_o *v68; // x0
  const MethodInfo *v69; // x4
  float v70; // s0
  struct UISlider_o *hpBarSlider; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct UILabel_o *totalHpLabel; // x1
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  UISprite_o *defeatCntFrame; // x23
  float v86; // s0
  struct UISlider_o *defeatCntBarSlider; // x1
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct UILabel_o *totalDefeatCntLabel; // x1
  struct UILabel_o **p_useTotalLabel; // x23
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t endedAt; // x24
  UnityEngine_Component_o *v103; // x8
  int64_t v104; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  float overwritePosX; // s0
  UnityEngine_GameObject_o *v107; // x23
  TitleInfoEventRaidBossComponent_c *v108; // x0
  EventRaidEntity_o *eventRaidEntity; // x8
  int64_t maxHp; // x20
  EventRaidEntity_o *v111; // x8
  int32_t raidDeadQuestId; // w20
  bool IsJumbleSingleRaid; // w0
  const MethodInfo *v114; // x3
  const MethodInfo *v115; // x1

  v13 = isJumbleRaid;
  v14 = isSingleRaid;
  v15 = isEventFolderRaid;
  if ( (byte_4BFBA0A & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, terminalAtlas);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, v16);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventDetailMaster___, v17);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventRaidMaster___, v18);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v19);
    sub_1C2E12C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v20);
    sub_1C2E12C(&NetworkManager_TypeInfo, v21);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1C2E12C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v23);
    sub_1C2E12C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v24);
    sub_1C2E12C(&TitleInfoEventRaidBossComponent_TypeInfo, v25);
    sub_1C2E12C(&StringLiteral_19560/*"event_raid_defeat_count_frame"*/, v26);
    sub_1C2E12C(&StringLiteral_19609/*"event_superboss_hp_white"*/, v27);
    sub_1C2E12C(&StringLiteral_19565/*"event_raid_lastbattle"*/, v28);
    sub_1C2E12C(&StringLiteral_19562/*"event_raid_hp_back"*/, v29);
    sub_1C2E12C(&StringLiteral_19561/*"event_raid_defeat_count_front"*/, v30);
    sub_1C2E12C(&StringLiteral_19563/*"event_raid_hp_frame"*/, v31);
    sub_1C2E12C(&StringLiteral_19569/*"event_raid_split_line"*/, v32);
    sub_1C2E12C(&StringLiteral_19559/*"event_raid_defeat_count_back"*/, v33);
    sub_1C2E12C(&StringLiteral_19564/*"event_raid_hp_front"*/, v34);
    byte_4BFBA0A = 1;
  }
  this->fields.eventId = eventId;
  this->fields.isEncountRaidBoss = 0;
  this->fields.isDefeatRaidDisp = 0;
  this->fields.warId = warId;
  this->fields.isJumbleRaid = v13;
  this->fields.isSingleRaid = v14;
  this->fields.isFolderRaid = v15;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  v37 = (DataManager_o *)Instance;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v38 = (EventRaidMaster_o *)Instance;
  if ( (day & 0x80000000) != 0 )
  {
    if ( !Instance )
      goto LABEL_65;
    day = EventRaidMaster__GetCurrentDay((EventRaidMaster_o *)Instance, this->fields.eventId, 0LL);
  }
  else if ( !Instance )
  {
    goto LABEL_65;
  }
  Entity = EventRaidMaster__GetEntity(v38, this->fields.eventId, day, 0LL);
  this->fields.eventRaidEntity = Entity;
  p_eventRaidEntity = &this->fields.eventRaidEntity;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.eventRaidEntity,
    (int64_t)Entity,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( this->fields.eventRaidEntity )
  {
    this->fields.isTimeLimitRaid = (*p_eventRaidEntity)->fields.timeLimitAt > 0;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          v37,
                          (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
    if ( Instance )
    {
      EntityFromEventIdAndDay = UserEventRaidMaster__getEntityFromEventIdAndDay(
                                  (UserEventRaidMaster_o *)Instance,
                                  this->fields.eventId,
                                  day,
                                  0LL);
      this->fields.userEventRaidEntity = EntityFromEventIdAndDay;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&this->fields.userEventRaidEntity,
        (int64_t)EntityFromEventIdAndDay,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            v37,
                            (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( Instance )
      {
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              this->fields.eventId,
                              (const MethodInfo_327B180 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( Instance )
        {
          isRaidDefeatCount = EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)Instance, 0LL);
          this->fields.isRaidDefeatCount = isRaidDefeatCount;
          this->fields.isMovedPos = isRaidDefeatCount;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                v37,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
          if ( Instance )
          {
            EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                          (EventBossStatusUiMaster_o *)Instance,
                                          this->fields.eventId,
                                          day,
                                          0LL);
            this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex;
            sub_1C2E0D0(
              (PartyOrganizationUtility_o *)&this->fields.eventBossStatusUiEntity,
              (int64_t)EntityFromEventIdAndIndex,
              v56,
              v57,
              v58,
              v59,
              v60,
              v61);
            Instance = (int64_t)this->fields.eventBossStatusUiEntity;
            if ( Instance )
            {
              Instance = EventBossStatusUiEntity__GetGaugeId((EventBossStatusUiEntity_o *)Instance, 0LL);
              v63 = Instance;
              if ( this->fields.eventBossStatusUiEntity )
                Instance = EventBossStatusUiEntity__GetLastBattleIconId(this->fields.eventBossStatusUiEntity, 0LL);
            }
            else
            {
              v63 = -1;
            }
            if ( *p_eventRaidEntity )
            {
              TitleInfoEventRaidBossComponent__SetLastBattleIcon(
                (TitleInfoEventRaidBossComponent_o *)Instance,
                this->fields.lastBattleSpr,
                (System_String_o *)StringLiteral_19565/*"event_raid_lastbattle"*/,
                (*p_eventRaidEntity)->fields.eventId,
                (*p_eventRaidEntity)->fields.iconId,
                v62);
              if ( this->fields.isRaidDefeatCount && !this->fields.isTimeLimitRaid )
              {
                defeatCntFrame = this->fields.defeatCntFrame;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetEventUI(defeatCntFrame, (System_String_o *)StringLiteral_19560/*"event_raid_defeat_count_frame"*/, 0LL);
                AtlasManager__SetEventUI(this->fields.defeatCntBg, (System_String_o *)StringLiteral_19559/*"event_raid_defeat_count_back"*/, 0LL);
                AtlasManager__SetEventUI(this->fields.defeatCntBar, (System_String_o *)StringLiteral_19561/*"event_raid_defeat_count_front"*/, 0LL);
                AtlasManager__SetEventUI(
                  this->fields.defeatCntBarSliderWhiteSp,
                  (System_String_o *)StringLiteral_19609/*"event_superboss_hp_white"*/,
                  0LL);
                AtlasManager__SetEventUI(
                  this->fields.defeatCntBarSplitterSp,
                  (System_String_o *)StringLiteral_19569/*"event_raid_split_line"*/,
                  0LL);
                Instance = (int64_t)this->fields.defeatCntBar;
                if ( !Instance )
                  goto LABEL_65;
                v86 = (*(float (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 664LL))(
                        Instance,
                        *(_QWORD *)(*(_QWORD *)Instance + 672LL));
                defeatCntBarSlider = this->fields.defeatCntBarSlider;
                this->fields.barSizeX = v86;
                this->fields.useBarSlider = defeatCntBarSlider;
                sub_1C2E0D0(
                  (PartyOrganizationUtility_o *)&this->fields.useBarSlider,
                  (int64_t)defeatCntBarSlider,
                  v88,
                  v89,
                  v90,
                  v91,
                  v92,
                  v93);
                totalDefeatCntLabel = this->fields.totalDefeatCntLabel;
                this->fields.useTotalLabel = totalDefeatCntLabel;
                p_useTotalLabel = &this->fields.useTotalLabel;
                sub_1C2E0D0(
                  (PartyOrganizationUtility_o *)&this->fields.useTotalLabel,
                  (int64_t)totalDefeatCntLabel,
                  v96,
                  v97,
                  v98,
                  v99,
                  v100,
                  v101);
                Instance = (int64_t)this->fields.modeName;
                if ( !Instance )
                  goto LABEL_65;
                Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                if ( !Instance )
                  goto LABEL_65;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                Instance = (int64_t)this->fields.defeatCntBarParent;
                if ( !Instance )
                  goto LABEL_65;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                Instance = (int64_t)this->fields.hpBarParent;
                if ( !Instance )
                  goto LABEL_65;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                if ( !*p_eventRaidEntity )
                  goto LABEL_65;
                endedAt = (*p_eventRaidEntity)->fields.endedAt;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Instance = NetworkManager__getTime(0LL);
                v103 = (UnityEngine_Component_o *)*p_useTotalLabel;
                if ( !*p_useTotalLabel )
                  goto LABEL_65;
                v104 = Instance;
                Instance = (int64_t)UnityEngine_Component__get_gameObject(v103, 0LL);
                if ( endedAt > v104 || this->fields.isJumbleRaid )
                {
                  v36 = 1LL;
                  if ( !Instance )
                    goto LABEL_65;
                }
                else
                {
                  v36 = this->fields.isSingleRaid;
                  if ( !Instance )
                    goto LABEL_65;
                }
              }
              else
              {
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v64,
                  this->fields.hpFrame,
                  (System_String_o *)StringLiteral_19563/*"event_raid_hp_frame"*/,
                  v63,
                  v65);
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v66,
                  this->fields.hpBg,
                  (System_String_o *)StringLiteral_19562/*"event_raid_hp_back"*/,
                  v63,
                  v67);
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v68,
                  this->fields.hpBar,
                  (System_String_o *)StringLiteral_19564/*"event_raid_hp_front"*/,
                  v63,
                  v69);
                Instance = (int64_t)this->fields.hpBar;
                if ( !Instance )
                  goto LABEL_65;
                v70 = (*(float (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 664LL))(
                        Instance,
                        *(_QWORD *)(*(_QWORD *)Instance + 672LL));
                hpBarSlider = this->fields.hpBarSlider;
                this->fields.barSizeX = v70;
                this->fields.useBarSlider = hpBarSlider;
                sub_1C2E0D0(
                  (PartyOrganizationUtility_o *)&this->fields.useBarSlider,
                  (int64_t)hpBarSlider,
                  v72,
                  v73,
                  v74,
                  v75,
                  v76,
                  v77);
                totalHpLabel = this->fields.totalHpLabel;
                this->fields.useTotalLabel = totalHpLabel;
                sub_1C2E0D0(
                  (PartyOrganizationUtility_o *)&this->fields.useTotalLabel,
                  (int64_t)totalHpLabel,
                  v79,
                  v80,
                  v81,
                  v82,
                  v83,
                  v84);
                Instance = (int64_t)this->fields.modeName;
                if ( !Instance )
                  goto LABEL_65;
                Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                if ( !Instance )
                  goto LABEL_65;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                Instance = (int64_t)this->fields.defeatCntBarParent;
                if ( !Instance )
                  goto LABEL_65;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                Instance = (int64_t)this->fields.hpBarParent;
                if ( !Instance )
                  goto LABEL_65;
                LOBYTE(v36) = 1;
              }
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v36, 0LL);
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              overwritePosX = this->fields.overwritePosX;
              v107 = gameObject;
              if ( overwritePosX == 0.0 )
              {
                v108 = TitleInfoEventRaidBossComponent_TypeInfo;
                if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
                  v108 = TitleInfoEventRaidBossComponent_TypeInfo;
                }
                overwritePosX = (float)v108->static_fields->RAIDBOSS_DEFEAT_COUNT_POS_X;
              }
              GameObjectExtensions__SetLocalPositionX(v107, overwritePosX, 0LL);
              Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( Instance )
              {
                Instance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
                if ( Instance )
                {
                  this->fields.originPos = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)Instance,
                                             0LL);
                  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                  if ( Instance )
                  {
                    Instance = clsQuestCheck__IsEncountRaidBoss(
                                 (clsQuestCheck_o *)Instance,
                                 this->fields.eventId,
                                 day,
                                 0LL);
                    eventRaidEntity = this->fields.eventRaidEntity;
                    this->fields.isEncountRaidBoss = Instance & 1;
                    if ( eventRaidEntity )
                    {
                      Instance = EventRaidEntity__IsJumbleSingleRaid(eventRaidEntity, 0LL);
                      v36 = (unsigned int)this->fields.eventId;
                      if ( (Instance & 1) != 0 )
                      {
                        if ( !*p_eventRaidEntity )
                          goto LABEL_65;
                        Instance = EventRaidMaster__GetRaidGroupDeadQuestId(
                                     v38,
                                     v36,
                                     (*p_eventRaidEntity)->fields.groupIndex,
                                     0LL);
                      }
                      else
                      {
                        Instance = EventRaidMaster__GetRaidDeadQuestId(v38, v36, day, 0LL);
                      }
                      this->fields.raidDeadQuestId = Instance;
                      if ( (int)Instance >= 1 )
                      {
                        Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                        if ( !Instance )
                          goto LABEL_65;
                        Instance = clsQuestCheck__IsQuestRelease(
                                     (clsQuestCheck_o *)Instance,
                                     this->fields.raidDeadQuestId,
                                     -1,
                                     0,
                                     0LL);
                        this->fields.isLastBattleRelease = Instance & 1;
                      }
                      if ( *p_eventRaidEntity )
                      {
                        maxHp = (*p_eventRaidEntity)->fields.maxHp;
                        Instance = TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(
                                     this,
                                     (const MethodInfo *)v36);
                        v111 = this->fields.eventRaidEntity;
                        this->fields.initDispHp = maxHp - Instance;
                        if ( v111 )
                        {
                          raidDeadQuestId = this->fields.raidDeadQuestId;
                          IsJumbleSingleRaid = EventRaidEntity__IsJumbleSingleRaid(v111, 0LL);
                          if ( !TitleInfoEventRaidBossComponent__IsPlayClearAnimation(
                                  this,
                                  raidDeadQuestId,
                                  IsJumbleSingleRaid,
                                  v114) )
                          {
LABEL_63:
                            TitleInfoEventRaidBossComponent__SetDisp(this, v115);
                            return;
                          }
                          Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
                          if ( Instance )
                          {
                            MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
                            Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
                            if ( Instance )
                            {
                              MissionNotifyManager__FrameOut((MissionNotifyManager_o *)Instance, 0LL);
                              goto LABEL_63;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_65:
    sub_1C2E388(Instance, v36);
  }
}


void __fastcall TitleInfoEventRaidBossComponent__StartDamageAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        AssetData_o *mapAssetData,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  struct UnityEngine_GameObject_o *ClearBossEffect; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  this->fields.animEndCall = callBack;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.animEndCall,
    (int64_t)callBack,
    (int64_t)callBack,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( mapAssetData )
  {
    ClearBossEffect = TitleInfoEventRaidBossComponent__GetClearBossEffect(this, mapAssetData, v11);
    this->fields.clearBossEffect = ClearBossEffect;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.clearBossEffect,
      (int64_t)ClearBossEffect,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  TitleInfoEventRaidBossComponent__PlayFrameInBoss(this, v10);
}


void __fastcall TitleInfoEventRaidBossComponent__Update(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TitleInfoEventRaidBossComponent__UpdateRestTime(this, 0, v2);
}


void __fastcall TitleInfoEventRaidBossComponent__UpdateDisp(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidBossComponent__UpdateRestTime(
        TitleInfoEventRaidBossComponent_o *this,
        bool isForce,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  float realtimeSinceStartup; // s0
  float restTimeUpdateSec; // s9
  float v11; // s8
  TitleInfoEventRaidBossComponent_c *v12; // x0
  System_String_o *Time; // x0
  __int64 v14; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  unsigned __int64 v16; // x8
  unsigned __int64 v17; // x23
  unsigned __int64 v18; // x22
  unsigned __int64 v19; // x21
  UILabel_o *restTimeLabel; // x19
  System_String_o *v21; // x20
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x22
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  unsigned __int64 v34; // [xsp+0h] [xbp-60h] BYREF
  unsigned __int64 v35; // [xsp+8h] [xbp-58h] BYREF
  unsigned __int64 v36; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4BFBA11 & 1) == 0 )
  {
    sub_1C2E12C(&long_TypeInfo, isForce);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v5);
    sub_1C2E12C(&NetworkManager_TypeInfo, v6);
    sub_1C2E12C(&TitleInfoEventRaidBossComponent_TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_13613/*"TIME_REST_RAID"*/, v8);
    byte_4BFBA11 = 1;
  }
  if ( this->fields.isEncountRaidBoss && !this->fields.isRaidDefeatCount )
  {
    if ( isForce )
      goto LABEL_9;
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    restTimeUpdateSec = this->fields.restTimeUpdateSec;
    v11 = realtimeSinceStartup;
    v12 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
      v12 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    if ( (float)(v11 - restTimeUpdateSec) > v12->static_fields->REST_TIME_UPDATE_INTERVAL_SEC )
    {
LABEL_9:
      this->fields.restTimeUpdateSec = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = (System_String_o *)NetworkManager__getTime(0LL);
      eventRaidEntity = this->fields.eventRaidEntity;
      if ( !eventRaidEntity )
        goto LABEL_20;
      v16 = eventRaidEntity->fields.endedAt - (_QWORD)Time;
      if ( (__int64)v16 < 1 )
      {
        v19 = 0LL;
        v18 = 0LL;
        v17 = 0LL;
      }
      else
      {
        v17 = v16 % 0x3C;
        v18 = v16 / 0x3C % 0x3C;
        v19 = v16 / 0xE10;
      }
      restTimeLabel = this->fields.restTimeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13613/*"TIME_REST_RAID"*/, 0LL);
      v36 = v19;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v36, v22, v23, v24);
      v35 = v18;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v35, v26, v27, v28);
      v34 = v17;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v34, v30, v31, v32);
      Time = System_String__Format_63250024(v21, v25, v29, v33, 0LL);
      if ( !restTimeLabel )
LABEL_20:
        sub_1C2E388(Time, v14);
      UILabel__set_text(restTimeLabel, Time, 0LL);
    }
  }
}


bool __fastcall TitleInfoEventRaidBossComponent___IsTerminalSceneRefreshRequest_b__104_0(
        TitleInfoEventRaidBossComponent_o *this,
        QuestReleaseEntity_o *d,
        const MethodInfo *method)
{
  struct EventRaidEntity_o *eventRaidEntity; // x8

  if ( !d )
    goto LABEL_6;
  if ( d->fields.type == 27 )
  {
    eventRaidEntity = this->fields.eventRaidEntity;
    if ( eventRaidEntity )
      return d->fields.value == eventRaidEntity->fields.day;
LABEL_6:
    sub_1C2E388(this, d);
  }
  return 0;
}


void __fastcall TitleInfoEventRaidBossComponent__setBeforeMovePos(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x19
  TitleInfoEventRaidBossComponent_c *v6; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float *static_fields; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BFBA13 & 1) == 0 )
  {
    sub_1C2E12C(&TitleInfoEventRaidBossComponent_TypeInfo, method);
    byte_4BFBA13 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
  {
    sub_1C2E388(gameObject, v4);
  }
  v5 = (UnityEngine_Transform_o *)gameObject;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  v6 = TitleInfoEventRaidBossComponent_TypeInfo;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v6 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  static_fields = (float *)v6->static_fields;
  v12.fields.x = x + static_fields[8];
  v12.fields.y = y + static_fields[9];
  v12.fields.z = z + static_fields[10];
  UnityEngine_Transform__set_localPosition(v5, v12, 0LL);
}


void __fastcall TitleInfoEventRaidBossComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFBA21 & 1) == 0 )
  {
    sub_1C2E12C(&TitleInfoEventRaidBossComponent___c_TypeInfo, v1);
    byte_4BFBA21 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(TitleInfoEventRaidBossComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventRaidBossComponent___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall TitleInfoEventRaidBossComponent___c___ctor(
        TitleInfoEventRaidBossComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventRaidBossComponent___c___PlayHpCut_b__88_0(
        TitleInfoEventRaidBossComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventRaidBossComponent___c__DisplayClass96_0___ctor(
        TitleInfoEventRaidBossComponent___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TitleInfoEventRaidBossComponent___c__DisplayClass96_0___GetAiModeName_b__0(
        TitleInfoEventRaidBossComponent___c__DisplayClass96_0_o *this,
        int64_t hp,
        const MethodInfo *method)
{
  return this->fields.totalDamage >= hp;
}