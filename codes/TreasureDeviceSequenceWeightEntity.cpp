void __fastcall TreasureDeviceSequenceWeightEntity___ctor(
        TreasureDeviceSequenceWeightEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16D76 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16D76 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDeviceSequenceWeightEntity__CreatePK(
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  if ( (byte_4B16D75 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataEntityBase_CreateMultiplePK_int__int__int___,
      *(_QWORD *)&limitCount,
      *(_QWORD *)&npChargeStage);
    byte_4B16D75 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           treasureDeviceId,
           limitCount,
           npChargeStage,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  WeightRate_int__o *v21; // x20
  __int64 Data; // x0
  __int64 v23; // x1
  struct System_Int32_array *targetSeqIds; // x8
  __int64 v25; // x27
  unsigned __int64 max_length; // x10
  unsigned __int64 v27; // x11
  struct System_Int32_array *weights; // x9
  int32_t v29; // w0
  __int64 v30; // x2
  __int64 v31; // x3
  struct System_Int32_array *groupSeqIds; // x8
  int32_t v33; // w20
  int32_t v34; // w0
  int32_t v35; // w19
  System_Tuple_int__int__o *v36; // x21

  if ( (byte_4B16D74 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_int____76842096, v5, v6);
    sub_1BCA7E0(&Method_System_Tuple_int__int___ctor__, v7, v8);
    sub_1BCA7E0(&System_Tuple_int__int__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_WeightRate_int___ctor__, v11, v12);
    sub_1BCA7E0(&Method_WeightRate_int__getData__, v13, v14);
    sub_1BCA7E0(&Method_WeightRate_int__getTotalWeight__, v15, v16);
    sub_1BCA7E0(&Method_WeightRate_int__setWeight__, v17, v18);
    sub_1BCA7E0(&WeightRate_int__TypeInfo, v19, v20);
    byte_4B16D74 = 1;
  }
  v21 = (WeightRate_int__o *)sub_1BCAA2C(WeightRate_int__TypeInfo, method, v2, v3);
  WeightRate_int____ctor(v21, (const MethodInfo_3984A0C *)Method_WeightRate_int___ctor__);
  targetSeqIds = this->fields.targetSeqIds;
  if ( !targetSeqIds )
    goto LABEL_18;
  v25 = 8LL;
  while ( 1 )
  {
    max_length = targetSeqIds->max_length;
    v27 = v25 - 8;
    if ( v25 - 8 >= (int)max_length )
      break;
    weights = this->fields.weights;
    if ( weights )
    {
      if ( v27 >= weights->max_length || v27 >= max_length )
        sub_1BCAA44(Data, v23);
      if ( v21 )
      {
        WeightRate_int___setWeight(
          v21,
          *((_DWORD *)&weights->obj.klass + v25),
          *((_DWORD *)&targetSeqIds->obj.klass + v25),
          (const MethodInfo_3983F28 *)Method_WeightRate_int__setWeight__);
        targetSeqIds = this->fields.targetSeqIds;
        ++v25;
        if ( targetSeqIds )
          continue;
      }
    }
    goto LABEL_18;
  }
  if ( !v21
    || (v29 = UnityEngine_Random__Range_70113984(0, v21->fields.totalweight, 0LL),
        Data = WeightRate_int___getData(v21, v29, (const MethodInfo_398439C *)Method_WeightRate_int__getData__),
        (groupSeqIds = this->fields.groupSeqIds) == 0LL) )
  {
LABEL_18:
    sub_1BCAA3C(Data, v23);
  }
  v33 = Data;
  if ( *(_QWORD *)&groupSeqIds->max_length )
  {
    v34 = System_Array__IndexOf_int_(
            this->fields.targetSeqIds,
            Data,
            (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
    v35 = BasicHelper__IndexValue_int_(
            this->fields.groupSeqIds,
            v34,
            0,
            (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
  }
  else
  {
    v35 = 0;
  }
  v36 = (System_Tuple_int__int__o *)sub_1BCAA2C(System_Tuple_int__int__TypeInfo, v23, v30, v31);
  System_Tuple_int__int____ctor(v36, v33, v35, (const MethodInfo_387196C *)Method_System_Tuple_int__int___ctor__);
  return v36;
}