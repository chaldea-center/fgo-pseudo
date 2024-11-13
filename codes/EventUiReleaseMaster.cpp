void __fastcall EventUiReleaseMaster___ctor(EventUiReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B163FD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string___ctor__, method, v2);
    byte_4B163FD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    272,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string___ctor__);
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

  if ( (byte_4B163FB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__GetEntity__,
      *(_QWORD *)&eventUiId,
      *(_QWORD *)&priority);
    byte_4B163FB = 1;
  }
  PK = (Il2CppObject *)EventUiReleaseEntity__CreatePK(eventUiId, priority, idx, *(const MethodInfo **)&idx);
  return (EventUiReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_31B3198 *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__GetEntity__);
}


bool __fastcall EventUiReleaseMaster__IsOpen(
        EventUiReleaseMaster_o *this,
        EventUiEntity_o *eventUIEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_Dictionary_int__bool__o *v38; // x21
  __int64 v39; // x1
  void *list; // x0
  int v41; // w22
  int32_t v42; // w23
  int32_t *v43; // x24
  __int64 methodPtr_low; // x10
  int32_t v45; // w25
  int32_t v46; // w27
  int64_t v47; // x26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Collections_Generic_List_bool__o *v53; // x19
  bool v54; // w19
  int v55; // w20
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B163FE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventUIEntity, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&CondType_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__, v28, v29);
    sub_1BCA7E0(&EventUiReleaseEntity_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool___ctor___76776240, v34, v35);
    sub_1BCA7E0(&System_Collections_Generic_List_bool__TypeInfo, v36, v37);
    byte_4B163FE = 1;
  }
  memset(&v58, 0, sizeof(v58));
  if ( !eventUIEntity )
    return 0;
  v38 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                eventUIEntity,
                                                                method,
                                                                v3);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v38,
    (const MethodInfo_31F6AE8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_34;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)list,
         (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  list = this->fields.list;
  if ( !list )
    goto LABEL_34;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v41 = (int)list;
    v42 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v42,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v43 = (int32_t *)list;
      methodPtr_low = LOBYTE(EventUiReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventUiReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventUiReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventUIEntity->fields.id && *((_DWORD *)list + 5) == eventUIEntity->fields.priority )
      {
        if ( !v38 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v38,
                *((_DWORD *)list + 7),
                (const MethodInfo_31F76BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v38,
                               v43[7],
                               (const MethodInfo_31F7418 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v46 = v43[8];
          v45 = v43[9];
          v47 = v43[10];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v39);
          IsOpen = CondType__IsOpen(v46, v45, v47, 0, 0LL, 0LL);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v38,
            v43[7],
            IsOpen,
            (const MethodInfo_31F74A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
      }
      if ( v41 == ++v42 )
        goto LABEL_22;
    }
LABEL_34:
    sub_1BCAA3C(list, v39);
  }
LABEL_22:
  if ( !v38 )
    goto LABEL_34;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v38,
         (const MethodInfo_31F7168 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v38,
             (const MethodInfo_31F72C8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v53 = (System_Collections_Generic_List_bool__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_bool__TypeInfo,
                                                     v50,
                                                     v51,
                                                     v52);
  System_Collections_Generic_List_bool____ctor_55936236(
    v53,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_35584EC *)Method_System_Collections_Generic_List_bool___ctor___76776240);
  if ( !v53 )
    goto LABEL_34;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v57,
    v53,
    (const MethodInfo_3559724 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v58 = v57;
  while ( 1 )
  {
    v54 = System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v58,
            (const MethodInfo_330E978 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    if ( !v54 )
      break;
    if ( LOBYTE(v58.fields._current) )
    {
      v55 = 11;
      goto LABEL_32;
    }
  }
  v55 = 12;
LABEL_32:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v58,
    (const MethodInfo_330E974 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return v54 && v55 == 11;
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

  if ( (byte_4B163FC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventUiId);
    byte_4B163FC = 1;
  }
  PK = (Il2CppObject *)EventUiReleaseEntity__CreatePK(eventUiId, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__TryGetEntity__);
}