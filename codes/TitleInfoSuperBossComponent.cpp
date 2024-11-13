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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t v14; // x1
  struct TitleInfoSuperBossComponent_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  struct TitleInfoSuperBossComponent_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  TitleInfoSuperBossComponent_c *v30; // x8
  struct TitleInfoSuperBossComponent_StaticFields *v31; // x9
  struct TitleInfoSuperBossComponent_StaticFields *v32; // x9
  struct TitleInfoSuperBossComponent_StaticFields *v33; // x8

  if ( (byte_4B14D01 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoSuperBossComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_14649/*"TitleInfoEventSuperBossEffect_Dead"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_14650/*"TitleInfoEventSuperBossEffect_Split"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_19467/*"event_superboss_icon_"*/, v12, v13);
    byte_4B14D01 = 1;
  }
  TitleInfoSuperBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_19467/*"event_superboss_icon_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TitleInfoSuperBossComponent_TypeInfo->static_fields,
    StringLiteral_19467/*"event_superboss_icon_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = StringLiteral_14650/*"TitleInfoEventSuperBossEffect_Split"*/;
  static_fields = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14650/*"TitleInfoEventSuperBossEffect_Split"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
    v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = StringLiteral_14649/*"TitleInfoEventSuperBossEffect_Dead"*/;
  v23 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v23->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14649/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v23->SUPERBOSS_CLEAR_EFFECT_PREFAB, v22, v24, v25, v26, v27, v28, v29);
  v30 = TitleInfoSuperBossComponent_TypeInfo;
  v31 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v31->SUPERBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v31->SUPERBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v32 = v30->static_fields;
  *(_QWORD *)&v32->SUPERBOSS_SPLIT_POS_DELTA.fields.x = 0x41200000BF000000LL;
  v32->SUPERBOSS_SPLIT_POS_DELTA.fields.z = 0.0;
  v33 = v30->static_fields;
  *(_OWORD *)&v33->ANIM_DURATION_FRAME_IN_BOSS = xmmword_BD2470;
  v33->SUPERBOSS_HP_BAR_LENGTH = 264;
  v33->CLEAR_END_CALLBACK_DELAY = 1.5;
  *(_QWORD *)&v33->ANIM_DURATION_HP_DELETION = 0x3FE666663F333333LL;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *onClearCall; // x21
  __int64 v14; // x1
  UnityEngine_Component_o *superBossIconSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  TitleInfoSuperBossComponent_c *v18; // x8
  UnityEngine_GameObject_o *v19; // x20

  if ( (byte_4B14CFE & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoSuperBossComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenAlpha___, v9, v10);
    sub_1BCA7E0(&StringLiteral_10025/*"OnEndAnimation"*/, v11, v12);
    byte_4B14CFE = 1;
  }
  onClearCall = this->fields.onClearCall;
  this->fields.onClearCall = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onClearCall, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(onClearCall, 0LL);
  superBossIconSp = (UnityEngine_Component_o *)this->fields.superBossIconSp;
  if ( !superBossIconSp )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(superBossIconSp, 0LL);
  v18 = TitleInfoSuperBossComponent_TypeInfo;
  v19 = gameObject;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v17);
    v18 = TitleInfoSuperBossComponent_TypeInfo;
  }
  superBossIconSp = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                 v19,
                                                 v18->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                 (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !superBossIconSp )
LABEL_8:
    sub_1BCAA3C(superBossIconSp, v14);
  LODWORD(superBossIconSp[1].monitor) = 1;
  superBossIconSp[5].monitor = (void *)1065353216;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10025/*"OnEndAnimation"*/,
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

  if ( (byte_4B14CFF & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoSuperBossComponent_TypeInfo, splitHp, maxHp);
    byte_4B14CFF = 1;
  }
  v6 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, splitHp);
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
  sub_1BCA784(p_animEndCall, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndCall, 0LL);
  TitleInfoSuperBossComponent__SetDisp(this, v11);
}


void __fastcall TitleInfoSuperBossComponent__PlayFrameInBoss(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  TitleInfoSuperBossComponent_c *v10; // x8
  UnityEngine_GameObject_o *v11; // x20
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  float32x2_t *static_fields; // x8
  Il2CppObject *v15; // x20
  float v16; // s0
  void *v17; // x9
  UnityEngine_GameObject_o *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4B14CF9 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoSuperBossComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, v4, v5);
    sub_1BCA7E0(&StringLiteral_10789/*"PlayHpNameAlpha"*/, v6, v7);
    byte_4B14CF9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10 = TitleInfoSuperBossComponent_TypeInfo;
  v11 = gameObject;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v9);
    v10 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v12 = UITweener__Begin_object_(
          v11,
          v10->static_fields->ANIM_DURATION_FRAME_IN_BOSS,
          (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v12 )
    sub_1BCAA3C(0LL, v13);
  static_fields = (float32x2_t *)TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v15 = v12;
  v16 = this->fields.originPos.fields.z + static_fields[4].n64_f32[0];
  v12[8].klass = (Il2CppClass *)vadd_f32(*(float32x2_t *)&this->fields.originPos.fields.x, static_fields[3]).n64_u64[0];
  *(float *)&v12[8].monitor = v16;
  v17 = *(void **)&this->fields.originPos.fields.x;
  HIDWORD(v12[9].klass) = LODWORD(this->fields.originPos.fields.z);
  *(void **)((char *)&v12[8].monitor + 4) = v17;
  LODWORD(v12[2].klass) = 2;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15[5].klass = (Il2CppClass *)v18;
  sub_1BCA784((PartyOrganizationUtility_o *)&v15[5], (int64_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_10789/*"PlayHpNameAlpha"*/;
  v15[5].monitor = (void *)StringLiteral_10789/*"PlayHpNameAlpha"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v15[5].monitor, v25, v26, v27, v28, v29, v30, v31);
}


void __fastcall TitleInfoSuperBossComponent__PlayHpCut(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  TitleInfoSuperBossComponent_o *v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x3
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  TitleInfoSuperBossComponent_c *v37; // x0
  EasingObject_o *v38; // x21
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v40; // x22
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Action_o *v44; // x20

  if ( (byte_4B14CFB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5, v6);
    sub_1BCA7E0(&Method_TitleInfoSuperBossComponent_PlayHpDeletion__, v7, v8);
    sub_1BCA7E0(&TitleInfoSuperBossComponent_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_TitleInfoSuperBossComponent___c__DisplayClass58_0__PlayHpCut_b__0__, v11, v12);
    sub_1BCA7E0(&TitleInfoSuperBossComponent___c__DisplayClass58_0_TypeInfo, v13, v14);
    byte_4B14CFB = 1;
  }
  v15 = sub_1BCAA2C(TitleInfoSuperBossComponent___c__DisplayClass58_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_9;
  *(_QWORD *)(v15 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)this, v18, v19, v20, v21, v22, v23);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_9;
  TitleInfoSuperBossComponent__PlaySeByEventId(v16, eventSuperBossEntity->fields.eventId, 1, v24);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v15 + 16) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)Component_object, v28, v29, v30, v31, v32, v33);
  v37 = TitleInfoSuperBossComponent_TypeInfo;
  v38 = *(EasingObject_o **)(v15 + 16);
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v34);
    v37 = TitleInfoSuperBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v37->static_fields->ANIM_DURATION_HP_CUT;
  v40 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v34, v35, v36);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v15,
    Method_TitleInfoSuperBossComponent___c__DisplayClass58_0__PlayHpCut_b__0__,
    0LL);
  v44 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v41, v42, v43);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_TitleInfoSuperBossComponent_PlayHpDeletion__, 0LL);
  if ( !v38 )
LABEL_9:
    sub_1BCAA3C(v16, v17);
  EasingObject__Play(v38, ANIM_DURATION_HP_CUT, v40, v44, 0.0, 0, 0LL);
}


void __fastcall TitleInfoSuperBossComponent__PlayHpDeletion(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Component_o *hpBarSliderUnder; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  TitleInfoSuperBossComponent_c *v23; // x8
  UnityEngine_GameObject_o *v24; // x20
  UnityEngine_Component_o *v25; // x20
  UnityEngine_GameObject_o *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t *v40; // x8
  UnityEngine_Object_o *clearBossEffect; // x21
  __int64 v42; // x1
  Il2CppObject *v43; // x21
  Il2CppObject *v44; // x21
  int64_t v45; // x1
  const MethodInfo *v46; // x3
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  __int64 v48; // x1
  UILabel_o *totalHpLabel; // x20
  struct EventSuperBossEntity_o *v50; // x8
  int64_t maxHp; // x21
  System_String_o *v52; // x19
  Il2CppObject *v53; // x0
  unsigned __int64 v54; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B14CFC & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&TitleInfoSuperBossComponent_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenAlpha___, v12, v13);
    sub_1BCA7E0(&StringLiteral_10025/*"OnEndAnimation"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_12850/*"SetClearAlpha"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_13525/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v18, v19);
    byte_4B14CFC = 1;
  }
  hpBarSliderUnder = (UnityEngine_Component_o *)this->fields.hpBarSliderUnder;
  if ( !hpBarSliderUnder )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject(hpBarSliderUnder, 0LL);
  v23 = TitleInfoSuperBossComponent_TypeInfo;
  v24 = gameObject;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v22);
    v23 = TitleInfoSuperBossComponent_TypeInfo;
  }
  hpBarSliderUnder = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                  v24,
                                                  v23->static_fields->ANIM_DURATION_HP_DELETION,
                                                  (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !hpBarSliderUnder )
    goto LABEL_23;
  v25 = hpBarSliderUnder;
  LODWORD(hpBarSliderUnder[1].monitor) = 1;
  hpBarSliderUnder[5].monitor = (void *)1065353216;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v25[3].monitor = v26;
  sub_1BCA784((PartyOrganizationUtility_o *)&v25[3].monitor, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  if ( this->fields.HPto <= 0.0 )
  {
    clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
    if ( UnityEngine_Object__op_Inequality(clearBossEffect, 0LL, 0LL) )
    {
      v43 = (Il2CppObject *)this->fields.clearBossEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
      v44 = UnityEngine_Object__Instantiate_object_(
              v43,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v44, (UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v44, 0LL);
    }
    v40 = &StringLiteral_12850/*"SetClearAlpha"*/;
  }
  else
  {
    v40 = &StringLiteral_10025/*"OnEndAnimation"*/;
  }
  v45 = *v40;
  *(_QWORD *)&v25[3].fields.m_CachedPtr = *v40;
  sub_1BCA784((PartyOrganizationUtility_o *)&v25[3].fields, v45, v34, v35, v36, v37, v38, v39);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_23;
  TitleInfoSuperBossComponent__PlaySeByEventId(
    (TitleInfoSuperBossComponent_o *)hpBarSliderUnder,
    eventSuperBossEntity->fields.eventId,
    0,
    v46);
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
  hpBarSliderUnder = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13525/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
  v50 = this->fields.eventSuperBossEntity;
  if ( !v50
    || (maxHp = v50->fields.maxHp,
        v52 = (System_String_o *)hpBarSliderUnder,
        (hpBarSliderUnder = (UnityEngine_Component_o *)EventSuperBossEntity__GetUserSuperBossEntity(v50, 0LL)) == 0LL)
    || (v54 = maxHp - (unsigned __int64)hpBarSliderUnder[1].monitor,
        v53 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v54),
        hpBarSliderUnder = (UnityEngine_Component_o *)System_String__Format(v52, v53, 0LL),
        !totalHpLabel) )
  {
LABEL_23:
    sub_1BCAA3C(hpBarSliderUnder, method);
  }
  UILabel__set_text(totalHpLabel, (System_String_o *)hpBarSliderUnder, 0LL);
}


void __fastcall TitleInfoSuperBossComponent__PlayHpNameAlpha(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Component_o *totalHpLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  TitleInfoSuperBossComponent_c *v11; // x8
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_Component_o *v13; // x20
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

  if ( (byte_4B14CFA & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoSuperBossComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenAlpha___, v4, v5);
    sub_1BCA7E0(&StringLiteral_10788/*"PlayHpCut"*/, v6, v7);
    byte_4B14CFA = 1;
  }
  totalHpLabel = (UnityEngine_Component_o *)this->fields.totalHpLabel;
  if ( !totalHpLabel )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(totalHpLabel, 0LL);
  v11 = TitleInfoSuperBossComponent_TypeInfo;
  v12 = gameObject;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v10);
    v11 = TitleInfoSuperBossComponent_TypeInfo;
  }
  totalHpLabel = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                              v12,
                                              v11->static_fields->ANIM_DURATION_HP_NAME_ALPHA,
                                              (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !totalHpLabel )
LABEL_8:
    sub_1BCAA3C(totalHpLabel, method);
  v13 = totalHpLabel;
  totalHpLabel[5].monitor = (void *)0x3F80000000000000LL;
  LODWORD(totalHpLabel[1].monitor) = 1;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v13[3].monitor = v14;
  sub_1BCA784((PartyOrganizationUtility_o *)&v13[3].monitor, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  v21 = StringLiteral_10788/*"PlayHpCut"*/;
  *(_QWORD *)&v13[3].fields.m_CachedPtr = StringLiteral_10788/*"PlayHpCut"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v13[3].fields, v21, v22, v23, v24, v25, v26, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoSuperBossComponent__PlaySeByEventId(
        TitleInfoSuperBossComponent_o *this,
        int32_t eventId,
        bool isPlay,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  __int64 *v20; // x20
  _QWORD *v21; // x0
  System_String_o *v22; // x20
  System_Reflection_MethodBase_o *v23; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B14D00 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId, isPlay);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_TitleInfoSuperBossComponent_PlaySeByEventId__, v10, v11);
    sub_1BCA7E0(&StringLiteral_17042/*"ar12"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17053/*"ar60"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    byte_4B14D00 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v19);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    eventId,
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( entity )
  {
    v20 = &StringLiteral_17053/*"ar60"*/;
    if ( !EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
    {
      if ( entity )
      {
        if ( !EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL) )
          v20 = &StringLiteral_17042/*"ar12"*/;
      }
      else
      {
        v20 = &StringLiteral_17042/*"ar12"*/;
      }
    }
  }
  else
  {
    v20 = &StringLiteral_17042/*"ar12"*/;
  }
  v21 = Method_TitleInfoSuperBossComponent_PlaySeByEventId__;
  v22 = (System_String_o *)*v20;
  if ( (*((_BYTE *)Method_TitleInfoSuperBossComponent_PlaySeByEventId__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1BCA7F8(Method_TitleInfoSuperBossComponent_PlaySeByEventId__);
  v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v21, v21[4]);
  if ( isPlay )
    OverwriteAssetSoundName__PlaySeLoop(v23, v22, 1.0, 0.0, 0LL);
  else
    OverwriteAssetSoundName__StopSe(v23, v22, 0.0, 0LL);
}


void __fastcall TitleInfoSuperBossComponent__SetBossIcon(
        TitleInfoSuperBossComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  UISprite_o *superBossIconSp; // x21
  struct UISprite_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4B14CF4 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, spName, method);
    byte_4B14CF4 = 1;
  }
  superBossIconSp = this->fields.superBossIconSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, spName);
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
    sub_1BCAA3C(v6, v7);
  }
}


void __fastcall TitleInfoSuperBossComponent__SetClearAlpha(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TitleInfoSuperBossComponent_c *v6; // x0

  if ( (byte_4B14CFD & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoSuperBossComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_5421/*"DoClearCallback"*/, v4, v5);
    byte_4B14CFD = 1;
  }
  this->fields.isEncountSuperBoss = 0;
  v6 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, method);
    v6 = TitleInfoSuperBossComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5421/*"DoClearCallback"*/,
    v6->static_fields->CLEAR_CALLBACK_DELAY,
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  EventSuperBossEntity_o *eventSuperBossEntity; // x0
  struct EventSuperBossEntity_o *v19; // x9
  __int64 maxHp; // x8
  double v21; // d1
  float v22; // s0
  float v23; // s2
  float v24; // s5
  float v25; // s3
  float v26; // s0
  float v27; // s2
  struct System_Int64_array *splitHp; // x9
  int max_length; // w11
  int32_t v30; // w10
  int64_t v31; // x12
  float v32; // s1
  UnityEngine_Transform_o *v33; // x21
  __int64 v34; // x1
  TitleInfoSuperBossComponent_c *v35; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float *static_fields; // x8
  __int64 v40; // x1
  UILabel_o *totalHpLabel; // x21
  struct EventSuperBossEntity_o *v42; // x8
  System_String_o *v43; // x22
  Il2CppObject *v44; // x0
  long double v45; // q0
  struct EventSuperBossEntity_o *v46; // x8
  struct System_Int64_array *v47; // x9
  struct UISprite_array *hpBarSplitPointList; // x10
  int v49; // w21
  il2cpp_array_size_t v50; // w22
  struct System_Int64_array *v51; // x8
  struct UISprite_array *v52; // x9
  int64_t v53; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B14CF7 & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, damage, onClearCallback);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&TitleInfoSuperBossComponent_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_13525/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v15, v16);
    byte_4B14CF7 = 1;
  }
  this->fields.onClearCall = onClearCallback;
  sub_1BCA784(
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
  v19 = this->fields.eventSuperBossEntity;
  if ( !v19 )
    goto LABEL_55;
  maxHp = eventSuperBossEntity->fields.maxHp;
  v21 = (double)v19->fields.maxHp;
  v22 = 1.0 - (double)damage / v21;
  v23 = 1.0 - (double)maxHp / v21;
  v24 = fminf(v22, 1.0);
  v25 = fminf(v23, 1.0);
  v26 = v22 < 0.0 ? 0.0 : v24;
  v27 = v23 < 0.0 ? 0.0 : v25;
  this->fields.HPfrom = v26;
  this->fields.HPto = v27;
  *(_QWORD *)&this->fields.HPsplitPoint = -1082130432LL;
  splitHp = v19->fields.splitHp;
  if ( !splitHp )
    goto LABEL_55;
  max_length = splitHp->max_length;
  if ( max_length >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      v31 = splitHp->m_Items[v30];
      if ( v31 > damage && v31 <= maxHp )
        break;
      if ( max_length == ++v30 )
        goto LABEL_20;
    }
    v32 = 1.0 - (double)v31 / v21;
    this->fields.HPsplitPoint = v32;
    this->fields.HPsplitNo = v30;
  }
LABEL_20:
  eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSlider;
  if ( !eventSuperBossEntity )
    goto LABEL_55;
  UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, v26, 0LL);
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
  v33 = (UnityEngine_Transform_o *)eventSuperBossEntity;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, 0LL);
  v35 = TitleInfoSuperBossComponent_TypeInfo;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v34);
    v35 = TitleInfoSuperBossComponent_TypeInfo;
  }
  static_fields = (float *)v35->static_fields;
  v55.fields.x = x + static_fields[6];
  v55.fields.y = y + static_fields[7];
  v55.fields.z = z + static_fields[8];
  UnityEngine_Transform__set_localPosition(v33, v55, 0LL);
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
  eventSuperBossEntity = (EventSuperBossEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13525/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
  v42 = this->fields.eventSuperBossEntity;
  if ( !v42 )
    goto LABEL_55;
  v43 = (System_String_o *)eventSuperBossEntity;
  v53 = v42->fields.maxHp - damage;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v53);
  eventSuperBossEntity = (EventSuperBossEntity_o *)System_String__Format(v43, v44, 0LL);
  if ( !totalHpLabel
    || (UILabel__set_text(totalHpLabel, (System_String_o *)eventSuperBossEntity, 0LL),
        (eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel) == 0LL)
    || (eventSuperBossEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, float))&eventSuperBossEntity->klass[1]._1.byval_arg.bits)(
                                                           eventSuperBossEntity,
                                                           eventSuperBossEntity->klass[1]._1.this_arg.data,
                                                           0.0),
        (v46 = this->fields.eventSuperBossEntity) == 0LL)
    || (v47 = v46->fields.splitHp) == 0LL )
  {
LABEL_55:
    sub_1BCAA3C(eventSuperBossEntity, v17);
  }
  hpBarSplitPointList = this->fields.hpBarSplitPointList;
  if ( hpBarSplitPointList )
  {
    v49 = v47->max_length;
    if ( v49 <= (signed int)hpBarSplitPointList->max_length && v49 >= 1 )
    {
      v50 = 0;
      while ( 1 )
      {
        v51 = v46->fields.splitHp;
        if ( !v51 )
          goto LABEL_55;
        if ( v50 >= v51->max_length )
          goto LABEL_57;
        v52 = this->fields.hpBarSplitPointList;
        if ( !v52 )
          goto LABEL_55;
        if ( v50 >= v52->max_length )
LABEL_57:
          sub_1BCAA44(eventSuperBossEntity, v17);
        eventSuperBossEntity = (EventSuperBossEntity_o *)v52->m_Items[v50];
        if ( !eventSuperBossEntity )
          goto LABEL_55;
        if ( v51->m_Items[v50] <= damage )
          *(float *)&v45 = 0.0;
        else
          *(float *)&v45 = 1.0;
        eventSuperBossEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, long double))&eventSuperBossEntity->klass[1]._1.byval_arg.bits)(
                                                           eventSuperBossEntity,
                                                           eventSuperBossEntity->klass[1]._1.this_arg.data,
                                                           v45);
        if ( v49 == ++v50 )
          return;
        v46 = this->fields.eventSuperBossEntity;
        if ( !v46 )
          goto LABEL_55;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoSuperBossComponent__SetDisp(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  EventSuperBossEntity_o *eventSuperBossEntity; // x0
  EventSuperBossEntity_o *v19; // x20
  struct EventSuperBossEntity_o *v20; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX; // x21
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  const MethodInfo *v24; // x2
  struct EventSuperBossEntity_o *v25; // x8
  struct System_Int64_array *splitHp; // x8
  int max_length; // w21
  struct UISprite_array **p_hpBarSplitterList; // x22
  char v29; // w27
  struct UISprite_array *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct UISprite_array *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  const MethodInfo *v44; // x3
  UnityEngine_Component_o *v45; // x24
  il2cpp_array_size_t i; // w29
  struct UISprite_array *hpBarSplitterList; // x25
  Il2CppObject *hpBarSplitter; // x26
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x26
  Il2CppClass **v56; // x0
  struct UISprite_array *v57; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *hpBarSplitPointList; // x26
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x25
  Il2CppClass **v67; // x0
  struct UISprite_array *v68; // x8
  UnityEngine_GameObject_o *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x26
  struct UISprite_array *v77; // x25
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x26
  struct EventSuperBossEntity_o *v85; // x8
  struct System_Int64_array *v86; // x9
  float HpSplitPositionX; // s0
  struct UISprite_array *v88; // x8
  float v89; // s8
  struct UISprite_array *v90; // x8
  long double v91; // q0
  struct EventSuperBossEntity_o *v92; // x8
  struct System_Int64_array *v93; // x8
  struct UISprite_array *v94; // x9
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  float v96; // s0
  float v97; // s1
  float v98; // s2
  float v99; // s3
  float v100; // s8
  float v101; // s9
  float v102; // s10
  float v103; // s11
  struct EventSuperBossEntity_o *v104; // x8
  __int64 maxHp; // x22
  __int64 v106; // x23
  UILabel_o *totalHpLabel; // x20
  System_String_o *v108; // x21
  Il2CppObject *v109; // x0
  float v110; // s0
  __int64 v111; // x0
  UnityEngine_Component_o *parent; // [xsp+0h] [xbp-90h]
  __int64 v113; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B14CF6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method, v2);
    sub_1BCA7E0(&long_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&TitleInfoSuperBossComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&UISprite___TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_13525/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v16, v17);
    byte_4B14CF6 = 1;
  }
  if ( this->fields.isEncountSuperBoss || this->fields._IsShowClearEvent_k__BackingField )
  {
    eventSuperBossEntity = this->fields.eventSuperBossEntity;
    if ( eventSuperBossEntity )
    {
      eventSuperBossEntity = (EventSuperBossEntity_o *)EventSuperBossEntity__GetUserSuperBossEntity(
                                                         eventSuperBossEntity,
                                                         0LL);
      v19 = eventSuperBossEntity;
      if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, method);
      v20 = this->fields.eventSuperBossEntity;
      if ( v20 )
      {
        SUPERBOSS_ICON_SPNAME_PREFIX = TitleInfoSuperBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
        v22 = System_Int32__ToString((int)v20 + 56, 0LL);
        v23 = System_String__Concat_62401220(SUPERBOSS_ICON_SPNAME_PREFIX, v22, 0LL);
        TitleInfoSuperBossComponent__SetBossIcon(this, v23, v24);
        v25 = this->fields.eventSuperBossEntity;
        if ( v25 )
        {
          splitHp = v25->fields.splitHp;
          if ( splitHp )
          {
            max_length = splitHp->max_length;
            if ( max_length >= 1 )
            {
              p_hpBarSplitterList = &this->fields.hpBarSplitterList;
              if ( this->fields.hpBarSplitterList && this->fields.hpBarSplitPointList )
              {
                v29 = 1;
              }
              else
              {
                v30 = (struct UISprite_array *)sub_1BCA888(UISprite___TypeInfo, (unsigned int)max_length);
                this->fields.hpBarSplitterList = v30;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&this->fields.hpBarSplitterList,
                  (int64_t)v30,
                  v31,
                  v32,
                  v33,
                  v34,
                  v35,
                  v36);
                v37 = (struct UISprite_array *)sub_1BCA888(UISprite___TypeInfo, (unsigned int)max_length);
                this->fields.hpBarSplitPointList = v37;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&this->fields.hpBarSplitPointList,
                  (int64_t)v37,
                  v38,
                  v39,
                  v40,
                  v41,
                  v42,
                  v43);
                v29 = 0;
              }
              parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.hpBarSplitter, 0LL);
              eventSuperBossEntity = (EventSuperBossEntity_o *)GameObjectExtensions__GetParent(
                                                                 this->fields.hpBarSplitPoint,
                                                                 0LL);
              v45 = (UnityEngine_Component_o *)eventSuperBossEntity;
              for ( i = 0; max_length != i; ++i )
              {
                if ( (v29 & 1) == 0 )
                {
                  hpBarSplitterList = this->fields.hpBarSplitterList;
                  hpBarSplitter = (Il2CppObject *)this->fields.hpBarSplitter;
                  if ( i )
                  {
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Object__Instantiate_object_(
                                                                       hpBarSplitter,
                                                                       (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitterList )
                      goto LABEL_95;
                    v55 = (int64_t)eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1BCA91C(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitterList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( i >= hpBarSplitterList->max_length )
                      goto LABEL_96;
                    v56 = &hpBarSplitterList->obj.klass + (int)i;
                    v56[4] = (Il2CppClass *)v55;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 4), v55, v49, v50, v51, v52, v53, v54);
                    v57 = *p_hpBarSplitterList;
                    if ( !*p_hpBarSplitterList )
                      goto LABEL_95;
                    if ( i >= v57->max_length )
                      goto LABEL_96;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)v57->m_Items[i];
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    gameObject = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                   0LL);
                    GameObjectExtensions__SafeSetParent(gameObject, parent, 0LL);
                    hpBarSplitPointList = this->fields.hpBarSplitPointList;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Object__Instantiate_object_(
                                                                       (Il2CppObject *)this->fields.hpBarSplitPoint,
                                                                       (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitPointList )
                      goto LABEL_95;
                    v66 = (int64_t)eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1BCA91C(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitPointList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( i >= hpBarSplitPointList->max_length )
                      goto LABEL_96;
                    v67 = &hpBarSplitPointList->obj.klass + (int)i;
                    v67[4] = (Il2CppClass *)v66;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v67 + 4), v66, v60, v61, v62, v63, v64, v65);
                    v68 = this->fields.hpBarSplitPointList;
                    if ( !v68 )
                      goto LABEL_95;
                    if ( i >= v68->max_length )
                      goto LABEL_96;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)v68->m_Items[i];
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventSuperBossEntity, 0LL);
                    GameObjectExtensions__SafeSetParent(v69, v45, 0LL);
                  }
                  else
                  {
                    if ( !hpBarSplitter )
                      goto LABEL_95;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       this->fields.hpBarSplitter,
                                                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitterList )
                      goto LABEL_95;
                    v76 = (int64_t)eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1BCA91C(
                                                                         eventSuperBossEntity,
                                                                         hpBarSplitterList->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                      {
LABEL_97:
                        v111 = sub_1BCAA60(eventSuperBossEntity);
                        sub_1BCA908(v111, 0LL);
                      }
                    }
                    if ( !hpBarSplitterList->max_length )
                      goto LABEL_96;
                    hpBarSplitterList->m_Items[0] = (UISprite_o *)v76;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)hpBarSplitterList->m_Items,
                      v76,
                      v70,
                      v71,
                      v72,
                      v73,
                      v74,
                      v75);
                    eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSplitPoint;
                    if ( !eventSuperBossEntity )
                      goto LABEL_95;
                    v77 = this->fields.hpBarSplitPointList;
                    eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)eventSuperBossEntity,
                                                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !v77 )
                      goto LABEL_95;
                    v84 = (int64_t)eventSuperBossEntity;
                    if ( eventSuperBossEntity )
                    {
                      eventSuperBossEntity = (EventSuperBossEntity_o *)sub_1BCA91C(
                                                                         eventSuperBossEntity,
                                                                         v77->obj.klass->_1.element_class);
                      if ( !eventSuperBossEntity )
                        goto LABEL_97;
                    }
                    if ( !v77->max_length )
                      goto LABEL_96;
                    v77->m_Items[0] = (UISprite_o *)v84;
                    sub_1BCA784((PartyOrganizationUtility_o *)v77->m_Items, v84, v78, v79, v80, v81, v82, v83);
                  }
                }
                v85 = this->fields.eventSuperBossEntity;
                if ( !v85 )
                  goto LABEL_95;
                v86 = v85->fields.splitHp;
                if ( !v86 )
                  goto LABEL_95;
                if ( i >= v86->max_length )
                  goto LABEL_96;
                HpSplitPositionX = TitleInfoSuperBossComponent__GetHpSplitPositionX(
                                     (TitleInfoSuperBossComponent_o *)eventSuperBossEntity,
                                     v86->m_Items[i],
                                     v85->fields.maxHp,
                                     v44);
                v88 = *p_hpBarSplitterList;
                if ( !*p_hpBarSplitterList )
                  goto LABEL_95;
                if ( i >= v88->max_length )
                  goto LABEL_96;
                eventSuperBossEntity = (EventSuperBossEntity_o *)v88->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v89 = HpSplitPositionX;
                eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                   0LL);
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v114.fields.y = 0.0;
                v114.fields.z = 0.0;
                v114.fields.x = v89;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, v114, 0LL);
                v90 = this->fields.hpBarSplitPointList;
                if ( !v90 )
                  goto LABEL_95;
                if ( i >= v90->max_length )
                  goto LABEL_96;
                eventSuperBossEntity = (EventSuperBossEntity_o *)v90->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                eventSuperBossEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)eventSuperBossEntity,
                                                                   0LL);
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                v115.fields.y = 0.0;
                v115.fields.z = 0.0;
                v115.fields.x = v89;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventSuperBossEntity, v115, 0LL);
                v92 = this->fields.eventSuperBossEntity;
                if ( !v92 )
                  goto LABEL_95;
                v93 = v92->fields.splitHp;
                if ( !v93 )
                  goto LABEL_95;
                if ( i >= v93->max_length )
                  goto LABEL_96;
                if ( !v19 )
                  goto LABEL_95;
                v94 = this->fields.hpBarSplitPointList;
                if ( !v94 )
                  goto LABEL_95;
                if ( i >= v94->max_length )
LABEL_96:
                  sub_1BCAA44(eventSuperBossEntity, method);
                eventSuperBossEntity = (EventSuperBossEntity_o *)v94->m_Items[i];
                if ( !eventSuperBossEntity )
                  goto LABEL_95;
                if ( v93->m_Items[i] <= v19->fields.maxHp )
                  *(float *)&v91 = 0.0;
                else
                  *(float *)&v91 = 1.0;
                eventSuperBossEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, long double))&eventSuperBossEntity->klass[1]._1.byval_arg.bits)(
                                                                   eventSuperBossEntity,
                                                                   eventSuperBossEntity->klass[1]._1.this_arg.data,
                                                                   v91);
              }
            }
            eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
            if ( eventBossStatusUiEntity )
            {
              v116.fields.r = 0.0;
              v116.fields.g = 0.0;
              v116.fields.b = 0.0;
              v116.fields.a = 0.0;
              *(UnityEngine_Color_o *)&v96 = EventBossStatusUiEntity__GetTextEffectColor(
                                               eventBossStatusUiEntity,
                                               v116,
                                               0LL);
            }
            else
            {
              eventSuperBossEntity = this->fields.eventSuperBossEntity;
              if ( !eventSuperBossEntity )
                goto LABEL_95;
              *(UnityEngine_Color_o *)&v96 = EventSuperBossEntity__GetBossColor(eventSuperBossEntity, 0LL);
            }
            eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderWhite;
            v100 = v96;
            v101 = v97;
            v102 = v98;
            v103 = v99;
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
                    v104 = this->fields.eventSuperBossEntity;
                    if ( v104 )
                    {
                      if ( v19 )
                      {
                        maxHp = v104->fields.maxHp;
                        eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel;
                        v106 = v19->fields.maxHp >= maxHp ? v104->fields.maxHp : v19->fields.maxHp;
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
                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
                              v108 = LocalizationManager__Get((System_String_o *)StringLiteral_13525/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
                              v113 = maxHp - v106;
                              v109 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v113);
                              eventSuperBossEntity = (EventSuperBossEntity_o *)System_String__Format(v108, v109, 0LL);
                              if ( !totalHpLabel )
                                goto LABEL_95;
                              UILabel__set_text(totalHpLabel, (System_String_o *)eventSuperBossEntity, 0LL);
                            }
                            eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel;
                            if ( eventSuperBossEntity )
                            {
                              v117.fields.r = v100;
                              v117.fields.g = v101;
                              v117.fields.b = v102;
                              v117.fields.a = v103;
                              UILabel__set_effectColor((UILabel_o *)eventSuperBossEntity, v117, 0LL);
                              eventSuperBossEntity = (EventSuperBossEntity_o *)this->fields.hpBarSlider;
                              if ( eventSuperBossEntity )
                              {
                                v110 = 1.0 - (double)v106 / (double)maxHp;
                                UIProgressBar__set_value((UIProgressBar_o *)eventSuperBossEntity, v110, 0LL);
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
    sub_1BCAA3C(eventSuperBossEntity, method);
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
  __int64 v9; // x2
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x21
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = gaugeId;
  if ( (byte_4B14CF5 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, sprite, prefix);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v8, v9);
    byte_4B14CF5 = 1;
  }
  if ( (gaugeId & 0x80000000) != 0 )
    goto LABEL_12;
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  v12 = System_String__Concat_62412480(prefix, (System_String_o *)StringLiteral_16290/*"_"*/, v10, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11);
  if ( !AtlasManager__SetEventUI(sprite, v12, 0LL) )
  {
LABEL_12:
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  struct EventSuperBossEntity_o **p_eventSuperBossEntity; // x21
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  Il2CppObject *Instance; // x0
  __int64 v29; // x1
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  int32_t GaugeId; // w20
  _BOOL8 IsEncounted; // x0
  const MethodInfo *v40; // x4
  TitleInfoSuperBossComponent_o *v41; // x0
  const MethodInfo *v42; // x4
  TitleInfoSuperBossComponent_o *v43; // x0
  const MethodInfo *v44; // x4
  TitleInfoSuperBossComponent_o *v45; // x0
  const MethodInfo *v46; // x4
  TitleInfoSuperBossComponent_o *v47; // x0
  const MethodInfo *v48; // x4
  TitleInfoSuperBossComponent_o *v49; // x0
  const MethodInfo *v50; // x4
  TitleInfoSuperBossComponent_o *v51; // x0
  const MethodInfo *v52; // x4
  const MethodInfo *v53; // x1

  if ( (byte_4B14CF3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, superBossEntity, termAtlas);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_19462/*"event_superboss_hp_split"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_19466/*"event_superboss_hp_white"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_19419/*"event_raid_hp_back"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_19463/*"event_superboss_hp_split_frame"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_19460/*"event_superboss_hp_lower"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_19420/*"event_raid_hp_frame"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_19464/*"event_superboss_hp_upper"*/, v24, v25);
    byte_4B14CF3 = 1;
  }
  this->fields.eventSuperBossEntity = superBossEntity;
  p_eventSuperBossEntity = &this->fields.eventSuperBossEntity;
  sub_1BCA784(
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___),
          !*p_eventSuperBossEntity)
      || !Instance
      || ((EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                         (EventBossStatusUiMaster_o *)Instance,
                                         (*p_eventSuperBossEntity)->fields.eventId,
                                         (*p_eventSuperBossEntity)->fields.id,
                                         0LL),
           this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex,
           sub_1BCA784(
             (PartyOrganizationUtility_o *)&this->fields.eventBossStatusUiEntity,
             (int64_t)EntityFromEventIdAndIndex,
             v31,
             v32,
             v33,
             v34,
             v35,
             v36),
           (eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity) == 0LL)
        ? (GaugeId = -1)
        : (GaugeId = EventBossStatusUiEntity__GetGaugeId(eventBossStatusUiEntity, 0LL)),
          (Instance = (Il2CppObject *)*p_eventSuperBossEntity) == 0LL) )
    {
      sub_1BCAA3C(Instance, v29);
    }
    IsEncounted = EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)Instance, 0LL);
    this->fields.isEncountSuperBoss = IsEncounted;
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      (TitleInfoSuperBossComponent_o *)IsEncounted,
      this->fields.hpBarUnderSprite,
      (System_String_o *)StringLiteral_19460/*"event_superboss_hp_lower"*/,
      GaugeId,
      v40);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v41,
      this->fields.hpBarUpperSprite,
      (System_String_o *)StringLiteral_19464/*"event_superboss_hp_upper"*/,
      GaugeId,
      v42);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v43,
      this->fields.hpBarWhiteSprite,
      (System_String_o *)StringLiteral_19466/*"event_superboss_hp_white"*/,
      GaugeId,
      v44);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v45,
      this->fields.hpSplitSprite,
      (System_String_o *)StringLiteral_19463/*"event_superboss_hp_split_frame"*/,
      GaugeId,
      v46);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v47,
      this->fields.hpSplitPointSprite,
      (System_String_o *)StringLiteral_19462/*"event_superboss_hp_split"*/,
      GaugeId,
      v48);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v49,
      this->fields.superBossHpFrame,
      (System_String_o *)StringLiteral_19420/*"event_raid_hp_frame"*/,
      GaugeId,
      v50);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v51,
      this->fields.superBossHpBg,
      (System_String_o *)StringLiteral_19419/*"event_raid_hp_back"*/,
      GaugeId,
      v52);
    TitleInfoSuperBossComponent__SetDisp(this, v53);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  System_String_o *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  TitleInfoSuperBossComponent_c *v22; // x0
  Il2CppObject *Object_object__49237568; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  UnityEngine_Object_o *splitHpEffect; // x23
  __int64 v32; // x1
  TitleInfoSuperBossComponent_c *v33; // x0
  Il2CppObject *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  TitleInfoSuperBossComponent_c *v41; // x0
  System_String_o *v42; // x0
  Il2CppObject *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x1
  UnityEngine_Object_o *clearBossEffect; // x22
  const MethodInfo *v52; // x1
  TitleInfoSuperBossComponent_c *v53; // x0
  Il2CppObject *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7

  v6 = this;
  if ( (byte_4B14CF8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, mapAssetData, callBack);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&TitleInfoSuperBossComponent_TypeInfo, v9, v10);
    this = (TitleInfoSuperBossComponent_o *)sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v11, v12);
    byte_4B14CF8 = 1;
  }
  eventSuperBossEntity = v6->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_22;
  v14 = System_Int32__ToString((int)eventSuperBossEntity + 16, 0LL);
  v6->fields.animEndCall = callBack;
  sub_1BCA784((PartyOrganizationUtility_o *)&v6->fields.animEndCall, (int64_t)callBack, v15, v16, v17, v18, v19, v20);
  v22 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v21);
    v22 = TitleInfoSuperBossComponent_TypeInfo;
  }
  this = (TitleInfoSuperBossComponent_o *)System_String__Concat_62412480(
                                            v22->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
                                            (System_String_o *)StringLiteral_16290/*"_"*/,
                                            v14,
                                            0LL);
  if ( !mapAssetData )
LABEL_22:
    sub_1BCAA3C(this, mapAssetData);
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              mapAssetData,
                              (System_String_o *)this,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  v6->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)Object_object__49237568;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v6->fields.splitHpEffect,
    (int64_t)Object_object__49237568,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  splitHpEffect = (UnityEngine_Object_o *)v6->fields.splitHpEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  if ( UnityEngine_Object__op_Equality(splitHpEffect, 0LL, 0LL) )
  {
    v33 = TitleInfoSuperBossComponent_TypeInfo;
    if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v32);
      v33 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v34 = AssetData__GetObject_object__49237568(
            mapAssetData,
            v33->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
            (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    v6->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)v34;
    sub_1BCA784((PartyOrganizationUtility_o *)&v6->fields.splitHpEffect, (int64_t)v34, v35, v36, v37, v38, v39, v40);
  }
  v41 = TitleInfoSuperBossComponent_TypeInfo;
  if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v32);
    v41 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v42 = System_String__Concat_62412480(
          v41->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_16290/*"_"*/,
          v14,
          0LL);
  v43 = AssetData__GetObject_object__49237568(
          mapAssetData,
          v42,
          (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)v43;
  sub_1BCA784((PartyOrganizationUtility_o *)&v6->fields.clearBossEffect, (int64_t)v43, v44, v45, v46, v47, v48, v49);
  clearBossEffect = (UnityEngine_Object_o *)v6->fields.clearBossEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
  if ( UnityEngine_Object__op_Equality(clearBossEffect, 0LL, 0LL) )
  {
    v53 = TitleInfoSuperBossComponent_TypeInfo;
    if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v52);
      v53 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v54 = AssetData__GetObject_object__49237568(
            mapAssetData,
            v53->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
            (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)v54;
    sub_1BCA784((PartyOrganizationUtility_o *)&v6->fields.clearBossEffect, (int64_t)v54, v55, v56, v57, v58, v59, v60);
  }
  TitleInfoSuperBossComponent__PlayFrameInBoss(v6, v52);
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
  __int64 v2; // x2
  TitleInfoSuperBossComponent___c__DisplayClass58_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct EasingObject_o *eo; // x9
  struct TitleInfoSuperBossComponent_o *_4__this; // x8
  float mNow; // s9
  float v19; // s0
  float v20; // s8
  struct TitleInfoSuperBossComponent_o *v21; // x8
  struct TitleInfoSuperBossComponent_o *v22; // x8
  UIProgressBar_o *hpBarSliderWhite; // x20
  float v24; // s0
  struct TitleInfoSuperBossComponent_o *v25; // x8
  UILabel_o *totalHpLabel; // x20
  struct TitleInfoSuperBossComponent_o *v27; // x8
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  TitleInfoSuperBossComponent___c__DisplayClass58_0_o *v29; // x21
  Il2CppObject *v30; // x0
  struct TitleInfoSuperBossComponent_o *v31; // x8
  float HPsplitPoint; // s0
  UnityEngine_Object_o *splitHpEffect; // x20
  struct TitleInfoSuperBossComponent_o *v34; // x8
  Il2CppObject *v35; // x20
  struct TitleInfoSuperBossComponent_o *v36; // x8
  TitleInfoSuperBossComponent___c__DisplayClass58_0_o *v37; // x20
  UnityEngine_Component_o *Parent; // x0
  struct TitleInfoSuperBossComponent_o *v39; // x9
  struct UISprite_array *hpBarSplitterList; // x8
  __int64 HPsplitNo; // x9
  __int64 v42; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  TitleInfoSuperBossComponent_c *v46; // x0
  float *static_fields; // x8
  struct TitleInfoSuperBossComponent_o *v48; // x9
  struct UISprite_array *hpBarSplitPointList; // x8
  __int64 v50; // x9
  __int64 v51; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v53; // x8
  struct TitleInfoSuperBossComponent_o *v54; // x8
  double v55; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B14D02 & 1) == 0 )
  {
    sub_1BCA7E0(&double_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&TitleInfoSuperBossComponent_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenAlpha___, v12, v13);
    this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)sub_1BCA7E0(&StringLiteral_13525/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v14, v15);
    byte_4B14D02 = 1;
  }
  eo = v3->fields.eo;
  if ( !eo )
    goto LABEL_46;
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  mNow = eo->fields.mNow;
  this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)_4__this->fields.hpBarSlider;
  v19 = fminf(mNow, 1.0);
  if ( mNow < 0.0 )
    v19 = 0.0;
  if ( !this )
    goto LABEL_46;
  v20 = _4__this->fields.HPfrom + (float)(v19 * (float)(_4__this->fields.HPto - _4__this->fields.HPfrom));
  UIProgressBar__set_value((UIProgressBar_o *)this, v20, 0LL);
  v21 = v3->fields.__4__this;
  if ( !v21 )
    goto LABEL_46;
  this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)v21->fields.hpBarSliderWhite;
  if ( !this )
    goto LABEL_46;
  UIProgressBar__set_value((UIProgressBar_o *)this, v20, 0LL);
  v22 = v3->fields.__4__this;
  if ( !v22 )
    goto LABEL_46;
  hpBarSliderWhite = (UIProgressBar_o *)v22->fields.hpBarSliderWhite;
  if ( !hpBarSliderWhite )
    goto LABEL_46;
  v24 = sinf(mNow * 3.1416);
  UIProgressBar__set_alpha(hpBarSliderWhite, v24 * 0.7, 0LL);
  v25 = v3->fields.__4__this;
  if ( !v25 )
    goto LABEL_46;
  totalHpLabel = v25->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_13525/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/,
                                                                  0LL);
  v27 = v3->fields.__4__this;
  if ( !v27 )
    goto LABEL_46;
  eventSuperBossEntity = v27->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_46;
  v29 = this;
  v55 = (float)(v20 * (float)eventSuperBossEntity->fields.maxHp);
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v55);
  this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)System_String__Format((System_String_o *)v29, v30, 0LL);
  if ( !totalHpLabel )
    goto LABEL_46;
  UILabel__set_text(totalHpLabel, (System_String_o *)this, 0LL);
  v31 = v3->fields.__4__this;
  if ( !v31 )
    goto LABEL_46;
  HPsplitPoint = v31->fields.HPsplitPoint;
  if ( HPsplitPoint > -1.0 && v20 <= HPsplitPoint )
  {
    splitHpEffect = (UnityEngine_Object_o *)v31->fields.splitHpEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UnityEngine_Object__op_Implicit(splitHpEffect, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v34 = v3->fields.__4__this;
      if ( !v34 )
        goto LABEL_46;
      v35 = (Il2CppObject *)v34->fields.splitHpEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                      v35,
                                                                      (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v36 = v3->fields.__4__this;
      if ( !v36 )
        goto LABEL_46;
      v37 = this;
      Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v36->fields.hpBarSplitter, 0LL);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v37, Parent, 0LL);
      v39 = v3->fields.__4__this;
      if ( !v39 )
        goto LABEL_46;
      hpBarSplitterList = v39->fields.hpBarSplitterList;
      if ( !hpBarSplitterList )
        goto LABEL_46;
      HPsplitNo = v39->fields.HPsplitNo;
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
      v46 = TitleInfoSuperBossComponent_TypeInfo;
      if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v42);
        v46 = TitleInfoSuperBossComponent_TypeInfo;
      }
      static_fields = (float *)v46->static_fields;
      v57.fields.x = x + static_fields[9];
      v57.fields.y = y + static_fields[10];
      v57.fields.z = z + static_fields[11];
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v37, v57, 0LL);
    }
    v48 = v3->fields.__4__this;
    if ( !v48 )
      goto LABEL_46;
    hpBarSplitPointList = v48->fields.hpBarSplitPointList;
    if ( !hpBarSplitPointList )
      goto LABEL_46;
    v50 = v48->fields.HPsplitNo;
    if ( (unsigned int)v50 < hpBarSplitPointList->max_length )
    {
      this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)hpBarSplitPointList->m_Items[v50];
      if ( this )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v53 = TitleInfoSuperBossComponent_TypeInfo;
        if ( !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo, v51);
          v53 = TitleInfoSuperBossComponent_TypeInfo;
        }
        this = (TitleInfoSuperBossComponent___c__DisplayClass58_0_o *)UITweener__Begin_object_(
                                                                        gameObject,
                                                                        v53->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                                        (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenAlpha___);
        if ( this )
        {
          LODWORD(this[1].klass) = 2;
          this[4].klass = (TitleInfoSuperBossComponent___c__DisplayClass58_0_c *)1065353216;
          v54 = v3->fields.__4__this;
          if ( v54 )
          {
            *(_QWORD *)&v54->fields.HPsplitPoint = -1082130432LL;
            return;
          }
        }
      }
LABEL_46:
      sub_1BCAA3C(this, method);
    }
LABEL_47:
    sub_1BCAA44(this, method);
  }
}