void __fastcall EventPointBuffMaster___ctor(EventPointBuffMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC47E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__, method);
    byte_49FC47E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    261,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointBuffEntity_array *__fastcall EventPointBuffMaster__GetAllEventBuff(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v20; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v23; // x20
  __int64 v24; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v27; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v28; // x20
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x20
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v42; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v43; // x25
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v44; // x8
  __int64 v45; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v46; // x10
  __int64 v47; // x0
  __int64 v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  __int64 v51; // x8
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v54; // x10
  __int64 size; // x11
  Il2CppClass **v56; // x0
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  EventPointBuffMaster___c_c *v63; // x8
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v65; // x21
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x0
  int32_t v67; // w2
  int32_t v68; // w3

  if ( (byte_49FC47B & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_EventPointBuffEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&EventPointBuffEntity_TypeInfo, v7);
    sub_1B640C8(&System_IDisposable_TypeInfo, v8);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_string__TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_string__TypeInfo, v10);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v16);
    sub_1B640C8(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v17);
    sub_1B640C8(&Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__, v18);
    sub_1B640C8(&EventPointBuffMaster___c_TypeInfo, v19);
    byte_49FC47B = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventPointBuffEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&groupId);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_67;
  klass = lookup->klass;
  v23 = lookup;
  v24 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v24;
      p_offset += 2;
      if ( !v24 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 3LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))p_method)(
                                                                                         v23,
                                                                                         *(_QWORD *)(p_method + 8));
  if ( !lookup )
    goto LABEL_67;
  v27 = lookup->klass;
  v28 = lookup;
  v29 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v30 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v30 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_15;
    }
    v31 = (__int64)&v27->vtable[*v30].method;
  }
  else
  {
LABEL_15:
    v31 = sub_1BB60A8(lookup, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))v31)(
          v28,
          *(_QWORD *)(v31 + 8));
  if ( !v32 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v33 = *(_QWORD *)v32;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_22;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_22:
      v36 = sub_1BB60A8(v32, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
      break;
    v37 = *(_QWORD *)v32;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v39 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_29;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_29:
      v40 = sub_1BB60A8(v32, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v32, *(_QWORD *)(v40 + 8));
    v42 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    v43 = v42;
    if ( !v42 )
      goto LABEL_63;
    v44 = v42->klass;
    v45 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
    {
      v46 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v44->_1.interfaceOffsets->offset;
      while ( *(v46 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v45;
        v46 += 2;
        if ( !v45 )
          goto LABEL_36;
      }
      v47 = (__int64)&v44->vtable[*(_DWORD *)v46 + 2].method;
    }
    else
    {
LABEL_36:
      v47 = sub_1BB60A8(v42, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    v48 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD))v47)(
            v43,
            v41,
            *(_QWORD *)(v47 + 8));
    v51 = v48;
    if ( !v48 )
      sub_1B64324(0LL);
    methodPtr_low = LOBYTE(EventPointBuffEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v48 + 304LL) < (unsigned int)methodPtr_low
      || *(EventPointBuffEntity_c **)(*(_QWORD *)(*(_QWORD *)v48 + 200LL) + 8 * methodPtr_low - 8) != EventPointBuffEntity_TypeInfo )
    {
      sub_1B645E4(v48);
LABEL_63:
      sub_1B64324(v42);
    }
    if ( *(_DWORD *)(v48 + 20) == eventId && *(_DWORD *)(v48 + 24) == groupId )
    {
      if ( !v20 )
        sub_1B64324(v48);
      items = v20->fields._items;
      v54 = Method_System_Collections_Generic_List_EventPointBuffEntity__Add__;
      ++v20->fields._version;
      if ( !items )
        sub_1B64324(v48);
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)v48,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v56 = &items->obj.klass + size;
        v20->fields._size = size + 1;
        v56[4] = (Il2CppClass *)v51;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v56 + 4), v51, v49, v50);
      }
    }
  }
  v57 = *(_QWORD *)v32;
  v58 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
  {
    v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
    {
      --v58;
      v59 += 4;
      if ( !v58 )
        goto LABEL_52;
    }
    v60 = v57 + 16LL * *v59 + 312;
  }
  else
  {
LABEL_52:
    v60 = sub_1BB60A8(v32, System_IDisposable_TypeInfo, 0LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v60)(
                                                                                         v32,
                                                                                         *(_QWORD *)(v60 + 8));
  v63 = EventPointBuffMaster___c_TypeInfo;
  if ( !EventPointBuffMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointBuffMaster___c_TypeInfo);
    v63 = EventPointBuffMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Comparison_T__o *)v63->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63);
      v63 = EventPointBuffMaster___c_TypeInfo;
    }
    v65 = (Il2CppObject *)v63->static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventPointBuffEntity__TypeInfo, v61, v62);
    System_Comparison_object____ctor(_9__2_0, v65, Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__, 0LL);
    static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__2_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v67, v68);
  }
  if ( !v20 )
LABEL_67:
    sub_1B64324(lookup);
  System_Collections_Generic_List_object___Sort_55243320(
    v20,
    _9__2_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v20,
                                         (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventPointBuffEntity_o *__fastcall EventPointBuffMaster__GetEnableEntity(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t funcid,
        const MethodInfo *method)
{
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
  __int64 v17; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v19; // x4
  int32_t EventPointGroupId; // w0
  const MethodInfo *v21; // x2
  int32_t v22; // w22
  EventPointBuffEntity_array *EntityList; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  EventPointBuffMaster___c_c *v26; // x8
  System_Object_array *v27; // x21
  System_Comparison_T__o *_9__4_0; // x23
  Il2CppObject *v29; // x24
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppObject *MasterData_object; // x23
  __int64 v34; // x1
  __int64 v35; // x2
  System_Predicate_object__o *v36; // x19

  if ( (byte_49FC47D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Find_EventPointBuffEntity___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Array_Sort_EventPointBuffEntity___, v7);
    sub_1B640C8(&System_Comparison_EventPointBuffEntity__TypeInfo, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventPointMaster___, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&System_Predicate_EventPointBuffEntity__TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__, v13);
    sub_1B640C8(&Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__, v14);
    sub_1B640C8(&EventPointBuffMaster___c__DisplayClass4_0_TypeInfo, v15);
    sub_1B640C8(&EventPointBuffMaster___c_TypeInfo, v16);
    byte_49FC47D = 1;
  }
  v17 = sub_1B64314(EventPointBuffMaster___c__DisplayClass4_0_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&funcid);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_17;
  *(_DWORD *)(v17 + 24) = funcid;
  EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(this, eventId, funcid, -1, v19);
  if ( (EventPointGroupId & 0x80000000) == 0 )
  {
    v22 = EventPointGroupId;
    EntityList = EventPointBuffMaster__getEntityList(this, eventId, v21);
    v26 = EventPointBuffMaster___c_TypeInfo;
    v27 = (System_Object_array *)EntityList;
    if ( !EventPointBuffMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointBuffMaster___c_TypeInfo);
      v26 = EventPointBuffMaster___c_TypeInfo;
    }
    _9__4_0 = (System_Comparison_T__o *)v26->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = EventPointBuffMaster___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v26->static_fields->__9;
      _9__4_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventPointBuffEntity__TypeInfo, v24, v25);
      System_Comparison_object____ctor(_9__4_0, v29, Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__, 0LL);
      static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__4_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v31, v32);
    }
    System_Array__Sort_object__48264584(
      v27,
      _9__4_0,
      (const MethodInfo_2E07588 *)Method_System_Array_Sort_EventPointBuffEntity___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( MasterData_object )
      {
        *(_QWORD *)(v17 + 16) = UserEventPointMaster__GetEventPointTotal(
                                  (UserEventPointMaster_o *)MasterData_object,
                                  (int64_t)Instance,
                                  eventId,
                                  v22,
                                  0LL);
        v36 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_EventPointBuffEntity__TypeInfo, v34, v35);
        System_Predicate_object____ctor(
          v36,
          (Il2CppObject *)v17,
          Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__,
          0LL);
        return (EventPointBuffEntity_o *)System_Array__Find_object_(
                                           v27,
                                           (System_Predicate_T__o *)v36,
                                           (const MethodInfo_2F2FF10 *)Method_System_Array_Find_EventPointBuffEntity___);
      }
    }
LABEL_17:
    sub_1B64324(Instance);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventPointBuffEntity__o *__fastcall EventPointBuffMaster__GetEntityListWithGroupId(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x8
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v31; // x10
  __int64 size; // x11
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_49FC47A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1B640C8(&EventPointBuffEntity_TypeInfo, v7);
    sub_1B640C8(&System_IDisposable_TypeInfo, v8);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v13);
    byte_49FC47A = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventPointBuffEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&groupId);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v28 = v25;
    if ( !v25 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(EventPointBuffEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)methodPtr_low
      || *(EventPointBuffEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) != EventPointBuffEntity_TypeInfo )
    {
      sub_1B645E4(v25);
LABEL_36:
      sub_1B64324(v25);
    }
    if ( *(_DWORD *)(v25 + 20) == eventId && *(_DWORD *)(v25 + 24) == groupId )
    {
      if ( !v14 )
        sub_1B64324(v25);
      items = v14->fields._items;
      v31 = Method_System_Collections_Generic_List_EventPointBuffEntity__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1B64324(v25);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)v25,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v28;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), v28, v26, v27);
      }
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_32;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_32:
    v37 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return (System_Collections_Generic_List_EventPointBuffEntity__o *)v14;
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
    sub_1B64324(EntityList);
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 == max_length )
        sub_1B6432C(EntityList, v8);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointBuffMaster__IsEventEntityContains(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__bool__o *v15; // x20

  if ( (byte_49FC47C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_DataEntityBase____75747224, *(_QWORD *)&eventId);
    sub_1B640C8(&System_Func_DataEntityBase__bool__TypeInfo, v7);
    sub_1B640C8(&Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__, v8);
    sub_1B640C8(&EventPointBuffMaster___c__DisplayClass3_0_TypeInfo, v9);
    byte_49FC47C = 1;
  }
  v10 = sub_1B64314(EventPointBuffMaster___c__DisplayClass3_0_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&groupId);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B64324(v11);
  *(_DWORD *)(v10 + 16) = eventId;
  *(_DWORD *)(v10 + 20) = groupId;
  list = this->fields.list;
  v15 = (System_Func_object__bool__o *)sub_1B64314(System_Func_DataEntityBase__bool__TypeInfo, v12, v13);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v10,
    Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__48531816(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v15,
           (const MethodInfo_2E48968 *)Method_System_Linq_Enumerable_Any_DataEntityBase____75747224);
}


// local variable allocation has failed, the output may be wrong!
EventPointBuffEntity_array *__fastcall EventPointBuffMaster__getEntityList(
        EventPointBuffMaster_o *this,
        int32_t eventId,
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
  int v13; // w22
  int32_t v14; // w23
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_ObjectModel_Collection_T__o *v17; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_49FC479 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&EventPointBuffEntity_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v10);
    byte_49FC479 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventPointBuffEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v17 = list;
      methodPtr_low = LOBYTE(EventPointBuffEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventPointBuffEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointBuffEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == eventId )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v20 = Method_System_Collections_Generic_List_EventPointBuffEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v17;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v17, v15, v16);
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B64324(list);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v11,
                                         (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


void __fastcall EventPointBuffMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC47F & 1) == 0 )
  {
    sub_1B640C8(&EventPointBuffMaster___c_TypeInfo, v1);
    byte_49FC47F = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventPointBuffMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventPointBuffMaster___c_TypeInfo->static_fields->__9 = (struct EventPointBuffMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventPointBuffMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return a->fields.eventPoint - b->fields.eventPoint;
}


int32_t __fastcall EventPointBuffMaster___c___GetEnableEntity_b__4_0(
        EventPointBuffMaster___c_o *this,
        EventPointBuffEntity_o *x,
        EventPointBuffEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1B64324(this);
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
  if ( (byte_49FC480 & 1) == 0 )
  {
    this = (EventPointBuffMaster___c__DisplayClass3_0_o *)sub_1B640C8(&EventPointBuffEntity_TypeInfo, ent);
    byte_49FC480 = 1;
  }
  if ( !ent )
LABEL_10:
    sub_1B64324(this);
  methodPtr_low = LOBYTE(EventPointBuffEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ent->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventPointBuffEntity_c *)ent->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointBuffEntity_TypeInfo )
  {
    sub_1B645E4(ent);
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
  __int64 v5; // x1
  __int64 v6; // x1
  System_Int32_array *funcIds; // x20
  System_Predicate_int__o *_9__2; // x22
  int32_t v10; // w2
  int32_t v11; // w3

  v4 = this;
  if ( (byte_49FC481 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Exists_int___, x);
    sub_1B640C8(&System_Predicate_int__TypeInfo, v5);
    this = (EventPointBuffMaster___c__DisplayClass4_0_o *)sub_1B640C8(
                                                            &Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__,
                                                            v6);
    byte_49FC481 = 1;
  }
  if ( !x )
    sub_1B64324(this);
  if ( v4->fields.pointTotal < x->fields.eventPoint )
    return 0;
  funcIds = x->fields.funcIds;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Predicate_int__o *)sub_1B64314(System_Predicate_int__TypeInfo, x, method);
    System_Predicate_int____ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__,
      0LL);
    v4->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  return System_Array__Exists_int_(
           funcIds,
           (System_Predicate_T__o *)_9__2,
           (const MethodInfo_2F2F9DC *)Method_System_Array_Exists_int___);
}


bool __fastcall EventPointBuffMaster___c__DisplayClass4_0___GetEnableEntity_b__2(
        EventPointBuffMaster___c__DisplayClass4_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  return this->fields.funcid == y;
}