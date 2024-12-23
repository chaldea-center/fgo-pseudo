void __fastcall ExecutingTdInfo___ctor(
        ExecutingTdInfo_o *this,
        int32_t seqId,
        int32_t groupSeqId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._SeqId_k__BackingField = seqId;
  this->fields._GroupSeqId_k__BackingField = groupSeqId;
}


// local variable allocation has failed, the output may be wrong!
ExecutingTdInfo_o *__fastcall ExecutingTdInfo__Create(
        int32_t tdId,
        int32_t dispLimitCount,
        int32_t npChargeStage,
        int32_t actSetId,
        int32_t genderType,
        int32_t patternId,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  Il2CppObject *Master_object; // x0
  __int64 v19; // x1
  TreasureDeviceSequenceWeightEntity_o *EntityByDescendingPriority; // x0
  System_Tuple_T1__T2__o *SeqIdAndGroupSeqId; // x0
  int32_t v22; // w22
  int32_t RandomSeqIdEachLimit; // w0
  __int64 v24; // x20
  int32_t item2; // [xsp+4h] [xbp-5Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  int32_t item1[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B6973E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___, *(_QWORD *)&dispLimitCount);
    sub_1BE4ACC(&Method_DataManager_GetMaster_TreasureDvcMaster___, v13);
    sub_1BE4ACC(&DataManager_TypeInfo, v14);
    sub_1BE4ACC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v15);
    sub_1BE4ACC(&ExecutingTdInfo_TypeInfo, v16);
    sub_1BE4ACC(&Method_System_TupleExtensions_Deconstruct_int__int___, v17);
    byte_4B6973E = 1;
  }
  *(_QWORD *)item1 = 0LL;
  entity = 0LL;
  item2 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___);
  if ( !Master_object )
    goto LABEL_21;
  EntityByDescendingPriority = TreasureDeviceSequenceWeightMaster__GetEntityByDescendingPriority(
                                 (TreasureDeviceSequenceWeightMaster_o *)Master_object,
                                 tdId,
                                 dispLimitCount,
                                 npChargeStage,
                                 genderType,
                                 patternId,
                                 0LL);
  if ( EntityByDescendingPriority )
  {
    SeqIdAndGroupSeqId = (System_Tuple_T1__T2__o *)TreasureDeviceSequenceWeightEntity__GetSeqIdAndGroupSeqId(
                                                     EntityByDescendingPriority,
                                                     0LL);
    System_TupleExtensions__Deconstruct_int__int_(
      SeqIdAndGroupSeqId,
      item1,
      &item2,
      (const MethodInfo_3009DC8 *)Method_System_TupleExtensions_Deconstruct_int__int___);
    v22 = item2;
    item1[1] = item2;
    if ( item1[0] > 0 )
    {
      tdId = item1[0];
      goto LABEL_20;
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !Master_object )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          tdId,
          (const MethodInfo_31FD818 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
  {
    v22 = 0;
    goto LABEL_20;
  }
  Master_object = entity;
  item1[1] = 0;
  if ( !entity
    || (Master_object = (Il2CppObject *)TreasureDvcEntity__IsRandomTD((TreasureDvcEntity_o *)entity, 0LL), !entity) )
  {
LABEL_21:
    sub_1BE4D28(Master_object, v19);
  }
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    RandomSeqIdEachLimit = TreasureDvcEntity__GetRandomSeqIdEachLimit(
                             (TreasureDvcEntity_o *)entity,
                             dispLimitCount,
                             &item1[1],
                             actSetId,
                             0LL);
  else
    RandomSeqIdEachLimit = TreasureDvcEntity__getSeqId((TreasureDvcEntity_o *)entity, dispLimitCount, 0LL);
  v22 = item1[1];
  tdId = RandomSeqIdEachLimit;
LABEL_20:
  v24 = sub_1BE4D18(ExecutingTdInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  *(_DWORD *)(v24 + 16) = tdId;
  *(_DWORD *)(v24 + 20) = v22;
  return (ExecutingTdInfo_o *)v24;
}


ExecutingTdInfo_o *__fastcall ExecutingTdInfo__GetDefault(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B6973D & 1) == 0 )
  {
    sub_1BE4ACC(&ExecutingTdInfo_TypeInfo, v1);
    byte_4B6973D = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(ExecutingTdInfo_TypeInfo);
  System_Object___ctor(v2, 0LL);
  v2[1].klass = 0LL;
  return (ExecutingTdInfo_o *)v2;
}


int32_t __fastcall ExecutingTdInfo__get_GroupSeqId(ExecutingTdInfo_o *this, const MethodInfo *method)
{
  return this->fields._GroupSeqId_k__BackingField;
}


int32_t __fastcall ExecutingTdInfo__get_SeqId(ExecutingTdInfo_o *this, const MethodInfo *method)
{
  return this->fields._SeqId_k__BackingField;
}


bool __fastcall ExecutingTdInfo__get_UseGroup(ExecutingTdInfo_o *this, const MethodInfo *method)
{
  return this->fields._GroupSeqId_k__BackingField > 0;
}