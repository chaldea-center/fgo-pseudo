void TitleInfoEventRaidBossComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct TitleInfoEventRaidBossComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct TitleInfoEventRaidBossComponent_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct TitleInfoEventRaidBossComponent_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  TitleInfoEventRaidBossComponent_c *v31; // x8
  struct TitleInfoEventRaidBossComponent_StaticFields *v32; // x9
  struct TitleInfoEventRaidBossComponent_StaticFields *v33; // x8

  if ( (byte_4CECFA9 & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_12663/*"SaveKeyStartRaidClearAnimation"*/);
    sub_1C7BAE8(&StringLiteral_23157/*"raid_boss_icon_"*/);
    sub_1C7BAE8(&StringLiteral_14554/*"TitleInfoEventRaidBossEffect_Dead"*/);
    sub_1C7BAE8(&StringLiteral_23158/*"raid_boss_icon_last_"*/);
    byte_4CECFA9 = 1;
  }
  TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_23157/*"raid_boss_icon_"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields,
    StringLiteral_23157/*"raid_boss_icon_"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_23158/*"raid_boss_icon_last_"*/;
  static_fields = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  static_fields->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_23158/*"raid_boss_icon_last_"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&static_fields->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_14554/*"TitleInfoEventRaidBossEffect_Dead"*/;
  v16 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v16->RAIDBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14554/*"TitleInfoEventRaidBossEffect_Dead"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v16->RAIDBOSS_CLEAR_EFFECT_PREFAB, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_12663/*"SaveKeyStartRaidClearAnimation"*/;
  v24 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v24->SAVEKEY_START_RAID_CLEAR_ANIMATION = (struct System_String_o *)StringLiteral_12663/*"SaveKeyStartRaidClearAnimation"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v24->SAVEKEY_START_RAID_CLEAR_ANIMATION,
    v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = TitleInfoEventRaidBossComponent_TypeInfo;
  v32 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v32->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v32->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v33 = v31->static_fields;
  *(_OWORD *)&v33->ANIM_DURATION_FRAME_IN_BOSS = xmmword_CF5D00;
  *(_QWORD *)&v33->REST_TIME_UPDATE_INTERVAL_SEC = 0xE23F800000LL;
  *(_QWORD *)&v33->CLEAR_END_CALLBACK_DELAY = 0x3FC000003F000000LL;
  v33->CLEAR_END_CALLBACK_DELAY_NORMAL = 1.0;
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

  if ( (byte_4CECFA1 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_9924/*"OnEndClearAnimation"*/);
    byte_4CECFA1 = 1;
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
    (System_String_o *)StringLiteral_9924/*"OnEndClearAnimation"*/,
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
  __int64 v7; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  struct System_String_array *splitAiMode; // x9
  System_Collections_Generic_IEnumerable_TSource__o *splitHp; // x20
  System_Func_long__bool__o *v11; // x22
  struct EventRaidEntity_o *v12; // x8
  struct System_String_array *v13; // x8
  System_String_o **v14; // x8

  if ( (byte_4CECFA4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Count_long____78832816);
    sub_1C7BAE8(&System_Func_long__bool__TypeInfo);
    sub_1C7BAE8(&Method_TitleInfoEventRaidBossComponent___c__DisplayClass105_0__GetAiModeName_b__0__);
    sub_1C7BAE8(&TitleInfoEventRaidBossComponent___c__DisplayClass105_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CECFA4 = 1;
  }
  v5 = (Il2CppObject *)sub_1C7BD34(TitleInfoEventRaidBossComponent___c__DisplayClass105_0_TypeInfo);
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
    v14 = (System_String_o **)&StringLiteral_1/*""*/;
    return *v14;
  }
  splitHp = (System_Collections_Generic_IEnumerable_TSource__o *)eventRaidEntity->fields.splitHp;
  v11 = (System_Func_long__bool__o *)sub_1C7BD34(System_Func_long__bool__TypeInfo);
  System_Func_long__bool____ctor(
    v11,
    v5,
    Method_TitleInfoEventRaidBossComponent___c__DisplayClass105_0__GetAiModeName_b__0__,
    0);
  v6 = System_Linq_Enumerable__Count_long__51974212(
         splitHp,
         (System_Func_TSource__bool__o *)v11,
         (const MethodInfo_3191044 *)Method_System_Linq_Enumerable_Count_long____78832816);
  v12 = this->fields.eventRaidEntity;
  if ( !v12 || (v13 = v12->fields.splitAiMode) == 0 )
LABEL_13:
    sub_1C7BD40(v6, v7);
  if ( (unsigned int)v6 >= LODWORD(v13->max_length) )
    sub_1C7BD48(v6);
  v14 = &v13->m_Items[(int)v6];
  return *v14;
}


UnityEngine_AnimationClip_o *TitleInfoEventRaidBossComponent__GetClearBossAnimClip(
        TitleInfoEventRaidBossComponent_o *this,
        UnityEngine_Animation_o *animation,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  struct EventRaidEntity_o *eventRaidEntity; // x8
  Il2CppObject *v7; // x21
  struct EventRaidEntity_o *v8; // x8
  Il2CppObject *v9; // x22
  Il2CppObject *v10; // x0
  UnityEngine_Object_o *Clip; // x21
  struct EventRaidEntity_o *v12; // x8
  Il2CppObject *RAIDBOSS_CLEAR_EFFECT_PREFAB; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  struct EventRaidEntity_o *v16; // x8
  Il2CppObject *v17; // x20
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  TitleInfoEventRaidBossComponent_c *v20; // x0
  int32_t iconId; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CECFA7 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25453/*"{0}_{1}"*/);
    sub_1C7BAE8(&StringLiteral_25455/*"{0}_{1}_{2}"*/);
    byte_4CECFA7 = 1;
  }
  v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  }
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_27;
  v7 = (Il2CppObject *)*((_QWORD *)v5[11].monitor + 2);
  eventId = eventRaidEntity->fields.eventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v8 = this->fields.eventRaidEntity;
  if ( !v8 )
    goto LABEL_27;
  v9 = v5;
  iconId = v8->fields.iconId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v5 = (Il2CppObject *)System_String__Format_64218288((System_String_o *)StringLiteral_25455/*"{0}_{1}_{2}"*/, v7, v9, v10, 0);
  if ( !animation )
    goto LABEL_27;
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, (System_String_o *)v5, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(Clip, 0, 0) )
  {
    v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v12 = this->fields.eventRaidEntity;
    if ( !v12 )
      goto LABEL_27;
    RAIDBOSS_CLEAR_EFFECT_PREFAB = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
    eventId = v12->fields.eventId;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    v15 = System_String__Format_64218220((System_String_o *)StringLiteral_25453/*"{0}_{1}"*/, RAIDBOSS_CLEAR_EFFECT_PREFAB, v14, 0);
    Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, v15, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(Clip, 0, 0) )
    {
      v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
      if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
      v16 = this->fields.eventRaidEntity;
      if ( v16 )
      {
        v17 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
        eventId = v16->fields.day;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
        v19 = System_String__Format_64218220((System_String_o *)StringLiteral_25453/*"{0}_{1}"*/, v17, v18, 0);
        Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, v19, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(Clip, 0, 0) )
        {
          v20 = TitleInfoEventRaidBossComponent_TypeInfo;
          if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
            v20 = TitleInfoEventRaidBossComponent_TypeInfo;
          }
          return UnityEngine_Animation__GetClip(animation, v20->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB, 0);
        }
        return (UnityEngine_AnimationClip_o *)Clip;
      }
LABEL_27:
      sub_1C7BD40(v5, animation);
    }
  }
  return (UnityEngine_AnimationClip_o *)Clip;
}


UnityEngine_GameObject_o *TitleInfoEventRaidBossComponent__GetClearBossEffect(
        TitleInfoEventRaidBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  struct EventRaidEntity_o *eventRaidEntity; // x8
  Il2CppObject *v7; // x21
  struct EventRaidEntity_o *v8; // x8
  Il2CppObject *v9; // x22
  Il2CppObject *v10; // x0
  Il2CppObject *Object_object__51713432; // x21
  struct EventRaidEntity_o *v12; // x8
  Il2CppObject *RAIDBOSS_CLEAR_EFFECT_PREFAB; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  struct EventRaidEntity_o *v16; // x8
  Il2CppObject *v17; // x20
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  TitleInfoEventRaidBossComponent_c *v20; // x0
  int32_t iconId; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CECFA6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25453/*"{0}_{1}"*/);
    sub_1C7BAE8(&StringLiteral_25455/*"{0}_{1}_{2}"*/);
    byte_4CECFA6 = 1;
  }
  v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  }
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_27;
  v7 = (Il2CppObject *)*((_QWORD *)v5[11].monitor + 2);
  eventId = eventRaidEntity->fields.eventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v8 = this->fields.eventRaidEntity;
  if ( !v8 )
    goto LABEL_27;
  v9 = v5;
  iconId = v8->fields.iconId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v5 = (Il2CppObject *)System_String__Format_64218288((System_String_o *)StringLiteral_25455/*"{0}_{1}_{2}"*/, v7, v9, v10, 0);
  if ( !mapAssetData )
    goto LABEL_27;
  Object_object__51713432 = AssetData__GetObject_object__51713432(
                              mapAssetData,
                              (System_String_o *)v5,
                              (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51713432, 0, 0) )
  {
    v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v12 = this->fields.eventRaidEntity;
    if ( !v12 )
      goto LABEL_27;
    RAIDBOSS_CLEAR_EFFECT_PREFAB = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
    eventId = v12->fields.eventId;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    v15 = System_String__Format_64218220((System_String_o *)StringLiteral_25453/*"{0}_{1}"*/, RAIDBOSS_CLEAR_EFFECT_PREFAB, v14, 0);
    Object_object__51713432 = AssetData__GetObject_object__51713432(
                                mapAssetData,
                                v15,
                                (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51713432, 0, 0) )
    {
      v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
      if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
      v16 = this->fields.eventRaidEntity;
      if ( v16 )
      {
        v17 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
        eventId = v16->fields.day;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
        v19 = System_String__Format_64218220((System_String_o *)StringLiteral_25453/*"{0}_{1}"*/, v17, v18, 0);
        Object_object__51713432 = AssetData__GetObject_object__51713432(
                                    mapAssetData,
                                    v19,
                                    (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51713432, 0, 0) )
        {
          v20 = TitleInfoEventRaidBossComponent_TypeInfo;
          if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
            v20 = TitleInfoEventRaidBossComponent_TypeInfo;
          }
          return (UnityEngine_GameObject_o *)AssetData__GetObject_object__51713432(
                                               mapAssetData,
                                               v20->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB,
                                               (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
        }
        return (UnityEngine_GameObject_o *)Object_object__51713432;
      }
LABEL_27:
      sub_1C7BD40(v5, mapAssetData);
    }
  }
  return (UnityEngine_GameObject_o *)Object_object__51713432;
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
  __int64 v4; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  bool v6; // w8
  struct EventRaidEntity_o *v7; // x8
  int64_t maxHp; // x8
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CECF95 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_TotalEventRaidMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CECF95 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_TotalEventRaidMaster___);
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity || !result )
    goto LABEL_14;
  v6 = TotalEventRaidMaster__TryGetEntity(
         (TotalEventRaidMaster_o *)result,
         &entity,
         this->fields.eventId,
         eventRaidEntity->fields.day,
         0);
  result = 0;
  if ( !v6 )
    return result;
  v7 = this->fields.eventRaidEntity;
  if ( !v7 || !entity )
LABEL_14:
    sub_1C7BD40(result, v4);
  maxHp = v7->fields.maxHp;
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
  __int64 v12; // x1
  System_String_o *v13; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  System_String_o *v17; // x19
  Il2CppObject *NumberFormat_41846716; // x1
  System_String_o *v19; // x0
  System_String_o *v20; // x19
  System_String_o *v21; // x19
  System_String_o *v22; // x19
  int64_t v23; // [xsp+0h] [xbp-40h] BYREF
  int64_t v24; // [xsp+8h] [xbp-38h] BYREF

  v24 = totalHp;
  if ( (byte_4CECFA5 & 1) == 0 )
  {
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5683/*"EVENT_RAID_REST_COUNT_AFTER"*/);
    sub_1C7BAE8(&StringLiteral_5684/*"EVENT_RAID_REST_COUNT_BEFORE"*/);
    sub_1C7BAE8(&StringLiteral_113/*" "*/);
    sub_1C7BAE8(&StringLiteral_5606/*"EVENT_DEFEAT_COUNT_TXT"*/);
    sub_1C7BAE8(&StringLiteral_13509/*"TITLE_INFO_RAID_TOTALHP"*/);
    byte_4CECFA5 = 1;
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity )
  {
    CountFormat = EventBossStatusUiEntity__GetCountFormat(eventBossStatusUiEntity, 0);
    if ( !System_String__IsNullOrEmpty(CountFormat, 0) )
    {
      v17 = System_Int64__ToString((int64_t)&v24, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      NumberFormat_41846716 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41846716(v17, 0);
      v19 = CountFormat;
      return System_String__Format(v19, NumberFormat_41846716, 0);
    }
  }
  if ( !this->fields.isJumbleRaid && !this->fields.isSingleRaid )
  {
    if ( this->fields.isRaidDefeatCount && !this->fields.isTimeLimitRaid )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5606/*"EVENT_DEFEAT_COUNT_TXT"*/, 0);
      v23 = totalDamage;
      NumberFormat_41846716 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23);
      v19 = v22;
    }
    else
    {
      v20 = System_Int64__ToString((int64_t)&v24, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager__GetNumberFormat_41846716(v20, 0);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_13509/*"TITLE_INFO_RAID_TOTALHP"*/, 0);
      NumberFormat_41846716 = (Il2CppObject *)v21;
    }
    return System_String__Format(v19, NumberFormat_41846716, 0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5684/*"EVENT_RAID_REST_COUNT_BEFORE"*/, 0);
  v10 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_64254696(v10, v9, 0);
  if ( !v10 )
    sub_1C7BD40(v11, v12);
  System_Text_StringBuilder__Append_64260872(v10, (System_String_o *)StringLiteral_113/*" "*/, 0);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5683/*"EVENT_RAID_REST_COUNT_AFTER"*/, 0);
  v23 = totalHp;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23);
  v15 = System_String__Format(v13, v14, 0);
  System_Text_StringBuilder__Append_64260872(v10, v15, 0);
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
    sub_1C7BD40(0, method);
  return EventRaidEntity__IsJumbleSingleRaid(eventRaidEntity, 0) && this->fields.isLastBattleRelease;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4CECF9F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CECF9F = 1;
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
    eventRaidEntity = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( eventRaidEntity )
      return clsQuestCheck__IsQuestClear(eventRaidEntity, raidDeadQuestId, 0, 0) || this->fields.isJumbleRaid;
LABEL_20:
    sub_1C7BD40(eventRaidEntity, *(_QWORD *)&raidDeadQuestId);
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
    sub_1C7BD40(this, eventId);
  return eventRaidEntity->fields.eventId == eventId && eventRaidEntity->fields.day == day;
}


bool TitleInfoEventRaidBossComponent__IsTerminalSceneRefreshRequest(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  struct EventRaidEntity_o *eventRaidEntity; // x8
  int64_t maxHp; // x20
  __int64 v5; // x1
  QuestBoardListViewManager_o *ObjectList; // x0
  ListViewSort_c *klass; // x8
  __int64 v9; // x8
  _BOOL8 v10; // x0
  __int64 v11; // x1
  bool v12; // w20
  Il2CppObject *current; // x21
  QuestBoardListViewItem_o *Item; // x0
  __int64 v15; // x1
  Il2CppObject *Master_object; // x22
  QuestBoardListViewItem_o *v17; // x0
  __int64 v18; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  System_Object_array *ListByQuestID; // x21
  System_Func_object__bool__o *v21; // x22
  int v22; // w19
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CECFA8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_QuestReleaseEntity____78794472);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_1C7BAE8(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    sub_1C7BAE8(&Method_TitleInfoEventRaidBossComponent__IsTerminalSceneRefreshRequest_b__113_0__);
    byte_4CECFA8 = 1;
  }
  memset(&v24, 0, sizeof(v24));
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
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  ObjectList = (QuestBoardListViewManager_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    ObjectList = (QuestBoardListViewManager_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = ObjectList->fields.sort->klass;
  if ( !klass
    || (v9 = *(_QWORD *)&klass->_2.element_size) == 0
    || (ObjectList = *(QuestBoardListViewManager_o **)(v9 + 320)) == 0
    || (ObjectList = (QuestBoardListViewManager_o *)QuestBoardListViewManager__get_ObjectList(ObjectList, 0)) == 0 )
  {
    sub_1C7BD40(ObjectList, v5);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)ObjectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    v12 = v10;
    if ( !v10 )
      break;
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_1C7BD40(v10, v11);
    Item = QuestBoardListViewObject__GetItem((QuestBoardListViewObject_o *)v24.fields._current, 0);
    if ( !Item )
      sub_1C7BD40(0, v15);
    if ( Item->fields._quest_info_k__BackingField )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
      v17 = QuestBoardListViewObject__GetItem((QuestBoardListViewObject_o *)current, 0);
      if ( !v17 )
        sub_1C7BD40(0, v18);
      quest_info_k__BackingField = v17->fields._quest_info_k__BackingField;
      if ( !quest_info_k__BackingField )
        sub_1C7BD40(v17, v18);
      if ( !Master_object )
        sub_1C7BD40(v17, v18);
      ListByQuestID = (System_Object_array *)QuestReleaseMaster__getListByQuestID(
                                               (QuestReleaseMaster_o *)Master_object,
                                               quest_info_k__BackingField->fields.questId,
                                               0);
      v21 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_QuestReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v21,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaidBossComponent__IsTerminalSceneRefreshRequest_b__113_0__,
        0);
      if ( BasicHelper__Any_object__51746772(
             ListByQuestID,
             (System_Func_T__bool__o *)v21,
             (const MethodInfo_31597D4 *)Method_BasicHelper_Any_QuestReleaseEntity____78794472) )
      {
        v22 = 7;
        goto LABEL_32;
      }
    }
  }
  v22 = 3;
LABEL_32:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
  return v12 && v22 == 7;
}


void TitleInfoEventRaidBossComponent__OnDestroy(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoEventRaidBossComponent__OnEndAnimation(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *animEndCall; // x20
  const MethodInfo *v10; // x1

  animEndCall = this->fields.animEndCall;
  this->fields.animEndCall = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.animEndCall, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndCall, 0);
  TitleInfoEventRaidBossComponent__SetDisp(this, v10);
}


void TitleInfoEventRaidBossComponent__OnEndClearAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct EventRaidEntity_o *clearRaidBossEventRaidEntity; // x8
  int32_t eventId; // w20
  int32_t day; // w21
  const MethodInfo *v7; // x1
  TitleInfoEventRaidBossComponent_c *v8; // x0
  TitleInfoEventRaidBossComponent_c *v9; // x0

  if ( (byte_4CECFA3 & 1) == 0 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&TitleInfoEventRaidBossComponent_TypeInfo);
    byte_4CECFA3 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CEBA7B )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEBA7B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField )
  {
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    TerminalPramsManager__LoadEventRaidDefeatedEffectInfo(0);
  }
  clearRaidBossEventRaidEntity = this->fields.clearRaidBossEventRaidEntity;
  if ( !clearRaidBossEventRaidEntity )
    sub_1C7BD40(v3, method);
  eventId = this->fields.eventId;
  day = clearRaidBossEventRaidEntity->fields.day;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__UpdateEventRaidDefeatedEffectInfo(eventId, day, 0);
  TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(0);
  if ( this->fields.isFolderRaid )
  {
    v8 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
      v8 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    if ( UnityEngine_PlayerPrefs__GetInt_71827884(v8->static_fields->SAVEKEY_START_RAID_CLEAR_ANIMATION, 0) )
    {
      v9 = TitleInfoEventRaidBossComponent_TypeInfo;
      if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
        v9 = TitleInfoEventRaidBossComponent_TypeInfo;
      }
      UnityEngine_PlayerPrefs__DeleteKey(v9->static_fields->SAVEKEY_START_RAID_CLEAR_ANIMATION, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
  TitleInfoEventRaidBossComponent__OnEndAnimation(this, v7);
}


void TitleInfoEventRaidBossComponent__OnStartFadeOutAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *onClearCall; // x20
  __int64 v10; // x1
  UnityEngine_Component_o *raidBossIconSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventRaidBossComponent_c *v13; // x8
  UnityEngine_GameObject_o *v14; // x19

  if ( (byte_4CECFA2 & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C7BAE8(&Method_UITweener_Begin_TweenAlpha___);
    byte_4CECFA2 = 1;
  }
  onClearCall = this->fields.onClearCall;
  this->fields.onClearCall = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.onClearCall, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(onClearCall, 0);
  raidBossIconSp = (UnityEngine_Component_o *)this->fields.raidBossIconSp;
  this->fields.isRaidClear = 1;
  if ( !raidBossIconSp )
    goto LABEL_8;
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
                                                (const MethodInfo_3245DA8 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !raidBossIconSp )
LABEL_8:
    sub_1C7BD40(raidBossIconSp, v10);
  LODWORD(raidBossIconSp[1].monitor) = 1;
  raidBossIconSp[5].monitor = (void *)1065353216;
}


void TitleInfoEventRaidBossComponent__PlayFrameInBoss(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *Child; // x0
  __int64 v5; // x1
  float ANIM_DURATION_FRAME_IN_BOSS; // s8
  TitleInfoEventRaidBossComponent_c *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  TitleInfoEventRaidBossComponent_c *v9; // x8
  float32x2_t v10; // d8
  float z; // s9
  UnityEngine_Component_o *v12; // x20
  float32x2_t *static_fields; // x8
  float v14; // s0
  intptr_t v15; // x9
  UnityEngine_GameObject_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  if ( (byte_4CECF9B & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C7BAE8(&Method_UITweener_Begin_TweenPosition___);
    sub_1C7BAE8(&StringLiteral_10701/*"PlayHpNameAlpha"*/);
    byte_4CECF9B = 1;
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
    v7 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
      v7 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    ANIM_DURATION_FRAME_IN_BOSS = v7->static_fields->ANIM_DURATION_FRAME_IN_BOSS;
  }
  this->fields.isStartedFrameIn = 1;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Child = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                       v8,
                                       ANIM_DURATION_FRAME_IN_BOSS,
                                       (const MethodInfo_3245DA8 *)Method_UITweener_Begin_TweenPosition___);
  v9 = TitleInfoEventRaidBossComponent_TypeInfo;
  v10.n64_u64[0] = *(unsigned __int64 *)&this->fields.originPos.fields.x;
  z = this->fields.originPos.fields.z;
  v12 = Child;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v9 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  if ( !v12 )
LABEL_16:
    sub_1C7BD40(Child, v5);
  static_fields = (float32x2_t *)v9->static_fields;
  v14 = z + static_fields[5].n64_f32[0];
  v12[5].monitor = (void *)vadd_f32(v10, static_fields[4]).n64_u64[0];
  *(float *)&v12[5].fields.m_CachedPtr = v14;
  *(float *)&static_fields = this->fields.originPos.fields.z;
  v15 = *(_QWORD *)&this->fields.originPos.fields.x;
  LODWORD(v12[1].monitor) = 2;
  HIDWORD(v12[6].klass) = (_DWORD)static_fields;
  *(intptr_t *)((char *)&v12[5].fields.m_CachedPtr + 4) = v15;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v12[3].monitor = v16;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v12[3].monitor, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_10701/*"PlayHpNameAlpha"*/;
  v12[3].fields.m_CachedPtr = StringLiteral_10701/*"PlayHpNameAlpha"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v12[3].fields, v23, v24, v25, v26, v27, v28, v29);
}


void TitleInfoEventRaidBossComponent__PlayFrameOutBoss(
        TitleInfoEventRaidBossComponent_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  TitleInfoEventRaidBossComponent_c *v5; // x0
  float ANIM_DURATION_FRAME_IN_BOSS; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  TitleInfoEventRaidBossComponent_c *v11; // x0
  float32x2_t v12; // d8
  float z; // s9
  float32x2_t *static_fields; // x8
  float32x2_t v15; // d0
  float v16; // s1
  UnityEngine_GameObject_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  Il2CppClass *v24; // [xsp+0h] [xbp-50h]

  if ( (byte_4CECF9C & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C7BAE8(&Method_UITweener_Begin_TweenPosition___);
    byte_4CECF9C = 1;
  }
  v5 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v5 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  if ( isQuick )
    ANIM_DURATION_FRAME_IN_BOSS = 0.0;
  else
    ANIM_DURATION_FRAME_IN_BOSS = v5->static_fields->ANIM_DURATION_FRAME_IN_BOSS;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8 = UITweener__Begin_object_(
         gameObject,
         ANIM_DURATION_FRAME_IN_BOSS,
         (const MethodInfo_3245DA8 *)Method_UITweener_Begin_TweenPosition___);
  v24 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  if ( !v8 )
    sub_1C7BD40(0, v9);
  v10 = v8;
  *(float *)&v8[8].monitor = this->fields.originPos.fields.z;
  v8[8].klass = v24;
  v11 = TitleInfoEventRaidBossComponent_TypeInfo;
  v12.n64_u64[0] = *(unsigned __int64 *)&this->fields.originPos.fields.x;
  z = this->fields.originPos.fields.z;
  if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v11 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v11->static_fields;
  v15.n64_u64[0] = static_fields[4].n64_u64[0];
  v16 = static_fields[5].n64_f32[0];
  LODWORD(v10[2].klass) = 2;
  *(float32x2_t *)((char *)&v10[8].monitor + 4) = vadd_f32(v12, v15);
  *((float *)&v10[9].klass + 1) = z + v16;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v10[5].klass = (Il2CppClass *)v17;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v10[5], (int32_t)v17, v18, v19, v20, v21, v22, v23);
}


void TitleInfoEventRaidBossComponent__PlayHpCut(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  TitleInfoEventRaidBossComponent_c *v5; // x8
  EasingObject_o *v6; // x20
  TitleInfoEventRaidBossComponent___c_c *v7; // x0
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *_9__96_0; // x21
  Il2CppObject *v10; // x22
  struct TitleInfoEventRaidBossComponent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4CECF9D & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C7BAE8(&Method_TitleInfoEventRaidBossComponent_PlayHpDeletion__);
    sub_1C7BAE8(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C7BAE8(&Method_TitleInfoEventRaidBossComponent___c__PlayHpCut_b__96_0__);
    sub_1C7BAE8(&TitleInfoEventRaidBossComponent___c_TypeInfo);
    byte_4CECF9D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_31C8BB0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
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
  _9__96_0 = v7->static_fields->__9__96_0;
  if ( !_9__96_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = TitleInfoEventRaidBossComponent___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__96_0 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(_9__96_0, v10, Method_TitleInfoEventRaidBossComponent___c__PlayHpCut_b__96_0__, 0);
    static_fields = TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields;
    static_fields->__9__96_0 = _9__96_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__96_0,
      (int32_t)_9__96_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_TitleInfoEventRaidBossComponent_PlayHpDeletion__, 0);
  if ( !v6 )
    sub_1C7BD40(v19, v20);
  EasingObject__Play(v6, ANIM_DURATION_HP_CUT, _9__96_0, v18, 0.0, 0, 0);
}


void TitleInfoEventRaidBossComponent__PlayHpDeletion(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 eventId; // x1
  EventRaidMaster_o *v5; // x20
  struct EventRaidEntity_o *eventRaidEntity; // x8
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
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  Il2CppObject *v25; // x21
  Il2CppObject *v26; // x20
  struct EventRaidEntity_o *v27; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v29; // x1
  System_Action_o *v30; // x21
  System_Action_o *v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4CECF9E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_TitleInfoEventRaidBossComponent_OnEndClearAnimation__);
    sub_1C7BAE8(&Method_TitleInfoEventRaidBossComponent_OnStartFadeOutAnimation__);
    byte_4CECF9E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !this->fields.eventRaidEntity )
    goto LABEL_40;
  v5 = (EventRaidMaster_o *)Instance;
  Instance = (DataManager_o *)EventRaidEntity__IsJumbleSingleRaid(this->fields.eventRaidEntity, 0);
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_40;
  eventId = (unsigned int)this->fields.eventId;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_40;
    RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(v5, eventId, eventRaidEntity->fields.groupIndex, 0);
  }
  else
  {
    if ( !v5 )
      goto LABEL_40;
    RaidGroupDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(v5, eventId, eventRaidEntity->fields.day, 0);
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
    sub_1C7BD40(Instance, eventId);
  }
  IsJumbleSingleRaid = EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)Instance, 0);
  if ( TitleInfoEventRaidBossComponent__IsPlayClearAnimation(this, v9, IsJumbleSingleRaid, v16) )
  {
    clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v25 = 0;
    if ( UnityEngine_Object__op_Inequality(clearBossEffect, 0, 0) )
    {
      v26 = (Il2CppObject *)this->fields.clearBossEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v25 = UnityEngine_Object__Instantiate_object_(
              v26,
              (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v25, (UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v25, 0);
    }
    v27 = this->fields.eventRaidEntity;
    this->fields.isEncountRaidBoss = 0;
    this->fields.clearRaidBossEventRaidEntity = v27;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.clearRaidBossEventRaidEntity,
      (int32_t)v27,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0, 0);
    Component_object = 0;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v25 )
        goto LABEL_40;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v25,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      v30 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(
        v30,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaidBossComponent_OnStartFadeOutAnimation__,
        0);
      if ( Component_object )
      {
        CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v30, 0);
        v31 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
        System_Action___ctor(v31, (Il2CppObject *)this, Method_TitleInfoEventRaidBossComponent_OnEndClearAnimation__, 0);
        Component_object[2].monitor = v31;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&Component_object[2].monitor,
          (int32_t)v31,
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
    TitleInfoEventRaidBossComponent__OnEndAnimation(this, v17);
  }
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

  if ( (byte_4CECF91 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&TitleInfoEventRaidBossComponent_TypeInfo);
    byte_4CECF91 = 1;
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
    v10 = System_Int32__ToString((int)eventRaidEnt + 72, 0);
    v11 = System_String__Concat_64176912(RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX, v10, 0);
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
  v14 = System_Int32__ToString((int)eventRaidEnt + 72, 0);
  v15 = System_String__Concat_64176912(RAIDBOSS_ICON_SPNAME_PREFIX, v14, 0);
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
    sub_1C7BD40(v7, eventRaidEnt);
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
  __int64 v9; // x1
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *v11; // x0
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *ClearBossAnimClip; // x20
  float length; // s8
  TitleInfoEventRaidBossComponent_c *v15; // x0

  if ( (byte_4CECFA0 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5317/*"DoClearCallback"*/);
    byte_4CECFA0 = 1;
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
      v11 = this->fields.clearBossEffect;
      if ( !v11 )
        goto LABEL_27;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v11,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ClearBossAnimClip = 0;
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      ClearBossAnimClip = (UnityEngine_Object_o *)TitleInfoEventRaidBossComponent__GetClearBossAnimClip(
                                                    this,
                                                    (UnityEngine_Animation_o *)Component_object,
                                                    v12);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(ClearBossAnimClip, 0, 0);
    length = 0.0;
    if ( ((unsigned __int8)v11 & 1) == 0 )
      goto LABEL_23;
    if ( ClearBossAnimClip )
    {
      length = UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)ClearBossAnimClip, 0);
LABEL_23:
      v15 = TitleInfoEventRaidBossComponent_TypeInfo;
      if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
        v15 = TitleInfoEventRaidBossComponent_TypeInfo;
      }
      CLEAR_CALLBACK_DELAY = fmaxf(length - v15->static_fields->CLEAR_END_CALLBACK_DELAY_NORMAL, 0.0);
      goto LABEL_26;
    }
LABEL_27:
    sub_1C7BD40(v11, v9);
  }
LABEL_26:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5317/*"DoClearCallback"*/,
    CLEAR_CALLBACK_DELAY,
    0);
}


void TitleInfoEventRaidBossComponent__SetDamageAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        System_Action_o *onClearCallback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  int64_t totalDamage; // x9
  double v16; // d0
  struct EventRaidEntity_o *v17; // x9
  double maxHp; // d1
  float v19; // s0
  float v20; // s1
  float v21; // s2
  float v22; // s3
  float v23; // s0
  float v24; // s1
  _BOOL4 isJumbleRaid; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CECF98 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CECF98 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onClearCall,
    (int32_t)onClearCallback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( userEventRaidEntity )
    userEventRaidEntity = (struct UserEventRaidEntity_o *)userEventRaidEntity->fields.damage;
  if ( entity )
  {
    totalDamage = entity->fields.totalDamage;
    userEventRaidEntity = (struct UserEventRaidEntity_o *)((char *)userEventRaidEntity + totalDamage);
    v16 = (double)totalDamage;
  }
  else
  {
    v16 = 0.0;
  }
  v17 = this->fields.eventRaidEntity;
  if ( !v17 )
    goto LABEL_31;
  maxHp = (double)v17->fields.maxHp;
  Instance = (DataManager_o *)this->fields.useBarSlider;
  v19 = 1.0 - v16 / maxHp;
  v20 = 1.0 - (double)(__int64)userEventRaidEntity / maxHp;
  v21 = fminf(v19, 1.0);
  v22 = fminf(v20, 1.0);
  v23 = v19 < 0.0 ? 0.0 : v21;
  v24 = v20 < 0.0 ? 0.0 : v22;
  this->fields.HPfrom = v23;
  this->fields.HPto = v24;
  if ( !Instance )
    goto LABEL_31;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v23, 0);
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
    sub_1C7BD40(Instance, v6);
  }
}


void TitleInfoEventRaidBossComponent__SetDisp(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  bool *p_isRaidDefeatCount; // x20
  UISprite_o *Instance; // x0
  const MethodInfo *v5; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  struct EventRaidEntity_o *v9; // x8
  struct System_Int64_array *splitHp; // x8
  unsigned int max_length; // w20
  _BOOL4 isRaidDefeatCount; // w8
  _BOOL4 v13; // w9
  int v14; // w21
  struct UISprite_array *hpBarSplitters; // x27
  struct UISprite_array **p_hpBarSplitters; // x21
  __int64 v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UnityEngine_Component_o *v24; // x22
  unsigned int v25; // w28
  struct UISprite_array *v26; // x23
  Il2CppObject *defeatCntBarSplitter; // x24
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  DataManager_o *v34; // x24
  Il2CppClass **v35; // x0
  struct UISprite_array *v36; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  UISprite_o *v44; // x24
  struct EventRaidEntity_o *v45; // x8
  struct System_Int64_array *v46; // x9
  struct UISprite_array *v47; // x10
  __int64 maxHp; // d9
  __int64 v49; // d10
  float barSizeX; // s8
  float v51; // s0
  float r; // s9
  float g; // s11
  float b; // s8
  float a; // s10
  struct EventRaidEntity_o *v56; // x8
  __int64 v57; // x22
  const MethodInfo *v58; // x2
  __int64 RaidBossTotalDamage; // x20
  UILabel_o *modeName; // x21
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x3
  UILabel_o *useTotalLabel; // x21
  const MethodInfo *v64; // x2
  UnityEngine_Object_o *bossName; // x21
  const MethodInfo *v66; // x2
  struct EventRaidEntity_o *v67; // x8
  float v68; // s0
  struct EventRaidEntity_o *v69; // x8
  const MethodInfo *v70; // x2
  UnityEngine_Object_o *v71; // x20
  const MethodInfo *v72; // x2
  const MethodInfo *v73; // x2
  __int64 v74; // x0
  bool *v75; // [xsp+0h] [xbp-90h]
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CECF94 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&UISprite___TypeInfo);
    byte_4CECF94 = 1;
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
  Instance = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  Instance = (UISprite_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
  TitleInfoEventRaidBossComponent__SetBossIcon(this, this->fields.eventRaidEntity, this->fields.isLastBattleRelease, v7);
  v9 = this->fields.eventRaidEntity;
  if ( !v9 )
    goto LABEL_87;
  splitHp = v9->fields.splitHp;
  v75 = p_isRaidDefeatCount;
  if ( !splitHp )
    goto LABEL_87;
  max_length = splitHp->max_length;
  isRaidDefeatCount = this->fields.isRaidDefeatCount;
  v13 = (int)max_length > 0;
  v14 = isRaidDefeatCount && v13;
  TitleInfoEventRaidBossComponent__SetHpBarSplitters(this, isRaidDefeatCount && v13, v8);
  if ( v14 )
  {
    hpBarSplitters = this->fields.hpBarSplitters;
    p_hpBarSplitters = &this->fields.hpBarSplitters;
    if ( !hpBarSplitters )
    {
      v17 = sub_1C7BB90(UISprite___TypeInfo, max_length);
      *p_hpBarSplitters = (struct UISprite_array *)v17;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.hpBarSplitters, v17, v18, v19, v20, v21, v22, v23);
    }
    Instance = (UISprite_o *)GameObjectExtensions__GetParent(this->fields.defeatCntBarSplitter, 0);
    v24 = (UnityEngine_Component_o *)Instance;
    v25 = 0;
    do
    {
      if ( !hpBarSplitters )
      {
        v26 = this->fields.hpBarSplitters;
        defeatCntBarSplitter = (Il2CppObject *)this->fields.defeatCntBarSplitter;
        if ( v25 )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Instance = (UISprite_o *)UnityEngine_Object__Instantiate_object_(
                                     defeatCntBarSplitter,
                                     (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !Instance )
            goto LABEL_87;
          Instance = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)Instance,
                                     (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( !v26 )
            goto LABEL_87;
          v34 = (DataManager_o *)Instance;
          if ( Instance )
          {
            Instance = (UISprite_o *)sub_1C7BC24(Instance, v26->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_89;
          }
          if ( v25 >= LODWORD(v26->max_length) )
            goto LABEL_88;
          v35 = &v26->obj.klass + (int)v25;
          v35[4] = (Il2CppClass *)v34;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v34, v28, v29, v30, v31, v32, v33);
          v36 = *p_hpBarSplitters;
          if ( !*p_hpBarSplitters )
            goto LABEL_87;
          if ( v25 >= LODWORD(v36->max_length) )
            goto LABEL_88;
          Instance = v36->m_Items[v25];
          if ( !Instance )
            goto LABEL_87;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          GameObjectExtensions__SafeSetParent(gameObject, v24, 0);
        }
        else
        {
          if ( !defeatCntBarSplitter )
            goto LABEL_87;
          Instance = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                     this->fields.defeatCntBarSplitter,
                                     (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( !v26 )
            goto LABEL_87;
          v44 = Instance;
          if ( Instance )
          {
            Instance = (UISprite_o *)sub_1C7BC24(Instance, v26->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_89:
              v74 = sub_1C7BD64(Instance);
              sub_1C7BC10(v74, 0);
            }
          }
          if ( !LODWORD(v26->max_length) )
            goto LABEL_88;
          v26->m_Items[0] = v44;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v26->m_Items, (int32_t)v44, v38, v39, v40, v41, v42, v43);
        }
      }
      v45 = this->fields.eventRaidEntity;
      if ( !v45 )
        goto LABEL_87;
      v46 = v45->fields.splitHp;
      if ( !v46 )
        goto LABEL_87;
      if ( v25 >= LODWORD(v46->max_length) )
        goto LABEL_88;
      v47 = this->fields.hpBarSplitters;
      if ( !v47 )
        goto LABEL_87;
      if ( v25 >= LODWORD(v47->max_length) )
LABEL_88:
        sub_1C7BD48(Instance);
      Instance = v47->m_Items[v25];
      if ( !Instance )
        goto LABEL_87;
      maxHp = v45->fields.maxHp;
      v49 = v46->m_Items[v25];
      barSizeX = this->fields.barSizeX;
      Instance = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_87;
      v51 = -(double)v49 / (double)maxHp;
      v77.fields.x = barSizeX * v51;
      v77.fields.y = 0.0;
      v77.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v77, 0);
    }
    while ( max_length != ++v25 );
  }
  Instance = (UISprite_o *)this->fields.eventBossStatusUiEntity;
  if ( Instance )
  {
    v78.fields.g = 0.035294;
    v78.fields.r = 0.37647;
    v78.fields.a = 1.0;
    v78.fields.b = 0.035294;
    TextEffectColor = EventBossStatusUiEntity__GetTextEffectColor((EventBossStatusUiEntity_o *)Instance, v78, 0);
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
  v56 = this->fields.eventRaidEntity;
  if ( !v56 )
    goto LABEL_87;
  v57 = v56->fields.maxHp;
  RaidBossTotalDamage = TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(this, v5);
  if ( this->fields.isRaidDefeatCount )
  {
    modeName = this->fields.modeName;
    Instance = (UISprite_o *)TitleInfoEventRaidBossComponent__GetAiModeName(this, RaidBossTotalDamage, v58);
    if ( !modeName )
      goto LABEL_87;
    UILabel__set_text(modeName, (System_String_o *)Instance, 0);
    v80.fields.r = r;
    v80.fields.g = g;
    v80.fields.b = b;
    v80.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, this->fields.modeName, v80, v61);
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
                               v57 - RaidBossTotalDamage,
                               RaidBossTotalDamage,
                               v62);
    if ( !useTotalLabel )
      goto LABEL_87;
    UILabel__set_text(useTotalLabel, (System_String_o *)Instance, 0);
    v81.fields.r = r;
    v81.fields.g = g;
    v81.fields.b = b;
    v81.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, this->fields.useTotalLabel, v81, v64);
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
      v67 = this->fields.eventRaidEntity;
      if ( !v67 )
        goto LABEL_87;
      Instance = (UISprite_o *)this->fields.bossName;
      if ( !Instance )
        goto LABEL_87;
      UILabel__set_text((UILabel_o *)Instance, v67->fields.name, 0);
    }
    v82.fields.r = r;
    v82.fields.g = g;
    v82.fields.b = b;
    v82.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, this->fields.bossName, v82, v66);
  }
  Instance = (UISprite_o *)this->fields.useBarSlider;
  if ( !Instance )
    goto LABEL_87;
  v68 = 1.0 - (double)RaidBossTotalDamage / (double)v57;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v68, 0);
  if ( this->fields.isJumbleRaid )
  {
    Instance = (UISprite_o *)this->fields.eventRaidEntity;
    if ( !Instance )
      goto LABEL_87;
    Instance = (UISprite_o *)EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)Instance, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      goto LABEL_75;
  }
  if ( !*v75 )
    goto LABEL_75;
  if ( !this->fields.isLastBattleRelease )
  {
    v69 = this->fields.eventRaidEntity;
    if ( !v69 )
      goto LABEL_87;
    if ( v69->fields.maxHp > RaidBossTotalDamage )
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
      sub_1C7BD40(Instance, v5);
    }
  }
  Instance = this->fields.lastBattleSpr;
  if ( !Instance )
    goto LABEL_87;
  Instance = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v83.fields.r = r;
  v83.fields.g = g;
  v83.fields.b = b;
  v83.fields.a = a;
  TitleInfoEventRaidBossComponent__SetOutlineLastColor(this, this->fields.useTotalLabel, v83, v70);
  v71 = (UnityEngine_Object_o *)this->fields.bossName;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v71, 0, 0) )
  {
    v84.fields.r = r;
    v84.fields.g = g;
    v84.fields.b = b;
    v84.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineLastColor(this, this->fields.bossName, v84, v72);
  }
LABEL_84:
  Instance = (UISprite_o *)this->fields.restTimeLabel;
  if ( !Instance )
    goto LABEL_87;
  v85.fields.r = r;
  v85.fields.g = g;
  v85.fields.b = b;
  v85.fields.a = a;
  UILabel__set_effectColor((UILabel_o *)Instance, v85, 0);
  TitleInfoEventRaidBossComponent__UpdateRestTime(this, 1, v73);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4CECF96 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CECF96 = 1;
  }
  defeatCntBarSplitter = this->fields.defeatCntBarSplitter;
  if ( !defeatCntBarSplitter
    || (defeatCntBarSplitter = UnityEngine_GameObject__get_gameObject(defeatCntBarSplitter, 0)) == 0 )
  {
LABEL_17:
    sub_1C7BD40(defeatCntBarSplitter, isFlag);
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
          sub_1C7BD48(defeatCntBarSplitter);
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


void TitleInfoEventRaidBossComponent__SetLastBattleIcon(
        TitleInfoEventRaidBossComponent_o *this,
        UISprite_o *sprite,
        System_String_o *prefix,
        int32_t eventId,
        int32_t iconId,
        const MethodInfo *method)
{
  Il2CppObject *v10; // x23
  Il2CppObject *v11; // x0
  System_String_o *v12; // x22
  Il2CppObject *v13; // x0
  System_String_o *v14; // x21
  int32_t v15; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v16; // [xsp+18h] [xbp-48h] BYREF
  int32_t v17; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4CECF93 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25453/*"{0}_{1}"*/);
    sub_1C7BAE8(&StringLiteral_25455/*"{0}_{1}_{2}"*/);
    byte_4CECF93 = 1;
  }
  if ( iconId < 0 )
    goto LABEL_10;
  v17 = eventId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v16 = iconId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v12 = System_String__Format_64218288((System_String_o *)StringLiteral_25455/*"{0}_{1}_{2}"*/, (Il2CppObject *)prefix, v10, v11, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v12, 0) )
  {
LABEL_10:
    if ( eventId < 0 )
      goto LABEL_16;
    v15 = eventId;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    v14 = System_String__Format_64218220((System_String_o *)StringLiteral_25453/*"{0}_{1}"*/, (Il2CppObject *)prefix, v13, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( !AtlasManager__SetEventUI(sprite, v14, 0) )
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
    sub_1C7BD40(eventBossStatusUiEntity, label);
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
    sub_1C7BD40(eventBossStatusUiEntity, label);
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
  if ( (byte_4CECF92 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_16165/*"_"*/);
    byte_4CECF92 = 1;
  }
  if ( gaugeId < 0 )
    goto LABEL_12;
  v8 = System_Int32__ToString((int32_t)&v10, 0);
  v9 = System_String__Concat_64215176(prefix, (System_String_o *)StringLiteral_16165/*"_"*/, v8, 0);
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
  unsigned __int64 v17; // x1
  DataManager_o *v18; // x22
  EventRaidMaster_o *v19; // x21
  struct EventRaidEntity_o *Entity; // x0
  struct EventRaidEntity_o **p_eventRaidEntity; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct UserEventRaidEntity_o *EntityFromEventIdAndDay; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  bool isRaidDefeatCount; // w0
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  const MethodInfo *v43; // x5
  int32_t v44; // w22
  TitleInfoEventRaidBossComponent_o *v45; // x0
  const MethodInfo *v46; // x4
  TitleInfoEventRaidBossComponent_o *v47; // x0
  const MethodInfo *v48; // x4
  TitleInfoEventRaidBossComponent_o *v49; // x0
  const MethodInfo *v50; // x4
  float v51; // s0
  struct UISlider_o *hpBarSlider; // x1
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  struct UILabel_o *totalHpLabel; // x1
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  UISprite_o *defeatCntFrame; // x22
  float v67; // s0
  struct UISlider_o *defeatCntBarSlider; // x1
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  struct UILabel_o *totalDefeatCntLabel; // x1
  struct UILabel_o **p_useTotalLabel; // x22
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  int64_t endedAt; // x23
  UnityEngine_Component_o *v84; // x8
  int64_t v85; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  float overwritePosX; // s0
  UnityEngine_GameObject_o *v88; // x22
  TitleInfoEventRaidBossComponent_c *v89; // x0
  EventRaidEntity_o *eventRaidEntity; // x8
  int64_t maxHp; // x20
  EventRaidEntity_o *v92; // x8
  int32_t raidDeadQuestId; // w20
  bool IsJumbleSingleRaid; // w0
  const MethodInfo *v95; // x3
  const MethodInfo *v96; // x1

  v13 = isJumbleRaid;
  v14 = isSingleRaid;
  v15 = isEventFolderRaid;
  if ( (byte_4CECF90 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C7BAE8(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19378/*"event_raid_defeat_count_frame"*/);
    sub_1C7BAE8(&StringLiteral_19427/*"event_superboss_hp_white"*/);
    sub_1C7BAE8(&StringLiteral_19383/*"event_raid_lastbattle"*/);
    sub_1C7BAE8(&StringLiteral_19380/*"event_raid_hp_back"*/);
    sub_1C7BAE8(&StringLiteral_19379/*"event_raid_defeat_count_front"*/);
    sub_1C7BAE8(&StringLiteral_19381/*"event_raid_hp_frame"*/);
    sub_1C7BAE8(&StringLiteral_19387/*"event_raid_split_line"*/);
    sub_1C7BAE8(&StringLiteral_19377/*"event_raid_defeat_count_back"*/);
    sub_1C7BAE8(&StringLiteral_19382/*"event_raid_hp_front"*/);
    byte_4CECF90 = 1;
  }
  this->fields.eventId = eventId;
  this->fields.isEncountRaidBoss = 0;
  this->fields.isDefeatRaidDisp = 0;
  this->fields.warId = warId;
  this->fields.isJumbleRaid = v13;
  this->fields.isSingleRaid = v14;
  this->fields.isFolderRaid = v15;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  v18 = (DataManager_o *)Instance;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v19 = (EventRaidMaster_o *)Instance;
  this->fields.currentDay = day;
  if ( day < 0 )
  {
    if ( !Instance )
      goto LABEL_65;
    day = EventRaidMaster__GetCurrentDay((EventRaidMaster_o *)Instance, this->fields.eventId, 0);
    this->fields.currentDay = day;
  }
  else if ( !Instance )
  {
    goto LABEL_65;
  }
  Entity = EventRaidMaster__GetEntity(v19, this->fields.eventId, day, 0);
  this->fields.eventRaidEntity = Entity;
  p_eventRaidEntity = &this->fields.eventRaidEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventRaidEntity,
    (int32_t)Entity,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( this->fields.eventRaidEntity )
  {
    this->fields.isTimeLimitRaid = (*p_eventRaidEntity)->fields.timeLimitAt > 0;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          v18,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
    if ( Instance )
    {
      EntityFromEventIdAndDay = UserEventRaidMaster__getEntityFromEventIdAndDay(
                                  (UserEventRaidMaster_o *)Instance,
                                  this->fields.eventId,
                                  this->fields.currentDay,
                                  0);
      this->fields.userEventRaidEntity = EntityFromEventIdAndDay;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.userEventRaidEntity,
        (int32_t)EntityFromEventIdAndDay,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            v18,
                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( Instance )
      {
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              this->fields.eventId,
                              (const MethodInfo_342E2FC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( Instance )
        {
          isRaidDefeatCount = EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)Instance, 0);
          this->fields.isRaidDefeatCount = isRaidDefeatCount;
          this->fields.isMovedPos = isRaidDefeatCount;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                v18,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
          if ( Instance )
          {
            EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                          (EventBossStatusUiMaster_o *)Instance,
                                          this->fields.eventId,
                                          this->fields.currentDay,
                                          0);
            this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&this->fields.eventBossStatusUiEntity,
              (int32_t)EntityFromEventIdAndIndex,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42);
            Instance = (int64_t)this->fields.eventBossStatusUiEntity;
            if ( Instance )
            {
              Instance = EventBossStatusUiEntity__GetGaugeId((EventBossStatusUiEntity_o *)Instance, 0);
              v44 = Instance;
              if ( this->fields.eventBossStatusUiEntity )
                Instance = EventBossStatusUiEntity__GetLastBattleIconId(this->fields.eventBossStatusUiEntity, 0);
            }
            else
            {
              v44 = -1;
            }
            if ( *p_eventRaidEntity )
            {
              TitleInfoEventRaidBossComponent__SetLastBattleIcon(
                (TitleInfoEventRaidBossComponent_o *)Instance,
                this->fields.lastBattleSpr,
                (System_String_o *)StringLiteral_19383/*"event_raid_lastbattle"*/,
                (*p_eventRaidEntity)->fields.eventId,
                (*p_eventRaidEntity)->fields.iconId,
                v43);
              if ( this->fields.isRaidDefeatCount && !this->fields.isTimeLimitRaid )
              {
                defeatCntFrame = this->fields.defeatCntFrame;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetEventUI(defeatCntFrame, (System_String_o *)StringLiteral_19378/*"event_raid_defeat_count_frame"*/, 0);
                AtlasManager__SetEventUI(this->fields.defeatCntBg, (System_String_o *)StringLiteral_19377/*"event_raid_defeat_count_back"*/, 0);
                AtlasManager__SetEventUI(this->fields.defeatCntBar, (System_String_o *)StringLiteral_19379/*"event_raid_defeat_count_front"*/, 0);
                AtlasManager__SetEventUI(
                  this->fields.defeatCntBarSliderWhiteSp,
                  (System_String_o *)StringLiteral_19427/*"event_superboss_hp_white"*/,
                  0);
                AtlasManager__SetEventUI(this->fields.defeatCntBarSplitterSp, (System_String_o *)StringLiteral_19387/*"event_raid_split_line"*/, 0);
                Instance = (int64_t)this->fields.defeatCntBar;
                if ( !Instance )
                  goto LABEL_65;
                v67 = (*(float (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 664LL))(
                        Instance,
                        *(_QWORD *)(*(_QWORD *)Instance + 672LL));
                defeatCntBarSlider = this->fields.defeatCntBarSlider;
                this->fields.barSizeX = v67;
                this->fields.useBarSlider = defeatCntBarSlider;
                sub_1C7BA8C(
                  (GrandQuestFolderBoardItem_o *)&this->fields.useBarSlider,
                  (int32_t)defeatCntBarSlider,
                  v69,
                  v70,
                  v71,
                  v72,
                  v73,
                  v74);
                totalDefeatCntLabel = this->fields.totalDefeatCntLabel;
                this->fields.useTotalLabel = totalDefeatCntLabel;
                p_useTotalLabel = &this->fields.useTotalLabel;
                sub_1C7BA8C(
                  (GrandQuestFolderBoardItem_o *)&this->fields.useTotalLabel,
                  (int32_t)totalDefeatCntLabel,
                  v77,
                  v78,
                  v79,
                  v80,
                  v81,
                  v82);
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
                v84 = (UnityEngine_Component_o *)*p_useTotalLabel;
                if ( !*p_useTotalLabel )
                  goto LABEL_65;
                v85 = Instance;
                Instance = (int64_t)UnityEngine_Component__get_gameObject(v84, 0);
                if ( endedAt > v85 || this->fields.isJumbleRaid )
                {
                  v17 = 1;
                  if ( !Instance )
                    goto LABEL_65;
                }
                else
                {
                  v17 = this->fields.isSingleRaid;
                  if ( !Instance )
                    goto LABEL_65;
                }
              }
              else
              {
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v45,
                  this->fields.hpFrame,
                  (System_String_o *)StringLiteral_19381/*"event_raid_hp_frame"*/,
                  v44,
                  v46);
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v47,
                  this->fields.hpBg,
                  (System_String_o *)StringLiteral_19380/*"event_raid_hp_back"*/,
                  v44,
                  v48);
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v49,
                  this->fields.hpBar,
                  (System_String_o *)StringLiteral_19382/*"event_raid_hp_front"*/,
                  v44,
                  v50);
                Instance = (int64_t)this->fields.hpBar;
                if ( !Instance )
                  goto LABEL_65;
                v51 = (*(float (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 664LL))(
                        Instance,
                        *(_QWORD *)(*(_QWORD *)Instance + 672LL));
                hpBarSlider = this->fields.hpBarSlider;
                this->fields.barSizeX = v51;
                this->fields.useBarSlider = hpBarSlider;
                sub_1C7BA8C(
                  (GrandQuestFolderBoardItem_o *)&this->fields.useBarSlider,
                  (int32_t)hpBarSlider,
                  v53,
                  v54,
                  v55,
                  v56,
                  v57,
                  v58);
                totalHpLabel = this->fields.totalHpLabel;
                this->fields.useTotalLabel = totalHpLabel;
                sub_1C7BA8C(
                  (GrandQuestFolderBoardItem_o *)&this->fields.useTotalLabel,
                  (int32_t)totalHpLabel,
                  v60,
                  v61,
                  v62,
                  v63,
                  v64,
                  v65);
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
                LOBYTE(v17) = 1;
              }
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v17, 0);
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              overwritePosX = this->fields.overwritePosX;
              v88 = gameObject;
              if ( overwritePosX == 0.0 )
              {
                v89 = TitleInfoEventRaidBossComponent_TypeInfo;
                if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
                  v89 = TitleInfoEventRaidBossComponent_TypeInfo;
                }
                overwritePosX = (float)v89->static_fields->RAIDBOSS_DEFEAT_COUNT_POS_X;
              }
              GameObjectExtensions__SetLocalPositionX(v88, overwritePosX, 0);
              Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              if ( Instance )
              {
                Instance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
                if ( Instance )
                {
                  this->fields.originPos = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)Instance,
                                             0);
                  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                  if ( Instance )
                  {
                    Instance = clsQuestCheck__IsEncountRaidBoss(
                                 (clsQuestCheck_o *)Instance,
                                 this->fields.eventId,
                                 this->fields.currentDay,
                                 0);
                    eventRaidEntity = this->fields.eventRaidEntity;
                    this->fields.isEncountRaidBoss = Instance & 1;
                    if ( eventRaidEntity )
                    {
                      Instance = EventRaidEntity__IsJumbleSingleRaid(eventRaidEntity, 0);
                      v17 = (unsigned int)this->fields.eventId;
                      if ( (Instance & 1) != 0 )
                      {
                        if ( !*p_eventRaidEntity )
                          goto LABEL_65;
                        Instance = EventRaidMaster__GetRaidGroupDeadQuestId(
                                     v19,
                                     v17,
                                     (*p_eventRaidEntity)->fields.groupIndex,
                                     0);
                      }
                      else
                      {
                        Instance = EventRaidMaster__GetRaidDeadQuestId(v19, v17, this->fields.currentDay, 0);
                      }
                      this->fields.raidDeadQuestId = Instance;
                      if ( (int)Instance >= 1 )
                      {
                        Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
                        Instance = TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(
                                     this,
                                     (const MethodInfo *)v17);
                        v92 = this->fields.eventRaidEntity;
                        this->fields.initDispHp = maxHp - Instance;
                        if ( v92 )
                        {
                          raidDeadQuestId = this->fields.raidDeadQuestId;
                          IsJumbleSingleRaid = EventRaidEntity__IsJumbleSingleRaid(v92, 0);
                          if ( !TitleInfoEventRaidBossComponent__IsPlayClearAnimation(
                                  this,
                                  raidDeadQuestId,
                                  IsJumbleSingleRaid,
                                  v95) )
                          {
LABEL_63:
                            TitleInfoEventRaidBossComponent__SetDisp(this, v96);
                            return;
                          }
                          Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
                          if ( Instance )
                          {
                            MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
                            Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    sub_1C7BD40(Instance, v17);
  }
}


void TitleInfoEventRaidBossComponent__StartDamageAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        AssetData_o *mapAssetData,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct UnityEngine_GameObject_o *ClearBossEffect; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  TerminalPramsManager_c *v20; // x0
  System_Collections_Generic_List_int__o *nonFrameInBossHpUiIndex; // x0
  const MethodInfo *v22; // x1

  if ( (byte_4CECF9A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CECF9A = 1;
  }
  this->fields.animEndCall = callBack;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.animEndCall,
    (int32_t)callBack,
    (int32_t)callBack,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( mapAssetData )
  {
    ClearBossEffect = TitleInfoEventRaidBossComponent__GetClearBossEffect(this, mapAssetData, v12);
    this->fields.clearBossEffect = ClearBossEffect;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.clearBossEffect,
      (int32_t)ClearBossEffect,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  this->fields.isStartedFrameIn = 0;
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  nonFrameInBossHpUiIndex = v20->static_fields->nonFrameInBossHpUiIndex;
  if ( !nonFrameInBossHpUiIndex )
    sub_1C7BD40(0, v11);
  if ( System_Collections_Generic_List_int___Contains(
         nonFrameInBossHpUiIndex,
         this->fields.currentDay,
         (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    TitleInfoEventRaidBossComponent__PlayHpCut(this, v22);
  }
  else
  {
    TitleInfoEventRaidBossComponent__PlayFrameInBoss(this, v22);
  }
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
  __int64 v10; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  unsigned __int64 v12; // x8
  unsigned __int64 v13; // x23
  unsigned __int64 v14; // x22
  unsigned __int64 v15; // x21
  UILabel_o *restTimeLabel; // x19
  System_String_o *v17; // x20
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x22
  Il2CppObject *v20; // x0
  unsigned __int64 v21; // [xsp+0h] [xbp-60h] BYREF
  unsigned __int64 v22; // [xsp+8h] [xbp-58h] BYREF
  unsigned __int64 v23; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4CECF97 & 1) == 0 )
  {
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13494/*"TIME_REST_RAID"*/);
    byte_4CECF97 = 1;
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
      v12 = eventRaidEntity->fields.endedAt - (_QWORD)Time;
      if ( (__int64)v12 < 1 )
      {
        v15 = 0;
        v14 = 0;
        v13 = 0;
      }
      else
      {
        v13 = v12 % 0x3C;
        v14 = v12 / 0x3C % 0x3C;
        v15 = v12 / 0xE10;
      }
      restTimeLabel = this->fields.restTimeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_13494/*"TIME_REST_RAID"*/, 0);
      v23 = v15;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23);
      v22 = v14;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v22);
      v21 = v13;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v21);
      Time = System_String__Format_64218288(v17, v18, v19, v20, 0);
      if ( !restTimeLabel )
LABEL_20:
        sub_1C7BD40(Time, v10);
      UILabel__set_text(restTimeLabel, Time, 0);
    }
  }
}


bool TitleInfoEventRaidBossComponent___IsTerminalSceneRefreshRequest_b__113_0(
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
    sub_1C7BD40(this, d);
  }
  return 0;
}


int32_t TitleInfoEventRaidBossComponent__get_CurrentDay(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.currentDay;
}


bool TitleInfoEventRaidBossComponent__get_IsStartedFrameIn(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isStartedFrameIn;
}


void TitleInfoEventRaidBossComponent__setBeforeMovePos(
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

  if ( (byte_4CECF99 & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoEventRaidBossComponent_TypeInfo);
    byte_4CECF99 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
  {
    sub_1C7BD40(gameObject, v4);
  }
  v5 = (UnityEngine_Transform_o *)gameObject;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
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
  UnityEngine_Transform__set_localPosition(v5, v12, 0);
}


void TitleInfoEventRaidBossComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CECFAA & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoEventRaidBossComponent___c_TypeInfo);
    byte_4CECFAA = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(TitleInfoEventRaidBossComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventRaidBossComponent___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TitleInfoEventRaidBossComponent___c___ctor(TitleInfoEventRaidBossComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventRaidBossComponent___c___PlayHpCut_b__96_0(
        TitleInfoEventRaidBossComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleInfoEventRaidBossComponent___c__DisplayClass105_0___ctor(
        TitleInfoEventRaidBossComponent___c__DisplayClass105_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TitleInfoEventRaidBossComponent___c__DisplayClass105_0___GetAiModeName_b__0(
        TitleInfoEventRaidBossComponent___c__DisplayClass105_0_o *this,
        int64_t hp,
        const MethodInfo *method)
{
  return this->fields.totalDamage >= hp;
}