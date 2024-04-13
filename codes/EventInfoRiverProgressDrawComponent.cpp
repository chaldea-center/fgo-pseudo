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

  if ( (byte_42E953B & 1) == 0 )
  {
    sub_B5D5C4(
      &EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_TypeInfo,
      (_DWORD)endAction,
      isFadeIn,
      method);
    byte_42E953B = 1;
  }
  v7 = sub_B5D694(EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_TypeInfo);
  EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19___ctor(
    (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = endAction;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)endAction, v16, v17, v18, v19, v20, v21);
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
  __int64 v25; // x20
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  EasingObject_o *v49; // x21
  System_Action_o *v50; // x22
  System_Action_o *v51; // x23

  if ( (byte_42E953D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, easingType, (_DWORD)endAction, method);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v13, v14, v15);
    sub_B5D5C4(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__0__, v16, v17, v18);
    sub_B5D5C4(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__1__, v19, v20, v21);
    sub_B5D5C4(&EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_TypeInfo, v22, v23, v24);
    byte_42E953D = 1;
  }
  v25 = sub_B5D694(EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_TypeInfo);
  EventInfoRiverProgressDrawComponent___c__DisplayClass21_0___ctor(
    (EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_o *)v25,
    0LL);
  if ( !v25 )
    goto LABEL_6;
  *(float *)(v25 + 24) = from;
  *(float *)(v25 + 28) = to;
  *(_QWORD *)(v25 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 32), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v25 + 40) = endAction;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 40), (System_Int32_array **)endAction, v34, v35, v36, v37, v38, v39);
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha(this, *(float *)(v25 + 24), v40);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v25 + 16) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 16), Component_UIWidget, v43, v44, v45, v46, v47, v48);
  v49 = *(EasingObject_o **)(v25 + 16);
  v50 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v25,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__0__,
    0LL);
  v51 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v51,
    (Il2CppObject *)v25,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__1__,
    0LL);
  if ( !v49 )
LABEL_6:
    sub_B5D69C(v26, v27);
  EasingObject__Play(v49, time, v50, v51, 0.0, easingType, 0LL);
}


void __fastcall EventInfoRiverProgressDrawComponent__PlayProgressClearAnim(
        EventInfoRiverProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  __int64 v27; // x20
  UnityEngine_GameObject_o *nextUIObject; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *scenarioOpenAnimPrefab; // x22
  char v43; // w22
  struct UnityEngine_GameObject_o *v44; // x22
  struct UnityEngine_GameObject_o *v45; // x0
  struct UnityEngine_GameObject_o **p_scenarioOpenObject; // x23
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UnityEngine_GameObject_o *scenarioOpenObject; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v55; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  srcLineSprite_o *v57; // x23
  System_Action_o *v58; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  const MethodInfo *v65; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E953C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)endAction, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(
      &Method_EventInfoRiverProgressDrawComponent___c__DisplayClass20_0__PlayProgressClearAnim_b__0__,
      v18,
      v19,
      v20);
    sub_B5D5C4(&EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_17044/*"bit_scenario_open"*/, v24, v25, v26);
    byte_42E953C = 1;
  }
  v27 = sub_B5D694(EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_TypeInfo);
  EventInfoRiverProgressDrawComponent___c__DisplayClass20_0___ctor(
    (EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_25;
  *(_QWORD *)(v27 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v27 + 24) = endAction;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 24), (System_Int32_array **)endAction, v36, v37, v38, v39, v40, v41);
  scenarioOpenAnimPrefab = (UnityEngine_Object_o *)this->fields.scenarioOpenAnimPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(scenarioOpenAnimPrefab, 0LL, 0LL);
  if ( !this->fields.nextUIObject )
    goto LABEL_25;
  v43 = (char)nextUIObject;
  UnityEngine_GameObject__SetActive(this->fields.nextUIObject, 0, 0LL);
  if ( (v43 & 1) != 0 )
    goto LABEL_21;
  v44 = this->fields.scenarioOpenAnimPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v45 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)v44,
                                             (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.scenarioOpenObject = v45;
  p_scenarioOpenObject = &this->fields.scenarioOpenObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.scenarioOpenObject,
    (System_Int32_array **)v45,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  scenarioOpenObject = this->fields.scenarioOpenObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_32436524(scenarioOpenObject, gameObject, 0LL);
  nextUIObject = this->fields.nextUIObject;
  if ( !nextUIObject )
    goto LABEL_25;
  v55 = *p_scenarioOpenObject;
  nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nextUIObject, 0LL);
  if ( !nextUIObject )
    goto LABEL_25;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nextUIObject, 0LL);
  GameObjectExtensions__SetLocalPosition(v55, localPosition, 0LL);
  nextUIObject = *p_scenarioOpenObject;
  if ( !*p_scenarioOpenObject )
    goto LABEL_25;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      nextUIObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
  {
LABEL_21:
    ActionExtensions__Call(*(System_Action_o **)(v27 + 24), 0LL);
    return;
  }
  nextUIObject = *p_scenarioOpenObject;
  if ( !*p_scenarioOpenObject )
    goto LABEL_25;
  v57 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          nextUIObject,
          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v57, 0LL, 0LL) )
    goto LABEL_21;
  v58 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v58,
    (Il2CppObject *)v27,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass20_0__PlayProgressClearAnim_b__0__,
    0LL);
  if ( !v57
    || (*(_QWORD *)&v57->fields.mtIsUpdate = v58,
        sub_B5D560(
          (BattleServantConfConponent_o *)&v57->fields.mtIsUpdate,
          (System_Int32_array **)v58,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64),
        !Component_srcLineSprite) )
  {
LABEL_25:
    sub_B5D69C(nextUIObject, v29);
  }
  SimpleAnimation__Play_16676044(
    (SimpleAnimation_o *)Component_srcLineSprite,
    (System_String_o *)StringLiteral_17044/*"bit_scenario_open"*/,
    0LL);
  EventInfoRiverProgressDrawComponent__PlayScenarioReleaseSe(this, v65);
}


void __fastcall EventInfoRiverProgressDrawComponent__PlayScenarioReleaseSe(
        EventInfoRiverProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *releaseScenarioSEName; // x19
  System_String_array *v9; // x0
  System_String_array *v10; // x1
  int max_length; // w8
  System_String_array *v12; // x19
  System_String_o *v13; // x20
  System_String_o *v14; // x21
  SePlayer_o *v15; // x0
  SePlayer_o *v16; // x20
  __int64 v17; // x0
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E953E & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E953E = 1;
  }
  result = 0.0;
  if ( !System_String__IsNullOrEmpty(this->fields.releaseScenarioSEName, 0LL) )
  {
    releaseScenarioSEName = this->fields.releaseScenarioSEName;
    v9 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v9 )
      goto LABEL_22;
    v10 = v9;
    if ( !v9->max_length )
      goto LABEL_23;
    LOWORD(v9->m_Items[0]) = 58;
    if ( !releaseScenarioSEName )
      goto LABEL_22;
    v9 = System_String__Split(releaseScenarioSEName, (System_Char_array *)v9, 0LL);
    if ( !v9 )
      goto LABEL_22;
    max_length = v9->max_length;
    v12 = v9;
    if ( !max_length )
    {
LABEL_23:
      v17 = sub_B5D6C8(v9);
      sub_B5D668(v17, 0LL);
    }
    v13 = v9->m_Items[0];
    if ( max_length < 2 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSe(v13, 0LL);
      return;
    }
    v14 = v9->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v15 = SoundManager__playSe_23390804(v13, v14, 0LL);
    result = 0.0;
    if ( (int)v12->max_length >= 3 )
    {
      v16 = v15;
      v9 = (System_String_array *)System_Single__TryParse(v12->m_Items[2], &result, 0LL);
      if ( ((unsigned __int8)v9 & 1) != 0 )
      {
        if ( v16 )
        {
          SePlayer__set_Pitch(v16, result, 0LL);
          return;
        }
LABEL_22:
        sub_B5D69C(v9, v10);
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
    sub_B5D69C(0LL, v5);
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
    sub_B5D69C(riverBack, method);
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  UnityEngine_GameObject_o *nextUIObject; // x0
  __int64 v33; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  System_String_o *v35; // x0
  struct System_String_o *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct EventInfoPointRiverProgressControl_ProgressData_o *v43; // x8
  System_String_o *v44; // x0
  struct System_String_o *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int32_t eventId; // w21
  System_String_o *gaugeBackFileName; // x22
  System_Action_o *v54; // x23
  int32_t v55; // w21
  System_String_o *gaugeFrameFileName; // x20
  System_Action_o *v57; // x22
  struct EventInfoPointRiverProgressControl_ProgressData_o *v58; // x8
  int32_t ReleaseScenarioIndex; // w20
  EventInfoPointRiverProgressControl_c *v60; // x0
  struct UnityEngine_GameObject_o *scenarioOpenAnimPrefab; // x20
  struct UnityEngine_GameObject_o *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  UnityEngine_GameObject_o *scenarioOpenObject; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v71; // x19
  int v72; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E953A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)inputProgressData, inputEventId, method);
    sub_B5D5C4(&EventInfoPointRiverProgressControl_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_EventInfoRiverProgressDrawComponent__Setup_b__18_0__, v14, v15, v16);
    sub_B5D5C4(&Method_EventInfoRiverProgressDrawComponent__Setup_b__18_1__, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_18740/*"event_gauge_back_0"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_18745/*"event_gauge_frame_0"*/, v29, v30, v31);
    byte_42E953A = 1;
  }
  v72 = 0;
  this->fields.progressData = inputProgressData;
  sub_B5D560(
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
  v72 = progressData->fields.ReleaseScenarioIndex + 1;
  v35 = System_Int32__ToString((int32_t)&v72, 0LL);
  v36 = System_String__Concat_44577788((System_String_o *)StringLiteral_18740/*"event_gauge_back_0"*/, v35, 0LL);
  this->fields.gaugeBackFileName = v36;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.gaugeBackFileName,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = this->fields.progressData;
  if ( !v43 )
    goto LABEL_19;
  v72 = v43->fields.ReleaseScenarioIndex + 1;
  v44 = System_Int32__ToString((int32_t)&v72, 0LL);
  v45 = System_String__Concat_44577788((System_String_o *)StringLiteral_18745/*"event_gauge_frame_0"*/, v44, 0LL);
  this->fields.gaugeFrameFileName = v45;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.gaugeFrameFileName,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  eventId = this->fields.eventId;
  gaugeBackFileName = this->fields.gaugeBackFileName;
  v54 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v54, (Il2CppObject *)this, Method_EventInfoRiverProgressDrawComponent__Setup_b__18_0__, 0LL);
  EventInfoUIBase__LoadEventUIEffectPathAssetData((EventInfoUIBase_o *)this, eventId, gaugeBackFileName, v54, 0LL);
  v55 = this->fields.eventId;
  gaugeFrameFileName = this->fields.gaugeFrameFileName;
  v57 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_EventInfoRiverProgressDrawComponent__Setup_b__18_1__, 0LL);
  EventInfoUIBase__LoadEventUIEffectPathAssetData((EventInfoUIBase_o *)this, v55, gaugeFrameFileName, v57, 0LL);
  v58 = this->fields.progressData;
  if ( !v58 )
    goto LABEL_19;
  if ( v58->fields.IsReleaseScenarioAnimEnd )
  {
    ReleaseScenarioIndex = v58->fields.ReleaseScenarioIndex;
    v60 = EventInfoPointRiverProgressControl_TypeInfo;
    if ( (BYTE3(EventInfoPointRiverProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
      v60 = EventInfoPointRiverProgressControl_TypeInfo;
    }
    if ( ReleaseScenarioIndex < v60->static_fields->MAX_SCENARIO_RIVER_INDEX )
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
        v62 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)scenarioOpenAnimPrefab,
                                                   (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.scenarioOpenObject = v62;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.scenarioOpenObject,
          (System_Int32_array **)v62,
          v63,
          v64,
          v65,
          v66,
          v67,
          v68);
        scenarioOpenObject = this->fields.scenarioOpenObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SafeSetParent_32436524(scenarioOpenObject, gameObject, 0LL);
        nextUIObject = this->fields.nextUIObject;
        if ( nextUIObject )
        {
          v71 = this->fields.scenarioOpenObject;
          nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nextUIObject, 0LL);
          if ( nextUIObject )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nextUIObject, 0LL);
            GameObjectExtensions__SetLocalPosition(v71, localPosition, 0LL);
            return;
          }
        }
      }
LABEL_19:
      sub_B5D69C(nextUIObject, v33);
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
  int v2; // w2
  __int64 v3; // x3
  EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *v4; // x19
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
  int32_t _1__state; // w8
  struct EventInfoRiverProgressDrawComponent_o *_4__this; // x20
  struct System_String_o **v22; // x8
  WebViewObject_o *Component_WebViewObject; // x21
  _BOOL4 isFadeIn; // w23
  float x; // s8
  float y; // s9
  float z; // s10
  bool v28; // w2
  EventInfoUISlideAnimation_o *v29; // x0
  float v30; // s0
  float v31; // s1
  float v32; // s2
  float v33; // s1
  float v34; // s0
  bool result; // w0
  unsigned int localPosition; // s8
  float v37; // s1
  float v38; // s10
  float v39; // s9
  UnityEngine_Object_o *scenarioOpenObject; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  Il2CppObject **p__2__current; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42E6546 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_22140/*"river_fade_in"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_22141/*"river_fade_out"*/, v14, v15, v16);
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)sub_B5D5C4(
                                                                                    &StringLiteral_22053/*"release_scenario_out"*/,
                                                                                    v17,
                                                                                    v18,
                                                                                    v19);
    byte_42E6546 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_39;
    EventInfoRiverProgressDrawComponent__SetActive(_4__this, 1, 0LL);
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)_4__this->fields.riverAnim;
    if ( !this )
      goto LABEL_39;
    SimpleAnimation__Play_16676044((SimpleAnimation_o *)this, v4->fields._animName_5__2, 0LL);
    if ( v4->fields.isFadeIn )
    {
      v33 = 1.0;
      v34 = 0.0;
    }
    else
    {
      v34 = 1.0;
      v33 = 0.0;
    }
    EventInfoRiverProgressDrawComponent__PlayFade(_4__this, v34, v33, 1.0, 3, 0LL, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_39;
  this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)_4__this->fields.animEndAction;
  if ( !this )
    goto LABEL_39;
  this->fields.__4__this = (struct EventInfoRiverProgressDrawComponent_o *)v4->fields.endAction;
  sub_B5D560(&this->fields.__4__this);
  if ( v4->fields.isFadeIn )
    v22 = (struct System_String_o **)&StringLiteral_22140/*"river_fade_in"*/;
  else
    v22 = (struct System_String_o **)&StringLiteral_22141/*"river_fade_out"*/;
  v4->fields._animName_5__2 = *v22;
  sub_B5D560(&v4->fields._animName_5__2);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)_4__this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    isFadeIn = v4->fields.isFadeIn;
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
      GameObjectExtensions__SetLocalPosition_32430604(
        (UnityEngine_GameObject_o *)this,
        x,
        y - *((float *)&Component_WebViewObject->fields.onStarted + 1),
        z,
        0LL);
      v28 = 1;
      v29 = (EventInfoUISlideAnimation_o *)Component_WebViewObject;
      v30 = x;
      v31 = y;
      v32 = z;
    }
    else
    {
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_transform(
                                                                                      (UnityEngine_Component_o *)_4__this,
                                                                                      0LL);
      if ( !this )
        goto LABEL_39;
      *(UnityEngine_Vector3_o *)(&v37 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      if ( !Component_WebViewObject )
        goto LABEL_39;
      v38 = *((float *)&Component_WebViewObject->fields.onStarted + 1);
      v39 = v37;
      this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_transform(
                                                                                      (UnityEngine_Component_o *)_4__this,
                                                                                      0LL);
      if ( !this )
        goto LABEL_39;
      *(UnityEngine_Vector3_o *)(&v32 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      v31 = v39 + v38;
      v29 = (EventInfoUISlideAnimation_o *)Component_WebViewObject;
      v30 = *(float *)&localPosition;
      v28 = 0;
    }
    EventInfoUISlideAnimation__StartSlideAnim_27096836(v29, 0LL, *(UnityEngine_Vector3_o *)&v30, v28, 0LL);
  }
  if ( !v4->fields.isFadeIn )
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
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Object__op_Inequality(
                                                                                    Component_srcLineSprite,
                                                                                    0LL,
                                                                                    0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( Component_srcLineSprite )
      {
        SimpleAnimation__Play_16676044(
          (SimpleAnimation_o *)Component_srcLineSprite,
          (System_String_o *)StringLiteral_22053/*"release_scenario_out"*/,
          0LL);
        goto LABEL_38;
      }
LABEL_39:
      sub_B5D69C(this, method);
    }
  }
LABEL_38:
  v4->fields.__2__current = 0LL;
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, method);
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha(_4__this, this->fields.to, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}