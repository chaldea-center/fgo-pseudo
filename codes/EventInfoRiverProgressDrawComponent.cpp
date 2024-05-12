void __fastcall EventInfoRiverProgressDrawComponent___ctor(
        EventInfoRiverProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoRiverProgressDrawComponent__Awake(
        EventInfoRiverProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoRiverProgressDrawComponent__OnDestroy(
        EventInfoRiverProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase__ReleaseEventUIEffectPathAssetData(
    (EventInfoUIBase_o *)this,
    this->fields.eventId,
    this->fields.gaugeBackFileName,
    0LL);
  EventInfoUIBase__ReleaseEventUIEffectPathAssetData(
    (EventInfoUIBase_o *)this,
    this->fields.eventId,
    this->fields.gaugeFrameFileName,
    0LL);
}


System_Collections_IEnumerator_o *__fastcall EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(
        EventInfoRiverProgressDrawComponent_o *this,
        System_Action_o *endAction,
        bool isFadeIn,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_438C271 & 1) == 0 )
  {
    sub_B775C4(&EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_TypeInfo);
    byte_438C271 = 1;
  }
  v7 = sub_B77694(EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_TypeInfo);
  EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19___ctor(
    (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B7769C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = endAction;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)endAction, v16, v17, v18, v19, v20, v21);
  *(_BYTE *)(v7 + 48) = isFadeIn;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall EventInfoRiverProgressDrawComponent__PlayFade(
        EventInfoRiverProgressDrawComponent_o *this,
        float from,
        float to,
        float time,
        int32_t easingType,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
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
  const MethodInfo *v28; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  EasingObject_o *v37; // x21
  System_Action_o *v38; // x22
  System_Action_o *v39; // x23

  if ( (byte_438C273 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B775C4(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__0__);
    sub_B775C4(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__1__);
    sub_B775C4(&EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_TypeInfo);
    byte_438C273 = 1;
  }
  v13 = sub_B77694(EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_TypeInfo);
  EventInfoRiverProgressDrawComponent___c__DisplayClass21_0___ctor(
    (EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_6;
  *(float *)(v13 + 24) = from;
  *(float *)(v13 + 28) = to;
  *(_QWORD *)(v13 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 40) = endAction;
  sub_B77560((BattleServantConfConponent_o *)(v13 + 40), (System_Int32_array **)endAction, v22, v23, v24, v25, v26, v27);
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha(this, *(float *)(v13 + 24), v28);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 16) = Component_UIWidget;
  sub_B77560((BattleServantConfConponent_o *)(v13 + 16), Component_UIWidget, v31, v32, v33, v34, v35, v36);
  v37 = *(EasingObject_o **)(v13 + 16);
  v38 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v13,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__0__,
    0LL);
  v39 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v13,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__1__,
    0LL);
  if ( !v37 )
LABEL_6:
    sub_B7769C(v14, v15);
  EasingObject__Play(v37, time, v38, v39, 0.0, easingType, 0LL);
}


void __fastcall EventInfoRiverProgressDrawComponent__PlayProgressClearAnim(
        EventInfoRiverProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_GameObject_o *nextUIObject; // x0
  __int64 v7; // x1
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
  UnityEngine_Object_o *scenarioOpenAnimPrefab; // x22
  char v21; // w22
  struct UnityEngine_GameObject_o *v22; // x22
  struct UnityEngine_GameObject_o *v23; // x0
  struct UnityEngine_GameObject_o **p_scenarioOpenObject; // x23
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_GameObject_o *scenarioOpenObject; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v33; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  srcLineSprite_o *v35; // x23
  System_Action_o *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  const MethodInfo *v43; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438C272 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass20_0__PlayProgressClearAnim_b__0__);
    sub_B775C4(&EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_TypeInfo);
    sub_B775C4(&StringLiteral_17172/*"bit_scenario_open"*/);
    byte_438C272 = 1;
  }
  v5 = sub_B77694(EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_TypeInfo);
  EventInfoRiverProgressDrawComponent___c__DisplayClass20_0___ctor(
    (EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endAction;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)endAction, v14, v15, v16, v17, v18, v19);
  scenarioOpenAnimPrefab = (UnityEngine_Object_o *)this->fields.scenarioOpenAnimPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(scenarioOpenAnimPrefab, 0LL, 0LL);
  if ( !this->fields.nextUIObject )
    goto LABEL_25;
  v21 = (char)nextUIObject;
  UnityEngine_GameObject__SetActive(this->fields.nextUIObject, 0, 0LL);
  if ( (v21 & 1) != 0 )
    goto LABEL_21;
  v22 = this->fields.scenarioOpenAnimPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v23 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)v22,
                                             (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.scenarioOpenObject = v23;
  p_scenarioOpenObject = &this->fields.scenarioOpenObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.scenarioOpenObject,
    (System_Int32_array **)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  scenarioOpenObject = this->fields.scenarioOpenObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_32813688(scenarioOpenObject, gameObject, 0LL);
  nextUIObject = this->fields.nextUIObject;
  if ( !nextUIObject )
    goto LABEL_25;
  v33 = *p_scenarioOpenObject;
  nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nextUIObject, 0LL);
  if ( !nextUIObject )
    goto LABEL_25;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nextUIObject, 0LL);
  GameObjectExtensions__SetLocalPosition(v33, localPosition, 0LL);
  nextUIObject = *p_scenarioOpenObject;
  if ( !*p_scenarioOpenObject )
    goto LABEL_25;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      nextUIObject,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
  {
LABEL_21:
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0LL);
    return;
  }
  nextUIObject = *p_scenarioOpenObject;
  if ( !*p_scenarioOpenObject )
    goto LABEL_25;
  v35 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          nextUIObject,
          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v35, 0LL, 0LL) )
    goto LABEL_21;
  v36 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v5,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass20_0__PlayProgressClearAnim_b__0__,
    0LL);
  if ( !v35
    || (*(_QWORD *)&v35->fields.mtIsUpdate = v36,
        sub_B77560(
          (BattleServantConfConponent_o *)&v35->fields.mtIsUpdate,
          (System_Int32_array **)v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42),
        !Component_srcLineSprite) )
  {
LABEL_25:
    sub_B7769C(nextUIObject, v7);
  }
  SimpleAnimation__Play_16815192(
    (SimpleAnimation_o *)Component_srcLineSprite,
    (System_String_o *)StringLiteral_17172/*"bit_scenario_open"*/,
    0LL);
  EventInfoRiverProgressDrawComponent__PlayScenarioReleaseSe(this, v43);
}


void __fastcall EventInfoRiverProgressDrawComponent__PlayScenarioReleaseSe(
        EventInfoRiverProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *releaseScenarioSEName; // x19
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  int max_length; // w8
  System_String_array *v7; // x19
  System_String_o *v8; // x20
  System_String_o *v9; // x21
  SePlayer_o *v10; // x0
  SePlayer_o *v11; // x20
  __int64 v12; // x0
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438C274 & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438C274 = 1;
  }
  result = 0.0;
  if ( !System_String__IsNullOrEmpty(this->fields.releaseScenarioSEName, 0LL) )
  {
    releaseScenarioSEName = this->fields.releaseScenarioSEName;
    v4 = (System_String_array *)sub_B775DC(char___TypeInfo, 1LL);
    if ( !v4 )
      goto LABEL_22;
    v5 = v4;
    if ( !v4->max_length )
      goto LABEL_23;
    LOWORD(v4->m_Items[0]) = 58;
    if ( !releaseScenarioSEName )
      goto LABEL_22;
    v4 = System_String__Split(releaseScenarioSEName, (System_Char_array *)v4, 0LL);
    if ( !v4 )
      goto LABEL_22;
    max_length = v4->max_length;
    v7 = v4;
    if ( !max_length )
    {
LABEL_23:
      v12 = sub_B776C8(v4);
      sub_B77668(v12, 0LL);
    }
    v8 = v4->m_Items[0];
    if ( max_length < 2 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSe(v8, 0LL);
      return;
    }
    v9 = v4->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v10 = SoundManager__playSe_23512032(v8, v9, 0LL);
    result = 0.0;
    if ( (int)v7->max_length >= 3 )
    {
      v11 = v10;
      v4 = (System_String_array *)System_Single__TryParse(v7->m_Items[2], &result, 0LL);
      if ( ((unsigned __int8)v4 & 1) != 0 )
      {
        if ( v11 )
        {
          SePlayer__set_Pitch(v11, result, 0LL);
          return;
        }
LABEL_22:
        sub_B7769C(v4, v5);
      }
    }
  }
}


void __fastcall EventInfoRiverProgressDrawComponent__SetActive(
        EventInfoRiverProgressDrawComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoRiverProgressDrawComponent__SetSpriteAlpha(
        EventInfoRiverProgressDrawComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct UITexture_o *riverBack; // x0
  long double v5; // q8

  riverBack = this->fields.riverBack;
  if ( !riverBack
    || (v5 = *(long double *)&alpha,
        ((void (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))riverBack->klass->vtable._8_set_alpha.method)(
          riverBack,
          riverBack->klass->vtable._9_CalculateFinalAlpha.methodPtr),
        (riverBack = this->fields.riverFrame) == 0LL) )
  {
    sub_B7769C(riverBack, method);
  }
  ((void (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer, long double))riverBack->klass->vtable._8_set_alpha.method)(
    riverBack,
    riverBack->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    v5);
}


void __fastcall EventInfoRiverProgressDrawComponent__SetTexture(
        EventInfoRiverProgressDrawComponent_o *this,
        UITexture_o *texture,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  EventInfoUIBase__SetUITexture((EventInfoUIBase_o *)this, texture, spriteName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoRiverProgressDrawComponent__Setup(
        EventInfoRiverProgressDrawComponent_o *this,
        EventInfoPointRiverProgressControl_ProgressData_o *inputProgressData,
        int32_t inputEventId,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *nextUIObject; // x0
  __int64 v12; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  System_String_o *v14; // x0
  struct System_String_o *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct EventInfoPointRiverProgressControl_ProgressData_o *v22; // x8
  System_String_o *v23; // x0
  struct System_String_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int32_t eventId; // w21
  System_String_o *gaugeBackFileName; // x22
  System_Action_o *v33; // x23
  int32_t v34; // w21
  System_String_o *gaugeFrameFileName; // x20
  System_Action_o *v36; // x22
  struct EventInfoPointRiverProgressControl_ProgressData_o *v37; // x8
  int32_t ReleaseScenarioIndex; // w20
  EventInfoPointRiverProgressControl_c *v39; // x0
  struct UnityEngine_GameObject_o *scenarioOpenAnimPrefab; // x20
  struct UnityEngine_GameObject_o *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_GameObject_o *scenarioOpenObject; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v50; // x19
  int v51; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438C270 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_B775C4(&Method_EventInfoRiverProgressDrawComponent__Setup_b__18_0__);
    sub_B775C4(&Method_EventInfoRiverProgressDrawComponent__Setup_b__18_1__);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_18878/*"event_gauge_back_0"*/);
    sub_B775C4(&StringLiteral_18883/*"event_gauge_frame_0"*/);
    byte_438C270 = 1;
  }
  v51 = 0;
  this->fields.progressData = inputProgressData;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.progressData,
    (System_Int32_array **)inputProgressData,
    *(System_String_array ***)&inputEventId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  progressData = this->fields.progressData;
  this->fields.eventId = inputEventId;
  if ( !progressData )
    goto LABEL_19;
  v51 = progressData->fields.ReleaseScenarioIndex + 1;
  v14 = System_Int32__ToString((int32_t)&v51, 0LL);
  v15 = System_String__Concat_44901936((System_String_o *)StringLiteral_18878/*"event_gauge_back_0"*/, v14, 0LL);
  this->fields.gaugeBackFileName = v15;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.gaugeBackFileName,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = this->fields.progressData;
  if ( !v22 )
    goto LABEL_19;
  v51 = v22->fields.ReleaseScenarioIndex + 1;
  v23 = System_Int32__ToString((int32_t)&v51, 0LL);
  v24 = System_String__Concat_44901936((System_String_o *)StringLiteral_18883/*"event_gauge_frame_0"*/, v23, 0LL);
  this->fields.gaugeFrameFileName = v24;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.gaugeFrameFileName,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  eventId = this->fields.eventId;
  gaugeBackFileName = this->fields.gaugeBackFileName;
  v33 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_EventInfoRiverProgressDrawComponent__Setup_b__18_0__, 0LL);
  EventInfoUIBase__LoadEventUIEffectPathAssetData((EventInfoUIBase_o *)this, eventId, gaugeBackFileName, v33, 0LL);
  v34 = this->fields.eventId;
  gaugeFrameFileName = this->fields.gaugeFrameFileName;
  v36 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_EventInfoRiverProgressDrawComponent__Setup_b__18_1__, 0LL);
  EventInfoUIBase__LoadEventUIEffectPathAssetData((EventInfoUIBase_o *)this, v34, gaugeFrameFileName, v36, 0LL);
  v37 = this->fields.progressData;
  if ( !v37 )
    goto LABEL_19;
  if ( v37->fields.IsReleaseScenarioAnimEnd )
  {
    ReleaseScenarioIndex = v37->fields.ReleaseScenarioIndex;
    v39 = EventInfoPointRiverProgressControl_TypeInfo;
    if ( (BYTE3(EventInfoPointRiverProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
      v39 = EventInfoPointRiverProgressControl_TypeInfo;
    }
    if ( ReleaseScenarioIndex < v39->static_fields->MAX_SCENARIO_RIVER_INDEX )
    {
      nextUIObject = this->fields.nextUIObject;
      if ( nextUIObject )
      {
        UnityEngine_GameObject__SetActive(nextUIObject, 0, 0LL);
        scenarioOpenAnimPrefab = this->fields.scenarioOpenAnimPrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v41 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)scenarioOpenAnimPrefab,
                                                   (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.scenarioOpenObject = v41;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.scenarioOpenObject,
          (System_Int32_array **)v41,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
        scenarioOpenObject = this->fields.scenarioOpenObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SafeSetParent_32813688(scenarioOpenObject, gameObject, 0LL);
        nextUIObject = this->fields.nextUIObject;
        if ( nextUIObject )
        {
          v50 = this->fields.scenarioOpenObject;
          nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nextUIObject, 0LL);
          if ( nextUIObject )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nextUIObject, 0LL);
            GameObjectExtensions__SetLocalPosition(v50, localPosition, 0LL);
            return;
          }
        }
      }
LABEL_19:
      sub_B7769C(nextUIObject, v12);
    }
  }
}


void __fastcall EventInfoRiverProgressDrawComponent___Setup_b__18_0(
        EventInfoRiverProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase__SetUITexture((EventInfoUIBase_o *)this, this->fields.riverBack, this->fields.riverBackName, 0LL);
}


void __fastcall EventInfoRiverProgressDrawComponent___Setup_b__18_1(
        EventInfoRiverProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase__SetUITexture((EventInfoUIBase_o *)this, this->fields.riverFrame, this->fields.riverFrameName, 0LL);
}


EventInfoPointRiverProgressControl_ProgressData_o *__fastcall EventInfoRiverProgressDrawComponent__get_ProgressData(
        EventInfoRiverProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.progressData;
}


void __fastcall EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19___ctor(
        EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19__MoveNext(
        EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *this,
        const MethodInfo *method)
{
  EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *v2; // x19
  int32_t _1__state; // w8
  struct EventInfoRiverProgressDrawComponent_o *_4__this; // x20
  struct System_String_o **v5; // x8
  WebViewObject_o *Component_WebViewObject; // x21
  _BOOL4 isFadeIn; // w23
  float x; // s8
  float y; // s9
  float z; // s10
  bool v11; // w2
  EventInfoUISlideAnimation_o *v12; // x0
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s1
  float v17; // s0
  bool result; // w0
  unsigned int localPosition; // s8
  float v20; // s1
  float v21; // s10
  float v22; // s9
  UnityEngine_Object_o *scenarioOpenObject; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  Il2CppObject **p__2__current; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4388672 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_22309/*"river_fade_in"*/);
    sub_B775C4(&StringLiteral_22310/*"river_fade_out"*/);
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)sub_B775C4(&StringLiteral_22222/*"release_scenario_out"*/);
    byte_4388672 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_39;
    EventInfoRiverProgressDrawComponent__SetActive(_4__this, 1, 0LL);
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)_4__this->fields.riverAnim;
    if ( !this )
      goto LABEL_39;
    SimpleAnimation__Play_16815192((SimpleAnimation_o *)this, v2->fields._animName_5__2, 0LL);
    if ( v2->fields.isFadeIn )
    {
      v16 = 1.0;
      v17 = 0.0;
    }
    else
    {
      v17 = 1.0;
      v16 = 0.0;
    }
    EventInfoRiverProgressDrawComponent__PlayFade(_4__this, v17, v16, 1.0, 3, 0LL, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_39;
  this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)_4__this->fields.animEndAction;
  if ( !this )
    goto LABEL_39;
  this->fields.__4__this = (struct EventInfoRiverProgressDrawComponent_o *)v2->fields.endAction;
  sub_B77560(&this->fields.__4__this);
  if ( v2->fields.isFadeIn )
    v5 = (struct System_String_o **)&StringLiteral_22309/*"river_fade_in"*/;
  else
    v5 = (struct System_String_o **)&StringLiteral_22310/*"river_fade_out"*/;
  v2->fields._animName_5__2 = *v5;
  sub_B77560(&v2->fields._animName_5__2);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)_4__this,
                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    isFadeIn = v2->fields.isFadeIn;
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_transform(
                                                                                    (UnityEngine_Component_o *)_4__this,
                                                                                    0LL);
    if ( !this )
      goto LABEL_39;
    if ( isFadeIn )
    {
      position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      x = position.fields.x;
      y = position.fields.y;
      z = position.fields.z;
      this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)_4__this,
                                                                                      0LL);
      if ( !Component_WebViewObject )
        goto LABEL_39;
      GameObjectExtensions__SetLocalPosition_32807768(
        (UnityEngine_GameObject_o *)this,
        x,
        y - *((float *)&Component_WebViewObject->fields.onStarted + 1),
        z,
        0LL);
      v11 = 1;
      v12 = (EventInfoUISlideAnimation_o *)Component_WebViewObject;
      v13 = x;
      v14 = y;
      v15 = z;
    }
    else
    {
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_transform(
                                                                                      (UnityEngine_Component_o *)_4__this,
                                                                                      0LL);
      if ( !this )
        goto LABEL_39;
      *(UnityEngine_Vector3_o *)(&v20 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      if ( !Component_WebViewObject )
        goto LABEL_39;
      v21 = *((float *)&Component_WebViewObject->fields.onStarted + 1);
      v22 = v20;
      this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_transform(
                                                                                      (UnityEngine_Component_o *)_4__this,
                                                                                      0LL);
      if ( !this )
        goto LABEL_39;
      *(UnityEngine_Vector3_o *)(&v15 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      v14 = v22 + v21;
      v12 = (EventInfoUISlideAnimation_o *)Component_WebViewObject;
      v13 = *(float *)&localPosition;
      v11 = 0;
    }
    EventInfoUISlideAnimation__StartSlideAnim_27694080(v12, 0LL, *(UnityEngine_Vector3_o *)&v13, v11, 0LL);
  }
  if ( !v2->fields.isFadeIn )
  {
    scenarioOpenObject = (UnityEngine_Object_o *)_4__this->fields.scenarioOpenObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__op_Implicit(scenarioOpenObject, 0LL);
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)_4__this->fields.scenarioOpenObject;
    if ( !this )
      goto LABEL_39;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)this,
                                                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Object__op_Inequality(
                                                                                    Component_srcLineSprite,
                                                                                    0LL,
                                                                                    0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( Component_srcLineSprite )
      {
        SimpleAnimation__Play_16815192(
          (SimpleAnimation_o *)Component_srcLineSprite,
          (System_String_o *)StringLiteral_22222/*"release_scenario_out"*/,
          0LL);
        goto LABEL_38;
      }
LABEL_39:
      sub_B7769C(this, method);
    }
  }
LABEL_38:
  v2->fields.__2__current = 0LL;
  p__2__current = &v2->fields.__2__current;
  sub_B77560(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19__System_Collections_IEnumerator_Reset(
        EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19__System_Collections_IEnumerator_get_Current(
        EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19__System_IDisposable_Dispose(
        EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoRiverProgressDrawComponent___c__DisplayClass20_0___ctor(
        EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoRiverProgressDrawComponent___c__DisplayClass20_0___PlayProgressClearAnim_b__0(
        EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoRiverProgressDrawComponent_o *_4__this; // x8
  EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_o *)_4__this->fields.nextUIObject) == 0LL) )
  {
    sub_B7769C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ActionExtensions__Call(v3->fields.endAction, 0LL);
}


void __fastcall EventInfoRiverProgressDrawComponent___c__DisplayClass21_0___ctor(
        EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoRiverProgressDrawComponent___c__DisplayClass21_0___PlayFade_b__0(
        EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x8
  EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_o *v3; // x19
  float v4; // s0

  easingObj = this->fields.easingObj;
  if ( !easingObj
    || (v3 = this,
        v4 = UnityEngine_Mathf__Lerp(this->fields.from, this->fields.to, easingObj->fields.mStartTime, 0LL),
        (this = (EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_o *)v3->fields.__4__this) == 0LL) )
  {
    sub_B7769C(this, method);
  }
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha((EventInfoRiverProgressDrawComponent_o *)this, v4, 0LL);
}


void __fastcall EventInfoRiverProgressDrawComponent___c__DisplayClass21_0___PlayFade_b__1(
        EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  EventInfoRiverProgressDrawComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(0LL, method);
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha(_4__this, this->fields.to, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}