void __fastcall EventProgressValueMaster___ctor(EventProgressValueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4187915 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string___ctor__, method);
    byte_4187915 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    392,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventProgressValueEntity_o *__fastcall EventProgressValueMaster__GetCurrentEventProgressValueEntity(
        EventProgressValueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *EntityListByEventId; // x0
  __int64 v9; // x1
  int32_t i; // w20
  EventProgressValueEntity_o *v11; // x21
  __int64 v12; // x10
  int32_t syncRoot_high; // w22
  int32_t syncRoot; // w24
  int64_t klass_low; // x23

  if ( (byte_4187917 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, *(_QWORD *)&eventId);
    sub_B2C35C(&CondType_TypeInfo, v5);
    sub_B2C35C(&EventProgressValueEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventProgressValueEntity__get_Count__, v7);
    byte_4187917 = 1;
  }
  EntityListByEventId = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)EventProgressValueMaster__GetEntityListByEventId(this, eventId, method);
  if ( !EntityListByEventId )
LABEL_17:
    sub_B2C434(EntityListByEventId, v9);
  for ( i = LODWORD(EntityListByEventId->fields._syncRoot) - 1; (i & 0x80000000) == 0; --i )
  {
    EntityListByEventId = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !EntityListByEventId )
      goto LABEL_17;
    EntityListByEventId = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(EntityListByEventId, i, (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !EntityListByEventId )
      goto LABEL_17;
    v11 = (EventProgressValueEntity_o *)EntityListByEventId;
    v12 = *(&EventProgressValueEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&EntityListByEventId->klass->_2.bitflags2 + 1) < (unsigned int)v12
      || (EventProgressValueEntity_c *)EntityListByEventId->klass->_2.typeHierarchy[v12 - 1] != EventProgressValueEntity_TypeInfo )
    {
      goto LABEL_17;
    }
    syncRoot = (int32_t)EntityListByEventId->fields._syncRoot;
    syncRoot_high = HIDWORD(EntityListByEventId->fields._syncRoot);
    klass_low = SLODWORD(EntityListByEventId[1].klass);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL) )
      return v11;
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventProgressValueEntity_o *__fastcall EventProgressValueMaster__GetEntity(
        EventProgressValueMaster_o *this,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4187913 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4187913 = 1;
  }
  PK = EventProgressValueEntity__CreatePK(eventId, priority, *(const MethodInfo **)&priority);
  return (EventProgressValueEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_24E4520 *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventProgressValueEntity__o *__fastcall EventProgressValueMaster__GetEntityListByEventId(
        EventProgressValueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w23
  __int64 v16; // x10

  if ( (byte_4187916 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&EventProgressValueEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventProgressValueEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventProgressValueEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_EventProgressValueEntity__TypeInfo, v9);
    byte_4187916 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventProgressValueEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventProgressValueEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
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
        v11 = list;
        v16 = *(&EventProgressValueEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (EventProgressValueEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] == EventProgressValueEntity_TypeInfo
          && LODWORD(list->fields.items) == eventId )
        {
          if ( !v10 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v10,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventProgressValueEntity__Add__);
        }
      }
      if ( ++v15 >= v14 )
        return (System_Collections_Generic_List_EventProgressValueEntity__o *)v10;
    }
LABEL_15:
    sub_B2C434(list, v11);
  }
  return (System_Collections_Generic_List_EventProgressValueEntity__o *)v10;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventProgressValueMaster__TryGetEntity(
        EventProgressValueMaster_o *this,
        EventProgressValueEntity_o **entity,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4187914 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__TryGetEntity__,
      entity);
    byte_4187914 = 1;
  }
  PK = EventProgressValueEntity__CreatePK(eventId, priority, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__TryGetEntity__);
}