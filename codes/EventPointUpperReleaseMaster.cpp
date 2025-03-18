void __fastcall EventPointUpperReleaseMaster___ctor(EventPointUpperReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C21FE7 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string___ctor__,
      method);
    byte_4C21FE7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    292,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string___ctor__);
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
  System_Collections_Generic_List_object__o *v10; // x21
  int64_t v11; // x1
  int64_t list; // x0
  int32_t v13; // w22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4C21FE8 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventPointUpperReleaseEntity__get_Count__,
      *(_QWORD *)&eventPointUpperId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventPointUpperReleaseEntity__get_Item__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo, v9);
    byte_4C21FE8 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperReleaseEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v13,
                      (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperReleaseEntity__get_Item__);
    if ( !list )
      goto LABEL_18;
    v11 = list;
    if ( *(_DWORD *)(list + 20) == eventPointUpperId )
    {
      if ( !v10 )
        goto LABEL_18;
      items = v10->fields._items;
      v21 = Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__;
      ++v10->fields._version;
      if ( !items )
        goto LABEL_18;
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          (Il2CppObject *)list,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v11;
        sub_1C3B708((PartyOrganizationUtility_o *)(v23 + 4), v11, v14, v15, v16, v17, v18, v19);
      }
    }
    list = (int64_t)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v10 )
LABEL_18:
    sub_1C3B9C0(list, v11);
  return (EventPointUpperReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                 v10,
                                                 (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
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

  if ( (byte_4C21FE5 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__GetEntity__,
      *(_QWORD *)&version);
    byte_4C21FE5 = 1;
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
                                             (const MethodInfo_329F900 *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__GetEntity__);
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

  if ( (byte_4C21FE9 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventPointUpperReleaseEntity__get_Count__,
      eventPointUpperEntity);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventPointUpperReleaseEntity__get_Item__, v5);
    sub_1C3B764(&CondType_TypeInfo, v6);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v12);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_bool___ctor___77841368, v18);
    sub_1C3B764(&System_Collections_Generic_List_bool__TypeInfo, v19);
    byte_4C21FE9 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  if ( !eventPointUpperEntity )
    return 0;
  v20 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v20,
    (const MethodInfo_32E5600 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)list,
         (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperReleaseEntity__get_Count__) < 1 )
    return 1;
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperReleaseEntity__get_Count__);
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
               (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperReleaseEntity__get_Item__);
      if ( !list )
        break;
      v25 = (int32_t *)list;
      if ( *((_DWORD *)list + 5) == eventPointUpperEntity->fields.id
        && *((_DWORD *)list + 6) == eventPointUpperEntity->fields.priority )
      {
        if ( !v20 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v20,
                *((_DWORD *)list + 8),
                (const MethodInfo_32E61D4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v20,
                               v25[8],
                               (const MethodInfo_32E5F30 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v27 = v25[9];
          v26 = v25[10];
          v28 = v25[11];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v27, v26, v28, 0, 0LL, 0LL);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v20,
            v25[8],
            IsOpen,
            (const MethodInfo_32E5FC0 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
      }
      if ( v23 == ++v24 )
        goto LABEL_20;
    }
LABEL_32:
    sub_1C3B9C0(list, v21);
  }
LABEL_20:
  if ( !v20 )
    goto LABEL_32;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v20,
         (const MethodInfo_32E5C80 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v20,
             (const MethodInfo_32E5DE0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v31 = (System_Collections_Generic_List_bool__o *)sub_1C3B9B0(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_56894716(
    v31,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_36424FC *)Method_System_Collections_Generic_List_bool___ctor___77841368);
  if ( !v31 )
    goto LABEL_32;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v35,
    v31,
    (const MethodInfo_3643734 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v36,
            (const MethodInfo_33FEE48 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
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
    (const MethodInfo_33FEE44 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return v32 && v33 == 11;
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

  if ( (byte_4C21FE6 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4C21FE6 = 1;
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
           (const MethodInfo_329F94C *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__TryGetEntity__);
}