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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t v14; // x1
  struct TitleInfoEventRaidBossComponent_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  struct TitleInfoEventRaidBossComponent_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  TitleInfoEventRaidBossComponent_c *v30; // x8
  struct TitleInfoEventRaidBossComponent_StaticFields *v31; // x9
  struct TitleInfoEventRaidBossComponent_StaticFields *v32; // x8

  if ( (byte_4B1452F & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventRaidBossComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_23004/*"raid_boss_icon_"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_14642/*"TitleInfoEventRaidBossEffect_Dead"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_23005/*"raid_boss_icon_last_"*/, v12, v13);
    byte_4B1452F = 1;
  }
  TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_23004/*"raid_boss_icon_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields,
    StringLiteral_23004/*"raid_boss_icon_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = StringLiteral_23005/*"raid_boss_icon_last_"*/;
  static_fields = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  static_fields->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_23005/*"raid_boss_icon_last_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX,
    v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = StringLiteral_14642/*"TitleInfoEventRaidBossEffect_Dead"*/;
  v23 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v23->RAIDBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14642/*"TitleInfoEventRaidBossEffect_Dead"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v23->RAIDBOSS_CLEAR_EFFECT_PREFAB, v22, v24, v25, v26, v27, v28, v29);
  v30 = TitleInfoEventRaidBossComponent_TypeInfo;
  v31 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v31->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v31->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v32 = v30->static_fields;
  *(_OWORD *)&v32->ANIM_DURATION_FRAME_IN_BOSS = xmmword_BD2BE0;
  *(_QWORD *)&v32->REST_TIME_UPDATE_INTERVAL_SEC = 0xE23F800000LL;
  *(_QWORD *)&v32->CLEAR_END_CALLBACK_DELAY = 0x3FC000003F000000LL;
  v32->CLEAR_END_CALLBACK_DELAY_NORMAL = 1.0;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  TitleInfoEventRaidBossComponent_c *v9; // x0
  struct TitleInfoEventRaidBossComponent_StaticFields *static_fields; // x8
  BalanceConfig_c *v11; // x0
  int32_t warId; // w23
  float CLEAR_END_CALLBACK_DELAY_NORMAL; // s8
  _BOOL4 isJumbleRaid; // w22
  TitleInfoEventRaidBossComponent_c *v15; // x0
  __int64 v16; // x9

  if ( (byte_4B14529 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&TitleInfoEventRaidBossComponent_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_10025/*"OnEndAnimation"*/, v6, v7);
    byte_4B14529 = 1;
  }
  TitleInfoEventRaidBossComponent__OnStartFadeOutAnimation(this, method);
  v9 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v8);
    v9 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  static_fields = v9->static_fields;
  v11 = BalanceConfig_TypeInfo;
  warId = this->fields.warId;
  CLEAR_END_CALLBACK_DELAY_NORMAL = static_fields->CLEAR_END_CALLBACK_DELAY_NORMAL;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8);
    v11 = BalanceConfig_TypeInfo;
  }
  isJumbleRaid = this->fields.isJumbleRaid;
  if ( warId != v11->static_fields->FesWarId )
  {
    if ( !this->fields.isJumbleRaid )
      goto LABEL_15;
    isJumbleRaid = 1;
  }
  v15 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v8);
    v15 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  v16 = 64LL;
  if ( !isJumbleRaid )
    v16 = 60LL;
  CLEAR_END_CALLBACK_DELAY_NORMAL = *(float *)((char *)&v15->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX + v16);
LABEL_15:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10025/*"OnEndAnimation"*/,
    CLEAR_END_CALLBACK_DELAY_NORMAL,
    0LL);
}


System_String_o *__fastcall TitleInfoEventRaidBossComponent__GetAiModeName(
        TitleInfoEventRaidBossComponent_o *this,
        int64_t totalDamage,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  struct EventRaidEntity_o *eventRaidEntity; // x8
  struct System_String_array *splitAiMode; // x9
  System_Collections_Generic_IEnumerable_TSource__o *splitHp; // x20
  System_Func_long__bool__o *v22; // x22
  struct EventRaidEntity_o *v23; // x8
  struct System_String_array *v24; // x8
  System_String_o **v25; // x8

  if ( (byte_4B1452B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_long___, totalDamage, method);
    sub_1BCA7E0(&System_Func_long__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_TitleInfoEventRaidBossComponent___c__DisplayClass91_0__GetAiModeName_b__0__, v8, v9);
    sub_1BCA7E0(&TitleInfoEventRaidBossComponent___c__DisplayClass91_0_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    byte_4B1452B = 1;
  }
  v14 = (Il2CppObject *)sub_1BCAA2C(
                          TitleInfoEventRaidBossComponent___c__DisplayClass91_0_TypeInfo,
                          totalDamage,
                          method,
                          v3);
  System_Object___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_13;
  v14[1].klass = (Il2CppClass *)totalDamage;
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_13;
  splitAiMode = eventRaidEntity->fields.splitAiMode;
  if ( !splitAiMode )
    goto LABEL_13;
  if ( !*(_QWORD *)&splitAiMode->max_length )
  {
    v25 = (System_String_o **)&StringLiteral_1/*""*/;
    return *v25;
  }
  splitHp = (System_Collections_Generic_IEnumerable_TSource__o *)eventRaidEntity->fields.splitHp;
  v22 = (System_Func_long__bool__o *)sub_1BCAA2C(System_Func_long__bool__TypeInfo, v16, v17, v18);
  System_Func_long__bool____ctor(
    v22,
    v14,
    Method_TitleInfoEventRaidBossComponent___c__DisplayClass91_0__GetAiModeName_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__Count_long_(
          splitHp,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_2F2F1A4 *)Method_System_Linq_Enumerable_Count_long___);
  v23 = this->fields.eventRaidEntity;
  if ( !v23 || (v24 = v23->fields.splitAiMode) == 0LL )
LABEL_13:
    sub_1BCAA3C(v15, v16);
  if ( (unsigned int)v15 >= v24->max_length )
    sub_1BCAA44(v15, v16);
  v25 = &v24->m_Items[(int)v15];
  return *v25;
}


UnityEngine_AnimationClip_o *__fastcall TitleInfoEventRaidBossComponent__GetClearBossAnimClip(
        TitleInfoEventRaidBossComponent_o *this,
        UnityEngine_Animation_o *animation,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *v13; // x0
  struct EventRaidEntity_o *eventRaidEntity; // x8
  Il2CppObject *v15; // x21
  struct EventRaidEntity_o *v16; // x8
  Il2CppObject *v17; // x22
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *Clip; // x21
  struct EventRaidEntity_o *v21; // x8
  Il2CppObject *RAIDBOSS_CLEAR_EFFECT_PREFAB; // x20
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  TitleInfoEventRaidBossComponent_c *v27; // x0
  int32_t v29; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t iconId; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1452E & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, animation, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&TitleInfoEventRaidBossComponent_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_25353/*"{0}_{1}"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_25355/*"{0}_{1}_{2}"*/, v11, v12);
    byte_4B1452E = 1;
  }
  v13 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, animation);
    v13 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  }
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_21;
  v15 = (Il2CppObject *)*((_QWORD *)v13[11].monitor + 2);
  eventId = eventRaidEntity->fields.eventId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v16 = this->fields.eventRaidEntity;
  if ( !v16 )
    goto LABEL_21;
  v17 = v13;
  iconId = v16->fields.iconId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v13 = (Il2CppObject *)System_String__Format_62415660((System_String_o *)StringLiteral_25355/*"{0}_{1}_{2}"*/, v15, v17, v18, 0LL);
  if ( !animation )
    goto LABEL_21;
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, (System_String_o *)v13, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Equality(Clip, 0LL, 0LL) )
  {
    v13 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, animation);
    v21 = this->fields.eventRaidEntity;
    if ( v21 )
    {
      RAIDBOSS_CLEAR_EFFECT_PREFAB = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
      v29 = v21->fields.eventId;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
      v24 = System_String__Format_62415592(
              (System_String_o *)StringLiteral_25353/*"{0}_{1}"*/,
              RAIDBOSS_CLEAR_EFFECT_PREFAB,
              v23,
              0LL);
      Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, v24, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
      if ( UnityEngine_Object__op_Equality(Clip, 0LL, 0LL) )
      {
        v27 = TitleInfoEventRaidBossComponent_TypeInfo;
        if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v26);
          v27 = TitleInfoEventRaidBossComponent_TypeInfo;
        }
        return UnityEngine_Animation__GetClip(animation, v27->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB, 0LL);
      }
      return (UnityEngine_AnimationClip_o *)Clip;
    }
LABEL_21:
    sub_1BCAA3C(v13, animation);
  }
  return (UnityEngine_AnimationClip_o *)Clip;
}


UnityEngine_GameObject_o *__fastcall TitleInfoEventRaidBossComponent__GetClearBossEffect(
        TitleInfoEventRaidBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *v15; // x0
  struct EventRaidEntity_o *eventRaidEntity; // x8
  Il2CppObject *v17; // x21
  struct EventRaidEntity_o *v18; // x8
  Il2CppObject *v19; // x22
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  Il2CppObject *Object_object__49237568; // x21
  struct EventRaidEntity_o *v23; // x8
  Il2CppObject *RAIDBOSS_CLEAR_EFFECT_PREFAB; // x20
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x1
  TitleInfoEventRaidBossComponent_c *v29; // x0
  int32_t v31; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t iconId; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1452D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, mapAssetData, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&TitleInfoEventRaidBossComponent_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_25353/*"{0}_{1}"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_25355/*"{0}_{1}_{2}"*/, v13, v14);
    byte_4B1452D = 1;
  }
  v15 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, mapAssetData);
    v15 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  }
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_21;
  v17 = (Il2CppObject *)*((_QWORD *)v15[11].monitor + 2);
  eventId = eventRaidEntity->fields.eventId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v18 = this->fields.eventRaidEntity;
  if ( !v18 )
    goto LABEL_21;
  v19 = v15;
  iconId = v18->fields.iconId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v15 = (Il2CppObject *)System_String__Format_62415660((System_String_o *)StringLiteral_25355/*"{0}_{1}_{2}"*/, v17, v19, v20, 0LL);
  if ( !mapAssetData )
    goto LABEL_21;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              mapAssetData,
                              (System_String_o *)v15,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
  {
    v15 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, mapAssetData);
    v23 = this->fields.eventRaidEntity;
    if ( v23 )
    {
      RAIDBOSS_CLEAR_EFFECT_PREFAB = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
      v31 = v23->fields.eventId;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
      v26 = System_String__Format_62415592(
              (System_String_o *)StringLiteral_25353/*"{0}_{1}"*/,
              RAIDBOSS_CLEAR_EFFECT_PREFAB,
              v25,
              0LL);
      Object_object__49237568 = AssetData__GetObject_object__49237568(
                                  mapAssetData,
                                  v26,
                                  (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
      {
        v29 = TitleInfoEventRaidBossComponent_TypeInfo;
        if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v28);
          v29 = TitleInfoEventRaidBossComponent_TypeInfo;
        }
        return (UnityEngine_GameObject_o *)AssetData__GetObject_object__49237568(
                                             mapAssetData,
                                             v29->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB,
                                             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      }
      return (UnityEngine_GameObject_o *)Object_object__49237568;
    }
LABEL_21:
    sub_1BCAA3C(v15, mapAssetData);
  }
  return (UnityEngine_GameObject_o *)Object_object__49237568;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t result; // x0
  __int64 v7; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  bool v9; // w8
  struct EventRaidEntity_o *v10; // x8
  int64_t maxHp; // x8
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1451F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_TotalEventRaidMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B1451F = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  result = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_TotalEventRaidMaster___);
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity || !result )
    goto LABEL_14;
  v9 = TotalEventRaidMaster__TryGetEntity(
         (TotalEventRaidMaster_o *)result,
         &entity,
         this->fields.eventId,
         eventRaidEntity->fields.day,
         0LL);
  result = 0LL;
  if ( !v9 )
    return result;
  v10 = this->fields.eventRaidEntity;
  if ( !v10 || !entity )
LABEL_14:
    sub_1BCAA3C(result, v7);
  maxHp = v10->fields.maxHp;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  System_String_o *CountFormat; // x22
  System_String_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Text_StringBuilder_o *v27; // x20
  __int64 v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x21
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  __int64 v34; // x1
  System_String_o *v35; // x19
  Il2CppObject *NumberFormat_39108640; // x1
  System_String_o *v37; // x0
  __int64 v38; // x1
  System_String_o *v39; // x19
  System_String_o *v40; // x19
  System_String_o *v41; // x19
  int64_t v42; // [xsp+0h] [xbp-40h] BYREF
  int64_t v43; // [xsp+8h] [xbp-38h] BYREF

  v43 = totalHp;
  if ( (byte_4B1452C & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, totalHp, totalDamage);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_5764/*"EVENT_RAID_REST_COUNT_AFTER"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_5765/*"EVENT_RAID_REST_COUNT_BEFORE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_5700/*"EVENT_DEFEAT_COUNT_TXT"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_13524/*"TITLE_INFO_RAID_TOTALHP"*/, v19, v20);
    byte_4B1452C = 1;
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity )
  {
    CountFormat = EventBossStatusUiEntity__GetCountFormat(eventBossStatusUiEntity, 0LL);
    if ( !System_String__IsNullOrEmpty(CountFormat, 0LL) )
    {
      v35 = System_Int64__ToString((int64_t)&v43, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
      NumberFormat_39108640 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39108640(v35, 0LL);
      v37 = CountFormat;
      return System_String__Format(v37, NumberFormat_39108640, 0LL);
    }
  }
  if ( !this->fields.isJumbleRaid && !this->fields.isSingleRaid )
  {
    if ( this->fields.isRaidDefeatCount && !this->fields.isTimeLimitRaid )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, totalHp);
      v41 = LocalizationManager__Get((System_String_o *)StringLiteral_5700/*"EVENT_DEFEAT_COUNT_TXT"*/, 0LL);
      v42 = totalDamage;
      NumberFormat_39108640 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v42);
      v37 = v41;
    }
    else
    {
      v39 = System_Int64__ToString((int64_t)&v43, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
      v40 = LocalizationManager__GetNumberFormat_39108640(v39, 0LL);
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_13524/*"TITLE_INFO_RAID_TOTALHP"*/, 0LL);
      NumberFormat_39108640 = (Il2CppObject *)v40;
    }
    return System_String__Format(v37, NumberFormat_39108640, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, totalHp);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5765/*"EVENT_RAID_REST_COUNT_BEFORE"*/, 0LL);
  v27 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v24, v25, v26);
  System_Text_StringBuilder___ctor_61556940(v27, v23, 0LL);
  if ( !v27 )
    sub_1BCAA3C(v28, v29);
  System_Text_StringBuilder__Append_61563116(v27, (System_String_o *)StringLiteral_116/*" "*/, 0LL);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5764/*"EVENT_RAID_REST_COUNT_AFTER"*/, 0LL);
  v42 = totalHp;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v42);
  v32 = System_String__Format(v30, v31, 0LL);
  System_Text_StringBuilder__Append_61563116(v27, v32, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v27->klass->vtable._3_ToString.method)(
                              v27,
                              v27->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v8; // x2
  clsQuestCheck_o *eventRaidEntity; // x0
  struct EventRaidEntity_o *v10; // x8
  int32_t eventId; // w19
  int32_t day; // w20

  if ( (byte_4B14527 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonTemplate_clsQuestCheck__get_Instance__,
      *(_QWORD *)&raidDeadQuestId,
      isJumbleSingleRaid);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v7, v8);
    byte_4B14527 = 1;
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
    eventRaidEntity = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( eventRaidEntity )
      return clsQuestCheck__IsQuestClear(eventRaidEntity, raidDeadQuestId, 0, 0LL) || this->fields.isJumbleRaid;
LABEL_20:
    sub_1BCAA3C(eventRaidEntity, *(_QWORD *)&raidDeadQuestId);
  }
  eventRaidEntity = (clsQuestCheck_o *)this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_20;
  eventRaidEntity = (clsQuestCheck_o *)EventRaidEntity__IsJustDefeated((EventRaidEntity_o *)eventRaidEntity, 0LL);
  if ( ((unsigned __int8)eventRaidEntity & 1) == 0 )
    return 0;
  v10 = this->fields.eventRaidEntity;
  if ( !v10 )
    goto LABEL_20;
  eventId = this->fields.eventId;
  day = v10->fields.day;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&raidDeadQuestId);
  return !TerminalPramsManager__IsPlayedEventRaidDefeatedEffect(eventId, day, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TitleInfoEventRaidBossComponent__IsTargetRaid(
        TitleInfoEventRaidBossComponent_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  struct EventRaidEntity_o *eventRaidEntity; // x8

  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    sub_1BCAA3C(this, *(_QWORD *)&eventId);
  return eventRaidEntity->fields.eventId == eventId && eventRaidEntity->fields.day == day;
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.animEndCall, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *onClearCall; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Component_o *raidBossIconSp; // x0
  struct EventRaidEntity_o *eventRaidEntity; // x8
  int32_t eventId; // w20
  int32_t day; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  TitleInfoEventRaidBossComponent_c *v22; // x8
  UnityEngine_GameObject_o *v23; // x19

  if ( (byte_4B1452A & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    sub_1BCA7E0(&TitleInfoEventRaidBossComponent_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenAlpha___, v11, v12);
    byte_4B1452A = 1;
  }
  onClearCall = this->fields.onClearCall;
  this->fields.onClearCall = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onClearCall, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(onClearCall, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14);
  if ( !byte_4B13828 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v14, v15);
    byte_4B13828 = 1;
  }
  raidBossIconSp = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14);
    raidBossIconSp = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_QWORD *)(*(_QWORD *)&raidBossIconSp[7].fields.m_CachedPtr + 440LL) )
  {
    if ( !LODWORD(raidBossIconSp[9].monitor) )
      j_il2cpp_runtime_class_init_0(raidBossIconSp, v14);
    TerminalPramsManager__LoadEventRaidDefeatedEffectInfo(0LL);
  }
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_21;
  eventId = this->fields.eventId;
  day = eventRaidEntity->fields.day;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14);
  TerminalPramsManager__UpdateEventRaidDefeatedEffectInfo(eventId, day, 0LL);
  TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(0LL);
  raidBossIconSp = (UnityEngine_Component_o *)this->fields.raidBossIconSp;
  this->fields.isRaidClear = 1;
  if ( !raidBossIconSp )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject(raidBossIconSp, 0LL);
  v22 = TitleInfoEventRaidBossComponent_TypeInfo;
  v23 = gameObject;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v21);
    v22 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  raidBossIconSp = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                v23,
                                                v22->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !raidBossIconSp )
LABEL_21:
    sub_1BCAA3C(raidBossIconSp, v14);
  LODWORD(raidBossIconSp[1].monitor) = 1;
  raidBossIconSp[5].monitor = (void *)1065353216;
}


void __fastcall TitleInfoEventRaidBossComponent__PlayFrameInBoss(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  char *Child; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x0
  __int64 v12; // x1
  TitleInfoEventRaidBossComponent_c *v13; // x8
  UnityEngine_GameObject_o *v14; // x20
  float32x2_t *static_fields; // x8
  char *v16; // x20
  float v17; // s0
  __int64 v18; // x9
  UnityEngine_GameObject_o *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B14524 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventRaidBossComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, v4, v5);
    sub_1BCA7E0(&StringLiteral_10789/*"PlayHpNameAlpha"*/, v6, v7);
    byte_4B14524 = 1;
  }
  if ( this->fields.isJumbleRaid || this->fields.isSingleRaid )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Child = (char *)GameObjectExtensions__GetChild(gameObject, 0, 0LL);
    if ( !Child )
      goto LABEL_12;
    Child = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Child, 0LL);
    if ( !Child )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Child, 1, 0LL);
  }
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v13 = TitleInfoEventRaidBossComponent_TypeInfo;
  v14 = v11;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v12);
    v13 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  Child = (char *)UITweener__Begin_object_(
                    v14,
                    v13->static_fields->ANIM_DURATION_FRAME_IN_BOSS,
                    (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
  if ( !Child )
LABEL_12:
    sub_1BCAA3C(Child, v10);
  static_fields = (float32x2_t *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v16 = Child;
  v17 = this->fields.originPos.fields.z + static_fields[4].n64_f32[0];
  *((float32x2_t *)Child + 16) = vadd_f32(*(float32x2_t *)&this->fields.originPos.fields.x, static_fields[3]);
  *((float *)Child + 34) = v17;
  v18 = *(_QWORD *)&this->fields.originPos.fields.x;
  *((_DWORD *)Child + 37) = LODWORD(this->fields.originPos.fields.z);
  *(_QWORD *)(Child + 140) = v18;
  *((_DWORD *)Child + 8) = 2;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v16 + 10) = v19;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 80), (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = StringLiteral_10789/*"PlayHpNameAlpha"*/;
  *((_QWORD *)v16 + 11) = StringLiteral_10789/*"PlayHpNameAlpha"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 88), v26, v27, v28, v29, v30, v31, v32);
}


void __fastcall TitleInfoEventRaidBossComponent__PlayHpCut(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  TitleInfoEventRaidBossComponent_c *v19; // x8
  EasingObject_o *v20; // x20
  TitleInfoEventRaidBossComponent___c_c *v21; // x0
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *_9__83_0; // x21
  Il2CppObject *v24; // x22
  struct TitleInfoEventRaidBossComponent___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Action_o *v32; // x22
  __int64 v33; // x0
  __int64 v34; // x1

  if ( (byte_4B14525 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v4, v5);
    sub_1BCA7E0(&Method_TitleInfoEventRaidBossComponent_PlayHpDeletion__, v6, v7);
    sub_1BCA7E0(&TitleInfoEventRaidBossComponent_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_TitleInfoEventRaidBossComponent___c__PlayHpCut_b__83_0__, v10, v11);
    sub_1BCA7E0(&TitleInfoEventRaidBossComponent___c_TypeInfo, v12, v13);
    byte_4B14525 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  v19 = TitleInfoEventRaidBossComponent_TypeInfo;
  v20 = (EasingObject_o *)Component_object;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v16);
    v19 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  v21 = TitleInfoEventRaidBossComponent___c_TypeInfo;
  ANIM_DURATION_HP_CUT = v19->static_fields->ANIM_DURATION_HP_CUT;
  if ( !TitleInfoEventRaidBossComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent___c_TypeInfo, v16);
    v21 = TitleInfoEventRaidBossComponent___c_TypeInfo;
  }
  _9__83_0 = v21->static_fields->__9__83_0;
  if ( !_9__83_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21, v16);
      v21 = TitleInfoEventRaidBossComponent___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__83_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v17, v18);
    System_Action___ctor(_9__83_0, v24, Method_TitleInfoEventRaidBossComponent___c__PlayHpCut_b__83_0__, 0LL);
    static_fields = TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields;
    static_fields->__9__83_0 = _9__83_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__83_0,
      (int64_t)_9__83_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v17, v18);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_TitleInfoEventRaidBossComponent_PlayHpDeletion__, 0LL);
  if ( !v20 )
    sub_1BCAA3C(v33, v34);
  EasingObject__Play(v20, ANIM_DURATION_HP_CUT, _9__83_0, v32, 0.0, 0, 0LL);
}


void __fastcall TitleInfoEventRaidBossComponent__PlayHpDeletion(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  DataManager_o *Instance; // x0
  __int64 eventId; // x1
  EventRaidMaster_o *v20; // x20
  struct EventRaidEntity_o *eventRaidEntity; // x8
  int32_t RaidGroupDeadQuestId; // w0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  int32_t v24; // w20
  int64_t v25; // x22
  const MethodInfo *v26; // x3
  int64_t m_CancellationTokenSource; // x2
  struct EventRaidEntity_o *v28; // x8
  UILabel_o *useTotalLabel; // x21
  bool IsJumbleSingleRaid; // w0
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x1
  UnityEngine_Object_o *clearBossEffect; // x20
  __int64 v34; // x1
  Il2CppObject *v35; // x21
  Il2CppObject *v36; // x20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Action_o *v41; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Action_o *v45; // x21
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7

  if ( (byte_4B14526 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_TitleInfoEventRaidBossComponent_OnEndAnimation__, v14, v15);
    sub_1BCA7E0(&Method_TitleInfoEventRaidBossComponent_OnStartFadeOutAnimation__, v16, v17);
    byte_4B14526 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !this->fields.eventRaidEntity )
    goto LABEL_40;
  v20 = (EventRaidMaster_o *)Instance;
  Instance = (DataManager_o *)EventRaidEntity__IsJumbleSingleRaid(this->fields.eventRaidEntity, 0LL);
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_40;
  eventId = (unsigned int)this->fields.eventId;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v20 )
      goto LABEL_40;
    RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                             v20,
                             eventId,
                             eventRaidEntity->fields.groupIndex,
                             0LL);
  }
  else
  {
    if ( !v20 )
      goto LABEL_40;
    RaidGroupDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(v20, eventId, eventRaidEntity->fields.day, 0LL);
  }
  userEventRaidEntity = this->fields.userEventRaidEntity;
  v24 = RaidGroupDeadQuestId;
  v25 = userEventRaidEntity ? userEventRaidEntity->fields.damage : 0LL;
  Instance = (DataManager_o *)this->fields.eventRaidEntity;
  if ( !Instance
    || ((Instance = (DataManager_o *)EventRaidEntity__getTotalEventRaidEntity((EventRaidEntity_o *)Instance, 0LL)) == 0LL
      ? (m_CancellationTokenSource = 0LL)
      : (m_CancellationTokenSource = (int64_t)Instance->fields.m_CancellationTokenSource),
        (v28 = this->fields.eventRaidEntity) == 0LL
     || (useTotalLabel = this->fields.useTotalLabel,
         Instance = (DataManager_o *)TitleInfoEventRaidBossComponent__GetRestCountText(
                                       this,
                                       (v28->fields.maxHp - (m_CancellationTokenSource + v25)) & ~((v28->fields.maxHp
                                                                                                  - (m_CancellationTokenSource
                                                                                                   + v25)) >> 63),
                                       m_CancellationTokenSource,
                                       v26),
         !useTotalLabel)
     || (UILabel__set_text(useTotalLabel, (System_String_o *)Instance, 0LL),
         (Instance = (DataManager_o *)this->fields.eventRaidEntity) == 0LL)) )
  {
LABEL_40:
    sub_1BCAA3C(Instance, eventId);
  }
  IsJumbleSingleRaid = EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)Instance, 0LL);
  if ( TitleInfoEventRaidBossComponent__IsPlayClearAnimation(this, v24, IsJumbleSingleRaid, v31) )
  {
    clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
    v35 = 0LL;
    if ( UnityEngine_Object__op_Inequality(clearBossEffect, 0LL, 0LL) )
    {
      v36 = (Il2CppObject *)this->fields.clearBossEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
      v35 = UnityEngine_Object__Instantiate_object_(
              v36,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v35, (UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v35, 0LL);
    }
    this->fields.isEncountRaidBoss = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
    Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v35, 0LL, 0LL);
    Component_object = 0LL;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v35 )
        goto LABEL_40;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v35,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, eventId);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v38, v39, v40);
      System_Action___ctor(
        v41,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaidBossComponent_OnStartFadeOutAnimation__,
        0LL);
      if ( Component_object )
      {
        CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v41, 0LL);
        v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v42, v43, v44);
        System_Action___ctor(v45, (Il2CppObject *)this, Method_TitleInfoEventRaidBossComponent_OnEndAnimation__, 0LL);
        Component_object[2].monitor = v45;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&Component_object[2].monitor,
          (int64_t)v45,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
        return;
      }
      goto LABEL_40;
    }
    TitleInfoEventRaidBossComponent__SetClearAlpha(this, v38);
  }
  else
  {
    TitleInfoEventRaidBossComponent__OnEndAnimation(this, v32);
  }
}


// attributes: thunk
void __fastcall TitleInfoEventRaidBossComponent__PlayHpNameAlpha(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventRaidBossComponent__PlayHpCut(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidBossComponent__SetBossIcon(
        TitleInfoEventRaidBossComponent_o *this,
        EventRaidEntity_o *eventRaidEnt,
        bool isLastBattle,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  void *v9; // x0
  UISprite_o *raidBossIconSp; // x21
  System_String_o *RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX; // x22
  System_String_o *v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x22
  UISprite_o *v15; // x21
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX; // x22
  System_String_o *v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x20

  if ( (byte_4B1451B & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, eventRaidEnt, isLastBattle);
    sub_1BCA7E0(&TitleInfoEventRaidBossComponent_TypeInfo, v7, v8);
    byte_4B1451B = 1;
  }
  if ( isLastBattle )
  {
    v9 = TitleInfoEventRaidBossComponent_TypeInfo;
    raidBossIconSp = this->fields.raidBossIconSp;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, eventRaidEnt);
    if ( !eventRaidEnt )
      goto LABEL_19;
    RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX = TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX;
    v12 = System_Int32__ToString((int)eventRaidEnt + 48, 0LL);
    v14 = System_String__Concat_62401220(RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX, v12, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13);
    if ( AtlasManager__SetEventUI(raidBossIconSp, v14, 0LL) )
      goto LABEL_16;
  }
  v9 = TitleInfoEventRaidBossComponent_TypeInfo;
  v15 = this->fields.raidBossIconSp;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, eventRaidEnt);
  if ( !eventRaidEnt )
    goto LABEL_19;
  RAIDBOSS_ICON_SPNAME_PREFIX = TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX;
  v17 = System_Int32__ToString((int)eventRaidEnt + 48, 0LL);
  v19 = System_String__Concat_62401220(RAIDBOSS_ICON_SPNAME_PREFIX, v17, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v18);
  if ( AtlasManager__SetEventUI(v15, v19, 0LL) )
  {
LABEL_16:
    v9 = this->fields.raidBossIconSp;
    if ( v9 )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v9 + 840LL))(v9, *(_QWORD *)(*(_QWORD *)v9 + 848LL));
      return;
    }
LABEL_19:
    sub_1BCAA3C(v9, eventRaidEnt);
  }
}


void __fastcall TitleInfoEventRaidBossComponent__SetClearAlpha(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  TitleInfoEventRaidBossComponent_c *v12; // x0
  struct TitleInfoEventRaidBossComponent_StaticFields *static_fields; // x8
  BalanceConfig_c *v14; // x0
  int32_t warId; // w21
  float CLEAR_CALLBACK_DELAY; // s8
  UnityEngine_Object_o *clearBossEffect; // x20
  __int64 v18; // x1
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  UnityEngine_Object_o *ClearBossAnimClip; // x20
  float length; // s8
  TitleInfoEventRaidBossComponent_c *v25; // x0

  if ( (byte_4B14528 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&TitleInfoEventRaidBossComponent_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_5421/*"DoClearCallback"*/, v10, v11);
    byte_4B14528 = 1;
  }
  v12 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, method);
    v12 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  static_fields = v12->static_fields;
  v14 = BalanceConfig_TypeInfo;
  warId = this->fields.warId;
  CLEAR_CALLBACK_DELAY = static_fields->CLEAR_CALLBACK_DELAY;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v14 = BalanceConfig_TypeInfo;
  }
  if ( warId != v14->static_fields->FesWarId && !this->fields.isJumbleRaid )
  {
    clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    Component_object = 0LL;
    if ( UnityEngine_Object__op_Inequality(clearBossEffect, 0LL, 0LL) )
    {
      v20 = this->fields.clearBossEffect;
      if ( !v20 )
        goto LABEL_27;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v20,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    ClearBossAnimClip = 0LL;
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      ClearBossAnimClip = (UnityEngine_Object_o *)TitleInfoEventRaidBossComponent__GetClearBossAnimClip(
                                                    this,
                                                    (UnityEngine_Animation_o *)Component_object,
                                                    v22);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    v20 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(ClearBossAnimClip, 0LL, 0LL);
    length = 0.0;
    if ( ((unsigned __int8)v20 & 1) == 0 )
      goto LABEL_23;
    if ( ClearBossAnimClip )
    {
      length = UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)ClearBossAnimClip, 0LL);
LABEL_23:
      v25 = TitleInfoEventRaidBossComponent_TypeInfo;
      if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v18);
        v25 = TitleInfoEventRaidBossComponent_TypeInfo;
      }
      CLEAR_CALLBACK_DELAY = fmaxf(length - v25->static_fields->CLEAR_END_CALLBACK_DELAY_NORMAL, 0.0);
      goto LABEL_26;
    }
LABEL_27:
    sub_1BCAA3C(v20, v18);
  }
LABEL_26:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5421/*"DoClearCallback"*/,
    CLEAR_CALLBACK_DELAY,
    0LL);
}


void __fastcall TitleInfoEventRaidBossComponent__SetDamageAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        System_Action_o *onClearCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  int64_t totalDamage; // x9
  double v18; // d0
  struct EventRaidEntity_o *v19; // x9
  double maxHp; // d1
  float v21; // s0
  float v22; // s1
  float v23; // s2
  float v24; // s3
  float v25; // s0
  float v26; // s1
  _BOOL4 isJumbleRaid; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B14522 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, onClearCallback, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B14522 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onClearCall,
    (int64_t)onClearCallback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( userEventRaidEntity )
    userEventRaidEntity = (struct UserEventRaidEntity_o *)userEventRaidEntity->fields.damage;
  if ( entity )
  {
    totalDamage = entity->fields.totalDamage;
    userEventRaidEntity = (struct UserEventRaidEntity_o *)((char *)userEventRaidEntity + totalDamage);
    v18 = (double)totalDamage;
  }
  else
  {
    v18 = 0.0;
  }
  v19 = this->fields.eventRaidEntity;
  if ( !v19 )
    goto LABEL_31;
  maxHp = (double)v19->fields.maxHp;
  Instance = (DataManager_o *)this->fields.useBarSlider;
  v21 = 1.0 - v18 / maxHp;
  v22 = 1.0 - (double)(__int64)userEventRaidEntity / maxHp;
  v23 = fminf(v21, 1.0);
  v24 = fminf(v22, 1.0);
  v25 = v21 < 0.0 ? 0.0 : v23;
  v26 = v22 < 0.0 ? 0.0 : v24;
  this->fields.HPfrom = v25;
  this->fields.HPto = v26;
  if ( !Instance )
    goto LABEL_31;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v25, 0LL);
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
    sub_1BCAA3C(Instance, v8);
  }
}


void __fastcall TitleInfoEventRaidBossComponent__SetDisp(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  bool *p_isRaidDefeatCount; // x20
  int64_t Instance; // x0
  const MethodInfo *v16; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  struct EventRaidEntity_o *v20; // x8
  struct System_Int64_array *splitHp; // x8
  il2cpp_array_size_t max_length; // w20
  _BOOL4 isRaidDefeatCount; // w8
  _BOOL4 v24; // w9
  int v25; // w21
  struct UISprite_array *hpBarSplitters; // x27
  struct UISprite_array **p_hpBarSplitters; // x21
  int64_t v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UnityEngine_Component_o *v35; // x22
  il2cpp_array_size_t v36; // w28
  struct UISprite_array *v37; // x23
  Il2CppObject *defeatCntBarSplitter; // x24
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x24
  Il2CppClass **v46; // x0
  struct UISprite_array *v47; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x24
  struct EventRaidEntity_o *v56; // x8
  struct System_Int64_array *v57; // x9
  struct UISprite_array *v58; // x10
  __int64 maxHp; // d9
  __int64 v60; // d10
  float barSizeX; // s8
  float v62; // s0
  float r; // s9
  float g; // s11
  float b; // s8
  float a; // s10
  struct EventRaidEntity_o *v67; // x8
  __int64 v68; // x22
  const MethodInfo *v69; // x2
  __int64 RaidBossTotalDamage; // x20
  UILabel_o *modeName; // x21
  const MethodInfo *v72; // x2
  __int64 v73; // x1
  const MethodInfo *v74; // x3
  UILabel_o *useTotalLabel; // x21
  const MethodInfo *v76; // x2
  UnityEngine_Object_o *bossName; // x21
  const MethodInfo *v78; // x2
  struct EventRaidEntity_o *v79; // x8
  float v80; // s0
  struct EventRaidEntity_o *v81; // x8
  const MethodInfo *v82; // x2
  __int64 v83; // x1
  UnityEngine_Object_o *v84; // x20
  const MethodInfo *v85; // x2
  const MethodInfo *v86; // x2
  __int64 v87; // x0
  bool *v88; // [xsp+0h] [xbp-90h]
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1451E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&UISprite___TypeInfo, v12, v13);
    byte_4B1451E = 1;
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
    v18);
  v20 = this->fields.eventRaidEntity;
  if ( !v20 )
    goto LABEL_87;
  splitHp = v20->fields.splitHp;
  v88 = p_isRaidDefeatCount;
  if ( !splitHp )
    goto LABEL_87;
  max_length = splitHp->max_length;
  isRaidDefeatCount = this->fields.isRaidDefeatCount;
  v24 = (int)max_length > 0;
  v25 = isRaidDefeatCount && v24;
  TitleInfoEventRaidBossComponent__SetHpBarSplitters(this, isRaidDefeatCount && v24, v19);
  if ( v25 )
  {
    hpBarSplitters = this->fields.hpBarSplitters;
    p_hpBarSplitters = &this->fields.hpBarSplitters;
    if ( !hpBarSplitters )
    {
      v28 = sub_1BCA888(UISprite___TypeInfo, max_length);
      *p_hpBarSplitters = (struct UISprite_array *)v28;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.hpBarSplitters, v28, v29, v30, v31, v32, v33, v34);
    }
    Instance = (int64_t)GameObjectExtensions__GetParent(this->fields.defeatCntBarSplitter, 0LL);
    v35 = (UnityEngine_Component_o *)Instance;
    v36 = 0;
    do
    {
      if ( !hpBarSplitters )
      {
        v37 = this->fields.hpBarSplitters;
        defeatCntBarSplitter = (Il2CppObject *)this->fields.defeatCntBarSplitter;
        if ( v36 )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
          Instance = (int64_t)UnityEngine_Object__Instantiate_object_(
                                defeatCntBarSplitter,
                                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !Instance )
            goto LABEL_87;
          Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Instance,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( !v37 )
            goto LABEL_87;
          v45 = Instance;
          if ( Instance )
          {
            Instance = sub_1BCA91C(Instance, v37->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_89;
          }
          if ( v36 >= v37->max_length )
            goto LABEL_88;
          v46 = &v37->obj.klass + (int)v36;
          v46[4] = (Il2CppClass *)v45;
          sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 4), v45, v39, v40, v41, v42, v43, v44);
          v47 = *p_hpBarSplitters;
          if ( !*p_hpBarSplitters )
            goto LABEL_87;
          if ( v36 >= v47->max_length )
            goto LABEL_88;
          Instance = (int64_t)v47->m_Items[v36];
          if ( !Instance )
            goto LABEL_87;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          GameObjectExtensions__SafeSetParent(gameObject, v35, 0LL);
        }
        else
        {
          if ( !defeatCntBarSplitter )
            goto LABEL_87;
          Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                this->fields.defeatCntBarSplitter,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( !v37 )
            goto LABEL_87;
          v55 = Instance;
          if ( Instance )
          {
            Instance = sub_1BCA91C(Instance, v37->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_89:
              v87 = sub_1BCAA60(Instance);
              sub_1BCA908(v87, 0LL);
            }
          }
          if ( !v37->max_length )
            goto LABEL_88;
          v37->m_Items[0] = (UISprite_o *)v55;
          sub_1BCA784((PartyOrganizationUtility_o *)v37->m_Items, v55, v49, v50, v51, v52, v53, v54);
        }
      }
      v56 = this->fields.eventRaidEntity;
      if ( !v56 )
        goto LABEL_87;
      v57 = v56->fields.splitHp;
      if ( !v57 )
        goto LABEL_87;
      if ( v36 >= v57->max_length )
        goto LABEL_88;
      v58 = this->fields.hpBarSplitters;
      if ( !v58 )
        goto LABEL_87;
      if ( v36 >= v58->max_length )
LABEL_88:
        sub_1BCAA44(Instance, v16);
      Instance = (int64_t)v58->m_Items[v36];
      if ( !Instance )
        goto LABEL_87;
      maxHp = v56->fields.maxHp;
      v60 = v57->m_Items[v36];
      barSizeX = this->fields.barSizeX;
      Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_87;
      v62 = -(double)v60 / (double)maxHp;
      v90.fields.x = barSizeX * v62;
      v90.fields.y = 0.0;
      v90.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v90, 0LL);
    }
    while ( max_length != ++v36 );
  }
  Instance = (int64_t)this->fields.eventBossStatusUiEntity;
  if ( Instance )
  {
    v91.fields.g = 0.035294;
    v91.fields.r = 0.37647;
    v91.fields.a = 1.0;
    v91.fields.b = 0.035294;
    TextEffectColor = EventBossStatusUiEntity__GetTextEffectColor((EventBossStatusUiEntity_o *)Instance, v91, 0LL);
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
  v67 = this->fields.eventRaidEntity;
  if ( !v67 )
    goto LABEL_87;
  v68 = v67->fields.maxHp;
  RaidBossTotalDamage = TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(this, v16);
  if ( this->fields.isRaidDefeatCount )
  {
    modeName = this->fields.modeName;
    Instance = (int64_t)TitleInfoEventRaidBossComponent__GetAiModeName(this, RaidBossTotalDamage, v69);
    if ( !modeName )
      goto LABEL_87;
    UILabel__set_text(modeName, (System_String_o *)Instance, 0LL);
    v93.fields.r = r;
    v93.fields.g = g;
    v93.fields.b = b;
    v93.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, this->fields.modeName, v93, v72);
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
                          v68 - RaidBossTotalDamage,
                          RaidBossTotalDamage,
                          v74);
    if ( !useTotalLabel )
      goto LABEL_87;
    UILabel__set_text(useTotalLabel, (System_String_o *)Instance, 0LL);
    v94.fields.r = r;
    v94.fields.g = g;
    v94.fields.b = b;
    v94.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, this->fields.useTotalLabel, v94, v76);
  }
  bossName = (UnityEngine_Object_o *)this->fields.bossName;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v73);
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
      v79 = this->fields.eventRaidEntity;
      if ( !v79 )
        goto LABEL_87;
      Instance = (int64_t)this->fields.bossName;
      if ( !Instance )
        goto LABEL_87;
      UILabel__set_text((UILabel_o *)Instance, v79->fields.name, 0LL);
    }
    v95.fields.r = r;
    v95.fields.g = g;
    v95.fields.b = b;
    v95.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, this->fields.bossName, v95, v78);
  }
  Instance = (int64_t)this->fields.useBarSlider;
  if ( !Instance )
    goto LABEL_87;
  v80 = 1.0 - (double)RaidBossTotalDamage / (double)v68;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v80, 0LL);
  if ( this->fields.isJumbleRaid )
  {
    Instance = (int64_t)this->fields.eventRaidEntity;
    if ( !Instance )
      goto LABEL_87;
    Instance = EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)Instance, 0LL);
    if ( (Instance & 1) == 0 )
      goto LABEL_75;
  }
  if ( !*v88 )
    goto LABEL_75;
  if ( !this->fields.isLastBattleRelease )
  {
    v81 = this->fields.eventRaidEntity;
    if ( !v81 )
      goto LABEL_87;
    if ( v81->fields.maxHp > RaidBossTotalDamage )
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
      sub_1BCAA3C(Instance, v16);
    }
  }
  Instance = (int64_t)this->fields.lastBattleSpr;
  if ( !Instance )
    goto LABEL_87;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v96.fields.r = r;
  v96.fields.g = g;
  v96.fields.b = b;
  v96.fields.a = a;
  TitleInfoEventRaidBossComponent__SetOutlineLastColor(this, this->fields.useTotalLabel, v96, v82);
  v84 = (UnityEngine_Object_o *)this->fields.bossName;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v83);
  if ( UnityEngine_Object__op_Inequality(v84, 0LL, 0LL) )
  {
    v97.fields.r = r;
    v97.fields.g = g;
    v97.fields.b = b;
    v97.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineLastColor(this, this->fields.bossName, v97, v85);
  }
LABEL_84:
  Instance = (int64_t)this->fields.restTimeLabel;
  if ( !Instance )
    goto LABEL_87;
  v98.fields.r = r;
  v98.fields.g = g;
  v98.fields.b = b;
  v98.fields.a = a;
  UILabel__set_effectColor((UILabel_o *)Instance, v98, 0LL);
  TitleInfoEventRaidBossComponent__UpdateRestTime(this, 1, v86);
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

  if ( (byte_4B14520 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isFlag, method);
    byte_4B14520 = 1;
  }
  defeatCntBarSplitter = this->fields.defeatCntBarSplitter;
  if ( !defeatCntBarSplitter
    || (defeatCntBarSplitter = UnityEngine_GameObject__get_gameObject(defeatCntBarSplitter, 0LL)) == 0LL )
  {
LABEL_17:
    sub_1BCAA3C(defeatCntBarSplitter, isFlag);
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
          sub_1BCAA44(defeatCntBarSplitter, isFlag);
        v9 = (UnityEngine_Object_o *)hpBarSplitters->m_Items[i];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isFlag);
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


void __fastcall TitleInfoEventRaidBossComponent__SetLastBattleIcon(
        TitleInfoEventRaidBossComponent_o *this,
        UISprite_o *sprite,
        System_String_o *prefix,
        int32_t eventId,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x23
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x22
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x21
  int32_t v23; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v24; // [xsp+18h] [xbp-48h] BYREF
  int32_t v25; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B1451D & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, sprite, prefix);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_25353/*"{0}_{1}"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_25355/*"{0}_{1}_{2}"*/, v14, v15);
    byte_4B1451D = 1;
  }
  if ( (iconId & 0x80000000) != 0 )
    goto LABEL_10;
  v25 = eventId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v24 = iconId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v19 = System_String__Format_62415660((System_String_o *)StringLiteral_25355/*"{0}_{1}_{2}"*/, (Il2CppObject *)prefix, v16, v17, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v18);
  if ( !AtlasManager__SetEventUI(sprite, v19, 0LL) )
  {
LABEL_10:
    if ( (eventId & 0x80000000) != 0 )
      goto LABEL_16;
    v23 = eventId;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v22 = System_String__Format_62415592((System_String_o *)StringLiteral_25353/*"{0}_{1}"*/, (Il2CppObject *)prefix, v20, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21);
    if ( !AtlasManager__SetEventUI(sprite, v22, 0LL) )
    {
LABEL_16:
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite);
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
    sub_1BCAA3C(eventBossStatusUiEntity, label);
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
    sub_1BCAA3C(eventBossStatusUiEntity, label);
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
  __int64 v9; // x2
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x21
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = gaugeId;
  if ( (byte_4B1451C & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, sprite, prefix);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v8, v9);
    byte_4B1451C = 1;
  }
  if ( (gaugeId & 0x80000000) != 0 )
    goto LABEL_12;
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  v12 = System_String__Concat_62412480(prefix, (System_String_o *)StringLiteral_16290/*"_"*/, v10, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11);
  if ( !AtlasManager__SetEventUI(sprite, v12, 0LL) )
  {
LABEL_12:
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite);
    AtlasManager__SetEventUI(sprite, prefix, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidBossComponent__Setup(
        TitleInfoEventRaidBossComponent_o *this,
        UIAtlas_o *terminalAtlas,
        int32_t eventId,
        int32_t warId,
        int32_t day,
        bool isJumbleRaid,
        bool isSingleRaid,
        const MethodInfo *method)
{
  bool v12; // w25
  bool v13; // w24
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  int64_t Instance; // x0
  __int64 v51; // x1
  DataManager_o *v52; // x23
  EventRaidMaster_o *v53; // x21
  struct EventRaidEntity_o *Entity; // x0
  struct EventRaidEntity_o **p_eventRaidEntity; // x22
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct UserEventRaidEntity_o *EntityFromEventIdAndDay; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  bool isRaidDefeatCount; // w0
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  const MethodInfo *v77; // x5
  int32_t v78; // w23
  TitleInfoEventRaidBossComponent_o *v79; // x0
  __int64 v80; // x1
  const MethodInfo *v81; // x4
  TitleInfoEventRaidBossComponent_o *v82; // x0
  const MethodInfo *v83; // x4
  TitleInfoEventRaidBossComponent_o *v84; // x0
  const MethodInfo *v85; // x4
  float v86; // s0
  struct UISlider_o *hpBarSlider; // x1
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct UILabel_o *totalHpLabel; // x1
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  UISprite_o *defeatCntFrame; // x23
  float v102; // s0
  struct UISlider_o *defeatCntBarSlider; // x1
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  struct UILabel_o *totalDefeatCntLabel; // x1
  struct UILabel_o **p_useTotalLabel; // x23
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  int64_t endedAt; // x24
  UnityEngine_Component_o *v119; // x8
  int64_t v120; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v122; // x1
  float overwritePosX; // s0
  UnityEngine_GameObject_o *v124; // x23
  TitleInfoEventRaidBossComponent_c *v125; // x0
  EventRaidEntity_o *eventRaidEntity; // x8
  int32_t RaidGroupDeadQuestId; // w0
  const MethodInfo *v128; // x1
  int32_t v129; // w20

  v12 = isJumbleRaid;
  v13 = isSingleRaid;
  if ( (byte_4B1451A & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, terminalAtlas, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v22, v23);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v28, v29);
    sub_1BCA7E0(&TitleInfoEventRaidBossComponent_TypeInfo, v30, v31);
    sub_1BCA7E0(&StringLiteral_19417/*"event_raid_defeat_count_frame"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_19466/*"event_superboss_hp_white"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_19422/*"event_raid_lastbattle"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_19419/*"event_raid_hp_back"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_19418/*"event_raid_defeat_count_front"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_19420/*"event_raid_hp_frame"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_19426/*"event_raid_split_line"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_19416/*"event_raid_defeat_count_back"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_19421/*"event_raid_hp_front"*/, v48, v49);
    byte_4B1451A = 1;
  }
  this->fields.eventId = eventId;
  this->fields.isEncountRaidBoss = 0;
  this->fields.isDefeatRaidDisp = 0;
  this->fields.warId = warId;
  this->fields.isJumbleRaid = v12;
  this->fields.isSingleRaid = v13;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  v52 = (DataManager_o *)Instance;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v53 = (EventRaidMaster_o *)Instance;
  if ( (day & 0x80000000) != 0 )
  {
    if ( !Instance )
      goto LABEL_59;
    day = EventRaidMaster__GetCurrentDay((EventRaidMaster_o *)Instance, this->fields.eventId, 0LL);
  }
  else if ( !Instance )
  {
    goto LABEL_59;
  }
  Entity = EventRaidMaster__GetEntity(v53, this->fields.eventId, day, 0LL);
  this->fields.eventRaidEntity = Entity;
  p_eventRaidEntity = &this->fields.eventRaidEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventRaidEntity,
    (int64_t)Entity,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  if ( this->fields.eventRaidEntity )
  {
    this->fields.isTimeLimitRaid = (*p_eventRaidEntity)->fields.timeLimitAt > 0;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          v52,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
    if ( Instance )
    {
      EntityFromEventIdAndDay = UserEventRaidMaster__getEntityFromEventIdAndDay(
                                  (UserEventRaidMaster_o *)Instance,
                                  this->fields.eventId,
                                  day,
                                  0LL);
      this->fields.userEventRaidEntity = EntityFromEventIdAndDay;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.userEventRaidEntity,
        (int64_t)EntityFromEventIdAndDay,
        v63,
        v64,
        v65,
        v66,
        v67,
        v68);
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            v52,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( Instance )
      {
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              this->fields.eventId,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( Instance )
        {
          isRaidDefeatCount = EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)Instance, 0LL);
          this->fields.isRaidDefeatCount = isRaidDefeatCount;
          this->fields.isMovedPos = isRaidDefeatCount;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                v52,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
          if ( Instance )
          {
            EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                          (EventBossStatusUiMaster_o *)Instance,
                                          this->fields.eventId,
                                          day,
                                          0LL);
            this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.eventBossStatusUiEntity,
              (int64_t)EntityFromEventIdAndIndex,
              v71,
              v72,
              v73,
              v74,
              v75,
              v76);
            Instance = (int64_t)this->fields.eventBossStatusUiEntity;
            if ( Instance )
            {
              Instance = EventBossStatusUiEntity__GetGaugeId((EventBossStatusUiEntity_o *)Instance, 0LL);
              v78 = Instance;
              if ( this->fields.eventBossStatusUiEntity )
                Instance = EventBossStatusUiEntity__GetLastBattleIconId(this->fields.eventBossStatusUiEntity, 0LL);
            }
            else
            {
              v78 = -1;
            }
            if ( *p_eventRaidEntity )
            {
              TitleInfoEventRaidBossComponent__SetLastBattleIcon(
                (TitleInfoEventRaidBossComponent_o *)Instance,
                this->fields.lastBattleSpr,
                (System_String_o *)StringLiteral_19422/*"event_raid_lastbattle"*/,
                (*p_eventRaidEntity)->fields.eventId,
                (*p_eventRaidEntity)->fields.iconId,
                v77);
              if ( this->fields.isRaidDefeatCount && !this->fields.isTimeLimitRaid )
              {
                defeatCntFrame = this->fields.defeatCntFrame;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v80);
                AtlasManager__SetEventUI(defeatCntFrame, (System_String_o *)StringLiteral_19417/*"event_raid_defeat_count_frame"*/, 0LL);
                AtlasManager__SetEventUI(this->fields.defeatCntBg, (System_String_o *)StringLiteral_19416/*"event_raid_defeat_count_back"*/, 0LL);
                AtlasManager__SetEventUI(this->fields.defeatCntBar, (System_String_o *)StringLiteral_19418/*"event_raid_defeat_count_front"*/, 0LL);
                AtlasManager__SetEventUI(
                  this->fields.defeatCntBarSliderWhiteSp,
                  (System_String_o *)StringLiteral_19466/*"event_superboss_hp_white"*/,
                  0LL);
                AtlasManager__SetEventUI(
                  this->fields.defeatCntBarSplitterSp,
                  (System_String_o *)StringLiteral_19426/*"event_raid_split_line"*/,
                  0LL);
                Instance = (int64_t)this->fields.defeatCntBar;
                if ( !Instance )
                  goto LABEL_59;
                v102 = (*(float (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 664LL))(
                         Instance,
                         *(_QWORD *)(*(_QWORD *)Instance + 672LL));
                defeatCntBarSlider = this->fields.defeatCntBarSlider;
                this->fields.barSizeX = v102;
                this->fields.useBarSlider = defeatCntBarSlider;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&this->fields.useBarSlider,
                  (int64_t)defeatCntBarSlider,
                  v104,
                  v105,
                  v106,
                  v107,
                  v108,
                  v109);
                totalDefeatCntLabel = this->fields.totalDefeatCntLabel;
                this->fields.useTotalLabel = totalDefeatCntLabel;
                p_useTotalLabel = &this->fields.useTotalLabel;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&this->fields.useTotalLabel,
                  (int64_t)totalDefeatCntLabel,
                  v112,
                  v113,
                  v114,
                  v115,
                  v116,
                  v117);
                Instance = (int64_t)this->fields.modeName;
                if ( !Instance )
                  goto LABEL_59;
                Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                if ( !Instance )
                  goto LABEL_59;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                Instance = (int64_t)this->fields.defeatCntBarParent;
                if ( !Instance )
                  goto LABEL_59;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                Instance = (int64_t)this->fields.hpBarParent;
                if ( !Instance )
                  goto LABEL_59;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                if ( !*p_eventRaidEntity )
                  goto LABEL_59;
                endedAt = (*p_eventRaidEntity)->fields.endedAt;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v51);
                Instance = NetworkManager__getTime(0LL);
                v119 = (UnityEngine_Component_o *)*p_useTotalLabel;
                if ( !*p_useTotalLabel )
                  goto LABEL_59;
                v120 = Instance;
                Instance = (int64_t)UnityEngine_Component__get_gameObject(v119, 0LL);
                if ( endedAt > v120 || this->fields.isJumbleRaid )
                {
                  v51 = 1LL;
                  if ( !Instance )
                    goto LABEL_59;
                }
                else
                {
                  v51 = this->fields.isSingleRaid;
                  if ( !Instance )
                    goto LABEL_59;
                }
              }
              else
              {
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v79,
                  this->fields.hpFrame,
                  (System_String_o *)StringLiteral_19420/*"event_raid_hp_frame"*/,
                  v78,
                  v81);
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v82,
                  this->fields.hpBg,
                  (System_String_o *)StringLiteral_19419/*"event_raid_hp_back"*/,
                  v78,
                  v83);
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v84,
                  this->fields.hpBar,
                  (System_String_o *)StringLiteral_19421/*"event_raid_hp_front"*/,
                  v78,
                  v85);
                Instance = (int64_t)this->fields.hpBar;
                if ( !Instance )
                  goto LABEL_59;
                v86 = (*(float (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 664LL))(
                        Instance,
                        *(_QWORD *)(*(_QWORD *)Instance + 672LL));
                hpBarSlider = this->fields.hpBarSlider;
                this->fields.barSizeX = v86;
                this->fields.useBarSlider = hpBarSlider;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&this->fields.useBarSlider,
                  (int64_t)hpBarSlider,
                  v88,
                  v89,
                  v90,
                  v91,
                  v92,
                  v93);
                totalHpLabel = this->fields.totalHpLabel;
                this->fields.useTotalLabel = totalHpLabel;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&this->fields.useTotalLabel,
                  (int64_t)totalHpLabel,
                  v95,
                  v96,
                  v97,
                  v98,
                  v99,
                  v100);
                Instance = (int64_t)this->fields.modeName;
                if ( !Instance )
                  goto LABEL_59;
                Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                if ( !Instance )
                  goto LABEL_59;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                Instance = (int64_t)this->fields.defeatCntBarParent;
                if ( !Instance )
                  goto LABEL_59;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                Instance = (int64_t)this->fields.hpBarParent;
                if ( !Instance )
                  goto LABEL_59;
                LOBYTE(v51) = 1;
              }
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v51, 0LL);
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              overwritePosX = this->fields.overwritePosX;
              v124 = gameObject;
              if ( overwritePosX == 0.0 )
              {
                v125 = TitleInfoEventRaidBossComponent_TypeInfo;
                if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v122);
                  v125 = TitleInfoEventRaidBossComponent_TypeInfo;
                }
                overwritePosX = (float)v125->static_fields->RAIDBOSS_DEFEAT_COUNT_POS_X;
              }
              GameObjectExtensions__SetLocalPositionX(v124, overwritePosX, 0LL);
              Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( Instance )
              {
                Instance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
                if ( Instance )
                {
                  this->fields.originPos = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)Instance,
                                             0LL);
                  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
                      v51 = (unsigned int)this->fields.eventId;
                      if ( (Instance & 1) != 0 )
                      {
                        if ( !*p_eventRaidEntity )
                          goto LABEL_59;
                        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                                 v53,
                                                 v51,
                                                 (*p_eventRaidEntity)->fields.groupIndex,
                                                 0LL);
                      }
                      else
                      {
                        RaidGroupDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(v53, v51, day, 0LL);
                      }
                      v129 = RaidGroupDeadQuestId;
                      if ( RaidGroupDeadQuestId >= 1 )
                      {
                        Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                        if ( !Instance )
                          goto LABEL_59;
                        this->fields.isLastBattleRelease = clsQuestCheck__IsQuestRelease(
                                                             (clsQuestCheck_o *)Instance,
                                                             v129,
                                                             -1,
                                                             0,
                                                             0LL);
                      }
                      TitleInfoEventRaidBossComponent__SetDisp(this, v128);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_59:
    sub_1BCAA3C(Instance, v51);
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
  const MethodInfo *v10; // x2
  struct UnityEngine_GameObject_o *ClearBossEffect; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x1

  this->fields.animEndCall = callBack;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.animEndCall,
    (int64_t)callBack,
    (int64_t)callBack,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ClearBossEffect = TitleInfoEventRaidBossComponent__GetClearBossEffect(this, mapAssetData, v10);
  this->fields.clearBossEffect = ClearBossEffect;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.clearBossEffect,
    (int64_t)ClearBossEffect,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  TitleInfoEventRaidBossComponent__PlayFrameInBoss(this, v18);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  float realtimeSinceStartup; // s0
  float restTimeUpdateSec; // s9
  float v16; // s8
  TitleInfoEventRaidBossComponent_c *v17; // x0
  __int64 v18; // x1
  System_String_o *Time; // x0
  __int64 v20; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  unsigned __int64 v22; // x8
  unsigned __int64 v23; // x23
  unsigned __int64 v24; // x22
  unsigned __int64 v25; // x21
  UILabel_o *restTimeLabel; // x19
  System_String_o *v27; // x20
  Il2CppObject *v28; // x21
  Il2CppObject *v29; // x22
  Il2CppObject *v30; // x0
  unsigned __int64 v31; // [xsp+0h] [xbp-60h] BYREF
  unsigned __int64 v32; // [xsp+8h] [xbp-58h] BYREF
  unsigned __int64 v33; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4B14521 & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, isForce, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&TitleInfoEventRaidBossComponent_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_13510/*"TIME_REST_RAID"*/, v11, v12);
    byte_4B14521 = 1;
  }
  if ( this->fields.isEncountRaidBoss && !this->fields.isRaidDefeatCount )
  {
    if ( isForce )
      goto LABEL_9;
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    restTimeUpdateSec = this->fields.restTimeUpdateSec;
    v16 = realtimeSinceStartup;
    v17 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v13);
      v17 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    if ( (float)(v16 - restTimeUpdateSec) > v17->static_fields->REST_TIME_UPDATE_INTERVAL_SEC )
    {
LABEL_9:
      this->fields.restTimeUpdateSec = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
      Time = (System_String_o *)NetworkManager__getTime(0LL);
      eventRaidEntity = this->fields.eventRaidEntity;
      if ( !eventRaidEntity )
        goto LABEL_20;
      v22 = eventRaidEntity->fields.endedAt - (_QWORD)Time;
      if ( (__int64)v22 < 1 )
      {
        v25 = 0LL;
        v24 = 0LL;
        v23 = 0LL;
      }
      else
      {
        v23 = v22 % 0x3C;
        v24 = v22 / 0x3C % 0x3C;
        v25 = v22 / 0xE10;
      }
      restTimeLabel = this->fields.restTimeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13510/*"TIME_REST_RAID"*/, 0LL);
      v33 = v25;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v33);
      v32 = v24;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v32);
      v31 = v23;
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v31);
      Time = System_String__Format_62415660(v27, v28, v29, v30, 0LL);
      if ( !restTimeLabel )
LABEL_20:
        sub_1BCAA3C(Time, v20);
      UILabel__set_text(restTimeLabel, Time, 0LL);
    }
  }
}


void __fastcall TitleInfoEventRaidBossComponent__setBeforeMovePos(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  UnityEngine_Transform_o *v6; // x19
  __int64 v7; // x1
  TitleInfoEventRaidBossComponent_c *v8; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float *static_fields; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B14523 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventRaidBossComponent_TypeInfo, method, v2);
    byte_4B14523 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
  {
    sub_1BCAA3C(gameObject, v5);
  }
  v6 = (UnityEngine_Transform_o *)gameObject;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  v8 = TitleInfoEventRaidBossComponent_TypeInfo;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v7);
    v8 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  static_fields = (float *)v8->static_fields;
  v14.fields.x = x + static_fields[6];
  v14.fields.y = y + static_fields[7];
  v14.fields.z = z + static_fields[8];
  UnityEngine_Transform__set_localPosition(v6, v14, 0LL);
}


void __fastcall TitleInfoEventRaidBossComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B14530 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventRaidBossComponent___c_TypeInfo, v1, v2);
    byte_4B14530 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(TitleInfoEventRaidBossComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventRaidBossComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall TitleInfoEventRaidBossComponent___c___ctor(
        TitleInfoEventRaidBossComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventRaidBossComponent___c___PlayHpCut_b__83_0(
        TitleInfoEventRaidBossComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventRaidBossComponent___c__DisplayClass91_0___ctor(
        TitleInfoEventRaidBossComponent___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TitleInfoEventRaidBossComponent___c__DisplayClass91_0___GetAiModeName_b__0(
        TitleInfoEventRaidBossComponent___c__DisplayClass91_0_o *this,
        int64_t hp,
        const MethodInfo *method)
{
  return this->fields.totalDamage >= hp;
}