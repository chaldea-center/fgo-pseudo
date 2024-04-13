void __fastcall TitleInfoSuperBossComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  struct TitleInfoSuperBossComponent_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct TitleInfoSuperBossComponent_StaticFields *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  TitleInfoSuperBossComponent_c *v35; // x8
  struct TitleInfoSuperBossComponent_StaticFields *v36; // x9
  struct TitleInfoSuperBossComponent_StaticFields *v37; // x9

  if ( (byte_42E6C7F & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoSuperBossComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_14623/*"TitleInfoEventSuperBossEffect_Dead"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_14624/*"TitleInfoEventSuperBossEffect_Split"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_18829/*"event_superboss_icon_"*/, v14, v15, v16);
    byte_42E6C7F = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_18829/*"event_superboss_icon_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18829/*"event_superboss_icon_"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_14624/*"TitleInfoEventSuperBossEffect_Split"*/;
  v19->SUPERBOSS_SPLIT_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14624/*"TitleInfoEventSuperBossEffect_Split"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v19->SUPERBOSS_SPLIT_EFFECT_PREFAB, v20, v21, v22, v23, v24, v25, v26);
  v27 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v28 = (System_Int32_array **)StringLiteral_14623/*"TitleInfoEventSuperBossEffect_Dead"*/;
  v27->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14623/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v27->SUPERBOSS_CLEAR_EFFECT_PREFAB, v28, v29, v30, v31, v32, v33, v34);
  v35 = TitleInfoSuperBossComponent_TypeInfo;
  v36 = TitleInfoSuperBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v36->SUPERBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v36->SUPERBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v37 = v35->static_fields;
  *(_QWORD *)&v37->SUPERBOSS_SPLIT_POS_DELTA.fields.x = 0x41200000BF000000LL;
  v37->SUPERBOSS_SPLIT_POS_DELTA.fields.z = 0.0;
  v35->static_fields->SUPERBOSS_HP_BAR_LENGTH = 264;
  v35->static_fields->ANIM_DURATION_FRAME_IN_BOSS = 0.3;
  v35->static_fields->ANIM_DURATION_HP_NAME_ALPHA = 0.4;
  v35->static_fields->ANIM_DURATION_HP_CUT = 1.2;
  v35->static_fields->ANIM_DURATION_SPLIT_ALPHA = 0.5;
  v35->static_fields->ANIM_DURATION_HP_DELETION = 0.7;
  v35->static_fields->ANIM_DURATION_BOSS_ALPHA = 2.5;
  v35->static_fields->CLEAR_CALLBACK_DELAY = 1.8;
  v35->static_fields->CLEAR_END_CALLBACK_DELAY = 1.5;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Action_o *splitHpEffect; // x21
  __int64 v16; // x1
  UnityEngine_Component_o *superBossHpFrame; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v19; // x8

  if ( (byte_42E6C7C & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoSuperBossComponent_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_UITweener_Begin_TweenAlpha___, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_10102/*"OnEndAnimation"*/, v12, v13, v14);
    byte_42E6C7C = 1;
  }
  splitHpEffect = (System_Action_o *)this->fields.splitHpEffect;
  this->fields.splitHpEffect = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.splitHpEffect, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(splitHpEffect, 0LL);
  superBossHpFrame = (UnityEngine_Component_o *)this->fields.superBossHpFrame;
  if ( !superBossHpFrame )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(superBossHpFrame, 0LL);
  v19 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v19 = TitleInfoSuperBossComponent_TypeInfo;
  }
  superBossHpFrame = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                                  gameObject,
                                                  v19->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                  (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !superBossHpFrame )
LABEL_9:
    sub_B5D69C(superBossHpFrame, v16);
  LODWORD(superBossHpFrame[1].klass) = 1;
  superBossHpFrame[5].klass = (UnityEngine_Component_c *)1065353216;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10102/*"OnEndAnimation"*/,
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

  if ( (byte_42E6C7D & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoSuperBossComponent_TypeInfo, splitHp, maxHp, method);
    byte_42E6C7D = 1;
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
  sub_B5D560(p_onClearCall, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(onClearCall, 0LL);
  TitleInfoSuperBossComponent__SetDisp(this, v11);
}


void __fastcall TitleInfoSuperBossComponent__PlayFrameInBoss(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v12; // x8
  TweenWidth_o *v13; // x0
  __int64 v14; // x1
  TweenWidth_o *v15; // x20
  float32x2_t *static_fields; // x8
  float v17; // s1
  int animEndCall_high; // w9
  System_Int32_array **v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42E6C77 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoSuperBossComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UITweener_Begin_TweenPosition___, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10805/*"PlayHpNameAlpha"*/, v8, v9, v10);
    byte_42E6C77 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v12 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v13 = UITweener__Begin_TweenWidth_(
          gameObject,
          v12->static_fields->ANIM_DURATION_FRAME_IN_BOSS,
          (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v13 )
    sub_B5D69C(0LL, v14);
  v15 = v13;
  static_fields = (float32x2_t *)TitleInfoSuperBossComponent_TypeInfo->static_fields;
  v17 = *((float *)&this->fields.animEndCall + 1) + static_fields[4].n64_f32[0];
  *(float32x2_t *)&v13->fields.from = vadd_f32(*(float32x2_t *)&this->fields.originPos.fields.z, static_fields[3]);
  *(float *)&v13->fields.updateTable = v17;
  animEndCall_high = HIDWORD(this->fields.animEndCall);
  *(_QWORD *)(&v13->fields.updateTable + 4) = *(_QWORD *)&this->fields.originPos.fields.z;
  HIDWORD(v13->fields.mWidget) = animEndCall_high;
  v13->fields.style = 2;
  v19 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v19;
  sub_B5D560((BattleServantConfConponent_o *)&v15->fields.eventReceiver, v19, v20, v21, v22, v23, v24, v25);
  v26 = (System_Int32_array **)StringLiteral_10805/*"PlayHpNameAlpha"*/;
  v15->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10805/*"PlayHpNameAlpha"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v15->fields.callWhenFinished, v26, v27, v28, v29, v30, v31, v32);
}


void __fastcall TitleInfoSuperBossComponent__PlayHpCut(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x20
  TitleInfoSuperBossComponent_o *v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x3
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  EasingObject_o *v39; // x21
  TitleInfoSuperBossComponent_c *v40; // x0
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v42; // x22
  System_Action_o *v43; // x20

  if ( (byte_42E6C79 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5, v6, v7);
    sub_B5D5C4(&Method_TitleInfoSuperBossComponent_PlayHpDeletion__, v8, v9, v10);
    sub_B5D5C4(&TitleInfoSuperBossComponent_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_TitleInfoSuperBossComponent___c__DisplayClass62_0__PlayHpCut_b__0__, v14, v15, v16);
    sub_B5D5C4(&TitleInfoSuperBossComponent___c__DisplayClass62_0_TypeInfo, v17, v18, v19);
    byte_42E6C79 = 1;
  }
  v20 = sub_B5D694(TitleInfoSuperBossComponent___c__DisplayClass62_0_TypeInfo);
  TitleInfoSuperBossComponent___c__DisplayClass62_0___ctor(
    (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)v20,
    0LL);
  if ( !v20 )
    goto LABEL_10;
  *(_QWORD *)(v20 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 24), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    goto LABEL_10;
  TitleInfoSuperBossComponent__PlaySeByEventId(v21, eventBossStatusUiEntity->fields.eventId, 1, v29);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v20 + 16) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 16), Component_UIWidget, v33, v34, v35, v36, v37, v38);
  v39 = *(EasingObject_o **)(v20 + 16);
  v40 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v40 = TitleInfoSuperBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v40->static_fields->ANIM_DURATION_HP_CUT;
  v42 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v20,
    Method_TitleInfoSuperBossComponent___c__DisplayClass62_0__PlayHpCut_b__0__,
    0LL);
  v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_TitleInfoSuperBossComponent_PlayHpDeletion__, 0LL);
  if ( !v39 )
LABEL_10:
    sub_B5D69C(v21, v22);
  EasingObject__Play(v39, ANIM_DURATION_HP_CUT, v42, v43, 0.0, 0, 0LL);
}


void __fastcall TitleInfoSuperBossComponent__PlayHpDeletion(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  UnityEngine_Component_o *hpBarSliderWhite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v31; // x8
  UnityEngine_Component_o *v32; // x20
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 *v46; // x8
  UnityEngine_Object_o *v47; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v48; // x21
  UnityEngine_GameObject_o *v49; // x21
  System_Int32_array **v50; // x1
  const MethodInfo *v51; // x3
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  UILabel_o *hpBarUnderSprite; // x20
  EventSuperBossEntity_o *v54; // x8
  int64_t maxHp; // x21
  System_String_o *v56; // x19
  Il2CppObject *v57; // x0
  unsigned __int64 v58; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E6C7A & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&TitleInfoSuperBossComponent_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_UITweener_Begin_TweenAlpha___, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_10102/*"OnEndAnimation"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_12953/*"SetClearAlpha"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_13580/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v26, v27, v28);
    byte_42E6C7A = 1;
  }
  hpBarSliderWhite = (UnityEngine_Component_o *)this->fields.hpBarSliderWhite;
  if ( !hpBarSliderWhite )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject(hpBarSliderWhite, 0LL);
  v31 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v31 = TitleInfoSuperBossComponent_TypeInfo;
  }
  hpBarSliderWhite = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                                  gameObject,
                                                  v31->static_fields->ANIM_DURATION_HP_DELETION,
                                                  (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !hpBarSliderWhite )
    goto LABEL_27;
  v32 = hpBarSliderWhite;
  LODWORD(hpBarSliderWhite[1].klass) = 1;
  hpBarSliderWhite[5].klass = (UnityEngine_Component_c *)1065353216;
  v33 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v32[3].klass = (UnityEngine_Component_c *)v33;
  sub_B5D560((BattleServantConfConponent_o *)&v32[3], v33, v34, v35, v36, v37, v38, v39);
  if ( *(float *)&this->fields.HPsplitNo <= 0.0 )
  {
    v47 = *(UnityEngine_Object_o **)&this->fields._IsShowClearEvent_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
    {
      v48 = *(UnityEngine_UI_Dropdown_DropdownItem_o **)&this->fields._IsShowClearEvent_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v49 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          v48,
                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent(v49, (UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__ResetLocalPosition(v49, 0LL);
    }
    v46 = &StringLiteral_12953/*"SetClearAlpha"*/;
  }
  else
  {
    v46 = &StringLiteral_10102/*"OnEndAnimation"*/;
  }
  v50 = (System_Int32_array **)*v46;
  v32[3].monitor = (void *)*v46;
  sub_B5D560((BattleServantConfConponent_o *)&v32[3].monitor, v50, v40, v41, v42, v43, v44, v45);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    goto LABEL_27;
  TitleInfoSuperBossComponent__PlaySeByEventId(
    (TitleInfoSuperBossComponent_o *)hpBarSliderWhite,
    eventBossStatusUiEntity->fields.eventId,
    0,
    v51);
  hpBarUnderSprite = (UILabel_o *)this->fields.hpBarUnderSprite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  hpBarSliderWhite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13580/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
  v54 = (EventSuperBossEntity_o *)this->fields.eventBossStatusUiEntity;
  if ( !v54
    || (maxHp = v54->fields.maxHp,
        v56 = (System_String_o *)hpBarSliderWhite,
        (hpBarSliderWhite = (UnityEngine_Component_o *)EventSuperBossEntity__GetUserSuperBossEntity(v54, 0LL)) == 0LL)
    || (v58 = maxHp - (unsigned __int64)hpBarSliderWhite[1].monitor,
        v57 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v58),
        hpBarSliderWhite = (UnityEngine_Component_o *)System_String__Format(v56, v57, 0LL),
        !hpBarUnderSprite) )
  {
LABEL_27:
    sub_B5D69C(hpBarSliderWhite, method);
  }
  UILabel__set_text(hpBarUnderSprite, (System_String_o *)hpBarSliderWhite, 0LL);
}


void __fastcall TitleInfoSuperBossComponent__PlayHpNameAlpha(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Component_o *hpBarUnderSprite; // x0
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
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E6C78 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoSuperBossComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UITweener_Begin_TweenAlpha___, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10804/*"PlayHpCut"*/, v8, v9, v10);
    byte_42E6C78 = 1;
  }
  hpBarUnderSprite = (UnityEngine_Component_o *)this->fields.hpBarUnderSprite;
  if ( !hpBarUnderSprite )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(hpBarUnderSprite, 0LL);
  v13 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v13 = TitleInfoSuperBossComponent_TypeInfo;
  }
  hpBarUnderSprite = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                                  gameObject,
                                                  v13->static_fields->ANIM_DURATION_HP_NAME_ALPHA,
                                                  (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !hpBarUnderSprite )
LABEL_9:
    sub_B5D69C(hpBarUnderSprite, method);
  v14 = hpBarUnderSprite;
  LODWORD(hpBarUnderSprite[1].klass) = 1;
  hpBarUnderSprite[5].klass = (UnityEngine_Component_c *)0x3F80000000000000LL;
  v15 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14[3].klass = (UnityEngine_Component_c *)v15;
  sub_B5D560((BattleServantConfConponent_o *)&v14[3], v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)StringLiteral_10804/*"PlayHpCut"*/;
  v14[3].monitor = (void *)StringLiteral_10804/*"PlayHpCut"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v14[3].monitor, v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall TitleInfoSuperBossComponent__PlaySeByEventId(
        TitleInfoSuperBossComponent_o *this,
        int32_t eventId,
        bool isPlay,
        const MethodInfo *method)
{
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  __int64 *v26; // x20
  System_String_o *v27; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E6C7E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, eventId, isPlay, method);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&SoundManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_16632/*"ar12"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_16643/*"ar60"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_1/*""*/, v21, v22, v23);
    byte_42E6C7E = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v25);
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    eventId,
    (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( entity )
  {
    v26 = &StringLiteral_16643/*"ar60"*/;
    if ( !EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
    {
      if ( entity )
      {
        if ( !EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL) )
          v26 = &StringLiteral_16632/*"ar12"*/;
      }
      else
      {
        v26 = &StringLiteral_16632/*"ar12"*/;
      }
    }
  }
  else
  {
    v26 = &StringLiteral_16632/*"ar12"*/;
  }
  v27 = (System_String_o *)*v26;
  if ( isPlay )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSeLoop(v27, 0LL);
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopSe_23416064(v27, 0.0, 0LL);
  }
}


void __fastcall TitleInfoSuperBossComponent__SetBossIcon(
        TitleInfoSuperBossComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UISprite_o *superBossHpFrame; // x21
  struct UISprite_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_42E6C72 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)spName, (_DWORD)method, v3);
    byte_42E6C72 = 1;
  }
  superBossHpFrame = this->fields.superBossHpFrame;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v7 = (struct UISprite_o *)AtlasManager__SetEventUI(superBossHpFrame, spName, 0LL);
  if ( !superBossHpFrame )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)superBossHpFrame, (unsigned __int8)v7 & 1, 0LL);
  v7 = this->fields.superBossHpFrame;
  if ( !v7 )
    goto LABEL_12;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v7, 0LL) )
  {
    v7 = this->fields.superBossHpFrame;
    if ( v7 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._33_MakePixelPerfect.method)(
        v7,
        v7->klass->vtable._34_get_minWidth.methodPtr);
      return;
    }
LABEL_12:
    sub_B5D69C(v7, v8);
  }
}


void __fastcall TitleInfoSuperBossComponent__SetClearAlpha(
        TitleInfoSuperBossComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TitleInfoSuperBossComponent_c *v8; // x0

  if ( (byte_42E6C7B & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoSuperBossComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_5419/*"DoClearCallback"*/, v5, v6, v7);
    byte_42E6C7B = 1;
  }
  LOBYTE(this->fields.HPto) = 0;
  v8 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v8 = TitleInfoSuperBossComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5419/*"DoClearCallback"*/,
    v8->static_fields->CLEAR_CALLBACK_DELAY,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x1
  EventSuperBossEntity_o *eventBossStatusUiEntity; // x0
  struct EventBossStatusUiEntity_o *v22; // x8
  __int64 maxHp; // x21
  float v24; // s0
  float v25; // s0
  struct EventBossStatusUiEntity_o *v26; // x8
  float v27; // s0
  float v28; // s0
  struct EventBossStatusUiEntity_o *v29; // x8
  __int64 v30; // x11
  int v31; // w10
  __int64 v32; // x9
  __int64 v33; // x11
  int64_t v34; // x12
  __int64 klass; // d0
  UnityEngine_Transform_o *v36; // x21
  long double v37; // q8
  float y; // s9
  float z; // s10
  TitleInfoSuperBossComponent_c *v40; // x0
  float *static_fields; // x8
  UILabel_o *hpBarUnderSprite; // x21
  struct EventBossStatusUiEntity_o *v43; // x8
  System_String_o *v44; // x22
  Il2CppObject *v45; // x0
  long double v46; // q0
  struct EventBossStatusUiEntity_o *v47; // x8
  __int64 v48; // x9
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x10
  int v50; // w21
  unsigned int v51; // w22
  __int64 v52; // x8
  struct EventSuperBossEntity_o *v53; // x9
  __int64 v54; // x0
  int64_t v55; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6C75 & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, damage, (_DWORD)onClearCallback, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&TitleInfoSuperBossComponent_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_13580/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v17, v18, v19);
    byte_42E6C75 = 1;
  }
  this->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)onClearCallback;
  sub_B5D560(
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
  v22 = this->fields.eventBossStatusUiEntity;
  if ( !v22 )
    goto LABEL_53;
  maxHp = eventBossStatusUiEntity->fields.maxHp;
  v24 = 1.0 - (double)damage / (double)(__int64)v22[1].klass;
  v25 = UnityEngine_Mathf__Clamp01(v24, 0LL);
  v26 = this->fields.eventBossStatusUiEntity;
  this->fields.HPsplitPoint = v25;
  if ( !v26 )
    goto LABEL_53;
  v27 = 1.0 - (double)maxHp / (double)(__int64)v26[1].klass;
  v28 = UnityEngine_Mathf__Clamp01(v27, 0LL);
  v29 = this->fields.eventBossStatusUiEntity;
  *(float *)&this->fields.HPsplitNo = v28;
  *(_QWORD *)&this->fields.originPos.fields.x = -1082130432LL;
  if ( !v29 )
    goto LABEL_53;
  v30 = *(_QWORD *)&v29[1].fields.eventId;
  if ( !v30 )
    goto LABEL_53;
  v31 = *(_DWORD *)(v30 + 24);
  if ( v31 >= 1 )
  {
    v32 = 0LL;
    v33 = v30 + 32;
    while ( 1 )
    {
      v34 = *(_QWORD *)(v33 + 8 * v32);
      if ( v34 > damage && v34 <= maxHp )
        break;
      if ( (int)++v32 >= v31 )
        goto LABEL_16;
    }
    klass = (__int64)v29[1].klass;
    LODWORD(this->fields.originPos.fields.y) = v32;
    *(float *)&klass = 1.0 - (double)v34 / (double)klass;
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
  v36 = (UnityEngine_Transform_o *)eventBossStatusUiEntity;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)eventBossStatusUiEntity, 0LL);
  v37 = *(long double *)&localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v40 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v40 = TitleInfoSuperBossComponent_TypeInfo;
  }
  static_fields = (float *)v40->static_fields;
  v57.fields.x = *(float *)&v37 + static_fields[6];
  v57.fields.y = y + static_fields[7];
  v57.fields.z = z + static_fields[8];
  UnityEngine_Transform__set_localPosition(v36, v57, 0LL);
  hpBarUnderSprite = (UILabel_o *)this->fields.hpBarUnderSprite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  eventBossStatusUiEntity = (EventSuperBossEntity_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_13580/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/,
                                                        0LL);
  v43 = this->fields.eventBossStatusUiEntity;
  if ( !v43 )
    goto LABEL_53;
  v44 = (System_String_o *)eventBossStatusUiEntity;
  v55 = (int64_t)v43[1].klass - damage;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v55);
  eventBossStatusUiEntity = (EventSuperBossEntity_o *)System_String__Format(v44, v45, 0LL);
  if ( !hpBarUnderSprite
    || (UILabel__set_text(hpBarUnderSprite, (System_String_o *)eventBossStatusUiEntity, 0LL),
        (eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarUnderSprite) == 0LL)
    || (eventBossStatusUiEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, float))&eventBossStatusUiEntity->klass[1]._1.byval_arg.bits)(
                                                              eventBossStatusUiEntity,
                                                              eventBossStatusUiEntity->klass[1]._1.this_arg.data,
                                                              0.0),
        (v47 = this->fields.eventBossStatusUiEntity) == 0LL)
    || (v48 = *(_QWORD *)&v47[1].fields.eventId) == 0 )
  {
LABEL_53:
    sub_B5D69C(eventBossStatusUiEntity, v20);
  }
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( eventSuperBossEntity )
  {
    v50 = *(_DWORD *)(v48 + 24);
    if ( v50 <= SLODWORD(eventSuperBossEntity->fields.name) && v50 >= 1 )
    {
      v51 = 0;
      LODWORD(v37) = 1.0;
      while ( 1 )
      {
        v52 = *(_QWORD *)&v47[1].fields.eventId;
        if ( !v52 )
          goto LABEL_53;
        if ( v51 >= *(_DWORD *)(v52 + 24) )
          goto LABEL_55;
        v53 = this->fields.eventSuperBossEntity;
        if ( !v53 )
          goto LABEL_53;
        if ( v51 >= LODWORD(v53->fields.name) )
        {
LABEL_55:
          v54 = sub_B5D6C8(eventBossStatusUiEntity);
          sub_B5D668(v54, 0LL);
        }
        eventBossStatusUiEntity = (EventSuperBossEntity_o *)*(&v53->fields.maxHp + (int)v51);
        if ( !eventBossStatusUiEntity )
          goto LABEL_53;
        if ( *(_QWORD *)(v52 + 8LL * (int)v51 + 32) <= damage )
          LODWORD(v46) = 0;
        else
          v46 = v37;
        eventBossStatusUiEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, long double))&eventBossStatusUiEntity->klass[1]._1.byval_arg.bits)(
                                                              eventBossStatusUiEntity,
                                                              eventBossStatusUiEntity->klass[1]._1.this_arg.data,
                                                              v46);
        if ( (int)++v51 >= v50 )
          return;
        v47 = this->fields.eventBossStatusUiEntity;
        if ( !v47 )
          goto LABEL_53;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoSuperBossComponent__SetDisp(TitleInfoSuperBossComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  long double v4; // q8
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  EventSuperBossEntity_o *eventBossStatusUiEntity; // x0
  EventSuperBossEntity_o *v28; // x20
  struct EventBossStatusUiEntity_o *v29; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX; // x21
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  const MethodInfo *v33; // x2
  struct EventBossStatusUiEntity_o *v34; // x8
  __int64 v35; // x8
  int v36; // w21
  struct UISprite_array **p_hpBarSplitPointList; // x22
  struct EventSuperBossEntity_o **p_eventSuperBossEntity; // x23
  char v39; // w27
  System_Int32_array **v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  const MethodInfo *v54; // x3
  __int64 v55; // x28
  il2cpp_array_size_t v56; // w24
  struct UISprite_array *hpBarSplitPointList; // x25
  struct UnityEngine_GameObject_o *hpBarSplitPoint; // x26
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x26
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x25
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x26
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x26
  Il2CppClass **v81; // x0
  struct UISprite_array *v82; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventSuperBossEntity_o *v84; // x26
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x25
  EventSuperBossEntity_c **v92; // x0
  struct EventSuperBossEntity_o *v93; // x8
  UnityEngine_GameObject_o *v94; // x0
  struct EventBossStatusUiEntity_o *v95; // x8
  __int64 v96; // x9
  float HpSplitPositionX; // s0
  struct UISprite_array *v98; // x8
  float v99; // s9
  struct EventSuperBossEntity_o *v100; // x8
  long double v101; // q0
  struct EventBossStatusUiEntity_o *v102; // x8
  __int64 v103; // x8
  struct EventSuperBossEntity_o *v104; // x9
  EventBossStatusUiEntity_o *v105; // x0
  float v106; // s0
  float v107; // s1
  float v108; // s2
  float v109; // s3
  float v110; // s8
  float v111; // s9
  float v112; // s10
  float v113; // s11
  struct EventBossStatusUiEntity_o *v114; // x8
  __int64 klass; // x22
  __int64 v116; // x23
  UILabel_o *hpBarUnderSprite; // x20
  System_String_o *v118; // x21
  Il2CppObject *v119; // x0
  float v120; // s0
  __int64 v121; // x0
  __int64 v122; // x0
  char v123; // [xsp+4h] [xbp-8Ch]
  UnityEngine_Component_o *v124; // [xsp+8h] [xbp-88h]
  UnityEngine_Component_o *parent; // [xsp+10h] [xbp-80h]
  __int64 v126; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v127; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v128; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v129; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v130; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E6C74 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&long_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&TitleInfoSuperBossComponent_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UISprite___TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_13580/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v24, v25, v26);
    byte_42E6C74 = 1;
  }
  if ( LOBYTE(this->fields.HPto) || LOBYTE(this[1].klass) )
  {
    eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.eventBossStatusUiEntity;
    if ( eventBossStatusUiEntity )
    {
      eventBossStatusUiEntity = (EventSuperBossEntity_o *)EventSuperBossEntity__GetUserSuperBossEntity(
                                                            eventBossStatusUiEntity,
                                                            0LL);
      v28 = eventBossStatusUiEntity;
      if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      }
      v29 = this->fields.eventBossStatusUiEntity;
      if ( v29 )
      {
        SUPERBOSS_ICON_SPNAME_PREFIX = TitleInfoSuperBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
        v31 = System_Int32__ToString((int)v29 + 56, 0LL);
        v32 = System_String__Concat_44577788(SUPERBOSS_ICON_SPNAME_PREFIX, v31, 0LL);
        TitleInfoSuperBossComponent__SetBossIcon(this, v32, v33);
        v34 = this->fields.eventBossStatusUiEntity;
        if ( v34 )
        {
          v35 = *(_QWORD *)&v34[1].fields.eventId;
          if ( v35 )
          {
            v36 = *(_DWORD *)(v35 + 24);
            if ( v36 >= 1 )
            {
              p_hpBarSplitPointList = &this->fields.hpBarSplitPointList;
              p_eventSuperBossEntity = &this->fields.eventSuperBossEntity;
              if ( this->fields.hpBarSplitPointList && *p_eventSuperBossEntity )
              {
                v39 = 1;
              }
              else
              {
                v40 = (System_Int32_array **)sub_B5D5DC(UISprite___TypeInfo, (unsigned int)v36);
                *p_hpBarSplitPointList = (struct UISprite_array *)v40;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&this->fields.hpBarSplitPointList,
                  v40,
                  v41,
                  v42,
                  v43,
                  v44,
                  v45,
                  v46);
                v47 = (System_Int32_array **)sub_B5D5DC(UISprite___TypeInfo, (unsigned int)v36);
                *p_eventSuperBossEntity = (struct EventSuperBossEntity_o *)v47;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&this->fields.eventSuperBossEntity,
                  v47,
                  v48,
                  v49,
                  v50,
                  v51,
                  v52,
                  v53);
                v39 = 0;
              }
              parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.hpBarSplitPoint, 0LL);
              eventBossStatusUiEntity = (EventSuperBossEntity_o *)GameObjectExtensions__GetParent(
                                                                    (UnityEngine_GameObject_o *)this->fields.totalHpLabel,
                                                                    0LL);
              v124 = (UnityEngine_Component_o *)eventBossStatusUiEntity;
              v55 = 4LL;
              LODWORD(v4) = 1.0;
              v123 = v39;
              do
              {
                v56 = v55 - 4;
                if ( (v39 & 1) == 0 )
                {
                  hpBarSplitPointList = this->fields.hpBarSplitPointList;
                  hpBarSplitPoint = this->fields.hpBarSplitPoint;
                  if ( (_DWORD)v55 == 4 )
                  {
                    if ( !hpBarSplitPoint )
                      goto LABEL_98;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          this->fields.hpBarSplitPoint,
                                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitPointList )
                      goto LABEL_98;
                    v65 = (System_Int32_array **)eventBossStatusUiEntity;
                    if ( eventBossStatusUiEntity )
                    {
                      eventBossStatusUiEntity = (EventSuperBossEntity_o *)sub_B5D684(
                                                                            eventBossStatusUiEntity,
                                                                            hpBarSplitPointList->obj.klass->_1.element_class);
                      if ( !eventBossStatusUiEntity )
                        goto LABEL_100;
                    }
                    if ( !hpBarSplitPointList->max_length )
                      goto LABEL_99;
                    hpBarSplitPointList->m_Items[0] = (UISprite_o *)v65;
                    sub_B5D560(
                      (BattleServantConfConponent_o *)hpBarSplitPointList->m_Items,
                      v65,
                      v59,
                      v60,
                      v61,
                      v62,
                      v63,
                      v64);
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.totalHpLabel;
                    if ( !eventBossStatusUiEntity )
                      goto LABEL_98;
                    eventSuperBossEntity = this->fields.eventSuperBossEntity;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          (UnityEngine_GameObject_o *)eventBossStatusUiEntity,
                                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !eventSuperBossEntity )
                      goto LABEL_98;
                    v73 = (System_Int32_array **)eventBossStatusUiEntity;
                    if ( eventBossStatusUiEntity )
                    {
                      eventBossStatusUiEntity = (EventSuperBossEntity_o *)sub_B5D684(
                                                                            eventBossStatusUiEntity,
                                                                            eventSuperBossEntity->klass->_1.element_class);
                      if ( !eventBossStatusUiEntity )
                        goto LABEL_100;
                    }
                    if ( !LODWORD(eventSuperBossEntity->fields.name) )
                      goto LABEL_99;
                    eventSuperBossEntity->fields.maxHp = (int64_t)v73;
                    sub_B5D560(
                      (BattleServantConfConponent_o *)&eventSuperBossEntity->fields.maxHp,
                      v73,
                      v67,
                      v68,
                      v69,
                      v70,
                      v71,
                      v72);
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
                                                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventBossStatusUiEntity )
                      goto LABEL_98;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          (UnityEngine_GameObject_o *)eventBossStatusUiEntity,
                                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !hpBarSplitPointList )
                      goto LABEL_98;
                    v80 = (System_Int32_array **)eventBossStatusUiEntity;
                    if ( eventBossStatusUiEntity )
                    {
                      eventBossStatusUiEntity = (EventSuperBossEntity_o *)sub_B5D684(
                                                                            eventBossStatusUiEntity,
                                                                            hpBarSplitPointList->obj.klass->_1.element_class);
                      if ( !eventBossStatusUiEntity )
                      {
LABEL_100:
                        v122 = sub_B5D6BC();
                        sub_B5D668(v122, 0LL);
                      }
                    }
                    if ( v56 >= hpBarSplitPointList->max_length )
                      goto LABEL_99;
                    v81 = &hpBarSplitPointList->obj.klass + (int)v56;
                    v81[4] = (Il2CppClass *)v80;
                    sub_B5D560((BattleServantConfConponent_o *)(v81 + 4), v80, v74, v75, v76, v77, v78, v79);
                    v82 = *p_hpBarSplitPointList;
                    if ( !*p_hpBarSplitPointList )
                      goto LABEL_98;
                    if ( v56 >= v82->max_length )
                      goto LABEL_99;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)v82->m_Items[v56];
                    if ( !eventBossStatusUiEntity )
                      goto LABEL_98;
                    gameObject = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)eventBossStatusUiEntity,
                                   0LL);
                    GameObjectExtensions__SafeSetParent(gameObject, parent, 0LL);
                    v84 = this->fields.eventSuperBossEntity;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.totalHpLabel,
                                                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    if ( !eventBossStatusUiEntity )
                      goto LABEL_98;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          (UnityEngine_GameObject_o *)eventBossStatusUiEntity,
                                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    if ( !v84 )
                      goto LABEL_98;
                    v91 = (System_Int32_array **)eventBossStatusUiEntity;
                    if ( eventBossStatusUiEntity )
                    {
                      eventBossStatusUiEntity = (EventSuperBossEntity_o *)sub_B5D684(
                                                                            eventBossStatusUiEntity,
                                                                            v84->klass->_1.element_class);
                      if ( !eventBossStatusUiEntity )
                        goto LABEL_100;
                    }
                    if ( v56 >= LODWORD(v84->fields.name) )
                      goto LABEL_99;
                    v92 = &v84->klass + (int)v56;
                    v92[4] = (EventSuperBossEntity_c *)v91;
                    sub_B5D560((BattleServantConfConponent_o *)(v92 + 4), v91, v85, v86, v87, v88, v89, v90);
                    v93 = this->fields.eventSuperBossEntity;
                    if ( !v93 )
                      goto LABEL_98;
                    if ( v56 >= LODWORD(v93->fields.name) )
                      goto LABEL_99;
                    eventBossStatusUiEntity = (EventSuperBossEntity_o *)*(&v93->fields.maxHp + (int)v56);
                    if ( !eventBossStatusUiEntity )
                      goto LABEL_98;
                    v94 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventBossStatusUiEntity, 0LL);
                    GameObjectExtensions__SafeSetParent(v94, v124, 0LL);
                    v39 = v123;
                  }
                }
                v95 = this->fields.eventBossStatusUiEntity;
                if ( !v95 )
                  goto LABEL_98;
                v96 = *(_QWORD *)&v95[1].fields.eventId;
                if ( !v96 )
                  goto LABEL_98;
                if ( v56 >= *(_DWORD *)(v96 + 24) )
                  goto LABEL_99;
                HpSplitPositionX = TitleInfoSuperBossComponent__GetHpSplitPositionX(
                                     (TitleInfoSuperBossComponent_o *)eventBossStatusUiEntity,
                                     *(_QWORD *)(v96 + 8 * v55),
                                     (int64_t)v95[1].klass,
                                     v54);
                v98 = *p_hpBarSplitPointList;
                if ( !*p_hpBarSplitPointList )
                  goto LABEL_98;
                if ( v56 >= v98->max_length )
                  goto LABEL_99;
                eventBossStatusUiEntity = (EventSuperBossEntity_o *)*((_QWORD *)&v98->obj.klass + v55);
                if ( !eventBossStatusUiEntity )
                  goto LABEL_98;
                v99 = HpSplitPositionX;
                eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)eventBossStatusUiEntity,
                                                                      0LL);
                if ( !eventBossStatusUiEntity )
                  goto LABEL_98;
                v127.fields.y = 0.0;
                v127.fields.z = 0.0;
                v127.fields.x = v99;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventBossStatusUiEntity, v127, 0LL);
                v100 = this->fields.eventSuperBossEntity;
                if ( !v100 )
                  goto LABEL_98;
                if ( v56 >= LODWORD(v100->fields.name) )
                  goto LABEL_99;
                eventBossStatusUiEntity = (EventSuperBossEntity_o *)*((_QWORD *)&v100->klass + v55);
                if ( !eventBossStatusUiEntity )
                  goto LABEL_98;
                eventBossStatusUiEntity = (EventSuperBossEntity_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)eventBossStatusUiEntity,
                                                                      0LL);
                if ( !eventBossStatusUiEntity )
                  goto LABEL_98;
                v128.fields.y = 0.0;
                v128.fields.z = 0.0;
                v128.fields.x = v99;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventBossStatusUiEntity, v128, 0LL);
                v102 = this->fields.eventBossStatusUiEntity;
                if ( !v102 )
                  goto LABEL_98;
                v103 = *(_QWORD *)&v102[1].fields.eventId;
                if ( !v103 )
                  goto LABEL_98;
                if ( v56 >= *(_DWORD *)(v103 + 24) )
                  goto LABEL_99;
                if ( !v28 )
                  goto LABEL_98;
                v104 = this->fields.eventSuperBossEntity;
                if ( !v104 )
                  goto LABEL_98;
                if ( v56 >= LODWORD(v104->fields.name) )
                {
LABEL_99:
                  v121 = sub_B5D6C8(eventBossStatusUiEntity);
                  sub_B5D668(v121, 0LL);
                }
                eventBossStatusUiEntity = (EventSuperBossEntity_o *)*((_QWORD *)&v104->klass + v55);
                if ( !eventBossStatusUiEntity )
                  goto LABEL_98;
                if ( *(_QWORD *)(v103 + 8 * v55) <= v28->fields.maxHp )
                  LODWORD(v101) = 0;
                else
                  v101 = v4;
                eventBossStatusUiEntity = (EventSuperBossEntity_o *)(*(__int64 (__fastcall **)(EventSuperBossEntity_o *, void *, long double))&eventBossStatusUiEntity->klass[1]._1.byval_arg.bits)(
                                                                      eventBossStatusUiEntity,
                                                                      eventBossStatusUiEntity->klass[1]._1.this_arg.data,
                                                                      v101);
                ++v55;
              }
              while ( (int)v55 - 4 < v36 );
            }
            v105 = *(EventBossStatusUiEntity_o **)&this->fields.isEncountSuperBoss;
            if ( v105 )
            {
              v129.fields.r = 0.0;
              v129.fields.g = 0.0;
              v129.fields.b = 0.0;
              v129.fields.a = 0.0;
              *(UnityEngine_Color_o *)&v106 = EventBossStatusUiEntity__GetTextEffectColor(v105, v129, 0LL);
            }
            else
            {
              eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.eventBossStatusUiEntity;
              if ( !eventBossStatusUiEntity )
                goto LABEL_98;
              *(UnityEngine_Color_o *)&v106 = EventSuperBossEntity__GetBossColor(eventBossStatusUiEntity, 0LL);
            }
            eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarSplitter;
            v110 = v106;
            v111 = v107;
            v112 = v108;
            v113 = v109;
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
                    v114 = this->fields.eventBossStatusUiEntity;
                    if ( v114 )
                    {
                      if ( v28 )
                      {
                        klass = (__int64)v114[1].klass;
                        eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarUnderSprite;
                        v116 = v28->fields.maxHp >= klass ? (__int64)v114[1].klass : v28->fields.maxHp;
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
                              v118 = LocalizationManager__Get((System_String_o *)StringLiteral_13580/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, 0LL);
                              v126 = klass - v116;
                              v119 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v126);
                              eventBossStatusUiEntity = (EventSuperBossEntity_o *)System_String__Format(v118, v119, 0LL);
                              if ( !hpBarUnderSprite )
                                goto LABEL_98;
                              UILabel__set_text(hpBarUnderSprite, (System_String_o *)eventBossStatusUiEntity, 0LL);
                            }
                            eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarUnderSprite;
                            if ( eventBossStatusUiEntity )
                            {
                              v130.fields.r = v110;
                              v130.fields.g = v111;
                              v130.fields.b = v112;
                              v130.fields.a = v113;
                              UILabel__set_effectColor((UILabel_o *)eventBossStatusUiEntity, v130, 0LL);
                              eventBossStatusUiEntity = (EventSuperBossEntity_o *)this->fields.hpBarSliderUnder;
                              if ( eventBossStatusUiEntity )
                              {
                                v120 = 1.0 - (double)v116 / (double)klass;
                                UIProgressBar__set_value((UIProgressBar_o *)eventBossStatusUiEntity, v120, 0LL);
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
    sub_B5D69C(eventBossStatusUiEntity, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoSuperBossComponent__SetSpriteFromEventUI(
        TitleInfoSuperBossComponent_o *this,
        UISprite_o *sprite,
        System_String_o *prefix,
        int32_t gaugeId,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *v11; // x0
  System_String_o *v12; // x21
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = gaugeId;
  if ( (byte_42E6C73 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)sprite, (_DWORD)prefix, *(_QWORD *)&gaugeId);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v8, v9, v10);
    byte_42E6C73 = 1;
  }
  if ( (gaugeId & 0x80000000) != 0 )
    goto LABEL_8;
  v11 = System_Int32__ToString((int32_t)&v13, 0LL);
  v12 = System_String__Concat_44580072(prefix, (System_String_o *)StringLiteral_16096/*"_"*/, v11, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v12, 0LL) )
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  struct EventBossStatusUiEntity_o **p_eventBossStatusUiEntity; // x21
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  DataManager_o *Instance; // x0
  __int64 v37; // x1
  System_Int32_array **EntityFromEventIdAndIndex; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  EventBossStatusUiEntity_o *v45; // x0
  int32_t GaugeId; // w20
  _BOOL8 IsEncounted; // x0
  const MethodInfo *v48; // x4
  TitleInfoSuperBossComponent_o *v49; // x0
  const MethodInfo *v50; // x4
  TitleInfoSuperBossComponent_o *v51; // x0
  const MethodInfo *v52; // x4
  TitleInfoSuperBossComponent_o *v53; // x0
  const MethodInfo *v54; // x4
  TitleInfoSuperBossComponent_o *v55; // x0
  const MethodInfo *v56; // x4
  TitleInfoSuperBossComponent_o *v57; // x0
  const MethodInfo *v58; // x4
  TitleInfoSuperBossComponent_o *v59; // x0
  const MethodInfo *v60; // x4
  const MethodInfo *v61; // x1

  if ( (byte_42E6C71 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_EventBossStatusUiMaster___,
      (_DWORD)superBossEntity,
      (_DWORD)termAtlas,
      method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_18824/*"event_superboss_hp_split"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_18828/*"event_superboss_hp_white"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_18781/*"event_raid_hp_back"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_18825/*"event_superboss_hp_split_frame"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_18822/*"event_superboss_hp_lower"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_18782/*"event_raid_hp_frame"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_18826/*"event_superboss_hp_upper"*/, v31, v32, v33);
    byte_42E6C71 = 1;
  }
  this->fields.eventBossStatusUiEntity = (struct EventBossStatusUiEntity_o *)superBossEntity;
  p_eventBossStatusUiEntity = &this->fields.eventBossStatusUiEntity;
  sub_B5D560(
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___),
          !*p_eventBossStatusUiEntity)
      || !Instance
      || ((EntityFromEventIdAndIndex = (System_Int32_array **)EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                                                (EventBossStatusUiMaster_o *)Instance,
                                                                (*p_eventBossStatusUiEntity)->fields.eventId,
                                                                (*p_eventBossStatusUiEntity)->fields.idx,
                                                                0LL),
           *(_QWORD *)&this->fields.isEncountSuperBoss = EntityFromEventIdAndIndex,
           sub_B5D560(
             (BattleServantConfConponent_o *)&this->fields.isEncountSuperBoss,
             EntityFromEventIdAndIndex,
             v39,
             v40,
             v41,
             v42,
             v43,
             v44),
           (v45 = *(EventBossStatusUiEntity_o **)&this->fields.isEncountSuperBoss) == 0LL)
        ? (GaugeId = -1)
        : (GaugeId = EventBossStatusUiEntity__GetGaugeId(v45, 0LL)),
          (Instance = (DataManager_o *)*p_eventBossStatusUiEntity) == 0LL) )
    {
      sub_B5D69C(Instance, v37);
    }
    IsEncounted = EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)Instance, 0LL);
    LOBYTE(this->fields.HPto) = IsEncounted;
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      (TitleInfoSuperBossComponent_o *)IsEncounted,
      this->fields.hpBarUpperSprite,
      (System_String_o *)StringLiteral_18822/*"event_superboss_hp_lower"*/,
      GaugeId,
      v48);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v49,
      this->fields.hpBarWhiteSprite,
      (System_String_o *)StringLiteral_18826/*"event_superboss_hp_upper"*/,
      GaugeId,
      v50);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v51,
      this->fields.hpSplitSprite,
      (System_String_o *)StringLiteral_18828/*"event_superboss_hp_white"*/,
      GaugeId,
      v52);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v53,
      this->fields.hpSplitPointSprite,
      (System_String_o *)StringLiteral_18825/*"event_superboss_hp_split_frame"*/,
      GaugeId,
      v54);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v55,
      (UISprite_o *)this->fields.hpBarSplitterList,
      (System_String_o *)StringLiteral_18824/*"event_superboss_hp_split"*/,
      GaugeId,
      v56);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v57,
      this->fields.superBossHpBg,
      (System_String_o *)StringLiteral_18782/*"event_raid_hp_frame"*/,
      GaugeId,
      v58);
    TitleInfoSuperBossComponent__SetSpriteFromEventUI(
      v59,
      (UISprite_o *)this->fields.hpBarSlider,
      (System_String_o *)StringLiteral_18781/*"event_raid_hp_back"*/,
      GaugeId,
      v60);
    TitleInfoSuperBossComponent__SetDisp(this, v61);
  }
}


void __fastcall TitleInfoSuperBossComponent__StartDamageAnimation(
        TitleInfoSuperBossComponent_o *this,
        AssetData_o *mapAssetData,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  TitleInfoSuperBossComponent_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  System_String_o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  TitleInfoSuperBossComponent_c *v24; // x0
  System_Int32_array **Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Object_o *clearBossEffect; // x23
  TitleInfoSuperBossComponent_c *v33; // x0
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  TitleInfoSuperBossComponent_c *v41; // x0
  System_String_o *v42; // x0
  System_Int32_array **v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UnityEngine_Object_o *v50; // x22
  const MethodInfo *v51; // x1
  TitleInfoSuperBossComponent_c *v52; // x0
  System_Int32_array **v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7

  v6 = this;
  if ( (byte_42E6C76 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)mapAssetData, (_DWORD)callBack, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&TitleInfoSuperBossComponent_TypeInfo, v10, v11, v12);
    this = (TitleInfoSuperBossComponent_o *)sub_B5D5C4(&StringLiteral_16096/*"_"*/, v13, v14, v15);
    byte_42E6C76 = 1;
  }
  eventBossStatusUiEntity = v6->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    goto LABEL_28;
  v17 = System_Int32__ToString((int)eventBossStatusUiEntity + 16, 0LL);
  v6->fields.onClearCall = callBack;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v6->fields.onClearCall,
    (System_Int32_array **)callBack,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v24 = TitleInfoSuperBossComponent_TypeInfo;
  }
  this = (TitleInfoSuperBossComponent_o *)System_String__Concat_44580072(
                                            v24->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
                                            (System_String_o *)StringLiteral_16096/*"_"*/,
                                            v17,
                                            0LL);
  if ( !mapAssetData )
LABEL_28:
    sub_B5D69C(this, mapAssetData);
  Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                            mapAssetData,
                                                            (System_String_o *)this,
                                                            (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v6->fields.clearBossEffect,
    Object_WarBoardWaitTimeSetting,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  clearBossEffect = (UnityEngine_Object_o *)v6->fields.clearBossEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(clearBossEffect, 0LL, 0LL) )
  {
    v33 = TitleInfoSuperBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v33 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v34 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                   mapAssetData,
                                   v33->static_fields->SUPERBOSS_SPLIT_EFFECT_PREFAB,
                                   (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    v6->fields.clearBossEffect = (struct UnityEngine_GameObject_o *)v34;
    sub_B5D560((BattleServantConfConponent_o *)&v6->fields.clearBossEffect, v34, v35, v36, v37, v38, v39, v40);
  }
  v41 = TitleInfoSuperBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
    v41 = TitleInfoSuperBossComponent_TypeInfo;
  }
  v42 = System_String__Concat_44580072(
          v41->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_16096/*"_"*/,
          v17,
          0LL);
  v43 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 mapAssetData,
                                 v42,
                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  *(_QWORD *)&v6->fields._IsShowClearEvent_k__BackingField = v43;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v6->fields._IsShowClearEvent_k__BackingField,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = *(UnityEngine_Object_o **)&v6->fields._IsShowClearEvent_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v50, 0LL, 0LL) )
  {
    v52 = TitleInfoSuperBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
      v52 = TitleInfoSuperBossComponent_TypeInfo;
    }
    v53 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                   mapAssetData,
                                   v52->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
                                   (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    *(_QWORD *)&v6->fields._IsShowClearEvent_k__BackingField = v53;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v6->fields._IsShowClearEvent_k__BackingField,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  TitleInfoSuperBossComponent__PlayFrameInBoss(v6, v51);
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
  int v2; // w2
  __int64 v3; // x3
  TitleInfoSuperBossComponent___c__DisplayClass62_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct EasingObject_o *eo; // x8
  struct TitleInfoSuperBossComponent_o *_4__this; // x9
  float mStartTime; // s9
  float v26; // s0
  struct TitleInfoSuperBossComponent_o *v27; // x8
  float v28; // s8
  struct TitleInfoSuperBossComponent_o *v29; // x8
  struct TitleInfoSuperBossComponent_o *v30; // x8
  UIProgressBar_o *hpBarSplitter; // x20
  float v32; // s0
  struct TitleInfoSuperBossComponent_o *v33; // x8
  UILabel_o *hpBarUnderSprite; // x20
  struct TitleInfoSuperBossComponent_o *v35; // x8
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  System_String_o *v37; // x21
  Il2CppObject *v38; // x0
  struct TitleInfoSuperBossComponent_o *v39; // x8
  float x; // s0
  UnityEngine_Object_o *clearBossEffect; // x20
  struct TitleInfoSuperBossComponent_o *v42; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v43; // x20
  struct TitleInfoSuperBossComponent_o *v44; // x8
  UnityEngine_GameObject_o *v45; // x20
  UnityEngine_Component_o *Parent; // x0
  struct TitleInfoSuperBossComponent_o *v47; // x9
  struct UISprite_array *hpBarSplitPointList; // x8
  __int64 y_low; // x9
  float v50; // s8
  float y; // s9
  float z; // s10
  TitleInfoSuperBossComponent_c *v53; // x0
  float *static_fields; // x8
  struct TitleInfoSuperBossComponent_o *v55; // x9
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  __int64 v57; // x9
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoSuperBossComponent_c *v59; // x8
  struct TitleInfoSuperBossComponent_o *v60; // x8
  struct TitleInfoSuperBossComponent_o *v61; // x8
  __int64 v62; // x0
  double v63; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42E624D & 1) == 0 )
  {
    sub_B5D5C4(&double_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&TitleInfoSuperBossComponent_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_UITweener_Begin_TweenAlpha___, v17, v18, v19);
    this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)sub_B5D5C4(&StringLiteral_13580/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/, v20, v21, v22);
    byte_42E624D = 1;
  }
  eo = v4->fields.eo;
  if ( !eo )
    goto LABEL_51;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_51;
  mStartTime = eo->fields.mStartTime;
  v26 = UnityEngine_Mathf__Lerp(_4__this->fields.HPsplitPoint, *(float *)&_4__this->fields.HPsplitNo, mStartTime, 0LL);
  v27 = v4->fields.__4__this;
  if ( !v27 )
    goto LABEL_51;
  this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)v27->fields.hpBarSliderUnder;
  if ( !this )
    goto LABEL_51;
  v28 = v26;
  UIProgressBar__set_value((UIProgressBar_o *)this, v26, 0LL);
  v29 = v4->fields.__4__this;
  if ( !v29 )
    goto LABEL_51;
  this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)v29->fields.hpBarSplitter;
  if ( !this )
    goto LABEL_51;
  UIProgressBar__set_value((UIProgressBar_o *)this, v28, 0LL);
  v30 = v4->fields.__4__this;
  if ( !v30 )
    goto LABEL_51;
  hpBarSplitter = (UIProgressBar_o *)v30->fields.hpBarSplitter;
  v32 = sinf(mStartTime * 3.1416);
  if ( !hpBarSplitter )
    goto LABEL_51;
  UIProgressBar__set_alpha(hpBarSplitter, v32 * 0.7, 0LL);
  v33 = v4->fields.__4__this;
  if ( !v33 )
    goto LABEL_51;
  hpBarUnderSprite = (UILabel_o *)v33->fields.hpBarUnderSprite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_13580/*"TITLE_INFO_SUPERBOSS_TOTALHP"*/,
                                                                  0LL);
  v35 = v4->fields.__4__this;
  if ( !v35 )
    goto LABEL_51;
  eventBossStatusUiEntity = v35->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    goto LABEL_51;
  v37 = (System_String_o *)this;
  v63 = (float)(v28 * (float)(__int64)eventBossStatusUiEntity[1].klass);
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v63);
  this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)System_String__Format(v37, v38, 0LL);
  if ( !hpBarUnderSprite )
    goto LABEL_51;
  UILabel__set_text(hpBarUnderSprite, (System_String_o *)this, 0LL);
  v39 = v4->fields.__4__this;
  if ( !v39 )
    goto LABEL_51;
  x = v39->fields.originPos.fields.x;
  if ( x > -1.0 && v28 <= x )
  {
    clearBossEffect = (UnityEngine_Object_o *)v39->fields.clearBossEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)UnityEngine_Object__op_Implicit(clearBossEffect, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v42 = v4->fields.__4__this;
      if ( !v42 )
        goto LABEL_51;
      v43 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v42->fields.clearBossEffect;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                      v43,
                                                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v44 = v4->fields.__4__this;
      if ( !v44 )
        goto LABEL_51;
      v45 = (UnityEngine_GameObject_o *)this;
      Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v44->fields.hpBarSplitPoint, 0LL);
      GameObjectExtensions__SafeSetParent(v45, Parent, 0LL);
      v47 = v4->fields.__4__this;
      if ( !v47 )
        goto LABEL_51;
      hpBarSplitPointList = v47->fields.hpBarSplitPointList;
      if ( !hpBarSplitPointList )
        goto LABEL_51;
      y_low = SLODWORD(v47->fields.originPos.fields.y);
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
      v50 = localPosition.fields.x;
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      v53 = TitleInfoSuperBossComponent_TypeInfo;
      if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
        v53 = TitleInfoSuperBossComponent_TypeInfo;
      }
      static_fields = (float *)v53->static_fields;
      v65.fields.x = v50 + static_fields[9];
      v65.fields.y = y + static_fields[10];
      v65.fields.z = z + static_fields[11];
      GameObjectExtensions__SetLocalPosition(v45, v65, 0LL);
    }
    v55 = v4->fields.__4__this;
    if ( !v55 )
      goto LABEL_51;
    eventSuperBossEntity = v55->fields.eventSuperBossEntity;
    if ( !eventSuperBossEntity )
      goto LABEL_51;
    v57 = SLODWORD(v55->fields.originPos.fields.y);
    if ( (unsigned int)v57 < LODWORD(eventSuperBossEntity->fields.name) )
    {
      this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)*(&eventSuperBossEntity->fields.maxHp + v57);
      if ( this )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v59 = TitleInfoSuperBossComponent_TypeInfo;
        if ( (BYTE3(TitleInfoSuperBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoSuperBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoSuperBossComponent_TypeInfo);
          v59 = TitleInfoSuperBossComponent_TypeInfo;
        }
        this = (TitleInfoSuperBossComponent___c__DisplayClass62_0_o *)UITweener__Begin_TweenWidth_(
                                                                        gameObject,
                                                                        v59->static_fields->ANIM_DURATION_SPLIT_ALPHA,
                                                                        (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenAlpha___);
        if ( this )
        {
          LODWORD(this->fields.__4__this) = 2;
          this[3].fields.__4__this = (struct TitleInfoSuperBossComponent_o *)1065353216;
          v60 = v4->fields.__4__this;
          if ( v60 )
          {
            v60->fields.originPos.fields.x = -1.0;
            v61 = v4->fields.__4__this;
            if ( v61 )
            {
              v61->fields.originPos.fields.y = NAN;
              return;
            }
          }
        }
      }
LABEL_51:
      sub_B5D69C(this, method);
    }
LABEL_52:
    v62 = sub_B5D6C8(this);
    sub_B5D668(v62, 0LL);
  }
}