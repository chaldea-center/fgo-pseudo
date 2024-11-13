// local variable allocation has failed, the output may be wrong!
void __fastcall DisplayEffectInheritData___ctor(
        DisplayEffectInheritData_o *this,
        float interval,
        bool isSetNextPossibleTime,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v8; // x1
  __int64 v9; // x2
  bool v10; // w22
  System_Collections_Generic_Dictionary_int__float__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B186DE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__float___ctor__, isSetNextPossibleTime, method);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v8, v9);
    byte_4B186DE = 1;
  }
  v10 = isSetNextPossibleTime;
  v11 = (System_Collections_Generic_Dictionary_int__float__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__float__TypeInfo,
                                                                 isSetNextPossibleTime,
                                                                 method,
                                                                 v4);
  System_Collections_Generic_Dictionary_int__float____ctor(
    v11,
    (const MethodInfo_320B378 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
  this->fields.popTiming = v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  this->fields.isSetNextPossibleTime = 1;
  this->fields._SideEffectTotalTime_k__BackingField = 1.25;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._EffectInterval_k__BackingField = interval;
  this->fields.isSetNextPossibleTime = v10;
}


void __fastcall DisplayEffectInheritData__ChangeIntervalMatchCond(
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
    v5 = ((__int64 (__fastcall *)(struct ChangeEffectIntervalProcess_o *, BattleActionData_BaseData_array *, void *))changeIntervalProc->klass->vtable._4_IsMatchCond.method)(
           changeIntervalProc,
           actBaseDataArray,
           changeIntervalProc->klass[1]._1.image);
    if ( (v5 & 1) != 0 )
    {
      v7 = this->fields.changeIntervalProc;
      if ( !v7 )
        sub_1BCAA3C(v5, v6);
      this->fields._EffectInterval_k__BackingField = v7->fields._Interval_k__BackingField;
    }
  }
}


float __fastcall DisplayEffectInheritData__GetMaxInterval(DisplayEffectInheritData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_Dictionary_int__float__o *popTiming; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_4B186E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__float__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__float__get_Values__, v4, v5);
    byte_4B186E0 = 1;
  }
  popTiming = this->fields.popTiming;
  if ( !popTiming )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__float___get_Count(
         popTiming,
         (const MethodInfo_320B9F8 *)Method_System_Collections_Generic_Dictionary_int__float__get_Count__) >= 1 )
  {
    popTiming = this->fields.popTiming;
    if ( popTiming )
    {
      Values = System_Collections_Generic_Dictionary_int__float___get_Values(
                 popTiming,
                 (const MethodInfo_320BB58 *)Method_System_Collections_Generic_Dictionary_int__float__get_Values__);
      return System_Linq_Enumerable__Max_64625536((System_Collections_Generic_IEnumerable_float__o *)Values, 0LL);
    }
LABEL_8:
    sub_1BCAA3C(popTiming, method);
  }
  return 0.0;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall DisplayEffectInheritData__GetNextEffectDelay(
        DisplayEffectInheritData_o *this,
        int32_t targetId,
        BattleServantData_o *svtData,
        int32_t delayNum,
        bool isSetInterval,
        bool isSetNextTime,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_Dictionary_int__float__o *popTiming; // x0
  bool v18; // w0
  float v19; // s0
  float EffectInterval_k__BackingField; // s0
  float time; // s0
  float value; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B186DF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__float__TryGetValue__, *(_QWORD *)&targetId, svtData);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__float__set_Item__, v15, v16);
    byte_4B186DF = 1;
  }
  value = 0.0;
  popTiming = this->fields.popTiming;
  if ( !popTiming )
    goto LABEL_17;
  v18 = System_Collections_Generic_Dictionary_int__float___TryGetValue(
          popTiming,
          targetId,
          &value,
          (const MethodInfo_320D3F0 *)Method_System_Collections_Generic_Dictionary_int__float__TryGetValue__);
  if ( svtData )
  {
    if ( !v18 )
    {
      v19 = fmaxf(svtData->fields.nextPossibleTimePopEffect - UnityEngine_Time__get_time(0LL), 0.0);
      value = v19;
      if ( delayNum )
      {
        if ( v19 == 0.0 )
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
    (const MethodInfo_320BD30 *)Method_System_Collections_Generic_Dictionary_int__float__set_Item__);
  if ( svtData && isSetNextTime && this->fields.isSetNextPossibleTime )
  {
    time = UnityEngine_Time__get_time(0LL);
    popTiming = this->fields.popTiming;
    if ( popTiming )
    {
      svtData->fields.nextPossibleTimePopEffect = time
                                                + System_Collections_Generic_Dictionary_int__float___get_Item(
                                                    popTiming,
                                                    targetId,
                                                    (const MethodInfo_320BCA8 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
      return value;
    }
LABEL_17:
    sub_1BCAA3C(popTiming, *(_QWORD *)&targetId);
  }
  return value;
}


void __fastcall DisplayEffectInheritData__SetChangeEffectIntervalProcess(
        DisplayEffectInheritData_o *this,
        ChangeEffectIntervalProcess_o *changeProc,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.changeIntervalProc = changeProc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.changeIntervalProc,
    (int64_t)changeProc,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


DisplayEffectInheritData_o *__fastcall DisplayEffectInheritData__SetSideEffectTotalTime(
        DisplayEffectInheritData_o *this,
        float time,
        const MethodInfo *method)
{
  this->fields._SideEffectTotalTime_k__BackingField = time;
  return this;
}


float __fastcall DisplayEffectInheritData__get_EffectInterval(
        DisplayEffectInheritData_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectInterval_k__BackingField;
}


float __fastcall DisplayEffectInheritData__get_SideEffectTotalTime(
        DisplayEffectInheritData_o *this,
        const MethodInfo *method)
{
  return this->fields._SideEffectTotalTime_k__BackingField;
}


void __fastcall DisplayEffectInheritData__set_EffectInterval(
        DisplayEffectInheritData_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._EffectInterval_k__BackingField = value;
}


void __fastcall DisplayEffectInheritData__set_SideEffectTotalTime(
        DisplayEffectInheritData_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._SideEffectTotalTime_k__BackingField = value;
}