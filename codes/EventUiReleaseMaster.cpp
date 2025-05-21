void __fastcall EventUiReleaseMaster___ctor(EventUiReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44C86 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string___ctor__, method);
    byte_4B44C86 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    278,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventUiReleaseEntity_o *__fastcall EventUiReleaseMaster__GetEntity(
        EventUiReleaseMaster_o *this,
        int32_t eventUiId,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B44C84 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__GetEntity__,
      *(_QWORD *)&eventUiId);
    byte_4B44C84 = 1;
  }
  PK = (Il2CppObject *)EventUiReleaseEntity__CreatePK(eventUiId, priority, idx, *(const MethodInfo **)&idx);
  return (EventUiReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_32E68F4 *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__GetEntity__);
}


bool __fastcall EventUiReleaseMaster__IsOpen(
        EventUiReleaseMaster_o *this,
        EventUiEntity_o *eventUIEntity,
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
  System_Collections_Generic_Dictionary_int__bool__o *v20; // x21
  __int64 v21; // x1
  void *list; // x0
  int v23; // w22
  int32_t v24; // w23
  int32_t *v25; // x24
  int32_t v26; // w25
  int32_t v27; // w27
  int64_t v28; // x26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v31; // x19
  bool v32; // w19
  int v33; // w20
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B44C87 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_EventUiReleaseEntity__get_Count__, eventUIEntity);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_EventUiReleaseEntity__get_Item__, v5);
    sub_1BDB878(&CondType_TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v12);
    sub_1BDB878(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_bool___ctor___77013224, v18);
    sub_1BDB878(&System_Collections_Generic_List_bool__TypeInfo, v19);
    byte_4B44C87 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  if ( !eventUIEntity )
    return 0;
  v20 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v20,
    (const MethodInfo_332BDAC *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)list,
         (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_EventUiReleaseEntity__get_Count__) < 1 )
    return 1;
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_EventUiReleaseEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v23 = (int)list;
    v24 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v24,
               (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_EventUiReleaseEntity__get_Item__);
      if ( !list )
        break;
      v25 = (int32_t *)list;
      if ( *((_DWORD *)list + 4) == eventUIEntity->fields.id && *((_DWORD *)list + 5) == eventUIEntity->fields.priority )
      {
        if ( !v20 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v20,
                *((_DWORD *)list + 7),
                (const MethodInfo_332C980 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v20,
                               v25[7],
                               (const MethodInfo_332C6DC *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v27 = v25[8];
          v26 = v25[9];
          v28 = v25[10];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v27, v26, v28, 0, 0LL, 0LL);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v20,
            v25[7],
            IsOpen,
            (const MethodInfo_332C76C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
      }
      if ( v23 == ++v24 )
        goto LABEL_20;
    }
LABEL_32:
    sub_1BDBAD4(list, v21);
  }
LABEL_20:
  if ( !v20 )
    goto LABEL_32;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v20,
         (const MethodInfo_332C42C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v20,
             (const MethodInfo_332C58C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v31 = (System_Collections_Generic_List_bool__o *)sub_1BDBAC4(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_57209512(
    v31,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_368F2A8 *)Method_System_Collections_Generic_List_bool___ctor___77013224);
  if ( !v31 )
    goto LABEL_32;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v35,
    v31,
    (const MethodInfo_36904E0 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v36,
            (const MethodInfo_344AE68 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    if ( !v32 )
      break;
    if ( LOBYTE(v36.fields._current) )
    {
      v33 = 11;
      goto LABEL_30;
    }
  }
  v33 = 12;
LABEL_30:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v36,
    (const MethodInfo_344AE64 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return v32 && v33 == 11;
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
  Il2CppObject *PK; // x2

  if ( (byte_4B44C85 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__TryGetEntity__, entity);
    byte_4B44C85 = 1;
  }
  PK = (Il2CppObject *)EventUiReleaseEntity__CreatePK(eventUiId, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__TryGetEntity__);
}