void __fastcall TreasureDeviceSequenceWeightEntity___ctor(
        TreasureDeviceSequenceWeightEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_41899B2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41899B2 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDeviceSequenceWeightEntity__CreatePK(
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  if ( (byte_41899B1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&limitCount);
    byte_41899B1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           treasureDeviceId,
           limitCount,
           npChargeStage,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WeightRate_int__o *v11; // x20
  __int64 Data; // x0
  __int64 v13; // x1
  struct System_Int32_array *targetSeqIds; // x8
  __int64 v15; // x21
  unsigned __int64 max_length; // x10
  unsigned __int64 v17; // x11
  struct System_Int32_array *weights; // x9
  int32_t v19; // w0
  struct System_Int32_array *groupSeqIds; // x8
  int32_t v21; // w20
  int32_t v22; // w0
  int32_t v23; // w19
  System_Tuple_int__int__o *v24; // x21
  __int64 v26; // x0

  if ( (byte_41899B0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, method);
    sub_B2C35C(&Method_BasicHelper_IndexValue_int____67381984, v3);
    sub_B2C35C(&Method_System_Tuple_int__int___ctor__, v4);
    sub_B2C35C(&System_Tuple_int__int__TypeInfo, v5);
    sub_B2C35C(&Method_WeightRate_int___ctor__, v6);
    sub_B2C35C(&Method_WeightRate_int__getData__, v7);
    sub_B2C35C(&Method_WeightRate_int__getTotalWeight__, v8);
    sub_B2C35C(&Method_WeightRate_int__setWeight__, v9);
    sub_B2C35C(&WeightRate_int__TypeInfo, v10);
    byte_41899B0 = 1;
  }
  v11 = (WeightRate_int__o *)sub_B2C42C(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v11, (const MethodInfo_29E4118 *)Method_WeightRate_int___ctor__);
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
        v26 = sub_B2C460(Data);
        sub_B2C400(v26, 0LL);
      }
      if ( v11 )
      {
        WeightRate_int___setWeight(
          v11,
          *((_DWORD *)&weights->obj.klass + v15),
          *((_DWORD *)&targetSeqIds->obj.klass + v15),
          (const MethodInfo_29E32E0 *)Method_WeightRate_int__setWeight__);
        targetSeqIds = this->fields.targetSeqIds;
        ++v15;
        if ( targetSeqIds )
          continue;
      }
    }
    goto LABEL_18;
  }
  if ( !v11
    || (v19 = UnityEngine_Random__Range_35348680(0, v11->fields.totalweight, 0LL),
        Data = WeightRate_int___getData(v11, v19, (const MethodInfo_29E3764 *)Method_WeightRate_int__getData__),
        (groupSeqIds = this->fields.groupSeqIds) == 0LL) )
  {
LABEL_18:
    sub_B2C434(Data, v13);
  }
  v21 = Data;
  if ( *(_QWORD *)&groupSeqIds->max_length )
  {
    v22 = System_Array__IndexOf_int_(
            this->fields.targetSeqIds,
            Data,
            (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
    v23 = BasicHelper__IndexValue_int_(
            this->fields.groupSeqIds,
            v22,
            0,
            (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
  }
  else
  {
    v23 = 0;
  }
  v24 = (System_Tuple_int__int__o *)sub_B2C42C(System_Tuple_int__int__TypeInfo);
  System_Tuple_int__int____ctor(v24, v21, v23, (const MethodInfo_26571E4 *)Method_System_Tuple_int__int___ctor__);
  return v24;
}