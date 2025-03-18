void __fastcall EventItemDisplayMaster___ctor(EventItemDisplayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C21F25 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__, method);
    byte_4C21F25 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    168,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayEntity_o *__fastcall EventItemDisplayMaster__GetEntity(
        EventItemDisplayMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C21F23 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4C21F23 = 1;
  }
  PK = (Il2CppObject *)EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventItemDisplayEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_329F900 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_List_EventItemDisplayEntity___o *__fastcall EventItemDisplayMaster__GetGroupItemLists(
        EventItemDisplayMaster_o *this,
        int32_t eventId,
        int32_t screenFlag,
        bool isTerminalTop,
        const MethodInfo *method)
{
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  System_Collections_Generic_List_object__o *v32; // x19
  const MethodInfo *v33; // x4
  EventItemDisplayEntity_array *ListByEventIdAndScreenFlag; // x23
  int *Instance; // x0
  __int64 v36; // x1
  const MethodInfo_32F4AFC **v37; // x27
  System_Collections_Generic_Dictionary_int__object__o *v38; // x21
  int max_length; // w8
  __int64 v40; // x20
  EventItemDisplayEntity_o **m_Items; // x29
  unsigned int v42; // w24
  int64_t v43; // x25
  int v44; // w8
  int32_t v45; // w26
  int32_t v46; // w28
  EventItemDisplayEntity_array *v47; // x22
  EventItemDisplayEntity_o **v48; // x23
  const MethodInfo_32F4AFC **v49; // x29
  System_Collections_Generic_List_object__o *v50; // x27
  int64_t v51; // x27
  const MethodInfo *v52; // x3
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int v59; // w8
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  __int64 v73; // x8
  System_Comparison_T__o *v74; // x20
  Il2CppObject *v75; // x23
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  _BOOL8 v83; // x0
  __int64 v84; // x1
  Il2CppObject *Item; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x1
  struct System_Object_array *v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  Il2CppClass **v96; // x0
  EventItemDisplayGroupMaster_o *v98; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v99; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v101; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v102; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C21F27 & 1) == 0 )
  {
    sub_1C3B764(&System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___, v8);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__, v12);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo, v13);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__,
      v14);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__,
      v15);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__get_Current__,
      v16);
    sub_1C3B764(&EventItemDisplayMaster_EventItemDisplaySort_TypeInfo, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__, v20);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__,
      v21);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__, v22);
    sub_1C3B764(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__, v23);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__, v24);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__, v25);
    sub_1C3B764(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo, v26);
    sub_1C3B764(&System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo, v27);
    sub_1C3B764(&System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo, v28);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1C3B764(&Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__, v30);
    sub_1C3B764(&EventItemDisplayMaster___c_TypeInfo, v31);
    byte_4C21F27 = 1;
  }
  memset(&v102, 0, sizeof(v102));
  v32 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__);
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 this,
                                 eventId,
                                 screenFlag,
                                 isTerminalTop,
                                 v33);
  v99 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v99,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
  Instance = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (int *)DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_53;
  if ( !*(_QWORD *)&ListByEventIdAndScreenFlag->max_length )
    return (System_Collections_Generic_List_List_EventItemDisplayEntity___o *)v32;
  v98 = (EventItemDisplayGroupMaster_o *)Instance;
  v37 = (const MethodInfo_32F4AFC **)&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__;
  v38 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v38,
    (const MethodInfo_32F41C8 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__);
  max_length = ListByEventIdAndScreenFlag->max_length;
  if ( max_length >= 1 )
  {
    v40 = 0LL;
    m_Items = ListByEventIdAndScreenFlag->m_Items;
    v42 = screenFlag - 16;
    while ( 1 )
    {
      if ( (unsigned int)v40 >= max_length )
        sub_1C3B9C8(Instance, v36);
      v43 = (int64_t)m_Items[v40];
      if ( !v43 )
        goto LABEL_53;
      if ( v42 > 0x30 || ((1LL << v42) & 0x1000000010001LL) == 0 )
        break;
      v44 = *(_DWORD *)(v43 + 24);
      if ( (v44 & 2) == 0 )
        goto LABEL_15;
LABEL_16:
      if ( !v38 )
        goto LABEL_53;
      v45 = *(_DWORD *)(v43 + 40);
      v46 = *(_DWORD *)(v43 + 20);
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v38,
              v45,
              (const MethodInfo_32F4D90 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__) )
      {
        v47 = ListByEventIdAndScreenFlag;
        v48 = m_Items;
        v49 = v37;
        v50 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v50,
          (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v38,
          v45,
          (Il2CppObject *)v50,
          (const MethodInfo_32F4B88 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__);
        v51 = sub_1C3B9B0(EventItemDisplayMaster_EventItemDisplaySort_TypeInfo);
        System_Object___ctor((Il2CppObject *)v51, 0LL);
        Instance = (int *)v98;
        if ( !v98 )
          goto LABEL_53;
        Instance = (int *)EventItemDisplayGroupMaster__GetEntity(v98, v46, v45, v52);
        if ( !v51 )
          goto LABEL_53;
        *(_DWORD *)(v51 + 20) = v46;
        *(_DWORD *)(v51 + 24) = v45;
        v59 = Instance ? Instance[7] : 0;
        Instance = (int *)v99;
        *(_DWORD *)(v51 + 16) = v59;
        if ( !v99 )
          goto LABEL_53;
        items = v99->fields._items;
        v61 = Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__;
        ++v99->fields._version;
        if ( !items )
          goto LABEL_53;
        size = v99->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v99,
            (Il2CppObject *)v51,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
        }
        else
        {
          v63 = &items->obj.klass + size;
          v99->fields._size = size + 1;
          v63[4] = (Il2CppClass *)v51;
          sub_1C3B708((PartyOrganizationUtility_o *)(v63 + 4), v51, v53, v54, v55, v56, v57, v58);
        }
        v37 = v49;
        m_Items = v48;
        ListByEventIdAndScreenFlag = v47;
      }
      Instance = (int *)System_Collections_Generic_Dictionary_int__object___get_Item(v38, v45, *v37);
      if ( !Instance )
        goto LABEL_53;
      v70 = *((_QWORD *)Instance + 2);
      v71 = Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__;
      ++Instance[7];
      if ( !v70 )
        goto LABEL_53;
      v72 = Instance[6];
      if ( (unsigned int)v72 >= *(_DWORD *)(v70 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v43,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
      }
      else
      {
        v73 = v70 + 8 * v72;
        Instance[6] = v72 + 1;
        *(_QWORD *)(v73 + 32) = v43;
        sub_1C3B708((PartyOrganizationUtility_o *)(v73 + 32), v43, v64, v65, v66, v67, v68, v69);
      }
LABEL_34:
      max_length = ListByEventIdAndScreenFlag->max_length;
      if ( (int)++v40 >= max_length )
        goto LABEL_35;
    }
    v44 = *(_DWORD *)(v43 + 24);
LABEL_15:
    if ( (v44 & screenFlag) == 0 )
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
  v74 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v74 )
  {
    if ( !Instance[56] )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (int *)EventItemDisplayMaster___c_TypeInfo;
    }
    v75 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v74 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
    System_Comparison_object____ctor(v74, v75, Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__, 0LL);
    static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__o *)v74;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)v74, v77, v78, v79, v80, v81, v82);
  }
  if ( !v99 )
LABEL_53:
    sub_1C3B9C0(Instance, v36);
  System_Collections_Generic_List_object___Sort_57202480(
    v99,
    v74,
    (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v101,
    v99,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__);
  v102 = v101;
  while ( 1 )
  {
    v83 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v102,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__);
    if ( !v83 )
      break;
    if ( !v102.fields._current )
      sub_1C3B9C0(v83, v84);
    if ( !v38 )
      sub_1C3B9C0(v83, v84);
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             v38,
             (int32_t)v102.fields._current[1].monitor,
             *v37);
    v92 = (int64_t)Item;
    if ( !v32 )
      sub_1C3B9C0(Item, Item);
    v93 = v32->fields._items;
    v94 = Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__;
    ++v32->fields._version;
    if ( !v93 )
      sub_1C3B9C0(Item, Item);
    v95 = v32->fields._size;
    if ( (unsigned int)v95 >= v93->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v32,
        Item,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
    }
    else
    {
      v96 = &v93->obj.klass + v95;
      v32->fields._size = v95 + 1;
      v96[4] = (Il2CppClass *)v92;
      sub_1C3B708((PartyOrganizationUtility_o *)(v96 + 4), v92, v86, v87, v88, v89, v90, v91);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v102,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__);
  return (System_Collections_Generic_List_List_EventItemDisplayEntity___o *)v32;
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayEntity_array *__fastcall EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
        EventItemDisplayMaster_o *this,
        int32_t eventId,
        int32_t screenFlag,
        bool isTerminalTop,
        const MethodInfo *method)
{
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
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  unsigned int v25; // w28
  bool v26; // w24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  EventItemDisplayEntity_o *v35; // x0
  const MethodInfo *v36; // x1
  Il2CppObject *v37; // x23
  int32_t v38; // w8
  _BOOL8 IsEnable; // x0
  __int64 v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  EventItemDisplayMaster___c_c *v55; // x8
  System_Comparison_T__o *_9__4_0; // x20
  Il2CppObject *v57; // x21
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7

  if ( (byte_4C21F26 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventItemDisplayEntity__GetEnumerator__,
      *(_QWORD *)&eventId);
    sub_1C3B764(&System_Comparison_EventItemDisplayEntity__TypeInfo, v9);
    sub_1C3B764(&System_IDisposable_TypeInfo, v10);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_EventItemDisplayEntity__TypeInfo, v11);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__, v16);
    sub_1C3B764(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo, v17);
    sub_1C3B764(&Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__, v18);
    sub_1C3B764(&EventItemDisplayMaster___c_TypeInfo, v19);
    byte_4C21F26 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_52;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_EventItemDisplayEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v23);
  v25 = screenFlag - 16;
  v26 = screenFlag == 16 && isTerminalTop;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventItemDisplayEntity__c **)v33 - 1) != System_Collections_Generic_IEnumerator_EventItemDisplayEntity__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_17;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_17:
      v34 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_EventItemDisplayEntity__TypeInfo, 0LL);
    }
    v35 = (EventItemDisplayEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                        Enumerator,
                                        *(_QWORD *)(v34 + 8));
    v37 = (Il2CppObject *)v35;
    if ( v26 )
    {
      if ( !v35 )
        sub_1C3B9C0(0LL, v36);
      goto LABEL_26;
    }
    if ( !v35 )
      sub_1C3B9C0(0LL, v36);
    if ( v35->fields.eventId == eventId )
    {
      if ( v25 > 0x30 || ((1LL << v25) & 0x1000000010001LL) == 0 )
      {
        v38 = v35->fields.screenFlag;
        goto LABEL_27;
      }
LABEL_26:
      v38 = v35->fields.screenFlag;
      if ( (v38 & 2) != 0 )
      {
LABEL_28:
        IsEnable = EventItemDisplayEntity__IsEnable(v35, v36);
        if ( IsEnable )
        {
          if ( !v20 )
            sub_1C3B9C0(IsEnable, v40);
          items = v20->fields._items;
          v48 = Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__;
          ++v20->fields._version;
          if ( !items )
            sub_1C3B9C0(IsEnable, v40);
          size = v20->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v20,
              v37,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v50 = &items->obj.klass + size;
            v20->fields._size = size + 1;
            v50[4] = (Il2CppClass *)v37;
            sub_1C3B708((PartyOrganizationUtility_o *)(v50 + 4), (int64_t)v37, v41, v42, v43, v44, v45, v46);
          }
        }
      }
      else
      {
LABEL_27:
        if ( (v38 & screenFlag) != 0 )
          goto LABEL_28;
      }
    }
  }
  v51 = Enumerator->klass;
  v52 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_39;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_39:
    v54 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(
                                                             Enumerator,
                                                             *(_QWORD *)(v54 + 8));
  v55 = EventItemDisplayMaster___c_TypeInfo;
  if ( !EventItemDisplayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemDisplayMaster___c_TypeInfo);
    v55 = EventItemDisplayMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v55->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v55 = EventItemDisplayMaster___c_TypeInfo;
    }
    v57 = (Il2CppObject *)v55->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_EventItemDisplayEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__4_0,
      v57,
      Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__,
      0LL);
    static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventItemDisplayEntity__o *)_9__4_0;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v59, v60, v61, v62, v63, v64);
  }
  if ( !v20 )
LABEL_52:
    sub_1C3B9C0(list, v21);
  System_Collections_Generic_List_object___Sort_57202480(
    v20,
    _9__4_0,
    (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__);
  return (EventItemDisplayEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v20,
                                           (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__);
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

  if ( (byte_4C21F24 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__, entity);
    byte_4C21F24 = 1;
  }
  PK = (Il2CppObject *)EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__);
}


void __fastcall EventItemDisplayMaster_EventItemDisplaySort___ctor(
        EventItemDisplayMaster_EventItemDisplaySort_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventItemDisplayMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C21F28 & 1) == 0 )
  {
    sub_1C3B764(&EventItemDisplayMaster___c_TypeInfo, v1);
    byte_4C21F28 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(EventItemDisplayMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventItemDisplayMaster___c_TypeInfo->static_fields->__9 = (struct EventItemDisplayMaster___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventItemDisplayMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, a);
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
    sub_1C3B9C0(this, a);
  return b->fields.priority - a->fields.priority;
}