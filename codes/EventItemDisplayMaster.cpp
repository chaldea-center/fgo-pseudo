void __fastcall EventItemDisplayMaster___ctor(EventItemDisplayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B131 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__);
    byte_4A5B131 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    164,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayEntity_o *__fastcall EventItemDisplayMaster__GetEntity(
        EventItemDisplayMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B12F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__);
    byte_4A5B12F = 1;
  }
  PK = (Il2CppObject *)EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventItemDisplayEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_311DC8C *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__);
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
  const MethodInfo_316D8B8 **v13; // x27
  System_Collections_Generic_Dictionary_int__object__o *v14; // x21
  int max_length; // w8
  __int64 v16; // x20
  EventItemDisplayEntity_o **m_Items; // x29
  unsigned int v18; // w24
  EventItemDisplayEntity_o *v19; // x25
  int32_t v20; // w8
  int32_t groupIndex; // w26
  int32_t v22; // w28
  EventItemDisplayEntity_array *v23; // x22
  EventItemDisplayEntity_o **v24; // x23
  const MethodInfo_316D8B8 **v25; // x29
  System_Collections_Generic_List_object__o *v26; // x27
  __int64 v27; // x27
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  int32_t v30; // w3
  int v31; // w8
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8
  System_Comparison_T__o *v42; // x20
  Il2CppObject *v43; // x23
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  _BOOL8 v47; // x0
  __int64 v48; // x1
  Il2CppObject *Item; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  Il2CppObject *v52; // x1
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  EventItemDisplayGroupMaster_o *v58; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v59; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A5B133 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__get_Current__);
    sub_1B885B0(&EventItemDisplayMaster_EventItemDisplaySort_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__);
    sub_1B885B0(&EventItemDisplayMaster___c_TypeInfo);
    byte_4A5B133 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__);
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 this,
                                 eventId,
                                 screenFlag,
                                 isTerminalTop,
                                 v9);
  v59 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
  Instance = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (int *)DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_53;
  if ( !*(_QWORD *)&ListByEventIdAndScreenFlag->max_length )
    return (System_Collections_Generic_List_List_EventItemDisplayEntity___o *)v8;
  v58 = (EventItemDisplayGroupMaster_o *)Instance;
  v13 = (const MethodInfo_316D8B8 **)&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__;
  v14 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v14,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__);
  max_length = ListByEventIdAndScreenFlag->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0LL;
    m_Items = ListByEventIdAndScreenFlag->m_Items;
    v18 = screenFlag - 16;
    while ( 1 )
    {
      if ( (unsigned int)v16 >= max_length )
        sub_1B88814(Instance, v12);
      v19 = m_Items[v16];
      if ( !v19 )
        goto LABEL_53;
      if ( v18 > 0x30 || ((1LL << v18) & 0x1000000010001LL) == 0 )
        break;
      v20 = v19->fields.screenFlag;
      if ( (v20 & 2) == 0 )
        goto LABEL_15;
LABEL_16:
      if ( !v14 )
        goto LABEL_53;
      groupIndex = v19->fields.groupIndex;
      v22 = v19->fields.eventId;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v14,
              groupIndex,
              (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__) )
      {
        v23 = ListByEventIdAndScreenFlag;
        v24 = m_Items;
        v25 = v13;
        v26 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v26,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v14,
          groupIndex,
          (Il2CppObject *)v26,
          (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__);
        v27 = sub_1B887FC(EventItemDisplayMaster_EventItemDisplaySort_TypeInfo);
        System_Object___ctor((Il2CppObject *)v27, 0LL);
        Instance = (int *)v58;
        if ( !v58 )
          goto LABEL_53;
        Instance = (int *)EventItemDisplayGroupMaster__GetEntity(v58, v22, groupIndex, v28);
        if ( !v27 )
          goto LABEL_53;
        *(_DWORD *)(v27 + 20) = v22;
        *(_DWORD *)(v27 + 24) = groupIndex;
        v31 = Instance ? Instance[7] : 0;
        Instance = (int *)v59;
        *(_DWORD *)(v27 + 16) = v31;
        if ( !v59 )
          goto LABEL_53;
        items = v59->fields._items;
        v33 = Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__;
        ++v59->fields._version;
        if ( !items )
          goto LABEL_53;
        size = v59->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v59,
            (Il2CppObject *)v27,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v59->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v27;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 4), v27, v29, v30);
        }
        v13 = v25;
        m_Items = v24;
        ListByEventIdAndScreenFlag = v23;
      }
      Instance = (int *)System_Collections_Generic_Dictionary_int__object___get_Item(v14, groupIndex, *v13);
      if ( !Instance )
        goto LABEL_53;
      v38 = *((_QWORD *)Instance + 2);
      v39 = Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__;
      ++Instance[7];
      if ( !v38 )
        goto LABEL_53;
      v40 = Instance[6];
      if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v19,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = v38 + 8 * v40;
        Instance[6] = v40 + 1;
        *(_QWORD *)(v41 + 32) = v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 32), (int32_t)v19, v36, v37);
      }
LABEL_34:
      max_length = ListByEventIdAndScreenFlag->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_35;
    }
    v20 = v19->fields.screenFlag;
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
  v42 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v42 )
  {
    if ( !Instance[56] )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (int *)EventItemDisplayMaster___c_TypeInfo;
    }
    v43 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v42 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
    System_Comparison_object____ctor(v42, v43, Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__, 0LL);
    static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__o *)v42;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)v42, v45, v46);
  }
  if ( !v59 )
LABEL_53:
    sub_1B8880C(Instance, v12);
  System_Collections_Generic_List_object___Sort_55571192(
    v59,
    v42,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v61,
    v59,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__);
  v62 = v61;
  while ( 1 )
  {
    v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v62,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__);
    if ( !v47 )
      break;
    if ( !v62.fields._current )
      sub_1B8880C(v47, v48);
    if ( !v14 )
      sub_1B8880C(v47, v48);
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             v14,
             (int32_t)v62.fields._current[1].monitor,
             *v13);
    v52 = Item;
    if ( !v8 )
      sub_1B8880C(Item, Item);
    v53 = v8->fields._items;
    v54 = Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__;
    ++v8->fields._version;
    if ( !v53 )
      sub_1B8880C(Item, Item);
    v55 = v8->fields._size;
    if ( (unsigned int)v55 >= v53->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        Item,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    }
    else
    {
      v56 = &v53->obj.klass + v55;
      v8->fields._size = v55 + 1;
      v56[4] = (Il2CppClass *)v52;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v52, v50, v51);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v62,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__);
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
  unsigned int v14; // w29
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
  __int64 v25; // x1
  Il2CppObject *v26; // x23
  __int64 methodPtr_low; // x9
  int32_t v28; // w8
  _BOOL8 IsEnable; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  EventItemDisplayMaster___c_c *v41; // x8
  System_Comparison_T__o *_9__4_0; // x20
  Il2CppObject *v43; // x21
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x0
  int32_t v45; // w2
  int32_t v46; // w3

  if ( (byte_4A5B132 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_Comparison_EventItemDisplayEntity__TypeInfo);
    sub_1B885B0(&EventItemDisplayEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
    sub_1B885B0(&Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__);
    sub_1B885B0(&EventItemDisplayMaster___c_TypeInfo);
    byte_4A5B132 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_55;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v12);
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
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v23 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (EventItemDisplayEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                        Enumerator,
                                        *(_QWORD *)(v23 + 8));
    v26 = (Il2CppObject *)v24;
    if ( !v24 )
      goto LABEL_50;
    methodPtr_low = LOBYTE(EventItemDisplayEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v24->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventItemDisplayEntity_c *)v24->klass->_2.typeHierarchy[methodPtr_low - 1] != EventItemDisplayEntity_TypeInfo )
    {
      sub_1B88ACC(v24);
LABEL_50:
      if ( v15 )
        sub_1B8880C(v24, v25);
      sub_1B8880C(v24, v25);
    }
    if ( v15 )
      goto LABEL_26;
    if ( v24->fields.eventId == eventId )
    {
      if ( v14 > 0x30 || ((1LL << v14) & 0x1000000010001LL) == 0 )
      {
        v28 = v24->fields.screenFlag;
        goto LABEL_27;
      }
LABEL_26:
      v28 = v24->fields.screenFlag;
      if ( (v28 & 2) != 0 )
      {
LABEL_28:
        IsEnable = EventItemDisplayEntity__IsEnable(v24, (const MethodInfo *)EventItemDisplayEntity_TypeInfo);
        if ( IsEnable )
        {
          if ( !v9 )
            sub_1B8880C(IsEnable, v30);
          items = v9->fields._items;
          v34 = Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            sub_1B8880C(IsEnable, v30);
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v26,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v26;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v26, v31, v32);
          }
        }
      }
      else
      {
LABEL_27:
        if ( (v28 & screenFlag) != 0 )
          goto LABEL_28;
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_39;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_39:
    v40 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                                                             Enumerator,
                                                             *(_QWORD *)(v40 + 8));
  v41 = EventItemDisplayMaster___c_TypeInfo;
  if ( !EventItemDisplayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemDisplayMaster___c_TypeInfo);
    v41 = EventItemDisplayMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v41->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = EventItemDisplayMaster___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v41->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventItemDisplayEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__4_0,
      v43,
      Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__,
      0LL);
    static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventItemDisplayEntity__o *)_9__4_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v45, v46);
  }
  if ( !v9 )
LABEL_55:
    sub_1B8880C(list, v10);
  System_Collections_Generic_List_object___Sort_55571192(
    v9,
    _9__4_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__);
  return (EventItemDisplayEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v9,
                                           (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__);
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

  if ( (byte_4A5B130 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__);
    byte_4A5B130 = 1;
  }
  PK = (Il2CppObject *)EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B134 & 1) == 0 )
  {
    sub_1B885B0(&EventItemDisplayMaster___c_TypeInfo);
    byte_4A5B134 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventItemDisplayMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventItemDisplayMaster___c_TypeInfo->static_fields->__9 = (struct EventItemDisplayMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventItemDisplayMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}