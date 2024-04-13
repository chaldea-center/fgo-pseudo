void __fastcall EventProgressValueMaster___ctor(EventProgressValueMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8DFB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E8DFB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    393,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string___ctor__);
}


EventProgressValueEntity_o *__fastcall EventProgressValueMaster__GetCurrentEventProgressValueEntity(
        EventProgressValueMaster_o *this,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *EntityListByEventId; // x0
  __int64 v16; // x1
  int32_t i; // w20
  EventProgressValueEntity_o *v18; // x21
  __int64 v19; // x10
  int32_t syncRoot_high; // w22
  int32_t syncRoot; // w24
  int64_t klass_low; // x23

  if ( (byte_42E8DFD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&CondType_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&EventProgressValueEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventProgressValueEntity__get_Count__, v12, v13, v14);
    byte_42E8DFD = 1;
  }
  EntityListByEventId = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)EventProgressValueMaster__GetEntityListByEventId(this, eventId, method);
  if ( !EntityListByEventId )
LABEL_17:
    sub_B5D69C(EntityListByEventId, v16);
  for ( i = LODWORD(EntityListByEventId->fields._syncRoot) - 1; (i & 0x80000000) == 0; --i )
  {
    EntityListByEventId = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !EntityListByEventId )
      goto LABEL_17;
    EntityListByEventId = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(EntityListByEventId, i, (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !EntityListByEventId )
      goto LABEL_17;
    v18 = (EventProgressValueEntity_o *)EntityListByEventId;
    v19 = *(&EventProgressValueEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&EntityListByEventId->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (EventProgressValueEntity_c *)EntityListByEventId->klass->_2.typeHierarchy[v19 - 1] != EventProgressValueEntity_TypeInfo )
    {
      goto LABEL_17;
    }
    syncRoot = (int32_t)EntityListByEventId->fields._syncRoot;
    syncRoot_high = HIDWORD(EntityListByEventId->fields._syncRoot);
    klass_low = SLODWORD(EntityListByEventId[1].klass);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL) )
      return v18;
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

  if ( (byte_42E8DF9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__GetEntity__,
      eventId,
      priority,
      method);
    byte_42E8DF9 = 1;
  }
  PK = EventProgressValueEntity__CreatePK(eventId, priority, *(const MethodInfo **)&priority);
  return (EventProgressValueEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23FB260 *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventProgressValueEntity__o *__fastcall EventProgressValueMaster__GetEntityListByEventId(
        EventProgressValueMaster_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v22; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v25; // w22
  int32_t v26; // w23
  __int64 v27; // x10

  if ( (byte_42E8DFC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventProgressValueEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventProgressValueEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventProgressValueEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_EventProgressValueEntity__TypeInfo, v18, v19, v20);
    byte_42E8DFC = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventProgressValueEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventProgressValueEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v25 = Count;
    v26 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v26,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v22 = list;
        v27 = *(&EventProgressValueEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v27
          && (EventProgressValueEntity_c *)list->klass->_2.typeHierarchy[v27 - 1] == EventProgressValueEntity_TypeInfo
          && LODWORD(list->fields.items) == eventId )
        {
          if ( !v21 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v21,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventProgressValueEntity__Add__);
        }
      }
      if ( ++v26 >= v25 )
        return (System_Collections_Generic_List_EventProgressValueEntity__o *)v21;
    }
LABEL_15:
    sub_B5D69C(list, v22);
  }
  return (System_Collections_Generic_List_EventProgressValueEntity__o *)v21;
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

  if ( (byte_42E8DFA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&priority);
    byte_42E8DFA = 1;
  }
  PK = EventProgressValueEntity__CreatePK(eventId, priority, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__TryGetEntity__);
}