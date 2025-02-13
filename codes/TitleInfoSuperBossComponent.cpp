void __fastcall TitleInfoSuperBossComponent___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct TitleInfoSuperBossComponent_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  struct TitleInfoSuperBossComponent_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  TitleInfoSuperBossComponent_c *v23; // x8
  struct TitleInfoSuperBossComponent_StaticFields *v24; // x9
  struct TitleInfoSuperBossComponent_StaticFields *v25; // x9
  struct TitleInfoSuperBossComponent_StaticFields *v26; // x8

  if ( (byte_4BDB101 & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_14743/*"TitleInfoEventSuperBossEffect_Dead"*/);
    sub_1C21E38(&StringLiteral_14744/*"TitleInfoEventSuperBossEffect_Split"*/);
    sub_1C21E38(&StringLiteral_19598/*"event_superboss_icon_"*/);
    byte_4BDB101 = 1;
  }
  TitleInfoSuperBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_19598/*"event_superboss_icon_"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)TitleInfoSuperBossComponent_TypeInfo->static_fields,
    StringLiteral_19598/*"event_superboss_icon_"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_14744/*"TitleInfoEventSuperBossEffect_Split"*/;
  static_fields = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14744/*"TitleInfoEventSuperBossEffect_Split"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_14743/*"TitleInfoEventSuperBossEffect_Dead"*/;
  v16 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v16->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14743/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->SUPERBOSS_CLEAR_EFFECT_PREFAB, v15, v17, v18, v19, v20, v21, v22);
  v23 = TitleInfoSuperBossComponent_TypeInfo;
  v24 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v24->SUPERBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v24->SUPERBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v25 = v23->static_fields;
  *(_QWORD *)&v25->SUPERBOSS_SPLIT_POS_DELTA.fields.x = 0x41200000BF000000LL;
  v25->SUPERBOSS_SPLIT_POS_DELTA.fields.z = 0.0;
  v26 = v23->static_fields;
  *(_OWORD *)&v26->ANIM_DURATION_FRAME_IN_BOSS = xmmword_BFDE10;
  v26->SUPERBOSS_HP_BAR_LENGTH = 264;
  v26->CLEAR_END_CALLBACK_DELAY = 1.5;
  *(_QWORD *)&v26->ANIM_DURATION_HP_DELETION = 0x3FE666663F333333LL;
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Action_o *onClearCall; // x21
  __int64 v10; // x1
  UnityEngine_Component_o *superBossIconSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoSuperBossComponent_c *v13; // x8
  UnityEngine_GameObject_o *v14; // x20

  if ( (byte_4BDB0FE & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C21E38(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C21E38(&StringLiteral_10089/*"OnEndAnimation"*/);
    byte_4BDB0FE = 1;
  }
  onClearCall = this->fields.onClearCall;
  this->fields.onClearCall = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.onClearCall, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(onClearCall, 0LL);
  superBossIconSp = (UnityEngine_Component_o *)this->fields.superBossIconSp;
  if ( !superBossIconSp )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(superBossIconSp, 0LL);
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
                                                 (const MethodInfo_30647F8 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !superBossIconSp )
LABEL_8:
    sub_1C22094(superBossIconSp, v10);
  LODWORD(superBossIconSp[1].monitor) = 1;
  superBossIconSp[5].monitor = (void *)1065353216;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10089/*"OnEndAnimation"*/,
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

  if ( (byte_4BDB0FF & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoSuperBossComponent_TypeInfo);
    byte_4BDB0FF = 1;
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_animEndCall; // x0
  System_Action_o *animEndCall; // t1
  const MethodInfo *v11; // x1

  animEndCall = this->fields.animEndCall;
  p_animEndCall = (PartyOrganizationUtility_o *)&this->fields.animEndCall;
  p_animEndCall->klass = 0LL;
  sub_1C21DDC(p_animEndCall, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndCall, 0LL);
  TitleInfoSuperBossComponent__SetDisp(this, v11);
}


void __fastcall TitleInfoSuperBossComponent__PlayFrameInBoss(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4BDB0F9 & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C21E38(&Method_UITweener_Begin_TweenPosition___);
    sub_1C21E38(&StringLiteral_10861/*"PlayHpNameAlpha"*/);
    byte_4BDB0F9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
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
         (const MethodInfo_30647F8 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v6 )
    sub_1C22094(0LL, v7);
  static_fields = (float32x2_t *)TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v9 = v6;
  v10 = this->fields.originPos.fields.z + static_fields[4].n64_f32[0];
  v6[8].klass = (Il2CppClass *)vadd_f32(*(float32x2_t *)&this->fields.originPos.fields.x, static_fields[3]).n64_u64[0];
  *(float *)&v6[8].monitor = v10;
  v11 = *(void **)&this->fields.originPos.fields.x;
  HIDWORD(v6[9].klass) = LODWORD(this->fields.originPos.fields.z);
  *(void **)((char *)&v6[8].monitor + 4) = v11;
  LODWORD(v6[2].klass) = 2;
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v9[5].klass = (Il2CppClass *)v12;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v9[5], (int64_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = StringLiteral_10861/*"PlayHpNameAlpha"*/;
  v9[5].monitor = (void *)StringLiteral_10861/*"PlayHpNameAlpha"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v9[5].monitor, v19, v20, v21, v22, v23, v24, v25);
}


void __fastcall TitleInfoSuperBossComponent__PlayHpCut(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  TitleInfoSuperBossComponent_o *v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  const MethodInfo *v12; // x3
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  TitleInfoSuperBossComponent_c *v22; // x0
  EasingObject_o *v23; // x21
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v25; // x22
  System_Action_o *v26; // x20

  if ( (byte_4BDB0FB & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C21E38(&Method_TitleInfoSuperBossComponent_PlayHpDeletion__);
    sub_1C21E38(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C21E38(&Method_TitleInfoSuperBossComponent___c__DisplayClass58_0__PlayHpCut_b__0__);
    sub_1C21E38(&TitleInfoSuperBossComponent___c__DisplayClass58_0_TypeInfo);
    byte_4BDB0FB = 1;
  }
  v3 = sub_1C22084(TitleInfoSuperBossComponent___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_9;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)this, v6, v7, v8, v9, v10, v11);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_9;
  TitleInfoSuperBossComponent__PlaySeByEventId(v4, eventSuperBossEntity->fields.eventId, 1, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)Component_object, v16, v17, v18, v19, v20, v21);
  v22 = TitleInfoSuperBossComponent_TypeInfo;
  v23 = *(EasingObject_o **)(v3 + 16);
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v22 = TitleInfoSuperBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v22->static_fields->ANIM_DURATION_HP_CUT;
  v25 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v3,
    Method_TitleInfoSuperBossComponent___c__DisplayClass58_0__PlayHpCut_b__0__,
    0LL);
  v26 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_TitleInfoSuperBossComponent_PlayHpDeletion__, 0LL);
  if ( !v23 )
LABEL_9:
    sub_1C22094(v4, v5);
  EasingObject__Play(v23, ANIM_DURATION_HP_CUT, v25, v26, 0.0, 0, 0LL);
}


void __fastcall TitleInfoSuperBossComponent__PlayHpDeletion(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *hpBarSliderUnder; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoSuperBossComponent_c *v5; // x8
  UnityEngine_GameObject_o *v6; // x20
  UnityEngine_Component_o *v7; // x20
  UnityEngine_GameObject_o *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t *v21; // x8
  UnityEngine_Object_o *clearBossEffect; // x21
  Il2CppObject *v23; // x21
  Il2CppObject *v24; // x21
  int64_t v25; // x1
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

  if ( (byte_4BDB0FC & 1) == 0 )
  {
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C21E38(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C21E38(&StringLiteral_10089/*"OnEndAnimation"*/);
    sub_1C21E38(&StringLiteral_12939/*"SetClearAlpha"*/);
    sub_1C21E38(&StringLiteral_13618/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/);
    byte_4BDB0FC = 1;
  }
  hpBarSliderUnder = (UnityEngine_Component_o *)this->fields.hpBarSliderUnder;
  if ( !hpBarSliderUnder )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject(hpBarSliderUnder, 0LL);
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
                                                  (const MethodInfo_30647F8 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !hpBarSliderUnder )
    goto LABEL_23;
  v7 = hpBarSliderUnder;
  LODWORD(hpBarSliderUnder[1].monitor) = 1;
  hpBarSliderUnder[5].monitor = (void *)1065353216;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7[3].monitor = v8;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v7[3].monitor, (int64_t)v8, v9, v10, v11, v12, v13, v14);
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
              (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v24, (UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v24, 0LL);
    }
    v21 = &StringLiteral_12939/*"SetClearAlpha"*/;
  }
  else
  {
    v21 = &StringLiteral_10089/*"OnEndAnimation"*/;
  }
  v25 = *v21;
  *(_QWORD *)&v7[3].fields.m_CachedPtr = *v21;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v7[3].fields, v25, v15, v16, v17, v18, v19, v20);
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
  hpBarSliderUnder = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13618/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
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
    sub_1C22094(hpBarSliderUnder, method);
  }
  UILabel__set_text(totalHpLabel, (System_String_o *)hpBarSliderUnder, 0LL);
}


void __fastcall TitleInfoSuperBossComponent__PlayHpNameAlpha(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *totalHpLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoSuperBossComponent_c *v5; // x8
  UnityEngine_GameObject_o *v6; // x20
  UnityEngine_Component_o *v7; // x20
  UnityEngine_GameObject_o *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4BDB0FA & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C21E38(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C21E38(&StringLiteral_10860/*"PlayHpCut"*/);
    byte_4BDB0FA = 1;
  }
  totalHpLabel = (UnityEngine_Component_o *)this->fields.totalHpLabel;
  if ( !totalHpLabel )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(totalHpLabel, 0LL);
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
                                              (const MethodInfo_30647F8 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !totalHpLabel )
LABEL_8:
    sub_1C22094(totalHpLabel, method);
  v7 = totalHpLabel;
  totalHpLabel[5].monitor = (void *)0x3F80000000000000LL;
  LODWORD(totalHpLabel[1].monitor) = 1;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7[3].monitor = v8;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v7[3].monitor, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_10860/*"PlayHpCut"*/;
  *(_QWORD *)&v7[3].fields.m_CachedPtr = StringLiteral_10860/*"PlayHpCut"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v7[3].fields, v15, v16, v17, v18, v19, v20, v21);
}


void __fastcall TitleInfoSuperBossComponent__PlaySeByEventId(
        TitleInfoSuperBossComponent_o *this,
        int32_t eventId,
        bool isPlay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 *v8; // x20
  _QWORD *v9; // x0
  System_String_o *v10; // x20
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDB100 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_TitleInfoSuperBossComponent_PlaySeByEventId__);
    sub_1C21E38(&StringLiteral_17156/*"ar12"*/);
    sub_1C21E38(&StringLiteral_17167/*"ar60"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB100 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v7);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    eventId,
    (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( entity )
  {
    v8 = &StringLiteral_17167/*"ar60"*/;
    if ( !EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
    {
      if ( entity )
      {
        if ( !EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL) )
          v8 = &StringLiteral_17156/*"ar12"*/;
      }
      else
      {
        v8 = &StringLiteral_17156/*"ar12"*/;
      }
    }
  }
  else
  {
    v8 = &StringLiteral_17156/*"ar12"*/;
  }
  v9 = Method_TitleInfoSuperBossComponent_PlaySeByEventId__;
  v10 = (System_String_o *)*v8;
  if ( (*((_BYTE *)Method_TitleInfoSuperBossComponent_PlaySeByEventId__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C21E50(Method_TitleInfoSuperBossComponent_PlaySeByEventId__);
  v11 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v9, v9[4]);
  if ( isPlay )
    OverwriteAssetSoundName__PlaySeLoop(v11, v10, 1.0, 0.0, 0, 0LL);
  else
    OverwriteAssetSoundName__StopSe(v11, v10, 0.0, 0LL);
}


void __fastcall TitleInfoSuperBossComponent__SetBossIcon(
        TitleInfoSuperBossComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  UISprite_o *superBossIconSp; // x21
  struct UISprite_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4BDB0F4 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    byte_4BDB0F4 = 1;
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
    sub_1C22094(v6, v7);
  }
}


void __fastcall TitleInfoSuperBossComponent__SetClearAlpha(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoSuperBossComponent_c *v3; // x0

  if ( (byte_4BDB0FD & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_5459/*"DoClearCallback"*/);
    byte_4BDB0FD = 1;
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
    (System_String_o *)StringLiteral_5459/*"DoClearCallback"*/,
    v3->static_fields->CLEAR_CALLBACK_DELAY,
    0LL);
}


void __fastcall TitleInfoSuperBossComponent__SetDamageAnimation(
        TitleInfoSuperBossComponent_o *this,
        int64_t damage,
        System_Action_o *onClearCallback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  struct EventSuperBossEntity_o *v37; // x8
  System_String_o *v38; // x22
  Il2CppObject *v39; // x0
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

  if ( (byte_4BDB0F7 & 1) == 0 )
  {
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_13618/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/);
    byte_4BDB0F7 = 1;
  }
  this->fields.onClearCall = onClearCallback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.onClearCall,
    (int64_t)onClearCallback,
    (int64_t)onClearCallback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  eventSuperBossEntity = (EventSuperBossEntity_o *)EventSuperBossEntity__GetUserSuperBossEntity(
                                                     eventSuperBossEntity,
                                                     0LL);
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
  *(_QWORD *)&this->fields.HPsplitPoint = -1082130432LL;
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
  UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, v20, 0LL);
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
  v27 = (UnityEngine_Transform_o *)eventSuperBossEntity;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, 0LL);
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
  v50.fields.x = x + static_fields[6];
  v50.fields.y = y + static_fields[7];
  v50.fields.z = z + static_fields[8];
  UnityEngine_Transform__set_localPosition(v27, v50, 0LL);
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  eventSuperBossEntity = (EventSuperBossEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13618/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
  v37 = this->fields.eventSuperBossEntity;
  if ( !v37 )
    goto LABEL_55;
  v38 = (System_String_o *)eventSuperBossEntity;
  v48 = v37->fields.maxHp - damage;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v48, v34, v35, v36);
  eventSuperBossEntity = (EventSuperBossEntity_o *)System_String__Format(v38, v39, 0LL);
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
    sub_1C22094(eventSuperBossEntity, v11);
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
          sub_1C2209C(eventSuperBossEntity, v11);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct UISprite_array *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  const MethodInfo *v29; // x3
  UnityEngine_Component_o *v30; // x24
  il2cpp_array_size_t i; // w29
  struct UISprite_array *hpBarSplitterList; // x25
  Il2CppObject *hpBarSplitter; // x26
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x26
  Il2CppClass **v41; // x0
  struct UISprite_array *v42; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *hpBarSplitPointList; // x26
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x25
  Il2CppClass **v52; // x0
  struct UISprite_array *v53; // x8
  UnityEngine_GameObject_o *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x26
  struct UISprite_array *v62; // x25
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x26
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
  float v81; // s0
  float v82; // s1
  float v83; // s2
  float v84; // s3
  float v85; // s8
  float v86; // s9
  float v87; // s10
  float v88; // s11
  struct EventSuperBossEntity_o *v89; // x8
  __int64 maxHp; // x22
  __int64 v91; // x23
  UILabel_o *totalHpLabel; // x20
  System_String_o *v93; // x21
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  Il2CppObject *v97; // x0
  float v98; // s0
  __int64 v99; // x0
  UnityEngine_Component_o *parent; // [xsp+0h] [xbp-90h]
  __int64 v101; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v104; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v105; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDB0F6 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C21E38(&UISprite___TypeInfo);
    sub_1C21E38(&StringLiteral_13618/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/);
    byte_4BDB0F6 = 1;
  }
  if ( this->fields.isEncountSuperBoss || this->fields._IsShowClearEvent_k__BackingField )
  {
    eventSuperBossEntity = this->fields.eventSuperBossEntity;
    if ( eventSuperBossEntity )
    {
      eventSuperBossEntity = (EventSuperBossEntity_o *)EventSuperBossEntity__GetUserSuperBossEntity(
                                                         eventSuperBossEntity,
                                                         0LL);
      v4 = eventSuperBossEntity;
      if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v5 = this->fields.eventSuperBossEntity;
      if ( v5 )
      {
        SUPERBOSS_ICON_SPNAME_PREFIX = TitleInfoSuperBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
        v7 = System_Int32__ToString((int)v5 + 56, 0LL);
        v8 = System_String__Concat_63115476(SUPERBOSS_ICON_SPNAME_PREFIX, v7, 0LL);
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
                v15 = (struct UISprite_array *)sub_1C21EE0(UISprite___TypeInfo, (unsigned int)max_length);
                this->fields.hpBarSplitterList = v15;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)&this->fields.hpBarSplitterList,
                  (int64_t)v15,
                  v16,
                  v17,
                  v18,
                  v19,
                  v20,
                  v21);
                v22 = (struct UISprite_array *)sub_1C21EE0(UISprite___TypeInfo, (unsigned int)max_length);
                this->fields.hpBarSplitPointList = v22;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)&this->fields.hpBarSplitPointList,
                  (int64_t)v22,
                  v23,
                  v24,
                  v25,
                  v26,
                  v27,
                  v28);
                v14 = 0;
              }
              parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.hpBarSplitter, 0LL);
              eventSuperBossEntity = (EventSuperBossEntity_o *)GameObjectExtensions__GetParent(
                                                                 this->fields.hpBarSplitPoint,
                                                                 0LL);
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
                                                                       (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitterList )
                      goto LABEL_95;
                    v40 = (int64_t)eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1C21F74(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitterList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( i >= hpBarSplitterList->max_length )
                      goto LABEL_96;
                    v41 = &hpBarSplitterList->obj.klass + (int)i;
                    v41[4] = (Il2CppClass *)v40;
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v41 + 4), v40, v34, v35, v36, v37, v38, v39);
                    v42 = *p_hpBarSplitterList;
                    if ( !*p_hpBarSplitterList )
                      goto LABEL_95;
                    if ( i >= v42->max_length )
                      goto LABEL_96;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)v42->m_Items[i];
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    gameObject = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                   0LL);
                    GameObjectExtensions__SafeSetParent(gameObject, parent, 0LL);
                    hpBarSplitPointList = this->fields.hpBarSplitPointList;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Object__Instantiate_object_(
                                                                       (Il2CppObject *)this->fields.hpBarSplitPoint,
                                                                       (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitPointList )
                      goto LABEL_95;
                    v51 = (int64_t)eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1C21F74(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitPointList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( i >= hpBarSplitPointList->max_length )
                      goto LABEL_96;
                    v52 = &hpBarSplitPointList->obj.klass + (int)i;
                    v52[4] = (Il2CppClass *)v51;
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v52 + 4), v51, v45, v46, v47, v48, v49, v50);
                    v53 = this->fields.hpBarSplitPointList;
                    if ( !v53 )
                      goto LABEL_95;
                    if ( i >= v53->max_length )
                      goto LABEL_96;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)v53->m_Items[i];
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventSuperBossEntity, 0LL);
                    GameObjectExtensions__SafeSetParent(v54, v30, 0LL);
                  }
                  else
                  {
                    if ( !hpBarSplitter )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       this->fields.hpBarSplitter,
                                                                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitterList )
                      goto LABEL_95;
                    v61 = (int64_t)eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1C21F74(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitterList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                      {
LABEL_97:
                        v99 = sub_1C220B8(eventSuperBossEntity);
                        sub_1C21F60(v99, 0LL);
                      }
                    }
                    if ( !hpBarSplitterList->max_length )
                      goto LABEL_96;
                    hpBarSplitterList->m_Items[0] = (UISprite_o *)v61;
                    sub_1C21DDC(
                      (PartyOrganizationUtility_o *)hpBarSplitterList->m_Items,
                      v61,
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
                                                                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !v62 )
                      goto LABEL_95;
                    v69 = (int64_t)eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1C21F74(
                                                                         eventSuperBossEntity,
                                                                         v62->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( !v62->max_length )
                      goto LABEL_96;
                    v62->m_Items[0] = (UISprite_o *)v69;
                    sub_1C21DDC((PartyOrganizationUtility_o *)v62->m_Items, v69, v63, v64, v65, v66, v67, v68);
                  }
                }
                v70 = this->fields.eventSuperBossEntity;
                if ( !v70 )
                  goto LABEL_95;
                v71 = v70->fields.splitHp;
                if ( !v71 )
                  goto LABEL_95;
                if ( i >= v71->max_length )
                  goto LABEL_96;
                HpSplitPositionX = TitleInfoSuperBossComponent__GetHpSplitPositionX(
                                     (TitleInfoSuperBossComponent_o *)eventSuperBossEntity,
                                     v71->m_Items[i],
                                     v70->fields.maxHp,
                                     v29);
                v73 = *p_hpBarSplitterList;
                if ( !*p_hpBarSplitterList )
                  goto LABEL_95;
                if ( i >= v73->max_length )
                  goto LABEL_96;
                eventSuperBossEntity = (EventSuperBossEntity_o *)v73->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v74 = HpSplitPositionX;
                eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                   0LL);
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v102.fields.y = 0.0;
                v102.fields.z = 0.0;
                v102.fields.x = v74;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, v102, 0LL);
                v75 = this->fields.hpBarSplitPointList;
                if ( !v75 )
                  goto LABEL_95;
                if ( i >= v75->max_length )
                  goto LABEL_96;
                eventSuperBossEntity = (EventSuperBossEntity_o *)v75->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                   0LL);
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v103.fields.y = 0.0;
                v103.fields.z = 0.0;
                v103.fields.x = v74;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, v103, 0LL);
                v77 = this->fields.eventSuperBossEntity;
                if ( !v77 )
                  goto LABEL_95;
                v78 = v77->fields.splitHp;
                if ( !v78 )
                  goto LABEL_95;
                if ( i >= v78->max_length )
                  goto LABEL_96;
                if ( !v4 )
                  goto LABEL_95;
                v79 = this->fields.hpBarSplitPointList;
                if ( !v79 )
                  goto LABEL_95;
                if ( i >= v79->max_length )
LABEL_96:
                  sub_1C2209C(eventSuperBossEntity, method);
                eventSuperBossEntity = (EventSuperBossEntity_o *)v79->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                if ( v78->m_Items[i] <= v4->fields.maxHp )
                  *(float *)&v76 = 0.0;
                else
                  *(float *)&v76 = 1.0;
                eventSuperBossEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, long double))&eventSuperBossEntity->klass[1]._1.byval_arg.bits)(
                                                                   eventSuperBossEntity,
                                                                   eventSuperBossEntity->klass[1]._1.this_arg.data,
                                                                   v76);
              }
            }
            eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
            if ( eventBossStatusUiEntity )
            {
              v104.fields.r = 0.0;
              v104.fields.g = 0.0;
              v104.fields.b = 0.0;
              v104.fields.a = 0.0;
              *(UnityEngine_Color_o *)&v81 = EventBossStatusUiEntity__GetTextEffectColor(
                                               eventBossStatusUiEntity,
                                               v104,
                                               0LL);
            }
            else
            {
              eventSuperBossEntity = this->fields.eventSuperBossEntity;
              if ( !eventSuperBossEntity )
                goto LABEL_95;
              *(UnityEngine_Color_o *)&v81 = EventSuperBossEntity__GetBossColor(eventSuperBossEntity, 0LL);
            }
            eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderWhite;
            v85 = v81;
            v86 = v82;
            v87 = v83;
            v88 = v84;
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
                    v89 = this->fields.eventSuperBossEntity;
                    if ( v89 )
                    {
                      if ( v4 )
                      {
                        maxHp = v89->fields.maxHp;
                        eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel;
                        v91 = v4->fields.maxHp >= maxHp ? v89->fields.maxHp : v4->fields.maxHp;
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
                              v93 = LocalizationManager__Get((System_String_o *)StringLiteral_13618/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
                              v101 = maxHp - v91;
                              v97 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v101, v94, v95, v96);
                              eventSuperBossEntity = (EventSuperBossEntity_o *)System_String__Format(v93, v97, 0LL);
                              if ( !totalHpLabel )
                                goto LABEL_95;
                              UILabel__set_text(totalHpLabel, (System_String_o *)eventSuperBossEntity, 0LL);
                            }
                            eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel;
                            if ( eventSuperBossEntity )
                            {
                              v105.fields.r = v85;
                              v105.fields.g = v86;
                              v105.fields.b = v87;
                              v105.fields.a = v88;
                              UILabel__set_effectColor((UILabel_o *)eventSuperBossEntity, v105, 0LL);
                              eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSlider;
                              if ( eventSuperBossEntity )
                              {
                                v98 = 1.0 - (double)v91 / (double)maxHp;
                                UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, v98, 0LL);
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
    sub_1C22094(eventSuperBossEntity, method);
  }
}


void __fastcall TitleInfoSuperBossComponent__SetSpriteFromEventUI(
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
  if ( (byte_4BDB0F5 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    byte_4BDB0F5 = 1;
  }
  if ( (gaugeId & 0x80000000) != 0 )
    goto LABEL_12;
  v8 = System_Int32__ToString((int32_t)&v10, 0LL);
  v9 = System_String__Concat_63126736(prefix, (System_String_o *)StringLiteral_16399/*"_"*/, v8, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v9, 0LL) )
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EventSuperBossEntity_o **p_eventSuperBossEntity; // x21
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
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

  if ( (byte_4BDB0F3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_19593/*"event_superboss_hp_split"*/);
    sub_1C21E38(&StringLiteral_19597/*"event_superboss_hp_white"*/);
    sub_1C21E38(&StringLiteral_19550/*"event_raid_hp_back"*/);
    sub_1C21E38(&StringLiteral_19594/*"event_superboss_hp_split_frame"*/);
    sub_1C21E38(&StringLiteral_19591/*"event_superboss_hp_lower"*/);
    sub_1C21E38(&StringLiteral_19551/*"event_raid_hp_frame"*/);
    sub_1C21E38(&StringLiteral_19595/*"event_superboss_hp_upper"*/);
    byte_4BDB0F3 = 1;
  }
  this->fields.eventSuperBossEntity = superBossEntity;
  p_eventSuperBossEntity = &this->fields.eventSuperBossEntity;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.eventSuperBossEntity,
    (int64_t)superBossEntity,
    (int64_t)termAtlas,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  this->fields.isEncountSuperBoss = 0;
  if ( eventSuperBossEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___),
          !*p_eventSuperBossEntity)
      || !Instance
      || ((EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                         (EventBossStatusUiMaster_o *)Instance,
                                         (*p_eventSuperBossEntity)->fields.eventId,
                                         (*p_eventSuperBossEntity)->fields.id,
                                         0LL),
           this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex,
           sub_1C21DDC(
             (PartyOrganizationUtility_o *)&this->fields.eventBossStatusUiEntity,
             (int64_t)EntityFromEventIdAndIndex,
             v15,
             v16,
             v17,
             v18,
             v19,
             v20),
           (eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity) == 0LL)
        ? (GaugeId = -1)
        : (GaugeId = EventBossStatusUiEntity__GetGaugeId(eventBossStatusUiEntity, 0LL)),
          (Instance = (Il2CppObject *)*p_eventSuperBossEntity) == 0LL) )
    {
      sub_1C22094(Instance, v13);
    }
    IsEncounted = EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)Instance, 0LL);
    this->fields.isEncountSuperBoss = IsEncounted;
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      (TitleInfoSuperBossComponent_o *)IsEncounted,
      this->fields.hpBarUnderSprite,
      (System_String_o *)StringLiteral_19591/*"event_superboss_hp_lower"*/,
      GaugeId,
      v24);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v25,
      this->fields.hpBarUpperSprite,
      (System_String_o *)StringLiteral_19595/*"event_superboss_hp_upper"*/,
      GaugeId,
      v26);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v27,
      this->fields.hpBarWhiteSprite,
      (System_String_o *)StringLiteral_19597/*"event_superboss_hp_white"*/,
      GaugeId,
      v28);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v29,
      this->fields.hpSplitSprite,
      (System_String_o *)StringLiteral_19594/*"event_superboss_hp_split_frame"*/,
      GaugeId,
      v30);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v31,
      this->fields.hpSplitPointSprite,
      (System_String_o *)StringLiteral_19593/*"event_superboss_hp_split"*/,
      GaugeId,
      v32);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v33,
      this->fields.superBossHpFrame,
      (System_String_o *)StringLiteral_19551/*"event_raid_hp_frame"*/,
      GaugeId,
      v34);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v35,
      this->fields.superBossHpBg,
      (System_String_o *)StringLiteral_19550/*"event_raid_hp_back"*/,
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
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  System_String_o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  TitleInfoSuperBossComponent_c *v15; // x0
  Il2CppObject *Object_object__49880776; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UnityEngine_Object_o *splitHpEffect; // x23
  TitleInfoSuperBossComponent_c *v24; // x0
  Il2CppObject *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  TitleInfoSuperBossComponent_c *v32; // x0
  System_String_o *v33; // x0
  Il2CppObject *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  UnityEngine_Object_o *clearBossEffect; // x22
  const MethodInfo *v42; // x1
  TitleInfoSuperBossComponent_c *v43; // x0
  Il2CppObject *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7

  v6 = this;
  if ( (byte_4BDB0F8 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&TitleInfoSuperBossComponent_TypeInfo);
    this = (TitleInfoSuperBossComponent_o *)sub_1C21E38(&StringLiteral_16399/*"_"*/);
    byte_4BDB0F8 = 1;
  }
  eventSuperBossEntity = v6->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_22;
  v8 = System_Int32__ToString((int)eventSuperBossEntity + 16, 0LL);
  v6->fields.animEndCall = callBack;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v6->fields.animEndCall, (int64_t)callBack, v9, v10, v11, v12, v13, v14);
  v15 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v15 = TitleInfoSuperBossComponent_TypeInfo;
  }
  this = (TitleInfoSuperBossComponent_o *)System_String__Concat_63126736(
                                            v15->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
                                            (System_String_o *)StringLiteral_16399/*"_"*/,
                                            v8,
                                            0LL);
  if ( !mapAssetData )
LABEL_22:
    sub_1C22094(this, mapAssetData);
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              mapAssetData,
                              (System_String_o *)this,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  v6->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)Object_object__49880776;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v6->fields.splitHpEffect,
    (int64_t)Object_object__49880776,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  splitHpEffect = (UnityEngine_Object_o *)v6->fields.splitHpEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(splitHpEffect, 0LL, 0LL) )
  {
    v24 = TitleInfoSuperBossComponent_TypeInfo;
    if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v24 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v25 = AssetData__GetObject_object__49880776(
            mapAssetData,
            v24->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
            (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
    v6->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)v25;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v6->fields.splitHpEffect, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  }
  v32 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v32 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v33 = System_String__Concat_63126736(
          v32->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_16399/*"_"*/,
          v8,
          0LL);
  v34 = AssetData__GetObject_object__49880776(
          mapAssetData,
          v33,
          (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)v34;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v6->fields.clearBossEffect, (int64_t)v34, v35, v36, v37, v38, v39, v40);
  clearBossEffect = (UnityEngine_Object_o *)v6->fields.clearBossEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(clearBossEffect, 0LL, 0LL) )
  {
    v43 = TitleInfoSuperBossComponent_TypeInfo;
    if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v43 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v44 = AssetData__GetObject_object__49880776(
            mapAssetData,
            v43->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
            (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
    v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)v44;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v6->fields.clearBossEffect, (int64_t)v44, v45, v46, v47, v48, v49, v50);
  }
  TitleInfoSuperBossComponent__PlayFrameInBoss(v6, v42);
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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct TitleInfoSuperBossComponent_o *v17; // x8
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  TitleInfoSuperBossComponent___c__DisplayClass58_0_o *v19; // x21
  Il2CppObject *v20; // x0
  struct TitleInfoSuperBossComponent_o *v21; // x8
  float HPsplitPoint; // s0
  UnityEngine_Object_o *splitHpEffect; // x20
  struct TitleInfoSuperBossComponent_o *v24; // x8
  Il2CppObject *v25; // x20
  struct TitleInfoSuperBossComponent_o *v26; // x8
  TitleInfoSuperBossComponent___c__DisplayClass58_0_o *v27; // x20
  UnityEngine_Component_o *Parent; // x0
  struct TitleInfoSuperBossComponent_o *v29; // x9
  struct UISprite_array *hpBarSplitterList; // x8
  __int64 HPsplitNo; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  TitleInfoSuperBossComponent_c *v35; // x0
  float *static_fields; // x8
  struct TitleInfoSuperBossComponent_o *v37; // x9
  struct UISprite_array *hpBarSplitPointList; // x8
  __int64 v39; // x9
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v41; // x8
  struct TitleInfoSuperBossComponent_o *v42; // x8
  double v43; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4BDB102 & 1) == 0 )
  {
    sub_1C21E38(&double_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&TitleInfoSuperBossComponent_TypeInfo);
    sub_1C21E38(&Method_UITweener_Begin_TweenAlpha___);
    this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)sub_1C21E38(&StringLiteral_13618/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/);
    byte_4BDB102 = 1;
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
  UIProgressBar__set_value((UIProgressBar_o *)this, v7, 0LL);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_46;
  this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)v8->fields.hpBarSliderWhite;
  if ( !this )
    goto LABEL_46;
  UIProgressBar__set_value((UIProgressBar_o *)this, v7, 0LL);
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_46;
  hpBarSliderWhite = (UIProgressBar_o *)v9->fields.hpBarSliderWhite;
  if ( !hpBarSliderWhite )
    goto LABEL_46;
  v11 = sinf(mNow * 3.1416);
  UIProgressBar__set_alpha(hpBarSliderWhite, v11 * 0.7, 0LL);
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_46;
  totalHpLabel = v12->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_13618/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/,
                                                                  0LL);
  v17 = v2->fields.__4__this;
  if ( !v17 )
    goto LABEL_46;
  eventSuperBossEntity = v17->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_46;
  v19 = this;
  v43 = (float)(v7 * (float)eventSuperBossEntity->fields.maxHp);
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v43, v14, v15, v16);
  this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)System_String__Format((System_String_o *)v19, v20, 0LL);
  if ( !totalHpLabel )
    goto LABEL_46;
  UILabel__set_text(totalHpLabel, (System_String_o *)this, 0LL);
  v21 = v2->fields.__4__this;
  if ( !v21 )
    goto LABEL_46;
  HPsplitPoint = v21->fields.HPsplitPoint;
  if ( HPsplitPoint > -1.0 && v7 <= HPsplitPoint )
  {
    splitHpEffect = (UnityEngine_Object_o *)v21->fields.splitHpEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UnityEngine_Object__op_Implicit(splitHpEffect, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v24 = v2->fields.__4__this;
      if ( !v24 )
        goto LABEL_46;
      v25 = (Il2CppObject *)v24->fields.splitHpEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                      v25,
                                                                      (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v26 = v2->fields.__4__this;
      if ( !v26 )
        goto LABEL_46;
      v27 = this;
      Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v26->fields.hpBarSplitter, 0LL);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v27, Parent, 0LL);
      v29 = v2->fields.__4__this;
      if ( !v29 )
        goto LABEL_46;
      hpBarSplitterList = v29->fields.hpBarSplitterList;
      if ( !hpBarSplitterList )
        goto LABEL_46;
      HPsplitNo = v29->fields.HPsplitNo;
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
      v35 = TitleInfoSuperBossComponent_TypeInfo;
      if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
        v35 = TitleInfoSuperBossComponent_TypeInfo;
      }
      static_fields = (float *)v35->static_fields;
      v45.fields.x = x + static_fields[9];
      v45.fields.y = y + static_fields[10];
      v45.fields.z = z + static_fields[11];
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v27, v45, 0LL);
    }
    v37 = v2->fields.__4__this;
    if ( !v37 )
      goto LABEL_46;
    hpBarSplitPointList = v37->fields.hpBarSplitPointList;
    if ( !hpBarSplitPointList )
      goto LABEL_46;
    v39 = v37->fields.HPsplitNo;
    if ( (unsigned int)v39 < hpBarSplitPointList->max_length )
    {
      this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)hpBarSplitPointList->m_Items[v39];
      if ( this )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v41 = TitleInfoSuperBossComponent_TypeInfo;
        if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
          v41 = TitleInfoSuperBossComponent_TypeInfo;
        }
        this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UITweener__Begin_object_(
                                                                        gameObject,
                                                                        v41->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                                        (const MethodInfo_30647F8 *)Method_UITweener_Begin_TweenAlpha___);
        if ( this )
        {
          LODWORD(this[1].klass) = 2;
          this[4].klass = (TitleInfoSuperBossComponent___c__DisplayClass58_0_c *)1065353216;
          v42 = v2->fields.__4__this;
          if ( v42 )
          {
            *(_QWORD *)&v42->fields.HPsplitPoint = -1082130432LL;
            return;
          }
        }
      }
LABEL_46:
      sub_1C22094(this, method);
    }
LABEL_47:
    sub_1C2209C(this, method);
  }
}