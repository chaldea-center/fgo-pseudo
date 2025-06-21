void __fastcall TitleInfoSuperBossComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct TitleInfoSuperBossComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct TitleInfoSuperBossComponent_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  TitleInfoSuperBossComponent_c *v15; // x8
  struct TitleInfoSuperBossComponent_StaticFields *v16; // x9
  struct TitleInfoSuperBossComponent_StaticFields *v17; // x9
  struct TitleInfoSuperBossComponent_StaticFields *v18; // x8

  if ( (byte_4B1B108 & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoSuperBossComponent_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_14385/*"TitleInfoEventSuperBossEffect_Dead"*/, v4);
    sub_1BCAFF8(&StringLiteral_14386/*"TitleInfoEventSuperBossEffect_Split"*/, v5);
    sub_1BCAFF8(&StringLiteral_19115/*"event_superboss_icon_"*/, v6);
    byte_4B1B108 = 1;
  }
  TitleInfoSuperBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_19115/*"event_superboss_icon_"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)TitleInfoSuperBossComponent_TypeInfo->static_fields, StringLiteral_19115/*"event_superboss_icon_"*/, v2, v3);
  v7 = StringLiteral_14386/*"TitleInfoEventSuperBossEffect_Split"*/;
  static_fields = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14386/*"TitleInfoEventSuperBossEffect_Split"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB, v7, v9, v10);
  v11 = StringLiteral_14385/*"TitleInfoEventSuperBossEffect_Dead"*/;
  v12 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v12->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14385/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v12->SUPERBOSS_CLEAR_EFFECT_PREFAB, v11, v13, v14);
  v15 = TitleInfoSuperBossComponent_TypeInfo;
  v16 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v16->SUPERBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v16->SUPERBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v17 = v15->static_fields;
  *(_QWORD *)&v17->SUPERBOSS_SPLIT_POS_DELTA.fields.x = 0x41200000BF000000LL;
  v17->SUPERBOSS_SPLIT_POS_DELTA.fields.z = 0.0;
  v18 = v15->static_fields;
  *(_OWORD *)&v18->ANIM_DURATION_FRAME_IN_BOSS = xmmword_BE1C70;
  v18->SUPERBOSS_HP_BAR_LENGTH = 264;
  v18->CLEAR_END_CALLBACK_DELAY = 1.5;
  *(_QWORD *)&v18->ANIM_DURATION_HP_DELETION = 0x3FE666663F333333LL;
}


void __fastcall TitleInfoSuperBossComponent___ctor(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0LL);
}


float __fastcall TitleInfoSuperBossComponent__ConvertHpToRate(
        TitleInfoSuperBossComponent_o *this,
        int64_t hp,
        int64_t maxHp,
        const MethodInfo *method)
{
  return 1.0 - (double)hp / (double)maxHp;
}


void __fastcall TitleInfoSuperBossComponent__Destroy(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoSuperBossComponent__DoClearCallback(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  System_Action_o *onClearCall; // x21
  __int64 v8; // x1
  UnityEngine_Component_o *superBossIconSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoSuperBossComponent_c *v11; // x8
  UnityEngine_GameObject_o *v12; // x20

  if ( (byte_4B1B105 & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoSuperBossComponent_TypeInfo, method);
    sub_1BCAFF8(&Method_UITweener_Begin_TweenAlpha___, v5);
    sub_1BCAFF8(&StringLiteral_9821/*"OnEndAnimation"*/, v6);
    byte_4B1B105 = 1;
  }
  onClearCall = this->fields.onClearCall;
  this->fields.onClearCall = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.onClearCall, 0, v2, v3);
  ActionExtensions__Call(onClearCall, 0LL);
  superBossIconSp = (UnityEngine_Component_o *)this->fields.superBossIconSp;
  if ( !superBossIconSp )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(superBossIconSp, 0LL);
  v11 = TitleInfoSuperBossComponent_TypeInfo;
  v12 = gameObject;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v11 = TitleInfoSuperBossComponent_TypeInfo;
  }
  superBossIconSp = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                 v12,
                                                 v11->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                 (const MethodInfo_30D2A08 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !superBossIconSp )
LABEL_8:
    sub_1BCB254(superBossIconSp, v8);
  LODWORD(superBossIconSp[1].monitor) = 1;
  superBossIconSp[5].monitor = (void *)1065353216;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9821/*"OnEndAnimation"*/,
    TitleInfoSuperBossComponent_TypeInfo->static_fields->CLEAR_END_CALLBACK_DELAY,
    0LL);
}


float __fastcall TitleInfoSuperBossComponent__GetHpSplitPositionX(
        TitleInfoSuperBossComponent_o *this,
        int64_t splitHp,
        int64_t maxHp,
        const MethodInfo *method)
{
  TitleInfoSuperBossComponent_c *v6; // x0
  float v7; // s0

  if ( (byte_4B1B106 & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoSuperBossComponent_TypeInfo, splitHp);
    byte_4B1B106 = 1;
  }
  v6 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v6 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v7 = -(double)splitHp / (double)maxHp;
  return v7 * (float)v6->static_fields->SUPERBOSS_HP_BAR_LENGTH;
}


bool __fastcall TitleInfoSuperBossComponent__IsAlive(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  EventSuperBossEntity_o *eventSuperBossEntity; // x0

  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  return eventSuperBossEntity && !EventSuperBossEntity__IsCleard(eventSuperBossEntity, 0LL);
}


bool __fastcall TitleInfoSuperBossComponent__IsDispPossible(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._IsShowClearEvent_k__BackingField || this->fields.isEncountSuperBoss;
}


bool __fastcall TitleInfoSuperBossComponent__IsEventRaidBoss(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall TitleInfoSuperBossComponent__OnDestroy(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoSuperBossComponent__OnEndAnimation(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_animEndCall; // x0
  System_Action_o *animEndCall; // t1
  const MethodInfo *v7; // x1

  animEndCall = this->fields.animEndCall;
  p_animEndCall = (CGThumbnailListItem_o *)&this->fields.animEndCall;
  p_animEndCall->klass = 0LL;
  sub_1BCAF9C(p_animEndCall, 0, v2, v3);
  ActionExtensions__Call(animEndCall, 0LL);
  TitleInfoSuperBossComponent__SetDisp(this, v7);
}


void __fastcall TitleInfoSuperBossComponent__PlayFrameInBoss(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoSuperBossComponent_c *v6; // x8
  UnityEngine_GameObject_o *v7; // x20
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  float32x2_t *static_fields; // x8
  Il2CppObject *v11; // x20
  float v12; // s0
  void *v13; // x9
  UnityEngine_GameObject_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4B1B100 & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoSuperBossComponent_TypeInfo, method);
    sub_1BCAFF8(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_1BCAFF8(&StringLiteral_10578/*"PlayHpNameAlpha"*/, v4);
    byte_4B1B100 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = TitleInfoSuperBossComponent_TypeInfo;
  v7 = gameObject;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v6 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v8 = UITweener__Begin_object_(
         v7,
         v6->static_fields->ANIM_DURATION_FRAME_IN_BOSS,
         (const MethodInfo_30D2A08 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v8 )
    sub_1BCB254(0LL, v9);
  static_fields = (float32x2_t *)TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v11 = v8;
  v12 = this->fields.originPos.fields.z + static_fields[4].n64_f32[0];
  v8[8].klass = (Il2CppClass *)vadd_f32(*(float32x2_t *)&this->fields.originPos.fields.x, static_fields[3]).n64_u64[0];
  *(float *)&v8[8].monitor = v12;
  v13 = *(void **)&this->fields.originPos.fields.x;
  HIDWORD(v8[9].klass) = LODWORD(this->fields.originPos.fields.z);
  *(void **)((char *)&v8[8].monitor + 4) = v13;
  LODWORD(v8[2].klass) = 2;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11[5].klass = (Il2CppClass *)v14;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v11[5], (int32_t)v14, v15, v16);
  v17 = StringLiteral_10578/*"PlayHpNameAlpha"*/;
  v11[5].monitor = (void *)StringLiteral_10578/*"PlayHpNameAlpha"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v11[5].monitor, v17, v18, v19);
}


void __fastcall TitleInfoSuperBossComponent__PlayHpCut(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  TitleInfoSuperBossComponent_o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  TitleInfoSuperBossComponent_c *v19; // x0
  EasingObject_o *v20; // x21
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v22; // x22
  System_Action_o *v23; // x20

  if ( (byte_4B1B102 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v3);
    sub_1BCAFF8(&Method_TitleInfoSuperBossComponent_PlayHpDeletion__, v4);
    sub_1BCAFF8(&TitleInfoSuperBossComponent_TypeInfo, v5);
    sub_1BCAFF8(&Method_TitleInfoSuperBossComponent___c__DisplayClass58_0__PlayHpCut_b__0__, v6);
    sub_1BCAFF8(&TitleInfoSuperBossComponent___c__DisplayClass58_0_TypeInfo, v7);
    byte_4B1B102 = 1;
  }
  v8 = sub_1BCB244(TitleInfoSuperBossComponent___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_9;
  *(_QWORD *)(v8 + 24) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 24), (int32_t)this, v11, v12);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_9;
  TitleInfoSuperBossComponent__PlaySeByEventId(v9, eventSuperBossEntity->fields.eventId, 1, v13);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v8 + 16) = Component_object;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)Component_object, v17, v18);
  v19 = TitleInfoSuperBossComponent_TypeInfo;
  v20 = *(EasingObject_o **)(v8 + 16);
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v19 = TitleInfoSuperBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v19->static_fields->ANIM_DURATION_HP_CUT;
  v22 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v8,
    Method_TitleInfoSuperBossComponent___c__DisplayClass58_0__PlayHpCut_b__0__,
    0LL);
  v23 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_TitleInfoSuperBossComponent_PlayHpDeletion__, 0LL);
  if ( !v20 )
LABEL_9:
    sub_1BCB254(v9, v10);
  EasingObject__Play(v20, ANIM_DURATION_HP_CUT, v22, v23, 0.0, 0, 0LL);
}


void __fastcall TitleInfoSuperBossComponent__PlayHpDeletion(
        TitleInfoSuperBossComponent_o *this,
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
  UnityEngine_Component_o *hpBarSliderUnder; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoSuperBossComponent_c *v13; // x8
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Component_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 *v21; // x8
  UnityEngine_Object_o *clearBossEffect; // x21
  Il2CppObject *v23; // x21
  Il2CppObject *v24; // x21
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  UILabel_o *totalHpLabel; // x20
  struct EventSuperBossEntity_o *v29; // x8
  int64_t maxHp; // x21
  System_String_o *v31; // x19
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x0
  unsigned __int64 v36; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1B103 & 1) == 0 )
  {
    sub_1BCAFF8(&long_TypeInfo, method);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    sub_1BCAFF8(&TitleInfoSuperBossComponent_TypeInfo, v6);
    sub_1BCAFF8(&Method_UITweener_Begin_TweenAlpha___, v7);
    sub_1BCAFF8(&StringLiteral_9821/*"OnEndAnimation"*/, v8);
    sub_1BCAFF8(&StringLiteral_12676/*"SetClearAlpha"*/, v9);
    sub_1BCAFF8(&StringLiteral_13337/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v10);
    byte_4B1B103 = 1;
  }
  hpBarSliderUnder = (UnityEngine_Component_o *)this->fields.hpBarSliderUnder;
  if ( !hpBarSliderUnder )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject(hpBarSliderUnder, 0LL);
  v13 = TitleInfoSuperBossComponent_TypeInfo;
  v14 = gameObject;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v13 = TitleInfoSuperBossComponent_TypeInfo;
  }
  hpBarSliderUnder = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                  v14,
                                                  v13->static_fields->ANIM_DURATION_HP_DELETION,
                                                  (const MethodInfo_30D2A08 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !hpBarSliderUnder )
    goto LABEL_23;
  v15 = hpBarSliderUnder;
  LODWORD(hpBarSliderUnder[1].monitor) = 1;
  hpBarSliderUnder[5].monitor = (void *)1065353216;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15[3].monitor = v16;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v15[3].monitor, (int32_t)v16, v17, v18);
  if ( this->fields.HPto <= 0.0 )
  {
    clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(clearBossEffect, 0LL, 0LL) )
    {
      v23 = (Il2CppObject *)this->fields.clearBossEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v24 = UnityEngine_Object__Instantiate_object_(
              v23,
              (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v24, (UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v24, 0LL);
    }
    v21 = &StringLiteral_12676/*"SetClearAlpha"*/;
  }
  else
  {
    v21 = &StringLiteral_9821/*"OnEndAnimation"*/;
  }
  v25 = *v21;
  *(_QWORD *)&v15[3].fields.m_CachedPtr = *v21;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v15[3].fields, v25, v19, v20);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_23;
  TitleInfoSuperBossComponent__PlaySeByEventId(
    (TitleInfoSuperBossComponent_o *)hpBarSliderUnder,
    eventSuperBossEntity->fields.eventId,
    0,
    v26);
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  hpBarSliderUnder = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13337/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
  v29 = this->fields.eventSuperBossEntity;
  if ( !v29
    || (maxHp = v29->fields.maxHp,
        v31 = (System_String_o *)hpBarSliderUnder,
        (hpBarSliderUnder = (UnityEngine_Component_o *)EventSuperBossEntity__GetUserSuperBossEntity(v29, 0LL)) == 0LL)
    || (v36 = maxHp - (unsigned __int64)hpBarSliderUnder[1].monitor,
        v35 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v36, v32, v33, v34),
        hpBarSliderUnder = (UnityEngine_Component_o *)System_String__Format(v31, v35, 0LL),
        !totalHpLabel) )
  {
LABEL_23:
    sub_1BCB254(hpBarSliderUnder, method);
  }
  UILabel__set_text(totalHpLabel, (System_String_o *)hpBarSliderUnder, 0LL);
}


void __fastcall TitleInfoSuperBossComponent__PlayHpNameAlpha(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *totalHpLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoSuperBossComponent_c *v7; // x8
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Component_o *v9; // x20
  UnityEngine_GameObject_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4B1B101 & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoSuperBossComponent_TypeInfo, method);
    sub_1BCAFF8(&Method_UITweener_Begin_TweenAlpha___, v3);
    sub_1BCAFF8(&StringLiteral_10577/*"PlayHpCut"*/, v4);
    byte_4B1B101 = 1;
  }
  totalHpLabel = (UnityEngine_Component_o *)this->fields.totalHpLabel;
  if ( !totalHpLabel )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(totalHpLabel, 0LL);
  v7 = TitleInfoSuperBossComponent_TypeInfo;
  v8 = gameObject;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v7 = TitleInfoSuperBossComponent_TypeInfo;
  }
  totalHpLabel = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                              v8,
                                              v7->static_fields->ANIM_DURATION_HP_NAME_ALPHA,
                                              (const MethodInfo_30D2A08 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !totalHpLabel )
LABEL_8:
    sub_1BCB254(totalHpLabel, method);
  v9 = totalHpLabel;
  totalHpLabel[5].monitor = (void *)0x3F80000000000000LL;
  LODWORD(totalHpLabel[1].monitor) = 1;
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v9[3].monitor = v10;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v9[3].monitor, (int32_t)v10, v11, v12);
  v13 = StringLiteral_10577/*"PlayHpCut"*/;
  *(_QWORD *)&v9[3].fields.m_CachedPtr = StringLiteral_10577/*"PlayHpCut"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v9[3].fields, v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoSuperBossComponent__PlaySeByEventId(
        TitleInfoSuperBossComponent_o *this,
        int32_t eventId,
        bool isPlay,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  __int64 *v14; // x20
  _QWORD *v15; // x0
  System_String_o *v16; // x20
  System_Reflection_MethodBase_o *v17; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1B107 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BCAFF8(&Method_TitleInfoSuperBossComponent_PlaySeByEventId__, v8);
    sub_1BCAFF8(&StringLiteral_16713/*"ar12"*/, v9);
    sub_1BCAFF8(&StringLiteral_16726/*"ar60"*/, v10);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v11);
    byte_4B1B107 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v13);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    eventId,
    (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( entity )
  {
    v14 = &StringLiteral_16726/*"ar60"*/;
    if ( !EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
    {
      if ( entity )
      {
        if ( !EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL) )
          v14 = &StringLiteral_16713/*"ar12"*/;
      }
      else
      {
        v14 = &StringLiteral_16713/*"ar12"*/;
      }
    }
  }
  else
  {
    v14 = &StringLiteral_16713/*"ar12"*/;
  }
  v15 = Method_TitleInfoSuperBossComponent_PlaySeByEventId__;
  v16 = (System_String_o *)*v14;
  if ( (*((_BYTE *)Method_TitleInfoSuperBossComponent_PlaySeByEventId__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1BCB010(Method_TitleInfoSuperBossComponent_PlaySeByEventId__);
  v17 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v15, v15[4]);
  if ( isPlay )
    OverwriteAssetSoundName__PlaySeLoop(v17, v16, 1.0, 0.0, 0, 0LL);
  else
    OverwriteAssetSoundName__StopSe(v17, v16, 0.0, 0LL);
}


void __fastcall TitleInfoSuperBossComponent__SetBossIcon(
        TitleInfoSuperBossComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  UISprite_o *superBossIconSp; // x21
  struct UISprite_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4B1B0FB & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, spName);
    byte_4B1B0FB = 1;
  }
  superBossIconSp = this->fields.superBossIconSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v6 = (struct UISprite_o *)AtlasManager__SetEventUI(superBossIconSp, spName, 0LL);
  if ( !superBossIconSp )
    goto LABEL_11;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)superBossIconSp, (unsigned __int8)v6 & 1, 0LL);
  v6 = this->fields.superBossIconSp;
  if ( !v6 )
    goto LABEL_11;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6, 0LL) )
  {
    v6 = this->fields.superBossIconSp;
    if ( v6 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
        v6,
        v6->klass->vtable._34_get_minWidth.methodPtr);
      return;
    }
LABEL_11:
    sub_1BCB254(v6, v7);
  }
}


void __fastcall TitleInfoSuperBossComponent__SetClearAlpha(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoSuperBossComponent_c *v4; // x0

  if ( (byte_4B1B104 & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoSuperBossComponent_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_5270/*"DoClearCallback"*/, v3);
    byte_4B1B104 = 1;
  }
  this->fields.isEncountSuperBoss = 0;
  v4 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v4 = TitleInfoSuperBossComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5270/*"DoClearCallback"*/,
    v4->static_fields->CLEAR_CALLBACK_DELAY,
    0LL);
}


void __fastcall TitleInfoSuperBossComponent__SetDamageAnimation(
        TitleInfoSuperBossComponent_o *this,
        int64_t damage,
        System_Action_o *onClearCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  EventSuperBossEntity_o *eventSuperBossEntity; // x0
  struct EventSuperBossEntity_o *v12; // x9
  __int64 maxHp; // x8
  double v14; // d1
  float v15; // s0
  float v16; // s2
  float v17; // s5
  float v18; // s3
  float v19; // s0
  float v20; // s2
  struct System_Int64_array *splitHp; // x9
  int max_length; // w11
  int32_t v23; // w10
  int64_t v24; // x12
  float v25; // s1
  UnityEngine_Transform_o *v26; // x21
  TitleInfoSuperBossComponent_c *v27; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float *static_fields; // x8
  UILabel_o *totalHpLabel; // x21
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  struct EventSuperBossEntity_o *v36; // x8
  System_String_o *v37; // x22
  Il2CppObject *v38; // x0
  __int64 v39; // x2
  long double v40; // q0
  struct EventSuperBossEntity_o *v41; // x8
  struct System_Int64_array *v42; // x9
  struct UISprite_array *hpBarSplitPointList; // x10
  int v44; // w21
  il2cpp_array_size_t v45; // w22
  struct System_Int64_array *v46; // x8
  struct UISprite_array *v47; // x9
  int64_t v48; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1B0FE & 1) == 0 )
  {
    sub_1BCAFF8(&long_TypeInfo, damage);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&TitleInfoSuperBossComponent_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_13337/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v9);
    byte_4B1B0FE = 1;
  }
  this->fields.onClearCall = onClearCallback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.onClearCall,
    (int32_t)onClearCallback,
    (int32_t)onClearCallback,
    method);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  eventSuperBossEntity = (EventSuperBossEntity_o *)EventSuperBossEntity__GetUserSuperBossEntity(
                                                     eventSuperBossEntity,
                                                     0LL);
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  v12 = this->fields.eventSuperBossEntity;
  if ( !v12 )
    goto LABEL_55;
  maxHp = eventSuperBossEntity->fields.maxHp;
  v14 = (double)v12->fields.maxHp;
  v15 = 1.0 - (double)damage / v14;
  v16 = 1.0 - (double)maxHp / v14;
  v17 = fminf(v15, 1.0);
  v18 = fminf(v16, 1.0);
  v19 = v15 < 0.0 ? 0.0 : v17;
  v20 = v16 < 0.0 ? 0.0 : v18;
  this->fields.HPfrom = v19;
  this->fields.HPto = v20;
  *(_QWORD *)&this->fields.HPsplitPoint = -1082130432LL;
  splitHp = v12->fields.splitHp;
  if ( !splitHp )
    goto LABEL_55;
  max_length = splitHp->max_length;
  if ( max_length >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      v24 = splitHp->m_Items[v23];
      if ( v24 > damage && v24 <= maxHp )
        break;
      if ( max_length == ++v23 )
        goto LABEL_20;
    }
    v25 = 1.0 - (double)v24 / v14;
    this->fields.HPsplitPoint = v25;
    this->fields.HPsplitNo = v23;
  }
LABEL_20:
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSlider;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, v19, 0LL);
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderWhite;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)eventSuperBossEntity,
                                                     0LL);
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventSuperBossEntity, 1, 0LL);
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderUnder;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)eventSuperBossEntity,
                                                     0LL);
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventSuperBossEntity, 1, 0LL);
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderWhite;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, this->fields.HPfrom, 0LL);
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderWhite;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  UIProgressBar__set_alpha((UIProgressBar_o *)eventSuperBossEntity, 0.0, 0LL);
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderUnder;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, this->fields.HPfrom, 0LL);
  eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                     0LL);
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  this->fields.originPos = UnityEngine_Transform__get_localPosition(
                             (UnityEngine_Transform_o *)eventSuperBossEntity,
                             0LL);
  eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                     0LL);
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  v26 = (UnityEngine_Transform_o *)eventSuperBossEntity;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, 0LL);
  v27 = TitleInfoSuperBossComponent_TypeInfo;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v27 = TitleInfoSuperBossComponent_TypeInfo;
  }
  static_fields = (float *)v27->static_fields;
  v50.fields.x = x + static_fields[6];
  v50.fields.y = y + static_fields[7];
  v50.fields.z = z + static_fields[8];
  UnityEngine_Transform__set_localPosition(v26, v50, 0LL);
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  eventSuperBossEntity = (EventSuperBossEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13337/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
  v36 = this->fields.eventSuperBossEntity;
  if ( !v36 )
    goto LABEL_55;
  v37 = (System_String_o *)eventSuperBossEntity;
  v48 = v36->fields.maxHp - damage;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v48, v33, v34, v35);
  eventSuperBossEntity = (EventSuperBossEntity_o *)System_String__Format(v37, v38, 0LL);
  if ( !totalHpLabel
    || (UILabel__set_text(totalHpLabel, (System_String_o *)eventSuperBossEntity, 0LL),
        (eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel) == 0LL)
    || (eventSuperBossEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, float))&eventSuperBossEntity->klass[1]._1.byval_arg.bits)(
                                                           eventSuperBossEntity,
                                                           eventSuperBossEntity->klass[1]._1.this_arg.data,
                                                           0.0),
        (v41 = this->fields.eventSuperBossEntity) == 0LL)
    || (v42 = v41->fields.splitHp) == 0LL )
  {
LABEL_55:
    sub_1BCB254(eventSuperBossEntity, v10);
  }
  hpBarSplitPointList = this->fields.hpBarSplitPointList;
  if ( hpBarSplitPointList )
  {
    v44 = v42->max_length;
    if ( v44 <= (signed int)hpBarSplitPointList->max_length && v44 >= 1 )
    {
      v45 = 0;
      while ( 1 )
      {
        v46 = v41->fields.splitHp;
        if ( !v46 )
          goto LABEL_55;
        if ( v45 >= v46->max_length )
          goto LABEL_57;
        v47 = this->fields.hpBarSplitPointList;
        if ( !v47 )
          goto LABEL_55;
        if ( v45 >= v47->max_length )
LABEL_57:
          sub_1BCB25C(eventSuperBossEntity, v10, v39);
        eventSuperBossEntity = (EventSuperBossEntity_o *)v47->m_Items[v45];
        if ( !eventSuperBossEntity )
          goto LABEL_55;
        if ( v46->m_Items[v45] <= damage )
          *(float *)&v40 = 0.0;
        else
          *(float *)&v40 = 1.0;
        eventSuperBossEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, long double))&eventSuperBossEntity->klass[1]._1.byval_arg.bits)(
                                                           eventSuperBossEntity,
                                                           eventSuperBossEntity->klass[1]._1.this_arg.data,
                                                           v40);
        if ( v44 == ++v45 )
          return;
        v41 = this->fields.eventSuperBossEntity;
        if ( !v41 )
          goto LABEL_55;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoSuperBossComponent__SetDisp(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  EventSuperBossEntity_o *eventSuperBossEntity; // x0
  EventSuperBossEntity_o *v11; // x20
  struct EventSuperBossEntity_o *v12; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  const MethodInfo *v16; // x2
  struct EventSuperBossEntity_o *v17; // x8
  struct System_Int64_array *splitHp; // x8
  int max_length; // w21
  struct UISprite_array **p_hpBarSplitterList; // x22
  char v21; // w27
  struct UISprite_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct UISprite_array *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x2
  const MethodInfo *v29; // x3
  UnityEngine_Component_o *v30; // x24
  il2cpp_array_size_t i; // w29
  struct UISprite_array *hpBarSplitterList; // x25
  Il2CppObject *hpBarSplitter; // x26
  const MethodInfo *v34; // x3
  EventSuperBossEntity_o *v35; // x26
  Il2CppClass **v36; // x0
  struct UISprite_array *v37; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *hpBarSplitPointList; // x26
  const MethodInfo *v40; // x3
  EventSuperBossEntity_o *v41; // x25
  Il2CppClass **v42; // x0
  struct UISprite_array *v43; // x8
  UnityEngine_GameObject_o *v44; // x0
  const MethodInfo *v45; // x3
  EventSuperBossEntity_o *v46; // x26
  struct UISprite_array *v47; // x25
  const MethodInfo *v48; // x3
  EventSuperBossEntity_o *v49; // x26
  struct EventSuperBossEntity_o *v50; // x8
  struct System_Int64_array *v51; // x9
  float HpSplitPositionX; // s0
  struct UISprite_array *v53; // x8
  float v54; // s8
  struct UISprite_array *v55; // x8
  long double v56; // q0
  struct EventSuperBossEntity_o *v57; // x8
  struct System_Int64_array *v58; // x8
  struct UISprite_array *v59; // x9
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  float v61; // s0
  float v62; // s1
  float v63; // s2
  float v64; // s3
  float v65; // s8
  float v66; // s9
  float v67; // s10
  float v68; // s11
  struct EventSuperBossEntity_o *v69; // x8
  __int64 maxHp; // x22
  __int64 v71; // x23
  UILabel_o *totalHpLabel; // x20
  System_String_o *v73; // x21
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  Il2CppObject *v77; // x0
  float v78; // s0
  __int64 v79; // x0
  UnityEngine_Component_o *parent; // [xsp+0h] [xbp-90h]
  __int64 v81; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1B0FD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    sub_1BCAFF8(&long_TypeInfo, v3);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    sub_1BCAFF8(&TitleInfoSuperBossComponent_TypeInfo, v7);
    sub_1BCAFF8(&UISprite___TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_13337/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v9);
    byte_4B1B0FD = 1;
  }
  if ( this->fields.isEncountSuperBoss || this->fields._IsShowClearEvent_k__BackingField )
  {
    eventSuperBossEntity = this->fields.eventSuperBossEntity;
    if ( eventSuperBossEntity )
    {
      eventSuperBossEntity = (EventSuperBossEntity_o *)EventSuperBossEntity__GetUserSuperBossEntity(
                                                         eventSuperBossEntity,
                                                         0LL);
      v11 = eventSuperBossEntity;
      if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v12 = this->fields.eventSuperBossEntity;
      if ( v12 )
      {
        SUPERBOSS_ICON_SPNAME_PREFIX = TitleInfoSuperBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
        v14 = System_Int32__ToString((int)v12 + 56, 0LL);
        v15 = System_String__Concat_62450424(SUPERBOSS_ICON_SPNAME_PREFIX, v14, 0LL);
        TitleInfoSuperBossComponent__SetBossIcon(this, v15, v16);
        v17 = this->fields.eventSuperBossEntity;
        if ( v17 )
        {
          splitHp = v17->fields.splitHp;
          if ( splitHp )
          {
            max_length = splitHp->max_length;
            if ( max_length >= 1 )
            {
              p_hpBarSplitterList = &this->fields.hpBarSplitterList;
              if ( this->fields.hpBarSplitterList && this->fields.hpBarSplitPointList )
              {
                v21 = 1;
              }
              else
              {
                v22 = (struct UISprite_array *)sub_1BCB0A0(UISprite___TypeInfo, (unsigned int)max_length);
                this->fields.hpBarSplitterList = v22;
                sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.hpBarSplitterList, (int32_t)v22, v23, v24);
                v25 = (struct UISprite_array *)sub_1BCB0A0(UISprite___TypeInfo, (unsigned int)max_length);
                this->fields.hpBarSplitPointList = v25;
                sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.hpBarSplitPointList, (int32_t)v25, v26, v27);
                v21 = 0;
              }
              parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.hpBarSplitter, 0LL);
              eventSuperBossEntity = (EventSuperBossEntity_o *)GameObjectExtensions__GetParent(
                                                                 this->fields.hpBarSplitPoint,
                                                                 0LL);
              v30 = (UnityEngine_Component_o *)eventSuperBossEntity;
              for ( i = 0; max_length != i; ++i )
              {
                if ( (v21 & 1) == 0 )
                {
                  hpBarSplitterList = this->fields.hpBarSplitterList;
                  hpBarSplitter = (Il2CppObject *)this->fields.hpBarSplitter;
                  if ( i )
                  {
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Object__Instantiate_object_(
                                                                       hpBarSplitter,
                                                                       (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitterList )
                      goto LABEL_95;
                    v35 = eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1BCB134(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitterList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( i >= hpBarSplitterList->max_length )
                      goto LABEL_96;
                    v36 = &hpBarSplitterList->obj.klass + (int)i;
                    v36[4] = (Il2CppClass *)v35;
                    sub_1BCAF9C((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v35, v28, v34);
                    v37 = *p_hpBarSplitterList;
                    if ( !*p_hpBarSplitterList )
                      goto LABEL_95;
                    if ( i >= v37->max_length )
                      goto LABEL_96;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)v37->m_Items[i];
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    gameObject = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                   0LL);
                    GameObjectExtensions__SafeSetParent(gameObject, parent, 0LL);
                    hpBarSplitPointList = this->fields.hpBarSplitPointList;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Object__Instantiate_object_(
                                                                       (Il2CppObject *)this->fields.hpBarSplitPoint,
                                                                       (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitPointList )
                      goto LABEL_95;
                    v41 = eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1BCB134(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitPointList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( i >= hpBarSplitPointList->max_length )
                      goto LABEL_96;
                    v42 = &hpBarSplitPointList->obj.klass + (int)i;
                    v42[4] = (Il2CppClass *)v41;
                    sub_1BCAF9C((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v41, v28, v40);
                    v43 = this->fields.hpBarSplitPointList;
                    if ( !v43 )
                      goto LABEL_95;
                    if ( i >= v43->max_length )
                      goto LABEL_96;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)v43->m_Items[i];
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventSuperBossEntity, 0LL);
                    GameObjectExtensions__SafeSetParent(v44, v30, 0LL);
                  }
                  else
                  {
                    if ( !hpBarSplitter )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       this->fields.hpBarSplitter,
                                                                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitterList )
                      goto LABEL_95;
                    v46 = eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1BCB134(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitterList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                      {
LABEL_97:
                        v79 = sub_1BCB278(eventSuperBossEntity);
                        sub_1BCB120(v79, 0LL);
                      }
                    }
                    if ( !hpBarSplitterList->max_length )
                      goto LABEL_96;
                    hpBarSplitterList->m_Items[0] = (UISprite_o *)v46;
                    sub_1BCAF9C((CGThumbnailListItem_o *)hpBarSplitterList->m_Items, (int32_t)v46, v28, v45);
                    eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSplitPoint;
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    v47 = this->fields.hpBarSplitPointList;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !v47 )
                      goto LABEL_95;
                    v49 = eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1BCB134(
                                                                         eventSuperBossEntity,
                                                                         v47->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( !v47->max_length )
                      goto LABEL_96;
                    v47->m_Items[0] = (UISprite_o *)v49;
                    sub_1BCAF9C((CGThumbnailListItem_o *)v47->m_Items, (int32_t)v49, v28, v48);
                  }
                }
                v50 = this->fields.eventSuperBossEntity;
                if ( !v50 )
                  goto LABEL_95;
                v51 = v50->fields.splitHp;
                if ( !v51 )
                  goto LABEL_95;
                if ( i >= v51->max_length )
                  goto LABEL_96;
                HpSplitPositionX = TitleInfoSuperBossComponent__GetHpSplitPositionX(
                                     (TitleInfoSuperBossComponent_o *)eventSuperBossEntity,
                                     v51->m_Items[i],
                                     v50->fields.maxHp,
                                     v29);
                v53 = *p_hpBarSplitterList;
                if ( !*p_hpBarSplitterList )
                  goto LABEL_95;
                if ( i >= v53->max_length )
                  goto LABEL_96;
                eventSuperBossEntity = (EventSuperBossEntity_o *)v53->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v54 = HpSplitPositionX;
                eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                   0LL);
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v82.fields.y = 0.0;
                v82.fields.z = 0.0;
                v82.fields.x = v54;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, v82, 0LL);
                v55 = this->fields.hpBarSplitPointList;
                if ( !v55 )
                  goto LABEL_95;
                if ( i >= v55->max_length )
                  goto LABEL_96;
                eventSuperBossEntity = (EventSuperBossEntity_o *)v55->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                   0LL);
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v83.fields.y = 0.0;
                v83.fields.z = 0.0;
                v83.fields.x = v54;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, v83, 0LL);
                v57 = this->fields.eventSuperBossEntity;
                if ( !v57 )
                  goto LABEL_95;
                v58 = v57->fields.splitHp;
                if ( !v58 )
                  goto LABEL_95;
                if ( i >= v58->max_length )
                  goto LABEL_96;
                if ( !v11 )
                  goto LABEL_95;
                v59 = this->fields.hpBarSplitPointList;
                if ( !v59 )
                  goto LABEL_95;
                if ( i >= v59->max_length )
LABEL_96:
                  sub_1BCB25C(eventSuperBossEntity, method, v28);
                eventSuperBossEntity = (EventSuperBossEntity_o *)v59->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                if ( v58->m_Items[i] <= v11->fields.maxHp )
                  *(float *)&v56 = 0.0;
                else
                  *(float *)&v56 = 1.0;
                eventSuperBossEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, long double))&eventSuperBossEntity->klass[1]._1.byval_arg.bits)(
                                                                   eventSuperBossEntity,
                                                                   eventSuperBossEntity->klass[1]._1.this_arg.data,
                                                                   v56);
              }
            }
            eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
            if ( eventBossStatusUiEntity )
            {
              v84.fields.r = 0.0;
              v84.fields.g = 0.0;
              v84.fields.b = 0.0;
              v84.fields.a = 0.0;
              *(UnityEngine_Color_o *)&v61 = EventBossStatusUiEntity__GetTextEffectColor(
                                               eventBossStatusUiEntity,
                                               v84,
                                               0LL);
            }
            else
            {
              eventSuperBossEntity = this->fields.eventSuperBossEntity;
              if ( !eventSuperBossEntity )
                goto LABEL_95;
              *(UnityEngine_Color_o *)&v61 = EventSuperBossEntity__GetBossColor(eventSuperBossEntity, 0LL);
            }
            eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderWhite;
            v65 = v61;
            v66 = v62;
            v67 = v63;
            v68 = v64;
            if ( eventSuperBossEntity )
            {
              eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                 0LL);
              if ( eventSuperBossEntity )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventSuperBossEntity, 0, 0LL);
                eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderUnder;
                if ( eventSuperBossEntity )
                {
                  eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                     0LL);
                  if ( eventSuperBossEntity )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventSuperBossEntity, 0, 0LL);
                    v69 = this->fields.eventSuperBossEntity;
                    if ( v69 )
                    {
                      if ( v11 )
                      {
                        maxHp = v69->fields.maxHp;
                        eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel;
                        v71 = v11->fields.maxHp >= maxHp ? v69->fields.maxHp : v11->fields.maxHp;
                        if ( eventSuperBossEntity )
                        {
                          eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                             0LL);
                          if ( eventSuperBossEntity )
                          {
                            if ( UnityEngine_GameObject__get_activeSelf(
                                   (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                   0LL) )
                            {
                              totalHpLabel = this->fields.totalHpLabel;
                              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                              v73 = LocalizationManager__Get((System_String_o *)StringLiteral_13337/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
                              v81 = maxHp - v71;
                              v77 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v81, v74, v75, v76);
                              eventSuperBossEntity = (EventSuperBossEntity_o *)System_String__Format(v73, v77, 0LL);
                              if ( !totalHpLabel )
                                goto LABEL_95;
                              UILabel__set_text(totalHpLabel, (System_String_o *)eventSuperBossEntity, 0LL);
                            }
                            eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel;
                            if ( eventSuperBossEntity )
                            {
                              v85.fields.r = v65;
                              v85.fields.g = v66;
                              v85.fields.b = v67;
                              v85.fields.a = v68;
                              UILabel__set_effectColor((UILabel_o *)eventSuperBossEntity, v85, 0LL);
                              eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSlider;
                              if ( eventSuperBossEntity )
                              {
                                v78 = 1.0 - (double)v71 / (double)maxHp;
                                UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, v78, 0LL);
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
            }
          }
        }
      }
    }
LABEL_95:
    sub_1BCB254(eventSuperBossEntity, method);
  }
}


void __fastcall TitleInfoSuperBossComponent__SetSpriteFromEventUI(
        TitleInfoSuperBossComponent_o *this,
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
  if ( (byte_4B1B0FC & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, sprite);
    sub_1BCAFF8(&StringLiteral_15973/*"_"*/, v8);
    byte_4B1B0FC = 1;
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


void __fastcall TitleInfoSuperBossComponent__Setup(
        TitleInfoSuperBossComponent_o *this,
        EventSuperBossEntity_o *superBossEntity,
        UIAtlas_o *termAtlas,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct EventSuperBossEntity_o **p_eventSuperBossEntity; // x21
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  int32_t GaugeId; // w20
  _BOOL8 IsEncounted; // x0
  const MethodInfo *v24; // x4
  TitleInfoSuperBossComponent_o *v25; // x0
  const MethodInfo *v26; // x4
  TitleInfoSuperBossComponent_o *v27; // x0
  const MethodInfo *v28; // x4
  TitleInfoSuperBossComponent_o *v29; // x0
  const MethodInfo *v30; // x4
  TitleInfoSuperBossComponent_o *v31; // x0
  const MethodInfo *v32; // x4
  TitleInfoSuperBossComponent_o *v33; // x0
  const MethodInfo *v34; // x4
  TitleInfoSuperBossComponent_o *v35; // x0
  const MethodInfo *v36; // x4
  const MethodInfo *v37; // x1

  if ( (byte_4B1B0FA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, superBossEntity);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BCAFF8(&StringLiteral_19110/*"event_superboss_hp_split"*/, v7);
    sub_1BCAFF8(&StringLiteral_19114/*"event_superboss_hp_white"*/, v8);
    sub_1BCAFF8(&StringLiteral_19067/*"event_raid_hp_back"*/, v9);
    sub_1BCAFF8(&StringLiteral_19111/*"event_superboss_hp_split_frame"*/, v10);
    sub_1BCAFF8(&StringLiteral_19108/*"event_superboss_hp_lower"*/, v11);
    sub_1BCAFF8(&StringLiteral_19068/*"event_raid_hp_frame"*/, v12);
    sub_1BCAFF8(&StringLiteral_19112/*"event_superboss_hp_upper"*/, v13);
    byte_4B1B0FA = 1;
  }
  this->fields.eventSuperBossEntity = superBossEntity;
  p_eventSuperBossEntity = &this->fields.eventSuperBossEntity;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.eventSuperBossEntity,
    (int32_t)superBossEntity,
    (int32_t)termAtlas,
    method);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  this->fields.isEncountSuperBoss = 0;
  if ( eventSuperBossEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___),
          !*p_eventSuperBossEntity)
      || !Instance
      || ((EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                         (EventBossStatusUiMaster_o *)Instance,
                                         (*p_eventSuperBossEntity)->fields.eventId,
                                         (*p_eventSuperBossEntity)->fields.id,
                                         0LL),
           this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex,
           sub_1BCAF9C(
             (CGThumbnailListItem_o *)&this->fields.eventBossStatusUiEntity,
             (int32_t)EntityFromEventIdAndIndex,
             v19,
             v20),
           (eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity) == 0LL)
        ? (GaugeId = -1)
        : (GaugeId = EventBossStatusUiEntity__GetGaugeId(eventBossStatusUiEntity, 0LL)),
          (Instance = (Il2CppObject *)*p_eventSuperBossEntity) == 0LL) )
    {
      sub_1BCB254(Instance, v17);
    }
    IsEncounted = EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)Instance, 0LL);
    this->fields.isEncountSuperBoss = IsEncounted;
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      (TitleInfoSuperBossComponent_o *)IsEncounted,
      this->fields.hpBarUnderSprite,
      (System_String_o *)StringLiteral_19108/*"event_superboss_hp_lower"*/,
      GaugeId,
      v24);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v25,
      this->fields.hpBarUpperSprite,
      (System_String_o *)StringLiteral_19112/*"event_superboss_hp_upper"*/,
      GaugeId,
      v26);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v27,
      this->fields.hpBarWhiteSprite,
      (System_String_o *)StringLiteral_19114/*"event_superboss_hp_white"*/,
      GaugeId,
      v28);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v29,
      this->fields.hpSplitSprite,
      (System_String_o *)StringLiteral_19111/*"event_superboss_hp_split_frame"*/,
      GaugeId,
      v30);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v31,
      this->fields.hpSplitPointSprite,
      (System_String_o *)StringLiteral_19110/*"event_superboss_hp_split"*/,
      GaugeId,
      v32);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v33,
      this->fields.superBossHpFrame,
      (System_String_o *)StringLiteral_19068/*"event_raid_hp_frame"*/,
      GaugeId,
      v34);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v35,
      this->fields.superBossHpBg,
      (System_String_o *)StringLiteral_19067/*"event_raid_hp_back"*/,
      GaugeId,
      v36);
    TitleInfoSuperBossComponent__SetDisp(this, v37);
  }
}


void __fastcall TitleInfoSuperBossComponent__StartDamageAnimation(
        TitleInfoSuperBossComponent_o *this,
        AssetData_o *mapAssetData,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  TitleInfoSuperBossComponent_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  System_String_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  TitleInfoSuperBossComponent_c *v14; // x0
  Il2CppObject *Object_object__50315216; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *splitHpEffect; // x23
  TitleInfoSuperBossComponent_c *v19; // x0
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  TitleInfoSuperBossComponent_c *v23; // x0
  System_String_o *v24; // x0
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UnityEngine_Object_o *clearBossEffect; // x22
  const MethodInfo *v29; // x1
  TitleInfoSuperBossComponent_c *v30; // x0
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  v6 = this;
  if ( (byte_4B1B0FF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, mapAssetData);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&TitleInfoSuperBossComponent_TypeInfo, v8);
    this = (TitleInfoSuperBossComponent_o *)sub_1BCAFF8(&StringLiteral_15973/*"_"*/, v9);
    byte_4B1B0FF = 1;
  }
  eventSuperBossEntity = v6->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_22;
  v11 = System_Int32__ToString((int)eventSuperBossEntity + 16, 0LL);
  v6->fields.animEndCall = callBack;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v6->fields.animEndCall, (int32_t)callBack, v12, v13);
  v14 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v14 = TitleInfoSuperBossComponent_TypeInfo;
  }
  this = (TitleInfoSuperBossComponent_o *)System_String__Concat_62488672(
                                            v14->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
                                            (System_String_o *)StringLiteral_15973/*"_"*/,
                                            v11,
                                            0LL);
  if ( !mapAssetData )
LABEL_22:
    sub_1BCB254(this, mapAssetData);
  Object_object__50315216 = AssetData__GetObject_object__50315216(
                              mapAssetData,
                              (System_String_o *)this,
                              (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  v6->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)Object_object__50315216;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v6->fields.splitHpEffect, (int32_t)Object_object__50315216, v16, v17);
  splitHpEffect = (UnityEngine_Object_o *)v6->fields.splitHpEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(splitHpEffect, 0LL, 0LL) )
  {
    v19 = TitleInfoSuperBossComponent_TypeInfo;
    if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v19 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v20 = AssetData__GetObject_object__50315216(
            mapAssetData,
            v19->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
            (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
    v6->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)v20;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v6->fields.splitHpEffect, (int32_t)v20, v21, v22);
  }
  v23 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v23 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v24 = System_String__Concat_62488672(
          v23->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_15973/*"_"*/,
          v11,
          0LL);
  v25 = AssetData__GetObject_object__50315216(
          mapAssetData,
          v24,
          (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)v25;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v6->fields.clearBossEffect, (int32_t)v25, v26, v27);
  clearBossEffect = (UnityEngine_Object_o *)v6->fields.clearBossEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(clearBossEffect, 0LL, 0LL) )
  {
    v30 = TitleInfoSuperBossComponent_TypeInfo;
    if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v30 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v31 = AssetData__GetObject_object__50315216(
            mapAssetData,
            v30->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
            (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
    v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)v31;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v6->fields.clearBossEffect, (int32_t)v31, v32, v33);
  }
  TitleInfoSuperBossComponent__PlayFrameInBoss(v6, v29);
}


void __fastcall TitleInfoSuperBossComponent__UpdateDisp(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall TitleInfoSuperBossComponent__get_IsShowClearEvent(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._IsShowClearEvent_k__BackingField;
}


void __fastcall TitleInfoSuperBossComponent__set_IsShowClearEvent(
        TitleInfoSuperBossComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsShowClearEvent_k__BackingField = value;
}


void __fastcall TitleInfoSuperBossComponent___c__DisplayClass58_0___ctor(
        TitleInfoSuperBossComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoSuperBossComponent___c__DisplayClass58_0___PlayHpCut_b__0(
        TitleInfoSuperBossComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  TitleInfoSuperBossComponent___c__DisplayClass58_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct EasingObject_o *eo; // x9
  struct TitleInfoSuperBossComponent_o *_4__this; // x8
  float mNow; // s9
  float v12; // s0
  float v13; // s8
  struct TitleInfoSuperBossComponent_o *v14; // x8
  struct TitleInfoSuperBossComponent_o *v15; // x8
  UIProgressBar_o *hpBarSliderWhite; // x20
  float v17; // s0
  struct TitleInfoSuperBossComponent_o *v18; // x8
  UILabel_o *totalHpLabel; // x20
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  struct TitleInfoSuperBossComponent_o *v23; // x8
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  TitleInfoSuperBossComponent___c__DisplayClass58_0_o *v25; // x21
  Il2CppObject *v26; // x0
  struct TitleInfoSuperBossComponent_o *v27; // x8
  float HPsplitPoint; // s0
  UnityEngine_Object_o *splitHpEffect; // x20
  __int64 v30; // x2
  struct TitleInfoSuperBossComponent_o *v31; // x8
  Il2CppObject *v32; // x20
  struct TitleInfoSuperBossComponent_o *v33; // x8
  TitleInfoSuperBossComponent___c__DisplayClass58_0_o *v34; // x20
  UnityEngine_Component_o *Parent; // x0
  struct TitleInfoSuperBossComponent_o *v36; // x9
  struct UISprite_array *hpBarSplitterList; // x8
  __int64 HPsplitNo; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  TitleInfoSuperBossComponent_c *v42; // x0
  float *static_fields; // x8
  struct TitleInfoSuperBossComponent_o *v44; // x9
  struct UISprite_array *hpBarSplitPointList; // x8
  __int64 v46; // x9
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v48; // x8
  struct TitleInfoSuperBossComponent_o *v49; // x8
  double v50; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4B1B109 & 1) == 0 )
  {
    sub_1BCAFF8(&double_TypeInfo, method);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    sub_1BCAFF8(&TitleInfoSuperBossComponent_TypeInfo, v6);
    sub_1BCAFF8(&Method_UITweener_Begin_TweenAlpha___, v7);
    this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)sub_1BCAFF8(&StringLiteral_13337/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v8);
    byte_4B1B109 = 1;
  }
  eo = v2->fields.eo;
  if ( !eo )
    goto LABEL_46;
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  mNow = eo->fields.mNow;
  this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)_4__this->fields.hpBarSlider;
  v12 = fminf(mNow, 1.0);
  if ( mNow < 0.0 )
    v12 = 0.0;
  if ( !this )
    goto LABEL_46;
  v13 = _4__this->fields.HPfrom + (float)(v12 * (float)(_4__this->fields.HPto - _4__this->fields.HPfrom));
  UIProgressBar__set_value((UIProgressBar_o *)this, v13, 0LL);
  v14 = v2->fields.__4__this;
  if ( !v14 )
    goto LABEL_46;
  this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)v14->fields.hpBarSliderWhite;
  if ( !this )
    goto LABEL_46;
  UIProgressBar__set_value((UIProgressBar_o *)this, v13, 0LL);
  v15 = v2->fields.__4__this;
  if ( !v15 )
    goto LABEL_46;
  hpBarSliderWhite = (UIProgressBar_o *)v15->fields.hpBarSliderWhite;
  if ( !hpBarSliderWhite )
    goto LABEL_46;
  v17 = sinf(mNow * 3.1416);
  UIProgressBar__set_alpha(hpBarSliderWhite, v17 * 0.7, 0LL);
  v18 = v2->fields.__4__this;
  if ( !v18 )
    goto LABEL_46;
  totalHpLabel = v18->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_13337/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/,
                                                                  0LL);
  v23 = v2->fields.__4__this;
  if ( !v23 )
    goto LABEL_46;
  eventSuperBossEntity = v23->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_46;
  v25 = this;
  v50 = (float)(v13 * (float)eventSuperBossEntity->fields.maxHp);
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v50, v20, v21, v22);
  this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)System_String__Format((System_String_o *)v25, v26, 0LL);
  if ( !totalHpLabel )
    goto LABEL_46;
  UILabel__set_text(totalHpLabel, (System_String_o *)this, 0LL);
  v27 = v2->fields.__4__this;
  if ( !v27 )
    goto LABEL_46;
  HPsplitPoint = v27->fields.HPsplitPoint;
  if ( HPsplitPoint > -1.0 && v13 <= HPsplitPoint )
  {
    splitHpEffect = (UnityEngine_Object_o *)v27->fields.splitHpEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UnityEngine_Object__op_Implicit(splitHpEffect, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v31 = v2->fields.__4__this;
      if ( !v31 )
        goto LABEL_46;
      v32 = (Il2CppObject *)v31->fields.splitHpEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                      v32,
                                                                      (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v33 = v2->fields.__4__this;
      if ( !v33 )
        goto LABEL_46;
      v34 = this;
      Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v33->fields.hpBarSplitter, 0LL);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v34, Parent, 0LL);
      v36 = v2->fields.__4__this;
      if ( !v36 )
        goto LABEL_46;
      hpBarSplitterList = v36->fields.hpBarSplitterList;
      if ( !hpBarSplitterList )
        goto LABEL_46;
      HPsplitNo = v36->fields.HPsplitNo;
      if ( (unsigned int)HPsplitNo >= hpBarSplitterList->max_length )
        goto LABEL_47;
      this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)hpBarSplitterList->m_Items[HPsplitNo];
      if ( !this )
        goto LABEL_46;
      this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0LL);
      if ( !this )
        goto LABEL_46;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      x = localPosition.fields.x;
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      v42 = TitleInfoSuperBossComponent_TypeInfo;
      if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
        v42 = TitleInfoSuperBossComponent_TypeInfo;
      }
      static_fields = (float *)v42->static_fields;
      v52.fields.x = x + static_fields[9];
      v52.fields.y = y + static_fields[10];
      v52.fields.z = z + static_fields[11];
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v34, v52, 0LL);
    }
    v44 = v2->fields.__4__this;
    if ( !v44 )
      goto LABEL_46;
    hpBarSplitPointList = v44->fields.hpBarSplitPointList;
    if ( !hpBarSplitPointList )
      goto LABEL_46;
    v46 = v44->fields.HPsplitNo;
    if ( (unsigned int)v46 < hpBarSplitPointList->max_length )
    {
      this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)hpBarSplitPointList->m_Items[v46];
      if ( this )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v48 = TitleInfoSuperBossComponent_TypeInfo;
        if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
          v48 = TitleInfoSuperBossComponent_TypeInfo;
        }
        this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UITweener__Begin_object_(
                                                                        gameObject,
                                                                        v48->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                                        (const MethodInfo_30D2A08 *)Method_UITweener_Begin_TweenAlpha___);
        if ( this )
        {
          LODWORD(this[1].klass) = 2;
          this[4].klass = (TitleInfoSuperBossComponent___c__DisplayClass58_0_c *)1065353216;
          v49 = v2->fields.__4__this;
          if ( v49 )
          {
            *(_QWORD *)&v49->fields.HPsplitPoint = -1082130432LL;
            return;
          }
        }
      }
LABEL_46:
      sub_1BCB254(this, method);
    }
LABEL_47:
    sub_1BCB25C(this, method, v30);
  }
}