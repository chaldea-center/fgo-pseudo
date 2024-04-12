void __fastcall EventPointUpperReleaseMaster___ctor(EventPointUpperReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B03E0 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string___ctor__);
    byte_42B03E0 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    285,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string___ctor__);
}


EventPointUpperReleaseEntity_array *__fastcall EventPointUpperReleaseMaster__GetEntitiesFromEventPointUpperId(
        EventPointUpperReleaseMaster_o *this,
        int32_t eventPointUpperId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  __int64 v9; // x10

  if ( (byte_42B03E1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventPointUpperReleaseEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
    byte_42B03E1 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        v9 = *(&EventPointUpperReleaseEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (EventPointUpperReleaseEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == EventPointUpperReleaseEntity_TypeInfo )
        {
          if ( HIDWORD(list->fields.items) == eventPointUpperId )
          {
            if ( !v5 )
              goto LABEL_17;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v5,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__);
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v8;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_17;
  }
  if ( !v5 )
LABEL_17:
    sub_B52A5C(list, v6);
  return (EventPointUpperReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                                 (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
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

  if ( (byte_42B03DE & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__GetEntity__);
    byte_42B03DE = 1;
  }
  PK = EventPointUpperReleaseEntity__CreatePK(version, eventPointUpperId, priority, idx, *(const MethodInfo **)&idx);
  return (EventPointUpperReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_23E2728 *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__GetEntity__);
}


bool __fastcall EventPointUpperReleaseMaster__IsOpen(
        EventPointUpperReleaseMaster_o *this,
        EventPointUpperEntity_o *eventPointUpperEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v5; // x21
  __int64 v6; // x1
  void *list; // x0
  EventPointUpperReleaseEntity_c **v8; // x26
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t *v11; // x24
  __int64 v12; // x10
  EventPointUpperReleaseEntity_c **v13; // x20
  int32_t v14; // w25
  int32_t v15; // w27
  int64_t v16; // x26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v19; // x19
  char v20; // w19
  int v21; // w20
  EventPointUpperReleaseMaster_o *v23; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42B03E2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__);
    sub_B52984(&EventPointUpperReleaseEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_bool__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_B52984(&System_Collections_Generic_List_bool__TypeInfo);
    byte_42B03E2 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !eventPointUpperEntity )
    return 0;
  v5 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v5,
    (const MethodInfo_2EF75B8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_33;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
         (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  list = this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = &EventPointUpperReleaseEntity_TypeInfo;
    v9 = (int)list;
    v10 = 0;
    v23 = this;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v10,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v11 = (int32_t *)list;
      v12 = *(&(*v8)->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v12
        || *(EventPointUpperReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v12 - 8) != *v8 )
      {
        break;
      }
      if ( *((_DWORD *)list + 5) == eventPointUpperEntity->fields.id
        && *((_DWORD *)list + 6) == eventPointUpperEntity->fields.priority )
      {
        if ( !v5 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v5,
                *((_DWORD *)list + 8),
                (const MethodInfo_2EF83DC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v5,
                               v11[8],
                               (const MethodInfo_2EF80A4 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v13 = v8;
          v15 = v11[9];
          v14 = v11[10];
          v16 = v11[11];
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v15, v14, v16, 0, 0LL);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v5,
            v11[8],
            IsOpen,
            (const MethodInfo_2EF813C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
          v8 = v13;
          this = v23;
        }
      }
      if ( ++v10 >= v9 )
        goto LABEL_23;
    }
LABEL_33:
    sub_B52A5C(list, v6);
  }
LABEL_23:
  if ( !v5 )
    goto LABEL_33;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v5,
         (const MethodInfo_2EF7D64 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v5,
             (const MethodInfo_2EF7F0C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v19 = (System_Collections_Generic_List_bool__o *)sub_B52A54(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_50346800(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_3003B30 *)Method_System_Collections_Generic_List_bool___ctor__);
  if ( !v19 )
    goto LABEL_33;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v24,
    v19,
    (const MethodInfo_3005508 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v25,
            (const MethodInfo_200D038 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__) )
  {
    if ( LOBYTE(v25.fields.current) )
    {
      v20 = 1;
      v21 = 2;
      goto LABEL_32;
    }
  }
  v21 = 0;
  v20 = 0;
LABEL_32:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v25,
    (const MethodInfo_200D034 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return (v21 == 2) & v20;
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

  if ( (byte_42B03DF & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__TryGetEntity__);
    byte_42B03DF = 1;
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
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__TryGetEntity__);
}