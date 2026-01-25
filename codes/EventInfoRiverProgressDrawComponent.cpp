// attributes: thunk
void EventInfoRiverProgressDrawComponent___ctor(EventInfoRiverProgressDrawComponent_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, method);
}


void EventInfoRiverProgressDrawComponent__Awake(EventInfoRiverProgressDrawComponent_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoRiverProgressDrawComponent__OnDestroy(
        EventInfoRiverProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3

  EventInfoUIBase__ReleaseEventUIEffectPathAssetData(
    (EventInfoUIBase_o *)this,
    this->fields.eventId,
    this->fields.gaugeBackFileName,
    v2);
  EventInfoUIBase__ReleaseEventUIEffectPathAssetData(
    (EventInfoUIBase_o *)this,
    this->fields.eventId,
    this->fields.gaugeFrameFileName,
    v4);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4CF042F & 1) == 0 )
  {
    sub_1C7BAE8(&EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_TypeInfo);
    byte_4CF042F = 1;
  }
  v7 = isFadeIn;
  v8 = sub_1C7BD34(EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v8 + 32), (int32_t)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = endAction;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v8 + 40), (int32_t)endAction, v15, v16, v17, v18, v19, v20);
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  EasingObject_o *v37; // x21
  System_Action_o *v38; // x22
  System_Action_o *v39; // x23

  if ( (byte_4CF0431 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C7BAE8(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__0__);
    sub_1C7BAE8(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__1__);
    sub_1C7BAE8(&EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_TypeInfo);
    byte_4CF0431 = 1;
  }
  v13 = sub_1C7BD34(EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_6;
  *(float *)(v13 + 24) = from;
  *(float *)(v13 + 28) = to;
  *(_QWORD *)(v13 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v13 + 32), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 40) = endAction;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v13 + 40), (int32_t)endAction, v22, v23, v24, v25, v26, v27);
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha(this, *(float *)(v13 + 24), v28);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_31C8BB0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 16) = Component_object;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)Component_object, v31, v32, v33, v34, v35, v36);
  v37 = *(EasingObject_o **)(v13 + 16);
  v38 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v13,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__0__,
    0);
  v39 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v13,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__1__,
    0);
  if ( !v37 )
LABEL_6:
    sub_1C7BD40(v14, v15);
  EasingObject__Play(v37, time, v38, v39, 0.0, easingType, 0);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_Object_o *scenarioOpenAnimPrefab; // x22
  char v21; // w22
  Il2CppObject *v22; // x22
  Il2CppObject *v23; // x0
  struct UnityEngine_GameObject_o **p_scenarioOpenObject; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  UnityEngine_GameObject_o *scenarioOpenObject; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v33; // x22
  Il2CppObject *Component_object; // x22
  Il2CppObject *v35; // x23
  System_Action_o *v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  const MethodInfo *v43; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF0430 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass20_0__PlayProgressClearAnim_b__0__);
    sub_1C7BAE8(&EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17363/*"bit_scenario_open"*/);
    byte_4CF0430 = 1;
  }
  v5 = sub_1C7BD34(EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endAction;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)endAction, v14, v15, v16, v17, v18, v19);
  scenarioOpenAnimPrefab = (UnityEngine_Object_o *)this->fields.scenarioOpenAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(scenarioOpenAnimPrefab, 0, 0);
  if ( !this->fields.nextUIObject )
    goto LABEL_22;
  v21 = (char)nextUIObject;
  UnityEngine_GameObject__SetActive(this->fields.nextUIObject, 0, 0);
  if ( (v21 & 1) != 0 )
    goto LABEL_18;
  v22 = (Il2CppObject *)this->fields.scenarioOpenAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v23 = UnityEngine_Object__Instantiate_object_(
          v22,
          (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.scenarioOpenObject = (struct UnityEngine_GameObject_o *)v23;
  p_scenarioOpenObject = &this->fields.scenarioOpenObject;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.scenarioOpenObject,
    (int32_t)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  scenarioOpenObject = this->fields.scenarioOpenObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SafeSetParent_36529116(scenarioOpenObject, gameObject, 0);
  nextUIObject = this->fields.nextUIObject;
  if ( !nextUIObject )
    goto LABEL_22;
  v33 = *p_scenarioOpenObject;
  nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nextUIObject, 0);
  if ( !nextUIObject )
    goto LABEL_22;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nextUIObject, 0);
  GameObjectExtensions__SetLocalPosition(v33, localPosition, 0);
  nextUIObject = *p_scenarioOpenObject;
  if ( !*p_scenarioOpenObject )
    goto LABEL_22;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       nextUIObject,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
LABEL_18:
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
    return;
  }
  nextUIObject = *p_scenarioOpenObject;
  if ( !*p_scenarioOpenObject )
    goto LABEL_22;
  v35 = UnityEngine_GameObject__GetComponent_object_(
          nextUIObject,
          (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v35, 0, 0) )
    goto LABEL_18;
  v36 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v5,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass20_0__PlayProgressClearAnim_b__0__,
    0);
  if ( !v35
    || (v35[2].monitor = v36,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v35[2].monitor, (int32_t)v36, v37, v38, v39, v40, v41, v42),
        !Component_object) )
  {
LABEL_22:
    sub_1C7BD40(nextUIObject, v7);
  }
  SimpleAnimation__Play_67121960((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_17363/*"bit_scenario_open"*/, 0);
  EventInfoRiverProgressDrawComponent__PlayScenarioReleaseSe(this, v43);
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
  unsigned int v9; // w8
  System_String_o *v10; // x1
  SePlayer_o *v11; // x0
  SePlayer_o *v12; // x20
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4CF0432 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_EventInfoRiverProgressDrawComponent_PlayScenarioReleaseSe__);
    byte_4CF0432 = 1;
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
      v7 = (_QWORD *)sub_1C7BB00(Method_EventInfoRiverProgressDrawComponent_PlayScenarioReleaseSe__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v7, v7[4]);
    v9 = *((_DWORD *)v5 + 6);
    if ( !v9 )
      goto LABEL_18;
    v10 = (System_String_o *)*((_QWORD *)v5 + 4);
    if ( v6 < 2 )
    {
      OverwriteAssetSoundName__PlaySe(v8, v10, 0, 0);
      return;
    }
    if ( v9 <= 1 )
LABEL_18:
      sub_1C7BD48(v8);
    v11 = OverwriteAssetSoundName__PlaySe_41996976(v8, v10, *((System_String_o **)v5 + 5), 1.0, 0, 0, 0);
    result = 0.0;
    if ( *((int *)v5 + 6) >= 3 )
    {
      v12 = v11;
      releaseScenarioSEName = (void *)System_Single__TryParse(*((System_String_o **)v5 + 6), &result, 0);
      if ( ((unsigned __int8)releaseScenarioSEName & 1) != 0 )
      {
        if ( v12 )
        {
          SePlayer__set_Pitch(v12, result, 0);
          return;
        }
LABEL_17:
        sub_1C7BD40(releaseScenarioSEName, v3);
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
    sub_1C7BD40(0, v5);
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
    sub_1C7BD40(riverBack, method);
  }
  ((void (__fastcall *)(struct UITexture_o *, const MethodInfo *, long double))riverBack->klass->vtable._8_set_alpha.methodPtr)(
    riverBack,
    riverBack->klass->vtable._8_set_alpha.method,
    v5);
}


// attributes: thunk
void EventInfoRiverProgressDrawComponent__SetTexture(
        EventInfoRiverProgressDrawComponent_o *this,
        UITexture_o *texture,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  EventInfoUIBase__SetUITexture((EventInfoUIBase_o *)this, texture, spriteName, method);
}


void EventInfoRiverProgressDrawComponent__Setup(
        EventInfoRiverProgressDrawComponent_o *this,
        EventInfoPointRiverProgressControl_ProgressData_o *inputProgressData,
        int32_t inputEventId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *nextUIObject; // x0
  __int64 v12; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  System_String_o *v14; // x0
  struct System_String_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct EventInfoPointRiverProgressControl_ProgressData_o *v22; // x8
  System_String_o *v23; // x0
  struct System_String_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t eventId; // w21
  System_String_o *gaugeBackFileName; // x22
  System_Action_o *v33; // x23
  const MethodInfo *v34; // x4
  int32_t v35; // w21
  System_String_o *gaugeFrameFileName; // x20
  System_Action_o *v37; // x22
  const MethodInfo *v38; // x4
  struct EventInfoPointRiverProgressControl_ProgressData_o *v39; // x8
  int32_t ReleaseScenarioIndex; // w20
  EventInfoPointRiverProgressControl_c *v41; // x0
  Il2CppObject *scenarioOpenAnimPrefab; // x20
  Il2CppObject *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  UnityEngine_GameObject_o *scenarioOpenObject; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v52; // x19
  int v53; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF042E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_1C7BAE8(&Method_EventInfoRiverProgressDrawComponent__Setup_b__18_0__);
    sub_1C7BAE8(&Method_EventInfoRiverProgressDrawComponent__Setup_b__18_1__);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19338/*"event_gauge_back_0"*/);
    sub_1C7BAE8(&StringLiteral_19343/*"event_gauge_frame_0"*/);
    byte_4CF042E = 1;
  }
  this->fields.progressData = inputProgressData;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.progressData,
    (int32_t)inputProgressData,
    inputEventId,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  progressData = this->fields.progressData;
  this->fields.eventId = inputEventId;
  if ( !progressData )
    goto LABEL_17;
  v53 = progressData->fields.ReleaseScenarioIndex + 1;
  v14 = System_Int32__ToString((int32_t)&v53, 0);
  v15 = System_String__Concat_64176912((System_String_o *)StringLiteral_19338/*"event_gauge_back_0"*/, v14, 0);
  this->fields.gaugeBackFileName = v15;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.gaugeBackFileName,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = this->fields.progressData;
  if ( !v22 )
    goto LABEL_17;
  v53 = v22->fields.ReleaseScenarioIndex + 1;
  v23 = System_Int32__ToString((int32_t)&v53, 0);
  v24 = System_String__Concat_64176912((System_String_o *)StringLiteral_19343/*"event_gauge_frame_0"*/, v23, 0);
  this->fields.gaugeFrameFileName = v24;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.gaugeFrameFileName,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  eventId = this->fields.eventId;
  gaugeBackFileName = this->fields.gaugeBackFileName;
  v33 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_EventInfoRiverProgressDrawComponent__Setup_b__18_0__, 0);
  EventInfoUIBase__LoadEventUIEffectPathAssetData((EventInfoUIBase_o *)this, eventId, gaugeBackFileName, v33, v34);
  v35 = this->fields.eventId;
  gaugeFrameFileName = this->fields.gaugeFrameFileName;
  v37 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_EventInfoRiverProgressDrawComponent__Setup_b__18_1__, 0);
  EventInfoUIBase__LoadEventUIEffectPathAssetData((EventInfoUIBase_o *)this, v35, gaugeFrameFileName, v37, v38);
  v39 = this->fields.progressData;
  if ( !v39 )
    goto LABEL_17;
  if ( v39->fields.IsReleaseScenarioAnimEnd )
  {
    ReleaseScenarioIndex = v39->fields.ReleaseScenarioIndex;
    v41 = EventInfoPointRiverProgressControl_TypeInfo;
    if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
      v41 = EventInfoPointRiverProgressControl_TypeInfo;
    }
    if ( ReleaseScenarioIndex < v41->static_fields->MAX_SCENARIO_RIVER_INDEX )
    {
      nextUIObject = this->fields.nextUIObject;
      if ( nextUIObject )
      {
        UnityEngine_GameObject__SetActive(nextUIObject, 0, 0);
        scenarioOpenAnimPrefab = (Il2CppObject *)this->fields.scenarioOpenAnimPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v43 = UnityEngine_Object__Instantiate_object_(
                scenarioOpenAnimPrefab,
                (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.scenarioOpenObject = (struct UnityEngine_GameObject_o *)v43;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.scenarioOpenObject,
          (int32_t)v43,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
        scenarioOpenObject = this->fields.scenarioOpenObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SafeSetParent_36529116(scenarioOpenObject, gameObject, 0);
        nextUIObject = this->fields.nextUIObject;
        if ( nextUIObject )
        {
          v52 = this->fields.scenarioOpenObject;
          nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nextUIObject, 0);
          if ( nextUIObject )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nextUIObject, 0);
            GameObjectExtensions__SetLocalPosition(v52, localPosition, 0);
            return;
          }
        }
      }
LABEL_17:
      sub_1C7BD40(nextUIObject, v12);
    }
  }
}


void EventInfoRiverProgressDrawComponent___Setup_b__18_0(
        EventInfoRiverProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  EventInfoUIBase__SetUITexture((EventInfoUIBase_o *)this, this->fields.riverBack, this->fields.riverBackName, v2);
}


void EventInfoRiverProgressDrawComponent___Setup_b__18_1(
        EventInfoRiverProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  EventInfoUIBase__SetUITexture((EventInfoUIBase_o *)this, this->fields.riverFrame, this->fields.riverFrameName, v2);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *v8; // x19
  int32_t _1__state; // w8
  struct EventInfoRiverProgressDrawComponent_o *_4__this; // x20
  struct System_Action_o *endAction; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_String_o **v18; // x8
  struct System_String_o *v19; // x1
  EventInfoUISlideAnimation_o *Component_object; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  _BOOL4 isFadeIn; // w23
  float x; // s8
  float y; // s10
  float z; // s9
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  float v33; // s0
  float v34; // s1
  bool result; // w0
  float v36; // s11
  float v37; // s10
  UnityEngine_Object_o *scenarioOpenObject; // x21
  Il2CppObject *v39; // x20
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4CF0433 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_23353/*"river_fade_in"*/);
    sub_1C7BAE8(&StringLiteral_23354/*"river_fade_out"*/);
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)sub_1C7BAE8(&StringLiteral_23247/*"release_scenario_out"*/);
    byte_4CF0433 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_40;
    EventInfoRiverProgressDrawComponent__SetActive(_4__this, 1, v2);
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)_4__this->fields.riverAnim;
    if ( !this )
      goto LABEL_40;
    SimpleAnimation__Play_67121960((SimpleAnimation_o *)this, v8->fields._animName_5__2, 0);
    if ( v8->fields.isFadeIn )
    {
      v33 = 0.0;
      v34 = 1.0;
    }
    else
    {
      v33 = 1.0;
      v34 = 0.0;
    }
    EventInfoRiverProgressDrawComponent__PlayFade(_4__this, v33, v34, 1.0, 3, 0, v32);
    return 0;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_40;
  this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)_4__this->fields.animEndAction;
  if ( !this )
    goto LABEL_40;
  endAction = v8->fields.endAction;
  this->fields.endAction = endAction;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.endAction,
    (int32_t)endAction,
    (int32_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( v8->fields.isFadeIn )
    v18 = (struct System_String_o **)&StringLiteral_23353/*"river_fade_in"*/;
  else
    v18 = (struct System_String_o **)&StringLiteral_23354/*"river_fade_out"*/;
  v19 = *v18;
  v8->fields._animName_5__2 = *v18;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields._animName_5__2, (int32_t)v19, v12, v13, v14, v15, v16, v17);
  Component_object = (EventInfoUISlideAnimation_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)_4__this,
                                                      (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    isFadeIn = v8->fields.isFadeIn;
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
      GameObjectExtensions__SetLocalPosition_36523428(
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
      v36 = Component_object->fields.slideOutPosition.fields.y;
      v37 = localPosition.fields.y;
      this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_transform(
                                                                                      (UnityEngine_Component_o *)_4__this,
                                                                                      0);
      if ( !this )
        goto LABEL_40;
      v43 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      z = v43.fields.z;
      y = v37 + v36;
    }
    v44.fields.x = x;
    v44.fields.y = y;
    v44.fields.z = z;
    EventInfoUISlideAnimation__StartSlideAnim_45203832(Component_object, 0, v44, isFadeIn, v31);
  }
  if ( v8->fields.isFadeIn )
    goto LABEL_39;
  scenarioOpenObject = (UnityEngine_Object_o *)_4__this->fields.scenarioOpenObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(scenarioOpenObject, 0, 0) )
    goto LABEL_39;
  this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)_4__this->fields.scenarioOpenObject;
  if ( !this )
    goto LABEL_40;
  v39 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Object__op_Inequality(
                                                                                  (UnityEngine_Object_o *)v39,
                                                                                  0,
                                                                                  0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_39;
  if ( !v39 )
LABEL_40:
    sub_1C7BD40(this, method);
  SimpleAnimation__Play_67121960((SimpleAnimation_o *)v39, (System_String_o *)StringLiteral_23247/*"release_scenario_out"*/, 0);
LABEL_39:
  v8->fields.__2__current = 0;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
  sub_1C7BA8C(p__2__current, 0, v21, v22, v23, v24, v25, v26);
  result = 1;
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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
    sub_1C7BD40(this, method);
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
    sub_1C7BD40(this, method);
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
    sub_1C7BD40(0, method);
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha(_4__this, this->fields.to, method);
  ActionExtensions__Call(this->fields.endAction, 0);
}