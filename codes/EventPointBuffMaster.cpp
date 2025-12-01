void EventPointBuffMaster___ctor(EventPointBuffMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC746A & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__);
    byte_4CC746A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    267,
    (const MethodInfo_3406B5C *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__);
}


EventPointBuffEntity_array *EventPointBuffMaster__GetAllEventBuff(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v9; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v11; // x20
  __int64 v12; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__c **p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v15; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v16; // x20
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x20
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v33; // x25
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v34; // x8
  __int64 v35; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__c **v36; // x10
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  __int64 v46; // x8
  struct System_Object_array *items; // x9
  _QWORD *v48; // x10
  __int64 size; // x11
  Il2CppClass **v50; // x0
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  EventPointBuffMaster___c_c *v55; // x8
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v57; // x21
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7

  if ( (byte_4CC7467 & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_EventPointBuffEntity__TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__get_lookup__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
    sub_1C713B0(&Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__);
    sub_1C713B0(&EventPointBuffMaster___c_TypeInfo);
    byte_4CC7467 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  lookup = DataMasterBase_object__object__int___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3406C74 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__get_lookup__);
  if ( !lookup )
    goto LABEL_64;
  klass = lookup->klass;
  v11 = lookup;
  v12 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__TypeInfo )
    {
      --v12;
      p_offset += 2;
      if ( !v12 )
        goto LABEL_8;
    }
    v14 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3];
  }
  else
  {
LABEL_8:
    v14 = sub_1C47738(lookup, System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__TypeInfo, 3);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, _QWORD))v14)(
                                                                                  v11,
                                                                                  *(_QWORD *)(v14 + 8));
  if ( !lookup )
    goto LABEL_64;
  v15 = lookup->klass;
  v16 = lookup;
  v17 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    v18 = &v15->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v18 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_15;
    }
    v19 = (__int64)&v15->vtable[*v18];
  }
  else
  {
LABEL_15:
    v19 = sub_1C47738(lookup, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, _QWORD))v19)(
          v16,
          *(_QWORD *)(v19 + 8));
  if ( !v21 )
    sub_1C71608(0, v20);
  while ( 1 )
  {
    v22 = *(_QWORD *)v21;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_22;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_22:
      v25 = sub_1C47738(v21, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v21;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v28 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_29;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_29:
      v29 = sub_1C47738(v21, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
    v31 = DataMasterBase_object__object__int___get_lookup(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            (const MethodInfo_3406C74 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__get_lookup__);
    v33 = v31;
    if ( !v31 )
      sub_1C71608(0, v32);
    v34 = v31->klass;
    v35 = *(unsigned __int16 *)&v31->klass->_2.rank;
    if ( *(_WORD *)&v31->klass->_2.rank )
    {
      v36 = (System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__c **)&v34->_1.interfaceOffsets->offset;
      while ( *(v36 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__TypeInfo )
      {
        --v35;
        v36 += 2;
        if ( !v35 )
          goto LABEL_36;
      }
      v37 = (__int64)&v34->vtable[*(_DWORD *)v36 + 2];
    }
    else
    {
LABEL_36:
      v37 = sub_1C47738(v31, System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__TypeInfo, 2);
    }
    v38 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, __int64, _QWORD))v37)(
            v33,
            v30,
            *(_QWORD *)(v37 + 8));
    v46 = v38;
    if ( !v38 )
      sub_1C71608(0, v39);
    if ( *(_DWORD *)(v38 + 20) == eventId && *(_DWORD *)(v38 + 24) == groupId )
    {
      if ( !v7 )
        sub_1C71608(v38, v39);
      items = v7->fields._items;
      v48 = Method_System_Collections_Generic_List_EventPointBuffEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C71608(v38, v39);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v38,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v50[4] = (Il2CppClass *)v46;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v50 + 4), v46, v40, v41, v42, v43, v44, v45);
      }
    }
  }
  v51 = *(_QWORD *)v21;
  v52 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_50;
    }
    v54 = v51 + 16LL * *v53 + 312;
  }
  else
  {
LABEL_50:
    v54 = sub_1C47738(v21, System_IDisposable_TypeInfo, 0);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v54)(
                                                                                  v21,
                                                                                  *(_QWORD *)(v54 + 8));
  v55 = EventPointBuffMaster___c_TypeInfo;
  if ( !EventPointBuffMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointBuffMaster___c_TypeInfo);
    v55 = EventPointBuffMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Comparison_T__o *)v55->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v55 = EventPointBuffMaster___c_TypeInfo;
    }
    v57 = (Il2CppObject *)v55->static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_EventPointBuffEntity__TypeInfo);
    System_Comparison_object____ctor(_9__2_0, v57, Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__, 0);
    static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__2_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v59, v60, v61, v62, v63, v64);
  }
  if ( !v7 )
LABEL_64:
    sub_1C71608(lookup, v9);
  System_Collections_Generic_List_object___Sort_58794460(
    v7,
    _9__2_0,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v7,
                                         (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


EventPointBuffEntity_o *EventPointBuffMaster__GetEnableEntity(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t funcid,
        const MethodInfo *method)
{
  __int64 v7; // x20
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  int32_t EventPointGroupId; // w0
  const MethodInfo *v12; // x2
  int32_t v13; // w22
  EventPointBuffEntity_array *EntityList; // x0
  EventPointBuffMaster___c_c *v15; // x8
  System_Object_array *v16; // x21
  System_Comparison_T__o *_9__4_0; // x23
  Il2CppObject *v18; // x24
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  Il2CppObject *MasterData_object; // x23
  System_Predicate_object__o *v27; // x19

  if ( (byte_4CC7469 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Find_EventPointBuffEntity___);
    sub_1C713B0(&Method_System_Array_Sort_EventPointBuffEntity___);
    sub_1C713B0(&System_Comparison_EventPointBuffEntity__TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&System_Predicate_EventPointBuffEntity__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__);
    sub_1C713B0(&Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__);
    sub_1C713B0(&EventPointBuffMaster___c__DisplayClass4_0_TypeInfo);
    sub_1C713B0(&EventPointBuffMaster___c_TypeInfo);
    byte_4CC7469 = 1;
  }
  v7 = sub_1C715FC(EventPointBuffMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_21;
  *(_DWORD *)(v7 + 24) = funcid;
  EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(this, eventId, funcid, -1, v10);
  if ( (EventPointGroupId & 0x80000000) == 0 )
  {
    v13 = EventPointGroupId;
    EntityList = EventPointBuffMaster__getEntityList(this, eventId, v12);
    v15 = EventPointBuffMaster___c_TypeInfo;
    v16 = (System_Object_array *)EntityList;
    if ( !EventPointBuffMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointBuffMaster___c_TypeInfo);
      v15 = EventPointBuffMaster___c_TypeInfo;
    }
    _9__4_0 = (System_Comparison_T__o *)v15->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = EventPointBuffMaster___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v15->static_fields->__9;
      _9__4_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_EventPointBuffEntity__TypeInfo);
      System_Comparison_object____ctor(_9__4_0, v18, Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__, 0);
      static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__4_0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0,
        (int32_t)_9__4_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    System_Array__Sort_object__51475292(
      v16,
      _9__4_0,
      (const MethodInfo_311735C *)Method_System_Array_Sort_EventPointBuffEntity___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CC112A )
      {
        sub_1C713B0(&NetworkManager_TypeInfo);
        byte_4CC112A = 1;
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
                                 v13,
                                 0);
        v27 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_EventPointBuffEntity__TypeInfo);
        System_Predicate_object____ctor(
          v27,
          (Il2CppObject *)v7,
          Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__,
          0);
        return (EventPointBuffEntity_o *)System_Array__Find_object_(
                                           v16,
                                           (System_Predicate_T__o *)v27,
                                           (const MethodInfo_3250D8C *)Method_System_Array_Find_EventPointBuffEntity___);
      }
    }
LABEL_21:
    sub_1C71608(Instance, v9);
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
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // x8
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_4CC7466 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventPointBuffEntity__GetEnumerator__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_EventPointBuffEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
    byte_4CC7466 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C71608(0, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_EventPointBuffEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v15 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventPointBuffEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_EventPointBuffEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_16:
      v19 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_EventPointBuffEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v28 = v20;
    if ( !v20 )
      sub_1C71608(0, v21);
    if ( *(_DWORD *)(v20 + 20) == eventId && *(_DWORD *)(v20 + 24) == groupId )
    {
      if ( !v7 )
        sub_1C71608(v20, v21);
      items = v7->fields._items;
      v30 = Method_System_Collections_Generic_List_EventPointBuffEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C71608(v20, v21);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v32 + 4), v28, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_30;
    }
    v36 = (__int64)&v33->vtable[*v35];
  }
  else
  {
LABEL_30:
    v36 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
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
  __int64 v8; // x1
  int max_length; // w8
  int v10; // w9
  EventPointBuffEntity_o *v11; // x10
  struct System_Int32_array *funcIds; // x11
  il2cpp_array_size_t v13; // x12
  int v14; // w13

  EntityList = EventPointBuffMaster__getEntityList(this, eventId, *(const MethodInfo **)&funcId);
  if ( !EntityList )
LABEL_16:
    sub_1C71608(EntityList, v8);
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 == max_length )
        sub_1C71610(EntityList);
      v11 = EntityList->m_Items[v10];
      if ( !v11 )
        goto LABEL_16;
      funcIds = v11->fields.funcIds;
      if ( funcIds )
      {
        v13 = funcIds->max_length;
        if ( v13 )
        {
          if ( (int)v13 >= 1 )
            break;
        }
      }
LABEL_12:
      if ( ++v10 == max_length )
        return defaultValue;
    }
    v14 = 0;
    while ( funcIds->m_Items[v14] != funcId )
    {
      if ( (_DWORD)v13 == ++v14 )
        goto LABEL_12;
    }
    return v11->fields.groupId;
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
  __int64 v9; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4CC7468 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_EventPointBuffEntity___);
    sub_1C713B0(&System_Func_EventPointBuffEntity__bool__TypeInfo);
    sub_1C713B0(&Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__);
    sub_1C713B0(&EventPointBuffMaster___c__DisplayClass3_0_TypeInfo);
    byte_4CC7468 = 1;
  }
  v7 = sub_1C715FC(EventPointBuffMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C71608(v8, v9);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = groupId;
  list = this->fields.list;
  v11 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_EventPointBuffEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__51743576(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v11,
           (const MethodInfo_3158B58 *)Method_System_Linq_Enumerable_Any_EventPointBuffEntity___);
}


EventPointBuffEntity_array *EventPointBuffMaster__getEntityList(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4CC7465 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventPointBuffEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventPointBuffEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
    byte_4CC7465 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventPointBuffEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventPointBuffEntity__get_Item__);
      if ( !list )
        break;
      v6 = list;
      if ( HIDWORD(list->fields.items) == eventId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v17 = Method_System_Collections_Generic_List_EventPointBuffEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v6;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C71608(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v5,
                                         (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


void EventPointBuffMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC746B & 1) == 0 )
  {
    sub_1C713B0(&EventPointBuffMaster___c_TypeInfo);
    byte_4CC746B = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(EventPointBuffMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventPointBuffMaster___c_TypeInfo->static_fields->__9 = (struct EventPointBuffMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)EventPointBuffMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C71608(this, a);
  return a->fields.eventPoint - b->fields.eventPoint;
}


int32_t EventPointBuffMaster___c___GetEnableEntity_b__4_0(
        EventPointBuffMaster___c_o *this,
        EventPointBuffEntity_o *x,
        EventPointBuffEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1C71608(this, x);
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
    sub_1C71608(this, 0);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  v4 = this;
  if ( (byte_4CC746C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Exists_int___);
    sub_1C713B0(&System_Predicate_int__TypeInfo);
    this = (EventPointBuffMaster___c__DisplayClass4_0_o *)sub_1C713B0(&Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__);
    byte_4CC746C = 1;
  }
  if ( !x )
    sub_1C71608(this, x);
  if ( v4->fields.pointTotal < x->fields.eventPoint )
    return 0;
  funcIds = x->fields.funcIds;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Predicate_int__o *)sub_1C715FC(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__,
      0);
    v4->fields.__9__2 = _9__2;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
  }
  return System_Array__Exists_int_(
           funcIds,
           (System_Predicate_T__o *)_9__2,
           (const MethodInfo_3250718 *)Method_System_Array_Exists_int___);
}


bool EventPointBuffMaster___c__DisplayClass4_0___GetEnableEntity_b__2(
        EventPointBuffMaster___c__DisplayClass4_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  return this->fields.funcid == y;
}