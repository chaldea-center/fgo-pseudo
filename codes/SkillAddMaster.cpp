void __fastcall SkillAddMaster___ctor(SkillAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B0D02 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string___ctor__);
    byte_42B0D02 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    363,
    (const MethodInfo_23E268C *)Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SkillAddEntity_o *__fastcall SkillAddMaster__GetEntity(
        SkillAddMaster_o *this,
        int32_t skillId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B0D03 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string__GetEntity__);
    byte_42B0D03 = 1;
  }
  PK = SkillAddEntity__CreatePK(skillId, priority, *(const MethodInfo **)&priority);
  return (SkillAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                               PK,
                               (const MethodInfo_23E2728 *)Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillAddMaster__TryGetEntity(
        SkillAddMaster_o *this,
        SkillAddEntity_o **entity,
        int32_t skillId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B0D04 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string__TryGetEntity__);
    byte_42B0D04 = 1;
  }
  PK = SkillAddEntity__CreatePK(skillId, priority, *(const MethodInfo **)&skillId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string__TryGetEntity__);
}