void __fastcall EventUiReleaseMaster___ctor(EventUiReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC748 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string___ctor__);
    byte_4BDC748 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    276,
    (const MethodInfo_325E55C *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string___ctor__);
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

  if ( (byte_4BDC746 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__GetEntity__);
    byte_4BDC746 = 1;
  }
  PK = (Il2CppObject *)EventUiReleaseEntity__CreatePK(eventUiId, priority, idx, *(const MethodInfo **)&idx);
  return (EventUiReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_3260880 *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__GetEntity__);
}


bool __fastcall EventUiReleaseMaster__IsOpen(
        EventUiReleaseMaster_o *this,
        EventUiEntity_o *eventUIEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v5; // x21
  __int64 v6; // x1
  void *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t *v10; // x24
  int32_t v11; // w25
  int32_t v12; // w27
  int64_t v13; // x26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v16; // x19
  bool v17; // w19
  int v18; // w20
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BDC749 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventUiReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventUiReleaseEntity__get_Item__);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_bool__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_bool___ctor___77565224);
    sub_1C21E38(&System_Collections_Generic_List_bool__TypeInfo);
    byte_4BDC749 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !eventUIEntity )
    return 0;
  v5 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v5,
    (const MethodInfo_32A64B0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)list,
         (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventUiReleaseEntity__get_Count__) < 1 )
    return 1;
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventUiReleaseEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v9,
               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventUiReleaseEntity__get_Item__);
      if ( !list )
        break;
      v10 = (int32_t *)list;
      if ( *((_DWORD *)list + 4) == eventUIEntity->fields.id && *((_DWORD *)list + 5) == eventUIEntity->fields.priority )
      {
        if ( !v5 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v5,
                *((_DWORD *)list + 7),
                (const MethodInfo_32A7084 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v5,
                               v10[7],
                               (const MethodInfo_32A6DE0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v12 = v10[8];
          v11 = v10[9];
          v13 = v10[10];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v12, v11, v13, 0, 0LL, 0LL);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v5,
            v10[7],
            IsOpen,
            (const MethodInfo_32A6E70 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_20;
    }
LABEL_32:
    sub_1C22094(list, v6);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_32;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v5,
         (const MethodInfo_32A6B30 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v5,
             (const MethodInfo_32A6C90 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v16 = (System_Collections_Generic_List_bool__o *)sub_1C22084(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_56645956(
    v16,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_3605944 *)Method_System_Collections_Generic_List_bool___ctor___77565224);
  if ( !v16 )
    goto LABEL_32;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v20,
    v16,
    (const MethodInfo_3606B7C *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v21,
            (const MethodInfo_33BFE40 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    if ( !v17 )
      break;
    if ( LOBYTE(v21.fields._current) )
    {
      v18 = 11;
      goto LABEL_30;
    }
  }
  v18 = 12;
LABEL_30:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v21,
    (const MethodInfo_33BFE3C *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return v17 && v18 == 11;
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

  if ( (byte_4BDC747 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__TryGetEntity__);
    byte_4BDC747 = 1;
  }
  PK = (Il2CppObject *)EventUiReleaseEntity__CreatePK(eventUiId, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__TryGetEntity__);
}