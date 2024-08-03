void __fastcall TitleInfoSuperBossComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct TitleInfoSuperBossComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct TitleInfoSuperBossComponent_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  TitleInfoSuperBossComponent_c *v15; // x8
  struct TitleInfoSuperBossComponent_StaticFields *v16; // x9
  struct TitleInfoSuperBossComponent_StaticFields *v17; // x9
  struct TitleInfoSuperBossComponent_StaticFields *v18; // x8

  if ( (byte_49FAF8E & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoSuperBossComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_14414/*"TitleInfoEventSuperBossEffect_Dead"*/, v4);
    sub_1B640C8(&StringLiteral_14415/*"TitleInfoEventSuperBossEffect_Split"*/, v5);
    sub_1B640C8(&StringLiteral_19189/*"event_superboss_icon_"*/, v6);
    byte_49FAF8E = 1;
  }
  TitleInfoSuperBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_19189/*"event_superboss_icon_"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)TitleInfoSuperBossComponent_TypeInfo->static_fields,
    StringLiteral_19189/*"event_superboss_icon_"*/,
    v2,
    v3);
  v7 = StringLiteral_14415/*"TitleInfoEventSuperBossEffect_Split"*/;
  static_fields = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14415/*"TitleInfoEventSuperBossEffect_Split"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB, v7, v9, v10);
  v11 = StringLiteral_14414/*"TitleInfoEventSuperBossEffect_Dead"*/;
  v12 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v12->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14414/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12->SUPERBOSS_CLEAR_EFFECT_PREFAB, v11, v13, v14);
  v15 = TitleInfoSuperBossComponent_TypeInfo;
  v16 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v16->SUPERBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v16->SUPERBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v17 = v15->static_fields;
  *(_QWORD *)&v17->SUPERBOSS_SPLIT_POS_DELTA.fields.x = 0x41200000BF000000LL;
  v17->SUPERBOSS_SPLIT_POS_DELTA.fields.z = 0.0;
  v18 = v15->static_fields;
  *(_OWORD *)&v18->ANIM_DURATION_FRAME_IN_BOSS = xmmword_BA2AA0;
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
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  System_Action_o *onClearCall; // x21
  UnityEngine_Component_o *superBossIconSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoSuperBossComponent_c *v10; // x8
  UnityEngine_GameObject_o *v11; // x20

  if ( (byte_49FAF8B & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoSuperBossComponent_TypeInfo, method);
    sub_1B640C8(&Method_UITweener_Begin_TweenAlpha___, v5);
    sub_1B640C8(&StringLiteral_9847/*"OnEndAnimation"*/, v6);
    byte_49FAF8B = 1;
  }
  onClearCall = this->fields.onClearCall;
  this->fields.onClearCall = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onClearCall, 0, v2, v3);
  ActionExtensions__Call(onClearCall, 0LL);
  superBossIconSp = (UnityEngine_Component_o *)this->fields.superBossIconSp;
  if ( !superBossIconSp )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(superBossIconSp, 0LL);
  v10 = TitleInfoSuperBossComponent_TypeInfo;
  v11 = gameObject;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v10 = TitleInfoSuperBossComponent_TypeInfo;
  }
  superBossIconSp = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                 v11,
                                                 v10->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                 (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenAlpha___);
  if ( !superBossIconSp )
LABEL_8:
    sub_1B64324(superBossIconSp);
  LODWORD(superBossIconSp[1].monitor) = 1;
  superBossIconSp[5].monitor = (void *)1065353216;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9847/*"OnEndAnimation"*/,
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

  if ( (byte_49FAF8C & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoSuperBossComponent_TypeInfo, splitHp);
    byte_49FAF8C = 1;
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
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_animEndCall; // x0
  System_Action_o *animEndCall; // t1
  const MethodInfo *v7; // x1

  animEndCall = this->fields.animEndCall;
  p_animEndCall = (ServantStatusBattleListViewItem_o *)&this->fields.animEndCall;
  p_animEndCall->klass = 0LL;
  sub_1B6406C(p_animEndCall, 0, v2, v3);
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
  float32x2_t *static_fields; // x8
  Il2CppObject *v10; // x20
  float v11; // s0
  void *v12; // x9
  UnityEngine_GameObject_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_49FAF86 & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoSuperBossComponent_TypeInfo, method);
    sub_1B640C8(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_1B640C8(&StringLiteral_10602/*"PlayHpNameAlpha"*/, v4);
    byte_49FAF86 = 1;
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
         (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenPosition___);
  if ( !v8 )
    sub_1B64324(0LL);
  static_fields = (float32x2_t *)TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v10 = v8;
  v11 = this->fields.originPos.fields.z + static_fields[4].n64_f32[0];
  v8[8].klass = (Il2CppClass *)vadd_f32(*(float32x2_t *)&this->fields.originPos.fields.x, static_fields[3]).n64_u64[0];
  *(float *)&v8[8].monitor = v11;
  v12 = *(void **)&this->fields.originPos.fields.x;
  HIDWORD(v8[9].klass) = LODWORD(this->fields.originPos.fields.z);
  *(void **)((char *)&v8[8].monitor + 4) = v12;
  LODWORD(v8[2].klass) = 2;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10[5].klass = (Il2CppClass *)v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10[5], (int32_t)v13, v14, v15);
  v16 = StringLiteral_10602/*"PlayHpNameAlpha"*/;
  v10[5].monitor = (void *)StringLiteral_10602/*"PlayHpNameAlpha"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10[5].monitor, v16, v17, v18);
}


void __fastcall TitleInfoSuperBossComponent__PlayHpCut(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  TitleInfoSuperBossComponent_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x3
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  __int64 v20; // x2
  TitleInfoSuperBossComponent_c *v21; // x0
  EasingObject_o *v22; // x21
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_o *v27; // x20

  if ( (byte_49FAF88 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v4);
    sub_1B640C8(&Method_TitleInfoSuperBossComponent_PlayHpDeletion__, v5);
    sub_1B640C8(&TitleInfoSuperBossComponent_TypeInfo, v6);
    sub_1B640C8(&Method_TitleInfoSuperBossComponent___c__DisplayClass58_0__PlayHpCut_b__0__, v7);
    sub_1B640C8(&TitleInfoSuperBossComponent___c__DisplayClass58_0_TypeInfo, v8);
    byte_49FAF88 = 1;
  }
  v9 = sub_1B64314(TitleInfoSuperBossComponent___c__DisplayClass58_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v11, v12);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_9;
  TitleInfoSuperBossComponent__PlaySeByEventId(v10, eventSuperBossEntity->fields.eventId, 1, v13);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v9 + 16) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)Component_object, v17, v18);
  v21 = TitleInfoSuperBossComponent_TypeInfo;
  v22 = *(EasingObject_o **)(v9 + 16);
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v21 = TitleInfoSuperBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v21->static_fields->ANIM_DURATION_HP_CUT;
  v24 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v19, v20);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v9,
    Method_TitleInfoSuperBossComponent___c__DisplayClass58_0__PlayHpCut_b__0__,
    0LL);
  v27 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_TitleInfoSuperBossComponent_PlayHpDeletion__, 0LL);
  if ( !v22 )
LABEL_9:
    sub_1B64324(v10);
  EasingObject__Play(v22, ANIM_DURATION_HP_CUT, v24, v27, 0.0, 0, 0LL);
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
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
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

  if ( (byte_49FAF89 & 1) == 0 )
  {
    sub_1B640C8(&long_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&TitleInfoSuperBossComponent_TypeInfo, v6);
    sub_1B640C8(&Method_UITweener_Begin_TweenAlpha___, v7);
    sub_1B640C8(&StringLiteral_9847/*"OnEndAnimation"*/, v8);
    sub_1B640C8(&StringLiteral_12631/*"SetClearAlpha"*/, v9);
    sub_1B640C8(&StringLiteral_13293/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v10);
    byte_49FAF89 = 1;
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
                                                  (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenAlpha___);
  if ( !hpBarSliderUnder )
    goto LABEL_23;
  v15 = hpBarSliderUnder;
  LODWORD(hpBarSliderUnder[1].monitor) = 1;
  hpBarSliderUnder[5].monitor = (void *)1065353216;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15[3].monitor = v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15[3].monitor, (int32_t)v16, v17, v18);
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
              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v24, (UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v24, 0LL);
    }
    v21 = &StringLiteral_12631/*"SetClearAlpha"*/;
  }
  else
  {
    v21 = &StringLiteral_9847/*"OnEndAnimation"*/;
  }
  v25 = *v21;
  *(_QWORD *)&v15[3].fields.m_CachedPtr = *v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15[3].fields, v25, v19, v20);
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
  hpBarSliderUnder = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13293/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
  v29 = this->fields.eventSuperBossEntity;
  if ( !v29
    || (maxHp = v29->fields.maxHp,
        v31 = (System_String_o *)hpBarSliderUnder,
        (hpBarSliderUnder = (UnityEngine_Component_o *)EventSuperBossEntity__GetUserSuperBossEntity(v29, 0LL)) == 0LL)
    || (v33 = maxHp - (unsigned __int64)hpBarSliderUnder[1].monitor,
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v33),
        hpBarSliderUnder = (UnityEngine_Component_o *)System_String__Format(v31, v32, 0LL),
        !totalHpLabel) )
  {
LABEL_23:
    sub_1B64324(hpBarSliderUnder);
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
  int32_t v12; // w3
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FAF87 & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoSuperBossComponent_TypeInfo, method);
    sub_1B640C8(&Method_UITweener_Begin_TweenAlpha___, v3);
    sub_1B640C8(&StringLiteral_10601/*"PlayHpCut"*/, v4);
    byte_49FAF87 = 1;
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
                                              (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenAlpha___);
  if ( !totalHpLabel )
LABEL_8:
    sub_1B64324(totalHpLabel);
  v9 = totalHpLabel;
  totalHpLabel[5].monitor = (void *)0x3F80000000000000LL;
  LODWORD(totalHpLabel[1].monitor) = 1;
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v9[3].monitor = v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9[3].monitor, (int32_t)v10, v11, v12);
  v13 = StringLiteral_10601/*"PlayHpCut"*/;
  *(_QWORD *)&v9[3].fields.m_CachedPtr = StringLiteral_10601/*"PlayHpCut"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9[3].fields, v13, v14, v15);
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
  __int64 *v13; // x20
  _QWORD *v14; // x0
  System_String_o *v15; // x20
  System_Reflection_MethodBase_o *v16; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FAF8D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&Method_TitleInfoSuperBossComponent_PlaySeByEventId__, v8);
    sub_1B640C8(&StringLiteral_16802/*"ar12"*/, v9);
    sub_1B640C8(&StringLiteral_16813/*"ar60"*/, v10);
    sub_1B640C8(&StringLiteral_1/*""*/, v11);
    byte_49FAF8D = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    eventId,
    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( entity )
  {
    v13 = &StringLiteral_16813/*"ar60"*/;
    if ( !EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
    {
      if ( entity )
      {
        if ( !EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL) )
          v13 = &StringLiteral_16802/*"ar12"*/;
      }
      else
      {
        v13 = &StringLiteral_16802/*"ar12"*/;
      }
    }
  }
  else
  {
    v13 = &StringLiteral_16802/*"ar12"*/;
  }
  v14 = Method_TitleInfoSuperBossComponent_PlaySeByEventId__;
  v15 = (System_String_o *)*v13;
  if ( (*((_BYTE *)Method_TitleInfoSuperBossComponent_PlaySeByEventId__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1B640E0(Method_TitleInfoSuperBossComponent_PlaySeByEventId__);
  v16 = (System_Reflection_MethodBase_o *)sub_1B640AC(v14, v14[4]);
  if ( isPlay )
    OverwriteAssetSoundName__PlaySeLoop(v16, v15, 1.0, 0.0, 0LL);
  else
    OverwriteAssetSoundName__StopSe(v16, v15, 0.0, 0LL);
}


void __fastcall TitleInfoSuperBossComponent__SetBossIcon(
        TitleInfoSuperBossComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  UISprite_o *superBossIconSp; // x21
  struct UISprite_o *v6; // x0

  if ( (byte_49FAF81 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, spName);
    byte_49FAF81 = 1;
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
    sub_1B64324(v6);
  }
}


void __fastcall TitleInfoSuperBossComponent__SetClearAlpha(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoSuperBossComponent_c *v4; // x0

  if ( (byte_49FAF8A & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoSuperBossComponent_TypeInfo, method);
    sub_1B640C8(&StringLiteral_5321/*"DoClearCallback"*/, v3);
    byte_49FAF8A = 1;
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
    (System_String_o *)StringLiteral_5321/*"DoClearCallback"*/,
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
  EventSuperBossEntity_o *eventSuperBossEntity; // x0
  struct EventSuperBossEntity_o *v11; // x9
  __int64 maxHp; // x8
  double v13; // d1
  float v14; // s0
  float v15; // s2
  float v16; // s5
  float v17; // s3
  float v18; // s0
  float v19; // s2
  struct System_Int64_array *splitHp; // x9
  int max_length; // w11
  int32_t v22; // w10
  int64_t v23; // x12
  float v24; // s1
  UnityEngine_Transform_o *v25; // x21
  TitleInfoSuperBossComponent_c *v26; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float *static_fields; // x8
  UILabel_o *totalHpLabel; // x21
  struct EventSuperBossEntity_o *v32; // x8
  System_String_o *v33; // x22
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  long double v36; // q0
  struct EventSuperBossEntity_o *v37; // x8
  struct System_Int64_array *v38; // x9
  struct UISprite_array *hpBarSplitPointList; // x10
  int v40; // w21
  il2cpp_array_size_t v41; // w22
  struct System_Int64_array *v42; // x8
  struct UISprite_array *v43; // x9
  int64_t v44; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FAF84 & 1) == 0 )
  {
    sub_1B640C8(&long_TypeInfo, damage);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&TitleInfoSuperBossComponent_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_13293/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v9);
    byte_49FAF84 = 1;
  }
  this->fields.onClearCall = onClearCallback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.onClearCall,
    (int32_t)onClearCallback,
    (int32_t)onClearCallback,
    (int32_t)method);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  eventSuperBossEntity = (EventSuperBossEntity_o *)EventSuperBossEntity__GetUserSuperBossEntity(
                                                     eventSuperBossEntity,
                                                     0LL);
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  v11 = this->fields.eventSuperBossEntity;
  if ( !v11 )
    goto LABEL_55;
  maxHp = eventSuperBossEntity->fields.maxHp;
  v13 = (double)v11->fields.maxHp;
  v14 = 1.0 - (double)damage / v13;
  v15 = 1.0 - (double)maxHp / v13;
  v16 = fminf(v14, 1.0);
  v17 = fminf(v15, 1.0);
  v18 = v14 < 0.0 ? 0.0 : v16;
  v19 = v15 < 0.0 ? 0.0 : v17;
  this->fields.HPfrom = v18;
  this->fields.HPto = v19;
  *(_QWORD *)&this->fields.HPsplitPoint = -1082130432LL;
  splitHp = v11->fields.splitHp;
  if ( !splitHp )
    goto LABEL_55;
  max_length = splitHp->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      v23 = splitHp->m_Items[v22];
      if ( v23 > damage && v23 <= maxHp )
        break;
      if ( max_length == ++v22 )
        goto LABEL_20;
    }
    v24 = 1.0 - (double)v23 / v13;
    this->fields.HPsplitPoint = v24;
    this->fields.HPsplitNo = v22;
  }
LABEL_20:
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSlider;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, v18, 0LL);
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
  v25 = (UnityEngine_Transform_o *)eventSuperBossEntity;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, 0LL);
  v26 = TitleInfoSuperBossComponent_TypeInfo;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v26 = TitleInfoSuperBossComponent_TypeInfo;
  }
  static_fields = (float *)v26->static_fields;
  v46.fields.x = x + static_fields[6];
  v46.fields.y = y + static_fields[7];
  v46.fields.z = z + static_fields[8];
  UnityEngine_Transform__set_localPosition(v25, v46, 0LL);
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  eventSuperBossEntity = (EventSuperBossEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13293/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
  v32 = this->fields.eventSuperBossEntity;
  if ( !v32 )
    goto LABEL_55;
  v33 = (System_String_o *)eventSuperBossEntity;
  v44 = v32->fields.maxHp - damage;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v44);
  eventSuperBossEntity = (EventSuperBossEntity_o *)System_String__Format(v33, v34, 0LL);
  if ( !totalHpLabel
    || (UILabel__set_text(totalHpLabel, (System_String_o *)eventSuperBossEntity, 0LL),
        (eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel) == 0LL)
    || (eventSuperBossEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, float))&eventSuperBossEntity->klass[1]._1.byval_arg.bits)(
                                                           eventSuperBossEntity,
                                                           eventSuperBossEntity->klass[1]._1.this_arg.data,
                                                           0.0),
        (v37 = this->fields.eventSuperBossEntity) == 0LL)
    || (v38 = v37->fields.splitHp) == 0LL )
  {
LABEL_55:
    sub_1B64324(eventSuperBossEntity);
  }
  hpBarSplitPointList = this->fields.hpBarSplitPointList;
  if ( hpBarSplitPointList )
  {
    v40 = v38->max_length;
    if ( v40 <= (signed int)hpBarSplitPointList->max_length && v40 >= 1 )
    {
      v41 = 0;
      while ( 1 )
      {
        v42 = v37->fields.splitHp;
        if ( !v42 )
          goto LABEL_55;
        if ( v41 >= v42->max_length )
          goto LABEL_57;
        v43 = this->fields.hpBarSplitPointList;
        if ( !v43 )
          goto LABEL_55;
        if ( v41 >= v43->max_length )
LABEL_57:
          sub_1B6432C(eventSuperBossEntity, v35);
        eventSuperBossEntity = (EventSuperBossEntity_o *)v43->m_Items[v41];
        if ( !eventSuperBossEntity )
          goto LABEL_55;
        if ( v42->m_Items[v41] <= damage )
          *(float *)&v36 = 0.0;
        else
          *(float *)&v36 = 1.0;
        eventSuperBossEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, long double))&eventSuperBossEntity->klass[1]._1.byval_arg.bits)(
                                                           eventSuperBossEntity,
                                                           eventSuperBossEntity->klass[1]._1.this_arg.data,
                                                           v36);
        if ( v40 == ++v41 )
          return;
        v37 = this->fields.eventSuperBossEntity;
        if ( !v37 )
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
  int32_t v24; // w3
  struct UISprite_array *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  UnityEngine_Component_o *v30; // x24
  il2cpp_array_size_t i; // w29
  struct UISprite_array *hpBarSplitterList; // x25
  Il2CppObject *hpBarSplitter; // x26
  int32_t v34; // w2
  int32_t v35; // w3
  EventSuperBossEntity_o *v36; // x26
  Il2CppClass **v37; // x0
  struct UISprite_array *v38; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *hpBarSplitPointList; // x26
  int32_t v41; // w2
  int32_t v42; // w3
  EventSuperBossEntity_o *v43; // x25
  Il2CppClass **v44; // x0
  struct UISprite_array *v45; // x8
  UnityEngine_GameObject_o *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  EventSuperBossEntity_o *v49; // x26
  struct UISprite_array *v50; // x25
  int32_t v51; // w2
  int32_t v52; // w3
  EventSuperBossEntity_o *v53; // x26
  struct EventSuperBossEntity_o *v54; // x8
  struct System_Int64_array *v55; // x9
  float HpSplitPositionX; // s0
  struct UISprite_array *v57; // x8
  float v58; // s8
  struct UISprite_array *v59; // x8
  long double v60; // q0
  struct EventSuperBossEntity_o *v61; // x8
  struct System_Int64_array *v62; // x8
  struct UISprite_array *v63; // x9
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  float v65; // s0
  float v66; // s1
  float v67; // s2
  float v68; // s3
  float v69; // s8
  float v70; // s9
  float v71; // s10
  float v72; // s11
  struct EventSuperBossEntity_o *v73; // x8
  __int64 maxHp; // x22
  __int64 v75; // x23
  UILabel_o *totalHpLabel; // x20
  System_String_o *v77; // x21
  Il2CppObject *v78; // x0
  float v79; // s0
  __int64 v80; // x0
  UnityEngine_Component_o *parent; // [xsp+0h] [xbp-90h]
  __int64 v82; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FAF83 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    sub_1B640C8(&long_TypeInfo, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&TitleInfoSuperBossComponent_TypeInfo, v7);
    sub_1B640C8(&UISprite___TypeInfo, v8);
    sub_1B640C8(&StringLiteral_13293/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v9);
    byte_49FAF83 = 1;
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
        v15 = System_String__Concat_61375396(SUPERBOSS_ICON_SPNAME_PREFIX, v14, 0LL);
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
                v22 = (struct UISprite_array *)sub_1B64170(UISprite___TypeInfo, (unsigned int)max_length);
                this->fields.hpBarSplitterList = v22;
                sub_1B6406C(
                  (ServantStatusBattleListViewItem_o *)&this->fields.hpBarSplitterList,
                  (int32_t)v22,
                  v23,
                  v24);
                v25 = (struct UISprite_array *)sub_1B64170(UISprite___TypeInfo, (unsigned int)max_length);
                this->fields.hpBarSplitPointList = v25;
                sub_1B6406C(
                  (ServantStatusBattleListViewItem_o *)&this->fields.hpBarSplitPointList,
                  (int32_t)v25,
                  v26,
                  v27);
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
                                                                       (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitterList )
                      goto LABEL_95;
                    v36 = eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1B64204(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitterList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( i >= hpBarSplitterList->max_length )
                      goto LABEL_96;
                    v37 = &hpBarSplitterList->obj.klass + (int)i;
                    v37[4] = (Il2CppClass *)v36;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v36, v34, v35);
                    v38 = *p_hpBarSplitterList;
                    if ( !*p_hpBarSplitterList )
                      goto LABEL_95;
                    if ( i >= v38->max_length )
                      goto LABEL_96;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)v38->m_Items[i];
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    gameObject = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                   0LL);
                    GameObjectExtensions__SafeSetParent(gameObject, parent, 0LL);
                    hpBarSplitPointList = this->fields.hpBarSplitPointList;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Object__Instantiate_object_(
                                                                       (Il2CppObject *)this->fields.hpBarSplitPoint,
                                                                       (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitPointList )
                      goto LABEL_95;
                    v43 = eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1B64204(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitPointList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( i >= hpBarSplitPointList->max_length )
                      goto LABEL_96;
                    v44 = &hpBarSplitPointList->obj.klass + (int)i;
                    v44[4] = (Il2CppClass *)v43;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v43, v41, v42);
                    v45 = this->fields.hpBarSplitPointList;
                    if ( !v45 )
                      goto LABEL_95;
                    if ( i >= v45->max_length )
                      goto LABEL_96;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)v45->m_Items[i];
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventSuperBossEntity, 0LL);
                    GameObjectExtensions__SafeSetParent(v46, v30, 0LL);
                  }
                  else
                  {
                    if ( !hpBarSplitter )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       this->fields.hpBarSplitter,
                                                                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitterList )
                      goto LABEL_95;
                    v49 = eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1B64204(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitterList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                      {
LABEL_97:
                        v80 = sub_1B64348(eventSuperBossEntity);
                        sub_1B641F0(v80, 0LL);
                      }
                    }
                    if ( !hpBarSplitterList->max_length )
                      goto LABEL_96;
                    hpBarSplitterList->m_Items[0] = (UISprite_o *)v49;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)hpBarSplitterList->m_Items, (int32_t)v49, v47, v48);
                    eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSplitPoint;
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    v50 = this->fields.hpBarSplitPointList;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !v50 )
                      goto LABEL_95;
                    v53 = eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1B64204(
                                                                         eventSuperBossEntity,
                                                                         v50->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( !v50->max_length )
                      goto LABEL_96;
                    v50->m_Items[0] = (UISprite_o *)v53;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)v50->m_Items, (int32_t)v53, v51, v52);
                  }
                }
                v54 = this->fields.eventSuperBossEntity;
                if ( !v54 )
                  goto LABEL_95;
                v55 = v54->fields.splitHp;
                if ( !v55 )
                  goto LABEL_95;
                if ( i >= v55->max_length )
                  goto LABEL_96;
                HpSplitPositionX = TitleInfoSuperBossComponent__GetHpSplitPositionX(
                                     (TitleInfoSuperBossComponent_o *)eventSuperBossEntity,
                                     v55->m_Items[i],
                                     v54->fields.maxHp,
                                     v29);
                v57 = *p_hpBarSplitterList;
                if ( !*p_hpBarSplitterList )
                  goto LABEL_95;
                if ( i >= v57->max_length )
                  goto LABEL_96;
                eventSuperBossEntity = (EventSuperBossEntity_o *)v57->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v58 = HpSplitPositionX;
                eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                   0LL);
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v83.fields.y = 0.0;
                v83.fields.z = 0.0;
                v83.fields.x = v58;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, v83, 0LL);
                v59 = this->fields.hpBarSplitPointList;
                if ( !v59 )
                  goto LABEL_95;
                if ( i >= v59->max_length )
                  goto LABEL_96;
                eventSuperBossEntity = (EventSuperBossEntity_o *)v59->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                   0LL);
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v84.fields.y = 0.0;
                v84.fields.z = 0.0;
                v84.fields.x = v58;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, v84, 0LL);
                v61 = this->fields.eventSuperBossEntity;
                if ( !v61 )
                  goto LABEL_95;
                v62 = v61->fields.splitHp;
                if ( !v62 )
                  goto LABEL_95;
                if ( i >= v62->max_length )
                  goto LABEL_96;
                if ( !v11 )
                  goto LABEL_95;
                v63 = this->fields.hpBarSplitPointList;
                if ( !v63 )
                  goto LABEL_95;
                if ( i >= v63->max_length )
LABEL_96:
                  sub_1B6432C(eventSuperBossEntity, v28);
                eventSuperBossEntity = (EventSuperBossEntity_o *)v63->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                if ( v62->m_Items[i] <= v11->fields.maxHp )
                  *(float *)&v60 = 0.0;
                else
                  *(float *)&v60 = 1.0;
                eventSuperBossEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, long double))&eventSuperBossEntity->klass[1]._1.byval_arg.bits)(
                                                                   eventSuperBossEntity,
                                                                   eventSuperBossEntity->klass[1]._1.this_arg.data,
                                                                   v60);
              }
            }
            eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
            if ( eventBossStatusUiEntity )
            {
              v85.fields.r = 0.0;
              v85.fields.g = 0.0;
              v85.fields.b = 0.0;
              v85.fields.a = 0.0;
              *(UnityEngine_Color_o *)&v65 = EventBossStatusUiEntity__GetTextEffectColor(
                                               eventBossStatusUiEntity,
                                               v85,
                                               0LL);
            }
            else
            {
              eventSuperBossEntity = this->fields.eventSuperBossEntity;
              if ( !eventSuperBossEntity )
                goto LABEL_95;
              *(UnityEngine_Color_o *)&v65 = EventSuperBossEntity__GetBossColor(eventSuperBossEntity, 0LL);
            }
            eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderWhite;
            v69 = v65;
            v70 = v66;
            v71 = v67;
            v72 = v68;
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
                    v73 = this->fields.eventSuperBossEntity;
                    if ( v73 )
                    {
                      if ( v11 )
                      {
                        maxHp = v73->fields.maxHp;
                        eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel;
                        v75 = v11->fields.maxHp >= maxHp ? v73->fields.maxHp : v11->fields.maxHp;
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
                              v77 = LocalizationManager__Get((System_String_o *)StringLiteral_13293/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
                              v82 = maxHp - v75;
                              v78 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v82);
                              eventSuperBossEntity = (EventSuperBossEntity_o *)System_String__Format(v77, v78, 0LL);
                              if ( !totalHpLabel )
                                goto LABEL_95;
                              UILabel__set_text(totalHpLabel, (System_String_o *)eventSuperBossEntity, 0LL);
                            }
                            eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel;
                            if ( eventSuperBossEntity )
                            {
                              v86.fields.r = v69;
                              v86.fields.g = v70;
                              v86.fields.b = v71;
                              v86.fields.a = v72;
                              UILabel__set_effectColor((UILabel_o *)eventSuperBossEntity, v86, 0LL);
                              eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSlider;
                              if ( eventSuperBossEntity )
                              {
                                v79 = 1.0 - (double)v75 / (double)maxHp;
                                UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, v79, 0LL);
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
    sub_1B64324(eventSuperBossEntity);
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
  if ( (byte_49FAF82 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, sprite);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v8);
    byte_49FAF82 = 1;
  }
  if ( (gaugeId & 0x80000000) != 0 )
    goto LABEL_12;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  v10 = System_String__Concat_61386656(prefix, (System_String_o *)StringLiteral_16054/*"_"*/, v9, 0LL);
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
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  int32_t GaugeId; // w20
  _BOOL8 IsEncounted; // x0
  const MethodInfo *v23; // x4
  TitleInfoSuperBossComponent_o *v24; // x0
  const MethodInfo *v25; // x4
  TitleInfoSuperBossComponent_o *v26; // x0
  const MethodInfo *v27; // x4
  TitleInfoSuperBossComponent_o *v28; // x0
  const MethodInfo *v29; // x4
  TitleInfoSuperBossComponent_o *v30; // x0
  const MethodInfo *v31; // x4
  TitleInfoSuperBossComponent_o *v32; // x0
  const MethodInfo *v33; // x4
  TitleInfoSuperBossComponent_o *v34; // x0
  const MethodInfo *v35; // x4
  const MethodInfo *v36; // x1

  if ( (byte_49FAF80 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, superBossEntity);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_19184/*"event_superboss_hp_split"*/, v7);
    sub_1B640C8(&StringLiteral_19188/*"event_superboss_hp_white"*/, v8);
    sub_1B640C8(&StringLiteral_19141/*"event_raid_hp_back"*/, v9);
    sub_1B640C8(&StringLiteral_19185/*"event_superboss_hp_split_frame"*/, v10);
    sub_1B640C8(&StringLiteral_19182/*"event_superboss_hp_lower"*/, v11);
    sub_1B640C8(&StringLiteral_19142/*"event_raid_hp_frame"*/, v12);
    sub_1B640C8(&StringLiteral_19186/*"event_superboss_hp_upper"*/, v13);
    byte_49FAF80 = 1;
  }
  this->fields.eventSuperBossEntity = superBossEntity;
  p_eventSuperBossEntity = &this->fields.eventSuperBossEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventSuperBossEntity,
    (int32_t)superBossEntity,
    (int32_t)termAtlas,
    (int32_t)method);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  this->fields.isEncountSuperBoss = 0;
  if ( eventSuperBossEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___),
          !*p_eventSuperBossEntity)
      || !Instance
      || ((EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                         (EventBossStatusUiMaster_o *)Instance,
                                         (*p_eventSuperBossEntity)->fields.eventId,
                                         (*p_eventSuperBossEntity)->fields.id,
                                         0LL),
           this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex,
           sub_1B6406C(
             (ServantStatusBattleListViewItem_o *)&this->fields.eventBossStatusUiEntity,
             (int32_t)EntityFromEventIdAndIndex,
             v18,
             v19),
           (eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity) == 0LL)
        ? (GaugeId = -1)
        : (GaugeId = EventBossStatusUiEntity__GetGaugeId(eventBossStatusUiEntity, 0LL)),
          (Instance = (Il2CppObject *)*p_eventSuperBossEntity) == 0LL) )
    {
      sub_1B64324(Instance);
    }
    IsEncounted = EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)Instance, 0LL);
    this->fields.isEncountSuperBoss = IsEncounted;
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      (TitleInfoSuperBossComponent_o *)IsEncounted,
      this->fields.hpBarUnderSprite,
      (System_String_o *)StringLiteral_19182/*"event_superboss_hp_lower"*/,
      GaugeId,
      v23);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v24,
      this->fields.hpBarUpperSprite,
      (System_String_o *)StringLiteral_19186/*"event_superboss_hp_upper"*/,
      GaugeId,
      v25);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v26,
      this->fields.hpBarWhiteSprite,
      (System_String_o *)StringLiteral_19188/*"event_superboss_hp_white"*/,
      GaugeId,
      v27);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v28,
      this->fields.hpSplitSprite,
      (System_String_o *)StringLiteral_19185/*"event_superboss_hp_split_frame"*/,
      GaugeId,
      v29);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v30,
      this->fields.hpSplitPointSprite,
      (System_String_o *)StringLiteral_19184/*"event_superboss_hp_split"*/,
      GaugeId,
      v31);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v32,
      this->fields.superBossHpFrame,
      (System_String_o *)StringLiteral_19142/*"event_raid_hp_frame"*/,
      GaugeId,
      v33);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v34,
      this->fields.superBossHpBg,
      (System_String_o *)StringLiteral_19141/*"event_raid_hp_back"*/,
      GaugeId,
      v35);
    TitleInfoSuperBossComponent__SetDisp(this, v36);
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
  int32_t v13; // w3
  TitleInfoSuperBossComponent_c *v14; // x0
  Il2CppObject *Object_object__48347676; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Object_o *splitHpEffect; // x23
  TitleInfoSuperBossComponent_c *v19; // x0
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  TitleInfoSuperBossComponent_c *v23; // x0
  System_String_o *v24; // x0
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  UnityEngine_Object_o *clearBossEffect; // x22
  const MethodInfo *v29; // x1
  TitleInfoSuperBossComponent_c *v30; // x0
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3

  v6 = this;
  if ( (byte_49FAF85 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, mapAssetData);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&TitleInfoSuperBossComponent_TypeInfo, v8);
    this = (TitleInfoSuperBossComponent_o *)sub_1B640C8(&StringLiteral_16054/*"_"*/, v9);
    byte_49FAF85 = 1;
  }
  eventSuperBossEntity = v6->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_22;
  v11 = System_Int32__ToString((int)eventSuperBossEntity + 16, 0LL);
  v6->fields.animEndCall = callBack;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.animEndCall, (int32_t)callBack, v12, v13);
  v14 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v14 = TitleInfoSuperBossComponent_TypeInfo;
  }
  this = (TitleInfoSuperBossComponent_o *)System_String__Concat_61386656(
                                            v14->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
                                            (System_String_o *)StringLiteral_16054/*"_"*/,
                                            v11,
                                            0LL);
  if ( !mapAssetData )
LABEL_22:
    sub_1B64324(this);
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              mapAssetData,
                              (System_String_o *)this,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  v6->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)Object_object__48347676;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v6->fields.splitHpEffect,
    (int32_t)Object_object__48347676,
    v16,
    v17);
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
    v20 = AssetData__GetObject_object__48347676(
            mapAssetData,
            v19->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
            (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    v6->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)v20;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.splitHpEffect, (int32_t)v20, v21, v22);
  }
  v23 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v23 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v24 = System_String__Concat_61386656(
          v23->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_16054/*"_"*/,
          v11,
          0LL);
  v25 = AssetData__GetObject_object__48347676(
          mapAssetData,
          v24,
          (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.clearBossEffect, (int32_t)v25, v26, v27);
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
    v31 = AssetData__GetObject_object__48347676(
            mapAssetData,
            v30->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
            (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)v31;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.clearBossEffect, (int32_t)v31, v32, v33);
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
  struct TitleInfoSuperBossComponent_o *v20; // x8
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  TitleInfoSuperBossComponent___c__DisplayClass58_0_o *v22; // x21
  Il2CppObject *v23; // x0
  struct TitleInfoSuperBossComponent_o *v24; // x8
  float HPsplitPoint; // s0
  UnityEngine_Object_o *splitHpEffect; // x20
  __int64 v27; // x1
  struct TitleInfoSuperBossComponent_o *v28; // x8
  Il2CppObject *v29; // x20
  struct TitleInfoSuperBossComponent_o *v30; // x8
  TitleInfoSuperBossComponent___c__DisplayClass58_0_o *v31; // x20
  UnityEngine_Component_o *Parent; // x0
  struct TitleInfoSuperBossComponent_o *v33; // x9
  struct UISprite_array *hpBarSplitterList; // x8
  __int64 HPsplitNo; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  TitleInfoSuperBossComponent_c *v39; // x0
  float *static_fields; // x8
  struct TitleInfoSuperBossComponent_o *v41; // x9
  struct UISprite_array *hpBarSplitPointList; // x8
  __int64 v43; // x9
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v45; // x8
  struct TitleInfoSuperBossComponent_o *v46; // x8
  double v47; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_49FAF8F & 1) == 0 )
  {
    sub_1B640C8(&double_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&TitleInfoSuperBossComponent_TypeInfo, v6);
    sub_1B640C8(&Method_UITweener_Begin_TweenAlpha___, v7);
    this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)sub_1B640C8(&StringLiteral_13293/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v8);
    byte_49FAF8F = 1;
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
                                                                  (System_String_o *)StringLiteral_13293/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/,
                                                                  0LL);
  v20 = v2->fields.__4__this;
  if ( !v20 )
    goto LABEL_46;
  eventSuperBossEntity = v20->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_46;
  v22 = this;
  v47 = (float)(v13 * (float)eventSuperBossEntity->fields.maxHp);
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v47);
  this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)System_String__Format((System_String_o *)v22, v23, 0LL);
  if ( !totalHpLabel )
    goto LABEL_46;
  UILabel__set_text(totalHpLabel, (System_String_o *)this, 0LL);
  v24 = v2->fields.__4__this;
  if ( !v24 )
    goto LABEL_46;
  HPsplitPoint = v24->fields.HPsplitPoint;
  if ( HPsplitPoint > -1.0 && v13 <= HPsplitPoint )
  {
    splitHpEffect = (UnityEngine_Object_o *)v24->fields.splitHpEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UnityEngine_Object__op_Implicit(splitHpEffect, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v28 = v2->fields.__4__this;
      if ( !v28 )
        goto LABEL_46;
      v29 = (Il2CppObject *)v28->fields.splitHpEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                      v29,
                                                                      (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v30 = v2->fields.__4__this;
      if ( !v30 )
        goto LABEL_46;
      v31 = this;
      Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v30->fields.hpBarSplitter, 0LL);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v31, Parent, 0LL);
      v33 = v2->fields.__4__this;
      if ( !v33 )
        goto LABEL_46;
      hpBarSplitterList = v33->fields.hpBarSplitterList;
      if ( !hpBarSplitterList )
        goto LABEL_46;
      HPsplitNo = v33->fields.HPsplitNo;
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
      v39 = TitleInfoSuperBossComponent_TypeInfo;
      if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
        v39 = TitleInfoSuperBossComponent_TypeInfo;
      }
      static_fields = (float *)v39->static_fields;
      v49.fields.x = x + static_fields[9];
      v49.fields.y = y + static_fields[10];
      v49.fields.z = z + static_fields[11];
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v31, v49, 0LL);
    }
    v41 = v2->fields.__4__this;
    if ( !v41 )
      goto LABEL_46;
    hpBarSplitPointList = v41->fields.hpBarSplitPointList;
    if ( !hpBarSplitPointList )
      goto LABEL_46;
    v43 = v41->fields.HPsplitNo;
    if ( (unsigned int)v43 < hpBarSplitPointList->max_length )
    {
      this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)hpBarSplitPointList->m_Items[v43];
      if ( this )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v45 = TitleInfoSuperBossComponent_TypeInfo;
        if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
          v45 = TitleInfoSuperBossComponent_TypeInfo;
        }
        this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UITweener__Begin_object_(
                                                                        gameObject,
                                                                        v45->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                                        (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenAlpha___);
        if ( this )
        {
          LODWORD(this[1].klass) = 2;
          this[4].klass = (TitleInfoSuperBossComponent___c__DisplayClass58_0_c *)1065353216;
          v46 = v2->fields.__4__this;
          if ( v46 )
          {
            *(_QWORD *)&v46->fields.HPsplitPoint = -1082130432LL;
            return;
          }
        }
      }
LABEL_46:
      sub_1B64324(this);
    }
LABEL_47:
    sub_1B6432C(this, v27);
  }
}