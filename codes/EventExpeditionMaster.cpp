void __fastcall EventExpeditionMaster___ctor(EventExpeditionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B284A & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string___ctor__);
    byte_42B284A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    379,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventExpeditionEntity_o *__fastcall EventExpeditionMaster__GetEntity(
        EventExpeditionMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B284B & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__GetEntity__);
    byte_42B284B = 1;
  }
  PK = EventExpeditionEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventExpeditionEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_23E2728 *)Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventExpeditionEntity_array *__fastcall EventExpeditionMaster__GetExpeditionEntityList(
        EventExpeditionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  int32_t v8; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v9; // x24
  __int64 v10; // x10

  if ( (byte_42B284D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B52984(&EventExpeditionEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventExpeditionEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B284D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v9 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v10 = *(&EventExpeditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (EventExpeditionEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] == EventExpeditionEntity_TypeInfo
          && LODWORD(list->fields.items) == eventId )
        {
          if ( !LODWORD(list[2].monitor) )
            goto LABEL_15;
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            break;
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                               (DataManager_o *)list,
                                                                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
          if ( !list )
            break;
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CommonReleaseMaster__IsOpen(
                                                                                               (CommonReleaseMaster_o *)list,
                                                                                               v9[1].fields.addCount,
                                                                                               0LL,
                                                                                               0,
                                                                                               0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_15:
            if ( !v7 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v7,
              v9,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
          }
        }
      }
      if ( ++v8 >= Count )
        goto LABEL_18;
    }
LABEL_20:
    sub_B52A5C(list, *(_QWORD *)&eventId);
  }
LABEL_18:
  if ( !v7 )
    goto LABEL_20;
  return (EventExpeditionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                          (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventExpeditionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventExpeditionMaster__IsBestMatchPiece(
        EventExpeditionMaster_o *this,
        int32_t eventId,
        int32_t placeIdx,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x0
  int32_t v12; // w24
  System_Collections_Generic_IEnumerable_TSource__o **Item; // x0
  __int64 v14; // x10

  if ( (byte_42B284E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B52984(&EventExpeditionEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    byte_42B284E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B52A5C(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  if ( Count < 1 )
    return 0;
  v12 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = (System_Collections_Generic_IEnumerable_TSource__o **)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                   list,
                                                                   v12,
                                                                   (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v14 = *(&EventExpeditionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( BYTE4((*Item)[18].monitor) >= (unsigned int)v14
        && *((EventExpeditionEntity_c **)(*Item)[12].monitor + v14 - 1) == EventExpeditionEntity_TypeInfo
        && *((_DWORD *)Item + 4) == eventId
        && *((_DWORD *)Item + 5) == placeIdx )
      {
        return System_Linq_Enumerable__Contains_int_(
                 Item[7],
                 pieceIdx,
                 (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___);
      }
    }
    if ( ++v12 >= Count )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventExpeditionMaster__TryGetEntity(
        EventExpeditionMaster_o *this,
        EventExpeditionEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B284C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__TryGetEntity__);
    byte_42B284C = 1;
  }
  PK = EventExpeditionEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__TryGetEntity__);
}