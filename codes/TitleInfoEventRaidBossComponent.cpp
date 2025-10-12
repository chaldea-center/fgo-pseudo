void TitleInfoEventRaidBossComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct TitleInfoEventRaidBossComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct TitleInfoEventRaidBossComponent_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct TitleInfoEventRaidBossComponent_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  TitleInfoEventRaidBossComponent_c *v15; // x8
  struct TitleInfoEventRaidBossComponent_StaticFields *v16; // x9
  struct TitleInfoEventRaidBossComponent_StaticFields *v17; // x8

  if ( (byte_4C362EF & 1) == 0 )
  {
    sub_1C32C20(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_12605/*"SaveKeyStartRaidClearAnimation"*/);
    sub_1C32C20(&StringLiteral_22933/*"raid_boss_icon_"*/);
    sub_1C32C20(&StringLiteral_14498/*"TitleInfoEventRaidBossEffect_Dead"*/);
    sub_1C32C20(&StringLiteral_22934/*"raid_boss_icon_last_"*/);
    byte_4C362EF = 1;
  }
  TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_22933/*"raid_boss_icon_"*/;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields,
    StringLiteral_22933/*"raid_boss_icon_"*/,
    v1,
    v2);
  v3 = StringLiteral_22934/*"raid_boss_icon_last_"*/;
  static_fields = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  static_fields->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_22934/*"raid_boss_icon_last_"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX, v3, v5, v6);
  v7 = StringLiteral_14498/*"TitleInfoEventRaidBossEffect_Dead"*/;
  v8 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v8->RAIDBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14498/*"TitleInfoEventRaidBossEffect_Dead"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->RAIDBOSS_CLEAR_EFFECT_PREFAB, v7, v9, v10);
  v11 = StringLiteral_12605/*"SaveKeyStartRaidClearAnimation"*/;
  v12 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v12->SAVEKEY_START_RAID_CLEAR_ANIMATION = (struct System_String_o *)StringLiteral_12605/*"SaveKeyStartRaidClearAnimation"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12->SAVEKEY_START_RAID_CLEAR_ANIMATION, v11, v13, v14);
  v15 = TitleInfoEventRaidBossComponent_TypeInfo;
  v16 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v16->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v16->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v17 = v15->static_fields;
  *(_OWORD *)&v17->ANIM_DURATION_FRAME_IN_BOSS = xmmword_C0CE50;
  *(_QWORD *)&v17->REST_TIME_UPDATE_INTERVAL_SEC = 0xE23F800000LL;
  *(_QWORD *)&v17->CLEAR_END_CALLBACK_DELAY = 0x3FC000003F000000LL;
  v17->CLEAR_END_CALLBACK_DELAY_NORMAL = 1.0;
}


void TitleInfoEventRaidBossComponent___ctor(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0);
}


float TitleInfoEventRaidBossComponent__ConvertHpToRate(
        TitleInfoEventRaidBossComponent_o *this,
        int64_t hp,
        int64_t maxHp,
        const MethodInfo *method)
{
  return 1.0 - (double)hp / (double)maxHp;
}


void TitleInfoEventRaidBossComponent__Destroy(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoEventRaidBossComponent__DisableCheckTutorial(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleInfoEventRaidBossComponent__DoClearCallback(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventRaidBossComponent_c *v3; // x0
  struct TitleInfoEventRaidBossComponent_StaticFields *static_fields; // x8
  BalanceConfig_c *v5; // x0
  int32_t warId; // w23
  float CLEAR_END_CALLBACK_DELAY_NORMAL; // s8
  _BOOL4 isJumbleRaid; // w22
  TitleInfoEventRaidBossComponent_c *v9; // x0
  __int64 v10; // x9

  if ( (byte_4C362E8 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_9897/*"OnEndAnimation"*/);
    byte_4C362E8 = 1;
  }
  TitleInfoEventRaidBossComponent__OnStartFadeOutAnimation(this, method);
  v3 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v3 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  static_fields = v3->static_fields;
  v5 = BalanceConfig_TypeInfo;
  warId = this->fields.warId;
  CLEAR_END_CALLBACK_DELAY_NORMAL = static_fields->CLEAR_END_CALLBACK_DELAY_NORMAL;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  isJumbleRaid = this->fields.isJumbleRaid;
  if ( warId != v5->static_fields->FesWarId )
  {
    if ( !this->fields.isJumbleRaid )
      goto LABEL_15;
    isJumbleRaid = 1;
  }
  v9 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v9 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  v10 = 72;
  if ( !isJumbleRaid )
    v10 = 68;
  CLEAR_END_CALLBACK_DELAY_NORMAL = *(float *)((char *)&v9->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX + v10);
LABEL_15:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9897/*"OnEndAnimation"*/,
    CLEAR_END_CALLBACK_DELAY_NORMAL,
    0);
}


System_String_o *TitleInfoEventRaidBossComponent__GetAiModeName(
        TitleInfoEventRaidBossComponent_o *this,
        int64_t totalDamage,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  struct EventRaidEntity_o *eventRaidEntity; // x8
  struct System_String_array *splitAiMode; // x9
  System_Collections_Generic_IEnumerable_TSource__o *splitHp; // x20
  System_Func_long__bool__o *v10; // x22
  struct EventRaidEntity_o *v11; // x8
  struct System_String_array *v12; // x8
  System_String_o **v13; // x8

  if ( (byte_4C362EA & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_long____78100240);
    sub_1C32C20(&System_Func_long__bool__TypeInfo);
    sub_1C32C20(&Method_TitleInfoEventRaidBossComponent___c__DisplayClass96_0__GetAiModeName_b__0__);
    sub_1C32C20(&TitleInfoEventRaidBossComponent___c__DisplayClass96_0_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C362EA = 1;
  }
  v5 = (Il2CppObject *)sub_1C32E6C(TitleInfoEventRaidBossComponent___c__DisplayClass96_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_13;
  v5[1].klass = (Il2CppClass *)totalDamage;
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_13;
  splitAiMode = eventRaidEntity->fields.splitAiMode;
  if ( !splitAiMode )
    goto LABEL_13;
  if ( !splitAiMode->max_length )
  {
    v13 = (System_String_o **)&StringLiteral_1/*""*/;
    return *v13;
  }
  splitHp = (System_Collections_Generic_IEnumerable_TSource__o *)eventRaidEntity->fields.splitHp;
  v10 = (System_Func_long__bool__o *)sub_1C32E6C(System_Func_long__bool__TypeInfo);
  System_Func_long__bool____ctor(
    v10,
    v5,
    Method_TitleInfoEventRaidBossComponent___c__DisplayClass96_0__GetAiModeName_b__0__,
    0);
  v6 = System_Linq_Enumerable__Count_long__51375344(
         splitHp,
         (System_Func_TSource__bool__o *)v10,
         (const MethodInfo_30FECF0 *)Method_System_Linq_Enumerable_Count_long____78100240);
  v11 = this->fields.eventRaidEntity;
  if ( !v11 || (v12 = v11->fields.splitAiMode) == 0 )
LABEL_13:
    sub_1C32E7C(v6);
  if ( (unsigned int)v6 >= LODWORD(v12->max_length) )
    sub_1C32E84(v6);
  v13 = &v12->m_Items[(int)v6];
  return *v13;
}


UnityEngine_AnimationClip_o *TitleInfoEventRaidBossComponent__GetClearBossAnimClip(
        TitleInfoEventRaidBossComponent_o *this,
        UnityEngine_Animation_o *animation,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v10; // x0
  struct EventRaidEntity_o *eventRaidEntity; // x8
  Il2CppObject *v12; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  struct EventRaidEntity_o *v19; // x8
  Il2CppObject *v20; // x22
  Il2CppObject *v21; // x0
  UnityEngine_Object_o *Clip; // x21
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  struct EventRaidEntity_o *v29; // x8
  Il2CppObject *RAIDBOSS_CLEAR_EFFECT_PREFAB; // x21
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  struct EventRaidEntity_o *v39; // x8
  Il2CppObject *v40; // x20
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  TitleInfoEventRaidBossComponent_c *v43; // x0
  int32_t iconId; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C362ED & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_25192/*"{0}_{1}"*/);
    sub_1C32C20(&StringLiteral_25194/*"{0}_{1}_{2}"*/);
    byte_4C362ED = 1;
  }
  v10 = (__int64)TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v10 = (__int64)TitleInfoEventRaidBossComponent_TypeInfo;
  }
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_27;
  v12 = *(Il2CppObject **)(*(_QWORD *)(v10 + 184) + 16LL);
  eventId = eventRaidEntity->fields.eventId;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &eventId, method, v3, v4, v5, v6, v7);
  v19 = this->fields.eventRaidEntity;
  if ( !v19 )
    goto LABEL_27;
  v20 = (Il2CppObject *)v10;
  iconId = v19->fields.iconId;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v13, v14, v15, v16, v17, v18);
  v10 = (__int64)System_String__Format_63559904((System_String_o *)StringLiteral_25194/*"{0}_{1}_{2}"*/, v12, v20, v21, 0);
  if ( !animation )
    goto LABEL_27;
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, (System_String_o *)v10, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(Clip, 0, 0) )
  {
    v10 = (__int64)TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v29 = this->fields.eventRaidEntity;
    if ( !v29 )
      goto LABEL_27;
    RAIDBOSS_CLEAR_EFFECT_PREFAB = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
    eventId = v29->fields.eventId;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v23, v24, v25, v26, v27, v28);
    v32 = System_String__Format_63559836((System_String_o *)StringLiteral_25192/*"{0}_{1}"*/, RAIDBOSS_CLEAR_EFFECT_PREFAB, v31, 0);
    Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, v32, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(Clip, 0, 0) )
    {
      v10 = (__int64)TitleInfoEventRaidBossComponent_TypeInfo;
      if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
      v39 = this->fields.eventRaidEntity;
      if ( v39 )
      {
        v40 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
        eventId = v39->fields.day;
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v33, v34, v35, v36, v37, v38);
        v42 = System_String__Format_63559836((System_String_o *)StringLiteral_25192/*"{0}_{1}"*/, v40, v41, 0);
        Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, v42, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(Clip, 0, 0) )
        {
          v43 = TitleInfoEventRaidBossComponent_TypeInfo;
          if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
            v43 = TitleInfoEventRaidBossComponent_TypeInfo;
          }
          return UnityEngine_Animation__GetClip(animation, v43->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB, 0);
        }
        return (UnityEngine_AnimationClip_o *)Clip;
      }
LABEL_27:
      sub_1C32E7C(v10);
    }
  }
  return (UnityEngine_AnimationClip_o *)Clip;
}


UnityEngine_GameObject_o *TitleInfoEventRaidBossComponent__GetClearBossEffect(
        TitleInfoEventRaidBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v10; // x0
  struct EventRaidEntity_o *eventRaidEntity; // x8
  Il2CppObject *v12; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  struct EventRaidEntity_o *v19; // x8
  Il2CppObject *v20; // x22
  Il2CppObject *v21; // x0
  Il2CppObject *Object_object__51111776; // x21
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  struct EventRaidEntity_o *v29; // x8
  Il2CppObject *RAIDBOSS_CLEAR_EFFECT_PREFAB; // x21
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  struct EventRaidEntity_o *v39; // x8
  Il2CppObject *v40; // x20
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  TitleInfoEventRaidBossComponent_c *v43; // x0
  int32_t iconId; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C362EC & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_25192/*"{0}_{1}"*/);
    sub_1C32C20(&StringLiteral_25194/*"{0}_{1}_{2}"*/);
    byte_4C362EC = 1;
  }
  v10 = (__int64)TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v10 = (__int64)TitleInfoEventRaidBossComponent_TypeInfo;
  }
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_27;
  v12 = *(Il2CppObject **)(*(_QWORD *)(v10 + 184) + 16LL);
  eventId = eventRaidEntity->fields.eventId;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &eventId, method, v3, v4, v5, v6, v7);
  v19 = this->fields.eventRaidEntity;
  if ( !v19 )
    goto LABEL_27;
  v20 = (Il2CppObject *)v10;
  iconId = v19->fields.iconId;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v13, v14, v15, v16, v17, v18);
  v10 = (__int64)System_String__Format_63559904((System_String_o *)StringLiteral_25194/*"{0}_{1}_{2}"*/, v12, v20, v21, 0);
  if ( !mapAssetData )
    goto LABEL_27;
  Object_object__51111776 = AssetData__GetObject_object__51111776(
                              mapAssetData,
                              (System_String_o *)v10,
                              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51111776, 0, 0) )
  {
    v10 = (__int64)TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v29 = this->fields.eventRaidEntity;
    if ( !v29 )
      goto LABEL_27;
    RAIDBOSS_CLEAR_EFFECT_PREFAB = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
    eventId = v29->fields.eventId;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v23, v24, v25, v26, v27, v28);
    v32 = System_String__Format_63559836((System_String_o *)StringLiteral_25192/*"{0}_{1}"*/, RAIDBOSS_CLEAR_EFFECT_PREFAB, v31, 0);
    Object_object__51111776 = AssetData__GetObject_object__51111776(
                                mapAssetData,
                                v32,
                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51111776, 0, 0) )
    {
      v10 = (__int64)TitleInfoEventRaidBossComponent_TypeInfo;
      if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
      v39 = this->fields.eventRaidEntity;
      if ( v39 )
      {
        v40 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
        eventId = v39->fields.day;
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v33, v34, v35, v36, v37, v38);
        v42 = System_String__Format_63559836((System_String_o *)StringLiteral_25192/*"{0}_{1}"*/, v40, v41, 0);
        Object_object__51111776 = AssetData__GetObject_object__51111776(
                                    mapAssetData,
                                    v42,
                                    (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51111776, 0, 0) )
        {
          v43 = TitleInfoEventRaidBossComponent_TypeInfo;
          if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
            v43 = TitleInfoEventRaidBossComponent_TypeInfo;
          }
          return (UnityEngine_GameObject_o *)AssetData__GetObject_object__51111776(
                                               mapAssetData,
                                               v43->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB,
                                               (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
        }
        return (UnityEngine_GameObject_o *)Object_object__51111776;
      }
LABEL_27:
      sub_1C32E7C(v10);
    }
  }
  return (UnityEngine_GameObject_o *)Object_object__51111776;
}


EventRaidEntity_o *TitleInfoEventRaidBossComponent__GetEventRaidEntity(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.eventRaidEntity;
}


float TitleInfoEventRaidBossComponent__GetHpSplitPositionX(
        TitleInfoEventRaidBossComponent_o *this,
        int64_t splitHp,
        int64_t maxHp,
        const MethodInfo *method)
{
  float v4; // s0

  v4 = -(double)splitHp / (double)maxHp;
  return this->fields.barSizeX * v4;
}


int64_t TitleInfoEventRaidBossComponent__GetRaidBossMaxHP(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  struct EventRaidEntity_o *eventRaidEntity; // x8

  eventRaidEntity = this->fields.eventRaidEntity;
  if ( eventRaidEntity )
    return eventRaidEntity->fields.maxHp;
  else
    return 0;
}


int64_t TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  int64_t result; // x0
  struct EventRaidEntity_o *eventRaidEntity; // x8
  bool v5; // w8
  struct EventRaidEntity_o *v6; // x8
  int64_t maxHp; // x8
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C362DE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_TotalEventRaidMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C362DE = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_TotalEventRaidMaster___);
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity || !result )
    goto LABEL_14;
  v5 = TotalEventRaidMaster__TryGetEntity(
         (TotalEventRaidMaster_o *)result,
         &entity,
         this->fields.eventId,
         eventRaidEntity->fields.day,
         0);
  result = 0;
  if ( !v5 )
    return result;
  v6 = this->fields.eventRaidEntity;
  if ( !v6 || !entity )
LABEL_14:
    sub_1C32E7C(result);
  maxHp = v6->fields.maxHp;
  if ( maxHp <= entity->fields.totalDamage )
    return maxHp;
  else
    return entity->fields.totalDamage;
}


System_String_o *TitleInfoEventRaidBossComponent__GetRestCountText(
        TitleInfoEventRaidBossComponent_o *this,
        int64_t totalHp,
        int64_t totalDamage,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  System_String_o *CountFormat; // x22
  System_String_o *v9; // x21
  System_Text_StringBuilder_o *v10; // x20
  __int64 v11; // x0
  System_String_o *v12; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  System_String_o *v22; // x19
  Il2CppObject *NumberFormat_41175184; // x1
  System_String_o *v24; // x0
  System_String_o *v25; // x19
  System_String_o *v26; // x19
  System_String_o *v27; // x19
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x5
  __int64 v32; // x6
  __int64 v33; // x7
  int64_t v34; // [xsp+0h] [xbp-40h] BYREF
  int64_t v35; // [xsp+8h] [xbp-38h] BYREF

  v35 = totalHp;
  if ( (byte_4C362EB & 1) == 0 )
  {
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&StringLiteral_5674/*"EVENT_RAID_REST_COUNT_AFTER"*/);
    sub_1C32C20(&StringLiteral_5675/*"EVENT_RAID_REST_COUNT_BEFORE"*/);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    sub_1C32C20(&StringLiteral_5598/*"EVENT_DEFEAT_COUNT_TXT"*/);
    sub_1C32C20(&StringLiteral_13451/*"TITLE_INFO_RAID_TOTALHP"*/);
    byte_4C362EB = 1;
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity )
  {
    CountFormat = EventBossStatusUiEntity__GetCountFormat(eventBossStatusUiEntity, 0);
    if ( !System_String__IsNullOrEmpty(CountFormat, 0) )
    {
      v22 = System_Int64__ToString((int64_t)&v35, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      NumberFormat_41175184 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41175184(v22, 0);
      v24 = CountFormat;
      return System_String__Format(v24, NumberFormat_41175184, 0);
    }
  }
  if ( !this->fields.isJumbleRaid && !this->fields.isSingleRaid )
  {
    if ( this->fields.isRaidDefeatCount && !this->fields.isTimeLimitRaid )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5598/*"EVENT_DEFEAT_COUNT_TXT"*/, 0);
      v34 = totalDamage;
      NumberFormat_41175184 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v34, v28, v29, v30, v31, v32, v33);
      v24 = v27;
    }
    else
    {
      v25 = System_Int64__ToString((int64_t)&v35, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = LocalizationManager__GetNumberFormat_41175184(v25, 0);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_13451/*"TITLE_INFO_RAID_TOTALHP"*/, 0);
      NumberFormat_41175184 = (Il2CppObject *)v26;
    }
    return System_String__Format(v24, NumberFormat_41175184, 0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5675/*"EVENT_RAID_REST_COUNT_BEFORE"*/, 0);
  v10 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_63597432(v10, v9, 0);
  if ( !v10 )
    sub_1C32E7C(v11);
  System_Text_StringBuilder__Append_63603608(v10, (System_String_o *)StringLiteral_113/*" "*/, 0);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5674/*"EVENT_RAID_REST_COUNT_AFTER"*/, 0);
  v34 = totalHp;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v34, v13, v14, v15, v16, v17, v18);
  v20 = System_String__Format(v12, v19, 0);
  System_Text_StringBuilder__Append_63603608(v10, v20, 0);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v10->klass->vtable._3_ToString.methodPtr)(
                              v10,
                              v10->klass->vtable._3_ToString.method);
}


bool TitleInfoEventRaidBossComponent__IsAliveRaidBoss(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  struct EventRaidEntity_o *eventRaidEntity; // x8
  int64_t maxHp; // x19

  eventRaidEntity = this->fields.eventRaidEntity;
  if ( eventRaidEntity )
    maxHp = eventRaidEntity->fields.maxHp;
  else
    maxHp = 0;
  return maxHp - TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(this, method) > 0;
}


bool TitleInfoEventRaidBossComponent__IsClear(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  return this->fields.isRaidClear;
}


bool TitleInfoEventRaidBossComponent__IsDispPossible(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 268;
  if ( this->fields.isRaidDefeatCount )
    v2 = 289;
  return *((_BYTE *)&this->klass + v2);
}


bool TitleInfoEventRaidBossComponent__IsEventRaidBoss(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool TitleInfoEventRaidBossComponent__IsJumbleSingleRaidLastBattle(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  EventRaidEntity_o *eventRaidEntity; // x0

  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    sub_1C32E7C(0);
  return EventRaidEntity__IsJumbleSingleRaid(eventRaidEntity, 0) && this->fields.isLastBattleRelease;
}


bool TitleInfoEventRaidBossComponent__IsPlayClearAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        int32_t raidDeadQuestId,
        bool isJumbleSingleRaid,
        const MethodInfo *method)
{
  clsQuestCheck_o *eventRaidEntity; // x0
  struct EventRaidEntity_o *v8; // x8
  int32_t eventId; // w19
  int32_t day; // w20

  if ( (byte_4C362E6 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C362E6 = 1;
  }
  eventRaidEntity = (clsQuestCheck_o *)this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_20;
  if ( !EventRaidEntity__IsValidDefeatedTime((EventRaidEntity_o *)eventRaidEntity, 0)
    || !this->fields.isJumbleRaid
    || isJumbleSingleRaid )
  {
    if ( this->fields.HPto > 0.0 )
      return 0;
    eventRaidEntity = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( eventRaidEntity )
      return clsQuestCheck__IsQuestClear(eventRaidEntity, raidDeadQuestId, 0, 0) || this->fields.isJumbleRaid;
LABEL_20:
    sub_1C32E7C(eventRaidEntity);
  }
  eventRaidEntity = (clsQuestCheck_o *)this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_20;
  eventRaidEntity = (clsQuestCheck_o *)EventRaidEntity__IsJustDefeated((EventRaidEntity_o *)eventRaidEntity, 0);
  if ( ((unsigned __int8)eventRaidEntity & 1) == 0 )
    return 0;
  v8 = this->fields.eventRaidEntity;
  if ( !v8 )
    goto LABEL_20;
  eventId = this->fields.eventId;
  day = v8->fields.day;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return !TerminalPramsManager__IsPlayedEventRaidDefeatedEffect(eventId, day, 0);
}


bool TitleInfoEventRaidBossComponent__IsTargetRaid(
        TitleInfoEventRaidBossComponent_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  struct EventRaidEntity_o *eventRaidEntity; // x8

  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    sub_1C32E7C(this);
  return eventRaidEntity->fields.eventId == eventId && eventRaidEntity->fields.day == day;
}


bool TitleInfoEventRaidBossComponent__IsTerminalSceneRefreshRequest(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  struct EventRaidEntity_o *eventRaidEntity; // x8
  int64_t maxHp; // x20
  QuestBoardListViewManager_o *ObjectList; // x0
  ListViewSort_c *klass; // x8
  __int64 v8; // x8
  _BOOL8 v9; // x0
  bool v10; // w20
  Il2CppObject *current; // x21
  QuestBoardListViewItem_o *Item; // x0
  Il2CppObject *Master_object; // x22
  QuestBoardListViewItem_o *v14; // x0
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  System_Object_array *ListByQuestID; // x21
  System_Func_object__bool__o *v17; // x22
  int v18; // w19
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C362EE & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_QuestReleaseEntity____78062248);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_1C32C20(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    sub_1C32C20(&Method_TitleInfoEventRaidBossComponent__IsTerminalSceneRefreshRequest_b__104_0__);
    byte_4C362EE = 1;
  }
  memset(&v20, 0, sizeof(v20));
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
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
  }
  ObjectList = (QuestBoardListViewManager_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    ObjectList = (QuestBoardListViewManager_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = ObjectList->fields.sort->klass;
  if ( !klass
    || (v8 = *(_QWORD *)&klass->_2.element_size) == 0
    || (ObjectList = *(QuestBoardListViewManager_o **)(v8 + 320)) == 0
    || (ObjectList = (QuestBoardListViewManager_o *)QuestBoardListViewManager__get_ObjectList(ObjectList, 0)) == 0 )
  {
    sub_1C32E7C(ObjectList);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)ObjectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v20,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    v10 = v9;
    if ( !v9 )
      break;
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1C32E7C(v9);
    Item = QuestBoardListViewObject__GetItem((QuestBoardListViewObject_o *)v20.fields._current, 0);
    if ( !Item )
      sub_1C32E7C(0);
    if ( Item->fields._quest_info_k__BackingField )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
      v14 = QuestBoardListViewObject__GetItem((QuestBoardListViewObject_o *)current, 0);
      if ( !v14 )
        sub_1C32E7C(0);
      quest_info_k__BackingField = v14->fields._quest_info_k__BackingField;
      if ( !quest_info_k__BackingField )
        sub_1C32E7C(v14);
      if ( !Master_object )
        sub_1C32E7C(v14);
      ListByQuestID = (System_Object_array *)QuestReleaseMaster__getListByQuestID(
                                               (QuestReleaseMaster_o *)Master_object,
                                               quest_info_k__BackingField->fields.questId,
                                               0);
      v17 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v17,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaidBossComponent__IsTerminalSceneRefreshRequest_b__104_0__,
        0);
      if ( BasicHelper__Any_object__51144764(
             ListByQuestID,
             (System_Func_T__bool__o *)v17,
             (const MethodInfo_30C683C *)Method_BasicHelper_Any_QuestReleaseEntity____78062248) )
      {
        v18 = 7;
        goto LABEL_32;
      }
    }
  }
  v18 = 3;
LABEL_32:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
  return v10 && v18 == 7;
}


void TitleInfoEventRaidBossComponent__OnDestroy(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoEventRaidBossComponent__OnEndAnimation(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_Action_o *animEndCall; // x20
  const MethodInfo *v6; // x1

  animEndCall = this->fields.animEndCall;
  this->fields.animEndCall = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animEndCall, 0, v2, v3);
  ActionExtensions__Call(animEndCall, 0);
  TitleInfoEventRaidBossComponent__SetDisp(this, v6);
}


void TitleInfoEventRaidBossComponent__OnStartFadeOutAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_Action_o *onClearCall; // x20
  UnityEngine_Component_o *raidBossIconSp; // x0
  struct EventRaidEntity_o *eventRaidEntity; // x8
  int32_t eventId; // w20
  int32_t day; // w21
  TitleInfoEventRaidBossComponent_c *v10; // x0
  TitleInfoEventRaidBossComponent_c *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventRaidBossComponent_c *v13; // x8
  UnityEngine_GameObject_o *v14; // x19

  if ( (byte_4C362E9 & 1) == 0 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C32C20(&Method_UITweener_Begin_TweenAlpha___);
    byte_4C362E9 = 1;
  }
  onClearCall = this->fields.onClearCall;
  this->fields.onClearCall = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onClearCall, 0, v2, v3);
  ActionExtensions__Call(onClearCall, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C34E1E )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C34E1E = 1;
  }
  raidBossIconSp = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    raidBossIconSp = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_QWORD *)(raidBossIconSp[7].fields.m_CachedPtr + 440) )
  {
    if ( !LODWORD(raidBossIconSp[9].monitor) )
      j_il2cpp_runtime_class_init_0(raidBossIconSp);
    TerminalPramsManager__LoadEventRaidDefeatedEffectInfo(0);
  }
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_28;
  eventId = this->fields.eventId;
  day = eventRaidEntity->fields.day;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__UpdateEventRaidDefeatedEffectInfo(eventId, day, 0);
  TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(0);
  if ( this->fields.isFolderRaid )
  {
    v10 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
      v10 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    if ( UnityEngine_PlayerPrefs__GetInt_71181884(v10->static_fields->SAVEKEY_START_RAID_CLEAR_ANIMATION, 0) )
    {
      v11 = TitleInfoEventRaidBossComponent_TypeInfo;
      if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
        v11 = TitleInfoEventRaidBossComponent_TypeInfo;
      }
      UnityEngine_PlayerPrefs__DeleteKey(v11->static_fields->SAVEKEY_START_RAID_CLEAR_ANIMATION, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
  raidBossIconSp = (UnityEngine_Component_o *)this->fields.raidBossIconSp;
  this->fields.isRaidClear = 1;
  if ( !raidBossIconSp )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject(raidBossIconSp, 0);
  v13 = TitleInfoEventRaidBossComponent_TypeInfo;
  v14 = gameObject;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v13 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  raidBossIconSp = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                v14,
                                                v13->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                (const MethodInfo_3198D08 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !raidBossIconSp )
LABEL_28:
    sub_1C32E7C(raidBossIconSp);
  raidBossIconSp[5].monitor = (void *)1065353216;
  LODWORD(raidBossIconSp[1].monitor) = 1;
}


void TitleInfoEventRaidBossComponent__PlayFrameInBoss(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *Child; // x0
  float ANIM_DURATION_FRAME_IN_BOSS; // s8
  TitleInfoEventRaidBossComponent_c *v6; // x0
  UnityEngine_GameObject_o *v7; // x0
  TitleInfoEventRaidBossComponent_c *v8; // x8
  float32x2_t v9; // d8
  float z; // s9
  UnityEngine_Component_o *v11; // x20
  float32x2_t *static_fields; // x8
  float v13; // s0
  intptr_t v14; // x9
  UnityEngine_GameObject_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C362E3 & 1) == 0 )
  {
    sub_1C32C20(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C32C20(&Method_UITweener_Begin_TweenPosition___);
    sub_1C32C20(&StringLiteral_10659/*"PlayHpNameAlpha"*/);
    byte_4C362E3 = 1;
  }
  if ( this->fields.isJumbleRaid || this->fields.isSingleRaid )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(gameObject, 0, 0);
    if ( !Child )
      goto LABEL_16;
    Child = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Child, 0);
    if ( !Child )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Child, 1, 0);
  }
  ANIM_DURATION_FRAME_IN_BOSS = 0.0;
  if ( !this->fields.isFolderRaid )
  {
    v6 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
      v6 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    ANIM_DURATION_FRAME_IN_BOSS = v6->static_fields->ANIM_DURATION_FRAME_IN_BOSS;
  }
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Child = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                       v7,
                                       ANIM_DURATION_FRAME_IN_BOSS,
                                       (const MethodInfo_3198D08 *)Method_UITweener_Begin_TweenPosition___);
  v8 = TitleInfoEventRaidBossComponent_TypeInfo;
  v9.n64_u64[0] = *(unsigned __int64 *)&this->fields.originPos.fields.x;
  z = this->fields.originPos.fields.z;
  v11 = Child;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v8 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  if ( !v11 )
LABEL_16:
    sub_1C32E7C(Child);
  static_fields = (float32x2_t *)v8->static_fields;
  v13 = z + static_fields[5].n64_f32[0];
  v11[5].monitor = (void *)vadd_f32(v9, static_fields[4]).n64_u64[0];
  *(float *)&v11[5].fields.m_CachedPtr = v13;
  *(float *)&static_fields = this->fields.originPos.fields.z;
  v14 = *(_QWORD *)&this->fields.originPos.fields.x;
  LODWORD(v11[1].monitor) = 2;
  HIDWORD(v11[6].klass) = (_DWORD)static_fields;
  *(intptr_t *)((char *)&v11[5].fields.m_CachedPtr + 4) = v14;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11[3].monitor = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)&v11[3].monitor, (int32_t)v15, v16, v17);
  v18 = StringLiteral_10659/*"PlayHpNameAlpha"*/;
  v11[3].fields.m_CachedPtr = StringLiteral_10659/*"PlayHpNameAlpha"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v11[3].fields, v18, v19, v20);
}


void TitleInfoEventRaidBossComponent__PlayHpCut(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  TitleInfoEventRaidBossComponent_c *v5; // x8
  EasingObject_o *v6; // x20
  TitleInfoEventRaidBossComponent___c_c *v7; // x0
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *_9__88_0; // x21
  Il2CppObject *v10; // x22
  struct TitleInfoEventRaidBossComponent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Action_o *v14; // x22
  __int64 v15; // x0

  if ( (byte_4C362E4 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C32C20(&Method_TitleInfoEventRaidBossComponent_PlayHpDeletion__);
    sub_1C32C20(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C32C20(&Method_TitleInfoEventRaidBossComponent___c__PlayHpCut_b__88_0__);
    sub_1C32C20(&TitleInfoEventRaidBossComponent___c_TypeInfo);
    byte_4C362E4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  v5 = TitleInfoEventRaidBossComponent_TypeInfo;
  v6 = (EasingObject_o *)Component_object;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v5 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  v7 = TitleInfoEventRaidBossComponent___c_TypeInfo;
  ANIM_DURATION_HP_CUT = v5->static_fields->ANIM_DURATION_HP_CUT;
  if ( !TitleInfoEventRaidBossComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent___c_TypeInfo);
    v7 = TitleInfoEventRaidBossComponent___c_TypeInfo;
  }
  _9__88_0 = v7->static_fields->__9__88_0;
  if ( !_9__88_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = TitleInfoEventRaidBossComponent___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__88_0 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(_9__88_0, v10, Method_TitleInfoEventRaidBossComponent___c__PlayHpCut_b__88_0__, 0);
    static_fields = TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields;
    static_fields->__9__88_0 = _9__88_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__88_0, (int32_t)_9__88_0, v12, v13);
  }
  v14 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_TitleInfoEventRaidBossComponent_PlayHpDeletion__, 0);
  if ( !v6 )
    sub_1C32E7C(v15);
  EasingObject__Play(v6, ANIM_DURATION_HP_CUT, _9__88_0, v14, 0.0, 0, 0);
}


void TitleInfoEventRaidBossComponent__PlayHpDeletion(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  EventRaidMaster_o *v4; // x20
  struct EventRaidEntity_o *eventRaidEntity; // x8
  int32_t eventId; // w1
  int32_t RaidGroupDeadQuestId; // w0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  int32_t v9; // w20
  int64_t v10; // x22
  const MethodInfo *v11; // x3
  int64_t m_CancellationTokenSource; // x2
  struct EventRaidEntity_o *v13; // x8
  UILabel_o *useTotalLabel; // x21
  bool IsJumbleSingleRaid; // w0
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  UnityEngine_Object_o *clearBossEffect; // x20
  Il2CppObject *v19; // x21
  Il2CppObject *v20; // x20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v22; // x1
  System_Action_o *v23; // x21
  System_Action_o *v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4C362E5 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_TitleInfoEventRaidBossComponent_OnEndAnimation__);
    sub_1C32C20(&Method_TitleInfoEventRaidBossComponent_OnStartFadeOutAnimation__);
    byte_4C362E5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !this->fields.eventRaidEntity )
    goto LABEL_40;
  v4 = (EventRaidMaster_o *)Instance;
  Instance = (DataManager_o *)EventRaidEntity__IsJumbleSingleRaid(this->fields.eventRaidEntity, 0);
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_40;
  eventId = this->fields.eventId;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v4 )
      goto LABEL_40;
    RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(v4, eventId, eventRaidEntity->fields.groupIndex, 0);
  }
  else
  {
    if ( !v4 )
      goto LABEL_40;
    RaidGroupDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(v4, eventId, eventRaidEntity->fields.day, 0);
  }
  userEventRaidEntity = this->fields.userEventRaidEntity;
  v9 = RaidGroupDeadQuestId;
  v10 = userEventRaidEntity ? userEventRaidEntity->fields.damage : 0LL;
  Instance = (DataManager_o *)this->fields.eventRaidEntity;
  if ( !Instance
    || ((Instance = (DataManager_o *)EventRaidEntity__getTotalEventRaidEntity((EventRaidEntity_o *)Instance, 0)) == 0
      ? (m_CancellationTokenSource = 0)
      : (m_CancellationTokenSource = (int64_t)Instance->fields.m_CancellationTokenSource),
        (v13 = this->fields.eventRaidEntity) == 0
     || (useTotalLabel = this->fields.useTotalLabel,
         Instance = (DataManager_o *)TitleInfoEventRaidBossComponent__GetRestCountText(
                                       this,
                                       (v13->fields.maxHp - (m_CancellationTokenSource + v10))
                                     & ~((v13->fields.maxHp - (m_CancellationTokenSource + v10)) >> 63),
                                       m_CancellationTokenSource,
                                       v11),
         !useTotalLabel)
     || (UILabel__set_text(useTotalLabel, (System_String_o *)Instance, 0),
         (Instance = (DataManager_o *)this->fields.eventRaidEntity) == 0)) )
  {
LABEL_40:
    sub_1C32E7C(Instance);
  }
  IsJumbleSingleRaid = EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)Instance, 0);
  if ( TitleInfoEventRaidBossComponent__IsPlayClearAnimation(this, v9, IsJumbleSingleRaid, v16) )
  {
    clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v19 = 0;
    if ( UnityEngine_Object__op_Inequality(clearBossEffect, 0, 0) )
    {
      v20 = (Il2CppObject *)this->fields.clearBossEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v19 = UnityEngine_Object__Instantiate_object_(
              v20,
              (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v19, (UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v19, 0);
    }
    this->fields.isEncountRaidBoss = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0);
    Component_object = 0;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_40;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v19,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      v23 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        v23,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaidBossComponent_OnStartFadeOutAnimation__,
        0);
      if ( Component_object )
      {
        CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v23, 0);
        v24 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(v24, (Il2CppObject *)this, Method_TitleInfoEventRaidBossComponent_OnEndAnimation__, 0);
        Component_object[2].monitor = v24;
        sub_1C32BC4((CGThumbnailListItem_o *)&Component_object[2].monitor, (int32_t)v24, v25, v26);
        return;
      }
      goto LABEL_40;
    }
    TitleInfoEventRaidBossComponent__SetClearAlpha(this, v22);
  }
  else
  {
    TitleInfoEventRaidBossComponent__OnEndAnimation(this, v17);
  }
}


// attributes: thunk
void TitleInfoEventRaidBossComponent__PlayHpNameAlpha(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventRaidBossComponent__PlayHpCut(this, method);
}


void TitleInfoEventRaidBossComponent__SetBossIcon(
        TitleInfoEventRaidBossComponent_o *this,
        EventRaidEntity_o *eventRaidEnt,
        bool isLastBattle,
        const MethodInfo *method)
{
  void *v7; // x0
  UISprite_o *raidBossIconSp; // x21
  System_String_o *RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX; // x22
  System_String_o *v10; // x0
  System_String_o *v11; // x22
  UISprite_o *v12; // x21
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX; // x22
  System_String_o *v14; // x0
  System_String_o *v15; // x20

  if ( (byte_4C362DA & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&TitleInfoEventRaidBossComponent_TypeInfo);
    byte_4C362DA = 1;
  }
  if ( isLastBattle )
  {
    v7 = TitleInfoEventRaidBossComponent_TypeInfo;
    raidBossIconSp = this->fields.raidBossIconSp;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    if ( !eventRaidEnt )
      goto LABEL_19;
    RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX = TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX;
    v10 = System_Int32__ToString((int)eventRaidEnt + 64, 0);
    v11 = System_String__Concat_63518544(RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX, v10, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( AtlasManager__SetEventUI(raidBossIconSp, v11, 0) )
      goto LABEL_16;
  }
  v7 = TitleInfoEventRaidBossComponent_TypeInfo;
  v12 = this->fields.raidBossIconSp;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
  if ( !eventRaidEnt )
    goto LABEL_19;
  RAIDBOSS_ICON_SPNAME_PREFIX = TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX;
  v14 = System_Int32__ToString((int)eventRaidEnt + 64, 0);
  v15 = System_String__Concat_63518544(RAIDBOSS_ICON_SPNAME_PREFIX, v14, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEventUI(v12, v15, 0) )
  {
LABEL_16:
    v7 = this->fields.raidBossIconSp;
    if ( v7 )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v7 + 840LL))(v7, *(_QWORD *)(*(_QWORD *)v7 + 848LL));
      return;
    }
LABEL_19:
    sub_1C32E7C(v7);
  }
}


void TitleInfoEventRaidBossComponent__SetClearAlpha(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  TitleInfoEventRaidBossComponent_c *v3; // x0
  struct TitleInfoEventRaidBossComponent_StaticFields *static_fields; // x8
  BalanceConfig_c *v5; // x0
  int32_t warId; // w21
  float CLEAR_CALLBACK_DELAY; // s8
  UnityEngine_Object_o *clearBossEffect; // x20
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *v10; // x0
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *ClearBossAnimClip; // x20
  float length; // s8
  TitleInfoEventRaidBossComponent_c *v14; // x0

  if ( (byte_4C362E7 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_5313/*"DoClearCallback"*/);
    byte_4C362E7 = 1;
  }
  v3 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v3 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  static_fields = v3->static_fields;
  v5 = BalanceConfig_TypeInfo;
  warId = this->fields.warId;
  CLEAR_CALLBACK_DELAY = static_fields->CLEAR_CALLBACK_DELAY;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  if ( warId != v5->static_fields->FesWarId && !this->fields.isJumbleRaid )
  {
    clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = 0;
    if ( UnityEngine_Object__op_Inequality(clearBossEffect, 0, 0) )
    {
      v10 = this->fields.clearBossEffect;
      if ( !v10 )
        goto LABEL_27;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v10,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ClearBossAnimClip = 0;
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      ClearBossAnimClip = (UnityEngine_Object_o *)TitleInfoEventRaidBossComponent__GetClearBossAnimClip(
                                                    this,
                                                    (UnityEngine_Animation_o *)Component_object,
                                                    v11);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(ClearBossAnimClip, 0, 0);
    length = 0.0;
    if ( ((unsigned __int8)v10 & 1) == 0 )
      goto LABEL_23;
    if ( ClearBossAnimClip )
    {
      length = UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)ClearBossAnimClip, 0);
LABEL_23:
      v14 = TitleInfoEventRaidBossComponent_TypeInfo;
      if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
        v14 = TitleInfoEventRaidBossComponent_TypeInfo;
      }
      CLEAR_CALLBACK_DELAY = fmaxf(length - v14->static_fields->CLEAR_END_CALLBACK_DELAY_NORMAL, 0.0);
      goto LABEL_26;
    }
LABEL_27:
    sub_1C32E7C(v10);
  }
LABEL_26:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5313/*"DoClearCallback"*/,
    CLEAR_CALLBACK_DELAY,
    0);
}


void TitleInfoEventRaidBossComponent__SetDamageAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        System_Action_o *onClearCallback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  struct EventRaidEntity_o *eventRaidEntity; // x8
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  int64_t totalDamage; // x9
  double v11; // d0
  struct EventRaidEntity_o *v12; // x9
  double maxHp; // d1
  float v14; // s0
  float v15; // s1
  float v16; // s2
  float v17; // s3
  float v18; // s0
  float v19; // s1
  _BOOL4 isJumbleRaid; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C362E1 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C362E1 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity || !Instance )
    goto LABEL_31;
  TotalEventRaidMaster__TryGetEntity(
    (TotalEventRaidMaster_o *)Instance,
    &entity,
    this->fields.eventId,
    eventRaidEntity->fields.day,
    0);
  this->fields.onClearCall = onClearCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onClearCall, (int32_t)onClearCallback, v7, v8);
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( userEventRaidEntity )
    userEventRaidEntity = (struct UserEventRaidEntity_o *)userEventRaidEntity->fields.damage;
  if ( entity )
  {
    totalDamage = entity->fields.totalDamage;
    userEventRaidEntity = (struct UserEventRaidEntity_o *)((char *)userEventRaidEntity + totalDamage);
    v11 = (double)totalDamage;
  }
  else
  {
    v11 = 0.0;
  }
  v12 = this->fields.eventRaidEntity;
  if ( !v12 )
    goto LABEL_31;
  maxHp = (double)v12->fields.maxHp;
  Instance = (DataManager_o *)this->fields.useBarSlider;
  v14 = 1.0 - v11 / maxHp;
  v15 = 1.0 - (double)(__int64)userEventRaidEntity / maxHp;
  v16 = fminf(v14, 1.0);
  v17 = fminf(v15, 1.0);
  v18 = v14 < 0.0 ? 0.0 : v16;
  v19 = v15 < 0.0 ? 0.0 : v17;
  this->fields.HPfrom = v18;
  this->fields.HPto = v19;
  if ( !Instance )
    goto LABEL_31;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v18, 0);
  Instance = (DataManager_o *)this->fields.defeatCntBarSliderWhite;
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (DataManager_o *)this->fields.defeatCntBarSliderWhite;
  if ( !Instance )
    goto LABEL_31;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, this->fields.HPfrom, 0);
  Instance = (DataManager_o *)this->fields.defeatCntBarSliderWhite;
  if ( !Instance )
    goto LABEL_31;
  UIProgressBar__set_alpha((UIProgressBar_o *)Instance, 0.0, 0);
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_31;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
  isJumbleRaid = this->fields.isJumbleRaid;
  this->fields.originPos = localPosition;
  if ( isJumbleRaid || this->fields.isSingleRaid )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    Instance = (DataManager_o *)GameObjectExtensions__GetChild(gameObject, 0, 0);
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
        return;
      }
    }
LABEL_31:
    sub_1C32E7C(Instance);
  }
}


void TitleInfoEventRaidBossComponent__SetDisp(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  bool *p_isRaidDefeatCount; // x20
  UISprite_o *Instance; // x0
  struct EventRaidEntity_o *eventRaidEntity; // x8
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2
  struct EventRaidEntity_o *v8; // x8
  struct System_Int64_array *splitHp; // x8
  unsigned int max_length; // w20
  _BOOL4 isRaidDefeatCount; // w8
  _BOOL4 v12; // w9
  int v13; // w21
  const MethodInfo *v14; // x1
  struct UISprite_array *hpBarSplitters; // x27
  struct UISprite_array **p_hpBarSplitters; // x21
  __int64 v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_Component_o *v20; // x22
  unsigned int v21; // w28
  struct UISprite_array *v22; // x23
  Il2CppObject *defeatCntBarSplitter; // x24
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  DataManager_o *v26; // x24
  Il2CppClass **v27; // x0
  struct UISprite_array *v28; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  UISprite_o *v32; // x24
  struct EventRaidEntity_o *v33; // x8
  struct System_Int64_array *v34; // x9
  struct UISprite_array *v35; // x10
  __int64 maxHp; // d9
  __int64 v37; // d10
  float barSizeX; // s8
  float v39; // s0
  float r; // s9
  float g; // s11
  float b; // s8
  float a; // s10
  struct EventRaidEntity_o *v44; // x8
  __int64 v45; // x22
  const MethodInfo *v46; // x2
  __int64 RaidBossTotalDamage; // x20
  UILabel_o *modeName; // x21
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x3
  UILabel_o *useTotalLabel; // x21
  const MethodInfo *v52; // x2
  UnityEngine_Object_o *bossName; // x21
  const MethodInfo *v54; // x2
  struct EventRaidEntity_o *v55; // x8
  float v56; // s0
  struct EventRaidEntity_o *v57; // x8
  const MethodInfo *v58; // x2
  UnityEngine_Object_o *v59; // x20
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x2
  __int64 v62; // x0
  bool *v63; // [xsp+0h] [xbp-90h]
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C362DD & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&UISprite___TypeInfo);
    byte_4C362DD = 1;
  }
  entity = 0;
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
  Instance = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  Instance = (UISprite_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
    0);
  TitleInfoEventRaidBossComponent__SetBossIcon(this, this->fields.eventRaidEntity, this->fields.isLastBattleRelease, v6);
  v8 = this->fields.eventRaidEntity;
  if ( !v8 )
    goto LABEL_87;
  splitHp = v8->fields.splitHp;
  v63 = p_isRaidDefeatCount;
  if ( !splitHp )
    goto LABEL_87;
  max_length = splitHp->max_length;
  isRaidDefeatCount = this->fields.isRaidDefeatCount;
  v12 = (int)max_length > 0;
  v13 = isRaidDefeatCount && v12;
  TitleInfoEventRaidBossComponent__SetHpBarSplitters(this, isRaidDefeatCount && v12, v7);
  if ( v13 )
  {
    hpBarSplitters = this->fields.hpBarSplitters;
    p_hpBarSplitters = &this->fields.hpBarSplitters;
    if ( !hpBarSplitters )
    {
      v17 = sub_1C32CC8(UISprite___TypeInfo, max_length);
      *p_hpBarSplitters = (struct UISprite_array *)v17;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.hpBarSplitters, v17, v18, v19);
    }
    Instance = (UISprite_o *)GameObjectExtensions__GetParent(this->fields.defeatCntBarSplitter, 0);
    v20 = (UnityEngine_Component_o *)Instance;
    v21 = 0;
    do
    {
      if ( !hpBarSplitters )
      {
        v22 = this->fields.hpBarSplitters;
        defeatCntBarSplitter = (Il2CppObject *)this->fields.defeatCntBarSplitter;
        if ( v21 )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Instance = (UISprite_o *)UnityEngine_Object__Instantiate_object_(
                                     defeatCntBarSplitter,
                                     (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !Instance )
            goto LABEL_87;
          Instance = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)Instance,
                                     (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( !v22 )
            goto LABEL_87;
          v26 = (DataManager_o *)Instance;
          if ( Instance )
          {
            Instance = (UISprite_o *)sub_1C32D5C(Instance, v22->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_89;
          }
          if ( v21 >= LODWORD(v22->max_length) )
            goto LABEL_88;
          v27 = &v22->obj.klass + (int)v21;
          v27[4] = (Il2CppClass *)v26;
          sub_1C32BC4((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v26, v24, v25);
          v28 = *p_hpBarSplitters;
          if ( !*p_hpBarSplitters )
            goto LABEL_87;
          if ( v21 >= LODWORD(v28->max_length) )
            goto LABEL_88;
          Instance = v28->m_Items[v21];
          if ( !Instance )
            goto LABEL_87;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          GameObjectExtensions__SafeSetParent(gameObject, v20, 0);
        }
        else
        {
          if ( !defeatCntBarSplitter )
            goto LABEL_87;
          Instance = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                     this->fields.defeatCntBarSplitter,
                                     (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( !v22 )
            goto LABEL_87;
          v32 = Instance;
          if ( Instance )
          {
            Instance = (UISprite_o *)sub_1C32D5C(Instance, v22->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_89:
              v62 = sub_1C32EA0(Instance);
              sub_1C32D48(v62, 0);
            }
          }
          if ( !LODWORD(v22->max_length) )
            goto LABEL_88;
          v22->m_Items[0] = v32;
          sub_1C32BC4((CGThumbnailListItem_o *)v22->m_Items, (int32_t)v32, v30, v31);
        }
      }
      v33 = this->fields.eventRaidEntity;
      if ( !v33 )
        goto LABEL_87;
      v34 = v33->fields.splitHp;
      if ( !v34 )
        goto LABEL_87;
      if ( v21 >= LODWORD(v34->max_length) )
        goto LABEL_88;
      v35 = this->fields.hpBarSplitters;
      if ( !v35 )
        goto LABEL_87;
      if ( v21 >= LODWORD(v35->max_length) )
LABEL_88:
        sub_1C32E84(Instance);
      Instance = v35->m_Items[v21];
      if ( !Instance )
        goto LABEL_87;
      maxHp = v33->fields.maxHp;
      v37 = v34->m_Items[v21];
      barSizeX = this->fields.barSizeX;
      Instance = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_87;
      v39 = -(double)v37 / (double)maxHp;
      v65.fields.x = barSizeX * v39;
      v65.fields.y = 0.0;
      v65.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v65, 0);
    }
    while ( max_length != ++v21 );
  }
  Instance = (UISprite_o *)this->fields.eventBossStatusUiEntity;
  if ( Instance )
  {
    v66.fields.g = 0.035294;
    v66.fields.r = 0.37647;
    v66.fields.a = 1.0;
    v66.fields.b = 0.035294;
    TextEffectColor = EventBossStatusUiEntity__GetTextEffectColor((EventBossStatusUiEntity_o *)Instance, v66, 0);
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
  v44 = this->fields.eventRaidEntity;
  if ( !v44 )
    goto LABEL_87;
  v45 = v44->fields.maxHp;
  RaidBossTotalDamage = TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(this, v14);
  if ( this->fields.isRaidDefeatCount )
  {
    modeName = this->fields.modeName;
    Instance = (UISprite_o *)TitleInfoEventRaidBossComponent__GetAiModeName(this, RaidBossTotalDamage, v46);
    if ( !modeName )
      goto LABEL_87;
    UILabel__set_text(modeName, (System_String_o *)Instance, 0);
    v68.fields.r = r;
    v68.fields.g = g;
    v68.fields.b = b;
    v68.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, this->fields.modeName, v68, v49);
  }
  Instance = (UISprite_o *)this->fields.useTotalLabel;
  if ( !Instance )
    goto LABEL_87;
  Instance = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_87;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
  {
    useTotalLabel = this->fields.useTotalLabel;
    Instance = (UISprite_o *)TitleInfoEventRaidBossComponent__GetRestCountText(
                               this,
                               v45 - RaidBossTotalDamage,
                               RaidBossTotalDamage,
                               v50);
    if ( !useTotalLabel )
      goto LABEL_87;
    UILabel__set_text(useTotalLabel, (System_String_o *)Instance, 0);
    v69.fields.r = r;
    v69.fields.g = g;
    v69.fields.b = b;
    v69.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, this->fields.useTotalLabel, v69, v52);
  }
  bossName = (UnityEngine_Object_o *)this->fields.bossName;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bossName, 0, 0) )
  {
    Instance = (UISprite_o *)this->fields.bossName;
    if ( !Instance )
      goto LABEL_87;
    Instance = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_87;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, this->fields.isJumbleRaid, 0);
    if ( this->fields.isJumbleRaid )
    {
      v55 = this->fields.eventRaidEntity;
      if ( !v55 )
        goto LABEL_87;
      Instance = (UISprite_o *)this->fields.bossName;
      if ( !Instance )
        goto LABEL_87;
      UILabel__set_text((UILabel_o *)Instance, v55->fields.name, 0);
    }
    v70.fields.r = r;
    v70.fields.g = g;
    v70.fields.b = b;
    v70.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, this->fields.bossName, v70, v54);
  }
  Instance = (UISprite_o *)this->fields.useBarSlider;
  if ( !Instance )
    goto LABEL_87;
  v56 = 1.0 - (double)RaidBossTotalDamage / (double)v45;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v56, 0);
  if ( this->fields.isJumbleRaid )
  {
    Instance = (UISprite_o *)this->fields.eventRaidEntity;
    if ( !Instance )
      goto LABEL_87;
    Instance = (UISprite_o *)EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)Instance, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      goto LABEL_75;
  }
  if ( !*v63 )
    goto LABEL_75;
  if ( !this->fields.isLastBattleRelease )
  {
    v57 = this->fields.eventRaidEntity;
    if ( !v57 )
      goto LABEL_87;
    if ( v57->fields.maxHp > RaidBossTotalDamage )
    {
LABEL_75:
      Instance = this->fields.lastBattleSpr;
      if ( Instance )
      {
        Instance = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          goto LABEL_84;
        }
      }
LABEL_87:
      sub_1C32E7C(Instance);
    }
  }
  Instance = this->fields.lastBattleSpr;
  if ( !Instance )
    goto LABEL_87;
  Instance = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v71.fields.r = r;
  v71.fields.g = g;
  v71.fields.b = b;
  v71.fields.a = a;
  TitleInfoEventRaidBossComponent__SetOutlineLastColor(this, this->fields.useTotalLabel, v71, v58);
  v59 = (UnityEngine_Object_o *)this->fields.bossName;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v59, 0, 0) )
  {
    v72.fields.r = r;
    v72.fields.g = g;
    v72.fields.b = b;
    v72.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineLastColor(this, this->fields.bossName, v72, v60);
  }
LABEL_84:
  Instance = (UISprite_o *)this->fields.restTimeLabel;
  if ( !Instance )
    goto LABEL_87;
  v73.fields.r = r;
  v73.fields.g = g;
  v73.fields.b = b;
  v73.fields.a = a;
  UILabel__set_effectColor((UILabel_o *)Instance, v73, 0);
  TitleInfoEventRaidBossComponent__UpdateRestTime(this, 1, v61);
}


void TitleInfoEventRaidBossComponent__SetHpBarSplitters(
        TitleInfoEventRaidBossComponent_o *this,
        bool isFlag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *defeatCntBarSplitter; // x0
  struct UISprite_array *hpBarSplitters; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x22
  UnityEngine_Object_o *v9; // x20

  if ( (byte_4C362DF & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C362DF = 1;
  }
  defeatCntBarSplitter = this->fields.defeatCntBarSplitter;
  if ( !defeatCntBarSplitter
    || (defeatCntBarSplitter = UnityEngine_GameObject__get_gameObject(defeatCntBarSplitter, 0)) == 0 )
  {
LABEL_17:
    sub_1C32E7C(defeatCntBarSplitter);
  }
  UnityEngine_GameObject__SetActive(defeatCntBarSplitter, isFlag, 0);
  hpBarSplitters = this->fields.hpBarSplitters;
  if ( hpBarSplitters )
  {
    max_length = hpBarSplitters->max_length;
    if ( (int)max_length >= 1 )
    {
      for ( i = 0; (__int64)i < (int)max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1C32E84(defeatCntBarSplitter);
        v9 = (UnityEngine_Object_o *)hpBarSplitters->m_Items[i];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        defeatCntBarSplitter = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
        if ( ((unsigned __int8)defeatCntBarSplitter & 1) != 0 )
        {
          if ( !v9 )
            goto LABEL_17;
          defeatCntBarSplitter = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
          if ( !defeatCntBarSplitter )
            goto LABEL_17;
          UnityEngine_GameObject__SetActive(defeatCntBarSplitter, isFlag, 0);
        }
        LODWORD(max_length) = hpBarSplitters->max_length;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventRaidBossComponent__SetLastBattleIcon(
        TitleInfoEventRaidBossComponent_o *this,
        UISprite_o *sprite,
        System_String_o *prefix,
        int32_t eventId,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v12; // x23
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  Il2CppObject *v19; // x0
  System_String_o *v20; // x22
  Il2CppObject *v21; // x0
  System_String_o *v22; // x21
  int32_t v23; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v24; // [xsp+18h] [xbp-48h] BYREF
  int32_t v25; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C362DC & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_25192/*"{0}_{1}"*/);
    sub_1C32C20(&StringLiteral_25194/*"{0}_{1}_{2}"*/);
    byte_4C362DC = 1;
  }
  if ( iconId < 0 )
    goto LABEL_10;
  v25 = eventId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(
                          int_TypeInfo,
                          &v25,
                          prefix,
                          *(_QWORD *)&eventId,
                          *(_QWORD *)&iconId,
                          method,
                          v6,
                          v7);
  v24 = iconId;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v13, v14, v15, v16, v17, v18);
  v20 = System_String__Format_63559904((System_String_o *)StringLiteral_25194/*"{0}_{1}_{2}"*/, (Il2CppObject *)prefix, v12, v19, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v20, 0) )
  {
LABEL_10:
    if ( eventId < 0 )
      goto LABEL_16;
    v23 = eventId;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(
                            int_TypeInfo,
                            &v23,
                            prefix,
                            *(_QWORD *)&eventId,
                            *(_QWORD *)&iconId,
                            method,
                            v6,
                            v7);
    v22 = System_String__Format_63559836((System_String_o *)StringLiteral_25192/*"{0}_{1}"*/, (Il2CppObject *)prefix, v21, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( !AtlasManager__SetEventUI(sprite, v22, 0) )
    {
LABEL_16:
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(sprite, prefix, 0);
    }
  }
}


void TitleInfoEventRaidBossComponent__SetOutlineBattleColor(
        TitleInfoEventRaidBossComponent_o *this,
        UILabel_o *label,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0

  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity )
    defaultColor = EventBossStatusUiEntity__GetStatusBattleColor(eventBossStatusUiEntity, defaultColor, 0);
  if ( !label )
    sub_1C32E7C(eventBossStatusUiEntity);
  UILabel__set_effectColor(label, defaultColor, 0);
}


void TitleInfoEventRaidBossComponent__SetOutlineLastColor(
        TitleInfoEventRaidBossComponent_o *this,
        UILabel_o *label,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0

  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity )
    defaultColor = EventBossStatusUiEntity__GetStatusLastColor(eventBossStatusUiEntity, defaultColor, 0);
  if ( !label )
    sub_1C32E7C(eventBossStatusUiEntity);
  UILabel__set_effectColor(label, defaultColor, 0);
}


void TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
        TitleInfoEventRaidBossComponent_o *this,
        UISprite_o *sprite,
        System_String_o *prefix,
        int32_t gaugeId,
        const MethodInfo *method)
{
  System_String_o *v8; // x0
  System_String_o *v9; // x21
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = gaugeId;
  if ( (byte_4C362DB & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    byte_4C362DB = 1;
  }
  if ( gaugeId < 0 )
    goto LABEL_12;
  v8 = System_Int32__ToString((int32_t)&v10, 0);
  v9 = System_String__Concat_63556792(prefix, (System_String_o *)StringLiteral_16107/*"_"*/, v8, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v9, 0) )
  {
LABEL_12:
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(sprite, prefix, 0);
  }
}


void TitleInfoEventRaidBossComponent__Setup(
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
  int64_t Instance; // x0
  DataManager_o *v17; // x23
  EventRaidMaster_o *v18; // x22
  struct EventRaidEntity_o *Entity; // x0
  struct EventRaidEntity_o **p_eventRaidEntity; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct UserEventRaidEntity_o *EntityFromEventIdAndDay; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  bool isRaidDefeatCount; // w0
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x5
  int32_t v31; // w23
  TitleInfoEventRaidBossComponent_o *v32; // x0
  const MethodInfo *v33; // x4
  TitleInfoEventRaidBossComponent_o *v34; // x0
  const MethodInfo *v35; // x4
  TitleInfoEventRaidBossComponent_o *v36; // x0
  const MethodInfo *v37; // x4
  float v38; // s0
  struct UISlider_o *hpBarSlider; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct UILabel_o *totalHpLabel; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  char v45; // w1
  UISprite_o *defeatCntFrame; // x23
  float v47; // s0
  struct UISlider_o *defeatCntBarSlider; // x1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct UILabel_o *totalDefeatCntLabel; // x1
  struct UILabel_o **p_useTotalLabel; // x23
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int64_t endedAt; // x24
  UnityEngine_Component_o *v56; // x8
  int64_t v57; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  float overwritePosX; // s0
  UnityEngine_GameObject_o *v60; // x23
  TitleInfoEventRaidBossComponent_c *v61; // x0
  EventRaidEntity_o *eventRaidEntity; // x8
  int32_t v63; // w1
  const MethodInfo *v64; // x1
  int64_t maxHp; // x20
  EventRaidEntity_o *v66; // x8
  int32_t raidDeadQuestId; // w20
  bool IsJumbleSingleRaid; // w0
  const MethodInfo *v69; // x3
  const MethodInfo *v70; // x1

  v13 = isJumbleRaid;
  v14 = isSingleRaid;
  v15 = isEventFolderRaid;
  if ( (byte_4C362D9 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C32C20(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_19234/*"event_raid_defeat_count_frame"*/);
    sub_1C32C20(&StringLiteral_19283/*"event_superboss_hp_white"*/);
    sub_1C32C20(&StringLiteral_19239/*"event_raid_lastbattle"*/);
    sub_1C32C20(&StringLiteral_19236/*"event_raid_hp_back"*/);
    sub_1C32C20(&StringLiteral_19235/*"event_raid_defeat_count_front"*/);
    sub_1C32C20(&StringLiteral_19237/*"event_raid_hp_frame"*/);
    sub_1C32C20(&StringLiteral_19243/*"event_raid_split_line"*/);
    sub_1C32C20(&StringLiteral_19233/*"event_raid_defeat_count_back"*/);
    sub_1C32C20(&StringLiteral_19238/*"event_raid_hp_front"*/);
    byte_4C362D9 = 1;
  }
  this->fields.eventId = eventId;
  this->fields.isEncountRaidBoss = 0;
  this->fields.isDefeatRaidDisp = 0;
  this->fields.warId = warId;
  this->fields.isJumbleRaid = v13;
  this->fields.isSingleRaid = v14;
  this->fields.isFolderRaid = v15;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  v17 = (DataManager_o *)Instance;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v18 = (EventRaidMaster_o *)Instance;
  if ( day < 0 )
  {
    if ( !Instance )
      goto LABEL_65;
    day = EventRaidMaster__GetCurrentDay((EventRaidMaster_o *)Instance, this->fields.eventId, 0);
  }
  else if ( !Instance )
  {
    goto LABEL_65;
  }
  Entity = EventRaidMaster__GetEntity(v18, this->fields.eventId, day, 0);
  this->fields.eventRaidEntity = Entity;
  p_eventRaidEntity = &this->fields.eventRaidEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventRaidEntity, (int32_t)Entity, v21, v22);
  if ( this->fields.eventRaidEntity )
  {
    this->fields.isTimeLimitRaid = (*p_eventRaidEntity)->fields.timeLimitAt > 0;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          v17,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
    if ( Instance )
    {
      EntityFromEventIdAndDay = UserEventRaidMaster__getEntityFromEventIdAndDay(
                                  (UserEventRaidMaster_o *)Instance,
                                  this->fields.eventId,
                                  day,
                                  0);
      this->fields.userEventRaidEntity = EntityFromEventIdAndDay;
      sub_1C32BC4(
        (CGThumbnailListItem_o *)&this->fields.userEventRaidEntity,
        (int32_t)EntityFromEventIdAndDay,
        v24,
        v25);
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            v17,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( Instance )
      {
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              this->fields.eventId,
                              (const MethodInfo_3396838 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( Instance )
        {
          isRaidDefeatCount = EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)Instance, 0);
          this->fields.isRaidDefeatCount = isRaidDefeatCount;
          this->fields.isMovedPos = isRaidDefeatCount;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                v17,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
          if ( Instance )
          {
            EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                          (EventBossStatusUiMaster_o *)Instance,
                                          this->fields.eventId,
                                          day,
                                          0);
            this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex;
            sub_1C32BC4(
              (CGThumbnailListItem_o *)&this->fields.eventBossStatusUiEntity,
              (int32_t)EntityFromEventIdAndIndex,
              v28,
              v29);
            Instance = (int64_t)this->fields.eventBossStatusUiEntity;
            if ( Instance )
            {
              Instance = EventBossStatusUiEntity__GetGaugeId((EventBossStatusUiEntity_o *)Instance, 0);
              v31 = Instance;
              if ( this->fields.eventBossStatusUiEntity )
                Instance = EventBossStatusUiEntity__GetLastBattleIconId(this->fields.eventBossStatusUiEntity, 0);
            }
            else
            {
              v31 = -1;
            }
            if ( *p_eventRaidEntity )
            {
              TitleInfoEventRaidBossComponent__SetLastBattleIcon(
                (TitleInfoEventRaidBossComponent_o *)Instance,
                this->fields.lastBattleSpr,
                (System_String_o *)StringLiteral_19239/*"event_raid_lastbattle"*/,
                (*p_eventRaidEntity)->fields.eventId,
                (*p_eventRaidEntity)->fields.iconId,
                v30);
              if ( this->fields.isRaidDefeatCount && !this->fields.isTimeLimitRaid )
              {
                defeatCntFrame = this->fields.defeatCntFrame;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetEventUI(defeatCntFrame, (System_String_o *)StringLiteral_19234/*"event_raid_defeat_count_frame"*/, 0);
                AtlasManager__SetEventUI(this->fields.defeatCntBg, (System_String_o *)StringLiteral_19233/*"event_raid_defeat_count_back"*/, 0);
                AtlasManager__SetEventUI(this->fields.defeatCntBar, (System_String_o *)StringLiteral_19235/*"event_raid_defeat_count_front"*/, 0);
                AtlasManager__SetEventUI(
                  this->fields.defeatCntBarSliderWhiteSp,
                  (System_String_o *)StringLiteral_19283/*"event_superboss_hp_white"*/,
                  0);
                AtlasManager__SetEventUI(this->fields.defeatCntBarSplitterSp, (System_String_o *)StringLiteral_19243/*"event_raid_split_line"*/, 0);
                Instance = (int64_t)this->fields.defeatCntBar;
                if ( !Instance )
                  goto LABEL_65;
                v47 = (*(float (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 664LL))(
                        Instance,
                        *(_QWORD *)(*(_QWORD *)Instance + 672LL));
                defeatCntBarSlider = this->fields.defeatCntBarSlider;
                this->fields.barSizeX = v47;
                this->fields.useBarSlider = defeatCntBarSlider;
                sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.useBarSlider, (int32_t)defeatCntBarSlider, v49, v50);
                totalDefeatCntLabel = this->fields.totalDefeatCntLabel;
                this->fields.useTotalLabel = totalDefeatCntLabel;
                p_useTotalLabel = &this->fields.useTotalLabel;
                sub_1C32BC4(
                  (CGThumbnailListItem_o *)&this->fields.useTotalLabel,
                  (int32_t)totalDefeatCntLabel,
                  v53,
                  v54);
                Instance = (int64_t)this->fields.modeName;
                if ( !Instance )
                  goto LABEL_65;
                Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
                if ( !Instance )
                  goto LABEL_65;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
                Instance = (int64_t)this->fields.defeatCntBarParent;
                if ( !Instance )
                  goto LABEL_65;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
                Instance = (int64_t)this->fields.hpBarParent;
                if ( !Instance )
                  goto LABEL_65;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
                if ( !*p_eventRaidEntity )
                  goto LABEL_65;
                endedAt = (*p_eventRaidEntity)->fields.endedAt;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Instance = NetworkManager__getTime(0);
                v56 = (UnityEngine_Component_o *)*p_useTotalLabel;
                if ( !*p_useTotalLabel )
                  goto LABEL_65;
                v57 = Instance;
                Instance = (int64_t)UnityEngine_Component__get_gameObject(v56, 0);
                if ( endedAt > v57 || this->fields.isJumbleRaid )
                {
                  v45 = 1;
                  if ( !Instance )
                    goto LABEL_65;
                }
                else
                {
                  v45 = this->fields.isSingleRaid;
                  if ( !Instance )
                    goto LABEL_65;
                }
              }
              else
              {
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v32,
                  this->fields.hpFrame,
                  (System_String_o *)StringLiteral_19237/*"event_raid_hp_frame"*/,
                  v31,
                  v33);
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v34,
                  this->fields.hpBg,
                  (System_String_o *)StringLiteral_19236/*"event_raid_hp_back"*/,
                  v31,
                  v35);
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v36,
                  this->fields.hpBar,
                  (System_String_o *)StringLiteral_19238/*"event_raid_hp_front"*/,
                  v31,
                  v37);
                Instance = (int64_t)this->fields.hpBar;
                if ( !Instance )
                  goto LABEL_65;
                v38 = (*(float (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 664LL))(
                        Instance,
                        *(_QWORD *)(*(_QWORD *)Instance + 672LL));
                hpBarSlider = this->fields.hpBarSlider;
                this->fields.barSizeX = v38;
                this->fields.useBarSlider = hpBarSlider;
                sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.useBarSlider, (int32_t)hpBarSlider, v40, v41);
                totalHpLabel = this->fields.totalHpLabel;
                this->fields.useTotalLabel = totalHpLabel;
                sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.useTotalLabel, (int32_t)totalHpLabel, v43, v44);
                Instance = (int64_t)this->fields.modeName;
                if ( !Instance )
                  goto LABEL_65;
                Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
                if ( !Instance )
                  goto LABEL_65;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
                Instance = (int64_t)this->fields.defeatCntBarParent;
                if ( !Instance )
                  goto LABEL_65;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
                Instance = (int64_t)this->fields.hpBarParent;
                if ( !Instance )
                  goto LABEL_65;
                v45 = 1;
              }
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v45, 0);
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              overwritePosX = this->fields.overwritePosX;
              v60 = gameObject;
              if ( overwritePosX == 0.0 )
              {
                v61 = TitleInfoEventRaidBossComponent_TypeInfo;
                if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
                  v61 = TitleInfoEventRaidBossComponent_TypeInfo;
                }
                overwritePosX = (float)v61->static_fields->RAIDBOSS_DEFEAT_COUNT_POS_X;
              }
              GameObjectExtensions__SetLocalPositionX(v60, overwritePosX, 0);
              Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              if ( Instance )
              {
                Instance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
                if ( Instance )
                {
                  this->fields.originPos = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)Instance,
                                             0);
                  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                  if ( Instance )
                  {
                    Instance = clsQuestCheck__IsEncountRaidBoss(
                                 (clsQuestCheck_o *)Instance,
                                 this->fields.eventId,
                                 day,
                                 0);
                    eventRaidEntity = this->fields.eventRaidEntity;
                    this->fields.isEncountRaidBoss = Instance & 1;
                    if ( eventRaidEntity )
                    {
                      Instance = EventRaidEntity__IsJumbleSingleRaid(eventRaidEntity, 0);
                      v63 = this->fields.eventId;
                      if ( (Instance & 1) != 0 )
                      {
                        if ( !*p_eventRaidEntity )
                          goto LABEL_65;
                        Instance = EventRaidMaster__GetRaidGroupDeadQuestId(
                                     v18,
                                     v63,
                                     (*p_eventRaidEntity)->fields.groupIndex,
                                     0);
                      }
                      else
                      {
                        Instance = EventRaidMaster__GetRaidDeadQuestId(v18, v63, day, 0);
                      }
                      this->fields.raidDeadQuestId = Instance;
                      if ( (int)Instance >= 1 )
                      {
                        Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                        if ( !Instance )
                          goto LABEL_65;
                        Instance = clsQuestCheck__IsQuestRelease(
                                     (clsQuestCheck_o *)Instance,
                                     this->fields.raidDeadQuestId,
                                     -1,
                                     0,
                                     0);
                        this->fields.isLastBattleRelease = Instance & 1;
                      }
                      if ( *p_eventRaidEntity )
                      {
                        maxHp = (*p_eventRaidEntity)->fields.maxHp;
                        Instance = TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(this, v64);
                        v66 = this->fields.eventRaidEntity;
                        this->fields.initDispHp = maxHp - Instance;
                        if ( v66 )
                        {
                          raidDeadQuestId = this->fields.raidDeadQuestId;
                          IsJumbleSingleRaid = EventRaidEntity__IsJumbleSingleRaid(v66, 0);
                          if ( !TitleInfoEventRaidBossComponent__IsPlayClearAnimation(
                                  this,
                                  raidDeadQuestId,
                                  IsJumbleSingleRaid,
                                  v69) )
                          {
LABEL_63:
                            TitleInfoEventRaidBossComponent__SetDisp(this, v70);
                            return;
                          }
                          Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
                          if ( Instance )
                          {
                            MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
                            Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
                            if ( Instance )
                            {
                              MissionNotifyManager__FrameOut((MissionNotifyManager_o *)Instance, 0);
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
    sub_1C32E7C(Instance);
  }
}


void TitleInfoEventRaidBossComponent__StartDamageAnimation(
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animEndCall, (int32_t)callBack, (int32_t)callBack, method);
  if ( mapAssetData )
  {
    ClearBossEffect = TitleInfoEventRaidBossComponent__GetClearBossEffect(this, mapAssetData, v7);
    this->fields.clearBossEffect = ClearBossEffect;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.clearBossEffect, (int32_t)ClearBossEffect, v9, v10);
  }
  TitleInfoEventRaidBossComponent__PlayFrameInBoss(this, v6);
}


void TitleInfoEventRaidBossComponent__Update(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TitleInfoEventRaidBossComponent__UpdateRestTime(this, 0, v2);
}


void TitleInfoEventRaidBossComponent__UpdateDisp(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoEventRaidBossComponent__UpdateRestTime(
        TitleInfoEventRaidBossComponent_o *this,
        bool isForce,
        const MethodInfo *method)
{
  float realtimeSinceStartup; // s0
  float restTimeUpdateSec; // s9
  float v7; // s8
  TitleInfoEventRaidBossComponent_c *v8; // x0
  System_String_o *Time; // x0
  struct EventRaidEntity_o *eventRaidEntity; // x8
  unsigned __int64 v11; // x8
  unsigned __int64 v12; // x23
  unsigned __int64 v13; // x22
  unsigned __int64 v14; // x21
  UILabel_o *restTimeLabel; // x19
  System_String_o *v16; // x20
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  Il2CppObject *v23; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  Il2CppObject *v30; // x22
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  __int64 v35; // x6
  __int64 v36; // x7
  Il2CppObject *v37; // x0
  unsigned __int64 v38; // [xsp+0h] [xbp-60h] BYREF
  unsigned __int64 v39; // [xsp+8h] [xbp-58h] BYREF
  unsigned __int64 v40; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4C362E0 & 1) == 0 )
  {
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_13436/*"TIME_REST_RAID"*/);
    byte_4C362E0 = 1;
  }
  if ( this->fields.isEncountRaidBoss && !this->fields.isRaidDefeatCount )
  {
    if ( isForce )
      goto LABEL_9;
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    restTimeUpdateSec = this->fields.restTimeUpdateSec;
    v7 = realtimeSinceStartup;
    v8 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
      v8 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    if ( (float)(v7 - restTimeUpdateSec) > v8->static_fields->REST_TIME_UPDATE_INTERVAL_SEC )
    {
LABEL_9:
      this->fields.restTimeUpdateSec = UnityEngine_Time__get_realtimeSinceStartup(0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = (System_String_o *)NetworkManager__getTime(0);
      eventRaidEntity = this->fields.eventRaidEntity;
      if ( !eventRaidEntity )
        goto LABEL_20;
      v11 = eventRaidEntity->fields.endedAt - (_QWORD)Time;
      if ( (__int64)v11 < 1 )
      {
        v14 = 0;
        v13 = 0;
        v12 = 0;
      }
      else
      {
        v12 = v11 % 0x3C;
        v13 = v11 / 0x3C % 0x3C;
        v14 = v11 / 0xE10;
      }
      restTimeLabel = this->fields.restTimeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_13436/*"TIME_REST_RAID"*/, 0);
      v40 = v14;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v40, v17, v18, v19, v20, v21, v22);
      v39 = v13;
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v39, v24, v25, v26, v27, v28, v29);
      v38 = v12;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v38, v31, v32, v33, v34, v35, v36);
      Time = System_String__Format_63559904(v16, v23, v30, v37, 0);
      if ( !restTimeLabel )
LABEL_20:
        sub_1C32E7C(Time);
      UILabel__set_text(restTimeLabel, Time, 0);
    }
  }
}


bool TitleInfoEventRaidBossComponent___IsTerminalSceneRefreshRequest_b__104_0(
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
    sub_1C32E7C(this);
  }
  return 0;
}


void TitleInfoEventRaidBossComponent__setBeforeMovePos(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v4; // x19
  TitleInfoEventRaidBossComponent_c *v5; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float *static_fields; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C362E2 & 1) == 0 )
  {
    sub_1C32C20(&TitleInfoEventRaidBossComponent_TypeInfo);
    byte_4C362E2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
  {
    sub_1C32E7C(gameObject);
  }
  v4 = (UnityEngine_Transform_o *)gameObject;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  v5 = TitleInfoEventRaidBossComponent_TypeInfo;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v5 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  static_fields = (float *)v5->static_fields;
  v11.fields.x = x + static_fields[8];
  v11.fields.y = y + static_fields[9];
  v11.fields.z = z + static_fields[10];
  UnityEngine_Transform__set_localPosition(v4, v11, 0);
}


void TitleInfoEventRaidBossComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C362F0 & 1) == 0 )
  {
    sub_1C32C20(&TitleInfoEventRaidBossComponent___c_TypeInfo);
    byte_4C362F0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(TitleInfoEventRaidBossComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventRaidBossComponent___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void TitleInfoEventRaidBossComponent___c___ctor(TitleInfoEventRaidBossComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventRaidBossComponent___c___PlayHpCut_b__88_0(
        TitleInfoEventRaidBossComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleInfoEventRaidBossComponent___c__DisplayClass96_0___ctor(
        TitleInfoEventRaidBossComponent___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TitleInfoEventRaidBossComponent___c__DisplayClass96_0___GetAiModeName_b__0(
        TitleInfoEventRaidBossComponent___c__DisplayClass96_0_o *this,
        int64_t hp,
        const MethodInfo *method)
{
  return this->fields.totalDamage >= hp;
}