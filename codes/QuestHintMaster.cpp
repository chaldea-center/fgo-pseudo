void __fastcall QuestHintMaster___ctor(QuestHintMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438BC6D & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string___ctor__);
    byte_438BC6D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    438,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestHintEntity_o *__fastcall QuestHintMaster__GetEntity(
        QuestHintMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438BC6E & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__GetEntity__);
    byte_438BC6E = 1;
  }
  PK = QuestHintEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questPhase);
  return (QuestHintEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_21FBCE4 *)Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestHintMaster__TryGetEntity(
        QuestHintMaster_o *this,
        QuestHintEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438BC6F & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__TryGetEntity__);
    byte_438BC6F = 1;
  }
  PK = QuestHintEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__TryGetEntity__);
}