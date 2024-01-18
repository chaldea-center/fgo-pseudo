void __fastcall ServantCardAddMaster___ctor(ServantCardAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4187C29 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string___ctor__, method);
    byte_4187C29 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    430,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantCardAddEntity_o *__fastcall ServantCardAddMaster__GetEntity(
        ServantCardAddMaster_o *this,
        int32_t svtId,
        int32_t cardId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4187C27 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4187C27 = 1;
  }
  PK = ServantCardAddEntity__CreatePK(svtId, cardId, *(const MethodInfo **)&cardId);
  return (ServantCardAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCardAddMaster__TryGetEntity(
        ServantCardAddMaster_o *this,
        ServantCardAddEntity_o **entity,
        int32_t svtId,
        int32_t cardId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4187C28 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string__TryGetEntity__, entity);
    byte_4187C28 = 1;
  }
  PK = ServantCardAddEntity__CreatePK(svtId, cardId, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string__TryGetEntity__);
}