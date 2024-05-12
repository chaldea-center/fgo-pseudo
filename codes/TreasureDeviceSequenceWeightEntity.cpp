void __fastcall TreasureDeviceSequenceWeightEntity___ctor(
        TreasureDeviceSequenceWeightEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_438D652 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438D652 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall TreasureDeviceSequenceWeightEntity__CreatePK(
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  if ( (byte_438D651 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438D651 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           treasureDeviceId,
           limitCount,
           npChargeStage,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v7; // x21
  unsigned __int64 max_length; // x10
  unsigned __int64 v9; // x11
  struct System_Int32_array *weights; // x9
  int32_t v11; // w0
  struct System_Int32_array *groupSeqIds; // x8
  int32_t v13; // w20
  int32_t v14; // w0
  int32_t v15; // w19
  System_Tuple_int__int__o *v16; // x21
  __int64 v18; // x0

  if ( (byte_438D650 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_IndexOf_int___);
    sub_B775C4(&Method_BasicHelper_IndexValue_int____69469920);
    sub_B775C4(&Method_System_Tuple_int__int___ctor__);
    sub_B775C4(&System_Tuple_int__int__TypeInfo);
    sub_B775C4(&Method_WeightRate_int___ctor__);
    sub_B775C4(&Method_WeightRate_int__getData__);
    sub_B775C4(&Method_WeightRate_int__getTotalWeight__);
    sub_B775C4(&Method_WeightRate_int__setWeight__);
    sub_B775C4(&WeightRate_int__TypeInfo);
    byte_438D650 = 1;
  }
  v3 = (WeightRate_int__o *)sub_B77694(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v3, (const MethodInfo_2CE85DC *)Method_WeightRate_int___ctor__);
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
      {
        v18 = sub_B776C8(Data);
        sub_B77668(v18, 0LL);
      }
      if ( v3 )
      {
        WeightRate_int___setWeight(
          v3,
          *((_DWORD *)&weights->obj.klass + v7),
          *((_DWORD *)&targetSeqIds->obj.klass + v7),
          (const MethodInfo_2CE77A4 *)Method_WeightRate_int__setWeight__);
        targetSeqIds = this->fields.targetSeqIds;
        ++v7;
        if ( targetSeqIds )
          continue;
      }
    }
    goto LABEL_18;
  }
  if ( !v3
    || (v11 = UnityEngine_Random__Range_36343764(0, v3->fields.totalweight, 0LL),
        Data = WeightRate_int___getData(v3, v11, (const MethodInfo_2CE7C28 *)Method_WeightRate_int__getData__),
        (groupSeqIds = this->fields.groupSeqIds) == 0LL) )
  {
LABEL_18:
    sub_B7769C(Data, v5);
  }
  v13 = Data;
  if ( *(_QWORD *)&groupSeqIds->max_length )
  {
    v14 = System_Array__IndexOf_int_(
            this->fields.targetSeqIds,
            Data,
            (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___);
    v15 = BasicHelper__IndexValue_int_(
            this->fields.groupSeqIds,
            v14,
            0,
            (const MethodInfo_1C683B4 *)Method_BasicHelper_IndexValue_int____69469920);
  }
  else
  {
    v15 = 0;
  }
  v16 = (System_Tuple_int__int__o *)sub_B77694(System_Tuple_int__int__TypeInfo);
  System_Tuple_int__int____ctor(v16, v13, v15, (const MethodInfo_262F820 *)Method_System_Tuple_int__int___ctor__);
  return v16;
}