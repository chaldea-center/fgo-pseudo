void __fastcall EventExpeditionPieceMaster___ctor(EventExpeditionPieceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2851 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string___ctor__);
    byte_42B2851 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    380,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventExpeditionPieceEntity_o *__fastcall EventExpeditionPieceMaster__GetEntity(
        EventExpeditionPieceMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B2852 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string__GetEntity__);
    byte_42B2852 = 1;
  }
  PK = EventExpeditionPieceEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventExpeditionPieceEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                           (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_23E2728 *)Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventExpeditionPieceEntity__o *__fastcall EventExpeditionPieceMaster__GetPieceEntityList(
        EventExpeditionPieceMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  int32_t v8; // w23
  __int64 v9; // x10

  v3 = eventId;
  if ( (byte_42B2855 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventExpeditionPieceEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
    byte_42B2855 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
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
        *(_QWORD *)&eventId = list;
        v9 = *(&EventExpeditionPieceEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (EventExpeditionPieceEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == EventExpeditionPieceEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__Add__);
        }
      }
      if ( ++v8 >= Count )
        return (System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v7;
    }
LABEL_15:
    sub_B52A5C(list, *(_QWORD *)&eventId);
  }
  return (System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventExpeditionPieceEntity__o *__fastcall EventExpeditionPieceMaster__GetReleasePieceEntityList(
        EventExpeditionPieceMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  int32_t v8; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v9; // x24
  __int64 v10; // x10

  if ( (byte_42B2854 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B52984(&EventExpeditionPieceEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2854 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
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
        v10 = *(&EventExpeditionPieceEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (EventExpeditionPieceEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] == EventExpeditionPieceEntity_TypeInfo
          && LODWORD(list->fields.items) == eventId )
        {
          if ( !LODWORD(list[1].monitor) )
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
                                                                                               (int32_t)v9[1].klass,
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
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__Add__);
          }
        }
      }
      if ( ++v8 >= Count )
        return (System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v7;
    }
LABEL_19:
    sub_B52A5C(list, *(_QWORD *)&eventId);
  }
  return (System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventExpeditionPieceMaster__TryGetEntity(
        EventExpeditionPieceMaster_o *this,
        EventExpeditionPieceEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B2853 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string__TryGetEntity__);
    byte_42B2853 = 1;
  }
  PK = EventExpeditionPieceEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string__TryGetEntity__);
}