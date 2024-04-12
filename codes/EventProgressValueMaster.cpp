void __fastcall EventProgressValueMaster___ctor(EventProgressValueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B03F0 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string___ctor__);
    byte_42B03F0 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    393,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string___ctor__);
}


EventProgressValueEntity_o *__fastcall EventProgressValueMaster__GetCurrentEventProgressValueEntity(
        EventProgressValueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *EntityListByEventId; // x0
  __int64 v6; // x1
  int32_t i; // w20
  EventProgressValueEntity_o *v8; // x21
  __int64 v9; // x10
  int32_t syncRoot_high; // w22
  int32_t syncRoot; // w24
  int64_t klass_low; // x23

  if ( (byte_42B03F2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&EventProgressValueEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventProgressValueEntity__get_Count__);
    byte_42B03F2 = 1;
  }
  EntityListByEventId = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)EventProgressValueMaster__GetEntityListByEventId(this, eventId, method);
  if ( !EntityListByEventId )
LABEL_17:
    sub_B52A5C(EntityListByEventId, v6);
  for ( i = LODWORD(EntityListByEventId->fields._syncRoot) - 1; (i & 0x80000000) == 0; --i )
  {
    EntityListByEventId = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !EntityListByEventId )
      goto LABEL_17;
    EntityListByEventId = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(EntityListByEventId, i, (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !EntityListByEventId )
      goto LABEL_17;
    v8 = (EventProgressValueEntity_o *)EntityListByEventId;
    v9 = *(&EventProgressValueEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&EntityListByEventId->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (EventProgressValueEntity_c *)EntityListByEventId->klass->_2.typeHierarchy[v9 - 1] != EventProgressValueEntity_TypeInfo )
    {
      goto LABEL_17;
    }
    syncRoot = (int32_t)EntityListByEventId->fields._syncRoot;
    syncRoot_high = HIDWORD(EntityListByEventId->fields._syncRoot);
    klass_low = SLODWORD(EntityListByEventId[1].klass);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL) )
      return v8;
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

  if ( (byte_42B03EE & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__GetEntity__);
    byte_42B03EE = 1;
  }
  PK = EventProgressValueEntity__CreatePK(eventId, priority, *(const MethodInfo **)&priority);
  return (EventProgressValueEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23E2728 *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventProgressValueEntity__o *__fastcall EventProgressValueMaster__GetEntityListByEventId(
        EventProgressValueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  __int64 v11; // x10

  if ( (byte_42B03F1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventProgressValueEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventProgressValueEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventProgressValueEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventProgressValueEntity__TypeInfo);
    byte_42B03F1 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventProgressValueEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventProgressValueEntity___ctor__);
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
      if ( list )
      {
        v6 = list;
        v11 = *(&EventProgressValueEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v11
          && (EventProgressValueEntity_c *)list->klass->_2.typeHierarchy[v11 - 1] == EventProgressValueEntity_TypeInfo
          && LODWORD(list->fields.items) == eventId )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventProgressValueEntity__Add__);
        }
      }
      if ( ++v10 >= v9 )
        return (System_Collections_Generic_List_EventProgressValueEntity__o *)v5;
    }
LABEL_15:
    sub_B52A5C(list, v6);
  }
  return (System_Collections_Generic_List_EventProgressValueEntity__o *)v5;
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

  if ( (byte_42B03EF & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__TryGetEntity__);
    byte_42B03EF = 1;
  }
  PK = EventProgressValueEntity__CreatePK(eventId, priority, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__TryGetEntity__);
}