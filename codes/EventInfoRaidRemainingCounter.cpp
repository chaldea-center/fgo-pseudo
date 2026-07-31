void EventInfoRaidRemainingCounter___ctor(EventInfoRaidRemainingCounter_o *this, const MethodInfo *method)
{
  this->fields.qaaDelayDisplaySecond = 1.0;
  *(_QWORD *)&this->fields.splitNum = 0x404000000000000CLL;
  this->fields.lastDisplayed = -1;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoRaidRemainingCounter__AddCountDataForQAA(EventInfoRaidRemainingCounter_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct EventInfoRemainingRaidHpData_o *RemainingRaidHpData_k__BackingField; // x8
  TerminalPramsManager_c *v5; // x0
  struct EventInfoRemainingRaidHpData_o *v6; // x8
  float qaaDelayDisplaySecond; // s8
  System_Action_o *v8; // x20
  System_Collections_IEnumerator_o *v9; // x1

  if ( (byte_593A424 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoRaidRemainingCounter__AddCountDataForQAA_b__46_0__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593A424 = 1;
  }
  if ( this->fields.eventUiEntity )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    if ( !byte_59350E0 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_59350E0 = 1;
    }
    v3 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      v3 = TerminalPramsManager_TypeInfo;
    }
    RemainingRaidHpData_k__BackingField = v3->static_fields->_RemainingRaidHpData_k__BackingField;
    if ( RemainingRaidHpData_k__BackingField && RemainingRaidHpData_k__BackingField->fields.isAddDataForQAA )
    {
      if ( !*(&v3->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v3, method);
      if ( !byte_59350E0 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_59350E0 = 1;
      }
      v5 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
        v5 = TerminalPramsManager_TypeInfo;
      }
      v6 = v5->static_fields->_RemainingRaidHpData_k__BackingField;
      if ( !v6 )
        sub_21FFECC(v5, method);
      qaaDelayDisplaySecond = this->fields.qaaDelayDisplaySecond;
      v6->fields.isAddDataForQAA = 0;
      v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v8,
        (Il2CppObject *)this,
        Method_EventInfoRaidRemainingCounter__AddCountDataForQAA_b__46_0__,
        0);
      v9 = BasicHelper__DelayCall(qaaDelayDisplaySecond, v8, 1, 0);
      UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v9, 0);
    }
  }
}


bool EventInfoRaidRemainingCounter__DetectExternalValueChange(
        EventInfoRaidRemainingCounter_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _BOOL8 RaidRemainingHpData; // x0
  const MethodInfo *v5; // x1
  EventInfoRemainingRaidHpData_o *v6; // x8
  float v7; // s0
  float phaseEndRealtime; // s1
  int64_t currentDisplay; // x20
  __int64 v10; // x8
  const MethodInfo *v11; // x1
  EventInfoRemainingRaidHpData_o *remainingHpData; // [xsp+8h] [xbp-18h] BYREF

  remainingHpData = 0;
  RaidRemainingHpData = EventInfoRaidRemainingCounter__TryGetRaidRemainingHpData(this, &remainingHpData, v2);
  if ( RaidRemainingHpData )
  {
    v6 = remainingHpData;
    if ( !remainingHpData )
      goto LABEL_11;
    v7 = *(float *)((char *)&dword_30 + (_QWORD)remainingHpData);
    if ( v7 != this->fields.lastSeenUpdateRealtime )
    {
      phaseEndRealtime = this->fields.phaseEndRealtime;
      currentDisplay = this->fields.currentDisplay;
      this->fields.lastSeenUpdateRealtime = v7;
      *(_OWORD *)&this->fields.lastKnownBefore = *(_OWORD *)((char *)off_18 + (_QWORD)v6);
      if ( phaseEndRealtime <= 0.0 )
        goto LABEL_7;
      if ( UnityEngine_Time__get_realtimeSinceStartup(0) <= this->fields.phaseEndRealtime )
      {
LABEL_9:
        this->fields.currentDisplay = currentDisplay;
        EventInfoRaidRemainingCounter__RecalculatePerSplitStepForUpdateIntervalPlan(this, v5);
        this->fields.splitPhaseCount = 0;
        this->fields.nextSplitRealtime = UnityEngine_Time__get_realtimeSinceStartup(0);
        EventInfoRaidRemainingCounter__StartSplitPhase(this, v11);
        return 1;
      }
      v6 = remainingHpData;
      if ( remainingHpData )
      {
LABEL_7:
        v10 = *(_QWORD *)((char *)&word_38 + (_QWORD)v6);
        if ( v10 >= 1 )
          currentDisplay = v10;
        goto LABEL_9;
      }
LABEL_11:
      sub_21FFECC(RaidRemainingHpData, v5);
    }
  }
  return 0;
}


void EventInfoRaidRemainingCounter__ForceLabelUpdate(EventInfoRaidRemainingCounter_o *this, const MethodInfo *method)
{
  this->fields.lastDisplayed = -1;
  EventInfoRaidRemainingCounter__UpdateLabelText(this, method);
}


void EventInfoRaidRemainingCounter__Initialization(
        EventInfoRaidRemainingCounter_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *bgSprite; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x2
  _BOOL8 RaidRemainingHpData; // x0
  __int64 v19; // x1
  int64_t beforeRemainingRaidHp; // x10
  __int64 afterRemainingRaidHp; // x20
  System_Math_c *v22; // x0
  int64_t lastPhaseEndDisplay; // x9
  __int64 v24; // x21
  double v25; // d0
  const MethodInfo *v26; // x0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  float realtimeSinceStartup; // s8
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  _BOOL4 isSpot; // w8
  EventInfoRemainingRaidHpData_o *remainingHpData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593A41B & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_19069/*"count_bg"*/);
    sub_21FFC50(&StringLiteral_19070/*"count_end_bg"*/);
    byte_593A41B = 1;
  }
  remainingHpData = 0;
  this->fields.eventUiEntity = entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( this->fields.isFixedMessage )
  {
    if ( this->fields.lastDisplayed == -1 )
    {
      bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      if ( UnityEngine_Object__op_Inequality(bgSprite, 0, 0) )
        EventInfoRaidRemainingCounter__SetupBackGroundSprite(this, (System_String_o *)StringLiteral_19070/*"count_end_bg"*/, v14);
      if ( this->fields.lastDisplayed )
      {
        if ( EventInfoRaidRemainingCounter__TrySetMessageLabels(this, v13) )
          this->fields.lastDisplayed = 0;
      }
    }
  }
  else
  {
    EventInfoRaidRemainingCounter__SetupBackGroundSprite(this, (System_String_o *)StringLiteral_19069/*"count_bg"*/, v11);
    v16 = EventInfoRaidRemainingCounter__TrySetMessageLabels(this, v15);
    RaidRemainingHpData = EventInfoRaidRemainingCounter__TryGetRaidRemainingHpData(
                            (EventInfoRaidRemainingCounter_o *)v16,
                            &remainingHpData,
                            v17);
    if ( RaidRemainingHpData )
    {
      if ( !remainingHpData )
        goto LABEL_23;
      beforeRemainingRaidHp = remainingHpData->fields.beforeRemainingRaidHp;
      afterRemainingRaidHp = remainingHpData->fields.afterRemainingRaidHp;
      v22 = System_Math_TypeInfo;
      lastPhaseEndDisplay = remainingHpData->fields.lastPhaseEndDisplay;
      this->fields.lastKnownBefore = beforeRemainingRaidHp;
      this->fields.lastKnownAfter = afterRemainingRaidHp;
      if ( lastPhaseEndDisplay <= 0 )
        v24 = beforeRemainingRaidHp;
      else
        v24 = lastPhaseEndDisplay;
      if ( !*(&v22->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v22, v19);
      v25 = System_Math__Max_76939908((double)v24, (double)afterRemainingRaidHp, 0);
      this->fields.currentDisplay = EventInfoRaidRemainingCounter__SafeRoundToLong(v25, v26);
      EventInfoRaidRemainingCounter__RecalculatePerSplitStep(this, v27);
      this->fields.lastDisplayed = -1;
      EventInfoRaidRemainingCounter__UpdateLabelText(this, v28);
      this->fields.splitPhaseCount = 0;
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
      this->fields.nextSplitRealtime = realtimeSinceStartup
                                     + EventInfoRaidRemainingCounter__get_SplitIntervalSeconds(this, v30);
      EventInfoRaidRemainingCounter__StartSplitPhase(this, v31);
      if ( !remainingHpData )
LABEL_23:
        sub_21FFECC(RaidRemainingHpData, v19);
      isSpot = this->fields.isSpot;
      this->fields.lastSeenUpdateRealtime = remainingHpData->fields.lastUpdateRealtime;
      if ( isSpot )
        ((void (__fastcall *)(EventInfoRaidRemainingCounter_o *, __int64, const MethodInfo *))this->klass->vtable._13_SwitchSpotState.methodPtr)(
          this,
          1,
          this->klass->vtable._13_SwitchSpotState.method);
    }
  }
}


bool EventInfoRaidRemainingCounter__IsPhaseActive(EventInfoRaidRemainingCounter_o *this, const MethodInfo *method)
{
  return this->fields.phaseEndRealtime > 0.0
      && UnityEngine_Time__get_realtimeSinceStartup(0) <= this->fields.phaseEndRealtime;
}


bool EventInfoRaidRemainingCounter__IsPhaseJustFinished(
        EventInfoRaidRemainingCounter_o *this,
        const MethodInfo *method)
{
  return this->fields.phaseEndRealtime > 0.0
      && UnityEngine_Time__get_realtimeSinceStartup(0) > this->fields.phaseEndRealtime;
}


void EventInfoRaidRemainingCounter__OnDestroy(EventInfoRaidRemainingCounter_o *this, const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_21FFECC(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0);
}


void EventInfoRaidRemainingCounter__RecalculatePerSplitStep(
        EventInfoRaidRemainingCounter_o *this,
        const MethodInfo *method)
{
  int64_t lastKnownAfter; // x8
  int64_t lastKnownBefore; // x9
  __int64 v5; // x20
  __int64 v6; // x9
  int64_t v7; // x8

  if ( (byte_593A41C & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593A41C = 1;
  }
  lastKnownBefore = this->fields.lastKnownBefore;
  lastKnownAfter = this->fields.lastKnownAfter;
  v5 = lastKnownAfter - lastKnownBefore;
  if ( lastKnownAfter == lastKnownBefore || this->fields.splitNum < 1 )
  {
    v7 = 0;
  }
  else
  {
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
    if ( v5 >= 0 )
      v6 = v5;
    else
      v6 = -v5;
    v7 = v6 / this->fields.splitNum;
    if ( v7 <= 1 )
      v7 = 1;
    if ( v5 <= 0 )
      v7 = -v7;
  }
  this->fields.perSplitStep = v7;
}


void EventInfoRaidRemainingCounter__RecalculatePerSplitStepForUpdateIntervalPlan(
        EventInfoRaidRemainingCounter_o *this,
        const MethodInfo *method)
{
  int64_t lastKnownAfter; // x8
  int64_t currentDisplay; // x9
  __int64 v5; // x20
  int64_t v6; // x8
  const MethodInfo *v7; // x1
  float realtimeSinceStartup; // s8
  TerminalPramsManager_c *v9; // x0
  struct EventInfoRemainingRaidHpData_o *RemainingRaidHpData_k__BackingField; // x8
  float v11; // s9
  const MethodInfo *v12; // x1
  float SplitIntervalSeconds; // s8
  float v14; // s8
  int v15; // w8
  float v16; // s8
  unsigned int v17; // w21
  __int64 v18; // x1
  int v19; // w8
  __int64 v20; // x9
  __int64 v21; // x8

  if ( (byte_593A421 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593A421 = 1;
  }
  lastKnownAfter = this->fields.lastKnownAfter;
  currentDisplay = this->fields.currentDisplay;
  v5 = lastKnownAfter - currentDisplay;
  if ( lastKnownAfter == currentDisplay )
  {
    v6 = 0;
  }
  else
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
    if ( !byte_59350E0 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_59350E0 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
      v9 = TerminalPramsManager_TypeInfo;
    }
    RemainingRaidHpData_k__BackingField = v9->static_fields->_RemainingRaidHpData_k__BackingField;
    if ( !RemainingRaidHpData_k__BackingField )
      sub_21FFECC(v9, v7);
    if ( (float)(RemainingRaidHpData_k__BackingField->fields.decreaseEndRealtime - realtimeSinceStartup) >= 0.0 )
      v11 = RemainingRaidHpData_k__BackingField->fields.decreaseEndRealtime - realtimeSinceStartup;
    else
      v11 = 0.0;
    SplitIntervalSeconds = 10.0;
    if ( EventInfoRaidRemainingCounter__get_SplitIntervalSeconds(this, v7) > 0.0 )
      SplitIntervalSeconds = EventInfoRaidRemainingCounter__get_SplitIntervalSeconds(this, v12);
    if ( !byte_5931FBB )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_5931FBB = 1;
    }
    v14 = v11 / SplitIntervalSeconds;
    if ( *(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    {
      v15 = vcvtps_s32_f32(v14);
      v16 = ceilf(v14);
      if ( v15 <= 1 )
        v17 = 1;
      else
        v17 = v15;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v12);
      v19 = vcvtps_s32_f32(v14);
      v16 = ceilf(v14);
      if ( v19 <= 1 )
        v17 = 1;
      else
        v17 = v19;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v18);
    }
    v20 = v17;
    if ( v5 >= 0 )
      v21 = v5;
    else
      v21 = -v5;
    if ( v16 == INFINITY )
      v20 = 1;
    v6 = v21 / v20;
    if ( v6 <= 1 )
      v6 = 1;
    if ( v5 <= 0 )
      v6 = -v6;
  }
  this->fields.perSplitStep = v6;
}


void EventInfoRaidRemainingCounter__Redisplay(EventInfoRaidRemainingCounter_o *this, const MethodInfo *method)
{
  this->fields.lastDisplayed = -1;
  EventInfoRaidRemainingCounter__UpdateLabelText(this, method);
}


int64_t EventInfoRaidRemainingCounter__SafeRoundToLong(double value, const MethodInfo *method)
{
  __int64 v2; // x1
  double v5; // d0
  double v6; // d0
  double v7; // d1
  double v8; // d1
  double iptr; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_593A41F & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593A41F = 1;
  }
  if ( (*(_QWORD *)&value & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FF0000000000000LL )
    return 0;
  if ( value >= 9.22337204e18 )
    return 0x7FFFFFFFFFFFFFFFLL;
  if ( value <= -9.22337204e18 )
    return 0x8000000000000000LL;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2);
  v5 = modf(value, &iptr);
  if ( value >= 0.0 )
  {
    if ( v5 == 0.5 )
    {
      v7 = 1.0;
      v6 = iptr;
LABEL_16:
      v8 = v6 + v7;
      if ( ((__int64)v6 & 1) != 0 )
        v6 = v8;
      goto LABEL_21;
    }
    v6 = floor(value + 0.5);
  }
  else
  {
    if ( v5 == -0.5 )
    {
      v6 = iptr;
      v7 = -1.0;
      goto LABEL_16;
    }
    v6 = ceil(value + -0.5);
  }
LABEL_21:
  if ( v6 == INFINITY )
    return 0x8000000000000000LL;
  else
    return (__int64)v6;
}


void EventInfoRaidRemainingCounter__SetFixedMessage(EventInfoRaidRemainingCounter_o *this, const MethodInfo *method)
{
  if ( this->fields.lastDisplayed )
  {
    if ( EventInfoRaidRemainingCounter__TrySetMessageLabels(this, method) )
      this->fields.lastDisplayed = 0;
  }
}


void EventInfoRaidRemainingCounter__SetupBackGroundSprite(
        EventInfoRaidRemainingCounter_o *this,
        System_String_o *bgName,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
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
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v21; // x22

  if ( (byte_593A423 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoRaidRemainingCounter___c__DisplayClass45_0__SetupBackGroundSprite_b__0__);
    sub_21FFC50(&EventInfoRaidRemainingCounter___c__DisplayClass45_0_TypeInfo);
    byte_593A423 = 1;
  }
  v5 = sub_21FFEBC(EventInfoRaidRemainingCounter___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = bgName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)bgName, v14, v15, v16, v17, v18, v19);
  eventUiEntity = this->fields.eventUiEntity;
  v21 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_EventInfoRaidRemainingCounter___c__DisplayClass45_0__SetupBackGroundSprite_b__0__,
    0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v21, 0);
}


void EventInfoRaidRemainingCounter__SnapToPhaseTarget(EventInfoRaidRemainingCounter_o *this, const MethodInfo *method)
{
  this->fields.currentDisplay = this->fields.phaseTargetValue;
  EventInfoRaidRemainingCounter__UpdateLabelText(this, method);
  *(_QWORD *)&this->fields.phaseStartRealtime = 0;
}


void EventInfoRaidRemainingCounter__StartSplitPhase(EventInfoRaidRemainingCounter_o *this, const MethodInfo *method)
{
  int64_t currentDisplay; // x23
  int64_t lastKnownAfter; // x22
  TerminalPramsManager_c *v5; // x0
  TerminalPramsManager_c *v6; // x0
  struct EventInfoRemainingRaidHpData_o *RemainingRaidHpData_k__BackingField; // x8
  int splitNum; // w8
  int64_t perSplitStep; // x9
  int64_t v10; // x8
  bool v11; // cc
  int64_t v12; // x9
  const MethodInfo *v13; // x1
  float realtimeSinceStartup; // s0
  float updatingPeriod; // s1
  TerminalPramsManager_c *v16; // x0
  int v17; // w8
  TerminalPramsManager_c *v18; // x0
  struct EventInfoRemainingRaidHpData_o *v19; // x8
  struct EventInfoRemainingRaidHpData_o *v20; // x8

  if ( (byte_593A41D & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593A41D = 1;
  }
  currentDisplay = this->fields.currentDisplay;
  lastKnownAfter = this->fields.lastKnownAfter;
  if ( currentDisplay != lastKnownAfter )
  {
    v5 = TerminalPramsManager_TypeInfo;
    ++this->fields.splitPhaseCount;
    if ( !*(&v5->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v5, method);
    if ( !byte_59350E0 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_59350E0 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      v6 = TerminalPramsManager_TypeInfo;
    }
    RemainingRaidHpData_k__BackingField = v6->static_fields->_RemainingRaidHpData_k__BackingField;
    if ( !RemainingRaidHpData_k__BackingField
      || !RemainingRaidHpData_k__BackingField->fields.isNeedSinglePhaseCountChange )
    {
      splitNum = this->fields.splitNum;
      if ( splitNum >= 1 && this->fields.splitPhaseCount < splitNum )
      {
        perSplitStep = this->fields.perSplitStep;
        v10 = this->fields.lastKnownAfter;
        v11 = perSplitStep < 1;
        v12 = perSplitStep + currentDisplay;
        if ( v11 )
        {
          if ( v12 <= v10 )
            lastKnownAfter = this->fields.lastKnownAfter;
          else
            lastKnownAfter = v12;
        }
        else if ( v12 >= v10 )
        {
          lastKnownAfter = this->fields.lastKnownAfter;
        }
        else
        {
          lastKnownAfter = v12;
        }
      }
    }
    this->fields.phaseStartValue = currentDisplay;
    this->fields.phaseTargetValue = lastKnownAfter;
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    updatingPeriod = this->fields.updatingPeriod;
    v16 = TerminalPramsManager_TypeInfo;
    this->fields.currentDisplay = currentDisplay;
    v17 = *(&v16->_2.cctor_finished + 1);
    this->fields.phaseStartRealtime = realtimeSinceStartup;
    this->fields.phaseEndRealtime = realtimeSinceStartup + updatingPeriod;
    if ( !v17 )
      j_il2cpp_runtime_class_init_0(v16, v13);
    if ( !byte_59350E0 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_59350E0 = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
      v18 = TerminalPramsManager_TypeInfo;
    }
    v19 = v18->static_fields->_RemainingRaidHpData_k__BackingField;
    if ( v19 )
    {
      v19->fields.lastPhaseEndDisplay = lastKnownAfter;
      if ( lastKnownAfter || this->fields.lastKnownBefore > 1 )
        goto LABEL_38;
      if ( !*(&v18->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v18, v13);
      if ( !byte_59350E0 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_59350E0 = 1;
      }
      v18 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
        v18 = TerminalPramsManager_TypeInfo;
      }
      v20 = v18->static_fields->_RemainingRaidHpData_k__BackingField;
      if ( v20 )
      {
        v20->fields.beforeRemainingRaidHp = 0;
LABEL_38:
        this->fields.lastDisplayed = -1;
        EventInfoRaidRemainingCounter__UpdateLabelText(this, v13);
        return;
      }
    }
    sub_21FFECC(v18, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoRaidRemainingCounter__SwitchSpotState(
        EventInfoRaidRemainingCounter_o *this,
        bool isOnSpot,
        const MethodInfo *method)
{
  bool v5; // w23
  UnityEngine_Object_c *v6; // x0
  UnityEngine_Object_o *bgSprite; // x21
  __int64 v8; // x1
  UnityEngine_Behaviour_o *v9; // x0
  UnityEngine_Object_o *countLabel; // x21
  struct UILabel_array *messageLabelList; // x21
  int max_length; // w8
  bool v13; // w20
  __int64 v14; // x22
  struct UnityEngine_GameObject_array *objectList; // x19
  il2cpp_array_size_t v16; // x8
  unsigned __int64 v17; // x21

  v5 = isOnSpot;
  if ( (byte_593A420 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A420 = 1;
  }
  v6 = UnityEngine_Object_TypeInfo;
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  this->fields.isSpot = v5;
  if ( !*(&v6->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v6, isOnSpot);
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0, 0) )
  {
    v9 = (UnityEngine_Behaviour_o *)this->fields.bgSprite;
    if ( !v9 )
      goto LABEL_26;
    UnityEngine_Behaviour__set_enabled(v9, !isOnSpot, 0);
  }
  countLabel = (UnityEngine_Object_o *)this->fields.countLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  v9 = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(countLabel, 0, 0);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v9 = (UnityEngine_Behaviour_o *)this->fields.countLabel;
    if ( !v9 )
      goto LABEL_26;
    UnityEngine_Behaviour__set_enabled(v9, !isOnSpot, 0);
  }
  messageLabelList = this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_26;
  max_length = messageLabelList->max_length;
  v13 = !isOnSpot;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( (unsigned int)v14 < max_length )
    {
      v9 = (UnityEngine_Behaviour_o *)messageLabelList->m_Items[v14];
      if ( !v9 )
        goto LABEL_26;
      UnityEngine_Behaviour__set_enabled(v9, v13, 0);
      max_length = messageLabelList->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_19;
    }
LABEL_25:
    sub_21FFED4(v9);
  }
LABEL_19:
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_26:
    sub_21FFECC(v9, v8);
  v16 = objectList->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0;
    while ( v17 < (unsigned int)v16 )
    {
      GameObjectHelper__SetActiveSafely(objectList->m_Items[v17], v13, 0);
      LODWORD(v16) = objectList->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        return;
    }
    goto LABEL_25;
  }
}


bool EventInfoRaidRemainingCounter__TryGetRaidRemainingHpData(
        EventInfoRaidRemainingCounter_o *this,
        EventInfoRemainingRaidHpData_o **remainingHpData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  EventInfoRemainingRaidHpData_o *RemainingRaidHpData_k__BackingField; // x1
  __int64 v11; // x1
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  TerminalPramsManager_c *v20; // x0
  EventInfoRemainingRaidHpData_o *v21; // x1

  if ( (byte_593A425 & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593A425 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, remainingHpData);
  if ( !byte_59350E0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59350E0 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, remainingHpData);
    v9 = TerminalPramsManager_TypeInfo;
  }
  RemainingRaidHpData_k__BackingField = v9->static_fields->_RemainingRaidHpData_k__BackingField;
  *remainingHpData = RemainingRaidHpData_k__BackingField;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)remainingHpData,
    (int32_t)RemainingRaidHpData_k__BackingField,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( *remainingHpData )
    return 1;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
  TerminalPramsManager__LoadRaidRemainingCount(0);
  if ( !byte_59350E0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59350E0 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
    v20 = TerminalPramsManager_TypeInfo;
  }
  v21 = v20->static_fields->_RemainingRaidHpData_k__BackingField;
  *remainingHpData = v21;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)remainingHpData, (int32_t)v21, v14, v15, v16, v17, v18, v19);
  return *remainingHpData != 0;
}


bool EventInfoRaidRemainingCounter__TrySetMessageLabels(
        EventInfoRaidRemainingCounter_o *this,
        const MethodInfo *method)
{
  EventInfoRaidRemainingCounter_o *v2; // x19
  struct UILabel_array *messageLabelList; // x8
  bool v4; // w24
  __int64 v5; // x23
  unsigned __int64 v6; // x25
  struct System_String_array *formatKeyList; // x9
  unsigned __int64 max_length_low; // x10
  System_String_o *v9; // x20
  System_String_o *resultText; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_593A422 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    this = (EventInfoRaidRemainingCounter_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A422 = 1;
  }
  messageLabelList = v2->fields.messageLabelList;
  resultText = 0;
  if ( !messageLabelList )
LABEL_18:
    sub_21FFECC(this, method);
  v4 = 0;
  v5 = 4;
  while ( 1 )
  {
    v6 = v5 - 4;
    if ( v5 - 4 >= SLODWORD(messageLabelList->max_length) )
      return v4;
    formatKeyList = v2->fields.formatKeyList;
    if ( !formatKeyList )
      goto LABEL_18;
    max_length_low = LODWORD(formatKeyList->max_length);
    if ( (__int64)v6 < (int)max_length_low )
    {
      if ( v6 >= max_length_low )
        goto LABEL_20;
      v9 = (System_String_o *)*((_QWORD *)&formatKeyList->obj.klass + v5);
      if ( v9 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
        this = (EventInfoRaidRemainingCounter_o *)LocalizationManager__TryGet(
                                                    &resultText,
                                                    v9,
                                                    (System_String_o *)StringLiteral_1/*""*/,
                                                    0);
        messageLabelList = v2->fields.messageLabelList;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !messageLabelList )
            goto LABEL_18;
          if ( v6 >= LODWORD(messageLabelList->max_length) )
LABEL_20:
            sub_21FFED4(this);
          this = (EventInfoRaidRemainingCounter_o *)*((_QWORD *)&messageLabelList->obj.klass + v5);
          if ( !this )
            goto LABEL_18;
          UILabel__set_text((UILabel_o *)this, resultText, 0);
          messageLabelList = v2->fields.messageLabelList;
          v4 = 1;
        }
      }
    }
    ++v5;
    if ( !messageLabelList )
      goto LABEL_18;
  }
}


void EventInfoRaidRemainingCounter__Update(EventInfoRaidRemainingCounter_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float phaseEndRealtime; // s1
  const MethodInfo *v5; // x1
  float realtimeSinceStartup; // s0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  float v9; // s0
  float nextSplitRealtime; // s8
  const MethodInfo *v11; // x1

  if ( this->fields.isFixedMessage )
  {
    if ( this->fields.lastDisplayed )
    {
      if ( EventInfoRaidRemainingCounter__TrySetMessageLabels(this, method) )
        this->fields.lastDisplayed = 0;
    }
  }
  else
  {
    EventInfoRaidRemainingCounter__AddCountDataForQAA(this, method);
    EventInfoRaidRemainingCounter__DetectExternalValueChange(this, v3);
    phaseEndRealtime = this->fields.phaseEndRealtime;
    if ( phaseEndRealtime > 0.0
      && (realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0),
          phaseEndRealtime = this->fields.phaseEndRealtime,
          realtimeSinceStartup <= phaseEndRealtime) )
    {
      EventInfoRaidRemainingCounter__UpdatePhaseInterpolation(this, v5);
    }
    else if ( phaseEndRealtime > 0.0 && UnityEngine_Time__get_realtimeSinceStartup(0) > this->fields.phaseEndRealtime )
    {
      this->fields.currentDisplay = this->fields.phaseTargetValue;
      EventInfoRaidRemainingCounter__UpdateLabelText(this, v7);
      *(_QWORD *)&this->fields.phaseStartRealtime = 0;
    }
    v9 = UnityEngine_Time__get_realtimeSinceStartup(0);
    nextSplitRealtime = this->fields.nextSplitRealtime;
    if ( v9 >= nextSplitRealtime && this->fields.currentDisplay != this->fields.lastKnownAfter )
    {
      this->fields.nextSplitRealtime = nextSplitRealtime
                                     + EventInfoRaidRemainingCounter__get_SplitIntervalSeconds(this, v8);
      EventInfoRaidRemainingCounter__StartSplitPhase(this, v11);
    }
  }
}


void EventInfoRaidRemainingCounter__UpdateLabelText(EventInfoRaidRemainingCounter_o *this, const MethodInfo *method)
{
  int64_t currentDisplay; // x8
  UILabel_o *countLabel; // x21
  System_String_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_593A41E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9604/*"N0"*/);
    byte_593A41E = 1;
  }
  currentDisplay = this->fields.currentDisplay;
  if ( !this->fields.isSpot )
  {
    if ( currentDisplay == this->fields.lastDisplayed )
      return;
    countLabel = this->fields.countLabel;
    v5 = System_Int64__ToString_76930560(
           (int64_t)&this->fields.currentDisplay,
           (System_String_o *)StringLiteral_9604/*"N0"*/,
           0);
    if ( !countLabel )
      sub_21FFECC(v5, v6);
    UILabel__set_text(countLabel, v5, 0);
    currentDisplay = this->fields.currentDisplay;
  }
  this->fields.lastDisplayed = currentDisplay;
}


void EventInfoRaidRemainingCounter__UpdatePhaseInterpolation(
        EventInfoRaidRemainingCounter_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x0
  float realtimeSinceStartup; // s0
  float v5; // s2
  int64_t phaseStartValue; // x8
  int64_t phaseTargetValue; // x9
  float v8; // s0
  float v9; // s1
  bool v10; // nf
  double v11; // d0
  double v12; // d1
  double v13; // d2
  const MethodInfo *v14; // x1

  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
  v5 = 0.0;
  phaseStartValue = this->fields.phaseStartValue;
  phaseTargetValue = this->fields.phaseTargetValue;
  v8 = (float)(realtimeSinceStartup - this->fields.phaseStartRealtime) / this->fields.updatingPeriod;
  v9 = 1.0;
  if ( v8 <= 1.0 )
    v9 = v8;
  v10 = v8 < 0.0;
  v11 = (double)phaseTargetValue;
  if ( !v10 )
    v5 = v9;
  v12 = (double)phaseStartValue;
  v13 = (v11 - (double)phaseStartValue) * v5 + (double)phaseStartValue;
  if ( phaseTargetValue > phaseStartValue )
  {
    if ( v13 <= v11 )
      v11 = v13;
    if ( v11 >= v12 )
      goto LABEL_14;
LABEL_13:
    v11 = (double)phaseStartValue;
    goto LABEL_14;
  }
  if ( v13 >= v11 )
    v11 = v13;
  if ( v11 > v12 )
    goto LABEL_13;
LABEL_14:
  this->fields.currentDisplay = EventInfoRaidRemainingCounter__SafeRoundToLong(v11, v3);
  EventInfoRaidRemainingCounter__UpdateLabelText(this, v14);
}


void EventInfoRaidRemainingCounter___AddCountDataForQAA_b__46_0(
        EventInfoRaidRemainingCounter_o *this,
        const MethodInfo *method)
{
  EventInfoRaidRemainingCounter_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w19

  v2 = this;
  if ( (byte_593A426 & 1) == 0 )
  {
    this = (EventInfoRaidRemainingCounter_o *)sub_21FFC50(&TitleInfoControl_TypeInfo);
    byte_593A426 = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_21FFECC(this, method);
  eventId = eventUiEntity->fields.eventId;
  if ( !*(&TitleInfoControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, method);
  TitleInfoControl__AddCountRaidRemainingHp(eventId, 1, 0);
}


float EventInfoRaidRemainingCounter__get_SplitIntervalSeconds(
        EventInfoRaidRemainingCounter_o *this,
        const MethodInfo *method)
{
  int32_t splitNum; // w8
  BalanceConfig_c *v4; // x0

  if ( (byte_593A41A & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_593A41A = 1;
  }
  splitNum = this->fields.splitNum;
  if ( splitNum < 1 )
    return 10.0;
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v4 = BalanceConfig_TypeInfo;
    splitNum = this->fields.splitNum;
  }
  return (float)v4->static_fields->RequestRaidUpdateEventMap / (float)splitNum;
}


void EventInfoRaidRemainingCounter___c__DisplayClass45_0___ctor(
        EventInfoRaidRemainingCounter___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoRaidRemainingCounter___c__DisplayClass45_0___SetupBackGroundSprite_b__0(
        EventInfoRaidRemainingCounter___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase_o *_4__this; // x0
  struct EventUiEntity_o *assetData; // x8
  struct EventInfoRaidRemainingCounter_o *v5; // x8

  _4__this = (EventInfoUIBase_o *)this->fields.__4__this;
  if ( !_4__this
    || (assetData = (struct EventUiEntity_o *)_4__this[2].fields.assetData) == 0
    || (EventInfoUIBase__LoadLocalAtlas(_4__this, assetData->fields.eventId, 0),
        (_4__this = (EventInfoUIBase_o *)this->fields.__4__this) == 0)
    || (_4__this = (EventInfoUIBase_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                          _4__this,
                                          (UISprite_o *)_4__this[1].fields.m_CancellationTokenSource,
                                          this->fields.bgName,
                                          0),
        (v5 = this->fields.__4__this) == 0)
    || (_4__this = (EventInfoUIBase_o *)v5->fields.bgSprite) == 0 )
  {
    sub_21FFECC(_4__this, method);
  }
  (*(void (__fastcall **)(EventInfoUIBase_o *, size_t))&_4__this->klass[1]._2.cctor_finished)(
    _4__this,
    _4__this->klass[1]._2.cctor_thread);
}