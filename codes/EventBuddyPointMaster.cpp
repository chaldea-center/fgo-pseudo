void __fastcall EventBuddyPointMaster___ctor(EventBuddyPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438DD57 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string___ctor__);
    byte_438DD57 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    398,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string___ctor__);
}


EventBuddyPointEntity_o *__fastcall EventBuddyPointMaster__GetEntity(
        EventBuddyPointMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438DD55 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__GetEntity__);
    byte_438DD55 = 1;
  }
  PK = EventBuddyPointEntity__CreatePK(eventId, questId, questPhase, 0LL);
  return (EventBuddyPointEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventBuddyPointEntity_o *__fastcall EventBuddyPointMaster__GetEntityIncludeQuestUnspecified(
        EventBuddyPointMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  void *list; // x0
  EventBuddyPointEntity_o *v10; // x25
  EventBuddyPointEntity_o *v11; // x24
  int32_t v12; // w23
  __int64 v13; // x10
  int v14; // w8
  int v15; // w8

  if ( (byte_438DD58 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventBuddyPointEntity_TypeInfo);
    byte_438DD58 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_21:
    sub_B7769C(list, *(_QWORD *)&eventId);
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v12,
             (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_21;
    v13 = *(&EventBuddyPointEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v13
      || *(EventBuddyPointEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v13 - 8) != EventBuddyPointEntity_TypeInfo )
    {
      goto LABEL_21;
    }
    if ( *((_DWORD *)list + 4) == eventId )
    {
      v14 = *((_DWORD *)list + 5);
      if ( v14 >= 1 && v14 == questId )
      {
        v15 = *((_DWORD *)list + 6);
        if ( v15 >= 1 && v15 == questPhase )
        {
          v10 = (EventBuddyPointEntity_o *)list;
          break;
        }
        if ( !v15 )
          v10 = (EventBuddyPointEntity_o *)list;
      }
      else if ( !v14 )
      {
        v11 = (EventBuddyPointEntity_o *)list;
      }
    }
    list = this->fields.list;
    ++v12;
    if ( !list )
      goto LABEL_21;
  }
  if ( v10 )
    return v10;
  else
    return v11;
}


bool __fastcall EventBuddyPointMaster__TryGetEntity(
        EventBuddyPointMaster_o *this,
        EventBuddyPointEntity_o **entity,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438DD56 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__TryGetEntity__);
    byte_438DD56 = 1;
  }
  PK = EventBuddyPointEntity__CreatePK(eventId, questId, questPhase, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__TryGetEntity__);
}