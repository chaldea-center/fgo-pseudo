void __fastcall ShopMaster___ctor(ShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D012 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ShopMaster__ShopEntity__int___ctor__, method);
    byte_4B1D012 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    47,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_ShopMaster__ShopEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__CheckBuyAfterCloseShop(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_List_int__o *v11; // x0

  if ( (byte_4B1D01C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_1BCAFF8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B1D01C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__),
        v11 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v11,
          (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__),
        (list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)list,
                                                                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (list = (System_Collections_ObjectModel_Collection_T__o *)DataMasterBase_object__object__int___GetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)list,
                                                                   eventId,
                                                                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCB254(list, *(_QWORD *)&eventId);
  }
  return EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)list, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__CheckExistsPayType(
        ShopMaster_o *this,
        int32_t eventId,
        int32_t payType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w22
  int32_t v11; // w23
  bool v12; // w25

  if ( (byte_4B1D027 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__, v7);
    byte_4B1D027 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    v12 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( !list )
        break;
      if ( LODWORD(list[1].klass) != eventId || HIDWORD(list[2].fields.items) != payType )
      {
        v12 = ++v11 < v10;
        if ( v10 != v11 )
          continue;
      }
      return v12;
    }
LABEL_14:
    sub_1BCB254(list, *(_QWORD *)&eventId);
  }
  return 0;
}


bool __fastcall ShopMaster__CloseLimitEventShop(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  int32_t EventShopBaseShopId; // w0
  const MethodInfo *v5; // x2

  EventShopBaseShopId = ShopMaster__GetEventShopBaseShopId(this, eventId, method);
  if ( EventShopBaseShopId )
    LOBYTE(EventShopBaseShopId) = ShopMaster__IsPurchaseCloseEventShopItem(this, EventShopBaseShopId, v5);
  return EventShopBaseShopId;
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEntitiyList(
        ShopMaster_o *this,
        int32_t purchaseType,
        int32_t shopType,
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
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v21; // x1
  int64_t v22; // x23
  System_Collections_Generic_List_object__o *v23; // x19
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  ShopEntity_o *v34; // x0
  const MethodInfo *v35; // x2
  ShopEntity_o *v36; // x24
  const MethodInfo *v37; // x1
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  ShopMaster___c_c *v50; // x8
  System_Comparison_T__o *_9__1_0; // x20
  Il2CppObject *v52; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3

  if ( (byte_4B1D013 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__, *(_QWORD *)&purchaseType);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__, v7);
    sub_1BCAFF8(&System_Comparison_ShopEntity__TypeInfo, v8);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v9);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, v10);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__Add__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v15);
    sub_1BCAFF8(&System_Collections_Generic_List_ShopEntity__TypeInfo, v16);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v17);
    sub_1BCAFF8(&Method_ShopMaster___c__GetEnableEntitiyList_b__1_0__, v18);
    sub_1BCAFF8(&ShopMaster___c_TypeInfo, v19);
    byte_4B1D013 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_47;
  v22 = (int64_t)Time;
  System_Collections_ObjectModel_Collection_object___get_Count(
    (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
    (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Time )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v24);
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
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v32 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_19;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_19:
      v33 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0LL);
    }
    v34 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                            Enumerator,
                            *(_QWORD *)(v33 + 8));
    v36 = v34;
    if ( v34
      && !v34->fields.eventId
      && (purchaseType < 1 || v34->fields.purchaseType == purchaseType)
      && v34->fields.shopType == shopType
      && ShopEntity__IsEnable(v34, v22, v35) )
    {
      IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v36, v37);
      if ( !IsHiddenInCaseOfBuying )
      {
        if ( !v23 )
          sub_1BCB254(IsHiddenInCaseOfBuying, v39);
        items = v23->fields._items;
        v43 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v23->fields._version;
        if ( !items )
          sub_1BCB254(IsHiddenInCaseOfBuying, v39);
        size = v23->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v23,
            (Il2CppObject *)v36,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = &items->obj.klass + size;
          v23->fields._size = size + 1;
          v45[4] = (Il2CppClass *)v36;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v36, v40, v41);
        }
      }
    }
  }
  v46 = Enumerator->klass;
  v47 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_37;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_37:
    v49 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Time = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(
                                                             Enumerator,
                                                             *(_QWORD *)(v49 + 8));
  v50 = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v50 = ShopMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Comparison_T__o *)v50->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50);
      v50 = ShopMaster___c_TypeInfo;
    }
    v52 = (Il2CppObject *)v50->static_fields->__9;
    _9__1_0 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(_9__1_0, v52, Method_ShopMaster___c__GetEnableEntitiyList_b__1_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_ShopEntity__o *)_9__1_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v54, v55);
  }
  if ( !v23 )
LABEL_47:
    sub_1BCB254(Time, v21);
  System_Collections_Generic_List_object___Sort_57390740(
    v23,
    _9__1_0,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v23,
                               (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEntitiyList_41999272(
        ShopMaster_o *this,
        int32_t purchaseType,
        int32_t shopType,
        int32_t flag,
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
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v23; // x1
  int64_t v24; // x25
  System_Collections_Generic_List_object__o *v25; // x19
  __int64 v26; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  ShopEntity_o *v36; // x0
  const MethodInfo *v37; // x2
  ShopEntity_o *v38; // x26
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x2
  _BOOL8 IsOpenPurchaseCloseShop; // x0
  __int64 v42; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0
  ShopMaster___c_c *v53; // x8
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v55; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3

  if ( (byte_4B1D014 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__, *(_QWORD *)&purchaseType);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__, v9);
    sub_1BCAFF8(&System_Comparison_ShopEntity__TypeInfo, v10);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v11);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, v12);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__Add__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v17);
    sub_1BCAFF8(&System_Collections_Generic_List_ShopEntity__TypeInfo, v18);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v19);
    sub_1BCAFF8(&Method_ShopMaster___c__GetEnableEntitiyList_b__2_0__, v20);
    sub_1BCAFF8(&ShopMaster___c_TypeInfo, v21);
    byte_4B1D014 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_48;
  v24 = (int64_t)Time;
  System_Collections_ObjectModel_Collection_object___get_Count(
    (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
    (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Time )
    goto LABEL_48;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v26);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v32 = Enumerator->klass;
    v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v34 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_19;
      }
      v35 = (__int64)&v32->vtable[*v34].method;
    }
    else
    {
LABEL_19:
      v35 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0LL);
    }
    v36 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                            Enumerator,
                            *(_QWORD *)(v35 + 8));
    v38 = v36;
    if ( v36
      && (v36->fields.flag & flag) != 0
      && (purchaseType < 1 || v36->fields.purchaseType == purchaseType)
      && v36->fields.shopType == shopType
      && ShopEntity__IsEnable(v36, v24, v37)
      && !ShopEntity__IsHiddenInCaseOfBuying(v38, v39) )
    {
      IsOpenPurchaseCloseShop = ShopMaster__IsOpenPurchaseCloseShop(this, v38, v40);
      if ( !IsOpenPurchaseCloseShop )
      {
        if ( !v25 )
          sub_1BCB254(IsOpenPurchaseCloseShop, v42);
        items = v25->fields._items;
        v46 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v25->fields._version;
        if ( !items )
          sub_1BCB254(IsOpenPurchaseCloseShop, v42);
        size = v25->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            (Il2CppObject *)v38,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &items->obj.klass + size;
          v25->fields._size = size + 1;
          v48[4] = (Il2CppClass *)v38;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v38, v43, v44);
        }
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
        goto LABEL_38;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_38:
    v52 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Time = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(
                                                             Enumerator,
                                                             *(_QWORD *)(v52 + 8));
  v53 = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v53 = ShopMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Comparison_T__o *)v53->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v53 = ShopMaster___c_TypeInfo;
    }
    v55 = (Il2CppObject *)v53->static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(_9__2_0, v55, Method_ShopMaster___c__GetEnableEntitiyList_b__2_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_ShopEntity__o *)_9__2_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v57, v58);
  }
  if ( !v25 )
LABEL_48:
    sub_1BCB254(Time, v23);
  System_Collections_Generic_List_object___Sort_57390740(
    v25,
    _9__2_0,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v25,
                               (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEntitiyList_42000848(
        ShopMaster_o *this,
        int32_t purchaseType,
        int32_t payType,
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
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v21; // x1
  int64_t v22; // x23
  System_Collections_Generic_List_object__o *v23; // x19
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  ShopEntity_o *v34; // x0
  const MethodInfo *v35; // x2
  ShopEntity_o *v36; // x24
  const MethodInfo *v37; // x1
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  ShopMaster___c_c *v50; // x8
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v52; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3

  if ( (byte_4B1D015 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__, *(_QWORD *)&purchaseType);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__, v7);
    sub_1BCAFF8(&System_Comparison_ShopEntity__TypeInfo, v8);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v9);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, v10);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__Add__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v15);
    sub_1BCAFF8(&System_Collections_Generic_List_ShopEntity__TypeInfo, v16);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v17);
    sub_1BCAFF8(&Method_ShopMaster___c__GetEnableEntitiyList_b__3_0__, v18);
    sub_1BCAFF8(&ShopMaster___c_TypeInfo, v19);
    byte_4B1D015 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_47;
  v22 = (int64_t)Time;
  System_Collections_ObjectModel_Collection_object___get_Count(
    (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
    (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Time )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v24);
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
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v32 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_19;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_19:
      v33 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0LL);
    }
    v34 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                            Enumerator,
                            *(_QWORD *)(v33 + 8));
    v36 = v34;
    if ( v34
      && !v34->fields.eventId
      && (purchaseType < 1 || v34->fields.purchaseType == purchaseType)
      && v34->fields.payType == payType
      && ShopEntity__IsEnable(v34, v22, v35) )
    {
      IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v36, v37);
      if ( !IsHiddenInCaseOfBuying )
      {
        if ( !v23 )
          sub_1BCB254(IsHiddenInCaseOfBuying, v39);
        items = v23->fields._items;
        v43 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v23->fields._version;
        if ( !items )
          sub_1BCB254(IsHiddenInCaseOfBuying, v39);
        size = v23->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v23,
            (Il2CppObject *)v36,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = &items->obj.klass + size;
          v23->fields._size = size + 1;
          v45[4] = (Il2CppClass *)v36;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v36, v40, v41);
        }
      }
    }
  }
  v46 = Enumerator->klass;
  v47 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_37;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_37:
    v49 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Time = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(
                                                             Enumerator,
                                                             *(_QWORD *)(v49 + 8));
  v50 = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v50 = ShopMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v50->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50);
      v50 = ShopMaster___c_TypeInfo;
    }
    v52 = (Il2CppObject *)v50->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v52, Method_ShopMaster___c__GetEnableEntitiyList_b__3_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ShopEntity__o *)_9__3_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v54, v55);
  }
  if ( !v23 )
LABEL_47:
    sub_1BCB254(Time, v21);
  System_Collections_Generic_List_object___Sort_57390740(
    v23,
    _9__3_0,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v23,
                               (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEventEntitiyList(
        ShopMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t Time; // x22
  System_Collections_Generic_List_object__o *v16; // x21
  __int64 v17; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v20; // w23
  int32_t v21; // w24
  ShopEntity_o *Item; // x0
  const MethodInfo *v23; // x2
  Il2CppObject *v24; // x25
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Comparison_T__o *v31; // x19
  Il2CppObject *v32; // x20
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3

  if ( (byte_4B1D018 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__, v5);
    sub_1BCAFF8(&System_Comparison_ShopEntity__TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_ShopEntity__TypeInfo, v11);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v12);
    sub_1BCAFF8(&Method_ShopMaster___c__GetEnableEventEntitiyList_b__6_0__, v13);
    sub_1BCAFF8(&ShopMaster___c_TypeInfo, v14);
    byte_4B1D018 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)list,
                               v21,
                               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( Item )
      {
        v24 = (Il2CppObject *)Item;
        if ( Item->fields.eventId == eventId )
        {
          list = (void *)ShopEntity__IsEnable(Item, Time, v23);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v16 )
              break;
            items = v16->fields._items;
            v28 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v16->fields._version;
            if ( !items )
              break;
            size = v16->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                v24,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v16->fields._size = size + 1;
              v30[4] = (Il2CppClass *)v24;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v24, v25, v26);
            }
          }
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_18;
    }
LABEL_26:
    sub_1BCB254(list, v17);
  }
LABEL_18:
  list = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    list = ShopMaster___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 48LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ShopMaster___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)list + 23);
    v31 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(v31, v32, Method_ShopMaster___c__GetEnableEventEntitiyList_b__6_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_ShopEntity__o *)v31;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)v31, v34, v35);
  }
  if ( !v16 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_57390740(
    v16,
    v31,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v16,
                               (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEventEntityList(
        ShopMaster_o *this,
        int32_t eventId,
        int32_t slot,
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
  int64_t Time; // x23
  System_Collections_Generic_List_object__o *v18; // x22
  const MethodInfo *v19; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v22; // w24
  int32_t v23; // w25
  ShopEntity_o *Item; // x0
  const MethodInfo *v25; // x2
  ShopEntity_o *v26; // x26
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Comparison_T__o *v33; // x19
  Il2CppObject *v34; // x20
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3

  if ( (byte_4B1D019 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__, v7);
    sub_1BCAFF8(&System_Comparison_ShopEntity__TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__Add__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_ShopEntity__TypeInfo, v13);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v14);
    sub_1BCAFF8(&Method_ShopMaster___c__GetEnableEventEntityList_b__7_0__, v15);
    sub_1BCAFF8(&ShopMaster___c_TypeInfo, v16);
    byte_4B1D019 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v22 = Count;
    v23 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)list,
                               v23,
                               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( Item )
      {
        v26 = Item;
        if ( Item->fields.eventId == eventId && Item->fields.slot == slot && ShopEntity__IsEnable(Item, Time, v25) )
        {
          list = (void *)ShopEntity__IsHiddenInCaseOfBuyingShopId(v26, v19);
          if ( ((unsigned __int8)list & 1) == 0 )
          {
            if ( !v18 )
              break;
            items = v18->fields._items;
            v30 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v18->fields._version;
            if ( !items )
              break;
            size = v18->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v18,
                (Il2CppObject *)v26,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = &items->obj.klass + size;
              v18->fields._size = size + 1;
              v32[4] = (Il2CppClass *)v26;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v26, v27, v28);
            }
          }
        }
      }
      if ( v22 == ++v23 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1BCB254(list, v19);
  }
LABEL_20:
  list = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    list = ShopMaster___c_TypeInfo;
  }
  v33 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 56LL);
  if ( !v33 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ShopMaster___c_TypeInfo;
    }
    v34 = (Il2CppObject *)**((_QWORD **)list + 23);
    v33 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(v33, v34, Method_ShopMaster___c__GetEnableEventEntityList_b__7_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_ShopEntity__o *)v33;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)v33, v36, v37);
  }
  if ( !v18 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_57390740(
    v18,
    v33,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v18,
                               (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


bool __fastcall ShopMaster__GetEnableEventPeriod(
        ShopMaster_o *this,
        int64_t *openedAt,
        int64_t *closedAt,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *v13; // x23
  int32_t Count; // w0
  int32_t v15; // w24
  int32_t v16; // w25
  Il2CppObject *Item; // x0
  int64_t klass; // x8
  int64_t monitor; // x8

  if ( (byte_4B1D01D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__, openedAt);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__, v9);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    byte_4B1D01D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  *openedAt = -1LL;
  *closedAt = -1LL;
  if ( !this->fields.list )
    goto LABEL_23;
  v13 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Time )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               Time,
               v16,
               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( Item )
      {
        if ( LODWORD(Item[1].monitor) == eventId )
        {
          klass = (int64_t)Item[8].klass;
          if ( klass <= (__int64)v13 )
          {
            if ( (*openedAt & 0x8000000000000000LL) != 0 || *openedAt > klass )
              *openedAt = klass;
            if ( *closedAt )
            {
              monitor = (int64_t)Item[8].monitor;
              if ( !monitor || *closedAt < monitor )
                *closedAt = monitor;
            }
          }
        }
      }
      if ( v15 == ++v16 )
        return (*openedAt & 0x8000000000000000LL) == 0 && *closedAt >= 0;
    }
LABEL_23:
    sub_1BCB254(Time, v12);
  }
  return (*openedAt & 0x8000000000000000LL) == 0 && *closedAt >= 0;
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableExchangeSvtCoinEntitiyList(
        ShopMaster_o *this,
        int32_t svtCoinType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  int64_t Time; // x22
  System_Collections_Generic_List_object__o *v18; // x19
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  ShopEntity_o *v31; // x0
  const MethodInfo *v32; // x2
  ShopEntity_o *v33; // x23
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  ShopMaster___c_c *v48; // x8
  System_Comparison_T__o *_9__8_0; // x20
  Il2CppObject *v50; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3

  if ( (byte_4B1D01A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__, *(_QWORD *)&svtCoinType);
    sub_1BCAFF8(&System_Comparison_ShopEntity__TypeInfo, v5);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v6);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, v7);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__Add__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_ShopEntity__TypeInfo, v13);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v14);
    sub_1BCAFF8(&Method_ShopMaster___c__GetEnableExchangeSvtCoinEntitiyList_b__8_0__, v15);
    sub_1BCAFF8(&ShopMaster___c_TypeInfo, v16);
    byte_4B1D01A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_45;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v21);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v29 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_18;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_18:
      v30 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0LL);
    }
    v31 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                            Enumerator,
                            *(_QWORD *)(v30 + 8));
    v33 = v31;
    if ( v31 )
    {
      if ( !v31->fields.eventId
        && v31->fields.shopType == 17
        && ShopEntity__IsEnable(v31, Time, v32)
        && ShopEntity__GetExchangeSvtCoinType(v33, v34) == svtCoinType )
      {
        IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v33, v35);
        if ( !IsHiddenInCaseOfBuying )
        {
          if ( !v18 )
            sub_1BCB254(IsHiddenInCaseOfBuying, v37);
          items = v18->fields._items;
          v41 = Method_System_Collections_Generic_List_ShopEntity__Add__;
          ++v18->fields._version;
          if ( !items )
            sub_1BCB254(IsHiddenInCaseOfBuying, v37);
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              (Il2CppObject *)v33,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v43[4] = (Il2CppClass *)v33;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v43 + 4), (int32_t)v33, v38, v39);
          }
        }
      }
    }
  }
  v44 = Enumerator->klass;
  v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_35;
    }
    v47 = (__int64)&v44->vtable[*v46].method;
  }
  else
  {
LABEL_35:
    v47 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(
                                                             Enumerator,
                                                             *(_QWORD *)(v47 + 8));
  v48 = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v48 = ShopMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Comparison_T__o *)v48->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = ShopMaster___c_TypeInfo;
    }
    v50 = (Il2CppObject *)v48->static_fields->__9;
    _9__8_0 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__8_0,
      v50,
      Method_ShopMaster___c__GetEnableExchangeSvtCoinEntitiyList_b__8_0__,
      0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_ShopEntity__o *)_9__8_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v52, v53);
  }
  if ( !v18 )
LABEL_45:
    sub_1BCB254(list, v19);
  System_Collections_Generic_List_object___Sort_57390740(
    v18,
    _9__8_0,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v18,
                               (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


int32_t __fastcall ShopMaster__GetEnableMainEventId(ShopMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t Time; // x22
  void *Instance; // x0
  __int64 baseShopId; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_int__o *v20; // x21
  System_Collections_Generic_List_int__o *v21; // x20
  int32_t Count; // w0
  int32_t v23; // w24
  int32_t i; // w25
  ShopEntity_o *Item; // x0
  const MethodInfo *v26; // x2
  ShopEntity_o *v27; // x26
  __int64 v28; // x8
  const MethodInfo *v29; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  char *v33; // x8
  struct System_Int32_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x8
  System_Collections_Generic_List_int__o *v38; // x0
  int v39; // w24
  int32_t v40; // w22
  int32_t v41; // w23
  const MethodInfo *v42; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1D01B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMaster___, v4);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1BCAFF8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Sort__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Count__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B1D01B = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMaster___);
  v20 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  v21 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_47;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    for ( i = 0; v23 != i; ++i )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_47;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)Instance,
                               i,
                               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( Item )
      {
        v27 = Item;
        if ( Item->fields.eventId )
        {
          Instance = (void *)ShopEntity__IsEnable(Item, Time, v26);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !MasterData_object )
              goto LABEL_47;
            Instance = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         v27->fields.eventId,
                         (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_47;
            v28 = *((_QWORD *)Instance + 13);
            if ( v28 >= 1 && v28 >= Time && *((_QWORD *)Instance + 11) <= Time )
            {
              if ( !v20 )
                goto LABEL_47;
              if ( !System_Collections_Generic_List_int___Contains(
                      v20,
                      v27->fields.baseShopId,
                      (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__) )
              {
                Instance = (void *)ShopMaster__CheckBuyAfterCloseShop(this, v27->fields.eventId, v29);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  baseShopId = (unsigned int)v27->fields.baseShopId;
                  items = v20->fields._items;
                  v31 = Method_System_Collections_Generic_List_int__Add__;
                  ++v20->fields._version;
                  if ( !items )
                    goto LABEL_47;
                  size = v20->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    v37 = v31[4];
                    v38 = v20;
LABEL_32:
                    System_Collections_Generic_List_int___AddWithResize(
                      v38,
                      baseShopId,
                      *(const MethodInfo_369CBAC **)(*(_QWORD *)(v37 + 192) + 112LL));
                    continue;
                  }
                  v33 = (char *)items + 4 * size;
                  v20->fields._size = size + 1;
                }
                else
                {
                  if ( !v21 )
                    goto LABEL_47;
                  Instance = (void *)System_Collections_Generic_List_int___Contains(
                                       v21,
                                       v27->fields.eventId,
                                       (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                    continue;
                  baseShopId = (unsigned int)v27->fields.eventId;
                  v34 = v21->fields._items;
                  v35 = Method_System_Collections_Generic_List_int__Add__;
                  ++v21->fields._version;
                  if ( !v34 )
                    goto LABEL_47;
                  v36 = v21->fields._size;
                  if ( (unsigned int)v36 >= v34->max_length )
                  {
                    v37 = v35[4];
                    v38 = v21;
                    goto LABEL_32;
                  }
                  v33 = (char *)v34 + 4 * v36;
                  v21->fields._size = v36 + 1;
                }
                *((_DWORD *)v33 + 8) = baseShopId;
              }
            }
          }
        }
      }
    }
  }
  if ( v20 )
  {
    v39 = v20->fields._size;
    if ( v39 >= 1 )
    {
      v40 = 0;
      while ( 1 )
      {
        v41 = System_Collections_Generic_List_int___get_Item(
                v20,
                v40,
                (const MethodInfo_369C8BC *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !ShopMaster__IsPurchaseCloseEventShopItem(this, v41, v42) )
        {
          Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               &entity,
                               v41,
                               (const MethodInfo_32C7E4C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            break;
        }
        if ( v39 == ++v40 )
          goto LABEL_40;
      }
      if ( entity )
        return (int32_t)entity[1].monitor;
LABEL_47:
      sub_1BCB254(Instance, baseShopId);
    }
  }
LABEL_40:
  if ( !v21 || v21->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_int___Sort(
    v21,
    (const MethodInfo_369E4F0 *)Method_System_Collections_Generic_List_int__Sort__);
  return System_Collections_Generic_List_int___get_Item(
           v21,
           0,
           (const MethodInfo_369C8BC *)Method_System_Collections_Generic_List_int__get_Item__);
}


ShopEntity_o *__fastcall ShopMaster__GetEntityOfFragmentsShop(ShopMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  ShopEntity_o *v19; // x21
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0

  if ( (byte_4B1D026 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__, method);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v3);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, v4);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v5);
    byte_4B1D026 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCB254(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0LL);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    v19 = (ShopEntity_o *)v17;
    if ( !v17 )
      sub_1BCB254(0LL, v18);
    if ( *(_DWORD *)(v17 + 72) == 6 && *(_DWORD *)(v17 + 68) == 8 )
      goto LABEL_23;
  }
  v19 = 0LL;
LABEL_23:
  v20 = Enumerator->klass;
  v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_27;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_27:
    v23 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  return v19;
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEventEntitiyList(
        ShopMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x19
  Il2CppClass *v15; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v18; // w22
  int32_t v19; // w23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Comparison_T__o *v26; // x20
  Il2CppObject *v27; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4B1D016 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__, v5);
    sub_1BCAFF8(&System_Comparison_ShopEntity__TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_ShopEntity__TypeInfo, v11);
    sub_1BCAFF8(&Method_ShopMaster___c__GetEventEntitiyList_b__4_0__, v12);
    sub_1BCAFF8(&ShopMaster___c_TypeInfo, v13);
    byte_4B1D016 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v19,
               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( list )
      {
        v15 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 6) == eventId )
        {
          if ( !v14 )
            break;
          items = v14->fields._items;
          v23 = Method_System_Collections_Generic_List_ShopEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)list,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v25[4] = v15;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v15, v20, v21);
          }
        }
      }
      if ( v18 == ++v19 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1BCB254(list, v15);
  }
LABEL_15:
  list = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    list = ShopMaster___c_TypeInfo;
  }
  v26 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 32LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ShopMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)list + 23);
    v26 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(v26, v27, Method_ShopMaster___c__GetEventEntitiyList_b__4_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ShopEntity__o *)v26;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)v26, v29, v30);
  }
  if ( !v14 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_57390740(
    v14,
    v26,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v14,
                               (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ShopMaster__GetEventItemList(
        ShopMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v24; // x19
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  Il2CppObject *IsHideItem; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x23
  Il2CppClass *v40; // x8
  unsigned __int64 v41; // x26
  __int64 namespaze; // x25
  int32_t v43; // w24
  Il2CppClass *v44; // x8
  Il2CppClass *v45; // x8
  Il2CppObject *Entity; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  Il2CppObject *v49; // x1
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  System_Int32_array *v54; // x20
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  ShopMaster___c_c *v59; // x8
  System_Comparison_T__o *_9__12_0; // x20
  Il2CppObject *v61; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  __int64 v65; // x21
  unsigned __int64 v66; // x22
  __int64 v67; // x2

  if ( (byte_4B1D01E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__, v5);
    sub_1BCAFF8(&System_Comparison_ItemEntity__TypeInfo, v6);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v9);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, v10);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1BCAFF8(&int___TypeInfo, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity__Add__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v17);
    sub_1BCAFF8(&System_Collections_Generic_List_ItemEntity__TypeInfo, v18);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BCAFF8(&Method_ShopMaster___c__GetEventItemList_b__12_0__, v20);
    sub_1BCAFF8(&ShopMaster___c_TypeInfo, v21);
    byte_4B1D01E = 1;
  }
  if ( eventId < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_78;
  if ( !System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__) )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_78;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  v24 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v25);
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
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v33 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_20;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_20:
      v34 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0LL);
    }
    IsHideItem = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                   Enumerator,
                                   *(_QWORD *)(v34 + 8));
    v39 = IsHideItem;
    if ( !IsHideItem )
      sub_1BCB254(0LL, v36);
    if ( LODWORD(IsHideItem[1].monitor) == eventId )
    {
      v40 = IsHideItem[2].klass;
      if ( !v40 )
        sub_1BCB254(IsHideItem, v36);
      if ( (int)v40->_1.namespaze >= 1 )
      {
        v41 = 0LL;
        namespaze = (unsigned int)v40->_1.namespaze;
        while ( 1 )
        {
          if ( v41 >= LODWORD(v40->_1.namespaze) )
            sub_1BCB25C(IsHideItem, v36, v37);
          v37 = *((unsigned int *)&v40->_1.byval_arg.data + v41);
          if ( (int)v37 >= 1 )
          {
            IsHideItem = (Il2CppObject *)ShopMaster__IsHideItem((ShopMaster_o *)IsHideItem, eventId, v37, v38);
            if ( ((unsigned __int8)IsHideItem & 1) == 0 )
            {
              if ( !v24 )
                sub_1BCB254(IsHideItem, v36);
              if ( v24->fields._size < 1 )
              {
LABEL_38:
                v45 = v39[2].klass;
                if ( !v45 )
                  sub_1BCB254(IsHideItem, v36);
                if ( v41 >= LODWORD(v45->_1.namespaze) )
                  sub_1BCB25C(IsHideItem, v36, v37);
                if ( !MasterData_object )
                  sub_1BCB254(IsHideItem, v36);
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           *((_DWORD *)&v45->_1.byval_arg.data + v41),
                           (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                v49 = Entity;
                items = v24->fields._items;
                v51 = Method_System_Collections_Generic_List_ItemEntity__Add__;
                ++v24->fields._version;
                if ( !items )
                  sub_1BCB254(Entity, Entity);
                size = v24->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v24,
                    Entity,
                    *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                }
                else
                {
                  v53 = &items->obj.klass + size;
                  v24->fields._size = size + 1;
                  v53[4] = (Il2CppClass *)v49;
                  sub_1BCAF9C((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v49, v47, v48);
                }
              }
              else
              {
                v43 = 0;
                while ( 1 )
                {
                  IsHideItem = System_Collections_Generic_List_object___get_Item(
                                 v24,
                                 v43,
                                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
                  if ( !IsHideItem )
                    sub_1BCB254(0LL, v36);
                  v44 = v39[2].klass;
                  if ( !v44 )
                    sub_1BCB254(IsHideItem, v36);
                  if ( v41 >= LODWORD(v44->_1.namespaze) )
                    sub_1BCB25C(IsHideItem, v36, v37);
                  if ( LODWORD(IsHideItem[1].klass) == *((_DWORD *)&v44->_1.byval_arg.data + v41) )
                    break;
                  if ( ++v43 >= v24->fields._size )
                    goto LABEL_38;
                }
              }
            }
          }
          if ( ++v41 == namespaze )
            break;
          v40 = v39[2].klass;
          if ( !v40 )
            sub_1BCB254(IsHideItem, v36);
        }
      }
    }
  }
  v55 = Enumerator->klass;
  v56 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v57 = &v55->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      --v56;
      v57 += 4;
      if ( !v56 )
        goto LABEL_53;
    }
    v58 = (__int64)&v55->vtable[*v57].method;
  }
  else
  {
LABEL_53:
    v58 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(
                                                             Enumerator,
                                                             *(_QWORD *)(v58 + 8));
  v59 = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v59 = ShopMaster___c_TypeInfo;
  }
  _9__12_0 = (System_Comparison_T__o *)v59->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      v59 = ShopMaster___c_TypeInfo;
    }
    v61 = (Il2CppObject *)v59->static_fields->__9;
    _9__12_0 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_object____ctor(_9__12_0, v61, Method_ShopMaster___c__GetEventItemList_b__12_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_ItemEntity__o *)_9__12_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v63, v64);
  }
  if ( !v24 )
LABEL_78:
    sub_1BCB254(list, *(_QWORD *)&eventId);
  System_Collections_Generic_List_object___Sort_57390740(
    v24,
    _9__12_0,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v65 = (unsigned int)v24->fields._size;
  v54 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, (unsigned int)v65);
  if ( (int)v65 >= 1 )
  {
    v66 = 0LL;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v24,
                                                                 v66,
                                                                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !list || !v54 )
        break;
      if ( v66 >= v54->max_length )
        sub_1BCB25C(list, *(_QWORD *)&eventId, v67);
      v54->m_Items[++v66] = (int32_t)list->fields.items;
      if ( v65 == v66 )
        return v54;
    }
    goto LABEL_78;
  }
  return v54;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopMaster__GetEventShopBaseShopId(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ShopEntity_array *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  __int64 v10; // x2
  __int64 v11; // x8
  ShopEntity_o *v12; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1D023 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1D023 = 1;
  }
  entity = 0LL;
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (ShopEntity_array *)entity;
    if ( !entity )
      goto LABEL_15;
    if ( !EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)entity, 0LL) )
      goto LABEL_13;
  }
  Instance = ShopMaster__GetEnableEventEntitiyList(this, eventId, v9);
  if ( !Instance )
    return (int)Instance;
  v11 = *(_QWORD *)&Instance->max_length;
  if ( !v11 )
  {
LABEL_13:
    LODWORD(Instance) = 0;
    return (int)Instance;
  }
  if ( !(_DWORD)v11 )
    sub_1BCB25C(Instance, v8, v10);
  v12 = Instance->m_Items[0];
  if ( !v12 )
LABEL_15:
    sub_1BCB254(Instance, v8);
  LODWORD(Instance) = v12->fields.baseShopId;
  return (int)Instance;
}


int32_t __fastcall ShopMaster__GetFragmentCountToExchangeForStone(ShopMaster_o *this, const MethodInfo *method)
{
  ShopEntity_o *EntityOfFragmentsShop; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  struct System_Int32_array *prices; // x8
  __int64 v6; // x9

  EntityOfFragmentsShop = ShopMaster__GetEntityOfFragmentsShop(this, method);
  if ( EntityOfFragmentsShop )
  {
    prices = EntityOfFragmentsShop->fields.prices;
    if ( !prices )
      sub_1BCB254(EntityOfFragmentsShop, v3);
    v6 = *(_QWORD *)&prices->max_length;
    if ( v6 )
    {
      if ( !(_DWORD)v6 )
        sub_1BCB25C(EntityOfFragmentsShop, v3, v4);
      LODWORD(EntityOfFragmentsShop) = prices->m_Items[1];
    }
    else
    {
      LODWORD(EntityOfFragmentsShop) = 0;
    }
  }
  return (int)EntityOfFragmentsShop;
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetOpenedEventEntitiyList(
        ShopMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t Time; // x22
  System_Collections_Generic_List_object__o *v16; // x21
  __int64 v17; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v20; // w23
  int32_t v21; // w24
  ShopEntity_o *Item; // x0
  const MethodInfo *v23; // x2
  Il2CppObject *v24; // x25
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Comparison_T__o *v31; // x19
  Il2CppObject *v32; // x20
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3

  if ( (byte_4B1D017 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__, v5);
    sub_1BCAFF8(&System_Comparison_ShopEntity__TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_ShopEntity__TypeInfo, v11);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v12);
    sub_1BCAFF8(&Method_ShopMaster___c__GetOpenedEventEntitiyList_b__5_0__, v13);
    sub_1BCAFF8(&ShopMaster___c_TypeInfo, v14);
    byte_4B1D017 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)list,
                               v21,
                               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( Item )
      {
        v24 = (Il2CppObject *)Item;
        if ( Item->fields.eventId == eventId )
        {
          list = (void *)ShopEntity__IsOpened(Item, Time, v23);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v16 )
              break;
            items = v16->fields._items;
            v28 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v16->fields._version;
            if ( !items )
              break;
            size = v16->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                v24,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v16->fields._size = size + 1;
              v30[4] = (Il2CppClass *)v24;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v24, v25, v26);
            }
          }
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_18;
    }
LABEL_26:
    sub_1BCB254(list, v17);
  }
LABEL_18:
  list = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    list = ShopMaster___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 40LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ShopMaster___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)list + 23);
    v31 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(v31, v32, Method_ShopMaster___c__GetOpenedEventEntitiyList_b__5_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_ShopEntity__o *)v31;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)v31, v34, v35);
  }
  if ( !v16 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_57390740(
    v16,
    v31,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v16,
                               (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__IsEnableEventShop(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  bool v10; // w24

  if ( (byte_4B1D025 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__, v5);
    byte_4B1D025 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    v10 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( !list )
        break;
      if ( LODWORD(list[1].klass) != eventId )
      {
        v10 = ++v9 < v8;
        if ( v8 != v9 )
          continue;
      }
      return v10;
    }
LABEL_13:
    sub_1BCB254(list, *(_QWORD *)&eventId);
  }
  return 0;
}


bool __fastcall ShopMaster__IsEnableEventShop_42012728(ShopMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t Time; // x21
  Il2CppObject *Master_object; // x22
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  UserShopMaster_o *v14; // x23
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int i; // w26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  ShopEntity_o *v26; // x0
  const MethodInfo *v27; // x2
  ShopEntity_o *v28; // x24
  __int64 v29; // x1
  NetworkManager_c *v30; // x0
  UserShopEntity_o *EntityDefinitely; // x0
  __int64 v32; // x1
  char v33; // w21
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_4B1D028 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ShopReleaseMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserShopMaster___, v4);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v6);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, v7);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    byte_4B1D028 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !this->fields.list )
    sub_1BCB254(v12, v13);
  v14 = (UserShopMaster_o *)v12;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v15);
  for ( i = 0; ; i |= ShopReleaseMaster__CondClearCheck((ShopReleaseMaster_o *)Master_object, v28->fields.id, 1, 0LL) )
  {
    do
    {
      klass = Enumerator->klass;
      v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v19;
          p_offset += 4;
          if ( !v19 )
            goto LABEL_14;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_14:
        p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
      {
        v33 = 1;
        goto LABEL_38;
      }
      v22 = Enumerator->klass;
      v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v24 = &v22->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
        {
          --v23;
          v24 += 4;
          if ( !v23 )
            goto LABEL_21;
        }
        v25 = (__int64)&v22->vtable[*v24].method;
      }
      else
      {
LABEL_21:
        v25 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0LL);
      }
      v26 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                              Enumerator,
                              *(_QWORD *)(v25 + 8));
      v28 = v26;
    }
    while ( !v26 || v26->fields.shopType != 12 || !ShopEntity__IsEnable(v26, Time, v27) );
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, v29);
      byte_4B165D1 = 1;
    }
    v30 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v30 = NetworkManager_TypeInfo;
    }
    if ( !v14 )
      sub_1BCB254(v30, v29);
    EntityDefinitely = UserShopMaster__GetEntityDefinitely(v14, v30->static_fields->userIdNumber, v28->fields.id, 0LL);
    if ( EntityDefinitely )
    {
      if ( EntityDefinitely->fields.num >= v28->fields.limitNum )
        break;
    }
    if ( !Master_object )
      sub_1BCB254(EntityDefinitely, v32);
  }
  v33 = 0;
LABEL_38:
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
        goto LABEL_42;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_42:
    v37 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return i & v33;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__IsEventCloseWithItemPurchase(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  System_Collections_Generic_Dictionary_int__int__o *v20; // x21
  int32_t v21; // w22
  DataManager_o *v22; // x24
  Il2CppObject *MasterData_object; // x25
  int m_CancellationTokenSource_high; // w25
  bool v25; // w0
  int32_t v26; // w1
  int32_t v27; // w8
  const MethodInfo_331882C *v28; // x3
  int32_t v29; // w2
  unsigned int Count; // w0
  System_Int32_array *v31; // x19
  __int64 v32; // x2
  int max_length; // w8
  unsigned int v34; // w10
  int v35; // w11
  int32_t value; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B1D024 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserShopMaster___, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v12);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_1BCAFF8(&int___TypeInfo, v14);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v15);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__int__CopyTo__, v17);
    byte_4B1D024 = 1;
  }
  value = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v20 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v20,
    (const MethodInfo_3317E68 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_27;
  v21 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                  (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    if ( v21 >= (int)Instance )
      break;
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                  v21,
                                  (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    if ( !Instance )
      goto LABEL_27;
    v22 = Instance;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) == eventId )
    {
      value = 0;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_27;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v19);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        goto LABEL_27;
      Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                    (UserShopMaster_o *)MasterData_object,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    v22->fields.m_CachedPtr,
                                    0LL);
      if ( !Instance || !v20 )
        goto LABEL_27;
      m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
      v25 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
              v20,
              *((_DWORD *)&v22->fields.UnityEngine_Behaviour_Fields + 1),
              &value,
              (const MethodInfo_3319EC4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
      v26 = *((_DWORD *)&v22->fields.UnityEngine_Behaviour_Fields + 1);
      if ( v25 )
      {
        System_Collections_Generic_Dictionary_int__int___Remove(
          v20,
          v26,
          (const MethodInfo_3319BE4 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
        v27 = value;
        if ( (value & 0x80000000) != 0 )
        {
          v27 = -value;
          value = -value;
        }
        v26 = *((_DWORD *)&v22->fields.UnityEngine_Behaviour_Fields + 1);
        v28 = (const MethodInfo_331882C *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v29 = v27 + m_CancellationTokenSource_high;
      }
      else
      {
        v28 = (const MethodInfo_331882C *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v29 = -m_CancellationTokenSource_high;
      }
      System_Collections_Generic_Dictionary_int__int___Add(v20, v26, v29, v28);
    }
    Instance = (DataManager_o *)this->fields.list;
    ++v21;
    if ( !Instance )
      goto LABEL_27;
  }
  if ( !v20 )
    goto LABEL_27;
  if ( !System_Collections_Generic_Dictionary_int__int___get_Count(
          v20,
          (const MethodInfo_33184E0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) )
  {
LABEL_39:
    LOBYTE(Instance) = 1;
    return (char)Instance;
  }
  Count = System_Collections_Generic_Dictionary_int__int___get_Count(
            v20,
            (const MethodInfo_33184E0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
  v31 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, Count);
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__int___get_Values(
                                v20,
                                (const MethodInfo_3318640 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
  if ( !Instance
    || (System_Collections_Generic_Dictionary_ValueCollection_int__int___CopyTo(
          (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
          v31,
          0,
          (const MethodInfo_39E1240 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__int__CopyTo__),
        !v31) )
  {
LABEL_27:
    sub_1BCB254(Instance, v19);
  }
  max_length = v31->max_length;
  if ( max_length < 1 )
    goto LABEL_39;
  v34 = 0;
  do
  {
    if ( v34 >= max_length )
      sub_1BCB25C(Instance, v19, v32);
    v35 = v31->m_Items[v34 + 1];
    Instance = (DataManager_o *)(v35 > 0);
    if ( v35 < 1 )
      break;
  }
  while ( max_length - 1 != v34++ );
  return (char)Instance;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__IsEventShopOpen(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  _BOOL4 v19; // w21
  Il2CppObject *v20; // x20
  _BOOL4 v21; // w20
  const MethodInfo *v23; // x2
  int v24; // w8
  ShopMaster___c__DisplayClass25_0_o *v25; // x20
  const MethodInfo *v26; // x2
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x21
  System_Func_object__bool__o *v28; // x22
  Il2CppObject *v29; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-50h] BYREF
  int64_t closedAt; // [xsp+18h] [xbp-48h] BYREF
  int64_t openedAt; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4B1D029 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_1BCAFF8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_All_ShopEntity___, v9);
    sub_1BCAFF8(&System_Func_ShopEntity__bool__TypeInfo, v10);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BCAFF8(&TitleInfoControl_TypeInfo, v13);
    sub_1BCAFF8(&Method_ShopMaster___c__DisplayClass25_0__IsEventShopOpen_b__0__, v14);
    sub_1BCAFF8(&ShopMaster___c__DisplayClass25_0_TypeInfo, v15);
    byte_4B1D029 = 1;
  }
  openedAt = 0LL;
  entity = 0LL;
  closedAt = 0LL;
  v29 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_39;
  ShopMaster__GetEnableEventPeriod((ShopMaster_o *)Instance, &openedAt, &closedAt, eventId, v18);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( closedAt < 1 )
    goto LABEL_12;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_39;
  if ( EventEntity__isPurchaseEventOpen((EventEntity_o *)entity, 0LL) )
  {
LABEL_12:
    v19 = 0;
  }
  else
  {
    v25 = (ShopMaster___c__DisplayClass25_0_o *)sub_1BCB244(ShopMaster___c__DisplayClass25_0_TypeInfo);
    ShopMaster___c__DisplayClass25_0___ctor(v25, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopMaster___);
    if ( !Instance )
      goto LABEL_39;
    EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                              (ShopMaster_o *)Instance,
                                                                              eventId,
                                                                              v26);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager__getTime(0LL);
    if ( !v25 )
      goto LABEL_39;
    v25->fields.nowTime = (int64_t)Instance;
    if ( !entity )
      goto LABEL_39;
    if ( (__int64)Instance <= (__int64)entity[6].monitor )
    {
      v28 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_ShopEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v28,
        (Il2CppObject *)v25,
        Method_ShopMaster___c__DisplayClass25_0__IsEventShopOpen_b__0__,
        0LL);
      v19 = System_Linq_Enumerable__All_object_(
              EventEntitiyList,
              (System_Func_TSource__bool__o *)v28,
              (const MethodInfo_3024F54 *)Method_System_Linq_Enumerable_All_ShopEntity___);
    }
    else
    {
      v19 = 1;
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v29,
          eventId,
          (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_22;
  Instance = (DataManager_o *)v29;
  if ( !v29 )
    goto LABEL_39;
  if ( EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)v29, 0LL) )
  {
    v20 = v29;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
    v21 = !TitleInfoControl__IsEnableEventShopButton_39104492((EventDetailEntity_o *)v20, 0LL);
  }
  else
  {
LABEL_22:
    v21 = 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
LABEL_39:
    sub_1BCB254(Instance, v17);
  }
  v24 = ShopMaster__CloseLimitEventShop((ShopMaster_o *)Instance, eventId, v23) || v21;
  return (v24 | v19) == 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__IsHideItem(ShopMaster_o *this, int32_t eventId, int32_t id, const MethodInfo *method)
{
  __int64 v6; // x1
  EventItemDisplayEntity_array *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int max_length; // w8
  __int64 v11; // x9
  EventItemDisplayEntity_o *v12; // x11

  if ( (byte_4B1D01F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventItemDisplayMaster___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1D01F = 1;
  }
  Instance = (EventItemDisplayEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventItemDisplayEntity_array *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventItemDisplayMaster___)) == 0LL )
  {
LABEL_15:
    sub_1BCB254(Instance, v8);
  }
  Instance = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
               (EventItemDisplayMaster_o *)Instance,
               eventId,
               8,
               0,
               0LL);
  if ( !Instance )
    return 1;
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 1;
  v11 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v11 >= max_length )
      sub_1BCB25C(Instance, v8, v9);
    v12 = Instance->m_Items[v11];
    if ( !v12 )
      goto LABEL_15;
    if ( v12->fields.targetId == id && v12->fields.pointType == 1 )
      return 0;
    if ( (int)++v11 >= max_length )
      return 1;
  }
}


bool __fastcall ShopMaster__IsOpenPurchaseCloseShop(
        ShopMaster_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  ShopMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t eventId; // w21
  Il2CppObject *Entity; // x0

  v4 = this;
  if ( (byte_4B1D020 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventDetailMaster___, shopEntity);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    this = (ShopMaster_o *)sub_1BCAFF8(
                             &Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__,
                             v6);
    byte_4B1D020 = 1;
  }
  if ( !shopEntity )
    goto LABEL_13;
  eventId = shopEntity->fields.eventId;
  if ( eventId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ShopMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( this )
    {
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 eventId,
                 (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( Entity && EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)Entity, 0LL) )
        return ShopMaster__IsPurchaseCloseEventShopItem(v4, shopEntity->fields.baseShopId, method);
      return 0;
    }
LABEL_13:
    sub_1BCB254(this, shopEntity);
  }
  if ( shopEntity->fields.shopType != 16 )
    return ShopMaster__IsPurchaseCloseEventShopItem(v4, shopEntity->fields.baseShopId, method);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__IsPurchaseCloseEventShopItem(
        ShopMaster_o *this,
        int32_t baseShopId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w22
  int32_t v14; // w23
  System_Collections_ObjectModel_Collection_T__o *v15; // x20
  ShopReleaseMaster_o *v17; // x21
  int32_t TargetShopGroupId; // w22
  const MethodInfo *v19; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  Il2CppObject *MasterData_object; // x21
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4B1D022 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__, *(_QWORD *)&baseShopId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopGroupMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserShopMaster___, v8);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B1D022 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count < 1 )
    return 1;
  v13 = Count;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_29;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v14,
                                                               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    if ( !list )
      goto LABEL_29;
    v15 = list;
    if ( HIDWORD(list->fields.items) == baseShopId )
      break;
    if ( v13 == ++v14 )
      return 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_29;
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)list,
                                                             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
  if ( !list )
    goto LABEL_29;
  v17 = (ShopReleaseMaster_o *)list;
  TargetShopGroupId = ShopReleaseMaster__GetTargetShopGroupId((ShopReleaseMaster_o *)list, baseShopId, 0LL);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_29;
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)list,
                                                             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !list )
    goto LABEL_29;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)list, TargetShopGroupId, v19);
  if ( TargetEntityList && *(_QWORD *)&TargetEntityList->max_length )
    return ShopReleaseMaster__CondClearCheck(v17, baseShopId, 82, 0LL);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&baseShopId);
    byte_4B165D1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_29:
    sub_1BCB254(list, *(_QWORD *)&baseShopId);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       (int64_t)list[7].fields.items[4].klass,
                       baseShopId,
                       0LL);
  return EntityDefinitely && EntityDefinitely->fields.num >= SLODWORD(v15[3].fields.items);
}


bool __fastcall ShopMaster__PurchaseCloseEventShop(
        ShopMaster_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t eventId; // w20
  Il2CppObject *Entity; // x0

  if ( (byte_4B1D021 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventDetailMaster___, shopEntity);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    this = (ShopMaster_o *)sub_1BCAFF8(
                             &Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__,
                             v5);
    byte_4B1D021 = 1;
  }
  if ( !shopEntity )
    goto LABEL_11;
  eventId = shopEntity->fields.eventId;
  if ( !eventId )
    return shopEntity->fields.shopType == 12;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ShopMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !this )
LABEL_11:
    sub_1BCB254(this, shopEntity);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             eventId,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
    return EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)Entity, 0LL);
  return shopEntity->fields.shopType == 12;
}


void __fastcall ShopMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1D02B & 1) == 0 )
  {
    sub_1BCAFF8(&ShopMaster___c_TypeInfo, v1);
    byte_4B1D02B = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ShopMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ShopMaster___c_TypeInfo->static_fields->__9 = (struct ShopMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)ShopMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ShopMaster___c___ctor(ShopMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ShopMaster___c___GetEnableEntitiyList_b__1_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCB254(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEntitiyList_b__2_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCB254(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEntitiyList_b__3_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCB254(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEventEntitiyList_b__6_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCB254(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEventEntityList_b__7_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCB254(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableExchangeSvtCoinEntitiyList_b__8_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCB254(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEventEntitiyList_b__4_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCB254(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEventItemList_b__12_0(
        ShopMaster___c_o *this,
        ItemEntity_o *a,
        ItemEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCB254(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetOpenedEventEntitiyList_b__5_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCB254(this, a);
  return a->fields.priority - b->fields.priority;
}


void __fastcall ShopMaster___c__DisplayClass25_0___ctor(
        ShopMaster___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopMaster___c__DisplayClass25_0___IsEventShopOpen_b__0(
        ShopMaster___c__DisplayClass25_0_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.closedAt < this->fields.nowTime;
}