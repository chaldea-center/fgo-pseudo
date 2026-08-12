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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_597261D & 1) == 0 )
  {
    sub_2213A60(&EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_TypeInfo);
    byte_597261D = 1;
  }
  v7 = isFadeIn;
  v8 = sub_2213CCC(EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 32), (int32_t)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = endAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 40), (int32_t)endAction, v15, v16, v17, v18, v19, v20);
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  const MethodInfo *v28; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  EasingObject_o *v37; // x21
  System_Action_o *v38; // x22
  System_Action_o *v39; // x23

  if ( (byte_597261F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_2213A60(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__0__);
    sub_2213A60(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__1__);
    sub_2213A60(&EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_TypeInfo);
    byte_597261F = 1;
  }
  v13 = sub_2213CCC(EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_6;
  *(float *)(v13 + 24) = from;
  *(float *)(v13 + 28) = to;
  *(_QWORD *)(v13 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 40) = endAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 40), (int32_t)endAction, v22, v23, v24, v25, v26, v27);
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha(this, *(float *)(v13 + 24), v28);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 16) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)Component_object, v31, v32, v33, v34, v35, v36);
  v37 = *(EasingObject_o **)(v13 + 16);
  v38 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v13,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__0__,
    0);
  v39 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v13,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__1__,
    0);
  if ( !v37 )
LABEL_6:
    sub_2213CDC(v14, v15);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  UnityEngine_Object_o *scenarioOpenAnimPrefab; // x22
  bool v22; // w8
  __int64 v23; // x1
  Il2CppObject *v24; // x22
  Il2CppObject *v25; // x0
  struct UnityEngine_GameObject_o **p_scenarioOpenObject; // x23
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  UnityEngine_GameObject_o *scenarioOpenObject; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v35; // x22
  Il2CppObject *Component_object; // x22
  __int64 v37; // x1
  Il2CppObject *v38; // x23
  System_Action_o *v39; // x21
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  const MethodInfo *v46; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_597261E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass20_0__PlayProgressClearAnim_b__0__);
    sub_2213A60(&EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_TypeInfo);
    sub_2213A60(&StringLiteral_18017/*"bit_scenario_open"*/);
    byte_597261E = 1;
  }
  v5 = sub_2213CCC(EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_24;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)endAction, v14, v15, v16, v17, v18, v19);
  scenarioOpenAnimPrefab = (UnityEngine_Object_o *)this->fields.scenarioOpenAnimPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  v22 = UnityEngine_Object__op_Equality(scenarioOpenAnimPrefab, 0, 0);
  nextUIObject = this->fields.nextUIObject;
  if ( v22 )
  {
    if ( nextUIObject )
    {
      UnityEngine_GameObject__SetActive(nextUIObject, 0, 0);
LABEL_20:
      ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
      return;
    }
    goto LABEL_24;
  }
  if ( !nextUIObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(nextUIObject, 0, 0);
  v24 = (Il2CppObject *)this->fields.scenarioOpenAnimPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  v25 = UnityEngine_Object__Instantiate_object_(
          v24,
          (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.scenarioOpenObject = (struct UnityEngine_GameObject_o *)v25;
  p_scenarioOpenObject = &this->fields.scenarioOpenObject;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.scenarioOpenObject,
    (int32_t)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  scenarioOpenObject = this->fields.scenarioOpenObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SafeSetParent_42897308(scenarioOpenObject, gameObject, 0);
  nextUIObject = this->fields.nextUIObject;
  if ( !nextUIObject )
    goto LABEL_24;
  v35 = *p_scenarioOpenObject;
  nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nextUIObject, 0);
  if ( !nextUIObject )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nextUIObject, 0);
  GameObjectExtensions__SetLocalPosition(v35, localPosition, 0);
  nextUIObject = *p_scenarioOpenObject;
  if ( !*p_scenarioOpenObject )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       nextUIObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    goto LABEL_20;
  nextUIObject = *p_scenarioOpenObject;
  if ( !*p_scenarioOpenObject )
    goto LABEL_24;
  v38 = UnityEngine_GameObject__GetComponent_object_(
          nextUIObject,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v38, 0, 0) )
    goto LABEL_20;
  v39 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v5,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass20_0__PlayProgressClearAnim_b__0__,
    0);
  if ( !v38
    || (v38[2].monitor = v39,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v38[2].monitor, (int32_t)v39, v40, v41, v42, v43, v44, v45),
        !Component_object) )
  {
LABEL_24:
    sub_2213CDC(nextUIObject, v7);
  }
  SimpleAnimation__Play_78552168((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_18017/*"bit_scenario_open"*/, 0);
  EventInfoRiverProgressDrawComponent__PlayScenarioReleaseSe(this, v46);
}


void EventInfoRiverProgressDrawComponent__PlayScenarioReleaseSe(
        EventInfoRiverProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *releaseScenarioSEName; // x0
  __int64 v4; // x1
  void *v5; // x0
  void *v6; // x19
  int v7; // w9
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  SePlayer_o *v10; // x0
  int v11; // w8
  SePlayer_o *v12; // x20
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_5972620 & 1) == 0 )
  {
    sub_2213A60(&Method_EventInfoRiverProgressDrawComponent_PlayScenarioReleaseSe__);
    byte_5972620 = 1;
  }
  releaseScenarioSEName = this->fields.releaseScenarioSEName;
  result = 0.0;
  if ( !System_String__IsNullOrEmpty(releaseScenarioSEName, 0) )
  {
    v5 = this->fields.releaseScenarioSEName;
    if ( v5 )
    {
      v5 = System_String__Split((System_String_o *)v5, 0x3Au, 0, 0);
      if ( v5 )
      {
        v6 = v5;
        v7 = *((_DWORD *)v5 + 6);
        v8 = Method_EventInfoRiverProgressDrawComponent_PlayScenarioReleaseSe__;
        if ( v7 < 2 )
        {
          if ( (*((_BYTE *)Method_EventInfoRiverProgressDrawComponent_PlayScenarioReleaseSe__ + 83) & 2) != 0 )
            v8 = (_QWORD *)sub_2213A78(Method_EventInfoRiverProgressDrawComponent_PlayScenarioReleaseSe__);
          v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
          if ( *((_DWORD *)v6 + 6) )
          {
            OverwriteAssetSoundName__PlaySe(v9, *((System_String_o **)v6 + 4), 0, 0);
            return;
          }
LABEL_20:
          sub_2213CE4(v9);
        }
        if ( (*((_BYTE *)Method_EventInfoRiverProgressDrawComponent_PlayScenarioReleaseSe__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_2213A78(Method_EventInfoRiverProgressDrawComponent_PlayScenarioReleaseSe__);
        v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
        if ( *((_DWORD *)v6 + 6) < 2u )
          goto LABEL_20;
        v10 = OverwriteAssetSoundName__PlaySe_48402488(
                v9,
                *((System_String_o **)v6 + 4),
                *((System_String_o **)v6 + 5),
                1.0,
                0,
                0,
                0);
        v11 = *((_DWORD *)v6 + 6);
        result = 0.0;
        if ( v11 < 3 )
          return;
        v12 = v10;
        v5 = (void *)System_Single__TryParse(*((System_String_o **)v6 + 6), &result, 0);
        if ( ((unsigned __int8)v5 & 1) == 0 )
          return;
        if ( v12 )
        {
          SePlayer__set_Pitch(v12, result, 0);
          return;
        }
      }
    }
    sub_2213CDC(v5, v4);
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
    sub_2213CDC(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
}


void EventInfoRiverProgressDrawComponent__SetSpriteAlpha(
        EventInfoRiverProgressDrawComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct UITexture_o *riverBack; // x0

  riverBack = this->fields.riverBack;
  if ( !riverBack
    || (((void (__fastcall *)(struct UITexture_o *, const MethodInfo *))riverBack->klass->vtable._8_set_alpha.methodPtr)(
          riverBack,
          riverBack->klass->vtable._8_set_alpha.method),
        (riverBack = this->fields.riverFrame) == 0) )
  {
    sub_2213CDC(riverBack, method);
  }
  ((void (__fastcall *)(struct UITexture_o *, const MethodInfo *, float))riverBack->klass->vtable._8_set_alpha.methodPtr)(
    riverBack,
    riverBack->klass->vtable._8_set_alpha.method,
    alpha);
}


void EventInfoRiverProgressDrawComponent__SetTexture(
        EventInfoRiverProgressDrawComponent_o *this,
        UITexture_o *texture,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  EventInfoUIBase__SetUITexture((EventInfoUIBase_o *)this, texture, spriteName, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoRiverProgressDrawComponent__Setup(
        EventInfoRiverProgressDrawComponent_o *this,
        EventInfoPointRiverProgressControl_ProgressData_o *inputProgressData,
        int32_t inputEventId,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *nextUIObject; // x0
  __int64 v12; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  System_String_o *v14; // x0
  struct System_String_o *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct EventInfoPointRiverProgressControl_ProgressData_o *v22; // x8
  System_String_o *v23; // x0
  struct System_String_o *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t eventId; // w21
  System_String_o *gaugeBackFileName; // x22
  System_Action_o *v33; // x23
  int32_t v34; // w21
  System_String_o *gaugeFrameFileName; // x20
  System_Action_o *v36; // x22
  struct EventInfoPointRiverProgressControl_ProgressData_o *v37; // x8
  int32_t ReleaseScenarioIndex; // w20
  EventInfoPointRiverProgressControl_c *v39; // x0
  __int64 v40; // x1
  Il2CppObject *scenarioOpenAnimPrefab; // x20
  Il2CppObject *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  UnityEngine_GameObject_o *scenarioOpenObject; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v51; // x19
  int v52; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_597261C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_2213A60(&Method_EventInfoRiverProgressDrawComponent__Setup_b__18_0__);
    sub_2213A60(&Method_EventInfoRiverProgressDrawComponent__Setup_b__18_1__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_20089/*"event_gauge_back_0"*/);
    sub_2213A60(&StringLiteral_20094/*"event_gauge_frame_0"*/);
    byte_597261C = 1;
  }
  v52 = 0;
  this->fields.progressData = inputProgressData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.progressData,
    (int32_t)inputProgressData,
    *(System_String_o **)&inputEventId,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  progressData = this->fields.progressData;
  this->fields.eventId = inputEventId;
  if ( !progressData )
    goto LABEL_17;
  v52 = progressData->fields.ReleaseScenarioIndex + 1;
  v14 = System_Int32__ToString((int32_t)&v52, 0);
  v15 = System_String__Concat_75651716((System_String_o *)StringLiteral_20089/*"event_gauge_back_0"*/, v14, 0);
  this->fields.gaugeBackFileName = v15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.gaugeBackFileName,
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
  v52 = v22->fields.ReleaseScenarioIndex + 1;
  v23 = System_Int32__ToString((int32_t)&v52, 0);
  v24 = System_String__Concat_75651716((System_String_o *)StringLiteral_20094/*"event_gauge_frame_0"*/, v23, 0);
  this->fields.gaugeFrameFileName = v24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.gaugeFrameFileName,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  eventId = this->fields.eventId;
  gaugeBackFileName = this->fields.gaugeBackFileName;
  v33 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_EventInfoRiverProgressDrawComponent__Setup_b__18_0__, 0);
  EventInfoUIBase__LoadEventUIEffectPathAssetData((EventInfoUIBase_o *)this, eventId, gaugeBackFileName, v33, 0);
  v34 = this->fields.eventId;
  gaugeFrameFileName = this->fields.gaugeFrameFileName;
  v36 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_EventInfoRiverProgressDrawComponent__Setup_b__18_1__, 0);
  EventInfoUIBase__LoadEventUIEffectPathAssetData((EventInfoUIBase_o *)this, v34, gaugeFrameFileName, v36, 0);
  v37 = this->fields.progressData;
  if ( !v37 )
    goto LABEL_17;
  if ( v37->fields.IsReleaseScenarioAnimEnd )
  {
    ReleaseScenarioIndex = v37->fields.ReleaseScenarioIndex;
    v39 = EventInfoPointRiverProgressControl_TypeInfo;
    if ( !*(&EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo, v12);
      v39 = EventInfoPointRiverProgressControl_TypeInfo;
    }
    if ( ReleaseScenarioIndex < v39->static_fields->MAX_SCENARIO_RIVER_INDEX )
    {
      nextUIObject = this->fields.nextUIObject;
      if ( nextUIObject )
      {
        UnityEngine_GameObject__SetActive(nextUIObject, 0, 0);
        scenarioOpenAnimPrefab = (Il2CppObject *)this->fields.scenarioOpenAnimPrefab;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
        v42 = UnityEngine_Object__Instantiate_object_(
                scenarioOpenAnimPrefab,
                (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.scenarioOpenObject = (struct UnityEngine_GameObject_o *)v42;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.scenarioOpenObject,
          (int32_t)v42,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
        scenarioOpenObject = this->fields.scenarioOpenObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SafeSetParent_42897308(scenarioOpenObject, gameObject, 0);
        nextUIObject = this->fields.nextUIObject;
        if ( nextUIObject )
        {
          v51 = this->fields.scenarioOpenObject;
          nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nextUIObject, 0);
          if ( nextUIObject )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nextUIObject, 0);
            GameObjectExtensions__SetLocalPosition(v51, localPosition, 0);
            return;
          }
        }
      }
LABEL_17:
      sub_2213CDC(nextUIObject, v12);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *v8; // x19
  int32_t _1__state; // w22
  struct EventInfoRiverProgressDrawComponent_o *_4__this; // x20
  const MethodInfo *v11; // x3
  float v12; // s0
  float v13; // s1
  struct System_Action_o *endAction; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_String_o **v21; // x8
  struct System_String_o *v22; // x1
  __int64 v23; // x1
  EventInfoUISlideAnimation_o *Component_object; // x21
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  _BOOL4 isFadeIn; // w24
  float x; // s8
  float y; // s9
  float z; // s10
  float v36; // s10
  float v37; // s9
  UnityEngine_Object_o *scenarioOpenObject; // x21
  __int64 v39; // x1
  Il2CppObject *v40; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  float v43; // s1
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_5972621 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_24337/*"river_fade_in"*/);
    sub_2213A60(&StringLiteral_24338/*"river_fade_out"*/);
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)sub_2213A60(&StringLiteral_24224/*"release_scenario_out"*/);
    byte_5972621 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( !_1__state )
  {
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)_4__this->fields.animEndAction;
      if ( this )
      {
        endAction = v8->fields.endAction;
        this->fields.endAction = endAction;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.endAction,
          (int32_t)endAction,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7);
        if ( v8->fields.isFadeIn )
          v21 = (struct System_String_o **)&StringLiteral_24337/*"river_fade_in"*/;
        else
          v21 = (struct System_String_o **)&StringLiteral_24338/*"river_fade_out"*/;
        v22 = *v21;
        v8->fields._animName_5__2 = *v21;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v8->fields._animName_5__2,
          (int32_t)v22,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        Component_object = (EventInfoUISlideAnimation_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)_4__this,
                                                            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        {
          isFadeIn = v8->fields.isFadeIn;
          this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0);
          if ( isFadeIn )
          {
            if ( !this )
              goto LABEL_41;
            position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
            x = position.fields.x;
            y = position.fields.y;
            z = position.fields.z;
            this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_gameObject(
                                                                                            (UnityEngine_Component_o *)_4__this,
                                                                                            0);
            if ( !Component_object )
              goto LABEL_41;
            GameObjectExtensions__SetLocalPosition_42891620(
              (UnityEngine_GameObject_o *)this,
              position.fields.x,
              position.fields.y - Component_object->fields.slideOutPosition.fields.y,
              position.fields.z,
              0);
          }
          else
          {
            if ( !this )
              goto LABEL_41;
            LODWORD(x) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
            this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_transform(
                                                                                            (UnityEngine_Component_o *)_4__this,
                                                                                            0);
            if ( !this )
              goto LABEL_41;
            v43 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y;
            if ( !Component_object )
              goto LABEL_41;
            v36 = Component_object->fields.slideOutPosition.fields.y;
            v37 = v43;
            this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_transform(
                                                                                            (UnityEngine_Component_o *)_4__this,
                                                                                            0);
            if ( !this )
              goto LABEL_41;
            y = v37 + v36;
            z = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.z;
          }
          v45.fields.x = x;
          v45.fields.y = y;
          v45.fields.z = z;
          EventInfoUISlideAnimation__StartSlideAnim_52752912(Component_object, 0, v45, isFadeIn, 0);
        }
        if ( !v8->fields.isFadeIn )
        {
          scenarioOpenObject = (UnityEngine_Object_o *)_4__this->fields.scenarioOpenObject;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
          if ( UnityEngine_Object__op_Inequality(scenarioOpenObject, 0, 0) )
          {
            this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)_4__this->fields.scenarioOpenObject;
            if ( !this )
              goto LABEL_41;
            v40 = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)this,
                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
            this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Object__op_Inequality(
                                                                                            (UnityEngine_Object_o *)v40,
                                                                                            0,
                                                                                            0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v40 )
                goto LABEL_41;
              SimpleAnimation__Play_78552168((SimpleAnimation_o *)v40, (System_String_o *)StringLiteral_24224/*"release_scenario_out"*/, 0);
            }
          }
        }
        v8->fields.__2__current = 0;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_2213A04(p__2__current, 0, v26, v27, v28, v29, v30, v31);
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
        return _1__state == 0;
      }
    }
LABEL_41:
    sub_2213CDC(this, method);
  }
  if ( _1__state != 1 )
    return _1__state == 0;
  v8->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_41;
  EventInfoRiverProgressDrawComponent__SetActive(_4__this, 1, (const MethodInfo *)v2);
  this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)_4__this->fields.riverAnim;
  if ( !this )
    goto LABEL_41;
  SimpleAnimation__Play_78552168((SimpleAnimation_o *)this, v8->fields._animName_5__2, 0);
  if ( v8->fields.isFadeIn )
  {
    v12 = 0.0;
    v13 = 1.0;
  }
  else
  {
    v13 = 0.0;
    v12 = 1.0;
  }
  EventInfoRiverProgressDrawComponent__PlayFade(_4__this, v12, v13, 1.0, 3, 0, v11);
  return _1__state == 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
    sub_2213CDC(this, method);
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
  float v3; // s0
  float mNow; // s1
  bool v5; // nf
  float to; // s1
  float from; // s3
  EventInfoRiverProgressDrawComponent_o *_4__this; // x0
  float v9; // s1

  easingObj = this->fields.easingObj;
  if ( !easingObj || !this->fields.__4__this )
    sub_2213CDC(this, method);
  v3 = 1.0;
  mNow = easingObj->fields.mNow;
  if ( mNow <= 1.0 )
    v3 = easingObj->fields.mNow;
  v5 = mNow < 0.0;
  from = this->fields.from;
  to = this->fields.to;
  _4__this = this->fields.__4__this;
  v9 = to - from;
  if ( v5 )
    v3 = 0.0;
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha(_4__this, from + (float)(v9 * v3), method);
}


void EventInfoRiverProgressDrawComponent___c__DisplayClass21_0___PlayFade_b__1(
        EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  EventInfoRiverProgressDrawComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha(_4__this, this->fields.to, method);
  ActionExtensions__Call(this->fields.endAction, 0);
}