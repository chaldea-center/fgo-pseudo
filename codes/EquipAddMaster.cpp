void __fastcall EquipAddMaster___ctor(EquipAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438FAB8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string___ctor__);
    byte_438FAB8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    404,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EquipAddEntity_o *__fastcall EquipAddMaster__GetEntity(
        EquipAddMaster_o *this,
        int32_t id,
        int32_t equipId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438FAB9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string__GetEntity__);
    byte_438FAB9 = 1;
  }
  PK = EquipAddEntity__CreatePK(id, equipId, *(const MethodInfo **)&equipId);
  return (EquipAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                               PK,
                               (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string__GetEntity__);
}