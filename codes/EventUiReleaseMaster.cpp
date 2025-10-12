void EventUiReleaseMaster___ctor(EventUiReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37BEA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string___ctor__);
    byte_4C37BEA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    278,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventUiReleaseEntity_o *EventUiReleaseMaster__GetEntity(
        EventUiReleaseMaster_o *this,
        int32_t eventUiId,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37BE8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__GetEntity__);
    byte_4C37BE8 = 1;
  }
  PK = (Il2CppObject *)EventUiReleaseEntity__CreatePK(eventUiId, priority, idx, *(const MethodInfo **)&idx);
  return (EventUiReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_339B2F0 *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__GetEntity__);
}


bool EventUiReleaseMaster__IsOpen(
        EventUiReleaseMaster_o *this,
        EventUiEntity_o *eventUIEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v5; // x21
  void *list; // x0
  int v7; // w22
  int32_t v8; // w23
  int32_t *v9; // x24
  int32_t v10; // w25
  int32_t v11; // w27
  int64_t v12; // x26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v15; // x19
  bool v16; // w19
  int v17; // w20
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C37BEB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventUiReleaseEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventUiReleaseEntity__get_Item__);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_bool__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_bool___ctor___77998536);
    sub_1C32C20(&System_Collections_Generic_List_bool__TypeInfo);
    byte_4C37BEB = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !eventUIEntity )
    return 0;
  v5 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v5,
    (const MethodInfo_33E0AE8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)list,
         (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventUiReleaseEntity__get_Count__) < 1 )
    return 1;
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventUiReleaseEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v7 = (int)list;
    v8 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v8,
               (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventUiReleaseEntity__get_Item__);
      if ( !list )
        break;
      v9 = (int32_t *)list;
      if ( *((_DWORD *)list + 4) == eventUIEntity->fields.id && *((_DWORD *)list + 5) == eventUIEntity->fields.priority )
      {
        if ( !v5 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v5,
                *((_DWORD *)list + 7),
                (const MethodInfo_33E16BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v5,
                               v9[7],
                               (const MethodInfo_33E1418 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v11 = v9[8];
          v10 = v9[9];
          v12 = v9[10];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v11, v10, v12, 0, 0, 0);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v5,
            v9[7],
            IsOpen,
            (const MethodInfo_33E14A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_20;
    }
LABEL_32:
    sub_1C32E7C(list);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_32;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v5,
         (const MethodInfo_33E1168 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v5,
             (const MethodInfo_33E12C8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v15 = (System_Collections_Generic_List_bool__o *)sub_1C32E6C(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_58006688(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_3751CA0 *)Method_System_Collections_Generic_List_bool___ctor___77998536);
  if ( !v15 )
    goto LABEL_32;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v19,
    v15,
    (const MethodInfo_3752ED8 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v20,
            (const MethodInfo_351B394 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    if ( !v16 )
      break;
    if ( LOBYTE(v20.fields._current) )
    {
      v17 = 11;
      goto LABEL_30;
    }
  }
  v17 = 12;
LABEL_30:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v20,
    (const MethodInfo_351B390 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return v16 && v17 == 11;
}


// local variable allocation has failed, the output may be wrong!
bool EventUiReleaseMaster__TryGetEntity(
        EventUiReleaseMaster_o *this,
        EventUiReleaseEntity_o **entity,
        int32_t eventUiId,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C37BE9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__TryGetEntity__);
    byte_4C37BE9 = 1;
  }
  PK = (Il2CppObject *)EventUiReleaseEntity__CreatePK(eventUiId, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__TryGetEntity__);
}