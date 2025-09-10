void EventInfoRiverProgressDrawComponent___ctor(EventInfoRiverProgressDrawComponent_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoRiverProgressDrawComponent__Awake(EventInfoRiverProgressDrawComponent_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoRiverProgressDrawComponent__OnDestroy(
        EventInfoRiverProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase__ReleaseEventUIEffectPathAssetData(
    (EventInfoUIBase_o *)this,
    this->fields.eventId,
    this->fields.gaugeBackFileName,
    0);
  EventInfoUIBase__ReleaseEventUIEffectPathAssetData(
    (EventInfoUIBase_o *)this,
    this->fields.eventId,
    this->fields.gaugeFrameFileName,
    0);
}


System_Collections_IEnumerator_o *EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(
        EventInfoRiverProgressDrawComponent_o *this,
        System_Action_o *endAction,
        bool isFadeIn,
        const MethodInfo *method)
{
  bool v7; // w22
  __int64 v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C2884F & 1) == 0 )
  {
    sub_1C2D490(&EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_TypeInfo);
    byte_4C2884F = 1;
  }
  v7 = isFadeIn;
  v8 = sub_1C2D6DC(EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v8 + 32), (int32_t)this, v9, v10);
  *(_QWORD *)(v8 + 40) = endAction;
  sub_1C2D434((CGThumbnailListItem_o *)(v8 + 40), (int32_t)endAction, v11, v12);
  *(_BYTE *)(v8 + 48) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void EventInfoRiverProgressDrawComponent__PlayFade(
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  EasingObject_o *v25; // x21
  System_Action_o *v26; // x22
  System_Action_o *v27; // x23

  if ( (byte_4C28851 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C2D490(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__0__);
    sub_1C2D490(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__1__);
    sub_1C2D490(&EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_TypeInfo);
    byte_4C28851 = 1;
  }
  v13 = sub_1C2D6DC(EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_6;
  *(float *)(v13 + 24) = from;
  *(float *)(v13 + 28) = to;
  *(_QWORD *)(v13 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 32), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 40) = endAction;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 40), (int32_t)endAction, v18, v19);
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha(this, *(float *)(v13 + 24), v20);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 16) = Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 16), (int32_t)Component_object, v23, v24);
  v25 = *(EasingObject_o **)(v13 + 16);
  v26 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v13,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__0__,
    0);
  v27 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v13,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__1__,
    0);
  if ( !v25 )
LABEL_6:
    sub_1C2D6EC(v14, v15);
  EasingObject__Play(v25, time, v26, v27, 0.0, easingType, 0);
}


void EventInfoRiverProgressDrawComponent__PlayProgressClearAnim(
        EventInfoRiverProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_GameObject_o *nextUIObject; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *scenarioOpenAnimPrefab; // x22
  char v13; // w22
  Il2CppObject *v14; // x22
  Il2CppObject *v15; // x0
  struct UnityEngine_GameObject_o **p_scenarioOpenObject; // x23
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_GameObject_o *scenarioOpenObject; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x22
  Il2CppObject *Component_object; // x22
  Il2CppObject *v23; // x23
  System_Action_o *v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C28850 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass20_0__PlayProgressClearAnim_b__0__);
    sub_1C2D490(&EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_TypeInfo);
    sub_1C2D490(&StringLiteral_17272/*"bit_scenario_open"*/);
    byte_4C28850 = 1;
  }
  v5 = sub_1C2D6DC(EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = endAction;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)endAction, v10, v11);
  scenarioOpenAnimPrefab = (UnityEngine_Object_o *)this->fields.scenarioOpenAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(scenarioOpenAnimPrefab, 0, 0);
  if ( !this->fields.nextUIObject )
    goto LABEL_22;
  v13 = (char)nextUIObject;
  UnityEngine_GameObject__SetActive(this->fields.nextUIObject, 0, 0);
  if ( (v13 & 1) != 0 )
    goto LABEL_18;
  v14 = (Il2CppObject *)this->fields.scenarioOpenAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__Instantiate_object_(
          v14,
          (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.scenarioOpenObject = (struct UnityEngine_GameObject_o *)v15;
  p_scenarioOpenObject = &this->fields.scenarioOpenObject;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.scenarioOpenObject, (int32_t)v15, v17, v18);
  scenarioOpenObject = this->fields.scenarioOpenObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SafeSetParent_35924288(scenarioOpenObject, gameObject, 0);
  nextUIObject = this->fields.nextUIObject;
  if ( !nextUIObject )
    goto LABEL_22;
  v21 = *p_scenarioOpenObject;
  nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nextUIObject, 0);
  if ( !nextUIObject )
    goto LABEL_22;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nextUIObject, 0);
  GameObjectExtensions__SetLocalPosition(v21, localPosition, 0);
  nextUIObject = *p_scenarioOpenObject;
  if ( !*p_scenarioOpenObject )
    goto LABEL_22;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       nextUIObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
LABEL_18:
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
    return;
  }
  nextUIObject = *p_scenarioOpenObject;
  if ( !*p_scenarioOpenObject )
    goto LABEL_22;
  v23 = UnityEngine_GameObject__GetComponent_object_(
          nextUIObject,
          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v23, 0, 0) )
    goto LABEL_18;
  v24 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v5,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass20_0__PlayProgressClearAnim_b__0__,
    0);
  if ( !v23
    || (v23[2].monitor = v24,
        sub_1C2D434((CGThumbnailListItem_o *)&v23[2].monitor, (int32_t)v24, v25, v26),
        !Component_object) )
  {
LABEL_22:
    sub_1C2D6EC(nextUIObject, v7);
  }
  SimpleAnimation__Play_66404364((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_17272/*"bit_scenario_open"*/, 0);
  EventInfoRiverProgressDrawComponent__PlayScenarioReleaseSe(this, v27);
}


void EventInfoRiverProgressDrawComponent__PlayScenarioReleaseSe(
        EventInfoRiverProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  void *releaseScenarioSEName; // x0
  void *v5; // x19
  int v6; // w20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  System_String_o *v9; // x1
  __int64 v10; // x2
  unsigned int v11; // w8
  SePlayer_o *v12; // x0
  SePlayer_o *v13; // x20
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4C28852 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventInfoRiverProgressDrawComponent_PlayScenarioReleaseSe__);
    byte_4C28852 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.releaseScenarioSEName, 0) )
  {
    releaseScenarioSEName = this->fields.releaseScenarioSEName;
    if ( !releaseScenarioSEName )
      goto LABEL_17;
    releaseScenarioSEName = System_String__Split((System_String_o *)releaseScenarioSEName, 0x3Au, 0, 0);
    if ( !releaseScenarioSEName )
      goto LABEL_17;
    v5 = releaseScenarioSEName;
    v6 = *((_DWORD *)releaseScenarioSEName + 6);
    v7 = Method_EventInfoRiverProgressDrawComponent_PlayScenarioReleaseSe__;
    if ( (*((_BYTE *)Method_EventInfoRiverProgressDrawComponent_PlayScenarioReleaseSe__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C2D4A8(Method_EventInfoRiverProgressDrawComponent_PlayScenarioReleaseSe__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
    v11 = *((_DWORD *)v5 + 6);
    if ( !v11 )
      goto LABEL_18;
    v9 = (System_String_o *)*((_QWORD *)v5 + 4);
    if ( v6 < 2 )
    {
      OverwriteAssetSoundName__PlaySe(v8, v9, 0, 0);
      return;
    }
    if ( v11 <= 1 )
LABEL_18:
      sub_1C2D6F4(v8, v9, v10);
    v12 = OverwriteAssetSoundName__PlaySe_41198500(v8, v9, *((System_String_o **)v5 + 5), 1.0, 0, 0, 0);
    result = 0.0;
    if ( *((int *)v5 + 6) >= 3 )
    {
      v13 = v12;
      releaseScenarioSEName = (void *)System_Single__TryParse(*((System_String_o **)v5 + 6), &result, 0);
      if ( ((unsigned __int8)releaseScenarioSEName & 1) != 0 )
      {
        if ( v13 )
        {
          SePlayer__set_Pitch(v13, result, 0);
          return;
        }
LABEL_17:
        sub_1C2D6EC(releaseScenarioSEName, v3);
      }
    }
  }
}


void EventInfoRiverProgressDrawComponent__SetActive(
        EventInfoRiverProgressDrawComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoRiverProgressDrawComponent__SetSpriteAlpha(
        EventInfoRiverProgressDrawComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct UITexture_o *riverBack; // x0
  long double v5; // q8

  riverBack = this->fields.riverBack;
  if ( !riverBack
    || (v5 = *(long double *)&alpha,
        ((void (__fastcall *)(struct UITexture_o *, const MethodInfo *))riverBack->klass->vtable._8_set_alpha.methodPtr)(
          riverBack,
          riverBack->klass->vtable._8_set_alpha.method),
        (riverBack = this->fields.riverFrame) == 0) )
  {
    sub_1C2D6EC(riverBack, method);
  }
  ((void (__fastcall *)(struct UITexture_o *, const MethodInfo *, long double))riverBack->klass->vtable._8_set_alpha.methodPtr)(
    riverBack,
    riverBack->klass->vtable._8_set_alpha.method,
    v5);
}


void EventInfoRiverProgressDrawComponent__SetTexture(
        EventInfoRiverProgressDrawComponent_o *this,
        UITexture_o *texture,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  EventInfoUIBase__SetUITexture((EventInfoUIBase_o *)this, texture, spriteName, 0);
}


void EventInfoRiverProgressDrawComponent__Setup(
        EventInfoRiverProgressDrawComponent_o *this,
        EventInfoPointRiverProgressControl_ProgressData_o *inputProgressData,
        int32_t inputEventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *nextUIObject; // x0
  __int64 v8; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  System_String_o *v10; // x0
  struct System_String_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o *v14; // x8
  System_String_o *v15; // x0
  struct System_String_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t eventId; // w21
  System_String_o *gaugeBackFileName; // x22
  System_Action_o *v21; // x23
  int32_t v22; // w21
  System_String_o *gaugeFrameFileName; // x20
  System_Action_o *v24; // x22
  struct EventInfoPointRiverProgressControl_ProgressData_o *v25; // x8
  int32_t ReleaseScenarioIndex; // w20
  EventInfoPointRiverProgressControl_c *v27; // x0
  Il2CppObject *scenarioOpenAnimPrefab; // x20
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  UnityEngine_GameObject_o *scenarioOpenObject; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v34; // x19
  int v35; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2884E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_1C2D490(&Method_EventInfoRiverProgressDrawComponent__Setup_b__18_0__);
    sub_1C2D490(&Method_EventInfoRiverProgressDrawComponent__Setup_b__18_1__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_19183/*"event_gauge_back_0"*/);
    sub_1C2D490(&StringLiteral_19188/*"event_gauge_frame_0"*/);
    byte_4C2884E = 1;
  }
  this->fields.progressData = inputProgressData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.progressData, (int32_t)inputProgressData, inputEventId, method);
  progressData = this->fields.progressData;
  this->fields.eventId = inputEventId;
  if ( !progressData )
    goto LABEL_17;
  v35 = progressData->fields.ReleaseScenarioIndex + 1;
  v10 = System_Int32__ToString((int32_t)&v35, 0);
  v11 = System_String__Concat_63457864((System_String_o *)StringLiteral_19183/*"event_gauge_back_0"*/, v10, 0);
  this->fields.gaugeBackFileName = v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.gaugeBackFileName, (int32_t)v11, v12, v13);
  v14 = this->fields.progressData;
  if ( !v14 )
    goto LABEL_17;
  v35 = v14->fields.ReleaseScenarioIndex + 1;
  v15 = System_Int32__ToString((int32_t)&v35, 0);
  v16 = System_String__Concat_63457864((System_String_o *)StringLiteral_19188/*"event_gauge_frame_0"*/, v15, 0);
  this->fields.gaugeFrameFileName = v16;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.gaugeFrameFileName, (int32_t)v16, v17, v18);
  eventId = this->fields.eventId;
  gaugeBackFileName = this->fields.gaugeBackFileName;
  v21 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_EventInfoRiverProgressDrawComponent__Setup_b__18_0__, 0);
  EventInfoUIBase__LoadEventUIEffectPathAssetData((EventInfoUIBase_o *)this, eventId, gaugeBackFileName, v21, 0);
  v22 = this->fields.eventId;
  gaugeFrameFileName = this->fields.gaugeFrameFileName;
  v24 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_EventInfoRiverProgressDrawComponent__Setup_b__18_1__, 0);
  EventInfoUIBase__LoadEventUIEffectPathAssetData((EventInfoUIBase_o *)this, v22, gaugeFrameFileName, v24, 0);
  v25 = this->fields.progressData;
  if ( !v25 )
    goto LABEL_17;
  if ( v25->fields.IsReleaseScenarioAnimEnd )
  {
    ReleaseScenarioIndex = v25->fields.ReleaseScenarioIndex;
    v27 = EventInfoPointRiverProgressControl_TypeInfo;
    if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
      v27 = EventInfoPointRiverProgressControl_TypeInfo;
    }
    if ( ReleaseScenarioIndex < v27->static_fields->MAX_SCENARIO_RIVER_INDEX )
    {
      nextUIObject = this->fields.nextUIObject;
      if ( nextUIObject )
      {
        UnityEngine_GameObject__SetActive(nextUIObject, 0, 0);
        scenarioOpenAnimPrefab = (Il2CppObject *)this->fields.scenarioOpenAnimPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v29 = UnityEngine_Object__Instantiate_object_(
                scenarioOpenAnimPrefab,
                (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.scenarioOpenObject = (struct UnityEngine_GameObject_o *)v29;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.scenarioOpenObject, (int32_t)v29, v30, v31);
        scenarioOpenObject = this->fields.scenarioOpenObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SafeSetParent_35924288(scenarioOpenObject, gameObject, 0);
        nextUIObject = this->fields.nextUIObject;
        if ( nextUIObject )
        {
          v34 = this->fields.scenarioOpenObject;
          nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nextUIObject, 0);
          if ( nextUIObject )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nextUIObject, 0);
            GameObjectExtensions__SetLocalPosition(v34, localPosition, 0);
            return;
          }
        }
      }
LABEL_17:
      sub_1C2D6EC(nextUIObject, v8);
    }
  }
}


void EventInfoRiverProgressDrawComponent___Setup_b__18_0(
        EventInfoRiverProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase__SetUITexture((EventInfoUIBase_o *)this, this->fields.riverBack, this->fields.riverBackName, 0);
}


void EventInfoRiverProgressDrawComponent___Setup_b__18_1(
        EventInfoRiverProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase__SetUITexture((EventInfoUIBase_o *)this, this->fields.riverFrame, this->fields.riverFrameName, 0);
}


EventInfoPointRiverProgressControl_ProgressData_o *EventInfoRiverProgressDrawComponent__get_ProgressData(
        EventInfoRiverProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.progressData;
}


void EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19___ctor(
        EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19__MoveNext(
        EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *v4; // x19
  int32_t _1__state; // w8
  struct EventInfoRiverProgressDrawComponent_o *_4__this; // x20
  struct System_Action_o *endAction; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_String_o **v10; // x8
  struct System_String_o *v11; // x1
  EventInfoUISlideAnimation_o *Component_object; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  _BOOL4 isFadeIn; // w23
  float x; // s8
  float y; // s10
  float z; // s9
  const MethodInfo *v19; // x3
  float v20; // s0
  float v21; // s1
  bool result; // w0
  float v23; // s11
  float v24; // s10
  UnityEngine_Object_o *scenarioOpenObject; // x21
  Il2CppObject *v26; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C28853 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_23107/*"river_fade_in"*/);
    sub_1C2D490(&StringLiteral_23108/*"river_fade_out"*/);
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)sub_1C2D490(&StringLiteral_23005/*"release_scenario_out"*/);
    byte_4C28853 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_40;
    EventInfoRiverProgressDrawComponent__SetActive(_4__this, 1, v2);
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)_4__this->fields.riverAnim;
    if ( !this )
      goto LABEL_40;
    SimpleAnimation__Play_66404364((SimpleAnimation_o *)this, v4->fields._animName_5__2, 0);
    if ( v4->fields.isFadeIn )
    {
      v20 = 0.0;
      v21 = 1.0;
    }
    else
    {
      v20 = 1.0;
      v21 = 0.0;
    }
    EventInfoRiverProgressDrawComponent__PlayFade(_4__this, v20, v21, 1.0, 3, 0, v19);
    return 0;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_40;
  this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)_4__this->fields.animEndAction;
  if ( !this )
    goto LABEL_40;
  endAction = v4->fields.endAction;
  this->fields.endAction = endAction;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endAction, (int32_t)endAction, (int32_t)v2, v3);
  if ( v4->fields.isFadeIn )
    v10 = (struct System_String_o **)&StringLiteral_23107/*"river_fade_in"*/;
  else
    v10 = (struct System_String_o **)&StringLiteral_23108/*"river_fade_out"*/;
  v11 = *v10;
  v4->fields._animName_5__2 = *v10;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._animName_5__2, (int32_t)v11, v8, v9);
  Component_object = (EventInfoUISlideAnimation_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)_4__this,
                                                      (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    isFadeIn = v4->fields.isFadeIn;
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_transform(
                                                                                    (UnityEngine_Component_o *)_4__this,
                                                                                    0);
    if ( !this )
      goto LABEL_40;
    if ( isFadeIn )
    {
      position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
      x = position.fields.x;
      y = position.fields.y;
      z = position.fields.z;
      this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)_4__this,
                                                                                      0);
      if ( !Component_object )
        goto LABEL_40;
      GameObjectExtensions__SetLocalPosition_35918600(
        (UnityEngine_GameObject_o *)this,
        x,
        y - Component_object->fields.slideOutPosition.fields.y,
        z,
        0);
    }
    else
    {
      LODWORD(x) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_transform(
                                                                                      (UnityEngine_Component_o *)_4__this,
                                                                                      0);
      if ( !this )
        goto LABEL_40;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      if ( !Component_object )
        goto LABEL_40;
      v23 = Component_object->fields.slideOutPosition.fields.y;
      v24 = localPosition.fields.y;
      this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_transform(
                                                                                      (UnityEngine_Component_o *)_4__this,
                                                                                      0);
      if ( !this )
        goto LABEL_40;
      v30 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      z = v30.fields.z;
      y = v24 + v23;
    }
    v31.fields.x = x;
    v31.fields.y = y;
    v31.fields.z = z;
    EventInfoUISlideAnimation__StartSlideAnim_44434772(Component_object, 0, v31, isFadeIn, 0);
  }
  if ( v4->fields.isFadeIn )
    goto LABEL_39;
  scenarioOpenObject = (UnityEngine_Object_o *)_4__this->fields.scenarioOpenObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(scenarioOpenObject, 0, 0) )
    goto LABEL_39;
  this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)_4__this->fields.scenarioOpenObject;
  if ( !this )
    goto LABEL_40;
  v26 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Object__op_Inequality(
                                                                                  (UnityEngine_Object_o *)v26,
                                                                                  0,
                                                                                  0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_39;
  if ( !v26 )
LABEL_40:
    sub_1C2D6EC(this, method);
  SimpleAnimation__Play_66404364((SimpleAnimation_o *)v26, (System_String_o *)StringLiteral_23005/*"release_scenario_out"*/, 0);
LABEL_39:
  v4->fields.__2__current = 0;
  p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1C2D434(p__2__current, 0, v13, v14);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19__System_Collections_IEnumerator_Reset(
        EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19__System_Collections_IEnumerator_get_Current(
        EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19__System_IDisposable_Dispose(
        EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *this,
        const MethodInfo *method)
{
  ;
}


void EventInfoRiverProgressDrawComponent___c__DisplayClass20_0___ctor(
        EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoRiverProgressDrawComponent___c__DisplayClass20_0___PlayProgressClearAnim_b__0(
        EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoRiverProgressDrawComponent_o *_4__this; // x8
  EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_o *)_4__this->fields.nextUIObject) == 0) )
  {
    sub_1C2D6EC(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  ActionExtensions__Call(v3->fields.endAction, 0);
}


void EventInfoRiverProgressDrawComponent___c__DisplayClass21_0___ctor(
        EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoRiverProgressDrawComponent___c__DisplayClass21_0___PlayFade_b__0(
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
    || (v3 = this, (this = (EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_o *)this->fields.__4__this) == 0) )
  {
    sub_1C2D6EC(this, method);
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


void EventInfoRiverProgressDrawComponent___c__DisplayClass21_0___PlayFade_b__1(
        EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  EventInfoRiverProgressDrawComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha(_4__this, this->fields.to, method);
  ActionExtensions__Call(this->fields.endAction, 0);
}