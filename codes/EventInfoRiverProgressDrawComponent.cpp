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


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(
        EventInfoRiverProgressDrawComponent_o *this,
        System_Action_o *endAction,
        bool isFadeIn,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_421561F & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_TypeInfo, endAction);
    byte_421561F = 1;
  }
  v7 = sub_B0D974(EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_TypeInfo, endAction, isFadeIn);
  EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19___ctor(
    (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v7 + 40) = endAction;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)endAction, v15, v16, v17, v18, v19, v20);
  *(_BYTE *)(v7 + 48) = isFadeIn;
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoRiverProgressDrawComponent__PlayFade(
        EventInfoRiverProgressDrawComponent_o *this,
        float from,
        float to,
        float time,
        int32_t easingType,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  __int64 v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  EasingObject_o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  System_Action_o *v43; // x22
  __int64 v44; // x1
  __int64 v45; // x2
  System_Action_o *v46; // x23

  if ( (byte_4215621 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&easingType);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v13);
    sub_B0D8A4(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__0__, v14);
    sub_B0D8A4(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__1__, v15);
    sub_B0D8A4(&EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_TypeInfo, v16);
    byte_4215621 = 1;
  }
  v17 = sub_B0D974(
          EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_TypeInfo,
          *(_QWORD *)&easingType,
          endAction);
  EventInfoRiverProgressDrawComponent___c__DisplayClass21_0___ctor(
    (EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_o *)v17,
    0LL);
  if ( !v17 )
    goto LABEL_6;
  *(float *)(v17 + 24) = from;
  *(float *)(v17 + 28) = to;
  *(_QWORD *)(v17 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 32), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v17 + 40) = endAction;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 40), (System_Int32_array **)endAction, v25, v26, v27, v28, v29, v30);
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha(this, *(float *)(v17 + 24), v31);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v17 + 16) = Component_UIWidget;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 16), Component_UIWidget, v34, v35, v36, v37, v38, v39);
  v40 = *(EasingObject_o **)(v17 + 16);
  v43 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v41, v42);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v17,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__0__,
    0LL);
  v46 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v44, v45);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v17,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__1__,
    0LL);
  if ( !v40 )
LABEL_6:
    sub_B0D97C(v18);
  EasingObject__Play(v40, time, v43, v46, 0.0, easingType, 0LL);
}


void __fastcall EventInfoRiverProgressDrawComponent__PlayProgressClearAnim(
        EventInfoRiverProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  UnityEngine_GameObject_o *nextUIObject; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Object_o *scenarioOpenAnimPrefab; // x22
  char v27; // w22
  struct UnityEngine_GameObject_o *v28; // x22
  struct UnityEngine_GameObject_o *v29; // x0
  struct UnityEngine_GameObject_o **p_scenarioOpenObject; // x23
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_GameObject_o *scenarioOpenObject; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v39; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  srcLineSprite_o *v41; // x23
  __int64 v42; // x1
  __int64 v43; // x2
  System_Action_o *v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  const MethodInfo *v51; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4215620 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, endAction);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v6);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass20_0__PlayProgressClearAnim_b__0__, v9);
    sub_B0D8A4(&EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_16887/*"bit_scenario_open"*/, v11);
    byte_4215620 = 1;
  }
  v12 = sub_B0D974(EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_TypeInfo, endAction, method);
  EventInfoRiverProgressDrawComponent___c__DisplayClass20_0___ctor(
    (EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_25;
  *(_QWORD *)(v12 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v12 + 24) = endAction;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)endAction, v20, v21, v22, v23, v24, v25);
  scenarioOpenAnimPrefab = (UnityEngine_Object_o *)this->fields.scenarioOpenAnimPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(scenarioOpenAnimPrefab, 0LL, 0LL);
  if ( !this->fields.nextUIObject )
    goto LABEL_25;
  v27 = (char)nextUIObject;
  UnityEngine_GameObject__SetActive(this->fields.nextUIObject, 0, 0LL);
  if ( (v27 & 1) != 0 )
    goto LABEL_21;
  v28 = this->fields.scenarioOpenAnimPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v29 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)v28,
                                             (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.scenarioOpenObject = v29;
  p_scenarioOpenObject = &this->fields.scenarioOpenObject;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.scenarioOpenObject,
    (System_Int32_array **)v29,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  scenarioOpenObject = this->fields.scenarioOpenObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_31184716(scenarioOpenObject, gameObject, 0LL);
  nextUIObject = this->fields.nextUIObject;
  if ( !nextUIObject )
    goto LABEL_25;
  v39 = *p_scenarioOpenObject;
  nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nextUIObject, 0LL);
  if ( !nextUIObject )
    goto LABEL_25;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nextUIObject, 0LL);
  GameObjectExtensions__SetLocalPosition(v39, localPosition, 0LL);
  nextUIObject = *p_scenarioOpenObject;
  if ( !*p_scenarioOpenObject )
    goto LABEL_25;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      nextUIObject,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
  {
LABEL_21:
    ActionExtensions__Call(*(System_Action_o **)(v12 + 24), 0LL);
    return;
  }
  nextUIObject = *p_scenarioOpenObject;
  if ( !*p_scenarioOpenObject )
    goto LABEL_25;
  v41 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          nextUIObject,
          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v41, 0LL, 0LL) )
    goto LABEL_21;
  v44 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v42, v43);
  System_Action___ctor(
    v44,
    (Il2CppObject *)v12,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass20_0__PlayProgressClearAnim_b__0__,
    0LL);
  if ( !v41
    || (*(_QWORD *)&v41->fields.mtIsUpdate = v44,
        sub_B0D840(
          (BattleServantConfConponent_o *)&v41->fields.mtIsUpdate,
          (System_Int32_array **)v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50),
        !Component_srcLineSprite) )
  {
LABEL_25:
    sub_B0D97C(nextUIObject);
  }
  SimpleAnimation__Play_50482404(
    (SimpleAnimation_o *)Component_srcLineSprite,
    (System_String_o *)StringLiteral_16887/*"bit_scenario_open"*/,
    0LL);
  EventInfoRiverProgressDrawComponent__PlayScenarioReleaseSe(this, v51);
}


void __fastcall EventInfoRiverProgressDrawComponent__PlayScenarioReleaseSe(
        EventInfoRiverProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *releaseScenarioSEName; // x19
  System_String_array *v5; // x0
  int max_length; // w8
  System_String_array *v7; // x19
  System_String_o *v8; // x20
  System_String_o *v9; // x21
  SePlayer_o *v10; // x0
  SePlayer_o *v11; // x20
  __int64 v12; // x0
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4215622 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4215622 = 1;
  }
  result = 0.0;
  if ( !System_String__IsNullOrEmpty(this->fields.releaseScenarioSEName, 0LL) )
  {
    releaseScenarioSEName = this->fields.releaseScenarioSEName;
    v5 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !v5 )
      goto LABEL_22;
    if ( !v5->max_length )
      goto LABEL_23;
    LOWORD(v5->m_Items[0]) = 58;
    if ( !releaseScenarioSEName )
      goto LABEL_22;
    v5 = System_String__Split(releaseScenarioSEName, (System_Char_array *)v5, 0LL);
    if ( !v5 )
      goto LABEL_22;
    max_length = v5->max_length;
    v7 = v5;
    if ( !max_length )
    {
LABEL_23:
      v12 = sub_B0D9A8(v5);
      sub_B0D948(v12, 0LL);
    }
    v8 = v5->m_Items[0];
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
    v9 = v5->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v10 = SoundManager__playSe_24977004(v8, v9, 0LL);
    result = 0.0;
    if ( (int)v7->max_length >= 3 )
    {
      v11 = v10;
      v5 = (System_String_array *)System_Single__TryParse(v7->m_Items[2], &result, 0LL);
      if ( ((unsigned __int8)v5 & 1) != 0 )
      {
        if ( v11 )
        {
          SePlayer__set_Pitch(v11, result, 0LL);
          return;
        }
LABEL_22:
        sub_B0D97C(v5);
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
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
    sub_B0D97C(riverBack);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_GameObject_o *nextUIObject; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  System_String_o *v20; // x0
  struct System_String_o *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct EventInfoPointRiverProgressControl_ProgressData_o *v28; // x8
  System_String_o *v29; // x0
  struct System_String_o *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  int32_t eventId; // w21
  System_String_o *gaugeBackFileName; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  System_Action_o *v41; // x23
  int32_t v42; // w21
  System_String_o *gaugeFrameFileName; // x20
  __int64 v44; // x1
  __int64 v45; // x2
  System_Action_o *v46; // x22
  struct EventInfoPointRiverProgressControl_ProgressData_o *v47; // x8
  int32_t ReleaseScenarioIndex; // w20
  EventInfoPointRiverProgressControl_c *v49; // x0
  struct UnityEngine_GameObject_o *scenarioOpenAnimPrefab; // x20
  struct UnityEngine_GameObject_o *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_GameObject_o *scenarioOpenObject; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v60; // x19
  int v61; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421561E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, inputProgressData);
    sub_B0D8A4(&EventInfoPointRiverProgressControl_TypeInfo, v11);
    sub_B0D8A4(&Method_EventInfoRiverProgressDrawComponent__Setup_b__18_0__, v12);
    sub_B0D8A4(&Method_EventInfoRiverProgressDrawComponent__Setup_b__18_1__, v13);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_18568/*"event_gauge_back_0"*/, v16);
    sub_B0D8A4(&StringLiteral_18573/*"event_gauge_frame_0"*/, v17);
    byte_421561E = 1;
  }
  v61 = 0;
  this->fields.progressData = inputProgressData;
  sub_B0D840(
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
  v61 = progressData->fields.ReleaseScenarioIndex + 1;
  v20 = System_Int32__ToString((int32_t)&v61, 0LL);
  v21 = System_String__Concat_43849904((System_String_o *)StringLiteral_18568/*"event_gauge_back_0"*/, v20, 0LL);
  this->fields.gaugeBackFileName = v21;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.gaugeBackFileName,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = this->fields.progressData;
  if ( !v28 )
    goto LABEL_19;
  v61 = v28->fields.ReleaseScenarioIndex + 1;
  v29 = System_Int32__ToString((int32_t)&v61, 0LL);
  v30 = System_String__Concat_43849904((System_String_o *)StringLiteral_18573/*"event_gauge_frame_0"*/, v29, 0LL);
  this->fields.gaugeFrameFileName = v30;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.gaugeFrameFileName,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  eventId = this->fields.eventId;
  gaugeBackFileName = this->fields.gaugeBackFileName;
  v41 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v39, v40);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_EventInfoRiverProgressDrawComponent__Setup_b__18_0__, 0LL);
  EventInfoUIBase__LoadEventUIEffectPathAssetData((EventInfoUIBase_o *)this, eventId, gaugeBackFileName, v41, 0LL);
  v42 = this->fields.eventId;
  gaugeFrameFileName = this->fields.gaugeFrameFileName;
  v46 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v44, v45);
  System_Action___ctor(v46, (Il2CppObject *)this, Method_EventInfoRiverProgressDrawComponent__Setup_b__18_1__, 0LL);
  EventInfoUIBase__LoadEventUIEffectPathAssetData((EventInfoUIBase_o *)this, v42, gaugeFrameFileName, v46, 0LL);
  v47 = this->fields.progressData;
  if ( !v47 )
    goto LABEL_19;
  if ( v47->fields.IsReleaseScenarioAnimEnd )
  {
    ReleaseScenarioIndex = v47->fields.ReleaseScenarioIndex;
    v49 = EventInfoPointRiverProgressControl_TypeInfo;
    if ( (BYTE3(EventInfoPointRiverProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
      v49 = EventInfoPointRiverProgressControl_TypeInfo;
    }
    if ( ReleaseScenarioIndex < v49->static_fields->MAX_SCENARIO_RIVER_INDEX )
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
        v51 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)scenarioOpenAnimPrefab,
                                                   (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.scenarioOpenObject = v51;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.scenarioOpenObject,
          (System_Int32_array **)v51,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57);
        scenarioOpenObject = this->fields.scenarioOpenObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SafeSetParent_31184716(scenarioOpenObject, gameObject, 0LL);
        nextUIObject = this->fields.nextUIObject;
        if ( nextUIObject )
        {
          v60 = this->fields.scenarioOpenObject;
          nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nextUIObject, 0LL);
          if ( nextUIObject )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nextUIObject, 0LL);
            GameObjectExtensions__SetLocalPosition(v60, localPosition, 0LL);
            return;
          }
        }
      }
LABEL_19:
      sub_B0D97C(nextUIObject);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  struct EventInfoRiverProgressDrawComponent_o *_4__this; // x20
  struct EventInfoRiverProgressDrawComponent_o *endAction; // x1
  struct System_String_o **v11; // x8
  struct System_String_o *v12; // x1
  WebViewObject_o *Component_WebViewObject; // x21
  _BOOL4 isFadeIn; // w23
  float x; // s8
  float y; // s9
  float z; // s10
  bool v18; // w2
  EventInfoUISlideAnimation_o *v19; // x0
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s1
  float v24; // s0
  bool result; // w0
  unsigned int localPosition; // s8
  float v27; // s1
  float v28; // s10
  float v29; // s9
  UnityEngine_Object_o *scenarioOpenObject; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  Il2CppObject **p__2__current; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4211B71 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_21915/*"river_fade_in"*/, v5);
    sub_B0D8A4(&StringLiteral_21916/*"river_fade_out"*/, v6);
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)sub_B0D8A4(&StringLiteral_21829/*"release_scenario_out"*/, v7);
    byte_4211B71 = 1;
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
    SimpleAnimation__Play_50482404((SimpleAnimation_o *)this, v2->fields._animName_5__2, 0LL);
    if ( v2->fields.isFadeIn )
    {
      v23 = 1.0;
      v24 = 0.0;
    }
    else
    {
      v24 = 1.0;
      v23 = 0.0;
    }
    EventInfoRiverProgressDrawComponent__PlayFade(_4__this, v24, v23, 1.0, 3, 0LL, 0LL);
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
  endAction = (struct EventInfoRiverProgressDrawComponent_o *)v2->fields.endAction;
  this->fields.__4__this = endAction;
  sub_B0D840(&this->fields.__4__this, endAction);
  if ( v2->fields.isFadeIn )
    v11 = (struct System_String_o **)&StringLiteral_21915/*"river_fade_in"*/;
  else
    v11 = (struct System_String_o **)&StringLiteral_21916/*"river_fade_out"*/;
  v12 = *v11;
  v2->fields._animName_5__2 = *v11;
  sub_B0D840(&v2->fields._animName_5__2, v12);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)_4__this,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
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
      GameObjectExtensions__SetLocalPosition_31178796(
        (UnityEngine_GameObject_o *)this,
        x,
        y - *((float *)&Component_WebViewObject->fields.onStarted + 1),
        z,
        0LL);
      v18 = 1;
      v19 = (EventInfoUISlideAnimation_o *)Component_WebViewObject;
      v20 = x;
      v21 = y;
      v22 = z;
    }
    else
    {
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_transform(
                                                                                      (UnityEngine_Component_o *)_4__this,
                                                                                      0LL);
      if ( !this )
        goto LABEL_39;
      *(UnityEngine_Vector3_o *)(&v27 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      if ( !Component_WebViewObject )
        goto LABEL_39;
      v28 = *((float *)&Component_WebViewObject->fields.onStarted + 1);
      v29 = v27;
      this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_transform(
                                                                                      (UnityEngine_Component_o *)_4__this,
                                                                                      0LL);
      if ( !this )
        goto LABEL_39;
      *(UnityEngine_Vector3_o *)(&v22 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      v21 = v29 + v28;
      v19 = (EventInfoUISlideAnimation_o *)Component_WebViewObject;
      v20 = *(float *)&localPosition;
      v18 = 0;
    }
    EventInfoUISlideAnimation__StartSlideAnim_26587516(v19, 0LL, *(UnityEngine_Vector3_o *)&v20, v18, 0LL);
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
                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Object__op_Inequality(
                                                                                    Component_srcLineSprite,
                                                                                    0LL,
                                                                                    0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( Component_srcLineSprite )
      {
        SimpleAnimation__Play_50482404(
          (SimpleAnimation_o *)Component_srcLineSprite,
          (System_String_o *)StringLiteral_21829/*"release_scenario_out"*/,
          0LL);
        goto LABEL_38;
      }
LABEL_39:
      sub_B0D97C(this);
    }
  }
LABEL_38:
  v2->fields.__2__current = 0LL;
  p__2__current = &v2->fields.__2__current;
  sub_B0D840(p__2__current, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha(_4__this, this->fields.to, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}