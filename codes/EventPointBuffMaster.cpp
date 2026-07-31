void EventPointBuffMaster___ctor(EventPointBuffMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938813 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__);
    byte_5938813 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    269,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__);
}


EventPointBuffEntity_array *EventPointBuffMaster__GetAllEventBuff(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  struct EventPointBuffMaster___c_StaticFields **lookup; // x0
  __int64 v9; // x1
  struct EventPointBuffMaster___c_StaticFields *v10; // x8
  struct EventPointBuffMaster___c_StaticFields **v11; // x23
  __int64 _9__2_0_high; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__c **p_monitor; // x10
  __int64 v14; // x0
  struct EventPointBuffMaster___c_StaticFields *v15; // x8
  struct EventPointBuffMaster___c_StaticFields **v16; // x23
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 i; // x23
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x23
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v33; // x0
  __int64 v34; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v35; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  __int64 v37; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__c **p_offset; // x10
  __int64 v39; // x0
  __int64 v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x1
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v58; // x21
  struct EventPointBuffMaster___c_StaticFields *v59; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  __int64 v67; // [xsp+18h] [xbp-68h]

  if ( (byte_5938810 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_EventPointBuffEntity__TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__get_lookup__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
    sub_21FFC50(&Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__);
    sub_21FFC50(&EventPointBuffMaster___c_TypeInfo);
    byte_5938810 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  lookup = (struct EventPointBuffMaster___c_StaticFields **)DataMasterBase_object__object__int___get_lookup(
                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                              (const MethodInfo_3EDB054 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__get_lookup__);
  if ( !lookup )
    goto LABEL_70;
  v10 = *lookup;
  v11 = lookup;
  _9__2_0_high = HIWORD((*lookup)[12].__9__2_0);
  if ( HIWORD((*lookup)[12].__9__2_0) )
  {
    p_monitor = (System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__c **)&v10[7].__9__2_0->monitor;
    while ( *(p_monitor - 1) != System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__TypeInfo )
    {
      --_9__2_0_high;
      p_monitor += 2;
      if ( !_9__2_0_high )
        goto LABEL_8;
    }
    v14 = (__int64)&v10[15] + 16 * *(_DWORD *)p_monitor;
  }
  else
  {
LABEL_8:
    v14 = sub_2237E2C(lookup, System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__TypeInfo, 3);
  }
  lookup = (struct EventPointBuffMaster___c_StaticFields **)(*(__int64 (__fastcall **)(struct EventPointBuffMaster___c_StaticFields **, _QWORD))v14)(
                                                              v11,
                                                              *(_QWORD *)(v14 + 8));
  if ( !lookup )
    goto LABEL_70;
  v15 = *lookup;
  v16 = lookup;
  v17 = HIWORD((*lookup)[12].__9__2_0);
  if ( HIWORD((*lookup)[12].__9__2_0) )
  {
    v18 = (int *)&v15[7].__9__2_0->monitor;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v18 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_15;
    }
    v19 = (__int64)&v15[13] + 16 * *v18;
  }
  else
  {
LABEL_15:
    v19 = sub_2237E2C(lookup, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v20 = (*(__int64 (__fastcall **)(struct EventPointBuffMaster___c_StaticFields **, _QWORD))v19)(
          v16,
          *(_QWORD *)(v19 + 8));
  v67 = v20;
  if ( !v20 )
    sub_21FFECC(v20, v21);
  for ( i = v20; ; i = v67 )
  {
    v23 = *(_QWORD *)i;
    v24 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_23;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_23:
      v26 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(i, *(_QWORD *)(v26 + 8));
    if ( (v27 & 1) == 0 )
      break;
    if ( !v67 )
      sub_21FFECC(v27, v9);
    v28 = *(_QWORD *)v67;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v30 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_31;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_31:
      v31 = sub_2237E2C(v67, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v67, *(_QWORD *)(v31 + 8));
    v33 = DataMasterBase_object__object__int___get_lookup(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            (const MethodInfo_3EDB054 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__get_lookup__);
    v35 = v33;
    if ( !v33 )
      sub_21FFECC(0, v34);
    klass = v33->klass;
    v37 = *(unsigned __int16 *)&v33->klass->_2.rank;
    if ( *(_WORD *)&v33->klass->_2.rank )
    {
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__TypeInfo )
      {
        --v37;
        p_offset += 2;
        if ( !v37 )
          goto LABEL_38;
      }
      v39 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
    }
    else
    {
LABEL_38:
      v39 = sub_2237E2C(v33, System_Collections_Generic_IReadOnlyDictionary_string__EventPointBuffEntity__TypeInfo, 2);
    }
    v40 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, __int64, _QWORD))v39)(
            v35,
            v32,
            *(_QWORD *)(v39 + 8));
    v47 = v40;
    if ( !v40 )
      sub_21FFECC(0, 0);
    if ( *(_DWORD *)(v40 + 20) == eventId && *(_DWORD *)(v40 + 24) == groupId )
    {
      if ( !v7
        || (items = v7->fields._items,
            v49 = Method_System_Collections_Generic_List_EventPointBuffEntity__Add__,
            ++v7->fields._version,
            !items) )
      {
        sub_21FFECC(v40, v40);
      }
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v40,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v51[4] = (Il2CppClass *)v47;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v51 + 4), v47, v41, v42, v43, v44, v45, v46);
      }
    }
  }
  if ( v67 )
  {
    v52 = *(_QWORD *)v67;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_55;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_55:
      v55 = sub_2237E2C(v67, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v55)(v67, *(_QWORD *)(v55 + 8));
  }
  lookup = (struct EventPointBuffMaster___c_StaticFields **)EventPointBuffMaster___c_TypeInfo;
  if ( !*(&EventPointBuffMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventPointBuffMaster___c_TypeInfo, v9);
    lookup = (struct EventPointBuffMaster___c_StaticFields **)EventPointBuffMaster___c_TypeInfo;
  }
  static_fields = lookup[23];
  _9__2_0 = (System_Comparison_T__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*((_DWORD *)lookup + 57) )
    {
      j_il2cpp_runtime_class_init_0(lookup, v9);
      static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
    }
    v58 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventPointBuffEntity__TypeInfo);
    System_Comparison_object____ctor(_9__2_0, v58, Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__, 0);
    v59 = EventPointBuffMaster___c_TypeInfo->static_fields;
    v59->__9__2_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__2_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v59->__9__2_0, (int32_t)_9__2_0, v60, v61, v62, v63, v64, v65);
  }
  if ( !v7 )
LABEL_70:
    sub_21FFECC(lookup, v9);
  System_Collections_Generic_List_object___Sort_71636404(
    v7,
    _9__2_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v7,
                                         (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
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
  __int64 v15; // x1
  EventPointBuffMaster___c_c *v16; // x8
  System_Object_array *v17; // x21
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x9
  System_Comparison_T__o *_9__4_0; // x23
  Il2CppObject *v20; // x24
  struct EventPointBuffMaster___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  Il2CppObject *MasterData_object; // x23
  int64_t EventPointTotal; // x0
  System_Predicate_EventPointBuffEntity__c *v30; // x8
  System_Predicate_object__o *v31; // x19

  if ( (byte_5938812 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Find_EventPointBuffEntity___);
    sub_21FFC50(&Method_System_Array_Sort_EventPointBuffEntity___);
    sub_21FFC50(&System_Comparison_EventPointBuffEntity__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&System_Predicate_EventPointBuffEntity__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__);
    sub_21FFC50(&Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__);
    sub_21FFC50(&EventPointBuffMaster___c__DisplayClass4_0_TypeInfo);
    sub_21FFC50(&EventPointBuffMaster___c_TypeInfo);
    byte_5938812 = 1;
  }
  v7 = sub_21FFEBC(EventPointBuffMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_21;
  *(_DWORD *)(v7 + 24) = funcid;
  EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(this, eventId, funcid, -1, v10);
  if ( (EventPointGroupId & 0x80000000) == 0 )
  {
    v13 = EventPointGroupId;
    EntityList = EventPointBuffMaster__getEntityList(this, eventId, v12);
    v16 = EventPointBuffMaster___c_TypeInfo;
    v17 = (System_Object_array *)EntityList;
    if ( !*(&EventPointBuffMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventPointBuffMaster___c_TypeInfo, v15);
      v16 = EventPointBuffMaster___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__4_0 = (System_Comparison_T__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !*(&v16->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v16, v15);
        static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventPointBuffEntity__TypeInfo);
      System_Comparison_object____ctor(_9__4_0, v20, Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__, 0);
      v21 = EventPointBuffMaster___c_TypeInfo->static_fields;
      v21->__9__4_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__4_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->__9__4_0, (int32_t)_9__4_0, v22, v23, v24, v25, v26, v27);
    }
    System_Array__Sort_object__58222280(
      v17,
      _9__4_0,
      (const MethodInfo_37866C8 *)Method_System_Array_Sort_EventPointBuffEntity___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( MasterData_object )
      {
        EventPointTotal = UserEventPointMaster__GetEventPointTotal(
                            (UserEventPointMaster_o *)MasterData_object,
                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                            eventId,
                            v13,
                            0);
        v30 = System_Predicate_EventPointBuffEntity__TypeInfo;
        *(_QWORD *)(v7 + 16) = EventPointTotal;
        v31 = (System_Predicate_object__o *)sub_21FFEBC(v30);
        System_Predicate_object____ctor(
          v31,
          (Il2CppObject *)v7,
          Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__,
          0);
        return (EventPointBuffEntity_o *)System_Array__Find_object_(
                                           v17,
                                           (System_Predicate_T__o *)v31,
                                           (const MethodInfo_39772EC *)Method_System_Array_Find_EventPointBuffEntity___);
      }
    }
LABEL_21:
    sub_21FFECC(Instance, v9);
  }
  return 0;
}


System_Collections_Generic_List_EventPointBuffEntity__o *EventPointBuffMaster__GetEntityListWithGroupId(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  System_Collections_Generic_IEnumerator_T__o *v40; // [xsp+18h] [xbp-48h]

  if ( (byte_593880F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventPointBuffEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_EventPointBuffEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
    byte_593880F = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_EventPointBuffEntity__GetEnumerator__);
  v40 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v11);
  for ( i = Enumerator; ; i = v40 )
  {
    klass = i->klass;
    v14 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v16 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            i,
            *(_QWORD *)(v16 + 8));
    if ( (v17 & 1) == 0 )
      break;
    if ( !v40 )
      sub_21FFECC(v17, v18);
    v19 = v40->klass;
    v20 = *(unsigned __int16 *)&v40->klass->_2.rank;
    if ( *(_WORD *)&v40->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventPointBuffEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_EventPointBuffEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_18:
      v22 = sub_2237E2C(v40, System_Collections_Generic_IEnumerator_EventPointBuffEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            v40,
            *(_QWORD *)(v22 + 8));
    v30 = v23;
    if ( !v23 )
      sub_21FFECC(0, 0);
    if ( *(_DWORD *)(v23 + 20) == eventId && *(_DWORD *)(v23 + 24) == groupId )
    {
      if ( !v7
        || (items = v7->fields._items,
            v32 = Method_System_Collections_Generic_List_EventPointBuffEntity__Add__,
            ++v7->fields._version,
            !items) )
      {
        sub_21FFECC(v23, v23);
      }
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v23,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v30;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 4), v30, v24, v25, v26, v27, v28, v29);
      }
    }
  }
  if ( v40 )
  {
    v35 = v40->klass;
    v36 = *(unsigned __int16 *)&v40->klass->_2.rank;
    if ( *(_WORD *)&v40->klass->_2.rank )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_35;
      }
      v38 = (__int64)&v35->vtable[*v37];
    }
    else
    {
LABEL_35:
      v38 = sub_2237E2C(v40, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(v40, *(_QWORD *)(v38 + 8));
  }
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
  int v10; // w10
  EventPointBuffEntity_o *v11; // x11
  struct System_Int32_array *funcIds; // x13
  il2cpp_array_size_t v13; // x12
  int32_t *m_Items; // x13
  int v15; // t1

  EntityList = EventPointBuffMaster__getEntityList(this, eventId, *(const MethodInfo **)&funcId);
  if ( !EntityList )
LABEL_16:
    sub_21FFECC(EntityList, v8);
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 == max_length )
        sub_21FFED4(EntityList);
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
      if ( ++v10 == (max_length & ~(max_length >> 31)) )
        return defaultValue;
    }
    m_Items = funcIds->m_Items;
    while ( 1 )
    {
      v15 = *m_Items++;
      if ( v15 == funcId )
        return v11->fields.groupId;
      LODWORD(v13) = v13 - 1;
      if ( !(_DWORD)v13 )
        goto LABEL_12;
    }
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
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_object__bool__o *v11; // x19

  if ( (byte_5938811 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_EventPointBuffEntity___);
    sub_21FFC50(&System_Func_EventPointBuffEntity__bool__TypeInfo);
    sub_21FFC50(&Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__);
    sub_21FFC50(&EventPointBuffMaster___c__DisplayClass3_0_TypeInfo);
    byte_5938811 = 1;
  }
  v7 = sub_21FFEBC(EventPointBuffMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  list = this->fields.list;
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = groupId;
  v11 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventPointBuffEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__58935448(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v11,
           (const MethodInfo_3834898 *)Method_System_Linq_Enumerable_Any_EventPointBuffEntity___);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_593880E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventPointBuffEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventPointBuffEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
    byte_593880E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventPointBuffEntity__get_Count__);
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
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventPointBuffEntity__get_Item__);
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
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v6;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_21FFECC(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v5,
                                         (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


void EventPointBuffMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938814 & 1) == 0 )
  {
    sub_21FFC50(&EventPointBuffMaster___c_TypeInfo);
    byte_5938814 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventPointBuffMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventPointBuffMaster___c_TypeInfo->static_fields->__9 = (struct EventPointBuffMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventPointBuffMaster___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, a);
  return a->fields.eventPoint - b->fields.eventPoint;
}


int32_t EventPointBuffMaster___c___GetEnableEntity_b__4_0(
        EventPointBuffMaster___c_o *this,
        EventPointBuffEntity_o *x,
        EventPointBuffEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_21FFECC(this, x);
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
    sub_21FFECC(this, 0);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v4 = this;
  if ( (byte_5938815 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Exists_int___);
    sub_21FFC50(&System_Predicate_int__TypeInfo);
    this = (EventPointBuffMaster___c__DisplayClass4_0_o *)sub_21FFC50(&Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__);
    byte_5938815 = 1;
  }
  if ( !x )
    sub_21FFECC(this, x);
  if ( v4->fields.pointTotal < x->fields.eventPoint )
    return 0;
  funcIds = x->fields.funcIds;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Predicate_int__o *)sub_21FFEBC(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__,
      0);
    v4->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
  }
  return System_Array__Exists_int_(
           funcIds,
           (System_Predicate_T__o *)_9__2,
           (const MethodInfo_3976B80 *)Method_System_Array_Exists_int___);
}


bool EventPointBuffMaster___c__DisplayClass4_0___GetEnableEntity_b__2(
        EventPointBuffMaster___c__DisplayClass4_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  return this->fields.funcid == y;
}