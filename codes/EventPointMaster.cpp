void __fastcall EventPointMaster___ctor(EventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41878EC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventPointMaster__EventPointEntity__string___ctor__, method);
    byte_41878EC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    149,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventPointMaster__EventPointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointEntity_o *__fastcall EventPointMaster__GetEntity(
        EventPointMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_41878EA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventPointMaster__EventPointEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_41878EA = 1;
  }
  PK = EventPointEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventPointEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_24E4520 *)Method_DataMasterBase_EventPointMaster__EventPointEntity__string__GetEntity__);
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

  if ( (byte_41878EB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventPointMaster__EventPointEntity__string__TryGetEntity__, entity);
    byte_41878EB = 1;
  }
  PK = EventPointEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventPointMaster__EventPointEntity__string__TryGetEntity__);
}