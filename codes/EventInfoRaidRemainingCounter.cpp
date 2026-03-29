void EventInfoRaidRemainingCounter___ctor(EventInfoRaidRemainingCounter_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.splitNum = 0x404000000000000CLL;
  this->fields.qaaDelayDisplaySecond = 1.0;
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

  if ( (byte_4D31E6A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventInfoRaidRemainingCounter__AddCountDataForQAA_b__48_0__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D31E6A = 1;
  }
  if ( this->fields.eventUiEntity )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2D4CA )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D4CA = 1;
    }
    v3 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v3 = TerminalPramsManager_TypeInfo;
    }
    RemainingRaidHpData_k__BackingField = v3->static_fields->_RemainingRaidHpData_k__BackingField;
    if ( RemainingRaidHpData_k__BackingField && RemainingRaidHpData_k__BackingField->fields.isAddDataForQAA )
    {
      if ( !v3->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v3);
      if ( !byte_4D2D4CA )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2D4CA = 1;
      }
      v5 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v5 = TerminalPramsManager_TypeInfo;
      }
      v6 = v5->static_fields->_RemainingRaidHpData_k__BackingField;
      if ( !v6 )
        sub_1C93D2C(v5, method);
      v6->fields.isAddDataForQAA = 0;
      qaaDelayDisplaySecond = this->fields.qaaDelayDisplaySecond;
      v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v8,
        (Il2CppObject *)this,
        Method_EventInfoRaidRemainingCounter__AddCountDataForQAA_b__48_0__,
        0);
      v9 = BasicHelper__DelayCall(qaaDelayDisplaySecond, v8, 1, 0);
      UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v9, 0);
    }
  }
}


int64_t EventInfoRaidRemainingCounter__CalcNextPhaseTarget(
        EventInfoRaidRemainingCounter_o *this,
        const MethodInfo *method)
{
  int64_t perSplitStep; // x8
  int32_t splitNum; // w9
  bool v4; // vf
  int32_t v5; // w9
  int64_t lastKnownAfter; // x9
  bool v7; // nf
  int64_t v8; // x8

  perSplitStep = this->fields.perSplitStep;
  if ( !perSplitStep )
    return this->fields.lastKnownAfter;
  splitNum = this->fields.splitNum;
  v4 = __OFSUB__(splitNum, 1);
  v5 = splitNum - 1;
  if ( v5 < 0 != v4 || this->fields.splitPhaseCount >= v5 )
    return this->fields.lastKnownAfter;
  lastKnownAfter = this->fields.lastKnownAfter;
  v4 = __OFSUB__(perSplitStep, 1);
  v7 = perSplitStep - 1 < 0;
  v8 = this->fields.currentDisplay - perSplitStep;
  if ( v7 != v4 )
  {
    if ( v8 >= lastKnownAfter )
      return v8;
    else
      return this->fields.lastKnownAfter;
  }
  else if ( v8 <= lastKnownAfter )
  {
    return v8;
  }
  else
  {
    return this->fields.lastKnownAfter;
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
  int64_t currentDisplay; // x20
  float phaseEndRealtime; // s0
  __int64 v10; // x8
  float realtimeSinceStartup; // s0
  int64_t v12; // x20
  const MethodInfo *v13; // x1
  int64_t PhaseTarget; // x0
  const MethodInfo *v15; // x3
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
      this->fields.lastSeenUpdateRealtime = v7;
      currentDisplay = this->fields.currentDisplay;
      *(_OWORD *)&this->fields.lastKnownBefore = *(_OWORD *)((char *)&off_18 + (_QWORD)v6);
      phaseEndRealtime = this->fields.phaseEndRealtime;
      this->fields.decreaseEndRealtime = *(float *)((char *)&qword_28 + (_QWORD)v6 + 4);
      if ( phaseEndRealtime <= 0.0 )
        goto LABEL_7;
      if ( UnityEngine_Time__get_realtimeSinceStartup(0) <= this->fields.phaseEndRealtime )
      {
LABEL_9:
        this->fields.currentDisplay = currentDisplay;
        EventInfoRaidRemainingCounter__RecalculatePerSplitStepForUpdateIntervalPlan(this, v5);
        this->fields.splitPhaseCount = 0;
        realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
        v12 = this->fields.currentDisplay;
        this->fields.nextSplitRealtime = realtimeSinceStartup;
        PhaseTarget = EventInfoRaidRemainingCounter__CalcNextPhaseTarget(this, v13);
        EventInfoRaidRemainingCounter__StartSplitPhase(this, v12, PhaseTarget, v15);
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
      sub_1C93D2C(RaidRemainingHpData, v5);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2
  UnityEngine_Object_o *bgSprite; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x2
  _BOOL8 RaidRemainingHpData; // x0
  __int64 v18; // x1
  EventInfoRemainingRaidHpData_o *v19; // x8
  int64_t beforeRemainingRaidHp; // x9
  int64_t afterRemainingRaidHp; // x20
  __int64 lastPhaseEndDisplay; // x8
  __int64 v23; // x21
  double v24; // d0
  const MethodInfo *v25; // x0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  float realtimeSinceStartup; // s8
  const MethodInfo *v29; // x1
  float SplitIntervalSeconds; // s0
  int64_t currentDisplay; // x20
  const MethodInfo *v32; // x1
  int64_t PhaseTarget; // x0
  const MethodInfo *v34; // x3
  _BOOL4 isSpot; // w8
  EventInfoRemainingRaidHpData_o *remainingHpData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D31E61 & 1) == 0 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_18441/*"count_bg"*/);
    sub_1C93AD4(&StringLiteral_18442/*"count_end_bg"*/);
    byte_4D31E61 = 1;
  }
  remainingHpData = 0;
  this->fields.eventUiEntity = entity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)entity,
    (int32_t)method,
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(bgSprite, 0, 0) )
        EventInfoRaidRemainingCounter__SetupBackGroundSprite(this, (System_String_o *)StringLiteral_18442/*"count_end_bg"*/, v13);
      if ( this->fields.lastDisplayed )
      {
        if ( EventInfoRaidRemainingCounter__TrySetMessageLabels(this, v12) )
          this->fields.lastDisplayed = 0;
      }
    }
  }
  else
  {
    EventInfoRaidRemainingCounter__SetupBackGroundSprite(this, (System_String_o *)StringLiteral_18441/*"count_bg"*/, v10);
    v15 = EventInfoRaidRemainingCounter__TrySetMessageLabels(this, v14);
    RaidRemainingHpData = EventInfoRaidRemainingCounter__TryGetRaidRemainingHpData(
                            (EventInfoRaidRemainingCounter_o *)v15,
                            &remainingHpData,
                            v16);
    if ( RaidRemainingHpData )
    {
      v19 = remainingHpData;
      if ( !remainingHpData )
        goto LABEL_23;
      beforeRemainingRaidHp = remainingHpData->fields.beforeRemainingRaidHp;
      this->fields.lastKnownBefore = beforeRemainingRaidHp;
      afterRemainingRaidHp = v19->fields.afterRemainingRaidHp;
      this->fields.lastKnownAfter = afterRemainingRaidHp;
      lastPhaseEndDisplay = v19->fields.lastPhaseEndDisplay;
      if ( lastPhaseEndDisplay <= 0 )
        v23 = beforeRemainingRaidHp;
      else
        v23 = lastPhaseEndDisplay;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v24 = System_Math__Max_65947496((double)v23, (double)afterRemainingRaidHp, 0);
      this->fields.currentDisplay = EventInfoRaidRemainingCounter__SafeRoundToLong(v24, v25);
      EventInfoRaidRemainingCounter__RecalculatePerSplitStep(this, v26);
      this->fields.lastDisplayed = -1;
      EventInfoRaidRemainingCounter__UpdateLabelText(this, v27);
      this->fields.splitPhaseCount = 0;
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
      SplitIntervalSeconds = EventInfoRaidRemainingCounter__get_SplitIntervalSeconds(this, v29);
      currentDisplay = this->fields.currentDisplay;
      this->fields.nextSplitRealtime = realtimeSinceStartup + SplitIntervalSeconds;
      PhaseTarget = EventInfoRaidRemainingCounter__CalcNextPhaseTarget(this, v32);
      EventInfoRaidRemainingCounter__StartSplitPhase(this, currentDisplay, PhaseTarget, v34);
      this->fields.decreaseEndRealtime = 0.0;
      if ( !remainingHpData )
LABEL_23:
        sub_1C93D2C(RaidRemainingHpData, v18);
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
    sub_1C93D2C(this, method);
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
  int32_t splitNum; // w8
  __int64 v7; // x9
  int64_t v8; // x8

  if ( (byte_4D31E62 & 1) == 0 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D31E62 = 1;
  }
  lastKnownBefore = this->fields.lastKnownBefore;
  lastKnownAfter = this->fields.lastKnownAfter;
  v5 = lastKnownAfter - lastKnownBefore;
  if ( lastKnownAfter == lastKnownBefore || (splitNum = this->fields.splitNum, splitNum < 1) )
  {
    v8 = 0;
  }
  else
  {
    if ( !System_Math_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      splitNum = this->fields.splitNum;
    }
    if ( v5 >= 0 )
      v7 = v5;
    else
      v7 = -v5;
    v8 = v7 / splitNum;
    if ( v8 <= 1 )
      v8 = 1;
    if ( v5 <= 0 )
      v8 = -v8;
  }
  this->fields.perSplitStep = v8;
}


void EventInfoRaidRemainingCounter__RecalculatePerSplitStepForUpdateIntervalPlan(
        EventInfoRaidRemainingCounter_o *this,
        const MethodInfo *method)
{
  int64_t lastKnownAfter; // x8
  int64_t currentDisplay; // x9
  __int64 v5; // x20
  const MethodInfo *v6; // x1
  float realtimeSinceStartup; // s8
  TerminalPramsManager_c *v8; // x0
  struct EventInfoRemainingRaidHpData_o *RemainingRaidHpData_k__BackingField; // x8
  float v10; // s9
  const MethodInfo *v11; // x1
  float SplitIntervalSeconds; // s8
  float v13; // s9
  System_Math_c *v14; // x0
  float v15; // s8
  uint32_t cctor_finished; // w8
  unsigned int v17; // w10
  int v18; // w9
  unsigned int v19; // w21
  unsigned __int64 v20; // x9
  int64_t v21; // x8

  if ( (byte_4D31E67 & 1) == 0 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D31E67 = 1;
  }
  lastKnownAfter = this->fields.lastKnownAfter;
  currentDisplay = this->fields.currentDisplay;
  v5 = lastKnownAfter - currentDisplay;
  if ( lastKnownAfter == currentDisplay )
  {
    v21 = 0;
  }
  else
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2D4CA )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D4CA = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    RemainingRaidHpData_k__BackingField = v8->static_fields->_RemainingRaidHpData_k__BackingField;
    if ( !RemainingRaidHpData_k__BackingField )
      sub_1C93D2C(v8, v6);
    v10 = RemainingRaidHpData_k__BackingField->fields.decreaseEndRealtime - realtimeSinceStartup;
    SplitIntervalSeconds = 10.0;
    if ( EventInfoRaidRemainingCounter__get_SplitIntervalSeconds(this, v6) > 0.0 )
      SplitIntervalSeconds = EventInfoRaidRemainingCounter__get_SplitIntervalSeconds(this, v11);
    v13 = fmaxf(v10, 0.0);
    if ( !byte_4D2A7BA )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A7BA = 1;
    }
    v14 = System_Math_TypeInfo;
    v15 = v13 / SplitIntervalSeconds;
    cctor_finished = System_Math_TypeInfo->_2.cctor_finished;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v14 = System_Math_TypeInfo;
      cctor_finished = System_Math_TypeInfo->_2.cctor_finished;
    }
    v17 = vcvtps_s32_f32(v15);
    if ( ceilf(v15) == INFINITY )
      v18 = 0x80000000;
    else
      v18 = v17;
    if ( v18 <= 1 )
      v19 = 1;
    else
      v19 = v18;
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(v14);
    if ( v5 >= 0 )
      v20 = v5;
    else
      v20 = -v5;
    v21 = v20 / v19;
    if ( v20 < v19 )
      v21 = 1;
    if ( v5 <= 0 )
      v21 = -v21;
  }
  this->fields.perSplitStep = v21;
}


void EventInfoRaidRemainingCounter__Redisplay(EventInfoRaidRemainingCounter_o *this, const MethodInfo *method)
{
  this->fields.lastDisplayed = -1;
  EventInfoRaidRemainingCounter__UpdateLabelText(this, method);
}


int64_t EventInfoRaidRemainingCounter__SafeRoundToLong(double value, const MethodInfo *method)
{
  double v4; // d0
  double v5; // d0
  double v6; // d1
  double v7; // d1
  double iptr; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4D31E65 & 1) == 0 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D31E65 = 1;
  }
  if ( (*(_QWORD *)&value & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FF0000000000000LL )
    return 0;
  if ( value >= 9.22337204e18 )
    return 0x7FFFFFFFFFFFFFFFLL;
  if ( value <= -9.22337204e18 )
    return 0x8000000000000000LL;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v4 = modf(value, &iptr);
  if ( value >= 0.0 )
  {
    if ( v4 == 0.5 )
    {
      v5 = iptr;
      v6 = 1.0;
LABEL_16:
      v7 = v5 + v6;
      if ( ((__int64)v5 & 1) != 0 )
        v5 = v7;
      goto LABEL_21;
    }
    v5 = floor(value + 0.5);
  }
  else
  {
    if ( v4 == -0.5 )
    {
      v5 = iptr;
      v6 = -1.0;
      goto LABEL_16;
    }
    v5 = ceil(value + -0.5);
  }
LABEL_21:
  if ( v5 == INFINITY )
    return 0x8000000000000000LL;
  else
    return (__int64)v5;
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
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v21; // x22

  if ( (byte_4D31E69 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventInfoRaidRemainingCounter___c__DisplayClass47_0__SetupBackGroundSprite_b__0__);
    sub_1C93AD4(&EventInfoRaidRemainingCounter___c__DisplayClass47_0_TypeInfo);
    byte_4D31E69 = 1;
  }
  v5 = sub_1C93D20(EventInfoRaidRemainingCounter___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = bgName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)bgName, v14, v15, v16, v17, v18, v19);
  eventUiEntity = this->fields.eventUiEntity;
  v21 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_EventInfoRaidRemainingCounter___c__DisplayClass47_0__SetupBackGroundSprite_b__0__,
    0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v21, 0);
}


void EventInfoRaidRemainingCounter__SnapToPhaseTarget(EventInfoRaidRemainingCounter_o *this, const MethodInfo *method)
{
  this->fields.currentDisplay = this->fields.phaseTargetValue;
  EventInfoRaidRemainingCounter__UpdateLabelText(this, method);
  *(_QWORD *)&this->fields.phaseStartRealtime = 0;
}


void EventInfoRaidRemainingCounter__StartSplitPhase(
        EventInfoRaidRemainingCounter_o *this,
        int64_t startValue,
        int64_t targetValue,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v7; // x0
  struct EventInfoRemainingRaidHpData_o *RemainingRaidHpData_k__BackingField; // x8
  int64_t lastKnownAfter; // x21
  float decreaseEndRealtime; // s8
  float realtimeSinceStartup; // s0
  int64_t perSplitStep; // x24
  int64_t v13; // x8
  int64_t v14; // x9
  int64_t v15; // x25
  double v16; // d0
  double v17; // d1
  const MethodInfo *v18; // x0
  double v19; // d0
  float v20; // s0
  float updatingPeriod; // s1
  struct EventInfoRemainingRaidHpData_o *v22; // x8
  struct EventInfoRemainingRaidHpData_o *v23; // x8

  if ( (byte_4D31E63 & 1) == 0 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D31E63 = 1;
  }
  if ( startValue != targetValue )
  {
    ++this->fields.splitPhaseCount;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2D4CA )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D4CA = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    RemainingRaidHpData_k__BackingField = v7->static_fields->_RemainingRaidHpData_k__BackingField;
    if ( RemainingRaidHpData_k__BackingField )
    {
      if ( RemainingRaidHpData_k__BackingField->fields.isNeedSinglePhaseCountChange )
      {
        lastKnownAfter = this->fields.lastKnownAfter;
      }
      else
      {
        decreaseEndRealtime = this->fields.decreaseEndRealtime;
        realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
        perSplitStep = this->fields.perSplitStep;
        if ( decreaseEndRealtime <= realtimeSinceStartup )
        {
          v15 = this->fields.lastKnownAfter;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v16 = (double)targetValue;
          v17 = (double)v15;
          v19 = perSplitStep < 1 ? System_Math__Max_65947496(v16, v17, 0) : System_Math__Min_65947824(v16, v17, 0);
          lastKnownAfter = EventInfoRaidRemainingCounter__SafeRoundToLong(v19, v18);
        }
        else
        {
          v13 = this->fields.lastKnownAfter;
          v14 = perSplitStep + startValue;
          if ( perSplitStep < 1 )
            lastKnownAfter = v14 >= v13 ? perSplitStep + startValue : this->fields.lastKnownAfter;
          else
            lastKnownAfter = v14 <= v13 ? perSplitStep + startValue : this->fields.lastKnownAfter;
        }
      }
      this->fields.phaseStartValue = startValue;
      this->fields.phaseTargetValue = lastKnownAfter;
      v20 = UnityEngine_Time__get_realtimeSinceStartup(0);
      updatingPeriod = this->fields.updatingPeriod;
      this->fields.currentDisplay = startValue;
      this->fields.phaseStartRealtime = v20;
      this->fields.phaseEndRealtime = v20 + updatingPeriod;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D2D4CA )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2D4CA = 1;
      }
      v7 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v7 = TerminalPramsManager_TypeInfo;
      }
      v22 = v7->static_fields->_RemainingRaidHpData_k__BackingField;
      if ( v22 )
      {
        v22->fields.lastPhaseEndDisplay = lastKnownAfter;
        if ( lastKnownAfter || this->fields.lastKnownBefore > 1 )
          goto LABEL_44;
        if ( !v7->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v7);
        if ( !byte_4D2D4CA )
        {
          sub_1C93AD4(&TerminalPramsManager_TypeInfo);
          byte_4D2D4CA = 1;
        }
        v7 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v7 = TerminalPramsManager_TypeInfo;
        }
        v23 = v7->static_fields->_RemainingRaidHpData_k__BackingField;
        if ( v23 )
        {
          v23->fields.beforeRemainingRaidHp = 0;
LABEL_44:
          this->fields.lastDisplayed = -1;
          EventInfoRaidRemainingCounter__UpdateLabelText(this, (const MethodInfo *)startValue);
          return;
        }
      }
    }
    sub_1C93D2C(v7, startValue);
  }
}


void EventInfoRaidRemainingCounter__SwitchSpotState(
        EventInfoRaidRemainingCounter_o *this,
        bool isOnSpot,
        const MethodInfo *method)
{
  bool v5; // w21
  UnityEngine_Object_o *bgSprite; // x21
  __int64 v7; // x1
  UnityEngine_Behaviour_o *v8; // x0
  UnityEngine_Object_o *countLabel; // x21
  struct UILabel_array *messageLabelList; // x21
  int max_length; // w8
  bool v12; // w20
  unsigned int v13; // w22
  struct UnityEngine_GameObject_array *objectList; // x19
  il2cpp_array_size_t v15; // x8
  unsigned __int64 v16; // x21

  v5 = isOnSpot;
  if ( (byte_4D31E66 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D31E66 = 1;
  }
  this->fields.isSpot = v5;
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0, 0) )
  {
    v8 = (UnityEngine_Behaviour_o *)this->fields.bgSprite;
    if ( !v8 )
      goto LABEL_26;
    UnityEngine_Behaviour__set_enabled(v8, !isOnSpot, 0);
  }
  countLabel = (UnityEngine_Object_o *)this->fields.countLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(countLabel, 0, 0);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v8 = (UnityEngine_Behaviour_o *)this->fields.countLabel;
    if ( !v8 )
      goto LABEL_26;
    UnityEngine_Behaviour__set_enabled(v8, !isOnSpot, 0);
  }
  messageLabelList = this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_26;
  max_length = messageLabelList->max_length;
  v12 = !isOnSpot;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( v13 < max_length )
    {
      v8 = (UnityEngine_Behaviour_o *)messageLabelList->m_Items[v13];
      if ( !v8 )
        goto LABEL_26;
      UnityEngine_Behaviour__set_enabled(v8, v12, 0);
      max_length = messageLabelList->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_19;
    }
LABEL_25:
    sub_1C93D34(v8);
  }
LABEL_19:
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_26:
    sub_1C93D2C(v8, v7);
  v15 = objectList->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0;
    while ( v16 < (unsigned int)v15 )
    {
      GameObjectHelper__SetActiveSafely(objectList->m_Items[v16], v12, 0);
      LODWORD(v15) = objectList->max_length;
      if ( (__int64)++v16 >= (int)v15 )
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  EventInfoRemainingRaidHpData_o *RemainingRaidHpData_k__BackingField; // x1
  EventInfoRemainingRaidHpData_o *v11; // x8
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  TerminalPramsManager_c *v18; // x0
  EventInfoRemainingRaidHpData_o *v19; // x1

  if ( (byte_4D31E6B & 1) == 0 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D31E6B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2D4CA )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D4CA = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  RemainingRaidHpData_k__BackingField = v9->static_fields->_RemainingRaidHpData_k__BackingField;
  *remainingHpData = RemainingRaidHpData_k__BackingField;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)remainingHpData,
    (int32_t)RemainingRaidHpData_k__BackingField,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = *remainingHpData;
  if ( !*remainingHpData )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__LoadRaidRemainingCount(0);
    if ( !byte_4D2D4CA )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D4CA = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    v19 = v18->static_fields->_RemainingRaidHpData_k__BackingField;
    *remainingHpData = v19;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)remainingHpData, (int32_t)v19, v12, v13, v14, v15, v16, v17);
    v11 = *remainingHpData;
  }
  return v11 != 0;
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
  struct System_String_array *formatKeyList; // x8
  unsigned __int64 max_length_low; // x9
  System_String_o *v9; // x20
  struct UILabel_array *v10; // x8
  System_String_o *resultText; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4D31E68 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    this = (EventInfoRaidRemainingCounter_o *)sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D31E68 = 1;
  }
  resultText = 0;
  messageLabelList = v2->fields.messageLabelList;
  if ( !messageLabelList )
LABEL_18:
    sub_1C93D2C(this, method);
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
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (EventInfoRaidRemainingCounter_o *)LocalizationManager__TryGet(
                                                    &resultText,
                                                    v9,
                                                    (System_String_o *)StringLiteral_1/*""*/,
                                                    0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v10 = v2->fields.messageLabelList;
          if ( !v10 )
            goto LABEL_18;
          if ( v6 >= LODWORD(v10->max_length) )
LABEL_20:
            sub_1C93D34(this);
          this = (EventInfoRaidRemainingCounter_o *)*((_QWORD *)&v10->obj.klass + v5);
          if ( !this )
            goto LABEL_18;
          UILabel__set_text((UILabel_o *)this, resultText, 0);
          v4 = 1;
        }
      }
    }
    messageLabelList = v2->fields.messageLabelList;
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
  float SplitIntervalSeconds; // s0
  int64_t currentDisplay; // x20
  const MethodInfo *v13; // x1
  int64_t PhaseTarget; // x2
  const MethodInfo *v15; // x3

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
      SplitIntervalSeconds = EventInfoRaidRemainingCounter__get_SplitIntervalSeconds(this, v8);
      currentDisplay = this->fields.currentDisplay;
      this->fields.nextSplitRealtime = nextSplitRealtime + SplitIntervalSeconds;
      PhaseTarget = EventInfoRaidRemainingCounter__CalcNextPhaseTarget(this, v13);
      EventInfoRaidRemainingCounter__StartSplitPhase(this, currentDisplay, PhaseTarget, v15);
    }
  }
}


void EventInfoRaidRemainingCounter__UpdateLabelText(EventInfoRaidRemainingCounter_o *this, const MethodInfo *method)
{
  int64_t currentDisplay; // x8
  UILabel_o *countLabel; // x21
  System_String_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_4D31E64 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9286/*"N0"*/);
    byte_4D31E64 = 1;
  }
  currentDisplay = this->fields.currentDisplay;
  if ( !this->fields.isSpot )
  {
    if ( currentDisplay == this->fields.lastDisplayed )
      return;
    countLabel = this->fields.countLabel;
    v5 = System_Int64__ToString_65939396(
           (int64_t)&this->fields.currentDisplay,
           (System_String_o *)StringLiteral_9286/*"N0"*/,
           0);
    if ( !countLabel )
      sub_1C93D2C(v5, v6);
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
  int64_t phaseStartValue; // x8
  int64_t phaseTargetValue; // x9
  float v7; // s0
  float v8; // s2
  bool v9; // nf
  double v10; // d1
  double v11; // d0
  double v12; // d2
  const MethodInfo *v13; // x1

  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
  phaseStartValue = this->fields.phaseStartValue;
  phaseTargetValue = this->fields.phaseTargetValue;
  v7 = (float)(realtimeSinceStartup - this->fields.phaseStartRealtime) / this->fields.updatingPeriod;
  v8 = fminf(v7, 1.0);
  v9 = v7 < 0.0;
  v10 = (double)phaseStartValue;
  v11 = (double)phaseTargetValue;
  if ( v9 )
    v8 = 0.0;
  v12 = (v11 - v10) * v8 + v10;
  if ( phaseTargetValue > phaseStartValue )
  {
    if ( v12 <= v11 )
      v11 = v12;
    if ( v11 >= v10 )
      goto LABEL_13;
LABEL_12:
    v11 = (double)phaseStartValue;
    goto LABEL_13;
  }
  if ( v12 >= v11 )
    v11 = v12;
  if ( v11 > v10 )
    goto LABEL_12;
LABEL_13:
  this->fields.currentDisplay = EventInfoRaidRemainingCounter__SafeRoundToLong(v11, v3);
  EventInfoRaidRemainingCounter__UpdateLabelText(this, v13);
}


void EventInfoRaidRemainingCounter___AddCountDataForQAA_b__48_0(
        EventInfoRaidRemainingCounter_o *this,
        const MethodInfo *method)
{
  EventInfoRaidRemainingCounter_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w19

  v2 = this;
  if ( (byte_4D31E6C & 1) == 0 )
  {
    this = (EventInfoRaidRemainingCounter_o *)sub_1C93AD4(&TitleInfoControl_TypeInfo);
    byte_4D31E6C = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C93D2C(this, method);
  eventId = eventUiEntity->fields.eventId;
  if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
  TitleInfoControl__AddCountRaidRemainingHp(eventId, 1, 0);
}


float EventInfoRaidRemainingCounter__get_SplitIntervalSeconds(
        EventInfoRaidRemainingCounter_o *this,
        const MethodInfo *method)
{
  int32_t splitNum; // w8
  BalanceConfig_c *v4; // x0

  if ( (byte_4D31E60 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D31E60 = 1;
  }
  splitNum = this->fields.splitNum;
  if ( splitNum < 1 )
    return 10.0;
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
    splitNum = this->fields.splitNum;
  }
  return (float)v4->static_fields->RequestRaidUpdateEventMap / (float)splitNum;
}


void EventInfoRaidRemainingCounter___c__DisplayClass47_0___ctor(
        EventInfoRaidRemainingCounter___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoRaidRemainingCounter___c__DisplayClass47_0___SetupBackGroundSprite_b__0(
        EventInfoRaidRemainingCounter___c__DisplayClass47_0_o *this,
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
    sub_1C93D2C(_4__this, method);
  }
  (*(void (__fastcall **)(EventInfoUIBase_o *, size_t))&_4__this->klass[1]._2.cctor_finished)(
    _4__this,
    _4__this->klass[1]._2.cctor_thread);
}