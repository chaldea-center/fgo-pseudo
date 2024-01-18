void __fastcall EquipAddMaster___ctor(EquipAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418BDB3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string___ctor__, method);
    byte_418BDB3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    403,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EquipAddEntity_o *__fastcall EquipAddMaster__GetEntity(
        EquipAddMaster_o *this,
        int32_t id,
        int32_t equipId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418BDB4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_418BDB4 = 1;
  }
  PK = EquipAddEntity__CreatePK(id, equipId, *(const MethodInfo **)&equipId);
  return (EquipAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                               (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                               PK,
                               (const MethodInfo_24E4520 *)Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string__GetEntity__);
}