void __fastcall TreasureDeviceSequenceWeightEntity___ctor(
        TreasureDeviceSequenceWeightEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FCE6E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FCE6E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDeviceSequenceWeightEntity__CreatePK(
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  if ( (byte_49FCE6D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&limitCount);
    byte_49FCE6D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           treasureDeviceId,
           limitCount,
           npChargeStage,
           (const MethodInfo_2E37AA0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v14; // x1
  struct System_Int32_array *targetSeqIds; // x8
  __int64 v16; // x27
  unsigned __int64 max_length; // x10
  unsigned __int64 v18; // x11
  struct System_Int32_array *weights; // x9
  int32_t v20; // w0
  __int64 v21; // x1
  __int64 v22; // x2
  struct System_Int32_array *groupSeqIds; // x8
  int32_t v24; // w20
  int32_t v25; // w0
  int32_t v26; // w19
  System_Tuple_int__int__o *v27; // x21

  if ( (byte_49FCE6C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, method);
    sub_1B640C8(&Method_BasicHelper_IndexValue_int____75711232, v4);
    sub_1B640C8(&Method_System_Tuple_int__int___ctor__, v5);
    sub_1B640C8(&System_Tuple_int__int__TypeInfo, v6);
    sub_1B640C8(&Method_WeightRate_int___ctor__, v7);
    sub_1B640C8(&Method_WeightRate_int__getData__, v8);
    sub_1B640C8(&Method_WeightRate_int__getTotalWeight__, v9);
    sub_1B640C8(&Method_WeightRate_int__setWeight__, v10);
    sub_1B640C8(&WeightRate_int__TypeInfo, v11);
    byte_49FCE6C = 1;
  }
  v12 = (WeightRate_int__o *)sub_1B64314(WeightRate_int__TypeInfo, method, v2);
  WeightRate_int____ctor(v12, (const MethodInfo_388C894 *)Method_WeightRate_int___ctor__);
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
        sub_1B6432C(Data, v14);
      if ( v12 )
      {
        WeightRate_int___setWeight(
          v12,
          *((_DWORD *)&weights->obj.klass + v16),
          *((_DWORD *)&targetSeqIds->obj.klass + v16),
          (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
        targetSeqIds = this->fields.targetSeqIds;
        ++v16;
        if ( targetSeqIds )
          continue;
      }
    }
    goto LABEL_18;
  }
  if ( !v12
    || (v20 = UnityEngine_Random__Range_69087476(0, v12->fields.totalweight, 0LL),
        Data = WeightRate_int___getData(v12, v20, (const MethodInfo_388C224 *)Method_WeightRate_int__getData__),
        (groupSeqIds = this->fields.groupSeqIds) == 0LL) )
  {
LABEL_18:
    sub_1B64324(Data);
  }
  v24 = Data;
  if ( *(_QWORD *)&groupSeqIds->max_length )
  {
    v25 = System_Array__IndexOf_int_(
            this->fields.targetSeqIds,
            Data,
            (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___);
    v26 = BasicHelper__IndexValue_int_(
            this->fields.groupSeqIds,
            v25,
            0,
            (const MethodInfo_2E28154 *)Method_BasicHelper_IndexValue_int____75711232);
  }
  else
  {
    v26 = 0;
  }
  v27 = (System_Tuple_int__int__o *)sub_1B64314(System_Tuple_int__int__TypeInfo, v21, v22);
  System_Tuple_int__int____ctor(v27, v24, v26, (const MethodInfo_377D200 *)Method_System_Tuple_int__int___ctor__);
  return v27;
}