void __fastcall ServantCommandCodeUnlockMaster___ctor(ServantCommandCodeUnlockMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189ED4 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantCommandCodeUnlockMaster__ServantCommandCodeUnlockEntity__string___ctor__,
      method);
    byte_4189ED4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    249,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantCommandCodeUnlockMaster__ServantCommandCodeUnlockEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantCommandCodeUnlockEntity_o *__fastcall ServantCommandCodeUnlockMaster__GetEntity(
        ServantCommandCodeUnlockMaster_o *this,
        int32_t svtId,
        int32_t cardIdx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4189ED2 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantCommandCodeUnlockMaster__ServantCommandCodeUnlockEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4189ED2 = 1;
  }
  PK = ServantCommandCodeUnlockEntity__CreatePK(svtId, cardIdx, *(const MethodInfo **)&cardIdx);
  return (ServantCommandCodeUnlockEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                               (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                               PK,
                                               (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantCommandCodeUnlockMaster__ServantCommandCodeUnlockEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommandCodeUnlockMaster__TryGetEntity(
        ServantCommandCodeUnlockMaster_o *this,
        ServantCommandCodeUnlockEntity_o **entity,
        int32_t svtId,
        int32_t cardIdx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4189ED3 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantCommandCodeUnlockMaster__ServantCommandCodeUnlockEntity__string__TryGetEntity__,
      entity);
    byte_4189ED3 = 1;
  }
  PK = ServantCommandCodeUnlockEntity__CreatePK(svtId, cardIdx, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantCommandCodeUnlockMaster__ServantCommandCodeUnlockEntity__string__TryGetEntity__);
}