void __fastcall QuestRestrictionInfoMaster___ctor(QuestRestrictionInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B6EF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestRestrictionInfoMaster__QuestRestrictionInfoEntity__string___ctor__);
    byte_4A5B6EF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    355,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_QuestRestrictionInfoMaster__QuestRestrictionInfoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestRestrictionInfoEntity_o *__fastcall QuestRestrictionInfoMaster__GetEntity(
        QuestRestrictionInfoMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B6ED & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestRestrictionInfoMaster__QuestRestrictionInfoEntity__string__GetEntity__);
    byte_4A5B6ED = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionInfoEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestRestrictionInfoEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_311DC8C *)Method_DataMasterBase_QuestRestrictionInfoMaster__QuestRestrictionInfoEntity__string__GetEntity__);
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

  if ( (byte_4A5B6EE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestRestrictionInfoMaster__QuestRestrictionInfoEntity__string__TryGetEntity__);
    byte_4A5B6EE = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionInfoEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_QuestRestrictionInfoMaster__QuestRestrictionInfoEntity__string__TryGetEntity__);
}