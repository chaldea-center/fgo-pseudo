void __fastcall QuestRestrictionInfoMaster___ctor(QuestRestrictionInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418AF5C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestRestrictionInfoMaster__QuestRestrictionInfoEntity__string___ctor__, method);
    byte_418AF5C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    353,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_QuestRestrictionInfoMaster__QuestRestrictionInfoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestRestrictionInfoEntity_o *__fastcall QuestRestrictionInfoMaster__GetEntity(
        QuestRestrictionInfoMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418AF5A & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_QuestRestrictionInfoMaster__QuestRestrictionInfoEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_418AF5A = 1;
  }
  PK = QuestRestrictionInfoEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestRestrictionInfoEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_24E4520 *)Method_DataMasterBase_QuestRestrictionInfoMaster__QuestRestrictionInfoEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfoMaster__TryGetEntity(
        QuestRestrictionInfoMaster_o *this,
        QuestRestrictionInfoEntity_o **entity,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418AF5B & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_QuestRestrictionInfoMaster__QuestRestrictionInfoEntity__string__TryGetEntity__,
      entity);
    byte_418AF5B = 1;
  }
  PK = QuestRestrictionInfoEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_QuestRestrictionInfoMaster__QuestRestrictionInfoEntity__string__TryGetEntity__);
}