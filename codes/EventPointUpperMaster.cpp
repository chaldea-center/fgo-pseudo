void __fastcall EventPointUpperMaster___ctor(EventPointUpperMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4352569 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__);
    byte_4352569 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    284,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__);
}


EventPointUpperEntity_array *__fastcall EventPointUpperMaster__GetEntitiesFromEventId(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  __int64 v9; // x10

  if ( (byte_435256A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&EventPointUpperEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
    byte_435256A = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        v9 = *(&EventPointUpperEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (EventPointUpperEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == EventPointUpperEntity_TypeInfo )
        {
          if ( LODWORD(list[1].klass) == eventId )
          {
            if ( !v5 )
              goto LABEL_17;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v5,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventPointUpperEntity__Add__);
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v8;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_17;
  }
  if ( !v5 )
LABEL_17:
    sub_B7076C(list, v6);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                          (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventPointUpperEntity_o *__fastcall EventPointUpperMaster__GetEntity(
        EventPointUpperMaster_o *this,
        int32_t version,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4352567 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__);
    byte_4352567 = 1;
  }
  PK = EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&priority);
  return (EventPointUpperEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_21C0890 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointUpperMaster__TryGetEntity(
        EventPointUpperMaster_o *this,
        EventPointUpperEntity_o **entity,
        int32_t version,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4352568 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__);
    byte_4352568 = 1;
  }
  PK = EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__);
}


EventPointUpperEntity_array *__fastcall EventPointUpperMaster__getList(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v10; // w23
  __int64 v11; // x10

  if ( (byte_435256B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&EventPointUpperEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
    byte_435256B = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v10 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v10,
                                                                                         (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v8 = list;
      v11 = *(&EventPointUpperEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (EventPointUpperEntity_c *)list->klass->_2.typeHierarchy[v11 - 1] == EventPointUpperEntity_TypeInfo
        && LODWORD(list[1].klass) == eventId
        && HIDWORD(list->fields._syncRoot) == groupId )
      {
        if ( !v7 )
          goto LABEL_18;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventPointUpperEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v7 )
LABEL_18:
    sub_B7076C(list, v8);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                          (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
}


int32_t __fastcall EventPointUpperMaster__getPointUpper(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  int32_t Value; // w19
  const MethodInfo *v8; // x3
  DataManager_o *List; // x0
  __int64 v10; // x1
  DataManager_o *v11; // x20
  const MethodInfo *v12; // x2
  struct DataMasterBase_array *datalist; // x8
  EventPointUpperReleaseMaster_o *v14; // x21
  unsigned __int64 v15; // x24
  __int64 v16; // x23
  char v17; // w25
  __int64 v18; // x22
  __int64 v20; // x0

  if ( (byte_435256C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_8793/*"MAX_EVENT_POINT"*/);
    byte_435256C = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8793/*"MAX_EVENT_POINT"*/, 0LL);
  List = (DataManager_o *)EventPointUpperMaster__getList(this, eventId, groupId, v8);
  if ( !List )
    goto LABEL_23;
  v11 = List;
  if ( List->fields.datalist )
  {
    List = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( List )
    {
      List = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                List,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
      datalist = v11->fields.datalist;
      if ( (int)datalist >= 1 )
      {
        v14 = (EventPointUpperReleaseMaster_o *)List;
        v15 = 0LL;
        v16 = 0LL;
        v17 = 1;
        do
        {
          if ( v15 >= (unsigned int)datalist )
          {
            v20 = sub_B70798(List);
            sub_B70738(v20, 0LL);
          }
          v18 = *((_QWORD *)&v11->fields.lookup + v15);
          if ( !v16 )
            goto LABEL_12;
          if ( !v18 )
            goto LABEL_23;
          if ( *(_DWORD *)(v16 + 24) < *(_DWORD *)(v18 + 24) )
          {
LABEL_12:
            if ( !v14 )
              goto LABEL_23;
            List = (DataManager_o *)EventPointUpperReleaseMaster__IsOpen(
                                      v14,
                                      *((EventPointUpperEntity_o **)&v11->fields.lookup + v15),
                                      v12);
            LODWORD(datalist) = v11->fields.datalist;
            if ( ((unsigned __int8)List & 1) != 0 )
              v16 = v18;
            v17 &= (unsigned __int8)List;
          }
          ++v15;
        }
        while ( (__int64)v15 < (int)datalist );
        if ( v16 )
        {
          if ( (v17 & 1) == 0 )
            return *(_DWORD *)(v16 + 36);
        }
        else if ( (v17 & 1) == 0 )
        {
          return Value;
        }
      }
      return 0;
    }
LABEL_23:
    sub_B7076C(List, v10);
  }
  return Value;
}