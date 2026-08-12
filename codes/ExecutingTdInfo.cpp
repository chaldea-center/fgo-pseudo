void ExecutingTdInfo___ctor(ExecutingTdInfo_o *this, int32_t seqId, int32_t groupSeqId, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._SeqId_k__BackingField = seqId;
  this->fields._GroupSeqId_k__BackingField = groupSeqId;
}


// local variable allocation has failed, the output may be wrong!
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
  int v15; // w8
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  TreasureDeviceSequenceWeightEntity_o *EntityByDescendingPriority; // x0
  __int64 v19; // x1
  System_Tuple_T1__T2__o *SeqIdAndGroupSeqId; // x0
  int32_t v21; // w23
  bool IsRandomTD; // w8
  int32_t RandomSeqIdEachLimit; // w0
  __int64 v24; // x19
  int32_t item2[2]; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-60h] BYREF
  int32_t groupSeqId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_5973890 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_2213A60(&ExecutingTdInfo_TypeInfo);
    sub_2213A60(&Method_System_TupleExtensions_Deconstruct_int__int___);
    byte_5973890 = 1;
  }
  groupSeqId = 0;
  entity = 0;
  v15 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *(_QWORD *)item2 = 0;
  if ( !v15 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&dispLimitCount);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___);
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
  if ( !EntityByDescendingPriority
    || (SeqIdAndGroupSeqId = (System_Tuple_T1__T2__o *)TreasureDeviceSequenceWeightEntity__GetSeqIdAndGroupSeqId(
                                                         EntityByDescendingPriority,
                                                         0),
        System_TupleExtensions__Deconstruct_int__int_(
          SeqIdAndGroupSeqId,
          &item2[1],
          item2,
          (const MethodInfo_39B489C *)Method_System_TupleExtensions_Deconstruct_int__int___),
        v21 = item2[0],
        groupSeqId = item2[0],
        item2[1] <= 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
    if ( !Master_object )
      goto LABEL_21;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           tdId,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
    {
      Master_object = entity;
      groupSeqId = 0;
      if ( !entity )
        goto LABEL_21;
      IsRandomTD = TreasureDvcEntity__IsRandomTD((TreasureDvcEntity_o *)entity, 0);
      Master_object = entity;
      if ( IsRandomTD )
      {
        if ( entity )
        {
          RandomSeqIdEachLimit = TreasureDvcEntity__GetRandomSeqIdEachLimit(
                                   (TreasureDvcEntity_o *)entity,
                                   dispLimitCount,
                                   &groupSeqId,
                                   actSetId,
                                   unitIndex,
                                   0);
          v21 = groupSeqId;
          tdId = RandomSeqIdEachLimit;
          goto LABEL_20;
        }
LABEL_21:
        sub_2213CDC(Master_object, v17);
      }
      if ( !entity )
        goto LABEL_21;
      tdId = TreasureDvcEntity__getSeqId((TreasureDvcEntity_o *)entity, dispLimitCount, unitIndex, 0);
    }
    v21 = 0;
    goto LABEL_20;
  }
  tdId = item2[1];
LABEL_20:
  v24 = sub_2213CCC(ExecutingTdInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0);
  *(_DWORD *)(v24 + 16) = tdId;
  *(_DWORD *)(v24 + 20) = v21;
  return (ExecutingTdInfo_o *)v24;
}


ExecutingTdInfo_o *ExecutingTdInfo__GetDefault(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_597388F & 1) == 0 )
  {
    sub_2213A60(&ExecutingTdInfo_TypeInfo);
    byte_597388F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ExecutingTdInfo_TypeInfo);
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