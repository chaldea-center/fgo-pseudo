void __fastcall TreasureDeviceSequenceWeightEntity___ctor(
        TreasureDeviceSequenceWeightEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EACB1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EACB1 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall TreasureDeviceSequenceWeightEntity__CreatePK(
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  if ( (byte_42EACB0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, limitCount, npChargeStage, method);
    byte_42EACB0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           treasureDeviceId,
           limitCount,
           npChargeStage,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  WeightRate_int__o *v29; // x20
  __int64 Data; // x0
  __int64 v31; // x1
  struct System_Int32_array *targetSeqIds; // x8
  __int64 v33; // x21
  unsigned __int64 max_length; // x10
  unsigned __int64 v35; // x11
  struct System_Int32_array *weights; // x9
  int32_t v37; // w0
  struct System_Int32_array *groupSeqIds; // x8
  int32_t v39; // w20
  int32_t v40; // w0
  int32_t v41; // w19
  System_Tuple_int__int__o *v42; // x21
  __int64 v44; // x0

  if ( (byte_42EACAF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BasicHelper_IndexValue_int____68811968, v5, v6, v7);
    sub_B5D5C4(&Method_System_Tuple_int__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Tuple_int__int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_WeightRate_int___ctor__, v14, v15, v16);
    sub_B5D5C4(&Method_WeightRate_int__getData__, v17, v18, v19);
    sub_B5D5C4(&Method_WeightRate_int__getTotalWeight__, v20, v21, v22);
    sub_B5D5C4(&Method_WeightRate_int__setWeight__, v23, v24, v25);
    sub_B5D5C4(&WeightRate_int__TypeInfo, v26, v27, v28);
    byte_42EACAF = 1;
  }
  v29 = (WeightRate_int__o *)sub_B5D694(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v29, (const MethodInfo_2BF9C18 *)Method_WeightRate_int___ctor__);
  targetSeqIds = this->fields.targetSeqIds;
  if ( !targetSeqIds )
    goto LABEL_18;
  v33 = 8LL;
  while ( 1 )
  {
    max_length = targetSeqIds->max_length;
    v35 = v33 - 8;
    if ( v33 - 8 >= (int)max_length )
      break;
    weights = this->fields.weights;
    if ( weights )
    {
      if ( v35 >= weights->max_length || v35 >= max_length )
      {
        v44 = sub_B5D6C8(Data);
        sub_B5D668(v44, 0LL);
      }
      if ( v29 )
      {
        WeightRate_int___setWeight(
          v29,
          *((_DWORD *)&weights->obj.klass + v33),
          *((_DWORD *)&targetSeqIds->obj.klass + v33),
          (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
        targetSeqIds = this->fields.targetSeqIds;
        ++v33;
        if ( targetSeqIds )
          continue;
      }
    }
    goto LABEL_18;
  }
  if ( !v29
    || (v37 = UnityEngine_Random__Range_35654020(0, v29->fields.totalweight, 0LL),
        Data = WeightRate_int___getData(v29, v37, (const MethodInfo_2BF9264 *)Method_WeightRate_int__getData__),
        (groupSeqIds = this->fields.groupSeqIds) == 0LL) )
  {
LABEL_18:
    sub_B5D69C(Data, v31);
  }
  v39 = Data;
  if ( *(_QWORD *)&groupSeqIds->max_length )
  {
    v40 = System_Array__IndexOf_int_(
            this->fields.targetSeqIds,
            Data,
            (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
    v41 = BasicHelper__IndexValue_int_(
            this->fields.groupSeqIds,
            v40,
            0,
            (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
  }
  else
  {
    v41 = 0;
  }
  v42 = (System_Tuple_int__int__o *)sub_B5D694(System_Tuple_int__int__TypeInfo);
  System_Tuple_int__int____ctor(v42, v39, v41, (const MethodInfo_265CCF0 *)Method_System_Tuple_int__int___ctor__);
  return v42;
}