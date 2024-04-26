void __fastcall EventPointMaster___ctor(EventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4352558 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventPointMaster__EventPointEntity__string___ctor__);
    byte_4352558 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    150,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_EventPointMaster__EventPointEntity__string___ctor__);
}


EventPointEntity_o *__fastcall EventPointMaster__GetEntity(
        EventPointMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4352556 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventPointMaster__EventPointEntity__string__GetEntity__);
    byte_4352556 = 1;
  }
  PK = EventPointEntity__CreatePK(id, eventId, 0LL);
  return (EventPointEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_21C0890 *)Method_DataMasterBase_EventPointMaster__EventPointEntity__string__GetEntity__);
}


bool __fastcall EventPointMaster__TryGetEntity(
        EventPointMaster_o *this,
        EventPointEntity_o **entity,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4352557 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventPointMaster__EventPointEntity__string__TryGetEntity__);
    byte_4352557 = 1;
  }
  PK = EventPointEntity__CreatePK(id, eventId, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_EventPointMaster__EventPointEntity__string__TryGetEntity__);
}