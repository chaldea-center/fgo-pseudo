void __fastcall EventExpeditionMaster___ctor(EventExpeditionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A3BC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string___ctor__, method);
    byte_418A3BC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    378,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventExpeditionEntity_o *__fastcall EventExpeditionMaster__GetEntity(
        EventExpeditionMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418A3BD & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_418A3BD = 1;
  }
  PK = EventExpeditionEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventExpeditionEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                      (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_24E4520 *)Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventExpeditionEntity_array *__fastcall EventExpeditionMaster__GetExpeditionEntityList(
        EventExpeditionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  int32_t v16; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x24
  __int64 v18; // x10

  if ( (byte_418A3BF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v6);
    sub_B2C35C(&EventExpeditionEntity_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionEntity__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_418A3BF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  if ( Count >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v16,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v18 = *(&EventExpeditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (EventExpeditionEntity_c *)list->klass->_2.typeHierarchy[v18 - 1] == EventExpeditionEntity_TypeInfo
          && LODWORD(list->fields.items) == eventId )
        {
          if ( !LODWORD(list[2].monitor) )
            goto LABEL_15;
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            break;
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                               (DataManager_o *)list,
                                                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
          if ( !list )
            break;
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CommonReleaseMaster__IsOpen(
                                                                                               (CommonReleaseMaster_o *)list,
                                                                                               v17[1].fields.addCount,
                                                                                               0LL,
                                                                                               0,
                                                                                               0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_15:
            if ( !v15 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v15,
              v17,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
          }
        }
      }
      if ( ++v16 >= Count )
        goto LABEL_18;
    }
LABEL_20:
    sub_B2C434(list, *(_QWORD *)&eventId);
  }
LABEL_18:
  if ( !v15 )
    goto LABEL_20;
  return (EventExpeditionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventExpeditionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventExpeditionMaster__IsBestMatchPiece(
        EventExpeditionMaster_o *this,
        int32_t eventId,
        int32_t placeIdx,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x0
  int32_t v17; // w24
  System_Collections_Generic_IEnumerable_TSource__o **Item; // x0
  __int64 v19; // x10

  if ( (byte_418A3C0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v10);
    sub_B2C35C(&EventExpeditionEntity_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v13);
    byte_418A3C0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B2C434(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  if ( Count < 1 )
    return 0;
  v17 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = (System_Collections_Generic_IEnumerable_TSource__o **)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                   list,
                                                                   v17,
                                                                   (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v19 = *(&EventExpeditionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( BYTE4((*Item)[18].monitor) >= (unsigned int)v19
        && *((EventExpeditionEntity_c **)(*Item)[12].monitor + v19 - 1) == EventExpeditionEntity_TypeInfo
        && *((_DWORD *)Item + 4) == eventId
        && *((_DWORD *)Item + 5) == placeIdx )
      {
        return System_Linq_Enumerable__Contains_int_(
                 Item[7],
                 pieceIdx,
                 (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
      }
    }
    if ( ++v17 >= Count )
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

  if ( (byte_418A3BE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__TryGetEntity__, entity);
    byte_418A3BE = 1;
  }
  PK = EventExpeditionEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__TryGetEntity__);
}