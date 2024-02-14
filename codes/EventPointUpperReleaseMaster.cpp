void __fastcall EventPointUpperReleaseMaster___ctor(EventPointUpperReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421497C & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string___ctor__,
      method);
    byte_421497C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    284,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointUpperReleaseEntity_array *__fastcall EventPointUpperReleaseMaster__GetEntitiesFromEventPointUpperId(
        EventPointUpperReleaseMaster_o *this,
        int32_t eventPointUpperId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v13; // w22
  __int64 v14; // x10

  if ( (byte_421497D & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventPointUpperId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&EventPointUpperReleaseEntity_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo, v10);
    byte_421497D = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventPointUpperId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v13,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v14 = *(&EventPointUpperReleaseEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (EventPointUpperReleaseEntity_c *)list->klass->_2.typeHierarchy[v14 - 1] == EventPointUpperReleaseEntity_TypeInfo )
        {
          if ( HIDWORD(list->fields.items) == eventPointUpperId )
          {
            if ( !v11 )
              goto LABEL_17;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v11,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__);
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v13;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_17;
  }
  if ( !v11 )
LABEL_17:
    sub_B0D97C(list);
  return (EventPointUpperReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                                 (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventPointUpperReleaseEntity_o *__fastcall EventPointUpperReleaseMaster__GetEntity(
        EventPointUpperReleaseMaster_o *this,
        int32_t version,
        int32_t eventPointUpperId,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_421497A & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__GetEntity__,
      *(_QWORD *)&version);
    byte_421497A = 1;
  }
  PK = EventPointUpperReleaseEntity__CreatePK(version, eventPointUpperId, priority, idx, *(const MethodInfo **)&idx);
  return (EventPointUpperReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_266A024 *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__GetEntity__);
}


bool __fastcall EventPointUpperReleaseMaster__IsOpen(
        EventPointUpperReleaseMaster_o *this,
        EventPointUpperEntity_o *eventPointUpperEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  System_Collections_Generic_Dictionary_int__bool__o *v21; // x21
  void *list; // x0
  EventPointUpperReleaseEntity_c **v23; // x26
  int32_t v24; // w22
  int32_t v25; // w23
  int32_t *v26; // x24
  __int64 v27; // x10
  EventPointUpperReleaseEntity_c **v28; // x20
  int32_t v29; // w25
  int32_t v30; // w27
  int64_t v31; // x26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_bool__o *v36; // x19
  char v37; // w19
  int v38; // w20
  EventPointUpperReleaseMaster_o *v40; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_421497E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventPointUpperEntity);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&CondType_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v12);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__, v16);
    sub_B0D8A4(&EventPointUpperReleaseEntity_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool___ctor___67875096, v19);
    sub_B0D8A4(&System_Collections_Generic_List_bool__TypeInfo, v20);
    byte_421497E = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( !eventPointUpperEntity )
    return 0;
  v21 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B0D974(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                eventPointUpperEntity,
                                                                method);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v21,
    (const MethodInfo_2E61370 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_33;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
         (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  list = this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v23 = &EventPointUpperReleaseEntity_TypeInfo;
    v24 = (int)list;
    v25 = 0;
    v40 = this;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v25,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v26 = (int32_t *)list;
      v27 = *(&(*v23)->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v27
        || *(EventPointUpperReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v27 - 8) != *v23 )
      {
        break;
      }
      if ( *((_DWORD *)list + 5) == eventPointUpperEntity->fields.id
        && *((_DWORD *)list + 6) == eventPointUpperEntity->fields.priority )
      {
        if ( !v21 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v21,
                *((_DWORD *)list + 8),
                (const MethodInfo_2E62194 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v21,
                               v26[8],
                               (const MethodInfo_2E61E5C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v28 = v23;
          v30 = v26[9];
          v29 = v26[10];
          v31 = v26[11];
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v30, v29, v31, 0, 0LL);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v21,
            v26[8],
            IsOpen,
            (const MethodInfo_2E61EF4 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
          v23 = v28;
          this = v40;
        }
      }
      if ( ++v25 >= v24 )
        goto LABEL_23;
    }
LABEL_33:
    sub_B0D97C(list);
  }
LABEL_23:
  if ( !v21 )
    goto LABEL_33;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v21,
         (const MethodInfo_2E61B1C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v21,
             (const MethodInfo_2E61CC4 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v36 = (System_Collections_Generic_List_bool__o *)sub_B0D974(System_Collections_Generic_List_bool__TypeInfo, v34, v35);
  System_Collections_Generic_List_bool____ctor_49514580(
    v36,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_2F38854 *)Method_System_Collections_Generic_List_bool___ctor___67875096);
  if ( !v36 )
    goto LABEL_33;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v41,
    v36,
    (const MethodInfo_2F3A22C *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v42,
            (const MethodInfo_210DC2C *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__) )
  {
    if ( LOBYTE(v42.fields.current) )
    {
      v37 = 1;
      v38 = 2;
      goto LABEL_32;
    }
  }
  v38 = 0;
  v37 = 0;
LABEL_32:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v42,
    (const MethodInfo_210DC28 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return (v38 == 2) & v37;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointUpperReleaseMaster__TryGetEntity(
        EventPointUpperReleaseMaster_o *this,
        EventPointUpperReleaseEntity_o **entity,
        int32_t version,
        int32_t eventPointUpperId,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_421497B & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__TryGetEntity__,
      entity);
    byte_421497B = 1;
  }
  PK = EventPointUpperReleaseEntity__CreatePK(
         version,
         eventPointUpperId,
         priority,
         idx,
         *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__TryGetEntity__);
}