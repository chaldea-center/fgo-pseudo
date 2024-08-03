void __fastcall EventPointUpperReleaseMaster___ctor(EventPointUpperReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC4A5 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string___ctor__,
      method);
    byte_49FC4A5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    286,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string___ctor__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_ObjectModel_Collection_T__o *v16; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_49FC4A6 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventPointUpperId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&EventPointUpperReleaseEntity_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo, v10);
    byte_49FC4A6 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo,
                                                       *(_QWORD *)&eventPointUpperId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_20;
    v16 = list;
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
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v16;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v16, v14, v15);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v11 )
LABEL_20:
    sub_1B64324(list);
  return (EventPointUpperReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                 v11,
                                                 (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
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

  if ( (byte_49FC4A3 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__GetEntity__,
      *(_QWORD *)&version);
    byte_49FC4A3 = 1;
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
                                             (const MethodInfo_30D41FC *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__GetEntity__);
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

  if ( (byte_49FC4A7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventPointUpperEntity);
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
    sub_1B640C8(&EventPointUpperReleaseEntity_TypeInfo, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_bool___ctor___75646136, v19);
    sub_1B640C8(&System_Collections_Generic_List_bool__TypeInfo, v20);
    byte_49FC4A7 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( !eventPointUpperEntity )
    return 0;
  v21 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B64314(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                eventPointUpperEntity,
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
                (const MethodInfo_31152FC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v21,
                               v25[8],
                               (const MethodInfo_3115058 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v28 = v25[9];
          v27 = v25[10];
          v29 = v25[11];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v28, v27, v29, 0, 0LL);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v21,
            v25[8],
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

  if ( (byte_49FC4A4 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__TryGetEntity__,
      entity);
    byte_49FC4A4 = 1;
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
           (const MethodInfo_30D424C *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__TryGetEntity__);
}