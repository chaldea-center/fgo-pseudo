void DisplayEffectInheritData___ctor(
        DisplayEffectInheritData_o *this,
        float interval,
        bool isSetNextPossibleTime,
        const MethodInfo *method)
{
  bool v7; // w22
  System_Collections_Generic_Dictionary_int__float__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2F269 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__float___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__float__TypeInfo);
    byte_4D2F269 = 1;
  }
  v7 = isSetNextPossibleTime;
  v8 = (System_Collections_Generic_Dictionary_int__float__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__float__TypeInfo);
  System_Collections_Generic_Dictionary_int__float____ctor(
    v8,
    (const MethodInfo_34D2A9C *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
  this->fields.popTiming = v8;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  this->fields.isSetNextPossibleTime = 1;
  this->fields._SideEffectTotalTime_k__BackingField = 1.25;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._EffectInterval_k__BackingField = interval;
  this->fields.isSetNextPossibleTime = v7;
}


void DisplayEffectInheritData__ChangeIntervalMatchCond(
        DisplayEffectInheritData_o *this,
        BattleActionData_BaseData_array *actBaseDataArray,
        const MethodInfo *method)
{
  struct ChangeEffectIntervalProcess_o *changeIntervalProc; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ChangeEffectIntervalProcess_o *v7; // x8

  changeIntervalProc = this->fields.changeIntervalProc;
  if ( changeIntervalProc )
  {
    v5 = ((__int64 (__fastcall *)(struct ChangeEffectIntervalProcess_o *, BattleActionData_BaseData_array *, const MethodInfo *))changeIntervalProc->klass->vtable._4_IsMatchCond.methodPtr)(
           changeIntervalProc,
           actBaseDataArray,
           changeIntervalProc->klass->vtable._4_IsMatchCond.method);
    if ( (v5 & 1) != 0 )
    {
      v7 = this->fields.changeIntervalProc;
      if ( !v7 )
        sub_1C942F0(v5, v6);
      this->fields._EffectInterval_k__BackingField = v7->fields._Interval_k__BackingField;
    }
  }
}


float DisplayEffectInheritData__GetMaxInterval(DisplayEffectInheritData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__float__o *popTiming; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_4D2F26B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__float__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__float__get_Values__);
    byte_4D2F26B = 1;
  }
  popTiming = this->fields.popTiming;
  if ( !popTiming )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__float___get_Count(
         popTiming,
         (const MethodInfo_34D311C *)Method_System_Collections_Generic_Dictionary_int__float__get_Count__) >= 1 )
  {
    popTiming = this->fields.popTiming;
    if ( popTiming )
    {
      Values = System_Collections_Generic_Dictionary_int__float___get_Values(
                 popTiming,
                 (const MethodInfo_34D327C *)Method_System_Collections_Generic_Dictionary_int__float__get_Values__);
      return System_Linq_Enumerable__Max_67419480((System_Collections_Generic_IEnumerable_float__o *)Values, 0);
    }
LABEL_8:
    sub_1C942F0(popTiming, method);
  }
  return 0.0;
}


// local variable allocation has failed, the output may be wrong!
float DisplayEffectInheritData__GetNextEffectDelay(
        DisplayEffectInheritData_o *this,
        int32_t targetId,
        BattleServantData_o *svtData,
        int32_t delayNum,
        bool isSetInterval,
        bool isSetNextTime,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__float__o *popTiming; // x0
  bool v14; // w0
  float v15; // s0
  float EffectInterval_k__BackingField; // s0
  float time; // s0
  float value; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2F26A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__float__TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__float__set_Item__);
    byte_4D2F26A = 1;
  }
  value = 0.0;
  popTiming = this->fields.popTiming;
  if ( !popTiming )
    goto LABEL_17;
  v14 = System_Collections_Generic_Dictionary_int__float___TryGetValue(
          popTiming,
          targetId,
          &value,
          (const MethodInfo_34D4B14 *)Method_System_Collections_Generic_Dictionary_int__float__TryGetValue__);
  if ( svtData )
  {
    if ( !v14 )
    {
      v15 = fmaxf(svtData->fields.nextPossibleTimePopEffect - UnityEngine_Time__get_time(0), 0.0);
      value = v15;
      if ( delayNum )
      {
        if ( v15 == 0.0 )
          value = (float)delayNum / 1000.0;
      }
    }
  }
  EffectInterval_k__BackingField = 0.0;
  if ( isSetInterval )
    EffectInterval_k__BackingField = this->fields._EffectInterval_k__BackingField;
  popTiming = this->fields.popTiming;
  if ( !popTiming )
    goto LABEL_17;
  System_Collections_Generic_Dictionary_int__float___set_Item(
    popTiming,
    targetId,
    EffectInterval_k__BackingField + value,
    (const MethodInfo_34D3454 *)Method_System_Collections_Generic_Dictionary_int__float__set_Item__);
  if ( svtData && isSetNextTime && this->fields.isSetNextPossibleTime )
  {
    time = UnityEngine_Time__get_time(0);
    popTiming = this->fields.popTiming;
    if ( popTiming )
    {
      svtData->fields.nextPossibleTimePopEffect = time
                                                + System_Collections_Generic_Dictionary_int__float___get_Item(
                                                    popTiming,
                                                    targetId,
                                                    (const MethodInfo_34D33CC *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
      return value;
    }
LABEL_17:
    sub_1C942F0(popTiming, *(_QWORD *)&targetId);
  }
  return value;
}


void DisplayEffectInheritData__SetChangeEffectIntervalProcess(
        DisplayEffectInheritData_o *this,
        ChangeEffectIntervalProcess_o *changeProc,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.changeIntervalProc = changeProc;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.changeIntervalProc,
    (int32_t)changeProc,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


DisplayEffectInheritData_o *DisplayEffectInheritData__SetIsNotShowProcess(
        DisplayEffectInheritData_o *this,
        bool isNotShowEffectProcess,
        const MethodInfo *method)
{
  this->fields._IsNotShowEffectProcess_k__BackingField = isNotShowEffectProcess;
  return this;
}


DisplayEffectInheritData_o *DisplayEffectInheritData__SetSideEffectTotalTime(
        DisplayEffectInheritData_o *this,
        float time,
        const MethodInfo *method)
{
  this->fields._SideEffectTotalTime_k__BackingField = time;
  return this;
}


float DisplayEffectInheritData__get_EffectInterval(DisplayEffectInheritData_o *this, const MethodInfo *method)
{
  return this->fields._EffectInterval_k__BackingField;
}


bool DisplayEffectInheritData__get_IsNotShowEffectProcess(DisplayEffectInheritData_o *this, const MethodInfo *method)
{
  return this->fields._IsNotShowEffectProcess_k__BackingField;
}


float DisplayEffectInheritData__get_SideEffectTotalTime(DisplayEffectInheritData_o *this, const MethodInfo *method)
{
  return this->fields._SideEffectTotalTime_k__BackingField;
}


void DisplayEffectInheritData__set_EffectInterval(
        DisplayEffectInheritData_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._EffectInterval_k__BackingField = value;
}


void DisplayEffectInheritData__set_IsNotShowEffectProcess(
        DisplayEffectInheritData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNotShowEffectProcess_k__BackingField = value;
}


void DisplayEffectInheritData__set_SideEffectTotalTime(
        DisplayEffectInheritData_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._SideEffectTotalTime_k__BackingField = value;
}