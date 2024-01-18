void __fastcall EventRewardSceneMaster___ctor(EventRewardSceneMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A93A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string___ctor__, method);
    byte_418A93A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    183,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneEntity_o *__fastcall EventRewardSceneMaster__GetEntity(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418A938 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_418A938 = 1;
  }
  PK = EventRewardSceneEntity__CreatePK(eventId, slot, *(const MethodInfo **)&slot);
  return (EventRewardSceneEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_24E4520 *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneEntity_array *__fastcall EventRewardSceneMaster__GetEntityList(
        EventRewardSceneMaster_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v15; // w22
  int32_t v16; // w23
  __int64 v17; // x10

  if ( (byte_418A93B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&EventRewardSceneEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardSceneEntity__get_Count__, v10);
    sub_B2C35C(&System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo, v11);
    byte_418A93B = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v15 = (int)list;
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
      if ( !list )
        break;
      v13 = list;
      v17 = *(&EventRewardSceneEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v17
        || (EventRewardSceneEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] != EventRewardSceneEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v12 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__);
      }
      if ( ++v16 >= v15 )
        goto LABEL_14;
    }
LABEL_18:
    sub_B2C434(list, v13);
  }
LABEL_14:
  if ( !v12 )
    goto LABEL_18;
  if ( v12->fields._size < 1 )
    return 0LL;
  else
    return (EventRewardSceneEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                             (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
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

  if ( (byte_418A939 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__TryGetEntity__, entity);
    byte_418A939 = 1;
  }
  PK = EventRewardSceneEntity__CreatePK(eventId, slot, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneEntity_array *__fastcall EventRewardSceneMaster__getEntityFromIdAndEventType(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        int32_t eventType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v15; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v17; // w23
  int32_t v18; // w24
  __int64 v19; // x10

  if ( (byte_418A93C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&EventRewardSceneEntity_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardSceneEntity__get_Count__, v12);
    sub_B2C35C(&System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo, v13);
    byte_418A93C = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v17 = (int)list;
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v18,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v15 = list;
      v19 = *(&EventRewardSceneEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v19
        || (EventRewardSceneEntity_c *)list->klass->_2.typeHierarchy[v19 - 1] != EventRewardSceneEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields._syncRoot) == eventType )
      {
        if ( !v14 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__);
      }
      if ( ++v18 >= v17 )
        goto LABEL_15;
    }
LABEL_19:
    sub_B2C434(list, v15);
  }
LABEL_15:
  if ( !v14 )
    goto LABEL_19;
  if ( v14->fields._size < 1 )
    return 0LL;
  else
    return (EventRewardSceneEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                             (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
}