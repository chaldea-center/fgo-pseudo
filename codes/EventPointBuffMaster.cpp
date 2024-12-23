void __fastcall EventPointBuffMaster___ctor(EventPointBuffMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66C25 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__, method);
    byte_4B66C25 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    265,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__);
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
  __int64 v22; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v24; // x20
  __int64 v25; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v28; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v29; // x20
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x20
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v44; // x0
  __int64 v45; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v46; // x25
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v47; // x8
  __int64 v48; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v49; // x10
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x8
  EventPointBuffEntity_c *v60; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v63; // x10
  __int64 size; // x11
  Il2CppClass **v65; // x0
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  EventPointBuffMaster___c_c *v70; // x8
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v72; // x21
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7

  if ( (byte_4B66C22 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Comparison_EventPointBuffEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1BE4ACC(&EventPointBuffEntity_TypeInfo, v7);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerable_string__TypeInfo, v9);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_string__TypeInfo, v10);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1BE4ACC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v16);
    sub_1BE4ACC(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v17);
    sub_1BE4ACC(&Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__, v18);
    sub_1BE4ACC(&EventPointBuffMaster___c_TypeInfo, v19);
    byte_4B66C22 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_67;
  klass = lookup->klass;
  v24 = lookup;
  v25 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v25;
      p_offset += 2;
      if ( !v25 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C36AAC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 3LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))p_method)(
                                                                                         v24,
                                                                                         *(_QWORD *)(p_method + 8));
  if ( !lookup )
    goto LABEL_67;
  v28 = lookup->klass;
  v29 = lookup;
  v30 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v31 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v31 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_15;
    }
    v32 = (__int64)&v28->vtable[*v31].method;
  }
  else
  {
LABEL_15:
    v32 = sub_1C36AAC(lookup, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))v32)(
          v29,
          *(_QWORD *)(v32 + 8));
  if ( !v34 )
    sub_1BE4D28(0LL, v33);
  while ( 1 )
  {
    v35 = *(_QWORD *)v34;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_22;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_22:
      v38 = sub_1C36AAC(v34, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8)) & 1) == 0 )
      break;
    v39 = *(_QWORD *)v34;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v41 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_29;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_29:
      v42 = sub_1C36AAC(v34, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v34, *(_QWORD *)(v42 + 8));
    v44 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    v46 = v44;
    if ( !v44 )
      goto LABEL_63;
    v47 = v44->klass;
    v48 = *(unsigned __int16 *)(&v44->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v44->klass->_2.bitflags2 + 3) )
    {
      v49 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v47->_1.interfaceOffsets->offset;
      while ( *(v49 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v48;
        v49 += 2;
        if ( !v48 )
          goto LABEL_36;
      }
      v50 = (__int64)&v47->vtable[*(_DWORD *)v49 + 2].method;
    }
    else
    {
LABEL_36:
      v50 = sub_1C36AAC(v44, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    v51 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD))v50)(
            v46,
            v43,
            *(_QWORD *)(v50 + 8));
    v59 = v51;
    if ( !v51 )
      sub_1BE4D28(0LL, v52);
    v60 = EventPointBuffEntity_TypeInfo;
    methodPtr_low = LOBYTE(EventPointBuffEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v51 + 304LL) < (unsigned int)methodPtr_low
      || *(EventPointBuffEntity_c **)(*(_QWORD *)(*(_QWORD *)v51 + 200LL) + 8 * methodPtr_low - 8) != EventPointBuffEntity_TypeInfo )
    {
      sub_1BE4FE8(v51);
LABEL_63:
      sub_1BE4D28(v44, v45);
    }
    if ( *(_DWORD *)(v51 + 20) == eventId && *(_DWORD *)(v51 + 24) == groupId )
    {
      if ( !v20 )
        sub_1BE4D28(v51, EventPointBuffEntity_TypeInfo);
      items = v20->fields._items;
      v63 = Method_System_Collections_Generic_List_EventPointBuffEntity__Add__;
      ++v20->fields._version;
      if ( !items )
        sub_1BE4D28(v51, v60);
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)v51,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
      }
      else
      {
        v65 = &items->obj.klass + size;
        v20->fields._size = size + 1;
        v65[4] = (Il2CppClass *)v59;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v65 + 4), v59, v53, v54, v55, v56, v57, v58);
      }
    }
  }
  v66 = *(_QWORD *)v34;
  v67 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
  {
    v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      --v67;
      v68 += 4;
      if ( !v67 )
        goto LABEL_52;
    }
    v69 = v66 + 16LL * *v68 + 312;
  }
  else
  {
LABEL_52:
    v69 = sub_1C36AAC(v34, System_IDisposable_TypeInfo, 0LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v69)(
                                                                                         v34,
                                                                                         *(_QWORD *)(v69 + 8));
  v70 = EventPointBuffMaster___c_TypeInfo;
  if ( !EventPointBuffMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointBuffMaster___c_TypeInfo);
    v70 = EventPointBuffMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Comparison_T__o *)v70->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v70->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v70);
      v70 = EventPointBuffMaster___c_TypeInfo;
    }
    v72 = (Il2CppObject *)v70->static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventPointBuffEntity__TypeInfo);
    System_Comparison_object____ctor(_9__2_0, v72, Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__, 0LL);
    static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__2_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v74, v75, v76, v77, v78, v79);
  }
  if ( !v20 )
LABEL_67:
    sub_1BE4D28(lookup, v22);
  System_Collections_Generic_List_object___Sort_56548584(
    v20,
    _9__2_0,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v20,
                                         (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
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
  __int64 v19; // x1
  const MethodInfo *v20; // x4
  int32_t EventPointGroupId; // w0
  const MethodInfo *v22; // x2
  int32_t v23; // w22
  EventPointBuffEntity_array *EntityList; // x0
  EventPointBuffMaster___c_c *v25; // x8
  System_Object_array *v26; // x21
  System_Comparison_T__o *_9__4_0; // x23
  Il2CppObject *v28; // x24
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *MasterData_object; // x23
  System_Predicate_object__o *v37; // x19

  if ( (byte_4B66C24 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Find_EventPointBuffEntity___, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Array_Sort_EventPointBuffEntity___, v7);
    sub_1BE4ACC(&System_Comparison_EventPointBuffEntity__TypeInfo, v8);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserEventPointMaster___, v9);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v10);
    sub_1BE4ACC(&System_Predicate_EventPointBuffEntity__TypeInfo, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BE4ACC(&Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__, v13);
    sub_1BE4ACC(&Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__, v14);
    sub_1BE4ACC(&EventPointBuffMaster___c__DisplayClass4_0_TypeInfo, v15);
    sub_1BE4ACC(&EventPointBuffMaster___c_TypeInfo, v16);
    byte_4B66C24 = 1;
  }
  v17 = sub_1BE4D18(EventPointBuffMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_21;
  *(_DWORD *)(v17 + 24) = funcid;
  EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(this, eventId, funcid, -1, v20);
  if ( (EventPointGroupId & 0x80000000) == 0 )
  {
    v23 = EventPointGroupId;
    EntityList = EventPointBuffMaster__getEntityList(this, eventId, v22);
    v25 = EventPointBuffMaster___c_TypeInfo;
    v26 = (System_Object_array *)EntityList;
    if ( !EventPointBuffMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointBuffMaster___c_TypeInfo);
      v25 = EventPointBuffMaster___c_TypeInfo;
    }
    _9__4_0 = (System_Comparison_T__o *)v25->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = EventPointBuffMaster___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v25->static_fields->__9;
      _9__4_0 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventPointBuffEntity__TypeInfo);
      System_Comparison_object____ctor(_9__4_0, v28, Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__, 0LL);
      static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__4_0;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__4_0,
        (int64_t)_9__4_0,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    System_Array__Sort_object__49441616(
      v26,
      _9__4_0,
      (const MethodInfo_2F26B50 *)Method_System_Array_Sort_EventPointBuffEntity___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B61717 )
      {
        sub_1BE4ACC(&NetworkManager_TypeInfo, v19);
        byte_4B61717 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( MasterData_object )
      {
        *(_QWORD *)(v17 + 16) = UserEventPointMaster__GetEventPointTotal(
                                  (UserEventPointMaster_o *)MasterData_object,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  eventId,
                                  v23,
                                  0LL);
        v37 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_EventPointBuffEntity__TypeInfo);
        System_Predicate_object____ctor(
          v37,
          (Il2CppObject *)v17,
          Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__,
          0LL);
        return (EventPointBuffEntity_o *)System_Array__Find_object_(
                                           v26,
                                           (System_Predicate_T__o *)v37,
                                           (const MethodInfo_3053E40 *)Method_System_Array_Find_EventPointBuffEntity___);
      }
    }
LABEL_21:
    sub_1BE4D28(Instance, v19);
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
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x8
  EventPointBuffEntity_c *v36; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v39; // x10
  __int64 size; // x11
  Il2CppClass **v41; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0

  if ( (byte_4B66C21 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&EventPointBuffEntity_TypeInfo, v7);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v13);
    byte_4B66C21 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, v15);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    v35 = v27;
    if ( !v27 )
      goto LABEL_36;
    v36 = EventPointBuffEntity_TypeInfo;
    methodPtr_low = LOBYTE(EventPointBuffEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) < (unsigned int)methodPtr_low
      || *(EventPointBuffEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) != EventPointBuffEntity_TypeInfo )
    {
      sub_1BE4FE8(v27);
LABEL_36:
      sub_1BE4D28(v27, v28);
    }
    if ( *(_DWORD *)(v27 + 20) == eventId && *(_DWORD *)(v27 + 24) == groupId )
    {
      if ( !v14 )
        sub_1BE4D28(v27, EventPointBuffEntity_TypeInfo);
      items = v14->fields._items;
      v39 = Method_System_Collections_Generic_List_EventPointBuffEntity__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1BE4D28(v27, v36);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)v27,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v35;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v41 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  v42 = Enumerator->klass;
  v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_32;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_32:
    v45 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(Enumerator, *(_QWORD *)(v45 + 8));
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
    sub_1BE4D28(EntityList, v8);
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 == max_length )
        sub_1BE4D30(EntityList, v8);
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
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4B66C23 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_DataEntityBase____77200376, *(_QWORD *)&eventId);
    sub_1BE4ACC(&System_Func_DataEntityBase__bool__TypeInfo, v7);
    sub_1BE4ACC(&Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__, v8);
    sub_1BE4ACC(&EventPointBuffMaster___c__DisplayClass3_0_TypeInfo, v9);
    byte_4B66C23 = 1;
  }
  v10 = sub_1BE4D18(EventPointBuffMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BE4D28(v11, v12);
  *(_DWORD *)(v10 + 16) = eventId;
  *(_DWORD *)(v10 + 20) = groupId;
  list = this->fields.list;
  v14 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_DataEntityBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__49703832(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_2F66B98 *)Method_System_Linq_Enumerable_Any_DataEntityBase____77200376);
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
  int64_t v12; // x1
  int64_t list; // x0
  int v14; // w22
  int32_t v15; // w23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4B66C20 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&EventPointBuffEntity_TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v10);
    byte_4B66C20 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = list;
    v15 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v15,
                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v12 = list;
      methodPtr_low = LOBYTE(EventPointBuffEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventPointBuffEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventPointBuffEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 20) == eventId )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v24 = Method_System_Collections_Generic_List_EventPointBuffEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v12;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 4), v12, v16, v17, v18, v19, v20, v21);
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BE4D28(list, v12);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v11,
                                         (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


void __fastcall EventPointBuffMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B66C26 & 1) == 0 )
  {
    sub_1BE4ACC(&EventPointBuffMaster___c_TypeInfo, v1);
    byte_4B66C26 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(EventPointBuffMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventPointBuffMaster___c_TypeInfo->static_fields->__9 = (struct EventPointBuffMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)EventPointBuffMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, a);
  return a->fields.eventPoint - b->fields.eventPoint;
}


int32_t __fastcall EventPointBuffMaster___c___GetEnableEntity_b__4_0(
        EventPointBuffMaster___c_o *this,
        EventPointBuffEntity_o *x,
        EventPointBuffEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1BE4D28(this, x);
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
  if ( (byte_4B66C27 & 1) == 0 )
  {
    this = (EventPointBuffMaster___c__DisplayClass3_0_o *)sub_1BE4ACC(&EventPointBuffEntity_TypeInfo, ent);
    byte_4B66C27 = 1;
  }
  if ( !ent )
LABEL_10:
    sub_1BE4D28(this, ent);
  methodPtr_low = LOBYTE(EventPointBuffEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ent->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventPointBuffEntity_c *)ent->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointBuffEntity_TypeInfo )
  {
    sub_1BE4FE8(ent);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v4 = this;
  if ( (byte_4B66C28 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Exists_int___, x);
    sub_1BE4ACC(&System_Predicate_int__TypeInfo, v5);
    this = (EventPointBuffMaster___c__DisplayClass4_0_o *)sub_1BE4ACC(
                                                            &Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__,
                                                            v6);
    byte_4B66C28 = 1;
  }
  if ( !x )
    sub_1BE4D28(this, x);
  if ( v4->fields.pointTotal < x->fields.eventPoint )
    return 0;
  funcIds = x->fields.funcIds;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Predicate_int__o *)sub_1BE4D18(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__,
      0LL);
    v4->fields.__9__2 = _9__2;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v4->fields.__9__2, (int64_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  return System_Array__Exists_int_(
           funcIds,
           (System_Predicate_T__o *)_9__2,
           (const MethodInfo_305390C *)Method_System_Array_Exists_int___);
}


bool __fastcall EventPointBuffMaster___c__DisplayClass4_0___GetEnableEntity_b__2(
        EventPointBuffMaster___c__DisplayClass4_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  return this->fields.funcid == y;
}