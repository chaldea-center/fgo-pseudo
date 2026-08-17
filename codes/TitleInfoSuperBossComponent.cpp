void TitleInfoSuperBossComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct TitleInfoSuperBossComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct TitleInfoSuperBossComponent_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  TitleInfoSuperBossComponent_c *v24; // x8
  struct TitleInfoSuperBossComponent_StaticFields *v25; // x9
  struct TitleInfoSuperBossComponent_StaticFields *v26; // x9
  struct TitleInfoSuperBossComponent_StaticFields *v27; // x8

  if ( (byte_596F34D & 1) == 0 )
  {
    sub_2213A60(&TitleInfoSuperBossComponent_TypeInfo);
    sub_2213A60(&StringLiteral_15092/*"TitleInfoEventSuperBossEffect_Dead"*/);
    sub_2213A60(&StringLiteral_15093/*"TitleInfoEventSuperBossEffect_Split"*/);
    sub_2213A60(&StringLiteral_20179/*"event_superboss_icon_"*/);
    byte_596F34D = 1;
  }
  v7 = StringLiteral_20179/*"event_superboss_icon_"*/;
  TitleInfoSuperBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_20179/*"event_superboss_icon_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)TitleInfoSuperBossComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_15093/*"TitleInfoEventSuperBossEffect_Split"*/;
  static_fields = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15093/*"TitleInfoEventSuperBossEffect_Split"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_15092/*"TitleInfoEventSuperBossEffect_Dead"*/;
  v17 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v17->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15092/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v17->SUPERBOSS_CLEAR_EFFECT_PREFAB,
    v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = TitleInfoSuperBossComponent_TypeInfo;
  v25 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v25->SUPERBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v25->SUPERBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v26 = v24->static_fields;
  *(_QWORD *)&v26->SUPERBOSS_SPLIT_POS_DELTA.fields.x = 0x41200000BF000000LL;
  v26->SUPERBOSS_SPLIT_POS_DELTA.fields.z = 0.0;
  v27 = v24->static_fields;
  *(_OWORD *)&v27->ANIM_DURATION_FRAME_IN_BOSS = xmmword_E9C4F0;
  v27->SUPERBOSS_HP_BAR_LENGTH = 264;
  *(_QWORD *)&v27->ANIM_DURATION_HP_DELETION = 0x3FE666663F333333LL;
  v27->CLEAR_END_CALLBACK_DELAY = 1.5;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *onClearCall; // x21
  __int64 v10; // x1
  UnityEngine_Component_o *superBossIconSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  TitleInfoSuperBossComponent_c *v15; // x8
  UnityEngine_GameObject_o *v16; // x20
  struct TitleInfoSuperBossComponent_StaticFields *static_fields; // x10
  float CLEAR_END_CALLBACK_DELAY; // s0
  System_String_o *v19; // x1

  if ( (byte_596F34A & 1) == 0 )
  {
    sub_2213A60(&TitleInfoSuperBossComponent_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenAlpha___);
    sub_2213A60(&StringLiteral_10299/*"OnEndAnimation"*/);
    byte_596F34A = 1;
  }
  onClearCall = this->fields.onClearCall;
  this->fields.onClearCall = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClearCall, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(onClearCall, 0);
  superBossIconSp = (UnityEngine_Component_o *)this->fields.superBossIconSp;
  if ( !superBossIconSp )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(superBossIconSp, 0);
  v15 = TitleInfoSuperBossComponent_TypeInfo;
  v16 = gameObject;
  if ( !*(&TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v13, v14);
    v15 = TitleInfoSuperBossComponent_TypeInfo;
  }
  superBossIconSp = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                 v16,
                                                 v15->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                 (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !superBossIconSp )
LABEL_8:
    sub_2213CDC(superBossIconSp, v10);
  static_fields = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  superBossIconSp[5].monitor = (void *)1065353216;
  CLEAR_END_CALLBACK_DELAY = static_fields->CLEAR_END_CALLBACK_DELAY;
  v19 = (System_String_o *)StringLiteral_10299/*"OnEndAnimation"*/;
  LODWORD(superBossIconSp[1].monitor) = 1;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v19, CLEAR_END_CALLBACK_DELAY, 0);
}


float TitleInfoSuperBossComponent__GetHpSplitPositionX(
        TitleInfoSuperBossComponent_o *this,
        int64_t splitHp,
        int64_t maxHp,
        const MethodInfo *method)
{
  TitleInfoSuperBossComponent_c *v6; // x0
  float v7; // s0

  if ( (byte_596F34B & 1) == 0 )
  {
    sub_2213A60(&TitleInfoSuperBossComponent_TypeInfo);
    byte_596F34B = 1;
  }
  v6 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !*(&TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, splitHp, maxHp);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_animEndCall; // x0
  System_Action_o *animEndCall; // t1
  const MethodInfo *v11; // x1

  animEndCall = this->fields.animEndCall;
  p_animEndCall = (MissionNaviTransitionBoardItem_o *)&this->fields.animEndCall;
  p_animEndCall->klass = 0;
  sub_2213A04(p_animEndCall, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndCall, 0);
  TitleInfoSuperBossComponent__SetDisp(this, v11);
}


void TitleInfoSuperBossComponent__PlayFrameInBoss(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  TitleInfoSuperBossComponent_c *v6; // x8
  UnityEngine_GameObject_o *v7; // x20
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  float z; // s2
  Il2CppObject *v11; // x20
  float32x2_t *static_fields; // x8
  float v13; // s3
  float v14; // w9
  UnityEngine_GameObject_o *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_596F345 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoSuperBossComponent_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenPosition___);
    sub_2213A60(&StringLiteral_11110/*"PlayHpNameAlpha"*/);
    byte_596F345 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = TitleInfoSuperBossComponent_TypeInfo;
  v7 = gameObject;
  if ( !*(&TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v4, v5);
    v6 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v8 = UITweener__Begin_object_(
         v7,
         v6->static_fields->ANIM_DURATION_FRAME_IN_BOSS,
         (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v8 )
    sub_2213CDC(0, v9);
  z = this->fields.originPos.fields.z;
  v11 = v8;
  static_fields = (float32x2_t *)TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v13 = static_fields[4].n64_f32[0];
  v8[8].klass = (Il2CppClass *)vadd_f32(*(float32x2_t *)&this->fields.originPos.fields.x, static_fields[3]).n64_u64[0];
  *(float *)&v8[8].monitor = z + v13;
  v14 = this->fields.originPos.fields.z;
  *(void **)((char *)&v8[8].monitor + 4) = *(void **)&this->fields.originPos.fields.x;
  *((float *)&v8[9].klass + 1) = v14;
  LODWORD(v8[2].klass) = 2;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11[5].klass = (Il2CppClass *)v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[5], (int32_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = StringLiteral_11110/*"PlayHpNameAlpha"*/;
  v11[5].monitor = (void *)StringLiteral_11110/*"PlayHpNameAlpha"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[5].monitor, v22, v23, v24, v25, v26, v27, v28);
}


void TitleInfoSuperBossComponent__PlayHpCut(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  TitleInfoSuperBossComponent_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x3
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  __int64 v23; // x2
  TitleInfoSuperBossComponent_c *v24; // x0
  EasingObject_o *v25; // x21
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v27; // x22
  System_Action_o *v28; // x20

  if ( (byte_596F347 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_2213A60(&Method_TitleInfoSuperBossComponent_PlayHpDeletion__);
    sub_2213A60(&TitleInfoSuperBossComponent_TypeInfo);
    sub_2213A60(&Method_TitleInfoSuperBossComponent___c__DisplayClass58_0__PlayHpCut_b__0__);
    sub_2213A60(&TitleInfoSuperBossComponent___c__DisplayClass58_0_TypeInfo);
    byte_596F347 = 1;
  }
  v3 = sub_2213CCC(TitleInfoSuperBossComponent___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_9;
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_9;
  TitleInfoSuperBossComponent__PlaySeByEventId(v4, eventSuperBossEntity->fields.eventId, 1, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)Component_object, v16, v17, v18, v19, v20, v21);
  v24 = TitleInfoSuperBossComponent_TypeInfo;
  v25 = *(EasingObject_o **)(v3 + 16);
  if ( !*(&TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v22, v23);
    v24 = TitleInfoSuperBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v24->static_fields->ANIM_DURATION_HP_CUT;
  v27 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v3,
    Method_TitleInfoSuperBossComponent___c__DisplayClass58_0__PlayHpCut_b__0__,
    0);
  v28 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_TitleInfoSuperBossComponent_PlayHpDeletion__, 0);
  if ( !v25 )
LABEL_9:
    sub_2213CDC(v4, v5);
  EasingObject__Play(v25, ANIM_DURATION_HP_CUT, v27, v28, 0.0, 0, 0);
}


void TitleInfoSuperBossComponent__PlayHpDeletion(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *hpBarSliderUnder; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  TitleInfoSuperBossComponent_c *v7; // x8
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Component_o *v9; // x20
  UnityEngine_GameObject_o *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 *v24; // x8
  UnityEngine_Object_o *clearBossEffect; // x21
  __int64 v26; // x1
  Il2CppObject *v27; // x21
  Il2CppObject *v28; // x21
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  UILabel_o *totalHpLabel; // x20
  struct EventSuperBossEntity_o *v35; // x8
  System_String_o *v36; // x19
  int64_t maxHp; // x21
  Il2CppObject *v38; // x0
  unsigned __int64 v39; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F348 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TitleInfoSuperBossComponent_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenAlpha___);
    sub_2213A60(&StringLiteral_10299/*"OnEndAnimation"*/);
    sub_2213A60(&StringLiteral_13328/*"SetClearAlpha"*/);
    sub_2213A60(&StringLiteral_14010/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/);
    byte_596F348 = 1;
  }
  hpBarSliderUnder = (UnityEngine_Component_o *)this->fields.hpBarSliderUnder;
  if ( !hpBarSliderUnder )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject(hpBarSliderUnder, 0);
  v7 = TitleInfoSuperBossComponent_TypeInfo;
  v8 = gameObject;
  if ( !*(&TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v5, v6);
    v7 = TitleInfoSuperBossComponent_TypeInfo;
  }
  hpBarSliderUnder = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                  v8,
                                                  v7->static_fields->ANIM_DURATION_HP_DELETION,
                                                  (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !hpBarSliderUnder )
    goto LABEL_23;
  v9 = hpBarSliderUnder;
  LODWORD(hpBarSliderUnder[1].monitor) = 1;
  hpBarSliderUnder[5].monitor = (void *)1065353216;
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v9[3].monitor = v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9[3].monitor, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  if ( this->fields.HPto <= 0.0 )
  {
    clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
    if ( UnityEngine_Object__op_Inequality(clearBossEffect, 0, 0) )
    {
      v27 = (Il2CppObject *)this->fields.clearBossEffect;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v18);
      v28 = UnityEngine_Object__Instantiate_object_(
              v27,
              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v28, (UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v28, 0);
    }
    v24 = &StringLiteral_13328/*"SetClearAlpha"*/;
  }
  else
  {
    v24 = &StringLiteral_10299/*"OnEndAnimation"*/;
  }
  v29 = *v24;
  v9[3].fields.m_CachedPtr = *v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9[3].fields, v29, v18, v19, v20, v21, v22, v23);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_23;
  TitleInfoSuperBossComponent__PlaySeByEventId(
    (TitleInfoSuperBossComponent_o *)hpBarSliderUnder,
    eventSuperBossEntity->fields.eventId,
    0,
    v30);
  totalHpLabel = this->fields.totalHpLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32, v33);
  hpBarSliderUnder = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14010/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0);
  v35 = this->fields.eventSuperBossEntity;
  if ( !v35
    || (v36 = (System_String_o *)hpBarSliderUnder,
        maxHp = v35->fields.maxHp,
        (hpBarSliderUnder = (UnityEngine_Component_o *)EventSuperBossEntity__GetUserSuperBossEntity(v35, 0)) == 0)
    || (v39 = maxHp - (unsigned __int64)hpBarSliderUnder[1].monitor,
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v39),
        hpBarSliderUnder = (UnityEngine_Component_o *)System_String__Format(v36, v38, 0),
        !totalHpLabel) )
  {
LABEL_23:
    sub_2213CDC(hpBarSliderUnder, method);
  }
  UILabel__set_text(totalHpLabel, (System_String_o *)hpBarSliderUnder, 0);
}


void TitleInfoSuperBossComponent__PlayHpNameAlpha(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *totalHpLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  TitleInfoSuperBossComponent_c *v7; // x8
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Component_o *v9; // x20
  UnityEngine_GameObject_o *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596F346 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoSuperBossComponent_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenAlpha___);
    sub_2213A60(&StringLiteral_11109/*"PlayHpCut"*/);
    byte_596F346 = 1;
  }
  totalHpLabel = (UnityEngine_Component_o *)this->fields.totalHpLabel;
  if ( !totalHpLabel )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(totalHpLabel, 0);
  v7 = TitleInfoSuperBossComponent_TypeInfo;
  v8 = gameObject;
  if ( !*(&TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v5, v6);
    v7 = TitleInfoSuperBossComponent_TypeInfo;
  }
  totalHpLabel = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                              v8,
                                              v7->static_fields->ANIM_DURATION_HP_NAME_ALPHA,
                                              (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !totalHpLabel )
LABEL_8:
    sub_2213CDC(totalHpLabel, method);
  v9 = totalHpLabel;
  LODWORD(totalHpLabel[1].monitor) = 1;
  totalHpLabel[5].monitor = (void *)0x3F80000000000000LL;
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v9[3].monitor = v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9[3].monitor, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_11109/*"PlayHpCut"*/;
  v9[3].fields.m_CachedPtr = StringLiteral_11109/*"PlayHpCut"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9[3].fields, v17, v18, v19, v20, v21, v22, v23);
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
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F34C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_TitleInfoSuperBossComponent_PlaySeByEventId__);
    sub_2213A60(&StringLiteral_17561/*"ar12"*/);
    sub_2213A60(&StringLiteral_17574/*"ar60"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F34C = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v7);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    eventId,
    (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( entity )
  {
    v8 = (System_String_o **)&StringLiteral_17574/*"ar60"*/;
    if ( !EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0) )
    {
      if ( entity )
      {
        if ( !EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0) )
          v8 = (System_String_o **)&StringLiteral_17561/*"ar12"*/;
      }
      else
      {
        v8 = (System_String_o **)&StringLiteral_17561/*"ar12"*/;
      }
    }
  }
  else
  {
    v8 = (System_String_o **)&StringLiteral_17561/*"ar12"*/;
  }
  v9 = Method_TitleInfoSuperBossComponent_PlaySeByEventId__;
  v10 = *v8;
  if ( isPlay )
  {
    if ( (*((_BYTE *)Method_TitleInfoSuperBossComponent_PlaySeByEventId__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_2213A78(Method_TitleInfoSuperBossComponent_PlaySeByEventId__);
    v11 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
    OverwriteAssetSoundName__PlaySeLoop(v11, v10, 1.0, 0.0, 0, 0);
  }
  else
  {
    if ( (*((_BYTE *)Method_TitleInfoSuperBossComponent_PlaySeByEventId__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_2213A78(Method_TitleInfoSuperBossComponent_PlaySeByEventId__);
    v12 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
    OverwriteAssetSoundName__StopSe(v12, v10, 0.0, 0);
  }
}


void TitleInfoSuperBossComponent__SetBossIcon(
        TitleInfoSuperBossComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  UISprite_o *superBossIconSp; // x21
  struct UISprite_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_596F340 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    byte_596F340 = 1;
  }
  superBossIconSp = this->fields.superBossIconSp;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, spName, method);
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
    sub_2213CDC(v6, v7);
  }
}


void TitleInfoSuperBossComponent__SetClearAlpha(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoSuperBossComponent_c *v4; // x0
  int v5; // w8

  if ( (byte_596F349 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoSuperBossComponent_TypeInfo);
    sub_2213A60(&StringLiteral_5505/*"DoClearCallback"*/);
    byte_596F349 = 1;
  }
  v4 = TitleInfoSuperBossComponent_TypeInfo;
  v5 = *(&TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished + 1);
  this->fields.isEncountSuperBoss = 0;
  if ( !v5 )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TitleInfoSuperBossComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5505/*"DoClearCallback"*/,
    v4->static_fields->CLEAR_CALLBACK_DELAY,
    0);
}


void TitleInfoSuperBossComponent__SetDamageAnimation(
        TitleInfoSuperBossComponent_o *this,
        int64_t damage,
        System_Action_o *onClearCallback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  EventSuperBossEntity_o *eventSuperBossEntity; // x0
  struct EventSuperBossEntity_o *v13; // x9
  int64x2_t v14; // q0
  signed __int64 maxHp; // x8
  double v16; // d1
  struct System_Int64_array *splitHp; // x11
  float64x2_t v23; // q0
  unsigned __int64 v24; // d0
  il2cpp_array_size_t max_length; // x10
  __int64 v26; // x9
  int64_t *m_Items; // x11
  int64_t v28; // x12
  float v29; // s1
  UnityEngine_Transform_o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  float x; // s8
  float y; // s9
  TitleInfoSuperBossComponent_c *v35; // x0
  float z; // s10
  float *static_fields; // x8
  __int64 v38; // x1
  __int64 v39; // x2
  UILabel_o *totalHpLabel; // x21
  struct EventSuperBossEntity_o *v41; // x8
  System_String_o *v42; // x22
  Il2CppObject *v43; // x0
  long double v44; // q0
  struct EventSuperBossEntity_o *v45; // x8
  struct System_Int64_array *v46; // x9
  struct UISprite_array *hpBarSplitPointList; // x8
  __int64 max_length_low; // x21
  unsigned __int64 v49; // x22
  struct EventSuperBossEntity_o *v50; // x8
  struct System_Int64_array *v51; // x8
  int64_t v52; // x9
  struct UISprite_array *v53; // x8
  EventSuperBossEntity_c *klass; // x8
  int64_t v55; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596F343 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&TitleInfoSuperBossComponent_TypeInfo);
    sub_2213A60(&StringLiteral_14010/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/);
    byte_596F343 = 1;
  }
  this->fields.onClearCall = onClearCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClearCall,
    (int32_t)onClearCallback,
    (System_String_o *)onClearCallback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_53;
  eventSuperBossEntity = (EventSuperBossEntity_o *)EventSuperBossEntity__GetUserSuperBossEntity(eventSuperBossEntity, 0);
  if ( !eventSuperBossEntity )
    goto LABEL_53;
  v13 = this->fields.eventSuperBossEntity;
  if ( !v13 )
    goto LABEL_53;
  v14.n128_u64[0] = damage;
  maxHp = eventSuperBossEntity->fields.maxHp;
  v16 = (double)v13->fields.maxHp;
  v14.n128_u64[1] = maxHp;
  *(_QWORD *)&this->fields.HPsplitPoint = -1082130432;
  splitHp = v13->fields.splitHp;
  __asm { FMOV            V2.2D, #1.0 }
  v23 = vsubq_f64(_Q2, vdivq_f64(vcvtq_f64_s64(v14), vdupq_lane_s64(*(__int64 *)&v16, 0)));
  __asm { FMOV            V2.2S, #1.0 }
  v23.n128_u64[0] = vcvt_f32_f64(v23).n64_u64[0];
  v24 = vbic_s8(
          vbsl_s8(
            vcgt_f32((float32x2_t)v23.n128_u64[0], (float32x2_t)_Q2.n128_u64[0]),
            (int8x8_t)_Q2.n128_u64[0],
            (int8x8_t)v23.n128_u64[0]),
          vcltz_f32((float32x2_t)v23.n128_u64[0])).n64_u64[0];
  *(_QWORD *)&this->fields.HPfrom = v24;
  if ( !splitHp )
    goto LABEL_53;
  max_length = splitHp->max_length;
  if ( (int)max_length >= 1 )
  {
    v26 = 0;
    m_Items = splitHp->m_Items;
    while ( 1 )
    {
      v28 = m_Items[v26];
      if ( v28 > damage && v28 <= maxHp )
        break;
      if ( (_DWORD)max_length == (_DWORD)++v26 )
        goto LABEL_14;
    }
    this->fields.HPsplitNo = v26;
    v29 = 1.0 - (double)v28 / v16;
    this->fields.HPsplitPoint = v29;
  }
LABEL_14:
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSlider;
  if ( !eventSuperBossEntity )
    goto LABEL_53;
  UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, *(float *)&v24, 0);
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderWhite;
  if ( !eventSuperBossEntity )
    goto LABEL_53;
  eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)eventSuperBossEntity,
                                                     0);
  if ( !eventSuperBossEntity )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventSuperBossEntity, 1, 0);
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderUnder;
  if ( !eventSuperBossEntity )
    goto LABEL_53;
  eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)eventSuperBossEntity,
                                                     0);
  if ( !eventSuperBossEntity )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventSuperBossEntity, 1, 0);
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderWhite;
  if ( !eventSuperBossEntity )
    goto LABEL_53;
  UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, this->fields.HPfrom, 0);
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderWhite;
  if ( !eventSuperBossEntity )
    goto LABEL_53;
  UIProgressBar__set_alpha((UIProgressBar_o *)eventSuperBossEntity, 0.0, 0);
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderUnder;
  if ( !eventSuperBossEntity )
    goto LABEL_53;
  UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, this->fields.HPfrom, 0);
  eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !eventSuperBossEntity )
    goto LABEL_53;
  eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                     0);
  if ( !eventSuperBossEntity )
    goto LABEL_53;
  this->fields.originPos = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, 0);
  eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !eventSuperBossEntity )
    goto LABEL_53;
  eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                     0);
  if ( !eventSuperBossEntity )
    goto LABEL_53;
  v30 = (UnityEngine_Transform_o *)eventSuperBossEntity;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  v35 = TitleInfoSuperBossComponent_TypeInfo;
  z = localPosition.fields.z;
  if ( !*(&TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v31, v32);
    v35 = TitleInfoSuperBossComponent_TypeInfo;
  }
  static_fields = (float *)v35->static_fields;
  v57.fields.z = z + static_fields[8];
  v57.fields.x = x + static_fields[6];
  v57.fields.y = y + static_fields[7];
  UnityEngine_Transform__set_localPosition(v30, v57, 0);
  totalHpLabel = this->fields.totalHpLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38, v39);
  eventSuperBossEntity = (EventSuperBossEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14010/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0);
  v41 = this->fields.eventSuperBossEntity;
  if ( !v41 )
    goto LABEL_53;
  v42 = (System_String_o *)eventSuperBossEntity;
  v55 = v41->fields.maxHp - damage;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v55);
  eventSuperBossEntity = (EventSuperBossEntity_o *)System_String__Format(v42, v43, 0);
  if ( !totalHpLabel
    || (UILabel__set_text(totalHpLabel, (System_String_o *)eventSuperBossEntity, 0),
        (eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel) == 0)
    || (eventSuperBossEntity = (EventSuperBossEntity_o *)((__int64 (__fastcall *)(EventSuperBossEntity_o *, _QWORD, double))eventSuperBossEntity->klass[1]._1.byval_arg.data)(
                                                           eventSuperBossEntity,
                                                           *(_QWORD *)&eventSuperBossEntity->klass[1]._1.byval_arg.bits,
                                                           0.0),
        (v45 = this->fields.eventSuperBossEntity) == 0)
    || (v46 = v45->fields.splitHp) == 0 )
  {
LABEL_53:
    sub_2213CDC(eventSuperBossEntity, v11);
  }
  hpBarSplitPointList = this->fields.hpBarSplitPointList;
  if ( hpBarSplitPointList )
  {
    max_length_low = LODWORD(v46->max_length);
    if ( (int)max_length_low <= SLODWORD(hpBarSplitPointList->max_length) && (int)max_length_low >= 1 )
    {
      v49 = 0;
      while ( 1 )
      {
        v50 = this->fields.eventSuperBossEntity;
        if ( !v50 )
          goto LABEL_53;
        v51 = v50->fields.splitHp;
        if ( !v51 )
          goto LABEL_53;
        if ( v49 >= LODWORD(v51->max_length) )
          goto LABEL_54;
        v52 = v51->m_Items[v49];
        v53 = this->fields.hpBarSplitPointList;
        if ( v52 <= damage )
        {
          if ( !v53 )
            goto LABEL_53;
          if ( v49 >= LODWORD(v53->max_length) )
LABEL_54:
            sub_2213CE4(eventSuperBossEntity);
          eventSuperBossEntity = (EventSuperBossEntity_o *)v53->m_Items[v49];
          if ( !eventSuperBossEntity )
            goto LABEL_53;
          klass = eventSuperBossEntity->klass;
          *(_QWORD *)&v44 = 0;
        }
        else
        {
          if ( !v53 )
            goto LABEL_53;
          if ( v49 >= LODWORD(v53->max_length) )
            goto LABEL_54;
          eventSuperBossEntity = (EventSuperBossEntity_o *)v53->m_Items[v49];
          if ( !eventSuperBossEntity )
            goto LABEL_53;
          klass = eventSuperBossEntity->klass;
          LODWORD(v44) = 1.0;
        }
        eventSuperBossEntity = (EventSuperBossEntity_o *)((__int64 (__fastcall *)(long double))klass[1]._1.byval_arg.data)(v44);
        if ( max_length_low == ++v49 )
          return;
      }
    }
  }
}


void TitleInfoSuperBossComponent__SetDisp(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  EventSuperBossEntity_o *eventSuperBossEntity; // x0
  __int64 v4; // x2
  EventSuperBossEntity_o *v5; // x20
  struct EventSuperBossEntity_o *v6; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX; // x21
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x2
  struct EventSuperBossEntity_o *v11; // x8
  struct System_Int64_array *splitHp; // x8
  int max_length; // w24
  struct UISprite_array **p_hpBarSplitterList; // x21
  char v15; // w26
  struct UISprite_array *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct UISprite_array *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x2
  const MethodInfo *v31; // x3
  int v32; // w28
  __int64 v33; // x29
  __int64 v34; // x22
  unsigned int v35; // w23
  struct UISprite_array *hpBarSplitterList; // x24
  Il2CppObject *hpBarSplitter; // x25
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  EventSuperBossEntity_o *v44; // x25
  __int64 v45; // x1
  struct UISprite_array *hpBarSplitPointList; // x24
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  EventSuperBossEntity_o *v53; // x25
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  EventSuperBossEntity_o *v60; // x25
  struct UISprite_array *v61; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v63; // x25
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  EventSuperBossEntity_o *v70; // x24
  struct UISprite_array *v71; // x8
  UnityEngine_GameObject_o *v72; // x0
  struct EventSuperBossEntity_o *v73; // x8
  struct System_Int64_array *v74; // x9
  float HpSplitPositionX; // s0
  struct UISprite_array *v76; // x8
  float v77; // s8
  struct UISprite_array *v78; // x8
  long double v79; // q0
  struct EventSuperBossEntity_o *v80; // x8
  struct System_Int64_array *v81; // x8
  int64_t v82; // x9
  struct UISprite_array *v83; // x8
  EventSuperBossEntity_c *klass; // x8
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  struct EventSuperBossEntity_o *v90; // x8
  __int64 maxHp; // x22
  __int64 v92; // x23
  __int64 v93; // x2
  UILabel_o *totalHpLabel; // x20
  System_String_o *v95; // x21
  Il2CppObject *v96; // x0
  float v97; // s0
  __int64 v98; // x0
  UnityEngine_Component_o *v99; // [xsp+8h] [xbp-98h]
  UnityEngine_Component_o *parent; // [xsp+10h] [xbp-90h]
  __int64 v101; // [xsp+18h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v104; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596F342 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TitleInfoSuperBossComponent_TypeInfo);
    sub_2213A60(&UISprite___TypeInfo);
    sub_2213A60(&StringLiteral_14010/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/);
    byte_596F342 = 1;
  }
  if ( this->fields.isEncountSuperBoss || this->fields._IsShowClearEvent_k__BackingField )
  {
    eventSuperBossEntity = this->fields.eventSuperBossEntity;
    if ( eventSuperBossEntity )
    {
      eventSuperBossEntity = (EventSuperBossEntity_o *)EventSuperBossEntity__GetUserSuperBossEntity(
                                                         eventSuperBossEntity,
                                                         0);
      v5 = eventSuperBossEntity;
      if ( !*(&TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, method, v4);
      v6 = this->fields.eventSuperBossEntity;
      if ( v6 )
      {
        SUPERBOSS_ICON_SPNAME_PREFIX = TitleInfoSuperBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
        v8 = System_Int32__ToString((int)v6 + 56, 0);
        v9 = System_String__Concat_75651716(SUPERBOSS_ICON_SPNAME_PREFIX, v8, 0);
        TitleInfoSuperBossComponent__SetBossIcon(this, v9, v10);
        v11 = this->fields.eventSuperBossEntity;
        if ( v11 )
        {
          splitHp = v11->fields.splitHp;
          if ( splitHp )
          {
            max_length = splitHp->max_length;
            if ( max_length >= 1 )
            {
              p_hpBarSplitterList = &this->fields.hpBarSplitterList;
              if ( this->fields.hpBarSplitterList && this->fields.hpBarSplitPointList )
              {
                v15 = 1;
              }
              else
              {
                v16 = (struct UISprite_array *)sub_2213B20(UISprite___TypeInfo, (unsigned int)max_length);
                this->fields.hpBarSplitterList = v16;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&this->fields.hpBarSplitterList,
                  (int32_t)v16,
                  v17,
                  v18,
                  v19,
                  v20,
                  v21,
                  v22);
                v23 = (struct UISprite_array *)sub_2213B20(UISprite___TypeInfo, (unsigned int)max_length);
                this->fields.hpBarSplitPointList = v23;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&this->fields.hpBarSplitPointList,
                  (int32_t)v23,
                  v24,
                  v25,
                  v26,
                  v27,
                  v28,
                  v29);
                v15 = 0;
              }
              parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.hpBarSplitter, 0);
              eventSuperBossEntity = (EventSuperBossEntity_o *)GameObjectExtensions__GetParent(
                                                                 this->fields.hpBarSplitPoint,
                                                                 0);
              v32 = -max_length;
              v33 = 4;
              v34 = 32;
              v99 = (UnityEngine_Component_o *)eventSuperBossEntity;
              do
              {
                v35 = v33 - 4;
                if ( (v15 & 1) == 0 )
                {
                  hpBarSplitterList = this->fields.hpBarSplitterList;
                  hpBarSplitter = (Il2CppObject *)this->fields.hpBarSplitter;
                  if ( (_DWORD)v33 == 4 )
                  {
                    if ( !hpBarSplitter )
                      goto LABEL_98;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       this->fields.hpBarSplitter,
                                                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitterList )
                      goto LABEL_98;
                    v44 = eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_2213BB4(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitterList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_100;
                    }
                    if ( !LODWORD(hpBarSplitterList->max_length) )
                      goto LABEL_99;
                    hpBarSplitterList->m_Items[0] = (UISprite_o *)v44;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)hpBarSplitterList->m_Items,
                      (int32_t)v44,
                      v38,
                      v39,
                      v40,
                      v41,
                      v42,
                      v43);
                    eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSplitPoint;
                    if ( !eventSuperBossEntity )
                      goto LABEL_98;
                    hpBarSplitPointList = this->fields.hpBarSplitPointList;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitPointList )
                      goto LABEL_98;
                    v53 = eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_2213BB4(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitPointList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_100;
                    }
                    if ( !LODWORD(hpBarSplitPointList->max_length) )
                      goto LABEL_99;
                    hpBarSplitPointList->m_Items[0] = (UISprite_o *)v53;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)hpBarSplitPointList->m_Items,
                      (int32_t)v53,
                      v47,
                      v48,
                      v49,
                      v50,
                      v51,
                      v52);
                  }
                  else
                  {
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v30);
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Object__Instantiate_object_(
                                                                       hpBarSplitter,
                                                                       (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventSuperBossEntity )
                      goto LABEL_98;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitterList )
                      goto LABEL_98;
                    v60 = eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_2213BB4(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitterList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                      {
LABEL_100:
                        v98 = sub_2213D00(eventSuperBossEntity, v45);
                        sub_2213BA0(v98, 0);
                      }
                    }
                    if ( v35 >= LODWORD(hpBarSplitterList->max_length) )
                      goto LABEL_99;
                    *((_QWORD *)&hpBarSplitterList->obj.klass + v33) = v60;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)((char *)hpBarSplitterList + v34),
                      (int32_t)v60,
                      v54,
                      v55,
                      v56,
                      v57,
                      v58,
                      v59);
                    v61 = *p_hpBarSplitterList;
                    if ( !*p_hpBarSplitterList )
                      goto LABEL_98;
                    if ( v35 >= LODWORD(v61->max_length) )
                      goto LABEL_99;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)*((_QWORD *)&v61->obj.klass + v33);
                    if ( !eventSuperBossEntity )
                      goto LABEL_98;
                    gameObject = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                   0);
                    GameObjectExtensions__SafeSetParent(gameObject, parent, 0);
                    v63 = this->fields.hpBarSplitPointList;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Object__Instantiate_object_(
                                                                       (Il2CppObject *)this->fields.hpBarSplitPoint,
                                                                       (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventSuperBossEntity )
                      goto LABEL_98;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !v63 )
                      goto LABEL_98;
                    v70 = eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_2213BB4(
                                                                         eventSuperBossEntity,
                                                                         v63->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_100;
                    }
                    if ( v35 >= LODWORD(v63->max_length) )
                      goto LABEL_99;
                    *((_QWORD *)&v63->obj.klass + v33) = v70;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)((char *)v63 + v34),
                      (int32_t)v70,
                      v64,
                      v65,
                      v66,
                      v67,
                      v68,
                      v69);
                    v71 = this->fields.hpBarSplitPointList;
                    if ( !v71 )
                      goto LABEL_98;
                    if ( v35 >= LODWORD(v71->max_length) )
                      goto LABEL_99;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)*((_QWORD *)&v71->obj.klass + v33);
                    if ( !eventSuperBossEntity )
                      goto LABEL_98;
                    v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventSuperBossEntity, 0);
                    GameObjectExtensions__SafeSetParent(v72, v99, 0);
                  }
                }
                v73 = this->fields.eventSuperBossEntity;
                if ( !v73 )
                  goto LABEL_98;
                v74 = v73->fields.splitHp;
                if ( !v74 )
                  goto LABEL_98;
                if ( v35 >= LODWORD(v74->max_length) )
                  goto LABEL_99;
                HpSplitPositionX = TitleInfoSuperBossComponent__GetHpSplitPositionX(
                                     (TitleInfoSuperBossComponent_o *)eventSuperBossEntity,
                                     *((_QWORD *)&v74->obj.klass + v33),
                                     v73->fields.maxHp,
                                     v31);
                v76 = *p_hpBarSplitterList;
                if ( !*p_hpBarSplitterList )
                  goto LABEL_98;
                if ( v35 >= LODWORD(v76->max_length) )
                  goto LABEL_99;
                eventSuperBossEntity = (EventSuperBossEntity_o *)*((_QWORD *)&v76->obj.klass + v33);
                if ( !eventSuperBossEntity )
                  goto LABEL_98;
                v77 = HpSplitPositionX;
                eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                   0);
                if ( !eventSuperBossEntity )
                  goto LABEL_98;
                v102.fields.y = 0.0;
                v102.fields.z = 0.0;
                v102.fields.x = v77;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, v102, 0);
                v78 = this->fields.hpBarSplitPointList;
                if ( !v78 )
                  goto LABEL_98;
                if ( v35 >= LODWORD(v78->max_length) )
                  goto LABEL_99;
                eventSuperBossEntity = (EventSuperBossEntity_o *)*((_QWORD *)&v78->obj.klass + v33);
                if ( !eventSuperBossEntity )
                  goto LABEL_98;
                eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                   0);
                if ( !eventSuperBossEntity )
                  goto LABEL_98;
                v103.fields.y = 0.0;
                v103.fields.z = 0.0;
                v103.fields.x = v77;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, v103, 0);
                v80 = this->fields.eventSuperBossEntity;
                if ( !v80 )
                  goto LABEL_98;
                v81 = v80->fields.splitHp;
                if ( !v81 )
                  goto LABEL_98;
                if ( v35 >= LODWORD(v81->max_length) )
                  goto LABEL_99;
                if ( !v5 )
                  goto LABEL_98;
                v82 = *((_QWORD *)&v81->obj.klass + v33);
                v83 = this->fields.hpBarSplitPointList;
                if ( v82 <= v5->fields.maxHp )
                {
                  if ( !v83 )
                    goto LABEL_98;
                  if ( v35 >= LODWORD(v83->max_length) )
LABEL_99:
                    sub_2213CE4(eventSuperBossEntity);
                  eventSuperBossEntity = (EventSuperBossEntity_o *)*((_QWORD *)&v83->obj.klass + v33);
                  if ( !eventSuperBossEntity )
                    goto LABEL_98;
                  klass = eventSuperBossEntity->klass;
                  *(_QWORD *)&v79 = 0;
                }
                else
                {
                  if ( !v83 )
                    goto LABEL_98;
                  if ( v35 >= LODWORD(v83->max_length) )
                    goto LABEL_99;
                  eventSuperBossEntity = (EventSuperBossEntity_o *)*((_QWORD *)&v83->obj.klass + v33);
                  if ( !eventSuperBossEntity )
                    goto LABEL_98;
                  klass = eventSuperBossEntity->klass;
                  LODWORD(v79) = 1.0;
                }
                eventSuperBossEntity = (EventSuperBossEntity_o *)((__int64 (__fastcall *)(long double))klass[1]._1.byval_arg.data)(v79);
                ++v33;
                v34 += 8;
              }
              while ( v32 + (_DWORD)v33 != 4 );
            }
            eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
            if ( eventBossStatusUiEntity )
            {
              v104.fields.r = 0.0;
              v104.fields.g = 0.0;
              v104.fields.b = 0.0;
              v104.fields.a = 0.0;
              TextEffectColor = EventBossStatusUiEntity__GetTextEffectColor(eventBossStatusUiEntity, v104, 0);
            }
            else
            {
              eventSuperBossEntity = this->fields.eventSuperBossEntity;
              if ( !eventSuperBossEntity )
                goto LABEL_98;
              TextEffectColor = EventSuperBossEntity__GetBossColor(eventSuperBossEntity, 0);
            }
            r = TextEffectColor.fields.r;
            g = TextEffectColor.fields.g;
            eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderWhite;
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
                    v90 = this->fields.eventSuperBossEntity;
                    if ( v90 )
                    {
                      if ( v5 )
                      {
                        maxHp = v90->fields.maxHp;
                        eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel;
                        v92 = v5->fields.maxHp >= maxHp ? v90->fields.maxHp : v5->fields.maxHp;
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
                              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v93);
                              v95 = LocalizationManager__Get((System_String_o *)StringLiteral_14010/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0);
                              v101 = maxHp - v92;
                              v96 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v101);
                              eventSuperBossEntity = (EventSuperBossEntity_o *)System_String__Format(v95, v96, 0);
                              if ( !totalHpLabel )
                                goto LABEL_98;
                              UILabel__set_text(totalHpLabel, (System_String_o *)eventSuperBossEntity, 0);
                            }
                            eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel;
                            if ( eventSuperBossEntity )
                            {
                              v106.fields.r = r;
                              v106.fields.g = g;
                              v106.fields.b = b;
                              v106.fields.a = a;
                              UILabel__set_effectColor((UILabel_o *)eventSuperBossEntity, v106, 0);
                              eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSlider;
                              if ( eventSuperBossEntity )
                              {
                                v97 = 1.0 - (double)v92 / (double)maxHp;
                                UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, v97, 0);
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
LABEL_98:
    sub_2213CDC(eventSuperBossEntity, method);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x21
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = gaugeId;
  if ( (byte_596F341 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_596F341 = 1;
  }
  if ( gaugeId < 0 )
    goto LABEL_12;
  v8 = System_Int32__ToString((int32_t)&v12, 0);
  v11 = System_String__Concat_75694928(prefix, (System_String_o *)StringLiteral_16746/*"_"*/, v8, 0);
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


void TitleInfoSuperBossComponent__Setup(
        TitleInfoSuperBossComponent_o *this,
        EventSuperBossEntity_o *superBossEntity,
        UIAtlas_o *termAtlas,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventSuperBossEntity_o **p_eventSuperBossEntity; // x21
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  int32_t GaugeId; // w20
  _BOOL8 IsEncounted; // x0
  UISprite_o *hpBarUnderSprite; // x1
  System_String_o *v25; // x2
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
  TitleInfoSuperBossComponent_o *v37; // x0
  const MethodInfo *v38; // x4
  const MethodInfo *v39; // x1

  if ( (byte_596F33F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_20174/*"event_superboss_hp_split"*/);
    sub_2213A60(&StringLiteral_20178/*"event_superboss_hp_white"*/);
    sub_2213A60(&StringLiteral_20131/*"event_raid_hp_back"*/);
    sub_2213A60(&StringLiteral_20175/*"event_superboss_hp_split_frame"*/);
    sub_2213A60(&StringLiteral_20172/*"event_superboss_hp_lower"*/);
    sub_2213A60(&StringLiteral_20132/*"event_raid_hp_frame"*/);
    sub_2213A60(&StringLiteral_20176/*"event_superboss_hp_upper"*/);
    byte_596F33F = 1;
  }
  this->fields.eventSuperBossEntity = superBossEntity;
  p_eventSuperBossEntity = &this->fields.eventSuperBossEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventSuperBossEntity,
    (int32_t)superBossEntity,
    (System_String_o *)termAtlas,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  this->fields.isEncountSuperBoss = 0;
  if ( eventSuperBossEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___),
          !*p_eventSuperBossEntity)
      || !Instance
      || ((EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                         (EventBossStatusUiMaster_o *)Instance,
                                         (*p_eventSuperBossEntity)->fields.eventId,
                                         (*p_eventSuperBossEntity)->fields.id,
                                         0),
           this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex,
           sub_2213A04(
             (MissionNaviTransitionBoardItem_o *)&this->fields.eventBossStatusUiEntity,
             (int32_t)EntityFromEventIdAndIndex,
             v15,
             v16,
             v17,
             v18,
             v19,
             v20),
           (eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity) == 0)
        ? (GaugeId = -1)
        : (GaugeId = EventBossStatusUiEntity__GetGaugeId(eventBossStatusUiEntity, 0)),
          (Instance = (Il2CppObject *)*p_eventSuperBossEntity) == 0) )
    {
      sub_2213CDC(Instance, v13);
    }
    IsEncounted = EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)Instance, 0);
    hpBarUnderSprite = this->fields.hpBarUnderSprite;
    v25 = (System_String_o *)StringLiteral_20172/*"event_superboss_hp_lower"*/;
    this->fields.isEncountSuperBoss = IsEncounted;
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      (TitleInfoSuperBossComponent_o *)IsEncounted,
      hpBarUnderSprite,
      v25,
      GaugeId,
      v26);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v27,
      this->fields.hpBarUpperSprite,
      (System_String_o *)StringLiteral_20176/*"event_superboss_hp_upper"*/,
      GaugeId,
      v28);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v29,
      this->fields.hpBarWhiteSprite,
      (System_String_o *)StringLiteral_20178/*"event_superboss_hp_white"*/,
      GaugeId,
      v30);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v31,
      this->fields.hpSplitSprite,
      (System_String_o *)StringLiteral_20175/*"event_superboss_hp_split_frame"*/,
      GaugeId,
      v32);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v33,
      this->fields.hpSplitPointSprite,
      (System_String_o *)StringLiteral_20174/*"event_superboss_hp_split"*/,
      GaugeId,
      v34);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v35,
      this->fields.superBossHpFrame,
      (System_String_o *)StringLiteral_20132/*"event_raid_hp_frame"*/,
      GaugeId,
      v36);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v37,
      this->fields.superBossHpBg,
      (System_String_o *)StringLiteral_20131/*"event_raid_hp_back"*/,
      GaugeId,
      v38);
    TitleInfoSuperBossComponent__SetDisp(this, v39);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  __int64 v16; // x2
  TitleInfoSuperBossComponent_c *v17; // x0
  Il2CppObject *Object_object__58532980; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_Object_o *splitHpEffect; // x23
  __int64 v28; // x1
  __int64 v29; // x2
  TitleInfoSuperBossComponent_c *v30; // x0
  Il2CppObject *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  TitleInfoSuperBossComponent_c *v38; // x0
  System_String_o *v39; // x0
  Il2CppObject *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x1
  __int64 v48; // x2
  UnityEngine_Object_o *clearBossEffect; // x22
  const MethodInfo *v50; // x1
  __int64 v51; // x2
  TitleInfoSuperBossComponent_c *v52; // x0
  Il2CppObject *v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7

  v6 = this;
  if ( (byte_596F344 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TitleInfoSuperBossComponent_TypeInfo);
    this = (TitleInfoSuperBossComponent_o *)sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_596F344 = 1;
  }
  eventSuperBossEntity = v6->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_22;
  v8 = System_Int32__ToString((int)eventSuperBossEntity + 16, 0);
  v6->fields.animEndCall = callBack;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v6->fields.animEndCall,
    (int32_t)callBack,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v17 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !*(&TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v15, v16);
    v17 = TitleInfoSuperBossComponent_TypeInfo;
  }
  this = (TitleInfoSuperBossComponent_o *)System_String__Concat_75694928(
                                            v17->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
                                            (System_String_o *)StringLiteral_16746/*"_"*/,
                                            v8,
                                            0);
  if ( !mapAssetData )
LABEL_22:
    sub_2213CDC(this, mapAssetData);
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              mapAssetData,
                              (System_String_o *)this,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  v6->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)Object_object__58532980;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v6->fields.splitHpEffect,
    (int32_t)Object_object__58532980,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  splitHpEffect = (UnityEngine_Object_o *)v6->fields.splitHpEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
  if ( UnityEngine_Object__op_Equality(splitHpEffect, 0, 0) )
  {
    v30 = TitleInfoSuperBossComponent_TypeInfo;
    if ( !*(&TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v28, v29);
      v30 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v31 = AssetData__GetObject_object__58532980(
            mapAssetData,
            v30->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
            (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    v6->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)v31;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v6->fields.splitHpEffect,
      (int32_t)v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  v38 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !*(&TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v28, v29);
    v38 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v39 = System_String__Concat_75694928(
          v38->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_16746/*"_"*/,
          v8,
          0);
  v40 = AssetData__GetObject_object__58532980(
          mapAssetData,
          v39,
          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)v40;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v6->fields.clearBossEffect,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  clearBossEffect = (UnityEngine_Object_o *)v6->fields.clearBossEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47, v48);
  if ( UnityEngine_Object__op_Equality(clearBossEffect, 0, 0) )
  {
    v52 = TitleInfoSuperBossComponent_TypeInfo;
    if ( !*(&TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v50, v51);
      v52 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v53 = AssetData__GetObject_object__58532980(
            mapAssetData,
            v52->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
            (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)v53;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v6->fields.clearBossEffect,
      (int32_t)v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  TitleInfoSuperBossComponent__PlayFrameInBoss(v6, v50);
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
  float v5; // s0
  float mNow; // s9
  float v7; // s8
  struct TitleInfoSuperBossComponent_o *v8; // x8
  struct TitleInfoSuperBossComponent_o *v9; // x8
  UIProgressBar_o *hpBarSliderWhite; // x20
  float v11; // s0
  __int64 v12; // x2
  struct TitleInfoSuperBossComponent_o *v13; // x8
  UILabel_o *totalHpLabel; // x20
  struct TitleInfoSuperBossComponent_o *v15; // x8
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  TitleInfoSuperBossComponent___c__DisplayClass58_0_o *v17; // x21
  Il2CppObject *v18; // x0
  __int64 v19; // x2
  struct TitleInfoSuperBossComponent_o *v20; // x8
  float HPsplitPoint; // s0
  UnityEngine_Object_o *splitHpEffect; // x20
  __int64 v23; // x2
  struct TitleInfoSuperBossComponent_o *v24; // x8
  Il2CppObject *v25; // x20
  struct TitleInfoSuperBossComponent_o *v26; // x8
  TitleInfoSuperBossComponent___c__DisplayClass58_0_o *v27; // x20
  UnityEngine_Component_o *Parent; // x0
  struct TitleInfoSuperBossComponent_o *v29; // x9
  struct UISprite_array *hpBarSplitterList; // x8
  __int64 HPsplitNo; // x9
  __int64 v32; // x1
  __int64 v33; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  TitleInfoSuperBossComponent_c *v37; // x0
  float *static_fields; // x8
  struct TitleInfoSuperBossComponent_o *v39; // x9
  struct UISprite_array *hpBarSplitPointList; // x8
  __int64 v41; // x9
  __int64 v42; // x1
  __int64 v43; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v45; // x8
  struct TitleInfoSuperBossComponent_o *v46; // x8
  double v47; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_596F34E & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TitleInfoSuperBossComponent_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenAlpha___);
    this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)sub_2213A60(&StringLiteral_14010/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/);
    byte_596F34E = 1;
  }
  eo = v2->fields.eo;
  if ( !eo )
    goto LABEL_48;
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_48;
  v5 = 1.0;
  mNow = eo->fields.mNow;
  this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)_4__this->fields.hpBarSlider;
  if ( mNow <= 1.0 )
    v5 = eo->fields.mNow;
  if ( mNow < 0.0 )
    v5 = 0.0;
  if ( !this )
    goto LABEL_48;
  v7 = _4__this->fields.HPfrom + (float)(v5 * (float)(_4__this->fields.HPto - _4__this->fields.HPfrom));
  UIProgressBar__set_value((UIProgressBar_o *)this, v7, 0);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_48;
  this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)v8->fields.hpBarSliderWhite;
  if ( !this )
    goto LABEL_48;
  UIProgressBar__set_value((UIProgressBar_o *)this, v7, 0);
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_48;
  hpBarSliderWhite = (UIProgressBar_o *)v9->fields.hpBarSliderWhite;
  if ( !hpBarSliderWhite )
    goto LABEL_48;
  v11 = sinf(mNow * 3.1416);
  UIProgressBar__set_alpha(hpBarSliderWhite, v11 * 0.7, 0);
  v13 = v2->fields.__4__this;
  if ( !v13 )
    goto LABEL_48;
  totalHpLabel = v13->fields.totalHpLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v12);
  this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_14010/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/,
                                                                  0);
  v15 = v2->fields.__4__this;
  if ( !v15 )
    goto LABEL_48;
  eventSuperBossEntity = v15->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_48;
  v17 = this;
  v47 = (float)(v7 * (float)eventSuperBossEntity->fields.maxHp);
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984380, &v47);
  this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)System_String__Format((System_String_o *)v17, v18, 0);
  if ( !totalHpLabel )
    goto LABEL_48;
  UILabel__set_text(totalHpLabel, (System_String_o *)this, 0);
  v20 = v2->fields.__4__this;
  if ( !v20 )
    goto LABEL_48;
  HPsplitPoint = v20->fields.HPsplitPoint;
  if ( HPsplitPoint > -1.0 && v7 <= HPsplitPoint )
  {
    splitHpEffect = (UnityEngine_Object_o *)v20->fields.splitHpEffect;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v19);
    this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UnityEngine_Object__op_Implicit(splitHpEffect, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v24 = v2->fields.__4__this;
      if ( !v24 )
        goto LABEL_48;
      v25 = (Il2CppObject *)v24->fields.splitHpEffect;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v23);
      this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                      v25,
                                                                      (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v26 = v2->fields.__4__this;
      if ( !v26 )
        goto LABEL_48;
      v27 = this;
      Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v26->fields.hpBarSplitter, 0);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v27, Parent, 0);
      v29 = v2->fields.__4__this;
      if ( !v29 )
        goto LABEL_48;
      hpBarSplitterList = v29->fields.hpBarSplitterList;
      if ( !hpBarSplitterList )
        goto LABEL_48;
      HPsplitNo = v29->fields.HPsplitNo;
      if ( (unsigned int)HPsplitNo >= LODWORD(hpBarSplitterList->max_length) )
        goto LABEL_49;
      this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)hpBarSplitterList->m_Items[HPsplitNo];
      if ( !this )
        goto LABEL_48;
      this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0);
      if ( !this )
        goto LABEL_48;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      x = localPosition.fields.x;
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      v37 = TitleInfoSuperBossComponent_TypeInfo;
      if ( !*(&TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v32, v33);
        v37 = TitleInfoSuperBossComponent_TypeInfo;
      }
      static_fields = (float *)v37->static_fields;
      v49.fields.z = z + static_fields[11];
      v49.fields.x = x + static_fields[9];
      v49.fields.y = y + static_fields[10];
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v27, v49, 0);
    }
    v39 = v2->fields.__4__this;
    if ( !v39 )
      goto LABEL_48;
    hpBarSplitPointList = v39->fields.hpBarSplitPointList;
    if ( !hpBarSplitPointList )
      goto LABEL_48;
    v41 = v39->fields.HPsplitNo;
    if ( (unsigned int)v41 < LODWORD(hpBarSplitPointList->max_length) )
    {
      this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)hpBarSplitPointList->m_Items[v41];
      if ( this )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v45 = TitleInfoSuperBossComponent_TypeInfo;
        if ( !*(&TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v42, v43);
          v45 = TitleInfoSuperBossComponent_TypeInfo;
        }
        this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UITweener__Begin_object_(
                                                                        gameObject,
                                                                        v45->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                                        (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenAlpha___);
        if ( this )
        {
          v46 = v2->fields.__4__this;
          LODWORD(this[1].klass) = 2;
          this[4].klass = (TitleInfoSuperBossComponent___c__DisplayClass58_0_c *)1065353216;
          if ( v46 )
          {
            *(_QWORD *)&v46->fields.HPsplitPoint = -1082130432;
            return;
          }
        }
      }
LABEL_48:
      sub_2213CDC(this, method);
    }
LABEL_49:
    sub_2213CE4(this);
  }
}