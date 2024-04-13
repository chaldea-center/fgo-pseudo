void __fastcall EventPointMaster___ctor(EventPointMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8DD2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventPointMaster__EventPointEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E8DD2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    150,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventPointMaster__EventPointEntity__string___ctor__);
}


EventPointEntity_o *__fastcall EventPointMaster__GetEntity(
        EventPointMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E8DD0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventPointMaster__EventPointEntity__string__GetEntity__, id, eventId, method);
    byte_42E8DD0 = 1;
  }
  PK = EventPointEntity__CreatePK(id, eventId, 0LL);
  return (EventPointEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_23FB260 *)Method_DataMasterBase_EventPointMaster__EventPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointMaster__TryGetEntity(
        EventPointMaster_o *this,
        EventPointEntity_o **entity,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E8DD1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventPointMaster__EventPointEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&eventId);
    byte_42E8DD1 = 1;
  }
  PK = EventPointEntity__CreatePK(id, eventId, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventPointMaster__EventPointEntity__string__TryGetEntity__);
}