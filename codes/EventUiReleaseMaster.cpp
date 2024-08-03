void __fastcall EventUiReleaseMaster___ctor(EventUiReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC619 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string___ctor__, method);
    byte_49FC619 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    272,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string___ctor__);
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

  if ( (byte_49FC617 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__GetEntity__,
      *(_QWORD *)&eventUiId);
    byte_49FC617 = 1;
  }
  PK = (Il2CppObject *)EventUiReleaseEntity__CreatePK(eventUiId, priority, idx, *(const MethodInfo **)&idx);
  return (EventUiReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_30D41FC *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__GetEntity__);
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
  __int64 v20; // x1
  System_Collections_Generic_Dictionary_int__bool__o *v21; // x21
  void *list; // x0
  int v23; // w22
  int32_t v24; // w23
  int32_t *v25; // x24
  __int64 methodPtr_low; // x10
  int32_t v27; // w25
  int32_t v28; // w27
  int64_t v29; // x26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_bool__o *v34; // x19
  bool v35; // w19
  int v36; // w20
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FC61A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventUIEntity);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&CondType_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__, v16);
    sub_1B640C8(&EventUiReleaseEntity_TypeInfo, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_bool___ctor___75646136, v19);
    sub_1B640C8(&System_Collections_Generic_List_bool__TypeInfo, v20);
    byte_49FC61A = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( !eventUIEntity )
    return 0;
  v21 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B64314(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                eventUIEntity,
                                                                method);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v21,
    (const MethodInfo_3114728 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_34;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)list,
         (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  list = this->fields.list;
  if ( !list )
    goto LABEL_34;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v25 = (int32_t *)list;
      methodPtr_low = LOBYTE(EventUiReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventUiReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventUiReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventUIEntity->fields.id && *((_DWORD *)list + 5) == eventUIEntity->fields.priority )
      {
        if ( !v21 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v21,
                *((_DWORD *)list + 7),
                (const MethodInfo_31152FC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v21,
                               v25[7],
                               (const MethodInfo_3115058 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v28 = v25[8];
          v27 = v25[9];
          v29 = v25[10];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v28, v27, v29, 0, 0LL);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v21,
            v25[7],
            IsOpen,
            (const MethodInfo_31150E8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
      }
      if ( v23 == ++v24 )
        goto LABEL_22;
    }
LABEL_34:
    sub_1B64324(list);
  }
LABEL_22:
  if ( !v21 )
    goto LABEL_34;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v21,
         (const MethodInfo_3114DA8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v21,
             (const MethodInfo_3114F08 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v34 = (System_Collections_Generic_List_bool__o *)sub_1B64314(System_Collections_Generic_List_bool__TypeInfo, v32, v33);
  System_Collections_Generic_List_bool____ctor_54930452(
    v34,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_3462C14 *)Method_System_Collections_Generic_List_bool___ctor___75646136);
  if ( !v34 )
    goto LABEL_34;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v38,
    v34,
    (const MethodInfo_3463EF4 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v39 = v38;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v39,
            (const MethodInfo_3221D0C *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    if ( !v35 )
      break;
    if ( LOBYTE(v39.fields._current) )
    {
      v36 = 11;
      goto LABEL_32;
    }
  }
  v36 = 12;
LABEL_32:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v39,
    (const MethodInfo_3221D08 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return v35 && v36 == 11;
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

  if ( (byte_49FC618 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__TryGetEntity__, entity);
    byte_49FC618 = 1;
  }
  PK = (Il2CppObject *)EventUiReleaseEntity__CreatePK(eventUiId, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__TryGetEntity__);
}