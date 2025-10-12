void EventItemDisplayMaster___ctor(EventItemDisplayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37993 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__);
    byte_4C37993 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    168,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayEntity_o *EventItemDisplayMaster__GetEntity(
        EventItemDisplayMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37991 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__);
    byte_4C37991 = 1;
  }
  PK = (Il2CppObject *)EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventItemDisplayEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_339B2F0 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__);
}


System_Collections_Generic_List_List_EventItemDisplayEntity___o *EventItemDisplayMaster__GetGroupItemLists(
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
  const MethodInfo_33EFC7C **v12; // x27
  System_Collections_Generic_Dictionary_int__object__o *v13; // x21
  int max_length; // w8
  __int64 v15; // x20
  EventItemDisplayEntity_o **m_Items; // x29
  unsigned int v17; // w24
  EventItemDisplayEntity_o *v18; // x25
  int32_t v19; // w8
  int32_t groupIndex; // w26
  int32_t v21; // w28
  EventItemDisplayEntity_array *v22; // x22
  EventItemDisplayEntity_o **v23; // x23
  const MethodInfo_33EFC7C **v24; // x29
  System_Collections_Generic_List_object__o *v25; // x27
  __int64 v26; // x27
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int v30; // w8
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  __int64 v40; // x8
  System_Comparison_T__o *v41; // x20
  Il2CppObject *v42; // x23
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  _BOOL8 v46; // x0
  Il2CppObject *Item; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  Il2CppObject *v50; // x1
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  EventItemDisplayGroupMaster_o *v56; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v57; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C37995 & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__get_Current__);
    sub_1C32C20(&EventItemDisplayMaster_EventItemDisplaySort_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__);
    sub_1C32C20(&EventItemDisplayMaster___c_TypeInfo);
    byte_4C37995 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__);
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 this,
                                 eventId,
                                 screenFlag,
                                 isTerminalTop,
                                 v9);
  v57 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
  Instance = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (int *)DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_53;
  if ( !ListByEventIdAndScreenFlag->max_length )
    return (System_Collections_Generic_List_List_EventItemDisplayEntity___o *)v8;
  v56 = (EventItemDisplayGroupMaster_o *)Instance;
  v12 = (const MethodInfo_33EFC7C **)&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__;
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__);
  max_length = ListByEventIdAndScreenFlag->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    m_Items = ListByEventIdAndScreenFlag->m_Items;
    v17 = screenFlag - 16;
    while ( 1 )
    {
      if ( (unsigned int)v15 >= max_length )
        sub_1C32E84(Instance);
      v18 = m_Items[v15];
      if ( !v18 )
        goto LABEL_53;
      if ( v17 > 0x30 || ((1LL << v17) & 0x1000000010001LL) == 0 )
        break;
      v19 = v18->fields.screenFlag;
      if ( (v19 & 2) == 0 )
        goto LABEL_15;
LABEL_16:
      if ( !v13 )
        goto LABEL_53;
      groupIndex = v18->fields.groupIndex;
      v21 = v18->fields.eventId;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v13,
              groupIndex,
              (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__) )
      {
        v22 = ListByEventIdAndScreenFlag;
        v23 = m_Items;
        v24 = v12;
        v25 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v25,
          (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v13,
          groupIndex,
          (Il2CppObject *)v25,
          (const MethodInfo_33EFD08 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__);
        v26 = sub_1C32E6C(EventItemDisplayMaster_EventItemDisplaySort_TypeInfo);
        System_Object___ctor((Il2CppObject *)v26, 0);
        Instance = (int *)v56;
        if ( !v56 )
          goto LABEL_53;
        Instance = (int *)EventItemDisplayGroupMaster__GetEntity(v56, v21, groupIndex, v27);
        if ( !v26 )
          goto LABEL_53;
        *(_DWORD *)(v26 + 20) = v21;
        *(_DWORD *)(v26 + 24) = groupIndex;
        v30 = Instance ? Instance[7] : 0;
        Instance = (int *)v57;
        *(_DWORD *)(v26 + 16) = v30;
        if ( !v57 )
          goto LABEL_53;
        items = v57->fields._items;
        v32 = Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__;
        ++v57->fields._version;
        if ( !items )
          goto LABEL_53;
        size = v57->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v57,
            (Il2CppObject *)v26,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v57->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v26;
          sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 4), v26, v28, v29);
        }
        v12 = v24;
        m_Items = v23;
        ListByEventIdAndScreenFlag = v22;
      }
      Instance = (int *)System_Collections_Generic_Dictionary_int__object___get_Item(v13, groupIndex, *v12);
      if ( !Instance )
        goto LABEL_53;
      v37 = *((_QWORD *)Instance + 2);
      v38 = Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__;
      ++Instance[7];
      if ( !v37 )
        goto LABEL_53;
      v39 = Instance[6];
      if ( (unsigned int)v39 >= *(_DWORD *)(v37 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v18,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = v37 + 8 * v39;
        Instance[6] = v39 + 1;
        *(_QWORD *)(v40 + 32) = v18;
        sub_1C32BC4((CGThumbnailListItem_o *)(v40 + 32), (int32_t)v18, v35, v36);
      }
LABEL_34:
      max_length = ListByEventIdAndScreenFlag->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_35;
    }
    v19 = v18->fields.screenFlag;
LABEL_15:
    if ( (v19 & screenFlag) == 0 )
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
  v41 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v41 )
  {
    if ( !Instance[56] )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (int *)EventItemDisplayMaster___c_TypeInfo;
    }
    v42 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v41 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
    System_Comparison_object____ctor(v41, v42, Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__, 0);
    static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__o *)v41;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)v41, v44, v45);
  }
  if ( !v57 )
LABEL_53:
    sub_1C32E7C(Instance);
  System_Collections_Generic_List_object___Sort_58303104(
    v57,
    v41,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    v57,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__);
  v60 = v59;
  while ( 1 )
  {
    v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v60,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__);
    if ( !v46 )
      break;
    if ( !v60.fields._current )
      sub_1C32E7C(v46);
    if ( !v13 )
      sub_1C32E7C(v46);
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             v13,
             (int32_t)v60.fields._current[1].monitor,
             *v12);
    v50 = Item;
    if ( !v8 )
      sub_1C32E7C(Item);
    v51 = v8->fields._items;
    v52 = Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__;
    ++v8->fields._version;
    if ( !v51 )
      sub_1C32E7C(Item);
    v53 = v8->fields._size;
    if ( (unsigned int)v53 >= LODWORD(v51->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        Item,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
    }
    else
    {
      v54 = &v51->obj.klass + v53;
      v8->fields._size = v53 + 1;
      v54[4] = (Il2CppClass *)v50;
      sub_1C32BC4((CGThumbnailListItem_o *)(v54 + 4), (int32_t)v50, v48, v49);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__);
  return (System_Collections_Generic_List_List_EventItemDisplayEntity___o *)v8;
}


EventItemDisplayEntity_array *EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
        EventItemDisplayMaster_o *this,
        int32_t eventId,
        int32_t screenFlag,
        bool isTerminalTop,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  unsigned int v12; // w28
  bool v13; // w24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  EventItemDisplayEntity_o *v22; // x0
  const MethodInfo *v23; // x1
  Il2CppObject *v24; // x23
  int32_t v25; // w8
  _BOOL8 IsEnable; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  EventItemDisplayMaster___c_c *v37; // x8
  System_Comparison_T__o *_9__4_0; // x20
  Il2CppObject *v39; // x21
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3

  if ( (byte_4C37994 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventItemDisplayEntity__GetEnumerator__);
    sub_1C32C20(&System_Comparison_EventItemDisplayEntity__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_EventItemDisplayEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
    sub_1C32C20(&Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__);
    sub_1C32C20(&EventItemDisplayMaster___c_TypeInfo);
    byte_4C37994 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_52;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_EventItemDisplayEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  v12 = screenFlag - 16;
  v13 = screenFlag == 16 && isTerminalTop;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_10;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v17 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8))
        & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventItemDisplayEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_EventItemDisplayEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_17;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_17:
      v21 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_EventItemDisplayEntity__TypeInfo, 0);
    }
    v22 = (EventItemDisplayEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                        Enumerator,
                                        *(_QWORD *)(v21 + 8));
    v24 = (Il2CppObject *)v22;
    if ( v13 )
    {
      if ( !v22 )
        sub_1C32E7C(0);
      goto LABEL_26;
    }
    if ( !v22 )
      sub_1C32E7C(0);
    if ( v22->fields.eventId == eventId )
    {
      if ( v12 > 0x30 || ((1LL << v12) & 0x1000000010001LL) == 0 )
      {
        v25 = v22->fields.screenFlag;
        goto LABEL_27;
      }
LABEL_26:
      v25 = v22->fields.screenFlag;
      if ( (v25 & 2) != 0 )
      {
LABEL_28:
        IsEnable = EventItemDisplayEntity__IsEnable(v22, v23);
        if ( IsEnable )
        {
          if ( !v9 )
            sub_1C32E7C(IsEnable);
          items = v9->fields._items;
          v30 = Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            sub_1C32E7C(IsEnable);
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v24,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v24;
            sub_1C32BC4((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v24, v27, v28);
          }
        }
      }
      else
      {
LABEL_27:
        if ( (v25 & screenFlag) != 0 )
          goto LABEL_28;
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
        goto LABEL_39;
    }
    v36 = (__int64)&v33->vtable[*v35];
  }
  else
  {
LABEL_39:
    v36 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                                                             Enumerator,
                                                             *(_QWORD *)(v36 + 8));
  v37 = EventItemDisplayMaster___c_TypeInfo;
  if ( !EventItemDisplayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemDisplayMaster___c_TypeInfo);
    v37 = EventItemDisplayMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v37->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = EventItemDisplayMaster___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v37->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_EventItemDisplayEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__4_0,
      v39,
      Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__,
      0);
    static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventItemDisplayEntity__o *)_9__4_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v41, v42);
  }
  if ( !v9 )
LABEL_52:
    sub_1C32E7C(list);
  System_Collections_Generic_List_object___Sort_58303104(
    v9,
    _9__4_0,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__);
  return (EventItemDisplayEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v9,
                                           (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool EventItemDisplayMaster__TryGetEntity(
        EventItemDisplayMaster_o *this,
        EventItemDisplayEntity_o **entity,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C37992 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__);
    byte_4C37992 = 1;
  }
  PK = (Il2CppObject *)EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__);
}


void EventItemDisplayMaster_EventItemDisplaySort___ctor(
        EventItemDisplayMaster_EventItemDisplaySort_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventItemDisplayMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37996 & 1) == 0 )
  {
    sub_1C32C20(&EventItemDisplayMaster___c_TypeInfo);
    byte_4C37996 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventItemDisplayMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventItemDisplayMaster___c_TypeInfo->static_fields->__9 = (struct EventItemDisplayMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)EventItemDisplayMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventItemDisplayMaster___c___ctor(EventItemDisplayMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventItemDisplayMaster___c___GetGroupItemLists_b__5_0(
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
    sub_1C32E7C(this);
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


int32_t EventItemDisplayMaster___c___GetListByEventIdAndScreenFlag_b__4_0(
        EventItemDisplayMaster___c_o *this,
        EventItemDisplayEntity_o *a,
        EventItemDisplayEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C32E7C(this);
  return b->fields.priority - a->fields.priority;
}