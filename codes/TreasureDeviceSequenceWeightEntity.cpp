void __fastcall TreasureDeviceSequenceWeightEntity___ctor(
        TreasureDeviceSequenceWeightEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B45706 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    byte_4B45706 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDeviceSequenceWeightEntity__CreatePK(
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  if ( (byte_4B45705 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&limitCount);
    byte_4B45705 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           treasureDeviceId,
           limitCount,
           npChargeStage,
           (const MethodInfo_3031F74 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v14; // x2
  struct System_Int32_array *targetSeqIds; // x8
  __int64 v16; // x27
  unsigned __int64 max_length; // x10
  unsigned __int64 v18; // x11
  struct System_Int32_array *weights; // x9
  int32_t v20; // w0
  struct System_Int32_array *groupSeqIds; // x8
  int32_t v22; // w20
  int32_t v23; // w0
  int32_t v24; // w19
  System_Tuple_int__int__o *v25; // x21

  if ( (byte_4B45704 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_IndexOf_int___, method);
    sub_1BDB878(&Method_BasicHelper_IndexValue_int____77079288, v3);
    sub_1BDB878(&Method_System_Tuple_int__int___ctor__, v4);
    sub_1BDB878(&System_Tuple_int__int__TypeInfo, v5);
    sub_1BDB878(&Method_WeightRate_int___ctor__, v6);
    sub_1BDB878(&Method_WeightRate_int__getData__, v7);
    sub_1BDB878(&Method_WeightRate_int__getTotalWeight__, v8);
    sub_1BDB878(&Method_WeightRate_int__setWeight__, v9);
    sub_1BDB878(&WeightRate_int__TypeInfo, v10);
    byte_4B45704 = 1;
  }
  v11 = (WeightRate_int__o *)sub_1BDBAC4(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v11, (const MethodInfo_3AB9154 *)Method_WeightRate_int___ctor__);
  targetSeqIds = this->fields.targetSeqIds;
  if ( !targetSeqIds )
    goto LABEL_18;
  v16 = 8LL;
  while ( 1 )
  {
    max_length = targetSeqIds->max_length;
    v18 = v16 - 8;
    if ( v16 - 8 >= (int)max_length )
      break;
    weights = this->fields.weights;
    if ( weights )
    {
      if ( v18 >= weights->max_length || v18 >= max_length )
        sub_1BDBADC(Data, v13, v14);
      if ( v11 )
      {
        WeightRate_int___setWeight(
          v11,
          *((_DWORD *)&weights->obj.klass + v16),
          *((_DWORD *)&targetSeqIds->obj.klass + v16),
          (const MethodInfo_3AB8670 *)Method_WeightRate_int__setWeight__);
        targetSeqIds = this->fields.targetSeqIds;
        ++v16;
        if ( targetSeqIds )
          continue;
      }
    }
    goto LABEL_18;
  }
  if ( !v11
    || (v20 = UnityEngine_Random__Range_70244360(0, v11->fields.totalweight, 0LL),
        Data = WeightRate_int___getData(v11, v20, (const MethodInfo_3AB8AE4 *)Method_WeightRate_int__getData__),
        (groupSeqIds = this->fields.groupSeqIds) == 0LL) )
  {
LABEL_18:
    sub_1BDBAD4(Data, v13);
  }
  v22 = Data;
  if ( *(_QWORD *)&groupSeqIds->max_length )
  {
    v23 = System_Array__IndexOf_int_(
            this->fields.targetSeqIds,
            Data,
            (const MethodInfo_3132F28 *)Method_System_Array_IndexOf_int___);
    v24 = BasicHelper__IndexValue_int_(
            this->fields.groupSeqIds,
            v23,
            0,
            (const MethodInfo_3021F18 *)Method_BasicHelper_IndexValue_int____77079288);
  }
  else
  {
    v24 = 0;
  }
  v25 = (System_Tuple_int__int__o *)sub_1BDBAC4(System_Tuple_int__int__TypeInfo);
  System_Tuple_int__int____ctor(v25, v22, v24, (const MethodInfo_39A0DDC *)Method_System_Tuple_int__int___ctor__);
  return v25;
}