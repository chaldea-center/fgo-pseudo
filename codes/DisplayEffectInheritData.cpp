void __fastcall DisplayEffectInheritData___ctor(
        DisplayEffectInheritData_o *this,
        float interval,
        bool isSetNextPossibleTime,
        const MethodInfo *method)
{
  __int64 v4; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_int__float__o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EA9BB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__float___ctor__,
      isSetNextPossibleTime,
      (_DWORD)method,
      v4);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v8, v9, v10);
    byte_42EA9BB = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__float__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__float__TypeInfo);
  System_Collections_Generic_Dictionary_int__float____ctor(
    v11,
    (const MethodInfo_2F3515C *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
  this->fields.popTiming = v11;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
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
        sub_B5D69C(v5, v6);
      this->fields._EffectInterval_k__BackingField = v7->fields._Interval_k__BackingField;
    }
  }
}


float __fastcall DisplayEffectInheritData__GetMaxInterval(DisplayEffectInheritData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_int__float__o *popTiming; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_42EA9BD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__float__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__float__get_Values__, v5, v6, v7);
    byte_42EA9BD = 1;
  }
  popTiming = this->fields.popTiming;
  if ( !popTiming )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__float___get_Count(
         popTiming,
         (const MethodInfo_2F35908 *)Method_System_Collections_Generic_Dictionary_int__float__get_Count__) >= 1 )
  {
    popTiming = this->fields.popTiming;
    if ( popTiming )
    {
      Values = System_Collections_Generic_Dictionary_int__float___get_Values(
                 popTiming,
                 (const MethodInfo_2F35AB0 *)Method_System_Collections_Generic_Dictionary_int__float__get_Values__);
      return System_Linq_Enumerable__Max_41211464((System_Collections_Generic_IEnumerable_float__o *)Values, 0LL);
    }
LABEL_8:
    sub_B5D69C(popTiming, method);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Collections_Generic_Dictionary_int__float__o *popTiming; // x0
  bool v20; // w0
  float nextPossibleTimePopEffect; // s8
  float time; // s0
  float v23; // s0
  float EffectInterval_k__BackingField; // s0
  float v25; // s0
  float value; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42EA9BC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__float__TryGetValue__,
      targetId,
      (_DWORD)svtData,
      *(_QWORD *)&delayNum);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__float__set_Item__, v16, v17, v18);
    byte_42EA9BC = 1;
  }
  value = 0.0;
  popTiming = this->fields.popTiming;
  if ( !popTiming )
    goto LABEL_18;
  v20 = System_Collections_Generic_Dictionary_int__float___TryGetValue(
          popTiming,
          targetId,
          &value,
          (const MethodInfo_2F37928 *)Method_System_Collections_Generic_Dictionary_int__float__TryGetValue__);
  if ( svtData )
  {
    if ( !v20 )
    {
      nextPossibleTimePopEffect = svtData->fields.nextPossibleTimePopEffect;
      time = UnityEngine_Time__get_time(0LL);
      v23 = UnityEngine_Mathf__Max(0.0, nextPossibleTimePopEffect - time, 0LL);
      value = v23;
      if ( delayNum )
      {
        if ( v23 == 0.0 )
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
    (const MethodInfo_2F35CE0 *)Method_System_Collections_Generic_Dictionary_int__float__set_Item__);
  if ( svtData && this->fields.isSetNextPossibleTime && isSetNextTime )
  {
    v25 = UnityEngine_Time__get_time(0LL);
    popTiming = this->fields.popTiming;
    if ( popTiming )
    {
      svtData->fields.nextPossibleTimePopEffect = v25
                                                + System_Collections_Generic_Dictionary_int__float___get_Item(
                                                    popTiming,
                                                    targetId,
                                                    (const MethodInfo_2F35C48 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
      return value;
    }
LABEL_18:
    sub_B5D69C(popTiming, *(_QWORD *)&targetId);
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
  sub_B5D560(
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