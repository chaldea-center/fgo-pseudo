void __fastcall TreasureDeviceSequenceWeightEntity___ctor(
        TreasureDeviceSequenceWeightEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_421681E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_421681E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDeviceSequenceWeightEntity__CreatePK(
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  if ( (byte_421681D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&limitCount);
    byte_421681D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           treasureDeviceId,
           limitCount,
           npChargeStage,
           (const MethodInfo_1713844 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WeightRate_int__o *v12; // x20
  __int64 Data; // x0
  struct System_Int32_array *targetSeqIds; // x8
  __int64 v15; // x21
  unsigned __int64 max_length; // x10
  unsigned __int64 v17; // x11
  struct System_Int32_array *weights; // x9
  int32_t v19; // w0
  __int64 v20; // x1
  __int64 v21; // x2
  struct System_Int32_array *groupSeqIds; // x8
  int32_t v23; // w20
  int32_t v24; // w0
  int32_t v25; // w19
  System_Tuple_int__int__o *v26; // x21
  __int64 v28; // x0

  if ( (byte_421681C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, method);
    sub_B0D8A4(&Method_BasicHelper_IndexValue_int____67955848, v4);
    sub_B0D8A4(&Method_System_Tuple_int__int___ctor__, v5);
    sub_B0D8A4(&System_Tuple_int__int__TypeInfo, v6);
    sub_B0D8A4(&Method_WeightRate_int___ctor__, v7);
    sub_B0D8A4(&Method_WeightRate_int__getData__, v8);
    sub_B0D8A4(&Method_WeightRate_int__getTotalWeight__, v9);
    sub_B0D8A4(&Method_WeightRate_int__setWeight__, v10);
    sub_B0D8A4(&WeightRate_int__TypeInfo, v11);
    byte_421681C = 1;
  }
  v12 = (WeightRate_int__o *)sub_B0D974(WeightRate_int__TypeInfo, method, v2);
  WeightRate_int____ctor(v12, (const MethodInfo_2ADF078 *)Method_WeightRate_int___ctor__);
  targetSeqIds = this->fields.targetSeqIds;
  if ( !targetSeqIds )
    goto LABEL_18;
  v15 = 8LL;
  while ( 1 )
  {
    max_length = targetSeqIds->max_length;
    v17 = v15 - 8;
    if ( v15 - 8 >= (int)max_length )
      break;
    weights = this->fields.weights;
    if ( weights )
    {
      if ( v17 >= weights->max_length || v17 >= max_length )
      {
        v28 = sub_B0D9A8(Data);
        sub_B0D948(v28, 0LL);
      }
      if ( v12 )
      {
        WeightRate_int___setWeight(
          v12,
          *((_DWORD *)&weights->obj.klass + v15),
          *((_DWORD *)&targetSeqIds->obj.klass + v15),
          (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
        targetSeqIds = this->fields.targetSeqIds;
        ++v15;
        if ( targetSeqIds )
          continue;
      }
    }
    goto LABEL_18;
  }
  if ( !v12
    || (v19 = UnityEngine_Random__Range_34969060(0, v12->fields.totalweight, 0LL),
        Data = WeightRate_int___getData(v12, v19, (const MethodInfo_2ADE6C4 *)Method_WeightRate_int__getData__),
        (groupSeqIds = this->fields.groupSeqIds) == 0LL) )
  {
LABEL_18:
    sub_B0D97C(Data);
  }
  v23 = Data;
  if ( *(_QWORD *)&groupSeqIds->max_length )
  {
    v24 = System_Array__IndexOf_int_(
            this->fields.targetSeqIds,
            Data,
            (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___);
    v25 = BasicHelper__IndexValue_int_(
            this->fields.groupSeqIds,
            v24,
            0,
            (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
  }
  else
  {
    v25 = 0;
  }
  v26 = (System_Tuple_int__int__o *)sub_B0D974(System_Tuple_int__int__TypeInfo, v20, v21);
  System_Tuple_int__int____ctor(v26, v23, v25, (const MethodInfo_2695230 *)Method_System_Tuple_int__int___ctor__);
  return v26;
}