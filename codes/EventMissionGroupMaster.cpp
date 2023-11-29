void __fastcall EventMissionGroupMaster___ctor(EventMissionGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F88DA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string___ctor__, method);
    byte_40F88DA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    450,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionGroupEntity_o *__fastcall EventMissionGroupMaster__GetEntity(
        EventMissionGroupMaster_o *this,
        int32_t id,
        int32_t missionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F88DB & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_40F88DB = 1;
  }
  PK = EventMissionGroupEntity__CreatePK(id, missionId, *(const MethodInfo **)&missionId);
  return (EventMissionGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                        (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionGroupEntity__o *__fastcall EventMissionGroupMaster__GetEntityList(
        EventMissionGroupMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w22
  int32_t v16; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v19; // x10

  if ( (byte_40F88D9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&EventMissionGroupEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionGroupEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionGroupEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionGroupEntity__TypeInfo, v11);
    byte_40F88D9 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionGroupEntity__TypeInfo,
                                                                                                  *(_QWORD *)&id,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      v17 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v17 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v17,
                                                                      v16,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v19 = *(&EventMissionGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v19
        || (EventMissionGroupEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] != EventMissionGroupEntity_TypeInfo )
      {
        break;
      }
      if ( Item->fields.missionTargetId == id )
      {
        if ( !v12 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionGroupEntity__Add__);
      }
      if ( ++v16 >= v15 )
        return (System_Collections_Generic_List_EventMissionGroupEntity__o *)v12;
    }
LABEL_15:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_EventMissionGroupEntity__o *)v12;
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

  if ( (byte_40F88DC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string__TryGetEntity__, entity);
    byte_40F88DC = 1;
  }
  PK = EventMissionGroupEntity__CreatePK(id, missionId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string__TryGetEntity__);
}