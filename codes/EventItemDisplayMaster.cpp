void __fastcall EventItemDisplayMaster___ctor(EventItemDisplayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC3E2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__, method);
    byte_49FC3E2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    164,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayEntity_o *__fastcall EventItemDisplayMaster__GetEntity(
        EventItemDisplayMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FC3E0 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_49FC3E0 = 1;
  }
  PK = (Il2CppObject *)EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventItemDisplayEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_30D41FC *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__);
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
  __int64 v35; // x1
  __int64 v36; // x2
  int *Instance; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  const MethodInfo_31238E4 **v40; // x27
  System_Collections_Generic_Dictionary_int__object__o *v41; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  int max_length; // w8
  __int64 v45; // x20
  EventItemDisplayEntity_o **m_Items; // x29
  unsigned int v47; // w24
  EventItemDisplayEntity_o *v48; // x25
  int32_t v49; // w8
  int32_t groupIndex; // w26
  int32_t v51; // w28
  __int64 v52; // x1
  __int64 v53; // x2
  EventItemDisplayEntity_array *v54; // x22
  EventItemDisplayEntity_o **v55; // x23
  const MethodInfo_31238E4 **v56; // x29
  System_Collections_Generic_List_object__o *v57; // x27
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x27
  const MethodInfo *v61; // x3
  int32_t v62; // w2
  int32_t v63; // w3
  int v64; // w8
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  Il2CppClass **v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  __int64 v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  __int64 v74; // x8
  System_Comparison_T__o *v75; // x20
  Il2CppObject *v76; // x23
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  _BOOL8 v80; // x0
  Il2CppObject *Item; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  Il2CppObject *v84; // x1
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  Il2CppClass **v88; // x0
  EventItemDisplayGroupMaster_o *v90; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v91; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_49FC3E4 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo, v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__,
      v14);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__,
      v15);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__get_Current__,
      v16);
    sub_1B640C8(&EventItemDisplayMaster_EventItemDisplaySort_TypeInfo, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__, v20);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__,
      v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__, v25);
    sub_1B640C8(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo, v26);
    sub_1B640C8(&System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo, v27);
    sub_1B640C8(&System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo, v28);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1B640C8(&Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__, v30);
    sub_1B640C8(&EventItemDisplayMaster___c_TypeInfo, v31);
    byte_49FC3E4 = 1;
  }
  memset(&v94, 0, sizeof(v94));
  v32 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&screenFlag);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__);
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 this,
                                 eventId,
                                 screenFlag,
                                 isTerminalTop,
                                 v33);
  v91 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v91,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
  Instance = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (int *)DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_53;
  if ( !*(_QWORD *)&ListByEventIdAndScreenFlag->max_length )
    return (System_Collections_Generic_List_List_EventItemDisplayEntity___o *)v32;
  v90 = (EventItemDisplayGroupMaster_o *)Instance;
  v40 = (const MethodInfo_31238E4 **)&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__;
  v41 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo,
                                                                  v38,
                                                                  v39);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v41,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__);
  max_length = ListByEventIdAndScreenFlag->max_length;
  if ( max_length >= 1 )
  {
    v45 = 0LL;
    m_Items = ListByEventIdAndScreenFlag->m_Items;
    v47 = screenFlag - 16;
    while ( 1 )
    {
      if ( (unsigned int)v45 >= max_length )
        sub_1B6432C(Instance, v42);
      v48 = m_Items[v45];
      if ( !v48 )
        goto LABEL_53;
      if ( v47 > 0x30 || ((1LL << v47) & 0x1000000010001LL) == 0 )
        break;
      v49 = v48->fields.screenFlag;
      if ( (v49 & 2) == 0 )
        goto LABEL_15;
LABEL_16:
      if ( !v41 )
        goto LABEL_53;
      groupIndex = v48->fields.groupIndex;
      v51 = v48->fields.eventId;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v41,
              groupIndex,
              (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__) )
      {
        v54 = ListByEventIdAndScreenFlag;
        v55 = m_Items;
        v56 = v40;
        v57 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo,
                                                             v52,
                                                             v53);
        System_Collections_Generic_List_object____ctor(
          v57,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v41,
          groupIndex,
          (Il2CppObject *)v57,
          (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__);
        v60 = sub_1B64314(EventItemDisplayMaster_EventItemDisplaySort_TypeInfo, v58, v59);
        System_Object___ctor((Il2CppObject *)v60, 0LL);
        Instance = (int *)v90;
        if ( !v90 )
          goto LABEL_53;
        Instance = (int *)EventItemDisplayGroupMaster__GetEntity(v90, v51, groupIndex, v61);
        if ( !v60 )
          goto LABEL_53;
        *(_DWORD *)(v60 + 20) = v51;
        *(_DWORD *)(v60 + 24) = groupIndex;
        v64 = Instance ? Instance[7] : 0;
        Instance = (int *)v91;
        *(_DWORD *)(v60 + 16) = v64;
        if ( !v91 )
          goto LABEL_53;
        items = v91->fields._items;
        v66 = Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__;
        ++v91->fields._version;
        if ( !items )
          goto LABEL_53;
        size = v91->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v91,
            (Il2CppObject *)v60,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
        }
        else
        {
          v68 = &items->obj.klass + size;
          v91->fields._size = size + 1;
          v68[4] = (Il2CppClass *)v60;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v68 + 4), v60, v62, v63);
        }
        v40 = v56;
        m_Items = v55;
        ListByEventIdAndScreenFlag = v54;
      }
      Instance = (int *)System_Collections_Generic_Dictionary_int__object___get_Item(v41, groupIndex, *v40);
      if ( !Instance )
        goto LABEL_53;
      v71 = *((_QWORD *)Instance + 2);
      v72 = Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__;
      ++Instance[7];
      if ( !v71 )
        goto LABEL_53;
      v73 = Instance[6];
      if ( (unsigned int)v73 >= *(_DWORD *)(v71 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v48,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
      }
      else
      {
        v74 = v71 + 8 * v73;
        Instance[6] = v73 + 1;
        *(_QWORD *)(v74 + 32) = v48;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v74 + 32), (int32_t)v48, v69, v70);
      }
LABEL_34:
      max_length = ListByEventIdAndScreenFlag->max_length;
      if ( (int)++v45 >= max_length )
        goto LABEL_35;
    }
    v49 = v48->fields.screenFlag;
LABEL_15:
    if ( (v49 & screenFlag) == 0 )
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
  v75 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v75 )
  {
    if ( !Instance[56] )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (int *)EventItemDisplayMaster___c_TypeInfo;
    }
    v76 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v75 = (System_Comparison_T__o *)sub_1B64314(
                                      System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo,
                                      v42,
                                      v43);
    System_Comparison_object____ctor(v75, v76, Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__, 0LL);
    static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__o *)v75;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)v75, v78, v79);
  }
  if ( !v91 )
LABEL_53:
    sub_1B64324(Instance);
  System_Collections_Generic_List_object___Sort_55243320(
    v91,
    v75,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v93,
    v91,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__);
  v94 = v93;
  while ( 1 )
  {
    v80 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v94,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__);
    if ( !v80 )
      break;
    if ( !v94.fields._current )
      sub_1B64324(v80);
    if ( !v41 )
      sub_1B64324(v80);
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             v41,
             (int32_t)v94.fields._current[1].monitor,
             *v40);
    v84 = Item;
    if ( !v32 )
      sub_1B64324(Item);
    v85 = v32->fields._items;
    v86 = Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__;
    ++v32->fields._version;
    if ( !v85 )
      sub_1B64324(Item);
    v87 = v32->fields._size;
    if ( (unsigned int)v87 >= v85->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v32,
        Item,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
    }
    else
    {
      v88 = &v85->obj.klass + v87;
      v32->fields._size = v87 + 1;
      v88[4] = (Il2CppClass *)v84;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v88 + 4), (int32_t)v84, v82, v83);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v94,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__);
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
  __int64 v20; // x1
  System_Collections_Generic_List_object__o *v21; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  unsigned int v24; // w29
  bool v25; // w24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  EventItemDisplayEntity_o *v34; // x0
  Il2CppObject *v35; // x23
  __int64 methodPtr_low; // x9
  int32_t v37; // w8
  _BOOL8 IsEnable; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  EventItemDisplayMaster___c_c *v51; // x8
  System_Comparison_T__o *_9__4_0; // x20
  Il2CppObject *v53; // x21
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x0
  int32_t v55; // w2
  int32_t v56; // w3

  if ( (byte_49FC3E3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1B640C8(&System_Comparison_EventItemDisplayEntity__TypeInfo, v9);
    sub_1B640C8(&EventItemDisplayEntity_TypeInfo, v10);
    sub_1B640C8(&System_IDisposable_TypeInfo, v11);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__, v17);
    sub_1B640C8(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo, v18);
    sub_1B640C8(&Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__, v19);
    sub_1B640C8(&EventItemDisplayMaster___c_TypeInfo, v20);
    byte_49FC3E3 = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&screenFlag);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_55;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  v24 = screenFlag - 16;
  v25 = screenFlag == 16 && isTerminalTop;
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
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_17;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_17:
      v33 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v34 = (EventItemDisplayEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                                        Enumerator,
                                        *(_QWORD *)(v33 + 8));
    v35 = (Il2CppObject *)v34;
    if ( !v34 )
      goto LABEL_50;
    methodPtr_low = LOBYTE(EventItemDisplayEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v34->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventItemDisplayEntity_c *)v34->klass->_2.typeHierarchy[methodPtr_low - 1] != EventItemDisplayEntity_TypeInfo )
    {
      sub_1B645E4(v34);
LABEL_50:
      if ( v25 )
        sub_1B64324(v34);
      sub_1B64324(v34);
    }
    if ( v25 )
      goto LABEL_26;
    if ( v34->fields.eventId == eventId )
    {
      if ( v24 > 0x30 || ((1LL << v24) & 0x1000000010001LL) == 0 )
      {
        v37 = v34->fields.screenFlag;
        goto LABEL_27;
      }
LABEL_26:
      v37 = v34->fields.screenFlag;
      if ( (v37 & 2) != 0 )
      {
LABEL_28:
        IsEnable = EventItemDisplayEntity__IsEnable(v34, (const MethodInfo *)EventItemDisplayEntity_TypeInfo);
        if ( IsEnable )
        {
          if ( !v21 )
            sub_1B64324(IsEnable);
          items = v21->fields._items;
          v42 = Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1B64324(IsEnable);
          size = v21->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              v35,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = &items->obj.klass + size;
            v21->fields._size = size + 1;
            v44[4] = (Il2CppClass *)v35;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v35, v39, v40);
          }
        }
      }
      else
      {
LABEL_27:
        if ( (v37 & screenFlag) != 0 )
          goto LABEL_28;
      }
    }
  }
  v45 = Enumerator->klass;
  v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_39;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_39:
    v48 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(
                                                             Enumerator,
                                                             *(_QWORD *)(v48 + 8));
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
    _9__4_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventItemDisplayEntity__TypeInfo, v49, v50);
    System_Comparison_object____ctor(
      _9__4_0,
      v53,
      Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__,
      0LL);
    static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventItemDisplayEntity__o *)_9__4_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v55, v56);
  }
  if ( !v21 )
LABEL_55:
    sub_1B64324(list);
  System_Collections_Generic_List_object___Sort_55243320(
    v21,
    _9__4_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__);
  return (EventItemDisplayEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v21,
                                           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__);
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

  if ( (byte_49FC3E1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__, entity);
    byte_49FC3E1 = 1;
  }
  PK = (Il2CppObject *)EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC3E5 & 1) == 0 )
  {
    sub_1B640C8(&EventItemDisplayMaster___c_TypeInfo, v1);
    byte_49FC3E5 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventItemDisplayMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventItemDisplayMaster___c_TypeInfo->static_fields->__9 = (struct EventItemDisplayMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventItemDisplayMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}