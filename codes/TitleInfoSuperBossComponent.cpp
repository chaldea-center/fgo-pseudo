void __fastcall TitleInfoSuperBossComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  struct TitleInfoSuperBossComponent_StaticFields *static_fields; // x0
  __int64 v6; // x1
  struct TitleInfoSuperBossComponent_StaticFields *v7; // x0
  __int64 v8; // x1
  struct TitleInfoSuperBossComponent_StaticFields *v9; // x0
  __int64 v10; // x1
  TitleInfoSuperBossComponent_c *v11; // x8
  struct TitleInfoSuperBossComponent_StaticFields *v12; // x9
  struct TitleInfoSuperBossComponent_StaticFields *v13; // x9

  if ( (byte_40F8448 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoSuperBossComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_14406/*"TitleInfoEventSuperBossEffect_Dead"*/, v2);
    sub_B16FFC(&StringLiteral_14407/*"TitleInfoEventSuperBossEffect_Split"*/, v3);
    sub_B16FFC(&StringLiteral_18528/*"event_superboss_icon_"*/, v4);
    byte_40F8448 = 1;
  }
  static_fields = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v6 = StringLiteral_18528/*"event_superboss_icon_"*/;
  static_fields->SUPERBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_18528/*"event_superboss_icon_"*/;
  sub_B16F98(static_fields, v6);
  v7 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v8 = StringLiteral_14407/*"TitleInfoEventSuperBossEffect_Split"*/;
  v7->SUPERBOSS_SPLIT_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14407/*"TitleInfoEventSuperBossEffect_Split"*/;
  sub_B16F98(&v7->SUPERBOSS_SPLIT_EFFECT_PREFAB, v8);
  v9 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v10 = StringLiteral_14406/*"TitleInfoEventSuperBossEffect_Dead"*/;
  v9->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14406/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_B16F98(&v9->SUPERBOSS_CLEAR_EFFECT_PREFAB, v10);
  v11 = TitleInfoSuperBossComponent_TypeInfo;
  v12 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v12->SUPERBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v12->SUPERBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v13 = v11->static_fields;
  *(_QWORD *)&v13->SUPERBOSS_SPLIT_POS_DELTA.fields.x = 0x41200000BF000000LL;
  v13->SUPERBOSS_SPLIT_POS_DELTA.fields.z = 0.0;
  v11->static_fields->SUPERBOSS_HP_BAR_LENGTH = 264;
  v11->static_fields->ANIM_DURATION_FRAME_IN_BOSS = 0.3;
  v11->static_fields->ANIM_DURATION_HP_NAME_ALPHA = 0.4;
  v11->static_fields->ANIM_DURATION_HP_CUT = 1.2;
  v11->static_fields->ANIM_DURATION_SPLIT_ALPHA = 0.5;
  v11->static_fields->ANIM_DURATION_HP_DELETION = 0.7;
  v11->static_fields->ANIM_DURATION_BOSS_ALPHA = 2.5;
  v11->static_fields->CLEAR_CALLBACK_DELAY = 1.8;
  v11->static_fields->CLEAR_END_CALLBACK_DELAY = 1.5;
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *splitHpEffect; // x21
  UnityEngine_Component_o *superBossHpFrame; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v8; // x8
  TweenWidth_o *v9; // x0

  if ( (byte_40F8445 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoSuperBossComponent_TypeInfo, method);
    sub_B16FFC(&Method_UITweener_Begin_TweenAlpha___, v3);
    sub_B16FFC(&StringLiteral_9964/*"OnEndAnimation"*/, v4);
    byte_40F8445 = 1;
  }
  splitHpEffect = (System_Action_o *)this->fields.splitHpEffect;
  this->fields.splitHpEffect = 0LL;
  sub_B16F98(&this->fields.splitHpEffect, 0LL);
  ActionExtensions__Call(splitHpEffect, 0LL);
  superBossHpFrame = (UnityEngine_Component_o *)this->fields.superBossHpFrame;
  if ( !superBossHpFrame )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(superBossHpFrame, 0LL);
  v8 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v8 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v9 = UITweener__Begin_TweenWidth_(
         gameObject,
         v8->static_fields->ANIM_DURATION_SPLIT_ALPHA,
         (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !v9 )
LABEL_9:
    sub_B170D4();
  v9->fields.style = 1;
  *(_QWORD *)&v9->fields.from = 1065353216LL;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9964/*"OnEndAnimation"*/,
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

  if ( (byte_40F8446 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoSuperBossComponent_TypeInfo, splitHp);
    byte_40F8446 = 1;
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
  struct System_Action_o **p_onClearCall; // x0
  System_Action_o *onClearCall; // t1
  const MethodInfo *v5; // x1

  onClearCall = this->fields.onClearCall;
  p_onClearCall = &this->fields.onClearCall;
  *p_onClearCall = 0LL;
  sub_B16F98(p_onClearCall, 0LL);
  ActionExtensions__Call(onClearCall, 0LL);
  TitleInfoSuperBossComponent__SetDisp(this, v5);
}


void __fastcall TitleInfoSuperBossComponent__PlayFrameInBoss(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v6; // x8
  TweenWidth_o *v7; // x0
  TweenWidth_o *v8; // x20
  float32x2_t *static_fields; // x8
  float v10; // s1
  int animEndCall_high; // w9
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1

  if ( (byte_40F8440 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoSuperBossComponent_TypeInfo, method);
    sub_B16FFC(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_B16FFC(&StringLiteral_10645/*"PlayHpNameAlpha"*/, v4);
    byte_40F8440 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v6 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v7 = UITweener__Begin_TweenWidth_(
         gameObject,
         v6->static_fields->ANIM_DURATION_FRAME_IN_BOSS,
         (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v7 )
    sub_B170D4();
  v8 = v7;
  static_fields = (float32x2_t *)TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v10 = *((float *)&this->fields.animEndCall + 1) + static_fields[4].n64_f32[0];
  *(float32x2_t *)&v7->fields.from = vadd_f32(*(float32x2_t *)&this->fields.originPos.fields.z, static_fields[3]);
  *(float *)&v7->fields.updateTable = v10;
  animEndCall_high = HIDWORD(this->fields.animEndCall);
  *(_QWORD *)(&v7->fields.updateTable + 4) = *(_QWORD *)&this->fields.originPos.fields.z;
  HIDWORD(v7->fields.mWidget) = animEndCall_high;
  v7->fields.style = 2;
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8->fields.eventReceiver = v12;
  sub_B16F98(&v8->fields.eventReceiver, v12);
  v13 = StringLiteral_10645/*"PlayHpNameAlpha"*/;
  v8->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10645/*"PlayHpNameAlpha"*/;
  sub_B16F98(&v8->fields.callWhenFinished, v13);
}


void __fastcall TitleInfoSuperBossComponent__PlayHpCut(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  TitleInfoSuperBossComponent___c__DisplayClass62_0_o *v11; // x20
  TitleInfoSuperBossComponent_o *v12; // x0
  const MethodInfo *v13; // x3
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  EasingObject_o *eo; // x21
  TitleInfoSuperBossComponent_c *v22; // x0
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Action_o *v29; // x20

  if ( (byte_40F8442 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6);
    sub_B16FFC(&Method_TitleInfoSuperBossComponent_PlayHpDeletion__, v7);
    sub_B16FFC(&TitleInfoSuperBossComponent_TypeInfo, v8);
    sub_B16FFC(&Method_TitleInfoSuperBossComponent___c__DisplayClass62_0__PlayHpCut_b__0__, v9);
    sub_B16FFC(&TitleInfoSuperBossComponent___c__DisplayClass62_0_TypeInfo, v10);
    byte_40F8442 = 1;
  }
  v11 = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)sub_B170CC(
                                                                 TitleInfoSuperBossComponent___c__DisplayClass62_0_TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3,
                                                                 v4);
  TitleInfoSuperBossComponent___c__DisplayClass62_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_10;
  v11->fields.__4__this = this;
  v12 = (TitleInfoSuperBossComponent_o *)sub_B16F98(&v11->fields.__4__this, this);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    goto LABEL_10;
  TitleInfoSuperBossComponent__PlaySeByEventId(v12, eventBossStatusUiEntity->fields.eventId, 1, v13);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  v11->fields.eo = (struct EasingObject_o *)Component_UIWidget;
  sub_B16F98(&v11->fields, Component_UIWidget);
  eo = v11->fields.eo;
  v22 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v22 = TitleInfoSuperBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v22->static_fields->ANIM_DURATION_HP_CUT;
  v24 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v11,
    Method_TitleInfoSuperBossComponent___c__DisplayClass62_0__PlayHpCut_b__0__,
    0LL);
  v29 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_TitleInfoSuperBossComponent_PlayHpDeletion__, 0LL);
  if ( !eo )
LABEL_10:
    sub_B170D4();
  EasingObject__Play(eo, ANIM_DURATION_HP_CUT, v24, v29, 0.0, 0, 0LL);
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
  UnityEngine_Component_o *hpBarSliderWhite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v13; // x8
  TweenWidth_o *v14; // x0
  TweenWidth_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x0
  __int64 *v17; // x8
  UnityEngine_Object_o *v18; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v19; // x21
  UnityEngine_GameObject_o *v20; // x21
  __int64 v21; // x1
  TitleInfoSuperBossComponent_o *v22; // x0
  const MethodInfo *v23; // x3
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  UILabel_o *hpBarUnderSprite; // x20
  System_String_o *v26; // x0
  EventSuperBossEntity_o *v27; // x8
  int64_t maxHp; // x21
  System_String_o *v29; // x19
  UserSuperBossEntity_o *UserSuperBossEntity; // x0
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  int64_t v33; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F8443 & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&TitleInfoSuperBossComponent_TypeInfo, v6);
    sub_B16FFC(&Method_UITweener_Begin_TweenAlpha___, v7);
    sub_B16FFC(&StringLiteral_9964/*"OnEndAnimation"*/, v8);
    sub_B16FFC(&StringLiteral_12741/*"SetClearAlpha"*/, v9);
    sub_B16FFC(&StringLiteral_13368/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v10);
    byte_40F8443 = 1;
  }
  hpBarSliderWhite = (UnityEngine_Component_o *)this->fields.hpBarSliderWhite;
  if ( !hpBarSliderWhite )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject(hpBarSliderWhite, 0LL);
  v13 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v13 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v14 = UITweener__Begin_TweenWidth_(
          gameObject,
          v13->static_fields->ANIM_DURATION_HP_DELETION,
          (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !v14 )
    goto LABEL_27;
  v15 = v14;
  v14->fields.style = 1;
  *(_QWORD *)&v14->fields.from = 1065353216LL;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15->fields.eventReceiver = v16;
  sub_B16F98(&v15->fields.eventReceiver, v16);
  if ( *(float *)&this->fields.HPsplitNo <= 0.0 )
  {
    v18 = *(UnityEngine_Object_o **)&this->fields._IsShowClearEvent_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    {
      v19 = *(UnityEngine_UI_Dropdown_DropdownItem_o **)&this->fields._IsShowClearEvent_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v20 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          v19,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent(v20, (UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__ResetLocalPosition(v20, 0LL);
    }
    v17 = &StringLiteral_12741/*"SetClearAlpha"*/;
  }
  else
  {
    v17 = &StringLiteral_9964/*"OnEndAnimation"*/;
  }
  v21 = *v17;
  v15->fields.callWhenFinished = (struct System_String_o *)*v17;
  v22 = (TitleInfoSuperBossComponent_o *)sub_B16F98(&v15->fields.callWhenFinished, v21);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    goto LABEL_27;
  TitleInfoSuperBossComponent__PlaySeByEventId(v22, eventBossStatusUiEntity->fields.eventId, 0, v23);
  hpBarUnderSprite = (UILabel_o *)this->fields.hpBarUnderSprite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_13368/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
  v27 = (EventSuperBossEntity_o *)this->fields.eventBossStatusUiEntity;
  if ( !v27
    || (maxHp = v27->fields.maxHp,
        v29 = v26,
        (UserSuperBossEntity = EventSuperBossEntity__GetUserSuperBossEntity(v27, 0LL)) == 0LL)
    || (v33 = maxHp - UserSuperBossEntity->fields.damage,
        v31 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v33),
        v32 = System_String__Format(v29, v31, 0LL),
        !hpBarUnderSprite) )
  {
LABEL_27:
    sub_B170D4();
  }
  UILabel__set_text(hpBarUnderSprite, v32, 0LL);
}


void __fastcall TitleInfoSuperBossComponent__PlayHpNameAlpha(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *hpBarUnderSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v7; // x8
  TweenWidth_o *v8; // x0
  TweenWidth_o *v9; // x20
  UnityEngine_GameObject_o *v10; // x0
  __int64 v11; // x1

  if ( (byte_40F8441 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoSuperBossComponent_TypeInfo, method);
    sub_B16FFC(&Method_UITweener_Begin_TweenAlpha___, v3);
    sub_B16FFC(&StringLiteral_10644/*"PlayHpCut"*/, v4);
    byte_40F8441 = 1;
  }
  hpBarUnderSprite = (UnityEngine_Component_o *)this->fields.hpBarUnderSprite;
  if ( !hpBarUnderSprite )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(hpBarUnderSprite, 0LL);
  v7 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v7 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v8 = UITweener__Begin_TweenWidth_(
         gameObject,
         v7->static_fields->ANIM_DURATION_HP_NAME_ALPHA,
         (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !v8 )
LABEL_9:
    sub_B170D4();
  v9 = v8;
  v8->fields.style = 1;
  *(_QWORD *)&v8->fields.from = 0x3F80000000000000LL;
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v9->fields.eventReceiver = v10;
  sub_B16F98(&v9->fields.eventReceiver, v10);
  v11 = StringLiteral_10644/*"PlayHpCut"*/;
  v9->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10644/*"PlayHpCut"*/;
  sub_B16F98(&v9->fields.callWhenFinished, v11);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 *v14; // x20
  System_String_o *v15; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F8447 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_16370/*"ar12"*/, v9);
    sub_B16FFC(&StringLiteral_16381/*"ar60"*/, v10);
    sub_B16FFC(&StringLiteral_1/*""*/, v11);
    byte_40F8447 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &entity,
    eventId,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( entity )
  {
    v14 = &StringLiteral_16381/*"ar60"*/;
    if ( !EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
    {
      if ( entity )
      {
        if ( !EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL) )
          v14 = &StringLiteral_16370/*"ar12"*/;
      }
      else
      {
        v14 = &StringLiteral_16370/*"ar12"*/;
      }
    }
  }
  else
  {
    v14 = &StringLiteral_16370/*"ar12"*/;
  }
  v15 = (System_String_o *)*v14;
  if ( isPlay )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSeLoop(v15, 0LL);
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopSe_24848784(v15, 0.0, 0LL);
  }
}


void __fastcall TitleInfoSuperBossComponent__SetBossIcon(
        TitleInfoSuperBossComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  UISprite_o *superBossHpFrame; // x21
  bool v6; // w0
  UnityEngine_Behaviour_o *v7; // x0
  struct UISprite_o *v8; // x0

  if ( (byte_40F843B & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, spName);
    byte_40F843B = 1;
  }
  superBossHpFrame = this->fields.superBossHpFrame;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v6 = AtlasManager__SetEventUI(superBossHpFrame, spName, 0LL);
  if ( !superBossHpFrame )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)superBossHpFrame, v6, 0LL);
  v7 = (UnityEngine_Behaviour_o *)this->fields.superBossHpFrame;
  if ( !v7 )
    goto LABEL_12;
  if ( UnityEngine_Behaviour__get_enabled(v7, 0LL) )
  {
    v8 = this->fields.superBossHpFrame;
    if ( v8 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._33_MakePixelPerfect.method)(
        v8,
        v8->klass->vtable._34_get_minWidth.methodPtr);
      return;
    }
LABEL_12:
    sub_B170D4();
  }
}


void __fastcall TitleInfoSuperBossComponent__SetClearAlpha(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoSuperBossComponent_c *v4; // x0

  if ( (byte_40F8444 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoSuperBossComponent_TypeInfo, method);
    sub_B16FFC(&StringLiteral_5324/*"DoClearCallback"*/, v3);
    byte_40F8444 = 1;
  }
  LOBYTE(this->fields.HPto) = 0;
  v4 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v4 = TitleInfoSuperBossComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5324/*"DoClearCallback"*/,
    v4->static_fields->CLEAR_CALLBACK_DELAY,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoSuperBossComponent__SetDamageAnimation(
        TitleInfoSuperBossComponent_o *this,
        int64_t damage,
        System_Action_o *onClearCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  UserSuperBossEntity_o *UserSuperBossEntity; // x0
  struct EventBossStatusUiEntity_o *v12; // x8
  __int64 v13; // x21
  float v14; // s0
  float v15; // s0
  struct EventBossStatusUiEntity_o *v16; // x8
  float v17; // s0
  float v18; // s0
  struct EventBossStatusUiEntity_o *v19; // x8
  __int64 v20; // x11
  int v21; // w10
  __int64 v22; // x9
  __int64 v23; // x11
  int64_t v24; // x12
  __int64 klass; // d0
  UIProgressBar_o *hpBarSliderUnder; // x0
  UnityEngine_Component_o *hpBarSplitter; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *hpBarSliderWhite; // x0
  UnityEngine_GameObject_o *v30; // x0
  struct UnityEngine_GameObject_o *v31; // x0
  struct UnityEngine_GameObject_o *v32; // x0
  UIProgressBar_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Transform_o *v37; // x0
  UnityEngine_Transform_o *v38; // x21
  long double v39; // q8
  float y; // s9
  float z; // s10
  TitleInfoSuperBossComponent_c *v42; // x0
  float *static_fields; // x8
  UILabel_o *hpBarUnderSprite; // x21
  System_String_o *v45; // x0
  struct EventBossStatusUiEntity_o *v46; // x8
  System_String_o *v47; // x22
  Il2CppObject *v48; // x0
  System_String_o *v49; // x0
  struct UISprite_o *v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  long double v54; // q0
  struct EventBossStatusUiEntity_o *v55; // x8
  __int64 v56; // x9
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x10
  int v58; // w21
  unsigned int v59; // w22
  __int64 v60; // x8
  struct EventSuperBossEntity_o *v61; // x9
  __int64 v62; // x0
  int64_t v63; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F843E & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, damage);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&TitleInfoSuperBossComponent_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_13368/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v9);
    byte_40F843E = 1;
  }
  this->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)onClearCallback;
  sub_B16F98(&this->fields.splitHpEffect, onClearCallback);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    goto LABEL_53;
  UserSuperBossEntity = EventSuperBossEntity__GetUserSuperBossEntity(
                          (EventSuperBossEntity_o *)eventBossStatusUiEntity,
                          0LL);
  if ( !UserSuperBossEntity )
    goto LABEL_53;
  v12 = this->fields.eventBossStatusUiEntity;
  if ( !v12 )
    goto LABEL_53;
  v13 = UserSuperBossEntity->fields.damage;
  v14 = 1.0 - (double)damage / (double)(__int64)v12[1].klass;
  v15 = UnityEngine_Mathf__Clamp01(v14, 0LL);
  v16 = this->fields.eventBossStatusUiEntity;
  this->fields.HPsplitPoint = v15;
  if ( !v16 )
    goto LABEL_53;
  v17 = 1.0 - (double)v13 / (double)(__int64)v16[1].klass;
  v18 = UnityEngine_Mathf__Clamp01(v17, 0LL);
  v19 = this->fields.eventBossStatusUiEntity;
  *(float *)&this->fields.HPsplitNo = v18;
  *(_QWORD *)&this->fields.originPos.fields.x = -1082130432LL;
  if ( !v19 )
    goto LABEL_53;
  v20 = *(_QWORD *)&v19[1].fields.eventId;
  if ( !v20 )
    goto LABEL_53;
  v21 = *(_DWORD *)(v20 + 24);
  if ( v21 >= 1 )
  {
    v22 = 0LL;
    v23 = v20 + 32;
    while ( 1 )
    {
      v24 = *(_QWORD *)(v23 + 8 * v22);
      if ( v24 > damage && v24 <= v13 )
        break;
      if ( (int)++v22 >= v21 )
        goto LABEL_16;
    }
    klass = (__int64)v19[1].klass;
    LODWORD(this->fields.originPos.fields.y) = v22;
    *(float *)&klass = 1.0 - (double)v24 / (double)klass;
    LODWORD(this->fields.originPos.fields.x) = klass;
  }
LABEL_16:
  hpBarSliderUnder = (UIProgressBar_o *)this->fields.hpBarSliderUnder;
  if ( !hpBarSliderUnder )
    goto LABEL_53;
  UIProgressBar__set_value(hpBarSliderUnder, this->fields.HPsplitPoint, 0LL);
  hpBarSplitter = (UnityEngine_Component_o *)this->fields.hpBarSplitter;
  if ( !hpBarSplitter )
    goto LABEL_53;
  gameObject = UnityEngine_Component__get_gameObject(hpBarSplitter, 0LL);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  hpBarSliderWhite = (UnityEngine_Component_o *)this->fields.hpBarSliderWhite;
  if ( !hpBarSliderWhite )
    goto LABEL_53;
  v30 = UnityEngine_Component__get_gameObject(hpBarSliderWhite, 0LL);
  if ( !v30 )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(v30, 1, 0LL);
  v31 = this->fields.hpBarSplitter;
  if ( !v31 )
    goto LABEL_53;
  UIProgressBar__set_value((UIProgressBar_o *)v31, this->fields.HPsplitPoint, 0LL);
  v32 = this->fields.hpBarSplitter;
  if ( !v32 )
    goto LABEL_53;
  UIProgressBar__set_alpha((UIProgressBar_o *)v32, 0.0, 0LL);
  v33 = (UIProgressBar_o *)this->fields.hpBarSliderWhite;
  if ( !v33 )
    goto LABEL_53;
  UIProgressBar__set_value(v33, this->fields.HPsplitPoint, 0LL);
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v34 )
    goto LABEL_53;
  transform = UnityEngine_GameObject__get_transform(v34, 0LL);
  if ( !transform )
    goto LABEL_53;
  *(UnityEngine_Vector3_o *)&this->fields.originPos.fields.z = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v36 )
    goto LABEL_53;
  v37 = UnityEngine_GameObject__get_transform(v36, 0LL);
  if ( !v37 )
    goto LABEL_53;
  v38 = v37;
  localPosition = UnityEngine_Transform__get_localPosition(v37, 0LL);
  v39 = *(long double *)&localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v42 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v42 = TitleInfoSuperBossComponent_TypeInfo;
  }
  static_fields = (float *)v42->static_fields;
  v65.fields.x = *(float *)&v39 + static_fields[6];
  v65.fields.y = y + static_fields[7];
  v65.fields.z = z + static_fields[8];
  UnityEngine_Transform__set_localPosition(v38, v65, 0LL);
  hpBarUnderSprite = (UILabel_o *)this->fields.hpBarUnderSprite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_13368/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
  v46 = this->fields.eventBossStatusUiEntity;
  if ( !v46 )
    goto LABEL_53;
  v47 = v45;
  v63 = (int64_t)v46[1].klass - damage;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v63);
  v49 = System_String__Format(v47, v48, 0LL);
  if ( !hpBarUnderSprite
    || (UILabel__set_text(hpBarUnderSprite, v49, 0LL), (v50 = this->fields.hpBarUnderSprite) == 0LL)
    || (v51 = ((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v50->klass->vtable._8_set_alpha.method)(
                v50,
                v50->klass->vtable._9_CalculateFinalAlpha.methodPtr,
                0.0),
        (v55 = this->fields.eventBossStatusUiEntity) == 0LL)
    || (v56 = *(_QWORD *)&v55[1].fields.eventId) == 0 )
  {
LABEL_53:
    sub_B170D4();
  }
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( eventSuperBossEntity )
  {
    v58 = *(_DWORD *)(v56 + 24);
    if ( v58 <= SLODWORD(eventSuperBossEntity->fields.name) && v58 >= 1 )
    {
      v59 = 0;
      LODWORD(v39) = 1.0;
      while ( 1 )
      {
        v60 = *(_QWORD *)&v55[1].fields.eventId;
        if ( !v60 )
          goto LABEL_53;
        if ( v59 >= *(_DWORD *)(v60 + 24) )
          goto LABEL_55;
        v61 = this->fields.eventSuperBossEntity;
        if ( !v61 )
          goto LABEL_53;
        if ( v59 >= LODWORD(v61->fields.name) )
        {
LABEL_55:
          sub_B17100(v51, v52, v53);
          sub_B170A0();
        }
        v62 = *(&v61->fields.maxHp + (int)v59);
        if ( !v62 )
          goto LABEL_53;
        if ( *(_QWORD *)(v60 + 8LL * (int)v59 + 32) <= damage )
          LODWORD(v54) = 0;
        else
          v54 = v39;
        v51 = (*(__int64 (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)v62 + 440LL))(
                v62,
                *(_QWORD *)(*(_QWORD *)v62 + 448LL),
                v54);
        if ( (int)++v59 >= v58 )
          return;
        v55 = this->fields.eventBossStatusUiEntity;
        if ( !v55 )
          goto LABEL_53;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoSuperBossComponent__SetDisp(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  long double v2; // q8
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  UserSuperBossEntity_o *UserSuperBossEntity; // x20
  struct EventBossStatusUiEntity_o *v13; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x2
  __int64 v18; // x2
  struct EventBossStatusUiEntity_o *v19; // x8
  __int64 v20; // x8
  int v21; // w21
  struct UISprite_array **p_hpBarSplitPointList; // x22
  struct EventSuperBossEntity_o **p_eventSuperBossEntity; // x23
  char v24; // w27
  __int64 v25; // x0
  __int64 v26; // x2
  __int64 v27; // x0
  TitleInfoSuperBossComponent_o *Component_srcLineSprite; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  const MethodInfo *v31; // x3
  __int64 v32; // x28
  il2cpp_array_size_t v33; // w24
  struct UISprite_array *hpBarSplitPointList; // x25
  struct UnityEngine_GameObject_o *hpBarSplitPoint; // x26
  TitleInfoSuperBossComponent_o *v36; // x26
  UnityEngine_GameObject_o *totalHpLabel; // x0
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x25
  TitleInfoSuperBossComponent_o *v39; // x26
  UnityEngine_GameObject_o *v40; // x0
  TitleInfoSuperBossComponent_o *v41; // x26
  Il2CppClass **v42; // x0
  struct UISprite_array *v43; // x8
  UnityEngine_Component_o *v44; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventSuperBossEntity_o *v46; // x26
  UnityEngine_GameObject_o *v47; // x0
  TitleInfoSuperBossComponent_o *v48; // x25
  EventSuperBossEntity_c **v49; // x0
  struct EventSuperBossEntity_o *v50; // x8
  UnityEngine_Component_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  struct EventBossStatusUiEntity_o *v53; // x8
  __int64 v54; // x9
  float HpSplitPositionX; // s0
  struct UISprite_array *v56; // x8
  UnityEngine_Component_o *v57; // x0
  float v58; // s9
  UnityEngine_Transform_o *transform; // x0
  struct EventSuperBossEntity_o *v60; // x8
  UnityEngine_Component_o *v61; // x0
  UnityEngine_Transform_o *v62; // x0
  long double v63; // q0
  struct EventBossStatusUiEntity_o *v64; // x8
  __int64 v65; // x8
  struct EventSuperBossEntity_o *v66; // x9
  __int64 v67; // x0
  EventBossStatusUiEntity_o *v68; // x0
  float v69; // s0
  float v70; // s1
  float v71; // s2
  float v72; // s3
  struct EventBossStatusUiEntity_o *v73; // x0
  UnityEngine_Component_o *hpBarSplitter; // x0
  float v75; // s8
  float v76; // s9
  float v77; // s10
  float v78; // s11
  UnityEngine_GameObject_o *v79; // x0
  UnityEngine_Component_o *hpBarSliderWhite; // x0
  UnityEngine_GameObject_o *v81; // x0
  struct EventBossStatusUiEntity_o *v82; // x8
  __int64 klass; // x22
  UnityEngine_Component_o *hpBarUnderSprite; // x0
  __int64 v85; // x23
  UnityEngine_GameObject_o *v86; // x0
  UILabel_o *v87; // x20
  System_String_o *v88; // x21
  Il2CppObject *v89; // x0
  System_String_o *v90; // x0
  UILabel_o *v91; // x0
  UIProgressBar_o *hpBarSliderUnder; // x0
  float v93; // s0
  char v94; // [xsp+4h] [xbp-8Ch]
  UnityEngine_Component_o *v95; // [xsp+8h] [xbp-88h]
  UnityEngine_Component_o *parent; // [xsp+10h] [xbp-80h]
  __int64 v97; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v101; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F843D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    sub_B16FFC(&long_TypeInfo, v4);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&TitleInfoSuperBossComponent_TypeInfo, v8);
    sub_B16FFC(&UISprite___TypeInfo, v9);
    sub_B16FFC(&StringLiteral_13368/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v10);
    byte_40F843D = 1;
  }
  if ( LOBYTE(this->fields.HPto) || LOBYTE(this[1].klass) )
  {
    eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
    if ( eventBossStatusUiEntity )
    {
      UserSuperBossEntity = EventSuperBossEntity__GetUserSuperBossEntity(
                              (EventSuperBossEntity_o *)eventBossStatusUiEntity,
                              0LL);
      if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      }
      v13 = this->fields.eventBossStatusUiEntity;
      if ( v13 )
      {
        SUPERBOSS_ICON_SPNAME_PREFIX = TitleInfoSuperBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
        v15 = System_Int32__ToString((int)v13 + 56, 0LL);
        v16 = System_String__Concat_43743732(SUPERBOSS_ICON_SPNAME_PREFIX, v15, 0LL);
        TitleInfoSuperBossComponent__SetBossIcon(this, v16, v17);
        v19 = this->fields.eventBossStatusUiEntity;
        if ( v19 )
        {
          v20 = *(_QWORD *)&v19[1].fields.eventId;
          if ( v20 )
          {
            v21 = *(_DWORD *)(v20 + 24);
            if ( v21 >= 1 )
            {
              p_hpBarSplitPointList = &this->fields.hpBarSplitPointList;
              p_eventSuperBossEntity = &this->fields.eventSuperBossEntity;
              if ( this->fields.hpBarSplitPointList && *p_eventSuperBossEntity )
              {
                v24 = 1;
              }
              else
              {
                v25 = sub_B17014(UISprite___TypeInfo, (unsigned int)v21, v18);
                *p_hpBarSplitPointList = (struct UISprite_array *)v25;
                sub_B16F98(&this->fields.hpBarSplitPointList, v25);
                v27 = sub_B17014(UISprite___TypeInfo, (unsigned int)v21, v26);
                *p_eventSuperBossEntity = (struct EventSuperBossEntity_o *)v27;
                sub_B16F98(&this->fields.eventSuperBossEntity, v27);
                v24 = 0;
              }
              parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.hpBarSplitPoint, 0LL);
              Component_srcLineSprite = (TitleInfoSuperBossComponent_o *)GameObjectExtensions__GetParent(
                                                                           (UnityEngine_GameObject_o *)this->fields.totalHpLabel,
                                                                           0LL);
              v95 = (UnityEngine_Component_o *)Component_srcLineSprite;
              v32 = 4LL;
              LODWORD(v2) = 1.0;
              v94 = v24;
              do
              {
                v33 = v32 - 4;
                if ( (v24 & 1) == 0 )
                {
                  hpBarSplitPointList = this->fields.hpBarSplitPointList;
                  hpBarSplitPoint = this->fields.hpBarSplitPoint;
                  if ( (_DWORD)v32 == 4 )
                  {
                    if ( !hpBarSplitPoint )
                      goto LABEL_98;
                    Component_srcLineSprite = (TitleInfoSuperBossComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 this->fields.hpBarSplitPoint,
                                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitPointList )
                      goto LABEL_98;
                    v36 = Component_srcLineSprite;
                    if ( Component_srcLineSprite )
                    {
                      Component_srcLineSprite = (TitleInfoSuperBossComponent_o *)sub_B170BC(
                                                                                   Component_srcLineSprite,
                                                                                   hpBarSplitPointList->obj.klass->_1.element_class);
                      if ( !Component_srcLineSprite )
                        goto LABEL_100;
                    }
                    if ( !hpBarSplitPointList->max_length )
                      goto LABEL_99;
                    hpBarSplitPointList->m_Items[0] = (UISprite_o *)v36;
                    sub_B16F98(hpBarSplitPointList->m_Items, v36);
                    totalHpLabel = (UnityEngine_GameObject_o *)this->fields.totalHpLabel;
                    if ( !totalHpLabel )
                      goto LABEL_98;
                    eventSuperBossEntity = this->fields.eventSuperBossEntity;
                    Component_srcLineSprite = (TitleInfoSuperBossComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 totalHpLabel,
                                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !eventSuperBossEntity )
                      goto LABEL_98;
                    v39 = Component_srcLineSprite;
                    if ( Component_srcLineSprite )
                    {
                      Component_srcLineSprite = (TitleInfoSuperBossComponent_o *)sub_B170BC(
                                                                                   Component_srcLineSprite,
                                                                                   eventSuperBossEntity->klass->_1.element_class);
                      if ( !Component_srcLineSprite )
                        goto LABEL_100;
                    }
                    if ( !LODWORD(eventSuperBossEntity->fields.name) )
                      goto LABEL_99;
                    eventSuperBossEntity->fields.maxHp = (int64_t)v39;
                    Component_srcLineSprite = (TitleInfoSuperBossComponent_o *)sub_B16F98(
                                                                                 &eventSuperBossEntity->fields.maxHp,
                                                                                 v39);
                  }
                  else
                  {
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    v40 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)hpBarSplitPoint,
                                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !v40 )
                      goto LABEL_98;
                    Component_srcLineSprite = (TitleInfoSuperBossComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 v40,
                                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitPointList )
                      goto LABEL_98;
                    v41 = Component_srcLineSprite;
                    if ( Component_srcLineSprite )
                    {
                      Component_srcLineSprite = (TitleInfoSuperBossComponent_o *)sub_B170BC(
                                                                                   Component_srcLineSprite,
                                                                                   hpBarSplitPointList->obj.klass->_1.element_class);
                      if ( !Component_srcLineSprite )
                      {
LABEL_100:
                        sub_B170F4();
                        sub_B170A0();
                      }
                    }
                    if ( v33 >= hpBarSplitPointList->max_length )
                      goto LABEL_99;
                    v42 = &hpBarSplitPointList->obj.klass + (int)v33;
                    v42[4] = (Il2CppClass *)v41;
                    Component_srcLineSprite = (TitleInfoSuperBossComponent_o *)sub_B16F98(v42 + 4, v41);
                    v43 = *p_hpBarSplitPointList;
                    if ( !*p_hpBarSplitPointList )
                      goto LABEL_98;
                    if ( v33 >= v43->max_length )
                      goto LABEL_99;
                    v44 = (UnityEngine_Component_o *)v43->m_Items[v33];
                    if ( !v44 )
                      goto LABEL_98;
                    gameObject = UnityEngine_Component__get_gameObject(v44, 0LL);
                    GameObjectExtensions__SafeSetParent(gameObject, parent, 0LL);
                    v46 = this->fields.eventSuperBossEntity;
                    v47 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.totalHpLabel,
                                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !v47 )
                      goto LABEL_98;
                    Component_srcLineSprite = (TitleInfoSuperBossComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 v47,
                                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !v46 )
                      goto LABEL_98;
                    v48 = Component_srcLineSprite;
                    if ( Component_srcLineSprite )
                    {
                      Component_srcLineSprite = (TitleInfoSuperBossComponent_o *)sub_B170BC(
                                                                                   Component_srcLineSprite,
                                                                                   v46->klass->_1.element_class);
                      if ( !Component_srcLineSprite )
                        goto LABEL_100;
                    }
                    if ( v33 >= LODWORD(v46->fields.name) )
                      goto LABEL_99;
                    v49 = &v46->klass + (int)v33;
                    v49[4] = (EventSuperBossEntity_c *)v48;
                    Component_srcLineSprite = (TitleInfoSuperBossComponent_o *)sub_B16F98(v49 + 4, v48);
                    v50 = this->fields.eventSuperBossEntity;
                    if ( !v50 )
                      goto LABEL_98;
                    if ( v33 >= LODWORD(v50->fields.name) )
                      goto LABEL_99;
                    v51 = (UnityEngine_Component_o *)*(&v50->fields.maxHp + (int)v33);
                    if ( !v51 )
                      goto LABEL_98;
                    v52 = UnityEngine_Component__get_gameObject(v51, 0LL);
                    GameObjectExtensions__SafeSetParent(v52, v95, 0LL);
                    v24 = v94;
                  }
                }
                v53 = this->fields.eventBossStatusUiEntity;
                if ( !v53 )
                  goto LABEL_98;
                v54 = *(_QWORD *)&v53[1].fields.eventId;
                if ( !v54 )
                  goto LABEL_98;
                if ( v33 >= *(_DWORD *)(v54 + 24) )
                  goto LABEL_99;
                HpSplitPositionX = TitleInfoSuperBossComponent__GetHpSplitPositionX(
                                     Component_srcLineSprite,
                                     *(_QWORD *)(v54 + 8 * v32),
                                     (int64_t)v53[1].klass,
                                     v31);
                v56 = *p_hpBarSplitPointList;
                if ( !*p_hpBarSplitPointList )
                  goto LABEL_98;
                if ( v33 >= v56->max_length )
                  goto LABEL_99;
                v57 = (UnityEngine_Component_o *)*((_QWORD *)&v56->obj.klass + v32);
                if ( !v57 )
                  goto LABEL_98;
                v58 = HpSplitPositionX;
                transform = UnityEngine_Component__get_transform(v57, 0LL);
                if ( !transform )
                  goto LABEL_98;
                v98.fields.y = 0.0;
                v98.fields.z = 0.0;
                v98.fields.x = v58;
                UnityEngine_Transform__set_localPosition(transform, v98, 0LL);
                v60 = this->fields.eventSuperBossEntity;
                if ( !v60 )
                  goto LABEL_98;
                if ( v33 >= LODWORD(v60->fields.name) )
                  goto LABEL_99;
                v61 = (UnityEngine_Component_o *)*((_QWORD *)&v60->klass + v32);
                if ( !v61 )
                  goto LABEL_98;
                v62 = UnityEngine_Component__get_transform(v61, 0LL);
                if ( !v62 )
                  goto LABEL_98;
                v99.fields.y = 0.0;
                v99.fields.z = 0.0;
                v99.fields.x = v58;
                UnityEngine_Transform__set_localPosition(v62, v99, 0LL);
                v64 = this->fields.eventBossStatusUiEntity;
                if ( !v64 )
                  goto LABEL_98;
                v65 = *(_QWORD *)&v64[1].fields.eventId;
                if ( !v65 )
                  goto LABEL_98;
                if ( v33 >= *(_DWORD *)(v65 + 24) )
                  goto LABEL_99;
                if ( !UserSuperBossEntity )
                  goto LABEL_98;
                v66 = this->fields.eventSuperBossEntity;
                if ( !v66 )
                  goto LABEL_98;
                if ( v33 >= LODWORD(v66->fields.name) )
                {
LABEL_99:
                  sub_B17100(Component_srcLineSprite, v29, v30);
                  sub_B170A0();
                }
                v67 = *((_QWORD *)&v66->klass + v32);
                if ( !v67 )
                  goto LABEL_98;
                if ( *(_QWORD *)(v65 + 8 * v32) <= UserSuperBossEntity->fields.damage )
                  LODWORD(v63) = 0;
                else
                  v63 = v2;
                Component_srcLineSprite = (TitleInfoSuperBossComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)v67 + 440LL))(
                                                                             v67,
                                                                             *(_QWORD *)(*(_QWORD *)v67 + 448LL),
                                                                             v63);
                ++v32;
              }
              while ( (int)v32 - 4 < v21 );
            }
            v68 = *(EventBossStatusUiEntity_o **)&this->fields.isEncountSuperBoss;
            if ( v68 )
            {
              v100.fields.r = 0.0;
              v100.fields.g = 0.0;
              v100.fields.b = 0.0;
              v100.fields.a = 0.0;
              *(UnityEngine_Color_o *)&v69 = EventBossStatusUiEntity__GetTextEffectColor(v68, v100, 0LL);
            }
            else
            {
              v73 = this->fields.eventBossStatusUiEntity;
              if ( !v73 )
                goto LABEL_98;
              *(UnityEngine_Color_o *)&v69 = EventSuperBossEntity__GetBossColor((EventSuperBossEntity_o *)v73, 0LL);
            }
            hpBarSplitter = (UnityEngine_Component_o *)this->fields.hpBarSplitter;
            v75 = v69;
            v76 = v70;
            v77 = v71;
            v78 = v72;
            if ( hpBarSplitter )
            {
              v79 = UnityEngine_Component__get_gameObject(hpBarSplitter, 0LL);
              if ( v79 )
              {
                UnityEngine_GameObject__SetActive(v79, 0, 0LL);
                hpBarSliderWhite = (UnityEngine_Component_o *)this->fields.hpBarSliderWhite;
                if ( hpBarSliderWhite )
                {
                  v81 = UnityEngine_Component__get_gameObject(hpBarSliderWhite, 0LL);
                  if ( v81 )
                  {
                    UnityEngine_GameObject__SetActive(v81, 0, 0LL);
                    v82 = this->fields.eventBossStatusUiEntity;
                    if ( v82 )
                    {
                      if ( UserSuperBossEntity )
                      {
                        klass = (__int64)v82[1].klass;
                        hpBarUnderSprite = (UnityEngine_Component_o *)this->fields.hpBarUnderSprite;
                        v85 = UserSuperBossEntity->fields.damage >= klass
                            ? (__int64)v82[1].klass
                            : UserSuperBossEntity->fields.damage;
                        if ( hpBarUnderSprite )
                        {
                          v86 = UnityEngine_Component__get_gameObject(hpBarUnderSprite, 0LL);
                          if ( v86 )
                          {
                            if ( UnityEngine_GameObject__get_activeSelf(v86, 0LL) )
                            {
                              v87 = (UILabel_o *)this->fields.hpBarUnderSprite;
                              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !LocalizationManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                              }
                              v88 = LocalizationManager__Get((System_String_o *)StringLiteral_13368/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
                              v97 = klass - v85;
                              v89 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v97);
                              v90 = System_String__Format(v88, v89, 0LL);
                              if ( !v87 )
                                goto LABEL_98;
                              UILabel__set_text(v87, v90, 0LL);
                            }
                            v91 = (UILabel_o *)this->fields.hpBarUnderSprite;
                            if ( v91 )
                            {
                              v101.fields.r = v75;
                              v101.fields.g = v76;
                              v101.fields.b = v77;
                              v101.fields.a = v78;
                              UILabel__set_effectColor(v91, v101, 0LL);
                              hpBarSliderUnder = (UIProgressBar_o *)this->fields.hpBarSliderUnder;
                              if ( hpBarSliderUnder )
                              {
                                v93 = 1.0 - (double)v85 / (double)klass;
                                UIProgressBar__set_value(hpBarSliderUnder, v93, 0LL);
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
    sub_B170D4();
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
  if ( (byte_40F843C & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, sprite);
    sub_B16FFC(&StringLiteral_15842/*"_"*/, v8);
    byte_40F843C = 1;
  }
  if ( (gaugeId & 0x80000000) != 0 )
    goto LABEL_8;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  v10 = System_String__Concat_43746016(prefix, (System_String_o *)StringLiteral_15842/*"_"*/, v9, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v10, 0LL) )
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct EventBossStatusUiEntity_o **p_eventBossStatusUiEntity; // x21
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  WebViewManager_o *Instance; // x0
  EventBossStatusUiMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  EventBossStatusUiEntity_o *v19; // x0
  int32_t GaugeId; // w20
  _BOOL8 IsEncounted; // x0
  const MethodInfo *v22; // x4
  TitleInfoSuperBossComponent_o *v23; // x0
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
  const MethodInfo *v35; // x1

  if ( (byte_40F843A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, superBossEntity);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_18523/*"event_superboss_hp_split"*/, v7);
    sub_B16FFC(&StringLiteral_18527/*"event_superboss_hp_white"*/, v8);
    sub_B16FFC(&StringLiteral_18481/*"event_raid_hp_back"*/, v9);
    sub_B16FFC(&StringLiteral_18524/*"event_superboss_hp_split_frame"*/, v10);
    sub_B16FFC(&StringLiteral_18521/*"event_superboss_hp_lower"*/, v11);
    sub_B16FFC(&StringLiteral_18482/*"event_raid_hp_frame"*/, v12);
    sub_B16FFC(&StringLiteral_18525/*"event_superboss_hp_upper"*/, v13);
    byte_40F843A = 1;
  }
  this->fields.eventBossStatusUiEntity = (struct EventBossStatusUiEntity_o *)superBossEntity;
  p_eventBossStatusUiEntity = &this->fields.eventBossStatusUiEntity;
  sub_B16F98(&this->fields.eventBossStatusUiEntity, superBossEntity);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  LOWORD(this->fields.HPto) = 256;
  if ( eventBossStatusUiEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (EventBossStatusUiMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)Instance,
                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___),
          !*p_eventBossStatusUiEntity)
      || !MasterData_WarQuestSelectionMaster
      || ((EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                         MasterData_WarQuestSelectionMaster,
                                         (*p_eventBossStatusUiEntity)->fields.eventId,
                                         (*p_eventBossStatusUiEntity)->fields.idx,
                                         0LL),
           *(_QWORD *)&this->fields.isEncountSuperBoss = EntityFromEventIdAndIndex,
           sub_B16F98(&this->fields.isEncountSuperBoss, EntityFromEventIdAndIndex),
           (v19 = *(EventBossStatusUiEntity_o **)&this->fields.isEncountSuperBoss) == 0LL)
        ? (GaugeId = -1)
        : (GaugeId = EventBossStatusUiEntity__GetGaugeId(v19, 0LL)),
          !*p_eventBossStatusUiEntity) )
    {
      sub_B170D4();
    }
    IsEncounted = EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)*p_eventBossStatusUiEntity, 0LL);
    LOBYTE(this->fields.HPto) = IsEncounted;
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      (TitleInfoSuperBossComponent_o *)IsEncounted,
      this->fields.hpBarUpperSprite,
      (System_String_o *)StringLiteral_18521/*"event_superboss_hp_lower"*/,
      GaugeId,
      v22);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v23,
      this->fields.hpBarWhiteSprite,
      (System_String_o *)StringLiteral_18525/*"event_superboss_hp_upper"*/,
      GaugeId,
      v24);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v25,
      this->fields.hpSplitSprite,
      (System_String_o *)StringLiteral_18527/*"event_superboss_hp_white"*/,
      GaugeId,
      v26);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v27,
      this->fields.hpSplitPointSprite,
      (System_String_o *)StringLiteral_18524/*"event_superboss_hp_split_frame"*/,
      GaugeId,
      v28);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v29,
      (UISprite_o *)this->fields.hpBarSplitterList,
      (System_String_o *)StringLiteral_18523/*"event_superboss_hp_split"*/,
      GaugeId,
      v30);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v31,
      this->fields.superBossHpBg,
      (System_String_o *)StringLiteral_18482/*"event_raid_hp_frame"*/,
      GaugeId,
      v32);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v33,
      (UISprite_o *)this->fields.hpBarSlider,
      (System_String_o *)StringLiteral_18481/*"event_raid_hp_back"*/,
      GaugeId,
      v34);
    TitleInfoSuperBossComponent__SetDisp(this, v35);
  }
}


void __fastcall TitleInfoSuperBossComponent__StartDamageAnimation(
        TitleInfoSuperBossComponent_o *this,
        AssetData_o *mapAssetData,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  System_String_o *v11; // x21
  TitleInfoSuperBossComponent_c *v12; // x0
  System_String_o *v13; // x0
  struct UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  UnityEngine_Object_o *clearBossEffect; // x23
  TitleInfoSuperBossComponent_c *v16; // x0
  struct UnityEngine_GameObject_o *v17; // x0
  TitleInfoSuperBossComponent_c *v18; // x0
  System_String_o *v19; // x0
  WarBoardWaitTimeSetting_o *v20; // x0
  UnityEngine_Object_o *v21; // x22
  const MethodInfo *v22; // x1
  TitleInfoSuperBossComponent_c *v23; // x0
  WarBoardWaitTimeSetting_o *v24; // x0

  if ( (byte_40F843F & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, mapAssetData);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&TitleInfoSuperBossComponent_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_15842/*"_"*/, v9);
    byte_40F843F = 1;
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    goto LABEL_28;
  v11 = System_Int32__ToString((int)eventBossStatusUiEntity + 16, 0LL);
  this->fields.onClearCall = callBack;
  sub_B16F98(&this->fields.onClearCall, callBack);
  v12 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v12 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v13 = System_String__Concat_43746016(
          v12->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_15842/*"_"*/,
          v11,
          0LL);
  if ( !mapAssetData )
LABEL_28:
    sub_B170D4();
  Object_WarBoardWaitTimeSetting = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                        mapAssetData,
                                                                        v13,
                                                                        (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  this->fields.clearBossEffect = Object_WarBoardWaitTimeSetting;
  sub_B16F98(&this->fields.clearBossEffect, Object_WarBoardWaitTimeSetting);
  clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(clearBossEffect, 0LL, 0LL) )
  {
    v16 = TitleInfoSuperBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v16 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v17 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                               mapAssetData,
                                               v16->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    this->fields.clearBossEffect = v17;
    sub_B16F98(&this->fields.clearBossEffect, v17);
  }
  v18 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v18 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v19 = System_String__Concat_43746016(
          v18->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_15842/*"_"*/,
          v11,
          0LL);
  v20 = AssetData__GetObject_WarBoardWaitTimeSetting_(
          mapAssetData,
          v19,
          (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  *(_QWORD *)&this->fields._IsShowClearEvent_k__BackingField = v20;
  sub_B16F98(&this->fields._IsShowClearEvent_k__BackingField, v20);
  v21 = *(UnityEngine_Object_o **)&this->fields._IsShowClearEvent_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v21, 0LL, 0LL) )
  {
    v23 = TitleInfoSuperBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v23 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v24 = AssetData__GetObject_WarBoardWaitTimeSetting_(
            mapAssetData,
            v23->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
            (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    *(_QWORD *)&this->fields._IsShowClearEvent_k__BackingField = v24;
    sub_B16F98(&this->fields._IsShowClearEvent_k__BackingField, v24);
  }
  TitleInfoSuperBossComponent__PlayFrameInBoss(this, v22);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct EasingObject_o *eo; // x8
  struct TitleInfoSuperBossComponent_o *_4__this; // x9
  float mStartTime; // s9
  float v12; // s0
  struct TitleInfoSuperBossComponent_o *v13; // x8
  UIProgressBar_o *hpBarSliderUnder; // x0
  float v15; // s8
  struct TitleInfoSuperBossComponent_o *v16; // x8
  UIProgressBar_o *hpBarSplitter; // x0
  struct TitleInfoSuperBossComponent_o *v18; // x8
  UIProgressBar_o *v19; // x20
  float v20; // s0
  struct TitleInfoSuperBossComponent_o *v21; // x8
  UILabel_o *hpBarUnderSprite; // x20
  System_String_o *v23; // x0
  struct TitleInfoSuperBossComponent_o *v24; // x8
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  System_String_o *v26; // x21
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  struct TitleInfoSuperBossComponent_o *v29; // x8
  float x; // s0
  UnityEngine_Object_o *clearBossEffect; // x20
  _BOOL8 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  struct TitleInfoSuperBossComponent_o *v35; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v36; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v37; // x0
  struct TitleInfoSuperBossComponent_o *v38; // x8
  UnityEngine_GameObject_o *v39; // x20
  UnityEngine_Component_o *Parent; // x0
  struct TitleInfoSuperBossComponent_o *v41; // x9
  struct UISprite_array *hpBarSplitPointList; // x8
  __int64 y_low; // x9
  UnityEngine_Component_o *v44; // x0
  UnityEngine_Transform_o *transform; // x0
  float v46; // s8
  float y; // s9
  float z; // s10
  TitleInfoSuperBossComponent_c *v49; // x0
  float *static_fields; // x8
  struct TitleInfoSuperBossComponent_o *v51; // x9
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  __int64 v53; // x9
  UnityEngine_Component_o *v54; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v56; // x8
  TweenWidth_o *v57; // x0
  struct TitleInfoSuperBossComponent_o *v58; // x8
  struct TitleInfoSuperBossComponent_o *v59; // x8
  double v60; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7837 & 1) == 0 )
  {
    sub_B16FFC(&double_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&TitleInfoSuperBossComponent_TypeInfo, v6);
    sub_B16FFC(&Method_UITweener_Begin_TweenAlpha___, v7);
    sub_B16FFC(&StringLiteral_13368/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v8);
    byte_40F7837 = 1;
  }
  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_51;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_51;
  mStartTime = eo->fields.mStartTime;
  v12 = UnityEngine_Mathf__Lerp(_4__this->fields.HPsplitPoint, *(float *)&_4__this->fields.HPsplitNo, mStartTime, 0LL);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_51;
  hpBarSliderUnder = (UIProgressBar_o *)v13->fields.hpBarSliderUnder;
  if ( !hpBarSliderUnder )
    goto LABEL_51;
  v15 = v12;
  UIProgressBar__set_value(hpBarSliderUnder, v12, 0LL);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_51;
  hpBarSplitter = (UIProgressBar_o *)v16->fields.hpBarSplitter;
  if ( !hpBarSplitter )
    goto LABEL_51;
  UIProgressBar__set_value(hpBarSplitter, v15, 0LL);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_51;
  v19 = (UIProgressBar_o *)v18->fields.hpBarSplitter;
  v20 = sinf(mStartTime * 3.1416);
  if ( !v19 )
    goto LABEL_51;
  UIProgressBar__set_alpha(v19, v20 * 0.7, 0LL);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_51;
  hpBarUnderSprite = (UILabel_o *)v21->fields.hpBarUnderSprite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_13368/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_51;
  eventBossStatusUiEntity = v24->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    goto LABEL_51;
  v26 = v23;
  v60 = (float)(v15 * (float)(__int64)eventBossStatusUiEntity[1].klass);
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v60);
  v28 = System_String__Format(v26, v27, 0LL);
  if ( !hpBarUnderSprite )
    goto LABEL_51;
  UILabel__set_text(hpBarUnderSprite, v28, 0LL);
  v29 = this->fields.__4__this;
  if ( !v29 )
    goto LABEL_51;
  x = v29->fields.originPos.fields.x;
  if ( x > -1.0 && v15 <= x )
  {
    clearBossEffect = (UnityEngine_Object_o *)v29->fields.clearBossEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v32 = UnityEngine_Object__op_Implicit(clearBossEffect, 0LL);
    if ( v32 )
    {
      v35 = this->fields.__4__this;
      if ( !v35 )
        goto LABEL_51;
      v36 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v35->fields.clearBossEffect;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v37 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
              v36,
              (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v38 = this->fields.__4__this;
      if ( !v38 )
        goto LABEL_51;
      v39 = (UnityEngine_GameObject_o *)v37;
      Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v38->fields.hpBarSplitPoint, 0LL);
      GameObjectExtensions__SafeSetParent(v39, Parent, 0LL);
      v41 = this->fields.__4__this;
      if ( !v41 )
        goto LABEL_51;
      hpBarSplitPointList = v41->fields.hpBarSplitPointList;
      if ( !hpBarSplitPointList )
        goto LABEL_51;
      y_low = SLODWORD(v41->fields.originPos.fields.y);
      if ( (unsigned int)y_low >= hpBarSplitPointList->max_length )
        goto LABEL_52;
      v44 = (UnityEngine_Component_o *)hpBarSplitPointList->m_Items[y_low];
      if ( !v44 )
        goto LABEL_51;
      transform = UnityEngine_Component__get_transform(v44, 0LL);
      if ( !transform )
        goto LABEL_51;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
      v46 = localPosition.fields.x;
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      v49 = TitleInfoSuperBossComponent_TypeInfo;
      if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
        v49 = TitleInfoSuperBossComponent_TypeInfo;
      }
      static_fields = (float *)v49->static_fields;
      v62.fields.x = v46 + static_fields[9];
      v62.fields.y = y + static_fields[10];
      v62.fields.z = z + static_fields[11];
      GameObjectExtensions__SetLocalPosition(v39, v62, 0LL);
    }
    v51 = this->fields.__4__this;
    if ( !v51 )
      goto LABEL_51;
    eventSuperBossEntity = v51->fields.eventSuperBossEntity;
    if ( !eventSuperBossEntity )
      goto LABEL_51;
    v53 = SLODWORD(v51->fields.originPos.fields.y);
    if ( (unsigned int)v53 < LODWORD(eventSuperBossEntity->fields.name) )
    {
      v54 = (UnityEngine_Component_o *)*(&eventSuperBossEntity->fields.maxHp + v53);
      if ( v54 )
      {
        gameObject = UnityEngine_Component__get_gameObject(v54, 0LL);
        v56 = TitleInfoSuperBossComponent_TypeInfo;
        if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
          v56 = TitleInfoSuperBossComponent_TypeInfo;
        }
        v57 = UITweener__Begin_TweenWidth_(
                gameObject,
                v56->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenAlpha___);
        if ( v57 )
        {
          v57->fields.style = 2;
          *(_QWORD *)&v57->fields.from = 1065353216LL;
          v58 = this->fields.__4__this;
          if ( v58 )
          {
            v58->fields.originPos.fields.x = -1.0;
            v59 = this->fields.__4__this;
            if ( v59 )
            {
              v59->fields.originPos.fields.y = NAN;
              return;
            }
          }
        }
      }
LABEL_51:
      sub_B170D4();
    }
LABEL_52:
    sub_B17100(v32, v33, v34);
    sub_B170A0();
  }
}