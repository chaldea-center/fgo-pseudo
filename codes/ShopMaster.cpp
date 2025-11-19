void ShopMaster___ctor(ShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6E1E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ShopMaster__ShopEntity__int___ctor__);
    byte_4CB6E1E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    47,
    (const MethodInfo_33F6DB8 *)Method_DataMasterBase_ShopMaster__ShopEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool ShopMaster__CheckBuyAfterCloseShop(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_List_int__o *v6; // x0

  if ( (byte_4CB6E28 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6E28 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__),
        v6 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v6,
          (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__),
        (list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)list,
                                                                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0
    || (list = (System_Collections_ObjectModel_Collection_T__o *)DataMasterBase_object__object__int___GetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)list,
                                                                   eventId,
                                                                   (const MethodInfo_33F90DC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0 )
  {
    sub_1C6BC60(list, *(_QWORD *)&eventId);
  }
  return EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)list, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ShopMaster__CheckExistsPayType(ShopMaster_o *this, int32_t eventId, int32_t payType, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  bool v11; // w25

  if ( (byte_4CB6E33 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    byte_4CB6E33 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
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
                                                                 (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( !list )
        break;
      if ( LODWORD(list[1].klass) != eventId || HIDWORD(list[2].fields.items) != payType )
      {
        v11 = ++v10 < v9;
        if ( v9 != v10 )
          continue;
      }
      return v11;
    }
LABEL_14:
    sub_1C6BC60(list, *(_QWORD *)&eventId);
  }
  return 0;
}


bool ShopMaster__CloseLimitEventShop(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  int32_t EventShopBaseShopId; // w0
  const MethodInfo *v5; // x2

  EventShopBaseShopId = ShopMaster__GetEventShopBaseShopId(this, eventId, method);
  if ( EventShopBaseShopId )
    LOBYTE(EventShopBaseShopId) = ShopMaster__IsPurchaseCloseEventShopItem(this, EventShopBaseShopId, v5);
  return EventShopBaseShopId;
}


ShopEntity_array *ShopMaster__GetEnableEntitiyList(
        ShopMaster_o *this,
        int32_t purchaseType,
        int32_t shopType,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v8; // x1
  int64_t v9; // x23
  System_Collections_Generic_List_object__o *v10; // x19
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  ShopEntity_o *v21; // x0
  ShopEntity_o *v22; // x24
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  ShopMaster___c_c *v35; // x8
  System_Comparison_T__o *_9__1_0; // x20
  Il2CppObject *v37; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3

  if ( (byte_4CB6E1F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_1C6BA08(&System_Comparison_ShopEntity__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_ShopMaster___c__GetEnableEntitiyList_b__1_0__);
    sub_1C6BA08(&ShopMaster___c_TypeInfo);
    byte_4CB6E1F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_47;
  v9 = (int64_t)Time;
  System_Collections_ObjectModel_Collection_object___get_Count(
    (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
    (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Time )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_12;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v16 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8))
        & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_19;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_19:
      v20 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0);
    }
    v21 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                            Enumerator,
                            *(_QWORD *)(v20 + 8));
    v22 = v21;
    if ( v21
      && !v21->fields.eventId
      && (purchaseType < 1 || v21->fields.purchaseType == purchaseType)
      && v21->fields.shopType == shopType
      && ShopEntity__IsEnable(v21, v9, 0) )
    {
      IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v22, 0);
      if ( !IsHiddenInCaseOfBuying )
      {
        if ( !v10 )
          sub_1C6BC60(IsHiddenInCaseOfBuying, v24);
        items = v10->fields._items;
        v28 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          sub_1C6BC60(IsHiddenInCaseOfBuying, v24);
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)v22,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v22;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v22, v25, v26);
        }
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_37;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_37:
    v34 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Time = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                                             Enumerator,
                                                             *(_QWORD *)(v34 + 8));
  v35 = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v35 = ShopMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Comparison_T__o *)v35->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = ShopMaster___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__1_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(_9__1_0, v37, Method_ShopMaster___c__GetEnableEntitiyList_b__1_0__, 0);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_ShopEntity__o *)_9__1_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v39, v40);
  }
  if ( !v10 )
LABEL_47:
    sub_1C6BC60(Time, v8);
  System_Collections_Generic_List_object___Sort_58729528(
    v10,
    _9__1_0,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v10,
                               (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


ShopEntity_array *ShopMaster__GetEnableEntitiyList_43098544(
        ShopMaster_o *this,
        int32_t purchaseType,
        int32_t shopType,
        int32_t flag,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v10; // x1
  int64_t v11; // x25
  System_Collections_Generic_List_object__o *v12; // x19
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  ShopEntity_o *v23; // x0
  ShopEntity_o *v24; // x26
  const MethodInfo *v25; // x2
  _BOOL8 IsOpenPurchaseCloseShop; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  ShopMaster___c_c *v38; // x8
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v40; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3

  if ( (byte_4CB6E20 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_1C6BA08(&System_Comparison_ShopEntity__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_ShopMaster___c__GetEnableEntitiyList_b__2_0__);
    sub_1C6BA08(&ShopMaster___c_TypeInfo);
    byte_4CB6E20 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_48;
  v11 = (int64_t)Time;
  System_Collections_ObjectModel_Collection_object___get_Count(
    (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
    (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Time )
    goto LABEL_48;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_12;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v18 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8))
        & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_19;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_19:
      v22 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0);
    }
    v23 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                            Enumerator,
                            *(_QWORD *)(v22 + 8));
    v24 = v23;
    if ( v23
      && ShopEntity__checkFlag(v23, flag, 0)
      && (purchaseType < 1 || v24->fields.purchaseType == purchaseType)
      && v24->fields.shopType == shopType
      && ShopEntity__IsEnable(v24, v11, 0)
      && !ShopEntity__IsHiddenInCaseOfBuying(v24, 0) )
    {
      IsOpenPurchaseCloseShop = ShopMaster__IsOpenPurchaseCloseShop(this, v24, v25);
      if ( !IsOpenPurchaseCloseShop )
      {
        if ( !v12 )
          sub_1C6BC60(IsOpenPurchaseCloseShop, v27);
        items = v12->fields._items;
        v31 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1C6BC60(IsOpenPurchaseCloseShop, v27);
        size = v12->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)v24,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v24;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v24, v28, v29);
        }
      }
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_38;
    }
    v37 = (__int64)&v34->vtable[*v36];
  }
  else
  {
LABEL_38:
    v37 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Time = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                                                             Enumerator,
                                                             *(_QWORD *)(v37 + 8));
  v38 = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v38 = ShopMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Comparison_T__o *)v38->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = ShopMaster___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v38->static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(_9__2_0, v40, Method_ShopMaster___c__GetEnableEntitiyList_b__2_0__, 0);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_ShopEntity__o *)_9__2_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v42, v43);
  }
  if ( !v12 )
LABEL_48:
    sub_1C6BC60(Time, v10);
  System_Collections_Generic_List_object___Sort_58729528(
    v12,
    _9__2_0,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v12,
                               (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


ShopEntity_array *ShopMaster__GetEnableEntitiyList_43100140(
        ShopMaster_o *this,
        int32_t purchaseType,
        int32_t payType,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v8; // x1
  int64_t v9; // x23
  System_Collections_Generic_List_object__o *v10; // x19
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  ShopEntity_o *v21; // x0
  ShopEntity_o *v22; // x24
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  ShopMaster___c_c *v35; // x8
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v37; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3

  if ( (byte_4CB6E21 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_1C6BA08(&System_Comparison_ShopEntity__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_ShopMaster___c__GetEnableEntitiyList_b__3_0__);
    sub_1C6BA08(&ShopMaster___c_TypeInfo);
    byte_4CB6E21 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_47;
  v9 = (int64_t)Time;
  System_Collections_ObjectModel_Collection_object___get_Count(
    (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
    (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Time )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_12;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v16 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8))
        & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_19;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_19:
      v20 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0);
    }
    v21 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                            Enumerator,
                            *(_QWORD *)(v20 + 8));
    v22 = v21;
    if ( v21
      && !v21->fields.eventId
      && (purchaseType < 1 || v21->fields.purchaseType == purchaseType)
      && v21->fields.payType == payType
      && ShopEntity__IsEnable(v21, v9, 0) )
    {
      IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v22, 0);
      if ( !IsHiddenInCaseOfBuying )
      {
        if ( !v10 )
          sub_1C6BC60(IsHiddenInCaseOfBuying, v24);
        items = v10->fields._items;
        v28 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          sub_1C6BC60(IsHiddenInCaseOfBuying, v24);
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)v22,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v22;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v22, v25, v26);
        }
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_37;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_37:
    v34 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Time = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                                             Enumerator,
                                                             *(_QWORD *)(v34 + 8));
  v35 = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v35 = ShopMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v35->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = ShopMaster___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v37, Method_ShopMaster___c__GetEnableEntitiyList_b__3_0__, 0);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ShopEntity__o *)_9__3_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v39, v40);
  }
  if ( !v10 )
LABEL_47:
    sub_1C6BC60(Time, v8);
  System_Collections_Generic_List_object___Sort_58729528(
    v10,
    _9__3_0,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v10,
                               (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


ShopEntity_array *ShopMaster__GetEnableEventEntitiyList(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  int64_t Time; // x22
  System_Collections_Generic_List_object__o *v6; // x21
  __int64 v7; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  ShopEntity_o *Item; // x0
  Il2CppObject *v13; // x25
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Comparison_T__o *v20; // x19
  Il2CppObject *v21; // x20
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4CB6E24 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    sub_1C6BA08(&System_Comparison_ShopEntity__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_ShopMaster___c__GetEnableEventEntitiyList_b__6_0__);
    sub_1C6BA08(&ShopMaster___c_TypeInfo);
    byte_4CB6E24 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)list,
                               v11,
                               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( Item )
      {
        v13 = (Il2CppObject *)Item;
        if ( Item->fields.eventId == eventId )
        {
          list = (void *)ShopEntity__IsEnable(Item, Time, 0);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v6 )
              break;
            items = v6->fields._items;
            v17 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v6->fields._version;
            if ( !items )
              break;
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                v13,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v19 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v19[4] = (Il2CppClass *)v13;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
            }
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_18;
    }
LABEL_26:
    sub_1C6BC60(list, v7);
  }
LABEL_18:
  list = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    list = ShopMaster___c_TypeInfo;
  }
  v20 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 48LL);
  if ( !v20 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ShopMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)**((_QWORD **)list + 23);
    v20 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(v20, v21, Method_ShopMaster___c__GetEnableEventEntitiyList_b__6_0__, 0);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_ShopEntity__o *)v20;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)v20, v23, v24);
  }
  if ( !v6 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_58729528(
    v6,
    v20,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v6,
                               (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


ShopEntity_array *ShopMaster__GetEnableEventEntityList(
        ShopMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  int64_t Time; // x23
  System_Collections_Generic_List_object__o *v8; // x22
  __int64 v9; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v12; // w24
  int32_t v13; // w25
  ShopEntity_o *Item; // x0
  ShopEntity_o *v15; // x26
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Comparison_T__o *v22; // x19
  Il2CppObject *v23; // x20
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4CB6E25 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    sub_1C6BA08(&System_Comparison_ShopEntity__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_ShopMaster___c__GetEnableEventEntityList_b__7_0__);
    sub_1C6BA08(&ShopMaster___c_TypeInfo);
    byte_4CB6E25 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)list,
                               v13,
                               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( Item )
      {
        v15 = Item;
        if ( Item->fields.eventId == eventId && Item->fields.slot == slot && ShopEntity__IsEnable(Item, Time, 0) )
        {
          list = (void *)ShopEntity__IsHiddenInCaseOfBuyingShopId(v15, 0);
          if ( ((unsigned __int8)list & 1) == 0 )
          {
            if ( !v8 )
              break;
            items = v8->fields._items;
            v19 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v8->fields._version;
            if ( !items )
              break;
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)v15,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v21[4] = (Il2CppClass *)v15;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v15, v16, v17);
            }
          }
        }
      }
      if ( v12 == ++v13 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1C6BC60(list, v9);
  }
LABEL_20:
  list = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    list = ShopMaster___c_TypeInfo;
  }
  v22 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 56LL);
  if ( !v22 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ShopMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)**((_QWORD **)list + 23);
    v22 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(v22, v23, Method_ShopMaster___c__GetEnableEventEntityList_b__7_0__, 0);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_ShopEntity__o *)v22;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)v22, v25, v26);
  }
  if ( !v8 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_58729528(
    v8,
    v22,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v8,
                               (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


bool ShopMaster__GetEnableEventPeriod(
        ShopMaster_o *this,
        int64_t *openedAt,
        int64_t *closedAt,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *v11; // x23
  int32_t Count; // w0
  int32_t v13; // w24
  int32_t v14; // w25
  Il2CppObject *Item; // x0
  int64_t klass; // x8
  int64_t monitor; // x8

  if ( (byte_4CB6E29 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB6E29 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0);
  *openedAt = -1;
  *closedAt = -1;
  if ( !this->fields.list )
    goto LABEL_23;
  v11 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Time )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               Time,
               v14,
               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( Item )
      {
        if ( LODWORD(Item[1].monitor) == eventId )
        {
          klass = (int64_t)Item[8].klass;
          if ( klass <= (__int64)v11 )
          {
            if ( *openedAt < 0 || *openedAt > klass )
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
      if ( v13 == ++v14 )
        return (*openedAt & 0x8000000000000000LL) == 0 && *closedAt >= 0;
    }
LABEL_23:
    sub_1C6BC60(Time, v10);
  }
  return (*openedAt & 0x8000000000000000LL) == 0 && *closedAt >= 0;
}


ShopEntity_array *ShopMaster__GetEnableExchangeSvtCoinEntitiyList(
        ShopMaster_o *this,
        int32_t svtCoinType,
        const MethodInfo *method)
{
  int64_t Time; // x22
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  ShopEntity_o *v19; // x0
  ShopEntity_o *v20; // x23
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  ShopMaster___c_c *v33; // x8
  System_Comparison_T__o *_9__8_0; // x20
  Il2CppObject *v35; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3

  if ( (byte_4CB6E26 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
    sub_1C6BA08(&System_Comparison_ShopEntity__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_ShopMaster___c__GetEnableExchangeSvtCoinEntitiyList_b__8_0__);
    sub_1C6BA08(&ShopMaster___c_TypeInfo);
    byte_4CB6E26 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_45;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_11;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v14 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_18:
      v18 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0);
    }
    v19 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                            Enumerator,
                            *(_QWORD *)(v18 + 8));
    v20 = v19;
    if ( v19 )
    {
      if ( !v19->fields.eventId
        && v19->fields.shopType == 17
        && ShopEntity__IsEnable(v19, Time, 0)
        && ShopEntity__GetExchangeSvtCoinType(v20, 0) == svtCoinType )
      {
        IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v20, 0);
        if ( !IsHiddenInCaseOfBuying )
        {
          if ( !v6 )
            sub_1C6BC60(IsHiddenInCaseOfBuying, v22);
          items = v6->fields._items;
          v26 = Method_System_Collections_Generic_List_ShopEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            sub_1C6BC60(IsHiddenInCaseOfBuying, v22);
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v20,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v20;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v20, v23, v24);
          }
        }
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_35;
    }
    v32 = (__int64)&v29->vtable[*v31];
  }
  else
  {
LABEL_35:
    v32 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                                             Enumerator,
                                                             *(_QWORD *)(v32 + 8));
  v33 = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v33 = ShopMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Comparison_T__o *)v33->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = ShopMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v33->static_fields->__9;
    _9__8_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__8_0,
      v35,
      Method_ShopMaster___c__GetEnableExchangeSvtCoinEntitiyList_b__8_0__,
      0);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_ShopEntity__o *)_9__8_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v37, v38);
  }
  if ( !v6 )
LABEL_45:
    sub_1C6BC60(list, v7);
  System_Collections_Generic_List_object___Sort_58729528(
    v6,
    _9__8_0,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v6,
                               (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


int32_t ShopMaster__GetEnableMainEventId(ShopMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x22
  void *Instance; // x0
  __int64 baseShopId; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_int__o *v7; // x21
  System_Collections_Generic_List_int__o *v8; // x20
  int32_t Count; // w0
  int32_t v10; // w24
  int32_t i; // w25
  ShopEntity_o *Item; // x0
  ShopEntity_o *v13; // x26
  __int64 v14; // x8
  const MethodInfo *v15; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  char *v19; // x8
  struct System_Int32_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8
  System_Collections_Generic_List_int__o *v24; // x0
  int v25; // w24
  int32_t v26; // w22
  int32_t v27; // w23
  const MethodInfo *v28; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB6E27 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C6BA08(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6E27 = 1;
  }
  entity = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMaster___);
  v7 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_47;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    for ( i = 0; v10 != i; ++i )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_47;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)Instance,
                               i,
                               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( Item )
      {
        v13 = Item;
        if ( Item->fields.eventId )
        {
          Instance = (void *)ShopEntity__IsEnable(Item, Time, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !MasterData_object )
              goto LABEL_47;
            Instance = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         v13->fields.eventId,
                         (const MethodInfo_33F90DC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_47;
            v14 = *((_QWORD *)Instance + 13);
            if ( v14 >= 1 && v14 >= Time && *((_QWORD *)Instance + 11) <= Time )
            {
              if ( !v7 )
                goto LABEL_47;
              if ( !System_Collections_Generic_List_int___Contains(
                      v7,
                      v13->fields.baseShopId,
                      (const MethodInfo_37E3CC8 *)Method_System_Collections_Generic_List_int__Contains__) )
              {
                Instance = (void *)ShopMaster__CheckBuyAfterCloseShop(this, v13->fields.eventId, v15);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  baseShopId = (unsigned int)v13->fields.baseShopId;
                  items = v7->fields._items;
                  v17 = Method_System_Collections_Generic_List_int__Add__;
                  ++v7->fields._version;
                  if ( !items )
                    goto LABEL_47;
                  size = v7->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    v23 = v17[4];
                    v24 = v7;
LABEL_32:
                    System_Collections_Generic_List_int___AddWithResize(
                      v24,
                      baseShopId,
                      *(const MethodInfo_37E3950 **)(*(_QWORD *)(v23 + 192) + 112LL));
                    continue;
                  }
                  v19 = (char *)items + 4 * size;
                  v7->fields._size = size + 1;
                }
                else
                {
                  if ( !v8 )
                    goto LABEL_47;
                  Instance = (void *)System_Collections_Generic_List_int___Contains(
                                       v8,
                                       v13->fields.eventId,
                                       (const MethodInfo_37E3CC8 *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                    continue;
                  baseShopId = (unsigned int)v13->fields.eventId;
                  v20 = v8->fields._items;
                  v21 = Method_System_Collections_Generic_List_int__Add__;
                  ++v8->fields._version;
                  if ( !v20 )
                    goto LABEL_47;
                  v22 = v8->fields._size;
                  if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
                  {
                    v23 = v21[4];
                    v24 = v8;
                    goto LABEL_32;
                  }
                  v19 = (char *)v20 + 4 * v22;
                  v8->fields._size = v22 + 1;
                }
                *((_DWORD *)v19 + 8) = baseShopId;
              }
            }
          }
        }
      }
    }
  }
  if ( v7 )
  {
    v25 = v7->fields._size;
    if ( v25 >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        v27 = System_Collections_Generic_List_int___get_Item(
                v7,
                v26,
                (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !ShopMaster__IsPurchaseCloseEventShopItem(this, v27, v28) )
        {
          Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               &entity,
                               v27,
                               (const MethodInfo_33F9128 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            break;
        }
        if ( v25 == ++v26 )
          goto LABEL_40;
      }
      if ( entity )
        return (int32_t)entity[1].monitor;
LABEL_47:
      sub_1C6BC60(Instance, baseShopId);
    }
  }
LABEL_40:
  if ( !v8 || v8->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_int___Sort(
    v8,
    (const MethodInfo_37E5294 *)Method_System_Collections_Generic_List_int__Sort__);
  return System_Collections_Generic_List_int___get_Item(
           v8,
           0,
           (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__);
}


ShopEntity_o *ShopMaster__GetEntityOfFragmentsShop(ShopMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  ShopEntity_o *v16; // x21
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0

  if ( (byte_4CB6E32 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    byte_4CB6E32 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C6BC60(0, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_9;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v9 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_16:
      v13 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8));
    v16 = (ShopEntity_o *)v14;
    if ( !v14 )
      sub_1C6BC60(0, v15);
    if ( *(_DWORD *)(v14 + 72) == 6 && *(_DWORD *)(v14 + 68) == 8 )
      goto LABEL_23;
  }
  v16 = 0;
LABEL_23:
  v17 = Enumerator->klass;
  v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v19 = &v17->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v19 - 1) != System_IDisposable_TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_27;
    }
    v20 = (__int64)&v17->vtable[*v19];
  }
  else
  {
LABEL_27:
    v20 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(Enumerator, *(_QWORD *)(v20 + 8));
  return v16;
}


ShopEntity_array *ShopMaster__GetEventEntitiyList(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppClass *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Comparison_T__o *v17; // x20
  Il2CppObject *v18; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4CB6E22 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    sub_1C6BA08(&System_Comparison_ShopEntity__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_1C6BA08(&Method_ShopMaster___c__GetEventEntitiyList_b__4_0__);
    sub_1C6BA08(&ShopMaster___c_TypeInfo);
    byte_4CB6E22 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( list )
      {
        v6 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 6) == eventId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v14 = Method_System_Collections_Generic_List_ShopEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v16[4] = v6;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v6, v11, v12);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C6BC60(list, v6);
  }
LABEL_15:
  list = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    list = ShopMaster___c_TypeInfo;
  }
  v17 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 32LL);
  if ( !v17 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ShopMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)**((_QWORD **)list + 23);
    v17 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(v17, v18, Method_ShopMaster___c__GetEventEntitiyList_b__4_0__, 0);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ShopEntity__o *)v17;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)v17, v20, v21);
  }
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_58729528(
    v5,
    v17,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v5,
                               (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *ShopMaster__GetEventItemList(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  Il2CppObject *IsHideItem; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x23
  Il2CppClass *v22; // x8
  unsigned __int64 v23; // x26
  __int64 namespaze; // x25
  int32_t v25; // w2
  int32_t v26; // w24
  Il2CppClass *v27; // x8
  Il2CppClass *v28; // x8
  Il2CppObject *Entity; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x1
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  __int64 v37; // x20
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  ShopMaster___c_c *v42; // x8
  System_Comparison_T__o *_9__12_0; // x20
  Il2CppObject *v44; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x21
  unsigned __int64 v49; // x22

  if ( (byte_4CB6E2A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_1C6BA08(&System_Comparison_ItemEntity__TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ItemEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ItemEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ItemEntity__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_ShopMaster___c__GetEventItemList_b__12_0__);
    sub_1C6BA08(&ShopMaster___c_TypeInfo);
    byte_4CB6E2A = 1;
  }
  if ( eventId < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_78;
  if ( !System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_78;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ItemMaster___);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_13;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v13 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_20;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_20:
      v17 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0);
    }
    IsHideItem = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                   Enumerator,
                                   *(_QWORD *)(v17 + 8));
    v21 = IsHideItem;
    if ( !IsHideItem )
      sub_1C6BC60(0, v19);
    if ( LODWORD(IsHideItem[1].monitor) == eventId )
    {
      v22 = IsHideItem[2].klass;
      if ( !v22 )
        sub_1C6BC60(IsHideItem, v19);
      if ( (int)v22->_1.namespaze >= 1 )
      {
        v23 = 0;
        namespaze = (unsigned int)v22->_1.namespaze;
        while ( 1 )
        {
          if ( v23 >= LODWORD(v22->_1.namespaze) )
            sub_1C6BC68(IsHideItem);
          v25 = *((_DWORD *)&v22->_1.byval_arg.data + v23);
          if ( v25 >= 1 )
          {
            IsHideItem = (Il2CppObject *)ShopMaster__IsHideItem((ShopMaster_o *)IsHideItem, eventId, v25, v20);
            if ( ((unsigned __int8)IsHideItem & 1) == 0 )
            {
              if ( !v7 )
                sub_1C6BC60(IsHideItem, v19);
              if ( v7->fields._size < 1 )
              {
LABEL_38:
                v28 = v21[2].klass;
                if ( !v28 )
                  sub_1C6BC60(IsHideItem, v19);
                if ( v23 >= LODWORD(v28->_1.namespaze) )
                  sub_1C6BC68(IsHideItem);
                if ( !MasterData_object )
                  sub_1C6BC60(IsHideItem, v19);
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           *((_DWORD *)&v28->_1.byval_arg.data + v23),
                           (const MethodInfo_33F90DC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                v32 = Entity;
                items = v7->fields._items;
                v34 = Method_System_Collections_Generic_List_ItemEntity__Add__;
                ++v7->fields._version;
                if ( !items )
                  sub_1C6BC60(Entity, Entity);
                size = v7->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v7,
                    Entity,
                    *(const MethodInfo_3800974 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
                }
                else
                {
                  v36 = &items->obj.klass + size;
                  v7->fields._size = size + 1;
                  v36[4] = (Il2CppClass *)v32;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v32, v30, v31);
                }
              }
              else
              {
                v26 = 0;
                while ( 1 )
                {
                  IsHideItem = System_Collections_Generic_List_object___get_Item(
                                 v7,
                                 v26,
                                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
                  if ( !IsHideItem )
                    sub_1C6BC60(0, v19);
                  v27 = v21[2].klass;
                  if ( !v27 )
                    sub_1C6BC60(IsHideItem, v19);
                  if ( v23 >= LODWORD(v27->_1.namespaze) )
                    sub_1C6BC68(IsHideItem);
                  if ( LODWORD(IsHideItem[1].klass) == *((_DWORD *)&v27->_1.byval_arg.data + v23) )
                    break;
                  if ( ++v26 >= v7->fields._size )
                    goto LABEL_38;
                }
              }
            }
          }
          if ( ++v23 == namespaze )
            break;
          v22 = v21[2].klass;
          if ( !v22 )
            sub_1C6BC60(IsHideItem, v19);
        }
      }
    }
  }
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_53;
    }
    v41 = (__int64)&v38->vtable[*v40];
  }
  else
  {
LABEL_53:
    v41 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                                             Enumerator,
                                                             *(_QWORD *)(v41 + 8));
  v42 = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v42 = ShopMaster___c_TypeInfo;
  }
  _9__12_0 = (System_Comparison_T__o *)v42->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = ShopMaster___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v42->static_fields->__9;
    _9__12_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_object____ctor(_9__12_0, v44, Method_ShopMaster___c__GetEventItemList_b__12_0__, 0);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_ItemEntity__o *)_9__12_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v46, v47);
  }
  if ( !v7 )
LABEL_78:
    sub_1C6BC60(list, *(_QWORD *)&eventId);
  System_Collections_Generic_List_object___Sort_58729528(
    v7,
    _9__12_0,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v48 = (unsigned int)v7->fields._size;
  v37 = sub_1C6BAB0(int___TypeInfo, (unsigned int)v48);
  if ( (int)v48 >= 1 )
  {
    v49 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v7,
                                                                 v49,
                                                                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !list || !v37 )
        break;
      if ( v49 >= *(unsigned int *)(v37 + 24) )
        sub_1C6BC68(list);
      *(_DWORD *)(v37 + 32 + 4 * v49++) = list->fields.items;
      if ( v48 == v49 )
        return (System_Int32_array *)v37;
    }
    goto LABEL_78;
  }
  return (System_Int32_array *)v37;
}


int32_t ShopMaster__GetEventShopBaseShopId(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  ShopEntity_array *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  il2cpp_array_size_t max_length; // x8
  ShopEntity_o *v9; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB6E2F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6E2F = 1;
  }
  entity = 0;
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_33F9128 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (ShopEntity_array *)entity;
    if ( !entity )
      goto LABEL_15;
    if ( !EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)entity, 0) )
      goto LABEL_13;
  }
  Instance = ShopMaster__GetEnableEventEntitiyList(this, eventId, v7);
  if ( !Instance )
    return (int)Instance;
  max_length = Instance->max_length;
  if ( !max_length )
  {
LABEL_13:
    LODWORD(Instance) = 0;
    return (int)Instance;
  }
  if ( !(_DWORD)max_length )
    sub_1C6BC68(Instance);
  v9 = Instance->m_Items[0];
  if ( !v9 )
LABEL_15:
    sub_1C6BC60(Instance, v6);
  LODWORD(Instance) = v9->fields.baseShopId;
  return (int)Instance;
}


int32_t ShopMaster__GetFragmentCountToExchangeForStone(ShopMaster_o *this, const MethodInfo *method)
{
  ShopEntity_o *EntityOfFragmentsShop; // x0
  __int64 v3; // x1
  struct System_Int32_array *prices; // x8
  il2cpp_array_size_t max_length; // x9

  EntityOfFragmentsShop = ShopMaster__GetEntityOfFragmentsShop(this, method);
  if ( EntityOfFragmentsShop )
  {
    prices = EntityOfFragmentsShop->fields.prices;
    if ( !prices )
      sub_1C6BC60(EntityOfFragmentsShop, v3);
    max_length = prices->max_length;
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
        sub_1C6BC68(EntityOfFragmentsShop);
      LODWORD(EntityOfFragmentsShop) = prices->m_Items[0];
    }
    else
    {
      LODWORD(EntityOfFragmentsShop) = 0;
    }
  }
  return (int)EntityOfFragmentsShop;
}


ShopEntity_array *ShopMaster__GetOpenedEventEntitiyList(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  int64_t Time; // x22
  System_Collections_Generic_List_object__o *v6; // x21
  __int64 v7; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  ShopEntity_o *Item; // x0
  Il2CppObject *v13; // x25
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Comparison_T__o *v20; // x19
  Il2CppObject *v21; // x20
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4CB6E23 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    sub_1C6BA08(&System_Comparison_ShopEntity__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_ShopMaster___c__GetOpenedEventEntitiyList_b__5_0__);
    sub_1C6BA08(&ShopMaster___c_TypeInfo);
    byte_4CB6E23 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)list,
                               v11,
                               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( Item )
      {
        v13 = (Il2CppObject *)Item;
        if ( Item->fields.eventId == eventId )
        {
          list = (void *)ShopEntity__IsOpened(Item, Time, 0);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v6 )
              break;
            items = v6->fields._items;
            v17 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v6->fields._version;
            if ( !items )
              break;
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                v13,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v19 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v19[4] = (Il2CppClass *)v13;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
            }
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_18;
    }
LABEL_26:
    sub_1C6BC60(list, v7);
  }
LABEL_18:
  list = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    list = ShopMaster___c_TypeInfo;
  }
  v20 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 40LL);
  if ( !v20 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ShopMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)**((_QWORD **)list + 23);
    v20 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(v20, v21, Method_ShopMaster___c__GetOpenedEventEntitiyList_b__5_0__, 0);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_ShopEntity__o *)v20;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)v20, v23, v24);
  }
  if ( !v6 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_58729528(
    v6,
    v20,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v6,
                               (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool ShopMaster__IsEnableEventShop(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  bool v9; // w24

  if ( (byte_4CB6E31 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    byte_4CB6E31 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( !list )
        break;
      if ( LODWORD(list[1].klass) != eventId )
      {
        v9 = ++v8 < v7;
        if ( v7 != v8 )
          continue;
      }
      return v9;
    }
LABEL_13:
    sub_1C6BC60(list, *(_QWORD *)&eventId);
  }
  return 0;
}


bool ShopMaster__IsEnableEventShop_43112256(ShopMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x21
  Il2CppObject *Master_object; // x22
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  UserShopMaster_o *v7; // x23
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int i; // w26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  ShopEntity_o *v19; // x0
  ShopEntity_o *v20; // x24
  __int64 v21; // x1
  NetworkManager_c *v22; // x0
  UserShopEntity_o *EntityDefinitely; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  char v26; // w21
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4CB6E34 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
    sub_1C6BA08(&Method_DataManager_GetMaster_ShopReleaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB6E34 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  v5 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !this->fields.list )
    sub_1C6BC60(v5, v6);
  v7 = (UserShopMaster_o *)v5;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v8);
  for ( i = 0; ; i |= ShopReleaseMaster__CondClearCheck((ShopReleaseMaster_o *)Master_object, v20->fields.id, 1, v25) )
  {
    do
    {
      klass = Enumerator->klass;
      v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v12;
          p_offset += 4;
          if ( !v12 )
            goto LABEL_14;
        }
        v14 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_14:
        v14 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
              Enumerator,
              *(_QWORD *)(v14 + 8))
          & 1) == 0 )
      {
        v26 = 1;
        goto LABEL_38;
      }
      v15 = Enumerator->klass;
      v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v17 = &v15->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_21;
        }
        v18 = (__int64)&v15->vtable[*v17];
      }
      else
      {
LABEL_21:
        v18 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0);
      }
      v19 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                              Enumerator,
                              *(_QWORD *)(v18 + 8));
      v20 = v19;
    }
    while ( !v19 || v19->fields.shopType != 12 || !ShopEntity__IsEnable(v19, Time, 0) );
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB002A )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB002A = 1;
    }
    v22 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v22 = NetworkManager_TypeInfo;
    }
    if ( !v7 )
      sub_1C6BC60(v22, v21);
    EntityDefinitely = UserShopMaster__GetEntityDefinitely(v7, v22->static_fields->userIdNumber, v20->fields.id, 0);
    if ( EntityDefinitely )
    {
      if ( EntityDefinitely->fields.num >= v20->fields.limitNum )
        break;
    }
    if ( !Master_object )
      sub_1C6BC60(EntityDefinitely, v24);
  }
  v26 = 0;
LABEL_38:
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_42;
    }
    v30 = (__int64)&v27->vtable[*v29];
  }
  else
  {
LABEL_42:
    v30 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return i & v26;
}


bool ShopMaster__IsEventCloseWithItemPurchase(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__int__o *v7; // x21
  int32_t v8; // w22
  DataManager_o *v9; // x24
  Il2CppObject *MasterData_object; // x25
  int m_CancellationTokenSource_high; // w25
  bool v12; // w0
  int32_t m_CachedPtr_high; // w1
  int32_t v14; // w8
  const MethodInfo_3449A38 *v15; // x3
  int32_t v16; // w2
  unsigned int Count; // w0
  __int64 v18; // x19
  int v19; // w8
  unsigned int v20; // w10
  int v21; // w11
  int32_t value; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4CB6E30 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__int__CopyTo__);
    byte_4CB6E30 = 1;
  }
  value = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_3449074 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_27;
  v8 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                  (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    if ( v8 >= (int)Instance )
      break;
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                  v8,
                                  (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    if ( !Instance )
      goto LABEL_27;
    v9 = Instance;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) == eventId )
    {
      value = 0;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_27;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CB002A )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB002A = 1;
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
                                    v9->fields.m_CachedPtr,
                                    0);
      if ( !Instance || !v7 )
        goto LABEL_27;
      m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
      v12 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
              v7,
              HIDWORD(v9->fields.m_CachedPtr),
              &value,
              (const MethodInfo_344B0D0 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
      m_CachedPtr_high = HIDWORD(v9->fields.m_CachedPtr);
      if ( v12 )
      {
        System_Collections_Generic_Dictionary_int__int___Remove(
          v7,
          m_CachedPtr_high,
          (const MethodInfo_344ADF0 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
        v14 = value;
        if ( value < 0 )
        {
          v14 = -value;
          value = -value;
        }
        m_CachedPtr_high = HIDWORD(v9->fields.m_CachedPtr);
        v15 = (const MethodInfo_3449A38 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v16 = v14 + m_CancellationTokenSource_high;
      }
      else
      {
        v15 = (const MethodInfo_3449A38 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v16 = -m_CancellationTokenSource_high;
      }
      System_Collections_Generic_Dictionary_int__int___Add(v7, m_CachedPtr_high, v16, v15);
    }
    Instance = (DataManager_o *)this->fields.list;
    ++v8;
    if ( !Instance )
      goto LABEL_27;
  }
  if ( !v7 )
    goto LABEL_27;
  if ( !System_Collections_Generic_Dictionary_int__int___get_Count(
          v7,
          (const MethodInfo_34496EC *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) )
  {
LABEL_39:
    LOBYTE(Instance) = 1;
    return (char)Instance;
  }
  Count = System_Collections_Generic_Dictionary_int__int___get_Count(
            v7,
            (const MethodInfo_34496EC *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
  v18 = sub_1C6BAB0(int___TypeInfo, Count);
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__int___get_Values(
                                v7,
                                (const MethodInfo_344984C *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
  if ( !Instance
    || (System_Collections_Generic_Dictionary_ValueCollection_int__int___CopyTo(
          (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
          (System_Int32_array *)v18,
          0,
          (const MethodInfo_3B3BA30 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__int__CopyTo__),
        !v18) )
  {
LABEL_27:
    sub_1C6BC60(Instance, v6);
  }
  v19 = *(_DWORD *)(v18 + 24);
  if ( v19 < 1 )
    goto LABEL_39;
  v20 = 0;
  do
  {
    if ( v20 >= v19 )
      sub_1C6BC68(Instance);
    v21 = *(_DWORD *)(v18 + 4LL * (int)v20 + 32);
    Instance = (DataManager_o *)(v21 > 0);
    if ( v21 < 1 )
      break;
  }
  while ( v19 - 1 != v20++ );
  return (char)Instance;
}


bool ShopMaster__IsEventShopOpen(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x4
  _BOOL4 v7; // w21
  Il2CppObject *v8; // x20
  _BOOL4 v9; // w20
  const MethodInfo *v11; // x2
  int v12; // w8
  Il2CppObject *v13; // x20
  const MethodInfo *v14; // x2
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x21
  System_Func_object__bool__o *v16; // x22
  Il2CppObject *v17; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-50h] BYREF
  int64_t closedAt; // [xsp+18h] [xbp-48h] BYREF
  int64_t openedAt; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4CB6E35 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_All_ShopEntity___);
    sub_1C6BA08(&System_Func_ShopEntity__bool__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&TitleInfoControl_TypeInfo);
    sub_1C6BA08(&Method_ShopMaster___c__DisplayClass25_0__IsEventShopOpen_b__0__);
    sub_1C6BA08(&ShopMaster___c__DisplayClass25_0_TypeInfo);
    byte_4CB6E35 = 1;
  }
  openedAt = 0;
  entity = 0;
  closedAt = 0;
  v17 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_39;
  ShopMaster__GetEnableEventPeriod((ShopMaster_o *)Instance, &openedAt, &closedAt, eventId, v6);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_33F9128 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( closedAt < 1 )
    goto LABEL_12;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_39;
  if ( EventEntity__isPurchaseEventOpen((EventEntity_o *)entity, 0) )
  {
LABEL_12:
    v7 = 0;
  }
  else
  {
    v13 = (Il2CppObject *)sub_1C6BC54(ShopMaster___c__DisplayClass25_0_TypeInfo);
    System_Object___ctor(v13, 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopMaster___);
    if ( !Instance )
      goto LABEL_39;
    EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                              (ShopMaster_o *)Instance,
                                                                              eventId,
                                                                              v14);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager__getTime(0);
    if ( !v13 )
      goto LABEL_39;
    v13[1].klass = (Il2CppClass *)Instance;
    if ( !entity )
      goto LABEL_39;
    if ( (__int64)Instance <= (__int64)entity[6].monitor )
    {
      v16 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_ShopEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(v16, v13, Method_ShopMaster___c__DisplayClass25_0__IsEventShopOpen_b__0__, 0);
      v7 = System_Linq_Enumerable__All_object_(
             EventEntitiyList,
             (System_Func_TSource__bool__o *)v16,
             (const MethodInfo_3145818 *)Method_System_Linq_Enumerable_All_ShopEntity___);
    }
    else
    {
      v7 = 1;
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v17,
          eventId,
          (const MethodInfo_33F9128 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_22;
  Instance = (DataManager_o *)v17;
  if ( !v17 )
    goto LABEL_39;
  if ( EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)v17, 0) )
  {
    v8 = v17;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
    v9 = !TitleInfoControl__IsEnableEventShopButton_40140312((EventDetailEntity_o *)v8, 0);
  }
  else
  {
LABEL_22:
    v9 = 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
  {
LABEL_39:
    sub_1C6BC60(Instance, v5);
  }
  v12 = ShopMaster__CloseLimitEventShop((ShopMaster_o *)Instance, eventId, v11) || v9;
  return (v12 | v7) == 0;
}


bool ShopMaster__IsHideItem(ShopMaster_o *this, int32_t eventId, int32_t id, const MethodInfo *method)
{
  EventItemDisplayEntity_array *Instance; // x0
  __int64 v7; // x1
  int max_length; // w8
  __int64 v9; // x9
  EventItemDisplayEntity_o *v10; // x11

  if ( (byte_4CB6E2B & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventItemDisplayMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6E2B = 1;
  }
  Instance = (EventItemDisplayEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventItemDisplayEntity_array *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventItemDisplayMaster___)) == 0 )
  {
LABEL_15:
    sub_1C6BC60(Instance, v7);
  }
  Instance = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
               (EventItemDisplayMaster_o *)Instance,
               eventId,
               8,
               0,
               0);
  if ( !Instance )
    return 1;
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 1;
  v9 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= max_length )
      sub_1C6BC68(Instance);
    v10 = Instance->m_Items[v9];
    if ( !v10 )
      goto LABEL_15;
    if ( v10->fields.targetId == id && v10->fields.pointType == 1 )
      return 0;
    if ( (int)++v9 >= max_length )
      return 1;
  }
}


bool ShopMaster__IsOpenPurchaseCloseShop(ShopMaster_o *this, ShopEntity_o *shopEntity, const MethodInfo *method)
{
  ShopMaster_o *v4; // x20
  int32_t eventId; // w21
  Il2CppObject *Entity; // x0

  v4 = this;
  if ( (byte_4CB6E2C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    this = (ShopMaster_o *)sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    byte_4CB6E2C = 1;
  }
  if ( !shopEntity )
    goto LABEL_13;
  eventId = shopEntity->fields.eventId;
  if ( eventId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ShopMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( this )
    {
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 eventId,
                 (const MethodInfo_33F90DC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( Entity && EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)Entity, 0) )
        return ShopMaster__IsPurchaseCloseEventShopItem(v4, shopEntity->fields.baseShopId, method);
      return 0;
    }
LABEL_13:
    sub_1C6BC60(this, shopEntity);
  }
  if ( shopEntity->fields.shopType != 16 )
    return ShopMaster__IsPurchaseCloseEventShopItem(v4, shopEntity->fields.baseShopId, method);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool ShopMaster__IsPurchaseCloseEventShopItem(ShopMaster_o *this, int32_t baseShopId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w22
  int32_t v8; // w23
  System_Collections_ObjectModel_Collection_T__o *v9; // x20
  const MethodInfo *v11; // x2
  ShopReleaseMaster_o *v12; // x21
  int32_t TargetShopGroupId; // w22
  const MethodInfo *v14; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  const MethodInfo *v16; // x3
  Il2CppObject *MasterData_object; // x21
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4CB6E2E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6E2E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count < 1 )
    return 1;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_29;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    if ( !list )
      goto LABEL_29;
    v9 = list;
    if ( HIDWORD(list->fields.items) == baseShopId )
      break;
    if ( v7 == ++v8 )
      return 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_29;
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)list,
                                                             (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
  if ( !list )
    goto LABEL_29;
  v12 = (ShopReleaseMaster_o *)list;
  TargetShopGroupId = ShopReleaseMaster__GetTargetShopGroupId((ShopReleaseMaster_o *)list, baseShopId, v11);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_29;
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)list,
                                                             (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !list )
    goto LABEL_29;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)list, TargetShopGroupId, v14);
  if ( TargetEntityList && TargetEntityList->max_length )
    return ShopReleaseMaster__CondClearCheck(v12, baseShopId, 82, v16);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_29:
    sub_1C6BC60(list, *(_QWORD *)&baseShopId);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       (int64_t)list[7].fields.items[4].klass,
                       baseShopId,
                       0);
  return EntityDefinitely && EntityDefinitely->fields.num >= SLODWORD(v9[3].fields.items);
}


bool ShopMaster__PurchaseCloseEventShop(ShopMaster_o *this, ShopEntity_o *shopEntity, const MethodInfo *method)
{
  int32_t eventId; // w20
  Il2CppObject *Entity; // x0

  if ( (byte_4CB6E2D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    this = (ShopMaster_o *)sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    byte_4CB6E2D = 1;
  }
  if ( !shopEntity )
    goto LABEL_11;
  eventId = shopEntity->fields.eventId;
  if ( !eventId )
    return shopEntity->fields.shopType == 12;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ShopMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !this )
LABEL_11:
    sub_1C6BC60(this, shopEntity);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             eventId,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
    return EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)Entity, 0);
  return shopEntity->fields.shopType == 12;
}


void ShopMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB6E36 & 1) == 0 )
  {
    sub_1C6BA08(&ShopMaster___c_TypeInfo);
    byte_4CB6E36 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(ShopMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ShopMaster___c_TypeInfo->static_fields->__9 = (struct ShopMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)ShopMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ShopMaster___c___ctor(ShopMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ShopMaster___c___GetEnableEntitiyList_b__1_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C6BC60(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t ShopMaster___c___GetEnableEntitiyList_b__2_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C6BC60(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t ShopMaster___c___GetEnableEntitiyList_b__3_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C6BC60(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t ShopMaster___c___GetEnableEventEntitiyList_b__6_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C6BC60(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t ShopMaster___c___GetEnableEventEntityList_b__7_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C6BC60(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t ShopMaster___c___GetEnableExchangeSvtCoinEntitiyList_b__8_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C6BC60(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t ShopMaster___c___GetEventEntitiyList_b__4_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C6BC60(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t ShopMaster___c___GetEventItemList_b__12_0(
        ShopMaster___c_o *this,
        ItemEntity_o *a,
        ItemEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C6BC60(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t ShopMaster___c___GetOpenedEventEntitiyList_b__5_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C6BC60(this, a);
  return a->fields.priority - b->fields.priority;
}


void ShopMaster___c__DisplayClass25_0___ctor(ShopMaster___c__DisplayClass25_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ShopMaster___c__DisplayClass25_0___IsEventShopOpen_b__0(
        ShopMaster___c__DisplayClass25_0_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.closedAt < this->fields.nowTime;
}