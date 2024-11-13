void __fastcall EventCommandAssistMaster___ctor(EventCommandAssistMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_int__object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B1611A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v7, v8);
    byte_4B1611A = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.uniqueIdCacheList = (struct System_Collections_Generic_Dictionary_int__int____o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.uniqueIdCacheList, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    451,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventCommandAssistMaster__CreateUniqueIdList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
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
  System_Collections_Generic_HashSet_int__o *v22; // x19
  System_Collections_Generic_IEnumerable_TResult__o *v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v26; // x20
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v30; // x1
  __int64 v31; // x20
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0

  if ( (byte_4B16117 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_EventCommandAssistEntity___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v20, v21);
    byte_4B16117 = 1;
  }
  v22 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_HashSet_int____ctor(
    v22,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v23 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_EventCommandAssistEntity___);
  if ( !v23 )
    sub_1BCAA3C(0LL, v24);
  klass = v23->klass;
  v26 = v23;
  v27 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_EventCommandAssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(v23, System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo, 0LL);
  }
  v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v26,
          *(_QWORD *)(p_method + 8));
  if ( !v31 )
    sub_1BCAA3C(0LL, v30);
  while ( 1 )
  {
    v32 = *(_QWORD *)v31;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_15;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_15:
      v35 = sub_1C1C7C0(v31, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) == 0 )
      break;
    v36 = *(_QWORD *)v31;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EventCommandAssistEntity__c **)v38 - 1) != System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_22;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_22:
      v39 = sub_1C1C7C0(v31, System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo, 0LL);
    }
    v40 = (*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v31, *(_QWORD *)(v39 + 8));
    if ( !v40 )
      sub_1BCAA3C(0LL, v41);
    if ( *(_DWORD *)(v40 + 24) == eventId )
    {
      if ( !v22 )
        sub_1BCAA3C(v40, v41);
      System_Collections_Generic_HashSet_int___Add(
        v22,
        *(_DWORD *)(v40 + 16),
        (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  v42 = *(_QWORD *)v31;
  v43 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
  {
    v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_32;
    }
    v45 = v42 + 16LL * *v44 + 312;
  }
  else
  {
LABEL_32:
    v45 = sub_1C1C7C0(v31, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v45)(v31, *(_QWORD *)(v45 + 8));
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v22,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventCommandAssistEntity__o *__fastcall EventCommandAssistMaster__GetAllEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t beforeClearQuestId,
        bool isIncludUnreleased,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x22
  const MethodInfo *v14; // x2
  Il2CppObject *UniqueIdList; // x0
  __int64 v16; // x1
  MethodInfo *v17; // x5
  void *monitor; // x8
  Il2CppObject *v19; // x23
  unsigned __int64 v20; // x25
  bool v21; // w24
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int64_t v30; // x1
  Il2CppClass **v31; // x0

  if ( (byte_4B16115 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&beforeClearQuestId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v11, v12);
    byte_4B16115 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&beforeClearQuestId,
                                                       isIncludUnreleased);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  UniqueIdList = (Il2CppObject *)EventCommandAssistMaster__GetUniqueIdList(this, eventId, v14);
  if ( !UniqueIdList )
LABEL_15:
    sub_1BCAA3C(UniqueIdList, v16);
  monitor = UniqueIdList[1].monitor;
  v19 = UniqueIdList;
  if ( (int)monitor >= 1 )
  {
    v20 = 0LL;
    v21 = isIncludUnreleased;
    do
    {
      if ( v20 >= (unsigned int)monitor )
        sub_1BCAA44(UniqueIdList, v16);
      UniqueIdList = (Il2CppObject *)EventCommandAssistMaster__GetCurrentEntity(
                                       this,
                                       eventId,
                                       *((_DWORD *)&v19[2].klass + v20),
                                       beforeClearQuestId,
                                       v21,
                                       v17);
      if ( UniqueIdList )
      {
        if ( !v13 )
          goto LABEL_15;
        items = v13->fields._items;
        v28 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v13->fields._size;
        v30 = (int64_t)UniqueIdList;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            UniqueIdList,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v30;
          sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 4), v30, v22, v23, v24, (BattleSetupInfo_o *)v17, v25, v26);
        }
      }
      LODWORD(monitor) = v19[1].monitor;
      ++v20;
    }
    while ( (__int64)v20 < (int)monitor );
  }
  return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
EventCommandAssistEntity_o *__fastcall EventCommandAssistMaster__GetCurrentEntity(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t id,
        int32_t beforeClearQuestId,
        bool isIncludUnreleased,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  EventCommandAssistEntity_o *EntityList; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  EventCommandAssistMaster___c_c *v27; // x8
  System_Collections_Generic_List_object__o *v28; // x21
  System_Comparison_T__o *_9__1_0; // x22
  Il2CppObject *v30; // x23
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int size; // w23
  int32_t v39; // w22
  const MethodInfo *v40; // x2

  if ( (byte_4B16113 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventCommandAssistEntity__TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&id);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_EventCommandAssistEntity___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v17, v18);
    sub_1BCA7E0(&Method_EventCommandAssistMaster___c__GetCurrentEntity_b__1_0__, v19, v20);
    sub_1BCA7E0(&EventCommandAssistMaster___c_TypeInfo, v21, v22);
    byte_4B16113 = 1;
  }
  EntityList = (EventCommandAssistEntity_o *)EventCommandAssistMaster__GetEntityList(
                                               this,
                                               eventId,
                                               id,
                                               *(const MethodInfo **)&beforeClearQuestId);
  v27 = EventCommandAssistMaster___c_TypeInfo;
  v28 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo, v24);
    v27 = EventCommandAssistMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Comparison_T__o *)v27->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27, v24);
      v27 = EventCommandAssistMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__1_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventCommandAssistEntity__TypeInfo, v24, v25, v26);
    System_Comparison_object____ctor(_9__1_0, v30, Method_EventCommandAssistMaster___c__GetCurrentEntity_b__1_0__, 0LL);
    static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_EventCommandAssistEntity__o *)_9__1_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v32, v33, v34, v35, v36, v37);
  }
  if ( !v28 )
LABEL_19:
    sub_1BCAA3C(EntityList, v24);
  System_Collections_Generic_List_object___Sort_56244000(
    v28,
    _9__1_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
  size = v28->fields._size;
  if ( size < 1 )
  {
LABEL_15:
    if ( isIncludUnreleased )
      return (EventCommandAssistEntity_o *)System_Linq_Enumerable__First_object_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                                             (const MethodInfo_2F32D3C *)Method_System_Linq_Enumerable_First_EventCommandAssistEntity___);
    else
      return 0LL;
  }
  else
  {
    v39 = 0;
    while ( 1 )
    {
      EntityList = (EventCommandAssistEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                   v28,
                                                   v39,
                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
      if ( !EntityList )
        goto LABEL_19;
      if ( EventCommandAssistEntity__IsOpen(EntityList, beforeClearQuestId, v40) )
        return (EventCommandAssistEntity_o *)System_Collections_Generic_List_object___get_Item(
                                               v28,
                                               v39,
                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
      if ( size == ++v39 )
        goto LABEL_15;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
EventCommandAssistEntity_o *__fastcall EventCommandAssistMaster__GetEntity(
        EventCommandAssistMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1611B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&priority);
    byte_4B1611B = 1;
  }
  PK = (Il2CppObject *)EventCommandAssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (EventCommandAssistEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_31B3198 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventCommandAssistEntity__o *__fastcall EventCommandAssistMaster__GetEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x22
  int64_t v18; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v21; // w23
  int32_t v22; // w24
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B16112 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&id);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&EventCommandAssistEntity_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v15, v16);
    byte_4B16112 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&id,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v22,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v18 = (int64_t)list;
      methodPtr_low = LOBYTE(EventCommandAssistEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventCommandAssistEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventCommandAssistEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list[1].klass) == eventId && LODWORD(list->fields.items) == id )
      {
        if ( !v17 )
          break;
        items = v17->fields._items;
        v31 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v18;
          sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v18, v23, v24, v25, v26, v27, v28);
        }
      }
      if ( v21 == ++v22 )
        return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v17;
    }
LABEL_19:
    sub_1BCAA3C(list, v18);
  }
  return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v17;
}


// local variable allocation has failed, the output may be wrong!
EventCommandAssistEntity_o *__fastcall EventCommandAssistMaster__GetMaxLevelEntity(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_EventCommandAssistEntity__o *EntityList; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  EventCommandAssistMaster___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_object__int__o *_9__8_0; // x20
  Il2CppObject *v22; // x21
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0

  if ( (byte_4B16119 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_EventCommandAssistEntity___,
      *(_QWORD *)&eventId,
      *(_QWORD *)&assistId);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_EventCommandAssistEntity__int___, v7, v8);
    sub_1BCA7E0(&System_Func_EventCommandAssistEntity__int__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_EventCommandAssistMaster___c__GetMaxLevelEntity_b__8_0__, v11, v12);
    sub_1BCA7E0(&EventCommandAssistMaster___c_TypeInfo, v13, v14);
    byte_4B16119 = 1;
  }
  EntityList = EventCommandAssistMaster__GetEntityList(this, eventId, assistId, method);
  v19 = EventCommandAssistMaster___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
  if ( !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo, v16);
    v19 = EventCommandAssistMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__int__o *)v19->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19, v16);
      v19 = EventCommandAssistMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__8_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_EventCommandAssistEntity__int__TypeInfo,
                                              v16,
                                              v17,
                                              v18);
    System_Func_object__int____ctor(_9__8_0, v22, Method_EventCommandAssistMaster___c__GetMaxLevelEntity_b__8_0__, 0LL);
    static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_EventCommandAssistEntity__int__o *)_9__8_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)_9__8_0, v24, v25, v26, v27, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v20,
                                                               (System_Func_TSource__TKey__o *)_9__8_0,
                                                               (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_EventCommandAssistEntity__int___);
  return (EventCommandAssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                         v30,
                                         (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCommandAssistEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventCommandAssistMaster__GetUniqueIdList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *uniqueIdCacheList; // x0
  const MethodInfo *v10; // x2
  struct System_Collections_Generic_Dictionary_int__int____o *v11; // x21

  if ( (byte_4B16118 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__, v7, v8);
    byte_4B16118 = 1;
  }
  uniqueIdCacheList = (Il2CppObject *)this->fields.uniqueIdCacheList;
  if ( !uniqueIdCacheList )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)uniqueIdCacheList,
          eventId,
          (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    v11 = this->fields.uniqueIdCacheList;
    uniqueIdCacheList = (Il2CppObject *)EventCommandAssistMaster__CreateUniqueIdList(this, eventId, v10);
    if ( !v11 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)v11,
      eventId,
      uniqueIdCacheList,
      (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  uniqueIdCacheList = (Il2CppObject *)this->fields.uniqueIdCacheList;
  if ( !uniqueIdCacheList )
LABEL_9:
    sub_1BCAA3C(uniqueIdCacheList, *(_QWORD *)&eventId);
  return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                 (System_Collections_Generic_Dictionary_int__object__o *)uniqueIdCacheList,
                                 eventId,
                                 (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventCommandAssistEntity__o *__fastcall EventCommandAssistMaster__GetValidEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x22
  const MethodInfo *v12; // x2
  Il2CppObject *UniqueIdList; // x0
  __int64 v14; // x1
  MethodInfo *v15; // x5
  void *monitor; // x8
  Il2CppObject *v17; // x23
  unsigned __int64 i; // x24
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  int64_t v27; // x1
  Il2CppClass **v28; // x0

  if ( (byte_4B16114 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&beforeClearQuestId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v9, v10);
    byte_4B16114 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&beforeClearQuestId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  UniqueIdList = (Il2CppObject *)EventCommandAssistMaster__GetUniqueIdList(this, eventId, v12);
  if ( !UniqueIdList )
LABEL_15:
    sub_1BCAA3C(UniqueIdList, v14);
  monitor = UniqueIdList[1].monitor;
  v17 = UniqueIdList;
  if ( (int)monitor >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)monitor; ++i )
    {
      if ( i >= (unsigned int)monitor )
        sub_1BCAA44(UniqueIdList, v14);
      UniqueIdList = (Il2CppObject *)EventCommandAssistMaster__GetCurrentEntity(
                                       this,
                                       eventId,
                                       *((_DWORD *)&v17[2].klass + i),
                                       beforeClearQuestId,
                                       0,
                                       v15);
      if ( UniqueIdList )
      {
        if ( !v11 )
          goto LABEL_15;
        items = v11->fields._items;
        v25 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v11->fields._size;
        v27 = (int64_t)UniqueIdList;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            UniqueIdList,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v27;
          sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 4), v27, v19, v20, v21, (BattleSetupInfo_o *)v15, v22, v23);
        }
      }
      LODWORD(monitor) = v17[1].monitor;
    }
  }
  return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v11;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCommandAssistMaster__IsEnableEntity(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t id,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  EventCommandAssistEntity_o *EntityList; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  EventCommandAssistMaster___c_c *v23; // x8
  System_Collections_Generic_List_object__o *v24; // x20
  System_Comparison_T__o *_9__4_0; // x21
  Il2CppObject *v26; // x22
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int size; // w22
  int32_t v35; // w21
  bool v36; // w24
  const MethodInfo *v37; // x2

  if ( (byte_4B16116 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventCommandAssistEntity__TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&id);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v13, v14);
    sub_1BCA7E0(&Method_EventCommandAssistMaster___c__IsEnableEntity_b__4_0__, v15, v16);
    sub_1BCA7E0(&EventCommandAssistMaster___c_TypeInfo, v17, v18);
    byte_4B16116 = 1;
  }
  EntityList = (EventCommandAssistEntity_o *)EventCommandAssistMaster__GetEntityList(
                                               this,
                                               eventId,
                                               id,
                                               *(const MethodInfo **)&beforeClearQuestId);
  v23 = EventCommandAssistMaster___c_TypeInfo;
  v24 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo, v20);
    v23 = EventCommandAssistMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v23->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23, v20);
      v23 = EventCommandAssistMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventCommandAssistEntity__TypeInfo, v20, v21, v22);
    System_Comparison_object____ctor(_9__4_0, v26, Method_EventCommandAssistMaster___c__IsEnableEntity_b__4_0__, 0LL);
    static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventCommandAssistEntity__o *)_9__4_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v28, v29, v30, v31, v32, v33);
  }
  if ( !v24 )
    goto LABEL_18;
  System_Collections_Generic_List_object___Sort_56244000(
    v24,
    _9__4_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
  size = v24->fields._size;
  if ( size >= 1 )
  {
    v35 = 0;
    v36 = 1;
    while ( 1 )
    {
      EntityList = (EventCommandAssistEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                   v24,
                                                   v35,
                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
      if ( !EntityList )
        break;
      if ( !EventCommandAssistEntity__IsOpen(EntityList, beforeClearQuestId, v37) )
      {
        v36 = ++v35 < size;
        if ( size != v35 )
          continue;
      }
      return v36;
    }
LABEL_18:
    sub_1BCAA3C(EntityList, v20);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCommandAssistMaster__TryGetEntity(
        EventCommandAssistMaster_o *this,
        EventCommandAssistEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1611C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B1611C = 1;
  }
  PK = (Il2CppObject *)EventCommandAssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__TryGetEntity__);
}


void __fastcall EventCommandAssistMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1611D & 1) == 0 )
  {
    sub_1BCA7E0(&EventCommandAssistMaster___c_TypeInfo, v1, v2);
    byte_4B1611D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventCommandAssistMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventCommandAssistMaster___c_TypeInfo->static_fields->__9 = (struct EventCommandAssistMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventCommandAssistMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventCommandAssistMaster___c___ctor(EventCommandAssistMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventCommandAssistMaster___c___GetCurrentEntity_b__1_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *a,
        EventCommandAssistEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall EventCommandAssistMaster___c___GetMaxLevelEntity_b__8_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BCAA3C(this, 0LL);
  return ent->fields.lv;
}


int32_t __fastcall EventCommandAssistMaster___c___IsEnableEntity_b__4_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *a,
        EventCommandAssistEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}