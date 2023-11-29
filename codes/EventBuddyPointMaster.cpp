void __fastcall EventBuddyPointMaster___ctor(EventBuddyPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC582 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string___ctor__, method);
    byte_40FC582 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    397,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string___ctor__);
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

  if ( (byte_40FC580 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_40FC580 = 1;
  }
  PK = EventBuddyPointEntity__CreatePK(eventId, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (EventBuddyPointEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                      (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  EventBuddyPointEntity_o *v12; // x25
  EventBuddyPointEntity_o *v13; // x24
  int32_t v14; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v15; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v17; // x10
  int klass_high; // w8
  int monitor; // w8

  if ( (byte_40FC583 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&EventBuddyPointEntity_TypeInfo, v10);
    byte_40FC583 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_B170D4();
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  while ( v14 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v15 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v15 )
      goto LABEL_21;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v15,
             v14,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_21;
    v17 = *(&EventBuddyPointEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v17
      || (EventBuddyPointEntity_c *)Item->klass->_2.typeHierarchy[v17 - 1] != EventBuddyPointEntity_TypeInfo )
    {
      goto LABEL_21;
    }
    if ( LODWORD(Item[1].klass) == eventId )
    {
      klass_high = HIDWORD(Item[1].klass);
      if ( klass_high >= 1 && klass_high == questId )
      {
        monitor = (int)Item[1].monitor;
        if ( monitor >= 1 && monitor == questPhase )
        {
          v12 = (EventBuddyPointEntity_o *)Item;
          break;
        }
        if ( !monitor )
          v12 = (EventBuddyPointEntity_o *)Item;
      }
      else if ( !klass_high )
      {
        v13 = (EventBuddyPointEntity_o *)Item;
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
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

  if ( (byte_40FC581 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__TryGetEntity__, entity);
    byte_40FC581 = 1;
  }
  PK = EventBuddyPointEntity__CreatePK(eventId, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__TryGetEntity__);
}