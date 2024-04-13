void __fastcall ServantCardMaster___ctor(ServantCardMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E994C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ServantCardMaster__ServantCardEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E994C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    11,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantCardMaster__ServantCardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantCardEntity_o *__fastcall ServantCardMaster__GetEntity(
        ServantCardMaster_o *this,
        int32_t svtId,
        int32_t cardId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E994A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ServantCardMaster__ServantCardEntity__string__GetEntity__, svtId, cardId, method);
    byte_42E994A = 1;
  }
  PK = ServantCardEntity__CreatePK(svtId, cardId, *(const MethodInfo **)&cardId);
  return (ServantCardEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantCardMaster__ServantCardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCardMaster__TryGetEntity(
        ServantCardMaster_o *this,
        ServantCardEntity_o **entity,
        int32_t svtId,
        int32_t cardId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E994B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantCardMaster__ServantCardEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&cardId);
    byte_42E994B = 1;
  }
  PK = ServantCardEntity__CreatePK(svtId, cardId, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantCardMaster__ServantCardEntity__string__TryGetEntity__);
}