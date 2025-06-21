void __fastcall TitleInfoEventRaidBossComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  struct TitleInfoEventRaidBossComponent_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  struct TitleInfoEventRaidBossComponent_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  struct TitleInfoEventRaidBossComponent_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  TitleInfoEventRaidBossComponent_c *v20; // x8
  struct TitleInfoEventRaidBossComponent_StaticFields *v21; // x9
  struct TitleInfoEventRaidBossComponent_StaticFields *v22; // x8

  if ( (byte_4B1AE87 & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoEventRaidBossComponent_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_12496/*"SaveKeyStartRaidClearAnimation"*/, v4);
    sub_1BCAFF8(&StringLiteral_22730/*"raid_boss_icon_"*/, v5);
    sub_1BCAFF8(&StringLiteral_14378/*"TitleInfoEventRaidBossEffect_Dead"*/, v6);
    sub_1BCAFF8(&StringLiteral_22731/*"raid_boss_icon_last_"*/, v7);
    byte_4B1AE87 = 1;
  }
  TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_22730/*"raid_boss_icon_"*/;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields,
    StringLiteral_22730/*"raid_boss_icon_"*/,
    v2,
    v3);
  v8 = StringLiteral_22731/*"raid_boss_icon_last_"*/;
  static_fields = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  static_fields->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_22731/*"raid_boss_icon_last_"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX, v8, v10, v11);
  v12 = StringLiteral_14378/*"TitleInfoEventRaidBossEffect_Dead"*/;
  v13 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v13->RAIDBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14378/*"TitleInfoEventRaidBossEffect_Dead"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v13->RAIDBOSS_CLEAR_EFFECT_PREFAB, v12, v14, v15);
  v16 = StringLiteral_12496/*"SaveKeyStartRaidClearAnimation"*/;
  v17 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v17->SAVEKEY_START_RAID_CLEAR_ANIMATION = (struct System_String_o *)StringLiteral_12496/*"SaveKeyStartRaidClearAnimation"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v17->SAVEKEY_START_RAID_CLEAR_ANIMATION, v16, v18, v19);
  v20 = TitleInfoEventRaidBossComponent_TypeInfo;
  v21 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v21->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v21->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v22 = v20->static_fields;
  *(_OWORD *)&v22->ANIM_DURATION_FRAME_IN_BOSS = xmmword_BE23E0;
  *(_QWORD *)&v22->REST_TIME_UPDATE_INTERVAL_SEC = 0xE23F800000LL;
  *(_QWORD *)&v22->CLEAR_END_CALLBACK_DELAY = 0x3FC000003F000000LL;
  v22->CLEAR_END_CALLBACK_DELAY_NORMAL = 1.0;
}


void __fastcall TitleInfoEventRaidBossComponent___ctor(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0LL);
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

  if ( (byte_4B1AE80 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&TitleInfoEventRaidBossComponent_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_9821/*"OnEndAnimation"*/, v4);
    byte_4B1AE80 = 1;
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
    (System_String_o *)StringLiteral_9821/*"OnEndAnimation"*/,
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
  __int64 v16; // x2
  struct EventRaidEntity_o *v17; // x8
  struct System_String_array *v18; // x8
  System_String_o **v19; // x8

  if ( (byte_4B1AE82 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Count_long____76955600, totalDamage);
    sub_1BCAFF8(&System_Func_long__bool__TypeInfo, v5);
    sub_1BCAFF8(&Method_TitleInfoEventRaidBossComponent___c__DisplayClass96_0__GetAiModeName_b__0__, v6);
    sub_1BCAFF8(&TitleInfoEventRaidBossComponent___c__DisplayClass96_0_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v8);
    byte_4B1AE82 = 1;
  }
  v9 = (Il2CppObject *)sub_1BCB244(TitleInfoEventRaidBossComponent___c__DisplayClass96_0_TypeInfo);
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
    v19 = (System_String_o **)&StringLiteral_1/*""*/;
    return *v19;
  }
  splitHp = (System_Collections_Generic_IEnumerable_TSource__o *)eventRaidEntity->fields.splitHp;
  v15 = (System_Func_long__bool__o *)sub_1BCB244(System_Func_long__bool__TypeInfo);
  System_Func_long__bool____ctor(
    v15,
    v9,
    Method_TitleInfoEventRaidBossComponent___c__DisplayClass96_0__GetAiModeName_b__0__,
    0LL);
  v10 = System_Linq_Enumerable__Count_long__50561996(
          splitHp,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_30383CC *)Method_System_Linq_Enumerable_Count_long____76955600);
  v17 = this->fields.eventRaidEntity;
  if ( !v17 || (v18 = v17->fields.splitAiMode) == 0LL )
LABEL_13:
    sub_1BCB254(v10, v11);
  if ( (unsigned int)v10 >= v18->max_length )
    sub_1BCB25C(v10, v11, v16);
  v19 = &v18->m_Items[(int)v10];
  return *v19;
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

  if ( (byte_4B1AE85 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, animation);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&TitleInfoEventRaidBossComponent_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_24978/*"{0}_{1}"*/, v9);
    sub_1BCAFF8(&StringLiteral_24980/*"{0}_{1}_{2}"*/, v10);
    byte_4B1AE85 = 1;
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
  v11 = (Il2CppObject *)System_String__Format_62491784((System_String_o *)StringLiteral_24980/*"{0}_{1}_{2}"*/, v13, v18, v19, 0LL);
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
    v27 = System_String__Format_62491716((System_String_o *)StringLiteral_24978/*"{0}_{1}"*/, RAIDBOSS_CLEAR_EFFECT_PREFAB, v26, 0LL);
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
        v34 = System_String__Format_62491716((System_String_o *)StringLiteral_24978/*"{0}_{1}"*/, v32, v33, 0LL);
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
      sub_1BCB254(v11, animation);
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
  Il2CppObject *Object_object__50315216; // x21
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

  if ( (byte_4B1AE84 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, mapAssetData);
    sub_1BCAFF8(&int_TypeInfo, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    sub_1BCAFF8(&TitleInfoEventRaidBossComponent_TypeInfo, v9);
    sub_1BCAFF8(&StringLiteral_24978/*"{0}_{1}"*/, v10);
    sub_1BCAFF8(&StringLiteral_24980/*"{0}_{1}_{2}"*/, v11);
    byte_4B1AE84 = 1;
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
  v12 = (Il2CppObject *)System_String__Format_62491784((System_String_o *)StringLiteral_24980/*"{0}_{1}_{2}"*/, v14, v19, v20, 0LL);
  if ( !mapAssetData )
    goto LABEL_27;
  Object_object__50315216 = AssetData__GetObject_object__50315216(
                              mapAssetData,
                              (System_String_o *)v12,
                              (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__50315216, 0LL, 0LL) )
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
    v28 = System_String__Format_62491716((System_String_o *)StringLiteral_24978/*"{0}_{1}"*/, RAIDBOSS_CLEAR_EFFECT_PREFAB, v27, 0LL);
    Object_object__50315216 = AssetData__GetObject_object__50315216(
                                mapAssetData,
                                v28,
                                (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__50315216, 0LL, 0LL) )
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
        v35 = System_String__Format_62491716((System_String_o *)StringLiteral_24978/*"{0}_{1}"*/, v33, v34, 0LL);
        Object_object__50315216 = AssetData__GetObject_object__50315216(
                                    mapAssetData,
                                    v35,
                                    (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__50315216, 0LL, 0LL) )
        {
          v36 = TitleInfoEventRaidBossComponent_TypeInfo;
          if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
            v36 = TitleInfoEventRaidBossComponent_TypeInfo;
          }
          return (UnityEngine_GameObject_o *)AssetData__GetObject_object__50315216(
                                               mapAssetData,
                                               v36->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB,
                                               (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
        }
        return (UnityEngine_GameObject_o *)Object_object__50315216;
      }
LABEL_27:
      sub_1BCB254(v12, mapAssetData);
    }
  }
  return (UnityEngine_GameObject_o *)Object_object__50315216;
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

  if ( (byte_4B1AE76 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_TotalEventRaidMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    byte_4B1AE76 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (int64_t)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_TotalEventRaidMaster___);
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
    sub_1BCB254(result, v5);
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
  Il2CppObject *NumberFormat_40454332; // x1
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
  if ( (byte_4B1AE83 & 1) == 0 )
  {
    sub_1BCAFF8(&long_TypeInfo, totalHp);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&System_Text_StringBuilder_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_5629/*"EVENT_RAID_REST_COUNT_AFTER"*/, v9);
    sub_1BCAFF8(&StringLiteral_5630/*"EVENT_RAID_REST_COUNT_BEFORE"*/, v10);
    sub_1BCAFF8(&StringLiteral_113/*" "*/, v11);
    sub_1BCAFF8(&StringLiteral_5553/*"EVENT_DEFEAT_COUNT_TXT"*/, v12);
    sub_1BCAFF8(&StringLiteral_13336/*"TITLE_INFO_RAID_TOTALHP"*/, v13);
    byte_4B1AE83 = 1;
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
      NumberFormat_40454332 = (Il2CppObject *)LocalizationManager__GetNumberFormat_40454332(v27, 0LL);
      v29 = CountFormat;
      return System_String__Format(v29, NumberFormat_40454332, 0LL);
    }
  }
  if ( !this->fields.isJumbleRaid && !this->fields.isSingleRaid )
  {
    if ( this->fields.isRaidDefeatCount && !this->fields.isTimeLimitRaid )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_5553/*"EVENT_DEFEAT_COUNT_TXT"*/, 0LL);
      v36 = totalDamage;
      NumberFormat_40454332 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v36, v33, v34, v35);
      v29 = v32;
    }
    else
    {
      v30 = System_Int64__ToString((int64_t)&v37, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = LocalizationManager__GetNumberFormat_40454332(v30, 0LL);
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_13336/*"TITLE_INFO_RAID_TOTALHP"*/, 0LL);
      NumberFormat_40454332 = (Il2CppObject *)v31;
    }
    return System_String__Format(v29, NumberFormat_40454332, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5630/*"EVENT_RAID_REST_COUNT_BEFORE"*/, 0LL);
  v17 = (System_Text_StringBuilder_o *)sub_1BCB244(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_62528192(v17, v16, 0LL);
  if ( !v17 )
    sub_1BCB254(v18, v19);
  System_Text_StringBuilder__Append_62534368(v17, (System_String_o *)StringLiteral_113/*" "*/, 0LL);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5629/*"EVENT_RAID_REST_COUNT_AFTER"*/, 0LL);
  v36 = totalHp;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v36, v21, v22, v23);
  v25 = System_String__Format(v20, v24, 0LL);
  System_Text_StringBuilder__Append_62534368(v17, v25, 0LL);
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
    sub_1BCB254(0LL, method);
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

  if ( (byte_4B1AE7E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, *(_QWORD *)&raidDeadQuestId);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v7);
    byte_4B1AE7E = 1;
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
    eventRaidEntity = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( eventRaidEntity )
      return clsQuestCheck__IsQuestClear(eventRaidEntity, raidDeadQuestId, 0, 0LL) || this->fields.isJumbleRaid;
LABEL_20:
    sub_1BCB254(eventRaidEntity, *(_QWORD *)&raidDeadQuestId);
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
    sub_1BCB254(this, eventId);
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

  if ( (byte_4B1AE86 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_QuestReleaseEntity____76918152, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestReleaseMaster___, v3);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__, v7);
    sub_1BCAFF8(&System_Func_QuestReleaseEntity__bool__TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__, v9);
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v10);
    sub_1BCAFF8(&Method_TitleInfoEventRaidBossComponent__IsTerminalSceneRefreshRequest_b__104_0__, v11);
    byte_4B1AE86 = 1;
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
  if ( !byte_4B1676D )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v14);
    byte_4B1676D = 1;
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
    || (ObjectList = *(QuestBoardListViewManager_o **)(v18 + 304)) == 0LL
    || (ObjectList = (QuestBoardListViewManager_o *)QuestBoardListViewManager__get_ObjectList(ObjectList, 0LL)) == 0LL )
  {
    sub_1BCB254(ObjectList, v14);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)ObjectList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    v21 = v19;
    if ( !v19 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_1BCB254(v19, v20);
    Item = QuestBoardListViewObject__GetItem((QuestBoardListViewObject_o *)v33.fields._current, 0LL);
    if ( !Item )
      sub_1BCB254(0LL, v24);
    if ( Item->fields._quest_info_k__BackingField )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
      v26 = QuestBoardListViewObject__GetItem((QuestBoardListViewObject_o *)current, 0LL);
      if ( !v26 )
        sub_1BCB254(0LL, v27);
      quest_info_k__BackingField = v26->fields._quest_info_k__BackingField;
      if ( !quest_info_k__BackingField )
        sub_1BCB254(v26, v27);
      if ( !Master_object )
        sub_1BCB254(v26, v27);
      ListByQuestID = (System_Object_array *)QuestReleaseMaster__getListByQuestID(
                                               (QuestReleaseMaster_o *)Master_object,
                                               quest_info_k__BackingField->fields.questId,
                                               0LL);
      v30 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_QuestReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v30,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaidBossComponent__IsTerminalSceneRefreshRequest_b__104_0__,
        0LL);
      if ( BasicHelper__Any_object__50347976(
             ListByQuestID,
             (System_Func_T__bool__o *)v30,
             (const MethodInfo_3003FC8 *)Method_BasicHelper_Any_QuestReleaseEntity____76918152) )
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
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_Action_o *animEndCall; // x20
  const MethodInfo *v6; // x1

  animEndCall = this->fields.animEndCall;
  this->fields.animEndCall = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.animEndCall, 0, v2, v3);
  ActionExtensions__Call(animEndCall, 0LL);
  TitleInfoEventRaidBossComponent__SetDisp(this, v6);
}


void __fastcall TitleInfoEventRaidBossComponent__OnStartFadeOutAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  System_Action_o *onClearCall; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *raidBossIconSp; // x0
  struct EventRaidEntity_o *eventRaidEntity; // x8
  int32_t eventId; // w20
  int32_t day; // w21
  TitleInfoEventRaidBossComponent_c *v13; // x0
  TitleInfoEventRaidBossComponent_c *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventRaidBossComponent_c *v16; // x8
  UnityEngine_GameObject_o *v17; // x19

  if ( (byte_4B1AE81 & 1) == 0 )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
    sub_1BCAFF8(&TitleInfoEventRaidBossComponent_TypeInfo, v5);
    sub_1BCAFF8(&Method_UITweener_Begin_TweenAlpha___, v6);
    byte_4B1AE81 = 1;
  }
  onClearCall = this->fields.onClearCall;
  this->fields.onClearCall = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.onClearCall, 0, v2, v3);
  ActionExtensions__Call(onClearCall, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B199C6 )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v8);
    byte_4B199C6 = 1;
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
    v13 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
      v13 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    if ( UnityEngine_PlayerPrefs__GetInt_70094320(v13->static_fields->SAVEKEY_START_RAID_CLEAR_ANIMATION, 0LL) )
    {
      v14 = TitleInfoEventRaidBossComponent_TypeInfo;
      if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
        v14 = TitleInfoEventRaidBossComponent_TypeInfo;
      }
      UnityEngine_PlayerPrefs__DeleteKey(v14->static_fields->SAVEKEY_START_RAID_CLEAR_ANIMATION, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
  raidBossIconSp = (UnityEngine_Component_o *)this->fields.raidBossIconSp;
  this->fields.isRaidClear = 1;
  if ( !raidBossIconSp )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject(raidBossIconSp, 0LL);
  v16 = TitleInfoEventRaidBossComponent_TypeInfo;
  v17 = gameObject;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v16 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  raidBossIconSp = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                v17,
                                                v16->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                (const MethodInfo_30D2A08 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !raidBossIconSp )
LABEL_28:
    sub_1BCB254(raidBossIconSp, v8);
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4B1AE7B & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoEventRaidBossComponent_TypeInfo, method);
    sub_1BCAFF8(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_1BCAFF8(&StringLiteral_10578/*"PlayHpNameAlpha"*/, v4);
    byte_4B1AE7B = 1;
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
                                       (const MethodInfo_30D2A08 *)Method_UITweener_Begin_TweenPosition___);
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
    sub_1BCB254(Child, v7);
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&v14[3].monitor, (int32_t)v18, v19, v20);
  v21 = StringLiteral_10578/*"PlayHpNameAlpha"*/;
  *(_QWORD *)&v14[3].fields.m_CachedPtr = StringLiteral_10578/*"PlayHpNameAlpha"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v14[3].fields, v21, v22, v23);
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Action_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1

  if ( (byte_4B1AE7C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v3);
    sub_1BCAFF8(&Method_TitleInfoEventRaidBossComponent_PlayHpDeletion__, v4);
    sub_1BCAFF8(&TitleInfoEventRaidBossComponent_TypeInfo, v5);
    sub_1BCAFF8(&Method_TitleInfoEventRaidBossComponent___c__PlayHpCut_b__88_0__, v6);
    sub_1BCAFF8(&TitleInfoEventRaidBossComponent___c_TypeInfo, v7);
    byte_4B1AE7C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
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
    _9__88_0 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(_9__88_0, v15, Method_TitleInfoEventRaidBossComponent___c__PlayHpCut_b__88_0__, 0LL);
    static_fields = TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields;
    static_fields->__9__88_0 = _9__88_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__88_0, (int32_t)_9__88_0, v17, v18);
  }
  v19 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_TitleInfoEventRaidBossComponent_PlayHpDeletion__, 0LL);
  if ( !v11 )
    sub_1BCB254(v20, v21);
  EasingObject__Play(v11, ANIM_DURATION_HP_CUT, _9__88_0, v19, 0.0, 0, 0LL);
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
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_4B1AE7D & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaidMaster___, v3);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v4);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BCAFF8(&Method_TitleInfoEventRaidBossComponent_OnEndAnimation__, v8);
    sub_1BCAFF8(&Method_TitleInfoEventRaidBossComponent_OnStartFadeOutAnimation__, v9);
    byte_4B1AE7D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
    sub_1BCB254(Instance, eventId);
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
              (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      v30 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        v30,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaidBossComponent_OnStartFadeOutAnimation__,
        0LL);
      if ( Component_object )
      {
        CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v30, 0LL);
        v31 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
        System_Action___ctor(v31, (Il2CppObject *)this, Method_TitleInfoEventRaidBossComponent_OnEndAnimation__, 0LL);
        Component_object[2].monitor = v31;
        sub_1BCAF9C((CGThumbnailListItem_o *)&Component_object[2].monitor, (int32_t)v31, v32, v33);
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

  if ( (byte_4B1AE72 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, eventRaidEnt);
    sub_1BCAFF8(&TitleInfoEventRaidBossComponent_TypeInfo, v7);
    byte_4B1AE72 = 1;
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
    v12 = System_String__Concat_62450424(RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX, v11, 0LL);
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
  v16 = System_String__Concat_62450424(RAIDBOSS_ICON_SPNAME_PREFIX, v15, 0LL);
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
    sub_1BCB254(v8, eventRaidEnt);
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

  if ( (byte_4B1AE7F & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    sub_1BCAFF8(&TitleInfoEventRaidBossComponent_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_5270/*"DoClearCallback"*/, v6);
    byte_4B1AE7F = 1;
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
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    sub_1BCB254(v15, v13);
  }
LABEL_26:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5270/*"DoClearCallback"*/,
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  int64_t totalDamage; // x9
  double v13; // d0
  struct EventRaidEntity_o *v14; // x9
  double maxHp; // d1
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float v19; // s3
  float v20; // s0
  float v21; // s1
  _BOOL4 isJumbleRaid; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1AE79 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, onClearCallback);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1AE79 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.onClearCall, (int32_t)onClearCallback, v9, v10);
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( userEventRaidEntity )
    userEventRaidEntity = (struct UserEventRaidEntity_o *)userEventRaidEntity->fields.damage;
  if ( entity )
  {
    totalDamage = entity->fields.totalDamage;
    userEventRaidEntity = (struct UserEventRaidEntity_o *)((char *)userEventRaidEntity + totalDamage);
    v13 = (double)totalDamage;
  }
  else
  {
    v13 = 0.0;
  }
  v14 = this->fields.eventRaidEntity;
  if ( !v14 )
    goto LABEL_31;
  maxHp = (double)v14->fields.maxHp;
  Instance = (DataManager_o *)this->fields.useBarSlider;
  v16 = 1.0 - v13 / maxHp;
  v17 = 1.0 - (double)(__int64)userEventRaidEntity / maxHp;
  v18 = fminf(v16, 1.0);
  v19 = fminf(v17, 1.0);
  v20 = v16 < 0.0 ? 0.0 : v18;
  v21 = v17 < 0.0 ? 0.0 : v19;
  this->fields.HPfrom = v20;
  this->fields.HPto = v21;
  if ( !Instance )
    goto LABEL_31;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v20, 0LL);
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
    sub_1BCB254(Instance, v7);
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
  UISprite_o *Instance; // x0
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
  __int64 v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x2
  UnityEngine_Component_o *v26; // x22
  il2cpp_array_size_t v27; // w28
  struct UISprite_array *v28; // x23
  Il2CppObject *defeatCntBarSplitter; // x24
  const MethodInfo *v30; // x3
  DataManager_o *v31; // x24
  Il2CppClass **v32; // x0
  struct UISprite_array *v33; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v35; // x3
  UISprite_o *v36; // x24
  struct EventRaidEntity_o *v37; // x8
  struct System_Int64_array *v38; // x9
  struct UISprite_array *v39; // x10
  __int64 maxHp; // d9
  __int64 v41; // d10
  float barSizeX; // s8
  float v43; // s0
  float r; // s9
  float g; // s11
  float b; // s8
  float a; // s10
  struct EventRaidEntity_o *v48; // x8
  __int64 v49; // x22
  const MethodInfo *v50; // x2
  __int64 RaidBossTotalDamage; // x20
  UILabel_o *modeName; // x21
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x3
  UILabel_o *useTotalLabel; // x21
  const MethodInfo *v56; // x2
  UnityEngine_Object_o *bossName; // x21
  const MethodInfo *v58; // x2
  struct EventRaidEntity_o *v59; // x8
  float v60; // s0
  struct EventRaidEntity_o *v61; // x8
  const MethodInfo *v62; // x2
  UnityEngine_Object_o *v63; // x20
  const MethodInfo *v64; // x2
  const MethodInfo *v65; // x2
  __int64 v66; // x0
  bool *v67; // [xsp+0h] [xbp-90h]
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1AE75 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, method);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v3);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BCAFF8(&UISprite___TypeInfo, v7);
    byte_4B1AE75 = 1;
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
  Instance = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  Instance = (UISprite_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
  v67 = p_isRaidDefeatCount;
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
      v22 = sub_1BCB0A0(UISprite___TypeInfo, max_length);
      *p_hpBarSplitters = (struct UISprite_array *)v22;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.hpBarSplitters, v22, v23, v24);
    }
    Instance = (UISprite_o *)GameObjectExtensions__GetParent(this->fields.defeatCntBarSplitter, 0LL);
    v26 = (UnityEngine_Component_o *)Instance;
    v27 = 0;
    do
    {
      if ( !hpBarSplitters )
      {
        v28 = this->fields.hpBarSplitters;
        defeatCntBarSplitter = (Il2CppObject *)this->fields.defeatCntBarSplitter;
        if ( v27 )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Instance = (UISprite_o *)UnityEngine_Object__Instantiate_object_(
                                     defeatCntBarSplitter,
                                     (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !Instance )
            goto LABEL_87;
          Instance = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)Instance,
                                     (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( !v28 )
            goto LABEL_87;
          v31 = (DataManager_o *)Instance;
          if ( Instance )
          {
            Instance = (UISprite_o *)sub_1BCB134(Instance, v28->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_89;
          }
          if ( v27 >= v28->max_length )
            goto LABEL_88;
          v32 = &v28->obj.klass + (int)v27;
          v32[4] = (Il2CppClass *)v31;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v31, v25, v30);
          v33 = *p_hpBarSplitters;
          if ( !*p_hpBarSplitters )
            goto LABEL_87;
          if ( v27 >= v33->max_length )
            goto LABEL_88;
          Instance = v33->m_Items[v27];
          if ( !Instance )
            goto LABEL_87;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          GameObjectExtensions__SafeSetParent(gameObject, v26, 0LL);
        }
        else
        {
          if ( !defeatCntBarSplitter )
            goto LABEL_87;
          Instance = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                     this->fields.defeatCntBarSplitter,
                                     (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( !v28 )
            goto LABEL_87;
          v36 = Instance;
          if ( Instance )
          {
            Instance = (UISprite_o *)sub_1BCB134(Instance, v28->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_89:
              v66 = sub_1BCB278(Instance);
              sub_1BCB120(v66, 0LL);
            }
          }
          if ( !v28->max_length )
            goto LABEL_88;
          v28->m_Items[0] = v36;
          sub_1BCAF9C((CGThumbnailListItem_o *)v28->m_Items, (int32_t)v36, v25, v35);
        }
      }
      v37 = this->fields.eventRaidEntity;
      if ( !v37 )
        goto LABEL_87;
      v38 = v37->fields.splitHp;
      if ( !v38 )
        goto LABEL_87;
      if ( v27 >= v38->max_length )
        goto LABEL_88;
      v39 = this->fields.hpBarSplitters;
      if ( !v39 )
        goto LABEL_87;
      if ( v27 >= v39->max_length )
LABEL_88:
        sub_1BCB25C(Instance, v10, v25);
      Instance = v39->m_Items[v27];
      if ( !Instance )
        goto LABEL_87;
      maxHp = v37->fields.maxHp;
      v41 = v38->m_Items[v27];
      barSizeX = this->fields.barSizeX;
      Instance = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_87;
      v43 = -(double)v41 / (double)maxHp;
      v69.fields.x = barSizeX * v43;
      v69.fields.y = 0.0;
      v69.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v69, 0LL);
    }
    while ( max_length != ++v27 );
  }
  Instance = (UISprite_o *)this->fields.eventBossStatusUiEntity;
  if ( Instance )
  {
    v70.fields.g = 0.035294;
    v70.fields.r = 0.37647;
    v70.fields.a = 1.0;
    v70.fields.b = 0.035294;
    TextEffectColor = EventBossStatusUiEntity__GetTextEffectColor((EventBossStatusUiEntity_o *)Instance, v70, 0LL);
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
  v48 = this->fields.eventRaidEntity;
  if ( !v48 )
    goto LABEL_87;
  v49 = v48->fields.maxHp;
  RaidBossTotalDamage = TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(this, v10);
  if ( this->fields.isRaidDefeatCount )
  {
    modeName = this->fields.modeName;
    Instance = (UISprite_o *)TitleInfoEventRaidBossComponent__GetAiModeName(this, RaidBossTotalDamage, v50);
    if ( !modeName )
      goto LABEL_87;
    UILabel__set_text(modeName, (System_String_o *)Instance, 0LL);
    v72.fields.r = r;
    v72.fields.g = g;
    v72.fields.b = b;
    v72.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, this->fields.modeName, v72, v53);
  }
  Instance = (UISprite_o *)this->fields.useTotalLabel;
  if ( !Instance )
    goto LABEL_87;
  Instance = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_87;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    useTotalLabel = this->fields.useTotalLabel;
    Instance = (UISprite_o *)TitleInfoEventRaidBossComponent__GetRestCountText(
                               this,
                               v49 - RaidBossTotalDamage,
                               RaidBossTotalDamage,
                               v54);
    if ( !useTotalLabel )
      goto LABEL_87;
    UILabel__set_text(useTotalLabel, (System_String_o *)Instance, 0LL);
    v73.fields.r = r;
    v73.fields.g = g;
    v73.fields.b = b;
    v73.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, this->fields.useTotalLabel, v73, v56);
  }
  bossName = (UnityEngine_Object_o *)this->fields.bossName;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bossName, 0LL, 0LL) )
  {
    Instance = (UISprite_o *)this->fields.bossName;
    if ( !Instance )
      goto LABEL_87;
    Instance = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_87;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, this->fields.isJumbleRaid, 0LL);
    if ( this->fields.isJumbleRaid )
    {
      v59 = this->fields.eventRaidEntity;
      if ( !v59 )
        goto LABEL_87;
      Instance = (UISprite_o *)this->fields.bossName;
      if ( !Instance )
        goto LABEL_87;
      UILabel__set_text((UILabel_o *)Instance, v59->fields.name, 0LL);
    }
    v74.fields.r = r;
    v74.fields.g = g;
    v74.fields.b = b;
    v74.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, this->fields.bossName, v74, v58);
  }
  Instance = (UISprite_o *)this->fields.useBarSlider;
  if ( !Instance )
    goto LABEL_87;
  v60 = 1.0 - (double)RaidBossTotalDamage / (double)v49;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v60, 0LL);
  if ( this->fields.isJumbleRaid )
  {
    Instance = (UISprite_o *)this->fields.eventRaidEntity;
    if ( !Instance )
      goto LABEL_87;
    Instance = (UISprite_o *)EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)Instance, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      goto LABEL_75;
  }
  if ( !*v67 )
    goto LABEL_75;
  if ( !this->fields.isLastBattleRelease )
  {
    v61 = this->fields.eventRaidEntity;
    if ( !v61 )
      goto LABEL_87;
    if ( v61->fields.maxHp > RaidBossTotalDamage )
    {
LABEL_75:
      Instance = this->fields.lastBattleSpr;
      if ( Instance )
      {
        Instance = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          goto LABEL_84;
        }
      }
LABEL_87:
      sub_1BCB254(Instance, v10);
    }
  }
  Instance = this->fields.lastBattleSpr;
  if ( !Instance )
    goto LABEL_87;
  Instance = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v75.fields.r = r;
  v75.fields.g = g;
  v75.fields.b = b;
  v75.fields.a = a;
  TitleInfoEventRaidBossComponent__SetOutlineLastColor(this, this->fields.useTotalLabel, v75, v62);
  v63 = (UnityEngine_Object_o *)this->fields.bossName;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v63, 0LL, 0LL) )
  {
    v76.fields.r = r;
    v76.fields.g = g;
    v76.fields.b = b;
    v76.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineLastColor(this, this->fields.bossName, v76, v64);
  }
LABEL_84:
  Instance = (UISprite_o *)this->fields.restTimeLabel;
  if ( !Instance )
    goto LABEL_87;
  v77.fields.r = r;
  v77.fields.g = g;
  v77.fields.b = b;
  v77.fields.a = a;
  UILabel__set_effectColor((UILabel_o *)Instance, v77, 0LL);
  TitleInfoEventRaidBossComponent__UpdateRestTime(this, 1, v65);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidBossComponent__SetHpBarSplitters(
        TitleInfoEventRaidBossComponent_o *this,
        bool isFlag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *defeatCntBarSplitter; // x0
  __int64 v6; // x2
  struct UISprite_array *hpBarSplitters; // x21
  __int64 v8; // x8
  unsigned __int64 i; // x22
  UnityEngine_Object_o *v10; // x20

  if ( (byte_4B1AE77 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, isFlag);
    byte_4B1AE77 = 1;
  }
  defeatCntBarSplitter = this->fields.defeatCntBarSplitter;
  if ( !defeatCntBarSplitter
    || (defeatCntBarSplitter = UnityEngine_GameObject__get_gameObject(defeatCntBarSplitter, 0LL)) == 0LL )
  {
LABEL_17:
    sub_1BCB254(defeatCntBarSplitter, isFlag);
  }
  UnityEngine_GameObject__SetActive(defeatCntBarSplitter, isFlag, 0LL);
  hpBarSplitters = this->fields.hpBarSplitters;
  if ( hpBarSplitters )
  {
    v8 = *(_QWORD *)&hpBarSplitters->max_length;
    if ( (int)v8 >= 1 )
    {
      for ( i = 0LL; (__int64)i < (int)v8; ++i )
      {
        if ( i >= (unsigned int)v8 )
          sub_1BCB25C(defeatCntBarSplitter, isFlag, v6);
        v10 = (UnityEngine_Object_o *)hpBarSplitters->m_Items[i];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        defeatCntBarSplitter = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
        if ( ((unsigned __int8)defeatCntBarSplitter & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_17;
          defeatCntBarSplitter = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
          if ( !defeatCntBarSplitter )
            goto LABEL_17;
          UnityEngine_GameObject__SetActive(defeatCntBarSplitter, isFlag, 0LL);
        }
        LODWORD(v8) = hpBarSplitters->max_length;
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

  if ( (byte_4B1AE74 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, sprite);
    sub_1BCAFF8(&int_TypeInfo, v10);
    sub_1BCAFF8(&StringLiteral_24978/*"{0}_{1}"*/, v11);
    sub_1BCAFF8(&StringLiteral_24980/*"{0}_{1}_{2}"*/, v12);
    byte_4B1AE74 = 1;
  }
  if ( (iconId & 0x80000000) != 0 )
    goto LABEL_10;
  v23 = eventId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, prefix, *(_QWORD *)&eventId, *(_QWORD *)&iconId);
  v22 = iconId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v14, v15, v16);
  v18 = System_String__Format_62491784((System_String_o *)StringLiteral_24980/*"{0}_{1}_{2}"*/, (Il2CppObject *)prefix, v13, v17, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v18, 0LL) )
  {
LABEL_10:
    if ( (eventId & 0x80000000) != 0 )
      goto LABEL_16;
    v21 = eventId;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, prefix, *(_QWORD *)&eventId, *(_QWORD *)&iconId);
    v20 = System_String__Format_62491716((System_String_o *)StringLiteral_24978/*"{0}_{1}"*/, (Il2CppObject *)prefix, v19, 0LL);
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
    sub_1BCB254(eventBossStatusUiEntity, label);
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
    sub_1BCB254(eventBossStatusUiEntity, label);
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
  if ( (byte_4B1AE73 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, sprite);
    sub_1BCAFF8(&StringLiteral_15973/*"_"*/, v8);
    byte_4B1AE73 = 1;
  }
  if ( (gaugeId & 0x80000000) != 0 )
    goto LABEL_12;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  v10 = System_String__Concat_62488672(prefix, (System_String_o *)StringLiteral_15973/*"_"*/, v9, 0LL);
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
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct UserEventRaidEntity_o *EntityFromEventIdAndDay; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  bool isRaidDefeatCount; // w0
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x5
  int32_t v51; // w23
  TitleInfoEventRaidBossComponent_o *v52; // x0
  const MethodInfo *v53; // x4
  TitleInfoEventRaidBossComponent_o *v54; // x0
  const MethodInfo *v55; // x4
  TitleInfoEventRaidBossComponent_o *v56; // x0
  const MethodInfo *v57; // x4
  float v58; // s0
  struct UISlider_o *hpBarSlider; // x1
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct UILabel_o *totalHpLabel; // x1
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  UISprite_o *defeatCntFrame; // x23
  float v66; // s0
  struct UISlider_o *defeatCntBarSlider; // x1
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct UILabel_o *totalDefeatCntLabel; // x1
  struct UILabel_o **p_useTotalLabel; // x23
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  int64_t endedAt; // x24
  UnityEngine_Component_o *v75; // x8
  int64_t v76; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  float overwritePosX; // s0
  UnityEngine_GameObject_o *v79; // x23
  TitleInfoEventRaidBossComponent_c *v80; // x0
  EventRaidEntity_o *eventRaidEntity; // x8
  int64_t maxHp; // x20
  EventRaidEntity_o *v83; // x8
  int32_t raidDeadQuestId; // w20
  bool IsJumbleSingleRaid; // w0
  const MethodInfo *v86; // x3
  const MethodInfo *v87; // x1

  v13 = isJumbleRaid;
  v14 = isSingleRaid;
  v15 = isEventFolderRaid;
  if ( (byte_4B1AE71 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, terminalAtlas);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, v16);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventDetailMaster___, v17);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaidMaster___, v18);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v19);
    sub_1BCAFF8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v20);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v21);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1BCAFF8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v23);
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v24);
    sub_1BCAFF8(&TitleInfoEventRaidBossComponent_TypeInfo, v25);
    sub_1BCAFF8(&StringLiteral_19065/*"event_raid_defeat_count_frame"*/, v26);
    sub_1BCAFF8(&StringLiteral_19114/*"event_superboss_hp_white"*/, v27);
    sub_1BCAFF8(&StringLiteral_19070/*"event_raid_lastbattle"*/, v28);
    sub_1BCAFF8(&StringLiteral_19067/*"event_raid_hp_back"*/, v29);
    sub_1BCAFF8(&StringLiteral_19066/*"event_raid_defeat_count_front"*/, v30);
    sub_1BCAFF8(&StringLiteral_19068/*"event_raid_hp_frame"*/, v31);
    sub_1BCAFF8(&StringLiteral_19074/*"event_raid_split_line"*/, v32);
    sub_1BCAFF8(&StringLiteral_19064/*"event_raid_defeat_count_back"*/, v33);
    sub_1BCAFF8(&StringLiteral_19069/*"event_raid_hp_front"*/, v34);
    byte_4B1AE71 = 1;
  }
  this->fields.eventId = eventId;
  this->fields.isEncountRaidBoss = 0;
  this->fields.isDefeatRaidDisp = 0;
  this->fields.warId = warId;
  this->fields.isJumbleRaid = v13;
  this->fields.isSingleRaid = v14;
  this->fields.isFolderRaid = v15;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  v37 = (DataManager_o *)Instance;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.eventRaidEntity, (int32_t)Entity, v41, v42);
  if ( this->fields.eventRaidEntity )
  {
    this->fields.isTimeLimitRaid = (*p_eventRaidEntity)->fields.timeLimitAt > 0;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          v37,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
    if ( Instance )
    {
      EntityFromEventIdAndDay = UserEventRaidMaster__getEntityFromEventIdAndDay(
                                  (UserEventRaidMaster_o *)Instance,
                                  this->fields.eventId,
                                  day,
                                  0LL);
      this->fields.userEventRaidEntity = EntityFromEventIdAndDay;
      sub_1BCAF9C(
        (CGThumbnailListItem_o *)&this->fields.userEventRaidEntity,
        (int32_t)EntityFromEventIdAndDay,
        v44,
        v45);
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            v37,
                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( Instance )
      {
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              this->fields.eventId,
                              (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( Instance )
        {
          isRaidDefeatCount = EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)Instance, 0LL);
          this->fields.isRaidDefeatCount = isRaidDefeatCount;
          this->fields.isMovedPos = isRaidDefeatCount;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                v37,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
          if ( Instance )
          {
            EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                          (EventBossStatusUiMaster_o *)Instance,
                                          this->fields.eventId,
                                          day,
                                          0LL);
            this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex;
            sub_1BCAF9C(
              (CGThumbnailListItem_o *)&this->fields.eventBossStatusUiEntity,
              (int32_t)EntityFromEventIdAndIndex,
              v48,
              v49);
            Instance = (int64_t)this->fields.eventBossStatusUiEntity;
            if ( Instance )
            {
              Instance = EventBossStatusUiEntity__GetGaugeId((EventBossStatusUiEntity_o *)Instance, 0LL);
              v51 = Instance;
              if ( this->fields.eventBossStatusUiEntity )
                Instance = EventBossStatusUiEntity__GetLastBattleIconId(this->fields.eventBossStatusUiEntity, 0LL);
            }
            else
            {
              v51 = -1;
            }
            if ( *p_eventRaidEntity )
            {
              TitleInfoEventRaidBossComponent__SetLastBattleIcon(
                (TitleInfoEventRaidBossComponent_o *)Instance,
                this->fields.lastBattleSpr,
                (System_String_o *)StringLiteral_19070/*"event_raid_lastbattle"*/,
                (*p_eventRaidEntity)->fields.eventId,
                (*p_eventRaidEntity)->fields.iconId,
                v50);
              if ( this->fields.isRaidDefeatCount && !this->fields.isTimeLimitRaid )
              {
                defeatCntFrame = this->fields.defeatCntFrame;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetEventUI(defeatCntFrame, (System_String_o *)StringLiteral_19065/*"event_raid_defeat_count_frame"*/, 0LL);
                AtlasManager__SetEventUI(this->fields.defeatCntBg, (System_String_o *)StringLiteral_19064/*"event_raid_defeat_count_back"*/, 0LL);
                AtlasManager__SetEventUI(this->fields.defeatCntBar, (System_String_o *)StringLiteral_19066/*"event_raid_defeat_count_front"*/, 0LL);
                AtlasManager__SetEventUI(
                  this->fields.defeatCntBarSliderWhiteSp,
                  (System_String_o *)StringLiteral_19114/*"event_superboss_hp_white"*/,
                  0LL);
                AtlasManager__SetEventUI(
                  this->fields.defeatCntBarSplitterSp,
                  (System_String_o *)StringLiteral_19074/*"event_raid_split_line"*/,
                  0LL);
                Instance = (int64_t)this->fields.defeatCntBar;
                if ( !Instance )
                  goto LABEL_65;
                v66 = (*(float (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 664LL))(
                        Instance,
                        *(_QWORD *)(*(_QWORD *)Instance + 672LL));
                defeatCntBarSlider = this->fields.defeatCntBarSlider;
                this->fields.barSizeX = v66;
                this->fields.useBarSlider = defeatCntBarSlider;
                sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.useBarSlider, (int32_t)defeatCntBarSlider, v68, v69);
                totalDefeatCntLabel = this->fields.totalDefeatCntLabel;
                this->fields.useTotalLabel = totalDefeatCntLabel;
                p_useTotalLabel = &this->fields.useTotalLabel;
                sub_1BCAF9C(
                  (CGThumbnailListItem_o *)&this->fields.useTotalLabel,
                  (int32_t)totalDefeatCntLabel,
                  v72,
                  v73);
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
                v75 = (UnityEngine_Component_o *)*p_useTotalLabel;
                if ( !*p_useTotalLabel )
                  goto LABEL_65;
                v76 = Instance;
                Instance = (int64_t)UnityEngine_Component__get_gameObject(v75, 0LL);
                if ( endedAt > v76 || this->fields.isJumbleRaid )
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
                  v52,
                  this->fields.hpFrame,
                  (System_String_o *)StringLiteral_19068/*"event_raid_hp_frame"*/,
                  v51,
                  v53);
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v54,
                  this->fields.hpBg,
                  (System_String_o *)StringLiteral_19067/*"event_raid_hp_back"*/,
                  v51,
                  v55);
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v56,
                  this->fields.hpBar,
                  (System_String_o *)StringLiteral_19069/*"event_raid_hp_front"*/,
                  v51,
                  v57);
                Instance = (int64_t)this->fields.hpBar;
                if ( !Instance )
                  goto LABEL_65;
                v58 = (*(float (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 664LL))(
                        Instance,
                        *(_QWORD *)(*(_QWORD *)Instance + 672LL));
                hpBarSlider = this->fields.hpBarSlider;
                this->fields.barSizeX = v58;
                this->fields.useBarSlider = hpBarSlider;
                sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.useBarSlider, (int32_t)hpBarSlider, v60, v61);
                totalHpLabel = this->fields.totalHpLabel;
                this->fields.useTotalLabel = totalHpLabel;
                sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.useTotalLabel, (int32_t)totalHpLabel, v63, v64);
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
              v79 = gameObject;
              if ( overwritePosX == 0.0 )
              {
                v80 = TitleInfoEventRaidBossComponent_TypeInfo;
                if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
                  v80 = TitleInfoEventRaidBossComponent_TypeInfo;
                }
                overwritePosX = (float)v80->static_fields->RAIDBOSS_DEFEAT_COUNT_POS_X;
              }
              GameObjectExtensions__SetLocalPositionX(v79, overwritePosX, 0LL);
              Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( Instance )
              {
                Instance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
                if ( Instance )
                {
                  this->fields.originPos = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)Instance,
                                             0LL);
                  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
                        Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
                        v83 = this->fields.eventRaidEntity;
                        this->fields.initDispHp = maxHp - Instance;
                        if ( v83 )
                        {
                          raidDeadQuestId = this->fields.raidDeadQuestId;
                          IsJumbleSingleRaid = EventRaidEntity__IsJumbleSingleRaid(v83, 0LL);
                          if ( !TitleInfoEventRaidBossComponent__IsPlayClearAnimation(
                                  this,
                                  raidDeadQuestId,
                                  IsJumbleSingleRaid,
                                  v86) )
                          {
LABEL_63:
                            TitleInfoEventRaidBossComponent__SetDisp(this, v87);
                            return;
                          }
                          Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
                          if ( Instance )
                          {
                            MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
                            Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    sub_1BCB254(Instance, v36);
  }
}


void __fastcall TitleInfoEventRaidBossComponent__StartDamageAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        AssetData_o *mapAssetData,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct UnityEngine_GameObject_o *ClearBossEffect; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  this->fields.animEndCall = callBack;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.animEndCall, (int32_t)callBack, (int32_t)callBack, method);
  if ( mapAssetData )
  {
    ClearBossEffect = TitleInfoEventRaidBossComponent__GetClearBossEffect(this, mapAssetData, v7);
    this->fields.clearBossEffect = ClearBossEffect;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.clearBossEffect, (int32_t)ClearBossEffect, v9, v10);
  }
  TitleInfoEventRaidBossComponent__PlayFrameInBoss(this, v6);
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

  if ( (byte_4B1AE78 & 1) == 0 )
  {
    sub_1BCAFF8(&long_TypeInfo, isForce);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&TitleInfoEventRaidBossComponent_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_13321/*"TIME_REST_RAID"*/, v8);
    byte_4B1AE78 = 1;
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
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13321/*"TIME_REST_RAID"*/, 0LL);
      v36 = v19;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v36, v22, v23, v24);
      v35 = v18;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v35, v26, v27, v28);
      v34 = v17;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v34, v30, v31, v32);
      Time = System_String__Format_62491784(v21, v25, v29, v33, 0LL);
      if ( !restTimeLabel )
LABEL_20:
        sub_1BCB254(Time, v14);
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
    sub_1BCB254(this, d);
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

  if ( (byte_4B1AE7A & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoEventRaidBossComponent_TypeInfo, method);
    byte_4B1AE7A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
  {
    sub_1BCB254(gameObject, v4);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1AE88 & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoEventRaidBossComponent___c_TypeInfo, v1);
    byte_4B1AE88 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(TitleInfoEventRaidBossComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventRaidBossComponent___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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