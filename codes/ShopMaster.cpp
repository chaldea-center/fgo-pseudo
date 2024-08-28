void __fastcall ShopMaster___ctor(ShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A203B9 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_ShopMaster__ShopEntity__int___ctor__, method);
    byte_4A203B9 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    43,
    (const MethodInfo_30F8720 *)Method_DataMasterBase_ShopMaster__ShopEntity__int___ctor__);
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

  if ( (byte_4A203C2 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_1B715CC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A203C2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        v11 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v11,
          (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__),
        (list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)list,
                                                                   (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (list = (System_Collections_ObjectModel_Collection_T__o *)DataMasterBase_object__object__int___GetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)list,
                                                                   eventId,
                                                                   (const MethodInfo_30F8760 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B71828(list, *(_QWORD *)&eventId);
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

  if ( (byte_4A203CD & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B715CC(&ShopEntity_TypeInfo, v8);
    byte_4A203CD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    sub_1B71828(list, *(_QWORD *)&eventId);
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
  __int64 v22; // x1
  int64_t v23; // x23
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
  ShopEntity_o *v35; // x0
  ShopEntity_o *v36; // x24
  __int64 methodPtr_low; // x9
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
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
  int32_t v55; // w3

  if ( (byte_4A203BA & 1) == 0 )
  {
    sub_1B715CC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&purchaseType);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1B715CC(&System_Comparison_ShopEntity__TypeInfo, v8);
    sub_1B715CC(&System_IDisposable_TypeInfo, v9);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__Add__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v15);
    sub_1B715CC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v16);
    sub_1B715CC(&NetworkManager_TypeInfo, v17);
    sub_1B715CC(&ShopEntity_TypeInfo, v18);
    sub_1B715CC(&Method_ShopMaster___c__GetEnableEntitiyList_b__1_0__, v19);
    sub_1B715CC(&ShopMaster___c_TypeInfo, v20);
    byte_4A203BA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_50;
  v23 = (int64_t)Time;
  System_Collections_ObjectModel_Collection_object___get_Count(
    (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
    (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Time )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_3096080 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B71828(0LL, v25);
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
      p_method = sub_1BC35AC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v34 = sub_1BC35AC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                            Enumerator,
                            *(_QWORD *)(v34 + 8));
    v36 = v35;
    if ( v35 )
    {
      methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v35->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopEntity_c *)v35->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
      {
        sub_1B71AE8(v35);
        goto LABEL_50;
      }
      if ( !v35->fields.eventId
        && (purchaseType < 1 || v35->fields.purchaseType == purchaseType)
        && v35->fields.shopType == shopType
        && ShopEntity__IsEnable(v35, v23, 0LL) )
      {
        IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v36, 0LL);
        if ( !IsHiddenInCaseOfBuying )
        {
          if ( !v24 )
            sub_1B71828(IsHiddenInCaseOfBuying, v39);
          items = v24->fields._items;
          v43 = Method_System_Collections_Generic_List_ShopEntity__Add__;
          ++v24->fields._version;
          if ( !items )
            sub_1B71828(IsHiddenInCaseOfBuying, v39);
          size = v24->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v24,
              (Il2CppObject *)v36,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = &items->obj.klass + size;
            v24->fields._size = size + 1;
            v45[4] = (Il2CppClass *)v36;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v36, v40, v41);
          }
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
        goto LABEL_39;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_39:
    v49 = sub_1BC35AC(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
    _9__1_0 = (System_Comparison_T__o *)sub_1B71818(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(_9__1_0, v52, Method_ShopMaster___c__GetEnableEntitiyList_b__1_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_ShopEntity__o *)_9__1_0;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v54, v55);
  }
  if ( !v24 )
LABEL_50:
    sub_1B71828(Time, v22);
  System_Collections_Generic_List_object___Sort_55385380(
    v24,
    _9__1_0,
    (const MethodInfo_34D1D24 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v24,
                               (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEntitiyList_39614916(
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
  __int64 v24; // x1
  int64_t v25; // x25
  System_Collections_Generic_List_object__o *v26; // x19
  __int64 v27; // x1
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
  ShopEntity_o *v38; // x26
  __int64 methodPtr_low; // x9
  const MethodInfo *v40; // x2
  _BOOL8 IsOpenPurchaseCloseShop; // x0
  __int64 v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
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
  int32_t v58; // w3

  if ( (byte_4A203BB & 1) == 0 )
  {
    sub_1B715CC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&purchaseType);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9);
    sub_1B715CC(&System_Comparison_ShopEntity__TypeInfo, v10);
    sub_1B715CC(&System_IDisposable_TypeInfo, v11);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__Add__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v16);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v17);
    sub_1B715CC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v18);
    sub_1B715CC(&NetworkManager_TypeInfo, v19);
    sub_1B715CC(&ShopEntity_TypeInfo, v20);
    sub_1B715CC(&Method_ShopMaster___c__GetEnableEntitiyList_b__2_0__, v21);
    sub_1B715CC(&ShopMaster___c_TypeInfo, v22);
    byte_4A203BB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_51;
  v25 = (int64_t)Time;
  System_Collections_ObjectModel_Collection_object___get_Count(
    (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
    (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Time )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_3096080 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B71828(0LL, v27);
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
      p_method = sub_1BC35AC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v36 = sub_1BC35AC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v37 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                            Enumerator,
                            *(_QWORD *)(v36 + 8));
    v38 = v37;
    if ( v37 )
    {
      methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v37->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopEntity_c *)v37->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
      {
        sub_1B71AE8(v37);
        goto LABEL_51;
      }
      if ( ShopEntity__checkFlag(v37, flag, 0LL)
        && (purchaseType < 1 || v38->fields.purchaseType == purchaseType)
        && v38->fields.shopType == shopType
        && ShopEntity__IsEnable(v38, v25, 0LL)
        && !ShopEntity__IsHiddenInCaseOfBuying(v38, 0LL) )
      {
        IsOpenPurchaseCloseShop = ShopMaster__IsOpenPurchaseCloseShop(this, v38, v40);
        if ( !IsOpenPurchaseCloseShop )
        {
          if ( !v26 )
            sub_1B71828(IsOpenPurchaseCloseShop, v42);
          items = v26->fields._items;
          v46 = Method_System_Collections_Generic_List_ShopEntity__Add__;
          ++v26->fields._version;
          if ( !items )
            sub_1B71828(IsOpenPurchaseCloseShop, v42);
          size = v26->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              (Il2CppObject *)v38,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v48 = &items->obj.klass + size;
            v26->fields._size = size + 1;
            v48[4] = (Il2CppClass *)v38;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)v38, v43, v44);
          }
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
        goto LABEL_40;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_40:
    v52 = sub_1BC35AC(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
    _9__2_0 = (System_Comparison_T__o *)sub_1B71818(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(_9__2_0, v55, Method_ShopMaster___c__GetEnableEntitiyList_b__2_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_ShopEntity__o *)_9__2_0;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v57, v58);
  }
  if ( !v26 )
LABEL_51:
    sub_1B71828(Time, v24);
  System_Collections_Generic_List_object___Sort_55385380(
    v26,
    _9__2_0,
    (const MethodInfo_34D1D24 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v26,
                               (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEntitiyList_39616588(
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
  __int64 v22; // x1
  int64_t v23; // x23
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
  ShopEntity_o *v35; // x0
  ShopEntity_o *v36; // x24
  __int64 methodPtr_low; // x9
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
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
  int32_t v55; // w3

  if ( (byte_4A203BC & 1) == 0 )
  {
    sub_1B715CC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&purchaseType);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1B715CC(&System_Comparison_ShopEntity__TypeInfo, v8);
    sub_1B715CC(&System_IDisposable_TypeInfo, v9);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__Add__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v15);
    sub_1B715CC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v16);
    sub_1B715CC(&NetworkManager_TypeInfo, v17);
    sub_1B715CC(&ShopEntity_TypeInfo, v18);
    sub_1B715CC(&Method_ShopMaster___c__GetEnableEntitiyList_b__3_0__, v19);
    sub_1B715CC(&ShopMaster___c_TypeInfo, v20);
    byte_4A203BC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_50;
  v23 = (int64_t)Time;
  System_Collections_ObjectModel_Collection_object___get_Count(
    (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
    (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Time )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_3096080 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B71828(0LL, v25);
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
      p_method = sub_1BC35AC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v34 = sub_1BC35AC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                            Enumerator,
                            *(_QWORD *)(v34 + 8));
    v36 = v35;
    if ( v35 )
    {
      methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v35->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopEntity_c *)v35->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
      {
        sub_1B71AE8(v35);
        goto LABEL_50;
      }
      if ( !v35->fields.eventId
        && (purchaseType < 1 || v35->fields.purchaseType == purchaseType)
        && v35->fields.payType == payType
        && ShopEntity__IsEnable(v35, v23, 0LL) )
      {
        IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v36, 0LL);
        if ( !IsHiddenInCaseOfBuying )
        {
          if ( !v24 )
            sub_1B71828(IsHiddenInCaseOfBuying, v39);
          items = v24->fields._items;
          v43 = Method_System_Collections_Generic_List_ShopEntity__Add__;
          ++v24->fields._version;
          if ( !items )
            sub_1B71828(IsHiddenInCaseOfBuying, v39);
          size = v24->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v24,
              (Il2CppObject *)v36,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = &items->obj.klass + size;
            v24->fields._size = size + 1;
            v45[4] = (Il2CppClass *)v36;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v36, v40, v41);
          }
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
        goto LABEL_39;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_39:
    v49 = sub_1BC35AC(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
    _9__3_0 = (System_Comparison_T__o *)sub_1B71818(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v52, Method_ShopMaster___c__GetEnableEntitiyList_b__3_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ShopEntity__o *)_9__3_0;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v54, v55);
  }
  if ( !v24 )
LABEL_50:
    sub_1B71828(Time, v22);
  System_Collections_Generic_List_object___Sort_55385380(
    v24,
    _9__3_0,
    (const MethodInfo_34D1D24 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v24,
                               (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  System_Collections_Generic_List_object__o *v17; // x21
  __int64 v18; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v21; // w23
  int32_t v22; // w24
  ShopEntity_o *Item; // x0
  Il2CppObject *v24; // x25
  __int64 methodPtr_low; // x10
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Comparison_T__o *v32; // x19
  Il2CppObject *v33; // x20
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3

  if ( (byte_4A203BF & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B715CC(&System_Comparison_ShopEntity__TypeInfo, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__Add__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v10);
    sub_1B715CC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v11);
    sub_1B715CC(&NetworkManager_TypeInfo, v12);
    sub_1B715CC(&ShopEntity_TypeInfo, v13);
    sub_1B715CC(&Method_ShopMaster___c__GetEnableEventEntitiyList_b__6_0__, v14);
    sub_1B715CC(&ShopMaster___c_TypeInfo, v15);
    byte_4A203BF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)list,
                               v22,
                               (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v24 = (Il2CppObject *)Item;
        methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopEntity_TypeInfo
          && Item->fields.eventId == eventId )
        {
          list = (void *)ShopEntity__IsEnable(Item, Time, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v17 )
              break;
            items = v17->fields._items;
            v29 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v17->fields._version;
            if ( !items )
              break;
            size = v17->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                v24,
                *(const MethodInfo_34D0260 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
            }
            else
            {
              v31 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v31[4] = (Il2CppClass *)v24;
              sub_1B71570((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v24, v26, v27);
            }
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1B71828(list, v18);
  }
LABEL_20:
  list = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    list = ShopMaster___c_TypeInfo;
  }
  v32 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 48LL);
  if ( !v32 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ShopMaster___c_TypeInfo;
    }
    v33 = (Il2CppObject *)**((_QWORD **)list + 23);
    v32 = (System_Comparison_T__o *)sub_1B71818(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(v32, v33, Method_ShopMaster___c__GetEnableEventEntitiyList_b__6_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_ShopEntity__o *)v32;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)v32, v35, v36);
  }
  if ( !v17 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_55385380(
    v17,
    v32,
    (const MethodInfo_34D1D24 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v17,
                               (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  System_Collections_Generic_List_object__o *v19; // x22
  __int64 v20; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v23; // w24
  int32_t v24; // w25
  Il2CppObject *Item; // x0
  ShopEntity_o *v26; // x26
  __int64 methodPtr_low; // x10
  int32_t v28; // w2
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

  if ( (byte_4A203C0 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B715CC(&System_Comparison_ShopEntity__TypeInfo, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__Add__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v12);
    sub_1B715CC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v13);
    sub_1B715CC(&NetworkManager_TypeInfo, v14);
    sub_1B715CC(&ShopEntity_TypeInfo, v15);
    sub_1B715CC(&Method_ShopMaster___c__GetEnableEventEntityList_b__7_0__, v16);
    sub_1B715CC(&ShopMaster___c_TypeInfo, v17);
    byte_4A203C0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    v24 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v24,
               (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v26 = (ShopEntity_o *)Item;
        methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopEntity_TypeInfo
          && LODWORD(Item[1].monitor) == eventId
          && LODWORD(Item[2].monitor) == slot
          && ShopEntity__IsEnable((ShopEntity_o *)Item, Time, 0LL) )
        {
          list = (void *)ShopEntity__IsHiddenInCaseOfBuyingShopId(v26, 0LL);
          if ( ((unsigned __int8)list & 1) == 0 )
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
                (Il2CppObject *)v26,
                *(const MethodInfo_34D0260 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v33[4] = (Il2CppClass *)v26;
              sub_1B71570((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v26, v28, v29);
            }
          }
        }
      }
      if ( v23 == ++v24 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1B71828(list, v20);
  }
LABEL_22:
  list = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    list = ShopMaster___c_TypeInfo;
  }
  v34 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 56LL);
  if ( !v34 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ShopMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)**((_QWORD **)list + 23);
    v34 = (System_Comparison_T__o *)sub_1B71818(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(v34, v35, Method_ShopMaster___c__GetEnableEventEntityList_b__7_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_ShopEntity__o *)v34;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)v34, v37, v38);
  }
  if ( !v19 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_55385380(
    v19,
    v34,
    (const MethodInfo_34D1D24 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v19,
                               (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *v14; // x23
  int32_t Count; // w0
  int32_t v16; // w24
  int32_t v17; // w25
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  int64_t klass; // x8
  int64_t monitor; // x8

  if ( (byte_4A203C3 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, openedAt);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B715CC(&NetworkManager_TypeInfo, v10);
    sub_1B715CC(&ShopEntity_TypeInfo, v11);
    byte_4A203C3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  *openedAt = -1LL;
  *closedAt = -1LL;
  if ( !this->fields.list )
    goto LABEL_25;
  v14 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Time )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               Time,
               v17,
               (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopEntity_TypeInfo
          && LODWORD(Item[1].monitor) == eventId )
        {
          klass = (int64_t)Item[8].klass;
          if ( klass <= (__int64)v14 )
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
      if ( v16 == ++v17 )
        return (*openedAt & 0x8000000000000000LL) == 0 && *closedAt >= 0;
    }
LABEL_25:
    sub_1B71828(Time, v13);
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
  __int64 baseShopId; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_int__o *v21; // x21
  System_Collections_Generic_List_int__o *v22; // x20
  int32_t Count; // w0
  int32_t v24; // w24
  int32_t i; // w25
  ShopEntity_o *Item; // x0
  ShopEntity_o *v27; // x26
  __int64 methodPtr_low; // x10
  __int64 v29; // x8
  const MethodInfo *v30; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  char *v34; // x8
  struct System_Int32_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  System_Collections_Generic_List_int__o *v39; // x0
  int v40; // w24
  int32_t v41; // w22
  int32_t v42; // w23
  const MethodInfo *v43; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A203C1 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B715CC(&Method_DataManager_GetMasterData_EventMaster___, v4);
    sub_1B715CC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1B715CC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Sort__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B715CC(&NetworkManager_TypeInfo, v14);
    sub_1B715CC(&ShopEntity_TypeInfo, v15);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4A203C1 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EventMaster___);
  v21 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
  v22 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_50;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    for ( i = 0; v24 != i; ++i )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_50;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)Instance,
                               i,
                               (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v27 = Item;
        methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopEntity_TypeInfo )
        {
          if ( Item->fields.eventId )
          {
            Instance = (void *)ShopEntity__IsEnable(Item, Time, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !MasterData_object )
                goto LABEL_50;
              Instance = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           v27->fields.eventId,
                           (const MethodInfo_30F8760 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
              if ( !Instance )
                goto LABEL_50;
              v29 = *((_QWORD *)Instance + 13);
              if ( v29 >= 1 && v29 >= Time && *((_QWORD *)Instance + 11) <= Time )
              {
                if ( !v21 )
                  goto LABEL_50;
                if ( !System_Collections_Generic_List_int___Contains(
                        v21,
                        v27->fields.baseShopId,
                        (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__) )
                {
                  Instance = (void *)ShopMaster__CheckBuyAfterCloseShop(this, v27->fields.eventId, v30);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    baseShopId = (unsigned int)v27->fields.baseShopId;
                    items = v21->fields._items;
                    v32 = Method_System_Collections_Generic_List_int__Add__;
                    ++v21->fields._version;
                    if ( !items )
                      goto LABEL_50;
                    size = v21->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      v38 = v32[4];
                      v39 = v21;
LABEL_36:
                      System_Collections_Generic_List_int___AddWithResize(
                        v39,
                        baseShopId,
                        *(const MethodInfo_34B323C **)(*(_QWORD *)(v38 + 192) + 112LL));
                      continue;
                    }
                    v34 = (char *)items + 4 * size;
                    v21->fields._size = size + 1;
LABEL_33:
                    *((_DWORD *)v34 + 8) = baseShopId;
                    continue;
                  }
                  if ( !v22 )
                    goto LABEL_50;
                  Instance = (void *)System_Collections_Generic_List_int___Contains(
                                       v22,
                                       v27->fields.eventId,
                                       (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( ((unsigned __int8)Instance & 1) == 0 )
                  {
                    baseShopId = (unsigned int)v27->fields.eventId;
                    v35 = v22->fields._items;
                    v36 = Method_System_Collections_Generic_List_int__Add__;
                    ++v22->fields._version;
                    if ( !v35 )
                      goto LABEL_50;
                    v37 = v22->fields._size;
                    if ( (unsigned int)v37 >= v35->max_length )
                    {
                      v38 = v36[4];
                      v39 = v22;
                      goto LABEL_36;
                    }
                    v34 = (char *)v35 + 4 * v37;
                    v22->fields._size = v37 + 1;
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
  if ( v21 )
  {
    v40 = v21->fields._size;
    if ( v40 >= 1 )
    {
      v41 = 0;
      while ( 1 )
      {
        v42 = System_Collections_Generic_List_int___get_Item(
                v21,
                v41,
                (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !ShopMaster__IsPurchaseCloseEventShopItem(this, v42, v43) )
        {
          Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               &entity,
                               v42,
                               (const MethodInfo_30F87B4 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            break;
        }
        if ( v40 == ++v41 )
          goto LABEL_43;
      }
      if ( entity )
        return (int32_t)entity[1].monitor;
LABEL_50:
      sub_1B71828(Instance, baseShopId);
    }
  }
LABEL_43:
  if ( !v22 || v22->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_int___Sort(
    v22,
    (const MethodInfo_34B4B80 *)Method_System_Collections_Generic_List_int__Sort__);
  return System_Collections_Generic_List_int___get_Item(
           v22,
           0,
           (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__);
}


ShopEntity_o *__fastcall ShopMaster__GetEntityOfFragmentsShop(ShopMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  ShopEntity_o *v18; // x0
  __int64 v19; // x1
  ShopEntity_o *v20; // x21
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4A203CC & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B715CC(&System_IDisposable_TypeInfo, v3);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v4);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1B715CC(&ShopEntity_TypeInfo, v6);
    byte_4A203CC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B71828(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3096080 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B71828(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BC35AC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BC35AC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                            Enumerator,
                            *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v18->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ShopEntity_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
    {
      sub_1B71AE8(v18);
LABEL_33:
      sub_1B71828(v18, v19);
    }
    if ( v18->fields.shopType == 6 && v18->fields.payType == 8 )
      goto LABEL_25;
  }
  v20 = 0LL;
LABEL_25:
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_29;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_29:
    v25 = sub_1BC35AC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v20;
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
  Il2CppClass *v16; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v19; // w22
  int32_t v20; // w23
  int32_t v21; // w2
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

  if ( (byte_4A203BD & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B715CC(&System_Comparison_ShopEntity__TypeInfo, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__Add__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v10);
    sub_1B715CC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v11);
    sub_1B715CC(&ShopEntity_TypeInfo, v12);
    sub_1B715CC(&Method_ShopMaster___c__GetEventEntitiyList_b__4_0__, v13);
    sub_1B715CC(&ShopMaster___c_TypeInfo, v14);
    byte_4A203BD = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v20,
               (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = (Il2CppClass *)list;
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
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v27[4] = v16;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v16, v21, v22);
          }
        }
      }
      if ( v19 == ++v20 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B71828(list, v16);
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
    v28 = (System_Comparison_T__o *)sub_1B71818(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(v28, v29, Method_ShopMaster___c__GetEventEntitiyList_b__4_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ShopEntity__o *)v28;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)v28, v31, v32);
  }
  if ( !v15 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_55385380(
    v15,
    v28,
    (const MethodInfo_34D1D24 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v15,
                               (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  Il2CppObject *IsHideItem; // x0
  __int64 v37; // x1
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
  ShopMaster___c_c *v62; // x8
  System_Comparison_T__o *_9__11_0; // x20
  Il2CppObject *v64; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  __int64 v68; // x21
  unsigned __int64 v69; // x22

  if ( (byte_4A203C4 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1B715CC(&System_Comparison_ItemEntity__TypeInfo, v6);
    sub_1B715CC(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_1B715CC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    sub_1B715CC(&System_IDisposable_TypeInfo, v9);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B715CC(&int___TypeInfo, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_ItemEntity__Add__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v16);
    sub_1B715CC(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v17);
    sub_1B715CC(&System_Collections_Generic_List_ItemEntity__TypeInfo, v18);
    sub_1B715CC(&ShopEntity_TypeInfo, v19);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B715CC(&Method_ShopMaster___c__GetEventItemList_b__11_0__, v21);
    sub_1B715CC(&ShopMaster___c_TypeInfo, v22);
    byte_4A203C4 = 1;
  }
  if ( eventId < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_81;
  if ( !System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_81;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ItemMaster___);
  v25 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_81;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3096080 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B71828(0LL, v26);
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
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_1BC35AC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_20;
      }
      v35 = (__int64)&v32->vtable[*v34].method;
    }
    else
    {
LABEL_20:
      v35 = sub_1BC35AC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    IsHideItem = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                   Enumerator,
                                   *(_QWORD *)(v35 + 8));
    v39 = IsHideItem;
    if ( !IsHideItem )
      sub_1B71828(0LL, v37);
    v40 = ShopEntity_TypeInfo;
    methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(IsHideItem->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (ShopEntity_c *)IsHideItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
    {
      sub_1B71AE8(IsHideItem);
      goto LABEL_81;
    }
    if ( LODWORD(IsHideItem[1].monitor) == eventId )
    {
      v42 = IsHideItem[2].klass;
      if ( !v42 )
        sub_1B71828(IsHideItem, ShopEntity_TypeInfo);
      if ( (int)v42->_1.namespaze >= 1 )
      {
        v43 = 0LL;
        namespaze = (unsigned int)v42->_1.namespaze;
        while ( 1 )
        {
          if ( v43 >= LODWORD(v42->_1.namespaze) )
            sub_1B71830(IsHideItem, v40);
          v45 = *((_DWORD *)&v42->_1.byval_arg.data + v43);
          if ( v45 >= 1 )
          {
            IsHideItem = (Il2CppObject *)ShopMaster__IsHideItem((ShopMaster_o *)IsHideItem, eventId, v45, v38);
            if ( ((unsigned __int8)IsHideItem & 1) == 0 )
            {
              if ( !v25 )
                sub_1B71828(IsHideItem, v40);
              if ( v25->fields._size < 1 )
              {
LABEL_40:
                v48 = v39[2].klass;
                if ( !v48 )
                  sub_1B71828(IsHideItem, v40);
                if ( v43 >= LODWORD(v48->_1.namespaze) )
                  sub_1B71830(IsHideItem, v40);
                if ( !MasterData_object )
                  sub_1B71828(IsHideItem, v40);
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           *((_DWORD *)&v48->_1.byval_arg.data + v43),
                           (const MethodInfo_30F8760 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                v52 = Entity;
                items = v25->fields._items;
                v54 = Method_System_Collections_Generic_List_ItemEntity__Add__;
                ++v25->fields._version;
                if ( !items )
                  sub_1B71828(Entity, Entity);
                size = v25->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v25,
                    Entity,
                    *(const MethodInfo_34D0260 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
                }
                else
                {
                  v56 = &items->obj.klass + size;
                  v25->fields._size = size + 1;
                  v56[4] = (Il2CppClass *)v52;
                  sub_1B71570((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v52, v50, v51);
                }
              }
              else
              {
                v46 = 0;
                while ( 1 )
                {
                  IsHideItem = System_Collections_Generic_List_object___get_Item(
                                 v25,
                                 v46,
                                 (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
                  if ( !IsHideItem )
                    sub_1B71828(0LL, v40);
                  v47 = v39[2].klass;
                  if ( !v47 )
                    sub_1B71828(IsHideItem, v40);
                  if ( v43 >= LODWORD(v47->_1.namespaze) )
                    sub_1B71830(IsHideItem, v40);
                  if ( LODWORD(IsHideItem[1].klass) == *((_DWORD *)&v47->_1.byval_arg.data + v43) )
                    break;
                  if ( ++v46 >= v25->fields._size )
                    goto LABEL_40;
                }
              }
            }
          }
          if ( ++v43 == namespaze )
            break;
          v42 = v39[2].klass;
          if ( !v42 )
            sub_1B71828(IsHideItem, v40);
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
    v61 = sub_1BC35AC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(
                                                             Enumerator,
                                                             *(_QWORD *)(v61 + 8));
  v62 = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v62 = ShopMaster___c_TypeInfo;
  }
  _9__11_0 = (System_Comparison_T__o *)v62->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      v62 = ShopMaster___c_TypeInfo;
    }
    v64 = (Il2CppObject *)v62->static_fields->__9;
    _9__11_0 = (System_Comparison_T__o *)sub_1B71818(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_object____ctor(_9__11_0, v64, Method_ShopMaster___c__GetEventItemList_b__11_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_ItemEntity__o *)_9__11_0;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v66, v67);
  }
  if ( !v25 )
LABEL_81:
    sub_1B71828(list, *(_QWORD *)&eventId);
  System_Collections_Generic_List_object___Sort_55385380(
    v25,
    _9__11_0,
    (const MethodInfo_34D1D24 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v68 = (unsigned int)v25->fields._size;
  v57 = (System_Int32_array *)sub_1B71674(int___TypeInfo, (unsigned int)v68);
  if ( (int)v68 >= 1 )
  {
    v69 = 0LL;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v25,
                                                                 v69,
                                                                 (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !list || !v57 )
        break;
      if ( v69 >= v57->max_length )
        sub_1B71830(list, *(_QWORD *)&eventId);
      v57->m_Items[++v69] = (int32_t)list->fields.items;
      if ( v68 == v69 )
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  __int64 v10; // x8
  ShopEntity_o *v11; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A203C9 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A203C9 = 1;
  }
  entity = 0LL;
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_30F87B4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
  v10 = *(_QWORD *)&Instance->max_length;
  if ( !v10 )
  {
LABEL_13:
    LODWORD(Instance) = 0;
    return (int)Instance;
  }
  if ( !(_DWORD)v10 )
    sub_1B71830(Instance, v8);
  v11 = Instance->m_Items[0];
  if ( !v11 )
LABEL_15:
    sub_1B71828(Instance, v8);
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
      sub_1B71828(EntityOfFragmentsShop, v3);
    v5 = *(_QWORD *)&prices->max_length;
    if ( v5 )
    {
      if ( !(_DWORD)v5 )
        sub_1B71830(EntityOfFragmentsShop, v3);
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
  System_Collections_Generic_List_object__o *v17; // x21
  __int64 v18; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v21; // w23
  int32_t v22; // w24
  ShopEntity_o *Item; // x0
  Il2CppObject *v24; // x25
  __int64 methodPtr_low; // x10
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Comparison_T__o *v32; // x19
  Il2CppObject *v33; // x20
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3

  if ( (byte_4A203BE & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B715CC(&System_Comparison_ShopEntity__TypeInfo, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__Add__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v10);
    sub_1B715CC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v11);
    sub_1B715CC(&NetworkManager_TypeInfo, v12);
    sub_1B715CC(&ShopEntity_TypeInfo, v13);
    sub_1B715CC(&Method_ShopMaster___c__GetOpenedEventEntitiyList_b__5_0__, v14);
    sub_1B715CC(&ShopMaster___c_TypeInfo, v15);
    byte_4A203BE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)list,
                               v22,
                               (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v24 = (Il2CppObject *)Item;
        methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopEntity_TypeInfo
          && Item->fields.eventId == eventId )
        {
          list = (void *)ShopEntity__IsOpened(Item, Time, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v17 )
              break;
            items = v17->fields._items;
            v29 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v17->fields._version;
            if ( !items )
              break;
            size = v17->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                v24,
                *(const MethodInfo_34D0260 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
            }
            else
            {
              v31 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v31[4] = (Il2CppClass *)v24;
              sub_1B71570((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v24, v26, v27);
            }
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1B71828(list, v18);
  }
LABEL_20:
  list = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    list = ShopMaster___c_TypeInfo;
  }
  v32 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 40LL);
  if ( !v32 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ShopMaster___c_TypeInfo;
    }
    v33 = (Il2CppObject *)**((_QWORD **)list + 23);
    v32 = (System_Comparison_T__o *)sub_1B71818(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(v32, v33, Method_ShopMaster___c__GetOpenedEventEntitiyList_b__5_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_ShopEntity__o *)v32;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)v32, v35, v36);
  }
  if ( !v17 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_55385380(
    v17,
    v32,
    (const MethodInfo_34D1D24 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v17,
                               (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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

  if ( (byte_4A203CB & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B715CC(&ShopEntity_TypeInfo, v6);
    byte_4A203CB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    sub_1B71828(list, *(_QWORD *)&eventId);
  }
  return 0;
}


bool __fastcall ShopMaster__IsEnableEventShop_39628336(ShopMaster_o *this, const MethodInfo *method)
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
  __int64 v14; // x1
  UserShopMaster_o *v15; // x22
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int i; // w25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  ShopEntity_o *v27; // x0
  ShopEntity_o *v28; // x23
  __int64 methodPtr_low; // x9
  int64_t UserId; // x0
  UserShopEntity_o *EntityDefinitely; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x3
  char v34; // w21
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  if ( (byte_4A203CE & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B715CC(&Method_DataManager_GetMaster_ShopReleaseMaster___, v3);
    sub_1B715CC(&Method_DataManager_GetMaster_UserShopMaster___, v4);
    sub_1B715CC(&DataManager_TypeInfo, v5);
    sub_1B715CC(&System_IDisposable_TypeInfo, v6);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B715CC(&NetworkManager_TypeInfo, v9);
    sub_1B715CC(&ShopEntity_TypeInfo, v10);
    byte_4A203CE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  v13 = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !this->fields.list )
LABEL_45:
    sub_1B71828(v13, v14);
  v15 = (UserShopMaster_o *)v13;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_3096080 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B71828(0LL, v16);
  for ( i = 0; ; i |= ShopReleaseMaster__CondClearCheck((ShopReleaseMaster_o *)Master_object, v28->fields.id, 1, v33) )
  {
    do
    {
      do
      {
        klass = Enumerator->klass;
        v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v20;
            p_offset += 4;
            if ( !v20 )
              goto LABEL_14;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_14:
          p_method = sub_1BC35AC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
        {
          v34 = 1;
          goto LABEL_36;
        }
        v23 = Enumerator->klass;
        v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          v25 = &v23->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
          {
            --v24;
            v25 += 4;
            if ( !v24 )
              goto LABEL_21;
          }
          v26 = (__int64)&v23->vtable[*v25].method;
        }
        else
        {
LABEL_21:
          v26 = sub_1BC35AC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
        }
        v27 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                Enumerator,
                                *(_QWORD *)(v26 + 8));
        v28 = v27;
      }
      while ( !v27 );
      methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v27->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopEntity_c *)v27->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
      {
        sub_1B71AE8(v27);
        goto LABEL_45;
      }
    }
    while ( v27->fields.shopType != 12 || !ShopEntity__IsEnable(v27, Time, 0LL) );
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v15 )
      sub_1B71828(UserId, UserId);
    EntityDefinitely = UserShopMaster__GetEntityDefinitely(v15, UserId, v28->fields.id, 0LL);
    if ( EntityDefinitely )
    {
      if ( EntityDefinitely->fields.num >= v28->fields.limitNum )
        break;
    }
    if ( !Master_object )
      sub_1B71828(EntityDefinitely, v32);
  }
  v34 = 0;
LABEL_36:
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_40;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_40:
    v38 = sub_1BC35AC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  return i & v34;
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
  System_Collections_Generic_Dictionary_int__int__o *v21; // x21
  int32_t v22; // w22
  int64_t v23; // x23
  __int64 methodPtr_low; // x10
  Il2CppObject *MasterData_object; // x24
  int v26; // w24
  bool v27; // w0
  int32_t v28; // w1
  int32_t v29; // w8
  const MethodInfo_313FD84 *v30; // x3
  int32_t v31; // w2
  unsigned int Count; // w0
  System_Int32_array *v33; // x19
  int max_length; // w8
  unsigned int v35; // w10
  int v36; // w11
  int32_t value; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A203CA & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B715CC(&Method_DataManager_GetMasterData_UserShopMaster___, v6);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v12);
    sub_1B715CC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_1B715CC(&int___TypeInfo, v14);
    sub_1B715CC(&NetworkManager_TypeInfo, v15);
    sub_1B715CC(&ShopEntity_TypeInfo, v16);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__int__CopyTo__, v18);
    byte_4A203CA = 1;
  }
  value = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v21 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v21,
    (const MethodInfo_313F3C0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_25;
  v22 = 0;
  while ( 1 )
  {
    Instance = System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v22 >= (int)Instance )
      break;
    Instance = (int64_t)this->fields.list;
    if ( !Instance )
      goto LABEL_25;
    Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)Instance,
                          v22,
                          (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_25;
    v23 = Instance;
    methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
      || *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != ShopEntity_TypeInfo )
    {
      goto LABEL_25;
    }
    if ( *(_DWORD *)(Instance + 24) == eventId )
    {
      value = 0;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object )
        goto LABEL_25;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(
                            (UserShopMaster_o *)MasterData_object,
                            Instance,
                            *(_DWORD *)(v23 + 16),
                            0LL);
      if ( !Instance || !v21 )
        goto LABEL_25;
      v26 = *(_DWORD *)(Instance + 28);
      v27 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
              v21,
              *(_DWORD *)(v23 + 20),
              &value,
              (const MethodInfo_314141C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
      v28 = *(_DWORD *)(v23 + 20);
      if ( v27 )
      {
        System_Collections_Generic_Dictionary_int__int___Remove(
          v21,
          v28,
          (const MethodInfo_314113C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
        v29 = value;
        if ( (value & 0x80000000) != 0 )
        {
          v29 = -value;
          value = -value;
        }
        v28 = *(_DWORD *)(v23 + 20);
        v30 = (const MethodInfo_313FD84 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v31 = v29 + v26;
      }
      else
      {
        v30 = (const MethodInfo_313FD84 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v31 = -v26;
      }
      System_Collections_Generic_Dictionary_int__int___Add(v21, v28, v31, v30);
    }
    Instance = (int64_t)this->fields.list;
    ++v22;
    if ( !Instance )
      goto LABEL_25;
  }
  if ( !v21 )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_int__int___get_Count(
          v21,
          (const MethodInfo_313FA38 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) )
  {
LABEL_37:
    LOBYTE(Instance) = 1;
    return Instance;
  }
  Count = System_Collections_Generic_Dictionary_int__int___get_Count(
            v21,
            (const MethodInfo_313FA38 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
  v33 = (System_Int32_array *)sub_1B71674(int___TypeInfo, Count);
  Instance = (int64_t)System_Collections_Generic_Dictionary_int__int___get_Values(
                        v21,
                        (const MethodInfo_313FB98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
  if ( !Instance
    || (System_Collections_Generic_Dictionary_ValueCollection_int__int___CopyTo(
          (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
          v33,
          0,
          (const MethodInfo_37D40C8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__int__CopyTo__),
        !v33) )
  {
LABEL_25:
    sub_1B71828(Instance, v20);
  }
  max_length = v33->max_length;
  if ( max_length < 1 )
    goto LABEL_37;
  v35 = 0;
  do
  {
    if ( v35 >= max_length )
      sub_1B71830(Instance, v20);
    v36 = v33->m_Items[v35 + 1];
    Instance = v36 > 0;
    if ( v36 < 1 )
      break;
  }
  while ( max_length - 1 != v35++ );
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
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  _BOOL4 v19; // w21
  Il2CppObject *v20; // x20
  _BOOL4 v21; // w20
  const MethodInfo *v23; // x2
  int v24; // w8
  Il2CppObject *v25; // x20
  const MethodInfo *v26; // x2
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x21
  System_Func_object__bool__o *v28; // x22
  Il2CppObject *v29; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-50h] BYREF
  int64_t closedAt; // [xsp+18h] [xbp-48h] BYREF
  int64_t openedAt; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4A203CF & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_DataManager_GetMasterData_ShopMaster___, v4);
    sub_1B715CC(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1B715CC(&DataManager_TypeInfo, v6);
    sub_1B715CC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_1B715CC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8);
    sub_1B715CC(&Method_System_Linq_Enumerable_All_ShopEntity___, v9);
    sub_1B715CC(&System_Func_ShopEntity__bool__TypeInfo, v10);
    sub_1B715CC(&NetworkManager_TypeInfo, v11);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B715CC(&TitleInfoControl_TypeInfo, v13);
    sub_1B715CC(&Method_ShopMaster___c__DisplayClass24_0__IsEventShopOpen_b__0__, v14);
    sub_1B715CC(&ShopMaster___c__DisplayClass24_0_TypeInfo, v15);
    byte_4A203CF = 1;
  }
  openedAt = 0LL;
  entity = 0LL;
  closedAt = 0LL;
  v29 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_39;
  ShopMaster__GetEnableEventPeriod((ShopMaster_o *)Instance, &openedAt, &closedAt, eventId, v18);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_30F87B4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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
    v25 = (Il2CppObject *)sub_1B71818(ShopMaster___c__DisplayClass24_0_TypeInfo);
    System_Object___ctor(v25, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ShopMaster___);
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
    v25[1].klass = (Il2CppClass *)Instance;
    if ( !entity )
      goto LABEL_39;
    if ( (__int64)Instance <= (__int64)entity[6].monitor )
    {
      v28 = (System_Func_object__bool__o *)sub_1B71818(System_Func_ShopEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(v28, v25, Method_ShopMaster___c__DisplayClass24_0__IsEventShopOpen_b__0__, 0LL);
      v19 = System_Linq_Enumerable__All_object_(
              EventEntitiyList,
              (System_Func_TSource__bool__o *)v28,
              (const MethodInfo_2E6798C *)Method_System_Linq_Enumerable_All_ShopEntity___);
    }
    else
    {
      v19 = 1;
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v29,
          eventId,
          (const MethodInfo_30F87B4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_22;
  Instance = (DataManager_o *)v29;
  if ( !v29 )
    goto LABEL_39;
  if ( EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)v29, 0LL) )
  {
    v20 = v29;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
    v21 = !TitleInfoControl__IsEnableEventShopButton_37051452((EventDetailEntity_o *)v20, 0LL);
  }
  else
  {
LABEL_22:
    v21 = 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
LABEL_39:
    sub_1B71828(Instance, v17);
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
  int max_length; // w8
  __int64 v10; // x9
  EventItemDisplayEntity_o *v11; // x11

  if ( (byte_4A203C5 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_EventItemDisplayMaster___, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A203C5 = 1;
  }
  Instance = (EventItemDisplayEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventItemDisplayEntity_array *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EventItemDisplayMaster___)) == 0LL )
  {
LABEL_15:
    sub_1B71828(Instance, v8);
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
      sub_1B71830(Instance, v8);
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
  if ( (byte_4A203C6 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_EventDetailMaster___, shopEntity);
    sub_1B715CC(&DataManager_TypeInfo, v5);
    this = (ShopMaster_o *)sub_1B715CC(
                             &Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__,
                             v6);
    byte_4A203C6 = 1;
  }
  if ( !shopEntity )
    goto LABEL_13;
  eventId = shopEntity->fields.eventId;
  if ( eventId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ShopMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( this )
    {
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 eventId,
                 (const MethodInfo_30F8760 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( Entity && EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)Entity, 0LL) )
        return ShopMaster__IsPurchaseCloseEventShopItem(v4, shopEntity->fields.baseShopId, method);
      return 0;
    }
LABEL_13:
    sub_1B71828(this, shopEntity);
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
  int32_t v3; // w19
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
  const MethodInfo *v19; // x2
  ShopReleaseMaster_o *v20; // x21
  int32_t TargetShopGroupId; // w22
  const MethodInfo *v22; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  const MethodInfo *v24; // x3
  Il2CppObject *MasterData_object; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  ShopMaster_o *v27; // x0
  int64_t *v28; // x1
  int64_t *v29; // x2
  int32_t v30; // w3
  const MethodInfo *v31; // x4

  v3 = baseShopId;
  if ( (byte_4A203C8 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&baseShopId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B715CC(&Method_DataManager_GetMasterData_ShopGroupMaster___, v6);
    sub_1B715CC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v7);
    sub_1B715CC(&Method_DataManager_GetMasterData_UserShopMaster___, v8);
    sub_1B715CC(&NetworkManager_TypeInfo, v9);
    sub_1B715CC(&ShopEntity_TypeInfo, v10);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A203C8 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                      (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_27;
    *(_QWORD *)&baseShopId = ShopEntity_TypeInfo;
    v16 = list;
    methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ShopEntity_TypeInfo )
    {
      break;
    }
    if ( *(_DWORD *)(list + 20) == v3 )
    {
      list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( list )
      {
        list = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)list,
                          (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
        if ( list )
        {
          v20 = (ShopReleaseMaster_o *)list;
          TargetShopGroupId = ShopReleaseMaster__GetTargetShopGroupId((ShopReleaseMaster_o *)list, v3, v19);
          list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( list )
          {
            list = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)list,
                              (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
            if ( list )
            {
              TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)list, TargetShopGroupId, v22);
              if ( TargetEntityList && *(_QWORD *)&TargetEntityList->max_length )
                return ShopReleaseMaster__CondClearCheck(v20, v3, 82, v24);
              list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( list )
              {
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)list,
                                      (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_UserShopMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                list = NetworkManager__get_UserId(0LL);
                if ( MasterData_object )
                {
                  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                                       (UserShopMaster_o *)MasterData_object,
                                       list,
                                       v3,
                                       0LL);
                  return EntityDefinitely && EntityDefinitely->fields.num >= *(_DWORD *)(v16 + 88);
                }
              }
            }
          }
        }
      }
LABEL_27:
      sub_1B71828(list, *(_QWORD *)&baseShopId);
    }
    if ( v14 == ++v15 )
      return 1;
  }
  sub_1B71AE8(list);
  return ShopMaster__GetEnableEventPeriod(v27, v28, v29, v30, v31);
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

  if ( (byte_4A203C7 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_EventDetailMaster___, shopEntity);
    sub_1B715CC(&DataManager_TypeInfo, v4);
    this = (ShopMaster_o *)sub_1B715CC(
                             &Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__,
                             v5);
    byte_4A203C7 = 1;
  }
  if ( !shopEntity )
    goto LABEL_11;
  eventId = shopEntity->fields.eventId;
  if ( !eventId )
    return shopEntity->fields.shopType == 12;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ShopMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !this )
LABEL_11:
    sub_1B71828(this, shopEntity);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             eventId,
             (const MethodInfo_30F8760 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
    return EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)Entity, 0LL);
  return shopEntity->fields.shopType == 12;
}


void __fastcall ShopMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A203D0 & 1) == 0 )
  {
    sub_1B715CC(&ShopMaster___c_TypeInfo, v1);
    byte_4A203D0 = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(ShopMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ShopMaster___c_TypeInfo->static_fields->__9 = (struct ShopMaster___c_o *)v2;
  sub_1B71570((ServantStatusBattleListViewItem_o *)ShopMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B71828(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEntitiyList_b__2_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B71828(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEntitiyList_b__3_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B71828(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEventEntitiyList_b__6_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B71828(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEventEntityList_b__7_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B71828(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEventEntitiyList_b__4_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B71828(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEventItemList_b__11_0(
        ShopMaster___c_o *this,
        ItemEntity_o *a,
        ItemEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B71828(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetOpenedEventEntitiyList_b__5_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B71828(this, a);
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
    sub_1B71828(this, 0LL);
  return x->fields.closedAt < this->fields.nowTime;
}