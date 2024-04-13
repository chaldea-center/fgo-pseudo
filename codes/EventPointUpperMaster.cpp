void __fastcall EventPointUpperMaster___ctor(EventPointUpperMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8DE3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E8DE3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    284,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__);
}


EventPointUpperEntity_array *__fastcall EventPointUpperMaster__GetEntitiesFromEventId(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v27; // w22
  __int64 v28; // x10

  if ( (byte_42E8DE4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventPointUpperEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo, v21, v22, v23);
    byte_42E8DE4 = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v27 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v27 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v25 = list;
        v28 = *(&EventPointUpperEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (EventPointUpperEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == EventPointUpperEntity_TypeInfo )
        {
          if ( LODWORD(list[1].klass) == eventId )
          {
            if ( !v24 )
              goto LABEL_17;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v24,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventPointUpperEntity__Add__);
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v27;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_17;
  }
  if ( !v24 )
LABEL_17:
    sub_B5D69C(list, v25);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
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

  if ( (byte_42E8DE1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__,
      version,
      id,
      *(_QWORD *)&priority);
    byte_42E8DE1 = 1;
  }
  PK = EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&priority);
  return (EventPointUpperEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_23FB260 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__);
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

  if ( (byte_42E8DE2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__,
      (_DWORD)entity,
      version,
      *(_QWORD *)&id);
    byte_42E8DE2 = 1;
  }
  PK = EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__);
}


EventPointUpperEntity_array *__fastcall EventPointUpperMaster__getList(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v26; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v28; // w23
  __int64 v29; // x10

  if ( (byte_42E8DE5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, groupId, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&EventPointUpperEntity_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo, v22, v23, v24);
    byte_42E8DE5 = 1;
  }
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v28 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v28 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v28,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v26 = list;
      v29 = *(&EventPointUpperEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v29
        && (EventPointUpperEntity_c *)list->klass->_2.typeHierarchy[v29 - 1] == EventPointUpperEntity_TypeInfo
        && LODWORD(list[1].klass) == eventId
        && HIDWORD(list->fields._syncRoot) == groupId )
      {
        if ( !v25 )
          goto LABEL_18;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v25,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventPointUpperEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v28;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v25 )
LABEL_18:
    sub_B5D69C(list, v26);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v25,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
}


int32_t __fastcall EventPointUpperMaster__getPointUpper(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int32_t Value; // w19
  const MethodInfo *v14; // x3
  DataManager_o *List; // x0
  __int64 v16; // x1
  DataManager_o *v17; // x20
  const MethodInfo *v18; // x2
  struct DataMasterBase_array *datalist; // x8
  EventPointUpperReleaseMaster_o *v20; // x21
  unsigned __int64 v21; // x24
  __int64 v22; // x23
  char v23; // w25
  __int64 v24; // x22
  __int64 v26; // x0

  if ( (byte_42E8DE6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___, eventId, groupId, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_8778/*"MAX_EVENT_POINT"*/, v10, v11, v12);
    byte_42E8DE6 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8778/*"MAX_EVENT_POINT"*/, 0LL);
  List = (DataManager_o *)EventPointUpperMaster__getList(this, eventId, groupId, v14);
  if ( !List )
    goto LABEL_23;
  v17 = List;
  if ( List->fields.datalist )
  {
    List = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( List )
    {
      List = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                List,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
      datalist = v17->fields.datalist;
      if ( (int)datalist >= 1 )
      {
        v20 = (EventPointUpperReleaseMaster_o *)List;
        v21 = 0LL;
        v22 = 0LL;
        v23 = 1;
        do
        {
          if ( v21 >= (unsigned int)datalist )
          {
            v26 = sub_B5D6C8(List);
            sub_B5D668(v26, 0LL);
          }
          v24 = *((_QWORD *)&v17->fields.lookup + v21);
          if ( !v22 )
            goto LABEL_12;
          if ( !v24 )
            goto LABEL_23;
          if ( *(_DWORD *)(v22 + 24) < *(_DWORD *)(v24 + 24) )
          {
LABEL_12:
            if ( !v20 )
              goto LABEL_23;
            List = (DataManager_o *)EventPointUpperReleaseMaster__IsOpen(
                                      v20,
                                      *((EventPointUpperEntity_o **)&v17->fields.lookup + v21),
                                      v18);
            LODWORD(datalist) = v17->fields.datalist;
            if ( ((unsigned __int8)List & 1) != 0 )
              v22 = v24;
            v23 &= (unsigned __int8)List;
          }
          ++v21;
        }
        while ( (__int64)v21 < (int)datalist );
        if ( v22 )
        {
          if ( (v23 & 1) == 0 )
            return *(_DWORD *)(v22 + 36);
        }
        else if ( (v23 & 1) == 0 )
        {
          return Value;
        }
      }
      return 0;
    }
LABEL_23:
    sub_B5D69C(List, v16);
  }
  return Value;
}