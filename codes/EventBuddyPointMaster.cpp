void __fastcall EventBuddyPointMaster___ctor(EventBuddyPointMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB0FA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EB0FA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    398,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string___ctor__);
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

  if ( (byte_42EB0F8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__GetEntity__,
      eventId,
      questId,
      *(_QWORD *)&questPhase);
    byte_42EB0F8 = 1;
  }
  PK = EventBuddyPointEntity__CreatePK(eventId, questId, questPhase, 0LL);
  return (EventBuddyPointEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_23FB260 *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventBuddyPointEntity_o *__fastcall EventBuddyPointMaster__GetEntityIncludeQuestUnspecified(
        EventBuddyPointMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  void *list; // x0
  EventBuddyPointEntity_o *v16; // x25
  EventBuddyPointEntity_o *v17; // x24
  int32_t v18; // w23
  __int64 v19; // x10
  int v20; // w8
  int v21; // w8

  if ( (byte_42EB0FB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      questId,
      *(_QWORD *)&questPhase);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&EventBuddyPointEntity_TypeInfo, v12, v13, v14);
    byte_42EB0FB = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_21:
    sub_B5D69C(list, *(_QWORD *)&eventId);
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  while ( v18 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v18,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_21;
    v19 = *(&EventBuddyPointEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v19
      || *(EventBuddyPointEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v19 - 8) != EventBuddyPointEntity_TypeInfo )
    {
      goto LABEL_21;
    }
    if ( *((_DWORD *)list + 4) == eventId )
    {
      v20 = *((_DWORD *)list + 5);
      if ( v20 >= 1 && v20 == questId )
      {
        v21 = *((_DWORD *)list + 6);
        if ( v21 >= 1 && v21 == questPhase )
        {
          v16 = (EventBuddyPointEntity_o *)list;
          break;
        }
        if ( !v21 )
          v16 = (EventBuddyPointEntity_o *)list;
      }
      else if ( !v20 )
      {
        v17 = (EventBuddyPointEntity_o *)list;
      }
    }
    list = this->fields.list;
    ++v18;
    if ( !list )
      goto LABEL_21;
  }
  if ( v16 )
    return v16;
  else
    return v17;
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

  if ( (byte_42EB0F9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&questId);
    byte_42EB0F9 = 1;
  }
  PK = EventBuddyPointEntity__CreatePK(eventId, questId, questPhase, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__TryGetEntity__);
}