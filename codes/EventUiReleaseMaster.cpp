void __fastcall EventUiReleaseMaster___ctor(EventUiReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F9C31 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string___ctor__, method);
    byte_40F9C31 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    270,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventUiReleaseEntity_o *__fastcall EventUiReleaseMaster__GetEntity(
        EventUiReleaseMaster_o *this,
        int32_t eventUiId,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F9C2F & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__GetEntity__,
      *(_QWORD *)&eventUiId);
    byte_40F9C2F = 1;
  }
  PK = EventUiReleaseEntity__CreatePK(eventUiId, priority, idx, *(const MethodInfo **)&idx);
  return (EventUiReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__GetEntity__);
}


bool __fastcall EventUiReleaseMaster__IsOpen(
        EventUiReleaseMaster_o *this,
        EventUiEntity_o *eventUIEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_Dictionary_int__bool__o *v23; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x0
  int32_t Count; // w0
  EventUiReleaseEntity_c **v27; // x26
  int32_t v28; // w22
  int32_t v29; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v30; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  int32_t *v32; // x24
  __int64 v33; // x10
  EventUiReleaseEntity_c **v34; // x20
  int32_t v35; // w25
  int32_t v36; // w27
  int64_t v37; // x26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Collections_Generic_List_bool__o *v44; // x19
  char v45; // w19
  int v46; // w20
  EventUiReleaseMaster_o *v48; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F9C32 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventUIEntity);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&CondType_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v14);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__, v18);
    sub_B16FFC(&EventUiReleaseEntity_TypeInfo, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool___ctor___66727368, v21);
    sub_B16FFC(&System_Collections_Generic_List_bool__TypeInfo, v22);
    byte_40F9C32 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  if ( !eventUIEntity )
    return 0;
  v23 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B170CC(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                eventUIEntity,
                                                                method,
                                                                v3,
                                                                v4);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v23,
    (const MethodInfo_2DD4AD0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  v25 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !v25 )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            v25,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v27 = &EventUiReleaseEntity_TypeInfo;
    v28 = Count;
    v29 = 0;
    v48 = this;
    while ( 1 )
    {
      v30 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v30 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v30,
               v29,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v32 = (int32_t *)Item;
      v33 = *(&(*v27)->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v33
        || (EventUiReleaseEntity_c *)Item->klass->_2.typeHierarchy[v33 - 1] != *v27 )
      {
        break;
      }
      if ( LODWORD(Item[1].klass) == eventUIEntity->fields.id
        && HIDWORD(Item[1].klass) == eventUIEntity->fields.priority )
      {
        if ( !v23 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v23,
                HIDWORD(Item[1].monitor),
                (const MethodInfo_2DD58F4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || System_Collections_Generic_Dictionary_int__bool___get_Item(
               v23,
               v32[7],
               (const MethodInfo_2DD55BC *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__) )
        {
          v34 = v27;
          v36 = v32[8];
          v35 = v32[9];
          v37 = v32[10];
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v36, v35, v37, 0, 0LL);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v23,
            v32[7],
            IsOpen,
            (const MethodInfo_2DD5654 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
          v27 = v34;
          this = v48;
        }
      }
      if ( ++v29 >= v28 )
        goto LABEL_23;
    }
LABEL_33:
    sub_B170D4();
  }
LABEL_23:
  if ( !v23 )
    goto LABEL_33;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v23,
         (const MethodInfo_2DD527C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v23,
             (const MethodInfo_2DD5424 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v44 = (System_Collections_Generic_List_bool__o *)sub_B170CC(
                                                     System_Collections_Generic_List_bool__TypeInfo,
                                                     v40,
                                                     v41,
                                                     v42,
                                                     v43);
  System_Collections_Generic_List_bool____ctor_48951152(
    v44,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_2EAEF70 *)Method_System_Collections_Generic_List_bool___ctor___66727368);
  if ( !v44 )
    goto LABEL_33;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v49,
    v44,
    (const MethodInfo_2EB0948 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v50 = v49;
  while ( System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v50,
            (const MethodInfo_206F730 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__) )
  {
    if ( LOBYTE(v50.fields.current) )
    {
      v45 = 1;
      v46 = 2;
      goto LABEL_32;
    }
  }
  v46 = 0;
  v45 = 0;
LABEL_32:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v50,
    (const MethodInfo_206F72C *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return (v46 == 2) & v45;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventUiReleaseMaster__TryGetEntity(
        EventUiReleaseMaster_o *this,
        EventUiReleaseEntity_o **entity,
        int32_t eventUiId,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F9C30 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__TryGetEntity__, entity);
    byte_40F9C30 = 1;
  }
  PK = EventUiReleaseEntity__CreatePK(eventUiId, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__TryGetEntity__);
}