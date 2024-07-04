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
  bool v7; // w22
  __int64 v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_48E4034 & 1) == 0 )
  {
    sub_1B00CCC(&EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_TypeInfo, endAction);
    byte_48E4034 = 1;
  }
  v7 = isFadeIn;
  v8 = sub_1B00F18(EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)this, v9, v10);
  *(_QWORD *)(v8 + 40) = endAction;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)endAction, v11, v12);
  *(_BYTE *)(v8 + 48) = v7;
  return (System_Collections_IEnumerator_o *)v8;
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
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  EasingObject_o *v29; // x21
  System_Action_o *v30; // x22
  System_Action_o *v31; // x23

  if ( (byte_48E4036 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&easingType);
    sub_1B00CCC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v13);
    sub_1B00CCC(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__0__, v14);
    sub_1B00CCC(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__1__, v15);
    sub_1B00CCC(&EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_TypeInfo, v16);
    byte_48E4036 = 1;
  }
  v17 = sub_1B00F18(EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_6;
  *(float *)(v17 + 24) = from;
  *(float *)(v17 + 28) = to;
  *(_QWORD *)(v17 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)this, v20, v21);
  *(_QWORD *)(v17 + 40) = endAction;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v17 + 40), (int32_t)endAction, v22, v23);
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha(this, *(float *)(v17 + 24), v24);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2DAF8F0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v17 + 16) = Component_object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)Component_object, v27, v28);
  v29 = *(EasingObject_o **)(v17 + 16);
  v30 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v17,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__0__,
    0LL);
  v31 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v17,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__1__,
    0LL);
  if ( !v29 )
LABEL_6:
    sub_1B00F28(v18, v19);
  EasingObject__Play(v29, time, v30, v31, 0.0, easingType, 0LL);
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
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_Object_o *scenarioOpenAnimPrefab; // x22
  char v20; // w22
  Il2CppObject *v21; // x22
  Il2CppObject *v22; // x0
  struct UnityEngine_GameObject_o **p_scenarioOpenObject; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  UnityEngine_GameObject_o *scenarioOpenObject; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v28; // x22
  Il2CppObject *Component_object; // x22
  Il2CppObject *v30; // x23
  System_Action_o *v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  const MethodInfo *v34; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48E4035 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, endAction);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v6);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v8);
    sub_1B00CCC(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass20_0__PlayProgressClearAnim_b__0__, v9);
    sub_1B00CCC(&EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_TypeInfo, v10);
    sub_1B00CCC(&StringLiteral_17073/*"bit_scenario_open"*/, v11);
    byte_48E4035 = 1;
  }
  v12 = sub_1B00F18(EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_22;
  *(_QWORD *)(v12 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 24) = endAction;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)endAction, v17, v18);
  scenarioOpenAnimPrefab = (UnityEngine_Object_o *)this->fields.scenarioOpenAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(scenarioOpenAnimPrefab, 0LL, 0LL);
  if ( !this->fields.nextUIObject )
    goto LABEL_22;
  v20 = (char)nextUIObject;
  UnityEngine_GameObject__SetActive(this->fields.nextUIObject, 0, 0LL);
  if ( (v20 & 1) != 0 )
    goto LABEL_18;
  v21 = (Il2CppObject *)this->fields.scenarioOpenAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v22 = UnityEngine_Object__Instantiate_object_(
          v21,
          (const MethodInfo_2DD5AE8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.scenarioOpenObject = (struct UnityEngine_GameObject_o *)v22;
  p_scenarioOpenObject = &this->fields.scenarioOpenObject;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.scenarioOpenObject, (int32_t)v22, v24, v25);
  scenarioOpenObject = this->fields.scenarioOpenObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_32541256(scenarioOpenObject, gameObject, 0LL);
  nextUIObject = this->fields.nextUIObject;
  if ( !nextUIObject )
    goto LABEL_22;
  v28 = *p_scenarioOpenObject;
  nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nextUIObject, 0LL);
  if ( !nextUIObject )
    goto LABEL_22;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nextUIObject, 0LL);
  GameObjectExtensions__SetLocalPosition(v28, localPosition, 0LL);
  nextUIObject = *p_scenarioOpenObject;
  if ( !*p_scenarioOpenObject )
    goto LABEL_22;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       nextUIObject,
                       (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
LABEL_18:
    ActionExtensions__Call(*(System_Action_o **)(v12 + 24), 0LL);
    return;
  }
  nextUIObject = *p_scenarioOpenObject;
  if ( !*p_scenarioOpenObject )
    goto LABEL_22;
  v30 = UnityEngine_GameObject__GetComponent_object_(
          nextUIObject,
          (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v30, 0LL, 0LL) )
    goto LABEL_18;
  v31 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v12,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass20_0__PlayProgressClearAnim_b__0__,
    0LL);
  if ( !v30
    || (v30[2].monitor = v31,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v30[2].monitor, (int32_t)v31, v32, v33),
        !Component_object) )
  {
LABEL_22:
    sub_1B00F28(nextUIObject, v14);
  }
  SimpleAnimation__Play_62462980((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_17073/*"bit_scenario_open"*/, 0LL);
  EventInfoRiverProgressDrawComponent__PlayScenarioReleaseSe(this, v34);
}


void __fastcall EventInfoRiverProgressDrawComponent__PlayScenarioReleaseSe(
        EventInfoRiverProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  void *releaseScenarioSEName; // x0
  int v5; // w8
  System_String_o **v6; // x19
  System_String_o *v7; // x20
  System_String_o *v8; // x21
  SePlayer_o *v9; // x0
  SePlayer_o *v10; // x20
  float result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_48E4037 & 1) == 0 )
  {
    sub_1B00CCC(&SoundManager_TypeInfo, method);
    byte_48E4037 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.releaseScenarioSEName, 0LL) )
  {
    releaseScenarioSEName = this->fields.releaseScenarioSEName;
    if ( !releaseScenarioSEName )
      goto LABEL_18;
    releaseScenarioSEName = System_String__Split((System_String_o *)releaseScenarioSEName, 0x3Au, 0, 0LL);
    if ( !releaseScenarioSEName )
      goto LABEL_18;
    v5 = *((_DWORD *)releaseScenarioSEName + 6);
    v6 = (System_String_o **)releaseScenarioSEName;
    if ( !v5 )
      sub_1B00F30(releaseScenarioSEName, v3);
    v7 = (System_String_o *)*((_QWORD *)releaseScenarioSEName + 4);
    if ( v5 < 2 )
    {
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playSe(v7, 0LL);
      return;
    }
    v8 = (System_String_o *)*((_QWORD *)releaseScenarioSEName + 5);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    v9 = SoundManager__playSe_37479232(v7, v8, 0LL);
    result = 0.0;
    if ( *((int *)v6 + 6) >= 3 )
    {
      v10 = v9;
      releaseScenarioSEName = (void *)System_Single__TryParse(v6[6], &result, 0LL);
      if ( ((unsigned __int8)releaseScenarioSEName & 1) != 0 )
      {
        if ( v10 )
        {
          SePlayer__set_Pitch(v10, result, 0LL);
          return;
        }
LABEL_18:
        sub_1B00F28(releaseScenarioSEName, v3);
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
    sub_1B00F28(0LL, v5);
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
    sub_1B00F28(riverBack, method);
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


void __fastcall EventInfoRiverProgressDrawComponent__Setup(
        EventInfoRiverProgressDrawComponent_o *this,
        EventInfoPointRiverProgressControl_ProgressData_o *inputProgressData,
        int32_t inputEventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *nextUIObject; // x0
  __int64 v15; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  System_String_o *v17; // x0
  struct System_String_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct EventInfoPointRiverProgressControl_ProgressData_o *v21; // x8
  System_String_o *v22; // x0
  struct System_String_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t eventId; // w21
  System_String_o *gaugeBackFileName; // x22
  System_Action_o *v28; // x23
  int32_t v29; // w21
  System_String_o *gaugeFrameFileName; // x20
  System_Action_o *v31; // x22
  struct EventInfoPointRiverProgressControl_ProgressData_o *v32; // x8
  int32_t ReleaseScenarioIndex; // w20
  EventInfoPointRiverProgressControl_c *v34; // x0
  Il2CppObject *scenarioOpenAnimPrefab; // x20
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  UnityEngine_GameObject_o *scenarioOpenObject; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v41; // x19
  int v42; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48E4033 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, inputProgressData);
    sub_1B00CCC(&EventInfoPointRiverProgressControl_TypeInfo, v7);
    sub_1B00CCC(&Method_EventInfoRiverProgressDrawComponent__Setup_b__18_0__, v8);
    sub_1B00CCC(&Method_EventInfoRiverProgressDrawComponent__Setup_b__18_1__, v9);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v11);
    sub_1B00CCC(&StringLiteral_18920/*"event_gauge_back_0"*/, v12);
    sub_1B00CCC(&StringLiteral_18925/*"event_gauge_frame_0"*/, v13);
    byte_48E4033 = 1;
  }
  this->fields.progressData = inputProgressData;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.progressData,
    (int32_t)inputProgressData,
    inputEventId,
    (int32_t)method);
  progressData = this->fields.progressData;
  this->fields.eventId = inputEventId;
  if ( !progressData )
    goto LABEL_17;
  v42 = progressData->fields.ReleaseScenarioIndex + 1;
  v17 = System_Int32__ToString((int32_t)&v42, 0LL);
  v18 = System_String__Concat_60325748((System_String_o *)StringLiteral_18920/*"event_gauge_back_0"*/, v17, 0LL);
  this->fields.gaugeBackFileName = v18;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.gaugeBackFileName, (int32_t)v18, v19, v20);
  v21 = this->fields.progressData;
  if ( !v21 )
    goto LABEL_17;
  v42 = v21->fields.ReleaseScenarioIndex + 1;
  v22 = System_Int32__ToString((int32_t)&v42, 0LL);
  v23 = System_String__Concat_60325748((System_String_o *)StringLiteral_18925/*"event_gauge_frame_0"*/, v22, 0LL);
  this->fields.gaugeFrameFileName = v23;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.gaugeFrameFileName, (int32_t)v23, v24, v25);
  eventId = this->fields.eventId;
  gaugeBackFileName = this->fields.gaugeBackFileName;
  v28 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_EventInfoRiverProgressDrawComponent__Setup_b__18_0__, 0LL);
  EventInfoUIBase__LoadEventUIEffectPathAssetData((EventInfoUIBase_o *)this, eventId, gaugeBackFileName, v28, 0LL);
  v29 = this->fields.eventId;
  gaugeFrameFileName = this->fields.gaugeFrameFileName;
  v31 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_EventInfoRiverProgressDrawComponent__Setup_b__18_1__, 0LL);
  EventInfoUIBase__LoadEventUIEffectPathAssetData((EventInfoUIBase_o *)this, v29, gaugeFrameFileName, v31, 0LL);
  v32 = this->fields.progressData;
  if ( !v32 )
    goto LABEL_17;
  if ( v32->fields.IsReleaseScenarioAnimEnd )
  {
    ReleaseScenarioIndex = v32->fields.ReleaseScenarioIndex;
    v34 = EventInfoPointRiverProgressControl_TypeInfo;
    if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
      v34 = EventInfoPointRiverProgressControl_TypeInfo;
    }
    if ( ReleaseScenarioIndex < v34->static_fields->MAX_SCENARIO_RIVER_INDEX )
    {
      nextUIObject = this->fields.nextUIObject;
      if ( nextUIObject )
      {
        UnityEngine_GameObject__SetActive(nextUIObject, 0, 0LL);
        scenarioOpenAnimPrefab = (Il2CppObject *)this->fields.scenarioOpenAnimPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v36 = UnityEngine_Object__Instantiate_object_(
                scenarioOpenAnimPrefab,
                (const MethodInfo_2DD5AE8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.scenarioOpenObject = (struct UnityEngine_GameObject_o *)v36;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.scenarioOpenObject, (int32_t)v36, v37, v38);
        scenarioOpenObject = this->fields.scenarioOpenObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SafeSetParent_32541256(scenarioOpenObject, gameObject, 0LL);
        nextUIObject = this->fields.nextUIObject;
        if ( nextUIObject )
        {
          v41 = this->fields.scenarioOpenObject;
          nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nextUIObject, 0LL);
          if ( nextUIObject )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nextUIObject, 0LL);
            GameObjectExtensions__SetLocalPosition(v41, localPosition, 0LL);
            return;
          }
        }
      }
LABEL_17:
      sub_1B00F28(nextUIObject, v15);
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
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t _1__state; // w8
  struct EventInfoRiverProgressDrawComponent_o *_4__this; // x20
  struct System_Action_o *endAction; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_String_o **v15; // x8
  struct System_String_o *v16; // x1
  EventInfoUISlideAnimation_o *Component_object; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  _BOOL4 isFadeIn; // w23
  float x; // s8
  float y; // s10
  float z; // s9
  const MethodInfo *v24; // x3
  float v25; // s0
  float v26; // s1
  bool result; // w0
  float v28; // s1
  float v29; // s11
  float v30; // s10
  UnityEngine_Object_o *scenarioOpenObject; // x21
  Il2CppObject *v32; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_48E4038 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___, method);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_22636/*"river_fade_in"*/, v7);
    sub_1B00CCC(&StringLiteral_22637/*"river_fade_out"*/, v8);
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)sub_1B00CCC(&StringLiteral_22538/*"release_scenario_out"*/, v9);
    byte_48E4038 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_37;
    EventInfoRiverProgressDrawComponent__SetActive(_4__this, 1, v2);
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)_4__this->fields.riverAnim;
    if ( !this )
      goto LABEL_37;
    SimpleAnimation__Play_62462980((SimpleAnimation_o *)this, v4->fields._animName_5__2, 0LL);
    if ( v4->fields.isFadeIn )
    {
      v25 = 0.0;
      v26 = 1.0;
    }
    else
    {
      v25 = 1.0;
      v26 = 0.0;
    }
    EventInfoRiverProgressDrawComponent__PlayFade(_4__this, v25, v26, 1.0, 3, 0LL, v24);
    return 0;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_37;
  this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)_4__this->fields.animEndAction;
  if ( !this )
    goto LABEL_37;
  endAction = v4->fields.endAction;
  this->fields.endAction = endAction;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.endAction, (int32_t)endAction, (int32_t)v2, v3);
  if ( v4->fields.isFadeIn )
    v15 = (struct System_String_o **)&StringLiteral_22636/*"river_fade_in"*/;
  else
    v15 = (struct System_String_o **)&StringLiteral_22637/*"river_fade_out"*/;
  v16 = *v15;
  v4->fields._animName_5__2 = *v15;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields._animName_5__2, (int32_t)v16, v13, v14);
  Component_object = (EventInfoUISlideAnimation_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)_4__this,
                                                      (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    isFadeIn = v4->fields.isFadeIn;
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_transform(
                                                                                    (UnityEngine_Component_o *)_4__this,
                                                                                    0LL);
    if ( !this )
      goto LABEL_37;
    if ( isFadeIn )
    {
      position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      x = position.fields.x;
      y = position.fields.y;
      z = position.fields.z;
      this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)_4__this,
                                                                                      0LL);
      if ( !Component_object )
        goto LABEL_37;
      GameObjectExtensions__SetLocalPosition_32535568(
        (UnityEngine_GameObject_o *)this,
        x,
        y - Component_object->fields.slideOutPosition.fields.y,
        z,
        0LL);
    }
    else
    {
      LODWORD(x) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_transform(
                                                                                      (UnityEngine_Component_o *)_4__this,
                                                                                      0LL);
      if ( !this )
        goto LABEL_37;
      *(UnityEngine_Vector3_o *)(&v28 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      if ( !Component_object )
        goto LABEL_37;
      v29 = Component_object->fields.slideOutPosition.fields.y;
      v30 = v28;
      this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_transform(
                                                                                      (UnityEngine_Component_o *)_4__this,
                                                                                      0LL);
      if ( !this )
        goto LABEL_37;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      z = localPosition.fields.z;
      y = v30 + v29;
    }
    v36.fields.x = x;
    v36.fields.y = y;
    v36.fields.z = z;
    EventInfoUISlideAnimation__StartSlideAnim_41095068(Component_object, 0LL, v36, isFadeIn, 0LL);
  }
  if ( !v4->fields.isFadeIn )
  {
    scenarioOpenObject = (UnityEngine_Object_o *)_4__this->fields.scenarioOpenObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__op_Implicit(scenarioOpenObject, 0LL);
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)_4__this->fields.scenarioOpenObject;
    if ( !this )
      goto LABEL_37;
    v32 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)this,
            (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Object__op_Inequality(
                                                                                    (UnityEngine_Object_o *)v32,
                                                                                    0LL,
                                                                                    0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v32 )
      {
        SimpleAnimation__Play_62462980((SimpleAnimation_o *)v32, (System_String_o *)StringLiteral_22538/*"release_scenario_out"*/, 0LL);
        goto LABEL_36;
      }
LABEL_37:
      sub_1B00F28(this, method);
    }
  }
LABEL_36:
  v4->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B00C70(p__2__current, 0, v18, v19);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
    sub_1B00F28(this, method);
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
  struct EasingObject_o *easingObj; // x9
  EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_o *v3; // x8
  float mNow; // s2
  float v5; // s3
  bool v6; // nf
  float v7; // s2

  easingObj = this->fields.easingObj;
  if ( !easingObj
    || (v3 = this, (this = (EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B00F28(this, method);
  }
  mNow = easingObj->fields.mNow;
  v5 = fminf(mNow, 1.0);
  v6 = mNow < 0.0;
  v7 = 0.0;
  if ( !v6 )
    v7 = v5;
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha(
    (EventInfoRiverProgressDrawComponent_o *)this,
    v3->fields.from + (float)(v7 * (float)(v3->fields.to - v3->fields.from)),
    method);
}


void __fastcall EventInfoRiverProgressDrawComponent___c__DisplayClass21_0___PlayFade_b__1(
        EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  EventInfoRiverProgressDrawComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B00F28(0LL, method);
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha(_4__this, this->fields.to, method);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}