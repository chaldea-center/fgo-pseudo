void EventPointUpperReleaseMaster___ctor(EventPointUpperReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7490 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string___ctor__);
    byte_4CC7490 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    292,
    (const MethodInfo_340B614 *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string___ctor__);
}


EventPointUpperReleaseEntity_array *EventPointUpperReleaseMaster__GetEntitiesFromEventPointUpperId(
        EventPointUpperReleaseMaster_o *this,
        int32_t eventPointUpperId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4CC7491 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventPointUpperReleaseEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventPointUpperReleaseEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
    byte_4CC7491 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperReleaseEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperReleaseEntity__get_Item__);
    if ( !list )
      goto LABEL_18;
    v6 = list;
    if ( HIDWORD(list->fields.items) == eventPointUpperId )
    {
      if ( !v5 )
        goto LABEL_18;
      items = v5->fields._items;
      v16 = Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_18;
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)list,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v6;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C71608(list, v6);
  return (EventPointUpperReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                 v5,
                                                 (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventPointUpperReleaseEntity_o *EventPointUpperReleaseMaster__GetEntity(
        EventPointUpperReleaseMaster_o *this,
        int32_t version,
        int32_t eventPointUpperId,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC748E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__GetEntity__);
    byte_4CC748E = 1;
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
                                             (const MethodInfo_340D938 *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__GetEntity__);
}


bool EventPointUpperReleaseMaster__IsOpen(
        EventPointUpperReleaseMaster_o *this,
        EventPointUpperEntity_o *eventPointUpperEntity,
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

  if ( (byte_4CC7492 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventPointUpperReleaseEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventPointUpperReleaseEntity__get_Item__);
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_bool__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_bool___ctor___78575840);
    sub_1C713B0(&System_Collections_Generic_List_bool__TypeInfo);
    byte_4CC7492 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !eventPointUpperEntity )
    return 0;
  v5 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v5,
    (const MethodInfo_3453060 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)list,
         (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperReleaseEntity__get_Count__) < 1 )
    return 1;
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperReleaseEntity__get_Count__);
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
               (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperReleaseEntity__get_Item__);
      if ( !list )
        break;
      v10 = (int32_t *)list;
      if ( *((_DWORD *)list + 5) == eventPointUpperEntity->fields.id
        && *((_DWORD *)list + 6) == eventPointUpperEntity->fields.priority )
      {
        if ( !v5 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v5,
                *((_DWORD *)list + 8),
                (const MethodInfo_3453C34 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v5,
                               v10[8],
                               (const MethodInfo_3453990 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v12 = v10[9];
          v11 = v10[10];
          v13 = v10[11];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v12, v11, v13, 0, 0, 0);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v5,
            v10[8],
            IsOpen,
            (const MethodInfo_3453A20 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_20;
    }
LABEL_32:
    sub_1C71608(list, v6);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_32;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v5,
         (const MethodInfo_34536E0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v5,
             (const MethodInfo_3453840 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v16 = (System_Collections_Generic_List_bool__o *)sub_1C715FC(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_58498044(
    v16,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_37C9BFC *)Method_System_Collections_Generic_List_bool___ctor___78575840);
  if ( !v16 )
    goto LABEL_32;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v20,
    v16,
    (const MethodInfo_37CAE34 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v21,
            (const MethodInfo_358E6B4 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
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
    (const MethodInfo_358E6B0 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return v17 && v18 == 11;
}


// local variable allocation has failed, the output may be wrong!
bool EventPointUpperReleaseMaster__TryGetEntity(
        EventPointUpperReleaseMaster_o *this,
        EventPointUpperReleaseEntity_o **entity,
        int32_t version,
        int32_t eventPointUpperId,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC748F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__TryGetEntity__);
    byte_4CC748F = 1;
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
           (const MethodInfo_340D984 *)Method_DataMasterBase_EventPointUpperReleaseMaster__EventPointUpperReleaseEntity__string__TryGetEntity__);
}