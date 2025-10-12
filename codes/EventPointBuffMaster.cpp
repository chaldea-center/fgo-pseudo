void EventPointBuffMaster___ctor(EventPointBuffMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37A32 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__);
    byte_4C37A32 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    267,
    (const MethodInfo_3394514 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__);
}


EventPointBuffEntity_array *EventPointBuffMaster__GetAllEventBuff(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v10; // x20
  __int64 v11; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__c **p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v14; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v15; // x20
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x20
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v29; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v30; // x25
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v31; // x8
  __int64 v32; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__c **v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x8
  struct System_Object_array *items; // x9
  _QWORD *v40; // x10
  __int64 size; // x11
  Il2CppClass **v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  EventPointBuffMaster___c_c *v47; // x8
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v49; // x21
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3

  if ( (byte_4C37A2F & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_EventPointBuffEntity__TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__get_lookup__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
    sub_1C32C20(&Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__);
    sub_1C32C20(&EventPointBuffMaster___c_TypeInfo);
    byte_4C37A2F = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  lookup = DataMasterBase_object__object__int___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_339462C *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__get_lookup__);
  if ( !lookup )
    goto LABEL_64;
  klass = lookup->klass;
  v10 = lookup;
  v11 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__TypeInfo )
    {
      --v11;
      p_offset += 2;
      if ( !v11 )
        goto LABEL_8;
    }
    v13 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3];
  }
  else
  {
LABEL_8:
    v13 = sub_1C83438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__TypeInfo, 3);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, _QWORD))v13)(
                                                                                  v10,
                                                                                  *(_QWORD *)(v13 + 8));
  if ( !lookup )
    goto LABEL_64;
  v14 = lookup->klass;
  v15 = lookup;
  v16 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    v17 = &v14->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v17 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v16;
      v17 += 4;
      if ( !v16 )
        goto LABEL_15;
    }
    v18 = (__int64)&v14->vtable[*v17];
  }
  else
  {
LABEL_15:
    v18 = sub_1C83438(lookup, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, _QWORD))v18)(
          v15,
          *(_QWORD *)(v18 + 8));
  if ( !v19 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v20 = *(_QWORD *)v19;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_22;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_22:
      v23 = sub_1C83438(v19, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v19;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v26 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_29;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_29:
      v27 = sub_1C83438(v19, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
    v29 = DataMasterBase_object__object__int___get_lookup(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            (const MethodInfo_339462C *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__get_lookup__);
    v30 = v29;
    if ( !v29 )
      sub_1C32E7C(0);
    v31 = v29->klass;
    v32 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      v33 = (System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__c **)&v31->_1.interfaceOffsets->offset;
      while ( *(v33 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__TypeInfo )
      {
        --v32;
        v33 += 2;
        if ( !v32 )
          goto LABEL_36;
      }
      v34 = (__int64)&v31->vtable[*(_DWORD *)v33 + 2];
    }
    else
    {
LABEL_36:
      v34 = sub_1C83438(v29, System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__TypeInfo, 2);
    }
    v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, __int64, _QWORD))v34)(
            v30,
            v28,
            *(_QWORD *)(v34 + 8));
    v38 = v35;
    if ( !v35 )
      sub_1C32E7C(0);
    if ( *(_DWORD *)(v35 + 20) == eventId && *(_DWORD *)(v35 + 24) == groupId )
    {
      if ( !v7 )
        sub_1C32E7C(v35);
      items = v7->fields._items;
      v40 = Method_System_Collections_Generic_List_EventPointBuffEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C32E7C(v35);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v35,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v42[4] = (Il2CppClass *)v38;
        sub_1C32BC4((CGThumbnailListItem_o *)(v42 + 4), v38, v36, v37);
      }
    }
  }
  v43 = *(_QWORD *)v19;
  v44 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_50;
    }
    v46 = v43 + 16LL * *v45 + 312;
  }
  else
  {
LABEL_50:
    v46 = sub_1C83438(v19, System_IDisposable_TypeInfo, 0);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v46)(
                                                                                  v19,
                                                                                  *(_QWORD *)(v46 + 8));
  v47 = EventPointBuffMaster___c_TypeInfo;
  if ( !EventPointBuffMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointBuffMaster___c_TypeInfo);
    v47 = EventPointBuffMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Comparison_T__o *)v47->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v47 = EventPointBuffMaster___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v47->static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_EventPointBuffEntity__TypeInfo);
    System_Comparison_object____ctor(_9__2_0, v49, Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__, 0);
    static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__2_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v51, v52);
  }
  if ( !v7 )
LABEL_64:
    sub_1C32E7C(lookup);
  System_Collections_Generic_List_object___Sort_58303104(
    v7,
    _9__2_0,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v7,
                                         (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


EventPointBuffEntity_o *EventPointBuffMaster__GetEnableEntity(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t funcid,
        const MethodInfo *method)
{
  __int64 v7; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v9; // x4
  int32_t EventPointGroupId; // w0
  const MethodInfo *v11; // x2
  int32_t v12; // w22
  EventPointBuffEntity_array *EntityList; // x0
  EventPointBuffMaster___c_c *v14; // x8
  System_Object_array *v15; // x21
  System_Comparison_T__o *_9__4_0; // x23
  Il2CppObject *v17; // x24
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *MasterData_object; // x23
  System_Predicate_object__o *v22; // x19

  if ( (byte_4C37A31 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Find_EventPointBuffEntity___);
    sub_1C32C20(&Method_System_Array_Sort_EventPointBuffEntity___);
    sub_1C32C20(&System_Comparison_EventPointBuffEntity__TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&System_Predicate_EventPointBuffEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__);
    sub_1C32C20(&Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__);
    sub_1C32C20(&EventPointBuffMaster___c__DisplayClass4_0_TypeInfo);
    sub_1C32C20(&EventPointBuffMaster___c_TypeInfo);
    byte_4C37A31 = 1;
  }
  v7 = sub_1C32E6C(EventPointBuffMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_21;
  *(_DWORD *)(v7 + 24) = funcid;
  EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(this, eventId, funcid, -1, v9);
  if ( (EventPointGroupId & 0x80000000) == 0 )
  {
    v12 = EventPointGroupId;
    EntityList = EventPointBuffMaster__getEntityList(this, eventId, v11);
    v14 = EventPointBuffMaster___c_TypeInfo;
    v15 = (System_Object_array *)EntityList;
    if ( !EventPointBuffMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointBuffMaster___c_TypeInfo);
      v14 = EventPointBuffMaster___c_TypeInfo;
    }
    _9__4_0 = (System_Comparison_T__o *)v14->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = EventPointBuffMaster___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v14->static_fields->__9;
      _9__4_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_EventPointBuffEntity__TypeInfo);
      System_Comparison_object____ctor(_9__4_0, v17, Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__, 0);
      static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__4_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v19, v20);
    }
    System_Array__Sort_object__51026696(
      v15,
      _9__4_0,
      (const MethodInfo_30A9B08 *)Method_System_Array_Sort_EventPointBuffEntity___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( MasterData_object )
      {
        *(_QWORD *)(v7 + 16) = UserEventPointMaster__GetEventPointTotal(
                                 (UserEventPointMaster_o *)MasterData_object,
                                 *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                 eventId,
                                 v12,
                                 0);
        v22 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_EventPointBuffEntity__TypeInfo);
        System_Predicate_object____ctor(
          v22,
          (Il2CppObject *)v7,
          Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__,
          0);
        return (EventPointBuffEntity_o *)System_Array__Find_object_(
                                           v15,
                                           (System_Predicate_T__o *)v22,
                                           (const MethodInfo_31E22DC *)Method_System_Array_Find_EventPointBuffEntity___);
      }
    }
LABEL_21:
    sub_1C32E7C(Instance);
  }
  return 0;
}


System_Collections_Generic_List_EventPointBuffEntity__o *EventPointBuffMaster__GetEntityListWithGroupId(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  struct System_Object_array *items; // x9
  _QWORD *v23; // x10
  __int64 size; // x11
  Il2CppClass **v25; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4C37A2E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventPointBuffEntity__GetEnumerator__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_EventPointBuffEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
    byte_4C37A2E = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C32E7C(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_EventPointBuffEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventPointBuffEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_EventPointBuffEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_EventPointBuffEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v21 = v18;
    if ( !v18 )
      sub_1C32E7C(0);
    if ( *(_DWORD *)(v18 + 20) == eventId && *(_DWORD *)(v18 + 24) == groupId )
    {
      if ( !v7 )
        sub_1C32E7C(v18);
      items = v7->fields._items;
      v23 = Method_System_Collections_Generic_List_EventPointBuffEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C32E7C(v18);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v18,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v21;
        sub_1C32BC4((CGThumbnailListItem_o *)(v25 + 4), v21, v19, v20);
      }
    }
  }
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_30;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_30:
    v29 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return (System_Collections_Generic_List_EventPointBuffEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
int32_t EventPointBuffMaster__GetEventPointGroupId(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t funcId,
        int32_t defaultValue,
        const MethodInfo *method)
{
  EventPointBuffEntity_array *EntityList; // x0
  int max_length; // w8
  int v9; // w9
  EventPointBuffEntity_o *v10; // x10
  struct System_Int32_array *funcIds; // x11
  il2cpp_array_size_t v12; // x12
  int v13; // w13

  EntityList = EventPointBuffMaster__getEntityList(this, eventId, *(const MethodInfo **)&funcId);
  if ( !EntityList )
LABEL_16:
    sub_1C32E7C(EntityList);
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 == max_length )
        sub_1C32E84(EntityList);
      v10 = EntityList->m_Items[v9];
      if ( !v10 )
        goto LABEL_16;
      funcIds = v10->fields.funcIds;
      if ( funcIds )
      {
        v12 = funcIds->max_length;
        if ( v12 )
        {
          if ( (int)v12 >= 1 )
            break;
        }
      }
LABEL_12:
      if ( ++v9 == max_length )
        return defaultValue;
    }
    v13 = 0;
    while ( funcIds->m_Items[v13] != funcId )
    {
      if ( (_DWORD)v12 == ++v13 )
        goto LABEL_12;
    }
    return v10->fields.groupId;
  }
  return defaultValue;
}


bool EventPointBuffMaster__IsEventEntityContains(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v10; // x20

  if ( (byte_4C37A30 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_EventPointBuffEntity___);
    sub_1C32C20(&System_Func_EventPointBuffEntity__bool__TypeInfo);
    sub_1C32C20(&Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__);
    sub_1C32C20(&EventPointBuffMaster___c__DisplayClass3_0_TypeInfo);
    byte_4C37A30 = 1;
  }
  v7 = sub_1C32E6C(EventPointBuffMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = groupId;
  list = this->fields.list;
  v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventPointBuffEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__51293756(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_30EAE3C *)Method_System_Linq_Enumerable_Any_EventPointBuffEntity___);
}


EventPointBuffEntity_array *EventPointBuffMaster__getEntityList(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v7; // w22
  int32_t v8; // w23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C37A2D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventPointBuffEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventPointBuffEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
    byte_4C37A2D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventPointBuffEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v7 = (int)list;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventPointBuffEntity__get_Item__);
      if ( !list )
        break;
      v11 = list;
      if ( HIDWORD(list->fields.items) == eventId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_EventPointBuffEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v11;
          sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v11, v9, v10);
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C32E7C(list);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v5,
                                         (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


void EventPointBuffMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37A33 & 1) == 0 )
  {
    sub_1C32C20(&EventPointBuffMaster___c_TypeInfo);
    byte_4C37A33 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventPointBuffMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventPointBuffMaster___c_TypeInfo->static_fields->__9 = (struct EventPointBuffMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)EventPointBuffMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventPointBuffMaster___c___ctor(EventPointBuffMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventPointBuffMaster___c___GetAllEventBuff_b__2_0(
        EventPointBuffMaster___c_o *this,
        EventPointBuffEntity_o *a,
        EventPointBuffEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C32E7C(this);
  return a->fields.eventPoint - b->fields.eventPoint;
}


int32_t EventPointBuffMaster___c___GetEnableEntity_b__4_0(
        EventPointBuffMaster___c_o *this,
        EventPointBuffEntity_o *x,
        EventPointBuffEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1C32E7C(this);
  return y->fields.eventPoint - x->fields.eventPoint;
}


void EventPointBuffMaster___c__DisplayClass3_0___ctor(
        EventPointBuffMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventPointBuffMaster___c__DisplayClass3_0___IsEventEntityContains_b__0(
        EventPointBuffMaster___c__DisplayClass3_0_o *this,
        EventPointBuffEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C32E7C(this);
  return ent->fields.eventId == this->fields.eventId && ent->fields.groupId == this->fields.groupId;
}


void EventPointBuffMaster___c__DisplayClass4_0___ctor(
        EventPointBuffMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventPointBuffMaster___c__DisplayClass4_0___GetEnableEntity_b__1(
        EventPointBuffMaster___c__DisplayClass4_0_o *this,
        EventPointBuffEntity_o *x,
        const MethodInfo *method)
{
  EventPointBuffMaster___c__DisplayClass4_0_o *v4; // x19
  System_Int32_array *funcIds; // x20
  System_Predicate_int__o *_9__2; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v4 = this;
  if ( (byte_4C37A34 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Exists_int___);
    sub_1C32C20(&System_Predicate_int__TypeInfo);
    this = (EventPointBuffMaster___c__DisplayClass4_0_o *)sub_1C32C20(&Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__);
    byte_4C37A34 = 1;
  }
  if ( !x )
    sub_1C32E7C(this);
  if ( v4->fields.pointTotal < x->fields.eventPoint )
    return 0;
  funcIds = x->fields.funcIds;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Predicate_int__o *)sub_1C32E6C(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__,
      0);
    v4->fields.__9__2 = _9__2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  return System_Array__Exists_int_(
           funcIds,
           (System_Predicate_T__o *)_9__2,
           (const MethodInfo_31E1C68 *)Method_System_Array_Exists_int___);
}


bool EventPointBuffMaster___c__DisplayClass4_0___GetEnableEntity_b__2(
        EventPointBuffMaster___c__DisplayClass4_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  return this->fields.funcid == y;
}