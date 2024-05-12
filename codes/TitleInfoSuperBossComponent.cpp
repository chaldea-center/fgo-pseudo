void __fastcall TitleInfoSuperBossComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct TitleInfoSuperBossComponent_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct TitleInfoSuperBossComponent_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  TitleInfoSuperBossComponent_c *v25; // x8
  struct TitleInfoSuperBossComponent_StaticFields *v26; // x9
  struct TitleInfoSuperBossComponent_StaticFields *v27; // x9

  if ( (byte_43891AD & 1) == 0 )
  {
    sub_B775C4(&TitleInfoSuperBossComponent_TypeInfo);
    sub_B775C4(&StringLiteral_14717/*"TitleInfoEventSuperBossEffect_Dead"*/);
    sub_B775C4(&StringLiteral_14718/*"TitleInfoEventSuperBossEffect_Split"*/);
    sub_B775C4(&StringLiteral_18967/*"event_superboss_icon_"*/);
    byte_43891AD = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_18967/*"event_superboss_icon_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18967/*"event_superboss_icon_"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_14718/*"TitleInfoEventSuperBossEffect_Split"*/;
  v9->SUPERBOSS_SPLIT_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14718/*"TitleInfoEventSuperBossEffect_Split"*/;
  sub_B77560((BattleServantConfConponent_o *)&v9->SUPERBOSS_SPLIT_EFFECT_PREFAB, v10, v11, v12, v13, v14, v15, v16);
  v17 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_14717/*"TitleInfoEventSuperBossEffect_Dead"*/;
  v17->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14717/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_B77560((BattleServantConfConponent_o *)&v17->SUPERBOSS_CLEAR_EFFECT_PREFAB, v18, v19, v20, v21, v22, v23, v24);
  v25 = TitleInfoSuperBossComponent_TypeInfo;
  v26 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v26->SUPERBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v26->SUPERBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v27 = v25->static_fields;
  *(_QWORD *)&v27->SUPERBOSS_SPLIT_POS_DELTA.fields.x = 0x41200000BF000000LL;
  v27->SUPERBOSS_SPLIT_POS_DELTA.fields.z = 0.0;
  v25->static_fields->SUPERBOSS_HP_BAR_LENGTH = 264;
  v25->static_fields->ANIM_DURATION_FRAME_IN_BOSS = 0.3;
  v25->static_fields->ANIM_DURATION_HP_NAME_ALPHA = 0.4;
  v25->static_fields->ANIM_DURATION_HP_CUT = 1.2;
  v25->static_fields->ANIM_DURATION_SPLIT_ALPHA = 0.5;
  v25->static_fields->ANIM_DURATION_HP_DELETION = 0.7;
  v25->static_fields->ANIM_DURATION_BOSS_ALPHA = 2.5;
  v25->static_fields->CLEAR_CALLBACK_DELAY = 1.8;
  v25->static_fields->CLEAR_END_CALLBACK_DELAY = 1.5;
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


void __fastcall TitleInfoSuperBossComponent__DisableCheckTutorial(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  BYTE1(this->fields.HPto) = 0;
}


void __fastcall TitleInfoSuperBossComponent__DoClearCallback(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *splitHpEffect; // x21
  __int64 v10; // x1
  UnityEngine_Component_o *superBossHpFrame; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v13; // x8

  if ( (byte_43891AA & 1) == 0 )
  {
    sub_B775C4(&TitleInfoSuperBossComponent_TypeInfo);
    sub_B775C4(&Method_UITweener_Begin_TweenAlpha___);
    sub_B775C4(&StringLiteral_10178/*"OnEndAnimation"*/);
    byte_43891AA = 1;
  }
  splitHpEffect = (System_Action_o *)this->fields.splitHpEffect;
  this->fields.splitHpEffect = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.splitHpEffect, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(splitHpEffect, 0LL);
  superBossHpFrame = (UnityEngine_Component_o *)this->fields.superBossHpFrame;
  if ( !superBossHpFrame )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(superBossHpFrame, 0LL);
  v13 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v13 = TitleInfoSuperBossComponent_TypeInfo;
  }
  superBossHpFrame = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                                  gameObject,
                                                  v13->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                  (const MethodInfo_1E05754 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !superBossHpFrame )
LABEL_9:
    sub_B7769C(superBossHpFrame, v10);
  LODWORD(superBossHpFrame[1].klass) = 1;
  superBossHpFrame[5].klass = (UnityEngine_Component_c *)1065353216;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10178/*"OnEndAnimation"*/,
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
  float v7; // s8

  if ( (byte_43891AB & 1) == 0 )
  {
    sub_B775C4(&TitleInfoSuperBossComponent_TypeInfo);
    byte_43891AB = 1;
  }
  v6 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v6 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v7 = (double)splitHp / (double)maxHp;
  return -(float)(v7 * (float)v6->static_fields->SUPERBOSS_HP_BAR_LENGTH);
}


bool __fastcall TitleInfoSuperBossComponent__IsAlive(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0

  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  return eventBossStatusUiEntity
      && !EventSuperBossEntity__IsCleard((EventSuperBossEntity_o *)eventBossStatusUiEntity, 0LL);
}


bool __fastcall TitleInfoSuperBossComponent__IsDispPossible(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  return LOBYTE(this[1].klass) || LOBYTE(this->fields.HPto) != 0;
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_onClearCall; // x0
  System_Action_o *onClearCall; // t1
  const MethodInfo *v11; // x1

  onClearCall = this->fields.onClearCall;
  p_onClearCall = (BattleServantConfConponent_o *)&this->fields.onClearCall;
  p_onClearCall->klass = 0LL;
  sub_B77560(p_onClearCall, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(onClearCall, 0LL);
  TitleInfoSuperBossComponent__SetDisp(this, v11);
}


void __fastcall TitleInfoSuperBossComponent__PlayFrameInBoss(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v4; // x8
  TweenWidth_o *v5; // x0
  __int64 v6; // x1
  TweenWidth_o *v7; // x20
  float32x2_t *static_fields; // x8
  float v9; // s1
  int animEndCall_high; // w9
  System_Int32_array **v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_43891A5 & 1) == 0 )
  {
    sub_B775C4(&TitleInfoSuperBossComponent_TypeInfo);
    sub_B775C4(&Method_UITweener_Begin_TweenPosition___);
    sub_B775C4(&StringLiteral_10885/*"PlayHpNameAlpha"*/);
    byte_43891A5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v4 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v4 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v5 = UITweener__Begin_TweenWidth_(
         gameObject,
         v4->static_fields->ANIM_DURATION_FRAME_IN_BOSS,
         (const MethodInfo_1E05754 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v5 )
    sub_B7769C(0LL, v6);
  v7 = v5;
  static_fields = (float32x2_t *)TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v9 = *((float *)&this->fields.animEndCall + 1) + static_fields[4].n64_f32[0];
  *(float32x2_t *)&v5->fields.from = vadd_f32(*(float32x2_t *)&this->fields.originPos.fields.z, static_fields[3]);
  *(float *)&v5->fields.updateTable = v9;
  animEndCall_high = HIDWORD(this->fields.animEndCall);
  *(_QWORD *)(&v5->fields.updateTable + 4) = *(_QWORD *)&this->fields.originPos.fields.z;
  HIDWORD(v5->fields.mWidget) = animEndCall_high;
  v5->fields.style = 2;
  v11 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v11;
  sub_B77560((BattleServantConfConponent_o *)&v7->fields.eventReceiver, v11, v12, v13, v14, v15, v16, v17);
  v18 = (System_Int32_array **)StringLiteral_10885/*"PlayHpNameAlpha"*/;
  v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10885/*"PlayHpNameAlpha"*/;
  sub_B77560((BattleServantConfConponent_o *)&v7->fields.callWhenFinished, v18, v19, v20, v21, v22, v23, v24);
}


void __fastcall TitleInfoSuperBossComponent__PlayHpCut(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  TitleInfoSuperBossComponent_o *v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x3
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  EasingObject_o *v22; // x21
  TitleInfoSuperBossComponent_c *v23; // x0
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v25; // x22
  System_Action_o *v26; // x20

  if ( (byte_43891A7 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B775C4(&Method_TitleInfoSuperBossComponent_PlayHpDeletion__);
    sub_B775C4(&TitleInfoSuperBossComponent_TypeInfo);
    sub_B775C4(&Method_TitleInfoSuperBossComponent___c__DisplayClass62_0__PlayHpCut_b__0__);
    sub_B775C4(&TitleInfoSuperBossComponent___c__DisplayClass62_0_TypeInfo);
    byte_43891A7 = 1;
  }
  v3 = sub_B77694(TitleInfoSuperBossComponent___c__DisplayClass62_0_TypeInfo);
  TitleInfoSuperBossComponent___c__DisplayClass62_0___ctor(
    (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    goto LABEL_10;
  TitleInfoSuperBossComponent__PlaySeByEventId(v4, eventBossStatusUiEntity->fields.eventId, 1, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v3 + 16) = Component_UIWidget;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 16), Component_UIWidget, v16, v17, v18, v19, v20, v21);
  v22 = *(EasingObject_o **)(v3 + 16);
  v23 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v23 = TitleInfoSuperBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v23->static_fields->ANIM_DURATION_HP_CUT;
  v25 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v3,
    Method_TitleInfoSuperBossComponent___c__DisplayClass62_0__PlayHpCut_b__0__,
    0LL);
  v26 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_TitleInfoSuperBossComponent_PlayHpDeletion__, 0LL);
  if ( !v22 )
LABEL_10:
    sub_B7769C(v4, v5);
  EasingObject__Play(v22, ANIM_DURATION_HP_CUT, v25, v26, 0.0, 0, 0LL);
}


void __fastcall TitleInfoSuperBossComponent__PlayHpDeletion(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *hpBarSliderWhite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v5; // x8
  UnityEngine_Component_o *v6; // x20
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 *v20; // x8
  UnityEngine_Object_o *v21; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v22; // x21
  UnityEngine_GameObject_o *v23; // x21
  System_Int32_array **v24; // x1
  const MethodInfo *v25; // x3
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  UILabel_o *hpBarUnderSprite; // x20
  EventSuperBossEntity_o *v28; // x8
  int64_t maxHp; // x21
  System_String_o *v30; // x19
  __int64 v31; // x2
  Il2CppObject *v32; // x0
  unsigned __int64 v33; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_43891A8 & 1) == 0 )
  {
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&TitleInfoSuperBossComponent_TypeInfo);
    sub_B775C4(&Method_UITweener_Begin_TweenAlpha___);
    sub_B775C4(&StringLiteral_10178/*"OnEndAnimation"*/);
    sub_B775C4(&StringLiteral_13038/*"SetClearAlpha"*/);
    sub_B775C4(&StringLiteral_13674/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/);
    byte_43891A8 = 1;
  }
  hpBarSliderWhite = (UnityEngine_Component_o *)this->fields.hpBarSliderWhite;
  if ( !hpBarSliderWhite )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject(hpBarSliderWhite, 0LL);
  v5 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v5 = TitleInfoSuperBossComponent_TypeInfo;
  }
  hpBarSliderWhite = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                                  gameObject,
                                                  v5->static_fields->ANIM_DURATION_HP_DELETION,
                                                  (const MethodInfo_1E05754 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !hpBarSliderWhite )
    goto LABEL_27;
  v6 = hpBarSliderWhite;
  LODWORD(hpBarSliderWhite[1].klass) = 1;
  hpBarSliderWhite[5].klass = (UnityEngine_Component_c *)1065353216;
  v7 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6[3].klass = (UnityEngine_Component_c *)v7;
  sub_B77560((BattleServantConfConponent_o *)&v6[3], v7, v8, v9, v10, v11, v12, v13);
  if ( *(float *)&this->fields.HPsplitNo <= 0.0 )
  {
    v21 = *(UnityEngine_Object_o **)&this->fields._IsShowClearEvent_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
    {
      v22 = *(UnityEngine_UI_Dropdown_DropdownItem_o **)&this->fields._IsShowClearEvent_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v23 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          v22,
                                          (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent(v23, (UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__ResetLocalPosition(v23, 0LL);
    }
    v20 = &StringLiteral_13038/*"SetClearAlpha"*/;
  }
  else
  {
    v20 = &StringLiteral_10178/*"OnEndAnimation"*/;
  }
  v24 = (System_Int32_array **)*v20;
  v6[3].monitor = (void *)*v20;
  sub_B77560((BattleServantConfConponent_o *)&v6[3].monitor, v24, v14, v15, v16, v17, v18, v19);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    goto LABEL_27;
  TitleInfoSuperBossComponent__PlaySeByEventId(
    (TitleInfoSuperBossComponent_o *)hpBarSliderWhite,
    eventBossStatusUiEntity->fields.eventId,
    0,
    v25);
  hpBarUnderSprite = (UILabel_o *)this->fields.hpBarUnderSprite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  hpBarSliderWhite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13674/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
  v28 = (EventSuperBossEntity_o *)this->fields.eventBossStatusUiEntity;
  if ( !v28
    || (maxHp = v28->fields.maxHp,
        v30 = (System_String_o *)hpBarSliderWhite,
        (hpBarSliderWhite = (UnityEngine_Component_o *)EventSuperBossEntity__GetUserSuperBossEntity(v28, 0LL)) == 0LL)
    || (v33 = maxHp - (unsigned __int64)hpBarSliderWhite[1].monitor,
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v33, v31),
        hpBarSliderWhite = (UnityEngine_Component_o *)System_String__Format(v30, v32, 0LL),
        !hpBarUnderSprite) )
  {
LABEL_27:
    sub_B7769C(hpBarSliderWhite, method);
  }
  UILabel__set_text(hpBarUnderSprite, (System_String_o *)hpBarSliderWhite, 0LL);
}


void __fastcall TitleInfoSuperBossComponent__PlayHpNameAlpha(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *hpBarUnderSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v5; // x8
  UnityEngine_Component_o *v6; // x20
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_43891A6 & 1) == 0 )
  {
    sub_B775C4(&TitleInfoSuperBossComponent_TypeInfo);
    sub_B775C4(&Method_UITweener_Begin_TweenAlpha___);
    sub_B775C4(&StringLiteral_10884/*"PlayHpCut"*/);
    byte_43891A6 = 1;
  }
  hpBarUnderSprite = (UnityEngine_Component_o *)this->fields.hpBarUnderSprite;
  if ( !hpBarUnderSprite )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(hpBarUnderSprite, 0LL);
  v5 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v5 = TitleInfoSuperBossComponent_TypeInfo;
  }
  hpBarUnderSprite = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                                  gameObject,
                                                  v5->static_fields->ANIM_DURATION_HP_NAME_ALPHA,
                                                  (const MethodInfo_1E05754 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !hpBarUnderSprite )
LABEL_9:
    sub_B7769C(hpBarUnderSprite, method);
  v6 = hpBarUnderSprite;
  LODWORD(hpBarUnderSprite[1].klass) = 1;
  hpBarUnderSprite[5].klass = (UnityEngine_Component_c *)0x3F80000000000000LL;
  v7 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6[3].klass = (UnityEngine_Component_c *)v7;
  sub_B77560((BattleServantConfConponent_o *)&v6[3], v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Int32_array **)StringLiteral_10884/*"PlayHpCut"*/;
  v6[3].monitor = (void *)StringLiteral_10884/*"PlayHpCut"*/;
  sub_B77560((BattleServantConfConponent_o *)&v6[3].monitor, v14, v15, v16, v17, v18, v19, v20);
}


void __fastcall TitleInfoSuperBossComponent__PlaySeByEventId(
        TitleInfoSuperBossComponent_o *this,
        int32_t eventId,
        bool isPlay,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 *v8; // x20
  System_String_o *v9; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43891AC & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_16755/*"ar12"*/);
    sub_B775C4(&StringLiteral_16766/*"ar60"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_43891AC = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v7);
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    eventId,
    (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( entity )
  {
    v8 = &StringLiteral_16766/*"ar60"*/;
    if ( !EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
    {
      if ( entity )
      {
        if ( !EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL) )
          v8 = &StringLiteral_16755/*"ar12"*/;
      }
      else
      {
        v8 = &StringLiteral_16755/*"ar12"*/;
      }
    }
  }
  else
  {
    v8 = &StringLiteral_16755/*"ar12"*/;
  }
  v9 = (System_String_o *)*v8;
  if ( isPlay )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSeLoop(v9, 0LL);
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopSe_23537512(v9, 0.0, 0LL);
  }
}


void __fastcall TitleInfoSuperBossComponent__SetBossIcon(
        TitleInfoSuperBossComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  UISprite_o *superBossHpFrame; // x21
  struct UISprite_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_43891A0 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    byte_43891A0 = 1;
  }
  superBossHpFrame = this->fields.superBossHpFrame;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v6 = (struct UISprite_o *)AtlasManager__SetEventUI(superBossHpFrame, spName, 0LL);
  if ( !superBossHpFrame )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)superBossHpFrame, (unsigned __int8)v6 & 1, 0LL);
  v6 = this->fields.superBossHpFrame;
  if ( !v6 )
    goto LABEL_12;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6, 0LL) )
  {
    v6 = this->fields.superBossHpFrame;
    if ( v6 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
        v6,
        v6->klass->vtable._34_get_minWidth.methodPtr);
      return;
    }
LABEL_12:
    sub_B7769C(v6, v7);
  }
}


void __fastcall TitleInfoSuperBossComponent__SetClearAlpha(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoSuperBossComponent_c *v3; // x0

  if ( (byte_43891A9 & 1) == 0 )
  {
    sub_B775C4(&TitleInfoSuperBossComponent_TypeInfo);
    sub_B775C4(&StringLiteral_5483/*"DoClearCallback"*/);
    byte_43891A9 = 1;
  }
  LOBYTE(this->fields.HPto) = 0;
  v3 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v3 = TitleInfoSuperBossComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5483/*"DoClearCallback"*/,
    v3->static_fields->CLEAR_CALLBACK_DELAY,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoSuperBossComponent__SetDamageAnimation(
        TitleInfoSuperBossComponent_o *this,
        int64_t damage,
        System_Action_o *onClearCallback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  EventSuperBossEntity_o *eventBossStatusUiEntity; // x0
  struct EventBossStatusUiEntity_o *v13; // x8
  __int64 maxHp; // x21
  float v15; // s0
  float v16; // s0
  struct EventBossStatusUiEntity_o *v17; // x8
  float v18; // s0
  float v19; // s0
  struct EventBossStatusUiEntity_o *v20; // x8
  __int64 v21; // x11
  int v22; // w10
  __int64 v23; // x9
  __int64 v24; // x11
  int64_t v25; // x12
  __int64 klass; // d0
  UnityEngine_Transform_o *v27; // x21
  long double v28; // q8
  float y; // s9
  float z; // s10
  TitleInfoSuperBossComponent_c *v31; // x0
  float *static_fields; // x8
  UILabel_o *hpBarUnderSprite; // x21
  __int64 v34; // x2
  struct EventBossStatusUiEntity_o *v35; // x8
  System_String_o *v36; // x22
  Il2CppObject *v37; // x0
  long double v38; // q0
  struct EventBossStatusUiEntity_o *v39; // x8
  __int64 v40; // x9
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x10
  int v42; // w21
  unsigned int v43; // w22
  __int64 v44; // x8
  struct EventSuperBossEntity_o *v45; // x9
  __int64 v46; // x0
  int64_t v47; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_43891A3 & 1) == 0 )
  {
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&TitleInfoSuperBossComponent_TypeInfo);
    sub_B775C4(&StringLiteral_13674/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/);
    byte_43891A3 = 1;
  }
  this->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)onClearCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.splitHpEffect,
    (System_Int32_array **)onClearCallback,
    (System_String_array **)onClearCallback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    goto LABEL_53;
  eventBossStatusUiEntity = (EventSuperBossEntity_o *)EventSuperBossEntity__GetUserSuperBossEntity(
                                                        eventBossStatusUiEntity,
                                                        0LL);
  if ( !eventBossStatusUiEntity )
    goto LABEL_53;
  v13 = this->fields.eventBossStatusUiEntity;
  if ( !v13 )
    goto LABEL_53;
  maxHp = eventBossStatusUiEntity->fields.maxHp;
  v15 = 1.0 - (double)damage / (double)(__int64)v13[1].klass;
  v16 = UnityEngine_Mathf__Clamp01(v15, 0LL);
  v17 = this->fields.eventBossStatusUiEntity;
  this->fields.HPsplitPoint = v16;
  if ( !v17 )
    goto LABEL_53;
  v18 = 1.0 - (double)maxHp / (double)(__int64)v17[1].klass;
  v19 = UnityEngine_Mathf__Clamp01(v18, 0LL);
  v20 = this->fields.eventBossStatusUiEntity;
  *(float *)&this->fields.HPsplitNo = v19;
  *(_QWORD *)&this->fields.originPos.fields.x = -1082130432LL;
  if ( !v20 )
    goto LABEL_53;
  v21 = *(_QWORD *)&v20[1].fields.eventId;
  if ( !v21 )
    goto LABEL_53;
  v22 = *(_DWORD *)(v21 + 24);
  if ( v22 >= 1 )
  {
    v23 = 0LL;
    v24 = v21 + 32;
    while ( 1 )
    {
      v25 = *(_QWORD *)(v24 + 8 * v23);
      if ( v25 > damage && v25 <= maxHp )
        break;
      if ( (int)++v23 >= v22 )
        goto LABEL_16;
    }
    klass = (__int64)v20[1].klass;
    LODWORD(this->fields.originPos.fields.y) = v23;
    *(float *)&klass = 1.0 - (double)v25 / (double)klass;
    LODWORD(this->fields.originPos.fields.x) = klass;
  }
LABEL_16:
  eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderUnder;
  if ( !eventBossStatusUiEntity )
    goto LABEL_53;
  UIProgressBar__set_value((UIProgressBar_o *)eventBossStatusUiEntity, this->fields.HPsplitPoint, 0LL);
  eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarSplitter;
  if ( !eventBossStatusUiEntity )
    goto LABEL_53;
  eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)eventBossStatusUiEntity,
                                                        0LL);
  if ( !eventBossStatusUiEntity )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventBossStatusUiEntity, 1, 0LL);
  eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderWhite;
  if ( !eventBossStatusUiEntity )
    goto LABEL_53;
  eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)eventBossStatusUiEntity,
                                                        0LL);
  if ( !eventBossStatusUiEntity )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventBossStatusUiEntity, 1, 0LL);
  eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarSplitter;
  if ( !eventBossStatusUiEntity )
    goto LABEL_53;
  UIProgressBar__set_value((UIProgressBar_o *)eventBossStatusUiEntity, this->fields.HPsplitPoint, 0LL);
  eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarSplitter;
  if ( !eventBossStatusUiEntity )
    goto LABEL_53;
  UIProgressBar__set_alpha((UIProgressBar_o *)eventBossStatusUiEntity, 0.0, 0LL);
  eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderWhite;
  if ( !eventBossStatusUiEntity )
    goto LABEL_53;
  UIProgressBar__set_value((UIProgressBar_o *)eventBossStatusUiEntity, this->fields.HPsplitPoint, 0LL);
  eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
  if ( !eventBossStatusUiEntity )
    goto LABEL_53;
  eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)eventBossStatusUiEntity,
                                                        0LL);
  if ( !eventBossStatusUiEntity )
    goto LABEL_53;
  *(UnityEngine_Vector3_o *)&this->fields.originPos.fields.z = UnityEngine_Transform__get_localPosition(
                                                                 (UnityEngine_Transform_o *)eventBossStatusUiEntity,
                                                                 0LL);
  eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
  if ( !eventBossStatusUiEntity )
    goto LABEL_53;
  eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)eventBossStatusUiEntity,
                                                        0LL);
  if ( !eventBossStatusUiEntity )
    goto LABEL_53;
  v27 = (UnityEngine_Transform_o *)eventBossStatusUiEntity;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)eventBossStatusUiEntity, 0LL);
  v28 = *(long double *)&localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v31 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v31 = TitleInfoSuperBossComponent_TypeInfo;
  }
  static_fields = (float *)v31->static_fields;
  v49.fields.x = *(float *)&v28 + static_fields[6];
  v49.fields.y = y + static_fields[7];
  v49.fields.z = z + static_fields[8];
  UnityEngine_Transform__set_localPosition(v27, v49, 0LL);
  hpBarUnderSprite = (UILabel_o *)this->fields.hpBarUnderSprite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  eventBossStatusUiEntity = (EventSuperBossEntity_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_13674/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/,
                                                        0LL);
  v35 = this->fields.eventBossStatusUiEntity;
  if ( !v35 )
    goto LABEL_53;
  v36 = (System_String_o *)eventBossStatusUiEntity;
  v47 = (int64_t)v35[1].klass - damage;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v47, v34);
  eventBossStatusUiEntity = (EventSuperBossEntity_o *)System_String__Format(v36, v37, 0LL);
  if ( !hpBarUnderSprite
    || (UILabel__set_text(hpBarUnderSprite, (System_String_o *)eventBossStatusUiEntity, 0LL),
        (eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarUnderSprite) == 0LL)
    || (eventBossStatusUiEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, float))&eventBossStatusUiEntity->klass[1]._1.byval_arg.bits)(
                                                              eventBossStatusUiEntity,
                                                              eventBossStatusUiEntity->klass[1]._1.this_arg.data,
                                                              0.0),
        (v39 = this->fields.eventBossStatusUiEntity) == 0LL)
    || (v40 = *(_QWORD *)&v39[1].fields.eventId) == 0 )
  {
LABEL_53:
    sub_B7769C(eventBossStatusUiEntity, v11);
  }
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( eventSuperBossEntity )
  {
    v42 = *(_DWORD *)(v40 + 24);
    if ( v42 <= SLODWORD(eventSuperBossEntity->fields.name) && v42 >= 1 )
    {
      v43 = 0;
      LODWORD(v28) = 1.0;
      while ( 1 )
      {
        v44 = *(_QWORD *)&v39[1].fields.eventId;
        if ( !v44 )
          goto LABEL_53;
        if ( v43 >= *(_DWORD *)(v44 + 24) )
          goto LABEL_55;
        v45 = this->fields.eventSuperBossEntity;
        if ( !v45 )
          goto LABEL_53;
        if ( v43 >= LODWORD(v45->fields.name) )
        {
LABEL_55:
          v46 = sub_B776C8(eventBossStatusUiEntity);
          sub_B77668(v46, 0LL);
        }
        eventBossStatusUiEntity = (EventSuperBossEntity_o *)*(&v45->fields.maxHp + (int)v43);
        if ( !eventBossStatusUiEntity )
          goto LABEL_53;
        if ( *(_QWORD *)(v44 + 8LL * (int)v43 + 32) <= damage )
          LODWORD(v38) = 0;
        else
          v38 = v28;
        eventBossStatusUiEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, long double))&eventBossStatusUiEntity->klass[1]._1.byval_arg.bits)(
                                                              eventBossStatusUiEntity,
                                                              eventBossStatusUiEntity->klass[1]._1.this_arg.data,
                                                              v38);
        if ( (int)++v43 >= v42 )
          return;
        v39 = this->fields.eventBossStatusUiEntity;
        if ( !v39 )
          goto LABEL_53;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoSuperBossComponent__SetDisp(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  long double v2; // q8
  EventSuperBossEntity_o *eventBossStatusUiEntity; // x0
  EventSuperBossEntity_o *v5; // x20
  struct EventBossStatusUiEntity_o *v6; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX; // x21
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x2
  struct EventBossStatusUiEntity_o *v11; // x8
  __int64 v12; // x8
  int v13; // w21
  struct UISprite_array **p_hpBarSplitPointList; // x22
  struct EventSuperBossEntity_o **p_eventSuperBossEntity; // x23
  char v16; // w27
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x3
  __int64 v32; // x28
  il2cpp_array_size_t v33; // w24
  struct UISprite_array *hpBarSplitPointList; // x25
  struct UnityEngine_GameObject_o *hpBarSplitPoint; // x26
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x26
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x25
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x26
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x26
  Il2CppClass **v58; // x0
  struct UISprite_array *v59; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventSuperBossEntity_o *v61; // x26
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x25
  EventSuperBossEntity_c **v69; // x0
  struct EventSuperBossEntity_o *v70; // x8
  UnityEngine_GameObject_o *v71; // x0
  struct EventBossStatusUiEntity_o *v72; // x8
  __int64 v73; // x9
  float HpSplitPositionX; // s0
  struct UISprite_array *v75; // x8
  float v76; // s9
  struct EventSuperBossEntity_o *v77; // x8
  long double v78; // q0
  struct EventBossStatusUiEntity_o *v79; // x8
  __int64 v80; // x8
  struct EventSuperBossEntity_o *v81; // x9
  EventBossStatusUiEntity_o *v82; // x0
  float v83; // s0
  float v84; // s1
  float v85; // s2
  float v86; // s3
  float v87; // s8
  float v88; // s9
  float v89; // s10
  float v90; // s11
  struct EventBossStatusUiEntity_o *v91; // x8
  __int64 klass; // x22
  __int64 v93; // x23
  UILabel_o *hpBarUnderSprite; // x20
  System_String_o *v95; // x21
  __int64 v96; // x2
  Il2CppObject *v97; // x0
  float v98; // s0
  __int64 v99; // x0
  __int64 v100; // x0
  char v101; // [xsp+4h] [xbp-8Ch]
  UnityEngine_Component_o *v102; // [xsp+8h] [xbp-88h]
  UnityEngine_Component_o *parent; // [xsp+10h] [xbp-80h]
  __int64 v104; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v107; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v108; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_43891A2 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&TitleInfoSuperBossComponent_TypeInfo);
    sub_B775C4(&UISprite___TypeInfo);
    sub_B775C4(&StringLiteral_13674/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/);
    byte_43891A2 = 1;
  }
  if ( LOBYTE(this->fields.HPto) || LOBYTE(this[1].klass) )
  {
    eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.eventBossStatusUiEntity;
    if ( eventBossStatusUiEntity )
    {
      eventBossStatusUiEntity = (EventSuperBossEntity_o *)EventSuperBossEntity__GetUserSuperBossEntity(
                                                            eventBossStatusUiEntity,
                                                            0LL);
      v5 = eventBossStatusUiEntity;
      if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      }
      v6 = this->fields.eventBossStatusUiEntity;
      if ( v6 )
      {
        SUPERBOSS_ICON_SPNAME_PREFIX = TitleInfoSuperBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
        v8 = System_Int32__ToString((int)v6 + 56, 0LL);
        v9 = System_String__Concat_44901936(SUPERBOSS_ICON_SPNAME_PREFIX, v8, 0LL);
        TitleInfoSuperBossComponent__SetBossIcon(this, v9, v10);
        v11 = this->fields.eventBossStatusUiEntity;
        if ( v11 )
        {
          v12 = *(_QWORD *)&v11[1].fields.eventId;
          if ( v12 )
          {
            v13 = *(_DWORD *)(v12 + 24);
            if ( v13 >= 1 )
            {
              p_hpBarSplitPointList = &this->fields.hpBarSplitPointList;
              p_eventSuperBossEntity = &this->fields.eventSuperBossEntity;
              if ( this->fields.hpBarSplitPointList && *p_eventSuperBossEntity )
              {
                v16 = 1;
              }
              else
              {
                v17 = (System_Int32_array **)sub_B775DC(UISprite___TypeInfo, (unsigned int)v13);
                *p_hpBarSplitPointList = (struct UISprite_array *)v17;
                sub_B77560(
                  (BattleServantConfConponent_o *)&this->fields.hpBarSplitPointList,
                  v17,
                  v18,
                  v19,
                  v20,
                  v21,
                  v22,
                  v23);
                v24 = (System_Int32_array **)sub_B775DC(UISprite___TypeInfo, (unsigned int)v13);
                *p_eventSuperBossEntity = (struct EventSuperBossEntity_o *)v24;
                sub_B77560(
                  (BattleServantConfConponent_o *)&this->fields.eventSuperBossEntity,
                  v24,
                  v25,
                  v26,
                  v27,
                  v28,
                  v29,
                  v30);
                v16 = 0;
              }
              parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.hpBarSplitPoint, 0LL);
              eventBossStatusUiEntity = (EventSuperBossEntity_o *)GameObjectExtensions__GetParent(
                                                                    (UnityEngine_GameObject_o *)this->fields.totalHpLabel,
                                                                    0LL);
              v102 = (UnityEngine_Component_o *)eventBossStatusUiEntity;
              v32 = 4LL;
              LODWORD(v2) = 1.0;
              v101 = v16;
              do
              {
                v33 = v32 - 4;
                if ( (v16 & 1) == 0 )
                {
                  hpBarSplitPointList = this->fields.hpBarSplitPointList;
                  hpBarSplitPoint = this->fields.hpBarSplitPoint;
                  if ( (_DWORD)v32 == 4 )
                  {
                    if ( !hpBarSplitPoint )
                      goto LABEL_98;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          this->fields.hpBarSplitPoint,
                                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitPointList )
                      goto LABEL_98;
                    v42 = (System_Int32_array **)eventBossStatusUiEntity;
                    if ( eventBossStatusUiEntity )
                    {
                      eventBossStatusUiEntity = (EventSuperBossEntity_o *)sub_B77684(
                                                                            eventBossStatusUiEntity,
                                                                            hpBarSplitPointList->obj.klass->_1.element_class);
                      if ( !eventBossStatusUiEntity )
                        goto LABEL_100;
                    }
                    if ( !hpBarSplitPointList->max_length )
                      goto LABEL_99;
                    hpBarSplitPointList->m_Items[0] = (UISprite_o *)v42;
                    sub_B77560(
                      (BattleServantConfConponent_o *)hpBarSplitPointList->m_Items,
                      v42,
                      v36,
                      v37,
                      v38,
                      v39,
                      v40,
                      v41);
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel;
                    if ( !eventBossStatusUiEntity )
                      goto LABEL_98;
                    eventSuperBossEntity = this->fields.eventSuperBossEntity;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          (UnityEngine_GameObject_o *)eventBossStatusUiEntity,
                                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !eventSuperBossEntity )
                      goto LABEL_98;
                    v50 = (System_Int32_array **)eventBossStatusUiEntity;
                    if ( eventBossStatusUiEntity )
                    {
                      eventBossStatusUiEntity = (EventSuperBossEntity_o *)sub_B77684(
                                                                            eventBossStatusUiEntity,
                                                                            eventSuperBossEntity->klass->_1.element_class);
                      if ( !eventBossStatusUiEntity )
                        goto LABEL_100;
                    }
                    if ( !LODWORD(eventSuperBossEntity->fields.name) )
                      goto LABEL_99;
                    eventSuperBossEntity->fields.maxHp = (int64_t)v50;
                    sub_B77560(
                      (BattleServantConfConponent_o *)&eventSuperBossEntity->fields.maxHp,
                      v50,
                      v44,
                      v45,
                      v46,
                      v47,
                      v48,
                      v49);
                  }
                  else
                  {
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)hpBarSplitPoint,
                                                                          (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventBossStatusUiEntity )
                      goto LABEL_98;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          (UnityEngine_GameObject_o *)eventBossStatusUiEntity,
                                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitPointList )
                      goto LABEL_98;
                    v57 = (System_Int32_array **)eventBossStatusUiEntity;
                    if ( eventBossStatusUiEntity )
                    {
                      eventBossStatusUiEntity = (EventSuperBossEntity_o *)sub_B77684(
                                                                            eventBossStatusUiEntity,
                                                                            hpBarSplitPointList->obj.klass->_1.element_class);
                      if ( !eventBossStatusUiEntity )
                      {
LABEL_100:
                        v100 = sub_B776BC();
                        sub_B77668(v100, 0LL);
                      }
                    }
                    if ( v33 >= hpBarSplitPointList->max_length )
                      goto LABEL_99;
                    v58 = &hpBarSplitPointList->obj.klass + (int)v33;
                    v58[4] = (Il2CppClass *)v57;
                    sub_B77560((BattleServantConfConponent_o *)(v58 + 4), v57, v51, v52, v53, v54, v55, v56);
                    v59 = *p_hpBarSplitPointList;
                    if ( !*p_hpBarSplitPointList )
                      goto LABEL_98;
                    if ( v33 >= v59->max_length )
                      goto LABEL_99;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)v59->m_Items[v33];
                    if ( !eventBossStatusUiEntity )
                      goto LABEL_98;
                    gameObject = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)eventBossStatusUiEntity,
                                   0LL);
                    GameObjectExtensions__SafeSetParent(gameObject, parent, 0LL);
                    v61 = this->fields.eventSuperBossEntity;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.totalHpLabel,
                                                                          (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventBossStatusUiEntity )
                      goto LABEL_98;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          (UnityEngine_GameObject_o *)eventBossStatusUiEntity,
                                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !v61 )
                      goto LABEL_98;
                    v68 = (System_Int32_array **)eventBossStatusUiEntity;
                    if ( eventBossStatusUiEntity )
                    {
                      eventBossStatusUiEntity = (EventSuperBossEntity_o *)sub_B77684(
                                                                            eventBossStatusUiEntity,
                                                                            v61->klass->_1.element_class);
                      if ( !eventBossStatusUiEntity )
                        goto LABEL_100;
                    }
                    if ( v33 >= LODWORD(v61->fields.name) )
                      goto LABEL_99;
                    v69 = &v61->klass + (int)v33;
                    v69[4] = (EventSuperBossEntity_c *)v68;
                    sub_B77560((BattleServantConfConponent_o *)(v69 + 4), v68, v62, v63, v64, v65, v66, v67);
                    v70 = this->fields.eventSuperBossEntity;
                    if ( !v70 )
                      goto LABEL_98;
                    if ( v33 >= LODWORD(v70->fields.name) )
                      goto LABEL_99;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)*(&v70->fields.maxHp + (int)v33);
                    if ( !eventBossStatusUiEntity )
                      goto LABEL_98;
                    v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventBossStatusUiEntity, 0LL);
                    GameObjectExtensions__SafeSetParent(v71, v102, 0LL);
                    v16 = v101;
                  }
                }
                v72 = this->fields.eventBossStatusUiEntity;
                if ( !v72 )
                  goto LABEL_98;
                v73 = *(_QWORD *)&v72[1].fields.eventId;
                if ( !v73 )
                  goto LABEL_98;
                if ( v33 >= *(_DWORD *)(v73 + 24) )
                  goto LABEL_99;
                HpSplitPositionX = TitleInfoSuperBossComponent__GetHpSplitPositionX(
                                     (TitleInfoSuperBossComponent_o *)eventBossStatusUiEntity,
                                     *(_QWORD *)(v73 + 8 * v32),
                                     (int64_t)v72[1].klass,
                                     v31);
                v75 = *p_hpBarSplitPointList;
                if ( !*p_hpBarSplitPointList )
                  goto LABEL_98;
                if ( v33 >= v75->max_length )
                  goto LABEL_99;
                eventBossStatusUiEntity = (EventSuperBossEntity_o *)*((_QWORD *)&v75->obj.klass + v32);
                if ( !eventBossStatusUiEntity )
                  goto LABEL_98;
                v76 = HpSplitPositionX;
                eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)eventBossStatusUiEntity,
                                                                      0LL);
                if ( !eventBossStatusUiEntity )
                  goto LABEL_98;
                v105.fields.y = 0.0;
                v105.fields.z = 0.0;
                v105.fields.x = v76;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventBossStatusUiEntity, v105, 0LL);
                v77 = this->fields.eventSuperBossEntity;
                if ( !v77 )
                  goto LABEL_98;
                if ( v33 >= LODWORD(v77->fields.name) )
                  goto LABEL_99;
                eventBossStatusUiEntity = (EventSuperBossEntity_o *)*((_QWORD *)&v77->klass + v32);
                if ( !eventBossStatusUiEntity )
                  goto LABEL_98;
                eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)eventBossStatusUiEntity,
                                                                      0LL);
                if ( !eventBossStatusUiEntity )
                  goto LABEL_98;
                v106.fields.y = 0.0;
                v106.fields.z = 0.0;
                v106.fields.x = v76;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventBossStatusUiEntity, v106, 0LL);
                v79 = this->fields.eventBossStatusUiEntity;
                if ( !v79 )
                  goto LABEL_98;
                v80 = *(_QWORD *)&v79[1].fields.eventId;
                if ( !v80 )
                  goto LABEL_98;
                if ( v33 >= *(_DWORD *)(v80 + 24) )
                  goto LABEL_99;
                if ( !v5 )
                  goto LABEL_98;
                v81 = this->fields.eventSuperBossEntity;
                if ( !v81 )
                  goto LABEL_98;
                if ( v33 >= LODWORD(v81->fields.name) )
                {
LABEL_99:
                  v99 = sub_B776C8(eventBossStatusUiEntity);
                  sub_B77668(v99, 0LL);
                }
                eventBossStatusUiEntity = (EventSuperBossEntity_o *)*((_QWORD *)&v81->klass + v32);
                if ( !eventBossStatusUiEntity )
                  goto LABEL_98;
                if ( *(_QWORD *)(v80 + 8 * v32) <= v5->fields.maxHp )
                  LODWORD(v78) = 0;
                else
                  v78 = v2;
                eventBossStatusUiEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, long double))&eventBossStatusUiEntity->klass[1]._1.byval_arg.bits)(
                                                                      eventBossStatusUiEntity,
                                                                      eventBossStatusUiEntity->klass[1]._1.this_arg.data,
                                                                      v78);
                ++v32;
              }
              while ( (int)v32 - 4 < v13 );
            }
            v82 = *(EventBossStatusUiEntity_o **)&this->fields.isEncountSuperBoss;
            if ( v82 )
            {
              v107.fields.r = 0.0;
              v107.fields.g = 0.0;
              v107.fields.b = 0.0;
              v107.fields.a = 0.0;
              *(UnityEngine_Color_o *)&v83 = EventBossStatusUiEntity__GetTextEffectColor(v82, v107, 0LL);
            }
            else
            {
              eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.eventBossStatusUiEntity;
              if ( !eventBossStatusUiEntity )
                goto LABEL_98;
              *(UnityEngine_Color_o *)&v83 = EventSuperBossEntity__GetBossColor(eventBossStatusUiEntity, 0LL);
            }
            eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarSplitter;
            v87 = v83;
            v88 = v84;
            v89 = v85;
            v90 = v86;
            if ( eventBossStatusUiEntity )
            {
              eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)eventBossStatusUiEntity,
                                                                    0LL);
              if ( eventBossStatusUiEntity )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventBossStatusUiEntity, 0, 0LL);
                eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderWhite;
                if ( eventBossStatusUiEntity )
                {
                  eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)eventBossStatusUiEntity,
                                                                        0LL);
                  if ( eventBossStatusUiEntity )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventBossStatusUiEntity, 0, 0LL);
                    v91 = this->fields.eventBossStatusUiEntity;
                    if ( v91 )
                    {
                      if ( v5 )
                      {
                        klass = (__int64)v91[1].klass;
                        eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarUnderSprite;
                        v93 = v5->fields.maxHp >= klass ? (__int64)v91[1].klass : v5->fields.maxHp;
                        if ( eventBossStatusUiEntity )
                        {
                          eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)eventBossStatusUiEntity,
                                                                                0LL);
                          if ( eventBossStatusUiEntity )
                          {
                            if ( UnityEngine_GameObject__get_activeSelf(
                                   (UnityEngine_GameObject_o *)eventBossStatusUiEntity,
                                   0LL) )
                            {
                              hpBarUnderSprite = (UILabel_o *)this->fields.hpBarUnderSprite;
                              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !LocalizationManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                              }
                              v95 = LocalizationManager__Get((System_String_o *)StringLiteral_13674/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
                              v104 = klass - v93;
                              v97 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v104, v96);
                              eventBossStatusUiEntity = (EventSuperBossEntity_o *)System_String__Format(v95, v97, 0LL);
                              if ( !hpBarUnderSprite )
                                goto LABEL_98;
                              UILabel__set_text(hpBarUnderSprite, (System_String_o *)eventBossStatusUiEntity, 0LL);
                            }
                            eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarUnderSprite;
                            if ( eventBossStatusUiEntity )
                            {
                              v108.fields.r = v87;
                              v108.fields.g = v88;
                              v108.fields.b = v89;
                              v108.fields.a = v90;
                              UILabel__set_effectColor((UILabel_o *)eventBossStatusUiEntity, v108, 0LL);
                              eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderUnder;
                              if ( eventBossStatusUiEntity )
                              {
                                v98 = 1.0 - (double)v93 / (double)klass;
                                UIProgressBar__set_value((UIProgressBar_o *)eventBossStatusUiEntity, v98, 0LL);
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
    sub_B7769C(eventBossStatusUiEntity, method);
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
  if ( (byte_43891A1 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&StringLiteral_16197/*"_"*/);
    byte_43891A1 = 1;
  }
  if ( (gaugeId & 0x80000000) != 0 )
    goto LABEL_8;
  v8 = System_Int32__ToString((int32_t)&v10, 0LL);
  v9 = System_String__Concat_44904220(prefix, (System_String_o *)StringLiteral_16197/*"_"*/, v8, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v9, 0LL) )
  {
LABEL_8:
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(sprite, prefix, 0LL);
  }
}


void __fastcall TitleInfoSuperBossComponent__Setup(
        TitleInfoSuperBossComponent_o *this,
        EventSuperBossEntity_o *superBossEntity,
        UIAtlas_o *termAtlas,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct EventBossStatusUiEntity_o **p_eventBossStatusUiEntity; // x21
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  System_Int32_array **EntityFromEventIdAndIndex; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  EventBossStatusUiEntity_o *v21; // x0
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

  if ( (byte_438919F & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_18962/*"event_superboss_hp_split"*/);
    sub_B775C4(&StringLiteral_18966/*"event_superboss_hp_white"*/);
    sub_B775C4(&StringLiteral_18919/*"event_raid_hp_back"*/);
    sub_B775C4(&StringLiteral_18963/*"event_superboss_hp_split_frame"*/);
    sub_B775C4(&StringLiteral_18960/*"event_superboss_hp_lower"*/);
    sub_B775C4(&StringLiteral_18920/*"event_raid_hp_frame"*/);
    sub_B775C4(&StringLiteral_18964/*"event_superboss_hp_upper"*/);
    byte_438919F = 1;
  }
  this->fields.eventBossStatusUiEntity = (struct EventBossStatusUiEntity_o *)superBossEntity;
  p_eventBossStatusUiEntity = &this->fields.eventBossStatusUiEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.eventBossStatusUiEntity,
    (System_Int32_array **)superBossEntity,
    (System_String_array **)termAtlas,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  LOWORD(this->fields.HPto) = 256;
  if ( eventBossStatusUiEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___),
          !*p_eventBossStatusUiEntity)
      || !Instance
      || ((EntityFromEventIdAndIndex = (System_Int32_array **)EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                                                (EventBossStatusUiMaster_o *)Instance,
                                                                (*p_eventBossStatusUiEntity)->fields.eventId,
                                                                (*p_eventBossStatusUiEntity)->fields.idx,
                                                                0LL),
           *(_QWORD *)&this->fields.isEncountSuperBoss = EntityFromEventIdAndIndex,
           sub_B77560(
             (BattleServantConfConponent_o *)&this->fields.isEncountSuperBoss,
             EntityFromEventIdAndIndex,
             v15,
             v16,
             v17,
             v18,
             v19,
             v20),
           (v21 = *(EventBossStatusUiEntity_o **)&this->fields.isEncountSuperBoss) == 0LL)
        ? (GaugeId = -1)
        : (GaugeId = EventBossStatusUiEntity__GetGaugeId(v21, 0LL)),
          (Instance = (DataManager_o *)*p_eventBossStatusUiEntity) == 0LL) )
    {
      sub_B7769C(Instance, v13);
    }
    IsEncounted = EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)Instance, 0LL);
    LOBYTE(this->fields.HPto) = IsEncounted;
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      (TitleInfoSuperBossComponent_o *)IsEncounted,
      this->fields.hpBarUpperSprite,
      (System_String_o *)StringLiteral_18960/*"event_superboss_hp_lower"*/,
      GaugeId,
      v24);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v25,
      this->fields.hpBarWhiteSprite,
      (System_String_o *)StringLiteral_18964/*"event_superboss_hp_upper"*/,
      GaugeId,
      v26);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v27,
      this->fields.hpSplitSprite,
      (System_String_o *)StringLiteral_18966/*"event_superboss_hp_white"*/,
      GaugeId,
      v28);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v29,
      this->fields.hpSplitPointSprite,
      (System_String_o *)StringLiteral_18963/*"event_superboss_hp_split_frame"*/,
      GaugeId,
      v30);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v31,
      (UISprite_o *)this->fields.hpBarSplitterList,
      (System_String_o *)StringLiteral_18962/*"event_superboss_hp_split"*/,
      GaugeId,
      v32);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v33,
      this->fields.superBossHpBg,
      (System_String_o *)StringLiteral_18920/*"event_raid_hp_frame"*/,
      GaugeId,
      v34);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v35,
      (UISprite_o *)this->fields.hpBarSlider,
      (System_String_o *)StringLiteral_18919/*"event_raid_hp_back"*/,
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
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  System_String_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  TitleInfoSuperBossComponent_c *v15; // x0
  System_Int32_array **Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Object_o *clearBossEffect; // x23
  TitleInfoSuperBossComponent_c *v24; // x0
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  TitleInfoSuperBossComponent_c *v32; // x0
  System_String_o *v33; // x0
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_Object_o *v41; // x22
  const MethodInfo *v42; // x1
  TitleInfoSuperBossComponent_c *v43; // x0
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  v6 = this;
  if ( (byte_43891A4 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&TitleInfoSuperBossComponent_TypeInfo);
    this = (TitleInfoSuperBossComponent_o *)sub_B775C4(&StringLiteral_16197/*"_"*/);
    byte_43891A4 = 1;
  }
  eventBossStatusUiEntity = v6->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    goto LABEL_28;
  v8 = System_Int32__ToString((int)eventBossStatusUiEntity + 16, 0LL);
  v6->fields.onClearCall = callBack;
  sub_B77560(
    (BattleServantConfConponent_o *)&v6->fields.onClearCall,
    (System_Int32_array **)callBack,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v15 = TitleInfoSuperBossComponent_TypeInfo;
  }
  this = (TitleInfoSuperBossComponent_o *)System_String__Concat_44904220(
                                            v15->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
                                            (System_String_o *)StringLiteral_16197/*"_"*/,
                                            v8,
                                            0LL);
  if ( !mapAssetData )
LABEL_28:
    sub_B7769C(this, mapAssetData);
  Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                            mapAssetData,
                                                            (System_String_o *)this,
                                                            (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
  sub_B77560(
    (BattleServantConfConponent_o *)&v6->fields.clearBossEffect,
    Object_WarBoardWaitTimeSetting,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  clearBossEffect = (UnityEngine_Object_o *)v6->fields.clearBossEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(clearBossEffect, 0LL, 0LL) )
  {
    v24 = TitleInfoSuperBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v24 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v25 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                   mapAssetData,
                                   v24->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
                                   (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
    v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)v25;
    sub_B77560((BattleServantConfConponent_o *)&v6->fields.clearBossEffect, v25, v26, v27, v28, v29, v30, v31);
  }
  v32 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v32 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v33 = System_String__Concat_44904220(
          v32->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_16197/*"_"*/,
          v8,
          0LL);
  v34 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 mapAssetData,
                                 v33,
                                 (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  *(_QWORD *)&v6->fields._IsShowClearEvent_k__BackingField = v34;
  sub_B77560(
    (BattleServantConfConponent_o *)&v6->fields._IsShowClearEvent_k__BackingField,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = *(UnityEngine_Object_o **)&v6->fields._IsShowClearEvent_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v41, 0LL, 0LL) )
  {
    v43 = TitleInfoSuperBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v43 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v44 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                   mapAssetData,
                                   v43->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
                                   (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
    *(_QWORD *)&v6->fields._IsShowClearEvent_k__BackingField = v44;
    sub_B77560(
      (BattleServantConfConponent_o *)&v6->fields._IsShowClearEvent_k__BackingField,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
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
  return (bool)this[1].klass;
}


void __fastcall TitleInfoSuperBossComponent__set_IsShowClearEvent(
        TitleInfoSuperBossComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  LOBYTE(this[1].klass) = value;
}


void __fastcall TitleInfoSuperBossComponent___c__DisplayClass62_0___ctor(
        TitleInfoSuperBossComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoSuperBossComponent___c__DisplayClass62_0___PlayHpCut_b__0(
        TitleInfoSuperBossComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  TitleInfoSuperBossComponent___c__DisplayClass62_0_o *v2; // x19
  struct EasingObject_o *eo; // x8
  struct TitleInfoSuperBossComponent_o *_4__this; // x9
  float mStartTime; // s9
  float v6; // s0
  struct TitleInfoSuperBossComponent_o *v7; // x8
  float v8; // s8
  struct TitleInfoSuperBossComponent_o *v9; // x8
  struct TitleInfoSuperBossComponent_o *v10; // x8
  UIProgressBar_o *hpBarSplitter; // x20
  float v12; // s0
  struct TitleInfoSuperBossComponent_o *v13; // x8
  UILabel_o *hpBarUnderSprite; // x20
  __int64 v15; // x2
  struct TitleInfoSuperBossComponent_o *v16; // x8
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  System_String_o *v18; // x21
  Il2CppObject *v19; // x0
  struct TitleInfoSuperBossComponent_o *v20; // x8
  float x; // s0
  UnityEngine_Object_o *clearBossEffect; // x20
  struct TitleInfoSuperBossComponent_o *v23; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v24; // x20
  struct TitleInfoSuperBossComponent_o *v25; // x8
  UnityEngine_GameObject_o *v26; // x20
  UnityEngine_Component_o *Parent; // x0
  struct TitleInfoSuperBossComponent_o *v28; // x9
  struct UISprite_array *hpBarSplitPointList; // x8
  __int64 y_low; // x9
  float v31; // s8
  float y; // s9
  float z; // s10
  TitleInfoSuperBossComponent_c *v34; // x0
  float *static_fields; // x8
  struct TitleInfoSuperBossComponent_o *v36; // x9
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  __int64 v38; // x9
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v40; // x8
  struct TitleInfoSuperBossComponent_o *v41; // x8
  struct TitleInfoSuperBossComponent_o *v42; // x8
  __int64 v43; // x0
  double v44; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4388876 & 1) == 0 )
  {
    sub_B775C4(&double_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&TitleInfoSuperBossComponent_TypeInfo);
    sub_B775C4(&Method_UITweener_Begin_TweenAlpha___);
    this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)sub_B775C4(&StringLiteral_13674/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/);
    byte_4388876 = 1;
  }
  eo = v2->fields.eo;
  if ( !eo )
    goto LABEL_51;
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_51;
  mStartTime = eo->fields.mStartTime;
  v6 = UnityEngine_Mathf__Lerp(_4__this->fields.HPsplitPoint, *(float *)&_4__this->fields.HPsplitNo, mStartTime, 0LL);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_51;
  this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)v7->fields.hpBarSliderUnder;
  if ( !this )
    goto LABEL_51;
  v8 = v6;
  UIProgressBar__set_value((UIProgressBar_o *)this, v6, 0LL);
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_51;
  this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)v9->fields.hpBarSplitter;
  if ( !this )
    goto LABEL_51;
  UIProgressBar__set_value((UIProgressBar_o *)this, v8, 0LL);
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_51;
  hpBarSplitter = (UIProgressBar_o *)v10->fields.hpBarSplitter;
  v12 = sinf(mStartTime * 3.1416);
  if ( !hpBarSplitter )
    goto LABEL_51;
  UIProgressBar__set_alpha(hpBarSplitter, v12 * 0.7, 0LL);
  v13 = v2->fields.__4__this;
  if ( !v13 )
    goto LABEL_51;
  hpBarUnderSprite = (UILabel_o *)v13->fields.hpBarUnderSprite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_13674/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/,
                                                                  0LL);
  v16 = v2->fields.__4__this;
  if ( !v16 )
    goto LABEL_51;
  eventBossStatusUiEntity = v16->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    goto LABEL_51;
  v18 = (System_String_o *)this;
  v44 = (float)(v8 * (float)(__int64)eventBossStatusUiEntity[1].klass);
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v44, v15);
  this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)System_String__Format(v18, v19, 0LL);
  if ( !hpBarUnderSprite )
    goto LABEL_51;
  UILabel__set_text(hpBarUnderSprite, (System_String_o *)this, 0LL);
  v20 = v2->fields.__4__this;
  if ( !v20 )
    goto LABEL_51;
  x = v20->fields.originPos.fields.x;
  if ( x > -1.0 && v8 <= x )
  {
    clearBossEffect = (UnityEngine_Object_o *)v20->fields.clearBossEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)UnityEngine_Object__op_Implicit(clearBossEffect, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v23 = v2->fields.__4__this;
      if ( !v23 )
        goto LABEL_51;
      v24 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v23->fields.clearBossEffect;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                      v24,
                                                                      (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v25 = v2->fields.__4__this;
      if ( !v25 )
        goto LABEL_51;
      v26 = (UnityEngine_GameObject_o *)this;
      Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v25->fields.hpBarSplitPoint, 0LL);
      GameObjectExtensions__SafeSetParent(v26, Parent, 0LL);
      v28 = v2->fields.__4__this;
      if ( !v28 )
        goto LABEL_51;
      hpBarSplitPointList = v28->fields.hpBarSplitPointList;
      if ( !hpBarSplitPointList )
        goto LABEL_51;
      y_low = SLODWORD(v28->fields.originPos.fields.y);
      if ( (unsigned int)y_low >= hpBarSplitPointList->max_length )
        goto LABEL_52;
      this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)hpBarSplitPointList->m_Items[y_low];
      if ( !this )
        goto LABEL_51;
      this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0LL);
      if ( !this )
        goto LABEL_51;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      v31 = localPosition.fields.x;
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      v34 = TitleInfoSuperBossComponent_TypeInfo;
      if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
        v34 = TitleInfoSuperBossComponent_TypeInfo;
      }
      static_fields = (float *)v34->static_fields;
      v46.fields.x = v31 + static_fields[9];
      v46.fields.y = y + static_fields[10];
      v46.fields.z = z + static_fields[11];
      GameObjectExtensions__SetLocalPosition(v26, v46, 0LL);
    }
    v36 = v2->fields.__4__this;
    if ( !v36 )
      goto LABEL_51;
    eventSuperBossEntity = v36->fields.eventSuperBossEntity;
    if ( !eventSuperBossEntity )
      goto LABEL_51;
    v38 = SLODWORD(v36->fields.originPos.fields.y);
    if ( (unsigned int)v38 < LODWORD(eventSuperBossEntity->fields.name) )
    {
      this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)*(&eventSuperBossEntity->fields.maxHp + v38);
      if ( this )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v40 = TitleInfoSuperBossComponent_TypeInfo;
        if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
          v40 = TitleInfoSuperBossComponent_TypeInfo;
        }
        this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)UITweener__Begin_TweenWidth_(
                                                                        gameObject,
                                                                        v40->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                                        (const MethodInfo_1E05754 *)Method_UITweener_Begin_TweenAlpha___);
        if ( this )
        {
          LODWORD(this->fields.__4__this) = 2;
          this[3].fields.__4__this = (struct TitleInfoSuperBossComponent_o *)1065353216;
          v41 = v2->fields.__4__this;
          if ( v41 )
          {
            v41->fields.originPos.fields.x = -1.0;
            v42 = v2->fields.__4__this;
            if ( v42 )
            {
              v42->fields.originPos.fields.y = NAN;
              return;
            }
          }
        }
      }
LABEL_51:
      sub_B7769C(this, method);
    }
LABEL_52:
    v43 = sub_B776C8(this);
    sub_B77668(v43, 0LL);
  }
}