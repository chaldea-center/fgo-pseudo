void __fastcall EventMissionGroupMaster___ctor(EventMissionGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B04F1 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string___ctor__);
    byte_42B04F1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    451,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionGroupEntity_o *__fastcall EventMissionGroupMaster__GetEntity(
        EventMissionGroupMaster_o *this,
        int32_t id,
        int32_t missionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B04F2 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string__GetEntity__);
    byte_42B04F2 = 1;
  }
  PK = EventMissionGroupEntity__CreatePK(id, missionId, *(const MethodInfo **)&missionId);
  return (EventMissionGroupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_23E2728 *)Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventMissionGroupEntity__o *__fastcall EventMissionGroupMaster__GetEntityList(
        EventMissionGroupMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  __int64 v11; // x10

  if ( (byte_42B04F0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventMissionGroupEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionGroupEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionGroupEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMissionGroupEntity__TypeInfo);
    byte_42B04F0 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionGroupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v10,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v6 = list;
      v11 = *(&EventMissionGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (EventMissionGroupEntity_c *)list->klass->_2.typeHierarchy[v11 - 1] != EventMissionGroupEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == id )
      {
        if ( !v5 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionGroupEntity__Add__);
      }
      if ( ++v10 >= v9 )
        return (System_Collections_Generic_List_EventMissionGroupEntity__o *)v5;
    }
LABEL_15:
    sub_B52A5C(list, v6);
  }
  return (System_Collections_Generic_List_EventMissionGroupEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMissionGroupMaster__TryGetEntity(
        EventMissionGroupMaster_o *this,
        EventMissionGroupEntity_o **entity,
        int32_t id,
        int32_t missionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B04F3 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string__TryGetEntity__);
    byte_42B04F3 = 1;
  }
  PK = EventMissionGroupEntity__CreatePK(id, missionId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string__TryGetEntity__);
}