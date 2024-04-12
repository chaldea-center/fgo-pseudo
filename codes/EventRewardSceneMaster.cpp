void __fastcall EventRewardSceneMaster___ctor(EventRewardSceneMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B3440 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string___ctor__);
    byte_42B3440 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    184,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneEntity_o *__fastcall EventRewardSceneMaster__GetEntity(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B343E & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__GetEntity__);
    byte_42B343E = 1;
  }
  PK = EventRewardSceneEntity__CreatePK(eventId, slot, *(const MethodInfo **)&slot);
  return (EventRewardSceneEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23E2728 *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__GetEntity__);
}


EventRewardSceneEntity_array *__fastcall EventRewardSceneMaster__GetEntityList(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  __int64 v10; // x10

  if ( (byte_42B3441 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventRewardSceneEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRewardSceneEntity__get_Count__);
    sub_B52984(&System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
    byte_42B3441 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v9,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v6 = list;
      v10 = *(&EventRewardSceneEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (EventRewardSceneEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] != EventRewardSceneEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v5 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__);
      }
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
LABEL_18:
    sub_B52A5C(list, v6);
  }
LABEL_14:
  if ( !v5 )
    goto LABEL_18;
  if ( v5->fields._size < 1 )
    return 0LL;
  else
    return (EventRewardSceneEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                             (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
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

  if ( (byte_42B343F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__TryGetEntity__);
    byte_42B343F = 1;
  }
  PK = EventRewardSceneEntity__CreatePK(eventId, slot, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__TryGetEntity__);
}


EventRewardSceneEntity_array *__fastcall EventRewardSceneMaster__getEntityFromIdAndEventType(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        int32_t eventType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v10; // w23
  int32_t v11; // w24
  __int64 v12; // x10

  if ( (byte_42B3442 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventRewardSceneEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRewardSceneEntity__get_Count__);
    sub_B52984(&System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
    byte_42B3442 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v10 = (int)list;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v11,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v8 = list;
      v12 = *(&EventRewardSceneEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (EventRewardSceneEntity_c *)list->klass->_2.typeHierarchy[v12 - 1] != EventRewardSceneEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields._syncRoot) == eventType )
      {
        if ( !v7 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__);
      }
      if ( ++v11 >= v10 )
        goto LABEL_15;
    }
LABEL_19:
    sub_B52A5C(list, v8);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_19;
  if ( v7->fields._size < 1 )
    return 0LL;
  else
    return (EventRewardSceneEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                             (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
}