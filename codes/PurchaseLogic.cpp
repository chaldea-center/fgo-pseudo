void PurchaseLogic___ctor(PurchaseLogic_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  PurchaseLogic___c_c *v11; // x0
  System_Action_object__o *_9__87_0; // x20
  Il2CppObject *v13; // x21
  struct PurchaseLogic___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  PurchaseLogic___c_c *v19; // x0
  System_Action_object__o *_9__87_1; // x20
  Il2CppObject *v21; // x21
  struct PurchaseLogic___c_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  PurchaseLogic___c_c *v27; // x0
  System_Action_object__o *_9__87_2; // x20
  Il2CppObject *v29; // x21
  struct PurchaseLogic___c_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  PurchaseLogic___c_c *v35; // x0
  System_Action_T1__T2__o *_9__87_3; // x20
  Il2CppObject *v37; // x21
  struct PurchaseLogic___c_StaticFields *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3

  if ( (byte_4CB5BCA & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_string__TypeInfo);
    sub_1C6BA08(&System_Action_string__float__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_Product___ctor__);
    sub_1C6BA08(&System_Collections_Generic_HashSet_Product__TypeInfo);
    sub_1C6BA08(&Method_PurchaseLogic___c___ctor_b__87_0__);
    sub_1C6BA08(&Method_PurchaseLogic___c___ctor_b__87_1__);
    sub_1C6BA08(&Method_PurchaseLogic___c___ctor_b__87_2__);
    sub_1C6BA08(&Method_PurchaseLogic___c___ctor_b__87_3__);
    sub_1C6BA08(&PurchaseLogic___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB5BCA = 1;
  }
  v3 = (System_Collections_Generic_HashSet_T__o *)sub_1C6BC54(System_Collections_Generic_HashSet_Product__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_36B73E0 *)Method_System_Collections_Generic_HashSet_Product___ctor__);
  this->fields._pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = StringLiteral_1/*""*/;
  this->fields._currentTransactionId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._currentTransactionId, v6, v7, v8);
  v11 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v11 = PurchaseLogic___c_TypeInfo;
  }
  _9__87_0 = (System_Action_object__o *)v11->static_fields->__9__87_0;
  if ( !_9__87_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = PurchaseLogic___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__87_0 = (System_Action_object__o *)sub_1C6BC54(System_Action_string__TypeInfo);
    System_Action_object____ctor(_9__87_0, v13, Method_PurchaseLogic___c___ctor_b__87_0__, 0);
    static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    static_fields->__9__87_0 = (struct System_Action_string__o *)_9__87_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__87_0, (int32_t)_9__87_0, v15, v16);
  }
  this->fields._logOutputAction = (struct System_Action_string__o *)_9__87_0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._logOutputAction, (int32_t)_9__87_0, v9, v10);
  v19 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v19 = PurchaseLogic___c_TypeInfo;
  }
  _9__87_1 = (System_Action_object__o *)v19->static_fields->__9__87_1;
  if ( !_9__87_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = PurchaseLogic___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__87_1 = (System_Action_object__o *)sub_1C6BC54(System_Action_string__TypeInfo);
    System_Action_object____ctor(_9__87_1, v21, Method_PurchaseLogic___c___ctor_b__87_1__, 0);
    v22 = PurchaseLogic___c_TypeInfo->static_fields;
    v22->__9__87_1 = (struct System_Action_string__o *)_9__87_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v22->__9__87_1, (int32_t)_9__87_1, v23, v24);
  }
  this->fields._logErrorOutputAction = (struct System_Action_string__o *)_9__87_1;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._logErrorOutputAction, (int32_t)_9__87_1, v17, v18);
  v27 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v27 = PurchaseLogic___c_TypeInfo;
  }
  _9__87_2 = (System_Action_object__o *)v27->static_fields->__9__87_2;
  if ( !_9__87_2 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = PurchaseLogic___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__87_2 = (System_Action_object__o *)sub_1C6BC54(System_Action_string__TypeInfo);
    System_Action_object____ctor(_9__87_2, v29, Method_PurchaseLogic___c___ctor_b__87_2__, 0);
    v30 = PurchaseLogic___c_TypeInfo->static_fields;
    v30->__9__87_2 = (struct System_Action_string__o *)_9__87_2;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v30->__9__87_2, (int32_t)_9__87_2, v31, v32);
  }
  this->fields._sendReportOutputAction = (struct System_Action_string__o *)_9__87_2;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._sendReportOutputAction, (int32_t)_9__87_2, v25, v26);
  v35 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v35 = PurchaseLogic___c_TypeInfo;
  }
  _9__87_3 = (System_Action_T1__T2__o *)v35->static_fields->__9__87_3;
  if ( !_9__87_3 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = PurchaseLogic___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__87_3 = (System_Action_T1__T2__o *)sub_1C6BC54(System_Action_string__float__TypeInfo);
    System_Action_object__float____ctor(_9__87_3, v37, Method_PurchaseLogic___c___ctor_b__87_3__, 0);
    v38 = PurchaseLogic___c_TypeInfo->static_fields;
    v38->__9__87_3 = (struct System_Action_string__float__o *)_9__87_3;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v38->__9__87_3, (int32_t)_9__87_3, v39, v40);
  }
  this->fields._logErrorOutputActionSampledByRatio = (struct System_Action_string__float__o *)_9__87_3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._logErrorOutputActionSampledByRatio, (int32_t)_9__87_3, v33, v34);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PurchaseLogic__AddDeferredPurchaseProductIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_object__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  System_Collections_Generic_List_object__o *v11; // x20
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  PurchaseLogic_o *v16; // x0
  const MethodInfo *v17; // x2

  if ( (byte_4CB5BC4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Distinct_string___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    byte_4CB5BC4 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(productId, 0);
  if ( !IsNullOrEmpty )
  {
    DeferredPurchaseProductIdsFromPlayerPrefs = (System_Collections_Generic_List_object__o *)PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                                                               (PurchaseLogic_o *)IsNullOrEmpty,
                                                                                               v5);
    if ( !DeferredPurchaseProductIdsFromPlayerPrefs
      || (items = DeferredPurchaseProductIdsFromPlayerPrefs->fields._items,
          v11 = DeferredPurchaseProductIdsFromPlayerPrefs,
          v12 = Method_System_Collections_Generic_List_string__Add__,
          ++DeferredPurchaseProductIdsFromPlayerPrefs->fields._version,
          !items) )
    {
      sub_1C6BC60(DeferredPurchaseProductIdsFromPlayerPrefs, v7);
    }
    size = DeferredPurchaseProductIdsFromPlayerPrefs->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        DeferredPurchaseProductIdsFromPlayerPrefs,
        (Il2CppObject *)productId,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v14 = &items->obj.klass + size;
      v11->fields._size = size + 1;
      v14[4] = (Il2CppClass *)productId;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)productId, v8, v9);
    }
    v15 = System_Linq_Enumerable__Distinct_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v11,
            (const MethodInfo_315E6E8 *)Method_System_Linq_Enumerable_Distinct_string___);
    v16 = (PurchaseLogic_o *)System_Linq_Enumerable__ToList_object_(
                               v15,
                               (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_string___);
    PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(
      v16,
      (System_Collections_Generic_List_string__o *)v16,
      v17);
  }
}


void PurchaseLogic__AddPendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *pendingProducts; // x0

  if ( (byte_4CB5BAD & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_Product__Add__);
    byte_4CB5BAD = 1;
  }
  pendingProducts = (System_Collections_Generic_HashSet_T__o *)this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_1C6BC60(0, product);
  System_Collections_Generic_HashSet_object___Add(
    pendingProducts,
    (Il2CppObject *)product,
    (const MethodInfo_36B85C4 *)Method_System_Collections_Generic_HashSet_Product__Add__);
}


void PurchaseLogic__AddPreparePurchaseShopIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  PurchaseLogic_o *v4; // x20
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_object__o *PreparePurchaseShopIdsFromPlayerPrefs; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  System_Collections_Generic_List_object__o *v11; // x19
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  PurchaseLogic_o *v16; // x0
  const MethodInfo *v17; // x2
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v18 = shopId;
  if ( (byte_4CB5BC8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Distinct_string___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    byte_4CB5BC8 = 1;
  }
  if ( shopId >= 1 )
  {
    v4 = (PurchaseLogic_o *)System_Int32__ToString((int32_t)&v18, 0);
    PreparePurchaseShopIdsFromPlayerPrefs = (System_Collections_Generic_List_object__o *)PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs(
                                                                                           v4,
                                                                                           v5);
    if ( !PreparePurchaseShopIdsFromPlayerPrefs
      || (items = PreparePurchaseShopIdsFromPlayerPrefs->fields._items,
          v11 = PreparePurchaseShopIdsFromPlayerPrefs,
          v12 = Method_System_Collections_Generic_List_string__Add__,
          ++PreparePurchaseShopIdsFromPlayerPrefs->fields._version,
          !items) )
    {
      sub_1C6BC60(PreparePurchaseShopIdsFromPlayerPrefs, v7);
    }
    size = PreparePurchaseShopIdsFromPlayerPrefs->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        PreparePurchaseShopIdsFromPlayerPrefs,
        (Il2CppObject *)v4,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v14 = &items->obj.klass + size;
      v11->fields._size = size + 1;
      v14[4] = (Il2CppClass *)v4;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v4, v8, v9);
    }
    v15 = System_Linq_Enumerable__Distinct_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v11,
            (const MethodInfo_315E6E8 *)Method_System_Linq_Enumerable_Distinct_string___);
    v16 = (PurchaseLogic_o *)System_Linq_Enumerable__ToList_object_(
                               v15,
                               (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_string___);
    PurchaseLogic__SavePreparePurchaseShopIdsToPlayerPrefs(v16, (System_Collections_Generic_List_string__o *)v16, v17);
  }
}


int32_t PurchaseLogic__CheckBankStatusAndMonthlyLimit(
        PurchaseLogic_o *this,
        System_String_o *result,
        int32_t price,
        const MethodInfo *method)
{
  System_String_o *v6; // x19
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_object__object__o *v8; // x22
  void *Item; // x0
  __int64 v10; // x1
  System_String_o *v11; // x0
  int32_t v12; // w21
  PurchaseLogic_o *v13; // x0
  const MethodInfo *v14; // x2
  int32_t v15; // w22
  System_String_o *v16; // x0
  int32_t v17; // w20
  System_String_o *v18; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v20; // x21
  Il2CppObject *v21; // x22
  struct PurchaseLogic___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x20
  System_Action_o *v26; // x21
  Il2CppObject *v27; // x22
  struct PurchaseLogic___c_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4CB5BAA & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AgeVerificationMenu_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__32_0__);
    sub_1C6BA08(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__32_1__);
    sub_1C6BA08(&PurchaseLogic___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_12378/*"STONE_PURCHASE_RESULT_BLOCK"*/);
    sub_1C6BA08(&StringLiteral_22763/*"perMonthAmount"*/);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    sub_1C6BA08(&StringLiteral_21625/*"message"*/);
    sub_1C6BA08(&StringLiteral_17033/*"bankAvailable"*/);
    byte_4CB5BAA = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12378/*"STONE_PURCHASE_RESULT_BLOCK"*/, 0);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22301/*"ng"*/, 0) )
    goto LABEL_33;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0);
  v8 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
  if ( !Dictionary
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
          (Il2CppObject *)StringLiteral_22763/*"perMonthAmount"*/,
          (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    goto LABEL_33;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v8,
           (Il2CppObject *)StringLiteral_22763/*"perMonthAmount"*/,
           (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_48;
  v11 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                             Item,
                             *(_QWORD *)(*(_QWORD *)Item + 368LL));
  v12 = System_Int32__Parse(v11, 0);
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  AgeVerificationMenu__SaveCumulativeAmount(v12, 0);
  if ( !PurchaseLogic__IsLimitOver(v13, v12 + price, v14) )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v8,
           (Il2CppObject *)StringLiteral_17033/*"bankAvailable"*/,
           (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               v8,
               (Il2CppObject *)StringLiteral_17033/*"bankAvailable"*/,
               (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_48;
      v16 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                                 Item,
                                 *(_QWORD *)(*(_QWORD *)Item + 368LL));
      v17 = System_Int32__Parse(v16, 0);
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             v8,
             (Il2CppObject *)StringLiteral_21625/*"message"*/,
             (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v8,
                 (Il2CppObject *)StringLiteral_21625/*"message"*/,
                 (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_48;
        v18 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                                   Item,
                                   *(_QWORD *)(*(_QWORD *)Item + 368LL));
        v6 = v18;
        if ( !v17 )
        {
          if ( !System_String__IsNullOrEmpty(v18, 0) )
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
            {
              Item = PurchaseLogic___c_TypeInfo;
              if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
                Item = PurchaseLogic___c_TypeInfo;
              }
              v20 = *(System_Action_o **)(*((_QWORD *)Item + 23) + 8LL);
              if ( !v20 )
              {
                if ( !*((_DWORD *)Item + 56) )
                {
                  j_il2cpp_runtime_class_init_0(Item);
                  Item = PurchaseLogic___c_TypeInfo;
                }
                v21 = (Il2CppObject *)**((_QWORD **)Item + 23);
                v20 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
                System_Action___ctor(v20, v21, Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__32_0__, 0);
                static_fields = PurchaseLogic___c_TypeInfo->static_fields;
                static_fields->__9__32_0 = v20;
                sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__32_0, (int32_t)v20, v23, v24);
              }
              if ( Instance )
              {
                v15 = 1;
                CommonUI__OpenNotificationDialog(
                  (CommonUI_o *)Instance,
                  0,
                  v6,
                  v20,
                  -1,
                  0,
                  0,
                  0,
                  1,
                  0,
                  1,
                  0,
                  0,
                  0.0,
                  0,
                  0);
                return v15;
              }
LABEL_48:
              sub_1C6BC60(Item, v10);
            }
          }
          return 1;
        }
      }
      else if ( !v17 )
      {
        return 1;
      }
    }
LABEL_33:
    if ( !System_String__IsNullOrEmpty(v6, 0) )
    {
      v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0, 0) )
      {
        Item = PurchaseLogic___c_TypeInfo;
        if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
          Item = PurchaseLogic___c_TypeInfo;
        }
        v26 = *(System_Action_o **)(*((_QWORD *)Item + 23) + 16LL);
        if ( !v26 )
        {
          if ( !*((_DWORD *)Item + 56) )
          {
            j_il2cpp_runtime_class_init_0(Item);
            Item = PurchaseLogic___c_TypeInfo;
          }
          v27 = (Il2CppObject *)**((_QWORD **)Item + 23);
          v26 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
          System_Action___ctor(v26, v27, Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__32_1__, 0);
          v28 = PurchaseLogic___c_TypeInfo->static_fields;
          v28->__9__32_1 = v26;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v28->__9__32_1, (int32_t)v26, v29, v30);
        }
        if ( !v25 )
          goto LABEL_48;
        CommonUI__OpenNotificationDialog((CommonUI_o *)v25, 0, v6, v26, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
      }
    }
    return 2;
  }
  return 3;
}


int32_t PurchaseLogic__ComputePurchaseResult(
        PurchaseLogic_o *this,
        bool succeeded,
        int32_t failureReason,
        const MethodInfo *method)
{
  if ( succeeded )
    return 2;
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, const MethodInfo *, const MethodInfo *))this->klass->vtable._23_ShowPurchaseFailedNotification.methodPtr)(
    this,
    (unsigned int)failureReason,
    this->klass->vtable._23_ShowPurchaseFailedNotification.method,
    method);
  if ( (unsigned int)failureReason > 6 )
    return 7;
  else
    return dword_D20F4C[failureReason];
}


void PurchaseLogic__ConfirmPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x20
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  __int64 v8; // x9
  UnityEngine_Purchasing_IStoreController_c **p_offset; // x10
  __int64 v10; // x0

  if ( (byte_4CB5BB0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_Product__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_Product__Remove__);
    sub_1C6BA08(&UnityEngine_Purchasing_IStoreController_TypeInfo);
    sub_1C6BA08(&PurchaseLogic_TypeInfo);
    byte_4CB5BB0 = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_15;
  if ( !System_Collections_Generic_HashSet_object___Contains(
          (System_Collections_Generic_HashSet_T__o *)pendingProducts,
          (Il2CppObject *)product,
          (const MethodInfo_36B7AD4 *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
    return;
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts
    || (pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)System_Collections_Generic_HashSet_object___Remove(
                                                                                    (System_Collections_Generic_HashSet_T__o *)pendingProducts,
                                                                                    (Il2CppObject *)product,
                                                                                    (const MethodInfo_36B7CA0 *)Method_System_Collections_Generic_HashSet_Product__Remove__),
        (storeController = PurchaseLogic_TypeInfo->static_fields->_storeController) == 0) )
  {
LABEL_15:
    sub_1C6BC60(pendingProducts, product);
  }
  klass = storeController->klass;
  v8 = *(unsigned __int16 *)&storeController->klass->_2.rank;
  if ( *(_WORD *)&storeController->klass->_2.rank )
  {
    p_offset = (UnityEngine_Purchasing_IStoreController_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      --v8;
      p_offset += 2;
      if ( !v8 )
        goto LABEL_11;
    }
    v10 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
  }
  else
  {
LABEL_11:
    v10 = sub_1C41D90(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 2);
  }
  (*(void (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, UnityEngine_Purchasing_Product_o *, _QWORD))v10)(
    storeController,
    product,
    *(_QWORD *)(v10 + 8));
}


void PurchaseLogic__DisableCrashReporterOnInitialize(PurchaseLogic_o *this, const MethodInfo *method)
{
  ;
}


void PurchaseLogic__EnableCrashReporterOnInitializeFailed(PurchaseLogic_o *this, const MethodInfo *method)
{
  ;
}


void PurchaseLogic__EnableCrashReporterOnInitializeSucceeded(PurchaseLogic_o *this, const MethodInfo *method)
{
  ;
}


void PurchaseLogic__ExecuteBuyProductFinishedAction(
        PurchaseLogic_o *this,
        int32_t purchaseResult,
        int32_t perMonthAmount,
        int32_t freeStoneNum,
        int32_t chargeStoneNum,
        int32_t shopId,
        bool isSentGift,
        const MethodInfo *method)
{
  struct PurchaseLogic_ProductFinishedAction_o *buyProductFinishedAction; // x8

  buyProductFinishedAction = this->fields._buyProductFinishedAction;
  if ( buyProductFinishedAction )
    ((void (__fastcall *)(intptr_t, int32_t, int32_t, int32_t, int32_t, int32_t, bool, intptr_t))buyProductFinishedAction->fields.invoke_impl)(
      buyProductFinishedAction->fields.method_code,
      purchaseResult,
      perMonthAmount,
      freeStoneNum,
      chargeStoneNum,
      shopId,
      isSentGift,
      buyProductFinishedAction->fields.method);
}


// local variable allocation has failed, the output may be wrong!
void PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(
        PurchaseLogic_o *this,
        int32_t purchaseResult,
        int32_t perMonthAmount,
        int32_t freeStoneNum,
        int32_t chargeStoneNum,
        int32_t shopId,
        bool isSentGift,
        const MethodInfo *method)
{
  struct PurchaseLogic_ProductFinishedAction_o *buyProductFinishedAction; // x8
  CGThumbnailListItem_o *p_buyProductFinishedAction; // x19

  p_buyProductFinishedAction = (CGThumbnailListItem_o *)&this->fields._buyProductFinishedAction;
  buyProductFinishedAction = this->fields._buyProductFinishedAction;
  if ( buyProductFinishedAction )
    ((void (__fastcall *)(intptr_t, int32_t, int32_t, int32_t, int32_t, int32_t, bool, intptr_t))buyProductFinishedAction->fields.invoke_impl)(
      buyProductFinishedAction->fields.method_code,
      purchaseResult,
      perMonthAmount,
      freeStoneNum,
      chargeStoneNum,
      shopId,
      isSentGift,
      buyProductFinishedAction->fields.method);
  p_buyProductFinishedAction->klass = 0;
  sub_1C6B9AC(p_buyProductFinishedAction, 0, perMonthAmount, *(const MethodInfo **)&freeStoneNum);
}


PurchaseLogic_ReceiptContents_o *PurchaseLogic__ExtractReceiptContents(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  PurchaseLogic_ReceiptContents_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_4CB5BB1 & 1) == 0 )
  {
    sub_1C6BA08(&PurchaseLogic_ReceiptContents_TypeInfo);
    byte_4CB5BB1 = 1;
  }
  v3 = (PurchaseLogic_ReceiptContents_o *)sub_1C6BC54(PurchaseLogic_ReceiptContents_TypeInfo);
  PurchaseLogic_ReceiptContents___ctor(v3, v4);
  return v3;
}


void PurchaseLogic__GetAddedStoneNum(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        int32_t *freeStoneNum,
        int32_t *chargeStoneNum,
        int32_t *shopId,
        bool *isSentPresentBox,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v8; // x8

  *shopId = 0;
  *chargeStoneNum = 0;
  *freeStoneNum = 0;
  *isSentPresentBox = 0;
  if ( purchaseResultArray )
  {
    max_length = purchaseResultArray->max_length;
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
        sub_1C6BC68(this);
      v8 = purchaseResultArray->m_Items[0];
      if ( !v8 )
        sub_1C6BC60(this, purchaseResultArray);
      *freeStoneNum = v8->fields.freeStoneNum;
      *chargeStoneNum = v8->fields.chargeStoneNum;
      *shopId = v8->fields.purchasedBankShopId;
      *isSentPresentBox = v8->fields.isSentPresentBox;
    }
  }
}


UnityEngine_Purchasing_IAppleExtensions_o *PurchaseLogic__GetAppleExtension(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  _BOOL8 IsAppleDevice; // x0
  __int64 v3; // x1
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x19
  UnityEngine_Purchasing_IExtensionProvider_c *klass; // x8
  void *v6; // x20
  __int64 v7; // x9
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v13; // x1

  if ( (byte_4CB5BBE & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___);
    this = (PurchaseLogic_o *)sub_1C6BA08(&PurchaseLogic_TypeInfo);
    byte_4CB5BBE = 1;
  }
  if ( !PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider )
    return 0;
  IsAppleDevice = PurchaseLogic__IsAppleDevice((const MethodInfo *)this);
  if ( !IsAppleDevice )
    return 0;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_1C6BC60(IsAppleDevice, v3);
  klass = storeExtensionProvider->klass;
  v6 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v7 = *(unsigned __int16 *)&storeExtensionProvider->klass->_2.rank;
  v8 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 4);
  v9 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 40);
  if ( *(_WORD *)&storeExtensionProvider->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v8 )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_10;
    }
    v11 = (__int64)&klass->vtable[*p_offset + (int)v9];
  }
  else
  {
LABEL_10:
    v11 = sub_1C41D90(storeExtensionProvider, v8, v9);
  }
  v13 = sub_1C6BB3C(*(_QWORD *)(v11 + 8), v6);
  return (UnityEngine_Purchasing_IAppleExtensions_o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, __int64))(v13 + 8))(
                                                        storeExtensionProvider,
                                                        v13);
}


UnityEngine_Purchasing_ConfigurationBuilder_o *PurchaseLogic__GetConfigurationBuilder(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  UnityEngine_Purchasing_StandardPurchasingModule_o *v2; // x0
  long double inited; // q0
  _QWORD *v4; // x20
  UnityEngine_Purchasing_Extension_IPurchasingModule_o *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_4CB5BA4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_IPurchasingModule___);
    sub_1C6BA08(&UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo);
    byte_4CB5BA4 = 1;
  }
  if ( !UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo);
  v2 = UnityEngine_Purchasing_StandardPurchasingModule__Instance(0);
  v4 = Method_System_Array_Empty_IPurchasingModule___;
  v5 = (UnityEngine_Purchasing_Extension_IPurchasingModule_o *)v2;
  v6 = *((_QWORD *)Method_System_Array_Empty_IPurchasingModule___ + 7);
  if ( !v6 )
  {
    sub_1C41AF8(Method_System_Array_Empty_IPurchasingModule___);
    v6 = v4[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v7 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v7);
  v8 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C41A9C(inited);
  return UnityEngine_Purchasing_ConfigurationBuilder__Instance(
           v5,
           **(UnityEngine_Purchasing_Extension_IPurchasingModule_array ***)(v8 + 184),
           0);
}


System_Collections_Generic_List_string__o *PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  System_String_o *String; // x19
  _BOOL8 v3; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0
  System_Collections_Generic_List_object__o *v7; // x19

  if ( (byte_4CB5BC2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&StringLiteral_5203/*"DeferredPurchaseProductIds"*/);
    byte_4CB5BC2 = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_5203/*"DeferredPurchaseProductIds"*/,
             string_TypeInfo->static_fields->Empty,
             0);
  v3 = System_String__op_Inequality(String, string_TypeInfo->static_fields->Empty, 0);
  if ( v3 )
  {
    if ( !String )
      sub_1C6BC60(v3, v4);
    v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String, 0x3Bu, 0, 0);
    return (System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                          v5,
                                                          (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_string___);
  }
  else
  {
    v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v7;
  }
}


PurchaseByBank_UnityIap_Request_PurchaseResult_o *PurchaseLogic__GetFirstPurchaseResult(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x0
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4CB5BB5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____78611216);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_1C6BA08(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    sub_1C6BA08(&Method_PurchaseLogic___c__DisplayClass45_0__GetFirstPurchaseResult_b__0__);
    sub_1C6BA08(&PurchaseLogic___c__DisplayClass45_0_TypeInfo);
    byte_4CB5BB5 = 1;
  }
  v6 = sub_1C6BC54(PurchaseLogic___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_1C6BC60(v7, v8);
  *(_QWORD *)(v6 + 16) = transactionId;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)transactionId, v9, v10);
  if ( !purchaseResultArray )
    return 0;
  if ( !PurchaseLogic__IsAppleDevice(v11) )
    return (PurchaseByBank_UnityIap_Request_PurchaseResult_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                                 (const MethodInfo_3163B48 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___);
  v12 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v6,
    Method_PurchaseLogic___c__DisplayClass45_0__GetFirstPurchaseResult_b__0__,
    0);
  return (PurchaseByBank_UnityIap_Request_PurchaseResult_o *)System_Linq_Enumerable__FirstOrDefault_object__51793644(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                               (System_Func_TSource__bool__o *)v12,
                                                               (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____78611216);
}


PurchaseLogic_o *PurchaseLogic__GetInstance(const MethodInfo *method)
{
  PurchaseLogic_o *v1; // x19
  const MethodInfo *v2; // x1

  if ( (byte_4CB5BA2 & 1) == 0 )
  {
    sub_1C6BA08(&PurchaseLogicAndroid_TypeInfo);
    byte_4CB5BA2 = 1;
  }
  v1 = (PurchaseLogic_o *)sub_1C6BC54(PurchaseLogicAndroid_TypeInfo);
  PurchaseLogic___ctor(v1, v2);
  return v1;
}


System_Collections_Generic_List_string__o *PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v2; // x19
  System_String_o *String; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_4CB5BC6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&StringLiteral_10724/*"PreparePurchaseShopIds"*/);
    byte_4CB5BC6 = 1;
  }
  v2 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_10724/*"PreparePurchaseShopIds"*/,
             string_TypeInfo->static_fields->Empty,
             0);
  v4 = System_String__op_Inequality(String, string_TypeInfo->static_fields->Empty, 0);
  if ( !v4 )
    return (System_Collections_Generic_List_string__o *)v2;
  if ( !String )
    sub_1C6BC60(v4, v5);
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String, 0x3Bu, 0, 0);
  return (System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                        v6,
                                                        (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_string___);
}


int32_t PurchaseLogic__GetPrice(PurchaseLogic_o *this, int32_t bankShopId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = bankShopId;
  if ( (byte_4CB5BBA & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_1C6BA08(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_6072/*"Entity is not found. bankShopId="*/);
    byte_4CB5BBA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             bankShopId,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
  if ( Entity )
    return (int32_t)Entity[3].monitor;
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v10 = System_Int32__ToString((int32_t)&v11, 0);
  Instance = (DataManager_o *)System_String__Concat_63966792((System_String_o *)StringLiteral_6072/*"Entity is not found. bankShopId="*/, v10, 0);
  if ( !logErrorOutputAction )
LABEL_9:
    sub_1C6BC60(Instance, v6);
  ((void (__fastcall *)(intptr_t, DataManager_o *, intptr_t))logErrorOutputAction->fields.invoke_impl)(
    logErrorOutputAction->fields.method_code,
    Instance,
    logErrorOutputAction->fields.method);
  return 0;
}


void PurchaseLogic__InitializePurchasingFramework(PurchaseLogic_o *this, const MethodInfo *method)
{
  struct PurchaseLogic_StaticFields *static_fields; // x8
  UnityEngine_Purchasing_ConfigurationBuilder_o *v4; // x20
  __int64 v5; // x1
  PurchaseBehaviour_c *v6; // x0
  System_Collections_Generic_List_object__o *ConsumableProductIdCollection; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB5BA3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C6BA08(&PurchaseBehaviour_TypeInfo);
    byte_4CB5BA3 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( (byte_4CB5BA5 & 1) == 0 )
  {
    sub_1C6BA08(&PurchaseLogic_TypeInfo);
    byte_4CB5BA5 = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    ((void (__fastcall *)(PurchaseLogic_o *, const MethodInfo *))this->klass->vtable._27_DisableCrashReporterOnInitialize.methodPtr)(
      this,
      this->klass->vtable._27_DisableCrashReporterOnInitialize.method);
    v4 = (UnityEngine_Purchasing_ConfigurationBuilder_o *)((__int64 (__fastcall *)(PurchaseLogic_o *, const MethodInfo *))this->klass->vtable._10_GetConfigurationBuilder.methodPtr)(
                                                            this,
                                                            this->klass->vtable._10_GetConfigurationBuilder.method);
    ((void (__fastcall *)(PurchaseLogic_o *, UnityEngine_Purchasing_ConfigurationBuilder_o *, const MethodInfo *))this->klass->vtable._11_SetObfuscatedAccountId.methodPtr)(
      this,
      v4,
      this->klass->vtable._11_SetObfuscatedAccountId.method);
    ((void (__fastcall *)(PurchaseLogic_o *, __int64, const MethodInfo *))this->klass->vtable._15_SetAlreadyInitializedWithObfuscatedAccountId.methodPtr)(
      this,
      1,
      this->klass->vtable._15_SetAlreadyInitializedWithObfuscatedAccountId.method);
    v6 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v6 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_object__o *)v6->static_fields->ConsumableProductIdCollection;
    if ( !ConsumableProductIdCollection )
      sub_1C6BC60(0, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      ConsumableProductIdCollection,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v10,
             (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
      if ( !v8 )
        break;
      if ( !v4 )
        sub_1C6BC60(v8, v9);
      UnityEngine_Purchasing_ConfigurationBuilder__AddProduct(v4, (System_String_o *)v10.fields._current, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    UnityEngine_Purchasing_UnityPurchasing__Initialize((UnityEngine_Purchasing_IStoreListener_o *)this, v4, 0);
  }
}


void PurchaseLogic__InitiatePurchase(
        PurchaseLogic_o *this,
        BankShopEntity_o *bankShop,
        PurchaseLogic_ProductFinishedAction_o *finishedAction,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  if ( !bankShop )
    sub_1C6BC60(this, 0);
  PurchaseLogic__InitiatePurchase_41669364(
    this,
    bankShop->fields.id,
    bankShop->fields.googleShopId,
    bankShop->fields.googlePrice,
    finishedAction,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void PurchaseLogic__InitiatePurchase_41669364(
        PurchaseLogic_o *this,
        int32_t shopId,
        System_String_o *productId,
        int32_t price,
        PurchaseLogic_ProductFinishedAction_o *finishedAction,
        const MethodInfo *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  struct PurchaseLogic_StaticFields *static_fields; // x8
  struct System_Action_string__o *logErrorOutputAction; // x8
  const MethodInfo *v15; // x7
  int32_t v16; // w1
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x8
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x23
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  struct System_Action_string__o *v23; // x8
  __int64 *v24; // x9
  struct UnityEngine_Purchasing_IStoreController_o *v25; // x23
  UnityEngine_Purchasing_IStoreController_c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  struct System_Action_string__o *v30; // x8
  const MethodInfo *v31; // x4

  if ( (byte_4CB5BA6 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Purchasing_IStoreController_TypeInfo);
    sub_1C6BA08(&PurchaseLogic_TypeInfo);
    sub_1C6BA08(&StringLiteral_7661/*"InitiatePurchase: FAIL. PurchasingFramework not initialized."*/);
    sub_1C6BA08(&StringLiteral_7662/*"InitiatePurchase: FAIL. StoreController is null."*/);
    sub_1C6BA08(&StringLiteral_7660/*"InitiatePurchase: FAIL. Not purchasing product, either is not found or is not available for purchase"*/);
    sub_1C6BA08(&StringLiteral_7663/*"InitiatePurchase: FAIL. StoreController.products is null."*/);
    sub_1C6BA08(&StringLiteral_7664/*"InitiatePurchase: Initialized With Mismatched ObfuscatedAccountId."*/);
    byte_4CB5BA6 = 1;
  }
  this->fields._buyProductFinishedAction = finishedAction;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._buyProductFinishedAction,
    (int32_t)finishedAction,
    (int32_t)productId,
    *(const MethodInfo **)&price);
  if ( (byte_4CB5BA5 & 1) == 0 )
  {
    v11 = sub_1C6BA08(&PurchaseLogic_TypeInfo);
    byte_4CB5BA5 = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( logErrorOutputActionSampledByRatio )
    {
      ((void (__fastcall *)(intptr_t, __int64, intptr_t, float))logErrorOutputActionSampledByRatio->fields.invoke_impl)(
        logErrorOutputActionSampledByRatio->fields.method_code,
        StringLiteral_7661/*"InitiatePurchase: FAIL. PurchasingFramework not initialized."*/,
        logErrorOutputActionSampledByRatio->fields.method,
        0.01);
      v16 = 11;
      goto LABEL_33;
    }
LABEL_39:
    sub_1C6BC60(v11, v12);
  }
  v11 = ((__int64 (__fastcall *)(PurchaseLogic_o *, const MethodInfo *))this->klass->vtable._16_IsInitializedWithMismatchedObfuscatedAccountId.methodPtr)(
          this,
          this->klass->vtable._16_IsInitializedWithMismatchedObfuscatedAccountId.method);
  if ( (v11 & 1) != 0 )
  {
    logErrorOutputAction = this->fields._logErrorOutputAction;
    if ( logErrorOutputAction )
    {
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))logErrorOutputAction->fields.invoke_impl)(
        logErrorOutputAction->fields.method_code,
        StringLiteral_7664/*"InitiatePurchase: Initialized With Mismatched ObfuscatedAccountId."*/,
        logErrorOutputAction->fields.method);
      v16 = 14;
LABEL_33:
      PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, v16, 0, 0, 0, 0, 0, v15);
      return;
    }
    goto LABEL_39;
  }
  storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
  if ( !storeController )
  {
    v23 = this->fields._logErrorOutputAction;
    if ( !v23 )
      goto LABEL_39;
    v24 = &StringLiteral_7662/*"InitiatePurchase: FAIL. StoreController is null."*/;
LABEL_30:
    v11 = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))v23->fields.invoke_impl)(
            v23->fields.method_code,
            *v24,
            v23->fields.method);
LABEL_31:
    v30 = this->fields._logErrorOutputAction;
    if ( v30 )
    {
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v30->fields.invoke_impl)(
        v30->fields.method_code,
        StringLiteral_7660/*"InitiatePurchase: FAIL. Not purchasing product, either is not found or is not available for purchase"*/,
        v30->fields.method);
      v16 = 12;
      goto LABEL_33;
    }
    goto LABEL_39;
  }
  klass = storeController->klass;
  v20 = *(unsigned __int16 *)&storeController->klass->_2.rank;
  if ( *(_WORD *)&storeController->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IStoreController_c **)p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_17;
    }
    v22 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_17:
    v22 = sub_1C41D90(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0);
  }
  v11 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))v22)(
          storeController,
          *(_QWORD *)(v22 + 8));
  if ( !v11 )
  {
    v23 = this->fields._logErrorOutputAction;
    if ( !v23 )
      goto LABEL_39;
    v24 = &StringLiteral_7663/*"InitiatePurchase: FAIL. StoreController.products is null."*/;
    goto LABEL_30;
  }
  v25 = PurchaseLogic_TypeInfo->static_fields->_storeController;
  if ( !v25 )
    goto LABEL_39;
  v26 = v25->klass;
  v27 = *(unsigned __int16 *)&v25->klass->_2.rank;
  if ( *(_WORD *)&v25->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IStoreController_c **)v28 - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_27;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_27:
    v29 = sub_1C41D90(v25, UnityEngine_Purchasing_IStoreController_TypeInfo, 0);
  }
  v11 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))v29)(
          v25,
          *(_QWORD *)(v29 + 8));
  if ( !v11 )
    goto LABEL_39;
  v11 = (__int64)UnityEngine_Purchasing_ProductCollection__WithID(
                   (UnityEngine_Purchasing_ProductCollection_o *)v11,
                   productId,
                   0);
  if ( !v11 || !*(_BYTE *)(v11 + 32) )
    goto LABEL_31;
  PurchaseLogic__PurchaseIfAvailable(this, shopId, (UnityEngine_Purchasing_Product_o *)v11, price, v31);
}


bool PurchaseLogic__IsAlreadyInitializedWithObfuscatedAccountId(PurchaseLogic_o *this, const MethodInfo *method)
{
  return 0;
}


bool PurchaseLogic__IsAppleDevice(const MethodInfo *method)
{
  if ( (byte_4CB5BB8 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Application_TypeInfo);
    byte_4CB5BB8 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_platform(0) == 8 )
    return 1;
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  return UnityEngine_Application__get_platform(0) == 1;
}


bool PurchaseLogic__IsDeferredPurchaseExists(PurchaseLogic_o *this, const MethodInfo *method)
{
  return 0;
}


bool PurchaseLogic__IsGooglePlayDevice(const MethodInfo *method)
{
  if ( (byte_4CB5BB9 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Application_TypeInfo);
    byte_4CB5BB9 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  return UnityEngine_Application__get_platform(0) == 11;
}


bool PurchaseLogic__IsInitializedWithMismatchedObfuscatedAccountId(PurchaseLogic_o *this, const MethodInfo *method)
{
  return 0;
}


bool PurchaseLogic__IsLimitOver(PurchaseLogic_o *this, int32_t value, const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  int32_t Limit; // w0

  if ( (byte_4CB5BAB & 1) == 0 )
  {
    sub_1C6BA08(&AgeVerificationMenu_TypeInfo);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    byte_4CB5BAB = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
    return 1;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  Limit = AgeVerificationMenu__GetLimit(0);
  return Limit >= 0 && Limit < value;
}


bool PurchaseLogic__IsObfuscatedAccountIdCached(PurchaseLogic_o *this, const MethodInfo *method)
{
  return 1;
}


bool PurchaseLogic__IsPendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *prodcut,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *pendingProducts; // x0

  if ( (byte_4CB5BAF & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_Product__Contains__);
    byte_4CB5BAF = 1;
  }
  pendingProducts = (System_Collections_Generic_HashSet_T__o *)this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_1C6BC60(0, prodcut);
  return System_Collections_Generic_HashSet_object___Contains(
           pendingProducts,
           (Il2CppObject *)prodcut,
           (const MethodInfo_36B7AD4 *)Method_System_Collections_Generic_HashSet_Product__Contains__);
}


bool PurchaseLogic__IsPurchasingFrameworkInitialized(PurchaseLogic_o *this, const MethodInfo *method)
{
  struct PurchaseLogic_StaticFields *static_fields; // x8

  if ( (byte_4CB5BA5 & 1) == 0 )
  {
    sub_1C6BA08(&PurchaseLogic_TypeInfo);
    byte_4CB5BA5 = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  return static_fields->_storeController && static_fields->_storeExtensionProvider != 0;
}


bool PurchaseLogic__IsServerCommitedPurchase(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        const MethodInfo *method)
{
  PurchaseLogic___c_c *v4; // x0
  System_Func_object__bool__o *_9__43_0; // x20
  Il2CppObject *v6; // x21
  struct PurchaseLogic___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB5BB3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_1C6BA08(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    sub_1C6BA08(&Method_PurchaseLogic___c__IsServerCommitedPurchase_b__43_0__);
    sub_1C6BA08(&PurchaseLogic___c_TypeInfo);
    byte_4CB5BB3 = 1;
  }
  if ( !purchaseResultArray )
    return 0;
  v4 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v4 = PurchaseLogic___c_TypeInfo;
  }
  _9__43_0 = (System_Func_object__bool__o *)v4->static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = PurchaseLogic___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__43_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__43_0, v6, Method_PurchaseLogic___c__IsServerCommitedPurchase_b__43_0__, 0);
    static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__43_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__43_0, (int32_t)_9__43_0, v8, v9);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
           (System_Func_TSource__bool__o *)_9__43_0,
           (const MethodInfo_3145818 *)Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___);
}


void PurchaseLogic__OnDeferred(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  PurchaseLogic_o *v4; // x19
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  struct System_Action_string__o *logOutputAction; // x19

  v4 = this;
  if ( (byte_4CB5BBD & 1) == 0 )
  {
    this = (PurchaseLogic_o *)sub_1C6BA08(&StringLiteral_9881/*"OnDeferred product="*/);
    byte_4CB5BBD = 1;
  }
  if ( !product
    || (metadata_k__BackingField = product->fields._metadata_k__BackingField) == 0
    || (logOutputAction = v4->fields._logOutputAction,
        this = (PurchaseLogic_o *)System_String__Concat_63966792(
                                    (System_String_o *)StringLiteral_9881/*"OnDeferred product="*/,
                                    metadata_k__BackingField->fields._localizedTitle_k__BackingField,
                                    0),
        !logOutputAction) )
  {
    sub_1C6BC60(this, product);
  }
  ((void (__fastcall *)(intptr_t, PurchaseLogic_o *, intptr_t))logOutputAction->fields.invoke_impl)(
    logOutputAction->fields.method_code,
    this,
    logOutputAction->fields.method);
}


void PurchaseLogic__OnEndPaymentStore(
        PurchaseLogic_o *this,
        int32_t purchaseResult,
        System_String_o *resultData,
        System_String_o *productId,
        int32_t bankShopId,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  __int64 v13; // x23
  System_String_o *v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_String_o **v18; // x25
  struct System_Action_string__o *logOutputAction; // x28
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_String_o *v22; // x26
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  struct System_Action_string__o *v34; // x21
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x21
  System_Func_object__bool__o *v36; // x22
  Il2CppObject *v37; // x0
  Il2CppObject *Instance; // x22
  Il2CppObject *v39; // x22
  PurchaseLogic_ProductFinishedAction_o *v40; // x23
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x7
  System_Enum_o v45; // [xsp+8h] [xbp-88h] BYREF
  int32_t v46; // [xsp+18h] [xbp-78h]
  bool isSentGift[4]; // [xsp+20h] [xbp-70h] BYREF
  int32_t shopId; // [xsp+24h] [xbp-6Ch] BYREF
  __int64 v49; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4CB5BB7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CommonUI_OpenStonePurchaseReciveMenu___78588608);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_Product___);
    sub_1C6BA08(&System_Func_Product__bool__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&PurchaseLogic_ProductFinishedAction_TypeInfo);
    sub_1C6BA08(&PurchaseBehaviour_Result_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&Method_PurchaseLogic___c__DisplayClass47_0__OnEndPaymentStore_b__0__);
    sub_1C6BA08(&PurchaseLogic___c__DisplayClass47_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_16054/*"] "*/);
    sub_1C6BA08(&StringLiteral_15802/*"[ "*/);
    sub_1C6BA08(&StringLiteral_10798/*"PurchaseLogic:OnEndPaymentStore result "*/);
    sub_1C6BA08(&StringLiteral_4647/*"Confirming purchase of "*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB5BB7 = 1;
  }
  v49 = 0;
  shopId = 0;
  isSentGift[0] = 0;
  v13 = sub_1C6BC54(PurchaseLogic___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_26;
  *(_QWORD *)(v13 + 16) = productId;
  v18 = (System_String_o **)(v13 + 16);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)productId, v16, v17);
  logOutputAction = this->fields._logOutputAction;
  v14 = (System_String_o *)sub_1C6BAB0(string___TypeInfo, 5);
  if ( !v14 )
    goto LABEL_26;
  v22 = v14;
  if ( !LODWORD(v14[1].klass) )
    goto LABEL_25;
  v23 = StringLiteral_10798/*"PurchaseLogic:OnEndPaymentStore result "*/;
  v14[1].monitor = (void *)StringLiteral_10798/*"PurchaseLogic:OnEndPaymentStore result "*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v14[1].monitor, v23, v20, v21);
  v45.klass = (System_Enum_c *)PurchaseBehaviour_Result_TypeInfo;
  v45.monitor = (void *)-1LL;
  v46 = purchaseResult;
  v14 = System_Enum__ToString(&v45, 0);
  if ( LODWORD(v22[1].klass) <= 1
    || (v22[1].fields = (System_String_Fields)v14,
        sub_1C6B9AC((CGThumbnailListItem_o *)&v22[1].fields, (int32_t)v14, v24, v25),
        LODWORD(v22[1].klass) <= 2)
    || (v28 = StringLiteral_15802/*"[ "*/,
        v22[2].klass = (System_String_c *)StringLiteral_15802/*"[ "*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)&v22[2], v28, v26, v27),
        LODWORD(v22[1].klass) <= 3)
    || (v22[2].monitor = resultData,
        sub_1C6B9AC((CGThumbnailListItem_o *)&v22[2].monitor, (int32_t)resultData, v29, v30),
        LODWORD(v22[1].klass) <= 4) )
  {
LABEL_25:
    sub_1C6BC68(v14);
  }
  v33 = StringLiteral_16054/*"] "*/;
  v22[2].fields = (System_String_Fields)StringLiteral_16054/*"] "*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v22[2].fields, v33, v31, v32);
  v14 = System_String__Concat_64007324((System_String_array *)v22, 0);
  if ( !logOutputAction )
    goto LABEL_26;
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))logOutputAction->fields.invoke_impl)(
    logOutputAction->fields.method_code,
    v14,
    logOutputAction->fields.method);
  if ( purchaseResult != 4 && purchaseResult != 2 )
    goto LABEL_18;
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, const MethodInfo *))this->klass->vtable._20_UpdateMonthlyPurchasePrice.methodPtr)(
    this,
    (unsigned int)bankShopId,
    this->klass->vtable._20_UpdateMonthlyPurchasePrice.method);
  if ( System_String__op_Inequality(*v18, (System_String_o *)StringLiteral_1/*""*/, 0) )
    ((void (__fastcall *)(PurchaseLogic_o *, System_String_o *, System_String_o *, const MethodInfo *))this->klass->vtable._24_SendPurchaseAction.methodPtr)(
      this,
      *v18,
      transactionId,
      this->klass->vtable._24_SendPurchaseAction.method);
  v34 = this->fields._logOutputAction;
  v14 = System_String__Concat_63966792((System_String_o *)StringLiteral_4647/*"Confirming purchase of "*/, *v18, 0);
  if ( !v34 )
LABEL_26:
    sub_1C6BC60(v14, v15);
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))v34->fields.invoke_impl)(
    v34->fields.method_code,
    v14,
    v34->fields.method);
  pendingProducts = this->fields._pendingProducts;
  v36 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_Product__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v36,
    (Il2CppObject *)v13,
    Method_PurchaseLogic___c__DisplayClass47_0__OnEndPaymentStore_b__0__,
    0);
  v37 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
          (System_Collections_Generic_IEnumerable_TSource__o *)pendingProducts,
          (System_Func_TSource__bool__o *)v36,
          (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_Product___);
  if ( v37 )
    ((void (__fastcall *)(PurchaseLogic_o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._18_ConfirmPurchase.methodPtr)(
      this,
      v37,
      this->klass->vtable._18_ConfirmPurchase.method);
LABEL_18:
  if ( purchaseResult != 4 && !this->fields._buyProductFinishedAction )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    {
      v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v40 = (PurchaseLogic_ProductFinishedAction_o *)sub_1C6BC54(PurchaseLogic_ProductFinishedAction_TypeInfo);
      PurchaseLogic_ProductFinishedAction___ctor(
        v40,
        v39,
        (intptr_t)Method_CommonUI_OpenStonePurchaseReciveMenu___78588608,
        v41);
      this->fields._buyProductFinishedAction = v40;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._buyProductFinishedAction, (int32_t)v40, v42, v43);
    }
  }
  v49 = 0;
  shopId = 0;
  isSentGift[0] = 0;
  ((void (__fastcall *)(PurchaseLogic_o *, struct PurchaseByBank_UnityIap_Request_PurchaseResult_array *, char *, __int64 *, int32_t *, bool *, const MethodInfo *))this->klass->vtable._22_GetAddedStoneNum.methodPtr)(
    this,
    this->fields._purchaseResultArray,
    (char *)&v49 + 4,
    &v49,
    &shopId,
    isSentGift,
    this->klass->vtable._22_GetAddedStoneNum.method);
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(
    this,
    purchaseResult,
    0,
    SHIDWORD(v49),
    v49,
    shopId,
    isSentGift[0],
    v44);
}


void PurchaseLogic__OnEndSendReceiptData(PurchaseLogic_o *this, System_String_o *result, const MethodInfo *method)
{
  struct System_Action_string__o *logOutputAction; // x23
  __int64 FirstPurchaseResult; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray; // x1
  const MethodInfo *v8; // x2
  System_String_o *klass; // x20
  const MethodInfo *v10; // x6
  __int64 *v11; // x8
  System_String_o *currentTransactionId; // x5
  int32_t v13; // w1
  System_String_o *v14; // x2
  __int64 IsServerCommitedPurchase; // x0
  const MethodInfo *v16; // x3
  struct System_Action_string__o *v17; // x21
  int v18; // w21
  __int64 *v19; // x8
  System_String_o *v20; // x0
  struct System_Action_string__o *v21; // x8
  const MethodInfo *v22; // x2
  int32_t v23; // w22
  const MethodInfo *Entity; // x0
  const MethodInfo *v25; // x2
  struct PurchaseByBank_UnityIap_Request_PurchaseResult_array *v26; // x27
  int max_length; // w8
  struct System_Action_string__o *logErrorOutputAction; // x8
  PurchaseLogic_o *v29; // x0
  System_String_o *v30; // x3
  int32_t v31; // w4
  __int64 v32; // x28
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v33; // x8
  int32_t purchasedBankShopId; // w23
  const MethodInfo *v35; // x2

  if ( (byte_4CB5BB4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_1C6BA08(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_11218/*"ReceiptError"*/);
    sub_1C6BA08(&StringLiteral_22918/*"purchaseResultArray is null."*/);
    sub_1C6BA08(&StringLiteral_7119/*"Google Play canceled on restore purchase"*/);
    sub_1C6BA08(&StringLiteral_10797/*"PurchaseLogic:EndSendReceiptData ["*/);
    sub_1C6BA08(&StringLiteral_23074/*"receipt_error"*/);
    sub_1C6BA08(&StringLiteral_17745/*"canceled_purchase_error"*/);
    sub_1C6BA08(&StringLiteral_10800/*"PurchaseResult NotFound Error"*/);
    sub_1C6BA08(&StringLiteral_10801/*"PurchaseResult NotFound."*/);
    sub_1C6BA08(&StringLiteral_10592/*"PaymentOk"*/);
    sub_1C6BA08(&StringLiteral_7120/*"Google Play pending on restore purchase"*/);
    sub_1C6BA08(&StringLiteral_10796/*"PurchaseBehaviour.Result.SUCCESS_WITHOUT_NOTICE _currentTransactionId="*/);
    sub_1C6BA08(&StringLiteral_6176/*"Error["*/);
    sub_1C6BA08(&StringLiteral_22762/*"pending_purchase_error"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_5203/*"DeferredPurchaseProductIds"*/);
    sub_1C6BA08(&StringLiteral_16051/*"]"*/);
    byte_4CB5BB4 = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  FirstPurchaseResult = (__int64)System_String__Concat_64005056(
                                   (System_String_o *)StringLiteral_10797/*"PurchaseLogic:EndSendReceiptData ["*/,
                                   result,
                                   (System_String_o *)StringLiteral_16051/*"]"*/,
                                   0);
  if ( !logOutputAction )
    goto LABEL_49;
  FirstPurchaseResult = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))logOutputAction->fields.invoke_impl)(
                          logOutputAction->fields.method_code,
                          FirstPurchaseResult,
                          logOutputAction->fields.method);
  klass = (System_String_o *)StringLiteral_1/*""*/;
  if ( result && !result->fields._stringLength )
  {
    purchaseResultArray = this->fields._purchaseResultArray;
    if ( purchaseResultArray )
    {
      IsServerCommitedPurchase = PurchaseLogic__IsServerCommitedPurchase(
                                   (PurchaseLogic_o *)FirstPurchaseResult,
                                   purchaseResultArray,
                                   v8);
      if ( (IsServerCommitedPurchase & 1) != 0 )
      {
        v17 = this->fields._logOutputAction;
        FirstPurchaseResult = (__int64)System_String__Concat_63966792(
                                         (System_String_o *)StringLiteral_10796/*"PurchaseBehaviour.Result.SUCCESS_WITHOUT_NOTICE _currentTransactionId="*/,
                                         this->fields._currentTransactionId,
                                         0);
        if ( !v17 )
          goto LABEL_49;
        IsServerCommitedPurchase = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))v17->fields.invoke_impl)(
                                     v17->fields.method_code,
                                     FirstPurchaseResult,
                                     v17->fields.method);
        v18 = 4;
LABEL_21:
        FirstPurchaseResult = (__int64)PurchaseLogic__GetFirstPurchaseResult(
                                         (PurchaseLogic_o *)IsServerCommitedPurchase,
                                         this->fields._purchaseResultArray,
                                         this->fields._currentTransactionId,
                                         v16);
        if ( FirstPurchaseResult )
        {
          v23 = *(_DWORD *)(FirstPurchaseResult + 16);
          if ( v23 >= 1 )
          {
            PurchaseLogic__RemovePreparePurchaseShopIdsInPlayerPrefs(this, v23, v22);
            FirstPurchaseResult = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !FirstPurchaseResult )
              goto LABEL_49;
            FirstPurchaseResult = (__int64)DataManager__GetMasterData_object_(
                                             (DataManager_o *)FirstPurchaseResult,
                                             (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_BankShopMaster___);
            if ( !FirstPurchaseResult )
              goto LABEL_49;
            Entity = (const MethodInfo *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)FirstPurchaseResult,
                                           v23,
                                           (const MethodInfo_33F90DC *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
            if ( Entity )
            {
              klass = (System_String_o *)Entity->klass;
              FirstPurchaseResult = PurchaseLogic__IsAppleDevice(Entity);
              if ( (FirstPurchaseResult & 1) != 0 )
              {
                FirstPurchaseResult = UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5203/*"DeferredPurchaseProductIds"*/, 0);
                if ( (FirstPurchaseResult & 1) != 0 )
                {
                  v26 = this->fields._purchaseResultArray;
                  if ( v26 )
                  {
                    max_length = v26->max_length;
                    if ( max_length == 1 )
                    {
                      PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(this, klass, v25);
LABEL_37:
                      StoneCountRefreshComponent__RefreshAllStoneCount((const MethodInfo *)FirstPurchaseResult);
                      goto LABEL_38;
                    }
                    if ( max_length < 2 )
                      goto LABEL_37;
                    v32 = 0;
                    while ( 1 )
                    {
                      if ( (unsigned int)v32 >= max_length )
                        sub_1C6BC68(FirstPurchaseResult);
                      v33 = v26->m_Items[v32];
                      if ( !v33 )
                        break;
                      purchasedBankShopId = v33->fields.purchasedBankShopId;
                      FirstPurchaseResult = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !FirstPurchaseResult )
                        break;
                      FirstPurchaseResult = (__int64)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)FirstPurchaseResult,
                                                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_BankShopMaster___);
                      if ( !FirstPurchaseResult )
                        break;
                      FirstPurchaseResult = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)FirstPurchaseResult,
                                                       purchasedBankShopId,
                                                       (const MethodInfo_33F90DC *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
                      if ( FirstPurchaseResult )
                        PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(
                          this,
                          *(System_String_o **)(FirstPurchaseResult + 32),
                          v35);
                      max_length = v26->max_length;
                      if ( (int)++v32 >= max_length )
                        goto LABEL_37;
                    }
LABEL_49:
                    sub_1C6BC60(FirstPurchaseResult, purchaseResultArray);
                  }
                }
              }
              FirstPurchaseResult = PurchaseLogic__IsGooglePlayDevice((const MethodInfo *)FirstPurchaseResult);
              if ( (FirstPurchaseResult & 1) != 0 )
                goto LABEL_37;
            }
LABEL_38:
            currentTransactionId = this->fields._currentTransactionId;
            v29 = this;
            v13 = v18;
            v30 = klass;
            v14 = (System_String_o *)StringLiteral_10592/*"PaymentOk"*/;
            v31 = v23;
            goto LABEL_35;
          }
        }
        logErrorOutputAction = this->fields._logErrorOutputAction;
        if ( logErrorOutputAction )
        {
          ((void (__fastcall *)(intptr_t, __int64, intptr_t))logErrorOutputAction->fields.invoke_impl)(
            logErrorOutputAction->fields.method_code,
            StringLiteral_10801/*"PurchaseResult NotFound."*/,
            logErrorOutputAction->fields.method);
          v19 = &StringLiteral_10800/*"PurchaseResult NotFound Error"*/;
          goto LABEL_33;
        }
        goto LABEL_49;
      }
    }
    else
    {
      v21 = this->fields._logErrorOutputAction;
      if ( !v21 )
        goto LABEL_49;
      IsServerCommitedPurchase = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))v21->fields.invoke_impl)(
                                   v21->fields.method_code,
                                   StringLiteral_22918/*"purchaseResultArray is null."*/,
                                   v21->fields.method);
    }
    v18 = 2;
    goto LABEL_21;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22762/*"pending_purchase_error"*/, 0) )
  {
    if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_17745/*"canceled_purchase_error"*/, 0) )
    {
      v11 = &StringLiteral_7119/*"Google Play canceled on restore purchase"*/;
      currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
      v13 = 17;
      goto LABEL_10;
    }
    if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_23074/*"receipt_error"*/, 0) )
    {
      v20 = System_String__Concat_64005056(
              (System_String_o *)StringLiteral_6176/*"Error["*/,
              result,
              (System_String_o *)StringLiteral_16051/*"]"*/,
              0);
      currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
      v13 = 7;
      v14 = v20;
      goto LABEL_34;
    }
    v19 = &StringLiteral_11218/*"ReceiptError"*/;
LABEL_33:
    v14 = (System_String_o *)*v19;
    currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
    v13 = 7;
    goto LABEL_34;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, __int64, const MethodInfo *))this->klass->vtable._30_SetExistsDeferredPurchase.methodPtr)(
    this,
    1,
    this->klass->vtable._30_SetExistsDeferredPurchase.method);
  v11 = &StringLiteral_7120/*"Google Play pending on restore purchase"*/;
  currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
  v13 = 16;
LABEL_10:
  v14 = (System_String_o *)*v11;
LABEL_34:
  v29 = this;
  v30 = klass;
  v31 = 0;
LABEL_35:
  PurchaseLogic__OnEndPaymentStore(v29, v13, v14, v30, v31, currentTransactionId, v10);
}


void PurchaseLogic__OnInitializeFailed(PurchaseLogic_o *this, int32_t error, const MethodInfo *method)
{
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  struct System_Action_string__o *logErrorOutputAction; // x20
  System_String_o *v10; // x0
  System_Enum_o v11; // [xsp+8h] [xbp-38h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h]

  if ( (byte_4CB5BBF & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Purchasing_InitializationFailureReason_TypeInfo);
    sub_1C6BA08(&StringLiteral_9911/*"OnInitializeFailed InitializationFailureReason:"*/);
    byte_4CB5BBF = 1;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.methodPtr)(
    this,
    this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.method,
    method);
  if ( (unsigned int)error <= 1 )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    v11.klass = (System_Enum_c *)UnityEngine_Purchasing_InitializationFailureReason_TypeInfo;
    v11.monitor = (void *)-1LL;
    v12 = error;
    v6 = System_Enum__ToString(&v11, 0);
    v7 = System_String__Concat_63966792((System_String_o *)StringLiteral_9911/*"OnInitializeFailed InitializationFailureReason:"*/, v6, 0);
    if ( logErrorOutputActionSampledByRatio )
    {
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t, float))logErrorOutputActionSampledByRatio->fields.invoke_impl)(
        logErrorOutputActionSampledByRatio->fields.method_code,
        v7,
        logErrorOutputActionSampledByRatio->fields.method,
        0.01);
      return;
    }
LABEL_9:
    sub_1C6BC60(v7, v8);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v11.klass = (System_Enum_c *)UnityEngine_Purchasing_InitializationFailureReason_TypeInfo;
  v11.monitor = (void *)-1LL;
  v12 = error;
  v10 = System_Enum__ToString(&v11, 0);
  v7 = System_String__Concat_63966792((System_String_o *)StringLiteral_9911/*"OnInitializeFailed InitializationFailureReason:"*/, v10, 0);
  if ( !logErrorOutputAction )
    goto LABEL_9;
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))logErrorOutputAction->fields.invoke_impl)(
    logErrorOutputAction->fields.method_code,
    v7,
    logErrorOutputAction->fields.method);
}


void PurchaseLogic__OnInitialized(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_IStoreController_o *controller,
        UnityEngine_Purchasing_IExtensionProvider_o *extensions,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  struct System_Action_string__o *logOutputAction; // x8
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct PurchaseLogic_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  PurchaseLogic_o *v15; // x0
  const MethodInfo *v16; // x1
  UnityEngine_Purchasing_IAppleExtensions_o *AppleExtension; // x0
  UnityEngine_Purchasing_IAppleExtensions_o *v18; // x20
  System_Action_object__o *v19; // x21
  UnityEngine_Purchasing_IAppleExtensions_c *klass; // x8
  __int64 v21; // x9
  UnityEngine_Purchasing_IAppleExtensions_c **p_offset; // x10
  __int64 v23; // x0

  if ( (byte_4CB5BBC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_Product__TypeInfo);
    sub_1C6BA08(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo);
    sub_1C6BA08(&PurchaseLogic_TypeInfo);
    sub_1C6BA08(&StringLiteral_9912/*"OnInitialized: PASS"*/);
    byte_4CB5BBC = 1;
  }
  v7 = ((__int64 (__fastcall *)(PurchaseLogic_o *, const MethodInfo *, UnityEngine_Purchasing_IExtensionProvider_o *, const MethodInfo *))this->klass->vtable._28_EnableCrashReporterOnInitializeSucceeded.methodPtr)(
         this,
         this->klass->vtable._28_EnableCrashReporterOnInitializeSucceeded.method,
         extensions,
         method);
  logOutputAction = this->fields._logOutputAction;
  if ( !logOutputAction )
    sub_1C6BC60(v7, v8);
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))logOutputAction->fields.invoke_impl)(
    logOutputAction->fields.method_code,
    StringLiteral_9912/*"OnInitialized: PASS"*/,
    logOutputAction->fields.method);
  PurchaseLogic_TypeInfo->static_fields->_storeController = controller;
  sub_1C6B9AC((CGThumbnailListItem_o *)PurchaseLogic_TypeInfo->static_fields, (int32_t)controller, v10, v11);
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  static_fields->_storeExtensionProvider = extensions;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->_storeExtensionProvider, (int32_t)extensions, v13, v14);
  AppleExtension = PurchaseLogic__GetAppleExtension(v15, v16);
  if ( AppleExtension )
  {
    v18 = AppleExtension;
    v19 = (System_Action_object__o *)sub_1C6BC54(System_Action_Product__TypeInfo);
    System_Action_object____ctor(v19, (Il2CppObject *)this, (intptr_t)this->klass->vtable._25_OnDeferred.method, 0);
    klass = v18->klass;
    v21 = *(unsigned __int16 *)&v18->klass->_2.rank;
    if ( *(_WORD *)&v18->klass->_2.rank )
    {
      p_offset = (UnityEngine_Purchasing_IAppleExtensions_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
      {
        --v21;
        p_offset += 2;
        if ( !v21 )
          goto LABEL_9;
      }
      v23 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
    }
    else
    {
LABEL_9:
      v23 = sub_1C41D90(v18, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 2);
    }
    (*(void (__fastcall **)(UnityEngine_Purchasing_IAppleExtensions_o *, System_Action_object__o *, _QWORD))v23)(
      v18,
      v19,
      *(_QWORD *)(v23 + 8));
  }
}


void PurchaseLogic__OnPurchaseFailed(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        int32_t failureReason,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 IsAppleDevice; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  struct System_String_StaticFields *p_storeSpecificId_k__BackingField; // x8
  struct System_String_o *Empty; // x1
  System_String_o **v15; // x24
  const MethodInfo *v16; // x0
  const MethodInfo *v17; // x2
  struct System_Action_string__o *logErrorOutputAction; // x23
  System_String_o *v19; // x20
  Il2CppObject *v20; // x0
  struct System_Action_string__o *sendReportOutputAction; // x25
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_String_o *v24; // x24
  System_Object_array *v25; // x23
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x24
  System_DateTime_o v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x24
  System_DateTime_o v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x24
  Il2CppObject *Instance; // x24
  Il2CppObject *v38; // x24
  PurchaseLogic_ProductFinishedAction_o *v39; // x25
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  System_Decimal_o *v44; // x23
  PurchaseBehaviour_c *v45; // x0
  System_Collections_Generic_IEnumerable_TSource__o *BankShopEntityCollection; // x23
  System_Func_object__bool__o *v47; // x24
  Il2CppObject *v48; // x0
  int32_t klass; // w22
  const MethodInfo *v50; // x7
  int32_t v51; // w1
  __int64 v52; // x0
  int32_t v53; // [xsp+Ch] [xbp-54h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4CB5BC1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CommonUI_OpenStonePurchaseReciveMenu___78588608);
    sub_1C6BA08(&System_DateTime_TypeInfo);
    sub_1C6BA08(&System_Decimal_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
    sub_1C6BA08(&System_Func_BankShopEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&PurchaseLogic_ProductFinishedAction_TypeInfo);
    sub_1C6BA08(&PurchaseBehaviour_TypeInfo);
    sub_1C6BA08(&UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&Method_PurchaseLogic___c__DisplayClass61_0__OnPurchaseFailed_b__0__);
    sub_1C6BA08(&PurchaseLogic___c__DisplayClass61_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_25113/*"yyyy/MM/dd HH:mm:ss"*/);
    sub_1C6BA08(&StringLiteral_9946/*"OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}, Purchase StartTime: {2}, Purchase FailedTime: {3}"*/);
    sub_1C6BA08(&StringLiteral_5186/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/);
    byte_4CB5BC1 = 1;
  }
  dateData = 0;
  v7 = sub_1C6BC54(PurchaseLogic___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( product )
  {
    definition_k__BackingField = product->fields._definition_k__BackingField;
    if ( !definition_k__BackingField )
      goto LABEL_53;
    p_storeSpecificId_k__BackingField = (struct System_String_StaticFields *)&definition_k__BackingField->fields._storeSpecificId_k__BackingField;
    if ( !v7 )
      goto LABEL_53;
  }
  else
  {
    p_storeSpecificId_k__BackingField = string_TypeInfo->static_fields;
    if ( !v7 )
      goto LABEL_53;
  }
  Empty = p_storeSpecificId_k__BackingField->Empty;
  *(struct System_String_StaticFields *)(v7 + 16) = (struct System_String_StaticFields)p_storeSpecificId_k__BackingField->Empty;
  v15 = (System_String_o **)(v7 + 16);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)Empty, v10, v11);
  IsAppleDevice = PurchaseLogic__IsAppleDevice(v16);
  if ( (IsAppleDevice & 1) != 0 )
  {
    IsAppleDevice = System_String__IsNullOrEmpty(*v15, 0);
    if ( (IsAppleDevice & 1) == 0 )
    {
      IsAppleDevice = (__int64)PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                 (PurchaseLogic_o *)IsAppleDevice,
                                 v9);
      if ( !IsAppleDevice )
        goto LABEL_53;
      IsAppleDevice = System_Collections_Generic_List_object___Contains(
                        (System_Collections_Generic_List_object__o *)IsAppleDevice,
                        (Il2CppObject *)*v15,
                        (const MethodInfo_3800D04 *)Method_System_Collections_Generic_List_string__Contains__);
      if ( (IsAppleDevice & 1) != 0 )
      {
        PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(this, *v15, v17);
        logErrorOutputAction = this->fields._logErrorOutputAction;
        v19 = *v15;
        v53 = 4;
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, &v53);
        IsAppleDevice = (__int64)System_String__Format_64008100(
                                   (System_String_o *)StringLiteral_5186/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/,
                                   (Il2CppObject *)v19,
                                   v20,
                                   0);
        if ( !logErrorOutputAction )
          goto LABEL_53;
        IsAppleDevice = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))logErrorOutputAction->fields.invoke_impl)(
                          logErrorOutputAction->fields.method_code,
                          IsAppleDevice,
                          logErrorOutputAction->fields.method);
        failureReason = 4;
        goto LABEL_34;
      }
    }
  }
  if ( failureReason == 4 )
    goto LABEL_34;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getDateTime(0).fields._dateData;
  sendReportOutputAction = this->fields._sendReportOutputAction;
  IsAppleDevice = sub_1C6BAB0(object___TypeInfo, 4);
  if ( !IsAppleDevice )
LABEL_53:
    sub_1C6BC60(IsAppleDevice, v9);
  v24 = *v15;
  v25 = (System_Object_array *)IsAppleDevice;
  if ( v24 )
  {
    IsAppleDevice = sub_1C6BB44(v24, *(_QWORD *)(*(_QWORD *)IsAppleDevice + 64LL));
    if ( !IsAppleDevice )
      goto LABEL_55;
  }
  if ( !LODWORD(v25->max_length) )
    goto LABEL_54;
  v25->m_Items[0] = (Il2CppObject *)v24;
  sub_1C6B9AC((CGThumbnailListItem_o *)v25->m_Items, (int32_t)v24, v22, v23);
  v53 = failureReason;
  IsAppleDevice = j_il2cpp_value_box_0(UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, &v53);
  v28 = (Il2CppObject *)IsAppleDevice;
  if ( IsAppleDevice )
  {
    IsAppleDevice = sub_1C6BB44(IsAppleDevice, v25->obj.klass->_1.element_class);
    if ( !IsAppleDevice )
      goto LABEL_55;
  }
  if ( LODWORD(v25->max_length) <= 1 )
    goto LABEL_54;
  v25->m_Items[1] = v28;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v25->m_Items[1], (int32_t)v28, v26, v27);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v29.fields._dateData = (uint64_t)&this->fields._purchaseStartTime;
  IsAppleDevice = (__int64)System_DateTime__ToString_65364976(v29, (System_String_o *)StringLiteral_25113/*"yyyy/MM/dd HH:mm:ss"*/, 0);
  v32 = (Il2CppObject *)IsAppleDevice;
  if ( IsAppleDevice )
  {
    IsAppleDevice = sub_1C6BB44(IsAppleDevice, v25->obj.klass->_1.element_class);
    if ( !IsAppleDevice )
      goto LABEL_55;
  }
  if ( LODWORD(v25->max_length) <= 2 )
    goto LABEL_54;
  v25->m_Items[2] = v32;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v25->m_Items[2], (int32_t)v32, v30, v31);
  v33.fields._dateData = (uint64_t)&dateData;
  IsAppleDevice = (__int64)System_DateTime__ToString_65364976(v33, (System_String_o *)StringLiteral_25113/*"yyyy/MM/dd HH:mm:ss"*/, 0);
  v36 = (Il2CppObject *)IsAppleDevice;
  if ( IsAppleDevice )
  {
    IsAppleDevice = sub_1C6BB44(IsAppleDevice, v25->obj.klass->_1.element_class);
    if ( !IsAppleDevice )
    {
LABEL_55:
      v52 = sub_1C6BC84(IsAppleDevice);
      sub_1C6BB30(v52, 0);
    }
  }
  if ( LODWORD(v25->max_length) <= 3 )
LABEL_54:
    sub_1C6BC68(IsAppleDevice);
  v25->m_Items[3] = v36;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v25->m_Items[3], (int32_t)v36, v34, v35);
  IsAppleDevice = (__int64)System_String__Format_64008236((System_String_o *)StringLiteral_9946/*"OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}, Purchase StartTime: {2}, Purchase FailedTime: {3}"*/, v25, 0);
  if ( !sendReportOutputAction )
    goto LABEL_53;
  IsAppleDevice = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))sendReportOutputAction->fields.invoke_impl)(
                    sendReportOutputAction->fields.method_code,
                    IsAppleDevice,
                    sendReportOutputAction->fields.method);
LABEL_34:
  if ( !this->fields._buyProductFinishedAction )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsAppleDevice = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( (IsAppleDevice & 1) != 0 )
    {
      v38 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v39 = (PurchaseLogic_ProductFinishedAction_o *)sub_1C6BC54(PurchaseLogic_ProductFinishedAction_TypeInfo);
      PurchaseLogic_ProductFinishedAction___ctor(
        v39,
        v38,
        (intptr_t)Method_CommonUI_OpenStonePurchaseReciveMenu___78588608,
        v40);
      this->fields._buyProductFinishedAction = v39;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._buyProductFinishedAction, (int32_t)v39, v41, v42);
    }
  }
  if ( product )
  {
    metadata_k__BackingField = product->fields._metadata_k__BackingField;
    if ( !metadata_k__BackingField )
      goto LABEL_53;
    v44 = *(System_Decimal_o **)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.flags;
    product = *(UnityEngine_Purchasing_Product_o **)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.lo;
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    LODWORD(product) = System_Decimal__ToInt32(v44, (const MethodInfo *)product);
  }
  v45 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v45 = PurchaseBehaviour_TypeInfo;
  }
  BankShopEntityCollection = (System_Collections_Generic_IEnumerable_TSource__o *)v45->static_fields->BankShopEntityCollection;
  v47 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BankShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v47,
    (Il2CppObject *)v7,
    Method_PurchaseLogic___c__DisplayClass61_0__OnPurchaseFailed_b__0__,
    0);
  v48 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
          BankShopEntityCollection,
          (System_Func_TSource__bool__o *)v47,
          (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
  if ( v48 )
    klass = (int32_t)v48[1].klass;
  else
    klass = 0;
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, const MethodInfo *))this->klass->vtable._23_ShowPurchaseFailedNotification.methodPtr)(
    this,
    (unsigned int)failureReason,
    this->klass->vtable._23_ShowPurchaseFailedNotification.method);
  if ( (unsigned int)failureReason > 6 )
    v51 = 7;
  else
    v51 = dword_D20F4C[failureReason];
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, v51, (int32_t)product, 0, 0, klass, 0, v50);
}


int32_t PurchaseLogic__ProcessPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_PurchaseEventArgs_o *purchaseEventArgs,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UnityEngine_Purchasing_Product_o *purchasedProduct_k__BackingField; // x1
  UnityEngine_Purchasing_Product_o **v10; // x20
  PurchaseBehaviour_c *v11; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_object__bool__o *v13; // x23
  __int64 v14; // x8
  __int64 v15; // x8
  struct System_Action_string__o *logOutputAction; // x21
  Il2CppObject *v17; // x1
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  struct System_Action_string__o *v19; // x21
  System_String_o *v20; // x0
  struct System_Action_string__o *v21; // x9
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  struct System_Action_string__o *logErrorOutputAction; // x8
  System_Decimal_o v26; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4CB5BC0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_string___);
    sub_1C6BA08(&System_Decimal_TypeInfo);
    sub_1C6BA08(&System_Func_string__bool__TypeInfo);
    sub_1C6BA08(&PurchaseBehaviour_TypeInfo);
    sub_1C6BA08(&Method_PurchaseLogic___c__DisplayClass60_0__ProcessPurchase_b__0__);
    sub_1C6BA08(&PurchaseLogic___c__DisplayClass60_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_10751/*"ProcessPurchase: product is null"*/);
    sub_1C6BA08(&StringLiteral_10750/*"ProcessPurchase: PASS. Product: '{0}'"*/);
    sub_1C6BA08(&StringLiteral_10749/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/);
    sub_1C6BA08(&StringLiteral_10732/*"Price: "*/);
    byte_4CB5BC0 = 1;
  }
  *(_OWORD *)&v26.fields.flags = 0u;
  v5 = sub_1C6BC54(PurchaseLogic___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( purchaseEventArgs )
  {
    purchasedProduct_k__BackingField = purchaseEventArgs->fields._purchasedProduct_k__BackingField;
    if ( !v5 )
      goto LABEL_28;
  }
  else
  {
    purchasedProduct_k__BackingField = 0;
    if ( !v5 )
      goto LABEL_28;
  }
  *(_QWORD *)(v5 + 16) = purchasedProduct_k__BackingField;
  v10 = (UnityEngine_Purchasing_Product_o **)(v5 + 16);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)purchasedProduct_k__BackingField, v7, v8);
  if ( *(_QWORD *)(v5 + 16) )
  {
    v11 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v11 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v11->static_fields->ConsumableProductIdCollection;
    v13 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_string__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v13,
      (Il2CppObject *)v5,
      Method_PurchaseLogic___c__DisplayClass60_0__ProcessPurchase_b__0__,
      0);
    v6 = BasicHelper__Any_object_(
           ConsumableProductIdCollection,
           (System_Func_T__bool__o *)v13,
           (const MethodInfo_3124430 *)Method_BasicHelper_Any_string___);
    v14 = *(_QWORD *)(v5 + 16);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 16);
      if ( v15 )
      {
        logOutputAction = this->fields._logOutputAction;
        v17 = *(Il2CppObject **)(v15 + 16);
        if ( (v6 & 1) == 0 )
        {
          v6 = (__int64)System_String__Format((System_String_o *)StringLiteral_10749/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/, v17, 0);
          if ( !logOutputAction )
            goto LABEL_28;
          ((void (__fastcall *)(intptr_t, __int64, intptr_t))logOutputAction->fields.invoke_impl)(
            logOutputAction->fields.method_code,
            v6,
            logOutputAction->fields.method);
          goto LABEL_26;
        }
        v6 = (__int64)System_String__Format((System_String_o *)StringLiteral_10750/*"ProcessPurchase: PASS. Product: '{0}'"*/, v17, 0);
        if ( logOutputAction )
        {
          v6 = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))logOutputAction->fields.invoke_impl)(
                 logOutputAction->fields.method_code,
                 v6,
                 logOutputAction->fields.method);
          if ( *v10 )
          {
            metadata_k__BackingField = (*v10)->fields._metadata_k__BackingField;
            if ( metadata_k__BackingField )
            {
              v19 = this->fields._logOutputAction;
              *(_OWORD *)&v26.fields.flags = *(_OWORD *)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.flags;
              if ( !System_Decimal_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
              v20 = System_Decimal__ToString(&v26, 0);
              v6 = (__int64)System_String__Concat_63966792((System_String_o *)StringLiteral_10732/*"Price: "*/, v20, 0);
              if ( v19 )
              {
                v6 = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))v19->fields.invoke_impl)(
                       v19->fields.method_code,
                       v6,
                       v19->fields.method);
                if ( *v10 )
                {
                  v21 = this->fields._logOutputAction;
                  if ( v21 )
                  {
                    ((void (__fastcall *)(intptr_t, struct System_String_o *, intptr_t))v21->fields.invoke_impl)(
                      v21->fields.method_code,
                      (*v10)->fields._receipt_k__BackingField,
                      v21->fields.method);
                    PurchaseLogic__ValidateReceipt(this, *v10, v22);
LABEL_26:
                    PurchaseLogic__AddPendingPurchase(this, *v10, v23);
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C6BC60(v6, purchasedProduct_k__BackingField);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  if ( !logErrorOutputAction )
    goto LABEL_28;
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))logErrorOutputAction->fields.invoke_impl)(
    logErrorOutputAction->fields.method_code,
    StringLiteral_10751/*"ProcessPurchase: product is null"*/,
    logErrorOutputAction->fields.method);
  return 1;
}


void PurchaseLogic__PurchaseIfAvailable(
        PurchaseLogic_o *this,
        int32_t shopId,
        UnityEngine_Purchasing_Product_o *product,
        int32_t price,
        const MethodInfo *method)
{
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x0
  const MethodInfo *v17; // x2
  int32_t CumulativeAmount; // w2
  const MethodInfo *v19; // x7
  NetworkManager_ResultCallbackFunc_o *v20; // x19
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  NetworkManager_ResultCallbackFunc_o *v23; // x21
  PurchaseLogic_o *v24; // x0
  const MethodInfo *v25; // x3

  if ( (byte_4CB5BA7 & 1) == 0 )
  {
    sub_1C6BA08(&AgeVerificationMenu_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_PurchaseLogic___c__DisplayClass29_0__PurchaseIfAvailable_b__0__);
    sub_1C6BA08(&Method_PurchaseLogic___c__DisplayClass29_0__PurchaseIfAvailable_b__1__);
    sub_1C6BA08(&PurchaseLogic___c__DisplayClass29_0_TypeInfo);
    byte_4CB5BA7 = 1;
  }
  v9 = sub_1C6BC54(PurchaseLogic___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C6BC60(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 32) = product;
  *(_DWORD *)(v9 + 24) = price;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)product, v14, v15);
  *(_DWORD *)(v9 + 40) = shopId;
  if ( PurchaseLogic__IsAppleDevice(v16)
    && PurchaseLogic__IsPendingPurchase(this, *(UnityEngine_Purchasing_Product_o **)(v9 + 32), v17) )
  {
    if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    CumulativeAmount = AgeVerificationMenu__GetCumulativeAmount(0);
    PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, 13, CumulativeAmount, 0, 0, 0, 0, v19);
  }
  else
  {
    v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v20,
      (Il2CppObject *)v9,
      Method_PurchaseLogic___c__DisplayClass29_0__PurchaseIfAvailable_b__0__,
      0);
    *(_QWORD *)(v9 + 48) = v20;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)v20, v21, v22);
    LODWORD(v20) = *(_DWORD *)(v9 + 40);
    v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v23,
      (Il2CppObject *)v9,
      Method_PurchaseLogic___c__DisplayClass29_0__PurchaseIfAvailable_b__1__,
      0);
    PurchaseLogic__RequestPreparePurchaseByBank(v24, (int32_t)v20, v23, v25);
  }
}


void PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(
        PurchaseLogic_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x19
  System_Predicate_object__o *v12; // x21
  PurchaseLogic_o *v13; // x0
  const MethodInfo *v14; // x2

  if ( (byte_4CB5BC5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__RemoveAll__);
    sub_1C6BA08(&System_Predicate_string__TypeInfo);
    sub_1C6BA08(&Method_PurchaseLogic___c__DisplayClass82_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__);
    sub_1C6BA08(&PurchaseLogic___c__DisplayClass82_0_TypeInfo);
    byte_4CB5BC5 = 1;
  }
  v4 = sub_1C6BC54(PurchaseLogic___c__DisplayClass82_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_7;
  *(_QWORD *)(v4 + 16) = productId;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)productId, v7, v8);
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v4 + 16), 0);
  if ( IsNullOrEmpty )
    return;
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)IsNullOrEmpty,
                                                v10);
  v12 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_string__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v4,
    Method_PurchaseLogic___c__DisplayClass82_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__,
    0);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
LABEL_7:
    sub_1C6BC60(v5, v6);
  v13 = (PurchaseLogic_o *)System_Collections_Generic_List_object___RemoveAll(
                             (System_Collections_Generic_List_object__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
                             (System_Predicate_T__o *)v12,
                             (const MethodInfo_3801FD0 *)Method_System_Collections_Generic_List_string__RemoveAll__);
  PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(v13, DeferredPurchaseProductIdsFromPlayerPrefs, v14);
}


void PurchaseLogic__RemovePendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *pendingProducts; // x0

  if ( (byte_4CB5BAE & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_Product__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_Product__Remove__);
    byte_4CB5BAE = 1;
  }
  pendingProducts = (System_Collections_Generic_HashSet_T__o *)this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_8;
  if ( System_Collections_Generic_HashSet_object___Contains(
         pendingProducts,
         (Il2CppObject *)product,
         (const MethodInfo_36B7AD4 *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
  {
    pendingProducts = (System_Collections_Generic_HashSet_T__o *)this->fields._pendingProducts;
    if ( pendingProducts )
    {
      System_Collections_Generic_HashSet_object___Remove(
        pendingProducts,
        (Il2CppObject *)product,
        (const MethodInfo_36B7CA0 *)Method_System_Collections_Generic_HashSet_Product__Remove__);
      return;
    }
LABEL_8:
    sub_1C6BC60(pendingProducts, product);
  }
}


void PurchaseLogic__RemovePreparePurchaseShopIdsInPlayerPrefs(
        PurchaseLogic_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v4; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  PurchaseLogic_o *v9; // x0
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_string__o *PreparePurchaseShopIdsFromPlayerPrefs; // x20
  System_Predicate_object__o *v12; // x21
  PurchaseLogic_o *v13; // x0
  const MethodInfo *v14; // x2
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v15 = shopId;
  if ( (byte_4CB5BC9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__RemoveAll__);
    sub_1C6BA08(&System_Predicate_string__TypeInfo);
    sub_1C6BA08(&Method_PurchaseLogic___c__DisplayClass86_0__RemovePreparePurchaseShopIdsInPlayerPrefs_b__0__);
    sub_1C6BA08(&PurchaseLogic___c__DisplayClass86_0_TypeInfo);
    byte_4CB5BC9 = 1;
  }
  v4 = sub_1C6BC54(PurchaseLogic___c__DisplayClass86_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( shopId >= 1 )
  {
    v5 = System_Int32__ToString((int32_t)&v15, 0);
    if ( !v4
      || (*(_QWORD *)(v4 + 16) = v5,
          sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)v5, v7, v8),
          PreparePurchaseShopIdsFromPlayerPrefs = PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs(v9, v10),
          v12 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_string__TypeInfo),
          System_Predicate_object____ctor(
            v12,
            (Il2CppObject *)v4,
            Method_PurchaseLogic___c__DisplayClass86_0__RemovePreparePurchaseShopIdsInPlayerPrefs_b__0__,
            0),
          !PreparePurchaseShopIdsFromPlayerPrefs) )
    {
      sub_1C6BC60(v5, v6);
    }
    v13 = (PurchaseLogic_o *)System_Collections_Generic_List_object___RemoveAll(
                               (System_Collections_Generic_List_object__o *)PreparePurchaseShopIdsFromPlayerPrefs,
                               (System_Predicate_T__o *)v12,
                               (const MethodInfo_3801FD0 *)Method_System_Collections_Generic_List_string__RemoveAll__);
    PurchaseLogic__SavePreparePurchaseShopIdsToPlayerPrefs(v13, PreparePurchaseShopIdsFromPlayerPrefs, v14);
  }
}


void PurchaseLogic__RequestGameServerBankStatus(
        PurchaseLogic_o *this,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4CB5BA9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_NetworkManager_getRequest_BankStatusRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB5BA9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_BankStatusRequest___);
  if ( !Request_object )
    sub_1C6BC60(0, v5);
  BankStatusRequest__beginRequest((BankStatusRequest_o *)Request_object, 0);
}


void PurchaseLogic__RequestPreparePurchaseByBank(
        PurchaseLogic_o *this,
        int32_t shopId,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4CB5BA8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_NetworkManager_getRequest_PreparePurchaseByBankRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB5BA8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_PreparePurchaseByBankRequest___);
  if ( !Request_object )
    sub_1C6BC60(0, v7);
  PreparePurchaseByBankRequest__beginRequest((PreparePurchaseByBankRequest_o *)Request_object, shopId, 0);
}


void PurchaseLogic__RestorePurchases(PurchaseLogic_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  struct PurchaseLogic_StaticFields *static_fields; // x8
  void *v4; // x8
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x20
  UnityEngine_Purchasing_IExtensionProvider_c *klass; // x8
  void *v7; // x21
  __int64 v8; // x9
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t *p_offset; // x10
  __int64 v12; // x0
  void *monitor; // x8
  void *v14; // x19
  System_String_o *v15; // x0
  __int64 v16; // x0
  __int64 v17; // x20
  System_Action_bool__object__o *v18; // x21
  __int64 v19; // x8
  __int64 v20; // x9
  UnityEngine_Purchasing_IAppleExtensions_c **v21; // x10
  __int64 v22; // x0
  System_Enum_o v23; // [xsp+8h] [xbp-38h] BYREF
  int32_t platform; // [xsp+18h] [xbp-28h]

  v2 = (Il2CppObject *)this;
  if ( (byte_4CB5BAC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_bool__string__TypeInfo);
    sub_1C6BA08(&UnityEngine_Application_TypeInfo);
    sub_1C6BA08(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___);
    sub_1C6BA08(&Method_PurchaseLogic__RestorePurchases_b__34_0__);
    sub_1C6BA08(&PurchaseLogic_TypeInfo);
    sub_1C6BA08(&UnityEngine_RuntimePlatform_TypeInfo);
    sub_1C6BA08(&StringLiteral_11379/*"RestorePurchases FAIL. Not supported on this platform. Current = "*/);
    sub_1C6BA08(&StringLiteral_11381/*"RestorePurchases started ..."*/);
    this = (PurchaseLogic_o *)sub_1C6BA08(&StringLiteral_11378/*"RestorePurchases FAIL. Not initialized."*/);
    byte_4CB5BAC = 1;
  }
  if ( (byte_4CB5BA5 & 1) == 0 )
  {
    this = (PurchaseLogic_o *)sub_1C6BA08(&PurchaseLogic_TypeInfo);
    byte_4CB5BA5 = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    monitor = v2[3].monitor;
    if ( monitor )
    {
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD))monitor + 3))(
        *((_QWORD *)monitor + 8),
        StringLiteral_11378/*"RestorePurchases FAIL. Not initialized."*/,
        *((_QWORD *)monitor + 5));
      return;
    }
    goto LABEL_35;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  this = (PurchaseLogic_o *)UnityEngine_Application__get_platform(0);
  if ( (_DWORD)this != 8 )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    this = (PurchaseLogic_o *)UnityEngine_Application__get_platform(0);
    if ( (_DWORD)this != 1 )
    {
      v14 = v2[3].monitor;
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      platform = UnityEngine_Application__get_platform(0);
      v23.klass = (System_Enum_c *)UnityEngine_RuntimePlatform_TypeInfo;
      v23.monitor = (void *)-1LL;
      v15 = System_Enum__ToString(&v23, 0);
      this = (PurchaseLogic_o *)System_String__Concat_63966792((System_String_o *)StringLiteral_11379/*"RestorePurchases FAIL. Not supported on this platform. Current = "*/, v15, 0);
      if ( v14 )
      {
        (*((void (__fastcall **)(_QWORD, PurchaseLogic_o *, _QWORD))v14 + 3))(
          *((_QWORD *)v14 + 8),
          this,
          *((_QWORD *)v14 + 5));
        return;
      }
LABEL_35:
      sub_1C6BC60(this, method);
    }
  }
  v4 = v2[3].monitor;
  if ( !v4 )
    goto LABEL_35;
  this = (PurchaseLogic_o *)(*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))v4 + 3))(
                              *((_QWORD *)v4 + 8),
                              StringLiteral_11381/*"RestorePurchases started ..."*/,
                              *((_QWORD *)v4 + 5));
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    goto LABEL_35;
  klass = storeExtensionProvider->klass;
  v7 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v8 = *(unsigned __int16 *)&storeExtensionProvider->klass->_2.rank;
  v9 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 4);
  v10 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 40);
  if ( *(_WORD *)&storeExtensionProvider->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v9 )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_19;
    }
    v12 = (__int64)&klass->vtable[*p_offset + (int)v10];
  }
  else
  {
LABEL_19:
    v12 = sub_1C41D90(storeExtensionProvider, v9, v10);
  }
  v16 = sub_1C6BB3C(*(_QWORD *)(v12 + 8), v7);
  v17 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, __int64))(v16 + 8))(
          storeExtensionProvider,
          v16);
  v18 = (System_Action_bool__object__o *)sub_1C6BC54(System_Action_bool__string__TypeInfo);
  System_Action_bool__object____ctor(v18, v2, Method_PurchaseLogic__RestorePurchases_b__34_0__, 0);
  if ( !v17 )
    goto LABEL_35;
  v19 = *(_QWORD *)v17;
  v20 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
  {
    v21 = (UnityEngine_Purchasing_IAppleExtensions_c **)(*(_QWORD *)(v19 + 176) + 8LL);
    while ( *(v21 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      --v20;
      v21 += 2;
      if ( !v20 )
        goto LABEL_32;
    }
    v22 = v19 + 16LL * (*(_DWORD *)v21 + 1) + 312;
  }
  else
  {
LABEL_32:
    v22 = sub_1C41D90(v17, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 1);
  }
  (*(void (__fastcall **)(__int64, System_Action_bool__object__o *, _QWORD))v22)(v17, v18, *(_QWORD *)(v22 + 8));
}


void PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        System_Collections_Generic_List_string__o *deferredPurchaseProductIdList,
        const MethodInfo *method)
{
  __int64 v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t current; // w1
  System_String_o **v10; // x20
  System_String_o *v11; // x0
  PurchaseBehaviour_c *v12; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_object__bool__o *v14; // x23
  System_String_o *v15; // x21
  System_String_o *a; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB5BC3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_string___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C6BA08(&System_Func_string__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C6BA08(&PurchaseBehaviour_TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&Method_PurchaseLogic___c__DisplayClass80_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__);
    sub_1C6BA08(&PurchaseLogic___c__DisplayClass80_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_1484/*";"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_5203/*"DeferredPurchaseProductIds"*/);
    byte_4CB5BC3 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( deferredPurchaseProductIdList )
  {
    a = (System_String_o *)StringLiteral_1/*""*/;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)deferredPurchaseProductIdList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v18 = v17;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v4 = sub_1C6BC54(PurchaseLogic___c__DisplayClass80_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v4, 0);
      if ( !v4 )
        sub_1C6BC60(v5, v6);
      current = (int32_t)v18.fields._current;
      *(_QWORD *)(v4 + 16) = v18.fields._current;
      v10 = (System_String_o **)(v4 + 16);
      sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 16), current, v7, v8);
      if ( *(_QWORD *)(v4 + 16) )
      {
        v11 = System_String__Trim(*(System_String_o **)(v4 + 16), 0);
        if ( !System_String__op_Equality(v11, string_TypeInfo->static_fields->Empty, 0) )
        {
          v12 = PurchaseBehaviour_TypeInfo;
          if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
            v12 = PurchaseBehaviour_TypeInfo;
          }
          ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v12->static_fields->ConsumableProductIdCollection;
          v14 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_string__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v14,
            (Il2CppObject *)v4,
            Method_PurchaseLogic___c__DisplayClass80_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__,
            0);
          if ( BasicHelper__Any_object_(
                 ConsumableProductIdCollection,
                 (System_Func_T__bool__o *)v14,
                 (const MethodInfo_3124430 *)Method_BasicHelper_Any_string___) )
          {
            if ( System_String__op_Inequality(a, string_TypeInfo->static_fields->Empty, 0) )
              v15 = System_String__Concat_63966792(a, (System_String_o *)StringLiteral_1484/*";"*/, 0);
            else
              v15 = a;
            a = System_String__Concat_63966792(v15, *v10, 0);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( System_String__IsNullOrEmpty(a, 0) )
      UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5203/*"DeferredPurchaseProductIds"*/, 0);
    else
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_5203/*"DeferredPurchaseProductIds"*/, a, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void PurchaseLogic__SavePreparePurchaseShopIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        System_Collections_Generic_List_string__o *shopIdList,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  Il2CppObject *current; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x21
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CB5BC7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&StringLiteral_10724/*"PreparePurchaseShopIds"*/);
    sub_1C6BA08(&StringLiteral_1484/*";"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB5BC7 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( shopIdList )
  {
    v4 = (System_String_o *)StringLiteral_1/*""*/;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      (System_Collections_Generic_List_object__o *)shopIdList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v9 = v8;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v9.fields._current;
      if ( v9.fields._current )
      {
        v6 = System_String__Trim((System_String_o *)v9.fields._current, 0);
        if ( !System_String__op_Equality(v6, string_TypeInfo->static_fields->Empty, 0) )
        {
          if ( System_String__op_Inequality(v4, string_TypeInfo->static_fields->Empty, 0) )
            v7 = System_String__Concat_63966792(v4, (System_String_o *)StringLiteral_1484/*";"*/, 0);
          else
            v7 = v4;
          v4 = System_String__Concat_63966792(v7, (System_String_o *)current, 0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( System_String__IsNullOrEmpty(v4, 0) )
      UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10724/*"PreparePurchaseShopIds"*/, 0);
    else
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10724/*"PreparePurchaseShopIds"*/, v4, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void PurchaseLogic__SendPurchaseAction(
        PurchaseLogic_o *this,
        System_String_o *paymentProductId,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  BankShopEntity_array *Instance; // x0
  __int64 v7; // x1
  int max_length; // w8
  BankShopEntity_array *v9; // x21
  unsigned int v10; // w22
  BankShopEntity_o *v11; // x23
  int32_t id; // w20
  int googlePrice; // w21

  if ( (byte_4CB5BBB & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_8159/*"JPY"*/);
    byte_4CB5BBB = 1;
  }
  Instance = (BankShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (BankShopEntity_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = BankShopMaster__GetEnableEntitiyList((BankShopMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_18;
  max_length = Instance->max_length;
  v9 = Instance;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C6BC68(Instance);
      v11 = v9->m_Items[v10];
      if ( !v11 || !paymentProductId )
        goto LABEL_18;
      Instance = (BankShopEntity_array *)System_String__Equals_64002112(paymentProductId, v11->fields.googleShopId, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
    id = v11->fields.id;
    if ( (id & 0x80000000) == 0 )
    {
      googlePrice = v11->fields.googlePrice;
      Instance = (BankShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Instance )
      {
        AdManager__TrackPurchase(
          (AdManager_o *)Instance,
          id,
          (double)googlePrice,
          (System_String_o *)StringLiteral_8159/*"JPY"*/,
          transactionId,
          0);
        return;
      }
LABEL_18:
      sub_1C6BC60(Instance, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void PurchaseLogic__SendReceiptData(
        PurchaseLogic_o *this,
        PurchaseLogic_ReceiptContents_o *receiptContents,
        System_String_o *currentTransactionId,
        int32_t storeError,
        const MethodInfo *method)
{
  System_String_o *v9; // x0
  __int64 v10; // x1
  struct System_Action_string__o *logOutputAction; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  NetworkManager_c *v14; // x0
  NetworkManager_ResultCallbackFunc_o *v15; // x22
  Il2CppObject *Request_object; // x0
  System_String_o *payloadJsonStr; // x23
  System_String_o *googleSignatureStr; // x21
  System_String_o *v19; // x22
  struct System_String_o **p_googleSignatureStr; // t2
  PurchaseByBank_UnityIap_Request_o *v21; // x24
  System_Action_object__o *v22; // x25
  struct System_Action_string__o *logErrorOutputAction; // x20
  NetworkManager_c *v24; // x0
  System_String_o *v25; // x0
  const MethodInfo *v26; // x2
  int64_t userIdNumber; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CB5BB2 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo);
    sub_1C6BA08(&Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_PurchaseLogic_OnEndSendReceiptData__);
    sub_1C6BA08(&Method_PurchaseLogic__SendReceiptData_b__42_0__);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C6BA08(&StringLiteral_24697/*"user_id_error"*/);
    sub_1C6BA08(&StringLiteral_10799/*"PurchaseLogic:SendReceiptData ["*/);
    sub_1C6BA08(&StringLiteral_15226/*"UserId error: UserId="*/);
    sub_1C6BA08(&StringLiteral_16051/*"]"*/);
    byte_4CB5BB2 = 1;
  }
  userIdNumber = 0;
  this->fields._currentTransactionId = currentTransactionId;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._currentTransactionId,
    (int32_t)currentTransactionId,
    (int32_t)currentTransactionId,
    *(const MethodInfo **)&storeError);
  if ( !receiptContents )
    goto LABEL_25;
  logOutputAction = this->fields._logOutputAction;
  v9 = System_String__Concat_64005056(
         (System_String_o *)StringLiteral_10799/*"PurchaseLogic:SendReceiptData ["*/,
         receiptContents->fields.payloadJsonStr,
         (System_String_o *)StringLiteral_16051/*"]"*/,
         0);
  if ( !logOutputAction )
    goto LABEL_25;
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))logOutputAction->fields.invoke_impl)(
    logOutputAction->fields.method_code,
    v9,
    logOutputAction->fields.method);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  v14 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v14 = NetworkManager_TypeInfo;
  }
  if ( v14->static_fields->userIdNumber > 0 )
  {
    this->fields._purchaseResultArray = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._purchaseResultArray, 0, v12, v13);
    v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v15, (Il2CppObject *)this, Method_PurchaseLogic_OnEndSendReceiptData__, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v15,
                       (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___);
    payloadJsonStr = receiptContents->fields.payloadJsonStr;
    p_googleSignatureStr = &receiptContents->fields.googleSignatureStr;
    googleSignatureStr = receiptContents->fields.googleSignatureStr;
    v19 = p_googleSignatureStr[1];
    v21 = (PurchaseByBank_UnityIap_Request_o *)Request_object;
    v22 = (System_Action_object__o *)sub_1C6BC54(System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo);
    System_Action_object____ctor(v22, (Il2CppObject *)this, Method_PurchaseLogic__SendReceiptData_b__42_0__, 0);
    if ( v21 )
    {
      PurchaseByBank_UnityIap_Request__beginRequest(
        v21,
        v19,
        payloadJsonStr,
        storeError,
        googleSignatureStr,
        (System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____o *)v22,
        0);
      return;
    }
LABEL_25:
    sub_1C6BC60(v9, v10);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  if ( !v14->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v14);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  v24 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v24 = NetworkManager_TypeInfo;
  }
  userIdNumber = v24->static_fields->userIdNumber;
  v25 = System_Int64__ToString((int64_t)&userIdNumber, 0);
  v9 = System_String__Concat_63966792((System_String_o *)StringLiteral_15226/*"UserId error: UserId="*/, v25, 0);
  if ( !logErrorOutputAction )
    goto LABEL_25;
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))logErrorOutputAction->fields.invoke_impl)(
    logErrorOutputAction->fields.method_code,
    v9,
    logErrorOutputAction->fields.method);
  PurchaseLogic__OnEndSendReceiptData(this, (System_String_o *)StringLiteral_24697/*"user_id_error"*/, v26);
}


void PurchaseLogic__SetAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogic_o *this,
        bool isInitialized,
        const MethodInfo *method)
{
  ;
}


void PurchaseLogic__SetCachedObfuscatedAccountId(
        PurchaseLogic_o *this,
        System_String_o *obfuscatedAccountId,
        const MethodInfo *method)
{
  ;
}


void PurchaseLogic__SetExistsDeferredPurchase(PurchaseLogic_o *this, bool exists, const MethodInfo *method)
{
  ;
}


void PurchaseLogic__SetInitializedWithMismatchedObfuscatedAccountId(
        PurchaseLogic_o *this,
        bool isMismatched,
        const MethodInfo *method)
{
  ;
}


void PurchaseLogic__SetObfuscatedAccountId(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_ConfigurationBuilder_o *builder,
        const MethodInfo *method)
{
  ;
}


void PurchaseLogic__ShowPurchaseFailedNotification(
        PurchaseLogic_o *this,
        int32_t failureReason,
        const MethodInfo *method)
{
  ;
}


void PurchaseLogic__UpdateMonthlyPurchasePrice(PurchaseLogic_o *this, int32_t bankShopId, const MethodInfo *method)
{
  int32_t CumulativeAmount; // w21
  int32_t v6; // w0

  if ( (byte_4CB5BB6 & 1) == 0 )
  {
    sub_1C6BA08(&AgeVerificationMenu_TypeInfo);
    byte_4CB5BB6 = 1;
  }
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  CumulativeAmount = AgeVerificationMenu__GetCumulativeAmount(0);
  v6 = ((__int64 (__fastcall *)(PurchaseLogic_o *, _QWORD, const MethodInfo *))this->klass->vtable._21_GetPrice.methodPtr)(
         this,
         (unsigned int)bankShopId,
         this->klass->vtable._21_GetPrice.method)
     + CumulativeAmount;
  AgeVerificationMenu__SaveCumulativeAmount(v6, 0);
}


void PurchaseLogic__ValidateReceipt(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  PurchaseLogic_ReceiptContents_o *IsAppleDevice; // x0
  __int64 v6; // x1
  System_String_o *transactionID_k__BackingField; // x21
  PurchaseLogic_ReceiptContents_o *v8; // x20
  const MethodInfo *v9; // x4

  IsAppleDevice = (PurchaseLogic_ReceiptContents_o *)((__int64 (__fastcall *)(PurchaseLogic_o *, UnityEngine_Purchasing_Product_o *, const MethodInfo *))this->klass->vtable._19_ExtractReceiptContents.methodPtr)(
                                                       this,
                                                       product,
                                                       this->klass->vtable._19_ExtractReceiptContents.method);
  if ( !product )
    goto LABEL_7;
  transactionID_k__BackingField = product->fields._transactionID_k__BackingField;
  v8 = IsAppleDevice;
  IsAppleDevice = (PurchaseLogic_ReceiptContents_o *)PurchaseLogic__IsAppleDevice((const MethodInfo *)IsAppleDevice);
  if ( ((unsigned __int8)IsAppleDevice & 1) == 0 )
    goto LABEL_6;
  if ( !v8 )
LABEL_7:
    sub_1C6BC60(IsAppleDevice, v6);
  if ( v8->fields.isIOSOldStyleReceipt )
    transactionID_k__BackingField = v8->fields.iOSOldStyleTransactionId;
LABEL_6:
  PurchaseLogic__SendReceiptData(this, v8, transactionID_k__BackingField, 0, v9);
}


void PurchaseLogic___RestorePurchases_b__34_0(
        PurchaseLogic_o *this,
        bool result,
        System_String_o *errorMessage,
        const MethodInfo *method)
{
  struct System_Action_string__o *logOutputAction; // x21
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  struct System_Action_string__o *v10; // x20
  bool v11; // [xsp+Ch] [xbp-34h] BYREF

  v11 = result;
  if ( (byte_4CB5BCB & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    sub_1C6BA08(&StringLiteral_11380/*"RestorePurchases continuing: "*/);
    sub_1C6BA08(&StringLiteral_984/*". If no further messages, no purchases available to restore."*/);
    sub_1C6BA08(&StringLiteral_19120/*"error: "*/);
    byte_4CB5BCB = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v7 = System_Boolean__ToString((bool)&v11, 0);
  v8 = System_String__Concat_64005056(
         (System_String_o *)StringLiteral_11380/*"RestorePurchases continuing: "*/,
         v7,
         (System_String_o *)StringLiteral_984/*". If no further messages, no purchases available to restore."*/,
         0);
  if ( !logOutputAction )
    goto LABEL_10;
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))logOutputAction->fields.invoke_impl)(
    logOutputAction->fields.method_code,
    v8,
    logOutputAction->fields.method);
  if ( v11 )
    return;
  v10 = this->fields._logOutputAction;
  v8 = System_String__Concat_63966792((System_String_o *)StringLiteral_19120/*"error: "*/, errorMessage, 0);
  if ( !v10 )
LABEL_10:
    sub_1C6BC60(v8, v9);
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))v10->fields.invoke_impl)(
    v10->fields.method_code,
    v8,
    v10->fields.method);
}


void PurchaseLogic___SendReceiptData_b__42_0(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._purchaseResultArray = purchaseResultArray;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._purchaseResultArray,
    (int32_t)purchaseResultArray,
    (int32_t)method,
    v3);
}


void PurchaseLogic__set_BuyProductFinishedAction(
        PurchaseLogic_o *this,
        PurchaseLogic_ProductFinishedAction_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._buyProductFinishedAction = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._buyProductFinishedAction, (int32_t)value, (int32_t)method, v3);
}


void PurchaseLogic__set_LogErrorOutputAction(
        PurchaseLogic_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._logErrorOutputAction = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._logErrorOutputAction, (int32_t)value, (int32_t)method, v3);
}


void PurchaseLogic__set_LogErrorOutputActionSampledByRatio(
        PurchaseLogic_o *this,
        System_Action_string__float__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._logErrorOutputActionSampledByRatio = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._logErrorOutputActionSampledByRatio,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void PurchaseLogic__set_LogOutputAction(
        PurchaseLogic_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._logOutputAction = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._logOutputAction, (int32_t)value, (int32_t)method, v3);
}


void PurchaseLogic__set_SendReportOutputAction(
        PurchaseLogic_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._sendReportOutputAction = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._sendReportOutputAction, (int32_t)value, (int32_t)method, v3);
}


void PurchaseLogic_ProductFinishedAction___ctor(
        PurchaseLogic_ProductFinishedAction_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 6 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA2290;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA2208;
}


System_IAsyncResult_o *PurchaseLogic_ProductFinishedAction__BeginInvoke(
        PurchaseLogic_ProductFinishedAction_o *this,
        int32_t purchaseResult,
        int32_t perMonthAmount,
        int32_t freeStoneNum,
        int32_t chargeStoneNum,
        int32_t shopId,
        bool isSentGift,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v13[7]; // [xsp+0h] [xbp-90h] BYREF
  bool v14[4]; // [xsp+38h] [xbp-58h] BYREF
  int32_t v15; // [xsp+3Ch] [xbp-54h] BYREF
  int32_t v16; // [xsp+40h] [xbp-50h] BYREF
  int32_t v17; // [xsp+44h] [xbp-4Ch] BYREF
  int32_t v18; // [xsp+48h] [xbp-48h] BYREF
  int32_t v19; // [xsp+4Ch] [xbp-44h] BYREF

  v18 = perMonthAmount;
  v19 = purchaseResult;
  v16 = chargeStoneNum;
  v17 = freeStoneNum;
  v15 = shopId;
  v14[0] = isSentGift;
  if ( (byte_4CB5BCC & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&PurchaseBehaviour_Result_TypeInfo);
    byte_4CB5BCC = 1;
  }
  v13[6] = 0;
  v13[0] = j_il2cpp_value_box_0(PurchaseBehaviour_Result_TypeInfo, &v19);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v13[2] = j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v13[3] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v13[4] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v13[5] = j_il2cpp_value_box_0(bool_TypeInfo, v14);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v13, callback, object);
}


void PurchaseLogic_ProductFinishedAction__EndInvoke(
        PurchaseLogic_ProductFinishedAction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void PurchaseLogic_ProductFinishedAction__Invoke(
        PurchaseLogic_ProductFinishedAction_o *this,
        int32_t purchaseResult,
        int32_t perMonthAmount,
        int32_t freeStoneNum,
        int32_t chargeStoneNum,
        int32_t shopId,
        bool isSentGift,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, int32_t, int32_t, int32_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    purchaseResult,
    perMonthAmount,
    freeStoneNum,
    chargeStoneNum,
    shopId,
    isSentGift,
    this->fields.method);
}


void PurchaseLogic_ReceiptContents___ctor(PurchaseLogic_ReceiptContents_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_StaticFields *v7; // x8
  struct System_String_o *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_String_StaticFields *v11; // x8
  struct System_String_o *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_String_StaticFields *v15; // x8
  struct System_String_o *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_String_StaticFields *v19; // x8
  struct System_String_o *v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4CB5BCD & 1) == 0 )
  {
    sub_1C6BA08(&string_TypeInfo);
    byte_4CB5BCD = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.payloadJsonStr = static_fields->Empty;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)Empty, v2, v3);
  v7 = string_TypeInfo->static_fields;
  v8 = v7->Empty;
  this->fields.googleSignatureStr = v7->Empty;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.googleSignatureStr, (int32_t)v8, v9, v10);
  v11 = string_TypeInfo->static_fields;
  v12 = v11->Empty;
  this->fields.receiptBase64Str = v11->Empty;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.receiptBase64Str, (int32_t)v12, v13, v14);
  v15 = string_TypeInfo->static_fields;
  v16 = v15->Empty;
  this->fields.purchaseToken = v15->Empty;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.purchaseToken, (int32_t)v16, v17, v18);
  v19 = string_TypeInfo->static_fields;
  v20 = v19->Empty;
  this->fields.iOSOldStyleTransactionId = v19->Empty;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.iOSOldStyleTransactionId, (int32_t)v20, v21, v22);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PurchaseLogic___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB5BCE & 1) == 0 )
  {
    sub_1C6BA08(&PurchaseLogic___c_TypeInfo);
    byte_4CB5BCE = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(PurchaseLogic___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PurchaseLogic___c_TypeInfo->static_fields->__9 = (struct PurchaseLogic___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)PurchaseLogic___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void PurchaseLogic___c___ctor(PurchaseLogic___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PurchaseLogic___c____ctor_b__87_0(PurchaseLogic___c_o *this, System_String_o *str, const MethodInfo *method)
{
  ;
}


void PurchaseLogic___c____ctor_b__87_1(PurchaseLogic___c_o *this, System_String_o *str, const MethodInfo *method)
{
  Il2CppObject *v4; // x19

  if ( (byte_4CB5BCF & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&StringLiteral_15943/*"[UnityIAP]課金エラー:"*/);
    byte_4CB5BCF = 1;
  }
  v4 = (Il2CppObject *)System_String__Concat_63966792((System_String_o *)StringLiteral_15943/*"[UnityIAP]課金エラー:"*/, str, 0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v4, 0);
}


void PurchaseLogic___c____ctor_b__87_2(PurchaseLogic___c_o *this, System_String_o *str, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_4CB5BD0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C6BA08(&StringLiteral_15943/*"[UnityIAP]課金エラー:"*/);
    byte_4CB5BD0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  v5 = System_String__Concat_63966792((System_String_o *)StringLiteral_15943/*"[UnityIAP]課金エラー:"*/, str, 0);
  if ( !Instance )
    sub_1C6BC60(v5, v6);
  CrashReporter__SendReport_31300600((CrashReporter_o *)Instance, v5, 0, 0, 0);
}


void PurchaseLogic___c____ctor_b__87_3(
        PurchaseLogic___c_o *this,
        System_String_o *str,
        float ratio,
        const MethodInfo *method)
{
  float v6; // s0
  System_String_o *v7; // x0
  Il2CppObject *v8; // x19
  float v9; // [xsp+Ch] [xbp-34h] BYREF

  v9 = ratio;
  if ( (byte_4CB5BD1 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&StringLiteral_15942/*"[UnityIAP]課金エラー(ratio:"*/);
    sub_1C6BA08(&StringLiteral_778/*"):"*/);
    byte_4CB5BD1 = 1;
  }
  v6 = UnityEngine_Random__Range(0.0, 1.0, 0);
  if ( v6 < ratio )
  {
    v7 = System_Single__ToString(v6, (const MethodInfo *)&v9);
    v8 = (Il2CppObject *)System_String__Concat_64007060(
                           (System_String_o *)StringLiteral_15942/*"[UnityIAP]課金エラー(ratio:"*/,
                           v7,
                           (System_String_o *)StringLiteral_778/*"):"*/,
                           str,
                           0);
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogError(v8, 0);
  }
}


void PurchaseLogic___c___CheckBankStatusAndMonthlyLimit_b__32_0(PurchaseLogic___c_o *this, const MethodInfo *method)
{
  ;
}


void PurchaseLogic___c___CheckBankStatusAndMonthlyLimit_b__32_1(PurchaseLogic___c_o *this, const MethodInfo *method)
{
  ;
}


bool PurchaseLogic___c___IsServerCommitedPurchase_b__43_0(
        PurchaseLogic___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.isCommitedAlready;
}


void PurchaseLogic___c__DisplayClass29_0___ctor(PurchaseLogic___c__DisplayClass29_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PurchaseLogic___c__DisplayClass29_0___PurchaseIfAvailable_b__0(
        PurchaseLogic___c__DisplayClass29_0_o *this,
        System_String_o *requestResultStr,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  uint64_t _4__this; // x0
  int32_t v7; // w20
  struct PurchaseLogic_o *v8; // x8
  struct UnityEngine_Purchasing_Product_o *product; // x9
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x9
  struct System_Action_string__o *logOutputAction; // x20
  struct PurchaseLogic_o *v12; // x20
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x20
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  struct UnityEngine_Purchasing_Product_o *v15; // x19
  __int64 v16; // x9
  UnityEngine_Purchasing_IStoreController_c **p_offset; // x10
  __int64 v18; // x0
  struct PurchaseLogic_o *v19; // x8
  struct System_Action_string__o *logErrorOutputAction; // x20
  System_String_o *v21; // x0
  const MethodInfo *v22; // x7
  System_Enum_o v23; // [xsp+8h] [xbp-38h] BYREF
  int v24; // [xsp+18h] [xbp-28h]

  if ( (byte_4CB5BD2 & 1) == 0 )
  {
    sub_1C6BA08(&AgeVerificationMenu_TypeInfo);
    sub_1C6BA08(&UnityEngine_Purchasing_IStoreController_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&PurchaseLogic_PurchaseAvailablilty_TypeInfo);
    sub_1C6BA08(&PurchaseLogic_TypeInfo);
    sub_1C6BA08(&StringLiteral_10803/*"Purchasing product asychronously: '{0}'"*/);
    sub_1C6BA08(&StringLiteral_14961/*"Unexpected PurchaseAvailablilty value: "*/);
    byte_4CB5BD2 = 1;
  }
  _4__this = (uint64_t)this->fields.__4__this;
  if ( !_4__this )
LABEL_29:
    sub_1C6BC60(_4__this, requestResultStr);
  _4__this = PurchaseLogic__CheckBankStatusAndMonthlyLimit(
               (PurchaseLogic_o *)_4__this,
               requestResultStr,
               this->fields.price,
               v3);
  v7 = 10;
  switch ( (int)_4__this )
  {
    case 1:
      v8 = this->fields.__4__this;
      if ( !v8 )
        goto LABEL_29;
      product = this->fields.product;
      if ( !product )
        goto LABEL_29;
      definition_k__BackingField = product->fields._definition_k__BackingField;
      if ( !definition_k__BackingField )
        goto LABEL_29;
      logOutputAction = v8->fields._logOutputAction;
      _4__this = (uint64_t)System_String__Format(
                             (System_String_o *)StringLiteral_10803/*"Purchasing product asychronously: '{0}'"*/,
                             (Il2CppObject *)definition_k__BackingField->fields._id_k__BackingField,
                             0);
      if ( !logOutputAction )
        goto LABEL_29;
      ((void (__fastcall *)(intptr_t, uint64_t, intptr_t))logOutputAction->fields.invoke_impl)(
        logOutputAction->fields.method_code,
        _4__this,
        logOutputAction->fields.method);
      v12 = this->fields.__4__this;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      _4__this = NetworkManager__getDateTime(0).fields._dateData;
      if ( !v12 )
        goto LABEL_29;
      v12->fields._purchaseStartTime.fields._dateData = _4__this;
      storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
      if ( !storeController )
        goto LABEL_29;
      klass = storeController->klass;
      v15 = this->fields.product;
      v16 = *(unsigned __int16 *)&storeController->klass->_2.rank;
      if ( !*(_WORD *)&storeController->klass->_2.rank )
        goto LABEL_17;
      p_offset = (UnityEngine_Purchasing_IStoreController_c **)&klass->_1.interfaceOffsets->offset;
      break;
    case 2:
      v7 = 9;
      goto LABEL_23;
    case 3:
      goto LABEL_23;
    case 4:
      goto LABEL_21;
    default:
      v19 = this->fields.__4__this;
      if ( !v19 )
        goto LABEL_29;
      logErrorOutputAction = v19->fields._logErrorOutputAction;
      v24 = _4__this;
      v23.klass = (System_Enum_c *)PurchaseLogic_PurchaseAvailablilty_TypeInfo;
      v23.monitor = (void *)-1LL;
      v21 = System_Enum__ToString(&v23, 0);
      _4__this = (uint64_t)System_String__Concat_63966792((System_String_o *)StringLiteral_14961/*"Unexpected PurchaseAvailablilty value: "*/, v21, 0);
      if ( !logErrorOutputAction )
        goto LABEL_29;
      ((void (__fastcall *)(intptr_t, uint64_t, intptr_t))logErrorOutputAction->fields.invoke_impl)(
        logErrorOutputAction->fields.method_code,
        _4__this,
        logErrorOutputAction->fields.method);
LABEL_21:
      v7 = 7;
LABEL_23:
      if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
      _4__this = AgeVerificationMenu__GetCumulativeAmount(0);
      if ( !this->fields.__4__this )
        goto LABEL_29;
      PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(
        this->fields.__4__this,
        v7,
        _4__this,
        0,
        0,
        this->fields.shopId,
        0,
        v22);
      return;
  }
  while ( *(p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
  {
    --v16;
    p_offset += 2;
    if ( !v16 )
    {
LABEL_17:
      v18 = sub_1C41D90(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 1);
      goto LABEL_28;
    }
  }
  v18 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
LABEL_28:
  (*(void (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, struct UnityEngine_Purchasing_Product_o *, _QWORD))v18)(
    storeController,
    v15,
    *(_QWORD *)(v18 + 8));
}


void PurchaseLogic___c__DisplayClass29_0___PurchaseIfAvailable_b__1(
        PurchaseLogic___c__DisplayClass29_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PurchaseLogic_o *CumulativeAmount; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  PurchaseLogic_o *_4__this; // x19
  const MethodInfo *v9; // x7

  if ( (byte_4CB5BD3 & 1) == 0 )
  {
    sub_1C6BA08(&AgeVerificationMenu_TypeInfo);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    byte_4CB5BD3 = 1;
  }
  CumulativeAmount = (PurchaseLogic_o *)System_String__op_Inequality(result, (System_String_o *)StringLiteral_22301/*"ng"*/, 0);
  if ( ((unsigned __int8)CumulativeAmount & 1) != 0 )
  {
    if ( this->fields.__4__this )
    {
      PurchaseLogic__RequestGameServerBankStatus(CumulativeAmount, this->fields.checkBankStatusCallback, v7);
      return;
    }
LABEL_10:
    sub_1C6BC60(CumulativeAmount, v6);
  }
  _4__this = this->fields.__4__this;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  CumulativeAmount = (PurchaseLogic_o *)AgeVerificationMenu__GetCumulativeAmount(0);
  if ( !_4__this )
    goto LABEL_10;
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(_4__this, 9, (int32_t)CumulativeAmount, 0, 0, 0, 0, v9);
}


void PurchaseLogic___c__DisplayClass45_0___ctor(PurchaseLogic___c__DisplayClass45_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PurchaseLogic___c__DisplayClass45_0___GetFirstPurchaseResult_b__0(
        PurchaseLogic___c__DisplayClass45_0_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return System_String__op_Equality(x->fields.transactionId, this->fields.transactionId, 0);
}


void PurchaseLogic___c__DisplayClass47_0___ctor(PurchaseLogic___c__DisplayClass47_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PurchaseLogic___c__DisplayClass47_0___OnEndPaymentStore_b__0(
        PurchaseLogic___c__DisplayClass47_0_o *this,
        UnityEngine_Purchasing_Product_o *p,
        const MethodInfo *method)
{
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8

  if ( !p )
    return 0;
  definition_k__BackingField = p->fields._definition_k__BackingField;
  if ( !definition_k__BackingField )
    sub_1C6BC60(this, p);
  return System_String__op_Equality(definition_k__BackingField->fields._id_k__BackingField, this->fields.productId, 0);
}


void PurchaseLogic___c__DisplayClass60_0___ctor(PurchaseLogic___c__DisplayClass60_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PurchaseLogic___c__DisplayClass60_0___ProcessPurchase_b__0(
        PurchaseLogic___c__DisplayClass60_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  struct UnityEngine_Purchasing_Product_o *product; // x8
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8

  product = this->fields.product;
  if ( !product || (definition_k__BackingField = product->fields._definition_k__BackingField) == 0 )
    sub_1C6BC60(this, id);
  return System_String__Equals_64002916(definition_k__BackingField->fields._id_k__BackingField, id, 4, 0);
}


void PurchaseLogic___c__DisplayClass61_0___ctor(PurchaseLogic___c__DisplayClass61_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PurchaseLogic___c__DisplayClass61_0___OnPurchaseFailed_b__0(
        PurchaseLogic___c__DisplayClass61_0_o *this,
        BankShopEntity_o *bankShop,
        const MethodInfo *method)
{
  if ( !bankShop )
    sub_1C6BC60(this, 0);
  return System_String__Equals_64002916(this->fields.productId, bankShop->fields.googleShopId, 4, 0);
}


void PurchaseLogic___c__DisplayClass80_0___ctor(PurchaseLogic___c__DisplayClass80_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PurchaseLogic___c__DisplayClass80_0___SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0(
        PurchaseLogic___c__DisplayClass80_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  return System_String__Equals_64002916(id, this->fields.idStr, 4, 0);
}


void PurchaseLogic___c__DisplayClass82_0___ctor(PurchaseLogic___c__DisplayClass82_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PurchaseLogic___c__DisplayClass82_0___RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0(
        PurchaseLogic___c__DisplayClass82_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  return System_String__op_Equality(id, this->fields.productId, 0);
}


void PurchaseLogic___c__DisplayClass86_0___ctor(PurchaseLogic___c__DisplayClass86_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PurchaseLogic___c__DisplayClass86_0___RemovePreparePurchaseShopIdsInPlayerPrefs_b__0(
        PurchaseLogic___c__DisplayClass86_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  return System_String__op_Equality(id, this->fields.shopIdStr, 0);
}