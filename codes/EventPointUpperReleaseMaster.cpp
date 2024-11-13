void __fastcall EventPointUpperReleaseMaster___ctor(EventPointUpperReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16283 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string___ctor__,
      method,
      v2);
    byte_4B16283 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    286,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointUpperReleaseEntity_array *__fastcall EventPointUpperReleaseMaster__GetEntitiesFromEventPointUpperId(
        EventPointUpperReleaseMaster_o *this,
        int32_t eventPointUpperId,
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
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t v19; // x1
  int64_t list; // x0
  int32_t v21; // w22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B16284 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventPointUpperId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&EventPointUpperReleaseEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo, v16, v17);
    byte_4B16284 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo,
                                                       *(_QWORD *)&eventPointUpperId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v21 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v21 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v21,
                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_20;
    v19 = list;
    methodPtr_low = LOBYTE(EventPointUpperReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(EventPointUpperReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventPointUpperReleaseEntity_TypeInfo )
    {
      goto LABEL_20;
    }
    if ( *(_DWORD *)(list + 20) == eventPointUpperId )
    {
      if ( !v18 )
        goto LABEL_20;
      items = v18->fields._items;
      v30 = Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__;
      ++v18->fields._version;
      if ( !items )
        goto LABEL_20;
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)list,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v19;
        sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), v19, v22, v23, v24, v25, v26, v27);
      }
    }
    list = (int64_t)this->fields.list;
    ++v21;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v18 )
LABEL_20:
    sub_1BCAA3C(list, v19);
  return (EventPointUpperReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                 v18,
                                                 (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
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
  Il2CppObject *PK; // x1

  if ( (byte_4B16281 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__GetEntity__,
      *(_QWORD *)&version,
      *(_QWORD *)&eventPointUpperId);
    byte_4B16281 = 1;
  }
  PK = (Il2CppObject *)EventPointUpperReleaseEntity__CreatePK(
                         version,
                         eventPointUpperId,
                         priority,
                         idx,
                         *(const MethodInfo **)&idx);
  return (EventPointUpperReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_31B3198 *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__GetEntity__);
}


bool __fastcall EventPointUpperReleaseMaster__IsOpen(
        EventPointUpperReleaseMaster_o *this,
        EventPointUpperEntity_o *eventPointUpperEntity,
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

  if ( (byte_4B16285 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventPointUpperEntity,
      method);
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
    sub_1BCA7E0(&EventPointUpperReleaseEntity_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool___ctor___76776240, v34, v35);
    sub_1BCA7E0(&System_Collections_Generic_List_bool__TypeInfo, v36, v37);
    byte_4B16285 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  if ( !eventPointUpperEntity )
    return 0;
  v38 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                eventPointUpperEntity,
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
      methodPtr_low = LOBYTE(EventPointUpperReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventPointUpperReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventPointUpperReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 5) == eventPointUpperEntity->fields.id
        && *((_DWORD *)list + 6) == eventPointUpperEntity->fields.priority )
      {
        if ( !v38 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v38,
                *((_DWORD *)list + 8),
                (const MethodInfo_31F76BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v38,
                               v43[8],
                               (const MethodInfo_31F7418 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v46 = v43[9];
          v45 = v43[10];
          v47 = v43[11];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v39);
          IsOpen = CondType__IsOpen(v46, v45, v47, 0, 0LL, 0LL);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v38,
            v43[8],
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
bool __fastcall EventPointUpperReleaseMaster__TryGetEntity(
        EventPointUpperReleaseMaster_o *this,
        EventPointUpperReleaseEntity_o **entity,
        int32_t version,
        int32_t eventPointUpperId,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16282 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&version);
    byte_4B16282 = 1;
  }
  PK = (Il2CppObject *)EventPointUpperReleaseEntity__CreatePK(
                         version,
                         eventPointUpperId,
                         priority,
                         idx,
                         *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__TryGetEntity__);
}