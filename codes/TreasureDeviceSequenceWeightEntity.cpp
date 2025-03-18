void __fastcall TreasureDeviceSequenceWeightEntity___ctor(
        TreasureDeviceSequenceWeightEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C22B6C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C22B6C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDeviceSequenceWeightEntity__CreatePK(
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  if ( (byte_4C22B6B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&limitCount);
    byte_4C22B6B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           treasureDeviceId,
           limitCount,
           npChargeStage,
           (const MethodInfo_2FEE81C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v15; // x27
  unsigned __int64 max_length; // x10
  unsigned __int64 v17; // x11
  struct System_Int32_array *weights; // x9
  int32_t v19; // w0
  struct System_Int32_array *groupSeqIds; // x8
  int32_t v21; // w20
  int32_t v22; // w0
  int32_t v23; // w19
  System_Tuple_int__int__o *v24; // x21

  if ( (byte_4C22B6A & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_IndexOf_int___, method);
    sub_1C3B764(&Method_BasicHelper_IndexValue_int____77908496, v3);
    sub_1C3B764(&Method_System_Tuple_int__int___ctor__, v4);
    sub_1C3B764(&System_Tuple_int__int__TypeInfo, v5);
    sub_1C3B764(&Method_WeightRate_int___ctor__, v6);
    sub_1C3B764(&Method_WeightRate_int__getData__, v7);
    sub_1C3B764(&Method_WeightRate_int__getTotalWeight__, v8);
    sub_1C3B764(&Method_WeightRate_int__setWeight__, v9);
    sub_1C3B764(&WeightRate_int__TypeInfo, v10);
    byte_4C22B6A = 1;
  }
  v11 = (WeightRate_int__o *)sub_1C3B9B0(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v11, (const MethodInfo_3A71BA0 *)Method_WeightRate_int___ctor__);
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
        sub_1C3B9C8(Data, v13);
      if ( v11 )
      {
        WeightRate_int___setWeight(
          v11,
          *((_DWORD *)&weights->obj.klass + v15),
          *((_DWORD *)&targetSeqIds->obj.klass + v15),
          (const MethodInfo_3A710BC *)Method_WeightRate_int__setWeight__);
        targetSeqIds = this->fields.targetSeqIds;
        ++v15;
        if ( targetSeqIds )
          continue;
      }
    }
    goto LABEL_18;
  }
  if ( !v11
    || (v19 = UnityEngine_Random__Range_71082488(0, v11->fields.totalweight, 0LL),
        Data = WeightRate_int___getData(v11, v19, (const MethodInfo_3A71530 *)Method_WeightRate_int__getData__),
        (groupSeqIds = this->fields.groupSeqIds) == 0LL) )
  {
LABEL_18:
    sub_1C3B9C0(Data, v13);
  }
  v21 = Data;
  if ( *(_QWORD *)&groupSeqIds->max_length )
  {
    v22 = System_Array__IndexOf_int_(
            this->fields.targetSeqIds,
            Data,
            (const MethodInfo_30EE4E0 *)Method_System_Array_IndexOf_int___);
    v23 = BasicHelper__IndexValue_int_(
            this->fields.groupSeqIds,
            v22,
            0,
            (const MethodInfo_2FDE9F8 *)Method_BasicHelper_IndexValue_int____77908496);
  }
  else
  {
    v23 = 0;
  }
  v24 = (System_Tuple_int__int__o *)sub_1C3B9B0(System_Tuple_int__int__TypeInfo);
  System_Tuple_int__int____ctor(v24, v21, v23, (const MethodInfo_395C534 *)Method_System_Tuple_int__int___ctor__);
  return v24;
}