// local variable allocation has failed, the output may be wrong!
void __fastcall DisplayEffectInheritData___ctor(
        DisplayEffectInheritData_o *this,
        float interval,
        bool isSetNextPossibleTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  bool v8; // w22
  System_Collections_Generic_Dictionary_int__float__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A0B0CD & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__float___ctor__, isSetNextPossibleTime);
    sub_1B686D4(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v7);
    byte_4A0B0CD = 1;
  }
  v8 = isSetNextPossibleTime;
  v9 = (System_Collections_Generic_Dictionary_int__float__o *)sub_1B68920(System_Collections_Generic_Dictionary_int__float__TypeInfo);
  System_Collections_Generic_Dictionary_int__float____ctor(
    v9,
    (const MethodInfo_3139504 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
  this->fields.popTiming = v9;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v9, v10, v11);
  this->fields.isSetNextPossibleTime = 1;
  this->fields._SideEffectTotalTime_k__BackingField = 1.25;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._EffectInterval_k__BackingField = interval;
  this->fields.isSetNextPossibleTime = v8;
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
        sub_1B68930(v5, v6);
      this->fields._EffectInterval_k__BackingField = v7->fields._Interval_k__BackingField;
    }
  }
}


float __fastcall DisplayEffectInheritData__GetMaxInterval(DisplayEffectInheritData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__float__o *popTiming; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_4A0B0CF & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__float__get_Count__, method);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__float__get_Values__, v3);
    byte_4A0B0CF = 1;
  }
  popTiming = this->fields.popTiming;
  if ( !popTiming )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__float___get_Count(
         popTiming,
         (const MethodInfo_3139B84 *)Method_System_Collections_Generic_Dictionary_int__float__get_Count__) >= 1 )
  {
    popTiming = this->fields.popTiming;
    if ( popTiming )
    {
      Values = System_Collections_Generic_Dictionary_int__float___get_Values(
                 popTiming,
                 (const MethodInfo_3139CE4 *)Method_System_Collections_Generic_Dictionary_int__float__get_Values__);
      return System_Linq_Enumerable__Max_63643340((System_Collections_Generic_IEnumerable_float__o *)Values, 0LL);
    }
LABEL_8:
    sub_1B68930(popTiming, method);
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
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_int__float__o *popTiming; // x0
  bool v16; // w0
  float v17; // s0
  float EffectInterval_k__BackingField; // s0
  float time; // s0
  float value; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A0B0CE & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__float__TryGetValue__, *(_QWORD *)&targetId);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v13);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__float__set_Item__, v14);
    byte_4A0B0CE = 1;
  }
  value = 0.0;
  popTiming = this->fields.popTiming;
  if ( !popTiming )
    goto LABEL_17;
  v16 = System_Collections_Generic_Dictionary_int__float___TryGetValue(
          popTiming,
          targetId,
          &value,
          (const MethodInfo_313B57C *)Method_System_Collections_Generic_Dictionary_int__float__TryGetValue__);
  if ( svtData )
  {
    if ( !v16 )
    {
      v17 = fmaxf(svtData->fields.nextPossibleTimePopEffect - UnityEngine_Time__get_time(0LL), 0.0);
      value = v17;
      if ( delayNum )
      {
        if ( v17 == 0.0 )
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
    (const MethodInfo_3139EBC *)Method_System_Collections_Generic_Dictionary_int__float__set_Item__);
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
                                                    (const MethodInfo_3139E34 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
      return value;
    }
LABEL_17:
    sub_1B68930(popTiming, *(_QWORD *)&targetId);
  }
  return value;
}


void __fastcall DisplayEffectInheritData__SetChangeEffectIntervalProcess(
        DisplayEffectInheritData_o *this,
        ChangeEffectIntervalProcess_o *changeProc,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.changeIntervalProc = changeProc;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.changeIntervalProc,
    (int32_t)changeProc,
    (int32_t)method,
    v3);
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