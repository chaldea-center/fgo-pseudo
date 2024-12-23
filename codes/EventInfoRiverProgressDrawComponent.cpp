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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B68206 & 1) == 0 )
  {
    sub_1BE4ACC(&EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_TypeInfo, endAction);
    byte_4B68206 = 1;
  }
  v7 = isFadeIn;
  v8 = sub_1BE4D18(EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v8 + 32), (int64_t)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = endAction;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v8 + 40), (int64_t)endAction, v15, v16, v17, v18, v19, v20);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  EasingObject_o *v41; // x21
  System_Action_o *v42; // x22
  System_Action_o *v43; // x23

  if ( (byte_4B68208 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&easingType);
    sub_1BE4ACC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v13);
    sub_1BE4ACC(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__0__, v14);
    sub_1BE4ACC(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__1__, v15);
    sub_1BE4ACC(&EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_TypeInfo, v16);
    byte_4B68208 = 1;
  }
  v17 = sub_1BE4D18(EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_6;
  *(float *)(v17 + 24) = from;
  *(float *)(v17 + 28) = to;
  *(_QWORD *)(v17 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 40) = endAction;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 40), (int64_t)endAction, v26, v27, v28, v29, v30, v31);
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha(this, *(float *)(v17 + 24), v32);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2FAB284 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v17 + 16) = Component_object;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)Component_object, v35, v36, v37, v38, v39, v40);
  v41 = *(EasingObject_o **)(v17 + 16);
  v42 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v17,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__0__,
    0LL);
  v43 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v17,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__1__,
    0LL);
  if ( !v41 )
LABEL_6:
    sub_1BE4D28(v18, v19);
  EasingObject__Play(v41, time, v42, v43, 0.0, easingType, 0LL);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_Object_o *scenarioOpenAnimPrefab; // x22
  char v28; // w22
  Il2CppObject *v29; // x22
  Il2CppObject *v30; // x0
  struct UnityEngine_GameObject_o **p_scenarioOpenObject; // x23
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  UnityEngine_GameObject_o *scenarioOpenObject; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v40; // x22
  Il2CppObject *Component_object; // x22
  Il2CppObject *v42; // x23
  System_Action_o *v43; // x21
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  const MethodInfo *v50; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B68207 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, endAction);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v6);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    sub_1BE4ACC(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass20_0__PlayProgressClearAnim_b__0__, v9);
    sub_1BE4ACC(&EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_TypeInfo, v10);
    sub_1BE4ACC(&StringLiteral_17527/*"bit_scenario_open"*/, v11);
    byte_4B68207 = 1;
  }
  v12 = sub_1BE4D18(EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_22;
  *(_QWORD *)(v12 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = endAction;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)endAction, v21, v22, v23, v24, v25, v26);
  scenarioOpenAnimPrefab = (UnityEngine_Object_o *)this->fields.scenarioOpenAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(scenarioOpenAnimPrefab, 0LL, 0LL);
  if ( !this->fields.nextUIObject )
    goto LABEL_22;
  v28 = (char)nextUIObject;
  UnityEngine_GameObject__SetActive(this->fields.nextUIObject, 0, 0LL);
  if ( (v28 & 1) != 0 )
    goto LABEL_18;
  v29 = (Il2CppObject *)this->fields.scenarioOpenAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v30 = UnityEngine_Object__Instantiate_object_(
          v29,
          (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.scenarioOpenObject = (struct UnityEngine_GameObject_o *)v30;
  p_scenarioOpenObject = &this->fields.scenarioOpenObject;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.scenarioOpenObject,
    (int64_t)v30,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  scenarioOpenObject = this->fields.scenarioOpenObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_34492740(scenarioOpenObject, gameObject, 0LL);
  nextUIObject = this->fields.nextUIObject;
  if ( !nextUIObject )
    goto LABEL_22;
  v40 = *p_scenarioOpenObject;
  nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nextUIObject, 0LL);
  if ( !nextUIObject )
    goto LABEL_22;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nextUIObject, 0LL);
  GameObjectExtensions__SetLocalPosition(v40, localPosition, 0LL);
  nextUIObject = *p_scenarioOpenObject;
  if ( !*p_scenarioOpenObject )
    goto LABEL_22;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       nextUIObject,
                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
LABEL_18:
    ActionExtensions__Call(*(System_Action_o **)(v12 + 24), 0LL);
    return;
  }
  nextUIObject = *p_scenarioOpenObject;
  if ( !*p_scenarioOpenObject )
    goto LABEL_22;
  v42 = UnityEngine_GameObject__GetComponent_object_(
          nextUIObject,
          (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v42, 0LL, 0LL) )
    goto LABEL_18;
  v43 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v12,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass20_0__PlayProgressClearAnim_b__0__,
    0LL);
  if ( !v42
    || (v42[2].monitor = v43,
        sub_1BE4A70((PartyOrganizationUtility_o *)&v42[2].monitor, (int64_t)v43, v44, v45, v46, v47, v48, v49),
        !Component_object) )
  {
LABEL_22:
    sub_1BE4D28(nextUIObject, v14);
  }
  SimpleAnimation__Play_64837092((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_17527/*"bit_scenario_open"*/, 0LL);
  EventInfoRiverProgressDrawComponent__PlayScenarioReleaseSe(this, v50);
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

  if ( (byte_4B68209 & 1) == 0 )
  {
    sub_1BE4ACC(&SoundManager_TypeInfo, method);
    byte_4B68209 = 1;
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
      sub_1BE4D30(releaseScenarioSEName, v3);
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
    v9 = SoundManager__playSe_39613364(v7, v8, 0LL);
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
        sub_1BE4D28(releaseScenarioSEName, v3);
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
    sub_1BE4D28(0LL, v5);
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
    sub_1BE4D28(riverBack, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_GameObject_o *nextUIObject; // x0
  __int64 v19; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  System_String_o *v21; // x0
  struct System_String_o *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct EventInfoPointRiverProgressControl_ProgressData_o *v29; // x8
  System_String_o *v30; // x0
  struct System_String_o *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int32_t eventId; // w21
  System_String_o *gaugeBackFileName; // x22
  System_Action_o *v40; // x23
  int32_t v41; // w21
  System_String_o *gaugeFrameFileName; // x20
  System_Action_o *v43; // x22
  struct EventInfoPointRiverProgressControl_ProgressData_o *v44; // x8
  int32_t ReleaseScenarioIndex; // w20
  EventInfoPointRiverProgressControl_c *v46; // x0
  Il2CppObject *scenarioOpenAnimPrefab; // x20
  Il2CppObject *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  UnityEngine_GameObject_o *scenarioOpenObject; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v57; // x19
  int v58; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B68205 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, inputProgressData);
    sub_1BE4ACC(&EventInfoPointRiverProgressControl_TypeInfo, v11);
    sub_1BE4ACC(&Method_EventInfoRiverProgressDrawComponent__Setup_b__18_0__, v12);
    sub_1BE4ACC(&Method_EventInfoRiverProgressDrawComponent__Setup_b__18_1__, v13);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v15);
    sub_1BE4ACC(&StringLiteral_19435/*"event_gauge_back_0"*/, v16);
    sub_1BE4ACC(&StringLiteral_19440/*"event_gauge_frame_0"*/, v17);
    byte_4B68205 = 1;
  }
  this->fields.progressData = inputProgressData;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.progressData,
    (int64_t)inputProgressData,
    *(int64_t *)&inputEventId,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  progressData = this->fields.progressData;
  this->fields.eventId = inputEventId;
  if ( !progressData )
    goto LABEL_17;
  v58 = progressData->fields.ReleaseScenarioIndex + 1;
  v21 = System_Int32__ToString((int32_t)&v58, 0LL);
  v22 = System_String__Concat_62698808((System_String_o *)StringLiteral_19435/*"event_gauge_back_0"*/, v21, 0LL);
  this->fields.gaugeBackFileName = v22;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.gaugeBackFileName, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = this->fields.progressData;
  if ( !v29 )
    goto LABEL_17;
  v58 = v29->fields.ReleaseScenarioIndex + 1;
  v30 = System_Int32__ToString((int32_t)&v58, 0LL);
  v31 = System_String__Concat_62698808((System_String_o *)StringLiteral_19440/*"event_gauge_frame_0"*/, v30, 0LL);
  this->fields.gaugeFrameFileName = v31;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.gaugeFrameFileName,
    (int64_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  eventId = this->fields.eventId;
  gaugeBackFileName = this->fields.gaugeBackFileName;
  v40 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_EventInfoRiverProgressDrawComponent__Setup_b__18_0__, 0LL);
  EventInfoUIBase__LoadEventUIEffectPathAssetData((EventInfoUIBase_o *)this, eventId, gaugeBackFileName, v40, 0LL);
  v41 = this->fields.eventId;
  gaugeFrameFileName = this->fields.gaugeFrameFileName;
  v43 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_EventInfoRiverProgressDrawComponent__Setup_b__18_1__, 0LL);
  EventInfoUIBase__LoadEventUIEffectPathAssetData((EventInfoUIBase_o *)this, v41, gaugeFrameFileName, v43, 0LL);
  v44 = this->fields.progressData;
  if ( !v44 )
    goto LABEL_17;
  if ( v44->fields.IsReleaseScenarioAnimEnd )
  {
    ReleaseScenarioIndex = v44->fields.ReleaseScenarioIndex;
    v46 = EventInfoPointRiverProgressControl_TypeInfo;
    if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
      v46 = EventInfoPointRiverProgressControl_TypeInfo;
    }
    if ( ReleaseScenarioIndex < v46->static_fields->MAX_SCENARIO_RIVER_INDEX )
    {
      nextUIObject = this->fields.nextUIObject;
      if ( nextUIObject )
      {
        UnityEngine_GameObject__SetActive(nextUIObject, 0, 0LL);
        scenarioOpenAnimPrefab = (Il2CppObject *)this->fields.scenarioOpenAnimPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v48 = UnityEngine_Object__Instantiate_object_(
                scenarioOpenAnimPrefab,
                (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.scenarioOpenObject = (struct UnityEngine_GameObject_o *)v48;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.scenarioOpenObject,
          (int64_t)v48,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54);
        scenarioOpenObject = this->fields.scenarioOpenObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SafeSetParent_34492740(scenarioOpenObject, gameObject, 0LL);
        nextUIObject = this->fields.nextUIObject;
        if ( nextUIObject )
        {
          v57 = this->fields.scenarioOpenObject;
          nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nextUIObject, 0LL);
          if ( nextUIObject )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nextUIObject, 0LL);
            GameObjectExtensions__SetLocalPosition(v57, localPosition, 0LL);
            return;
          }
        }
      }
LABEL_17:
      sub_1BE4D28(nextUIObject, v19);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t _1__state; // w8
  struct EventInfoRiverProgressDrawComponent_o *_4__this; // x20
  struct System_Action_o *endAction; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t *v23; // x8
  int64_t v24; // x1
  EventInfoUISlideAnimation_o *Component_object; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  _BOOL4 isFadeIn; // w23
  float x; // s8
  float y; // s10
  float z; // s9
  const MethodInfo *v36; // x3
  float v37; // s0
  float v38; // s1
  bool result; // w0
  float v40; // s1
  float v41; // s11
  float v42; // s10
  UnityEngine_Object_o *scenarioOpenObject; // x21
  Il2CppObject *v44; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4B6820A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___, method);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    sub_1BE4ACC(&StringLiteral_23279/*"river_fade_in"*/, v11);
    sub_1BE4ACC(&StringLiteral_23280/*"river_fade_out"*/, v12);
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)sub_1BE4ACC(&StringLiteral_23176/*"release_scenario_out"*/, v13);
    byte_4B6820A = 1;
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
    SimpleAnimation__Play_64837092((SimpleAnimation_o *)this, v8->fields._animName_5__2, 0LL);
    if ( v8->fields.isFadeIn )
    {
      v37 = 0.0;
      v38 = 1.0;
    }
    else
    {
      v37 = 1.0;
      v38 = 0.0;
    }
    EventInfoRiverProgressDrawComponent__PlayFade(_4__this, v37, v38, 1.0, 3, 0LL, v36);
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
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.endAction,
    (int64_t)endAction,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( v8->fields.isFadeIn )
    v23 = (int64_t *)&StringLiteral_23279/*"river_fade_in"*/;
  else
    v23 = (int64_t *)&StringLiteral_23280/*"river_fade_out"*/;
  v24 = *v23;
  v8->fields._animName_5__2 = (struct System_String_o *)*v23;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._animName_5__2, v24, v17, v18, v19, v20, v21, v22);
  Component_object = (EventInfoUISlideAnimation_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)_4__this,
                                                      (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    isFadeIn = v8->fields.isFadeIn;
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_transform(
                                                                                    (UnityEngine_Component_o *)_4__this,
                                                                                    0LL);
    if ( !this )
      goto LABEL_40;
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
        goto LABEL_40;
      GameObjectExtensions__SetLocalPosition_34486896(
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
        goto LABEL_40;
      *(UnityEngine_Vector3_o *)(&v40 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      if ( !Component_object )
        goto LABEL_40;
      v41 = Component_object->fields.slideOutPosition.fields.y;
      v42 = v40;
      this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_transform(
                                                                                      (UnityEngine_Component_o *)_4__this,
                                                                                      0LL);
      if ( !this )
        goto LABEL_40;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      z = localPosition.fields.z;
      y = v42 + v41;
    }
    v48.fields.x = x;
    v48.fields.y = y;
    v48.fields.z = z;
    EventInfoUISlideAnimation__StartSlideAnim_43044260(Component_object, 0LL, v48, isFadeIn, 0LL);
  }
  if ( v8->fields.isFadeIn )
    goto LABEL_39;
  scenarioOpenObject = (UnityEngine_Object_o *)_4__this->fields.scenarioOpenObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(scenarioOpenObject, 0LL, 0LL) )
    goto LABEL_39;
  this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)_4__this->fields.scenarioOpenObject;
  if ( !this )
    goto LABEL_40;
  v44 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Object__op_Inequality(
                                                                                  (UnityEngine_Object_o *)v44,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_39;
  if ( !v44 )
LABEL_40:
    sub_1BE4D28(this, method);
  SimpleAnimation__Play_64837092((SimpleAnimation_o *)v44, (System_String_o *)StringLiteral_23176/*"release_scenario_out"*/, 0LL);
LABEL_39:
  v8->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1BE4A70(p__2__current, 0LL, v26, v27, v28, v29, v30, v31);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
    sub_1BE4D28(this, method);
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
    sub_1BE4D28(this, method);
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
    sub_1BE4D28(0LL, method);
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha(_4__this, this->fields.to, method);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}