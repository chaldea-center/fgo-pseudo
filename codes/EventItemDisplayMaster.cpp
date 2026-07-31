void EventItemDisplayMaster___ctor(EventItemDisplayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593865F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__);
    byte_593865F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    170,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayEntity_o *EventItemDisplayMaster__GetEntity(
        EventItemDisplayMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_593865D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__);
    byte_593865D = 1;
  }
  PK = (Il2CppObject *)EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventItemDisplayEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__);
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
  __int64 v12; // x1
  const MethodInfo_3F68C68 **v13; // x27
  System_Collections_Generic_Dictionary_int__object__o *v14; // x21
  int max_length; // w8
  __int64 v16; // x20
  const MethodInfo_3F68EFC **v17; // x29
  EventItemDisplayEntity_o *v18; // x25
  int32_t v19; // w8
  int32_t groupIndex; // w26
  int32_t v21; // w28
  const MethodInfo_3F68EFC **v22; // x24
  EventItemDisplayEntity_array *v23; // x29
  const MethodInfo_3F68C68 **v24; // x23
  System_Collections_Generic_List_object__o *v25; // x27
  __int64 v26; // x27
  const MethodInfo *v27; // x3
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int v34; // w8
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  __int64 v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  __int64 v48; // x8
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__5_0; // x20
  Il2CppObject *v51; // x23
  struct EventItemDisplayMaster___c_StaticFields *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  _BOOL8 v59; // x0
  __int64 v60; // x1
  Il2CppObject *Item; // x0
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  Il2CppObject *v68; // x1
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  EventItemDisplayGroupMaster_o *v74; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_object__o *v75; // [xsp+8h] [xbp-B8h]
  EventItemDisplayEntity_o **m_Items; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_5938661 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__get_Current__);
    sub_21FFC50(&EventItemDisplayMaster_EventItemDisplaySort_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__);
    sub_21FFC50(&EventItemDisplayMaster___c_TypeInfo);
    byte_5938661 = 1;
  }
  memset(&v79, 0, sizeof(v79));
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__);
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 this,
                                 eventId,
                                 screenFlag,
                                 isTerminalTop,
                                 v9);
  v75 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v75,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
  Instance = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (int *)DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_53;
  if ( !ListByEventIdAndScreenFlag->max_length )
    return (System_Collections_Generic_List_List_EventItemDisplayEntity___o *)v8;
  v74 = (EventItemDisplayGroupMaster_o *)Instance;
  v13 = (const MethodInfo_3F68C68 **)&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__;
  v14 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v14,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__);
  max_length = ListByEventIdAndScreenFlag->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    v17 = (const MethodInfo_3F68EFC **)&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__;
    m_Items = ListByEventIdAndScreenFlag->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v16 >= max_length )
        sub_21FFED4(Instance);
      v18 = m_Items[v16];
      if ( !v18 )
        goto LABEL_53;
      if ( (unsigned int)(screenFlag - 16) > 0x30
        || ((1LL << ((unsigned __int8)screenFlag - 16)) & 0x1000000010001LL) == 0 )
      {
        break;
      }
      v19 = v18->fields.screenFlag;
      if ( (v19 & 2) == 0 )
        goto LABEL_15;
LABEL_16:
      if ( !v14 )
        goto LABEL_53;
      groupIndex = v18->fields.groupIndex;
      v21 = v18->fields.eventId;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(v14, groupIndex, *v17) )
      {
        v22 = v17;
        v23 = ListByEventIdAndScreenFlag;
        v24 = v13;
        v25 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v25,
          (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v14,
          groupIndex,
          (Il2CppObject *)v25,
          (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__);
        v26 = sub_21FFEBC(EventItemDisplayMaster_EventItemDisplaySort_TypeInfo);
        System_Object___ctor((Il2CppObject *)v26, 0);
        Instance = (int *)v74;
        if ( !v74 )
          goto LABEL_53;
        Instance = (int *)EventItemDisplayGroupMaster__GetEntity(v74, v21, groupIndex, v27);
        if ( !v26 )
          goto LABEL_53;
        *(_DWORD *)(v26 + 20) = v21;
        *(_DWORD *)(v26 + 24) = groupIndex;
        v34 = Instance ? Instance[7] : 0;
        Instance = (int *)v75;
        *(_DWORD *)(v26 + 16) = v34;
        if ( !v75 )
          goto LABEL_53;
        items = v75->fields._items;
        v36 = Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__;
        ++v75->fields._version;
        if ( !items )
          goto LABEL_53;
        size = v75->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v75,
            (Il2CppObject *)v26,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          v75->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v26;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v38 + 4), v26, v28, v29, v30, v31, v32, v33);
        }
        v13 = v24;
        ListByEventIdAndScreenFlag = v23;
        v17 = v22;
      }
      Instance = (int *)System_Collections_Generic_Dictionary_int__object___get_Item(v14, groupIndex, *v13);
      if ( !Instance )
        goto LABEL_53;
      v45 = *((_QWORD *)Instance + 2);
      v46 = Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__;
      ++Instance[7];
      if ( !v45 )
        goto LABEL_53;
      v47 = Instance[6];
      if ( (unsigned int)v47 >= *(_DWORD *)(v45 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v18,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = v45 + 8 * v47;
        Instance[6] = v47 + 1;
        *(_QWORD *)(v48 + 32) = v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v48 + 32), (int32_t)v18, v39, v40, v41, v42, v43, v44);
      }
LABEL_34:
      max_length = ListByEventIdAndScreenFlag->max_length;
      if ( (int)++v16 >= max_length )
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
  if ( !*(&EventItemDisplayMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventItemDisplayMaster___c_TypeInfo, v12);
    Instance = (int *)EventItemDisplayMaster___c_TypeInfo;
  }
  static_fields = (struct EventItemDisplayMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__5_0 = (System_Comparison_T__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !Instance[57] )
    {
      j_il2cpp_runtime_class_init_0(Instance, v12);
      static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    }
    v51 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
    System_Comparison_object____ctor(_9__5_0, v51, Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__, 0);
    v52 = EventItemDisplayMaster___c_TypeInfo->static_fields;
    v52->__9__5_0 = (struct System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__o *)_9__5_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v52->__9__5_0, (int32_t)_9__5_0, v53, v54, v55, v56, v57, v58);
  }
  if ( !v75 )
LABEL_53:
    sub_21FFECC(Instance, v12);
  System_Collections_Generic_List_object___Sort_71636404(
    v75,
    _9__5_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v78,
    v75,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__);
  v79 = v78;
  v78.fields._list = 0;
  *(_QWORD *)&v78.fields._index = &v79;
  while ( 1 )
  {
    v59 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v79,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__);
    if ( !v59 )
      break;
    if ( !v79.fields._current )
      sub_21FFECC(v59, v60);
    if ( !v14 )
      sub_21FFECC(v59, v60);
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             v14,
             (int32_t)v79.fields._current[1].monitor,
             *v13);
    v68 = Item;
    if ( !v8
      || (v69 = v8->fields._items,
          v70 = Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__,
          ++v8->fields._version,
          !v69) )
    {
      sub_21FFECC(Item, Item);
    }
    v71 = v8->fields._size;
    if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        Item,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v72 = &v69->obj.klass + v71;
      v8->fields._size = v71 + 1;
      v72[4] = (Il2CppClass *)v68;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v72 + 4), (int32_t)v68, v62, v63, v64, v65, v66, v67);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v79,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__);
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
  __int64 v10; // x1
  void *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *v14; // x23
  bool v15; // w29
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  EventItemDisplayEntity_o *v25; // x0
  const MethodInfo *v26; // x1
  Il2CppObject *v27; // x22
  int32_t v28; // w8
  _BOOL8 IsEnable; // x0
  __int64 v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__4_0; // x20
  Il2CppObject *v47; // x21
  struct EventItemDisplayMaster___c_StaticFields *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Collections_Generic_IEnumerator_T__o *v56; // [xsp+18h] [xbp-68h]

  if ( (byte_5938660 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventItemDisplayEntity__GetEnumerator__);
    sub_21FFC50(&System_Comparison_EventItemDisplayEntity__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_EventItemDisplayEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
    sub_21FFC50(&Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__);
    sub_21FFC50(&EventItemDisplayMaster___c_TypeInfo);
    byte_5938660 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_EventItemDisplayEntity__GetEnumerator__);
  v56 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v13);
  v14 = Enumerator;
  v15 = screenFlag == 16 && isTerminalTop;
  while ( 1 )
  {
    klass = v14->klass;
    v17 = *(unsigned __int16 *)&v14->klass->_2.rank;
    if ( *(_WORD *)&v14->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_10;
      }
      v19 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v19 = sub_2237E2C(v14, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            v14,
            *(_QWORD *)(v19 + 8));
    if ( (v20 & 1) == 0 )
      break;
    if ( !v56 )
      sub_21FFECC(v20, v10);
    v21 = v56->klass;
    v22 = *(unsigned __int16 *)&v56->klass->_2.rank;
    if ( *(_WORD *)&v56->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventItemDisplayEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_EventItemDisplayEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_18;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_18:
      v24 = sub_2237E2C(v56, System_Collections_Generic_IEnumerator_EventItemDisplayEntity__TypeInfo, 0);
    }
    v25 = (EventItemDisplayEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                        v56,
                                        *(_QWORD *)(v24 + 8));
    v27 = (Il2CppObject *)v25;
    if ( v15 )
    {
      if ( !v25 )
        sub_21FFECC(0, v26);
LABEL_27:
      v28 = v25->fields.screenFlag;
      if ( (v28 & 2) == 0 )
        goto LABEL_28;
      goto LABEL_29;
    }
    if ( !v25 )
      sub_21FFECC(0, v26);
    if ( v25->fields.eventId == eventId )
    {
      if ( (unsigned int)(screenFlag - 16) <= 0x30
        && ((1LL << ((unsigned __int8)screenFlag - 16)) & 0x1000000010001LL) != 0 )
      {
        goto LABEL_27;
      }
      v28 = v25->fields.screenFlag;
LABEL_28:
      if ( (v28 & screenFlag) == 0 )
        goto LABEL_35;
LABEL_29:
      IsEnable = EventItemDisplayEntity__IsEnable(v25, v26);
      if ( IsEnable )
      {
        if ( !v9
          || (items = v9->fields._items,
              v38 = Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__,
              ++v9->fields._version,
              !items) )
        {
          sub_21FFECC(IsEnable, v30);
        }
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            v27,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v40[4] = (Il2CppClass *)v27;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v40 + 4), (int32_t)v27, v31, v32, v33, v34, v35, v36);
        }
      }
    }
LABEL_35:
    v14 = v56;
  }
  if ( v56 )
  {
    v41 = v56->klass;
    v42 = *(unsigned __int16 *)&v56->klass->_2.rank;
    if ( *(_WORD *)&v56->klass->_2.rank )
    {
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_42;
      }
      v44 = (__int64)&v41->vtable[*v43];
    }
    else
    {
LABEL_42:
      v44 = sub_2237E2C(v56, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(v56, *(_QWORD *)(v44 + 8));
  }
  list = EventItemDisplayMaster___c_TypeInfo;
  if ( !*(&EventItemDisplayMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventItemDisplayMaster___c_TypeInfo, v10);
    list = EventItemDisplayMaster___c_TypeInfo;
  }
  static_fields = (struct EventItemDisplayMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_0 = (System_Comparison_T__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v10);
      static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventItemDisplayEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__4_0,
      v47,
      Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__,
      0);
    v48 = EventItemDisplayMaster___c_TypeInfo->static_fields;
    v48->__9__4_0 = (struct System_Comparison_EventItemDisplayEntity__o *)_9__4_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v48->__9__4_0, (int32_t)_9__4_0, v49, v50, v51, v52, v53, v54);
  }
  if ( !v9 )
LABEL_57:
    sub_21FFECC(list, v10);
  System_Collections_Generic_List_object___Sort_71636404(
    v9,
    _9__4_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__);
  return (EventItemDisplayEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v9,
                                           (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__);
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

  if ( (byte_593865E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__);
    byte_593865E = 1;
  }
  PK = (Il2CppObject *)EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938662 & 1) == 0 )
  {
    sub_21FFC50(&EventItemDisplayMaster___c_TypeInfo);
    byte_5938662 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventItemDisplayMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventItemDisplayMaster___c_TypeInfo->static_fields->__9 = (struct EventItemDisplayMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventItemDisplayMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, a);
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
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}