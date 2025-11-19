void TitleInfoSuperBossComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct TitleInfoSuperBossComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct TitleInfoSuperBossComponent_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  TitleInfoSuperBossComponent_c *v11; // x8
  struct TitleInfoSuperBossComponent_StaticFields *v12; // x9
  struct TitleInfoSuperBossComponent_StaticFields *v13; // x9
  struct TitleInfoSuperBossComponent_StaticFields *v14; // x8

  if ( (byte_4CB4E5B & 1) == 0 )
  {
    sub_1C6BA08(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_14506/*"TitleInfoEventSuperBossEffect_Dead"*/);
    sub_1C6BA08(&StringLiteral_14507/*"TitleInfoEventSuperBossEffect_Split"*/);
    sub_1C6BA08(&StringLiteral_19336/*"event_superboss_icon_"*/);
    byte_4CB4E5B = 1;
  }
  TitleInfoSuperBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_19336/*"event_superboss_icon_"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)TitleInfoSuperBossComponent_TypeInfo->static_fields, StringLiteral_19336/*"event_superboss_icon_"*/, v1, v2);
  v3 = StringLiteral_14507/*"TitleInfoEventSuperBossEffect_Split"*/;
  static_fields = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14507/*"TitleInfoEventSuperBossEffect_Split"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB, v3, v5, v6);
  v7 = StringLiteral_14506/*"TitleInfoEventSuperBossEffect_Dead"*/;
  v8 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v8->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14506/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->SUPERBOSS_CLEAR_EFFECT_PREFAB, v7, v9, v10);
  v11 = TitleInfoSuperBossComponent_TypeInfo;
  v12 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v12->SUPERBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v12->SUPERBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v13 = v11->static_fields;
  *(_QWORD *)&v13->SUPERBOSS_SPLIT_POS_DELTA.fields.x = 0x41200000BF000000LL;
  v13->SUPERBOSS_SPLIT_POS_DELTA.fields.z = 0.0;
  v14 = v11->static_fields;
  *(_OWORD *)&v14->ANIM_DURATION_FRAME_IN_BOSS = xmmword_CEBF20;
  v14->SUPERBOSS_HP_BAR_LENGTH = 264;
  v14->CLEAR_END_CALLBACK_DELAY = 1.5;
  *(_QWORD *)&v14->ANIM_DURATION_HP_DELETION = 0x3FE666663F333333LL;
}


void TitleInfoSuperBossComponent___ctor(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0);
}


float TitleInfoSuperBossComponent__ConvertHpToRate(
        TitleInfoSuperBossComponent_o *this,
        int64_t hp,
        int64_t maxHp,
        const MethodInfo *method)
{
  return 1.0 - (double)hp / (double)maxHp;
}


void TitleInfoSuperBossComponent__Destroy(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoSuperBossComponent__DoClearCallback(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_Action_o *onClearCall; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *superBossIconSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoSuperBossComponent_c *v9; // x8
  UnityEngine_GameObject_o *v10; // x20

  if ( (byte_4CB4E58 & 1) == 0 )
  {
    sub_1C6BA08(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C6BA08(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C6BA08(&StringLiteral_9894/*"OnEndAnimation"*/);
    byte_4CB4E58 = 1;
  }
  onClearCall = this->fields.onClearCall;
  this->fields.onClearCall = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onClearCall, 0, v2, v3);
  ActionExtensions__Call(onClearCall, 0);
  superBossIconSp = (UnityEngine_Component_o *)this->fields.superBossIconSp;
  if ( !superBossIconSp )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(superBossIconSp, 0);
  v9 = TitleInfoSuperBossComponent_TypeInfo;
  v10 = gameObject;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v9 = TitleInfoSuperBossComponent_TypeInfo;
  }
  superBossIconSp = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                 v10,
                                                 v9->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                 (const MethodInfo_3210C14 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !superBossIconSp )
LABEL_8:
    sub_1C6BC60(superBossIconSp, v6);
  LODWORD(superBossIconSp[1].monitor) = 1;
  superBossIconSp[5].monitor = (void *)1065353216;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9894/*"OnEndAnimation"*/,
    TitleInfoSuperBossComponent_TypeInfo->static_fields->CLEAR_END_CALLBACK_DELAY,
    0);
}


float TitleInfoSuperBossComponent__GetHpSplitPositionX(
        TitleInfoSuperBossComponent_o *this,
        int64_t splitHp,
        int64_t maxHp,
        const MethodInfo *method)
{
  TitleInfoSuperBossComponent_c *v6; // x0
  float v7; // s0

  if ( (byte_4CB4E59 & 1) == 0 )
  {
    sub_1C6BA08(&TitleInfoSuperBossComponent_TypeInfo);
    byte_4CB4E59 = 1;
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


bool TitleInfoSuperBossComponent__IsAlive(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  EventSuperBossEntity_o *eventSuperBossEntity; // x0

  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  return eventSuperBossEntity && !EventSuperBossEntity__IsCleard(eventSuperBossEntity, 0);
}


bool TitleInfoSuperBossComponent__IsDispPossible(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  return this->fields._IsShowClearEvent_k__BackingField || this->fields.isEncountSuperBoss;
}


bool TitleInfoSuperBossComponent__IsEventRaidBoss(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  return 0;
}


void TitleInfoSuperBossComponent__OnDestroy(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoSuperBossComponent__OnEndAnimation(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_animEndCall; // x0
  System_Action_o *animEndCall; // t1
  const MethodInfo *v7; // x1

  animEndCall = this->fields.animEndCall;
  p_animEndCall = (CGThumbnailListItem_o *)&this->fields.animEndCall;
  p_animEndCall->klass = 0;
  sub_1C6B9AC(p_animEndCall, 0, v2, v3);
  ActionExtensions__Call(animEndCall, 0);
  TitleInfoSuperBossComponent__SetDisp(this, v7);
}


void TitleInfoSuperBossComponent__PlayFrameInBoss(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoSuperBossComponent_c *v4; // x8
  UnityEngine_GameObject_o *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  float32x2_t *static_fields; // x8
  Il2CppObject *v9; // x20
  float v10; // s0
  void *v11; // x9
  UnityEngine_GameObject_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4CB4E53 & 1) == 0 )
  {
    sub_1C6BA08(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C6BA08(&Method_UITweener_Begin_TweenPosition___);
    sub_1C6BA08(&StringLiteral_10658/*"PlayHpNameAlpha"*/);
    byte_4CB4E53 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v4 = TitleInfoSuperBossComponent_TypeInfo;
  v5 = gameObject;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v4 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v6 = UITweener__Begin_object_(
         v5,
         v4->static_fields->ANIM_DURATION_FRAME_IN_BOSS,
         (const MethodInfo_3210C14 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v6 )
    sub_1C6BC60(0, v7);
  static_fields = (float32x2_t *)TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v9 = v6;
  v10 = this->fields.originPos.fields.z + static_fields[4].n64_f32[0];
  v6[8].klass = (Il2CppClass *)vadd_f32(*(float32x2_t *)&this->fields.originPos.fields.x, static_fields[3]).n64_u64[0];
  *(float *)&v6[8].monitor = v10;
  v11 = *(void **)&this->fields.originPos.fields.x;
  HIDWORD(v6[9].klass) = LODWORD(this->fields.originPos.fields.z);
  *(void **)((char *)&v6[8].monitor + 4) = v11;
  LODWORD(v6[2].klass) = 2;
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v9[5].klass = (Il2CppClass *)v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v9[5], (int32_t)v12, v13, v14);
  v15 = StringLiteral_10658/*"PlayHpNameAlpha"*/;
  v9[5].monitor = (void *)StringLiteral_10658/*"PlayHpNameAlpha"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v9[5].monitor, v15, v16, v17);
}


void TitleInfoSuperBossComponent__PlayHpCut(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  TitleInfoSuperBossComponent_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  TitleInfoSuperBossComponent_c *v14; // x0
  EasingObject_o *v15; // x21
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v17; // x22
  System_Action_o *v18; // x20

  if ( (byte_4CB4E55 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C6BA08(&Method_TitleInfoSuperBossComponent_PlayHpDeletion__);
    sub_1C6BA08(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C6BA08(&Method_TitleInfoSuperBossComponent___c__DisplayClass58_0__PlayHpCut_b__0__);
    sub_1C6BA08(&TitleInfoSuperBossComponent___c__DisplayClass58_0_TypeInfo);
    byte_4CB4E55 = 1;
  }
  v3 = sub_1C6BC54(TitleInfoSuperBossComponent___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_9;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v6, v7);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_9;
  TitleInfoSuperBossComponent__PlaySeByEventId(v4, eventSuperBossEntity->fields.eventId, 1, v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3194C14 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Component_object, v12, v13);
  v14 = TitleInfoSuperBossComponent_TypeInfo;
  v15 = *(EasingObject_o **)(v3 + 16);
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v14 = TitleInfoSuperBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v14->static_fields->ANIM_DURATION_HP_CUT;
  v17 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v3,
    Method_TitleInfoSuperBossComponent___c__DisplayClass58_0__PlayHpCut_b__0__,
    0);
  v18 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_TitleInfoSuperBossComponent_PlayHpDeletion__, 0);
  if ( !v15 )
LABEL_9:
    sub_1C6BC60(v4, v5);
  EasingObject__Play(v15, ANIM_DURATION_HP_CUT, v17, v18, 0.0, 0, 0);
}


void TitleInfoSuperBossComponent__PlayHpDeletion(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *hpBarSliderUnder; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoSuperBossComponent_c *v5; // x8
  UnityEngine_GameObject_o *v6; // x20
  UnityEngine_Component_o *v7; // x20
  UnityEngine_GameObject_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 *v13; // x8
  UnityEngine_Object_o *clearBossEffect; // x21
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x21
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  UILabel_o *totalHpLabel; // x20
  struct EventSuperBossEntity_o *v21; // x8
  int64_t maxHp; // x21
  System_String_o *v23; // x19
  Il2CppObject *v24; // x0
  unsigned __int64 v25; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB4E56 & 1) == 0 )
  {
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C6BA08(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C6BA08(&StringLiteral_9894/*"OnEndAnimation"*/);
    sub_1C6BA08(&StringLiteral_12794/*"SetClearAlpha"*/);
    sub_1C6BA08(&StringLiteral_13456/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/);
    byte_4CB4E56 = 1;
  }
  hpBarSliderUnder = (UnityEngine_Component_o *)this->fields.hpBarSliderUnder;
  if ( !hpBarSliderUnder )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject(hpBarSliderUnder, 0);
  v5 = TitleInfoSuperBossComponent_TypeInfo;
  v6 = gameObject;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v5 = TitleInfoSuperBossComponent_TypeInfo;
  }
  hpBarSliderUnder = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                  v6,
                                                  v5->static_fields->ANIM_DURATION_HP_DELETION,
                                                  (const MethodInfo_3210C14 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !hpBarSliderUnder )
    goto LABEL_23;
  v7 = hpBarSliderUnder;
  LODWORD(hpBarSliderUnder[1].monitor) = 1;
  hpBarSliderUnder[5].monitor = (void *)1065353216;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7[3].monitor = v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[3].monitor, (int32_t)v8, v9, v10);
  if ( this->fields.HPto <= 0.0 )
  {
    clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(clearBossEffect, 0, 0) )
    {
      v15 = (Il2CppObject *)this->fields.clearBossEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__Instantiate_object_(
              v15,
              (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v16, (UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v16, 0);
    }
    v13 = &StringLiteral_12794/*"SetClearAlpha"*/;
  }
  else
  {
    v13 = &StringLiteral_9894/*"OnEndAnimation"*/;
  }
  v17 = *v13;
  v7[3].fields.m_CachedPtr = *v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[3].fields, v17, v11, v12);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_23;
  TitleInfoSuperBossComponent__PlaySeByEventId(
    (TitleInfoSuperBossComponent_o *)hpBarSliderUnder,
    eventSuperBossEntity->fields.eventId,
    0,
    v18);
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  hpBarSliderUnder = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13456/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0);
  v21 = this->fields.eventSuperBossEntity;
  if ( !v21
    || (maxHp = v21->fields.maxHp,
        v23 = (System_String_o *)hpBarSliderUnder,
        (hpBarSliderUnder = (UnityEngine_Component_o *)EventSuperBossEntity__GetUserSuperBossEntity(v21, 0)) == 0)
    || (v25 = maxHp - (unsigned __int64)hpBarSliderUnder[1].monitor,
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v25),
        hpBarSliderUnder = (UnityEngine_Component_o *)System_String__Format(v23, v24, 0),
        !totalHpLabel) )
  {
LABEL_23:
    sub_1C6BC60(hpBarSliderUnder, method);
  }
  UILabel__set_text(totalHpLabel, (System_String_o *)hpBarSliderUnder, 0);
}


void TitleInfoSuperBossComponent__PlayHpNameAlpha(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *totalHpLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoSuperBossComponent_c *v5; // x8
  UnityEngine_GameObject_o *v6; // x20
  UnityEngine_Component_o *v7; // x20
  UnityEngine_GameObject_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4CB4E54 & 1) == 0 )
  {
    sub_1C6BA08(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C6BA08(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C6BA08(&StringLiteral_10657/*"PlayHpCut"*/);
    byte_4CB4E54 = 1;
  }
  totalHpLabel = (UnityEngine_Component_o *)this->fields.totalHpLabel;
  if ( !totalHpLabel )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(totalHpLabel, 0);
  v5 = TitleInfoSuperBossComponent_TypeInfo;
  v6 = gameObject;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v5 = TitleInfoSuperBossComponent_TypeInfo;
  }
  totalHpLabel = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                              v6,
                                              v5->static_fields->ANIM_DURATION_HP_NAME_ALPHA,
                                              (const MethodInfo_3210C14 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !totalHpLabel )
LABEL_8:
    sub_1C6BC60(totalHpLabel, method);
  v7 = totalHpLabel;
  totalHpLabel[5].monitor = (void *)0x3F80000000000000LL;
  LODWORD(totalHpLabel[1].monitor) = 1;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7[3].monitor = v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[3].monitor, (int32_t)v8, v9, v10);
  v11 = StringLiteral_10657/*"PlayHpCut"*/;
  v7[3].fields.m_CachedPtr = StringLiteral_10657/*"PlayHpCut"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[3].fields, v11, v12, v13);
}


void TitleInfoSuperBossComponent__PlaySeByEventId(
        TitleInfoSuperBossComponent_o *this,
        int32_t eventId,
        bool isPlay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_String_o **v8; // x20
  _QWORD *v9; // x0
  System_String_o *v10; // x20
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB4E5A & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_TitleInfoSuperBossComponent_PlaySeByEventId__);
    sub_1C6BA08(&StringLiteral_16863/*"ar12"*/);
    sub_1C6BA08(&StringLiteral_16876/*"ar60"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB4E5A = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v7);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    eventId,
    (const MethodInfo_33F9128 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( entity )
  {
    v8 = (System_String_o **)&StringLiteral_16876/*"ar60"*/;
    if ( !EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0) )
    {
      if ( entity )
      {
        if ( !EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0) )
          v8 = (System_String_o **)&StringLiteral_16863/*"ar12"*/;
      }
      else
      {
        v8 = (System_String_o **)&StringLiteral_16863/*"ar12"*/;
      }
    }
  }
  else
  {
    v8 = (System_String_o **)&StringLiteral_16863/*"ar12"*/;
  }
  v9 = Method_TitleInfoSuperBossComponent_PlaySeByEventId__;
  v10 = *v8;
  if ( (*((_BYTE *)Method_TitleInfoSuperBossComponent_PlaySeByEventId__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C6BA20(Method_TitleInfoSuperBossComponent_PlaySeByEventId__);
  v11 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v9, v9[4]);
  if ( isPlay )
    OverwriteAssetSoundName__PlaySeLoop(v11, v10, 1.0, 0.0, 0, 0);
  else
    OverwriteAssetSoundName__StopSe(v11, v10, 0.0, 0);
}


void TitleInfoSuperBossComponent__SetBossIcon(
        TitleInfoSuperBossComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  UISprite_o *superBossIconSp; // x21
  struct UISprite_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4CB4E4E & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    byte_4CB4E4E = 1;
  }
  superBossIconSp = this->fields.superBossIconSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v6 = (struct UISprite_o *)AtlasManager__SetEventUI(superBossIconSp, spName, 0);
  if ( !superBossIconSp )
    goto LABEL_11;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)superBossIconSp, (unsigned __int8)v6 & 1, 0);
  v6 = this->fields.superBossIconSp;
  if ( !v6 )
    goto LABEL_11;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6, 0) )
  {
    v6 = this->fields.superBossIconSp;
    if ( v6 )
    {
      ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
        v6,
        v6->klass->vtable._33_MakePixelPerfect.method);
      return;
    }
LABEL_11:
    sub_1C6BC60(v6, v7);
  }
}


void TitleInfoSuperBossComponent__SetClearAlpha(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  TitleInfoSuperBossComponent_c *v3; // x0

  if ( (byte_4CB4E57 & 1) == 0 )
  {
    sub_1C6BA08(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_5302/*"DoClearCallback"*/);
    byte_4CB4E57 = 1;
  }
  this->fields.isEncountSuperBoss = 0;
  v3 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v3 = TitleInfoSuperBossComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5302/*"DoClearCallback"*/,
    v3->static_fields->CLEAR_CALLBACK_DELAY,
    0);
}


void TitleInfoSuperBossComponent__SetDamageAnimation(
        TitleInfoSuperBossComponent_o *this,
        int64_t damage,
        System_Action_o *onClearCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  EventSuperBossEntity_o *eventSuperBossEntity; // x0
  struct EventSuperBossEntity_o *v9; // x9
  __int64 maxHp; // x8
  double v11; // d1
  float v12; // s0
  float v13; // s2
  float v14; // s5
  float v15; // s3
  float v16; // s0
  float v17; // s2
  struct System_Int64_array *splitHp; // x9
  int max_length; // w11
  int32_t v20; // w10
  int64_t v21; // x12
  float v22; // s1
  UnityEngine_Transform_o *v23; // x21
  TitleInfoSuperBossComponent_c *v24; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float *static_fields; // x8
  UILabel_o *totalHpLabel; // x21
  struct EventSuperBossEntity_o *v30; // x8
  System_String_o *v31; // x22
  Il2CppObject *v32; // x0
  long double v33; // q0
  struct EventSuperBossEntity_o *v34; // x8
  struct System_Int64_array *v35; // x9
  struct UISprite_array *hpBarSplitPointList; // x10
  int v37; // w21
  unsigned int v38; // w22
  struct System_Int64_array *v39; // x8
  struct UISprite_array *v40; // x9
  int64_t v41; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB4E51 & 1) == 0 )
  {
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_13456/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/);
    byte_4CB4E51 = 1;
  }
  this->fields.onClearCall = onClearCallback;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.onClearCall,
    (int32_t)onClearCallback,
    (int32_t)onClearCallback,
    method);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  eventSuperBossEntity = (EventSuperBossEntity_o *)EventSuperBossEntity__GetUserSuperBossEntity(eventSuperBossEntity, 0);
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  v9 = this->fields.eventSuperBossEntity;
  if ( !v9 )
    goto LABEL_55;
  maxHp = eventSuperBossEntity->fields.maxHp;
  v11 = (double)v9->fields.maxHp;
  v12 = 1.0 - (double)damage / v11;
  v13 = 1.0 - (double)maxHp / v11;
  v14 = fminf(v12, 1.0);
  v15 = fminf(v13, 1.0);
  v16 = v12 < 0.0 ? 0.0 : v14;
  v17 = v13 < 0.0 ? 0.0 : v15;
  this->fields.HPfrom = v16;
  this->fields.HPto = v17;
  *(_QWORD *)&this->fields.HPsplitPoint = -1082130432;
  splitHp = v9->fields.splitHp;
  if ( !splitHp )
    goto LABEL_55;
  max_length = splitHp->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      v21 = splitHp->m_Items[v20];
      if ( v21 > damage && v21 <= maxHp )
        break;
      if ( max_length == ++v20 )
        goto LABEL_20;
    }
    v22 = 1.0 - (double)v21 / v11;
    this->fields.HPsplitPoint = v22;
    this->fields.HPsplitNo = v20;
  }
LABEL_20:
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSlider;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, v16, 0);
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderWhite;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)eventSuperBossEntity,
                                                     0);
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventSuperBossEntity, 1, 0);
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderUnder;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)eventSuperBossEntity,
                                                     0);
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventSuperBossEntity, 1, 0);
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderWhite;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, this->fields.HPfrom, 0);
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderWhite;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  UIProgressBar__set_alpha((UIProgressBar_o *)eventSuperBossEntity, 0.0, 0);
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderUnder;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, this->fields.HPfrom, 0);
  eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                     0);
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  this->fields.originPos = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, 0);
  eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                     0);
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  v23 = (UnityEngine_Transform_o *)eventSuperBossEntity;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, 0);
  v24 = TitleInfoSuperBossComponent_TypeInfo;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v24 = TitleInfoSuperBossComponent_TypeInfo;
  }
  static_fields = (float *)v24->static_fields;
  v43.fields.x = x + static_fields[6];
  v43.fields.y = y + static_fields[7];
  v43.fields.z = z + static_fields[8];
  UnityEngine_Transform__set_localPosition(v23, v43, 0);
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  eventSuperBossEntity = (EventSuperBossEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13456/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0);
  v30 = this->fields.eventSuperBossEntity;
  if ( !v30 )
    goto LABEL_55;
  v31 = (System_String_o *)eventSuperBossEntity;
  v41 = v30->fields.maxHp - damage;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v41);
  eventSuperBossEntity = (EventSuperBossEntity_o *)System_String__Format(v31, v32, 0);
  if ( !totalHpLabel
    || (UILabel__set_text(totalHpLabel, (System_String_o *)eventSuperBossEntity, 0),
        (eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel) == 0)
    || (eventSuperBossEntity = (EventSuperBossEntity_o *)((__int64 (__fastcall *)(EventSuperBossEntity_o *, _QWORD, float))eventSuperBossEntity->klass[1]._1.byval_arg.data)(
                                                           eventSuperBossEntity,
                                                           *(_QWORD *)&eventSuperBossEntity->klass[1]._1.byval_arg.bits,
                                                           0.0),
        (v34 = this->fields.eventSuperBossEntity) == 0)
    || (v35 = v34->fields.splitHp) == 0 )
  {
LABEL_55:
    sub_1C6BC60(eventSuperBossEntity, v7);
  }
  hpBarSplitPointList = this->fields.hpBarSplitPointList;
  if ( hpBarSplitPointList )
  {
    v37 = v35->max_length;
    if ( v37 <= SLODWORD(hpBarSplitPointList->max_length) && v37 >= 1 )
    {
      v38 = 0;
      while ( 1 )
      {
        v39 = v34->fields.splitHp;
        if ( !v39 )
          goto LABEL_55;
        if ( v38 >= LODWORD(v39->max_length) )
          goto LABEL_57;
        v40 = this->fields.hpBarSplitPointList;
        if ( !v40 )
          goto LABEL_55;
        if ( v38 >= LODWORD(v40->max_length) )
LABEL_57:
          sub_1C6BC68(eventSuperBossEntity);
        eventSuperBossEntity = (EventSuperBossEntity_o *)v40->m_Items[v38];
        if ( !eventSuperBossEntity )
          goto LABEL_55;
        if ( v39->m_Items[v38] <= damage )
          *(float *)&v33 = 0.0;
        else
          *(float *)&v33 = 1.0;
        eventSuperBossEntity = (EventSuperBossEntity_o *)((__int64 (__fastcall *)(EventSuperBossEntity_o *, _QWORD, long double))eventSuperBossEntity->klass[1]._1.byval_arg.data)(
                                                           eventSuperBossEntity,
                                                           *(_QWORD *)&eventSuperBossEntity->klass[1]._1.byval_arg.bits,
                                                           v33);
        if ( v37 == ++v38 )
          return;
        v34 = this->fields.eventSuperBossEntity;
        if ( !v34 )
          goto LABEL_55;
      }
    }
  }
}


void TitleInfoSuperBossComponent__SetDisp(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  EventSuperBossEntity_o *eventSuperBossEntity; // x0
  EventSuperBossEntity_o *v4; // x20
  struct EventSuperBossEntity_o *v5; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX; // x21
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  const MethodInfo *v9; // x2
  struct EventSuperBossEntity_o *v10; // x8
  struct System_Int64_array *splitHp; // x8
  int max_length; // w21
  struct UISprite_array **p_hpBarSplitterList; // x22
  char v14; // w27
  struct UISprite_array *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct UISprite_array *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  UnityEngine_Component_o *v22; // x24
  unsigned int i; // w29
  struct UISprite_array *hpBarSplitterList; // x25
  Il2CppObject *hpBarSplitter; // x26
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  EventSuperBossEntity_o *v28; // x26
  Il2CppClass **v29; // x0
  struct UISprite_array *v30; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *hpBarSplitPointList; // x26
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  EventSuperBossEntity_o *v35; // x25
  Il2CppClass **v36; // x0
  struct UISprite_array *v37; // x8
  UnityEngine_GameObject_o *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  EventSuperBossEntity_o *v41; // x26
  struct UISprite_array *v42; // x25
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  EventSuperBossEntity_o *v45; // x26
  struct EventSuperBossEntity_o *v46; // x8
  struct System_Int64_array *v47; // x9
  float HpSplitPositionX; // s0
  struct UISprite_array *v49; // x8
  float v50; // s8
  struct UISprite_array *v51; // x8
  long double v52; // q0
  struct EventSuperBossEntity_o *v53; // x8
  struct System_Int64_array *v54; // x8
  struct UISprite_array *v55; // x9
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  struct EventSuperBossEntity_o *v61; // x8
  __int64 maxHp; // x22
  __int64 v63; // x23
  UILabel_o *totalHpLabel; // x20
  System_String_o *v65; // x21
  Il2CppObject *v66; // x0
  float v67; // s0
  __int64 v68; // x0
  UnityEngine_Component_o *parent; // [xsp+0h] [xbp-90h]
  __int64 v70; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB4E50 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C6BA08(&UISprite___TypeInfo);
    sub_1C6BA08(&StringLiteral_13456/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/);
    byte_4CB4E50 = 1;
  }
  if ( this->fields.isEncountSuperBoss || this->fields._IsShowClearEvent_k__BackingField )
  {
    eventSuperBossEntity = this->fields.eventSuperBossEntity;
    if ( eventSuperBossEntity )
    {
      eventSuperBossEntity = (EventSuperBossEntity_o *)EventSuperBossEntity__GetUserSuperBossEntity(
                                                         eventSuperBossEntity,
                                                         0);
      v4 = eventSuperBossEntity;
      if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v5 = this->fields.eventSuperBossEntity;
      if ( v5 )
      {
        SUPERBOSS_ICON_SPNAME_PREFIX = TitleInfoSuperBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
        v7 = System_Int32__ToString((int)v5 + 56, 0);
        v8 = System_String__Concat_63966792(SUPERBOSS_ICON_SPNAME_PREFIX, v7, 0);
        TitleInfoSuperBossComponent__SetBossIcon(this, v8, v9);
        v10 = this->fields.eventSuperBossEntity;
        if ( v10 )
        {
          splitHp = v10->fields.splitHp;
          if ( splitHp )
          {
            max_length = splitHp->max_length;
            if ( max_length >= 1 )
            {
              p_hpBarSplitterList = &this->fields.hpBarSplitterList;
              if ( this->fields.hpBarSplitterList && this->fields.hpBarSplitPointList )
              {
                v14 = 1;
              }
              else
              {
                v15 = (struct UISprite_array *)sub_1C6BAB0(UISprite___TypeInfo, (unsigned int)max_length);
                this->fields.hpBarSplitterList = v15;
                sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.hpBarSplitterList, (int32_t)v15, v16, v17);
                v18 = (struct UISprite_array *)sub_1C6BAB0(UISprite___TypeInfo, (unsigned int)max_length);
                this->fields.hpBarSplitPointList = v18;
                sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.hpBarSplitPointList, (int32_t)v18, v19, v20);
                v14 = 0;
              }
              parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.hpBarSplitter, 0);
              eventSuperBossEntity = (EventSuperBossEntity_o *)GameObjectExtensions__GetParent(
                                                                 this->fields.hpBarSplitPoint,
                                                                 0);
              v22 = (UnityEngine_Component_o *)eventSuperBossEntity;
              for ( i = 0; max_length != i; ++i )
              {
                if ( (v14 & 1) == 0 )
                {
                  hpBarSplitterList = this->fields.hpBarSplitterList;
                  hpBarSplitter = (Il2CppObject *)this->fields.hpBarSplitter;
                  if ( i )
                  {
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Object__Instantiate_object_(
                                                                       hpBarSplitter,
                                                                       (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitterList )
                      goto LABEL_95;
                    v28 = eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1C6BB44(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitterList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( i >= LODWORD(hpBarSplitterList->max_length) )
                      goto LABEL_96;
                    v29 = &hpBarSplitterList->obj.klass + (int)i;
                    v29[4] = (Il2CppClass *)v28;
                    sub_1C6B9AC((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v28, v26, v27);
                    v30 = *p_hpBarSplitterList;
                    if ( !*p_hpBarSplitterList )
                      goto LABEL_95;
                    if ( i >= LODWORD(v30->max_length) )
                      goto LABEL_96;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)v30->m_Items[i];
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    gameObject = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                   0);
                    GameObjectExtensions__SafeSetParent(gameObject, parent, 0);
                    hpBarSplitPointList = this->fields.hpBarSplitPointList;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Object__Instantiate_object_(
                                                                       (Il2CppObject *)this->fields.hpBarSplitPoint,
                                                                       (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitPointList )
                      goto LABEL_95;
                    v35 = eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1C6BB44(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitPointList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( i >= LODWORD(hpBarSplitPointList->max_length) )
                      goto LABEL_96;
                    v36 = &hpBarSplitPointList->obj.klass + (int)i;
                    v36[4] = (Il2CppClass *)v35;
                    sub_1C6B9AC((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v35, v33, v34);
                    v37 = this->fields.hpBarSplitPointList;
                    if ( !v37 )
                      goto LABEL_95;
                    if ( i >= LODWORD(v37->max_length) )
                      goto LABEL_96;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)v37->m_Items[i];
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventSuperBossEntity, 0);
                    GameObjectExtensions__SafeSetParent(v38, v22, 0);
                  }
                  else
                  {
                    if ( !hpBarSplitter )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       this->fields.hpBarSplitter,
                                                                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitterList )
                      goto LABEL_95;
                    v41 = eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1C6BB44(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitterList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                      {
LABEL_97:
                        v68 = sub_1C6BC84(eventSuperBossEntity);
                        sub_1C6BB30(v68, 0);
                      }
                    }
                    if ( !LODWORD(hpBarSplitterList->max_length) )
                      goto LABEL_96;
                    hpBarSplitterList->m_Items[0] = (UISprite_o *)v41;
                    sub_1C6B9AC((CGThumbnailListItem_o *)hpBarSplitterList->m_Items, (int32_t)v41, v39, v40);
                    eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSplitPoint;
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    v42 = this->fields.hpBarSplitPointList;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !v42 )
                      goto LABEL_95;
                    v45 = eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1C6BB44(
                                                                         eventSuperBossEntity,
                                                                         v42->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( !LODWORD(v42->max_length) )
                      goto LABEL_96;
                    v42->m_Items[0] = (UISprite_o *)v45;
                    sub_1C6B9AC((CGThumbnailListItem_o *)v42->m_Items, (int32_t)v45, v43, v44);
                  }
                }
                v46 = this->fields.eventSuperBossEntity;
                if ( !v46 )
                  goto LABEL_95;
                v47 = v46->fields.splitHp;
                if ( !v47 )
                  goto LABEL_95;
                if ( i >= LODWORD(v47->max_length) )
                  goto LABEL_96;
                HpSplitPositionX = TitleInfoSuperBossComponent__GetHpSplitPositionX(
                                     (TitleInfoSuperBossComponent_o *)eventSuperBossEntity,
                                     v47->m_Items[i],
                                     v46->fields.maxHp,
                                     v21);
                v49 = *p_hpBarSplitterList;
                if ( !*p_hpBarSplitterList )
                  goto LABEL_95;
                if ( i >= LODWORD(v49->max_length) )
                  goto LABEL_96;
                eventSuperBossEntity = (EventSuperBossEntity_o *)v49->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v50 = HpSplitPositionX;
                eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                   0);
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v71.fields.y = 0.0;
                v71.fields.z = 0.0;
                v71.fields.x = v50;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, v71, 0);
                v51 = this->fields.hpBarSplitPointList;
                if ( !v51 )
                  goto LABEL_95;
                if ( i >= LODWORD(v51->max_length) )
                  goto LABEL_96;
                eventSuperBossEntity = (EventSuperBossEntity_o *)v51->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                   0);
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v72.fields.y = 0.0;
                v72.fields.z = 0.0;
                v72.fields.x = v50;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, v72, 0);
                v53 = this->fields.eventSuperBossEntity;
                if ( !v53 )
                  goto LABEL_95;
                v54 = v53->fields.splitHp;
                if ( !v54 )
                  goto LABEL_95;
                if ( i >= LODWORD(v54->max_length) )
                  goto LABEL_96;
                if ( !v4 )
                  goto LABEL_95;
                v55 = this->fields.hpBarSplitPointList;
                if ( !v55 )
                  goto LABEL_95;
                if ( i >= LODWORD(v55->max_length) )
LABEL_96:
                  sub_1C6BC68(eventSuperBossEntity);
                eventSuperBossEntity = (EventSuperBossEntity_o *)v55->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                if ( v54->m_Items[i] <= v4->fields.maxHp )
                  *(float *)&v52 = 0.0;
                else
                  *(float *)&v52 = 1.0;
                eventSuperBossEntity = (EventSuperBossEntity_o *)((__int64 (__fastcall *)(EventSuperBossEntity_o *, _QWORD, long double))eventSuperBossEntity->klass[1]._1.byval_arg.data)(
                                                                   eventSuperBossEntity,
                                                                   *(_QWORD *)&eventSuperBossEntity->klass[1]._1.byval_arg.bits,
                                                                   v52);
              }
            }
            eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
            if ( eventBossStatusUiEntity )
            {
              v73.fields.r = 0.0;
              v73.fields.g = 0.0;
              v73.fields.b = 0.0;
              v73.fields.a = 0.0;
              TextEffectColor = EventBossStatusUiEntity__GetTextEffectColor(eventBossStatusUiEntity, v73, 0);
            }
            else
            {
              eventSuperBossEntity = this->fields.eventSuperBossEntity;
              if ( !eventSuperBossEntity )
                goto LABEL_95;
              TextEffectColor = EventSuperBossEntity__GetBossColor(eventSuperBossEntity, 0);
            }
            eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderWhite;
            r = TextEffectColor.fields.r;
            g = TextEffectColor.fields.g;
            b = TextEffectColor.fields.b;
            a = TextEffectColor.fields.a;
            if ( eventSuperBossEntity )
            {
              eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                 0);
              if ( eventSuperBossEntity )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventSuperBossEntity, 0, 0);
                eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderUnder;
                if ( eventSuperBossEntity )
                {
                  eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                     0);
                  if ( eventSuperBossEntity )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventSuperBossEntity, 0, 0);
                    v61 = this->fields.eventSuperBossEntity;
                    if ( v61 )
                    {
                      if ( v4 )
                      {
                        maxHp = v61->fields.maxHp;
                        eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel;
                        v63 = v4->fields.maxHp >= maxHp ? v61->fields.maxHp : v4->fields.maxHp;
                        if ( eventSuperBossEntity )
                        {
                          eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                             0);
                          if ( eventSuperBossEntity )
                          {
                            if ( UnityEngine_GameObject__get_activeSelf(
                                   (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                   0) )
                            {
                              totalHpLabel = this->fields.totalHpLabel;
                              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                              v65 = LocalizationManager__Get((System_String_o *)StringLiteral_13456/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0);
                              v70 = maxHp - v63;
                              v66 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v70);
                              eventSuperBossEntity = (EventSuperBossEntity_o *)System_String__Format(v65, v66, 0);
                              if ( !totalHpLabel )
                                goto LABEL_95;
                              UILabel__set_text(totalHpLabel, (System_String_o *)eventSuperBossEntity, 0);
                            }
                            eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel;
                            if ( eventSuperBossEntity )
                            {
                              v75.fields.r = r;
                              v75.fields.g = g;
                              v75.fields.b = b;
                              v75.fields.a = a;
                              UILabel__set_effectColor((UILabel_o *)eventSuperBossEntity, v75, 0);
                              eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSlider;
                              if ( eventSuperBossEntity )
                              {
                                v67 = 1.0 - (double)v63 / (double)maxHp;
                                UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, v67, 0);
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
    sub_1C6BC60(eventSuperBossEntity, method);
  }
}


void TitleInfoSuperBossComponent__SetSpriteFromEventUI(
        TitleInfoSuperBossComponent_o *this,
        UISprite_o *sprite,
        System_String_o *prefix,
        int32_t gaugeId,
        const MethodInfo *method)
{
  System_String_o *v8; // x0
  System_String_o *v9; // x21
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = gaugeId;
  if ( (byte_4CB4E4F & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_16102/*"_"*/);
    byte_4CB4E4F = 1;
  }
  if ( gaugeId < 0 )
    goto LABEL_12;
  v8 = System_Int32__ToString((int32_t)&v10, 0);
  v9 = System_String__Concat_64005056(prefix, (System_String_o *)StringLiteral_16102/*"_"*/, v8, 0);
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


void TitleInfoSuperBossComponent__Setup(
        TitleInfoSuperBossComponent_o *this,
        EventSuperBossEntity_o *superBossEntity,
        UIAtlas_o *termAtlas,
        const MethodInfo *method)
{
  struct EventSuperBossEntity_o **p_eventSuperBossEntity; // x21
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  int32_t GaugeId; // w20
  _BOOL8 IsEncounted; // x0
  const MethodInfo *v16; // x4
  TitleInfoSuperBossComponent_o *v17; // x0
  const MethodInfo *v18; // x4
  TitleInfoSuperBossComponent_o *v19; // x0
  const MethodInfo *v20; // x4
  TitleInfoSuperBossComponent_o *v21; // x0
  const MethodInfo *v22; // x4
  TitleInfoSuperBossComponent_o *v23; // x0
  const MethodInfo *v24; // x4
  TitleInfoSuperBossComponent_o *v25; // x0
  const MethodInfo *v26; // x4
  TitleInfoSuperBossComponent_o *v27; // x0
  const MethodInfo *v28; // x4
  const MethodInfo *v29; // x1

  if ( (byte_4CB4E4D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_19331/*"event_superboss_hp_split"*/);
    sub_1C6BA08(&StringLiteral_19335/*"event_superboss_hp_white"*/);
    sub_1C6BA08(&StringLiteral_19288/*"event_raid_hp_back"*/);
    sub_1C6BA08(&StringLiteral_19332/*"event_superboss_hp_split_frame"*/);
    sub_1C6BA08(&StringLiteral_19329/*"event_superboss_hp_lower"*/);
    sub_1C6BA08(&StringLiteral_19289/*"event_raid_hp_frame"*/);
    sub_1C6BA08(&StringLiteral_19333/*"event_superboss_hp_upper"*/);
    byte_4CB4E4D = 1;
  }
  this->fields.eventSuperBossEntity = superBossEntity;
  p_eventSuperBossEntity = &this->fields.eventSuperBossEntity;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.eventSuperBossEntity,
    (int32_t)superBossEntity,
    (int32_t)termAtlas,
    method);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  this->fields.isEncountSuperBoss = 0;
  if ( eventSuperBossEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___),
          !*p_eventSuperBossEntity)
      || !Instance
      || ((EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                         (EventBossStatusUiMaster_o *)Instance,
                                         (*p_eventSuperBossEntity)->fields.eventId,
                                         (*p_eventSuperBossEntity)->fields.id,
                                         0),
           this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex,
           sub_1C6B9AC(
             (CGThumbnailListItem_o *)&this->fields.eventBossStatusUiEntity,
             (int32_t)EntityFromEventIdAndIndex,
             v11,
             v12),
           (eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity) == 0)
        ? (GaugeId = -1)
        : (GaugeId = EventBossStatusUiEntity__GetGaugeId(eventBossStatusUiEntity, 0)),
          (Instance = (Il2CppObject *)*p_eventSuperBossEntity) == 0) )
    {
      sub_1C6BC60(Instance, v9);
    }
    IsEncounted = EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)Instance, 0);
    this->fields.isEncountSuperBoss = IsEncounted;
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      (TitleInfoSuperBossComponent_o *)IsEncounted,
      this->fields.hpBarUnderSprite,
      (System_String_o *)StringLiteral_19329/*"event_superboss_hp_lower"*/,
      GaugeId,
      v16);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v17,
      this->fields.hpBarUpperSprite,
      (System_String_o *)StringLiteral_19333/*"event_superboss_hp_upper"*/,
      GaugeId,
      v18);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v19,
      this->fields.hpBarWhiteSprite,
      (System_String_o *)StringLiteral_19335/*"event_superboss_hp_white"*/,
      GaugeId,
      v20);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v21,
      this->fields.hpSplitSprite,
      (System_String_o *)StringLiteral_19332/*"event_superboss_hp_split_frame"*/,
      GaugeId,
      v22);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v23,
      this->fields.hpSplitPointSprite,
      (System_String_o *)StringLiteral_19331/*"event_superboss_hp_split"*/,
      GaugeId,
      v24);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v25,
      this->fields.superBossHpFrame,
      (System_String_o *)StringLiteral_19289/*"event_raid_hp_frame"*/,
      GaugeId,
      v26);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v27,
      this->fields.superBossHpBg,
      (System_String_o *)StringLiteral_19288/*"event_raid_hp_back"*/,
      GaugeId,
      v28);
    TitleInfoSuperBossComponent__SetDisp(this, v29);
  }
}


void TitleInfoSuperBossComponent__StartDamageAnimation(
        TitleInfoSuperBossComponent_o *this,
        AssetData_o *mapAssetData,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  TitleInfoSuperBossComponent_o *v6; // x19
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  System_String_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  TitleInfoSuperBossComponent_c *v11; // x0
  Il2CppObject *Object_object__51495936; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *splitHpEffect; // x23
  TitleInfoSuperBossComponent_c *v16; // x0
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  TitleInfoSuperBossComponent_c *v20; // x0
  System_String_o *v21; // x0
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UnityEngine_Object_o *clearBossEffect; // x22
  const MethodInfo *v26; // x1
  TitleInfoSuperBossComponent_c *v27; // x0
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  v6 = this;
  if ( (byte_4CB4E52 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&TitleInfoSuperBossComponent_TypeInfo);
    this = (TitleInfoSuperBossComponent_o *)sub_1C6BA08(&StringLiteral_16102/*"_"*/);
    byte_4CB4E52 = 1;
  }
  eventSuperBossEntity = v6->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_22;
  v8 = System_Int32__ToString((int)eventSuperBossEntity + 16, 0);
  v6->fields.animEndCall = callBack;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v6->fields.animEndCall, (int32_t)callBack, v9, v10);
  v11 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v11 = TitleInfoSuperBossComponent_TypeInfo;
  }
  this = (TitleInfoSuperBossComponent_o *)System_String__Concat_64005056(
                                            v11->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
                                            (System_String_o *)StringLiteral_16102/*"_"*/,
                                            v8,
                                            0);
  if ( !mapAssetData )
LABEL_22:
    sub_1C6BC60(this, mapAssetData);
  Object_object__51495936 = AssetData__GetObject_object__51495936(
                              mapAssetData,
                              (System_String_o *)this,
                              (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  v6->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)Object_object__51495936;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v6->fields.splitHpEffect, (int32_t)Object_object__51495936, v13, v14);
  splitHpEffect = (UnityEngine_Object_o *)v6->fields.splitHpEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(splitHpEffect, 0, 0) )
  {
    v16 = TitleInfoSuperBossComponent_TypeInfo;
    if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v16 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v17 = AssetData__GetObject_object__51495936(
            mapAssetData,
            v16->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
            (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
    v6->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)v17;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v6->fields.splitHpEffect, (int32_t)v17, v18, v19);
  }
  v20 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v20 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v21 = System_String__Concat_64005056(
          v20->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_16102/*"_"*/,
          v8,
          0);
  v22 = AssetData__GetObject_object__51495936(
          mapAssetData,
          v21,
          (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)v22;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v6->fields.clearBossEffect, (int32_t)v22, v23, v24);
  clearBossEffect = (UnityEngine_Object_o *)v6->fields.clearBossEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(clearBossEffect, 0, 0) )
  {
    v27 = TitleInfoSuperBossComponent_TypeInfo;
    if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v27 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v28 = AssetData__GetObject_object__51495936(
            mapAssetData,
            v27->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
            (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
    v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)v28;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v6->fields.clearBossEffect, (int32_t)v28, v29, v30);
  }
  TitleInfoSuperBossComponent__PlayFrameInBoss(v6, v26);
}


void TitleInfoSuperBossComponent__UpdateDisp(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  ;
}


bool TitleInfoSuperBossComponent__get_IsShowClearEvent(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  return this->fields._IsShowClearEvent_k__BackingField;
}


void TitleInfoSuperBossComponent__set_IsShowClearEvent(
        TitleInfoSuperBossComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsShowClearEvent_k__BackingField = value;
}


void TitleInfoSuperBossComponent___c__DisplayClass58_0___ctor(
        TitleInfoSuperBossComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoSuperBossComponent___c__DisplayClass58_0___PlayHpCut_b__0(
        TitleInfoSuperBossComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  TitleInfoSuperBossComponent___c__DisplayClass58_0_o *v2; // x19
  struct EasingObject_o *eo; // x9
  struct TitleInfoSuperBossComponent_o *_4__this; // x8
  float mNow; // s9
  float v6; // s0
  float v7; // s8
  struct TitleInfoSuperBossComponent_o *v8; // x8
  struct TitleInfoSuperBossComponent_o *v9; // x8
  UIProgressBar_o *hpBarSliderWhite; // x20
  float v11; // s0
  struct TitleInfoSuperBossComponent_o *v12; // x8
  UILabel_o *totalHpLabel; // x20
  struct TitleInfoSuperBossComponent_o *v14; // x8
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  TitleInfoSuperBossComponent___c__DisplayClass58_0_o *v16; // x21
  Il2CppObject *v17; // x0
  struct TitleInfoSuperBossComponent_o *v18; // x8
  float HPsplitPoint; // s0
  UnityEngine_Object_o *splitHpEffect; // x20
  struct TitleInfoSuperBossComponent_o *v21; // x8
  Il2CppObject *v22; // x20
  struct TitleInfoSuperBossComponent_o *v23; // x8
  TitleInfoSuperBossComponent___c__DisplayClass58_0_o *v24; // x20
  UnityEngine_Component_o *Parent; // x0
  struct TitleInfoSuperBossComponent_o *v26; // x9
  struct UISprite_array *hpBarSplitterList; // x8
  __int64 HPsplitNo; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  TitleInfoSuperBossComponent_c *v32; // x0
  float *static_fields; // x8
  struct TitleInfoSuperBossComponent_o *v34; // x9
  struct UISprite_array *hpBarSplitPointList; // x8
  __int64 v36; // x9
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v38; // x8
  struct TitleInfoSuperBossComponent_o *v39; // x8
  double v40; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4CB4E5C & 1) == 0 )
  {
    sub_1C6BA08(&double_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C6BA08(&Method_UITweener_Begin_TweenAlpha___);
    this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)sub_1C6BA08(&StringLiteral_13456/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/);
    byte_4CB4E5C = 1;
  }
  eo = v2->fields.eo;
  if ( !eo )
    goto LABEL_46;
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  mNow = eo->fields.mNow;
  this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)_4__this->fields.hpBarSlider;
  v6 = fminf(mNow, 1.0);
  if ( mNow < 0.0 )
    v6 = 0.0;
  if ( !this )
    goto LABEL_46;
  v7 = _4__this->fields.HPfrom + (float)(v6 * (float)(_4__this->fields.HPto - _4__this->fields.HPfrom));
  UIProgressBar__set_value((UIProgressBar_o *)this, v7, 0);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_46;
  this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)v8->fields.hpBarSliderWhite;
  if ( !this )
    goto LABEL_46;
  UIProgressBar__set_value((UIProgressBar_o *)this, v7, 0);
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_46;
  hpBarSliderWhite = (UIProgressBar_o *)v9->fields.hpBarSliderWhite;
  if ( !hpBarSliderWhite )
    goto LABEL_46;
  v11 = sinf(mNow * 3.1416);
  UIProgressBar__set_alpha(hpBarSliderWhite, v11 * 0.7, 0);
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_46;
  totalHpLabel = v12->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_13456/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/,
                                                                  0);
  v14 = v2->fields.__4__this;
  if ( !v14 )
    goto LABEL_46;
  eventSuperBossEntity = v14->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_46;
  v16 = this;
  v40 = (float)(v7 * (float)eventSuperBossEntity->fields.maxHp);
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v40);
  this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)System_String__Format((System_String_o *)v16, v17, 0);
  if ( !totalHpLabel )
    goto LABEL_46;
  UILabel__set_text(totalHpLabel, (System_String_o *)this, 0);
  v18 = v2->fields.__4__this;
  if ( !v18 )
    goto LABEL_46;
  HPsplitPoint = v18->fields.HPsplitPoint;
  if ( HPsplitPoint > -1.0 && v7 <= HPsplitPoint )
  {
    splitHpEffect = (UnityEngine_Object_o *)v18->fields.splitHpEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UnityEngine_Object__op_Implicit(splitHpEffect, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v21 = v2->fields.__4__this;
      if ( !v21 )
        goto LABEL_46;
      v22 = (Il2CppObject *)v21->fields.splitHpEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                      v22,
                                                                      (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v23 = v2->fields.__4__this;
      if ( !v23 )
        goto LABEL_46;
      v24 = this;
      Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v23->fields.hpBarSplitter, 0);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v24, Parent, 0);
      v26 = v2->fields.__4__this;
      if ( !v26 )
        goto LABEL_46;
      hpBarSplitterList = v26->fields.hpBarSplitterList;
      if ( !hpBarSplitterList )
        goto LABEL_46;
      HPsplitNo = v26->fields.HPsplitNo;
      if ( (unsigned int)HPsplitNo >= LODWORD(hpBarSplitterList->max_length) )
        goto LABEL_47;
      this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)hpBarSplitterList->m_Items[HPsplitNo];
      if ( !this )
        goto LABEL_46;
      this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0);
      if ( !this )
        goto LABEL_46;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      x = localPosition.fields.x;
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      v32 = TitleInfoSuperBossComponent_TypeInfo;
      if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
        v32 = TitleInfoSuperBossComponent_TypeInfo;
      }
      static_fields = (float *)v32->static_fields;
      v42.fields.x = x + static_fields[9];
      v42.fields.y = y + static_fields[10];
      v42.fields.z = z + static_fields[11];
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v24, v42, 0);
    }
    v34 = v2->fields.__4__this;
    if ( !v34 )
      goto LABEL_46;
    hpBarSplitPointList = v34->fields.hpBarSplitPointList;
    if ( !hpBarSplitPointList )
      goto LABEL_46;
    v36 = v34->fields.HPsplitNo;
    if ( (unsigned int)v36 < LODWORD(hpBarSplitPointList->max_length) )
    {
      this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)hpBarSplitPointList->m_Items[v36];
      if ( this )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v38 = TitleInfoSuperBossComponent_TypeInfo;
        if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
          v38 = TitleInfoSuperBossComponent_TypeInfo;
        }
        this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UITweener__Begin_object_(
                                                                        gameObject,
                                                                        v38->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                                        (const MethodInfo_3210C14 *)Method_UITweener_Begin_TweenAlpha___);
        if ( this )
        {
          LODWORD(this[1].klass) = 2;
          this[4].klass = (TitleInfoSuperBossComponent___c__DisplayClass58_0_c *)1065353216;
          v39 = v2->fields.__4__this;
          if ( v39 )
          {
            *(_QWORD *)&v39->fields.HPsplitPoint = -1082130432;
            return;
          }
        }
      }
LABEL_46:
      sub_1C6BC60(this, method);
    }
LABEL_47:
    sub_1C6BC68(this);
  }
}