void __fastcall EventExpeditionPieceMaster___ctor(EventExpeditionPieceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A3C3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string___ctor__, method);
    byte_418A3C3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    379,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventExpeditionPieceEntity_o *__fastcall EventExpeditionPieceMaster__GetEntity(
        EventExpeditionPieceMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418A3C4 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_418A3C4 = 1;
  }
  PK = EventExpeditionPieceEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventExpeditionPieceEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_24E4520 *)Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventExpeditionPieceEntity__o *__fastcall EventExpeditionPieceMaster__GetPieceEntityList(
        EventExpeditionPieceMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x22
  int32_t v13; // w23
  __int64 v14; // x10

  v3 = eventId;
  if ( (byte_418A3C7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&EventExpeditionPieceEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo, v9);
    byte_418A3C7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
  if ( Count >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v13,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&eventId = list;
        v14 = *(&EventExpeditionPieceEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (EventExpeditionPieceEntity_c *)list->klass->_2.typeHierarchy[v14 - 1] == EventExpeditionPieceEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v12 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__Add__);
        }
      }
      if ( ++v13 >= Count )
        return (System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v12;
    }
LABEL_15:
    sub_B2C434(list, *(_QWORD *)&eventId);
  }
  return (System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventExpeditionPieceEntity__o *__fastcall EventExpeditionPieceMaster__GetReleasePieceEntityList(
        EventExpeditionPieceMaster_o *this,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x22
  int32_t v15; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x24
  __int64 v17; // x10

  if ( (byte_418A3C6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v6);
    sub_B2C35C(&EventExpeditionPieceEntity_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_418A3C6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v15,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v17 = *(&EventExpeditionPieceEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (EventExpeditionPieceEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] == EventExpeditionPieceEntity_TypeInfo
          && LODWORD(list->fields.items) == eventId )
        {
          if ( !LODWORD(list[1].monitor) )
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
                                                                                               (int32_t)v16[1].klass,
                                                                                               0LL,
                                                                                               0,
                                                                                               0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_15:
            if ( !v14 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v14,
              v16,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__Add__);
          }
        }
      }
      if ( ++v15 >= Count )
        return (System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v14;
    }
LABEL_19:
    sub_B2C434(list, *(_QWORD *)&eventId);
  }
  return (System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v14;
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

  if ( (byte_418A3C5 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string__TryGetEntity__,
      entity);
    byte_418A3C5 = 1;
  }
  PK = EventExpeditionPieceEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string__TryGetEntity__);
}