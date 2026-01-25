void TreasureDeviceSequenceWeightEntity___ctor(TreasureDeviceSequenceWeightEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF353 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF353 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *TreasureDeviceSequenceWeightEntity__CreatePK(
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  if ( (byte_4CEF352 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CEF352 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           treasureDeviceId,
           limitCount,
           npChargeStage,
           (const MethodInfo_316EA0C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  struct System_Int32_array *targetSeqIds; // x8
  __int64 v7; // x27
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v9; // x11
  struct System_Int32_array *weights; // x9
  int32_t v11; // w0
  struct System_Int32_array *groupSeqIds; // x8
  int32_t v13; // w20
  int32_t v14; // w0
  int32_t v15; // w19
  System_Tuple_int__int__o *v16; // x21

  if ( (byte_4CEF351 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_IndexOf_int___);
    sub_1C7BAE8(&Method_BasicHelper_IndexValue_int____78796912);
    sub_1C7BAE8(&Method_System_Tuple_int__int___ctor__);
    sub_1C7BAE8(&System_Tuple_int__int__TypeInfo);
    sub_1C7BAE8(&Method_WeightRate_int___ctor__);
    sub_1C7BAE8(&Method_WeightRate_int__getData__);
    sub_1C7BAE8(&Method_WeightRate_int__getTotalWeight__);
    sub_1C7BAE8(&Method_WeightRate_int__setWeight__);
    sub_1C7BAE8(&WeightRate_int__TypeInfo);
    byte_4CEF351 = 1;
  }
  v3 = (WeightRate_int__o *)sub_1C7BD34(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v3, (const MethodInfo_3C54A68 *)Method_WeightRate_int___ctor__);
  targetSeqIds = this->fields.targetSeqIds;
  if ( !targetSeqIds )
    goto LABEL_18;
  v7 = 8;
  while ( 1 )
  {
    max_length_low = LODWORD(targetSeqIds->max_length);
    v9 = v7 - 8;
    if ( v7 - 8 >= (int)max_length_low )
      break;
    weights = this->fields.weights;
    if ( weights )
    {
      if ( v9 >= LODWORD(weights->max_length) || v9 >= max_length_low )
        sub_1C7BD48(Data);
      if ( v3 )
      {
        WeightRate_int___setWeight(
          v3,
          *((_DWORD *)&weights->obj.klass + v7),
          *((_DWORD *)&targetSeqIds->obj.klass + v7),
          (const MethodInfo_3C53F84 *)Method_WeightRate_int__setWeight__);
        targetSeqIds = this->fields.targetSeqIds;
        ++v7;
        if ( targetSeqIds )
          continue;
      }
    }
    goto LABEL_18;
  }
  if ( !v3
    || (v11 = UnityEngine_Random__Range_71829860(0, v3->fields.totalweight, 0),
        Data = WeightRate_int___getData(v3, v11, (const MethodInfo_3C543F8 *)Method_WeightRate_int__getData__),
        (groupSeqIds = this->fields.groupSeqIds) == 0) )
  {
LABEL_18:
    sub_1C7BD40(Data, v5);
  }
  v13 = Data;
  if ( groupSeqIds->max_length )
  {
    v14 = System_Array__IndexOf_int_(
            this->fields.targetSeqIds,
            Data,
            (const MethodInfo_3275200 *)Method_System_Array_IndexOf_int___);
    v15 = BasicHelper__IndexValue_int_(
            this->fields.groupSeqIds,
            v14,
            0,
            (const MethodInfo_315E844 *)Method_BasicHelper_IndexValue_int____78796912);
  }
  else
  {
    v15 = 0;
  }
  v16 = (System_Tuple_int__int__o *)sub_1C7BD34(System_Tuple_int__int__TypeInfo);
  System_Tuple_int__int____ctor(v16, v13, v15, (const MethodInfo_3B3FF88 *)Method_System_Tuple_int__int___ctor__);
  return v16;
}