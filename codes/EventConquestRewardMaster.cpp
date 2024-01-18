void __fastcall EventConquestRewardMaster___ctor(EventConquestRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A31C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventConquestRewardMaster__EventConquestRewardEntity__string___ctor__, method);
    byte_418A31C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    272,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventConquestRewardMaster__EventConquestRewardEntity__string___ctor__);
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

  if ( (byte_418A31A & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventConquestRewardMaster__EventConquestRewardEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_418A31A = 1;
  }
  PK = EventConquestRewardEntity__CreatePK(eventId, questId, objectType, objectId, *(const MethodInfo **)&objectId);
  return (EventConquestRewardEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_24E4520 *)Method_DataMasterBase_EventConquestRewardMaster__EventConquestRewardEntity__string__GetEntity__);
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

  if ( (byte_418A31B & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventConquestRewardMaster__EventConquestRewardEntity__string__TryGetEntity__,
      entity);
    byte_418A31B = 1;
  }
  PK = EventConquestRewardEntity__CreatePK(eventId, questId, objectType, objectId, *(const MethodInfo **)&objectType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventConquestRewardMaster__EventConquestRewardEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventConquestRewardEntity_array *__fastcall EventConquestRewardMaster__getList(
        EventConquestRewardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  __int64 v15; // x10

  if ( (byte_418A31D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&EventConquestRewardEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventConquestRewardEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventConquestRewardEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventConquestRewardEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_EventConquestRewardEntity__TypeInfo, v10);
    byte_418A31D = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventConquestRewardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventConquestRewardEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v14,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      v15 = *(&EventConquestRewardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (EventConquestRewardEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == EventConquestRewardEntity_TypeInfo
        && LODWORD(list->fields.items) == eventId )
      {
        if ( !v11 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventConquestRewardEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v11 )
LABEL_17:
    sub_B2C434(list, v12);
  return (EventConquestRewardEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                              (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventConquestRewardEntity__ToArray__);
}