void __fastcall MasterPhotoMaster___ctor(MasterPhotoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438BB91 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_MasterPhotoMaster__MasterPhotoEntity__string___ctor__);
    byte_438BB91 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    482,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_MasterPhotoMaster__MasterPhotoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MasterPhotoEntity_o *__fastcall MasterPhotoMaster__GetEntity(
        MasterPhotoMaster_o *this,
        int32_t equipId,
        int32_t type,
        int32_t position,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438BB92 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_MasterPhotoMaster__MasterPhotoEntity__string__GetEntity__);
    byte_438BB92 = 1;
  }
  PK = MasterPhotoEntity__CreatePK(equipId, type, position, *(const MethodInfo **)&position);
  return (MasterPhotoEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_21FBCE4 *)Method_DataMasterBase_MasterPhotoMaster__MasterPhotoEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MasterPhotoMaster__TryGetEntity(
        MasterPhotoMaster_o *this,
        MasterPhotoEntity_o **entity,
        int32_t equipId,
        int32_t type,
        int32_t position,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438BB93 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_MasterPhotoMaster__MasterPhotoEntity__string__TryGetEntity__);
    byte_438BB93 = 1;
  }
  PK = MasterPhotoEntity__CreatePK(equipId, type, position, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_MasterPhotoMaster__MasterPhotoEntity__string__TryGetEntity__);
}