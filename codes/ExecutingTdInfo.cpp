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
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  TreasureDeviceSequenceWeightEntity_o *EntityByDescendingPriority; // x0
  System_Tuple_T1__T2__o *SeqIdAndGroupSeqId; // x0
  int32_t v17; // w22
  int32_t RandomSeqIdEachLimit; // w0
  __int64 v19; // x20
  int32_t item2; // [xsp+4h] [xbp-5Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  int32_t item1[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4CB9278 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_1C6BA08(&ExecutingTdInfo_TypeInfo);
    sub_1C6BA08(&Method_System_TupleExtensions_Deconstruct_int__int___);
    byte_4CB9278 = 1;
  }
  *(_QWORD *)item1 = 0;
  entity = 0;
  item2 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___);
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
      item1,
      &item2,
      (const MethodInfo_320D0BC *)Method_System_TupleExtensions_Deconstruct_int__int___);
    v17 = item2;
    item1[1] = item2;
    if ( item1[0] > 0 )
    {
      tdId = item1[0];
      goto LABEL_20;
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !Master_object )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          tdId,
          (const MethodInfo_33F9128 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
  {
    v17 = 0;
    goto LABEL_20;
  }
  Master_object = entity;
  item1[1] = 0;
  if ( !entity
    || (Master_object = (Il2CppObject *)TreasureDvcEntity__IsRandomTD((TreasureDvcEntity_o *)entity, 0), !entity) )
  {
LABEL_21:
    sub_1C6BC60(Master_object, v14);
  }
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    RandomSeqIdEachLimit = TreasureDvcEntity__GetRandomSeqIdEachLimit(
                             (TreasureDvcEntity_o *)entity,
                             dispLimitCount,
                             &item1[1],
                             actSetId,
                             0);
  else
    RandomSeqIdEachLimit = TreasureDvcEntity__getSeqId((TreasureDvcEntity_o *)entity, dispLimitCount, 0);
  v17 = item1[1];
  tdId = RandomSeqIdEachLimit;
LABEL_20:
  v19 = sub_1C6BC54(ExecutingTdInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  *(_DWORD *)(v19 + 16) = tdId;
  *(_DWORD *)(v19 + 20) = v17;
  return (ExecutingTdInfo_o *)v19;
}


ExecutingTdInfo_o *ExecutingTdInfo__GetDefault(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4CB9277 & 1) == 0 )
  {
    sub_1C6BA08(&ExecutingTdInfo_TypeInfo);
    byte_4CB9277 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(ExecutingTdInfo_TypeInfo);
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