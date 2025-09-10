void TreasureDeviceSequenceWeightEntity___ctor(TreasureDeviceSequenceWeightEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27FB0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27FB0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *TreasureDeviceSequenceWeightEntity__CreatePK(
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  if ( (byte_4C27FAF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C27FAF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           treasureDeviceId,
           limitCount,
           npChargeStage,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *TreasureDeviceSequenceWeightEntity__CreatePrimaryKey(
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


System_Tuple_int__int__o *TreasureDeviceSequenceWeightEntity__GetSeqIdAndGroupSeqId(
        TreasureDeviceSequenceWeightEntity_o *this,
        const MethodInfo *method)
{
  WeightRate_int__o *v3; // x20
  __int64 Data; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Int32_array *targetSeqIds; // x8
  __int64 v8; // x27
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v10; // x11
  struct System_Int32_array *weights; // x9
  int32_t v12; // w0
  struct System_Int32_array *groupSeqIds; // x8
  int32_t v14; // w20
  int32_t v15; // w0
  int32_t v16; // w19
  System_Tuple_int__int__o *v17; // x21

  if ( (byte_4C27FAE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_int___);
    sub_1C2D490(&Method_BasicHelper_IndexValue_int____77999320);
    sub_1C2D490(&Method_System_Tuple_int__int___ctor__);
    sub_1C2D490(&System_Tuple_int__int__TypeInfo);
    sub_1C2D490(&Method_WeightRate_int___ctor__);
    sub_1C2D490(&Method_WeightRate_int__getData__);
    sub_1C2D490(&Method_WeightRate_int__getTotalWeight__);
    sub_1C2D490(&Method_WeightRate_int__setWeight__);
    sub_1C2D490(&WeightRate_int__TypeInfo);
    byte_4C27FAE = 1;
  }
  v3 = (WeightRate_int__o *)sub_1C2D6DC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v3, (const MethodInfo_3B7B4CC *)Method_WeightRate_int___ctor__);
  targetSeqIds = this->fields.targetSeqIds;
  if ( !targetSeqIds )
    goto LABEL_18;
  v8 = 8;
  while ( 1 )
  {
    max_length_low = LODWORD(targetSeqIds->max_length);
    v10 = v8 - 8;
    if ( v8 - 8 >= (int)max_length_low )
      break;
    weights = this->fields.weights;
    if ( weights )
    {
      if ( v10 >= LODWORD(weights->max_length) || v10 >= max_length_low )
        sub_1C2D6F4(Data, v5, v6);
      if ( v3 )
      {
        WeightRate_int___setWeight(
          v3,
          *((_DWORD *)&weights->obj.klass + v8),
          *((_DWORD *)&targetSeqIds->obj.klass + v8),
          (const MethodInfo_3B7A9E8 *)Method_WeightRate_int__setWeight__);
        targetSeqIds = this->fields.targetSeqIds;
        ++v8;
        if ( targetSeqIds )
          continue;
      }
    }
    goto LABEL_18;
  }
  if ( !v3
    || (v12 = UnityEngine_Random__Range_71123924(0, v3->fields.totalweight, 0),
        Data = WeightRate_int___getData(v3, v12, (const MethodInfo_3B7AE5C *)Method_WeightRate_int__getData__),
        (groupSeqIds = this->fields.groupSeqIds) == 0) )
  {
LABEL_18:
    sub_1C2D6EC(Data, v5);
  }
  v14 = Data;
  if ( groupSeqIds->max_length )
  {
    v15 = System_Array__IndexOf_int_(
            this->fields.targetSeqIds,
            Data,
            (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___);
    v16 = BasicHelper__IndexValue_int_(
            this->fields.groupSeqIds,
            v15,
            0,
            (const MethodInfo_30BCE0C *)Method_BasicHelper_IndexValue_int____77999320);
  }
  else
  {
    v16 = 0;
  }
  v17 = (System_Tuple_int__int__o *)sub_1C2D6DC(System_Tuple_int__int__TypeInfo);
  System_Tuple_int__int____ctor(v17, v14, v16, (const MethodInfo_3A86650 *)Method_System_Tuple_int__int___ctor__);
  return v17;
}