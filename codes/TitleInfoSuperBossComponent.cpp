void __fastcall TitleInfoSuperBossComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  struct TitleInfoSuperBossComponent_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct TitleInfoSuperBossComponent_StaticFields *v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  TitleInfoSuperBossComponent_c *v29; // x8
  struct TitleInfoSuperBossComponent_StaticFields *v30; // x9
  struct TitleInfoSuperBossComponent_StaticFields *v31; // x9

  if ( (byte_41863F7 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoSuperBossComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_14466/*"TitleInfoEventSuperBossEffect_Dead"*/, v8);
    sub_B2C35C(&StringLiteral_14467/*"TitleInfoEventSuperBossEffect_Split"*/, v9);
    sub_B2C35C(&StringLiteral_18598/*"event_superboss_icon_"*/, v10);
    byte_41863F7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_18598/*"event_superboss_icon_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18598/*"event_superboss_icon_"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_14467/*"TitleInfoEventSuperBossEffect_Split"*/;
  v13->SUPERBOSS_SPLIT_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14467/*"TitleInfoEventSuperBossEffect_Split"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v13->SUPERBOSS_SPLIT_EFFECT_PREFAB, v14, v15, v16, v17, v18, v19, v20);
  v21 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_14466/*"TitleInfoEventSuperBossEffect_Dead"*/;
  v21->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14466/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v21->SUPERBOSS_CLEAR_EFFECT_PREFAB, v22, v23, v24, v25, v26, v27, v28);
  v29 = TitleInfoSuperBossComponent_TypeInfo;
  v30 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v30->SUPERBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v30->SUPERBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v31 = v29->static_fields;
  *(_QWORD *)&v31->SUPERBOSS_SPLIT_POS_DELTA.fields.x = 0x41200000BF000000LL;
  v31->SUPERBOSS_SPLIT_POS_DELTA.fields.z = 0.0;
  v29->static_fields->SUPERBOSS_HP_BAR_LENGTH = 264;
  v29->static_fields->ANIM_DURATION_FRAME_IN_BOSS = 0.3;
  v29->static_fields->ANIM_DURATION_HP_NAME_ALPHA = 0.4;
  v29->static_fields->ANIM_DURATION_HP_CUT = 1.2;
  v29->static_fields->ANIM_DURATION_SPLIT_ALPHA = 0.5;
  v29->static_fields->ANIM_DURATION_HP_DELETION = 0.7;
  v29->static_fields->ANIM_DURATION_BOSS_ALPHA = 2.5;
  v29->static_fields->CLEAR_CALLBACK_DELAY = 1.8;
  v29->static_fields->CLEAR_END_CALLBACK_DELAY = 1.5;
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
  __int64 v9; // x1
  __int64 v10; // x1
  System_Action_o *splitHpEffect; // x21
  __int64 v12; // x1
  UnityEngine_Component_o *superBossHpFrame; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v15; // x8

  if ( (byte_41863F4 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoSuperBossComponent_TypeInfo, method);
    sub_B2C35C(&Method_UITweener_Begin_TweenAlpha___, v9);
    sub_B2C35C(&StringLiteral_9996/*"OnEndAnimation"*/, v10);
    byte_41863F4 = 1;
  }
  splitHpEffect = (System_Action_o *)this->fields.splitHpEffect;
  this->fields.splitHpEffect = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.splitHpEffect, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(splitHpEffect, 0LL);
  superBossHpFrame = (UnityEngine_Component_o *)this->fields.superBossHpFrame;
  if ( !superBossHpFrame )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(superBossHpFrame, 0LL);
  v15 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v15 = TitleInfoSuperBossComponent_TypeInfo;
  }
  superBossHpFrame = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                                  gameObject,
                                                  v15->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                  (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !superBossHpFrame )
LABEL_9:
    sub_B2C434(superBossHpFrame, v12);
  LODWORD(superBossHpFrame[1].klass) = 1;
  superBossHpFrame[5].klass = (UnityEngine_Component_c *)1065353216;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9996/*"OnEndAnimation"*/,
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

  if ( (byte_41863F5 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoSuperBossComponent_TypeInfo, splitHp);
    byte_41863F5 = 1;
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
  sub_B2C2F8(p_onClearCall, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(onClearCall, 0LL);
  TitleInfoSuperBossComponent__SetDisp(this, v11);
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
  __int64 v8; // x1
  TweenWidth_o *v9; // x20
  float32x2_t *static_fields; // x8
  float v11; // s1
  int animEndCall_high; // w9
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_41863EF & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoSuperBossComponent_TypeInfo, method);
    sub_B2C35C(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_B2C35C(&StringLiteral_10679/*"PlayHpNameAlpha"*/, v4);
    byte_41863EF = 1;
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
         (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v7 )
    sub_B2C434(0LL, v8);
  v9 = v7;
  static_fields = (float32x2_t *)TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v11 = *((float *)&this->fields.animEndCall + 1) + static_fields[4].n64_f32[0];
  *(float32x2_t *)&v7->fields.from = vadd_f32(*(float32x2_t *)&this->fields.originPos.fields.z, static_fields[3]);
  *(float *)&v7->fields.updateTable = v11;
  animEndCall_high = HIDWORD(this->fields.animEndCall);
  *(_QWORD *)(&v7->fields.updateTable + 4) = *(_QWORD *)&this->fields.originPos.fields.z;
  HIDWORD(v7->fields.mWidget) = animEndCall_high;
  v7->fields.style = 2;
  v13 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v9->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v13;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.eventReceiver, v13, v14, v15, v16, v17, v18, v19);
  v20 = (System_Int32_array **)StringLiteral_10679/*"PlayHpNameAlpha"*/;
  v9->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10679/*"PlayHpNameAlpha"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.callWhenFinished, v20, v21, v22, v23, v24, v25, v26);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x3
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  EasingObject_o *v27; // x21
  TitleInfoSuperBossComponent_c *v28; // x0
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v30; // x22
  System_Action_o *v31; // x20

  if ( (byte_41863F1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v3);
    sub_B2C35C(&Method_TitleInfoSuperBossComponent_PlayHpDeletion__, v4);
    sub_B2C35C(&TitleInfoSuperBossComponent_TypeInfo, v5);
    sub_B2C35C(&Method_TitleInfoSuperBossComponent___c__DisplayClass62_0__PlayHpCut_b__0__, v6);
    sub_B2C35C(&TitleInfoSuperBossComponent___c__DisplayClass62_0_TypeInfo, v7);
    byte_41863F1 = 1;
  }
  v8 = sub_B2C42C(TitleInfoSuperBossComponent___c__DisplayClass62_0_TypeInfo);
  TitleInfoSuperBossComponent___c__DisplayClass62_0___ctor(
    (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)v8,
    0LL);
  if ( !v8 )
    goto LABEL_10;
  *(_QWORD *)(v8 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    goto LABEL_10;
  TitleInfoSuperBossComponent__PlaySeByEventId(v9, eventBossStatusUiEntity->fields.eventId, 1, v17);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v8 + 16) = Component_UIWidget;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 16), Component_UIWidget, v21, v22, v23, v24, v25, v26);
  v27 = *(EasingObject_o **)(v8 + 16);
  v28 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v28 = TitleInfoSuperBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v28->static_fields->ANIM_DURATION_HP_CUT;
  v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v8,
    Method_TitleInfoSuperBossComponent___c__DisplayClass62_0__PlayHpCut_b__0__,
    0LL);
  v31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_TitleInfoSuperBossComponent_PlayHpDeletion__, 0LL);
  if ( !v27 )
LABEL_10:
    sub_B2C434(v9, v10);
  EasingObject__Play(v27, ANIM_DURATION_HP_CUT, v30, v31, 0.0, 0, 0LL);
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
  UnityEngine_Component_o *v14; // x20
  System_Int32_array **v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 *v28; // x8
  UnityEngine_Object_o *v29; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v30; // x21
  UnityEngine_GameObject_o *v31; // x21
  System_Int32_array **v32; // x1
  const MethodInfo *v33; // x3
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  UILabel_o *hpBarUnderSprite; // x20
  EventSuperBossEntity_o *v36; // x8
  int64_t maxHp; // x21
  System_String_o *v38; // x19
  Il2CppObject *v39; // x0
  unsigned __int64 v40; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41863F2 & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&TitleInfoSuperBossComponent_TypeInfo, v6);
    sub_B2C35C(&Method_UITweener_Begin_TweenAlpha___, v7);
    sub_B2C35C(&StringLiteral_9996/*"OnEndAnimation"*/, v8);
    sub_B2C35C(&StringLiteral_12797/*"SetClearAlpha"*/, v9);
    sub_B2C35C(&StringLiteral_13424/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v10);
    byte_41863F2 = 1;
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
  hpBarSliderWhite = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                                  gameObject,
                                                  v13->static_fields->ANIM_DURATION_HP_DELETION,
                                                  (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !hpBarSliderWhite )
    goto LABEL_27;
  v14 = hpBarSliderWhite;
  LODWORD(hpBarSliderWhite[1].klass) = 1;
  hpBarSliderWhite[5].klass = (UnityEngine_Component_c *)1065353216;
  v15 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14[3].klass = (UnityEngine_Component_c *)v15;
  sub_B2C2F8((BattleServantConfConponent_o *)&v14[3], v15, v16, v17, v18, v19, v20, v21);
  if ( *(float *)&this->fields.HPsplitNo <= 0.0 )
  {
    v29 = *(UnityEngine_Object_o **)&this->fields._IsShowClearEvent_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
    {
      v30 = *(UnityEngine_UI_Dropdown_DropdownItem_o **)&this->fields._IsShowClearEvent_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v31 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          v30,
                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent(v31, (UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__ResetLocalPosition(v31, 0LL);
    }
    v28 = &StringLiteral_12797/*"SetClearAlpha"*/;
  }
  else
  {
    v28 = &StringLiteral_9996/*"OnEndAnimation"*/;
  }
  v32 = (System_Int32_array **)*v28;
  v14[3].monitor = (void *)*v28;
  sub_B2C2F8((BattleServantConfConponent_o *)&v14[3].monitor, v32, v22, v23, v24, v25, v26, v27);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    goto LABEL_27;
  TitleInfoSuperBossComponent__PlaySeByEventId(
    (TitleInfoSuperBossComponent_o *)hpBarSliderWhite,
    eventBossStatusUiEntity->fields.eventId,
    0,
    v33);
  hpBarUnderSprite = (UILabel_o *)this->fields.hpBarUnderSprite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  hpBarSliderWhite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13424/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
  v36 = (EventSuperBossEntity_o *)this->fields.eventBossStatusUiEntity;
  if ( !v36
    || (maxHp = v36->fields.maxHp,
        v38 = (System_String_o *)hpBarSliderWhite,
        (hpBarSliderWhite = (UnityEngine_Component_o *)EventSuperBossEntity__GetUserSuperBossEntity(v36, 0LL)) == 0LL)
    || (v40 = maxHp - (unsigned __int64)hpBarSliderWhite[1].monitor,
        v39 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v40),
        hpBarSliderWhite = (UnityEngine_Component_o *)System_String__Format(v38, v39, 0LL),
        !hpBarUnderSprite) )
  {
LABEL_27:
    sub_B2C434(hpBarSliderWhite, method);
  }
  UILabel__set_text(hpBarUnderSprite, (System_String_o *)hpBarSliderWhite, 0LL);
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
  UnityEngine_Component_o *v8; // x20
  System_Int32_array **v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_41863F0 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoSuperBossComponent_TypeInfo, method);
    sub_B2C35C(&Method_UITweener_Begin_TweenAlpha___, v3);
    sub_B2C35C(&StringLiteral_10678/*"PlayHpCut"*/, v4);
    byte_41863F0 = 1;
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
  hpBarUnderSprite = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                                  gameObject,
                                                  v7->static_fields->ANIM_DURATION_HP_NAME_ALPHA,
                                                  (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !hpBarUnderSprite )
LABEL_9:
    sub_B2C434(hpBarUnderSprite, method);
  v8 = hpBarUnderSprite;
  LODWORD(hpBarUnderSprite[1].klass) = 1;
  hpBarUnderSprite[5].klass = (UnityEngine_Component_c *)0x3F80000000000000LL;
  v9 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8[3].klass = (UnityEngine_Component_c *)v9;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8[3], v9, v10, v11, v12, v13, v14, v15);
  v16 = (System_Int32_array **)StringLiteral_10678/*"PlayHpCut"*/;
  v8[3].monitor = (void *)StringLiteral_10678/*"PlayHpCut"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8[3].monitor, v16, v17, v18, v19, v20, v21, v22);
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
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  __int64 *v14; // x20
  System_String_o *v15; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41863F6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&SoundManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_16434/*"ar12"*/, v9);
    sub_B2C35C(&StringLiteral_16445/*"ar60"*/, v10);
    sub_B2C35C(&StringLiteral_1/*""*/, v11);
    byte_41863F6 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v13);
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    eventId,
    (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( entity )
  {
    v14 = &StringLiteral_16445/*"ar60"*/;
    if ( !EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
    {
      if ( entity )
      {
        if ( !EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL) )
          v14 = &StringLiteral_16434/*"ar12"*/;
      }
      else
      {
        v14 = &StringLiteral_16434/*"ar12"*/;
      }
    }
  }
  else
  {
    v14 = &StringLiteral_16434/*"ar12"*/;
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
    SoundManager__stopSe_24811580(v15, 0.0, 0LL);
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

  if ( (byte_41863EA & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, spName);
    byte_41863EA = 1;
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
    sub_B2C434(v6, v7);
  }
}


void __fastcall TitleInfoSuperBossComponent__SetClearAlpha(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoSuperBossComponent_c *v4; // x0

  if ( (byte_41863F3 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoSuperBossComponent_TypeInfo, method);
    sub_B2C35C(&StringLiteral_5343/*"DoClearCallback"*/, v3);
    byte_41863F3 = 1;
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
    (System_String_o *)StringLiteral_5343/*"DoClearCallback"*/,
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  EventSuperBossEntity_o *eventBossStatusUiEntity; // x0
  struct EventBossStatusUiEntity_o *v16; // x8
  __int64 maxHp; // x21
  float v18; // s0
  float v19; // s0
  struct EventBossStatusUiEntity_o *v20; // x8
  float v21; // s0
  float v22; // s0
  struct EventBossStatusUiEntity_o *v23; // x8
  __int64 v24; // x11
  int v25; // w10
  __int64 v26; // x9
  __int64 v27; // x11
  int64_t v28; // x12
  __int64 klass; // d0
  UnityEngine_Transform_o *v30; // x21
  long double v31; // q8
  float y; // s9
  float z; // s10
  TitleInfoSuperBossComponent_c *v34; // x0
  float *static_fields; // x8
  UILabel_o *hpBarUnderSprite; // x21
  struct EventBossStatusUiEntity_o *v37; // x8
  System_String_o *v38; // x22
  Il2CppObject *v39; // x0
  long double v40; // q0
  struct EventBossStatusUiEntity_o *v41; // x8
  __int64 v42; // x9
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x10
  int v44; // w21
  unsigned int v45; // w22
  __int64 v46; // x8
  struct EventSuperBossEntity_o *v47; // x9
  __int64 v48; // x0
  int64_t v49; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41863ED & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, damage);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&TitleInfoSuperBossComponent_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_13424/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v13);
    byte_41863ED = 1;
  }
  this->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)onClearCallback;
  sub_B2C2F8(
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
  v16 = this->fields.eventBossStatusUiEntity;
  if ( !v16 )
    goto LABEL_53;
  maxHp = eventBossStatusUiEntity->fields.maxHp;
  v18 = 1.0 - (double)damage / (double)(__int64)v16[1].klass;
  v19 = UnityEngine_Mathf__Clamp01(v18, 0LL);
  v20 = this->fields.eventBossStatusUiEntity;
  this->fields.HPsplitPoint = v19;
  if ( !v20 )
    goto LABEL_53;
  v21 = 1.0 - (double)maxHp / (double)(__int64)v20[1].klass;
  v22 = UnityEngine_Mathf__Clamp01(v21, 0LL);
  v23 = this->fields.eventBossStatusUiEntity;
  *(float *)&this->fields.HPsplitNo = v22;
  *(_QWORD *)&this->fields.originPos.fields.x = -1082130432LL;
  if ( !v23 )
    goto LABEL_53;
  v24 = *(_QWORD *)&v23[1].fields.eventId;
  if ( !v24 )
    goto LABEL_53;
  v25 = *(_DWORD *)(v24 + 24);
  if ( v25 >= 1 )
  {
    v26 = 0LL;
    v27 = v24 + 32;
    while ( 1 )
    {
      v28 = *(_QWORD *)(v27 + 8 * v26);
      if ( v28 > damage && v28 <= maxHp )
        break;
      if ( (int)++v26 >= v25 )
        goto LABEL_16;
    }
    klass = (__int64)v23[1].klass;
    LODWORD(this->fields.originPos.fields.y) = v26;
    *(float *)&klass = 1.0 - (double)v28 / (double)klass;
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
  v30 = (UnityEngine_Transform_o *)eventBossStatusUiEntity;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)eventBossStatusUiEntity, 0LL);
  v31 = *(long double *)&localPosition.fields.x;
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
  v51.fields.x = *(float *)&v31 + static_fields[6];
  v51.fields.y = y + static_fields[7];
  v51.fields.z = z + static_fields[8];
  UnityEngine_Transform__set_localPosition(v30, v51, 0LL);
  hpBarUnderSprite = (UILabel_o *)this->fields.hpBarUnderSprite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  eventBossStatusUiEntity = (EventSuperBossEntity_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_13424/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/,
                                                        0LL);
  v37 = this->fields.eventBossStatusUiEntity;
  if ( !v37 )
    goto LABEL_53;
  v38 = (System_String_o *)eventBossStatusUiEntity;
  v49 = (int64_t)v37[1].klass - damage;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v49);
  eventBossStatusUiEntity = (EventSuperBossEntity_o *)System_String__Format(v38, v39, 0LL);
  if ( !hpBarUnderSprite
    || (UILabel__set_text(hpBarUnderSprite, (System_String_o *)eventBossStatusUiEntity, 0LL),
        (eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarUnderSprite) == 0LL)
    || (eventBossStatusUiEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, float))&eventBossStatusUiEntity->klass[1]._1.byval_arg.bits)(
                                                              eventBossStatusUiEntity,
                                                              eventBossStatusUiEntity->klass[1]._1.this_arg.data,
                                                              0.0),
        (v41 = this->fields.eventBossStatusUiEntity) == 0LL)
    || (v42 = *(_QWORD *)&v41[1].fields.eventId) == 0 )
  {
LABEL_53:
    sub_B2C434(eventBossStatusUiEntity, v14);
  }
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( eventSuperBossEntity )
  {
    v44 = *(_DWORD *)(v42 + 24);
    if ( v44 <= SLODWORD(eventSuperBossEntity->fields.name) && v44 >= 1 )
    {
      v45 = 0;
      LODWORD(v31) = 1.0;
      while ( 1 )
      {
        v46 = *(_QWORD *)&v41[1].fields.eventId;
        if ( !v46 )
          goto LABEL_53;
        if ( v45 >= *(_DWORD *)(v46 + 24) )
          goto LABEL_55;
        v47 = this->fields.eventSuperBossEntity;
        if ( !v47 )
          goto LABEL_53;
        if ( v45 >= LODWORD(v47->fields.name) )
        {
LABEL_55:
          v48 = sub_B2C460(eventBossStatusUiEntity);
          sub_B2C400(v48, 0LL);
        }
        eventBossStatusUiEntity = (EventSuperBossEntity_o *)*(&v47->fields.maxHp + (int)v45);
        if ( !eventBossStatusUiEntity )
          goto LABEL_53;
        if ( *(_QWORD *)(v46 + 8LL * (int)v45 + 32) <= damage )
          LODWORD(v40) = 0;
        else
          v40 = v31;
        eventBossStatusUiEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, long double))&eventBossStatusUiEntity->klass[1]._1.byval_arg.bits)(
                                                              eventBossStatusUiEntity,
                                                              eventBossStatusUiEntity->klass[1]._1.this_arg.data,
                                                              v40);
        if ( (int)++v45 >= v44 )
          return;
        v41 = this->fields.eventBossStatusUiEntity;
        if ( !v41 )
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
  EventSuperBossEntity_o *eventBossStatusUiEntity; // x0
  EventSuperBossEntity_o *v12; // x20
  struct EventBossStatusUiEntity_o *v13; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x2
  struct EventBossStatusUiEntity_o *v18; // x8
  __int64 v19; // x8
  int v20; // w21
  struct UISprite_array **p_hpBarSplitPointList; // x22
  struct EventSuperBossEntity_o **p_eventSuperBossEntity; // x23
  char v23; // w27
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x3
  __int64 v39; // x28
  il2cpp_array_size_t v40; // w24
  struct UISprite_array *hpBarSplitPointList; // x25
  struct UnityEngine_GameObject_o *hpBarSplitPoint; // x26
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x26
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x25
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x26
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x26
  Il2CppClass **v65; // x0
  struct UISprite_array *v66; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventSuperBossEntity_o *v68; // x26
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x25
  EventSuperBossEntity_c **v76; // x0
  struct EventSuperBossEntity_o *v77; // x8
  UnityEngine_GameObject_o *v78; // x0
  struct EventBossStatusUiEntity_o *v79; // x8
  __int64 v80; // x9
  float HpSplitPositionX; // s0
  struct UISprite_array *v82; // x8
  float v83; // s9
  struct EventSuperBossEntity_o *v84; // x8
  long double v85; // q0
  struct EventBossStatusUiEntity_o *v86; // x8
  __int64 v87; // x8
  struct EventSuperBossEntity_o *v88; // x9
  EventBossStatusUiEntity_o *v89; // x0
  float v90; // s0
  float v91; // s1
  float v92; // s2
  float v93; // s3
  float v94; // s8
  float v95; // s9
  float v96; // s10
  float v97; // s11
  struct EventBossStatusUiEntity_o *v98; // x8
  __int64 klass; // x22
  __int64 v100; // x23
  UILabel_o *hpBarUnderSprite; // x20
  System_String_o *v102; // x21
  Il2CppObject *v103; // x0
  float v104; // s0
  __int64 v105; // x0
  __int64 v106; // x0
  char v107; // [xsp+4h] [xbp-8Ch]
  UnityEngine_Component_o *v108; // [xsp+8h] [xbp-88h]
  UnityEngine_Component_o *parent; // [xsp+10h] [xbp-80h]
  __int64 v110; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_41863EC & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    sub_B2C35C(&long_TypeInfo, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&TitleInfoSuperBossComponent_TypeInfo, v8);
    sub_B2C35C(&UISprite___TypeInfo, v9);
    sub_B2C35C(&StringLiteral_13424/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v10);
    byte_41863EC = 1;
  }
  if ( LOBYTE(this->fields.HPto) || LOBYTE(this[1].klass) )
  {
    eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.eventBossStatusUiEntity;
    if ( eventBossStatusUiEntity )
    {
      eventBossStatusUiEntity = (EventSuperBossEntity_o *)EventSuperBossEntity__GetUserSuperBossEntity(
                                                            eventBossStatusUiEntity,
                                                            0LL);
      v12 = eventBossStatusUiEntity;
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
        v16 = System_String__Concat_44305532(SUPERBOSS_ICON_SPNAME_PREFIX, v15, 0LL);
        TitleInfoSuperBossComponent__SetBossIcon(this, v16, v17);
        v18 = this->fields.eventBossStatusUiEntity;
        if ( v18 )
        {
          v19 = *(_QWORD *)&v18[1].fields.eventId;
          if ( v19 )
          {
            v20 = *(_DWORD *)(v19 + 24);
            if ( v20 >= 1 )
            {
              p_hpBarSplitPointList = &this->fields.hpBarSplitPointList;
              p_eventSuperBossEntity = &this->fields.eventSuperBossEntity;
              if ( this->fields.hpBarSplitPointList && *p_eventSuperBossEntity )
              {
                v23 = 1;
              }
              else
              {
                v24 = (System_Int32_array **)sub_B2C374(UISprite___TypeInfo, (unsigned int)v20);
                *p_hpBarSplitPointList = (struct UISprite_array *)v24;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)&this->fields.hpBarSplitPointList,
                  v24,
                  v25,
                  v26,
                  v27,
                  v28,
                  v29,
                  v30);
                v31 = (System_Int32_array **)sub_B2C374(UISprite___TypeInfo, (unsigned int)v20);
                *p_eventSuperBossEntity = (struct EventSuperBossEntity_o *)v31;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)&this->fields.eventSuperBossEntity,
                  v31,
                  v32,
                  v33,
                  v34,
                  v35,
                  v36,
                  v37);
                v23 = 0;
              }
              parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.hpBarSplitPoint, 0LL);
              eventBossStatusUiEntity = (EventSuperBossEntity_o *)GameObjectExtensions__GetParent(
                                                                    (UnityEngine_GameObject_o *)this->fields.totalHpLabel,
                                                                    0LL);
              v108 = (UnityEngine_Component_o *)eventBossStatusUiEntity;
              v39 = 4LL;
              LODWORD(v2) = 1.0;
              v107 = v23;
              do
              {
                v40 = v39 - 4;
                if ( (v23 & 1) == 0 )
                {
                  hpBarSplitPointList = this->fields.hpBarSplitPointList;
                  hpBarSplitPoint = this->fields.hpBarSplitPoint;
                  if ( (_DWORD)v39 == 4 )
                  {
                    if ( !hpBarSplitPoint )
                      goto LABEL_98;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          this->fields.hpBarSplitPoint,
                                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitPointList )
                      goto LABEL_98;
                    v49 = (System_Int32_array **)eventBossStatusUiEntity;
                    if ( eventBossStatusUiEntity )
                    {
                      eventBossStatusUiEntity = (EventSuperBossEntity_o *)sub_B2C41C(
                                                                            eventBossStatusUiEntity,
                                                                            hpBarSplitPointList->obj.klass->_1.element_class);
                      if ( !eventBossStatusUiEntity )
                        goto LABEL_100;
                    }
                    if ( !hpBarSplitPointList->max_length )
                      goto LABEL_99;
                    hpBarSplitPointList->m_Items[0] = (UISprite_o *)v49;
                    sub_B2C2F8(
                      (BattleServantConfConponent_o *)hpBarSplitPointList->m_Items,
                      v49,
                      v43,
                      v44,
                      v45,
                      v46,
                      v47,
                      v48);
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel;
                    if ( !eventBossStatusUiEntity )
                      goto LABEL_98;
                    eventSuperBossEntity = this->fields.eventSuperBossEntity;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          (UnityEngine_GameObject_o *)eventBossStatusUiEntity,
                                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !eventSuperBossEntity )
                      goto LABEL_98;
                    v57 = (System_Int32_array **)eventBossStatusUiEntity;
                    if ( eventBossStatusUiEntity )
                    {
                      eventBossStatusUiEntity = (EventSuperBossEntity_o *)sub_B2C41C(
                                                                            eventBossStatusUiEntity,
                                                                            eventSuperBossEntity->klass->_1.element_class);
                      if ( !eventBossStatusUiEntity )
                        goto LABEL_100;
                    }
                    if ( !LODWORD(eventSuperBossEntity->fields.name) )
                      goto LABEL_99;
                    eventSuperBossEntity->fields.maxHp = (int64_t)v57;
                    sub_B2C2F8(
                      (BattleServantConfConponent_o *)&eventSuperBossEntity->fields.maxHp,
                      v57,
                      v51,
                      v52,
                      v53,
                      v54,
                      v55,
                      v56);
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
                                                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventBossStatusUiEntity )
                      goto LABEL_98;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          (UnityEngine_GameObject_o *)eventBossStatusUiEntity,
                                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitPointList )
                      goto LABEL_98;
                    v64 = (System_Int32_array **)eventBossStatusUiEntity;
                    if ( eventBossStatusUiEntity )
                    {
                      eventBossStatusUiEntity = (EventSuperBossEntity_o *)sub_B2C41C(
                                                                            eventBossStatusUiEntity,
                                                                            hpBarSplitPointList->obj.klass->_1.element_class);
                      if ( !eventBossStatusUiEntity )
                      {
LABEL_100:
                        v106 = sub_B2C454();
                        sub_B2C400(v106, 0LL);
                      }
                    }
                    if ( v40 >= hpBarSplitPointList->max_length )
                      goto LABEL_99;
                    v65 = &hpBarSplitPointList->obj.klass + (int)v40;
                    v65[4] = (Il2CppClass *)v64;
                    sub_B2C2F8((BattleServantConfConponent_o *)(v65 + 4), v64, v58, v59, v60, v61, v62, v63);
                    v66 = *p_hpBarSplitPointList;
                    if ( !*p_hpBarSplitPointList )
                      goto LABEL_98;
                    if ( v40 >= v66->max_length )
                      goto LABEL_99;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)v66->m_Items[v40];
                    if ( !eventBossStatusUiEntity )
                      goto LABEL_98;
                    gameObject = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)eventBossStatusUiEntity,
                                   0LL);
                    GameObjectExtensions__SafeSetParent(gameObject, parent, 0LL);
                    v68 = this->fields.eventSuperBossEntity;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.totalHpLabel,
                                                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventBossStatusUiEntity )
                      goto LABEL_98;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          (UnityEngine_GameObject_o *)eventBossStatusUiEntity,
                                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !v68 )
                      goto LABEL_98;
                    v75 = (System_Int32_array **)eventBossStatusUiEntity;
                    if ( eventBossStatusUiEntity )
                    {
                      eventBossStatusUiEntity = (EventSuperBossEntity_o *)sub_B2C41C(
                                                                            eventBossStatusUiEntity,
                                                                            v68->klass->_1.element_class);
                      if ( !eventBossStatusUiEntity )
                        goto LABEL_100;
                    }
                    if ( v40 >= LODWORD(v68->fields.name) )
                      goto LABEL_99;
                    v76 = &v68->klass + (int)v40;
                    v76[4] = (EventSuperBossEntity_c *)v75;
                    sub_B2C2F8((BattleServantConfConponent_o *)(v76 + 4), v75, v69, v70, v71, v72, v73, v74);
                    v77 = this->fields.eventSuperBossEntity;
                    if ( !v77 )
                      goto LABEL_98;
                    if ( v40 >= LODWORD(v77->fields.name) )
                      goto LABEL_99;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)*(&v77->fields.maxHp + (int)v40);
                    if ( !eventBossStatusUiEntity )
                      goto LABEL_98;
                    v78 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventBossStatusUiEntity, 0LL);
                    GameObjectExtensions__SafeSetParent(v78, v108, 0LL);
                    v23 = v107;
                  }
                }
                v79 = this->fields.eventBossStatusUiEntity;
                if ( !v79 )
                  goto LABEL_98;
                v80 = *(_QWORD *)&v79[1].fields.eventId;
                if ( !v80 )
                  goto LABEL_98;
                if ( v40 >= *(_DWORD *)(v80 + 24) )
                  goto LABEL_99;
                HpSplitPositionX = TitleInfoSuperBossComponent__GetHpSplitPositionX(
                                     (TitleInfoSuperBossComponent_o *)eventBossStatusUiEntity,
                                     *(_QWORD *)(v80 + 8 * v39),
                                     (int64_t)v79[1].klass,
                                     v38);
                v82 = *p_hpBarSplitPointList;
                if ( !*p_hpBarSplitPointList )
                  goto LABEL_98;
                if ( v40 >= v82->max_length )
                  goto LABEL_99;
                eventBossStatusUiEntity = (EventSuperBossEntity_o *)*((_QWORD *)&v82->obj.klass + v39);
                if ( !eventBossStatusUiEntity )
                  goto LABEL_98;
                v83 = HpSplitPositionX;
                eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)eventBossStatusUiEntity,
                                                                      0LL);
                if ( !eventBossStatusUiEntity )
                  goto LABEL_98;
                v111.fields.y = 0.0;
                v111.fields.z = 0.0;
                v111.fields.x = v83;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventBossStatusUiEntity, v111, 0LL);
                v84 = this->fields.eventSuperBossEntity;
                if ( !v84 )
                  goto LABEL_98;
                if ( v40 >= LODWORD(v84->fields.name) )
                  goto LABEL_99;
                eventBossStatusUiEntity = (EventSuperBossEntity_o *)*((_QWORD *)&v84->klass + v39);
                if ( !eventBossStatusUiEntity )
                  goto LABEL_98;
                eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)eventBossStatusUiEntity,
                                                                      0LL);
                if ( !eventBossStatusUiEntity )
                  goto LABEL_98;
                v112.fields.y = 0.0;
                v112.fields.z = 0.0;
                v112.fields.x = v83;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventBossStatusUiEntity, v112, 0LL);
                v86 = this->fields.eventBossStatusUiEntity;
                if ( !v86 )
                  goto LABEL_98;
                v87 = *(_QWORD *)&v86[1].fields.eventId;
                if ( !v87 )
                  goto LABEL_98;
                if ( v40 >= *(_DWORD *)(v87 + 24) )
                  goto LABEL_99;
                if ( !v12 )
                  goto LABEL_98;
                v88 = this->fields.eventSuperBossEntity;
                if ( !v88 )
                  goto LABEL_98;
                if ( v40 >= LODWORD(v88->fields.name) )
                {
LABEL_99:
                  v105 = sub_B2C460(eventBossStatusUiEntity);
                  sub_B2C400(v105, 0LL);
                }
                eventBossStatusUiEntity = (EventSuperBossEntity_o *)*((_QWORD *)&v88->klass + v39);
                if ( !eventBossStatusUiEntity )
                  goto LABEL_98;
                if ( *(_QWORD *)(v87 + 8 * v39) <= v12->fields.maxHp )
                  LODWORD(v85) = 0;
                else
                  v85 = v2;
                eventBossStatusUiEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, long double))&eventBossStatusUiEntity->klass[1]._1.byval_arg.bits)(
                                                                      eventBossStatusUiEntity,
                                                                      eventBossStatusUiEntity->klass[1]._1.this_arg.data,
                                                                      v85);
                ++v39;
              }
              while ( (int)v39 - 4 < v20 );
            }
            v89 = *(EventBossStatusUiEntity_o **)&this->fields.isEncountSuperBoss;
            if ( v89 )
            {
              v113.fields.r = 0.0;
              v113.fields.g = 0.0;
              v113.fields.b = 0.0;
              v113.fields.a = 0.0;
              *(UnityEngine_Color_o *)&v90 = EventBossStatusUiEntity__GetTextEffectColor(v89, v113, 0LL);
            }
            else
            {
              eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.eventBossStatusUiEntity;
              if ( !eventBossStatusUiEntity )
                goto LABEL_98;
              *(UnityEngine_Color_o *)&v90 = EventSuperBossEntity__GetBossColor(eventBossStatusUiEntity, 0LL);
            }
            eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarSplitter;
            v94 = v90;
            v95 = v91;
            v96 = v92;
            v97 = v93;
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
                    v98 = this->fields.eventBossStatusUiEntity;
                    if ( v98 )
                    {
                      if ( v12 )
                      {
                        klass = (__int64)v98[1].klass;
                        eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarUnderSprite;
                        v100 = v12->fields.maxHp >= klass ? (__int64)v98[1].klass : v12->fields.maxHp;
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
                              v102 = LocalizationManager__Get((System_String_o *)StringLiteral_13424/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
                              v110 = klass - v100;
                              v103 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v110);
                              eventBossStatusUiEntity = (EventSuperBossEntity_o *)System_String__Format(v102, v103, 0LL);
                              if ( !hpBarUnderSprite )
                                goto LABEL_98;
                              UILabel__set_text(hpBarUnderSprite, (System_String_o *)eventBossStatusUiEntity, 0LL);
                            }
                            eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarUnderSprite;
                            if ( eventBossStatusUiEntity )
                            {
                              v114.fields.r = v94;
                              v114.fields.g = v95;
                              v114.fields.b = v96;
                              v114.fields.a = v97;
                              UILabel__set_effectColor((UILabel_o *)eventBossStatusUiEntity, v114, 0LL);
                              eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderUnder;
                              if ( eventBossStatusUiEntity )
                              {
                                v104 = 1.0 - (double)v100 / (double)klass;
                                UIProgressBar__set_value((UIProgressBar_o *)eventBossStatusUiEntity, v104, 0LL);
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
    sub_B2C434(eventBossStatusUiEntity, method);
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
  if ( (byte_41863EB & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, sprite);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v8);
    byte_41863EB = 1;
  }
  if ( (gaugeId & 0x80000000) != 0 )
    goto LABEL_8;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  v10 = System_String__Concat_44307816(prefix, (System_String_o *)StringLiteral_15905/*"_"*/, v9, 0LL);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  struct EventBossStatusUiEntity_o **p_eventBossStatusUiEntity; // x21
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  System_Int32_array **EntityFromEventIdAndIndex; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  EventBossStatusUiEntity_o *v29; // x0
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

  if ( (byte_41863E9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, superBossEntity);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&StringLiteral_18593/*"event_superboss_hp_split"*/, v11);
    sub_B2C35C(&StringLiteral_18597/*"event_superboss_hp_white"*/, v12);
    sub_B2C35C(&StringLiteral_18550/*"event_raid_hp_back"*/, v13);
    sub_B2C35C(&StringLiteral_18594/*"event_superboss_hp_split_frame"*/, v14);
    sub_B2C35C(&StringLiteral_18591/*"event_superboss_hp_lower"*/, v15);
    sub_B2C35C(&StringLiteral_18551/*"event_raid_hp_frame"*/, v16);
    sub_B2C35C(&StringLiteral_18595/*"event_superboss_hp_upper"*/, v17);
    byte_41863E9 = 1;
  }
  this->fields.eventBossStatusUiEntity = (struct EventBossStatusUiEntity_o *)superBossEntity;
  p_eventBossStatusUiEntity = &this->fields.eventBossStatusUiEntity;
  sub_B2C2F8(
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___),
          !*p_eventBossStatusUiEntity)
      || !Instance
      || ((EntityFromEventIdAndIndex = (System_Int32_array **)EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                                                (EventBossStatusUiMaster_o *)Instance,
                                                                (*p_eventBossStatusUiEntity)->fields.eventId,
                                                                (*p_eventBossStatusUiEntity)->fields.idx,
                                                                0LL),
           *(_QWORD *)&this->fields.isEncountSuperBoss = EntityFromEventIdAndIndex,
           sub_B2C2F8(
             (BattleServantConfConponent_o *)&this->fields.isEncountSuperBoss,
             EntityFromEventIdAndIndex,
             v23,
             v24,
             v25,
             v26,
             v27,
             v28),
           (v29 = *(EventBossStatusUiEntity_o **)&this->fields.isEncountSuperBoss) == 0LL)
        ? (GaugeId = -1)
        : (GaugeId = EventBossStatusUiEntity__GetGaugeId(v29, 0LL)),
          (Instance = (DataManager_o *)*p_eventBossStatusUiEntity) == 0LL) )
    {
      sub_B2C434(Instance, v21);
    }
    IsEncounted = EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)Instance, 0LL);
    LOBYTE(this->fields.HPto) = IsEncounted;
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      (TitleInfoSuperBossComponent_o *)IsEncounted,
      this->fields.hpBarUpperSprite,
      (System_String_o *)StringLiteral_18591/*"event_superboss_hp_lower"*/,
      GaugeId,
      v32);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v33,
      this->fields.hpBarWhiteSprite,
      (System_String_o *)StringLiteral_18595/*"event_superboss_hp_upper"*/,
      GaugeId,
      v34);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v35,
      this->fields.hpSplitSprite,
      (System_String_o *)StringLiteral_18597/*"event_superboss_hp_white"*/,
      GaugeId,
      v36);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v37,
      this->fields.hpSplitPointSprite,
      (System_String_o *)StringLiteral_18594/*"event_superboss_hp_split_frame"*/,
      GaugeId,
      v38);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v39,
      (UISprite_o *)this->fields.hpBarSplitterList,
      (System_String_o *)StringLiteral_18593/*"event_superboss_hp_split"*/,
      GaugeId,
      v40);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v41,
      this->fields.superBossHpBg,
      (System_String_o *)StringLiteral_18551/*"event_raid_hp_frame"*/,
      GaugeId,
      v42);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v43,
      (UISprite_o *)this->fields.hpBarSlider,
      (System_String_o *)StringLiteral_18550/*"event_raid_hp_back"*/,
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
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  System_String_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  TitleInfoSuperBossComponent_c *v18; // x0
  System_Int32_array **Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Object_o *clearBossEffect; // x23
  TitleInfoSuperBossComponent_c *v27; // x0
  System_Int32_array **v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  TitleInfoSuperBossComponent_c *v35; // x0
  System_String_o *v36; // x0
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_Object_o *v44; // x22
  const MethodInfo *v45; // x1
  TitleInfoSuperBossComponent_c *v46; // x0
  System_Int32_array **v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7

  v6 = this;
  if ( (byte_41863EE & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, mapAssetData);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&TitleInfoSuperBossComponent_TypeInfo, v8);
    this = (TitleInfoSuperBossComponent_o *)sub_B2C35C(&StringLiteral_15905/*"_"*/, v9);
    byte_41863EE = 1;
  }
  eventBossStatusUiEntity = v6->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    goto LABEL_28;
  v11 = System_Int32__ToString((int)eventBossStatusUiEntity + 16, 0LL);
  v6->fields.onClearCall = callBack;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v6->fields.onClearCall,
    (System_Int32_array **)callBack,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v18 = TitleInfoSuperBossComponent_TypeInfo;
  }
  this = (TitleInfoSuperBossComponent_o *)System_String__Concat_44307816(
                                            v18->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
                                            (System_String_o *)StringLiteral_15905/*"_"*/,
                                            v11,
                                            0LL);
  if ( !mapAssetData )
LABEL_28:
    sub_B2C434(this, mapAssetData);
  Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                            mapAssetData,
                                                            (System_String_o *)this,
                                                            (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v6->fields.clearBossEffect,
    Object_WarBoardWaitTimeSetting,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  clearBossEffect = (UnityEngine_Object_o *)v6->fields.clearBossEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(clearBossEffect, 0LL, 0LL) )
  {
    v27 = TitleInfoSuperBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v27 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v28 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                   mapAssetData,
                                   v27->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
                                   (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
    v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)v28;
    sub_B2C2F8((BattleServantConfConponent_o *)&v6->fields.clearBossEffect, v28, v29, v30, v31, v32, v33, v34);
  }
  v35 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v35 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v36 = System_String__Concat_44307816(
          v35->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_15905/*"_"*/,
          v11,
          0LL);
  v37 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 mapAssetData,
                                 v36,
                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  *(_QWORD *)&v6->fields._IsShowClearEvent_k__BackingField = v37;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v6->fields._IsShowClearEvent_k__BackingField,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = *(UnityEngine_Object_o **)&v6->fields._IsShowClearEvent_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v44, 0LL, 0LL) )
  {
    v46 = TitleInfoSuperBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v46 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v47 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                   mapAssetData,
                                   v46->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
                                   (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
    *(_QWORD *)&v6->fields._IsShowClearEvent_k__BackingField = v47;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v6->fields._IsShowClearEvent_k__BackingField,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
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
  float v14; // s8
  struct TitleInfoSuperBossComponent_o *v15; // x8
  struct TitleInfoSuperBossComponent_o *v16; // x8
  UIProgressBar_o *hpBarSplitter; // x20
  float v18; // s0
  struct TitleInfoSuperBossComponent_o *v19; // x8
  UILabel_o *hpBarUnderSprite; // x20
  struct TitleInfoSuperBossComponent_o *v21; // x8
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  System_String_o *v23; // x21
  Il2CppObject *v24; // x0
  struct TitleInfoSuperBossComponent_o *v25; // x8
  float x; // s0
  UnityEngine_Object_o *clearBossEffect; // x20
  struct TitleInfoSuperBossComponent_o *v28; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v29; // x20
  struct TitleInfoSuperBossComponent_o *v30; // x8
  UnityEngine_GameObject_o *v31; // x20
  UnityEngine_Component_o *Parent; // x0
  struct TitleInfoSuperBossComponent_o *v33; // x9
  struct UISprite_array *hpBarSplitPointList; // x8
  __int64 y_low; // x9
  float v36; // s8
  float y; // s9
  float z; // s10
  TitleInfoSuperBossComponent_c *v39; // x0
  float *static_fields; // x8
  struct TitleInfoSuperBossComponent_o *v41; // x9
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  __int64 v43; // x9
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v45; // x8
  struct TitleInfoSuperBossComponent_o *v46; // x8
  struct TitleInfoSuperBossComponent_o *v47; // x8
  __int64 v48; // x0
  double v49; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4185346 & 1) == 0 )
  {
    sub_B2C35C(&double_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&TitleInfoSuperBossComponent_TypeInfo, v6);
    sub_B2C35C(&Method_UITweener_Begin_TweenAlpha___, v7);
    this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)sub_B2C35C(&StringLiteral_13424/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v8);
    byte_4185346 = 1;
  }
  eo = v2->fields.eo;
  if ( !eo )
    goto LABEL_51;
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_51;
  mStartTime = eo->fields.mStartTime;
  v12 = UnityEngine_Mathf__Lerp(_4__this->fields.HPsplitPoint, *(float *)&_4__this->fields.HPsplitNo, mStartTime, 0LL);
  v13 = v2->fields.__4__this;
  if ( !v13 )
    goto LABEL_51;
  this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)v13->fields.hpBarSliderUnder;
  if ( !this )
    goto LABEL_51;
  v14 = v12;
  UIProgressBar__set_value((UIProgressBar_o *)this, v12, 0LL);
  v15 = v2->fields.__4__this;
  if ( !v15 )
    goto LABEL_51;
  this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)v15->fields.hpBarSplitter;
  if ( !this )
    goto LABEL_51;
  UIProgressBar__set_value((UIProgressBar_o *)this, v14, 0LL);
  v16 = v2->fields.__4__this;
  if ( !v16 )
    goto LABEL_51;
  hpBarSplitter = (UIProgressBar_o *)v16->fields.hpBarSplitter;
  v18 = sinf(mStartTime * 3.1416);
  if ( !hpBarSplitter )
    goto LABEL_51;
  UIProgressBar__set_alpha(hpBarSplitter, v18 * 0.7, 0LL);
  v19 = v2->fields.__4__this;
  if ( !v19 )
    goto LABEL_51;
  hpBarUnderSprite = (UILabel_o *)v19->fields.hpBarUnderSprite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_13424/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/,
                                                                  0LL);
  v21 = v2->fields.__4__this;
  if ( !v21 )
    goto LABEL_51;
  eventBossStatusUiEntity = v21->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    goto LABEL_51;
  v23 = (System_String_o *)this;
  v49 = (float)(v14 * (float)(__int64)eventBossStatusUiEntity[1].klass);
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v49);
  this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)System_String__Format(v23, v24, 0LL);
  if ( !hpBarUnderSprite )
    goto LABEL_51;
  UILabel__set_text(hpBarUnderSprite, (System_String_o *)this, 0LL);
  v25 = v2->fields.__4__this;
  if ( !v25 )
    goto LABEL_51;
  x = v25->fields.originPos.fields.x;
  if ( x > -1.0 && v14 <= x )
  {
    clearBossEffect = (UnityEngine_Object_o *)v25->fields.clearBossEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)UnityEngine_Object__op_Implicit(clearBossEffect, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v28 = v2->fields.__4__this;
      if ( !v28 )
        goto LABEL_51;
      v29 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v28->fields.clearBossEffect;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                      v29,
                                                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v30 = v2->fields.__4__this;
      if ( !v30 )
        goto LABEL_51;
      v31 = (UnityEngine_GameObject_o *)this;
      Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v30->fields.hpBarSplitPoint, 0LL);
      GameObjectExtensions__SafeSetParent(v31, Parent, 0LL);
      v33 = v2->fields.__4__this;
      if ( !v33 )
        goto LABEL_51;
      hpBarSplitPointList = v33->fields.hpBarSplitPointList;
      if ( !hpBarSplitPointList )
        goto LABEL_51;
      y_low = SLODWORD(v33->fields.originPos.fields.y);
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
      v36 = localPosition.fields.x;
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      v39 = TitleInfoSuperBossComponent_TypeInfo;
      if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
        v39 = TitleInfoSuperBossComponent_TypeInfo;
      }
      static_fields = (float *)v39->static_fields;
      v51.fields.x = v36 + static_fields[9];
      v51.fields.y = y + static_fields[10];
      v51.fields.z = z + static_fields[11];
      GameObjectExtensions__SetLocalPosition(v31, v51, 0LL);
    }
    v41 = v2->fields.__4__this;
    if ( !v41 )
      goto LABEL_51;
    eventSuperBossEntity = v41->fields.eventSuperBossEntity;
    if ( !eventSuperBossEntity )
      goto LABEL_51;
    v43 = SLODWORD(v41->fields.originPos.fields.y);
    if ( (unsigned int)v43 < LODWORD(eventSuperBossEntity->fields.name) )
    {
      this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)*(&eventSuperBossEntity->fields.maxHp + v43);
      if ( this )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v45 = TitleInfoSuperBossComponent_TypeInfo;
        if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
          v45 = TitleInfoSuperBossComponent_TypeInfo;
        }
        this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)UITweener__Begin_TweenWidth_(
                                                                        gameObject,
                                                                        v45->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                                        (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenAlpha___);
        if ( this )
        {
          LODWORD(this->fields.__4__this) = 2;
          this[3].fields.__4__this = (struct TitleInfoSuperBossComponent_o *)1065353216;
          v46 = v2->fields.__4__this;
          if ( v46 )
          {
            v46->fields.originPos.fields.x = -1.0;
            v47 = v2->fields.__4__this;
            if ( v47 )
            {
              v47->fields.originPos.fields.y = NAN;
              return;
            }
          }
        }
      }
LABEL_51:
      sub_B2C434(this, method);
    }
LABEL_52:
    v48 = sub_B2C460(this);
    sub_B2C400(v48, 0LL);
  }
}