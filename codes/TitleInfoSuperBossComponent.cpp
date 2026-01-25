void TitleInfoSuperBossComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct TitleInfoSuperBossComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct TitleInfoSuperBossComponent_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  TitleInfoSuperBossComponent_c *v23; // x8
  struct TitleInfoSuperBossComponent_StaticFields *v24; // x9
  struct TitleInfoSuperBossComponent_StaticFields *v25; // x9
  struct TitleInfoSuperBossComponent_StaticFields *v26; // x8

  if ( (byte_4CED23C & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_14561/*"TitleInfoEventSuperBossEffect_Dead"*/);
    sub_1C7BAE8(&StringLiteral_14562/*"TitleInfoEventSuperBossEffect_Split"*/);
    sub_1C7BAE8(&StringLiteral_19428/*"event_superboss_icon_"*/);
    byte_4CED23C = 1;
  }
  TitleInfoSuperBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_19428/*"event_superboss_icon_"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)TitleInfoSuperBossComponent_TypeInfo->static_fields,
    StringLiteral_19428/*"event_superboss_icon_"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_14562/*"TitleInfoEventSuperBossEffect_Split"*/;
  static_fields = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14562/*"TitleInfoEventSuperBossEffect_Split"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_14561/*"TitleInfoEventSuperBossEffect_Dead"*/;
  v16 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v16->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14561/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v16->SUPERBOSS_CLEAR_EFFECT_PREFAB, v15, v17, v18, v19, v20, v21, v22);
  v23 = TitleInfoSuperBossComponent_TypeInfo;
  v24 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v24->SUPERBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v24->SUPERBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v25 = v23->static_fields;
  *(_QWORD *)&v25->SUPERBOSS_SPLIT_POS_DELTA.fields.x = 0x41200000BF000000LL;
  v25->SUPERBOSS_SPLIT_POS_DELTA.fields.z = 0.0;
  v26 = v23->static_fields;
  *(_OWORD *)&v26->ANIM_DURATION_FRAME_IN_BOSS = xmmword_CF5520;
  v26->SUPERBOSS_HP_BAR_LENGTH = 264;
  v26->CLEAR_END_CALLBACK_DELAY = 1.5;
  *(_QWORD *)&v26->ANIM_DURATION_HP_DELETION = 0x3FE666663F333333LL;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *onClearCall; // x21
  __int64 v10; // x1
  UnityEngine_Component_o *superBossIconSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoSuperBossComponent_c *v13; // x8
  UnityEngine_GameObject_o *v14; // x20

  if ( (byte_4CED239 & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C7BAE8(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C7BAE8(&StringLiteral_9923/*"OnEndAnimation"*/);
    byte_4CED239 = 1;
  }
  onClearCall = this->fields.onClearCall;
  this->fields.onClearCall = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.onClearCall, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(onClearCall, 0);
  superBossIconSp = (UnityEngine_Component_o *)this->fields.superBossIconSp;
  if ( !superBossIconSp )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(superBossIconSp, 0);
  v13 = TitleInfoSuperBossComponent_TypeInfo;
  v14 = gameObject;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v13 = TitleInfoSuperBossComponent_TypeInfo;
  }
  superBossIconSp = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                 v14,
                                                 v13->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                 (const MethodInfo_3245DA8 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !superBossIconSp )
LABEL_8:
    sub_1C7BD40(superBossIconSp, v10);
  LODWORD(superBossIconSp[1].monitor) = 1;
  superBossIconSp[5].monitor = (void *)1065353216;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9923/*"OnEndAnimation"*/,
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

  if ( (byte_4CED23A & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoSuperBossComponent_TypeInfo);
    byte_4CED23A = 1;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_animEndCall; // x0
  System_Action_o *animEndCall; // t1
  const MethodInfo *v11; // x1

  animEndCall = this->fields.animEndCall;
  p_animEndCall = (GrandQuestFolderBoardItem_o *)&this->fields.animEndCall;
  p_animEndCall->klass = 0;
  sub_1C7BA8C(p_animEndCall, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndCall, 0);
  TitleInfoSuperBossComponent__SetDisp(this, v11);
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4CED234 & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C7BAE8(&Method_UITweener_Begin_TweenPosition___);
    sub_1C7BAE8(&StringLiteral_10701/*"PlayHpNameAlpha"*/);
    byte_4CED234 = 1;
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
         (const MethodInfo_3245DA8 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v6 )
    sub_1C7BD40(0, v7);
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
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v9[5], (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = StringLiteral_10701/*"PlayHpNameAlpha"*/;
  v9[5].monitor = (void *)StringLiteral_10701/*"PlayHpNameAlpha"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v9[5].monitor, v19, v20, v21, v22, v23, v24, v25);
}


void TitleInfoSuperBossComponent__PlayHpCut(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  TitleInfoSuperBossComponent_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x3
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  TitleInfoSuperBossComponent_c *v22; // x0
  EasingObject_o *v23; // x21
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v25; // x22
  System_Action_o *v26; // x20

  if ( (byte_4CED236 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C7BAE8(&Method_TitleInfoSuperBossComponent_PlayHpDeletion__);
    sub_1C7BAE8(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C7BAE8(&Method_TitleInfoSuperBossComponent___c__DisplayClass58_0__PlayHpCut_b__0__);
    sub_1C7BAE8(&TitleInfoSuperBossComponent___c__DisplayClass58_0_TypeInfo);
    byte_4CED236 = 1;
  }
  v3 = sub_1C7BD34(TitleInfoSuperBossComponent___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_9;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_9;
  TitleInfoSuperBossComponent__PlaySeByEventId(v4, eventSuperBossEntity->fields.eventId, 1, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_31C8BB0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)Component_object, v16, v17, v18, v19, v20, v21);
  v22 = TitleInfoSuperBossComponent_TypeInfo;
  v23 = *(EasingObject_o **)(v3 + 16);
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v22 = TitleInfoSuperBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v22->static_fields->ANIM_DURATION_HP_CUT;
  v25 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v3,
    Method_TitleInfoSuperBossComponent___c__DisplayClass58_0__PlayHpCut_b__0__,
    0);
  v26 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_TitleInfoSuperBossComponent_PlayHpDeletion__, 0);
  if ( !v23 )
LABEL_9:
    sub_1C7BD40(v4, v5);
  EasingObject__Play(v23, ANIM_DURATION_HP_CUT, v25, v26, 0.0, 0, 0);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
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
  Il2CppObject *v32; // x0
  unsigned __int64 v33; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CED237 & 1) == 0 )
  {
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C7BAE8(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C7BAE8(&StringLiteral_9923/*"OnEndAnimation"*/);
    sub_1C7BAE8(&StringLiteral_12847/*"SetClearAlpha"*/);
    sub_1C7BAE8(&StringLiteral_13510/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/);
    byte_4CED237 = 1;
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
                                                  (const MethodInfo_3245DA8 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !hpBarSliderUnder )
    goto LABEL_23;
  v7 = hpBarSliderUnder;
  LODWORD(hpBarSliderUnder[1].monitor) = 1;
  hpBarSliderUnder[5].monitor = (void *)1065353216;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7[3].monitor = v8;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v7[3].monitor, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  if ( this->fields.HPto <= 0.0 )
  {
    clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(clearBossEffect, 0, 0) )
    {
      v23 = (Il2CppObject *)this->fields.clearBossEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v24 = UnityEngine_Object__Instantiate_object_(
              v23,
              (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v24, (UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v24, 0);
    }
    v21 = &StringLiteral_12847/*"SetClearAlpha"*/;
  }
  else
  {
    v21 = &StringLiteral_9923/*"OnEndAnimation"*/;
  }
  v25 = *v21;
  v7[3].fields.m_CachedPtr = *v21;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v7[3].fields, v25, v15, v16, v17, v18, v19, v20);
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
  hpBarSliderUnder = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13510/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0);
  v29 = this->fields.eventSuperBossEntity;
  if ( !v29
    || (maxHp = v29->fields.maxHp,
        v31 = (System_String_o *)hpBarSliderUnder,
        (hpBarSliderUnder = (UnityEngine_Component_o *)EventSuperBossEntity__GetUserSuperBossEntity(v29, 0)) == 0)
    || (v33 = maxHp - (unsigned __int64)hpBarSliderUnder[1].monitor,
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v33),
        hpBarSliderUnder = (UnityEngine_Component_o *)System_String__Format(v31, v32, 0),
        !totalHpLabel) )
  {
LABEL_23:
    sub_1C7BD40(hpBarSliderUnder, method);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4CED235 & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C7BAE8(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C7BAE8(&StringLiteral_10700/*"PlayHpCut"*/);
    byte_4CED235 = 1;
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
                                              (const MethodInfo_3245DA8 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !totalHpLabel )
LABEL_8:
    sub_1C7BD40(totalHpLabel, method);
  v7 = totalHpLabel;
  totalHpLabel[5].monitor = (void *)0x3F80000000000000LL;
  LODWORD(totalHpLabel[1].monitor) = 1;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7[3].monitor = v8;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v7[3].monitor, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_10700/*"PlayHpCut"*/;
  v7[3].fields.m_CachedPtr = StringLiteral_10700/*"PlayHpCut"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v7[3].fields, v15, v16, v17, v18, v19, v20, v21);
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

  if ( (byte_4CED23B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_TitleInfoSuperBossComponent_PlaySeByEventId__);
    sub_1C7BAE8(&StringLiteral_16930/*"ar12"*/);
    sub_1C7BAE8(&StringLiteral_16943/*"ar60"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CED23B = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v7);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    eventId,
    (const MethodInfo_342E348 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( entity )
  {
    v8 = (System_String_o **)&StringLiteral_16943/*"ar60"*/;
    if ( !EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0) )
    {
      if ( entity )
      {
        if ( !EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0) )
          v8 = (System_String_o **)&StringLiteral_16930/*"ar12"*/;
      }
      else
      {
        v8 = (System_String_o **)&StringLiteral_16930/*"ar12"*/;
      }
    }
  }
  else
  {
    v8 = (System_String_o **)&StringLiteral_16930/*"ar12"*/;
  }
  v9 = Method_TitleInfoSuperBossComponent_PlaySeByEventId__;
  v10 = *v8;
  if ( (*((_BYTE *)Method_TitleInfoSuperBossComponent_PlaySeByEventId__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C7BB00(Method_TitleInfoSuperBossComponent_PlaySeByEventId__);
  v11 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v9, v9[4]);
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

  if ( (byte_4CED22F & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    byte_4CED22F = 1;
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
    sub_1C7BD40(v6, v7);
  }
}


void TitleInfoSuperBossComponent__SetClearAlpha(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  TitleInfoSuperBossComponent_c *v3; // x0

  if ( (byte_4CED238 & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5317/*"DoClearCallback"*/);
    byte_4CED238 = 1;
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
    (System_String_o *)StringLiteral_5317/*"DoClearCallback"*/,
    v3->static_fields->CLEAR_CALLBACK_DELAY,
    0);
}


void TitleInfoSuperBossComponent__SetDamageAnimation(
        TitleInfoSuperBossComponent_o *this,
        int64_t damage,
        System_Action_o *onClearCallback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v11; // x1
  EventSuperBossEntity_o *eventSuperBossEntity; // x0
  struct EventSuperBossEntity_o *v13; // x9
  __int64 maxHp; // x8
  double v15; // d1
  float v16; // s0
  float v17; // s2
  float v18; // s5
  float v19; // s3
  float v20; // s0
  float v21; // s2
  struct System_Int64_array *splitHp; // x9
  int max_length; // w11
  int32_t v24; // w10
  int64_t v25; // x12
  float v26; // s1
  UnityEngine_Transform_o *v27; // x21
  TitleInfoSuperBossComponent_c *v28; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float *static_fields; // x8
  UILabel_o *totalHpLabel; // x21
  struct EventSuperBossEntity_o *v34; // x8
  System_String_o *v35; // x22
  Il2CppObject *v36; // x0
  long double v37; // q0
  struct EventSuperBossEntity_o *v38; // x8
  struct System_Int64_array *v39; // x9
  struct UISprite_array *hpBarSplitPointList; // x10
  int v41; // w21
  unsigned int v42; // w22
  struct System_Int64_array *v43; // x8
  struct UISprite_array *v44; // x9
  int64_t v45; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CED232 & 1) == 0 )
  {
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13510/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/);
    byte_4CED232 = 1;
  }
  this->fields.onClearCall = onClearCallback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onClearCall,
    (int32_t)onClearCallback,
    (int32_t)onClearCallback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  eventSuperBossEntity = (EventSuperBossEntity_o *)EventSuperBossEntity__GetUserSuperBossEntity(eventSuperBossEntity, 0);
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  v13 = this->fields.eventSuperBossEntity;
  if ( !v13 )
    goto LABEL_55;
  maxHp = eventSuperBossEntity->fields.maxHp;
  v15 = (double)v13->fields.maxHp;
  v16 = 1.0 - (double)damage / v15;
  v17 = 1.0 - (double)maxHp / v15;
  v18 = fminf(v16, 1.0);
  v19 = fminf(v17, 1.0);
  v20 = v16 < 0.0 ? 0.0 : v18;
  v21 = v17 < 0.0 ? 0.0 : v19;
  this->fields.HPfrom = v20;
  this->fields.HPto = v21;
  *(_QWORD *)&this->fields.HPsplitPoint = -1082130432;
  splitHp = v13->fields.splitHp;
  if ( !splitHp )
    goto LABEL_55;
  max_length = splitHp->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      v25 = splitHp->m_Items[v24];
      if ( v25 > damage && v25 <= maxHp )
        break;
      if ( max_length == ++v24 )
        goto LABEL_20;
    }
    v26 = 1.0 - (double)v25 / v15;
    this->fields.HPsplitPoint = v26;
    this->fields.HPsplitNo = v24;
  }
LABEL_20:
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSlider;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, v20, 0);
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
  v27 = (UnityEngine_Transform_o *)eventSuperBossEntity;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, 0);
  v28 = TitleInfoSuperBossComponent_TypeInfo;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v28 = TitleInfoSuperBossComponent_TypeInfo;
  }
  static_fields = (float *)v28->static_fields;
  v47.fields.x = x + static_fields[6];
  v47.fields.y = y + static_fields[7];
  v47.fields.z = z + static_fields[8];
  UnityEngine_Transform__set_localPosition(v27, v47, 0);
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  eventSuperBossEntity = (EventSuperBossEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13510/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0);
  v34 = this->fields.eventSuperBossEntity;
  if ( !v34 )
    goto LABEL_55;
  v35 = (System_String_o *)eventSuperBossEntity;
  v45 = v34->fields.maxHp - damage;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v45);
  eventSuperBossEntity = (EventSuperBossEntity_o *)System_String__Format(v35, v36, 0);
  if ( !totalHpLabel
    || (UILabel__set_text(totalHpLabel, (System_String_o *)eventSuperBossEntity, 0),
        (eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel) == 0)
    || (eventSuperBossEntity = (EventSuperBossEntity_o *)((__int64 (__fastcall *)(EventSuperBossEntity_o *, _QWORD, float))eventSuperBossEntity->klass[1]._1.byval_arg.data)(
                                                           eventSuperBossEntity,
                                                           *(_QWORD *)&eventSuperBossEntity->klass[1]._1.byval_arg.bits,
                                                           0.0),
        (v38 = this->fields.eventSuperBossEntity) == 0)
    || (v39 = v38->fields.splitHp) == 0 )
  {
LABEL_55:
    sub_1C7BD40(eventSuperBossEntity, v11);
  }
  hpBarSplitPointList = this->fields.hpBarSplitPointList;
  if ( hpBarSplitPointList )
  {
    v41 = v39->max_length;
    if ( v41 <= SLODWORD(hpBarSplitPointList->max_length) && v41 >= 1 )
    {
      v42 = 0;
      while ( 1 )
      {
        v43 = v38->fields.splitHp;
        if ( !v43 )
          goto LABEL_55;
        if ( v42 >= LODWORD(v43->max_length) )
          goto LABEL_57;
        v44 = this->fields.hpBarSplitPointList;
        if ( !v44 )
          goto LABEL_55;
        if ( v42 >= LODWORD(v44->max_length) )
LABEL_57:
          sub_1C7BD48(eventSuperBossEntity);
        eventSuperBossEntity = (EventSuperBossEntity_o *)v44->m_Items[v42];
        if ( !eventSuperBossEntity )
          goto LABEL_55;
        if ( v43->m_Items[v42] <= damage )
          *(float *)&v37 = 0.0;
        else
          *(float *)&v37 = 1.0;
        eventSuperBossEntity = (EventSuperBossEntity_o *)((__int64 (__fastcall *)(EventSuperBossEntity_o *, _QWORD, long double))eventSuperBossEntity->klass[1]._1.byval_arg.data)(
                                                           eventSuperBossEntity,
                                                           *(_QWORD *)&eventSuperBossEntity->klass[1]._1.byval_arg.bits,
                                                           v37);
        if ( v41 == ++v42 )
          return;
        v38 = this->fields.eventSuperBossEntity;
        if ( !v38 )
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct UISprite_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  const MethodInfo *v29; // x3
  UnityEngine_Component_o *v30; // x24
  unsigned int i; // w29
  struct UISprite_array *hpBarSplitterList; // x25
  Il2CppObject *hpBarSplitter; // x26
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  EventSuperBossEntity_o *v40; // x26
  Il2CppClass **v41; // x0
  struct UISprite_array *v42; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *hpBarSplitPointList; // x26
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  EventSuperBossEntity_o *v51; // x25
  Il2CppClass **v52; // x0
  struct UISprite_array *v53; // x8
  UnityEngine_GameObject_o *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  EventSuperBossEntity_o *v61; // x26
  struct UISprite_array *v62; // x25
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  EventSuperBossEntity_o *v69; // x26
  struct EventSuperBossEntity_o *v70; // x8
  struct System_Int64_array *v71; // x9
  float HpSplitPositionX; // s0
  struct UISprite_array *v73; // x8
  float v74; // s8
  struct UISprite_array *v75; // x8
  long double v76; // q0
  struct EventSuperBossEntity_o *v77; // x8
  struct System_Int64_array *v78; // x8
  struct UISprite_array *v79; // x9
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  struct EventSuperBossEntity_o *v85; // x8
  __int64 maxHp; // x22
  __int64 v87; // x23
  UILabel_o *totalHpLabel; // x20
  System_String_o *v89; // x21
  Il2CppObject *v90; // x0
  float v91; // s0
  __int64 v92; // x0
  UnityEngine_Component_o *parent; // [xsp+0h] [xbp-90h]
  __int64 v94; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CED231 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C7BAE8(&UISprite___TypeInfo);
    sub_1C7BAE8(&StringLiteral_13510/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/);
    byte_4CED231 = 1;
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
        v8 = System_String__Concat_64176912(SUPERBOSS_ICON_SPNAME_PREFIX, v7, 0);
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
                v15 = (struct UISprite_array *)sub_1C7BB90(UISprite___TypeInfo, (unsigned int)max_length);
                this->fields.hpBarSplitterList = v15;
                sub_1C7BA8C(
                  (GrandQuestFolderBoardItem_o *)&this->fields.hpBarSplitterList,
                  (int32_t)v15,
                  v16,
                  v17,
                  v18,
                  v19,
                  v20,
                  v21);
                v22 = (struct UISprite_array *)sub_1C7BB90(UISprite___TypeInfo, (unsigned int)max_length);
                this->fields.hpBarSplitPointList = v22;
                sub_1C7BA8C(
                  (GrandQuestFolderBoardItem_o *)&this->fields.hpBarSplitPointList,
                  (int32_t)v22,
                  v23,
                  v24,
                  v25,
                  v26,
                  v27,
                  v28);
                v14 = 0;
              }
              parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.hpBarSplitter, 0);
              eventSuperBossEntity = (EventSuperBossEntity_o *)GameObjectExtensions__GetParent(
                                                                 this->fields.hpBarSplitPoint,
                                                                 0);
              v30 = (UnityEngine_Component_o *)eventSuperBossEntity;
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
                                                                       (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitterList )
                      goto LABEL_95;
                    v40 = eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1C7BC24(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitterList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( i >= LODWORD(hpBarSplitterList->max_length) )
                      goto LABEL_96;
                    v41 = &hpBarSplitterList->obj.klass + (int)i;
                    v41[4] = (Il2CppClass *)v40;
                    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)v40, v34, v35, v36, v37, v38, v39);
                    v42 = *p_hpBarSplitterList;
                    if ( !*p_hpBarSplitterList )
                      goto LABEL_95;
                    if ( i >= LODWORD(v42->max_length) )
                      goto LABEL_96;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)v42->m_Items[i];
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    gameObject = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                   0);
                    GameObjectExtensions__SafeSetParent(gameObject, parent, 0);
                    hpBarSplitPointList = this->fields.hpBarSplitPointList;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Object__Instantiate_object_(
                                                                       (Il2CppObject *)this->fields.hpBarSplitPoint,
                                                                       (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitPointList )
                      goto LABEL_95;
                    v51 = eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1C7BC24(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitPointList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( i >= LODWORD(hpBarSplitPointList->max_length) )
                      goto LABEL_96;
                    v52 = &hpBarSplitPointList->obj.klass + (int)i;
                    v52[4] = (Il2CppClass *)v51;
                    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v52 + 4), (int32_t)v51, v45, v46, v47, v48, v49, v50);
                    v53 = this->fields.hpBarSplitPointList;
                    if ( !v53 )
                      goto LABEL_95;
                    if ( i >= LODWORD(v53->max_length) )
                      goto LABEL_96;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)v53->m_Items[i];
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventSuperBossEntity, 0);
                    GameObjectExtensions__SafeSetParent(v54, v30, 0);
                  }
                  else
                  {
                    if ( !hpBarSplitter )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       this->fields.hpBarSplitter,
                                                                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitterList )
                      goto LABEL_95;
                    v61 = eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1C7BC24(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitterList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                      {
LABEL_97:
                        v92 = sub_1C7BD64(eventSuperBossEntity);
                        sub_1C7BC10(v92, 0);
                      }
                    }
                    if ( !LODWORD(hpBarSplitterList->max_length) )
                      goto LABEL_96;
                    hpBarSplitterList->m_Items[0] = (UISprite_o *)v61;
                    sub_1C7BA8C(
                      (GrandQuestFolderBoardItem_o *)hpBarSplitterList->m_Items,
                      (int32_t)v61,
                      v55,
                      v56,
                      v57,
                      v58,
                      v59,
                      v60);
                    eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSplitPoint;
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    v62 = this->fields.hpBarSplitPointList;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !v62 )
                      goto LABEL_95;
                    v69 = eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1C7BC24(
                                                                         eventSuperBossEntity,
                                                                         v62->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( !LODWORD(v62->max_length) )
                      goto LABEL_96;
                    v62->m_Items[0] = (UISprite_o *)v69;
                    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v62->m_Items, (int32_t)v69, v63, v64, v65, v66, v67, v68);
                  }
                }
                v70 = this->fields.eventSuperBossEntity;
                if ( !v70 )
                  goto LABEL_95;
                v71 = v70->fields.splitHp;
                if ( !v71 )
                  goto LABEL_95;
                if ( i >= LODWORD(v71->max_length) )
                  goto LABEL_96;
                HpSplitPositionX = TitleInfoSuperBossComponent__GetHpSplitPositionX(
                                     (TitleInfoSuperBossComponent_o *)eventSuperBossEntity,
                                     v71->m_Items[i],
                                     v70->fields.maxHp,
                                     v29);
                v73 = *p_hpBarSplitterList;
                if ( !*p_hpBarSplitterList )
                  goto LABEL_95;
                if ( i >= LODWORD(v73->max_length) )
                  goto LABEL_96;
                eventSuperBossEntity = (EventSuperBossEntity_o *)v73->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v74 = HpSplitPositionX;
                eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                   0);
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v95.fields.y = 0.0;
                v95.fields.z = 0.0;
                v95.fields.x = v74;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, v95, 0);
                v75 = this->fields.hpBarSplitPointList;
                if ( !v75 )
                  goto LABEL_95;
                if ( i >= LODWORD(v75->max_length) )
                  goto LABEL_96;
                eventSuperBossEntity = (EventSuperBossEntity_o *)v75->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                   0);
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v96.fields.y = 0.0;
                v96.fields.z = 0.0;
                v96.fields.x = v74;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, v96, 0);
                v77 = this->fields.eventSuperBossEntity;
                if ( !v77 )
                  goto LABEL_95;
                v78 = v77->fields.splitHp;
                if ( !v78 )
                  goto LABEL_95;
                if ( i >= LODWORD(v78->max_length) )
                  goto LABEL_96;
                if ( !v4 )
                  goto LABEL_95;
                v79 = this->fields.hpBarSplitPointList;
                if ( !v79 )
                  goto LABEL_95;
                if ( i >= LODWORD(v79->max_length) )
LABEL_96:
                  sub_1C7BD48(eventSuperBossEntity);
                eventSuperBossEntity = (EventSuperBossEntity_o *)v79->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                if ( v78->m_Items[i] <= v4->fields.maxHp )
                  *(float *)&v76 = 0.0;
                else
                  *(float *)&v76 = 1.0;
                eventSuperBossEntity = (EventSuperBossEntity_o *)((__int64 (__fastcall *)(EventSuperBossEntity_o *, _QWORD, long double))eventSuperBossEntity->klass[1]._1.byval_arg.data)(
                                                                   eventSuperBossEntity,
                                                                   *(_QWORD *)&eventSuperBossEntity->klass[1]._1.byval_arg.bits,
                                                                   v76);
              }
            }
            eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
            if ( eventBossStatusUiEntity )
            {
              v97.fields.r = 0.0;
              v97.fields.g = 0.0;
              v97.fields.b = 0.0;
              v97.fields.a = 0.0;
              TextEffectColor = EventBossStatusUiEntity__GetTextEffectColor(eventBossStatusUiEntity, v97, 0);
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
                    v85 = this->fields.eventSuperBossEntity;
                    if ( v85 )
                    {
                      if ( v4 )
                      {
                        maxHp = v85->fields.maxHp;
                        eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel;
                        v87 = v4->fields.maxHp >= maxHp ? v85->fields.maxHp : v4->fields.maxHp;
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
                              v89 = LocalizationManager__Get((System_String_o *)StringLiteral_13510/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0);
                              v94 = maxHp - v87;
                              v90 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v94);
                              eventSuperBossEntity = (EventSuperBossEntity_o *)System_String__Format(v89, v90, 0);
                              if ( !totalHpLabel )
                                goto LABEL_95;
                              UILabel__set_text(totalHpLabel, (System_String_o *)eventSuperBossEntity, 0);
                            }
                            eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel;
                            if ( eventSuperBossEntity )
                            {
                              v99.fields.r = r;
                              v99.fields.g = g;
                              v99.fields.b = b;
                              v99.fields.a = a;
                              UILabel__set_effectColor((UILabel_o *)eventSuperBossEntity, v99, 0);
                              eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSlider;
                              if ( eventSuperBossEntity )
                              {
                                v91 = 1.0 - (double)v87 / (double)maxHp;
                                UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, v91, 0);
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
    sub_1C7BD40(eventSuperBossEntity, method);
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
  if ( (byte_4CED230 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_16165/*"_"*/);
    byte_4CED230 = 1;
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


void TitleInfoSuperBossComponent__Setup(
        TitleInfoSuperBossComponent_o *this,
        EventSuperBossEntity_o *superBossEntity,
        UIAtlas_o *termAtlas,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct EventSuperBossEntity_o **p_eventSuperBossEntity; // x21
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
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

  if ( (byte_4CED22E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_19423/*"event_superboss_hp_split"*/);
    sub_1C7BAE8(&StringLiteral_19427/*"event_superboss_hp_white"*/);
    sub_1C7BAE8(&StringLiteral_19380/*"event_raid_hp_back"*/);
    sub_1C7BAE8(&StringLiteral_19424/*"event_superboss_hp_split_frame"*/);
    sub_1C7BAE8(&StringLiteral_19421/*"event_superboss_hp_lower"*/);
    sub_1C7BAE8(&StringLiteral_19381/*"event_raid_hp_frame"*/);
    sub_1C7BAE8(&StringLiteral_19425/*"event_superboss_hp_upper"*/);
    byte_4CED22E = 1;
  }
  this->fields.eventSuperBossEntity = superBossEntity;
  p_eventSuperBossEntity = &this->fields.eventSuperBossEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventSuperBossEntity,
    (int32_t)superBossEntity,
    (int32_t)termAtlas,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  this->fields.isEncountSuperBoss = 0;
  if ( eventSuperBossEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___),
          !*p_eventSuperBossEntity)
      || !Instance
      || ((EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                         (EventBossStatusUiMaster_o *)Instance,
                                         (*p_eventSuperBossEntity)->fields.eventId,
                                         (*p_eventSuperBossEntity)->fields.id,
                                         0),
           this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex,
           sub_1C7BA8C(
             (GrandQuestFolderBoardItem_o *)&this->fields.eventBossStatusUiEntity,
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
      sub_1C7BD40(Instance, v13);
    }
    IsEncounted = EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)Instance, 0);
    this->fields.isEncountSuperBoss = IsEncounted;
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      (TitleInfoSuperBossComponent_o *)IsEncounted,
      this->fields.hpBarUnderSprite,
      (System_String_o *)StringLiteral_19421/*"event_superboss_hp_lower"*/,
      GaugeId,
      v24);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v25,
      this->fields.hpBarUpperSprite,
      (System_String_o *)StringLiteral_19425/*"event_superboss_hp_upper"*/,
      GaugeId,
      v26);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v27,
      this->fields.hpBarWhiteSprite,
      (System_String_o *)StringLiteral_19427/*"event_superboss_hp_white"*/,
      GaugeId,
      v28);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v29,
      this->fields.hpSplitSprite,
      (System_String_o *)StringLiteral_19424/*"event_superboss_hp_split_frame"*/,
      GaugeId,
      v30);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v31,
      this->fields.hpSplitPointSprite,
      (System_String_o *)StringLiteral_19423/*"event_superboss_hp_split"*/,
      GaugeId,
      v32);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v33,
      this->fields.superBossHpFrame,
      (System_String_o *)StringLiteral_19381/*"event_raid_hp_frame"*/,
      GaugeId,
      v34);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v35,
      this->fields.superBossHpBg,
      (System_String_o *)StringLiteral_19380/*"event_raid_hp_back"*/,
      GaugeId,
      v36);
    TitleInfoSuperBossComponent__SetDisp(this, v37);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  TitleInfoSuperBossComponent_c *v15; // x0
  Il2CppObject *Object_object__51713432; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UnityEngine_Object_o *splitHpEffect; // x23
  TitleInfoSuperBossComponent_c *v24; // x0
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  TitleInfoSuperBossComponent_c *v32; // x0
  System_String_o *v33; // x0
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  UnityEngine_Object_o *clearBossEffect; // x22
  const MethodInfo *v42; // x1
  TitleInfoSuperBossComponent_c *v43; // x0
  Il2CppObject *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7

  v6 = this;
  if ( (byte_4CED233 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TitleInfoSuperBossComponent_TypeInfo);
    this = (TitleInfoSuperBossComponent_o *)sub_1C7BAE8(&StringLiteral_16165/*"_"*/);
    byte_4CED233 = 1;
  }
  eventSuperBossEntity = v6->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_22;
  v8 = System_Int32__ToString((int)eventSuperBossEntity + 16, 0);
  v6->fields.animEndCall = callBack;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v6->fields.animEndCall, (int32_t)callBack, v9, v10, v11, v12, v13, v14);
  v15 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v15 = TitleInfoSuperBossComponent_TypeInfo;
  }
  this = (TitleInfoSuperBossComponent_o *)System_String__Concat_64215176(
                                            v15->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
                                            (System_String_o *)StringLiteral_16165/*"_"*/,
                                            v8,
                                            0);
  if ( !mapAssetData )
LABEL_22:
    sub_1C7BD40(this, mapAssetData);
  Object_object__51713432 = AssetData__GetObject_object__51713432(
                              mapAssetData,
                              (System_String_o *)this,
                              (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  v6->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)Object_object__51713432;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v6->fields.splitHpEffect,
    (int32_t)Object_object__51713432,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  splitHpEffect = (UnityEngine_Object_o *)v6->fields.splitHpEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(splitHpEffect, 0, 0) )
  {
    v24 = TitleInfoSuperBossComponent_TypeInfo;
    if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v24 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v25 = AssetData__GetObject_object__51713432(
            mapAssetData,
            v24->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
            (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
    v6->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)v25;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v6->fields.splitHpEffect, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  }
  v32 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v32 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v33 = System_String__Concat_64215176(
          v32->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_16165/*"_"*/,
          v8,
          0);
  v34 = AssetData__GetObject_object__51713432(
          mapAssetData,
          v33,
          (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)v34;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v6->fields.clearBossEffect, (int32_t)v34, v35, v36, v37, v38, v39, v40);
  clearBossEffect = (UnityEngine_Object_o *)v6->fields.clearBossEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(clearBossEffect, 0, 0) )
  {
    v43 = TitleInfoSuperBossComponent_TypeInfo;
    if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v43 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v44 = AssetData__GetObject_object__51713432(
            mapAssetData,
            v43->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
            (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
    v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)v44;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v6->fields.clearBossEffect, (int32_t)v44, v45, v46, v47, v48, v49, v50);
  }
  TitleInfoSuperBossComponent__PlayFrameInBoss(v6, v42);
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
  if ( (byte_4CED23D & 1) == 0 )
  {
    sub_1C7BAE8(&double_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C7BAE8(&Method_UITweener_Begin_TweenAlpha___);
    this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)sub_1C7BAE8(&StringLiteral_13510/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/);
    byte_4CED23D = 1;
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
                                                                  (System_String_o *)StringLiteral_13510/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/,
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
                                                                      (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                                                                        (const MethodInfo_3245DA8 *)Method_UITweener_Begin_TweenAlpha___);
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
      sub_1C7BD40(this, method);
    }
LABEL_47:
    sub_1C7BD48(this);
  }
}