void __fastcall EventConquestRewardMaster___ctor(EventConquestRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438DDBA & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventConquestRewardMaster__EventConquestRewardEntity__string___ctor__);
    byte_438DDBA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    273,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventConquestRewardMaster__EventConquestRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventConquestRewardEntity_o *__fastcall EventConquestRewardMaster__GetEntity(
        EventConquestRewardMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t objectType,
        int32_t objectId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438DDB8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventConquestRewardMaster__EventConquestRewardEntity__string__GetEntity__);
    byte_438DDB8 = 1;
  }
  PK = EventConquestRewardEntity__CreatePK(eventId, questId, objectType, objectId, *(const MethodInfo **)&objectId);
  return (EventConquestRewardEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventConquestRewardMaster__EventConquestRewardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventConquestRewardMaster__TryGetEntity(
        EventConquestRewardMaster_o *this,
        EventConquestRewardEntity_o **entity,
        int32_t eventId,
        int32_t questId,
        int32_t objectType,
        int32_t objectId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438DDB9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventConquestRewardMaster__EventConquestRewardEntity__string__TryGetEntity__);
    byte_438DDB9 = 1;
  }
  PK = EventConquestRewardEntity__CreatePK(eventId, questId, objectType, objectId, *(const MethodInfo **)&objectType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventConquestRewardMaster__EventConquestRewardEntity__string__TryGetEntity__);
}


EventConquestRewardEntity_array *__fastcall EventConquestRewardMaster__getList(
        EventConquestRewardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  __int64 v9; // x10

  if ( (byte_438DDBB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventConquestRewardEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventConquestRewardEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventConquestRewardEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventConquestRewardEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventConquestRewardEntity__TypeInfo);
    byte_438DDBB = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventConquestRewardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventConquestRewardEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v8,
                                                                                         (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      v9 = *(&EventConquestRewardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (EventConquestRewardEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == EventConquestRewardEntity_TypeInfo
        && LODWORD(list->fields.items) == eventId )
      {
        if ( !v5 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventConquestRewardEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v5 )
LABEL_17:
    sub_B7769C(list, v6);
  return (EventConquestRewardEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                              (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventConquestRewardEntity__ToArray__);
}