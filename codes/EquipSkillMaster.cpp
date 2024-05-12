void __fastcall EquipSkillMaster___ctor(EquipSkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438E7DD & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string___ctor__);
    byte_438E7DD = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    48,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EquipSkillEntity_o *__fastcall EquipSkillMaster__GetEntity(
        EquipSkillMaster_o *this,
        int32_t equipId,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438E7DB & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__GetEntity__);
    byte_438E7DB = 1;
  }
  PK = EquipSkillEntity__CreatePK(equipId, num, *(const MethodInfo **)&num);
  return (EquipSkillEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__GetEntity__);
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

  if ( (byte_438E7DC & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__TryGetEntity__);
    byte_438E7DC = 1;
  }
  PK = EquipSkillEntity__CreatePK(equipId, num, *(const MethodInfo **)&equipId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__TryGetEntity__);
}