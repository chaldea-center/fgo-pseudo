void WarGroupIgnoreMaster___ctor(WarGroupIgnoreMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF89C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_WarGroupIgnoreMaster__WarGroupIgnoreEntity__string___ctor__);
    byte_4CEF89C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    533,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_WarGroupIgnoreMaster__WarGroupIgnoreEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarGroupIgnoreEntity_o *WarGroupIgnoreMaster__GetEntity(
        WarGroupIgnoreMaster_o *this,
        int32_t warGroupId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEF89D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_WarGroupIgnoreMaster__WarGroupIgnoreEntity__string__GetEntity__);
    byte_4CEF89D = 1;
  }
  PK = (Il2CppObject *)WarGroupIgnoreEntity__CreatePK(
                         warGroupId,
                         questId,
                         questPhase,
                         *(const MethodInfo **)&questPhase);
  return (WarGroupIgnoreEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_3432DB4 *)Method_DataMasterBase_WarGroupIgnoreMaster__WarGroupIgnoreEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool WarGroupIgnoreMaster__IsIgnoreQuest(
        WarGroupIgnoreMaster_o *this,
        int32_t warGroupId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x23
  const MethodInfo *v10; // x3
  System_String_o *v11; // x20

  if ( (byte_4CEF89B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_WarGroupIgnoreMaster__WarGroupIgnoreEntity__string__isEntityExistsFromId__);
    byte_4CEF89B = 1;
  }
  PK = WarGroupIgnoreEntity__CreatePK(warGroupId, questId, 0, *(const MethodInfo **)&questPhase);
  v11 = WarGroupIgnoreEntity__CreatePK(warGroupId, questId, questPhase, v10);
  return DataMasterBase_object__object__object___isEntityExistsFromId_54732092(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           PK,
           (const MethodInfo_343253C *)Method_DataMasterBase_WarGroupIgnoreMaster__WarGroupIgnoreEntity__string__isEntityExistsFromId__)
      || DataMasterBase_object__object__object___isEntityExistsFromId_54732092(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           v11,
           (const MethodInfo_343253C *)Method_DataMasterBase_WarGroupIgnoreMaster__WarGroupIgnoreEntity__string__isEntityExistsFromId__);
}


// local variable allocation has failed, the output may be wrong!
bool WarGroupIgnoreMaster__TryGetEntity(
        WarGroupIgnoreMaster_o *this,
        WarGroupIgnoreEntity_o **entity,
        int32_t warGroupId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEF89E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_WarGroupIgnoreMaster__WarGroupIgnoreEntity__string__TryGetEntity__);
    byte_4CEF89E = 1;
  }
  PK = (Il2CppObject *)WarGroupIgnoreEntity__CreatePK(warGroupId, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_WarGroupIgnoreMaster__WarGroupIgnoreEntity__string__TryGetEntity__);
}