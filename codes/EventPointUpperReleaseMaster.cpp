void __fastcall EventPointUpperReleaseMaster___ctor(EventPointUpperReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE59D & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string___ctor__,
      method);
    byte_49FE59D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    286,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string___ctor__);
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
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v14; // w22
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_49FE59E & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventPointUpperId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64870(&EventPointUpperReleaseEntity_TypeInfo, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__, v9);
    sub_1B64870(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo, v10);
    byte_49FE59E = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v14,
                                                               (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_20;
    v12 = list;
    methodPtr_low = LOBYTE(EventPointUpperReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventPointUpperReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointUpperReleaseEntity_TypeInfo )
    {
      goto LABEL_20;
    }
    if ( HIDWORD(list->fields.items) == eventPointUpperId )
    {
      if ( !v11 )
        goto LABEL_20;
      items = v11->fields._items;
      v19 = Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        goto LABEL_20;
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)list,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v12;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v12, v15, v16);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v11 )
LABEL_20:
    sub_1B64ACC(list, v12);
  return (EventPointUpperReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                 v11,
                                                 (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
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

  if ( (byte_49FE59B & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__GetEntity__,
      *(_QWORD *)&version);
    byte_49FE59B = 1;
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
                                             (const MethodInfo_30D64D8 *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__GetEntity__);
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
  int v24; // w22
  int32_t v25; // w23
  int32_t *v26; // x24
  __int64 methodPtr_low; // x10
  int32_t v28; // w25
  int32_t v29; // w27
  int64_t v30; // x26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v33; // x19
  bool v34; // w19
  int v35; // w20
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FE59F & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventPointUpperEntity);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64870(&CondType_TypeInfo, v6);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v8);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v9);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v10);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v11);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v12);
    sub_1B64870(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__, v15);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__, v16);
    sub_1B64870(&EventPointUpperReleaseEntity_TypeInfo, v17);
    sub_1B64870(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v18);
    sub_1B64870(&Method_System_Collections_Generic_List_bool___ctor___75654592, v19);
    sub_1B64870(&System_Collections_Generic_List_bool__TypeInfo, v20);
    byte_49FE59F = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( !eventPointUpperEntity )
    return 0;
  v21 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v21,
    (const MethodInfo_3116A04 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_34;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)list,
         (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  list = this->fields.list;
  if ( !list )
    goto LABEL_34;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v24 = (int)list;
    v25 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v25,
               (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v26 = (int32_t *)list;
      methodPtr_low = LOBYTE(EventPointUpperReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventPointUpperReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventPointUpperReleaseEntity_TypeInfo )
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
                (const MethodInfo_31175D8 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v21,
                               v26[8],
                               (const MethodInfo_3117334 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v29 = v26[9];
          v28 = v26[10];
          v30 = v26[11];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v29, v28, v30, 0, 0LL);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v21,
            v26[8],
            IsOpen,
            (const MethodInfo_31173C4 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
      }
      if ( v24 == ++v25 )
        goto LABEL_22;
    }
LABEL_34:
    sub_1B64ACC(list, v22);
  }
LABEL_22:
  if ( !v21 )
    goto LABEL_34;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v21,
         (const MethodInfo_3117084 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v21,
             (const MethodInfo_31171E4 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v33 = (System_Collections_Generic_List_bool__o *)sub_1B64ABC(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_54939376(
    v33,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_3464EF0 *)Method_System_Collections_Generic_List_bool___ctor___75654592);
  if ( !v33 )
    goto LABEL_34;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v37,
    v33,
    (const MethodInfo_34661D0 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v38,
            (const MethodInfo_3223FE8 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    if ( !v34 )
      break;
    if ( LOBYTE(v38.fields._current) )
    {
      v35 = 11;
      goto LABEL_32;
    }
  }
  v35 = 12;
LABEL_32:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v38,
    (const MethodInfo_3223FE4 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return v34 && v35 == 11;
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

  if ( (byte_49FE59C & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__TryGetEntity__,
      entity);
    byte_49FE59C = 1;
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
           (const MethodInfo_30D6528 *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__TryGetEntity__);
}