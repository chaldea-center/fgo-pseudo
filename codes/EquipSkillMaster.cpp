void __fastcall EquipSkillMaster___ctor(EquipSkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A1C9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string___ctor__, method);
    byte_418A1C9 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    47,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EquipSkillEntity_o *__fastcall EquipSkillMaster__GetEntity(
        EquipSkillMaster_o *this,
        int32_t equipId,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418A1C7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__GetEntity__, *(_QWORD *)&equipId);
    byte_418A1C7 = 1;
  }
  PK = EquipSkillEntity__CreatePK(equipId, num, *(const MethodInfo **)&num);
  return (EquipSkillEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_24E4520 *)Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EquipSkillMaster__TryGetEntity(
        EquipSkillMaster_o *this,
        EquipSkillEntity_o **entity,
        int32_t equipId,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418A1C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__TryGetEntity__, entity);
    byte_418A1C8 = 1;
  }
  PK = EquipSkillEntity__CreatePK(equipId, num, *(const MethodInfo **)&equipId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__TryGetEntity__);
}