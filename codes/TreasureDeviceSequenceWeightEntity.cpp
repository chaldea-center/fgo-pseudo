void __fastcall TreasureDeviceSequenceWeightEntity___ctor(
        TreasureDeviceSequenceWeightEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5BCC1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BCC1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall TreasureDeviceSequenceWeightEntity__CreatePK(
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  if ( (byte_4A5BCC0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5BCC0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           treasureDeviceId,
           limitCount,
           npChargeStage,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  WeightRate_int__o *v3; // x20
  __int64 Data; // x0
  __int64 v5; // x1
  struct System_Int32_array *targetSeqIds; // x8
  __int64 v7; // x27
  unsigned __int64 max_length; // x10
  unsigned __int64 v9; // x11
  struct System_Int32_array *weights; // x9
  int32_t v11; // w0
  struct System_Int32_array *groupSeqIds; // x8
  int32_t v13; // w20
  int32_t v14; // w0
  int32_t v15; // w19
  System_Tuple_int__int__o *v16; // x21

  if ( (byte_4A5BCBF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&Method_BasicHelper_IndexValue_int____76090680);
    sub_1B885B0(&Method_System_Tuple_int__int___ctor__);
    sub_1B885B0(&System_Tuple_int__int__TypeInfo);
    sub_1B885B0(&Method_WeightRate_int___ctor__);
    sub_1B885B0(&Method_WeightRate_int__getData__);
    sub_1B885B0(&Method_WeightRate_int__getTotalWeight__);
    sub_1B885B0(&Method_WeightRate_int__setWeight__);
    sub_1B885B0(&WeightRate_int__TypeInfo);
    byte_4A5BCBF = 1;
  }
  v3 = (WeightRate_int__o *)sub_1B887FC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v3, (const MethodInfo_38DB260 *)Method_WeightRate_int___ctor__);
  targetSeqIds = this->fields.targetSeqIds;
  if ( !targetSeqIds )
    goto LABEL_18;
  v7 = 8LL;
  while ( 1 )
  {
    max_length = targetSeqIds->max_length;
    v9 = v7 - 8;
    if ( v7 - 8 >= (int)max_length )
      break;
    weights = this->fields.weights;
    if ( weights )
    {
      if ( v9 >= weights->max_length || v9 >= max_length )
        sub_1B88814(Data, v5);
      if ( v3 )
      {
        WeightRate_int___setWeight(
          v3,
          *((_DWORD *)&weights->obj.klass + v7),
          *((_DWORD *)&targetSeqIds->obj.klass + v7),
          (const MethodInfo_38DA77C *)Method_WeightRate_int__setWeight__);
        targetSeqIds = this->fields.targetSeqIds;
        ++v7;
        if ( targetSeqIds )
          continue;
      }
    }
    goto LABEL_18;
  }
  if ( !v3
    || (v11 = UnityEngine_Random__Range_69419120(0, v3->fields.totalweight, 0LL),
        Data = WeightRate_int___getData(v3, v11, (const MethodInfo_38DABF0 *)Method_WeightRate_int__getData__),
        (groupSeqIds = this->fields.groupSeqIds) == 0LL) )
  {
LABEL_18:
    sub_1B8880C(Data, v5);
  }
  v13 = Data;
  if ( *(_QWORD *)&groupSeqIds->max_length )
  {
    v14 = System_Array__IndexOf_int_(
            this->fields.targetSeqIds,
            Data,
            (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
    v15 = BasicHelper__IndexValue_int_(
            this->fields.groupSeqIds,
            v14,
            0,
            (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
  }
  else
  {
    v15 = 0;
  }
  v16 = (System_Tuple_int__int__o *)sub_1B887FC(System_Tuple_int__int__TypeInfo);
  System_Tuple_int__int____ctor(v16, v13, v15, (const MethodInfo_37CBA8C *)Method_System_Tuple_int__int___ctor__);
  return v16;
}