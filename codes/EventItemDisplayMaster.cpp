void __fastcall EventItemDisplayMaster___ctor(EventItemDisplayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC509 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__);
    byte_4BDC509 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    168,
    (const MethodInfo_325E55C *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayEntity_o *__fastcall EventItemDisplayMaster__GetEntity(
        EventItemDisplayMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDC507 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__);
    byte_4BDC507 = 1;
  }
  PK = (Il2CppObject *)EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventItemDisplayEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3260880 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__);
}


System_Collections_Generic_List_List_EventItemDisplayEntity___o *__fastcall EventItemDisplayMaster__GetGroupItemLists(
        EventItemDisplayMaster_o *this,
        int32_t eventId,
        int32_t screenFlag,
        bool isTerminalTop,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x19
  const MethodInfo *v9; // x4
  EventItemDisplayEntity_array *ListByEventIdAndScreenFlag; // x23
  int *Instance; // x0
  __int64 v12; // x1
  const MethodInfo_32B59AC **v13; // x27
  System_Collections_Generic_Dictionary_int__object__o *v14; // x21
  int max_length; // w8
  __int64 v16; // x20
  EventItemDisplayEntity_o **m_Items; // x29
  unsigned int v18; // w24
  int64_t v19; // x25
  int v20; // w8
  int32_t v21; // w26
  int32_t v22; // w28
  EventItemDisplayEntity_array *v23; // x22
  EventItemDisplayEntity_o **v24; // x23
  const MethodInfo_32B59AC **v25; // x29
  System_Collections_Generic_List_object__o *v26; // x27
  int64_t v27; // x27
  const MethodInfo *v28; // x3
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int v35; // w8
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  System_Comparison_T__o *v50; // x20
  Il2CppObject *v51; // x23
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  _BOOL8 v59; // x0
  __int64 v60; // x1
  Il2CppObject *Item; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x1
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  EventItemDisplayGroupMaster_o *v74; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v75; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4BDC50B & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__get_Current__);
    sub_1C21E38(&EventItemDisplayMaster_EventItemDisplaySort_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__);
    sub_1C21E38(&EventItemDisplayMaster___c_TypeInfo);
    byte_4BDC50B = 1;
  }
  memset(&v78, 0, sizeof(v78));
  v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__);
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 this,
                                 eventId,
                                 screenFlag,
                                 isTerminalTop,
                                 v9);
  v75 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v75,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
  Instance = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (int *)DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_53;
  if ( !*(_QWORD *)&ListByEventIdAndScreenFlag->max_length )
    return (System_Collections_Generic_List_List_EventItemDisplayEntity___o *)v8;
  v74 = (EventItemDisplayGroupMaster_o *)Instance;
  v13 = (const MethodInfo_32B59AC **)&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__;
  v14 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v14,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__);
  max_length = ListByEventIdAndScreenFlag->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0LL;
    m_Items = ListByEventIdAndScreenFlag->m_Items;
    v18 = screenFlag - 16;
    while ( 1 )
    {
      if ( (unsigned int)v16 >= max_length )
        sub_1C2209C(Instance, v12);
      v19 = (int64_t)m_Items[v16];
      if ( !v19 )
        goto LABEL_53;
      if ( v18 > 0x30 || ((1LL << v18) & 0x1000000010001LL) == 0 )
        break;
      v20 = *(_DWORD *)(v19 + 24);
      if ( (v20 & 2) == 0 )
        goto LABEL_15;
LABEL_16:
      if ( !v14 )
        goto LABEL_53;
      v21 = *(_DWORD *)(v19 + 40);
      v22 = *(_DWORD *)(v19 + 20);
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v14,
              v21,
              (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__) )
      {
        v23 = ListByEventIdAndScreenFlag;
        v24 = m_Items;
        v25 = v13;
        v26 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v26,
          (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v14,
          v21,
          (Il2CppObject *)v26,
          (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__);
        v27 = sub_1C22084(EventItemDisplayMaster_EventItemDisplaySort_TypeInfo);
        System_Object___ctor((Il2CppObject *)v27, 0LL);
        Instance = (int *)v74;
        if ( !v74 )
          goto LABEL_53;
        Instance = (int *)EventItemDisplayGroupMaster__GetEntity(v74, v22, v21, v28);
        if ( !v27 )
          goto LABEL_53;
        *(_DWORD *)(v27 + 20) = v22;
        *(_DWORD *)(v27 + 24) = v21;
        v35 = Instance ? Instance[7] : 0;
        Instance = (int *)v75;
        *(_DWORD *)(v27 + 16) = v35;
        if ( !v75 )
          goto LABEL_53;
        items = v75->fields._items;
        v37 = Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__;
        ++v75->fields._version;
        if ( !items )
          goto LABEL_53;
        size = v75->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v75,
            (Il2CppObject *)v27,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v75->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v27;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v39 + 4), v27, v29, v30, v31, v32, v33, v34);
        }
        v13 = v25;
        m_Items = v24;
        ListByEventIdAndScreenFlag = v23;
      }
      Instance = (int *)System_Collections_Generic_Dictionary_int__object___get_Item(v14, v21, *v13);
      if ( !Instance )
        goto LABEL_53;
      v46 = *((_QWORD *)Instance + 2);
      v47 = Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__;
      ++Instance[7];
      if ( !v46 )
        goto LABEL_53;
      v48 = Instance[6];
      if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v19,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = v46 + 8 * v48;
        Instance[6] = v48 + 1;
        *(_QWORD *)(v49 + 32) = v19;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v49 + 32), v19, v40, v41, v42, v43, v44, v45);
      }
LABEL_34:
      max_length = ListByEventIdAndScreenFlag->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_35;
    }
    v20 = *(_DWORD *)(v19 + 24);
LABEL_15:
    if ( (v20 & screenFlag) == 0 )
      goto LABEL_34;
    goto LABEL_16;
  }
LABEL_35:
  Instance = (int *)EventItemDisplayMaster___c_TypeInfo;
  if ( !EventItemDisplayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemDisplayMaster___c_TypeInfo);
    Instance = (int *)EventItemDisplayMaster___c_TypeInfo;
  }
  v50 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v50 )
  {
    if ( !Instance[56] )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (int *)EventItemDisplayMaster___c_TypeInfo;
    }
    v51 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v50 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
    System_Comparison_object____ctor(v50, v51, Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__, 0LL);
    static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__o *)v50;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)v50, v53, v54, v55, v56, v57, v58);
  }
  if ( !v75 )
LABEL_53:
    sub_1C22094(Instance, v12);
  System_Collections_Generic_List_object___Sort_56953720(
    v75,
    v50,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
    v75,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__);
  v78 = v77;
  while ( 1 )
  {
    v59 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v78,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__);
    if ( !v59 )
      break;
    if ( !v78.fields._current )
      sub_1C22094(v59, v60);
    if ( !v14 )
      sub_1C22094(v59, v60);
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             v14,
             (int32_t)v78.fields._current[1].monitor,
             *v13);
    v68 = (int64_t)Item;
    if ( !v8 )
      sub_1C22094(Item, Item);
    v69 = v8->fields._items;
    v70 = Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__;
    ++v8->fields._version;
    if ( !v69 )
      sub_1C22094(Item, Item);
    v71 = v8->fields._size;
    if ( (unsigned int)v71 >= v69->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        Item,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v72 = &v69->obj.klass + v71;
      v8->fields._size = v71 + 1;
      v72[4] = (Il2CppClass *)v68;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v72 + 4), v68, v62, v63, v64, v65, v66, v67);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v78,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__);
  return (System_Collections_Generic_List_List_EventItemDisplayEntity___o *)v8;
}


EventItemDisplayEntity_array *__fastcall EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
        EventItemDisplayMaster_o *this,
        int32_t eventId,
        int32_t screenFlag,
        bool isTerminalTop,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x19
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  unsigned int v14; // w28
  bool v15; // w24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  EventItemDisplayEntity_o *v24; // x0
  const MethodInfo *v25; // x1
  Il2CppObject *v26; // x23
  int32_t v27; // w8
  _BOOL8 IsEnable; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  EventItemDisplayMaster___c_c *v44; // x8
  System_Comparison_T__o *_9__4_0; // x20
  Il2CppObject *v46; // x21
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7

  if ( (byte_4BDC50A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventItemDisplayEntity__GetEnumerator__);
    sub_1C21E38(&System_Comparison_EventItemDisplayEntity__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_EventItemDisplayEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
    sub_1C21E38(&Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__);
    sub_1C21E38(&EventItemDisplayMaster___c_TypeInfo);
    byte_4BDC50A = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_52;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_EventItemDisplayEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C22094(0LL, v12);
  v14 = screenFlag - 16;
  v15 = screenFlag == 16 && isTerminalTop;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventItemDisplayEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_EventItemDisplayEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_17;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_17:
      v23 = sub_1C73E18(Enumerator, System_Collections_Generic_IEnumerator_EventItemDisplayEntity__TypeInfo, 0LL);
    }
    v24 = (EventItemDisplayEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                        Enumerator,
                                        *(_QWORD *)(v23 + 8));
    v26 = (Il2CppObject *)v24;
    if ( v15 )
    {
      if ( !v24 )
        sub_1C22094(0LL, v25);
      goto LABEL_26;
    }
    if ( !v24 )
      sub_1C22094(0LL, v25);
    if ( v24->fields.eventId == eventId )
    {
      if ( v14 > 0x30 || ((1LL << v14) & 0x1000000010001LL) == 0 )
      {
        v27 = v24->fields.screenFlag;
        goto LABEL_27;
      }
LABEL_26:
      v27 = v24->fields.screenFlag;
      if ( (v27 & 2) != 0 )
      {
LABEL_28:
        IsEnable = EventItemDisplayEntity__IsEnable(v24, v25);
        if ( IsEnable )
        {
          if ( !v9 )
            sub_1C22094(IsEnable, v29);
          items = v9->fields._items;
          v37 = Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            sub_1C22094(IsEnable, v29);
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v26,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v39 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v39[4] = (Il2CppClass *)v26;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v39 + 4), (int64_t)v26, v30, v31, v32, v33, v34, v35);
          }
        }
      }
      else
      {
LABEL_27:
        if ( (v27 & screenFlag) != 0 )
          goto LABEL_28;
      }
    }
  }
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_39;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_39:
    v43 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
                                                             Enumerator,
                                                             *(_QWORD *)(v43 + 8));
  v44 = EventItemDisplayMaster___c_TypeInfo;
  if ( !EventItemDisplayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemDisplayMaster___c_TypeInfo);
    v44 = EventItemDisplayMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v44->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = EventItemDisplayMaster___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v44->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventItemDisplayEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__4_0,
      v46,
      Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__,
      0LL);
    static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventItemDisplayEntity__o *)_9__4_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v48, v49, v50, v51, v52, v53);
  }
  if ( !v9 )
LABEL_52:
    sub_1C22094(list, v10);
  System_Collections_Generic_List_object___Sort_56953720(
    v9,
    _9__4_0,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__);
  return (EventItemDisplayEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v9,
                                           (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventItemDisplayMaster__TryGetEntity(
        EventItemDisplayMaster_o *this,
        EventItemDisplayEntity_o **entity,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BDC508 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__);
    byte_4BDC508 = 1;
  }
  PK = (Il2CppObject *)EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__);
}


void __fastcall EventItemDisplayMaster_EventItemDisplaySort___ctor(
        EventItemDisplayMaster_EventItemDisplaySort_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventItemDisplayMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC50C & 1) == 0 )
  {
    sub_1C21E38(&EventItemDisplayMaster___c_TypeInfo);
    byte_4BDC50C = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(EventItemDisplayMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventItemDisplayMaster___c_TypeInfo->static_fields->__9 = (struct EventItemDisplayMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventItemDisplayMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventItemDisplayMaster___c___ctor(EventItemDisplayMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventItemDisplayMaster___c___GetGroupItemLists_b__5_0(
        EventItemDisplayMaster___c_o *this,
        EventItemDisplayMaster_EventItemDisplaySort_o *a,
        EventItemDisplayMaster_EventItemDisplaySort_o *b,
        const MethodInfo *method)
{
  int32_t dispPriority; // w8
  int32_t v5; // w9
  int32_t result; // w0
  int32_t dispEventId; // w8
  int32_t v8; // w9

  if ( !b || !a )
    sub_1C22094(this, a);
  dispPriority = b->fields.dispPriority;
  v5 = a->fields.dispPriority;
  result = dispPriority - v5;
  if ( dispPriority == v5 )
  {
    dispEventId = a->fields.dispEventId;
    v8 = b->fields.dispEventId;
    result = dispEventId - v8;
    if ( dispEventId == v8 )
      return a->fields.dispGroupIndex - b->fields.dispGroupIndex;
  }
  return result;
}


int32_t __fastcall EventItemDisplayMaster___c___GetListByEventIdAndScreenFlag_b__4_0(
        EventItemDisplayMaster___c_o *this,
        EventItemDisplayEntity_o *a,
        EventItemDisplayEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}