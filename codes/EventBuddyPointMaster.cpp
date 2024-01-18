void __fastcall EventBuddyPointMaster___ctor(EventBuddyPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A253 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string___ctor__, method);
    byte_418A253 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    397,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventBuddyPointEntity_o *__fastcall EventBuddyPointMaster__GetEntity(
        EventBuddyPointMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418A251 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_418A251 = 1;
  }
  PK = EventBuddyPointEntity__CreatePK(eventId, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (EventBuddyPointEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                      (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_24E4520 *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventBuddyPointEntity_o *__fastcall EventBuddyPointMaster__GetEntityIncludeQuestUnspecified(
        EventBuddyPointMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  void *list; // x0
  EventBuddyPointEntity_o *v12; // x25
  EventBuddyPointEntity_o *v13; // x24
  int32_t v14; // w23
  __int64 v15; // x10
  int v16; // w8
  int v17; // w8

  if ( (byte_418A254 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&EventBuddyPointEntity_TypeInfo, v10);
    byte_418A254 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_21:
    sub_B2C434(list, *(_QWORD *)&eventId);
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  while ( v14 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v14,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_21;
    v15 = *(&EventBuddyPointEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v15
      || *(EventBuddyPointEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v15 - 8) != EventBuddyPointEntity_TypeInfo )
    {
      goto LABEL_21;
    }
    if ( *((_DWORD *)list + 4) == eventId )
    {
      v16 = *((_DWORD *)list + 5);
      if ( v16 >= 1 && v16 == questId )
      {
        v17 = *((_DWORD *)list + 6);
        if ( v17 >= 1 && v17 == questPhase )
        {
          v12 = (EventBuddyPointEntity_o *)list;
          break;
        }
        if ( !v17 )
          v12 = (EventBuddyPointEntity_o *)list;
      }
      else if ( !v16 )
      {
        v13 = (EventBuddyPointEntity_o *)list;
      }
    }
    list = this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_21;
  }
  if ( v12 )
    return v12;
  else
    return v13;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBuddyPointMaster__TryGetEntity(
        EventBuddyPointMaster_o *this,
        EventBuddyPointEntity_o **entity,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418A252 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__TryGetEntity__, entity);
    byte_418A252 = 1;
  }
  PK = EventBuddyPointEntity__CreatePK(eventId, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__TryGetEntity__);
}