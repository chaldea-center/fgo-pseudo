void __fastcall TreasureDeviceSequenceWeightEntity___ctor(
        TreasureDeviceSequenceWeightEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB87A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FB87A = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDeviceSequenceWeightEntity__CreatePK(
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  if ( (byte_40FB879 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&limitCount);
    byte_40FB879 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           treasureDeviceId,
           limitCount,
           npChargeStage,
           (const MethodInfo_18C25C8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall TreasureDeviceSequenceWeightEntity__CreatePrimaryKey(
        TreasureDeviceSequenceWeightEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return TreasureDeviceSequenceWeightEntity__CreatePK(
           this->fields.treasureDeviceId,
           this->fields.limitCount,
           this->fields.npChargeStage,
           v2);
}


System_Tuple_int__int__o *__fastcall TreasureDeviceSequenceWeightEntity__GetSeqIdAndGroupSeqId(
        TreasureDeviceSequenceWeightEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WeightRate_int__o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Int32_array *targetSeqIds; // x8
  __int64 v19; // x21
  unsigned __int64 max_length; // x10
  unsigned __int64 v21; // x11
  struct System_Int32_array *weights; // x9
  int32_t v23; // w0
  int32_t Data; // w0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct System_Int32_array *groupSeqIds; // x8
  int32_t v30; // w20
  int32_t v31; // w0
  int32_t v32; // w19
  System_Tuple_int__int__o *v33; // x21

  if ( (byte_40FB878 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, method);
    sub_B16FFC(&Method_BasicHelper_IndexValue_int____66807072, v6);
    sub_B16FFC(&Method_System_Tuple_int__int___ctor__, v7);
    sub_B16FFC(&System_Tuple_int__int__TypeInfo, v8);
    sub_B16FFC(&Method_WeightRate_int___ctor__, v9);
    sub_B16FFC(&Method_WeightRate_int__getData__, v10);
    sub_B16FFC(&Method_WeightRate_int__getTotalWeight__, v11);
    sub_B16FFC(&Method_WeightRate_int__setWeight__, v12);
    sub_B16FFC(&WeightRate_int__TypeInfo, v13);
    byte_40FB878 = 1;
  }
  v14 = (WeightRate_int__o *)sub_B170CC(WeightRate_int__TypeInfo, method, v2, v3, v4);
  WeightRate_int____ctor(v14, (const MethodInfo_2ADD274 *)Method_WeightRate_int___ctor__);
  targetSeqIds = this->fields.targetSeqIds;
  if ( !targetSeqIds )
    goto LABEL_18;
  v19 = 8LL;
  while ( 1 )
  {
    max_length = targetSeqIds->max_length;
    v21 = v19 - 8;
    if ( v19 - 8 >= (int)max_length )
      break;
    weights = this->fields.weights;
    if ( weights )
    {
      if ( v21 >= weights->max_length || v21 >= max_length )
      {
        sub_B17100(v15, v16, v17);
        sub_B170A0();
      }
      if ( v14 )
      {
        WeightRate_int___setWeight(
          v14,
          *((_DWORD *)&weights->obj.klass + v19),
          *((_DWORD *)&targetSeqIds->obj.klass + v19),
          (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
        targetSeqIds = this->fields.targetSeqIds;
        ++v19;
        if ( targetSeqIds )
          continue;
      }
    }
    goto LABEL_18;
  }
  if ( !v14
    || (v23 = UnityEngine_Random__Range_34843248(0, v14->fields.totalweight, 0LL),
        Data = WeightRate_int___getData(v14, v23, (const MethodInfo_2ADC8C0 *)Method_WeightRate_int__getData__),
        (groupSeqIds = this->fields.groupSeqIds) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  v30 = Data;
  if ( *(_QWORD *)&groupSeqIds->max_length )
  {
    v31 = System_Array__IndexOf_int_(
            this->fields.targetSeqIds,
            Data,
            (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
    v32 = BasicHelper__IndexValue_int_(
            this->fields.groupSeqIds,
            v31,
            0,
            (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
  }
  else
  {
    v32 = 0;
  }
  v33 = (System_Tuple_int__int__o *)sub_B170CC(System_Tuple_int__int__TypeInfo, v25, v26, v27, v28);
  System_Tuple_int__int____ctor(v33, v30, v32, (const MethodInfo_25418C0 *)Method_System_Tuple_int__int___ctor__);
  return v33;
}