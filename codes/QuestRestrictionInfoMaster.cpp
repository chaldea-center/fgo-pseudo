void __fastcall QuestRestrictionInfoMaster___ctor(QuestRestrictionInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB47F & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_QuestRestrictionInfoMaster__QuestRestrictionInfoEntity__string___ctor__, method);
    byte_49BB47F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    361,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_QuestRestrictionInfoMaster__QuestRestrictionInfoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestRestrictionInfoEntity_o *__fastcall QuestRestrictionInfoMaster__GetEntity(
        QuestRestrictionInfoMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BB47D & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_QuestRestrictionInfoMaster__QuestRestrictionInfoEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_49BB47D = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionInfoEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestRestrictionInfoEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_31A2454 *)Method_DataMasterBase_QuestRestrictionInfoMaster__QuestRestrictionInfoEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfoMaster__TryGetEntity(
        QuestRestrictionInfoMaster_o *this,
        QuestRestrictionInfoEntity_o **entity,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BB47E & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_QuestRestrictionInfoMaster__QuestRestrictionInfoEntity__string__TryGetEntity__,
      entity);
    byte_49BB47E = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionInfoEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_QuestRestrictionInfoMaster__QuestRestrictionInfoEntity__string__TryGetEntity__);
}