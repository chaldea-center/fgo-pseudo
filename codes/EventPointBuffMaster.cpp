void __fastcall EventPointBuffMaster___ctor(EventPointBuffMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B1CD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__);
    byte_4A5B1CD = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    261,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__);
}


EventPointBuffEntity_array *__fastcall EventPointBuffMaster__GetAllEventBuff(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v9; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v11; // x20
  __int64 v12; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v15; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v16; // x20
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v33; // x25
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v34; // x8
  __int64 v35; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v36; // x10
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x8
  EventPointBuffEntity_c *v43; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v46; // x10
  __int64 size; // x11
  Il2CppClass **v48; // x0
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  EventPointBuffMaster___c_c *v53; // x8
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v55; // x21
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x0
  int32_t v57; // w2
  int32_t v58; // w3

  if ( (byte_4A5B1CA & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventPointBuffEntity__TypeInfo);
    sub_1B885B0(&EventPointBuffEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
    sub_1B885B0(&Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__);
    sub_1B885B0(&EventPointBuffMaster___c_TypeInfo);
    byte_4A5B1CA = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_67;
  klass = lookup->klass;
  v11 = lookup;
  v12 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v12;
      p_offset += 2;
      if ( !v12 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 3LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))p_method)(
                                                                                         v11,
                                                                                         *(_QWORD *)(p_method + 8));
  if ( !lookup )
    goto LABEL_67;
  v15 = lookup->klass;
  v16 = lookup;
  v17 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v18 = &v15->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v18 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_15;
    }
    v19 = (__int64)&v15->vtable[*v18].method;
  }
  else
  {
LABEL_15:
    v19 = sub_1BDA590(lookup, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))v19)(
          v16,
          *(_QWORD *)(v19 + 8));
  if ( !v21 )
    sub_1B8880C(0LL, v20);
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
      v25 = sub_1BDA590(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v29 = sub_1BDA590(v21, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
    v31 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    v33 = v31;
    if ( !v31 )
      goto LABEL_63;
    v34 = v31->klass;
    v35 = *(unsigned __int16 *)(&v31->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v31->klass->_2.bitflags2 + 3) )
    {
      v36 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v34->_1.interfaceOffsets->offset;
      while ( *(v36 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v35;
        v36 += 2;
        if ( !v35 )
          goto LABEL_36;
      }
      v37 = (__int64)&v34->vtable[*(_DWORD *)v36 + 2].method;
    }
    else
    {
LABEL_36:
      v37 = sub_1BDA590(v31, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    v38 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD))v37)(
            v33,
            v30,
            *(_QWORD *)(v37 + 8));
    v42 = v38;
    if ( !v38 )
      sub_1B8880C(0LL, v39);
    v43 = EventPointBuffEntity_TypeInfo;
    methodPtr_low = LOBYTE(EventPointBuffEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v38 + 304LL) < (unsigned int)methodPtr_low
      || *(EventPointBuffEntity_c **)(*(_QWORD *)(*(_QWORD *)v38 + 200LL) + 8 * methodPtr_low - 8) != EventPointBuffEntity_TypeInfo )
    {
      sub_1B88ACC(v38);
LABEL_63:
      sub_1B8880C(v31, v32);
    }
    if ( *(_DWORD *)(v38 + 20) == eventId && *(_DWORD *)(v38 + 24) == groupId )
    {
      if ( !v7 )
        sub_1B8880C(v38, EventPointBuffEntity_TypeInfo);
      items = v7->fields._items;
      v46 = Method_System_Collections_Generic_List_EventPointBuffEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1B8880C(v38, v43);
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v38,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v48[4] = (Il2CppClass *)v42;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 4), v42, v40, v41);
      }
    }
  }
  v49 = *(_QWORD *)v21;
  v50 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_52;
    }
    v52 = v49 + 16LL * *v51 + 312;
  }
  else
  {
LABEL_52:
    v52 = sub_1BDA590(v21, System_IDisposable_TypeInfo, 0LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v52)(
                                                                                         v21,
                                                                                         *(_QWORD *)(v52 + 8));
  v53 = EventPointBuffMaster___c_TypeInfo;
  if ( !EventPointBuffMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointBuffMaster___c_TypeInfo);
    v53 = EventPointBuffMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Comparison_T__o *)v53->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v53 = EventPointBuffMaster___c_TypeInfo;
    }
    v55 = (Il2CppObject *)v53->static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventPointBuffEntity__TypeInfo);
    System_Comparison_object____ctor(_9__2_0, v55, Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__, 0LL);
    static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__2_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v57, v58);
  }
  if ( !v7 )
LABEL_67:
    sub_1B8880C(lookup, v9);
  System_Collections_Generic_List_object___Sort_55571192(
    v7,
    _9__2_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v7,
                                         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


EventPointBuffEntity_o *__fastcall EventPointBuffMaster__GetEnableEntity(
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
  Il2CppObject *MasterData_object; // x23
  System_Predicate_object__o *v23; // x19

  if ( (byte_4A5B1CC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Find_EventPointBuffEntity___);
    sub_1B885B0(&Method_System_Array_Sort_EventPointBuffEntity___);
    sub_1B885B0(&System_Comparison_EventPointBuffEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&System_Predicate_EventPointBuffEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__);
    sub_1B885B0(&Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__);
    sub_1B885B0(&EventPointBuffMaster___c__DisplayClass4_0_TypeInfo);
    sub_1B885B0(&EventPointBuffMaster___c_TypeInfo);
    byte_4A5B1CC = 1;
  }
  v7 = sub_1B887FC(EventPointBuffMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_17;
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
      _9__4_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventPointBuffEntity__TypeInfo);
      System_Comparison_object____ctor(_9__4_0, v18, Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__, 0LL);
      static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__4_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v20, v21);
    }
    System_Array__Sort_object__48551928(
      v16,
      _9__4_0,
      (const MethodInfo_2E4D7F8 *)Method_System_Array_Sort_EventPointBuffEntity___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( MasterData_object )
      {
        *(_QWORD *)(v7 + 16) = UserEventPointMaster__GetEventPointTotal(
                                 (UserEventPointMaster_o *)MasterData_object,
                                 (int64_t)Instance,
                                 eventId,
                                 v13,
                                 0LL);
        v23 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_EventPointBuffEntity__TypeInfo);
        System_Predicate_object____ctor(
          v23,
          (Il2CppObject *)v7,
          Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__,
          0LL);
        return (EventPointBuffEntity_o *)System_Array__Find_object_(
                                           v16,
                                           (System_Predicate_T__o *)v23,
                                           (const MethodInfo_2F78480 *)Method_System_Array_Find_EventPointBuffEntity___);
      }
    }
LABEL_17:
    sub_1B8880C(Instance, v9);
  }
  return 0LL;
}


System_Collections_Generic_List_EventPointBuffEntity__o *__fastcall EventPointBuffMaster__GetEntityListWithGroupId(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x8
  EventPointBuffEntity_c *v25; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4A5B1C9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&EventPointBuffEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
    byte_4A5B1C9 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v24 = v20;
    if ( !v20 )
      goto LABEL_36;
    v25 = EventPointBuffEntity_TypeInfo;
    methodPtr_low = LOBYTE(EventPointBuffEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 304LL) < (unsigned int)methodPtr_low
      || *(EventPointBuffEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * methodPtr_low - 8) != EventPointBuffEntity_TypeInfo )
    {
      sub_1B88ACC(v20);
LABEL_36:
      sub_1B8880C(v20, v21);
    }
    if ( *(_DWORD *)(v20 + 20) == eventId && *(_DWORD *)(v20 + 24) == groupId )
    {
      if ( !v7 )
        sub_1B8880C(v20, EventPointBuffEntity_TypeInfo);
      items = v7->fields._items;
      v28 = Method_System_Collections_Generic_List_EventPointBuffEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1B8880C(v20, v25);
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v24;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), v24, v22, v23);
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_32;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_32:
    v34 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return (System_Collections_Generic_List_EventPointBuffEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventPointBuffMaster__GetEventPointGroupId(
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
  __int64 v13; // x12
  int v14; // w13

  EntityList = EventPointBuffMaster__getEntityList(this, eventId, *(const MethodInfo **)&funcId);
  if ( !EntityList )
LABEL_16:
    sub_1B8880C(EntityList, v8);
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 == max_length )
        sub_1B88814(EntityList, v8);
      v11 = EntityList->m_Items[v10];
      if ( !v11 )
        goto LABEL_16;
      funcIds = v11->fields.funcIds;
      if ( funcIds )
      {
        v13 = *(_QWORD *)&funcIds->max_length;
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
    while ( funcIds->m_Items[v14 + 1] != funcId )
    {
      if ( (_DWORD)v13 == ++v14 )
        goto LABEL_12;
    }
    return v11->fields.groupId;
  }
  return defaultValue;
}


bool __fastcall EventPointBuffMaster__IsEventEntityContains(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4A5B1CB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_DataEntityBase____76126800);
    sub_1B885B0(&System_Func_DataEntityBase__bool__TypeInfo);
    sub_1B885B0(&Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__);
    sub_1B885B0(&EventPointBuffMaster___c__DisplayClass3_0_TypeInfo);
    byte_4A5B1CB = 1;
  }
  v7 = sub_1B887FC(EventPointBuffMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = groupId;
  list = this->fields.list;
  v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_DataEntityBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__48820656(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v11,
           (const MethodInfo_2E8F1B0 *)Method_System_Linq_Enumerable_Any_DataEntityBase____76126800);
}


EventPointBuffEntity_array *__fastcall EventPointBuffMaster__getEntityList(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4A5B1C8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventPointBuffEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
    byte_4A5B1C8 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v6 = list;
      methodPtr_low = LOBYTE(EventPointBuffEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventPointBuffEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointBuffEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == eventId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v14 = Method_System_Collections_Generic_List_EventPointBuffEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v6, v10, v11);
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, v6);
  }
LABEL_17:
  if ( !v5 )
    goto LABEL_19;
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v5,
                                         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


void __fastcall EventPointBuffMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B1CE & 1) == 0 )
  {
    sub_1B885B0(&EventPointBuffMaster___c_TypeInfo);
    byte_4A5B1CE = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventPointBuffMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventPointBuffMaster___c_TypeInfo->static_fields->__9 = (struct EventPointBuffMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventPointBuffMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall EventPointBuffMaster___c___ctor(EventPointBuffMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventPointBuffMaster___c___GetAllEventBuff_b__2_0(
        EventPointBuffMaster___c_o *this,
        EventPointBuffEntity_o *a,
        EventPointBuffEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.eventPoint - b->fields.eventPoint;
}


int32_t __fastcall EventPointBuffMaster___c___GetEnableEntity_b__4_0(
        EventPointBuffMaster___c_o *this,
        EventPointBuffEntity_o *x,
        EventPointBuffEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1B8880C(this, x);
  return y->fields.eventPoint - x->fields.eventPoint;
}


void __fastcall EventPointBuffMaster___c__DisplayClass3_0___ctor(
        EventPointBuffMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventPointBuffMaster___c__DisplayClass3_0___IsEventEntityContains_b__0(
        EventPointBuffMaster___c__DisplayClass3_0_o *this,
        DataEntityBase_o *ent,
        const MethodInfo *method)
{
  EventPointBuffMaster___c__DisplayClass3_0_o *v4; // x20
  __int64 methodPtr_low; // x9

  v4 = this;
  if ( (byte_4A5B1CF & 1) == 0 )
  {
    this = (EventPointBuffMaster___c__DisplayClass3_0_o *)sub_1B885B0(&EventPointBuffEntity_TypeInfo);
    byte_4A5B1CF = 1;
  }
  if ( !ent )
LABEL_10:
    sub_1B8880C(this, ent);
  methodPtr_low = LOBYTE(EventPointBuffEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ent->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventPointBuffEntity_c *)ent->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointBuffEntity_TypeInfo )
  {
    sub_1B88ACC(ent);
    goto LABEL_10;
  }
  return HIDWORD(ent[1].klass) == v4->fields.eventId && LODWORD(ent[1].monitor) == v4->fields.groupId;
}


void __fastcall EventPointBuffMaster___c__DisplayClass4_0___ctor(
        EventPointBuffMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventPointBuffMaster___c__DisplayClass4_0___GetEnableEntity_b__1(
        EventPointBuffMaster___c__DisplayClass4_0_o *this,
        EventPointBuffEntity_o *x,
        const MethodInfo *method)
{
  EventPointBuffMaster___c__DisplayClass4_0_o *v4; // x19
  System_Int32_array *funcIds; // x20
  System_Predicate_int__o *_9__2; // x22
  int32_t v8; // w2
  int32_t v9; // w3

  v4 = this;
  if ( (byte_4A5B1D0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Exists_int___);
    sub_1B885B0(&System_Predicate_int__TypeInfo);
    this = (EventPointBuffMaster___c__DisplayClass4_0_o *)sub_1B885B0(&Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__);
    byte_4A5B1D0 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  if ( v4->fields.pointTotal < x->fields.eventPoint )
    return 0;
  funcIds = x->fields.funcIds;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Predicate_int__o *)sub_1B887FC(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__,
      0LL);
    v4->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  return System_Array__Exists_int_(
           funcIds,
           (System_Predicate_T__o *)_9__2,
           (const MethodInfo_2F77F4C *)Method_System_Array_Exists_int___);
}


bool __fastcall EventPointBuffMaster___c__DisplayClass4_0___GetEnableEntity_b__2(
        EventPointBuffMaster___c__DisplayClass4_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  return this->fields.funcid == y;
}