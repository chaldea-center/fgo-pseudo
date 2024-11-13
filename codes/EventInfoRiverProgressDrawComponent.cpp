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

  if ( (byte_4B177F2 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_TypeInfo, endAction, isFadeIn);
    byte_4B177F2 = 1;
  }
  v7 = isFadeIn;
  v8 = sub_1BCAA2C(
         EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_TypeInfo,
         endAction,
         isFadeIn,
         method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 32), (int64_t)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = endAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 40), (int64_t)endAction, v15, v16, v17, v18, v19, v20);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  EasingObject_o *v45; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Action_o *v49; // x22
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Action_o *v53; // x23

  if ( (byte_4B177F4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&easingType, endAction);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v13, v14);
    sub_1BCA7E0(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__0__, v15, v16);
    sub_1BCA7E0(&Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__1__, v17, v18);
    sub_1BCA7E0(&EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_TypeInfo, v19, v20);
    byte_4B177F4 = 1;
  }
  v21 = sub_1BCAA2C(
          EventInfoRiverProgressDrawComponent___c__DisplayClass21_0_TypeInfo,
          *(_QWORD *)&easingType,
          endAction,
          method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_6;
  *(float *)(v21 + 24) = from;
  *(float *)(v21 + 28) = to;
  *(_QWORD *)(v21 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 40) = endAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 40), (int64_t)endAction, v30, v31, v32, v33, v34, v35);
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha(this, *(float *)(v21 + 24), v36);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v21 + 16) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)Component_object, v39, v40, v41, v42, v43, v44);
  v45 = *(EasingObject_o **)(v21 + 16);
  v49 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v46, v47, v48);
  System_Action___ctor(
    v49,
    (Il2CppObject *)v21,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__0__,
    0LL);
  v53 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v50, v51, v52);
  System_Action___ctor(
    v53,
    (Il2CppObject *)v21,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass21_0__PlayFade_b__1__,
    0LL);
  if ( !v45 )
LABEL_6:
    sub_1BCAA3C(v22, v23);
  EasingObject__Play(v45, time, v49, v53, 0.0, easingType, 0LL);
}


void __fastcall EventInfoRiverProgressDrawComponent__PlayProgressClearAnim(
        EventInfoRiverProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x20
  UnityEngine_GameObject_o *nextUIObject; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  UnityEngine_Object_o *scenarioOpenAnimPrefab; // x22
  char v37; // w22
  __int64 v38; // x1
  Il2CppObject *v39; // x22
  Il2CppObject *v40; // x0
  struct UnityEngine_GameObject_o **p_scenarioOpenObject; // x23
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  UnityEngine_GameObject_o *scenarioOpenObject; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v50; // x22
  Il2CppObject *Component_object; // x22
  __int64 v52; // x1
  Il2CppObject *v53; // x23
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Action_o *v57; // x21
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  const MethodInfo *v64; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B177F3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, endAction, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(
      &Method_EventInfoRiverProgressDrawComponent___c__DisplayClass20_0__PlayProgressClearAnim_b__0__,
      v14,
      v15);
    sub_1BCA7E0(&EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_17481/*"bit_scenario_open"*/, v18, v19);
    byte_4B177F3 = 1;
  }
  v20 = sub_1BCAA2C(EventInfoRiverProgressDrawComponent___c__DisplayClass20_0_TypeInfo, endAction, method, v3);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_22;
  *(_QWORD *)(v20 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = endAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)endAction, v29, v30, v31, v32, v33, v34);
  scenarioOpenAnimPrefab = (UnityEngine_Object_o *)this->fields.scenarioOpenAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(scenarioOpenAnimPrefab, 0LL, 0LL);
  if ( !this->fields.nextUIObject )
    goto LABEL_22;
  v37 = (char)nextUIObject;
  UnityEngine_GameObject__SetActive(this->fields.nextUIObject, 0, 0LL);
  if ( (v37 & 1) != 0 )
    goto LABEL_18;
  v39 = (Il2CppObject *)this->fields.scenarioOpenAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
  v40 = UnityEngine_Object__Instantiate_object_(
          v39,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.scenarioOpenObject = (struct UnityEngine_GameObject_o *)v40;
  p_scenarioOpenObject = &this->fields.scenarioOpenObject;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.scenarioOpenObject,
    (int64_t)v40,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  scenarioOpenObject = this->fields.scenarioOpenObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_34336992(scenarioOpenObject, gameObject, 0LL);
  nextUIObject = this->fields.nextUIObject;
  if ( !nextUIObject )
    goto LABEL_22;
  v50 = *p_scenarioOpenObject;
  nextUIObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nextUIObject, 0LL);
  if ( !nextUIObject )
    goto LABEL_22;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nextUIObject, 0LL);
  GameObjectExtensions__SetLocalPosition(v50, localPosition, 0LL);
  nextUIObject = *p_scenarioOpenObject;
  if ( !*p_scenarioOpenObject )
    goto LABEL_22;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       nextUIObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
LABEL_18:
    ActionExtensions__Call(*(System_Action_o **)(v20 + 24), 0LL);
    return;
  }
  nextUIObject = *p_scenarioOpenObject;
  if ( !*p_scenarioOpenObject )
    goto LABEL_22;
  v53 = UnityEngine_GameObject__GetComponent_object_(
          nextUIObject,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v53, 0LL, 0LL) )
    goto LABEL_18;
  v57 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v54, v55, v56);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v20,
    Method_EventInfoRiverProgressDrawComponent___c__DisplayClass20_0__PlayProgressClearAnim_b__0__,
    0LL);
  if ( !v53
    || (v53[2].monitor = v57,
        sub_1BCA784((PartyOrganizationUtility_o *)&v53[2].monitor, (int64_t)v57, v58, v59, v60, v61, v62, v63),
        !Component_object) )
  {
LABEL_22:
    sub_1BCAA3C(nextUIObject, v22);
  }
  SimpleAnimation__Play_64539336((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_17481/*"bit_scenario_open"*/, 0LL);
  EventInfoRiverProgressDrawComponent__PlayScenarioReleaseSe(this, v64);
}


void __fastcall EventInfoRiverProgressDrawComponent__PlayScenarioReleaseSe(
        EventInfoRiverProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  void *releaseScenarioSEName; // x0
  int v6; // w8
  System_String_o **v7; // x19
  System_String_o *v8; // x20
  System_String_o *v9; // x21
  SePlayer_o *v10; // x0
  SePlayer_o *v11; // x20
  float result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B177F5 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, method, v2);
    byte_4B177F5 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.releaseScenarioSEName, 0LL) )
  {
    releaseScenarioSEName = this->fields.releaseScenarioSEName;
    if ( !releaseScenarioSEName )
      goto LABEL_18;
    releaseScenarioSEName = System_String__Split((System_String_o *)releaseScenarioSEName, 0x3Au, 0, 0LL);
    if ( !releaseScenarioSEName )
      goto LABEL_18;
    v6 = *((_DWORD *)releaseScenarioSEName + 6);
    v7 = (System_String_o **)releaseScenarioSEName;
    if ( !v6 )
      sub_1BCAA44(releaseScenarioSEName, v4);
    v8 = (System_String_o *)*((_QWORD *)releaseScenarioSEName + 4);
    if ( v6 < 2 )
    {
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v4);
      SoundManager__playSe(v8, 0LL);
      return;
    }
    v9 = (System_String_o *)*((_QWORD *)releaseScenarioSEName + 5);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v4);
    v10 = SoundManager__playSe_39417204(v8, v9, 0LL);
    result = 0.0;
    if ( *((int *)v7 + 6) >= 3 )
    {
      v11 = v10;
      releaseScenarioSEName = (void *)System_Single__TryParse(v7[6], &result, 0LL);
      if ( ((unsigned __int8)releaseScenarioSEName & 1) != 0 )
      {
        if ( v11 )
        {
          SePlayer__set_Pitch(v11, result, 0LL);
          return;
        }
LABEL_18:
        sub_1BCAA3C(releaseScenarioSEName, v4);
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
    sub_1BCAA3C(0LL, v5);
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
    sub_1BCAA3C(riverBack, method);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_GameObject_o *nextUIObject; // x0
  __int64 v26; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  System_String_o *v28; // x0
  struct System_String_o *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct EventInfoPointRiverProgressControl_ProgressData_o *v36; // x8
  System_String_o *v37; // x0
  struct System_String_o *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int32_t eventId; // w21
  System_String_o *gaugeBackFileName; // x22
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Action_o *v50; // x23
  int32_t v51; // w21
  System_String_o *gaugeFrameFileName; // x20
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Action_o *v56; // x22
  struct EventInfoPointRiverProgressControl_ProgressData_o *v57; // x8
  int32_t ReleaseScenarioIndex; // w20
  EventInfoPointRiverProgressControl_c *v59; // x0
  __int64 v60; // x1
  Il2CppObject *scenarioOpenAnimPrefab; // x20
  Il2CppObject *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  UnityEngine_GameObject_o *scenarioOpenObject; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v71; // x19
  int v72; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B177F1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, inputProgressData, *(_QWORD *)&inputEventId);
    sub_1BCA7E0(&EventInfoPointRiverProgressControl_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_EventInfoRiverProgressDrawComponent__Setup_b__18_0__, v13, v14);
    sub_1BCA7E0(&Method_EventInfoRiverProgressDrawComponent__Setup_b__18_1__, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_19377/*"event_gauge_back_0"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_19382/*"event_gauge_frame_0"*/, v23, v24);
    byte_4B177F1 = 1;
  }
  this->fields.progressData = inputProgressData;
  sub_1BCA784(
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
  v72 = progressData->fields.ReleaseScenarioIndex + 1;
  v28 = System_Int32__ToString((int32_t)&v72, 0LL);
  v29 = System_String__Concat_62401220((System_String_o *)StringLiteral_19377/*"event_gauge_back_0"*/, v28, 0LL);
  this->fields.gaugeBackFileName = v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.gaugeBackFileName, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  v36 = this->fields.progressData;
  if ( !v36 )
    goto LABEL_17;
  v72 = v36->fields.ReleaseScenarioIndex + 1;
  v37 = System_Int32__ToString((int32_t)&v72, 0LL);
  v38 = System_String__Concat_62401220((System_String_o *)StringLiteral_19382/*"event_gauge_frame_0"*/, v37, 0LL);
  this->fields.gaugeFrameFileName = v38;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.gaugeFrameFileName,
    (int64_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  eventId = this->fields.eventId;
  gaugeBackFileName = this->fields.gaugeBackFileName;
  v50 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v47, v48, v49);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_EventInfoRiverProgressDrawComponent__Setup_b__18_0__, 0LL);
  EventInfoUIBase__LoadEventUIEffectPathAssetData((EventInfoUIBase_o *)this, eventId, gaugeBackFileName, v50, 0LL);
  v51 = this->fields.eventId;
  gaugeFrameFileName = this->fields.gaugeFrameFileName;
  v56 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v53, v54, v55);
  System_Action___ctor(v56, (Il2CppObject *)this, Method_EventInfoRiverProgressDrawComponent__Setup_b__18_1__, 0LL);
  EventInfoUIBase__LoadEventUIEffectPathAssetData((EventInfoUIBase_o *)this, v51, gaugeFrameFileName, v56, 0LL);
  v57 = this->fields.progressData;
  if ( !v57 )
    goto LABEL_17;
  if ( v57->fields.IsReleaseScenarioAnimEnd )
  {
    ReleaseScenarioIndex = v57->fields.ReleaseScenarioIndex;
    v59 = EventInfoPointRiverProgressControl_TypeInfo;
    if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo, v26);
      v59 = EventInfoPointRiverProgressControl_TypeInfo;
    }
    if ( ReleaseScenarioIndex < v59->static_fields->MAX_SCENARIO_RIVER_INDEX )
    {
      nextUIObject = this->fields.nextUIObject;
      if ( nextUIObject )
      {
        UnityEngine_GameObject__SetActive(nextUIObject, 0, 0LL);
        scenarioOpenAnimPrefab = (Il2CppObject *)this->fields.scenarioOpenAnimPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v60);
        v62 = UnityEngine_Object__Instantiate_object_(
                scenarioOpenAnimPrefab,
                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.scenarioOpenObject = (struct UnityEngine_GameObject_o *)v62;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.scenarioOpenObject,
          (int64_t)v62,
          v63,
          v64,
          v65,
          v66,
          v67,
          v68);
        scenarioOpenObject = this->fields.scenarioOpenObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SafeSetParent_34336992(scenarioOpenObject, gameObject, 0LL);
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
LABEL_17:
      sub_1BCAA3C(nextUIObject, v26);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t _1__state; // w8
  struct EventInfoRiverProgressDrawComponent_o *_4__this; // x20
  struct System_Action_o *endAction; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t *v28; // x8
  int64_t v29; // x1
  __int64 v30; // x1
  EventInfoUISlideAnimation_o *Component_object; // x21
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  _BOOL4 isFadeIn; // w23
  float x; // s8
  float y; // s10
  float z; // s9
  const MethodInfo *v43; // x3
  float v44; // s0
  float v45; // s1
  bool result; // w0
  float v47; // s1
  float v48; // s11
  float v49; // s10
  UnityEngine_Object_o *scenarioOpenObject; // x21
  __int64 v51; // x1
  Il2CppObject *v52; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4B177F6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_23200/*"river_fade_in"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_23201/*"river_fade_out"*/, v15, v16);
    this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)sub_1BCA7E0(
                                                                                    &StringLiteral_23097/*"release_scenario_out"*/,
                                                                                    v17,
                                                                                    v18);
    byte_4B177F6 = 1;
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
    SimpleAnimation__Play_64539336((SimpleAnimation_o *)this, v8->fields._animName_5__2, 0LL);
    if ( v8->fields.isFadeIn )
    {
      v44 = 0.0;
      v45 = 1.0;
    }
    else
    {
      v44 = 1.0;
      v45 = 0.0;
    }
    EventInfoRiverProgressDrawComponent__PlayFade(_4__this, v44, v45, 1.0, 3, 0LL, v43);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endAction,
    (int64_t)endAction,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( v8->fields.isFadeIn )
    v28 = (int64_t *)&StringLiteral_23200/*"river_fade_in"*/;
  else
    v28 = (int64_t *)&StringLiteral_23201/*"river_fade_out"*/;
  v29 = *v28;
  v8->fields._animName_5__2 = (struct System_String_o *)*v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._animName_5__2, v29, v22, v23, v24, v25, v26, v27);
  Component_object = (EventInfoUISlideAnimation_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)_4__this,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
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
      GameObjectExtensions__SetLocalPosition_34331148(
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
      *(UnityEngine_Vector3_o *)(&v47 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      if ( !Component_object )
        goto LABEL_40;
      v48 = Component_object->fields.slideOutPosition.fields.y;
      v49 = v47;
      this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Component__get_transform(
                                                                                      (UnityEngine_Component_o *)_4__this,
                                                                                      0LL);
      if ( !this )
        goto LABEL_40;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      z = localPosition.fields.z;
      y = v49 + v48;
    }
    v56.fields.x = x;
    v56.fields.y = y;
    v56.fields.z = z;
    EventInfoUISlideAnimation__StartSlideAnim_42792984(Component_object, 0LL, v56, isFadeIn, 0LL);
  }
  if ( v8->fields.isFadeIn )
    goto LABEL_39;
  scenarioOpenObject = (UnityEngine_Object_o *)_4__this->fields.scenarioOpenObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
  if ( !UnityEngine_Object__op_Inequality(scenarioOpenObject, 0LL, 0LL) )
    goto LABEL_39;
  this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)_4__this->fields.scenarioOpenObject;
  if ( !this )
    goto LABEL_40;
  v52 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
  this = (EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_o *)UnityEngine_Object__op_Inequality(
                                                                                  (UnityEngine_Object_o *)v52,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_39;
  if ( !v52 )
LABEL_40:
    sub_1BCAA3C(this, method);
  SimpleAnimation__Play_64539336((SimpleAnimation_o *)v52, (System_String_o *)StringLiteral_23097/*"release_scenario_out"*/, 0LL);
LABEL_39:
  v8->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1BCA784(p__2__current, 0LL, v33, v34, v35, v36, v37, v38);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim_d__19_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(0LL, method);
  EventInfoRiverProgressDrawComponent__SetSpriteAlpha(_4__this, this->fields.to, method);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}