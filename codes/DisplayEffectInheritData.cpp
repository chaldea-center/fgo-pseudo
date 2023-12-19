// local variable allocation has failed, the output may be wrong!
void __fastcall DisplayEffectInheritData___ctor(
        DisplayEffectInheritData_o *this,
        float interval,
        bool isSetNextPossibleTime,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_int__float__o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40FBCDD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__float___ctor__, isSetNextPossibleTime);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v9);
    byte_40FBCDD = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__float__o *)sub_B170CC(
                                                                 System_Collections_Generic_Dictionary_int__float__TypeInfo,
                                                                 isSetNextPossibleTime,
                                                                 method,
                                                                 v4,
                                                                 v5);
  System_Collections_Generic_Dictionary_int__float____ctor(
    v10,
    (const MethodInfo_2DEC454 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
  this->fields.popTiming = v10;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
  this->fields.isSetNextPossibleTime = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._EffectInterval_k__BackingField = interval;
  this->fields.isSetNextPossibleTime = isSetNextPossibleTime;
}


float __fastcall DisplayEffectInheritData__GetMaxInterval(DisplayEffectInheritData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__float__o *popTiming; // x0
  System_Collections_Generic_Dictionary_int__float__o *v5; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_40FBCDF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__float__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__float__get_Values__, v3);
    byte_40FBCDF = 1;
  }
  popTiming = this->fields.popTiming;
  if ( !popTiming )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__float___get_Count(
         popTiming,
         (const MethodInfo_2DECC00 *)Method_System_Collections_Generic_Dictionary_int__float__get_Count__) >= 1 )
  {
    v5 = this->fields.popTiming;
    if ( v5 )
    {
      Values = System_Collections_Generic_Dictionary_int__float___get_Values(
                 v5,
                 (const MethodInfo_2DECDA8 *)Method_System_Collections_Generic_Dictionary_int__float__get_Values__);
      return System_Linq_Enumerable__Max_40255376((System_Collections_Generic_IEnumerable_float__o *)Values, 0LL);
    }
LABEL_8:
    sub_B170D4();
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
  float nextPossibleTimePopEffect; // s8
  float time; // s0
  float v19; // s0
  float EffectInterval_k__BackingField; // s0
  System_Collections_Generic_Dictionary_int__float__o *v21; // x0
  float v22; // s0
  System_Collections_Generic_Dictionary_int__float__o *v23; // x0
  float value; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FBCDE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__float__TryGetValue__, *(_QWORD *)&targetId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__float__set_Item__, v14);
    byte_40FBCDE = 1;
  }
  value = 0.0;
  popTiming = this->fields.popTiming;
  if ( !popTiming )
    goto LABEL_18;
  v16 = System_Collections_Generic_Dictionary_int__float___TryGetValue(
          popTiming,
          targetId,
          &value,
          (const MethodInfo_2DEEC20 *)Method_System_Collections_Generic_Dictionary_int__float__TryGetValue__);
  if ( svtData )
  {
    if ( !v16 )
    {
      nextPossibleTimePopEffect = svtData->fields.nextPossibleTimePopEffect;
      time = UnityEngine_Time__get_time(0LL);
      v19 = UnityEngine_Mathf__Max(0.0, nextPossibleTimePopEffect - time, 0LL);
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
  v21 = this->fields.popTiming;
  if ( !v21 )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__float___set_Item(
    v21,
    targetId,
    EffectInterval_k__BackingField + value,
    (const MethodInfo_2DECFD8 *)Method_System_Collections_Generic_Dictionary_int__float__set_Item__);
  if ( svtData && this->fields.isSetNextPossibleTime && isSetNextTime )
  {
    v22 = UnityEngine_Time__get_time(0LL);
    v23 = this->fields.popTiming;
    if ( v23 )
    {
      svtData->fields.nextPossibleTimePopEffect = v22
                                                + System_Collections_Generic_Dictionary_int__float___get_Item(
                                                    v23,
                                                    targetId,
                                                    (const MethodInfo_2DECF40 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
      return value;
    }
LABEL_18:
    sub_B170D4();
  }
  return value;
}


float __fastcall DisplayEffectInheritData__get_EffectInterval(
        DisplayEffectInheritData_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectInterval_k__BackingField;
}


void __fastcall DisplayEffectInheritData__set_EffectInterval(
        DisplayEffectInheritData_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._EffectInterval_k__BackingField = value;
}