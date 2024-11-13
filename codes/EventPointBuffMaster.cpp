void __fastcall EventPointBuffMaster___ctor(EventPointBuffMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1625C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__, method, v2);
    byte_4B1625C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    261,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointBuffEntity_array *__fastcall EventPointBuffMaster__GetAllEventBuff(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_object__o *v33; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v35; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v37; // x20
  __int64 v38; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v41; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v42; // x20
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x20
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v57; // x0
  __int64 v58; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v59; // x25
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v60; // x8
  __int64 v61; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v62; // x10
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x8
  EventPointBuffEntity_c *v73; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v76; // x10
  __int64 size; // x11
  Il2CppClass **v78; // x0
  __int64 v79; // x8
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  __int64 v83; // x2
  __int64 v84; // x3
  EventPointBuffMaster___c_c *v85; // x8
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v87; // x21
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7

  if ( (byte_4B16259 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventPointBuffEntity__TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&groupId);
    sub_1BCA7E0(&EventPointBuffEntity_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_string__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_string__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__, v29, v30);
    sub_1BCA7E0(&EventPointBuffMaster___c_TypeInfo, v31, v32);
    byte_4B16259 = 1;
  }
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventPointBuffEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&groupId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_67;
  klass = lookup->klass;
  v37 = lookup;
  v38 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v38;
      p_offset += 2;
      if ( !v38 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 3LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))p_method)(
                                                                                         v37,
                                                                                         *(_QWORD *)(p_method + 8));
  if ( !lookup )
    goto LABEL_67;
  v41 = lookup->klass;
  v42 = lookup;
  v43 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v44 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v44 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_15;
    }
    v45 = (__int64)&v41->vtable[*v44].method;
  }
  else
  {
LABEL_15:
    v45 = sub_1C1C7C0(lookup, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v47 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))v45)(
          v42,
          *(_QWORD *)(v45 + 8));
  if ( !v47 )
    sub_1BCAA3C(0LL, v46);
  while ( 1 )
  {
    v48 = *(_QWORD *)v47;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_22;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_22:
      v51 = sub_1C1C7C0(v47, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) & 1) == 0 )
      break;
    v52 = *(_QWORD *)v47;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v54 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_29;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_29:
      v55 = sub_1C1C7C0(v47, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v47, *(_QWORD *)(v55 + 8));
    v57 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    v59 = v57;
    if ( !v57 )
      goto LABEL_63;
    v60 = v57->klass;
    v61 = *(unsigned __int16 *)(&v57->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v57->klass->_2.bitflags2 + 3) )
    {
      v62 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v60->_1.interfaceOffsets->offset;
      while ( *(v62 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v61;
        v62 += 2;
        if ( !v61 )
          goto LABEL_36;
      }
      v63 = (__int64)&v60->vtable[*(_DWORD *)v62 + 2].method;
    }
    else
    {
LABEL_36:
      v63 = sub_1C1C7C0(v57, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    v64 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD))v63)(
            v59,
            v56,
            *(_QWORD *)(v63 + 8));
    v72 = v64;
    if ( !v64 )
      sub_1BCAA3C(0LL, v65);
    v73 = EventPointBuffEntity_TypeInfo;
    methodPtr_low = LOBYTE(EventPointBuffEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v64 + 304LL) < (unsigned int)methodPtr_low
      || *(EventPointBuffEntity_c **)(*(_QWORD *)(*(_QWORD *)v64 + 200LL) + 8 * methodPtr_low - 8) != EventPointBuffEntity_TypeInfo )
    {
      sub_1BCACFC(v64);
LABEL_63:
      sub_1BCAA3C(v57, v58);
    }
    if ( *(_DWORD *)(v64 + 20) == eventId && *(_DWORD *)(v64 + 24) == groupId )
    {
      if ( !v33 )
        sub_1BCAA3C(v64, EventPointBuffEntity_TypeInfo);
      items = v33->fields._items;
      v76 = Method_System_Collections_Generic_List_EventPointBuffEntity__Add__;
      ++v33->fields._version;
      if ( !items )
        sub_1BCAA3C(v64, v73);
      size = v33->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          (Il2CppObject *)v64,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
      }
      else
      {
        v78 = &items->obj.klass + size;
        v33->fields._size = size + 1;
        v78[4] = (Il2CppClass *)v72;
        sub_1BCA784((PartyOrganizationUtility_o *)(v78 + 4), v72, v66, v67, v68, v69, v70, v71);
      }
    }
  }
  v79 = *(_QWORD *)v47;
  v80 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
  {
    v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v81 - 1) != System_IDisposable_TypeInfo )
    {
      --v80;
      v81 += 4;
      if ( !v80 )
        goto LABEL_52;
    }
    v82 = v79 + 16LL * *v81 + 312;
  }
  else
  {
LABEL_52:
    v82 = sub_1C1C7C0(v47, System_IDisposable_TypeInfo, 0LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v82)(
                                                                                         v47,
                                                                                         *(_QWORD *)(v82 + 8));
  v85 = EventPointBuffMaster___c_TypeInfo;
  if ( !EventPointBuffMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointBuffMaster___c_TypeInfo, v35);
    v85 = EventPointBuffMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Comparison_T__o *)v85->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v85->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v85, v35);
      v85 = EventPointBuffMaster___c_TypeInfo;
    }
    v87 = (Il2CppObject *)v85->static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventPointBuffEntity__TypeInfo, v35, v83, v84);
    System_Comparison_object____ctor(_9__2_0, v87, Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__, 0LL);
    static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__2_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v89, v90, v91, v92, v93, v94);
  }
  if ( !v33 )
LABEL_67:
    sub_1BCAA3C(lookup, v35);
  System_Collections_Generic_List_object___Sort_56244000(
    v33,
    _9__2_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v33,
                                         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventPointBuffEntity_o *__fastcall EventPointBuffMaster__GetEnableEntity(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t funcid,
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x20
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x4
  int32_t EventPointGroupId; // w0
  const MethodInfo *v32; // x2
  int32_t v33; // w22
  EventPointBuffEntity_array *EntityList; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  EventPointBuffMaster___c_c *v38; // x8
  System_Object_array *v39; // x21
  System_Comparison_T__o *_9__4_0; // x23
  Il2CppObject *v41; // x24
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Predicate_object__o *v54; // x19

  if ( (byte_4B1625B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Find_EventPointBuffEntity___, *(_QWORD *)&eventId, *(_QWORD *)&funcid);
    sub_1BCA7E0(&Method_System_Array_Sort_EventPointBuffEntity___, v7, v8);
    sub_1BCA7E0(&System_Comparison_EventPointBuffEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventPointMaster___, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Predicate_EventPointBuffEntity__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__, v19, v20);
    sub_1BCA7E0(&Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__, v21, v22);
    sub_1BCA7E0(&EventPointBuffMaster___c__DisplayClass4_0_TypeInfo, v23, v24);
    sub_1BCA7E0(&EventPointBuffMaster___c_TypeInfo, v25, v26);
    byte_4B1625B = 1;
  }
  v27 = sub_1BCAA2C(EventPointBuffMaster___c__DisplayClass4_0_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&funcid, method);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_17;
  *(_DWORD *)(v27 + 24) = funcid;
  EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(this, eventId, funcid, -1, v30);
  if ( (EventPointGroupId & 0x80000000) == 0 )
  {
    v33 = EventPointGroupId;
    EntityList = EventPointBuffMaster__getEntityList(this, eventId, v32);
    v38 = EventPointBuffMaster___c_TypeInfo;
    v39 = (System_Object_array *)EntityList;
    if ( !EventPointBuffMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointBuffMaster___c_TypeInfo, v35);
      v38 = EventPointBuffMaster___c_TypeInfo;
    }
    _9__4_0 = (System_Comparison_T__o *)v38->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38, v35);
        v38 = EventPointBuffMaster___c_TypeInfo;
      }
      v41 = (Il2CppObject *)v38->static_fields->__9;
      _9__4_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventPointBuffEntity__TypeInfo, v35, v36, v37);
      System_Comparison_object____ctor(_9__4_0, v41, Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__, 0LL);
      static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__4_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__4_0,
        (int64_t)_9__4_0,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
    }
    System_Array__Sort_object__49153980(
      v39,
      _9__4_0,
      (const MethodInfo_2EE07BC *)Method_System_Array_Sort_EventPointBuffEntity___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v49);
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( MasterData_object )
      {
        *(_QWORD *)(v27 + 16) = UserEventPointMaster__GetEventPointTotal(
                                  (UserEventPointMaster_o *)MasterData_object,
                                  (int64_t)Instance,
                                  eventId,
                                  v33,
                                  0LL);
        v54 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_EventPointBuffEntity__TypeInfo, v51, v52, v53);
        System_Predicate_object____ctor(
          v54,
          (Il2CppObject *)v27,
          Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__,
          0LL);
        return (EventPointBuffEntity_o *)System_Array__Find_object_(
                                           v39,
                                           (System_Predicate_T__o *)v54,
                                           (const MethodInfo_300CA48 *)Method_System_Array_Find_EventPointBuffEntity___);
      }
    }
LABEL_17:
    sub_1BCAA3C(Instance, v29);
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
  __int64 v8; // x2
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
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x20
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x8
  EventPointBuffEntity_c *v43; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v46; // x10
  __int64 size; // x11
  Il2CppClass **v48; // x0
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0

  if ( (byte_4B16258 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&groupId);
    sub_1BCA7E0(&EventPointBuffEntity_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v19, v20);
    byte_4B16258 = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventPointBuffEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&groupId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v22);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v24);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        p_offset += 4;
        if ( !v27 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_16;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_16:
      v33 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
            Enumerator,
            *(_QWORD *)(v33 + 8));
    v42 = v34;
    if ( !v34 )
      goto LABEL_36;
    v43 = EventPointBuffEntity_TypeInfo;
    methodPtr_low = LOBYTE(EventPointBuffEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v34 + 304LL) < (unsigned int)methodPtr_low
      || *(EventPointBuffEntity_c **)(*(_QWORD *)(*(_QWORD *)v34 + 200LL) + 8 * methodPtr_low - 8) != EventPointBuffEntity_TypeInfo )
    {
      sub_1BCACFC(v34);
LABEL_36:
      sub_1BCAA3C(v34, v35);
    }
    if ( *(_DWORD *)(v34 + 20) == eventId && *(_DWORD *)(v34 + 24) == groupId )
    {
      if ( !v21 )
        sub_1BCAA3C(v34, EventPointBuffEntity_TypeInfo);
      items = v21->fields._items;
      v46 = Method_System_Collections_Generic_List_EventPointBuffEntity__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(v34, v43);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          (Il2CppObject *)v34,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v48[4] = (Il2CppClass *)v42;
        sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), v42, v36, v37, v38, v39, v40, v41);
      }
    }
  }
  v49 = Enumerator->klass;
  v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_32;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_32:
    v52 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(Enumerator, *(_QWORD *)(v52 + 8));
  return (System_Collections_Generic_List_EventPointBuffEntity__o *)v21;
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
    sub_1BCAA3C(EntityList, v8);
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 == max_length )
        sub_1BCAA44(EntityList, v8);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__bool__o *v19; // x20

  if ( (byte_4B1625A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_DataEntityBase____76878384, *(_QWORD *)&eventId, *(_QWORD *)&groupId);
    sub_1BCA7E0(&System_Func_DataEntityBase__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__, v9, v10);
    sub_1BCA7E0(&EventPointBuffMaster___c__DisplayClass3_0_TypeInfo, v11, v12);
    byte_4B1625A = 1;
  }
  v13 = sub_1BCAA2C(
          EventPointBuffMaster___c__DisplayClass3_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&groupId,
          method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  *(_DWORD *)(v13 + 16) = eventId;
  *(_DWORD *)(v13 + 20) = groupId;
  list = this->fields.list;
  v19 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_DataEntityBase__bool__TypeInfo, v15, v16, v17);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v13,
    Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__49415960(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v19,
           (const MethodInfo_2F20718 *)Method_System_Linq_Enumerable_Any_DataEntityBase____76878384);
}


// local variable allocation has failed, the output may be wrong!
EventPointBuffEntity_array *__fastcall EventPointBuffMaster__getEntityList(
        EventPointBuffMaster_o *this,
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
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t v19; // x1
  int64_t list; // x0
  int v21; // w22
  int32_t v22; // w23
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

  if ( (byte_4B16257 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&EventPointBuffEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v16, v17);
    byte_4B16257 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventPointBuffEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v21 = list;
    v22 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v22,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v19 = list;
      methodPtr_low = LOBYTE(EventPointBuffEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventPointBuffEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventPointBuffEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 20) == eventId )
      {
        if ( !v18 )
          break;
        items = v18->fields._items;
        v31 = Method_System_Collections_Generic_List_EventPointBuffEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          break;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v19;
          sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v19, v23, v24, v25, v26, v27, v28);
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(list, v19);
  }
LABEL_17:
  if ( !v18 )
    goto LABEL_19;
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v18,
                                         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


void __fastcall EventPointBuffMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1625D & 1) == 0 )
  {
    sub_1BCA7E0(&EventPointBuffMaster___c_TypeInfo, v1, v2);
    byte_4B1625D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventPointBuffMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventPointBuffMaster___c_TypeInfo->static_fields->__9 = (struct EventPointBuffMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventPointBuffMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return a->fields.eventPoint - b->fields.eventPoint;
}


int32_t __fastcall EventPointBuffMaster___c___GetEnableEntity_b__4_0(
        EventPointBuffMaster___c_o *this,
        EventPointBuffEntity_o *x,
        EventPointBuffEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1BCAA3C(this, x);
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
  if ( (byte_4B1625E & 1) == 0 )
  {
    this = (EventPointBuffMaster___c__DisplayClass3_0_o *)sub_1BCA7E0(&EventPointBuffEntity_TypeInfo, ent, method);
    byte_4B1625E = 1;
  }
  if ( !ent )
LABEL_10:
    sub_1BCAA3C(this, ent);
  methodPtr_low = LOBYTE(EventPointBuffEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ent->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventPointBuffEntity_c *)ent->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointBuffEntity_TypeInfo )
  {
    sub_1BCACFC(ent);
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
  __int64 v3; // x3
  EventPointBuffMaster___c__DisplayClass4_0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Int32_array *funcIds; // x20
  System_Predicate_int__o *_9__2; // x22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  v5 = this;
  if ( (byte_4B1625F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Exists_int___, x, method);
    sub_1BCA7E0(&System_Predicate_int__TypeInfo, v6, v7);
    this = (EventPointBuffMaster___c__DisplayClass4_0_o *)sub_1BCA7E0(
                                                            &Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__,
                                                            v8,
                                                            v9);
    byte_4B1625F = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  if ( v5->fields.pointTotal < x->fields.eventPoint )
    return 0;
  funcIds = x->fields.funcIds;
  _9__2 = v5->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Predicate_int__o *)sub_1BCAA2C(System_Predicate_int__TypeInfo, x, method, v3);
    System_Predicate_int____ctor(
      _9__2,
      (Il2CppObject *)v5,
      Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__,
      0LL);
    v5->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.__9__2, (int64_t)_9__2, v13, v14, v15, v16, v17, v18);
  }
  return System_Array__Exists_int_(
           funcIds,
           (System_Predicate_T__o *)_9__2,
           (const MethodInfo_300C514 *)Method_System_Array_Exists_int___);
}


bool __fastcall EventPointBuffMaster___c__DisplayClass4_0___GetEnableEntity_b__2(
        EventPointBuffMaster___c__DisplayClass4_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  return this->fields.funcid == y;
}