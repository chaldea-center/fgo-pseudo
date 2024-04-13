void __fastcall EventRewardSceneMaster___ctor(EventRewardSceneMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFFE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EBFFE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    184,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneEntity_o *__fastcall EventRewardSceneMaster__GetEntity(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EBFFC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__GetEntity__,
      eventId,
      slot,
      method);
    byte_42EBFFC = 1;
  }
  PK = EventRewardSceneEntity__CreatePK(eventId, slot, *(const MethodInfo **)&slot);
  return (EventRewardSceneEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23FB260 *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__GetEntity__);
}


EventRewardSceneEntity_array *__fastcall EventRewardSceneMaster__GetEntityList(
        EventRewardSceneMaster_o *this,
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v28; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v30; // w22
  int32_t v31; // w23
  __int64 v32; // x10

  if ( (byte_42EBFFF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventRewardSceneEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRewardSceneEntity__get_Count__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo, v24, v25, v26);
    byte_42EBFFF = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v30 = (int)list;
    v31 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v31,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v28 = list;
      v32 = *(&EventRewardSceneEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v32
        || (EventRewardSceneEntity_c *)list->klass->_2.typeHierarchy[v32 - 1] != EventRewardSceneEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v27 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v27,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__);
      }
      if ( ++v31 >= v30 )
        goto LABEL_14;
    }
LABEL_18:
    sub_B5D69C(list, v28);
  }
LABEL_14:
  if ( !v27 )
    goto LABEL_18;
  if ( v27->fields._size < 1 )
    return 0LL;
  else
    return (EventRewardSceneEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRewardSceneMaster__TryGetEntity(
        EventRewardSceneMaster_o *this,
        EventRewardSceneEntity_o **entity,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EBFFD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&slot);
    byte_42EBFFD = 1;
  }
  PK = EventRewardSceneEntity__CreatePK(eventId, slot, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__TryGetEntity__);
}


EventRewardSceneEntity_array *__fastcall EventRewardSceneMaster__getEntityFromIdAndEventType(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        int32_t eventType,
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
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v29; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v31; // w23
  int32_t v32; // w24
  __int64 v33; // x10

  if ( (byte_42EC000 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      eventType,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&EventRewardSceneEntity_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRewardSceneEntity__get_Count__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo, v25, v26, v27);
    byte_42EC000 = 1;
  }
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v31 = (int)list;
    v32 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v32,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v29 = list;
      v33 = *(&EventRewardSceneEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v33
        || (EventRewardSceneEntity_c *)list->klass->_2.typeHierarchy[v33 - 1] != EventRewardSceneEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields._syncRoot) == eventType )
      {
        if ( !v28 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v28,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__);
      }
      if ( ++v32 >= v31 )
        goto LABEL_15;
    }
LABEL_19:
    sub_B5D69C(list, v29);
  }
LABEL_15:
  if ( !v28 )
    goto LABEL_19;
  if ( v28->fields._size < 1 )
    return 0LL;
  else
    return (EventRewardSceneEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v28,
                                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
}