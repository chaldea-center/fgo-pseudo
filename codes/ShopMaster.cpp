void __fastcall ShopMaster___ctor(ShopMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16BE8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ShopMaster__ShopEntity__int___ctor__, method, v2);
    byte_4B16BE8 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    43,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_ShopMaster__ShopEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__CheckBuyAfterCloseShop(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_int__o *v19; // x0

  if ( (byte_4B16BF2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B16BF2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v16,
                                                          v17,
                                                          v18),
        System_Collections_Generic_List_int____ctor(
          v19,
          (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__),
        (list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)list,
                                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (list = (System_Collections_ObjectModel_Collection_T__o *)DataMasterBase_object__object__int___GetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)list,
                                                                   eventId,
                                                                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w22
  int32_t v14; // w23
  bool v15; // w26
  __int64 methodPtr_low; // x10

  if ( (byte_4B16BFD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&payType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&ShopEntity_TypeInfo, v9, v10);
    byte_4B16BFD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    v15 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        v15 = ++v14 < v13;
        if ( v13 != v14 )
          continue;
      }
      return v15;
    }
LABEL_16:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v36; // x1
  int64_t v37; // x23
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Collections_Generic_List_object__o *v41; // x19
  __int64 v42; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v45; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  ShopEntity_o *v52; // x0
  ShopEntity_o *v53; // x24
  __int64 methodPtr_low; // x9
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  __int64 v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct System_Object_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  Il2CppClass **v66; // x0
  System_Collections_Generic_IEnumerator_T__c *v67; // x8
  __int64 v68; // x9
  int32_t *v69; // x10
  __int64 v70; // x0
  __int64 v71; // x2
  __int64 v72; // x3
  ShopMaster___c_c *v73; // x8
  System_Comparison_T__o *_9__1_0; // x20
  Il2CppObject *v75; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7

  if ( (byte_4B16BE9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&purchaseType,
      *(_QWORD *)&shopType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8);
    sub_1BCA7E0(&System_Comparison_ShopEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopEntity__TypeInfo, v25, v26);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&ShopEntity_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_ShopMaster___c__GetEnableEntitiyList_b__1_0__, v31, v32);
    sub_1BCA7E0(&ShopMaster___c_TypeInfo, v33, v34);
    byte_4B16BE9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&purchaseType);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_50;
  v37 = (int64_t)Time;
  System_Collections_ObjectModel_Collection_object___get_Count(
    (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
    (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v41 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       v38,
                                                       v39,
                                                       v40);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Time )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v42);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v45;
        p_offset += 4;
        if ( !v45 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v48 = Enumerator->klass;
    v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v50 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_19;
      }
      v51 = (__int64)&v48->vtable[*v50].method;
    }
    else
    {
LABEL_19:
      v51 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v52 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(
                            Enumerator,
                            *(_QWORD *)(v51 + 8));
    v53 = v52;
    if ( v52 )
    {
      methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v52->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopEntity_c *)v52->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
      {
        sub_1BCACFC(v52);
        goto LABEL_50;
      }
      if ( !v52->fields.eventId
        && (purchaseType < 1 || v52->fields.purchaseType == purchaseType)
        && v52->fields.shopType == shopType
        && ShopEntity__IsEnable(v52, v37, 0LL) )
      {
        IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v53, 0LL);
        if ( !IsHiddenInCaseOfBuying )
        {
          if ( !v41 )
            sub_1BCAA3C(IsHiddenInCaseOfBuying, v56);
          items = v41->fields._items;
          v64 = Method_System_Collections_Generic_List_ShopEntity__Add__;
          ++v41->fields._version;
          if ( !items )
            sub_1BCAA3C(IsHiddenInCaseOfBuying, v56);
          size = v41->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v41,
              (Il2CppObject *)v53,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
          }
          else
          {
            v66 = &items->obj.klass + size;
            v41->fields._size = size + 1;
            v66[4] = (Il2CppClass *)v53;
            sub_1BCA784((PartyOrganizationUtility_o *)(v66 + 4), (int64_t)v53, v57, v58, v59, v60, v61, v62);
          }
        }
      }
    }
  }
  v67 = Enumerator->klass;
  v68 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v69 = &v67->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
    {
      --v68;
      v69 += 4;
      if ( !v68 )
        goto LABEL_39;
    }
    v70 = (__int64)&v67->vtable[*v69].method;
  }
  else
  {
LABEL_39:
    v70 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Time = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v70)(
                                                             Enumerator,
                                                             *(_QWORD *)(v70 + 8));
  v73 = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo, v36);
    v73 = ShopMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Comparison_T__o *)v73->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v73->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v73, v36);
      v73 = ShopMaster___c_TypeInfo;
    }
    v75 = (Il2CppObject *)v73->static_fields->__9;
    _9__1_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ShopEntity__TypeInfo, v36, v71, v72);
    System_Comparison_object____ctor(_9__1_0, v75, Method_ShopMaster___c__GetEnableEntitiyList_b__1_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_ShopEntity__o *)_9__1_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v77, v78, v79, v80, v81, v82);
  }
  if ( !v41 )
LABEL_50:
    sub_1BCAA3C(Time, v36);
  System_Collections_Generic_List_object___Sort_56244000(
    v41,
    _9__1_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v41,
                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEntitiyList_40640916(
        ShopMaster_o *this,
        int32_t purchaseType,
        int32_t shopType,
        int32_t flag,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v38; // x1
  int64_t v39; // x25
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_Generic_List_object__o *v43; // x19
  __int64 v44; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v47; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  ShopEntity_o *v54; // x0
  ShopEntity_o *v55; // x26
  __int64 methodPtr_low; // x9
  const MethodInfo *v57; // x2
  _BOOL8 IsOpenPurchaseCloseShop; // x0
  __int64 v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  Il2CppClass **v69; // x0
  System_Collections_Generic_IEnumerator_T__c *v70; // x8
  __int64 v71; // x9
  int32_t *v72; // x10
  __int64 v73; // x0
  __int64 v74; // x2
  __int64 v75; // x3
  ShopMaster___c_c *v76; // x8
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v78; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7

  if ( (byte_4B16BEA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&purchaseType,
      *(_QWORD *)&shopType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9, v10);
    sub_1BCA7E0(&System_Comparison_ShopEntity__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopEntity__TypeInfo, v27, v28);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&ShopEntity_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_ShopMaster___c__GetEnableEntitiyList_b__2_0__, v33, v34);
    sub_1BCA7E0(&ShopMaster___c_TypeInfo, v35, v36);
    byte_4B16BEA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&purchaseType);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_51;
  v39 = (int64_t)Time;
  System_Collections_ObjectModel_Collection_object___get_Count(
    (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
    (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v43 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       v40,
                                                       v41,
                                                       v42);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Time )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v44);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v47 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v47;
        p_offset += 4;
        if ( !v47 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v50 = Enumerator->klass;
    v51 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v52 = &v50->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v52 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_19;
      }
      v53 = (__int64)&v50->vtable[*v52].method;
    }
    else
    {
LABEL_19:
      v53 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v54 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(
                            Enumerator,
                            *(_QWORD *)(v53 + 8));
    v55 = v54;
    if ( v54 )
    {
      methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v54->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopEntity_c *)v54->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
      {
        sub_1BCACFC(v54);
        goto LABEL_51;
      }
      if ( ShopEntity__checkFlag(v54, flag, 0LL)
        && (purchaseType < 1 || v55->fields.purchaseType == purchaseType)
        && v55->fields.shopType == shopType
        && ShopEntity__IsEnable(v55, v39, 0LL)
        && !ShopEntity__IsHiddenInCaseOfBuying(v55, 0LL) )
      {
        IsOpenPurchaseCloseShop = ShopMaster__IsOpenPurchaseCloseShop(this, v55, v57);
        if ( !IsOpenPurchaseCloseShop )
        {
          if ( !v43 )
            sub_1BCAA3C(IsOpenPurchaseCloseShop, v59);
          items = v43->fields._items;
          v67 = Method_System_Collections_Generic_List_ShopEntity__Add__;
          ++v43->fields._version;
          if ( !items )
            sub_1BCAA3C(IsOpenPurchaseCloseShop, v59);
          size = v43->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v43,
              (Il2CppObject *)v55,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v69 = &items->obj.klass + size;
            v43->fields._size = size + 1;
            v69[4] = (Il2CppClass *)v55;
            sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 4), (int64_t)v55, v60, v61, v62, v63, v64, v65);
          }
        }
      }
    }
  }
  v70 = Enumerator->klass;
  v71 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v72 = &v70->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
    {
      --v71;
      v72 += 4;
      if ( !v71 )
        goto LABEL_40;
    }
    v73 = (__int64)&v70->vtable[*v72].method;
  }
  else
  {
LABEL_40:
    v73 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Time = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v73)(
                                                             Enumerator,
                                                             *(_QWORD *)(v73 + 8));
  v76 = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo, v38);
    v76 = ShopMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Comparison_T__o *)v76->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v76->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v76, v38);
      v76 = ShopMaster___c_TypeInfo;
    }
    v78 = (Il2CppObject *)v76->static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ShopEntity__TypeInfo, v38, v74, v75);
    System_Comparison_object____ctor(_9__2_0, v78, Method_ShopMaster___c__GetEnableEntitiyList_b__2_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_ShopEntity__o *)_9__2_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v80, v81, v82, v83, v84, v85);
  }
  if ( !v43 )
LABEL_51:
    sub_1BCAA3C(Time, v38);
  System_Collections_Generic_List_object___Sort_56244000(
    v43,
    _9__2_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v43,
                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEntitiyList_40642588(
        ShopMaster_o *this,
        int32_t purchaseType,
        int32_t payType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v36; // x1
  int64_t v37; // x23
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Collections_Generic_List_object__o *v41; // x19
  __int64 v42; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v45; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  ShopEntity_o *v52; // x0
  ShopEntity_o *v53; // x24
  __int64 methodPtr_low; // x9
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  __int64 v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct System_Object_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  Il2CppClass **v66; // x0
  System_Collections_Generic_IEnumerator_T__c *v67; // x8
  __int64 v68; // x9
  int32_t *v69; // x10
  __int64 v70; // x0
  __int64 v71; // x2
  __int64 v72; // x3
  ShopMaster___c_c *v73; // x8
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v75; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7

  if ( (byte_4B16BEB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&purchaseType,
      *(_QWORD *)&payType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8);
    sub_1BCA7E0(&System_Comparison_ShopEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopEntity__TypeInfo, v25, v26);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&ShopEntity_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_ShopMaster___c__GetEnableEntitiyList_b__3_0__, v31, v32);
    sub_1BCA7E0(&ShopMaster___c_TypeInfo, v33, v34);
    byte_4B16BEB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&purchaseType);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_50;
  v37 = (int64_t)Time;
  System_Collections_ObjectModel_Collection_object___get_Count(
    (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
    (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v41 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       v38,
                                                       v39,
                                                       v40);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Time )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v42);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v45;
        p_offset += 4;
        if ( !v45 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v48 = Enumerator->klass;
    v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v50 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_19;
      }
      v51 = (__int64)&v48->vtable[*v50].method;
    }
    else
    {
LABEL_19:
      v51 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v52 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(
                            Enumerator,
                            *(_QWORD *)(v51 + 8));
    v53 = v52;
    if ( v52 )
    {
      methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v52->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopEntity_c *)v52->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
      {
        sub_1BCACFC(v52);
        goto LABEL_50;
      }
      if ( !v52->fields.eventId
        && (purchaseType < 1 || v52->fields.purchaseType == purchaseType)
        && v52->fields.payType == payType
        && ShopEntity__IsEnable(v52, v37, 0LL) )
      {
        IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v53, 0LL);
        if ( !IsHiddenInCaseOfBuying )
        {
          if ( !v41 )
            sub_1BCAA3C(IsHiddenInCaseOfBuying, v56);
          items = v41->fields._items;
          v64 = Method_System_Collections_Generic_List_ShopEntity__Add__;
          ++v41->fields._version;
          if ( !items )
            sub_1BCAA3C(IsHiddenInCaseOfBuying, v56);
          size = v41->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v41,
              (Il2CppObject *)v53,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
          }
          else
          {
            v66 = &items->obj.klass + size;
            v41->fields._size = size + 1;
            v66[4] = (Il2CppClass *)v53;
            sub_1BCA784((PartyOrganizationUtility_o *)(v66 + 4), (int64_t)v53, v57, v58, v59, v60, v61, v62);
          }
        }
      }
    }
  }
  v67 = Enumerator->klass;
  v68 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v69 = &v67->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
    {
      --v68;
      v69 += 4;
      if ( !v68 )
        goto LABEL_39;
    }
    v70 = (__int64)&v67->vtable[*v69].method;
  }
  else
  {
LABEL_39:
    v70 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Time = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v70)(
                                                             Enumerator,
                                                             *(_QWORD *)(v70 + 8));
  v73 = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo, v36);
    v73 = ShopMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v73->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v73->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v73, v36);
      v73 = ShopMaster___c_TypeInfo;
    }
    v75 = (Il2CppObject *)v73->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ShopEntity__TypeInfo, v36, v71, v72);
    System_Comparison_object____ctor(_9__3_0, v75, Method_ShopMaster___c__GetEnableEntitiyList_b__3_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ShopEntity__o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v77, v78, v79, v80, v81, v82);
  }
  if ( !v41 )
LABEL_50:
    sub_1BCAA3C(Time, v36);
  System_Collections_Generic_List_object___Sort_56244000(
    v41,
    _9__3_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v41,
                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEventEntitiyList(
        ShopMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  int64_t Time; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Collections_Generic_List_object__o *v31; // x21
  __int64 v32; // x1
  void *list; // x0
  int32_t Count; // w0
  int64_t v35; // x2
  __int64 v36; // x3
  int32_t v37; // w23
  int32_t v38; // w24
  ShopEntity_o *Item; // x0
  Il2CppObject *v40; // x25
  __int64 methodPtr_low; // x10
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  System_Comparison_T__o *v50; // x19
  Il2CppObject *v51; // x20
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7

  if ( (byte_4B16BEE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&System_Comparison_ShopEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopEntity__TypeInfo, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&ShopEntity_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_ShopMaster___c__GetEnableEventEntitiyList_b__6_0__, v23, v24);
    sub_1BCA7E0(&ShopMaster___c_TypeInfo, v25, v26);
    byte_4B16BEE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  Time = NetworkManager__getTime(0LL);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       v28,
                                                       v29,
                                                       v30);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v37 = Count;
    v38 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)list,
                               v38,
                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v40 = (Il2CppObject *)Item;
        methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopEntity_TypeInfo
          && Item->fields.eventId == eventId )
        {
          list = (void *)ShopEntity__IsEnable(Item, Time, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v31 )
              break;
            items = v31->fields._items;
            v47 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v31->fields._version;
            if ( !items )
              break;
            size = v31->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v31,
                v40,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
            }
            else
            {
              v49 = &items->obj.klass + size;
              v31->fields._size = size + 1;
              v49[4] = (Il2CppClass *)v40;
              sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 4), (int64_t)v40, v35, v36, v42, v43, v44, v45);
            }
          }
        }
      }
      if ( v37 == ++v38 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1BCAA3C(list, v32);
  }
LABEL_20:
  list = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo, v32);
    list = ShopMaster___c_TypeInfo;
  }
  v50 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 48LL);
  if ( !v50 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v32);
      list = ShopMaster___c_TypeInfo;
    }
    v51 = (Il2CppObject *)**((_QWORD **)list + 23);
    v50 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ShopEntity__TypeInfo, v32, v35, v36);
    System_Comparison_object____ctor(v50, v51, Method_ShopMaster___c__GetEnableEventEntitiyList_b__6_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_ShopEntity__o *)v50;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)v50, v53, v54, v55, v56, v57, v58);
  }
  if ( !v31 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_56244000(
    v31,
    v50,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v31,
                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEventEntityList(
        ShopMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  int64_t Time; // x23
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_object__o *v33; // x22
  __int64 v34; // x1
  void *list; // x0
  int32_t Count; // w0
  int64_t v37; // x2
  __int64 v38; // x3
  int32_t v39; // w24
  int32_t v40; // w25
  Il2CppObject *Item; // x0
  ShopEntity_o *v42; // x26
  __int64 methodPtr_low; // x10
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  System_Comparison_T__o *v52; // x19
  Il2CppObject *v53; // x20
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7

  if ( (byte_4B16BEF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&slot);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&System_Comparison_ShopEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&ShopEntity_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_ShopMaster___c__GetEnableEventEntityList_b__7_0__, v25, v26);
    sub_1BCA7E0(&ShopMaster___c_TypeInfo, v27, v28);
    byte_4B16BEF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  Time = NetworkManager__getTime(0LL);
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       v30,
                                                       v31,
                                                       v32);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v39 = Count;
    v40 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v40,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v42 = (ShopEntity_o *)Item;
        methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopEntity_TypeInfo
          && LODWORD(Item[1].monitor) == eventId
          && LODWORD(Item[2].monitor) == slot
          && ShopEntity__IsEnable((ShopEntity_o *)Item, Time, 0LL) )
        {
          list = (void *)ShopEntity__IsHiddenInCaseOfBuyingShopId(v42, 0LL);
          if ( ((unsigned __int8)list & 1) == 0 )
          {
            if ( !v33 )
              break;
            items = v33->fields._items;
            v49 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v33->fields._version;
            if ( !items )
              break;
            size = v33->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v33,
                (Il2CppObject *)v42,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v51 = &items->obj.klass + size;
              v33->fields._size = size + 1;
              v51[4] = (Il2CppClass *)v42;
              sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 4), (int64_t)v42, v37, v38, v44, v45, v46, v47);
            }
          }
        }
      }
      if ( v39 == ++v40 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1BCAA3C(list, v34);
  }
LABEL_22:
  list = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo, v34);
    list = ShopMaster___c_TypeInfo;
  }
  v52 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 56LL);
  if ( !v52 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v34);
      list = ShopMaster___c_TypeInfo;
    }
    v53 = (Il2CppObject *)**((_QWORD **)list + 23);
    v52 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ShopEntity__TypeInfo, v34, v37, v38);
    System_Comparison_object____ctor(v52, v53, Method_ShopMaster___c__GetEnableEventEntityList_b__7_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_ShopEntity__o *)v52;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)v52, v55, v56, v57, v58, v59, v60);
  }
  if ( !v33 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_56244000(
    v33,
    v52,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v33,
                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


bool __fastcall ShopMaster__GetEnableEventPeriod(
        ShopMaster_o *this,
        int64_t *openedAt,
        int64_t *closedAt,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *v17; // x23
  int32_t Count; // w0
  int32_t v19; // w24
  int32_t v20; // w25
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  int64_t klass; // x8
  int64_t monitor; // x8

  if ( (byte_4B16BF3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, openedAt, closedAt);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&ShopEntity_TypeInfo, v13, v14);
    byte_4B16BF3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, openedAt);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  *openedAt = -1LL;
  *closedAt = -1LL;
  if ( !this->fields.list )
    goto LABEL_25;
  v17 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Time )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               Time,
               v20,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopEntity_TypeInfo
          && LODWORD(Item[1].monitor) == eventId )
        {
          klass = (int64_t)Item[8].klass;
          if ( klass <= (__int64)v17 )
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
      if ( v19 == ++v20 )
        return (*openedAt & 0x8000000000000000LL) == 0 && *closedAt >= 0;
    }
LABEL_25:
    sub_1BCAA3C(Time, v16);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  int64_t Time; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Collections_Generic_List_object__o *v35; // x19
  __int64 v36; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v38; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v41; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  ShopEntity_o *v48; // x0
  ShopEntity_o *v49; // x23
  __int64 methodPtr_low; // x9
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  __int64 v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  System_Collections_Generic_IEnumerator_T__c *v63; // x8
  __int64 v64; // x9
  int32_t *v65; // x10
  __int64 v66; // x0
  __int64 v67; // x2
  __int64 v68; // x3
  ShopMaster___c_c *v69; // x8
  System_Comparison_T__o *_9__8_0; // x20
  Il2CppObject *v71; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7

  if ( (byte_4B16BF0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&svtCoinType,
      method);
    sub_1BCA7E0(&System_Comparison_ShopEntity__TypeInfo, v5, v6);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&ShopEntity_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_ShopMaster___c__GetEnableExchangeSvtCoinEntitiyList_b__8_0__, v27, v28);
    sub_1BCA7E0(&ShopMaster___c_TypeInfo, v29, v30);
    byte_4B16BF0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&svtCoinType);
  Time = NetworkManager__getTime(0LL);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_48;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v38);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v41;
        p_offset += 4;
        if ( !v41 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v44 = Enumerator->klass;
    v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v46 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_18;
      }
      v47 = (__int64)&v44->vtable[*v46].method;
    }
    else
    {
LABEL_18:
      v47 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v48 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(
                            Enumerator,
                            *(_QWORD *)(v47 + 8));
    v49 = v48;
    if ( v48 )
    {
      methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v48->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopEntity_c *)v48->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
      {
        sub_1BCACFC(v48);
        goto LABEL_48;
      }
      if ( !v48->fields.eventId
        && v48->fields.shopType == 17
        && ShopEntity__IsEnable(v48, Time, 0LL)
        && ShopEntity__GetExchangeSvtCoinType(v49, 0LL) == svtCoinType )
      {
        IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v49, 0LL);
        if ( !IsHiddenInCaseOfBuying )
        {
          if ( !v35 )
            sub_1BCAA3C(IsHiddenInCaseOfBuying, v52);
          items = v35->fields._items;
          v60 = Method_System_Collections_Generic_List_ShopEntity__Add__;
          ++v35->fields._version;
          if ( !items )
            sub_1BCAA3C(IsHiddenInCaseOfBuying, v52);
          size = v35->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v35,
              (Il2CppObject *)v49,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
          }
          else
          {
            v62 = &items->obj.klass + size;
            v35->fields._size = size + 1;
            v62[4] = (Il2CppClass *)v49;
            sub_1BCA784((PartyOrganizationUtility_o *)(v62 + 4), (int64_t)v49, v53, v54, v55, v56, v57, v58);
          }
        }
      }
    }
  }
  v63 = Enumerator->klass;
  v64 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v65 = &v63->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
    {
      --v64;
      v65 += 4;
      if ( !v64 )
        goto LABEL_37;
    }
    v66 = (__int64)&v63->vtable[*v65].method;
  }
  else
  {
LABEL_37:
    v66 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v66)(
                                                             Enumerator,
                                                             *(_QWORD *)(v66 + 8));
  v69 = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo, v36);
    v69 = ShopMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Comparison_T__o *)v69->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v69->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v69, v36);
      v69 = ShopMaster___c_TypeInfo;
    }
    v71 = (Il2CppObject *)v69->static_fields->__9;
    _9__8_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ShopEntity__TypeInfo, v36, v67, v68);
    System_Comparison_object____ctor(
      _9__8_0,
      v71,
      Method_ShopMaster___c__GetEnableExchangeSvtCoinEntitiyList_b__8_0__,
      0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_ShopEntity__o *)_9__8_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)_9__8_0, v73, v74, v75, v76, v77, v78);
  }
  if ( !v35 )
LABEL_48:
    sub_1BCAA3C(list, v36);
  System_Collections_Generic_List_object___Sort_56244000(
    v35,
    _9__8_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v35,
                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


int32_t __fastcall ShopMaster__GetEnableMainEventId(ShopMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  int64_t Time; // x22
  void *Instance; // x0
  __int64 baseShopId; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_int__o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_Generic_List_int__o *v43; // x20
  int32_t Count; // w0
  int32_t v45; // w24
  int32_t i; // w25
  ShopEntity_o *Item; // x0
  ShopEntity_o *v48; // x26
  __int64 methodPtr_low; // x10
  __int64 v50; // x8
  const MethodInfo *v51; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  char *v55; // x8
  struct System_Int32_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  __int64 v59; // x8
  System_Collections_Generic_List_int__o *v60; // x0
  int v61; // w24
  int32_t v62; // w22
  int32_t v63; // w23
  const MethodInfo *v64; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B16BF1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Sort__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v24, v25);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&ShopEntity_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31);
    byte_4B16BF1 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  v39 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v36,
                                                    v37,
                                                    v38);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v43 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v40,
                                                    v41,
                                                    v42);
  System_Collections_Generic_List_int____ctor(
    v43,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_50;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v45 = Count;
    for ( i = 0; v45 != i; ++i )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_50;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)Instance,
                               i,
                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v48 = Item;
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
                           v48->fields.eventId,
                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
              if ( !Instance )
                goto LABEL_50;
              v50 = *((_QWORD *)Instance + 13);
              if ( v50 >= 1 && v50 >= Time && *((_QWORD *)Instance + 11) <= Time )
              {
                if ( !v39 )
                  goto LABEL_50;
                if ( !System_Collections_Generic_List_int___Contains(
                        v39,
                        v48->fields.baseShopId,
                        (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
                {
                  Instance = (void *)ShopMaster__CheckBuyAfterCloseShop(this, v48->fields.eventId, v51);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    baseShopId = (unsigned int)v48->fields.baseShopId;
                    items = v39->fields._items;
                    v53 = Method_System_Collections_Generic_List_int__Add__;
                    ++v39->fields._version;
                    if ( !items )
                      goto LABEL_50;
                    size = v39->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      v59 = v53[4];
                      v60 = v39;
LABEL_36:
                      System_Collections_Generic_List_int___AddWithResize(
                        v60,
                        baseShopId,
                        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v59 + 192) + 112LL));
                      continue;
                    }
                    v55 = (char *)items + 4 * size;
                    v39->fields._size = size + 1;
LABEL_33:
                    *((_DWORD *)v55 + 8) = baseShopId;
                    continue;
                  }
                  if ( !v43 )
                    goto LABEL_50;
                  Instance = (void *)System_Collections_Generic_List_int___Contains(
                                       v43,
                                       v48->fields.eventId,
                                       (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( ((unsigned __int8)Instance & 1) == 0 )
                  {
                    baseShopId = (unsigned int)v48->fields.eventId;
                    v56 = v43->fields._items;
                    v57 = Method_System_Collections_Generic_List_int__Add__;
                    ++v43->fields._version;
                    if ( !v56 )
                      goto LABEL_50;
                    v58 = v43->fields._size;
                    if ( (unsigned int)v58 >= v56->max_length )
                    {
                      v59 = v57[4];
                      v60 = v43;
                      goto LABEL_36;
                    }
                    v55 = (char *)v56 + 4 * v58;
                    v43->fields._size = v58 + 1;
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
  if ( v39 )
  {
    v61 = v39->fields._size;
    if ( v61 >= 1 )
    {
      v62 = 0;
      while ( 1 )
      {
        v63 = System_Collections_Generic_List_int___get_Item(
                v39,
                v62,
                (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !ShopMaster__IsPurchaseCloseEventShopItem(this, v63, v64) )
        {
          Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               &entity,
                               v63,
                               (const MethodInfo_31B2E94 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            break;
        }
        if ( v61 == ++v62 )
          goto LABEL_43;
      }
      if ( entity )
        return (int32_t)entity[1].monitor;
LABEL_50:
      sub_1BCAA3C(Instance, baseShopId);
    }
  }
LABEL_43:
  if ( !v43 || v43->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_int___Sort(
    v43,
    (const MethodInfo_358657C *)Method_System_Collections_Generic_List_int__Sort__);
  return System_Collections_Generic_List_int___get_Item(
           v43,
           0,
           (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
}


ShopEntity_o *__fastcall ShopMaster__GetEntityOfFragmentsShop(ShopMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  ShopEntity_o *v23; // x0
  __int64 v24; // x1
  ShopEntity_o *v25; // x21
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4B16BFC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v8, v9);
    sub_1BCA7E0(&ShopEntity_TypeInfo, v10, v11);
    byte_4B16BFC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                            Enumerator,
                            *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( !v23 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v23->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ShopEntity_c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
    {
      sub_1BCACFC(v23);
LABEL_33:
      sub_1BCAA3C(v23, v24);
    }
    if ( v23->fields.shopType == 6 && v23->fields.payType == 8 )
      goto LABEL_25;
  }
  v25 = 0LL;
LABEL_25:
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_29;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_29:
    v30 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v25;
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEventEntitiyList(
        ShopMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x19
  int64_t v27; // x1
  void *list; // x0
  int32_t Count; // w0
  int64_t v30; // x2
  __int64 v31; // x3
  int32_t v32; // w22
  int32_t v33; // w23
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Comparison_T__o *v43; // x20
  Il2CppObject *v44; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7

  if ( (byte_4B16BEC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_ShopEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&ShopEntity_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_ShopMaster___c__GetEventEntitiyList_b__4_0__, v22, v23);
    sub_1BCA7E0(&ShopMaster___c_TypeInfo, v24, v25);
    byte_4B16BEC = 1;
  }
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v32 = Count;
    v33 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v33,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v27 = (int64_t)list;
        methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == ShopEntity_TypeInfo
          && *((_DWORD *)list + 6) == eventId )
        {
          if ( !v26 )
            break;
          items = v26->fields._items;
          v40 = Method_System_Collections_Generic_List_ShopEntity__Add__;
          ++v26->fields._version;
          if ( !items )
            break;
          size = v26->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + size;
            v26->fields._size = size + 1;
            v42[4] = (Il2CppClass *)v27;
            sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), v27, v30, v31, v34, v35, v36, v37);
          }
        }
      }
      if ( v32 == ++v33 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1BCAA3C(list, v27);
  }
LABEL_17:
  list = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo, v27);
    list = ShopMaster___c_TypeInfo;
  }
  v43 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 32LL);
  if ( !v43 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v27);
      list = ShopMaster___c_TypeInfo;
    }
    v44 = (Il2CppObject *)**((_QWORD **)list + 23);
    v43 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ShopEntity__TypeInfo, v27, v30, v31);
    System_Comparison_object____ctor(v43, v44, Method_ShopMaster___c__GetEventEntitiyList_b__4_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ShopEntity__o *)v43;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v43, v46, v47, v48, v49, v50, v51);
  }
  if ( !v26 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_56244000(
    v26,
    v43,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v26,
                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ShopMaster__GetEventItemList(
        ShopMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  Il2CppObject *MasterData_object; // x22
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Collections_Generic_List_object__o *v46; // x19
  __int64 v47; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v50; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  __int64 v54; // x9
  int32_t *v55; // x10
  __int64 v56; // x0
  Il2CppObject *IsHideItem; // x0
  __int64 v58; // x1
  const MethodInfo *v59; // x3
  Il2CppObject *v60; // x23
  ShopEntity_c *v61; // x1
  __int64 methodPtr_low; // x9
  Il2CppClass *v63; // x8
  unsigned __int64 v64; // x27
  __int64 namespaze; // x25
  int32_t v66; // w2
  int32_t v67; // w24
  Il2CppClass *v68; // x8
  Il2CppClass *v69; // x8
  Il2CppObject *Entity; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x1
  struct System_Object_array *items; // x8
  _QWORD *v79; // x9
  __int64 size; // x10
  Il2CppClass **v81; // x0
  System_Int32_array *v82; // x20
  System_Collections_Generic_IEnumerator_T__c *v83; // x8
  __int64 v84; // x9
  int32_t *v85; // x10
  __int64 v86; // x0
  __int64 v87; // x2
  __int64 v88; // x3
  ShopMaster___c_c *v89; // x8
  System_Comparison_T__o *_9__12_0; // x20
  Il2CppObject *v91; // x21
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  __int64 v99; // x21
  unsigned __int64 v100; // x22

  if ( (byte_4B16BF4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5, v6);
    sub_1BCA7E0(&System_Comparison_ItemEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&int___TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_ItemEntity__TypeInfo, v31, v32);
    sub_1BCA7E0(&ShopEntity_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    sub_1BCA7E0(&Method_ShopMaster___c__GetEventItemList_b__12_0__, v37, v38);
    sub_1BCA7E0(&ShopMaster___c_TypeInfo, v39, v40);
    byte_4B16BF4 = 1;
  }
  if ( eventId < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_81;
  if ( !System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_81;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  v46 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                       v43,
                                                       v44,
                                                       v45);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_81;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v47);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v50;
        p_offset += 4;
        if ( !v50 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v53 = Enumerator->klass;
    v54 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v55 = &v53->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v55 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v54;
        v55 += 4;
        if ( !v54 )
          goto LABEL_20;
      }
      v56 = (__int64)&v53->vtable[*v55].method;
    }
    else
    {
LABEL_20:
      v56 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    IsHideItem = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
                                   Enumerator,
                                   *(_QWORD *)(v56 + 8));
    v60 = IsHideItem;
    if ( !IsHideItem )
      sub_1BCAA3C(0LL, v58);
    v61 = ShopEntity_TypeInfo;
    methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(IsHideItem->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (ShopEntity_c *)IsHideItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
    {
      sub_1BCACFC(IsHideItem);
      goto LABEL_81;
    }
    if ( LODWORD(IsHideItem[1].monitor) == eventId )
    {
      v63 = IsHideItem[2].klass;
      if ( !v63 )
        sub_1BCAA3C(IsHideItem, ShopEntity_TypeInfo);
      if ( (int)v63->_1.namespaze >= 1 )
      {
        v64 = 0LL;
        namespaze = (unsigned int)v63->_1.namespaze;
        while ( 1 )
        {
          if ( v64 >= LODWORD(v63->_1.namespaze) )
            sub_1BCAA44(IsHideItem, v61);
          v66 = *((_DWORD *)&v63->_1.byval_arg.data + v64);
          if ( v66 >= 1 )
          {
            IsHideItem = (Il2CppObject *)ShopMaster__IsHideItem((ShopMaster_o *)IsHideItem, eventId, v66, v59);
            if ( ((unsigned __int8)IsHideItem & 1) == 0 )
            {
              if ( !v46 )
                sub_1BCAA3C(IsHideItem, v61);
              if ( v46->fields._size < 1 )
              {
LABEL_40:
                v69 = v60[2].klass;
                if ( !v69 )
                  sub_1BCAA3C(IsHideItem, v61);
                if ( v64 >= LODWORD(v69->_1.namespaze) )
                  sub_1BCAA44(IsHideItem, v61);
                if ( !MasterData_object )
                  sub_1BCAA3C(IsHideItem, v61);
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           *((_DWORD *)&v69->_1.byval_arg.data + v64),
                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                v77 = (int64_t)Entity;
                items = v46->fields._items;
                v79 = Method_System_Collections_Generic_List_ItemEntity__Add__;
                ++v46->fields._version;
                if ( !items )
                  sub_1BCAA3C(Entity, Entity);
                size = v46->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v46,
                    Entity,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
                }
                else
                {
                  v81 = &items->obj.klass + size;
                  v46->fields._size = size + 1;
                  v81[4] = (Il2CppClass *)v77;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v81 + 4), v77, v71, v72, v73, v74, v75, v76);
                }
              }
              else
              {
                v67 = 0;
                while ( 1 )
                {
                  IsHideItem = System_Collections_Generic_List_object___get_Item(
                                 v46,
                                 v67,
                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
                  if ( !IsHideItem )
                    sub_1BCAA3C(0LL, v61);
                  v68 = v60[2].klass;
                  if ( !v68 )
                    sub_1BCAA3C(IsHideItem, v61);
                  if ( v64 >= LODWORD(v68->_1.namespaze) )
                    sub_1BCAA44(IsHideItem, v61);
                  if ( LODWORD(IsHideItem[1].klass) == *((_DWORD *)&v68->_1.byval_arg.data + v64) )
                    break;
                  if ( ++v67 >= v46->fields._size )
                    goto LABEL_40;
                }
              }
            }
          }
          if ( ++v64 == namespaze )
            break;
          v63 = v60[2].klass;
          if ( !v63 )
            sub_1BCAA3C(IsHideItem, v61);
        }
      }
    }
  }
  v83 = Enumerator->klass;
  v84 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v85 = &v83->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
    {
      --v84;
      v85 += 4;
      if ( !v84 )
        goto LABEL_55;
    }
    v86 = (__int64)&v83->vtable[*v85].method;
  }
  else
  {
LABEL_55:
    v86 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v86)(
                                                             Enumerator,
                                                             *(_QWORD *)(v86 + 8));
  v89 = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo, *(_QWORD *)&eventId);
    v89 = ShopMaster___c_TypeInfo;
  }
  _9__12_0 = (System_Comparison_T__o *)v89->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v89->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v89, *(_QWORD *)&eventId);
      v89 = ShopMaster___c_TypeInfo;
    }
    v91 = (Il2CppObject *)v89->static_fields->__9;
    _9__12_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                           System_Comparison_ItemEntity__TypeInfo,
                                           *(_QWORD *)&eventId,
                                           v87,
                                           v88);
    System_Comparison_object____ctor(_9__12_0, v91, Method_ShopMaster___c__GetEventItemList_b__12_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_ItemEntity__o *)_9__12_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__12_0,
      (int64_t)_9__12_0,
      v93,
      v94,
      v95,
      v96,
      v97,
      v98);
  }
  if ( !v46 )
LABEL_81:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
  System_Collections_Generic_List_object___Sort_56244000(
    v46,
    _9__12_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v99 = (unsigned int)v46->fields._size;
  v82 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v99);
  if ( (int)v99 >= 1 )
  {
    v100 = 0LL;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v46,
                                                                 v100,
                                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !list || !v82 )
        break;
      if ( v100 >= v82->max_length )
        sub_1BCAA44(list, *(_QWORD *)&eventId);
      v82->m_Items[++v100] = (int32_t)list->fields.items;
      if ( v99 == v100 )
        return v82;
    }
    goto LABEL_81;
  }
  return v82;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopMaster__GetEventShopBaseShopId(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ShopEntity_array *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x8
  ShopEntity_o *v13; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16BF9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B16BF9 = 1;
  }
  entity = 0LL;
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (ShopEntity_array *)entity;
    if ( !entity )
      goto LABEL_15;
    if ( !EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)entity, 0LL) )
      goto LABEL_13;
  }
  Instance = ShopMaster__GetEnableEventEntitiyList(this, eventId, v11);
  if ( !Instance )
    return (int)Instance;
  v12 = *(_QWORD *)&Instance->max_length;
  if ( !v12 )
  {
LABEL_13:
    LODWORD(Instance) = 0;
    return (int)Instance;
  }
  if ( !(_DWORD)v12 )
    sub_1BCAA44(Instance, v10);
  v13 = Instance->m_Items[0];
  if ( !v13 )
LABEL_15:
    sub_1BCAA3C(Instance, v10);
  LODWORD(Instance) = v13->fields.baseShopId;
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
      sub_1BCAA3C(EntityOfFragmentsShop, v3);
    v5 = *(_QWORD *)&prices->max_length;
    if ( v5 )
    {
      if ( !(_DWORD)v5 )
        sub_1BCAA44(EntityOfFragmentsShop, v3);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  int64_t Time; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Collections_Generic_List_object__o *v31; // x21
  __int64 v32; // x1
  void *list; // x0
  int32_t Count; // w0
  int64_t v35; // x2
  __int64 v36; // x3
  int32_t v37; // w23
  int32_t v38; // w24
  ShopEntity_o *Item; // x0
  Il2CppObject *v40; // x25
  __int64 methodPtr_low; // x10
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  System_Comparison_T__o *v50; // x19
  Il2CppObject *v51; // x20
  struct ShopMaster___c_StaticFields *static_fields; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7

  if ( (byte_4B16BED & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&System_Comparison_ShopEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopEntity__TypeInfo, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&ShopEntity_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_ShopMaster___c__GetOpenedEventEntitiyList_b__5_0__, v23, v24);
    sub_1BCA7E0(&ShopMaster___c_TypeInfo, v25, v26);
    byte_4B16BED = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  Time = NetworkManager__getTime(0LL);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       v28,
                                                       v29,
                                                       v30);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v37 = Count;
    v38 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)list,
                               v38,
                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v40 = (Il2CppObject *)Item;
        methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopEntity_TypeInfo
          && Item->fields.eventId == eventId )
        {
          list = (void *)ShopEntity__IsOpened(Item, Time, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v31 )
              break;
            items = v31->fields._items;
            v47 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v31->fields._version;
            if ( !items )
              break;
            size = v31->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v31,
                v40,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
            }
            else
            {
              v49 = &items->obj.klass + size;
              v31->fields._size = size + 1;
              v49[4] = (Il2CppClass *)v40;
              sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 4), (int64_t)v40, v35, v36, v42, v43, v44, v45);
            }
          }
        }
      }
      if ( v37 == ++v38 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1BCAA3C(list, v32);
  }
LABEL_20:
  list = ShopMaster___c_TypeInfo;
  if ( !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo, v32);
    list = ShopMaster___c_TypeInfo;
  }
  v50 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 40LL);
  if ( !v50 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v32);
      list = ShopMaster___c_TypeInfo;
    }
    v51 = (Il2CppObject *)**((_QWORD **)list + 23);
    v50 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ShopEntity__TypeInfo, v32, v35, v36);
    System_Comparison_object____ctor(v50, v51, Method_ShopMaster___c__GetOpenedEventEntitiyList_b__5_0__, 0LL);
    static_fields = ShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_ShopEntity__o *)v50;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)v50, v53, v54, v55, v56, v57, v58);
  }
  if ( !v31 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_56244000(
    v31,
    v50,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v31,
                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__IsEnableEventShop(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  int32_t v12; // w22
  bool v13; // w25
  __int64 methodPtr_low; // x10

  if ( (byte_4B16BFB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&ShopEntity_TypeInfo, v7, v8);
    byte_4B16BFB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        v13 = ++v12 < v11;
        if ( v11 != v12 )
          continue;
      }
      return v13;
    }
LABEL_15:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
  }
  return 0;
}


bool __fastcall ShopMaster__IsEnableEventShop_40655644(ShopMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  int64_t Time; // x20
  Il2CppObject *Master_object; // x21
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  UserShopMaster_o *v25; // x22
  __int64 v26; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int i; // w25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  ShopEntity_o *v37; // x0
  ShopEntity_o *v38; // x23
  __int64 methodPtr_low; // x9
  __int64 v40; // x1
  int64_t UserId; // x0
  UserShopEntity_o *EntityDefinitely; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x3
  char v45; // w21
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0

  if ( (byte_4B16BFE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopReleaseMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserShopMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v14, v15);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&ShopEntity_TypeInfo, v18, v19);
    byte_4B16BFE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  v23 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !this->fields.list )
LABEL_45:
    sub_1BCAA3C(v23, v24);
  v25 = (UserShopMaster_o *)v23;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v26);
  for ( i = 0; ; i |= ShopReleaseMaster__CondClearCheck((ShopReleaseMaster_o *)Master_object, v38->fields.id, 1, v44) )
  {
    do
    {
      do
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
              goto LABEL_14;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_14:
          p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
        {
          v45 = 1;
          goto LABEL_36;
        }
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
              goto LABEL_21;
          }
          v36 = (__int64)&v33->vtable[*v35].method;
        }
        else
        {
LABEL_21:
          v36 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
        }
        v37 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                                Enumerator,
                                *(_QWORD *)(v36 + 8));
        v38 = v37;
      }
      while ( !v37 );
      methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v37->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopEntity_c *)v37->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEntity_TypeInfo )
      {
        sub_1BCACFC(v37);
        goto LABEL_45;
      }
    }
    while ( v37->fields.shopType != 12 || !ShopEntity__IsEnable(v37, Time, 0LL) );
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v25 )
      sub_1BCAA3C(UserId, UserId);
    EntityDefinitely = UserShopMaster__GetEntityDefinitely(v25, UserId, v38->fields.id, 0LL);
    if ( EntityDefinitely )
    {
      if ( EntityDefinitely->fields.num >= v38->fields.limitNum )
        break;
    }
    if ( !Master_object )
      sub_1BCAA3C(EntityDefinitely, v43);
  }
  v45 = 0;
LABEL_36:
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
        goto LABEL_40;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_40:
    v49 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  return i & v45;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__IsEventCloseWithItemPurchase(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  int64_t Instance; // x0
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Collections_Generic_Dictionary_int__int__o *v38; // x21
  int32_t v39; // w22
  int64_t v40; // x23
  __int64 methodPtr_low; // x10
  __int64 v42; // x1
  Il2CppObject *MasterData_object; // x24
  int v44; // w24
  bool v45; // w0
  int32_t v46; // w1
  int32_t v47; // w8
  const MethodInfo_31FD274 *v48; // x3
  int32_t v49; // w2
  unsigned int Count; // w0
  System_Int32_array *v51; // x19
  int max_length; // w8
  unsigned int v53; // w10
  int v54; // w11
  int32_t value; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B16BFA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v21, v22);
    sub_1BCA7E0(&int___TypeInfo, v23, v24);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&ShopEntity_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__int__CopyTo__, v31, v32);
    byte_4B16BFA = 1;
  }
  value = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v38 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v35,
                                                               v36,
                                                               v37);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v38,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_25;
  v39 = 0;
  while ( 1 )
  {
    Instance = System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v39 >= (int)Instance )
      break;
    Instance = (int64_t)this->fields.list;
    if ( !Instance )
      goto LABEL_25;
    Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)Instance,
                          v39,
                          (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_25;
    v40 = Instance;
    methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
      || *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != ShopEntity_TypeInfo )
    {
      goto LABEL_25;
    }
    if ( *(_DWORD *)(Instance + 24) == eventId )
    {
      value = 0;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v42);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object )
        goto LABEL_25;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(
                            (UserShopMaster_o *)MasterData_object,
                            Instance,
                            *(_DWORD *)(v40 + 16),
                            0LL);
      if ( !Instance || !v38 )
        goto LABEL_25;
      v44 = *(_DWORD *)(Instance + 28);
      v45 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
              v38,
              *(_DWORD *)(v40 + 20),
              &value,
              (const MethodInfo_31FE90C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
      v46 = *(_DWORD *)(v40 + 20);
      if ( v45 )
      {
        System_Collections_Generic_Dictionary_int__int___Remove(
          v38,
          v46,
          (const MethodInfo_31FE62C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
        v47 = value;
        if ( (value & 0x80000000) != 0 )
        {
          v47 = -value;
          value = -value;
        }
        v46 = *(_DWORD *)(v40 + 20);
        v48 = (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v49 = v47 + v44;
      }
      else
      {
        v48 = (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v49 = -v44;
      }
      System_Collections_Generic_Dictionary_int__int___Add(v38, v46, v49, v48);
    }
    Instance = (int64_t)this->fields.list;
    ++v39;
    if ( !Instance )
      goto LABEL_25;
  }
  if ( !v38 )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_int__int___get_Count(
          v38,
          (const MethodInfo_31FCF28 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) )
  {
LABEL_37:
    LOBYTE(Instance) = 1;
    return Instance;
  }
  Count = System_Collections_Generic_Dictionary_int__int___get_Count(
            v38,
            (const MethodInfo_31FCF28 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
  v51 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, Count);
  Instance = (int64_t)System_Collections_Generic_Dictionary_int__int___get_Values(
                        v38,
                        (const MethodInfo_31FD088 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
  if ( !Instance
    || (System_Collections_Generic_Dictionary_ValueCollection_int__int___CopyTo(
          (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
          v51,
          0,
          (const MethodInfo_38CD098 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__int__CopyTo__),
        !v51) )
  {
LABEL_25:
    sub_1BCAA3C(Instance, v34);
  }
  max_length = v51->max_length;
  if ( max_length < 1 )
    goto LABEL_37;
  v53 = 0;
  do
  {
    if ( v53 >= max_length )
      sub_1BCAA44(Instance, v34);
    v54 = v51->m_Items[v53 + 1];
    Instance = v54 > 0;
    if ( v54 < 1 )
      break;
  }
  while ( max_length - 1 != v53++ );
  return Instance;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__IsEventShopOpen(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x4
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  _BOOL4 v35; // w21
  __int64 v36; // x1
  Il2CppObject *v37; // x20
  _BOOL4 v38; // w20
  const MethodInfo *v40; // x2
  int v41; // w8
  Il2CppObject *v42; // x20
  const MethodInfo *v43; // x2
  __int64 v44; // x1
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x21
  __int64 v46; // x2
  __int64 v47; // x3
  System_Func_object__bool__o *v48; // x22
  Il2CppObject *v49; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-50h] BYREF
  int64_t closedAt; // [xsp+18h] [xbp-48h] BYREF
  int64_t openedAt; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4B16BFF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_All_ShopEntity___, v14, v15);
    sub_1BCA7E0(&System_Func_ShopEntity__bool__TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&TitleInfoControl_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_ShopMaster___c__DisplayClass25_0__IsEventShopOpen_b__0__, v24, v25);
    sub_1BCA7E0(&ShopMaster___c__DisplayClass25_0_TypeInfo, v26, v27);
    byte_4B16BFF = 1;
  }
  openedAt = 0LL;
  entity = 0LL;
  closedAt = 0LL;
  v49 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_39;
  ShopMaster__GetEnableEventPeriod((ShopMaster_o *)Instance, &openedAt, &closedAt, eventId, v30);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( closedAt < 1 )
    goto LABEL_12;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_39;
  if ( EventEntity__isPurchaseEventOpen((EventEntity_o *)entity, 0LL) )
  {
LABEL_12:
    v35 = 0;
  }
  else
  {
    v42 = (Il2CppObject *)sub_1BCAA2C(ShopMaster___c__DisplayClass25_0_TypeInfo, v32, v33, v34);
    System_Object___ctor(v42, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
    if ( !Instance )
      goto LABEL_39;
    EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                              (ShopMaster_o *)Instance,
                                                                              eventId,
                                                                              v43);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v44);
    Instance = (DataManager_o *)NetworkManager__getTime(0LL);
    if ( !v42 )
      goto LABEL_39;
    v42[1].klass = (Il2CppClass *)Instance;
    if ( !entity )
      goto LABEL_39;
    if ( (__int64)Instance <= (__int64)entity[6].monitor )
    {
      v48 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ShopEntity__bool__TypeInfo, v29, v46, v47);
      System_Func_object__bool____ctor(v48, v42, Method_ShopMaster___c__DisplayClass25_0__IsEventShopOpen_b__0__, 0LL);
      v35 = System_Linq_Enumerable__All_object_(
              EventEntitiyList,
              (System_Func_TSource__bool__o *)v48,
              (const MethodInfo_2F1D414 *)Method_System_Linq_Enumerable_All_ShopEntity___);
    }
    else
    {
      v35 = 1;
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v49,
          eventId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_22;
  Instance = (DataManager_o *)v49;
  if ( !v49 )
    goto LABEL_39;
  if ( EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)v49, 0LL) )
  {
    v37 = v49;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v36);
    v38 = !TitleInfoControl__IsEnableEventShopButton_37955824((EventDetailEntity_o *)v37, 0LL);
  }
  else
  {
LABEL_22:
    v38 = 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
LABEL_39:
    sub_1BCAA3C(Instance, v29);
  }
  v41 = ShopMaster__CloseLimitEventShop((ShopMaster_o *)Instance, eventId, v40) || v38;
  return (v41 | v35) == 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__IsHideItem(ShopMaster_o *this, int32_t eventId, int32_t id, const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  EventItemDisplayEntity_array *Instance; // x0
  __int64 v9; // x1
  int max_length; // w8
  __int64 v11; // x9
  EventItemDisplayEntity_o *v12; // x11

  if ( (byte_4B16BF5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventItemDisplayMaster___, *(_QWORD *)&eventId, *(_QWORD *)&id);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16BF5 = 1;
  }
  Instance = (EventItemDisplayEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventItemDisplayEntity_array *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventItemDisplayMaster___)) == 0LL )
  {
LABEL_15:
    sub_1BCAA3C(Instance, v9);
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
      sub_1BCAA44(Instance, v9);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t eventId; // w21
  Il2CppObject *Entity; // x0

  v4 = this;
  if ( (byte_4B16BF6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, shopEntity, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    this = (ShopMaster_o *)sub_1BCA7E0(
                             &Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__,
                             v7,
                             v8);
    byte_4B16BF6 = 1;
  }
  if ( !shopEntity )
    goto LABEL_13;
  eventId = shopEntity->fields.eventId;
  if ( eventId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, shopEntity);
    this = (ShopMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( this )
    {
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 eventId,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( Entity && EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)Entity, 0LL) )
        return ShopMaster__IsPurchaseCloseEventShopItem(v4, shopEntity->fields.baseShopId, method);
      return 0;
    }
LABEL_13:
    sub_1BCAA3C(this, shopEntity);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v21; // w22
  int32_t v22; // w23
  int64_t v23; // x20
  __int64 methodPtr_low; // x9
  const MethodInfo *v26; // x2
  ShopReleaseMaster_o *v27; // x21
  int32_t TargetShopGroupId; // w22
  const MethodInfo *v29; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  const MethodInfo *v31; // x3
  __int64 v32; // x1
  Il2CppObject *MasterData_object; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  ShopMaster_o *v35; // x0
  int64_t *v36; // x1
  int64_t *v37; // x2
  int32_t v38; // w3
  const MethodInfo *v39; // x4

  v3 = baseShopId;
  if ( (byte_4B16BF8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&baseShopId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopGroupMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&ShopEntity_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B16BF8 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v21 = Count;
  v22 = 0;
  while ( 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_27;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v22,
                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_27;
    *(_QWORD *)&baseShopId = ShopEntity_TypeInfo;
    v23 = list;
    methodPtr_low = LOBYTE(ShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ShopEntity_TypeInfo )
    {
      break;
    }
    if ( *(_DWORD *)(list + 20) == v3 )
    {
      list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( list )
      {
        list = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)list,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
        if ( list )
        {
          v27 = (ShopReleaseMaster_o *)list;
          TargetShopGroupId = ShopReleaseMaster__GetTargetShopGroupId((ShopReleaseMaster_o *)list, v3, v26);
          list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( list )
          {
            list = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)list,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
            if ( list )
            {
              TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)list, TargetShopGroupId, v29);
              if ( TargetEntityList && *(_QWORD *)&TargetEntityList->max_length )
                return ShopReleaseMaster__CondClearCheck(v27, v3, 82, v31);
              list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( list )
              {
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)list,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v32);
                list = NetworkManager__get_UserId(0LL);
                if ( MasterData_object )
                {
                  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                                       (UserShopMaster_o *)MasterData_object,
                                       list,
                                       v3,
                                       0LL);
                  return EntityDefinitely && EntityDefinitely->fields.num >= *(_DWORD *)(v23 + 88);
                }
              }
            }
          }
        }
      }
LABEL_27:
      sub_1BCAA3C(list, *(_QWORD *)&baseShopId);
    }
    if ( v21 == ++v22 )
      return 1;
  }
  sub_1BCACFC(list);
  return ShopMaster__GetEnableEventPeriod(v35, v36, v37, v38, v39);
}


bool __fastcall ShopMaster__PurchaseCloseEventShop(
        ShopMaster_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t eventId; // w20
  Il2CppObject *Entity; // x0

  if ( (byte_4B16BF7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, shopEntity, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    this = (ShopMaster_o *)sub_1BCA7E0(
                             &Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__,
                             v6,
                             v7);
    byte_4B16BF7 = 1;
  }
  if ( !shopEntity )
    goto LABEL_11;
  eventId = shopEntity->fields.eventId;
  if ( !eventId )
    return shopEntity->fields.shopType == 12;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, shopEntity);
  this = (ShopMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !this )
LABEL_11:
    sub_1BCAA3C(this, shopEntity);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             eventId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
    return EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)Entity, 0LL);
  return shopEntity->fields.shopType == 12;
}


void __fastcall ShopMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16C00 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopMaster___c_TypeInfo, v1, v2);
    byte_4B16C00 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ShopMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ShopMaster___c_TypeInfo->static_fields->__9 = (struct ShopMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ShopMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEntitiyList_b__2_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEntitiyList_b__3_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEventEntitiyList_b__6_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEventEntityList_b__7_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableExchangeSvtCoinEntitiyList_b__8_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEventEntitiyList_b__4_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEventItemList_b__12_0(
        ShopMaster___c_o *this,
        ItemEntity_o *a,
        ItemEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetOpenedEventEntitiyList_b__5_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.closedAt < this->fields.nowTime;
}