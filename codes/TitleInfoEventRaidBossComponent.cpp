void TitleInfoEventRaidBossComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct TitleInfoEventRaidBossComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct TitleInfoEventRaidBossComponent_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct TitleInfoEventRaidBossComponent_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  TitleInfoEventRaidBossComponent_c *v32; // x8
  struct TitleInfoEventRaidBossComponent_StaticFields *v33; // x9
  struct TitleInfoEventRaidBossComponent_StaticFields *v34; // x8

  if ( (byte_5936F53 & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_13108/*"SaveKeyStartRaidClearAnimation"*/);
    sub_21FFC50(&StringLiteral_24082/*"raid_boss_icon_"*/);
    sub_21FFC50(&StringLiteral_15055/*"TitleInfoEventRaidBossEffect_Dead"*/);
    sub_21FFC50(&StringLiteral_24083/*"raid_boss_icon_last_"*/);
    byte_5936F53 = 1;
  }
  v7 = StringLiteral_24082/*"raid_boss_icon_"*/;
  TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_24082/*"raid_boss_icon_"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_24083/*"raid_boss_icon_last_"*/;
  static_fields = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  static_fields->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_24083/*"raid_boss_icon_last_"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_15055/*"TitleInfoEventRaidBossEffect_Dead"*/;
  v17 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v17->RAIDBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15055/*"TitleInfoEventRaidBossEffect_Dead"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->RAIDBOSS_CLEAR_EFFECT_PREFAB, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_13108/*"SaveKeyStartRaidClearAnimation"*/;
  v25 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v25->SAVEKEY_START_RAID_CLEAR_ANIMATION = (struct System_String_o *)StringLiteral_13108/*"SaveKeyStartRaidClearAnimation"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v25->SAVEKEY_START_RAID_CLEAR_ANIMATION,
    v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = TitleInfoEventRaidBossComponent_TypeInfo;
  v33 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v33->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v33->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v34 = v32->static_fields;
  *(_OWORD *)&v34->ANIM_DURATION_FRAME_IN_BOSS = xmmword_E937B0;
  *(_QWORD *)&v34->REST_TIME_UPDATE_INTERVAL_SEC = 0xE23F800000LL;
  *(_QWORD *)&v34->CLEAR_END_CALLBACK_DELAY = 0x3FC000003F000000LL;
  v34->CLEAR_END_CALLBACK_DELAY_NORMAL = 1.0;
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
  __int64 v3; // x1
  __int64 v4; // x2
  TitleInfoEventRaidBossComponent_c *v5; // x0
  BalanceConfig_c *v6; // x8
  int32_t warId; // w22
  float CLEAR_END_CALLBACK_DELAY_NORMAL; // s8
  TitleInfoEventRaidBossComponent_c *v9; // x0
  float *p_CLEAR_END_CALLBACK_DELAY; // x8
  TitleInfoEventRaidBossComponent_c *v11; // x0

  if ( (byte_5936F4B & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_10287/*"OnEndClearAnimation"*/);
    byte_5936F4B = 1;
  }
  TitleInfoEventRaidBossComponent__OnStartFadeOutAnimation(this, method);
  v5 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v3, v4);
    v5 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  v6 = BalanceConfig_TypeInfo;
  warId = this->fields.warId;
  CLEAR_END_CALLBACK_DELAY_NORMAL = v5->static_fields->CLEAR_END_CALLBACK_DELAY_NORMAL;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v3, v4);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( warId == v6->static_fields->FesWarId )
  {
    if ( !this->fields.isJumbleRaid )
    {
      v9 = TitleInfoEventRaidBossComponent_TypeInfo;
      if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v3, v4);
        v9 = TitleInfoEventRaidBossComponent_TypeInfo;
      }
      p_CLEAR_END_CALLBACK_DELAY = &v9->static_fields->CLEAR_END_CALLBACK_DELAY;
LABEL_16:
      CLEAR_END_CALLBACK_DELAY_NORMAL = *p_CLEAR_END_CALLBACK_DELAY;
      goto LABEL_17;
    }
LABEL_13:
    v11 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v3, v4);
      v11 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    p_CLEAR_END_CALLBACK_DELAY = &v11->static_fields->CLEAR_END_CALLBACK_DELAY_JUMBLE_RAID;
    goto LABEL_16;
  }
  if ( this->fields.isJumbleRaid )
    goto LABEL_13;
LABEL_17:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10287/*"OnEndClearAnimation"*/,
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

  if ( (byte_5936F4E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_long____91524800);
    sub_21FFC50(&System_Func_long__bool__TypeInfo);
    sub_21FFC50(&Method_TitleInfoEventRaidBossComponent___c__DisplayClass105_0__GetAiModeName_b__0__);
    sub_21FFC50(&TitleInfoEventRaidBossComponent___c__DisplayClass105_0_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5936F4E = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(TitleInfoEventRaidBossComponent___c__DisplayClass105_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_13;
  eventRaidEntity = this->fields.eventRaidEntity;
  v5[1].klass = (Il2CppClass *)totalDamage;
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
  v11 = (System_Func_long__bool__o *)sub_21FFEBC(System_Func_long__bool__TypeInfo);
  System_Func_long__bool____ctor(
    v11,
    v5,
    Method_TitleInfoEventRaidBossComponent___c__DisplayClass105_0__GetAiModeName_b__0__,
    0);
  v6 = System_Linq_Enumerable__Count_long__59012976(
         splitHp,
         (System_Func_TSource__bool__o *)v11,
         (const MethodInfo_3847770 *)Method_System_Linq_Enumerable_Count_long____91524800);
  v12 = this->fields.eventRaidEntity;
  if ( !v12 || (v13 = v12->fields.splitAiMode) == 0 )
LABEL_13:
    sub_21FFECC(v6, v7);
  if ( (unsigned int)v6 >= LODWORD(v13->max_length) )
    sub_21FFED4(v6);
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
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *Clip; // x21
  __int64 v14; // x2
  struct EventRaidEntity_o *v15; // x8
  struct TitleInfoEventRaidBossComponent_StaticFields *static_fields; // x9
  Il2CppObject *RAIDBOSS_CLEAR_EFFECT_PREFAB; // x21
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x2
  struct EventRaidEntity_o *v23; // x8
  struct TitleInfoEventRaidBossComponent_StaticFields *v24; // x9
  Il2CppObject *v25; // x20
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  TitleInfoEventRaidBossComponent_c *v32; // x0
  int32_t iconId; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5936F51 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_26544/*"{0}_{1}"*/);
    sub_21FFC50(&StringLiteral_26546/*"{0}_{1}_{2}"*/);
    byte_5936F51 = 1;
  }
  v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, animation, method);
    v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  }
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_27;
  v7 = (Il2CppObject *)*((_QWORD *)v5[11].monitor + 2);
  eventId = eventRaidEntity->fields.eventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &eventId);
  v8 = this->fields.eventRaidEntity;
  if ( !v8 )
    goto LABEL_27;
  v9 = v5;
  iconId = v8->fields.iconId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &iconId);
  v5 = (Il2CppObject *)System_String__Format_75484644((System_String_o *)StringLiteral_26546/*"{0}_{1}_{2}"*/, v7, v9, v10, 0);
  if ( !animation )
    goto LABEL_27;
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, (System_String_o *)v5, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  if ( UnityEngine_Object__op_Equality(Clip, 0, 0) )
  {
    v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, animation, v14);
    v15 = this->fields.eventRaidEntity;
    if ( !v15 )
      goto LABEL_27;
    static_fields = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
    eventId = v15->fields.eventId;
    RAIDBOSS_CLEAR_EFFECT_PREFAB = (Il2CppObject *)static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &eventId);
    v19 = System_String__Format_75484576((System_String_o *)StringLiteral_26544/*"{0}_{1}"*/, RAIDBOSS_CLEAR_EFFECT_PREFAB, v18, 0);
    Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, v19, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
    if ( UnityEngine_Object__op_Equality(Clip, 0, 0) )
    {
      v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
      if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, animation, v22);
      v23 = this->fields.eventRaidEntity;
      if ( v23 )
      {
        v24 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
        eventId = v23->fields.day;
        v25 = (Il2CppObject *)v24->RAIDBOSS_CLEAR_EFFECT_PREFAB;
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &eventId);
        v27 = System_String__Format_75484576((System_String_o *)StringLiteral_26544/*"{0}_{1}"*/, v25, v26, 0);
        Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, v27, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
        if ( UnityEngine_Object__op_Equality(Clip, 0, 0) )
        {
          v32 = TitleInfoEventRaidBossComponent_TypeInfo;
          if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v30, v31);
            v32 = TitleInfoEventRaidBossComponent_TypeInfo;
          }
          return UnityEngine_Animation__GetClip(animation, v32->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB, 0);
        }
        return (UnityEngine_AnimationClip_o *)Clip;
      }
LABEL_27:
      sub_21FFECC(v5, animation);
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
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Object_object__58323140; // x21
  __int64 v14; // x2
  struct EventRaidEntity_o *v15; // x8
  struct TitleInfoEventRaidBossComponent_StaticFields *static_fields; // x9
  Il2CppObject *RAIDBOSS_CLEAR_EFFECT_PREFAB; // x21
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x2
  struct EventRaidEntity_o *v23; // x8
  struct TitleInfoEventRaidBossComponent_StaticFields *v24; // x9
  Il2CppObject *v25; // x20
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  TitleInfoEventRaidBossComponent_c *v32; // x0
  int32_t iconId; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5936F50 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_26544/*"{0}_{1}"*/);
    sub_21FFC50(&StringLiteral_26546/*"{0}_{1}_{2}"*/);
    byte_5936F50 = 1;
  }
  v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, mapAssetData, method);
    v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  }
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_27;
  v7 = (Il2CppObject *)*((_QWORD *)v5[11].monitor + 2);
  eventId = eventRaidEntity->fields.eventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &eventId);
  v8 = this->fields.eventRaidEntity;
  if ( !v8 )
    goto LABEL_27;
  v9 = v5;
  iconId = v8->fields.iconId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &iconId);
  v5 = (Il2CppObject *)System_String__Format_75484644((System_String_o *)StringLiteral_26546/*"{0}_{1}_{2}"*/, v7, v9, v10, 0);
  if ( !mapAssetData )
    goto LABEL_27;
  Object_object__58323140 = AssetData__GetObject_object__58323140(
                              mapAssetData,
                              (System_String_o *)v5,
                              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58323140, 0, 0) )
  {
    v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, mapAssetData, v14);
    v15 = this->fields.eventRaidEntity;
    if ( !v15 )
      goto LABEL_27;
    static_fields = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
    eventId = v15->fields.eventId;
    RAIDBOSS_CLEAR_EFFECT_PREFAB = (Il2CppObject *)static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &eventId);
    v19 = System_String__Format_75484576((System_String_o *)StringLiteral_26544/*"{0}_{1}"*/, RAIDBOSS_CLEAR_EFFECT_PREFAB, v18, 0);
    Object_object__58323140 = AssetData__GetObject_object__58323140(
                                mapAssetData,
                                v19,
                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58323140, 0, 0) )
    {
      v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
      if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, mapAssetData, v22);
      v23 = this->fields.eventRaidEntity;
      if ( v23 )
      {
        v24 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
        eventId = v23->fields.day;
        v25 = (Il2CppObject *)v24->RAIDBOSS_CLEAR_EFFECT_PREFAB;
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &eventId);
        v27 = System_String__Format_75484576((System_String_o *)StringLiteral_26544/*"{0}_{1}"*/, v25, v26, 0);
        Object_object__58323140 = AssetData__GetObject_object__58323140(
                                    mapAssetData,
                                    v27,
                                    (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58323140, 0, 0) )
        {
          v32 = TitleInfoEventRaidBossComponent_TypeInfo;
          if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v30, v31);
            v32 = TitleInfoEventRaidBossComponent_TypeInfo;
          }
          return (UnityEngine_GameObject_o *)AssetData__GetObject_object__58323140(
                                               mapAssetData,
                                               v32->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB,
                                               (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
        }
        return (UnityEngine_GameObject_o *)Object_object__58323140;
      }
LABEL_27:
      sub_21FFECC(v5, mapAssetData);
    }
  }
  return (UnityEngine_GameObject_o *)Object_object__58323140;
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
  __int64 v2; // x2
  int v4; // w8
  int64_t result; // x0
  __int64 v6; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  bool v8; // w8
  struct EventRaidEntity_o *v9; // x8
  int64_t maxHp; // x8
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5936F3F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_TotalEventRaidMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5936F3F = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  result = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_TotalEventRaidMaster___);
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity || !result )
    goto LABEL_14;
  v8 = TotalEventRaidMaster__TryGetEntity(
         (TotalEventRaidMaster_o *)result,
         &entity,
         this->fields.eventId,
         eventRaidEntity->fields.day,
         0);
  result = 0;
  if ( !v8 )
    return result;
  v9 = this->fields.eventRaidEntity;
  if ( !v9 || !entity )
LABEL_14:
    sub_21FFECC(result, v6);
  maxHp = v9->fields.maxHp;
  if ( maxHp >= entity->fields.totalDamage )
    return entity->fields.totalDamage;
  else
    return maxHp;
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
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *v19; // x19
  Il2CppObject *NumberFormat_48211828; // x1
  System_String_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  System_String_o *v24; // x19
  System_String_o *v25; // x19
  System_String_o *v26; // x19
  int64_t v27; // [xsp+0h] [xbp-40h] BYREF
  int64_t v28; // [xsp+8h] [xbp-38h] BYREF

  v28 = totalHp;
  if ( (byte_5936F4F & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    sub_21FFC50(&StringLiteral_5894/*"EVENT_RAID_REST_COUNT_AFTER"*/);
    sub_21FFC50(&StringLiteral_5895/*"EVENT_RAID_REST_COUNT_BEFORE"*/);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    sub_21FFC50(&StringLiteral_5787/*"EVENT_DEFEAT_COUNT_TXT"*/);
    sub_21FFC50(&StringLiteral_13979/*"TITLE_INFO_RAID_TOTALHP"*/);
    byte_5936F4F = 1;
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity )
  {
    CountFormat = EventBossStatusUiEntity__GetCountFormat(eventBossStatusUiEntity, 0);
    if ( !System_String__IsNullOrEmpty(CountFormat, 0) )
    {
      v19 = System_Int64__ToString((int64_t)&v28, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
      NumberFormat_48211828 = (Il2CppObject *)LocalizationManager__GetNumberFormat_48211828(v19, 0);
      v21 = CountFormat;
      return System_String__Format(v21, NumberFormat_48211828, 0);
    }
  }
  if ( !this->fields.isJumbleRaid && !this->fields.isSingleRaid )
  {
    if ( this->fields.isRaidDefeatCount && !this->fields.isTimeLimitRaid )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, totalHp, totalDamage);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5787/*"EVENT_DEFEAT_COUNT_TXT"*/, 0);
      v27 = totalDamage;
      NumberFormat_48211828 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v27);
      v21 = v26;
    }
    else
    {
      v24 = System_Int64__ToString((int64_t)&v28, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
      v25 = LocalizationManager__GetNumberFormat_48211828(v24, 0);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13979/*"TITLE_INFO_RAID_TOTALHP"*/, 0);
      NumberFormat_48211828 = (Il2CppObject *)v25;
    }
    return System_String__Format(v21, NumberFormat_48211828, 0);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, totalHp, totalDamage);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5895/*"EVENT_RAID_REST_COUNT_BEFORE"*/, 0);
  v10 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_75515664(v10, v9, 0);
  if ( !v10 )
    sub_21FFECC(v11, v12);
  System_Text_StringBuilder__Append_75521760(v10, (System_String_o *)StringLiteral_113/*" "*/, 0);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5894/*"EVENT_RAID_REST_COUNT_AFTER"*/, 0);
  v27 = totalHp;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v27);
  v15 = System_String__Format(v13, v14, 0);
  System_Text_StringBuilder__Append_75521760(v10, v15, 0);
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

  v2 = 289;
  if ( !this->fields.isRaidDefeatCount )
    v2 = 268;
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
    sub_21FFECC(0, method);
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
  __int64 v8; // x2
  struct EventRaidEntity_o *v9; // x8
  int32_t eventId; // w19
  int32_t day; // w20

  if ( (byte_5936F49 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5936F49 = 1;
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
    eventRaidEntity = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( eventRaidEntity )
      return clsQuestCheck__IsQuestClear(eventRaidEntity, raidDeadQuestId, 0, 0) || this->fields.isJumbleRaid;
LABEL_20:
    sub_21FFECC(eventRaidEntity, *(_QWORD *)&raidDeadQuestId);
  }
  eventRaidEntity = (clsQuestCheck_o *)this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_20;
  eventRaidEntity = (clsQuestCheck_o *)EventRaidEntity__IsJustDefeated((EventRaidEntity_o *)eventRaidEntity, 0);
  if ( ((unsigned __int8)eventRaidEntity & 1) == 0 )
    return 0;
  v9 = this->fields.eventRaidEntity;
  if ( !v9 )
    goto LABEL_20;
  eventId = this->fields.eventId;
  day = v9->fields.day;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&raidDeadQuestId, v8);
  return !TerminalPramsManager__IsPlayedEventRaidDefeatedEffect(eventId, day, 0);
}


// local variable allocation has failed, the output may be wrong!
bool TitleInfoEventRaidBossComponent__IsTargetRaid(
        TitleInfoEventRaidBossComponent_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  struct EventRaidEntity_o *eventRaidEntity; // x8

  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    sub_21FFECC(this, *(_QWORD *)&eventId);
  return eventRaidEntity->fields.eventId == eventId && eventRaidEntity->fields.day == day;
}


bool TitleInfoEventRaidBossComponent__IsTerminalSceneRefreshRequest(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  struct EventRaidEntity_o *eventRaidEntity; // x8
  int64_t maxHp; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x8
  char v8; // w20
  QuestBoardListViewManager_o *ObjectList; // x0
  ListViewSort_c *klass; // x8
  __int64 v11; // x8
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x21
  QuestBoardListViewItem_o *Item; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Master_object; // x22
  QuestBoardListViewItem_o *v19; // x0
  __int64 v20; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  System_Object_array *ListByQuestID; // x21
  System_Func_object__bool__o *v23; // x22
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5936F52 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_QuestReleaseEntity____91485104);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_21FFC50(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&Method_TitleInfoEventRaidBossComponent__IsTerminalSceneRefreshRequest_b__113_0__);
    byte_5936F52 = 1;
  }
  eventRaidEntity = this->fields.eventRaidEntity;
  memset(&v26, 0, sizeof(v26));
  if ( eventRaidEntity )
  {
    maxHp = eventRaidEntity->fields.maxHp;
    v7 = maxHp - TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(this, method);
    v8 = 0;
    if ( v7 <= 0 && this->fields.isFolderRaid )
    {
      if ( this->fields.initDispHp <= 0 )
      {
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v6);
        if ( !byte_5931EF0 )
        {
          sub_21FFC50(&TerminalSceneComponent_TypeInfo);
          byte_5931EF0 = 1;
        }
        ObjectList = (QuestBoardListViewManager_o *)TerminalSceneComponent_TypeInfo;
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v6);
          ObjectList = (QuestBoardListViewManager_o *)TerminalSceneComponent_TypeInfo;
        }
        klass = ObjectList->fields.sort->klass;
        if ( !klass
          || (v11 = *(_QWORD *)&klass->_2.element_size) == 0
          || (ObjectList = *(QuestBoardListViewManager_o **)(v11 + 328)) == 0
          || (ObjectList = (QuestBoardListViewManager_o *)QuestBoardListViewManager__get_ObjectList(ObjectList, 0)) == 0 )
        {
          sub_21FFECC(ObjectList, v5);
        }
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v25,
          (System_Collections_Generic_List_object__o *)ObjectList,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
        v26 = v25;
        v25.fields._list = 0;
        *(_QWORD *)&v25.fields._index = &v26;
        while ( 1 )
        {
          v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v26,
                  (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
          v8 = v12;
          if ( !v12 )
            break;
          current = v26.fields._current;
          if ( !v26.fields._current )
            sub_21FFECC(v12, v13);
          Item = QuestBoardListViewObject__GetItem((QuestBoardListViewObject_o *)v26.fields._current, 0);
          if ( !Item )
            sub_21FFECC(0, v16);
          if ( Item->fields._quest_info_k__BackingField )
          {
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16, v17);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
            v19 = QuestBoardListViewObject__GetItem((QuestBoardListViewObject_o *)current, 0);
            if ( !v19 )
              sub_21FFECC(0, v20);
            quest_info_k__BackingField = v19->fields._quest_info_k__BackingField;
            if ( !quest_info_k__BackingField )
              sub_21FFECC(v19, v20);
            if ( !Master_object )
              sub_21FFECC(v19, v20);
            ListByQuestID = (System_Object_array *)QuestReleaseMaster__getListByQuestID(
                                                     (QuestReleaseMaster_o *)Master_object,
                                                     quest_info_k__BackingField->fields.questId,
                                                     0);
            v23 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_QuestReleaseEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v23,
              (Il2CppObject *)this,
              Method_TitleInfoEventRaidBossComponent__IsTerminalSceneRefreshRequest_b__113_0__,
              0);
            if ( BasicHelper__Any_object__58575580(
                   ListByQuestID,
                   (System_Func_T__bool__o *)v23,
                   (const MethodInfo_37DCADC *)Method_BasicHelper_Any_QuestReleaseEntity____91485104) )
            {
              break;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v26,
          (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
      }
      else
      {
        v8 = 1;
      }
    }
  }
  else
  {
    v8 = 0;
  }
  return v8 & 1;
}


void TitleInfoEventRaidBossComponent__OnDestroy(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoEventRaidBossComponent__OnEndAnimation(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *animEndCall; // x20
  const MethodInfo *v10; // x1

  animEndCall = this->fields.animEndCall;
  this->fields.animEndCall = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.animEndCall, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndCall, 0);
  TitleInfoEventRaidBossComponent__SetDisp(this, v10);
}


void TitleInfoEventRaidBossComponent__OnEndClearAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  struct EventRaidEntity_o *clearRaidBossEventRaidEntity; // x8
  int32_t eventId; // w20
  int32_t day; // w21
  __int64 v8; // x1
  __int64 v9; // x2
  TitleInfoEventRaidBossComponent_c *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_5936F4D & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TitleInfoEventRaidBossComponent_TypeInfo);
    byte_5936F4D = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_5935A25 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935A25 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( !v4->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v4, method, v2);
    TerminalPramsManager__LoadEventRaidDefeatedEffectInfo(0);
  }
  clearRaidBossEventRaidEntity = this->fields.clearRaidBossEventRaidEntity;
  if ( !clearRaidBossEventRaidEntity )
    sub_21FFECC(v4, method);
  eventId = this->fields.eventId;
  day = clearRaidBossEventRaidEntity->fields.day;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  TerminalPramsManager__UpdateEventRaidDefeatedEffectInfo(eventId, day, 0);
  TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(0);
  v10 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v8, v9);
    v10 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v10->static_fields->SAVEKEY_START_RAID_CLEAR_ANIMATION, 0);
  UnityEngine_PlayerPrefs__Save(0);
  TitleInfoEventRaidBossComponent__OnEndAnimation(this, v11);
}


void TitleInfoEventRaidBossComponent__OnStartFadeOutAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *onClearCall; // x20
  __int64 v10; // x1
  UnityEngine_Component_o *raidBossIconSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  TitleInfoEventRaidBossComponent_c *v15; // x8
  UnityEngine_GameObject_o *v16; // x19

  if ( (byte_5936F4C & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_21FFC50(&Method_UITweener_Begin_TweenAlpha___);
    byte_5936F4C = 1;
  }
  onClearCall = this->fields.onClearCall;
  this->fields.onClearCall = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onClearCall, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(onClearCall, 0);
  raidBossIconSp = (UnityEngine_Component_o *)this->fields.raidBossIconSp;
  this->fields.isRaidClear = 1;
  if ( !raidBossIconSp )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(raidBossIconSp, 0);
  v15 = TitleInfoEventRaidBossComponent_TypeInfo;
  v16 = gameObject;
  if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v13, v14);
    v15 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  raidBossIconSp = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                v16,
                                                v15->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                (const MethodInfo_39D1264 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !raidBossIconSp )
LABEL_8:
    sub_21FFECC(raidBossIconSp, v10);
  LODWORD(raidBossIconSp[1].monitor) = 1;
  raidBossIconSp[5].monitor = (void *)1065353216;
}


void TitleInfoEventRaidBossComponent__PlayFrameInBoss(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *Child; // x0
  __int64 v6; // x1
  float ANIM_DURATION_FRAME_IN_BOSS; // s8
  TitleInfoEventRaidBossComponent_c *v8; // x0
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x2
  float32x2_t v11; // d8
  UnityEngine_Component_o *v12; // x20
  float z; // s9
  float32x2_t *static_fields; // x8
  float v15; // s1
  UnityEngine_GameObject_o *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t v23; // w1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  if ( (byte_5936F45 & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_21FFC50(&Method_UITweener_Begin_TweenPosition___);
    sub_21FFC50(&StringLiteral_11093/*"PlayHpNameAlpha"*/);
    byte_5936F45 = 1;
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
    v8 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, method, v2);
      v8 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    ANIM_DURATION_FRAME_IN_BOSS = v8->static_fields->ANIM_DURATION_FRAME_IN_BOSS;
  }
  this->fields.isStartedFrameIn = 1;
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Child = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                       v9,
                                       ANIM_DURATION_FRAME_IN_BOSS,
                                       (const MethodInfo_39D1264 *)Method_UITweener_Begin_TweenPosition___);
  v11.n64_u64[0] = *(unsigned __int64 *)&this->fields.originPos.fields.x;
  v12 = Child;
  z = this->fields.originPos.fields.z;
  if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v6, v10);
  if ( !v12 )
LABEL_16:
    sub_21FFECC(Child, v6);
  static_fields = (float32x2_t *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v15 = z + static_fields[5].n64_f32[0];
  v12[5].monitor = (void *)vadd_f32(v11, static_fields[4]).n64_u64[0];
  *(float *)&v12[5].fields.m_CachedPtr = v15;
  *(float *)&static_fields = this->fields.originPos.fields.z;
  *(intptr_t *)((char *)&v12[5].fields.m_CachedPtr + 4) = *(_QWORD *)&this->fields.originPos.fields.x;
  HIDWORD(v12[6].klass) = (_DWORD)static_fields;
  LODWORD(v12[1].monitor) = 2;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v12[3].monitor = v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12[3].monitor, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_11093/*"PlayHpNameAlpha"*/;
  v12[3].fields.m_CachedPtr = StringLiteral_11093/*"PlayHpNameAlpha"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12[3].fields, v23, v24, v25, v26, v27, v28, v29);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v10; // x2
  Il2CppClass *v11; // x9
  Il2CppObject *v12; // x20
  TitleInfoEventRaidBossComponent_c *v13; // x0
  float32x2_t v14; // d8
  float z; // s9
  float32x2_t *static_fields; // x8
  float32x2_t v17; // d0
  float v18; // s1
  UnityEngine_GameObject_o *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_5936F46 & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_21FFC50(&Method_UITweener_Begin_TweenPosition___);
    byte_5936F46 = 1;
  }
  v5 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, isQuick, method);
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
         (const MethodInfo_39D1264 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v8 )
    sub_21FFECC(0, v9);
  v11 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  v12 = v8;
  v13 = TitleInfoEventRaidBossComponent_TypeInfo;
  *(float *)&v12[8].monitor = this->fields.originPos.fields.z;
  v12[8].klass = v11;
  v14.n64_u64[0] = *(unsigned __int64 *)&this->fields.originPos.fields.x;
  z = this->fields.originPos.fields.z;
  if ( !*(&v13->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v13, v9, v10);
    v13 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v13->static_fields;
  v17.n64_u64[0] = static_fields[4].n64_u64[0];
  v18 = static_fields[5].n64_f32[0];
  LODWORD(v12[2].klass) = 2;
  *(float32x2_t *)((char *)&v12[8].monitor + 4) = vadd_f32(v14, v17);
  *((float *)&v12[9].klass + 1) = z + v18;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v12[5].klass = (Il2CppClass *)v19;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12[5], (int32_t)v19, v20, v21, v22, v23, v24, v25);
}


void TitleInfoEventRaidBossComponent__PlayHpCut(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  TitleInfoEventRaidBossComponent_c *v7; // x8
  EasingObject_o *v8; // x20
  TitleInfoEventRaidBossComponent___c_c *v9; // x0
  float ANIM_DURATION_HP_CUT; // s8
  struct TitleInfoEventRaidBossComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__96_0; // x21
  Il2CppObject *v13; // x22
  struct TitleInfoEventRaidBossComponent___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Action_o *v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1

  if ( (byte_5936F47 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_21FFC50(&Method_TitleInfoEventRaidBossComponent_PlayHpDeletion__);
    sub_21FFC50(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_21FFC50(&Method_TitleInfoEventRaidBossComponent___c__PlayHpCut_b__96_0__);
    sub_21FFC50(&TitleInfoEventRaidBossComponent___c_TypeInfo);
    byte_5936F47 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  v7 = TitleInfoEventRaidBossComponent_TypeInfo;
  v8 = (EasingObject_o *)Component_object;
  if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v5, v6);
    v7 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  v9 = TitleInfoEventRaidBossComponent___c_TypeInfo;
  ANIM_DURATION_HP_CUT = v7->static_fields->ANIM_DURATION_HP_CUT;
  if ( !*(&TitleInfoEventRaidBossComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent___c_TypeInfo, v5, v6);
    v9 = TitleInfoEventRaidBossComponent___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__96_0 = static_fields->__9__96_0;
  if ( !_9__96_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v5, v6);
      static_fields = TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__96_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__96_0, v13, Method_TitleInfoEventRaidBossComponent___c__PlayHpCut_b__96_0__, 0);
    v14 = TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields;
    v14->__9__96_0 = _9__96_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__96_0, (int32_t)_9__96_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_TitleInfoEventRaidBossComponent_PlayHpDeletion__, 0);
  if ( !v8 )
    sub_21FFECC(v22, v23);
  EasingObject__Play(v8, ANIM_DURATION_HP_CUT, _9__96_0, v21, 0.0, 0, 0);
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
  int64_t v10; // x21
  const MethodInfo *v11; // x3
  int64_t v12; // x2
  struct EventRaidEntity_o *v13; // x8
  int64_t v14; // x9
  UILabel_o *useTotalLabel; // x21
  bool IsJumbleSingleRaid; // w0
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *clearBossEffect; // x20
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  Il2CppObject *v28; // x21
  Il2CppObject *v29; // x20
  struct EventRaidEntity_o *v30; // x1
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x2
  Il2CppObject *Component_object; // x20
  const MethodInfo *v35; // x1
  System_Action_o *v36; // x21
  System_Action_o *v37; // x21
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7

  if ( (byte_5936F48 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_TitleInfoEventRaidBossComponent_OnEndClearAnimation__);
    sub_21FFC50(&Method_TitleInfoEventRaidBossComponent_OnStartFadeOutAnimation__);
    byte_5936F48 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !this->fields.eventRaidEntity )
    goto LABEL_41;
  v5 = (EventRaidMaster_o *)Instance;
  Instance = (DataManager_o *)EventRaidEntity__IsJumbleSingleRaid(this->fields.eventRaidEntity, 0);
  eventId = (unsigned int)this->fields.eventId;
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !eventRaidEntity || !v5 )
      goto LABEL_41;
    RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(v5, eventId, eventRaidEntity->fields.groupIndex, 0);
  }
  else
  {
    if ( !eventRaidEntity || !v5 )
      goto LABEL_41;
    RaidGroupDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(v5, eventId, eventRaidEntity->fields.day, 0);
  }
  userEventRaidEntity = this->fields.userEventRaidEntity;
  v9 = RaidGroupDeadQuestId;
  v10 = userEventRaidEntity ? userEventRaidEntity->fields.damage : 0LL;
  Instance = (DataManager_o *)this->fields.eventRaidEntity;
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)EventRaidEntity__getTotalEventRaidEntity((EventRaidEntity_o *)Instance, 0);
  v12 = Instance ? (int64_t)Instance->fields.m_CancellationTokenSource : 0LL;
  v13 = this->fields.eventRaidEntity;
  if ( !v13
    || (v14 = v12 + v10,
        useTotalLabel = this->fields.useTotalLabel,
        Instance = (DataManager_o *)TitleInfoEventRaidBossComponent__GetRestCountText(
                                      this,
                                      (v13->fields.maxHp - v14) & ~((v13->fields.maxHp - v14) >> 63),
                                      v12,
                                      v11),
        !useTotalLabel)
    || (UILabel__set_text(useTotalLabel, (System_String_o *)Instance, 0),
        (Instance = (DataManager_o *)this->fields.eventRaidEntity) == 0) )
  {
LABEL_41:
    sub_21FFECC(Instance, eventId);
  }
  IsJumbleSingleRaid = EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)Instance, 0);
  if ( TitleInfoEventRaidBossComponent__IsPlayClearAnimation(this, v9, IsJumbleSingleRaid, v17) )
  {
    clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
    v28 = 0;
    if ( UnityEngine_Object__op_Inequality(clearBossEffect, 0, 0) )
    {
      v29 = (Il2CppObject *)this->fields.clearBossEffect;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
      v28 = UnityEngine_Object__Instantiate_object_(
              v29,
              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v28, (UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v28, 0);
    }
    v30 = this->fields.eventRaidEntity;
    this->fields.isEncountRaidBoss = 0;
    this->fields.clearRaidBossEventRaidEntity = v30;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.clearRaidBossEventRaidEntity,
      (int32_t)v30,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31, v32);
    Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0, 0);
    Component_object = 0;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v28 )
        goto LABEL_41;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v28,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, eventId, v33);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      v36 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v36,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaidBossComponent_OnStartFadeOutAnimation__,
        0);
      if ( Component_object )
      {
        CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v36, 0);
        v37 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(v37, (Il2CppObject *)this, Method_TitleInfoEventRaidBossComponent_OnEndClearAnimation__, 0);
        Component_object[2].monitor = v37;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&Component_object[2].monitor,
          (int32_t)v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
        return;
      }
      goto LABEL_41;
    }
    TitleInfoEventRaidBossComponent__SetClearAlpha(this, v35);
  }
  else
  {
    TitleInfoEventRaidBossComponent__OnEndAnimation(this, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *v13; // x22
  UISprite_o *v14; // x21
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX; // x22
  System_String_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *v19; // x20

  if ( (byte_5936F3B & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&TitleInfoEventRaidBossComponent_TypeInfo);
    byte_5936F3B = 1;
  }
  if ( isLastBattle )
  {
    v7 = TitleInfoEventRaidBossComponent_TypeInfo;
    raidBossIconSp = this->fields.raidBossIconSp;
    if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, eventRaidEnt, isLastBattle);
    if ( !eventRaidEnt )
      goto LABEL_19;
    RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX = TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX;
    v10 = System_Int32__ToString((int)eventRaidEnt + 72, 0);
    v13 = System_String__Concat_75438412(RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX, v10, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11, v12);
    if ( AtlasManager__SetEventUI(raidBossIconSp, v13, 0) )
      goto LABEL_16;
  }
  v7 = TitleInfoEventRaidBossComponent_TypeInfo;
  v14 = this->fields.raidBossIconSp;
  if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, eventRaidEnt, isLastBattle);
  if ( !eventRaidEnt )
    goto LABEL_19;
  RAIDBOSS_ICON_SPNAME_PREFIX = TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX;
  v16 = System_Int32__ToString((int)eventRaidEnt + 72, 0);
  v19 = System_String__Concat_75438412(RAIDBOSS_ICON_SPNAME_PREFIX, v16, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17, v18);
  if ( AtlasManager__SetEventUI(v14, v19, 0) )
  {
LABEL_16:
    v7 = this->fields.raidBossIconSp;
    if ( v7 )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v7 + 840LL))(v7, *(_QWORD *)(*(_QWORD *)v7 + 848LL));
      return;
    }
LABEL_19:
    sub_21FFECC(v7, eventRaidEnt);
  }
}


void TitleInfoEventRaidBossComponent__SetClearAlpha(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventRaidBossComponent_c *v4; // x0
  BalanceConfig_c *v5; // x8
  int32_t warId; // w21
  float CLEAR_CALLBACK_DELAY; // s8
  UnityEngine_Object_o *clearBossEffect; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *ClearBossAnimClip; // x20
  __int64 v16; // x2
  float length; // s8
  TitleInfoEventRaidBossComponent_c *v18; // x0
  struct TitleInfoEventRaidBossComponent_StaticFields *static_fields; // x8

  if ( (byte_5936F4A & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_5493/*"DoClearCallback"*/);
    byte_5936F4A = 1;
  }
  v4 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, method, v2);
    v4 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  v5 = BalanceConfig_TypeInfo;
  warId = this->fields.warId;
  CLEAR_CALLBACK_DELAY = v4->static_fields->CLEAR_CALLBACK_DELAY;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v5 = BalanceConfig_TypeInfo;
  }
  if ( warId != v5->static_fields->FesWarId && !this->fields.isJumbleRaid )
  {
    clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    Component_object = 0;
    if ( UnityEngine_Object__op_Inequality(clearBossEffect, 0, 0) )
    {
      v12 = this->fields.clearBossEffect;
      if ( !v12 )
        goto LABEL_29;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v12,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    ClearBossAnimClip = 0;
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      ClearBossAnimClip = (UnityEngine_Object_o *)TitleInfoEventRaidBossComponent__GetClearBossAnimClip(
                                                    this,
                                                    (UnityEngine_Animation_o *)Component_object,
                                                    v14);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(ClearBossAnimClip, 0, 0);
    length = 0.0;
    if ( ((unsigned __int8)v12 & 1) == 0 )
      goto LABEL_23;
    if ( ClearBossAnimClip )
    {
      length = UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)ClearBossAnimClip, 0);
LABEL_23:
      v18 = TitleInfoEventRaidBossComponent_TypeInfo;
      if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v9, v16);
        v18 = TitleInfoEventRaidBossComponent_TypeInfo;
      }
      static_fields = v18->static_fields;
      if ( (float)(length - static_fields->CLEAR_END_CALLBACK_DELAY_NORMAL) >= 0.0 )
        CLEAR_CALLBACK_DELAY = length - static_fields->CLEAR_END_CALLBACK_DELAY_NORMAL;
      else
        CLEAR_CALLBACK_DELAY = 0.0;
      goto LABEL_28;
    }
LABEL_29:
    sub_21FFECC(v12, v9);
  }
LABEL_28:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5493/*"DoClearCallback"*/,
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  int64_t totalDamage; // x9
  float64x2_t v16; // q0
  struct EventRaidEntity_o *v17; // x9
  float64x2_t v23; // q0
  unsigned __int64 v24; // d0
  _BOOL4 isJumbleRaid; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5936F42 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5936F42 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity || !Instance )
    goto LABEL_25;
  TotalEventRaidMaster__TryGetEntity(
    (TotalEventRaidMaster_o *)Instance,
    &entity,
    this->fields.eventId,
    eventRaidEntity->fields.day,
    0);
  this->fields.onClearCall = onClearCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClearCall,
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
    v16.n128_f64[0] = (double)totalDamage;
    userEventRaidEntity = (struct UserEventRaidEntity_o *)((char *)userEventRaidEntity + totalDamage);
  }
  else
  {
    v16.n128_u64[0] = 0;
  }
  v17 = this->fields.eventRaidEntity;
  if ( !v17 )
    goto LABEL_25;
  Instance = (DataManager_o *)this->fields.useBarSlider;
  v16.n128_f64[1] = (double)(__int64)userEventRaidEntity;
  __asm { FMOV            V1.2D, #1.0 }
  v23 = vsubq_f64(_Q1, vdivq_f64(v16, vdupq_lane_s64(COERCE__INT64((double)v17->fields.maxHp), 0)));
  __asm { FMOV            V1.2S, #1.0 }
  v23.n128_u64[0] = vcvt_f32_f64(v23).n64_u64[0];
  v24 = vbic_s8(
          vbsl_s8(
            vcgt_f32((float32x2_t)v23.n128_u64[0], (float32x2_t)_Q1.n128_u64[0]),
            (int8x8_t)_Q1.n128_u64[0],
            (int8x8_t)v23.n128_u64[0]),
          vcltz_f32((float32x2_t)v23.n128_u64[0])).n64_u64[0];
  *(_QWORD *)&this->fields.HPfrom = v24;
  if ( !Instance )
    goto LABEL_25;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, *(float *)&v24, 0);
  Instance = (DataManager_o *)this->fields.defeatCntBarSliderWhite;
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (DataManager_o *)this->fields.defeatCntBarSliderWhite;
  if ( !Instance )
    goto LABEL_25;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, this->fields.HPfrom, 0);
  Instance = (DataManager_o *)this->fields.defeatCntBarSliderWhite;
  if ( !Instance )
    goto LABEL_25;
  UIProgressBar__set_alpha((UIProgressBar_o *)Instance, 0.0, 0);
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_25;
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
LABEL_25:
    sub_21FFECC(Instance, v6);
  }
}


void TitleInfoEventRaidBossComponent__SetDisp(TitleInfoEventRaidBossComponent_o *this, const MethodInfo *method)
{
  _BOOL4 isEncountRaidBoss; // w9
  _BOOL4 isRaidDefeatCount; // w8
  bool *p_isRaidDefeatCount; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v7; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  struct EventRaidEntity_o *v11; // x8
  struct System_Int64_array *splitHp; // x8
  unsigned int max_length; // w20
  _BOOL4 v15; // w21
  struct UISprite_array *hpBarSplitters; // x26
  struct UISprite_array *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x2
  UnityEngine_Component_o *v25; // x21
  unsigned int v26; // w27
  __int64 v27; // x24
  struct UISprite_array *v28; // x22
  Il2CppObject *defeatCntBarSplitter; // x23
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  Il2CppClass *v36; // x23
  __int64 v37; // x1
  struct UISprite_array *v38; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  UISprite_o *v46; // x23
  struct EventRaidEntity_o *v47; // x8
  struct System_Int64_array *v48; // x9
  struct UISprite_array *v49; // x10
  __int64 v50; // d9
  __int64 maxHp; // d10
  float barSizeX; // s8
  float v53; // s0
  float r; // s10
  float g; // s11
  float b; // s9
  float a; // s8
  struct EventRaidEntity_o *v58; // x8
  __int64 v59; // x22
  const MethodInfo *v60; // x2
  __int64 RaidBossTotalDamage; // x20
  UILabel_o *modeName; // x21
  const MethodInfo *v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  const MethodInfo *v66; // x3
  UILabel_o *useTotalLabel; // x21
  const MethodInfo *v68; // x2
  UnityEngine_Object_o *bossName; // x21
  const MethodInfo *v70; // x2
  struct EventRaidEntity_o *v71; // x8
  float v72; // s0
  struct EventRaidEntity_o *v73; // x8
  const MethodInfo *v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  UnityEngine_Object_o *v77; // x20
  const MethodInfo *v78; // x2
  const MethodInfo *v79; // x2
  __int64 v80; // x0
  bool *v81; // [xsp+0h] [xbp-90h]
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5936F3E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&UISprite___TypeInfo);
    byte_5936F3E = 1;
  }
  isEncountRaidBoss = this->fields.isEncountRaidBoss;
  isRaidDefeatCount = this->fields.isRaidDefeatCount;
  entity = 0;
  if ( isEncountRaidBoss )
  {
    p_isRaidDefeatCount = &this->fields.isRaidDefeatCount;
    if ( !isRaidDefeatCount )
      goto LABEL_9;
  }
  else
  {
    if ( !isRaidDefeatCount )
      return;
    p_isRaidDefeatCount = &this->fields.isRaidDefeatCount;
  }
  this->fields.isDefeatRaidDisp = 1;
LABEL_9:
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_93;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_93;
  if ( !Instance )
    goto LABEL_93;
  TotalEventRaidMaster__TryGetEntity(
    (TotalEventRaidMaster_o *)Instance,
    &entity,
    this->fields.eventId,
    eventRaidEntity->fields.day,
    0);
  TitleInfoEventRaidBossComponent__SetBossIcon(this, this->fields.eventRaidEntity, this->fields.isLastBattleRelease, v9);
  v11 = this->fields.eventRaidEntity;
  if ( !v11 )
    goto LABEL_93;
  splitHp = v11->fields.splitHp;
  v81 = p_isRaidDefeatCount;
  if ( !splitHp )
    goto LABEL_93;
  max_length = splitHp->max_length;
  v15 = this->fields.isRaidDefeatCount && (int)max_length > 0;
  TitleInfoEventRaidBossComponent__SetHpBarSplitters(this, v15, v10);
  if ( v15 )
  {
    hpBarSplitters = this->fields.hpBarSplitters;
    if ( !hpBarSplitters )
    {
      v17 = (struct UISprite_array *)sub_21FFD10(UISprite___TypeInfo, max_length);
      this->fields.hpBarSplitters = v17;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.hpBarSplitters,
        (int32_t)v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    Instance = (DataManager_o *)GameObjectExtensions__GetParent(this->fields.defeatCntBarSplitter, 0);
    v25 = (UnityEngine_Component_o *)Instance;
    v26 = 0;
    v27 = 32;
    do
    {
      if ( !hpBarSplitters )
      {
        v28 = this->fields.hpBarSplitters;
        defeatCntBarSplitter = (Il2CppObject *)this->fields.defeatCntBarSplitter;
        if ( v26 )
        {
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v24);
          Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                        defeatCntBarSplitter,
                                        (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !Instance )
            goto LABEL_93;
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)Instance,
                                        (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( !v28 )
            goto LABEL_93;
          v36 = (Il2CppClass *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_21FFDA4(Instance, v28->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_95;
          }
          if ( v26 >= LODWORD(v28->max_length) )
            goto LABEL_94;
          *(Il2CppClass **)((char *)&v28->obj.klass + v27) = v36;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)((char *)v28 + v27),
            (int32_t)v36,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35);
          v38 = this->fields.hpBarSplitters;
          if ( !v38 )
            goto LABEL_93;
          if ( v26 >= LODWORD(v38->max_length) )
            goto LABEL_94;
          Instance = *(DataManager_o **)((char *)&v38->obj.klass + v27);
          if ( !Instance )
            goto LABEL_93;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          GameObjectExtensions__SafeSetParent(gameObject, v25, 0);
        }
        else
        {
          if ( !defeatCntBarSplitter )
            goto LABEL_93;
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        this->fields.defeatCntBarSplitter,
                                        (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( !v28 )
            goto LABEL_93;
          v46 = (UISprite_o *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_21FFDA4(Instance, v28->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_95:
              v80 = sub_21FFEF0(Instance, v37);
              sub_21FFD90(v80, 0);
            }
          }
          if ( !LODWORD(v28->max_length) )
            goto LABEL_94;
          v28->m_Items[0] = v46;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v28->m_Items, (int32_t)v46, v40, v41, v42, v43, v44, v45);
        }
      }
      v47 = this->fields.eventRaidEntity;
      if ( !v47 )
        goto LABEL_93;
      v48 = v47->fields.splitHp;
      if ( !v48 )
        goto LABEL_93;
      if ( v26 >= LODWORD(v48->max_length) )
        goto LABEL_94;
      v49 = this->fields.hpBarSplitters;
      if ( !v49 )
        goto LABEL_93;
      if ( v26 >= LODWORD(v49->max_length) )
LABEL_94:
        sub_21FFED4(Instance);
      Instance = *(DataManager_o **)((char *)&v49->obj.klass + v27);
      if ( !Instance )
        goto LABEL_93;
      v50 = *(__int64 *)((char *)&v48->obj.klass + v27);
      maxHp = v47->fields.maxHp;
      barSizeX = this->fields.barSizeX;
      Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_93;
      v83.fields.z = 0.0;
      v83.fields.y = 0.0;
      v53 = -(double)v50 / (double)maxHp;
      v83.fields.x = barSizeX * v53;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v83, 0);
      ++v26;
      v27 += 8;
    }
    while ( max_length != v26 );
  }
  Instance = (DataManager_o *)this->fields.eventBossStatusUiEntity;
  if ( Instance )
  {
    v84.fields.g = 0.035294;
    v84.fields.a = 1.0;
    v84.fields.r = 0.37647;
    v84.fields.b = 0.035294;
    TextEffectColor = EventBossStatusUiEntity__GetTextEffectColor((EventBossStatusUiEntity_o *)Instance, v84, 0);
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
  v58 = this->fields.eventRaidEntity;
  if ( !v58 )
    goto LABEL_93;
  v59 = v58->fields.maxHp;
  RaidBossTotalDamage = TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(this, v7);
  if ( this->fields.isRaidDefeatCount )
  {
    modeName = this->fields.modeName;
    Instance = (DataManager_o *)TitleInfoEventRaidBossComponent__GetAiModeName(this, RaidBossTotalDamage, v60);
    if ( !modeName )
      goto LABEL_93;
    UILabel__set_text(modeName, (System_String_o *)Instance, 0);
    v86.fields.r = r;
    v86.fields.g = g;
    v86.fields.b = b;
    v86.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, this->fields.modeName, v86, v63);
  }
  Instance = (DataManager_o *)this->fields.useTotalLabel;
  if ( !Instance )
    goto LABEL_93;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_93;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
  {
    useTotalLabel = this->fields.useTotalLabel;
    Instance = (DataManager_o *)TitleInfoEventRaidBossComponent__GetRestCountText(
                                  this,
                                  v59 - RaidBossTotalDamage,
                                  RaidBossTotalDamage,
                                  v66);
    if ( !useTotalLabel )
      goto LABEL_93;
    UILabel__set_text(useTotalLabel, (System_String_o *)Instance, 0);
    v87.fields.r = r;
    v87.fields.g = g;
    v87.fields.b = b;
    v87.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, this->fields.useTotalLabel, v87, v68);
  }
  bossName = (UnityEngine_Object_o *)this->fields.bossName;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64, v65);
  if ( UnityEngine_Object__op_Inequality(bossName, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.bossName;
    if ( !Instance )
      goto LABEL_93;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, this->fields.isJumbleRaid, 0);
    if ( this->fields.isJumbleRaid )
    {
      v71 = this->fields.eventRaidEntity;
      if ( !v71 )
        goto LABEL_93;
      Instance = (DataManager_o *)this->fields.bossName;
      if ( !Instance )
        goto LABEL_93;
      UILabel__set_text((UILabel_o *)Instance, v71->fields.name, 0);
    }
    v88.fields.r = r;
    v88.fields.g = g;
    v88.fields.b = b;
    v88.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, this->fields.bossName, v88, v70);
  }
  Instance = (DataManager_o *)this->fields.useBarSlider;
  if ( !Instance )
    goto LABEL_93;
  v72 = 1.0 - (double)RaidBossTotalDamage / (double)v59;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v72, 0);
  if ( this->fields.isJumbleRaid )
  {
    Instance = (DataManager_o *)this->fields.eventRaidEntity;
    if ( !Instance )
      goto LABEL_93;
    Instance = (DataManager_o *)EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)Instance, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      goto LABEL_81;
  }
  if ( !*v81 )
    goto LABEL_81;
  if ( !this->fields.isLastBattleRelease )
  {
    v73 = this->fields.eventRaidEntity;
    if ( !v73 )
      goto LABEL_93;
    if ( v73->fields.maxHp > RaidBossTotalDamage )
    {
LABEL_81:
      Instance = (DataManager_o *)this->fields.lastBattleSpr;
      if ( Instance )
      {
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          goto LABEL_90;
        }
      }
LABEL_93:
      sub_21FFECC(Instance, v7);
    }
  }
  Instance = (DataManager_o *)this->fields.lastBattleSpr;
  if ( !Instance )
    goto LABEL_93;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v89.fields.r = r;
  v89.fields.g = g;
  v89.fields.b = b;
  v89.fields.a = a;
  TitleInfoEventRaidBossComponent__SetOutlineLastColor(this, this->fields.useTotalLabel, v89, v74);
  v77 = (UnityEngine_Object_o *)this->fields.bossName;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v75, v76);
  if ( UnityEngine_Object__op_Inequality(v77, 0, 0) )
  {
    v90.fields.r = r;
    v90.fields.g = g;
    v90.fields.b = b;
    v90.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineLastColor(this, this->fields.bossName, v90, v78);
  }
LABEL_90:
  Instance = (DataManager_o *)this->fields.restTimeLabel;
  if ( !Instance )
    goto LABEL_93;
  v91.fields.r = r;
  v91.fields.g = g;
  v91.fields.b = b;
  v91.fields.a = a;
  UILabel__set_effectColor((UILabel_o *)Instance, v91, 0);
  TitleInfoEventRaidBossComponent__UpdateRestTime(this, 1, v79);
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventRaidBossComponent__SetHpBarSplitters(
        TitleInfoEventRaidBossComponent_o *this,
        bool isFlag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *defeatCntBarSplitter; // x0
  __int64 v6; // x2
  struct UISprite_array *hpBarSplitters; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x22
  UnityEngine_Object_o *v10; // x20

  if ( (byte_5936F40 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5936F40 = 1;
  }
  defeatCntBarSplitter = this->fields.defeatCntBarSplitter;
  if ( !defeatCntBarSplitter
    || (defeatCntBarSplitter = UnityEngine_GameObject__get_gameObject(defeatCntBarSplitter, 0)) == 0 )
  {
LABEL_17:
    sub_21FFECC(defeatCntBarSplitter, isFlag);
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
          sub_21FFED4(defeatCntBarSplitter);
        v10 = (UnityEngine_Object_o *)hpBarSplitters->m_Items[i];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isFlag, v6);
        defeatCntBarSplitter = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
        if ( ((unsigned __int8)defeatCntBarSplitter & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_17;
          defeatCntBarSplitter = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *v14; // x22
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_String_o *v18; // x21
  int32_t v19; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v20; // [xsp+18h] [xbp-48h] BYREF
  int32_t v21; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_5936F3D & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&StringLiteral_26544/*"{0}_{1}"*/);
    sub_21FFC50(&StringLiteral_26546/*"{0}_{1}_{2}"*/);
    byte_5936F3D = 1;
  }
  if ( iconId < 0 )
    goto LABEL_10;
  v21 = eventId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v21);
  v20 = iconId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v20);
  v14 = System_String__Format_75484644((System_String_o *)StringLiteral_26546/*"{0}_{1}_{2}"*/, (Il2CppObject *)prefix, v10, v11, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12, v13);
  if ( !AtlasManager__SetEventUI(sprite, v14, 0) )
  {
LABEL_10:
    if ( eventId < 0 )
      goto LABEL_16;
    v19 = eventId;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v19);
    v18 = System_String__Format_75484576((System_String_o *)StringLiteral_26544/*"{0}_{1}"*/, (Il2CppObject *)prefix, v15, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16, v17);
    if ( !AtlasManager__SetEventUI(sprite, v18, 0) )
    {
LABEL_16:
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite, prefix);
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
    sub_21FFECC(eventBossStatusUiEntity, label);
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
    sub_21FFECC(eventBossStatusUiEntity, label);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x21
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = gaugeId;
  if ( (byte_5936F3C & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&StringLiteral_16714/*"_"*/);
    byte_5936F3C = 1;
  }
  if ( gaugeId < 0 )
    goto LABEL_12;
  v8 = System_Int32__ToString((int32_t)&v12, 0);
  v11 = System_String__Concat_75481624(prefix, (System_String_o *)StringLiteral_16714/*"_"*/, v8, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9, v10);
  if ( !AtlasManager__SetEventUI(sprite, v11, 0) )
  {
LABEL_12:
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite, prefix);
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
  bool v13; // w25
  bool v14; // w26
  bool v15; // w24
  const MethodInfo_476E8C0 *v16; // x0
  int64_t Instance; // x0
  __int64 v18; // x1
  DataManager_o *v19; // x22
  EventRaidMaster_o *v20; // x21
  struct EventRaidEntity_o *Entity; // x0
  struct EventRaidEntity_o **p_eventRaidEntity; // x20
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  const MethodInfo_3822EA4 *v29; // x1
  struct UserEventRaidEntity_o *EntityFromEventIdAndDay; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  bool isRaidDefeatCount; // w0
  const MethodInfo_3822EA4 *v38; // x1
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  const MethodInfo *v46; // x5
  int32_t v47; // w22
  TitleInfoEventRaidBossComponent_o *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  const MethodInfo *v51; // x4
  TitleInfoEventRaidBossComponent_o *v52; // x0
  const MethodInfo *v53; // x4
  TitleInfoEventRaidBossComponent_o *v54; // x0
  const MethodInfo *v55; // x4
  float v56; // s0
  struct UISlider_o *hpBarSlider; // x1
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  struct UILabel_o *totalHpLabel; // x1
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  UISprite_o *defeatCntFrame; // x22
  float v72; // s0
  struct UISlider_o *defeatCntBarSlider; // x1
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  struct UILabel_o *totalDefeatCntLabel; // x1
  struct UILabel_o **p_useTotalLabel; // x22
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  __int64 v88; // x2
  int64_t endedAt; // x23
  UnityEngine_Component_o *v90; // x8
  int64_t v91; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v93; // x1
  __int64 v94; // x2
  float overwritePosX; // s0
  UnityEngine_GameObject_o *v96; // x22
  TitleInfoEventRaidBossComponent_c *v97; // x0
  const MethodInfo_476EDF8 *v98; // x0
  bool v99; // w8
  int64_t maxHp; // x20
  int64_t RaidBossTotalDamage; // x8
  int32_t raidDeadQuestId; // w20
  bool IsJumbleSingleRaid; // w0
  const MethodInfo *v104; // x3
  const MethodInfo *v105; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v13 = isJumbleRaid;
  v14 = isSingleRaid;
  v15 = isEventFolderRaid;
  if ( (byte_5936F3A & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_20087/*"event_raid_defeat_count_frame"*/);
    sub_21FFC50(&StringLiteral_20136/*"event_superboss_hp_white"*/);
    sub_21FFC50(&StringLiteral_20092/*"event_raid_lastbattle"*/);
    sub_21FFC50(&StringLiteral_20089/*"event_raid_hp_back"*/);
    sub_21FFC50(&StringLiteral_20088/*"event_raid_defeat_count_front"*/);
    sub_21FFC50(&StringLiteral_20090/*"event_raid_hp_frame"*/);
    sub_21FFC50(&StringLiteral_20096/*"event_raid_split_line"*/);
    sub_21FFC50(&StringLiteral_20086/*"event_raid_defeat_count_back"*/);
    sub_21FFC50(&StringLiteral_20091/*"event_raid_hp_front"*/);
    byte_5936F3A = 1;
  }
  v16 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.eventId = eventId;
  this->fields.isEncountRaidBoss = 0;
  this->fields.isDefeatRaidDisp = 0;
  this->fields.warId = warId;
  this->fields.isJumbleRaid = v13;
  this->fields.isSingleRaid = v14;
  this->fields.isFolderRaid = v15;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v16);
  if ( !Instance )
    goto LABEL_65;
  v19 = (DataManager_o *)Instance;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v20 = (EventRaidMaster_o *)Instance;
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
  Entity = EventRaidMaster__GetEntity(v20, this->fields.eventId, day, 0);
  this->fields.eventRaidEntity = Entity;
  p_eventRaidEntity = &this->fields.eventRaidEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventRaidEntity,
    (int32_t)Entity,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( this->fields.eventRaidEntity )
  {
    v29 = (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventRaidMaster___;
    this->fields.isTimeLimitRaid = (*p_eventRaidEntity)->fields.timeLimitAt > 0;
    Instance = (int64_t)DataManager__GetMasterData_object_(v19, v29);
    if ( Instance )
    {
      EntityFromEventIdAndDay = UserEventRaidMaster__getEntityFromEventIdAndDay(
                                  (UserEventRaidMaster_o *)Instance,
                                  this->fields.eventId,
                                  this->fields.currentDay,
                                  0);
      this->fields.userEventRaidEntity = EntityFromEventIdAndDay;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.userEventRaidEntity,
        (int32_t)EntityFromEventIdAndDay,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            v19,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( Instance )
      {
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              this->fields.eventId,
                              (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( Instance )
        {
          isRaidDefeatCount = EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)Instance, 0);
          v38 = (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___;
          this->fields.isRaidDefeatCount = isRaidDefeatCount;
          this->fields.isMovedPos = isRaidDefeatCount;
          Instance = (int64_t)DataManager__GetMasterData_object_(v19, v38);
          if ( Instance )
          {
            EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                          (EventBossStatusUiMaster_o *)Instance,
                                          this->fields.eventId,
                                          this->fields.currentDay,
                                          0);
            this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&this->fields.eventBossStatusUiEntity,
              (int32_t)EntityFromEventIdAndIndex,
              v40,
              v41,
              v42,
              v43,
              v44,
              v45);
            Instance = (int64_t)this->fields.eventBossStatusUiEntity;
            if ( Instance )
            {
              Instance = EventBossStatusUiEntity__GetGaugeId((EventBossStatusUiEntity_o *)Instance, 0);
              v47 = Instance;
              if ( this->fields.eventBossStatusUiEntity )
                Instance = EventBossStatusUiEntity__GetLastBattleIconId(this->fields.eventBossStatusUiEntity, 0);
            }
            else
            {
              v47 = -1;
            }
            if ( *p_eventRaidEntity )
            {
              TitleInfoEventRaidBossComponent__SetLastBattleIcon(
                (TitleInfoEventRaidBossComponent_o *)Instance,
                this->fields.lastBattleSpr,
                (System_String_o *)StringLiteral_20092/*"event_raid_lastbattle"*/,
                (*p_eventRaidEntity)->fields.eventId,
                (*p_eventRaidEntity)->fields.iconId,
                v46);
              if ( this->fields.isRaidDefeatCount && !this->fields.isTimeLimitRaid )
              {
                defeatCntFrame = this->fields.defeatCntFrame;
                if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v49, v50);
                AtlasManager__SetEventUI(defeatCntFrame, (System_String_o *)StringLiteral_20087/*"event_raid_defeat_count_frame"*/, 0);
                AtlasManager__SetEventUI(this->fields.defeatCntBg, (System_String_o *)StringLiteral_20086/*"event_raid_defeat_count_back"*/, 0);
                AtlasManager__SetEventUI(this->fields.defeatCntBar, (System_String_o *)StringLiteral_20088/*"event_raid_defeat_count_front"*/, 0);
                AtlasManager__SetEventUI(
                  this->fields.defeatCntBarSliderWhiteSp,
                  (System_String_o *)StringLiteral_20136/*"event_superboss_hp_white"*/,
                  0);
                AtlasManager__SetEventUI(this->fields.defeatCntBarSplitterSp, (System_String_o *)StringLiteral_20096/*"event_raid_split_line"*/, 0);
                Instance = (int64_t)this->fields.defeatCntBar;
                if ( !Instance )
                  goto LABEL_65;
                v72 = (*(float (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 664LL))(
                        Instance,
                        *(_QWORD *)(*(_QWORD *)Instance + 672LL));
                defeatCntBarSlider = this->fields.defeatCntBarSlider;
                this->fields.barSizeX = v72;
                this->fields.useBarSlider = defeatCntBarSlider;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&this->fields.useBarSlider,
                  (int32_t)defeatCntBarSlider,
                  v74,
                  v75,
                  v76,
                  v77,
                  v78,
                  v79);
                totalDefeatCntLabel = this->fields.totalDefeatCntLabel;
                this->fields.useTotalLabel = totalDefeatCntLabel;
                p_useTotalLabel = &this->fields.useTotalLabel;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&this->fields.useTotalLabel,
                  (int32_t)totalDefeatCntLabel,
                  v82,
                  v83,
                  v84,
                  v85,
                  v86,
                  v87);
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
                if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18, v88);
                Instance = NetworkManager__getTime(0);
                v90 = (UnityEngine_Component_o *)*p_useTotalLabel;
                if ( !*p_useTotalLabel )
                  goto LABEL_65;
                v91 = Instance;
                Instance = (int64_t)UnityEngine_Component__get_gameObject(v90, 0);
                if ( endedAt > v91 || this->fields.isJumbleRaid )
                {
                  v18 = 1;
                  if ( !Instance )
                    goto LABEL_65;
                }
                else
                {
                  v18 = this->fields.isSingleRaid;
                  if ( !Instance )
                    goto LABEL_65;
                }
              }
              else
              {
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v48,
                  this->fields.hpFrame,
                  (System_String_o *)StringLiteral_20090/*"event_raid_hp_frame"*/,
                  v47,
                  v51);
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v52,
                  this->fields.hpBg,
                  (System_String_o *)StringLiteral_20089/*"event_raid_hp_back"*/,
                  v47,
                  v53);
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v54,
                  this->fields.hpBar,
                  (System_String_o *)StringLiteral_20091/*"event_raid_hp_front"*/,
                  v47,
                  v55);
                Instance = (int64_t)this->fields.hpBar;
                if ( !Instance )
                  goto LABEL_65;
                v56 = (*(float (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 664LL))(
                        Instance,
                        *(_QWORD *)(*(_QWORD *)Instance + 672LL));
                hpBarSlider = this->fields.hpBarSlider;
                this->fields.barSizeX = v56;
                this->fields.useBarSlider = hpBarSlider;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&this->fields.useBarSlider,
                  (int32_t)hpBarSlider,
                  v58,
                  v59,
                  v60,
                  v61,
                  v62,
                  v63);
                totalHpLabel = this->fields.totalHpLabel;
                this->fields.useTotalLabel = totalHpLabel;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&this->fields.useTotalLabel,
                  (int32_t)totalHpLabel,
                  v65,
                  v66,
                  v67,
                  v68,
                  v69,
                  v70);
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
                LOBYTE(v18) = 1;
              }
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v18, 0);
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              overwritePosX = this->fields.overwritePosX;
              v96 = gameObject;
              if ( overwritePosX == 0.0 )
              {
                v97 = TitleInfoEventRaidBossComponent_TypeInfo;
                if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v93, v94);
                  v97 = TitleInfoEventRaidBossComponent_TypeInfo;
                }
                overwritePosX = (float)v97->static_fields->RAIDBOSS_DEFEAT_COUNT_POS_X;
              }
              GameObjectExtensions__SetLocalPositionX(v96, overwritePosX, 0);
              Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              if ( Instance )
              {
                Instance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
                if ( Instance )
                {
                  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
                  v98 = (const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__;
                  this->fields.originPos = localPosition;
                  Instance = (int64_t)SingletonTemplate_object___get_Instance(v98);
                  if ( Instance )
                  {
                    v99 = clsQuestCheck__IsEncountRaidBoss(
                            (clsQuestCheck_o *)Instance,
                            this->fields.eventId,
                            this->fields.currentDay,
                            0);
                    Instance = (int64_t)this->fields.eventRaidEntity;
                    this->fields.isEncountRaidBoss = v99;
                    if ( Instance )
                    {
                      Instance = EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)Instance, 0);
                      if ( (Instance & 1) != 0 )
                      {
                        if ( !*p_eventRaidEntity )
                          goto LABEL_65;
                        Instance = EventRaidMaster__GetRaidGroupDeadQuestId(
                                     v20,
                                     this->fields.eventId,
                                     (*p_eventRaidEntity)->fields.groupIndex,
                                     0);
                      }
                      else
                      {
                        Instance = EventRaidMaster__GetRaidDeadQuestId(
                                     v20,
                                     this->fields.eventId,
                                     this->fields.currentDay,
                                     0);
                      }
                      this->fields.raidDeadQuestId = Instance;
                      if ( (int)Instance >= 1 )
                      {
                        Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
                        RaidBossTotalDamage = TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(
                                                this,
                                                (const MethodInfo *)v18);
                        Instance = (int64_t)this->fields.eventRaidEntity;
                        this->fields.initDispHp = maxHp - RaidBossTotalDamage;
                        if ( Instance )
                        {
                          raidDeadQuestId = this->fields.raidDeadQuestId;
                          IsJumbleSingleRaid = EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)Instance, 0);
                          if ( !TitleInfoEventRaidBossComponent__IsPlayClearAnimation(
                                  this,
                                  raidDeadQuestId,
                                  IsJumbleSingleRaid,
                                  v104) )
                          {
LABEL_63:
                            TitleInfoEventRaidBossComponent__SetDisp(this, v105);
                            return;
                          }
                          Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
                          if ( Instance )
                          {
                            MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
                            Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    sub_21FFECC(Instance, v18);
  }
}


void TitleInfoEventRaidBossComponent__StartDamageAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        AssetData_o *mapAssetData,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct UnityEngine_GameObject_o *ClearBossEffect; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  TerminalPramsManager_c *v20; // x0
  System_Collections_Generic_List_int__o *nonFrameInBossHpUiIndex; // x0
  const MethodInfo *v22; // x1

  if ( (byte_5936F44 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5936F44 = 1;
  }
  this->fields.animEndCall = callBack;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.animEndCall,
    (int32_t)callBack,
    (System_String_o *)callBack,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( mapAssetData )
  {
    ClearBossEffect = TitleInfoEventRaidBossComponent__GetClearBossEffect(this, mapAssetData, v12);
    this->fields.clearBossEffect = ClearBossEffect;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.clearBossEffect,
      (int32_t)ClearBossEffect,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = TerminalPramsManager_TypeInfo;
  this->fields.isStartedFrameIn = 0;
  if ( !*(&v20->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v20, v11, v12);
    v20 = TerminalPramsManager_TypeInfo;
  }
  nonFrameInBossHpUiIndex = v20->static_fields->nonFrameInBossHpUiIndex;
  if ( !nonFrameInBossHpUiIndex )
    sub_21FFECC(0, v11);
  if ( System_Collections_Generic_List_int___Contains(
         nonFrameInBossHpUiIndex,
         this->fields.currentDay,
         (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__) )
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
  __int64 v5; // x1
  __int64 v6; // x2
  float realtimeSinceStartup; // s8
  float restTimeUpdateSec; // s9
  TitleInfoEventRaidBossComponent_c *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *Time; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct EventRaidEntity_o *eventRaidEntity; // x8
  unsigned __int64 v16; // x8
  unsigned __int64 v17; // x23
  unsigned __int64 v18; // x22
  unsigned __int64 v19; // x21
  UILabel_o *restTimeLabel; // x19
  System_String_o *v21; // x20
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x22
  Il2CppObject *v24; // x0
  unsigned __int64 v25; // [xsp+0h] [xbp-60h] BYREF
  unsigned __int64 v26; // [xsp+8h] [xbp-58h] BYREF
  unsigned __int64 v27; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_5936F41 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_13963/*"TIME_REST_RAID"*/);
    byte_5936F41 = 1;
  }
  if ( this->fields.isEncountRaidBoss && !this->fields.isRaidDefeatCount )
  {
    if ( isForce )
      goto LABEL_9;
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    restTimeUpdateSec = this->fields.restTimeUpdateSec;
    v9 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v5, v6);
      v9 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    if ( (float)(realtimeSinceStartup - restTimeUpdateSec) > v9->static_fields->REST_TIME_UPDATE_INTERVAL_SEC )
    {
LABEL_9:
      this->fields.restTimeUpdateSec = UnityEngine_Time__get_realtimeSinceStartup(0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v11);
      Time = (System_String_o *)NetworkManager__getTime(0);
      eventRaidEntity = this->fields.eventRaidEntity;
      if ( !eventRaidEntity )
        goto LABEL_20;
      v16 = eventRaidEntity->fields.endedAt - (_QWORD)Time;
      if ( (__int64)v16 < 1 )
      {
        v19 = 0;
        v18 = 0;
        v17 = 0;
      }
      else
      {
        v17 = v16 % 0x3C;
        v18 = v16 / 0x3C - 60 * ((unsigned __int64)((v16 / 0x3C * (unsigned __int128)0x888888888888889uLL) >> 64) >> 1);
        v19 = v16 / 0xE10;
      }
      restTimeLabel = this->fields.restTimeLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13963/*"TIME_REST_RAID"*/, 0);
      v27 = v19;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v27);
      v26 = v18;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v26);
      v25 = v17;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v25);
      Time = System_String__Format_75484644(v21, v22, v23, v24, 0);
      if ( !restTimeLabel )
LABEL_20:
        sub_21FFECC(Time, v13);
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
    sub_21FFECC(this, d);
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
  __int64 v6; // x1
  __int64 v7; // x2
  float x; // s8
  float y; // s9
  TitleInfoEventRaidBossComponent_c *v10; // x0
  float z; // s10
  float *static_fields; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5936F43 & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventRaidBossComponent_TypeInfo);
    byte_5936F43 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
  {
    sub_21FFECC(gameObject, v4);
  }
  v5 = (UnityEngine_Transform_o *)gameObject;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  v10 = TitleInfoEventRaidBossComponent_TypeInfo;
  z = localPosition.fields.z;
  if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, v6, v7);
    v10 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  static_fields = (float *)v10->static_fields;
  v14.fields.z = z + static_fields[10];
  v14.fields.x = x + static_fields[8];
  v14.fields.y = y + static_fields[9];
  UnityEngine_Transform__set_localPosition(v5, v14, 0);
}


void TitleInfoEventRaidBossComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5936F54 & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventRaidBossComponent___c_TypeInfo);
    byte_5936F54 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(TitleInfoEventRaidBossComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventRaidBossComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields,
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