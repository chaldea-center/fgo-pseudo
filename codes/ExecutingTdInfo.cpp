void ExecutingTdInfo___ctor(ExecutingTdInfo_o *this, int32_t seqId, int32_t groupSeqId, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._SeqId_k__BackingField = seqId;
  this->fields._GroupSeqId_k__BackingField = groupSeqId;
}


ExecutingTdInfo_o *ExecutingTdInfo__Create(
        int32_t tdId,
        int32_t dispLimitCount,
        int32_t npChargeStage,
        int32_t actSetId,
        int32_t genderType,
        int32_t patternId,
        int32_t unitIndex,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  TreasureDeviceSequenceWeightEntity_o *EntityByDescendingPriority; // x0
  System_Tuple_T1__T2__o *SeqIdAndGroupSeqId; // x0
  int32_t v19; // w23
  int32_t RandomSeqIdEachLimit; // w0
  __int64 v21; // x19
  int32_t item2[2]; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-60h] BYREF
  int32_t groupSeqId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4D339C6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_1C93AD4(&ExecutingTdInfo_TypeInfo);
    sub_1C93AD4(&Method_System_TupleExtensions_Deconstruct_int__int___);
    byte_4D339C6 = 1;
  }
  groupSeqId = 0;
  *(_QWORD *)item2 = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___);
  if ( !Master_object )
    goto LABEL_21;
  EntityByDescendingPriority = TreasureDeviceSequenceWeightMaster__GetEntityByDescendingPriority(
                                 (TreasureDeviceSequenceWeightMaster_o *)Master_object,
                                 tdId,
                                 dispLimitCount,
                                 npChargeStage,
                                 genderType,
                                 patternId,
                                 0);
  if ( EntityByDescendingPriority )
  {
    SeqIdAndGroupSeqId = (System_Tuple_T1__T2__o *)TreasureDeviceSequenceWeightEntity__GetSeqIdAndGroupSeqId(
                                                     EntityByDescendingPriority,
                                                     0);
    System_TupleExtensions__Deconstruct_int__int_(
      SeqIdAndGroupSeqId,
      &item2[1],
      item2,
      (const MethodInfo_3276854 *)Method_System_TupleExtensions_Deconstruct_int__int___);
    v19 = item2[0];
    groupSeqId = item2[0];
    if ( item2[1] > 0 )
    {
      tdId = item2[1];
      goto LABEL_20;
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !Master_object )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          tdId,
          (const MethodInfo_34632C0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
  {
    v19 = 0;
    goto LABEL_20;
  }
  Master_object = entity;
  groupSeqId = 0;
  if ( !entity
    || (Master_object = (Il2CppObject *)TreasureDvcEntity__IsRandomTD((TreasureDvcEntity_o *)entity, 0), !entity) )
  {
LABEL_21:
    sub_1C93D2C(Master_object, v16);
  }
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    RandomSeqIdEachLimit = TreasureDvcEntity__GetRandomSeqIdEachLimit(
                             (TreasureDvcEntity_o *)entity,
                             dispLimitCount,
                             &groupSeqId,
                             actSetId,
                             unitIndex,
                             0);
  else
    RandomSeqIdEachLimit = TreasureDvcEntity__getSeqId((TreasureDvcEntity_o *)entity, dispLimitCount, unitIndex, 0);
  v19 = groupSeqId;
  tdId = RandomSeqIdEachLimit;
LABEL_20:
  v21 = sub_1C93D20(ExecutingTdInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0);
  *(_DWORD *)(v21 + 16) = tdId;
  *(_DWORD *)(v21 + 20) = v19;
  return (ExecutingTdInfo_o *)v21;
}


ExecutingTdInfo_o *ExecutingTdInfo__GetDefault(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4D339C5 & 1) == 0 )
  {
    sub_1C93AD4(&ExecutingTdInfo_TypeInfo);
    byte_4D339C5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ExecutingTdInfo_TypeInfo);
  System_Object___ctor(v1, 0);
  v1[1].klass = 0;
  return (ExecutingTdInfo_o *)v1;
}


int32_t ExecutingTdInfo__get_GroupSeqId(ExecutingTdInfo_o *this, const MethodInfo *method)
{
  return this->fields._GroupSeqId_k__BackingField;
}


int32_t ExecutingTdInfo__get_SeqId(ExecutingTdInfo_o *this, const MethodInfo *method)
{
  return this->fields._SeqId_k__BackingField;
}


bool ExecutingTdInfo__get_UseGroup(ExecutingTdInfo_o *this, const MethodInfo *method)
{
  return this->fields._GroupSeqId_k__BackingField > 0;
}