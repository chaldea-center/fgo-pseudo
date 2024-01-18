void __fastcall EventPointUpperReleaseMaster___ctor(EventPointUpperReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4187905 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string___ctor__,
      method);
    byte_4187905 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    284,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string___ctor__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  __int64 v15; // x10

  if ( (byte_4187906 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventPointUpperId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&EventPointUpperReleaseEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo, v10);
    byte_4187906 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
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
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v14,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        v15 = *(&EventPointUpperReleaseEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (EventPointUpperReleaseEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == EventPointUpperReleaseEntity_TypeInfo )
        {
          if ( HIDWORD(list->fields.items) == eventPointUpperId )
          {
            if ( !v11 )
              goto LABEL_17;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v11,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__);
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v14;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_17;
  }
  if ( !v11 )
LABEL_17:
    sub_B2C434(list, v12);
  return (EventPointUpperReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                                 (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
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

  if ( (byte_4187903 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__GetEntity__,
      *(_QWORD *)&version);
    byte_4187903 = 1;
  }
  PK = EventPointUpperReleaseEntity__CreatePK(version, eventPointUpperId, priority, idx, *(const MethodInfo **)&idx);
  return (EventPointUpperReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_24E4520 *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__GetEntity__);
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
  __int64 v22; // x1
  void *list; // x0
  EventPointUpperReleaseEntity_c **v24; // x26
  int32_t v25; // w22
  int32_t v26; // w23
  int32_t *v27; // x24
  __int64 v28; // x10
  EventPointUpperReleaseEntity_c **v29; // x20
  int32_t v30; // w25
  int32_t v31; // w27
  int64_t v32; // x26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v35; // x19
  char v36; // w19
  int v37; // w20
  EventPointUpperReleaseMaster_o *v39; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4187907 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventPointUpperEntity);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&CondType_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v12);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__, v16);
    sub_B2C35C(&EventPointUpperReleaseEntity_TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool___ctor__, v19);
    sub_B2C35C(&System_Collections_Generic_List_bool__TypeInfo, v20);
    byte_4187907 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  if ( !eventPointUpperEntity )
    return 0;
  v21 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v21,
    (const MethodInfo_2E1C05C *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_33;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  list = this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v24 = &EventPointUpperReleaseEntity_TypeInfo;
    v25 = (int)list;
    v26 = 0;
    v39 = this;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v26,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v27 = (int32_t *)list;
      v28 = *(&(*v24)->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v28
        || *(EventPointUpperReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v28 - 8) != *v24 )
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
                (const MethodInfo_2E1CE80 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v21,
                               v27[8],
                               (const MethodInfo_2E1CB48 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v29 = v24;
          v31 = v27[9];
          v30 = v27[10];
          v32 = v27[11];
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v31, v30, v32, 0, 0LL);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v21,
            v27[8],
            IsOpen,
            (const MethodInfo_2E1CBE0 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
          v24 = v29;
          this = v39;
        }
      }
      if ( ++v26 >= v25 )
        goto LABEL_23;
    }
LABEL_33:
    sub_B2C434(list, v22);
  }
LABEL_23:
  if ( !v21 )
    goto LABEL_33;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v21,
         (const MethodInfo_2E1C808 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v21,
             (const MethodInfo_2E1C9B0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v35 = (System_Collections_Generic_List_bool__o *)sub_B2C42C(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_49471176(
    v35,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_2F2DEC8 *)Method_System_Collections_Generic_List_bool___ctor__);
  if ( !v35 )
    goto LABEL_33;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v40,
    v35,
    (const MethodInfo_2F2F8A0 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v41,
            (const MethodInfo_20E5B08 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__) )
  {
    if ( LOBYTE(v41.fields.current) )
    {
      v36 = 1;
      v37 = 2;
      goto LABEL_32;
    }
  }
  v37 = 0;
  v36 = 0;
LABEL_32:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v41,
    (const MethodInfo_20E5B04 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return (v37 == 2) & v36;
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

  if ( (byte_4187904 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4187904 = 1;
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
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__TryGetEntity__);
}