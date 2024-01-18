void __fastcall CombineSkillMaster___ctor(CombineSkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188067 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string___ctor__, method);
    byte_4188067 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    86,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineSkillEntity_o *__fastcall CombineSkillMaster__GetEntity(
        CombineSkillMaster_o *this,
        int32_t id,
        int32_t skillLv,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4188065 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4188065 = 1;
  }
  PK = CombineSkillEntity__CreatePK(id, skillLv, *(const MethodInfo **)&skillLv);
  return (CombineSkillEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_24E4520 *)Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineSkillMaster__TryGetEntity(
        CombineSkillMaster_o *this,
        CombineSkillEntity_o **entity,
        int32_t id,
        int32_t skillLv,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4188066 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__TryGetEntity__, entity);
    byte_4188066 = 1;
  }
  PK = CombineSkillEntity__CreatePK(id, skillLv, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__TryGetEntity__);
}