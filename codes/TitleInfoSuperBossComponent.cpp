void __fastcall TitleInfoSuperBossComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t v11; // x1
  struct TitleInfoSuperBossComponent_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  struct TitleInfoSuperBossComponent_StaticFields *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  TitleInfoSuperBossComponent_c *v27; // x8
  struct TitleInfoSuperBossComponent_StaticFields *v28; // x9
  struct TitleInfoSuperBossComponent_StaticFields *v29; // x9
  struct TitleInfoSuperBossComponent_StaticFields *v30; // x8

  if ( (byte_4B35C99 & 1) == 0 )
  {
    sub_1BD3458(&TitleInfoSuperBossComponent_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_14668/*"TitleInfoEventSuperBossEffect_Dead"*/, v8);
    sub_1BD3458(&StringLiteral_14669/*"TitleInfoEventSuperBossEffect_Split"*/, v9);
    sub_1BD3458(&StringLiteral_19496/*"event_superboss_icon_"*/, v10);
    byte_4B35C99 = 1;
  }
  TitleInfoSuperBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_19496/*"event_superboss_icon_"*/;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)TitleInfoSuperBossComponent_TypeInfo->static_fields,
    StringLiteral_19496/*"event_superboss_icon_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = StringLiteral_14669/*"TitleInfoEventSuperBossEffect_Split"*/;
  static_fields = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14669/*"TitleInfoEventSuperBossEffect_Split"*/;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
    v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = StringLiteral_14668/*"TitleInfoEventSuperBossEffect_Dead"*/;
  v20 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v20->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14668/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v20->SUPERBOSS_CLEAR_EFFECT_PREFAB, v19, v21, v22, v23, v24, v25, v26);
  v27 = TitleInfoSuperBossComponent_TypeInfo;
  v28 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v28->SUPERBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v28->SUPERBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v29 = v27->static_fields;
  *(_QWORD *)&v29->SUPERBOSS_SPLIT_POS_DELTA.fields.x = 0x41200000BF000000LL;
  v29->SUPERBOSS_SPLIT_POS_DELTA.fields.z = 0.0;
  v30 = v27->static_fields;
  *(_OWORD *)&v30->ANIM_DURATION_FRAME_IN_BOSS = xmmword_BD78C0;
  v30->SUPERBOSS_HP_BAR_LENGTH = 264;
  v30->CLEAR_END_CALLBACK_DELAY = 1.5;
  *(_QWORD *)&v30->ANIM_DURATION_HP_DELETION = 0x3FE666663F333333LL;
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
  __int64 v9; // x1
  __int64 v10; // x1
  System_Action_o *onClearCall; // x21
  __int64 v12; // x1
  UnityEngine_Component_o *superBossIconSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoSuperBossComponent_c *v15; // x8
  UnityEngine_GameObject_o *v16; // x20

  if ( (byte_4B35C96 & 1) == 0 )
  {
    sub_1BD3458(&TitleInfoSuperBossComponent_TypeInfo, method);
    sub_1BD3458(&Method_UITweener_Begin_TweenAlpha___, v9);
    sub_1BD3458(&StringLiteral_10039/*"OnEndAnimation"*/, v10);
    byte_4B35C96 = 1;
  }
  onClearCall = this->fields.onClearCall;
  this->fields.onClearCall = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.onClearCall, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(onClearCall, 0LL);
  superBossIconSp = (UnityEngine_Component_o *)this->fields.superBossIconSp;
  if ( !superBossIconSp )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(superBossIconSp, 0LL);
  v15 = TitleInfoSuperBossComponent_TypeInfo;
  v16 = gameObject;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v15 = TitleInfoSuperBossComponent_TypeInfo;
  }
  superBossIconSp = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                 v16,
                                                 v15->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                 (const MethodInfo_2FE5B60 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !superBossIconSp )
LABEL_8:
    sub_1BD36B4(superBossIconSp, v12);
  LODWORD(superBossIconSp[1].monitor) = 1;
  superBossIconSp[5].monitor = (void *)1065353216;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10039/*"OnEndAnimation"*/,
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

  if ( (byte_4B35C97 & 1) == 0 )
  {
    sub_1BD3458(&TitleInfoSuperBossComponent_TypeInfo, splitHp);
    byte_4B35C97 = 1;
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
  sub_1BD33FC(p_animEndCall, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndCall, 0LL);
  TitleInfoSuperBossComponent__SetDisp(this, v11);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B35C91 & 1) == 0 )
  {
    sub_1BD3458(&TitleInfoSuperBossComponent_TypeInfo, method);
    sub_1BD3458(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_1BD3458(&StringLiteral_10804/*"PlayHpNameAlpha"*/, v4);
    byte_4B35C91 = 1;
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
         (const MethodInfo_2FE5B60 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v8 )
    sub_1BD36B4(0LL, v9);
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
  sub_1BD33FC((PartyOrganizationUtility_o *)&v11[5], (int64_t)v14, v15, v16, v17, v18, v19, v20);
  v21 = StringLiteral_10804/*"PlayHpNameAlpha"*/;
  v11[5].monitor = (void *)StringLiteral_10804/*"PlayHpNameAlpha"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v11[5].monitor, v21, v22, v23, v24, v25, v26, v27);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x3
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  TitleInfoSuperBossComponent_c *v27; // x0
  EasingObject_o *v28; // x21
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v30; // x22
  System_Action_o *v31; // x20

  if ( (byte_4B35C93 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v3);
    sub_1BD3458(&Method_TitleInfoSuperBossComponent_PlayHpDeletion__, v4);
    sub_1BD3458(&TitleInfoSuperBossComponent_TypeInfo, v5);
    sub_1BD3458(&Method_TitleInfoSuperBossComponent___c__DisplayClass58_0__PlayHpCut_b__0__, v6);
    sub_1BD3458(&TitleInfoSuperBossComponent___c__DisplayClass58_0_TypeInfo, v7);
    byte_4B35C93 = 1;
  }
  v8 = sub_1BD36A4(TitleInfoSuperBossComponent___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_9;
  *(_QWORD *)(v8 + 24) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)this, v11, v12, v13, v14, v15, v16);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_9;
  TitleInfoSuperBossComponent__PlaySeByEventId(v9, eventSuperBossEntity->fields.eventId, 1, v17);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F83564 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v8 + 16) = Component_object;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)Component_object, v21, v22, v23, v24, v25, v26);
  v27 = TitleInfoSuperBossComponent_TypeInfo;
  v28 = *(EasingObject_o **)(v8 + 16);
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v27 = TitleInfoSuperBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v27->static_fields->ANIM_DURATION_HP_CUT;
  v30 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v8,
    Method_TitleInfoSuperBossComponent___c__DisplayClass58_0__PlayHpCut_b__0__,
    0LL);
  v31 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_TitleInfoSuperBossComponent_PlayHpDeletion__, 0LL);
  if ( !v28 )
LABEL_9:
    sub_1BD36B4(v9, v10);
  EasingObject__Play(v28, ANIM_DURATION_HP_CUT, v30, v31, 0.0, 0, 0LL);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t *v29; // x8
  UnityEngine_Object_o *clearBossEffect; // x21
  Il2CppObject *v31; // x21
  Il2CppObject *v32; // x21
  int64_t v33; // x1
  const MethodInfo *v34; // x3
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  UILabel_o *totalHpLabel; // x20
  struct EventSuperBossEntity_o *v37; // x8
  int64_t maxHp; // x21
  System_String_o *v39; // x19
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  Il2CppObject *v43; // x0
  unsigned __int64 v44; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B35C94 & 1) == 0 )
  {
    sub_1BD3458(&long_TypeInfo, method);
    sub_1BD3458(&LocalizationManager_TypeInfo, v3);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v5);
    sub_1BD3458(&TitleInfoSuperBossComponent_TypeInfo, v6);
    sub_1BD3458(&Method_UITweener_Begin_TweenAlpha___, v7);
    sub_1BD3458(&StringLiteral_10039/*"OnEndAnimation"*/, v8);
    sub_1BD3458(&StringLiteral_12869/*"SetClearAlpha"*/, v9);
    sub_1BD3458(&StringLiteral_13544/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v10);
    byte_4B35C94 = 1;
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
                                                  (const MethodInfo_2FE5B60 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !hpBarSliderUnder )
    goto LABEL_23;
  v15 = hpBarSliderUnder;
  LODWORD(hpBarSliderUnder[1].monitor) = 1;
  hpBarSliderUnder[5].monitor = (void *)1065353216;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15[3].monitor = v16;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v15[3].monitor, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  if ( this->fields.HPto <= 0.0 )
  {
    clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(clearBossEffect, 0LL, 0LL) )
    {
      v31 = (Il2CppObject *)this->fields.clearBossEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v32 = UnityEngine_Object__Instantiate_object_(
              v31,
              (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v32, (UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v32, 0LL);
    }
    v29 = &StringLiteral_12869/*"SetClearAlpha"*/;
  }
  else
  {
    v29 = &StringLiteral_10039/*"OnEndAnimation"*/;
  }
  v33 = *v29;
  *(_QWORD *)&v15[3].fields.m_CachedPtr = *v29;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v15[3].fields, v33, v23, v24, v25, v26, v27, v28);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_23;
  TitleInfoSuperBossComponent__PlaySeByEventId(
    (TitleInfoSuperBossComponent_o *)hpBarSliderUnder,
    eventSuperBossEntity->fields.eventId,
    0,
    v34);
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  hpBarSliderUnder = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13544/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
  v37 = this->fields.eventSuperBossEntity;
  if ( !v37
    || (maxHp = v37->fields.maxHp,
        v39 = (System_String_o *)hpBarSliderUnder,
        (hpBarSliderUnder = (UnityEngine_Component_o *)EventSuperBossEntity__GetUserSuperBossEntity(v37, 0LL)) == 0LL)
    || (v44 = maxHp - (unsigned __int64)hpBarSliderUnder[1].monitor,
        v43 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v44, v40, v41, v42),
        hpBarSliderUnder = (UnityEngine_Component_o *)System_String__Format(v39, v43, 0LL),
        !totalHpLabel) )
  {
LABEL_23:
    sub_1BD36B4(hpBarSliderUnder, method);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B35C92 & 1) == 0 )
  {
    sub_1BD3458(&TitleInfoSuperBossComponent_TypeInfo, method);
    sub_1BD3458(&Method_UITweener_Begin_TweenAlpha___, v3);
    sub_1BD3458(&StringLiteral_10803/*"PlayHpCut"*/, v4);
    byte_4B35C92 = 1;
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
                                              (const MethodInfo_2FE5B60 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !totalHpLabel )
LABEL_8:
    sub_1BD36B4(totalHpLabel, method);
  v9 = totalHpLabel;
  totalHpLabel[5].monitor = (void *)0x3F80000000000000LL;
  LODWORD(totalHpLabel[1].monitor) = 1;
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v9[3].monitor = v10;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v9[3].monitor, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_10803/*"PlayHpCut"*/;
  *(_QWORD *)&v9[3].fields.m_CachedPtr = StringLiteral_10803/*"PlayHpCut"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v9[3].fields, v17, v18, v19, v20, v21, v22, v23);
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

  if ( (byte_4B35C98 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BD3458(&Method_TitleInfoSuperBossComponent_PlaySeByEventId__, v8);
    sub_1BD3458(&StringLiteral_17063/*"ar12"*/, v9);
    sub_1BD3458(&StringLiteral_17074/*"ar60"*/, v10);
    sub_1BD3458(&StringLiteral_1/*""*/, v11);
    byte_4B35C98 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1BD36B4(Instance, v13);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    eventId,
    (const MethodInfo_31D1F44 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( entity )
  {
    v14 = &StringLiteral_17074/*"ar60"*/;
    if ( !EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
    {
      if ( entity )
      {
        if ( !EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL) )
          v14 = &StringLiteral_17063/*"ar12"*/;
      }
      else
      {
        v14 = &StringLiteral_17063/*"ar12"*/;
      }
    }
  }
  else
  {
    v14 = &StringLiteral_17063/*"ar12"*/;
  }
  v15 = Method_TitleInfoSuperBossComponent_PlaySeByEventId__;
  v16 = (System_String_o *)*v14;
  if ( (*((_BYTE *)Method_TitleInfoSuperBossComponent_PlaySeByEventId__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1BD3470(Method_TitleInfoSuperBossComponent_PlaySeByEventId__);
  v17 = (System_Reflection_MethodBase_o *)sub_1BD343C(v15, v15[4]);
  if ( isPlay )
    OverwriteAssetSoundName__PlaySeLoop(v17, v16, 1.0, 0.0, 0LL);
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

  if ( (byte_4B35C8C & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, spName);
    byte_4B35C8C = 1;
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
    sub_1BD36B4(v6, v7);
  }
}


void __fastcall TitleInfoSuperBossComponent__SetClearAlpha(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoSuperBossComponent_c *v4; // x0

  if ( (byte_4B35C95 & 1) == 0 )
  {
    sub_1BD3458(&TitleInfoSuperBossComponent_TypeInfo, method);
    sub_1BD3458(&StringLiteral_5429/*"DoClearCallback"*/, v3);
    byte_4B35C95 = 1;
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
    (System_String_o *)StringLiteral_5429/*"DoClearCallback"*/,
    v4->static_fields->CLEAR_CALLBACK_DELAY,
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  EventSuperBossEntity_o *eventSuperBossEntity; // x0
  struct EventSuperBossEntity_o *v16; // x9
  __int64 maxHp; // x8
  double v18; // d1
  float v19; // s0
  float v20; // s2
  float v21; // s5
  float v22; // s3
  float v23; // s0
  float v24; // s2
  struct System_Int64_array *splitHp; // x9
  int max_length; // w11
  int32_t v27; // w10
  int64_t v28; // x12
  float v29; // s1
  UnityEngine_Transform_o *v30; // x21
  TitleInfoSuperBossComponent_c *v31; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float *static_fields; // x8
  UILabel_o *totalHpLabel; // x21
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  struct EventSuperBossEntity_o *v40; // x8
  System_String_o *v41; // x22
  Il2CppObject *v42; // x0
  long double v43; // q0
  struct EventSuperBossEntity_o *v44; // x8
  struct System_Int64_array *v45; // x9
  struct UISprite_array *hpBarSplitPointList; // x10
  int v47; // w21
  il2cpp_array_size_t v48; // w22
  struct System_Int64_array *v49; // x8
  struct UISprite_array *v50; // x9
  int64_t v51; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B35C8F & 1) == 0 )
  {
    sub_1BD3458(&long_TypeInfo, damage);
    sub_1BD3458(&LocalizationManager_TypeInfo, v11);
    sub_1BD3458(&TitleInfoSuperBossComponent_TypeInfo, v12);
    sub_1BD3458(&StringLiteral_13544/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v13);
    byte_4B35C8F = 1;
  }
  this->fields.onClearCall = onClearCallback;
  sub_1BD33FC(
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
  v16 = this->fields.eventSuperBossEntity;
  if ( !v16 )
    goto LABEL_55;
  maxHp = eventSuperBossEntity->fields.maxHp;
  v18 = (double)v16->fields.maxHp;
  v19 = 1.0 - (double)damage / v18;
  v20 = 1.0 - (double)maxHp / v18;
  v21 = fminf(v19, 1.0);
  v22 = fminf(v20, 1.0);
  v23 = v19 < 0.0 ? 0.0 : v21;
  v24 = v20 < 0.0 ? 0.0 : v22;
  this->fields.HPfrom = v23;
  this->fields.HPto = v24;
  *(_QWORD *)&this->fields.HPsplitPoint = -1082130432LL;
  splitHp = v16->fields.splitHp;
  if ( !splitHp )
    goto LABEL_55;
  max_length = splitHp->max_length;
  if ( max_length >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      v28 = splitHp->m_Items[v27];
      if ( v28 > damage && v28 <= maxHp )
        break;
      if ( max_length == ++v27 )
        goto LABEL_20;
    }
    v29 = 1.0 - (double)v28 / v18;
    this->fields.HPsplitPoint = v29;
    this->fields.HPsplitNo = v27;
  }
LABEL_20:
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSlider;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, v23, 0LL);
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
  v30 = (UnityEngine_Transform_o *)eventSuperBossEntity;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, 0LL);
  v31 = TitleInfoSuperBossComponent_TypeInfo;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v31 = TitleInfoSuperBossComponent_TypeInfo;
  }
  static_fields = (float *)v31->static_fields;
  v53.fields.x = x + static_fields[6];
  v53.fields.y = y + static_fields[7];
  v53.fields.z = z + static_fields[8];
  UnityEngine_Transform__set_localPosition(v30, v53, 0LL);
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  eventSuperBossEntity = (EventSuperBossEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13544/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
  v40 = this->fields.eventSuperBossEntity;
  if ( !v40 )
    goto LABEL_55;
  v41 = (System_String_o *)eventSuperBossEntity;
  v51 = v40->fields.maxHp - damage;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v51, v37, v38, v39);
  eventSuperBossEntity = (EventSuperBossEntity_o *)System_String__Format(v41, v42, 0LL);
  if ( !totalHpLabel
    || (UILabel__set_text(totalHpLabel, (System_String_o *)eventSuperBossEntity, 0LL),
        (eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel) == 0LL)
    || (eventSuperBossEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, float))&eventSuperBossEntity->klass[1]._1.byval_arg.bits)(
                                                           eventSuperBossEntity,
                                                           eventSuperBossEntity->klass[1]._1.this_arg.data,
                                                           0.0),
        (v44 = this->fields.eventSuperBossEntity) == 0LL)
    || (v45 = v44->fields.splitHp) == 0LL )
  {
LABEL_55:
    sub_1BD36B4(eventSuperBossEntity, v14);
  }
  hpBarSplitPointList = this->fields.hpBarSplitPointList;
  if ( hpBarSplitPointList )
  {
    v47 = v45->max_length;
    if ( v47 <= (signed int)hpBarSplitPointList->max_length && v47 >= 1 )
    {
      v48 = 0;
      while ( 1 )
      {
        v49 = v44->fields.splitHp;
        if ( !v49 )
          goto LABEL_55;
        if ( v48 >= v49->max_length )
          goto LABEL_57;
        v50 = this->fields.hpBarSplitPointList;
        if ( !v50 )
          goto LABEL_55;
        if ( v48 >= v50->max_length )
LABEL_57:
          sub_1BD36BC(eventSuperBossEntity, v14);
        eventSuperBossEntity = (EventSuperBossEntity_o *)v50->m_Items[v48];
        if ( !eventSuperBossEntity )
          goto LABEL_55;
        if ( v49->m_Items[v48] <= damage )
          *(float *)&v43 = 0.0;
        else
          *(float *)&v43 = 1.0;
        eventSuperBossEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, long double))&eventSuperBossEntity->klass[1]._1.byval_arg.bits)(
                                                           eventSuperBossEntity,
                                                           eventSuperBossEntity->klass[1]._1.this_arg.data,
                                                           v43);
        if ( v47 == ++v48 )
          return;
        v44 = this->fields.eventSuperBossEntity;
        if ( !v44 )
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct UISprite_array *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x3
  UnityEngine_Component_o *v37; // x24
  il2cpp_array_size_t i; // w29
  struct UISprite_array *hpBarSplitterList; // x25
  Il2CppObject *hpBarSplitter; // x26
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x26
  Il2CppClass **v48; // x0
  struct UISprite_array *v49; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *hpBarSplitPointList; // x26
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x25
  Il2CppClass **v59; // x0
  struct UISprite_array *v60; // x8
  UnityEngine_GameObject_o *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x26
  struct UISprite_array *v69; // x25
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x26
  struct EventSuperBossEntity_o *v77; // x8
  struct System_Int64_array *v78; // x9
  float HpSplitPositionX; // s0
  struct UISprite_array *v80; // x8
  float v81; // s8
  struct UISprite_array *v82; // x8
  long double v83; // q0
  struct EventSuperBossEntity_o *v84; // x8
  struct System_Int64_array *v85; // x8
  struct UISprite_array *v86; // x9
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  float v88; // s0
  float v89; // s1
  float v90; // s2
  float v91; // s3
  float v92; // s8
  float v93; // s9
  float v94; // s10
  float v95; // s11
  struct EventSuperBossEntity_o *v96; // x8
  __int64 maxHp; // x22
  __int64 v98; // x23
  UILabel_o *totalHpLabel; // x20
  System_String_o *v100; // x21
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  Il2CppObject *v104; // x0
  float v105; // s0
  __int64 v106; // x0
  UnityEngine_Component_o *parent; // [xsp+0h] [xbp-90h]
  __int64 v108; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v111; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v112; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B35C8E & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    sub_1BD3458(&long_TypeInfo, v3);
    sub_1BD3458(&LocalizationManager_TypeInfo, v4);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v6);
    sub_1BD3458(&TitleInfoSuperBossComponent_TypeInfo, v7);
    sub_1BD3458(&UISprite___TypeInfo, v8);
    sub_1BD3458(&StringLiteral_13544/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v9);
    byte_4B35C8E = 1;
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
        v15 = System_String__Concat_62525248(SUPERBOSS_ICON_SPNAME_PREFIX, v14, 0LL);
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
                v22 = (struct UISprite_array *)sub_1BD3500(UISprite___TypeInfo, (unsigned int)max_length);
                this->fields.hpBarSplitterList = v22;
                sub_1BD33FC(
                  (PartyOrganizationUtility_o *)&this->fields.hpBarSplitterList,
                  (int64_t)v22,
                  v23,
                  v24,
                  v25,
                  v26,
                  v27,
                  v28);
                v29 = (struct UISprite_array *)sub_1BD3500(UISprite___TypeInfo, (unsigned int)max_length);
                this->fields.hpBarSplitPointList = v29;
                sub_1BD33FC(
                  (PartyOrganizationUtility_o *)&this->fields.hpBarSplitPointList,
                  (int64_t)v29,
                  v30,
                  v31,
                  v32,
                  v33,
                  v34,
                  v35);
                v21 = 0;
              }
              parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.hpBarSplitter, 0LL);
              eventSuperBossEntity = (EventSuperBossEntity_o *)GameObjectExtensions__GetParent(
                                                                 this->fields.hpBarSplitPoint,
                                                                 0LL);
              v37 = (UnityEngine_Component_o *)eventSuperBossEntity;
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
                                                                       (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitterList )
                      goto LABEL_95;
                    v47 = (int64_t)eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1BD3594(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitterList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( i >= hpBarSplitterList->max_length )
                      goto LABEL_96;
                    v48 = &hpBarSplitterList->obj.klass + (int)i;
                    v48[4] = (Il2CppClass *)v47;
                    sub_1BD33FC((PartyOrganizationUtility_o *)(v48 + 4), v47, v41, v42, v43, v44, v45, v46);
                    v49 = *p_hpBarSplitterList;
                    if ( !*p_hpBarSplitterList )
                      goto LABEL_95;
                    if ( i >= v49->max_length )
                      goto LABEL_96;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)v49->m_Items[i];
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    gameObject = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                   0LL);
                    GameObjectExtensions__SafeSetParent(gameObject, parent, 0LL);
                    hpBarSplitPointList = this->fields.hpBarSplitPointList;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Object__Instantiate_object_(
                                                                       (Il2CppObject *)this->fields.hpBarSplitPoint,
                                                                       (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitPointList )
                      goto LABEL_95;
                    v58 = (int64_t)eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1BD3594(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitPointList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( i >= hpBarSplitPointList->max_length )
                      goto LABEL_96;
                    v59 = &hpBarSplitPointList->obj.klass + (int)i;
                    v59[4] = (Il2CppClass *)v58;
                    sub_1BD33FC((PartyOrganizationUtility_o *)(v59 + 4), v58, v52, v53, v54, v55, v56, v57);
                    v60 = this->fields.hpBarSplitPointList;
                    if ( !v60 )
                      goto LABEL_95;
                    if ( i >= v60->max_length )
                      goto LABEL_96;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)v60->m_Items[i];
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventSuperBossEntity, 0LL);
                    GameObjectExtensions__SafeSetParent(v61, v37, 0LL);
                  }
                  else
                  {
                    if ( !hpBarSplitter )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       this->fields.hpBarSplitter,
                                                                       (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitterList )
                      goto LABEL_95;
                    v68 = (int64_t)eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1BD3594(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitterList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                      {
LABEL_97:
                        v106 = sub_1BD36D8(eventSuperBossEntity);
                        sub_1BD3580(v106, 0LL);
                      }
                    }
                    if ( !hpBarSplitterList->max_length )
                      goto LABEL_96;
                    hpBarSplitterList->m_Items[0] = (UISprite_o *)v68;
                    sub_1BD33FC(
                      (PartyOrganizationUtility_o *)hpBarSplitterList->m_Items,
                      v68,
                      v62,
                      v63,
                      v64,
                      v65,
                      v66,
                      v67);
                    eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSplitPoint;
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    v69 = this->fields.hpBarSplitPointList;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !v69 )
                      goto LABEL_95;
                    v76 = (int64_t)eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1BD3594(
                                                                         eventSuperBossEntity,
                                                                         v69->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( !v69->max_length )
                      goto LABEL_96;
                    v69->m_Items[0] = (UISprite_o *)v76;
                    sub_1BD33FC((PartyOrganizationUtility_o *)v69->m_Items, v76, v70, v71, v72, v73, v74, v75);
                  }
                }
                v77 = this->fields.eventSuperBossEntity;
                if ( !v77 )
                  goto LABEL_95;
                v78 = v77->fields.splitHp;
                if ( !v78 )
                  goto LABEL_95;
                if ( i >= v78->max_length )
                  goto LABEL_96;
                HpSplitPositionX = TitleInfoSuperBossComponent__GetHpSplitPositionX(
                                     (TitleInfoSuperBossComponent_o *)eventSuperBossEntity,
                                     v78->m_Items[i],
                                     v77->fields.maxHp,
                                     v36);
                v80 = *p_hpBarSplitterList;
                if ( !*p_hpBarSplitterList )
                  goto LABEL_95;
                if ( i >= v80->max_length )
                  goto LABEL_96;
                eventSuperBossEntity = (EventSuperBossEntity_o *)v80->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v81 = HpSplitPositionX;
                eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                   0LL);
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v109.fields.y = 0.0;
                v109.fields.z = 0.0;
                v109.fields.x = v81;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, v109, 0LL);
                v82 = this->fields.hpBarSplitPointList;
                if ( !v82 )
                  goto LABEL_95;
                if ( i >= v82->max_length )
                  goto LABEL_96;
                eventSuperBossEntity = (EventSuperBossEntity_o *)v82->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                   0LL);
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v110.fields.y = 0.0;
                v110.fields.z = 0.0;
                v110.fields.x = v81;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, v110, 0LL);
                v84 = this->fields.eventSuperBossEntity;
                if ( !v84 )
                  goto LABEL_95;
                v85 = v84->fields.splitHp;
                if ( !v85 )
                  goto LABEL_95;
                if ( i >= v85->max_length )
                  goto LABEL_96;
                if ( !v11 )
                  goto LABEL_95;
                v86 = this->fields.hpBarSplitPointList;
                if ( !v86 )
                  goto LABEL_95;
                if ( i >= v86->max_length )
LABEL_96:
                  sub_1BD36BC(eventSuperBossEntity, method);
                eventSuperBossEntity = (EventSuperBossEntity_o *)v86->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                if ( v85->m_Items[i] <= v11->fields.maxHp )
                  *(float *)&v83 = 0.0;
                else
                  *(float *)&v83 = 1.0;
                eventSuperBossEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, long double))&eventSuperBossEntity->klass[1]._1.byval_arg.bits)(
                                                                   eventSuperBossEntity,
                                                                   eventSuperBossEntity->klass[1]._1.this_arg.data,
                                                                   v83);
              }
            }
            eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
            if ( eventBossStatusUiEntity )
            {
              v111.fields.r = 0.0;
              v111.fields.g = 0.0;
              v111.fields.b = 0.0;
              v111.fields.a = 0.0;
              *(UnityEngine_Color_o *)&v88 = EventBossStatusUiEntity__GetTextEffectColor(
                                               eventBossStatusUiEntity,
                                               v111,
                                               0LL);
            }
            else
            {
              eventSuperBossEntity = this->fields.eventSuperBossEntity;
              if ( !eventSuperBossEntity )
                goto LABEL_95;
              *(UnityEngine_Color_o *)&v88 = EventSuperBossEntity__GetBossColor(eventSuperBossEntity, 0LL);
            }
            eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderWhite;
            v92 = v88;
            v93 = v89;
            v94 = v90;
            v95 = v91;
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
                    v96 = this->fields.eventSuperBossEntity;
                    if ( v96 )
                    {
                      if ( v11 )
                      {
                        maxHp = v96->fields.maxHp;
                        eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel;
                        v98 = v11->fields.maxHp >= maxHp ? v96->fields.maxHp : v11->fields.maxHp;
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
                              v100 = LocalizationManager__Get((System_String_o *)StringLiteral_13544/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
                              v108 = maxHp - v98;
                              v104 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v108, v101, v102, v103);
                              eventSuperBossEntity = (EventSuperBossEntity_o *)System_String__Format(v100, v104, 0LL);
                              if ( !totalHpLabel )
                                goto LABEL_95;
                              UILabel__set_text(totalHpLabel, (System_String_o *)eventSuperBossEntity, 0LL);
                            }
                            eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel;
                            if ( eventSuperBossEntity )
                            {
                              v112.fields.r = v92;
                              v112.fields.g = v93;
                              v112.fields.b = v94;
                              v112.fields.a = v95;
                              UILabel__set_effectColor((UILabel_o *)eventSuperBossEntity, v112, 0LL);
                              eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSlider;
                              if ( eventSuperBossEntity )
                              {
                                v105 = 1.0 - (double)v98 / (double)maxHp;
                                UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, v105, 0LL);
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
    sub_1BD36B4(eventSuperBossEntity, method);
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
  if ( (byte_4B35C8D & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, sprite);
    sub_1BD3458(&StringLiteral_16309/*"_"*/, v8);
    byte_4B35C8D = 1;
  }
  if ( (gaugeId & 0x80000000) != 0 )
    goto LABEL_12;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  v10 = System_String__Concat_62536508(prefix, (System_String_o *)StringLiteral_16309/*"_"*/, v9, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  struct EventSuperBossEntity_o **p_eventSuperBossEntity; // x21
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  int32_t GaugeId; // w20
  _BOOL8 IsEncounted; // x0
  const MethodInfo *v32; // x4
  TitleInfoSuperBossComponent_o *v33; // x0
  const MethodInfo *v34; // x4
  TitleInfoSuperBossComponent_o *v35; // x0
  const MethodInfo *v36; // x4
  TitleInfoSuperBossComponent_o *v37; // x0
  const MethodInfo *v38; // x4
  TitleInfoSuperBossComponent_o *v39; // x0
  const MethodInfo *v40; // x4
  TitleInfoSuperBossComponent_o *v41; // x0
  const MethodInfo *v42; // x4
  TitleInfoSuperBossComponent_o *v43; // x0
  const MethodInfo *v44; // x4
  const MethodInfo *v45; // x1

  if ( (byte_4B35C8B & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, superBossEntity);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BD3458(&StringLiteral_19491/*"event_superboss_hp_split"*/, v11);
    sub_1BD3458(&StringLiteral_19495/*"event_superboss_hp_white"*/, v12);
    sub_1BD3458(&StringLiteral_19448/*"event_raid_hp_back"*/, v13);
    sub_1BD3458(&StringLiteral_19492/*"event_superboss_hp_split_frame"*/, v14);
    sub_1BD3458(&StringLiteral_19489/*"event_superboss_hp_lower"*/, v15);
    sub_1BD3458(&StringLiteral_19449/*"event_raid_hp_frame"*/, v16);
    sub_1BD3458(&StringLiteral_19493/*"event_superboss_hp_upper"*/, v17);
    byte_4B35C8B = 1;
  }
  this->fields.eventSuperBossEntity = superBossEntity;
  p_eventSuperBossEntity = &this->fields.eventSuperBossEntity;
  sub_1BD33FC(
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___),
          !*p_eventSuperBossEntity)
      || !Instance
      || ((EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                         (EventBossStatusUiMaster_o *)Instance,
                                         (*p_eventSuperBossEntity)->fields.eventId,
                                         (*p_eventSuperBossEntity)->fields.id,
                                         0LL),
           this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex,
           sub_1BD33FC(
             (PartyOrganizationUtility_o *)&this->fields.eventBossStatusUiEntity,
             (int64_t)EntityFromEventIdAndIndex,
             v23,
             v24,
             v25,
             v26,
             v27,
             v28),
           (eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity) == 0LL)
        ? (GaugeId = -1)
        : (GaugeId = EventBossStatusUiEntity__GetGaugeId(eventBossStatusUiEntity, 0LL)),
          (Instance = (Il2CppObject *)*p_eventSuperBossEntity) == 0LL) )
    {
      sub_1BD36B4(Instance, v21);
    }
    IsEncounted = EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)Instance, 0LL);
    this->fields.isEncountSuperBoss = IsEncounted;
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      (TitleInfoSuperBossComponent_o *)IsEncounted,
      this->fields.hpBarUnderSprite,
      (System_String_o *)StringLiteral_19489/*"event_superboss_hp_lower"*/,
      GaugeId,
      v32);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v33,
      this->fields.hpBarUpperSprite,
      (System_String_o *)StringLiteral_19493/*"event_superboss_hp_upper"*/,
      GaugeId,
      v34);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v35,
      this->fields.hpBarWhiteSprite,
      (System_String_o *)StringLiteral_19495/*"event_superboss_hp_white"*/,
      GaugeId,
      v36);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v37,
      this->fields.hpSplitSprite,
      (System_String_o *)StringLiteral_19492/*"event_superboss_hp_split_frame"*/,
      GaugeId,
      v38);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v39,
      this->fields.hpSplitPointSprite,
      (System_String_o *)StringLiteral_19491/*"event_superboss_hp_split"*/,
      GaugeId,
      v40);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v41,
      this->fields.superBossHpFrame,
      (System_String_o *)StringLiteral_19449/*"event_raid_hp_frame"*/,
      GaugeId,
      v42);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v43,
      this->fields.superBossHpBg,
      (System_String_o *)StringLiteral_19448/*"event_raid_hp_back"*/,
      GaugeId,
      v44);
    TitleInfoSuperBossComponent__SetDisp(this, v45);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  TitleInfoSuperBossComponent_c *v18; // x0
  Il2CppObject *Object_object__49362760; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_Object_o *splitHpEffect; // x23
  TitleInfoSuperBossComponent_c *v27; // x0
  Il2CppObject *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  TitleInfoSuperBossComponent_c *v35; // x0
  System_String_o *v36; // x0
  Il2CppObject *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  UnityEngine_Object_o *clearBossEffect; // x22
  const MethodInfo *v45; // x1
  TitleInfoSuperBossComponent_c *v46; // x0
  Il2CppObject *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7

  v6 = this;
  if ( (byte_4B35C90 & 1) == 0 )
  {
    sub_1BD3458(&Method_AssetData_GetObject_GameObject____76969040, mapAssetData);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v7);
    sub_1BD3458(&TitleInfoSuperBossComponent_TypeInfo, v8);
    this = (TitleInfoSuperBossComponent_o *)sub_1BD3458(&StringLiteral_16309/*"_"*/, v9);
    byte_4B35C90 = 1;
  }
  eventSuperBossEntity = v6->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_22;
  v11 = System_Int32__ToString((int)eventSuperBossEntity + 16, 0LL);
  v6->fields.animEndCall = callBack;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v6->fields.animEndCall, (int64_t)callBack, v12, v13, v14, v15, v16, v17);
  v18 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v18 = TitleInfoSuperBossComponent_TypeInfo;
  }
  this = (TitleInfoSuperBossComponent_o *)System_String__Concat_62536508(
                                            v18->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
                                            (System_String_o *)StringLiteral_16309/*"_"*/,
                                            v11,
                                            0LL);
  if ( !mapAssetData )
LABEL_22:
    sub_1BD36B4(this, mapAssetData);
  Object_object__49362760 = AssetData__GetObject_object__49362760(
                              mapAssetData,
                              (System_String_o *)this,
                              (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
  v6->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)Object_object__49362760;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v6->fields.splitHpEffect,
    (int64_t)Object_object__49362760,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  splitHpEffect = (UnityEngine_Object_o *)v6->fields.splitHpEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(splitHpEffect, 0LL, 0LL) )
  {
    v27 = TitleInfoSuperBossComponent_TypeInfo;
    if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v27 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v28 = AssetData__GetObject_object__49362760(
            mapAssetData,
            v27->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
            (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
    v6->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)v28;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v6->fields.splitHpEffect, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  }
  v35 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v35 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v36 = System_String__Concat_62536508(
          v35->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_16309/*"_"*/,
          v11,
          0LL);
  v37 = AssetData__GetObject_object__49362760(
          mapAssetData,
          v36,
          (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
  v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)v37;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v6->fields.clearBossEffect, (int64_t)v37, v38, v39, v40, v41, v42, v43);
  clearBossEffect = (UnityEngine_Object_o *)v6->fields.clearBossEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(clearBossEffect, 0LL, 0LL) )
  {
    v46 = TitleInfoSuperBossComponent_TypeInfo;
    if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v46 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v47 = AssetData__GetObject_object__49362760(
            mapAssetData,
            v46->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
            (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
    v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)v47;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v6->fields.clearBossEffect, (int64_t)v47, v48, v49, v50, v51, v52, v53);
  }
  TitleInfoSuperBossComponent__PlayFrameInBoss(v6, v45);
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
  struct TitleInfoSuperBossComponent_o *v30; // x8
  Il2CppObject *v31; // x20
  struct TitleInfoSuperBossComponent_o *v32; // x8
  TitleInfoSuperBossComponent___c__DisplayClass58_0_o *v33; // x20
  UnityEngine_Component_o *Parent; // x0
  struct TitleInfoSuperBossComponent_o *v35; // x9
  struct UISprite_array *hpBarSplitterList; // x8
  __int64 HPsplitNo; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  TitleInfoSuperBossComponent_c *v41; // x0
  float *static_fields; // x8
  struct TitleInfoSuperBossComponent_o *v43; // x9
  struct UISprite_array *hpBarSplitPointList; // x8
  __int64 v45; // x9
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v47; // x8
  struct TitleInfoSuperBossComponent_o *v48; // x8
  double v49; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4B35C9A & 1) == 0 )
  {
    sub_1BD3458(&double_TypeInfo, method);
    sub_1BD3458(&LocalizationManager_TypeInfo, v3);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v5);
    sub_1BD3458(&TitleInfoSuperBossComponent_TypeInfo, v6);
    sub_1BD3458(&Method_UITweener_Begin_TweenAlpha___, v7);
    this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)sub_1BD3458(&StringLiteral_13544/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v8);
    byte_4B35C9A = 1;
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
                                                                  (System_String_o *)StringLiteral_13544/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/,
                                                                  0LL);
  v23 = v2->fields.__4__this;
  if ( !v23 )
    goto LABEL_46;
  eventSuperBossEntity = v23->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_46;
  v25 = this;
  v49 = (float)(v13 * (float)eventSuperBossEntity->fields.maxHp);
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v49, v20, v21, v22);
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
      v30 = v2->fields.__4__this;
      if ( !v30 )
        goto LABEL_46;
      v31 = (Il2CppObject *)v30->fields.splitHpEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                      v31,
                                                                      (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v32 = v2->fields.__4__this;
      if ( !v32 )
        goto LABEL_46;
      v33 = this;
      Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v32->fields.hpBarSplitter, 0LL);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v33, Parent, 0LL);
      v35 = v2->fields.__4__this;
      if ( !v35 )
        goto LABEL_46;
      hpBarSplitterList = v35->fields.hpBarSplitterList;
      if ( !hpBarSplitterList )
        goto LABEL_46;
      HPsplitNo = v35->fields.HPsplitNo;
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
      v41 = TitleInfoSuperBossComponent_TypeInfo;
      if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
        v41 = TitleInfoSuperBossComponent_TypeInfo;
      }
      static_fields = (float *)v41->static_fields;
      v51.fields.x = x + static_fields[9];
      v51.fields.y = y + static_fields[10];
      v51.fields.z = z + static_fields[11];
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v33, v51, 0LL);
    }
    v43 = v2->fields.__4__this;
    if ( !v43 )
      goto LABEL_46;
    hpBarSplitPointList = v43->fields.hpBarSplitPointList;
    if ( !hpBarSplitPointList )
      goto LABEL_46;
    v45 = v43->fields.HPsplitNo;
    if ( (unsigned int)v45 < hpBarSplitPointList->max_length )
    {
      this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)hpBarSplitPointList->m_Items[v45];
      if ( this )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v47 = TitleInfoSuperBossComponent_TypeInfo;
        if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
          v47 = TitleInfoSuperBossComponent_TypeInfo;
        }
        this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UITweener__Begin_object_(
                                                                        gameObject,
                                                                        v47->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                                        (const MethodInfo_2FE5B60 *)Method_UITweener_Begin_TweenAlpha___);
        if ( this )
        {
          LODWORD(this[1].klass) = 2;
          this[4].klass = (TitleInfoSuperBossComponent___c__DisplayClass58_0_c *)1065353216;
          v48 = v2->fields.__4__this;
          if ( v48 )
          {
            *(_QWORD *)&v48->fields.HPsplitPoint = -1082130432LL;
            return;
          }
        }
      }
LABEL_46:
      sub_1BD36B4(this, method);
    }
LABEL_47:
    sub_1BD36BC(this, method);
  }
}