void __fastcall EventItemDisplayMaster___ctor(EventItemDisplayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44A40 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__, method);
    byte_4B44A40 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    168,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayEntity_o *__fastcall EventItemDisplayMaster__GetEntity(
        EventItemDisplayMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B44A3E & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4B44A3E = 1;
  }
  PK = (Il2CppObject *)EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventItemDisplayEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_32E68F4 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__);
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
  const MethodInfo_333B280 **v37; // x27
  System_Collections_Generic_Dictionary_int__object__o *v38; // x21
  __int64 v39; // x2
  int max_length; // w8
  __int64 v41; // x20
  EventItemDisplayEntity_o **m_Items; // x29
  unsigned int v43; // w24
  EventItemDisplayEntity_o *v44; // x25
  int32_t v45; // w8
  int32_t groupIndex; // w26
  int32_t v47; // w28
  EventItemDisplayEntity_array *v48; // x22
  EventItemDisplayEntity_o **v49; // x23
  const MethodInfo_333B280 **v50; // x29
  System_Collections_Generic_List_object__o *v51; // x27
  __int64 v52; // x27
  const MethodInfo *v53; // x3
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int v56; // w8
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  __int64 v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  __int64 v66; // x8
  System_Comparison_T__o *v67; // x20
  Il2CppObject *v68; // x23
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  _BOOL8 v72; // x0
  __int64 v73; // x1
  Il2CppObject *Item; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  Il2CppObject *v77; // x1
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  EventItemDisplayGroupMaster_o *v83; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v84; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B44A42 & 1) == 0 )
  {
    sub_1BDB878(&System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___, v8);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__, v12);
    sub_1BDB878(&System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo, v13);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__,
      v14);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__,
      v15);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__get_Current__,
      v16);
    sub_1BDB878(&EventItemDisplayMaster_EventItemDisplaySort_TypeInfo, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__, v19);
    sub_1BDB878(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__, v20);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__,
      v21);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__, v22);
    sub_1BDB878(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__, v23);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__, v24);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__, v25);
    sub_1BDB878(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo, v26);
    sub_1BDB878(&System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo, v27);
    sub_1BDB878(&System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo, v28);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1BDB878(&Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__, v30);
    sub_1BDB878(&EventItemDisplayMaster___c_TypeInfo, v31);
    byte_4B44A42 = 1;
  }
  memset(&v87, 0, sizeof(v87));
  v32 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__);
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 this,
                                 eventId,
                                 screenFlag,
                                 isTerminalTop,
                                 v33);
  v84 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v84,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
  Instance = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (int *)DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_53;
  if ( !*(_QWORD *)&ListByEventIdAndScreenFlag->max_length )
    return (System_Collections_Generic_List_List_EventItemDisplayEntity___o *)v32;
  v83 = (EventItemDisplayGroupMaster_o *)Instance;
  v37 = (const MethodInfo_333B280 **)&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__;
  v38 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v38,
    (const MethodInfo_333A94C *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__);
  max_length = ListByEventIdAndScreenFlag->max_length;
  if ( max_length >= 1 )
  {
    v41 = 0LL;
    m_Items = ListByEventIdAndScreenFlag->m_Items;
    v43 = screenFlag - 16;
    while ( 1 )
    {
      if ( (unsigned int)v41 >= max_length )
        sub_1BDBADC(Instance, v36, v39);
      v44 = m_Items[v41];
      if ( !v44 )
        goto LABEL_53;
      if ( v43 > 0x30 || ((1LL << v43) & 0x1000000010001LL) == 0 )
        break;
      v45 = v44->fields.screenFlag;
      if ( (v45 & 2) == 0 )
        goto LABEL_15;
LABEL_16:
      if ( !v38 )
        goto LABEL_53;
      groupIndex = v44->fields.groupIndex;
      v47 = v44->fields.eventId;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v38,
              groupIndex,
              (const MethodInfo_333B514 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__) )
      {
        v48 = ListByEventIdAndScreenFlag;
        v49 = m_Items;
        v50 = v37;
        v51 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v51,
          (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v38,
          groupIndex,
          (Il2CppObject *)v51,
          (const MethodInfo_333B30C *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__);
        v52 = sub_1BDBAC4(EventItemDisplayMaster_EventItemDisplaySort_TypeInfo);
        System_Object___ctor((Il2CppObject *)v52, 0LL);
        Instance = (int *)v83;
        if ( !v83 )
          goto LABEL_53;
        Instance = (int *)EventItemDisplayGroupMaster__GetEntity(v83, v47, groupIndex, v53);
        if ( !v52 )
          goto LABEL_53;
        *(_DWORD *)(v52 + 20) = v47;
        *(_DWORD *)(v52 + 24) = groupIndex;
        v56 = Instance ? Instance[7] : 0;
        Instance = (int *)v84;
        *(_DWORD *)(v52 + 16) = v56;
        if ( !v84 )
          goto LABEL_53;
        items = v84->fields._items;
        v58 = Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__;
        ++v84->fields._version;
        if ( !items )
          goto LABEL_53;
        size = v84->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v84,
            (Il2CppObject *)v52,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
        }
        else
        {
          v60 = &items->obj.klass + size;
          v84->fields._size = size + 1;
          v60[4] = (Il2CppClass *)v52;
          sub_1BDB81C((CGThumbnailListItem_o *)(v60 + 4), v52, v54, v55);
        }
        v37 = v50;
        m_Items = v49;
        ListByEventIdAndScreenFlag = v48;
      }
      Instance = (int *)System_Collections_Generic_Dictionary_int__object___get_Item(v38, groupIndex, *v37);
      if ( !Instance )
        goto LABEL_53;
      v63 = *((_QWORD *)Instance + 2);
      v64 = Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__;
      ++Instance[7];
      if ( !v63 )
        goto LABEL_53;
      v65 = Instance[6];
      if ( (unsigned int)v65 >= *(_DWORD *)(v63 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v44,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
      }
      else
      {
        v66 = v63 + 8 * v65;
        Instance[6] = v65 + 1;
        *(_QWORD *)(v66 + 32) = v44;
        sub_1BDB81C((CGThumbnailListItem_o *)(v66 + 32), (int32_t)v44, v61, v62);
      }
LABEL_34:
      max_length = ListByEventIdAndScreenFlag->max_length;
      if ( (int)++v41 >= max_length )
        goto LABEL_35;
    }
    v45 = v44->fields.screenFlag;
LABEL_15:
    if ( (v45 & screenFlag) == 0 )
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
  v67 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v67 )
  {
    if ( !Instance[56] )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (int *)EventItemDisplayMaster___c_TypeInfo;
    }
    v68 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v67 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
    System_Comparison_object____ctor(v67, v68, Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__, 0LL);
    static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__o *)v67;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)v67, v70, v71);
  }
  if ( !v84 )
LABEL_53:
    sub_1BDBAD4(Instance, v36);
  System_Collections_Generic_List_object___Sort_57505928(
    v84,
    v67,
    (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v86,
    v84,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__);
  v87 = v86;
  while ( 1 )
  {
    v72 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v87,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__);
    if ( !v72 )
      break;
    if ( !v87.fields._current )
      sub_1BDBAD4(v72, v73);
    if ( !v38 )
      sub_1BDBAD4(v72, v73);
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             v38,
             (int32_t)v87.fields._current[1].monitor,
             *v37);
    v77 = Item;
    if ( !v32 )
      sub_1BDBAD4(Item, Item);
    v78 = v32->fields._items;
    v79 = Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__;
    ++v32->fields._version;
    if ( !v78 )
      sub_1BDBAD4(Item, Item);
    v80 = v32->fields._size;
    if ( (unsigned int)v80 >= v78->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v32,
        Item,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    }
    else
    {
      v81 = &v78->obj.klass + v80;
      v32->fields._size = v80 + 1;
      v81[4] = (Il2CppClass *)v77;
      sub_1BDB81C((CGThumbnailListItem_o *)(v81 + 4), (int32_t)v77, v75, v76);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v87,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__);
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
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0
  EventItemDisplayMaster___c_c *v51; // x8
  System_Comparison_T__o *_9__4_0; // x20
  Il2CppObject *v53; // x21
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3

  if ( (byte_4B44A41 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_EventItemDisplayEntity__GetEnumerator__,
      *(_QWORD *)&eventId);
    sub_1BDB878(&System_Comparison_EventItemDisplayEntity__TypeInfo, v9);
    sub_1BDB878(&System_IDisposable_TypeInfo, v10);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_EventItemDisplayEntity__TypeInfo, v11);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__, v16);
    sub_1BDB878(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo, v17);
    sub_1BDB878(&Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__, v18);
    sub_1BDB878(&EventItemDisplayMaster___c_TypeInfo, v19);
    byte_4B44A41 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_52;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_EventItemDisplayEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v23);
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
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v34 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_EventItemDisplayEntity__TypeInfo, 0LL);
    }
    v35 = (EventItemDisplayEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                        Enumerator,
                                        *(_QWORD *)(v34 + 8));
    v37 = (Il2CppObject *)v35;
    if ( v26 )
    {
      if ( !v35 )
        sub_1BDBAD4(0LL, v36);
      goto LABEL_26;
    }
    if ( !v35 )
      sub_1BDBAD4(0LL, v36);
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
            sub_1BDBAD4(IsEnable, v40);
          items = v20->fields._items;
          v44 = Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__;
          ++v20->fields._version;
          if ( !items )
            sub_1BDBAD4(IsEnable, v40);
          size = v20->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v20,
              v37,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &items->obj.klass + size;
            v20->fields._size = size + 1;
            v46[4] = (Il2CppClass *)v37;
            sub_1BDB81C((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v37, v41, v42);
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
  v47 = Enumerator->klass;
  v48 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_39;
    }
    v50 = (__int64)&v47->vtable[*v49].method;
  }
  else
  {
LABEL_39:
    v50 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(
                                                             Enumerator,
                                                             *(_QWORD *)(v50 + 8));
  v51 = EventItemDisplayMaster___c_TypeInfo;
  if ( !EventItemDisplayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemDisplayMaster___c_TypeInfo);
    v51 = EventItemDisplayMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v51->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v51 = EventItemDisplayMaster___c_TypeInfo;
    }
    v53 = (Il2CppObject *)v51->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_EventItemDisplayEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__4_0,
      v53,
      Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__,
      0LL);
    static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventItemDisplayEntity__o *)_9__4_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v55, v56);
  }
  if ( !v20 )
LABEL_52:
    sub_1BDBAD4(list, v21);
  System_Collections_Generic_List_object___Sort_57505928(
    v20,
    _9__4_0,
    (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__);
  return (EventItemDisplayEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v20,
                                           (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__);
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

  if ( (byte_4B44A3F & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__, entity);
    byte_4B44A3F = 1;
  }
  PK = (Il2CppObject *)EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B44A43 & 1) == 0 )
  {
    sub_1BDB878(&EventItemDisplayMaster___c_TypeInfo, v1);
    byte_4B44A43 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(EventItemDisplayMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventItemDisplayMaster___c_TypeInfo->static_fields->__9 = (struct EventItemDisplayMaster___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)EventItemDisplayMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BDBAD4(this, a);
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
    sub_1BDBAD4(this, a);
  return b->fields.priority - a->fields.priority;
}