void __fastcall ShopMaster___ctor(ShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCCE6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ShopMaster__ShopEntity__int___ctor__, method);
    byte_49FCCE6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    43,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_ShopMaster__ShopEntity__int___ctor__);
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_int__o *v13; // x0

  if ( (byte_49FCCEF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FCCEF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        v13 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v11,
                                                          v12),
        System_Collections_Generic_List_int____ctor(
          v13,
          (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__),
        (list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)list,
                                                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (list = (System_Collections_ObjectModel_Collection_T__o *)DataMasterBase_object__object__int___GetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)list,
                                                                   eventId,
                                                                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B64324(list);
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
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  bool v13; // w26
  __int64 methodPtr_low; // x10

  if ( (byte_49FCCFA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&ShopEntity_TypeInfo, v8);
    byte_49FCCFA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list[1].klass) != eventId || HIDWORD(list[2].fields.items) != payType )
      {
        v13 = ++v12 < v11;
        if ( v11 != v12 )
          continue;
      }
      return v13;
    }
LABEL_16:
    sub_1B64324(list);
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
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  int64_t v22; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  ShopEntity_o *v35; // x0
  const MethodInfo *v36; // x2
  ShopEntity_o *v37; // x24
  __int64 methodPtr_low; // x9
  const MethodInfo *v39; // x1
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  ShopMaster___c_c *v53; // x8
  System_Comparison_T__o *_9__1_0; // x20
  Il2CppObject *v55; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v57; // w2
  int32_t v58; // w3

  if ( (byte_49FCCE7 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&purchaseType);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1B640C8(&System_Comparison_ShopEntity__TypeInfo, v8);
    sub_1B640C8(&System_IDisposable_TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v15);
    sub_1B640C8(&System_Collections_Generic_List_ShopEntity__TypeInfo, v16);
    sub_1B640C8(&NetworkManager_TypeInfo, v17);
    sub_1B640C8(&ShopEntity_TypeInfo, v18);
    sub_1B640C8(&Method_ShopMaster___c__GetEnableEntitiyList_b__1_0__, v19);
    sub_1B640C8(&ShopMaster___c_TypeInfo, v20);
    byte_49FCCE7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_50;
  v22 = (int64_t)Time;
  System_Collections_ObjectModel_Collection_object___get_Count(
    (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
    (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v25 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       v23,
                                                       v24);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Time )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_19;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_19:
      v34 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                            Enumerator,
                            *(_QWORD *)(v34 + 8));
    v37 = v35;
    if ( v35 )
    {
      methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v35->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopEntity_c *)v35->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
      {
        sub_1B645E4(v35);
        goto LABEL_50;
      }
      if ( !v35->fields.eventId
        && (purchaseType < 1 || v35->fields.purchaseType == purchaseType)
        && v35->fields.shopType == shopType
        && ShopEntity__IsEnable(v35, v22, v36) )
      {
        IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v37, v39);
        if ( !IsHiddenInCaseOfBuying )
        {
          if ( !v25 )
            sub_1B64324(IsHiddenInCaseOfBuying);
          items = v25->fields._items;
          v44 = Method_System_Collections_Generic_List_ShopEntity__Add__;
          ++v25->fields._version;
          if ( !items )
            sub_1B64324(IsHiddenInCaseOfBuying);
          size = v25->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)v37,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &items->obj.klass + size;
            v25->fields._size = size + 1;
            v46[4] = (Il2CppClass *)v37;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v37, v41, v42);
          }
        }
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
    v50 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Time = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(
                                                             Enumerator,
                                                             *(_QWORD *)(v50 + 8));
  v53 = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v53 = ShopMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Comparison_T__o *)v53->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v53 = ShopMaster___c_TypeInfo;
    }
    v55 = (Il2CppObject *)v53->static_fields->__9;
    _9__1_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ShopEntity__TypeInfo, v51, v52);
    System_Comparison_object____ctor(_9__1_0, v55, Method_ShopMaster___c__GetEnableEntitiyList_b__1_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_ShopEntity__o *)_9__1_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v57, v58);
  }
  if ( !v25 )
LABEL_50:
    sub_1B64324(Time);
  System_Collections_Generic_List_object___Sort_55243320(
    v25,
    _9__1_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v25,
                               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEntitiyList_39496940(
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
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  int64_t v24; // x25
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *v27; // x19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  ShopEntity_o *v37; // x0
  const MethodInfo *v38; // x2
  ShopEntity_o *v39; // x26
  __int64 methodPtr_low; // x9
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x2
  _BOOL8 IsOpenPurchaseCloseShop; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  ShopMaster___c_c *v56; // x8
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v58; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v60; // w2
  int32_t v61; // w3

  if ( (byte_49FCCE8 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&purchaseType);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9);
    sub_1B640C8(&System_Comparison_ShopEntity__TypeInfo, v10);
    sub_1B640C8(&System_IDisposable_TypeInfo, v11);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v17);
    sub_1B640C8(&System_Collections_Generic_List_ShopEntity__TypeInfo, v18);
    sub_1B640C8(&NetworkManager_TypeInfo, v19);
    sub_1B640C8(&ShopEntity_TypeInfo, v20);
    sub_1B640C8(&Method_ShopMaster___c__GetEnableEntitiyList_b__2_0__, v21);
    sub_1B640C8(&ShopMaster___c_TypeInfo, v22);
    byte_49FCCE8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_51;
  v24 = (int64_t)Time;
  System_Collections_ObjectModel_Collection_object___get_Count(
    (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
    (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v27 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       v25,
                                                       v26);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Time )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        p_offset += 4;
        if ( !v30 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v33 = Enumerator->klass;
    v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v35 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_19;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_19:
      v36 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v37 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                            Enumerator,
                            *(_QWORD *)(v36 + 8));
    v39 = v37;
    if ( v37 )
    {
      methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v37->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopEntity_c *)v37->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
      {
        sub_1B645E4(v37);
        goto LABEL_51;
      }
      if ( (v37->fields.flag & flag) != 0
        && (purchaseType < 1 || v37->fields.purchaseType == purchaseType)
        && v37->fields.shopType == shopType
        && ShopEntity__IsEnable(v37, v24, v38)
        && !ShopEntity__IsHiddenInCaseOfBuying(v39, v41) )
      {
        IsOpenPurchaseCloseShop = ShopMaster__IsOpenPurchaseCloseShop(this, v39, v42);
        if ( !IsOpenPurchaseCloseShop )
        {
          if ( !v27 )
            sub_1B64324(IsOpenPurchaseCloseShop);
          items = v27->fields._items;
          v47 = Method_System_Collections_Generic_List_ShopEntity__Add__;
          ++v27->fields._version;
          if ( !items )
            sub_1B64324(IsOpenPurchaseCloseShop);
          size = v27->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v27,
              (Il2CppObject *)v39,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            v49 = &items->obj.klass + size;
            v27->fields._size = size + 1;
            v49[4] = (Il2CppClass *)v39;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 4), (int32_t)v39, v44, v45);
          }
        }
      }
    }
  }
  v50 = Enumerator->klass;
  v51 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      --v51;
      v52 += 4;
      if ( !v51 )
        goto LABEL_40;
    }
    v53 = (__int64)&v50->vtable[*v52].method;
  }
  else
  {
LABEL_40:
    v53 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Time = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(
                                                             Enumerator,
                                                             *(_QWORD *)(v53 + 8));
  v56 = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v56 = ShopMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Comparison_T__o *)v56->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      v56 = ShopMaster___c_TypeInfo;
    }
    v58 = (Il2CppObject *)v56->static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ShopEntity__TypeInfo, v54, v55);
    System_Comparison_object____ctor(_9__2_0, v58, Method_ShopMaster___c__GetEnableEntitiyList_b__2_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_ShopEntity__o *)_9__2_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v60, v61);
  }
  if ( !v27 )
LABEL_51:
    sub_1B64324(Time);
  System_Collections_Generic_List_object___Sort_55243320(
    v27,
    _9__2_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v27,
                               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEntitiyList_39498592(
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
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  int64_t v22; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  ShopEntity_o *v35; // x0
  const MethodInfo *v36; // x2
  ShopEntity_o *v37; // x24
  __int64 methodPtr_low; // x9
  const MethodInfo *v39; // x1
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  ShopMaster___c_c *v53; // x8
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v55; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v57; // w2
  int32_t v58; // w3

  if ( (byte_49FCCE9 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&purchaseType);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1B640C8(&System_Comparison_ShopEntity__TypeInfo, v8);
    sub_1B640C8(&System_IDisposable_TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v15);
    sub_1B640C8(&System_Collections_Generic_List_ShopEntity__TypeInfo, v16);
    sub_1B640C8(&NetworkManager_TypeInfo, v17);
    sub_1B640C8(&ShopEntity_TypeInfo, v18);
    sub_1B640C8(&Method_ShopMaster___c__GetEnableEntitiyList_b__3_0__, v19);
    sub_1B640C8(&ShopMaster___c_TypeInfo, v20);
    byte_49FCCE9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_50;
  v22 = (int64_t)Time;
  System_Collections_ObjectModel_Collection_object___get_Count(
    (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
    (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v25 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       v23,
                                                       v24);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Time )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_19;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_19:
      v34 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                            Enumerator,
                            *(_QWORD *)(v34 + 8));
    v37 = v35;
    if ( v35 )
    {
      methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v35->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopEntity_c *)v35->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
      {
        sub_1B645E4(v35);
        goto LABEL_50;
      }
      if ( !v35->fields.eventId
        && (purchaseType < 1 || v35->fields.purchaseType == purchaseType)
        && v35->fields.payType == payType
        && ShopEntity__IsEnable(v35, v22, v36) )
      {
        IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v37, v39);
        if ( !IsHiddenInCaseOfBuying )
        {
          if ( !v25 )
            sub_1B64324(IsHiddenInCaseOfBuying);
          items = v25->fields._items;
          v44 = Method_System_Collections_Generic_List_ShopEntity__Add__;
          ++v25->fields._version;
          if ( !items )
            sub_1B64324(IsHiddenInCaseOfBuying);
          size = v25->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)v37,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &items->obj.klass + size;
            v25->fields._size = size + 1;
            v46[4] = (Il2CppClass *)v37;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v37, v41, v42);
          }
        }
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
    v50 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Time = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(
                                                             Enumerator,
                                                             *(_QWORD *)(v50 + 8));
  v53 = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v53 = ShopMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v53->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v53 = ShopMaster___c_TypeInfo;
    }
    v55 = (Il2CppObject *)v53->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ShopEntity__TypeInfo, v51, v52);
    System_Comparison_object____ctor(_9__3_0, v55, Method_ShopMaster___c__GetEnableEntitiyList_b__3_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ShopEntity__o *)_9__3_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v57, v58);
  }
  if ( !v25 )
LABEL_50:
    sub_1B64324(Time);
  System_Collections_Generic_List_object___Sort_55243320(
    v25,
    _9__3_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v25,
                               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  __int64 v15; // x1
  int64_t Time; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x21
  void *list; // x0
  int32_t Count; // w0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  int32_t v24; // w23
  int32_t v25; // w24
  ShopEntity_o *Item; // x0
  Il2CppObject *v27; // x25
  __int64 methodPtr_low; // x10
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Comparison_T__o *v34; // x19
  Il2CppObject *v35; // x20
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3

  if ( (byte_49FCCEC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&System_Comparison_ShopEntity__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_ShopEntity__TypeInfo, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    sub_1B640C8(&ShopEntity_TypeInfo, v13);
    sub_1B640C8(&Method_ShopMaster___c__GetEnableEventEntitiyList_b__6_0__, v14);
    sub_1B640C8(&ShopMaster___c_TypeInfo, v15);
    byte_49FCCEC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    v25 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)list,
                               v25,
                               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v27 = (Il2CppObject *)Item;
        methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopEntity_TypeInfo
          && Item->fields.eventId == eventId )
        {
          list = (void *)ShopEntity__IsEnable(Item, Time, v23);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v19 )
              break;
            items = v19->fields._items;
            v31 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v19->fields._version;
            if ( !items )
              break;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                v27,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v33[4] = (Il2CppClass *)v27;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v27, (int32_t)v23, v29);
            }
          }
        }
      }
      if ( v24 == ++v25 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1B64324(list);
  }
LABEL_20:
  list = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    list = ShopMaster___c_TypeInfo;
  }
  v34 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 48LL);
  if ( !v34 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ShopMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)**((_QWORD **)list + 23);
    v34 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ShopEntity__TypeInfo, v22, v23);
    System_Comparison_object____ctor(v34, v35, Method_ShopMaster___c__GetEnableEventEntitiyList_b__6_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_ShopEntity__o *)v34;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)v34, v37, v38);
  }
  if ( !v19 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_55243320(
    v19,
    v34,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v19,
                               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  __int64 v17; // x1
  int64_t Time; // x23
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x22
  void *list; // x0
  int32_t Count; // w0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  int32_t v26; // w24
  int32_t v27; // w25
  Il2CppObject *Item; // x0
  ShopEntity_o *v29; // x26
  __int64 methodPtr_low; // x10
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Comparison_T__o *v36; // x19
  Il2CppObject *v37; // x20
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3

  if ( (byte_49FCCED & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&System_Comparison_ShopEntity__TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_ShopEntity__TypeInfo, v13);
    sub_1B640C8(&NetworkManager_TypeInfo, v14);
    sub_1B640C8(&ShopEntity_TypeInfo, v15);
    sub_1B640C8(&Method_ShopMaster___c__GetEnableEventEntityList_b__7_0__, v16);
    sub_1B640C8(&ShopMaster___c_TypeInfo, v17);
    byte_49FCCED = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v26 = Count;
    v27 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v27,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v29 = (ShopEntity_o *)Item;
        methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopEntity_TypeInfo
          && LODWORD(Item[1].monitor) == eventId
          && LODWORD(Item[2].monitor) == slot
          && ShopEntity__IsEnable((ShopEntity_o *)Item, Time, v25) )
        {
          list = (void *)ShopEntity__IsHiddenInCaseOfBuyingShopId(v29, v24);
          if ( ((unsigned __int8)list & 1) == 0 )
          {
            if ( !v21 )
              break;
            items = v21->fields._items;
            v33 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v21->fields._version;
            if ( !items )
              break;
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v21,
                (Il2CppObject *)v29,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v35 = &items->obj.klass + size;
              v21->fields._size = size + 1;
              v35[4] = (Il2CppClass *)v29;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v29, (int32_t)v25, v31);
            }
          }
        }
      }
      if ( v26 == ++v27 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1B64324(list);
  }
LABEL_22:
  list = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    list = ShopMaster___c_TypeInfo;
  }
  v36 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 56LL);
  if ( !v36 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ShopMaster___c_TypeInfo;
    }
    v37 = (Il2CppObject *)**((_QWORD **)list + 23);
    v36 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ShopEntity__TypeInfo, v24, v25);
    System_Comparison_object____ctor(v36, v37, Method_ShopMaster___c__GetEnableEventEntityList_b__7_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_ShopEntity__o *)v36;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)v36, v39, v40);
  }
  if ( !v21 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_55243320(
    v21,
    v36,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v21,
                               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  System_Collections_ObjectModel_Collection_T__o *v13; // x23
  int32_t Count; // w0
  int32_t v15; // w24
  int32_t v16; // w25
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  int64_t klass; // x8
  int64_t monitor; // x8

  if ( (byte_49FCCF0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, openedAt);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&ShopEntity_TypeInfo, v11);
    byte_49FCCF0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  *openedAt = -1LL;
  *closedAt = -1LL;
  if ( !this->fields.list )
    goto LABEL_25;
  v13 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopEntity_TypeInfo
          && LODWORD(Item[1].monitor) == eventId )
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
LABEL_25:
    sub_1B64324(Time);
  }
  return (*openedAt & 0x8000000000000000LL) == 0 && *closedAt >= 0;
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
  __int64 v16; // x1
  int64_t Time; // x22
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x23
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_int__o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_int__o *v25; // x20
  int32_t Count; // w0
  int32_t v27; // w24
  int32_t i; // w25
  ShopEntity_o *Item; // x0
  const MethodInfo *v30; // x2
  ShopEntity_o *v31; // x26
  __int64 methodPtr_low; // x10
  __int64 v33; // x8
  const MethodInfo *v34; // x2
  int32_t baseShopId; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  char *v39; // x8
  struct System_Int32_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  System_Collections_Generic_List_int__o *v44; // x0
  int v45; // w24
  int32_t v46; // w22
  int32_t v47; // w23
  const MethodInfo *v48; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FCCEE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Sort__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B640C8(&NetworkManager_TypeInfo, v14);
    sub_1B640C8(&ShopEntity_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49FCCEE = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  v22 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v20, v21);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v25 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v23, v24);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_50;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v27 = Count;
    for ( i = 0; v27 != i; ++i )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_50;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)Instance,
                               i,
                               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v31 = Item;
        methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopEntity_TypeInfo )
        {
          if ( Item->fields.eventId )
          {
            Instance = (void *)ShopEntity__IsEnable(Item, Time, v30);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !MasterData_object )
                goto LABEL_50;
              Instance = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           v31->fields.eventId,
                           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
              if ( !Instance )
                goto LABEL_50;
              v33 = *((_QWORD *)Instance + 13);
              if ( v33 >= 1 && v33 >= Time && *((_QWORD *)Instance + 11) <= Time )
              {
                if ( !v22 )
                  goto LABEL_50;
                if ( !System_Collections_Generic_List_int___Contains(
                        v22,
                        v31->fields.baseShopId,
                        (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__) )
                {
                  Instance = (void *)ShopMaster__CheckBuyAfterCloseShop(this, v31->fields.eventId, v34);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    baseShopId = v31->fields.baseShopId;
                    items = v22->fields._items;
                    v37 = Method_System_Collections_Generic_List_int__Add__;
                    ++v22->fields._version;
                    if ( !items )
                      goto LABEL_50;
                    size = v22->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      v43 = v37[4];
                      v44 = v22;
LABEL_36:
                      System_Collections_Generic_List_int___AddWithResize(
                        v44,
                        baseShopId,
                        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v43 + 192) + 112LL));
                      continue;
                    }
                    v39 = (char *)items + 4 * size;
                    v22->fields._size = size + 1;
LABEL_33:
                    *((_DWORD *)v39 + 8) = baseShopId;
                    continue;
                  }
                  if ( !v25 )
                    goto LABEL_50;
                  Instance = (void *)System_Collections_Generic_List_int___Contains(
                                       v25,
                                       v31->fields.eventId,
                                       (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( ((unsigned __int8)Instance & 1) == 0 )
                  {
                    baseShopId = v31->fields.eventId;
                    v40 = v25->fields._items;
                    v41 = Method_System_Collections_Generic_List_int__Add__;
                    ++v25->fields._version;
                    if ( !v40 )
                      goto LABEL_50;
                    v42 = v25->fields._size;
                    if ( (unsigned int)v42 >= v40->max_length )
                    {
                      v43 = v41[4];
                      v44 = v25;
                      goto LABEL_36;
                    }
                    v39 = (char *)v40 + 4 * v42;
                    v25->fields._size = v42 + 1;
                    goto LABEL_33;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v22 )
  {
    v45 = v22->fields._size;
    if ( v45 >= 1 )
    {
      v46 = 0;
      while ( 1 )
      {
        v47 = System_Collections_Generic_List_int___get_Item(
                v22,
                v46,
                (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !ShopMaster__IsPurchaseCloseEventShopItem(this, v47, v48) )
        {
          Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               &entity,
                               v47,
                               (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            break;
        }
        if ( v45 == ++v46 )
          goto LABEL_43;
      }
      if ( entity )
        return (int32_t)entity[1].monitor;
LABEL_50:
      sub_1B64324(Instance);
    }
  }
LABEL_43:
  if ( !v25 || v25->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_int___Sort(
    v25,
    (const MethodInfo_34918C0 *)Method_System_Collections_Generic_List_int__Sort__);
  return System_Collections_Generic_List_int___get_Item(
           v25,
           0,
           (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
}


ShopEntity_o *__fastcall ShopMaster__GetEntityOfFragmentsShop(ShopMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  ShopEntity_o *v17; // x0
  ShopEntity_o *v18; // x21
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0

  if ( (byte_49FCCF9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B640C8(&System_IDisposable_TypeInfo, v3);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v4);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1B640C8(&ShopEntity_TypeInfo, v6);
    byte_49FCCF9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v16 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                            Enumerator,
                            *(_QWORD *)(v16 + 8));
    v18 = v17;
    if ( !v17 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v17->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ShopEntity_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
    {
      sub_1B645E4(v17);
LABEL_33:
      sub_1B64324(v17);
    }
    if ( v17->fields.shopType == 6 && v17->fields.payType == 8 )
      goto LABEL_25;
  }
  v18 = 0LL;
LABEL_25:
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
        goto LABEL_29;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_29:
    v23 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  return v18;
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
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x19
  void *list; // x0
  int32_t Count; // w0
  Il2CppClass *v18; // x1
  __int64 v19; // x2
  int32_t v20; // w22
  int32_t v21; // w23
  int32_t v22; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x20
  Il2CppObject *v29; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3

  if ( (byte_49FCCEA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&System_Comparison_ShopEntity__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_ShopEntity__TypeInfo, v11);
    sub_1B640C8(&ShopEntity_TypeInfo, v12);
    sub_1B640C8(&Method_ShopMaster___c__GetEventEntitiyList_b__4_0__, v13);
    sub_1B640C8(&ShopMaster___c_TypeInfo, v14);
    byte_49FCCEA = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v21,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = (Il2CppClass *)list;
        methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == ShopEntity_TypeInfo
          && *((_DWORD *)list + 6) == eventId )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v25 = Method_System_Collections_Generic_List_ShopEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)list,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v27[4] = v18;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v18, v19, v22);
          }
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B64324(list);
  }
LABEL_17:
  list = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    list = ShopMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 32LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ShopMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)list + 23);
    v28 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ShopEntity__TypeInfo, v18, v19);
    System_Comparison_object____ctor(v28, v29, Method_ShopMaster___c__GetEventEntitiyList_b__4_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ShopEntity__o *)v28;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)v28, v31, v32);
  }
  if ( !v15 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_55243320(
    v15,
    v28,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v15,
                               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  Il2CppObject *MasterData_object; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *v27; // x19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  Il2CppObject *IsHideItem; // x0
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x23
  ShopEntity_c *v40; // x1
  __int64 methodPtr_low; // x9
  Il2CppClass *v42; // x8
  unsigned __int64 v43; // x27
  __int64 namespaze; // x25
  int32_t v45; // w2
  int32_t v46; // w24
  Il2CppClass *v47; // x8
  Il2CppClass *v48; // x8
  Il2CppObject *Entity; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  Il2CppObject *v52; // x1
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  System_Int32_array *v57; // x20
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  ShopMaster___c_c *v64; // x8
  System_Comparison_T__o *_9__11_0; // x20
  Il2CppObject *v66; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  __int64 v70; // x21
  unsigned __int64 v71; // x22
  __int64 v72; // x1

  if ( (byte_49FCCF1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1B640C8(&System_Comparison_ItemEntity__TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    sub_1B640C8(&System_IDisposable_TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B640C8(&int___TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v17);
    sub_1B640C8(&System_Collections_Generic_List_ItemEntity__TypeInfo, v18);
    sub_1B640C8(&ShopEntity_TypeInfo, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B640C8(&Method_ShopMaster___c__GetEventItemList_b__11_0__, v21);
    sub_1B640C8(&ShopMaster___c_TypeInfo, v22);
    byte_49FCCF1 = 1;
  }
  if ( eventId < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_81;
  if ( !System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_81;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  v27 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                       v25,
                                                       v26);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_81;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        p_offset += 4;
        if ( !v30 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v33 = Enumerator->klass;
    v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v35 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_20;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_20:
      v36 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    IsHideItem = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                                   Enumerator,
                                   *(_QWORD *)(v36 + 8));
    v39 = IsHideItem;
    if ( !IsHideItem )
      sub_1B64324(0LL);
    v40 = ShopEntity_TypeInfo;
    methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(IsHideItem->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (ShopEntity_c *)IsHideItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
    {
      sub_1B645E4(IsHideItem);
      goto LABEL_81;
    }
    if ( LODWORD(IsHideItem[1].monitor) == eventId )
    {
      v42 = IsHideItem[2].klass;
      if ( !v42 )
        sub_1B64324(IsHideItem);
      if ( (int)v42->_1.namespaze >= 1 )
      {
        v43 = 0LL;
        namespaze = (unsigned int)v42->_1.namespaze;
        while ( 1 )
        {
          if ( v43 >= LODWORD(v42->_1.namespaze) )
            sub_1B6432C(IsHideItem, v40);
          v45 = *((_DWORD *)&v42->_1.byval_arg.data + v43);
          if ( v45 >= 1 )
          {
            IsHideItem = (Il2CppObject *)ShopMaster__IsHideItem((ShopMaster_o *)IsHideItem, eventId, v45, v38);
            if ( ((unsigned __int8)IsHideItem & 1) == 0 )
            {
              if ( !v27 )
                sub_1B64324(IsHideItem);
              if ( v27->fields._size < 1 )
              {
LABEL_40:
                v48 = v39[2].klass;
                if ( !v48 )
                  sub_1B64324(IsHideItem);
                if ( v43 >= LODWORD(v48->_1.namespaze) )
                  sub_1B6432C(IsHideItem, v40);
                if ( !MasterData_object )
                  sub_1B64324(IsHideItem);
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           *((_DWORD *)&v48->_1.byval_arg.data + v43),
                           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                v52 = Entity;
                items = v27->fields._items;
                v54 = Method_System_Collections_Generic_List_ItemEntity__Add__;
                ++v27->fields._version;
                if ( !items )
                  sub_1B64324(Entity);
                size = v27->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v27,
                    Entity,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
                }
                else
                {
                  v56 = &items->obj.klass + size;
                  v27->fields._size = size + 1;
                  v56[4] = (Il2CppClass *)v52;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v52, v50, v51);
                }
              }
              else
              {
                v46 = 0;
                while ( 1 )
                {
                  IsHideItem = System_Collections_Generic_List_object___get_Item(
                                 v27,
                                 v46,
                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
                  if ( !IsHideItem )
                    sub_1B64324(0LL);
                  v47 = v39[2].klass;
                  if ( !v47 )
                    sub_1B64324(IsHideItem);
                  if ( v43 >= LODWORD(v47->_1.namespaze) )
                    sub_1B6432C(IsHideItem, v40);
                  if ( LODWORD(IsHideItem[1].klass) == *((_DWORD *)&v47->_1.byval_arg.data + v43) )
                    break;
                  if ( ++v46 >= v27->fields._size )
                    goto LABEL_40;
                }
              }
            }
          }
          if ( ++v43 == namespaze )
            break;
          v42 = v39[2].klass;
          if ( !v42 )
            sub_1B64324(IsHideItem);
        }
      }
    }
  }
  v58 = Enumerator->klass;
  v59 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      --v59;
      v60 += 4;
      if ( !v59 )
        goto LABEL_55;
    }
    v61 = (__int64)&v58->vtable[*v60].method;
  }
  else
  {
LABEL_55:
    v61 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(
                                                             Enumerator,
                                                             *(_QWORD *)(v61 + 8));
  v64 = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v64 = ShopMaster___c_TypeInfo;
  }
  _9__11_0 = (System_Comparison_T__o *)v64->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64);
      v64 = ShopMaster___c_TypeInfo;
    }
    v66 = (Il2CppObject *)v64->static_fields->__9;
    _9__11_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ItemEntity__TypeInfo, v62, v63);
    System_Comparison_object____ctor(_9__11_0, v66, Method_ShopMaster___c__GetEventItemList_b__11_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_ItemEntity__o *)_9__11_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v68, v69);
  }
  if ( !v27 )
LABEL_81:
    sub_1B64324(list);
  System_Collections_Generic_List_object___Sort_55243320(
    v27,
    _9__11_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v70 = (unsigned int)v27->fields._size;
  v57 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v70);
  if ( (int)v70 >= 1 )
  {
    v71 = 0LL;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v27,
                                                                 v71,
                                                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !list || !v57 )
        break;
      if ( v71 >= v57->max_length )
        sub_1B6432C(list, v72);
      v57->m_Items[++v71] = (int32_t)list->fields.items;
      if ( v70 == v71 )
        return v57;
    }
    goto LABEL_81;
  }
  return v57;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopMaster__GetEventShopBaseShopId(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ShopEntity_array *Instance; // x0
  const MethodInfo *v8; // x2
  __int64 v9; // x1
  __int64 v10; // x8
  ShopEntity_o *v11; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FCCF6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FCCF6 = 1;
  }
  entity = 0LL;
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (ShopEntity_array *)entity;
    if ( !entity )
      goto LABEL_15;
    if ( !EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)entity, 0LL) )
      goto LABEL_13;
  }
  Instance = ShopMaster__GetEnableEventEntitiyList(this, eventId, v8);
  if ( !Instance )
    return (int)Instance;
  v10 = *(_QWORD *)&Instance->max_length;
  if ( !v10 )
  {
LABEL_13:
    LODWORD(Instance) = 0;
    return (int)Instance;
  }
  if ( !(_DWORD)v10 )
    sub_1B6432C(Instance, v9);
  v11 = Instance->m_Items[0];
  if ( !v11 )
LABEL_15:
    sub_1B64324(Instance);
  LODWORD(Instance) = v11->fields.baseShopId;
  return (int)Instance;
}


int32_t __fastcall ShopMaster__GetFragmentCountToExchangeForStone(ShopMaster_o *this, const MethodInfo *method)
{
  ShopEntity_o *EntityOfFragmentsShop; // x0
  __int64 v3; // x1
  struct System_Int32_array *prices; // x8
  __int64 v5; // x9

  EntityOfFragmentsShop = ShopMaster__GetEntityOfFragmentsShop(this, method);
  if ( EntityOfFragmentsShop )
  {
    prices = EntityOfFragmentsShop->fields.prices;
    if ( !prices )
      sub_1B64324(EntityOfFragmentsShop);
    v5 = *(_QWORD *)&prices->max_length;
    if ( v5 )
    {
      if ( !(_DWORD)v5 )
        sub_1B6432C(EntityOfFragmentsShop, v3);
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
  __int64 v15; // x1
  int64_t Time; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x21
  void *list; // x0
  int32_t Count; // w0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  int32_t v24; // w23
  int32_t v25; // w24
  ShopEntity_o *Item; // x0
  Il2CppObject *v27; // x25
  __int64 methodPtr_low; // x10
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Comparison_T__o *v34; // x19
  Il2CppObject *v35; // x20
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3

  if ( (byte_49FCCEB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&System_Comparison_ShopEntity__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_ShopEntity__TypeInfo, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    sub_1B640C8(&ShopEntity_TypeInfo, v13);
    sub_1B640C8(&Method_ShopMaster___c__GetOpenedEventEntitiyList_b__5_0__, v14);
    sub_1B640C8(&ShopMaster___c_TypeInfo, v15);
    byte_49FCCEB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    v25 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)list,
                               v25,
                               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v27 = (Il2CppObject *)Item;
        methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopEntity_TypeInfo
          && Item->fields.eventId == eventId )
        {
          list = (void *)ShopEntity__IsOpened(Item, Time, v23);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v19 )
              break;
            items = v19->fields._items;
            v31 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v19->fields._version;
            if ( !items )
              break;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                v27,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v33[4] = (Il2CppClass *)v27;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v27, (int32_t)v23, v29);
            }
          }
        }
      }
      if ( v24 == ++v25 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1B64324(list);
  }
LABEL_20:
  list = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    list = ShopMaster___c_TypeInfo;
  }
  v34 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 40LL);
  if ( !v34 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ShopMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)**((_QWORD **)list + 23);
    v34 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ShopEntity__TypeInfo, v22, v23);
    System_Comparison_object____ctor(v34, v35, Method_ShopMaster___c__GetOpenedEventEntitiyList_b__5_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_ShopEntity__o *)v34;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)v34, v37, v38);
  }
  if ( !v19 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_55243320(
    v19,
    v34,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v19,
                               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__IsEnableEventShop(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  bool v11; // w25
  __int64 methodPtr_low; // x10

  if ( (byte_49FCCF8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&ShopEntity_TypeInfo, v6);
    byte_49FCCF8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list[1].klass) != eventId )
      {
        v11 = ++v10 < v9;
        if ( v9 != v10 )
          continue;
      }
      return v11;
    }
LABEL_15:
    sub_1B64324(list);
  }
  return 0;
}


bool __fastcall ShopMaster__IsEnableEventShop_39510116(ShopMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t Time; // x20
  Il2CppObject *Master_object; // x21
  Il2CppObject *v13; // x0
  UserShopMaster_o *v14; // x22
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int i; // w25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  ShopEntity_o *v25; // x0
  const MethodInfo *v26; // x2
  ShopEntity_o *v27; // x23
  __int64 methodPtr_low; // x9
  int64_t UserId; // x0
  UserShopEntity_o *EntityDefinitely; // x0
  char v31; // w21
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_49FCCFB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B640C8(&Method_DataManager_GetMaster_ShopReleaseMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_UserShopMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&ShopEntity_TypeInfo, v10);
    byte_49FCCFB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  v13 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !this->fields.list )
LABEL_45:
    sub_1B64324(v13);
  v14 = (UserShopMaster_o *)v13;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  for ( i = 0; ; i |= ShopReleaseMaster__CondClearCheck((ShopReleaseMaster_o *)Master_object, v27->fields.id, 1, 0LL) )
  {
    do
    {
      do
      {
        klass = Enumerator->klass;
        v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v18;
            p_offset += 4;
            if ( !v18 )
              goto LABEL_14;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_14:
          p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
        {
          v31 = 1;
          goto LABEL_36;
        }
        v21 = Enumerator->klass;
        v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          v23 = &v21->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
          {
            --v22;
            v23 += 4;
            if ( !v22 )
              goto LABEL_21;
          }
          v24 = (__int64)&v21->vtable[*v23].method;
        }
        else
        {
LABEL_21:
          v24 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
        }
        v25 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                Enumerator,
                                *(_QWORD *)(v24 + 8));
        v27 = v25;
      }
      while ( !v25 );
      methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v25->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopEntity_c *)v25->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
      {
        sub_1B645E4(v25);
        goto LABEL_45;
      }
    }
    while ( v25->fields.shopType != 12 || !ShopEntity__IsEnable(v25, Time, v26) );
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v14 )
      sub_1B64324(UserId);
    EntityDefinitely = UserShopMaster__GetEntityDefinitely(v14, UserId, v27->fields.id, 0LL);
    if ( EntityDefinitely )
    {
      if ( EntityDefinitely->fields.num >= v27->fields.limitNum )
        break;
    }
    if ( !Master_object )
      sub_1B64324(EntityDefinitely);
  }
  v31 = 0;
LABEL_36:
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_40;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_40:
    v35 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return i & v31;
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
  __int64 v18; // x1
  int64_t Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_Dictionary_int__int__o *v22; // x21
  int32_t v23; // w22
  int64_t v24; // x23
  __int64 methodPtr_low; // x10
  Il2CppObject *MasterData_object; // x24
  int v27; // w24
  bool v28; // w0
  int32_t v29; // w1
  int32_t v30; // w8
  const MethodInfo_311AEB4 *v31; // x3
  int32_t v32; // w2
  unsigned int Count; // w0
  System_Int32_array *v34; // x19
  __int64 v35; // x1
  int max_length; // w8
  unsigned int v37; // w10
  int v38; // w11
  int32_t value; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49FCCF7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserShopMaster___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v12);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_1B640C8(&int___TypeInfo, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    sub_1B640C8(&ShopEntity_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__int__CopyTo__, v18);
    byte_49FCCF7 = 1;
  }
  value = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  v22 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v20,
                                                               v21);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v22,
    (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_25;
  v23 = 0;
  while ( 1 )
  {
    Instance = System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v23 >= (int)Instance )
      break;
    Instance = (int64_t)this->fields.list;
    if ( !Instance )
      goto LABEL_25;
    Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)Instance,
                          v23,
                          (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_25;
    v24 = Instance;
    methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
      || *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != ShopEntity_TypeInfo )
    {
      goto LABEL_25;
    }
    if ( *(_DWORD *)(Instance + 24) == eventId )
    {
      value = 0;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object )
        goto LABEL_25;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(
                            (UserShopMaster_o *)MasterData_object,
                            Instance,
                            *(_DWORD *)(v24 + 16),
                            0LL);
      if ( !Instance || !v22 )
        goto LABEL_25;
      v27 = *(_DWORD *)(Instance + 28);
      v28 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
              v22,
              *(_DWORD *)(v24 + 20),
              &value,
              (const MethodInfo_311C54C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
      v29 = *(_DWORD *)(v24 + 20);
      if ( v28 )
      {
        System_Collections_Generic_Dictionary_int__int___Remove(
          v22,
          v29,
          (const MethodInfo_311C26C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
        v30 = value;
        if ( (value & 0x80000000) != 0 )
        {
          v30 = -value;
          value = -value;
        }
        v29 = *(_DWORD *)(v24 + 20);
        v31 = (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v32 = v30 + v27;
      }
      else
      {
        v31 = (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v32 = -v27;
      }
      System_Collections_Generic_Dictionary_int__int___Add(v22, v29, v32, v31);
    }
    Instance = (int64_t)this->fields.list;
    ++v23;
    if ( !Instance )
      goto LABEL_25;
  }
  if ( !v22 )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_int__int___get_Count(
          v22,
          (const MethodInfo_311AB68 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) )
  {
LABEL_37:
    LOBYTE(Instance) = 1;
    return Instance;
  }
  Count = System_Collections_Generic_Dictionary_int__int___get_Count(
            v22,
            (const MethodInfo_311AB68 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
  v34 = (System_Int32_array *)sub_1B64170(int___TypeInfo, Count);
  Instance = (int64_t)System_Collections_Generic_Dictionary_int__int___get_Values(
                        v22,
                        (const MethodInfo_311ACC8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
  if ( !Instance
    || (System_Collections_Generic_Dictionary_ValueCollection_int__int___CopyTo(
          (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
          v34,
          0,
          (const MethodInfo_37B43D4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__int__CopyTo__),
        !v34) )
  {
LABEL_25:
    sub_1B64324(Instance);
  }
  max_length = v34->max_length;
  if ( max_length < 1 )
    goto LABEL_37;
  v37 = 0;
  do
  {
    if ( v37 >= max_length )
      sub_1B6432C(Instance, v35);
    v38 = v34->m_Items[v37 + 1];
    Instance = v38 > 0;
    if ( v38 < 1 )
      break;
  }
  while ( max_length - 1 != v37++ );
  return Instance;
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
  const MethodInfo *v17; // x4
  __int64 v18; // x1
  __int64 v19; // x2
  _BOOL4 v20; // w21
  Il2CppObject *v21; // x20
  _BOOL4 v22; // w20
  const MethodInfo *v24; // x2
  int v25; // w8
  ShopMaster___c__DisplayClass24_0_o *v26; // x20
  const MethodInfo *v27; // x2
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  System_Func_object__bool__o *v31; // x22
  Il2CppObject *v32; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-50h] BYREF
  int64_t closedAt; // [xsp+18h] [xbp-48h] BYREF
  int64_t openedAt; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_49FCCFC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_All_ShopEntity___, v9);
    sub_1B640C8(&System_Func_ShopEntity__bool__TypeInfo, v10);
    sub_1B640C8(&NetworkManager_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&TitleInfoControl_TypeInfo, v13);
    sub_1B640C8(&Method_ShopMaster___c__DisplayClass24_0__IsEventShopOpen_b__0__, v14);
    sub_1B640C8(&ShopMaster___c__DisplayClass24_0_TypeInfo, v15);
    byte_49FCCFC = 1;
  }
  openedAt = 0LL;
  entity = 0LL;
  closedAt = 0LL;
  v32 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_39;
  ShopMaster__GetEnableEventPeriod((ShopMaster_o *)Instance, &openedAt, &closedAt, eventId, v17);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( closedAt < 1 )
    goto LABEL_12;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_39;
  if ( EventEntity__isPurchaseEventOpen((EventEntity_o *)entity, 0LL) )
  {
LABEL_12:
    v20 = 0;
  }
  else
  {
    v26 = (ShopMaster___c__DisplayClass24_0_o *)sub_1B64314(ShopMaster___c__DisplayClass24_0_TypeInfo, v18, v19);
    ShopMaster___c__DisplayClass24_0___ctor(v26, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopMaster___);
    if ( !Instance )
      goto LABEL_39;
    EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                              (ShopMaster_o *)Instance,
                                                                              eventId,
                                                                              v27);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager__getTime(0LL);
    if ( !v26 )
      goto LABEL_39;
    v26->fields.nowTime = (int64_t)Instance;
    if ( !entity )
      goto LABEL_39;
    if ( (__int64)Instance <= (__int64)entity[6].monitor )
    {
      v31 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ShopEntity__bool__TypeInfo, v29, v30);
      System_Func_object__bool____ctor(
        v31,
        (Il2CppObject *)v26,
        Method_ShopMaster___c__DisplayClass24_0__IsEventShopOpen_b__0__,
        0LL);
      v20 = System_Linq_Enumerable__All_object_(
              EventEntitiyList,
              (System_Func_TSource__bool__o *)v31,
              (const MethodInfo_2E45664 *)Method_System_Linq_Enumerable_All_ShopEntity___);
    }
    else
    {
      v20 = 1;
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v32,
          eventId,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_22;
  Instance = (DataManager_o *)v32;
  if ( !v32 )
    goto LABEL_39;
  if ( EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)v32, 0LL) )
  {
    v21 = v32;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
    v22 = !TitleInfoControl__IsEnableEventShopButton_36942772((EventDetailEntity_o *)v21, 0LL);
  }
  else
  {
LABEL_22:
    v22 = 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
LABEL_39:
    sub_1B64324(Instance);
  }
  v25 = ShopMaster__CloseLimitEventShop((ShopMaster_o *)Instance, eventId, v24) || v22;
  return (v25 | v20) == 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__IsHideItem(ShopMaster_o *this, int32_t eventId, int32_t id, const MethodInfo *method)
{
  __int64 v6; // x1
  EventItemDisplayEntity_array *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  __int64 v10; // x9
  EventItemDisplayEntity_o *v11; // x11

  if ( (byte_49FCCF2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventItemDisplayMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FCCF2 = 1;
  }
  Instance = (EventItemDisplayEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventItemDisplayEntity_array *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventItemDisplayMaster___)) == 0LL )
  {
LABEL_15:
    sub_1B64324(Instance);
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
  v10 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= max_length )
      sub_1B6432C(Instance, v8);
    v11 = Instance->m_Items[v10];
    if ( !v11 )
      goto LABEL_15;
    if ( v11->fields.targetId == id && v11->fields.pointType == 1 )
      return 0;
    if ( (int)++v10 >= max_length )
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
  if ( (byte_49FCCF3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventDetailMaster___, shopEntity);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    this = (ShopMaster_o *)sub_1B640C8(
                             &Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__,
                             v6);
    byte_49FCCF3 = 1;
  }
  if ( !shopEntity )
    goto LABEL_13;
  eventId = shopEntity->fields.eventId;
  if ( eventId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ShopMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( this )
    {
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 eventId,
                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( Entity && EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)Entity, 0LL) )
        return ShopMaster__IsPurchaseCloseEventShopItem(v4, shopEntity->fields.baseShopId, method);
      return 0;
    }
LABEL_13:
    sub_1B64324(this);
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
  __int64 v11; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w23
  int64_t v16; // x20
  __int64 methodPtr_low; // x9
  ShopReleaseMaster_o *v19; // x21
  int32_t TargetShopGroupId; // w22
  const MethodInfo *v21; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  Il2CppObject *MasterData_object; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  ShopMaster_o *v25; // x0
  int64_t *v26; // x1
  int64_t *v27; // x2
  int32_t v28; // w3
  const MethodInfo *v29; // x4

  if ( (byte_49FCCF5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&baseShopId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopGroupMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserShopMaster___, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&ShopEntity_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FCCF5 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v14 = Count;
  v15 = 0;
  while ( 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_27;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v15,
                      (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_27;
    v16 = list;
    methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ShopEntity_TypeInfo )
    {
      break;
    }
    if ( *(_DWORD *)(list + 20) == baseShopId )
    {
      list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( list )
      {
        list = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)list,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
        if ( list )
        {
          v19 = (ShopReleaseMaster_o *)list;
          TargetShopGroupId = ShopReleaseMaster__GetTargetShopGroupId((ShopReleaseMaster_o *)list, baseShopId, 0LL);
          list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( list )
          {
            list = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)list,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopGroupMaster___);
            if ( list )
            {
              TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)list, TargetShopGroupId, v21);
              if ( TargetEntityList && *(_QWORD *)&TargetEntityList->max_length )
                return ShopReleaseMaster__CondClearCheck(v19, baseShopId, 82, 0LL);
              list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( list )
              {
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)list,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserShopMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                list = NetworkManager__get_UserId(0LL);
                if ( MasterData_object )
                {
                  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                                       (UserShopMaster_o *)MasterData_object,
                                       list,
                                       baseShopId,
                                       0LL);
                  return EntityDefinitely && EntityDefinitely->fields.num >= *(_DWORD *)(v16 + 88);
                }
              }
            }
          }
        }
      }
LABEL_27:
      sub_1B64324(list);
    }
    if ( v14 == ++v15 )
      return 1;
  }
  sub_1B645E4(list);
  return ShopMaster__GetEnableEventPeriod(v25, v26, v27, v28, v29);
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

  if ( (byte_49FCCF4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventDetailMaster___, shopEntity);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    this = (ShopMaster_o *)sub_1B640C8(
                             &Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__,
                             v5);
    byte_49FCCF4 = 1;
  }
  if ( !shopEntity )
    goto LABEL_11;
  eventId = shopEntity->fields.eventId;
  if ( !eventId )
    return shopEntity->fields.shopType == 12;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ShopMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !this )
LABEL_11:
    sub_1B64324(this);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             eventId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
    return EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)Entity, 0LL);
  return shopEntity->fields.shopType == 12;
}


void __fastcall ShopMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCCFE & 1) == 0 )
  {
    sub_1B640C8(&ShopMaster___c_TypeInfo, v1);
    byte_49FCCFE = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ShopMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ShopMaster___c_TypeInfo->static_fields->__9 = (struct ShopMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)ShopMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEntitiyList_b__2_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEntitiyList_b__3_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEventEntitiyList_b__6_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEventEntityList_b__7_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEventEntitiyList_b__4_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEventItemList_b__11_0(
        ShopMaster___c_o *this,
        ItemEntity_o *a,
        ItemEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetOpenedEventEntitiyList_b__5_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
  return a->fields.priority - b->fields.priority;
}


void __fastcall ShopMaster___c__DisplayClass24_0___ctor(
        ShopMaster___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopMaster___c__DisplayClass24_0___IsEventShopOpen_b__0(
        ShopMaster___c__DisplayClass24_0_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.closedAt < this->fields.nowTime;
}