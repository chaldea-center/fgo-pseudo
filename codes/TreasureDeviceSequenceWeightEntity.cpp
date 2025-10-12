void TreasureDeviceSequenceWeightEntity___ctor(TreasureDeviceSequenceWeightEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C386B3 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C386B3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *TreasureDeviceSequenceWeightEntity__CreatePK(
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  if ( (byte_4C386B2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C386B2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           treasureDeviceId,
           limitCount,
           npChargeStage,
           (const MethodInfo_30DBA08 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  struct System_Int32_array *targetSeqIds; // x8
  __int64 v6; // x27
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v8; // x11
  struct System_Int32_array *weights; // x9
  int32_t v10; // w0
  struct System_Int32_array *groupSeqIds; // x8
  int32_t v12; // w20
  int32_t v13; // w0
  int32_t v14; // w19
  System_Tuple_int__int__o *v15; // x21

  if ( (byte_4C386B1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_IndexOf_int___);
    sub_1C32C20(&Method_BasicHelper_IndexValue_int____78064648);
    sub_1C32C20(&Method_System_Tuple_int__int___ctor__);
    sub_1C32C20(&System_Tuple_int__int__TypeInfo);
    sub_1C32C20(&Method_WeightRate_int___ctor__);
    sub_1C32C20(&Method_WeightRate_int__getData__);
    sub_1C32C20(&Method_WeightRate_int__getTotalWeight__);
    sub_1C32C20(&Method_WeightRate_int__setWeight__);
    sub_1C32C20(&WeightRate_int__TypeInfo);
    byte_4C386B1 = 1;
  }
  v3 = (WeightRate_int__o *)sub_1C32E6C(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v3, (const MethodInfo_3B8A1D4 *)Method_WeightRate_int___ctor__);
  targetSeqIds = this->fields.targetSeqIds;
  if ( !targetSeqIds )
    goto LABEL_18;
  v6 = 8;
  while ( 1 )
  {
    max_length_low = LODWORD(targetSeqIds->max_length);
    v8 = v6 - 8;
    if ( v6 - 8 >= (int)max_length_low )
      break;
    weights = this->fields.weights;
    if ( weights )
    {
      if ( v8 >= LODWORD(weights->max_length) || v8 >= max_length_low )
        sub_1C32E84(Data);
      if ( v3 )
      {
        WeightRate_int___setWeight(
          v3,
          *((_DWORD *)&weights->obj.klass + v6),
          *((_DWORD *)&targetSeqIds->obj.klass + v6),
          (const MethodInfo_3B896F0 *)Method_WeightRate_int__setWeight__);
        targetSeqIds = this->fields.targetSeqIds;
        ++v6;
        if ( targetSeqIds )
          continue;
      }
    }
    goto LABEL_18;
  }
  if ( !v3
    || (v10 = UnityEngine_Random__Range_71183860(0, v3->fields.totalweight, 0),
        Data = WeightRate_int___getData(v3, v10, (const MethodInfo_3B89B64 *)Method_WeightRate_int__getData__),
        (groupSeqIds = this->fields.groupSeqIds) == 0) )
  {
LABEL_18:
    sub_1C32E7C(Data);
  }
  v12 = Data;
  if ( groupSeqIds->max_length )
  {
    v13 = System_Array__IndexOf_int_(
            this->fields.targetSeqIds,
            Data,
            (const MethodInfo_31E4470 *)Method_System_Array_IndexOf_int___);
    v14 = BasicHelper__IndexValue_int_(
            this->fields.groupSeqIds,
            v13,
            0,
            (const MethodInfo_30CB8AC *)Method_BasicHelper_IndexValue_int____78064648);
  }
  else
  {
    v14 = 0;
  }
  v15 = (System_Tuple_int__int__o *)sub_1C32E6C(System_Tuple_int__int__TypeInfo);
  System_Tuple_int__int____ctor(v15, v12, v14, (const MethodInfo_3A95358 *)Method_System_Tuple_int__int___ctor__);
  return v15;
}