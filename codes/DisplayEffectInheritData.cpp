void __fastcall DisplayEffectInheritData___ctor(
        DisplayEffectInheritData_o *this,
        float interval,
        bool isSetNextPossibleTime,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__float__o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_43537DF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__float___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__float__TypeInfo);
    byte_43537DF = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__float__o *)sub_B70764(System_Collections_Generic_Dictionary_int__float__TypeInfo);
  System_Collections_Generic_Dictionary_int__float____ctor(
    v7,
    (const MethodInfo_2FC9600 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
  this->fields.popTiming = v7;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  this->fields.isSetNextPossibleTime = 1;
  this->fields._SideEffectTotalTime_k__BackingField = 1.25;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._EffectInterval_k__BackingField = interval;
  this->fields.isSetNextPossibleTime = isSetNextPossibleTime;
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
        sub_B7076C(v5, v6);
      this->fields._EffectInterval_k__BackingField = v7->fields._Interval_k__BackingField;
    }
  }
}


float __fastcall DisplayEffectInheritData__GetMaxInterval(DisplayEffectInheritData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__float__o *popTiming; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_43537E1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__float__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__float__get_Values__);
    byte_43537E1 = 1;
  }
  popTiming = this->fields.popTiming;
  if ( !popTiming )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__float___get_Count(
         popTiming,
         (const MethodInfo_2FC9DAC *)Method_System_Collections_Generic_Dictionary_int__float__get_Count__) >= 1 )
  {
    popTiming = this->fields.popTiming;
    if ( popTiming )
    {
      Values = System_Collections_Generic_Dictionary_int__float___get_Values(
                 popTiming,
                 (const MethodInfo_2FC9F54 *)Method_System_Collections_Generic_Dictionary_int__float__get_Values__);
      return System_Linq_Enumerable__Max_41037928((System_Collections_Generic_IEnumerable_float__o *)Values, 0LL);
    }
LABEL_8:
    sub_B7076C(popTiming, method);
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
  System_Collections_Generic_Dictionary_int__float__o *popTiming; // x0
  bool v14; // w0
  float nextPossibleTimePopEffect; // s8
  float time; // s0
  float v17; // s0
  float EffectInterval_k__BackingField; // s0
  float v19; // s0
  float value; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_43537E0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__float__TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__float__set_Item__);
    byte_43537E0 = 1;
  }
  value = 0.0;
  popTiming = this->fields.popTiming;
  if ( !popTiming )
    goto LABEL_18;
  v14 = System_Collections_Generic_Dictionary_int__float___TryGetValue(
          popTiming,
          targetId,
          &value,
          (const MethodInfo_2FCBDCC *)Method_System_Collections_Generic_Dictionary_int__float__TryGetValue__);
  if ( svtData )
  {
    if ( !v14 )
    {
      nextPossibleTimePopEffect = svtData->fields.nextPossibleTimePopEffect;
      time = UnityEngine_Time__get_time(0LL);
      v17 = UnityEngine_Mathf__Max(0.0, nextPossibleTimePopEffect - time, 0LL);
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
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__float___set_Item(
    popTiming,
    targetId,
    EffectInterval_k__BackingField + value,
    (const MethodInfo_2FCA184 *)Method_System_Collections_Generic_Dictionary_int__float__set_Item__);
  if ( svtData && this->fields.isSetNextPossibleTime && isSetNextTime )
  {
    v19 = UnityEngine_Time__get_time(0LL);
    popTiming = this->fields.popTiming;
    if ( popTiming )
    {
      svtData->fields.nextPossibleTimePopEffect = v19
                                                + System_Collections_Generic_Dictionary_int__float___get_Item(
                                                    popTiming,
                                                    targetId,
                                                    (const MethodInfo_2FCA0EC *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
      return value;
    }
LABEL_18:
    sub_B7076C(popTiming, *(_QWORD *)&targetId);
  }
  return value;
}


void __fastcall DisplayEffectInheritData__SetChangeEffectIntervalProcess(
        DisplayEffectInheritData_o *this,
        ChangeEffectIntervalProcess_o *changeProc,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.changeIntervalProc = changeProc;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.changeIntervalProc,
    (System_Int32_array **)changeProc,
    (System_String_array **)method,
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