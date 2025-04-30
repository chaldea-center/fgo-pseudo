void __fastcall PurchaseLogic___ctor(PurchaseLogic_o *this, const MethodInfo *method)
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
  System_Collections_Generic_HashSet_T__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  PurchaseLogic___c_c *v20; // x0
  System_Action_object__o *_9__87_0; // x20
  Il2CppObject *v22; // x21
  struct PurchaseLogic___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  PurchaseLogic___c_c *v28; // x0
  System_Action_object__o *_9__87_1; // x20
  Il2CppObject *v30; // x21
  struct PurchaseLogic___c_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  PurchaseLogic___c_c *v36; // x0
  System_Action_object__o *_9__87_2; // x20
  Il2CppObject *v38; // x21
  struct PurchaseLogic___c_StaticFields *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  PurchaseLogic___c_c *v44; // x0
  System_Action_T1__T2__o *_9__87_3; // x20
  Il2CppObject *v46; // x21
  struct PurchaseLogic___c_StaticFields *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3

  if ( (byte_4A4DE14 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_string__TypeInfo, method);
    sub_1B863B8(&System_Action_string__float__TypeInfo, v3);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_Product___ctor__, v4);
    sub_1B863B8(&System_Collections_Generic_HashSet_Product__TypeInfo, v5);
    sub_1B863B8(&Method_PurchaseLogic___c___ctor_b__87_0__, v6);
    sub_1B863B8(&Method_PurchaseLogic___c___ctor_b__87_1__, v7);
    sub_1B863B8(&Method_PurchaseLogic___c___ctor_b__87_2__, v8);
    sub_1B863B8(&Method_PurchaseLogic___c___ctor_b__87_3__, v9);
    sub_1B863B8(&PurchaseLogic___c_TypeInfo, v10);
    sub_1B863B8(&StringLiteral_1/*""*/, v11);
    byte_4A4DE14 = 1;
  }
  v12 = (System_Collections_Generic_HashSet_T__o *)sub_1B86604(System_Collections_Generic_HashSet_Product__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v12,
    (const MethodInfo_34BDC34 *)Method_System_Collections_Generic_HashSet_Product___ctor__);
  this->fields._pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)v12;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)v12, v13, v14);
  v15 = (int)StringLiteral_1/*""*/;
  this->fields._currentTransactionId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._currentTransactionId, v15, v16, v17);
  v20 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v20 = PurchaseLogic___c_TypeInfo;
  }
  _9__87_0 = (System_Action_object__o *)v20->static_fields->__9__87_0;
  if ( !_9__87_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = PurchaseLogic___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__87_0 = (System_Action_object__o *)sub_1B86604(System_Action_string__TypeInfo);
    System_Action_object____ctor(_9__87_0, v22, Method_PurchaseLogic___c___ctor_b__87_0__, 0LL);
    static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    static_fields->__9__87_0 = (struct System_Action_string__o *)_9__87_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__87_0, (int32_t)_9__87_0, v24, v25);
  }
  this->fields._logOutputAction = (struct System_Action_string__o *)_9__87_0;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._logOutputAction, (int32_t)_9__87_0, v18, v19);
  v28 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v28 = PurchaseLogic___c_TypeInfo;
  }
  _9__87_1 = (System_Action_object__o *)v28->static_fields->__9__87_1;
  if ( !_9__87_1 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = PurchaseLogic___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__87_1 = (System_Action_object__o *)sub_1B86604(System_Action_string__TypeInfo);
    System_Action_object____ctor(_9__87_1, v30, Method_PurchaseLogic___c___ctor_b__87_1__, 0LL);
    v31 = PurchaseLogic___c_TypeInfo->static_fields;
    v31->__9__87_1 = (struct System_Action_string__o *)_9__87_1;
    sub_1B8635C((CGThumbnailListItem_o *)&v31->__9__87_1, (int32_t)_9__87_1, v32, v33);
  }
  this->fields._logErrorOutputAction = (struct System_Action_string__o *)_9__87_1;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._logErrorOutputAction, (int32_t)_9__87_1, v26, v27);
  v36 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v36 = PurchaseLogic___c_TypeInfo;
  }
  _9__87_2 = (System_Action_object__o *)v36->static_fields->__9__87_2;
  if ( !_9__87_2 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = PurchaseLogic___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v36->static_fields->__9;
    _9__87_2 = (System_Action_object__o *)sub_1B86604(System_Action_string__TypeInfo);
    System_Action_object____ctor(_9__87_2, v38, Method_PurchaseLogic___c___ctor_b__87_2__, 0LL);
    v39 = PurchaseLogic___c_TypeInfo->static_fields;
    v39->__9__87_2 = (struct System_Action_string__o *)_9__87_2;
    sub_1B8635C((CGThumbnailListItem_o *)&v39->__9__87_2, (int32_t)_9__87_2, v40, v41);
  }
  this->fields._sendReportOutputAction = (struct System_Action_string__o *)_9__87_2;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._sendReportOutputAction, (int32_t)_9__87_2, v34, v35);
  v44 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v44 = PurchaseLogic___c_TypeInfo;
  }
  _9__87_3 = (System_Action_T1__T2__o *)v44->static_fields->__9__87_3;
  if ( !_9__87_3 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = PurchaseLogic___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v44->static_fields->__9;
    _9__87_3 = (System_Action_T1__T2__o *)sub_1B86604(System_Action_string__float__TypeInfo);
    System_Action_object__float____ctor(_9__87_3, v46, Method_PurchaseLogic___c___ctor_b__87_3__, 0LL);
    v47 = PurchaseLogic___c_TypeInfo->static_fields;
    v47->__9__87_3 = (struct System_Action_string__float__o *)_9__87_3;
    sub_1B8635C((CGThumbnailListItem_o *)&v47->__9__87_3, (int32_t)_9__87_3, v48, v49);
  }
  this->fields._logErrorOutputActionSampledByRatio = (struct System_Action_string__float__o *)_9__87_3;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._logErrorOutputActionSampledByRatio, (int32_t)_9__87_3, v42, v43);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogic__AddDeferredPurchaseProductIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_object__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  System_Collections_Generic_List_object__o *v13; // x20
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  PurchaseLogic_o *v18; // x0
  const MethodInfo *v19; // x2

  if ( (byte_4A4DE0E & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Distinct_string___, productId);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_string___, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Add__, v5);
    byte_4A4DE0E = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(productId, 0LL);
  if ( !IsNullOrEmpty )
  {
    DeferredPurchaseProductIdsFromPlayerPrefs = (System_Collections_Generic_List_object__o *)PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                                                               (PurchaseLogic_o *)IsNullOrEmpty,
                                                                                               v7);
    if ( !DeferredPurchaseProductIdsFromPlayerPrefs
      || (items = DeferredPurchaseProductIdsFromPlayerPrefs->fields._items,
          v13 = DeferredPurchaseProductIdsFromPlayerPrefs,
          v14 = Method_System_Collections_Generic_List_string__Add__,
          ++DeferredPurchaseProductIdsFromPlayerPrefs->fields._version,
          !items) )
    {
      sub_1B86614(DeferredPurchaseProductIdsFromPlayerPrefs, v9);
    }
    size = DeferredPurchaseProductIdsFromPlayerPrefs->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        DeferredPurchaseProductIdsFromPlayerPrefs,
        (Il2CppObject *)productId,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = &items->obj.klass + size;
      v13->fields._size = size + 1;
      v16[4] = (Il2CppClass *)productId;
      sub_1B8635C((CGThumbnailListItem_o *)(v16 + 4), (int32_t)productId, v10, v11);
    }
    v17 = System_Linq_Enumerable__Distinct_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v13,
            (const MethodInfo_2F8E418 *)Method_System_Linq_Enumerable_Distinct_string___);
    v18 = (PurchaseLogic_o *)System_Linq_Enumerable__ToList_object_(
                               v17,
                               (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_string___);
    PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(
      v18,
      (System_Collections_Generic_List_string__o *)v18,
      v19);
  }
}


void __fastcall PurchaseLogic__AddPendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *pendingProducts; // x0

  if ( (byte_4A4DDF7 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_Product__Add__, product);
    byte_4A4DDF7 = 1;
  }
  pendingProducts = (System_Collections_Generic_HashSet_T__o *)this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_1B86614(0LL, product);
  System_Collections_Generic_HashSet_object___Add(
    pendingProducts,
    (Il2CppObject *)product,
    (const MethodInfo_34BEE18 *)Method_System_Collections_Generic_HashSet_Product__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__AddPreparePurchaseShopIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  PurchaseLogic_o *v6; // x20
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_object__o *PreparePurchaseShopIdsFromPlayerPrefs; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  System_Collections_Generic_List_object__o *v13; // x19
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  PurchaseLogic_o *v18; // x0
  const MethodInfo *v19; // x2
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  v20 = shopId;
  if ( (byte_4A4DE12 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Distinct_string___, *(_QWORD *)&shopId);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_string___, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Add__, v5);
    byte_4A4DE12 = 1;
  }
  if ( shopId >= 1 )
  {
    v6 = (PurchaseLogic_o *)System_Int32__ToString((int32_t)&v20, 0LL);
    PreparePurchaseShopIdsFromPlayerPrefs = (System_Collections_Generic_List_object__o *)PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs(
                                                                                           v6,
                                                                                           v7);
    if ( !PreparePurchaseShopIdsFromPlayerPrefs
      || (items = PreparePurchaseShopIdsFromPlayerPrefs->fields._items,
          v13 = PreparePurchaseShopIdsFromPlayerPrefs,
          v14 = Method_System_Collections_Generic_List_string__Add__,
          ++PreparePurchaseShopIdsFromPlayerPrefs->fields._version,
          !items) )
    {
      sub_1B86614(PreparePurchaseShopIdsFromPlayerPrefs, v9);
    }
    size = PreparePurchaseShopIdsFromPlayerPrefs->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        PreparePurchaseShopIdsFromPlayerPrefs,
        (Il2CppObject *)v6,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = &items->obj.klass + size;
      v13->fields._size = size + 1;
      v16[4] = (Il2CppClass *)v6;
      sub_1B8635C((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v6, v10, v11);
    }
    v17 = System_Linq_Enumerable__Distinct_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v13,
            (const MethodInfo_2F8E418 *)Method_System_Linq_Enumerable_Distinct_string___);
    v18 = (PurchaseLogic_o *)System_Linq_Enumerable__ToList_object_(
                               v17,
                               (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_string___);
    PurchaseLogic__SavePreparePurchaseShopIdsToPlayerPrefs(v18, (System_Collections_Generic_List_string__o *)v18, v19);
  }
}


int32_t __fastcall PurchaseLogic__CheckBankStatusAndMonthlyLimit(
        PurchaseLogic_o *this,
        System_String_o *result,
        int32_t price,
        const MethodInfo *method)
{
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
  System_String_o *v21; // x19
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_object__object__o *v23; // x22
  void *Item; // x0
  __int64 v25; // x1
  System_String_o *v26; // x0
  int32_t v27; // w21
  PurchaseLogic_o *v28; // x0
  const MethodInfo *v29; // x2
  int32_t v30; // w22
  System_String_o *v31; // x0
  int32_t v32; // w20
  System_String_o *v33; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v35; // x21
  Il2CppObject *v36; // x22
  struct PurchaseLogic___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x20
  System_Action_o *v41; // x21
  Il2CppObject *v42; // x22
  struct PurchaseLogic___c_StaticFields *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3

  if ( (byte_4A4DDF4 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, result);
    sub_1B863B8(&AgeVerificationMenu_TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_1B863B8(&JsonManager_TypeInfo, v9);
    sub_1B863B8(&LocalizationManager_TypeInfo, v10);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B863B8(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__32_0__, v13);
    sub_1B863B8(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__32_1__, v14);
    sub_1B863B8(&PurchaseLogic___c_TypeInfo, v15);
    sub_1B863B8(&StringLiteral_12153/*"STONE_PURCHASE_RESULT_BLOCK"*/, v16);
    sub_1B863B8(&StringLiteral_22346/*"perMonthAmount"*/, v17);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v18);
    sub_1B863B8(&StringLiteral_21218/*"message"*/, v19);
    sub_1B863B8(&StringLiteral_16810/*"bankAvailable"*/, v20);
    byte_4A4DDF4 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12153/*"STONE_PURCHASE_RESULT_BLOCK"*/, 0LL);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21893/*"ng"*/, 0LL) )
    goto LABEL_33;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0LL);
  v23 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
  if ( !Dictionary
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
          (Il2CppObject *)StringLiteral_22346/*"perMonthAmount"*/,
          (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    goto LABEL_33;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v23,
           (Il2CppObject *)StringLiteral_22346/*"perMonthAmount"*/,
           (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_48;
  v26 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                             Item,
                             *(_QWORD *)(*(_QWORD *)Item + 368LL));
  v27 = System_Int32__Parse(v26, 0LL);
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  AgeVerificationMenu__SaveCumulativeAmount(v27, 0LL);
  if ( !PurchaseLogic__IsLimitOver(v28, v27 + price, v29) )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v23,
           (Il2CppObject *)StringLiteral_16810/*"bankAvailable"*/,
           (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               v23,
               (Il2CppObject *)StringLiteral_16810/*"bankAvailable"*/,
               (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_48;
      v31 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                                 Item,
                                 *(_QWORD *)(*(_QWORD *)Item + 368LL));
      v32 = System_Int32__Parse(v31, 0LL);
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             v23,
             (Il2CppObject *)StringLiteral_21218/*"message"*/,
             (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v23,
                 (Il2CppObject *)StringLiteral_21218/*"message"*/,
                 (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_48;
        v33 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                                   Item,
                                   *(_QWORD *)(*(_QWORD *)Item + 368LL));
        v21 = v33;
        if ( !v32 )
        {
          if ( !System_String__IsNullOrEmpty(v33, 0LL) )
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
            {
              Item = PurchaseLogic___c_TypeInfo;
              if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
                Item = PurchaseLogic___c_TypeInfo;
              }
              v35 = *(System_Action_o **)(*((_QWORD *)Item + 23) + 8LL);
              if ( !v35 )
              {
                if ( !*((_DWORD *)Item + 56) )
                {
                  j_il2cpp_runtime_class_init_0(Item);
                  Item = PurchaseLogic___c_TypeInfo;
                }
                v36 = (Il2CppObject *)**((_QWORD **)Item + 23);
                v35 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
                System_Action___ctor(v35, v36, Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__32_0__, 0LL);
                static_fields = PurchaseLogic___c_TypeInfo->static_fields;
                static_fields->__9__32_0 = v35;
                sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__32_0, (int32_t)v35, v38, v39);
              }
              if ( Instance )
              {
                v30 = 1;
                CommonUI__OpenNotificationDialog(
                  (CommonUI_o *)Instance,
                  0LL,
                  v21,
                  v35,
                  -1,
                  0,
                  0,
                  0,
                  1,
                  0,
                  1,
                  0,
                  0LL,
                  0.0,
                  0LL);
                return v30;
              }
LABEL_48:
              sub_1B86614(Item, v25);
            }
          }
          return 1;
        }
      }
      else if ( !v32 )
      {
        return 1;
      }
    }
LABEL_33:
    if ( !System_String__IsNullOrEmpty(v21, 0LL) )
    {
      v40 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0LL, 0LL) )
      {
        Item = PurchaseLogic___c_TypeInfo;
        if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
          Item = PurchaseLogic___c_TypeInfo;
        }
        v41 = *(System_Action_o **)(*((_QWORD *)Item + 23) + 16LL);
        if ( !v41 )
        {
          if ( !*((_DWORD *)Item + 56) )
          {
            j_il2cpp_runtime_class_init_0(Item);
            Item = PurchaseLogic___c_TypeInfo;
          }
          v42 = (Il2CppObject *)**((_QWORD **)Item + 23);
          v41 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(v41, v42, Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__32_1__, 0LL);
          v43 = PurchaseLogic___c_TypeInfo->static_fields;
          v43->__9__32_1 = v41;
          sub_1B8635C((CGThumbnailListItem_o *)&v43->__9__32_1, (int32_t)v41, v44, v45);
        }
        if ( !v40 )
          goto LABEL_48;
        CommonUI__OpenNotificationDialog((CommonUI_o *)v40, 0LL, v21, v41, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
      }
    }
    return 2;
  }
  return 3;
}


int32_t __fastcall PurchaseLogic__ComputePurchaseResult(
        PurchaseLogic_o *this,
        bool succeeded,
        int32_t failureReason,
        const MethodInfo *method)
{
  if ( succeeded )
    return 2;
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._23_ShowPurchaseFailedNotification.method)(
    this,
    (unsigned int)failureReason,
    this->klass->vtable._24_SendPurchaseAction.methodPtr,
    method);
  if ( (unsigned int)failureReason > 6 )
    return 7;
  else
    return dword_BFCB6C[failureReason];
}


void __fastcall PurchaseLogic__ConfirmPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x20
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  __int64 v11; // x9
  UnityEngine_Purchasing_IStoreController_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4A4DDFA & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_Product__Contains__, product);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_Product__Remove__, v5);
    sub_1B863B8(&UnityEngine_Purchasing_IStoreController_TypeInfo, v6);
    sub_1B863B8(&PurchaseLogic_TypeInfo, v7);
    byte_4A4DDFA = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_15;
  if ( !System_Collections_Generic_HashSet_object___Contains(
          (System_Collections_Generic_HashSet_T__o *)pendingProducts,
          (Il2CppObject *)product,
          (const MethodInfo_34BE328 *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
    return;
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts
    || (pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)System_Collections_Generic_HashSet_object___Remove(
                                                                                    (System_Collections_Generic_HashSet_T__o *)pendingProducts,
                                                                                    (Il2CppObject *)product,
                                                                                    (const MethodInfo_34BE4F4 *)Method_System_Collections_Generic_HashSet_Product__Remove__),
        (storeController = PurchaseLogic_TypeInfo->static_fields->_storeController) == 0LL) )
  {
LABEL_15:
    sub_1B86614(pendingProducts, product);
  }
  klass = storeController->klass;
  v11 = *(unsigned __int16 *)(&storeController->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&storeController->klass->_2.bitflags2 + 3) )
  {
    p_offset = (UnityEngine_Purchasing_IStoreController_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      --v11;
      p_offset += 2;
      if ( !v11 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
  }
  else
  {
LABEL_11:
    p_method = sub_1BD6B4C(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 2LL);
  }
  (*(void (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, UnityEngine_Purchasing_Product_o *, _QWORD))p_method)(
    storeController,
    product,
    *(_QWORD *)(p_method + 8));
}


void __fastcall PurchaseLogic__DisableCrashReporterOnInitialize(PurchaseLogic_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic__EnableCrashReporterOnInitializeFailed(PurchaseLogic_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic__EnableCrashReporterOnInitializeSucceeded(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic__ExecuteBuyProductFinishedAction(
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
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, int32_t, int32_t, bool, _QWORD))buyProductFinishedAction->fields.m_target)(
      buyProductFinishedAction->fields.original_method_info,
      purchaseResult,
      perMonthAmount,
      freeStoneNum,
      chargeStoneNum,
      shopId,
      isSentGift,
      *(_QWORD *)&buyProductFinishedAction->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(
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
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, int32_t, int32_t, bool, _QWORD))buyProductFinishedAction->fields.m_target)(
      buyProductFinishedAction->fields.original_method_info,
      purchaseResult,
      perMonthAmount,
      freeStoneNum,
      chargeStoneNum,
      shopId,
      isSentGift,
      *(_QWORD *)&buyProductFinishedAction->fields.extra_arg);
  p_buyProductFinishedAction->klass = 0LL;
  sub_1B8635C(p_buyProductFinishedAction, 0, perMonthAmount, *(const MethodInfo **)&freeStoneNum);
}


PurchaseLogic_ReceiptContents_o *__fastcall PurchaseLogic__ExtractReceiptContents(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  PurchaseLogic_ReceiptContents_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_4A4DDFB & 1) == 0 )
  {
    sub_1B863B8(&PurchaseLogic_ReceiptContents_TypeInfo, product);
    byte_4A4DDFB = 1;
  }
  v3 = (PurchaseLogic_ReceiptContents_o *)sub_1B86604(PurchaseLogic_ReceiptContents_TypeInfo);
  PurchaseLogic_ReceiptContents___ctor(v3, v4);
  return v3;
}


void __fastcall PurchaseLogic__GetAddedStoneNum(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        int32_t *freeStoneNum,
        int32_t *chargeStoneNum,
        int32_t *shopId,
        bool *isSentPresentBox,
        const MethodInfo *method)
{
  __int64 v7; // x8
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v8; // x8

  *shopId = 0;
  *chargeStoneNum = 0;
  *freeStoneNum = 0;
  *isSentPresentBox = 0;
  if ( purchaseResultArray )
  {
    v7 = *(_QWORD *)&purchaseResultArray->max_length;
    if ( v7 )
    {
      if ( !(_DWORD)v7 )
        sub_1B8661C(this, purchaseResultArray);
      v8 = purchaseResultArray->m_Items[0];
      if ( !v8 )
        sub_1B86614(this, purchaseResultArray);
      *freeStoneNum = v8->fields.freeStoneNum;
      *chargeStoneNum = v8->fields.chargeStoneNum;
      *shopId = v8->fields.purchasedBankShopId;
      *isSentPresentBox = v8->fields.isSentPresentBox;
    }
  }
}


UnityEngine_Purchasing_IAppleExtensions_o *__fastcall PurchaseLogic__GetAppleExtension(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  _BOOL8 IsAppleDevice; // x0
  __int64 v4; // x1
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x19
  UnityEngine_Purchasing_IExtensionProvider_c *klass; // x8
  void *v7; // x20
  __int64 v8; // x9
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v14; // x1

  if ( (byte_4A4DE08 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___, method);
    this = (PurchaseLogic_o *)sub_1B863B8(&PurchaseLogic_TypeInfo, v2);
    byte_4A4DE08 = 1;
  }
  if ( !PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider )
    return 0LL;
  IsAppleDevice = PurchaseLogic__IsAppleDevice((const MethodInfo *)this);
  if ( !IsAppleDevice )
    return 0LL;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_1B86614(IsAppleDevice, v4);
  klass = storeExtensionProvider->klass;
  v7 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v8 = *(unsigned __int16 *)(&storeExtensionProvider->klass->_2.bitflags2 + 3);
  v9 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 4);
  v10 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 40);
  if ( *(_WORD *)(&storeExtensionProvider->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v9 )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset + (int)v10].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BD6B4C(storeExtensionProvider, v9, v10);
  }
  v14 = sub_1B864EC(*(_QWORD *)(p_method + 8), v7);
  return (UnityEngine_Purchasing_IAppleExtensions_o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, __int64))(v14 + 8))(
                                                        storeExtensionProvider,
                                                        v14);
}


UnityEngine_Purchasing_ConfigurationBuilder_o *__fastcall PurchaseLogic__GetConfigurationBuilder(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  UnityEngine_Purchasing_StandardPurchasingModule_o *v3; // x0
  long double inited; // q0
  _QWORD *v5; // x20
  UnityEngine_Purchasing_Extension_IPurchasingModule_o *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_4A4DDEE & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_Empty_IPurchasingModule___, method);
    sub_1B863B8(&UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo, v2);
    byte_4A4DDEE = 1;
  }
  if ( !UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo);
  v3 = UnityEngine_Purchasing_StandardPurchasingModule__Instance(0LL);
  v5 = Method_System_Array_Empty_IPurchasingModule___;
  v6 = (UnityEngine_Purchasing_Extension_IPurchasingModule_o *)v3;
  v7 = *((_QWORD *)Method_System_Array_Empty_IPurchasingModule___ + 7);
  if ( !v7 )
  {
    sub_1BD6AA4(Method_System_Array_Empty_IPurchasingModule___);
    v7 = v5[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BD6A48(inited);
  if ( !*(_DWORD *)(v8 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v5[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BD6A48(inited);
  return UnityEngine_Purchasing_ConfigurationBuilder__Instance(
           v6,
           **(UnityEngine_Purchasing_Extension_IPurchasingModule_array ***)(v9 + 184),
           0LL);
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *String; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  System_Collections_Generic_List_object__o *v11; // x19

  if ( (byte_4A4DE0C & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_string___, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_string___ctor__, v2);
    sub_1B863B8(&System_Collections_Generic_List_string__TypeInfo, v3);
    sub_1B863B8(&string_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_5182/*"DeferredPurchaseProductIds"*/, v5);
    byte_4A4DE0C = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_5182/*"DeferredPurchaseProductIds"*/,
             string_TypeInfo->static_fields->Empty,
             0LL);
  v7 = System_String__op_Inequality(String, string_TypeInfo->static_fields->Empty, 0LL);
  if ( v7 )
  {
    if ( !String )
      sub_1B86614(v7, v8);
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String, 0x3Bu, 0, 0LL);
    return (System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                          v9,
                                                          (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_string___);
  }
  else
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v11;
  }
}


PurchaseByBank_UnityIap_Request_PurchaseResult_o *__fastcall PurchaseLogic__GetFirstPurchaseResult(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x0
  System_Func_object__bool__o *v16; // x20

  if ( (byte_4A4DDFF & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____76126760,
      purchaseResultArray);
    sub_1B863B8(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___, v6);
    sub_1B863B8(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v7);
    sub_1B863B8(&Method_PurchaseLogic___c__DisplayClass45_0__GetFirstPurchaseResult_b__0__, v8);
    sub_1B863B8(&PurchaseLogic___c__DisplayClass45_0_TypeInfo, v9);
    byte_4A4DDFF = 1;
  }
  v10 = sub_1B86604(PurchaseLogic___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B86614(v11, v12);
  *(_QWORD *)(v10 + 16) = transactionId;
  sub_1B8635C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)transactionId, v13, v14);
  if ( !purchaseResultArray )
    return 0LL;
  if ( !PurchaseLogic__IsAppleDevice(v15) )
    return (PurchaseByBank_UnityIap_Request_PurchaseResult_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                                 (const MethodInfo_2F93C68 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___);
  v16 = (System_Func_object__bool__o *)sub_1B86604(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v10,
    Method_PurchaseLogic___c__DisplayClass45_0__GetFirstPurchaseResult_b__0__,
    0LL);
  return (PurchaseByBank_UnityIap_Request_PurchaseResult_o *)System_Linq_Enumerable__FirstOrDefault_object__49893388(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                               (System_Func_TSource__bool__o *)v16,
                                                               (const MethodInfo_2F9500C *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____76126760);
}


PurchaseLogic_o *__fastcall PurchaseLogic__GetInstance(const MethodInfo *method)
{
  __int64 v1; // x1
  PurchaseLogic_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_4A4DDEC & 1) == 0 )
  {
    sub_1B863B8(&PurchaseLogicAndroid_TypeInfo, v1);
    byte_4A4DDEC = 1;
  }
  v2 = (PurchaseLogic_o *)sub_1B86604(PurchaseLogicAndroid_TypeInfo);
  PurchaseLogic___ctor(v2, v3);
  return v2;
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x19
  System_String_o *String; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4A4DE10 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_string___, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_string___ctor__, v2);
    sub_1B863B8(&System_Collections_Generic_List_string__TypeInfo, v3);
    sub_1B863B8(&string_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_10566/*"PreparePurchaseShopIds"*/, v5);
    byte_4A4DE10 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_10566/*"PreparePurchaseShopIds"*/,
             string_TypeInfo->static_fields->Empty,
             0LL);
  v8 = System_String__op_Inequality(String, string_TypeInfo->static_fields->Empty, 0LL);
  if ( !v8 )
    return (System_Collections_Generic_List_string__o *)v6;
  if ( !String )
    sub_1B86614(v8, v9);
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String, 0x3Bu, 0, 0LL);
  return (System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                        v10,
                                                        (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_string___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PurchaseLogic__GetPrice(PurchaseLogic_o *this, int32_t bankShopId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v14 = bankShopId;
  if ( (byte_4A4DE04 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_BankShopMaster___, *(_QWORD *)&bankShopId);
    sub_1B863B8(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B863B8(&StringLiteral_6012/*"Entity is not found. bankShopId="*/, v7);
    byte_4A4DE04 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             bankShopId,
             (const MethodInfo_3214280 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
  if ( Entity )
    return (int32_t)Entity[3].monitor;
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v13 = System_Int32__ToString((int32_t)&v14, 0LL);
  Instance = (DataManager_o *)System_String__Concat_61645176((System_String_o *)StringLiteral_6012/*"Entity is not found. bankShopId="*/, v13, 0LL);
  if ( !logErrorOutputAction )
LABEL_9:
    sub_1B86614(Instance, v9);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, DataManager_o *, _QWORD))logErrorOutputAction->fields.m_target)(
    logErrorOutputAction->fields.original_method_info,
    Instance,
    *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
  return 0;
}


void __fastcall PurchaseLogic__InitializePurchasingFramework(PurchaseLogic_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct PurchaseLogic_StaticFields *static_fields; // x8
  UnityEngine_Purchasing_ConfigurationBuilder_o *v8; // x20
  __int64 v9; // x1
  PurchaseBehaviour_c *v10; // x0
  System_Collections_Generic_List_object__o *ConsumableProductIdCollection; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A4DDED & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v5);
    sub_1B863B8(&PurchaseBehaviour_TypeInfo, v6);
    byte_4A4DDED = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( (byte_4A4DDEF & 1) == 0 )
  {
    sub_1B863B8(&PurchaseLogic_TypeInfo, method);
    byte_4A4DDEF = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    ((void (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))this->klass->vtable._27_DisableCrashReporterOnInitialize.method)(
      this,
      this->klass->vtable._28_EnableCrashReporterOnInitializeSucceeded.methodPtr);
    v8 = (UnityEngine_Purchasing_ConfigurationBuilder_o *)((__int64 (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))this->klass->vtable._10_GetConfigurationBuilder.method)(
                                                            this,
                                                            this->klass->vtable._11_SetObfuscatedAccountId.methodPtr);
    ((void (__fastcall *)(PurchaseLogic_o *, UnityEngine_Purchasing_ConfigurationBuilder_o *, Il2CppMethodPointer))this->klass->vtable._11_SetObfuscatedAccountId.method)(
      this,
      v8,
      this->klass->vtable._12_SetCachedObfuscatedAccountId.methodPtr);
    ((void (__fastcall *)(PurchaseLogic_o *, __int64, Il2CppMethodPointer))this->klass->vtable._15_SetAlreadyInitializedWithObfuscatedAccountId.method)(
      this,
      1LL,
      this->klass->vtable._16_IsInitializedWithMismatchedObfuscatedAccountId.methodPtr);
    v10 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v10 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_object__o *)v10->static_fields->ConsumableProductIdCollection;
    if ( !ConsumableProductIdCollection )
      sub_1B86614(0LL, v9);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ConsumableProductIdCollection,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
      if ( !v12 )
        break;
      if ( !v8 )
        sub_1B86614(v12, v13);
      UnityEngine_Purchasing_ConfigurationBuilder__AddProduct(v8, (System_String_o *)v14.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    UnityEngine_Purchasing_UnityPurchasing__Initialize((UnityEngine_Purchasing_IStoreListener_o *)this, v8, 0LL);
  }
}


void __fastcall PurchaseLogic__InitiatePurchase(
        PurchaseLogic_o *this,
        BankShopEntity_o *bankShop,
        PurchaseLogic_ProductFinishedAction_o *finishedAction,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  if ( !bankShop )
    sub_1B86614(this, 0LL);
  PurchaseLogic__InitiatePurchase_39590808(
    this,
    bankShop->fields.id,
    bankShop->fields.googleShopId,
    bankShop->fields.googlePrice,
    finishedAction,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__InitiatePurchase_39590808(
        PurchaseLogic_o *this,
        int32_t shopId,
        System_String_o *productId,
        int32_t price,
        PurchaseLogic_ProductFinishedAction_o *finishedAction,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x0
  __int64 v18; // x1
  struct PurchaseLogic_StaticFields *static_fields; // x8
  struct System_Action_string__o *logErrorOutputAction; // x8
  const MethodInfo *v21; // x7
  int32_t v22; // w1
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x8
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x23
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct System_Action_string__o *v29; // x8
  __int64 *v30; // x9
  struct UnityEngine_Purchasing_IStoreController_o *v31; // x23
  UnityEngine_Purchasing_IStoreController_c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  struct System_Action_string__o *v36; // x8
  const MethodInfo *v37; // x4

  if ( (byte_4A4DDF0 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Purchasing_IStoreController_TypeInfo, *(_QWORD *)&shopId);
    sub_1B863B8(&PurchaseLogic_TypeInfo, v11);
    sub_1B863B8(&StringLiteral_7516/*"InitiatePurchase: FAIL. PurchasingFramework not initialized."*/, v12);
    sub_1B863B8(&StringLiteral_7517/*"InitiatePurchase: FAIL. StoreController is null."*/, v13);
    sub_1B863B8(&StringLiteral_7515/*"InitiatePurchase: FAIL. Not purchasing product, either is not found or is not available for purchase"*/, v14);
    sub_1B863B8(&StringLiteral_7518/*"InitiatePurchase: FAIL. StoreController.products is null."*/, v15);
    sub_1B863B8(&StringLiteral_7519/*"InitiatePurchase: Initialized With Mismatched ObfuscatedAccountId."*/, v16);
    byte_4A4DDF0 = 1;
  }
  this->fields._buyProductFinishedAction = finishedAction;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._buyProductFinishedAction,
    (int32_t)finishedAction,
    (int32_t)productId,
    *(const MethodInfo **)&price);
  if ( (byte_4A4DDEF & 1) == 0 )
  {
    v17 = sub_1B863B8(&PurchaseLogic_TypeInfo, v18);
    byte_4A4DDEF = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( logErrorOutputActionSampledByRatio )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, float))logErrorOutputActionSampledByRatio->fields.m_target)(
        logErrorOutputActionSampledByRatio->fields.original_method_info,
        StringLiteral_7516/*"InitiatePurchase: FAIL. PurchasingFramework not initialized."*/,
        *(_QWORD *)&logErrorOutputActionSampledByRatio->fields.extra_arg,
        0.01);
      v22 = 11;
      goto LABEL_33;
    }
LABEL_39:
    sub_1B86614(v17, v18);
  }
  v17 = ((__int64 (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))this->klass->vtable._16_IsInitializedWithMismatchedObfuscatedAccountId.method)(
          this,
          this->klass->vtable._17_SetInitializedWithMismatchedObfuscatedAccountId.methodPtr);
  if ( (v17 & 1) != 0 )
  {
    logErrorOutputAction = this->fields._logErrorOutputAction;
    if ( logErrorOutputAction )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logErrorOutputAction->fields.m_target)(
        logErrorOutputAction->fields.original_method_info,
        StringLiteral_7519/*"InitiatePurchase: Initialized With Mismatched ObfuscatedAccountId."*/,
        *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
      v22 = 14;
LABEL_33:
      PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, v22, 0, 0, 0, 0, 0, v21);
      return;
    }
    goto LABEL_39;
  }
  storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
  if ( !storeController )
  {
    v29 = this->fields._logErrorOutputAction;
    if ( !v29 )
      goto LABEL_39;
    v30 = &StringLiteral_7517/*"InitiatePurchase: FAIL. StoreController is null."*/;
LABEL_30:
    v17 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v29->fields.m_target)(
            v29->fields.original_method_info,
            *v30,
            *(_QWORD *)&v29->fields.extra_arg);
LABEL_31:
    v36 = this->fields._logErrorOutputAction;
    if ( v36 )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v36->fields.m_target)(
        v36->fields.original_method_info,
        StringLiteral_7515/*"InitiatePurchase: FAIL. Not purchasing product, either is not found or is not available for purchase"*/,
        *(_QWORD *)&v36->fields.extra_arg);
      v22 = 12;
      goto LABEL_33;
    }
    goto LABEL_39;
  }
  klass = storeController->klass;
  v26 = *(unsigned __int16 *)(&storeController->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&storeController->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IStoreController_c **)p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      --v26;
      p_offset += 4;
      if ( !v26 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_1BD6B4C(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
  }
  v17 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))p_method)(
          storeController,
          *(_QWORD *)(p_method + 8));
  if ( !v17 )
  {
    v29 = this->fields._logErrorOutputAction;
    if ( !v29 )
      goto LABEL_39;
    v30 = &StringLiteral_7518/*"InitiatePurchase: FAIL. StoreController.products is null."*/;
    goto LABEL_30;
  }
  v31 = PurchaseLogic_TypeInfo->static_fields->_storeController;
  if ( !v31 )
    goto LABEL_39;
  v32 = v31->klass;
  v33 = *(unsigned __int16 *)(&v31->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v31->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IStoreController_c **)v34 - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_27;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_27:
    v35 = sub_1BD6B4C(v31, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
  }
  v17 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))v35)(
          v31,
          *(_QWORD *)(v35 + 8));
  if ( !v17 )
    goto LABEL_39;
  v17 = (__int64)UnityEngine_Purchasing_ProductCollection__WithID(
                   (UnityEngine_Purchasing_ProductCollection_o *)v17,
                   productId,
                   0LL);
  if ( !v17 || !*(_BYTE *)(v17 + 32) )
    goto LABEL_31;
  PurchaseLogic__PurchaseIfAvailable(this, shopId, (UnityEngine_Purchasing_Product_o *)v17, price, v37);
}


bool __fastcall PurchaseLogic__IsAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall PurchaseLogic__IsAppleDevice(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A4DE02 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Application_TypeInfo, v1);
    byte_4A4DE02 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_platform(0LL) == 8 )
    return 1;
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  return UnityEngine_Application__get_platform(0LL) == 1;
}


bool __fastcall PurchaseLogic__IsDeferredPurchaseExists(PurchaseLogic_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall PurchaseLogic__IsGooglePlayDevice(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A4DE03 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Application_TypeInfo, v1);
    byte_4A4DE03 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  return UnityEngine_Application__get_platform(0LL) == 11;
}


bool __fastcall PurchaseLogic__IsInitializedWithMismatchedObfuscatedAccountId(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PurchaseLogic__IsLimitOver(PurchaseLogic_o *this, int32_t value, const MethodInfo *method)
{
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  int32_t Limit; // w0

  if ( (byte_4A4DDF5 & 1) == 0 )
  {
    sub_1B863B8(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&value);
    sub_1B863B8(&ManagerConfig_TypeInfo, v4);
    byte_4A4DDF5 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 1;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  Limit = AgeVerificationMenu__GetLimit(0LL);
  return Limit >= 0 && Limit < value;
}


bool __fastcall PurchaseLogic__IsObfuscatedAccountIdCached(PurchaseLogic_o *this, const MethodInfo *method)
{
  return 1;
}


bool __fastcall PurchaseLogic__IsPendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *prodcut,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *pendingProducts; // x0

  if ( (byte_4A4DDF9 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_Product__Contains__, prodcut);
    byte_4A4DDF9 = 1;
  }
  pendingProducts = (System_Collections_Generic_HashSet_T__o *)this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_1B86614(0LL, prodcut);
  return System_Collections_Generic_HashSet_object___Contains(
           pendingProducts,
           (Il2CppObject *)prodcut,
           (const MethodInfo_34BE328 *)Method_System_Collections_Generic_HashSet_Product__Contains__);
}


bool __fastcall PurchaseLogic__IsPurchasingFrameworkInitialized(PurchaseLogic_o *this, const MethodInfo *method)
{
  struct PurchaseLogic_StaticFields *static_fields; // x8

  if ( (byte_4A4DDEF & 1) == 0 )
  {
    sub_1B863B8(&PurchaseLogic_TypeInfo, method);
    byte_4A4DDEF = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  return static_fields->_storeController && static_fields->_storeExtensionProvider != 0LL;
}


bool __fastcall PurchaseLogic__IsServerCommitedPurchase(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PurchaseLogic___c_c *v7; // x0
  System_Func_object__bool__o *_9__43_0; // x20
  Il2CppObject *v9; // x21
  struct PurchaseLogic___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4A4DDFD & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___,
      purchaseResultArray);
    sub_1B863B8(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v4);
    sub_1B863B8(&Method_PurchaseLogic___c__IsServerCommitedPurchase_b__43_0__, v5);
    sub_1B863B8(&PurchaseLogic___c_TypeInfo, v6);
    byte_4A4DDFD = 1;
  }
  if ( !purchaseResultArray )
    return 0;
  v7 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v7 = PurchaseLogic___c_TypeInfo;
  }
  _9__43_0 = (System_Func_object__bool__o *)v7->static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = PurchaseLogic___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__43_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__43_0, v9, Method_PurchaseLogic___c__IsServerCommitedPurchase_b__43_0__, 0LL);
    static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__43_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__43_0, (int32_t)_9__43_0, v11, v12);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
           (System_Func_TSource__bool__o *)_9__43_0,
           (const MethodInfo_2F7A214 *)Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___);
}


void __fastcall PurchaseLogic__OnDeferred(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  PurchaseLogic_o *v4; // x19
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  struct System_Action_string__o *logOutputAction; // x19

  v4 = this;
  if ( (byte_4A4DE07 & 1) == 0 )
  {
    this = (PurchaseLogic_o *)sub_1B863B8(&StringLiteral_9734/*"OnDeferred product="*/, product);
    byte_4A4DE07 = 1;
  }
  if ( !product
    || (metadata_k__BackingField = product->fields._metadata_k__BackingField) == 0LL
    || (logOutputAction = v4->fields._logOutputAction,
        this = (PurchaseLogic_o *)System_String__Concat_61645176(
                                    (System_String_o *)StringLiteral_9734/*"OnDeferred product="*/,
                                    metadata_k__BackingField->fields._localizedTitle_k__BackingField,
                                    0LL),
        !logOutputAction) )
  {
    sub_1B86614(this, product);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, PurchaseLogic_o *, _QWORD))logOutputAction->fields.m_target)(
    logOutputAction->fields.original_method_info,
    this,
    *(_QWORD *)&logOutputAction->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__OnEndPaymentStore(
        PurchaseLogic_o *this,
        int32_t purchaseResult,
        System_String_o *resultData,
        System_String_o *productId,
        int32_t bankShopId,
        System_String_o *transactionId,
        const MethodInfo *method)
{
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
  __int64 v27; // x23
  System_String_o *v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_String_o **v32; // x25
  struct System_Action_string__o *logOutputAction; // x28
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_String_o *v36; // x26
  int32_t v37; // w1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int32_t v47; // w1
  struct System_Action_string__o *v48; // x21
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x21
  System_Func_object__bool__o *v50; // x22
  Il2CppObject *v51; // x0
  Il2CppObject *Instance; // x22
  Il2CppObject *v53; // x22
  PurchaseLogic_ProductFinishedAction_o *v54; // x23
  const MethodInfo *v55; // x3
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x7
  System_Enum_o v59; // [xsp+8h] [xbp-88h] BYREF
  int32_t v60; // [xsp+18h] [xbp-78h]
  bool isSentGift[4]; // [xsp+20h] [xbp-70h] BYREF
  int32_t shopId; // [xsp+24h] [xbp-6Ch] BYREF
  __int64 v63; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4A4DE01 & 1) == 0 )
  {
    sub_1B863B8(&Method_CommonUI_OpenStonePurchaseReciveMenu___76104864, *(_QWORD *)&purchaseResult);
    sub_1B863B8(&Method_System_Linq_Enumerable_FirstOrDefault_Product___, v13);
    sub_1B863B8(&System_Func_Product__bool__TypeInfo, v14);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B863B8(&PurchaseLogic_ProductFinishedAction_TypeInfo, v16);
    sub_1B863B8(&PurchaseBehaviour_Result_TypeInfo, v17);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_1B863B8(&string___TypeInfo, v19);
    sub_1B863B8(&Method_PurchaseLogic___c__DisplayClass47_0__OnEndPaymentStore_b__0__, v20);
    sub_1B863B8(&PurchaseLogic___c__DisplayClass47_0_TypeInfo, v21);
    sub_1B863B8(&StringLiteral_15839/*"] "*/, v22);
    sub_1B863B8(&StringLiteral_15582/*"[ "*/, v23);
    sub_1B863B8(&StringLiteral_10640/*"PurchaseLogic:OnEndPaymentStore result "*/, v24);
    sub_1B863B8(&StringLiteral_4626/*"Confirming purchase of "*/, v25);
    sub_1B863B8(&StringLiteral_1/*""*/, v26);
    byte_4A4DE01 = 1;
  }
  v63 = 0LL;
  shopId = 0;
  isSentGift[0] = 0;
  v27 = sub_1B86604(PurchaseLogic___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_26;
  *(_QWORD *)(v27 + 16) = productId;
  v32 = (System_String_o **)(v27 + 16);
  sub_1B8635C((CGThumbnailListItem_o *)(v27 + 16), (int32_t)productId, v30, v31);
  logOutputAction = this->fields._logOutputAction;
  v28 = (System_String_o *)sub_1B86460(string___TypeInfo, 5LL);
  if ( !v28 )
    goto LABEL_26;
  v36 = v28;
  if ( !LODWORD(v28[1].klass) )
    goto LABEL_25;
  v37 = StringLiteral_10640/*"PurchaseLogic:OnEndPaymentStore result "*/;
  v28[1].monitor = (void *)StringLiteral_10640/*"PurchaseLogic:OnEndPaymentStore result "*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v28[1].monitor, v37, v34, v35);
  v59.klass = (System_Enum_c *)PurchaseBehaviour_Result_TypeInfo;
  v59.monitor = (void *)-1LL;
  v60 = purchaseResult;
  v28 = System_Enum__ToString(&v59, 0LL);
  if ( LODWORD(v36[1].klass) <= 1
    || (v36[1].fields = (System_String_Fields)v28,
        sub_1B8635C((CGThumbnailListItem_o *)&v36[1].fields, (int32_t)v28, v38, v39),
        LODWORD(v36[1].klass) <= 2)
    || (v42 = (int)StringLiteral_15582/*"[ "*/,
        v36[2].klass = (System_String_c *)StringLiteral_15582/*"[ "*/,
        sub_1B8635C((CGThumbnailListItem_o *)&v36[2], v42, v40, v41),
        LODWORD(v36[1].klass) <= 3)
    || (v36[2].monitor = resultData,
        sub_1B8635C((CGThumbnailListItem_o *)&v36[2].monitor, (int32_t)resultData, v43, v44),
        LODWORD(v36[1].klass) <= 4) )
  {
LABEL_25:
    sub_1B8661C(v28, v29);
  }
  v47 = StringLiteral_15839/*"] "*/;
  v36[2].fields = (System_String_Fields)StringLiteral_15839/*"] "*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v36[2].fields, v47, v45, v46);
  v28 = System_String__Concat_61685692((System_String_array *)v36, 0LL);
  if ( !logOutputAction )
    goto LABEL_26;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))logOutputAction->fields.m_target)(
    logOutputAction->fields.original_method_info,
    v28,
    *(_QWORD *)&logOutputAction->fields.extra_arg);
  if ( purchaseResult != 4 && purchaseResult != 2 )
    goto LABEL_18;
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._20_UpdateMonthlyPurchasePrice.method)(
    this,
    (unsigned int)bankShopId,
    this->klass->vtable._21_GetPrice.methodPtr);
  if ( System_String__op_Inequality(*v32, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    ((void (__fastcall *)(PurchaseLogic_o *, System_String_o *, System_String_o *, Il2CppMethodPointer))this->klass->vtable._24_SendPurchaseAction.method)(
      this,
      *v32,
      transactionId,
      this->klass->vtable._25_OnDeferred.methodPtr);
  v48 = this->fields._logOutputAction;
  v28 = System_String__Concat_61645176((System_String_o *)StringLiteral_4626/*"Confirming purchase of "*/, *v32, 0LL);
  if ( !v48 )
LABEL_26:
    sub_1B86614(v28, v29);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))v48->fields.m_target)(
    v48->fields.original_method_info,
    v28,
    *(_QWORD *)&v48->fields.extra_arg);
  pendingProducts = this->fields._pendingProducts;
  v50 = (System_Func_object__bool__o *)sub_1B86604(System_Func_Product__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v50,
    (Il2CppObject *)v27,
    Method_PurchaseLogic___c__DisplayClass47_0__OnEndPaymentStore_b__0__,
    0LL);
  v51 = System_Linq_Enumerable__FirstOrDefault_object__49893388(
          (System_Collections_Generic_IEnumerable_TSource__o *)pendingProducts,
          (System_Func_TSource__bool__o *)v50,
          (const MethodInfo_2F9500C *)Method_System_Linq_Enumerable_FirstOrDefault_Product___);
  if ( v51 )
    ((void (__fastcall *)(PurchaseLogic_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._18_ConfirmPurchase.method)(
      this,
      v51,
      this->klass->vtable._19_ExtractReceiptContents.methodPtr);
LABEL_18:
  if ( purchaseResult != 4 && !this->fields._buyProductFinishedAction )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    {
      v53 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v54 = (PurchaseLogic_ProductFinishedAction_o *)sub_1B86604(PurchaseLogic_ProductFinishedAction_TypeInfo);
      PurchaseLogic_ProductFinishedAction___ctor(
        v54,
        v53,
        (intptr_t)Method_CommonUI_OpenStonePurchaseReciveMenu___76104864,
        v55);
      this->fields._buyProductFinishedAction = v54;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields._buyProductFinishedAction, (int32_t)v54, v56, v57);
    }
  }
  v63 = 0LL;
  shopId = 0;
  isSentGift[0] = 0;
  ((void (__fastcall *)(PurchaseLogic_o *, struct PurchaseByBank_UnityIap_Request_PurchaseResult_array *, char *, __int64 *, int32_t *, bool *, Il2CppMethodPointer))this->klass->vtable._22_GetAddedStoneNum.method)(
    this,
    this->fields._purchaseResultArray,
    (char *)&v63 + 4,
    &v63,
    &shopId,
    isSentGift,
    this->klass->vtable._23_ShowPurchaseFailedNotification.methodPtr);
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(
    this,
    purchaseResult,
    0,
    SHIDWORD(v63),
    v63,
    shopId,
    isSentGift[0],
    v58);
}


void __fastcall PurchaseLogic__OnEndSendReceiptData(
        PurchaseLogic_o *this,
        System_String_o *result,
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
  struct System_Action_string__o *logOutputAction; // x23
  __int64 FirstPurchaseResult; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray; // x1
  const MethodInfo *v26; // x2
  System_String_o *klass; // x20
  const MethodInfo *v28; // x6
  __int64 *v29; // x8
  System_String_o *currentTransactionId; // x5
  int32_t v31; // w1
  System_String_o *v32; // x2
  __int64 IsServerCommitedPurchase; // x0
  const MethodInfo *v34; // x3
  struct System_Action_string__o *v35; // x21
  int v36; // w21
  __int64 *v37; // x8
  System_String_o *v38; // x0
  struct System_Action_string__o *v39; // x8
  const MethodInfo *v40; // x2
  int32_t v41; // w22
  const MethodInfo *Entity; // x0
  const MethodInfo *v43; // x2
  struct PurchaseByBank_UnityIap_Request_PurchaseResult_array *v44; // x27
  int max_length; // w8
  struct System_Action_string__o *logErrorOutputAction; // x8
  PurchaseLogic_o *v47; // x0
  System_String_o *v48; // x3
  int32_t v49; // w4
  __int64 v50; // x28
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v51; // x8
  int32_t purchasedBankShopId; // w23
  const MethodInfo *v53; // x2

  if ( (byte_4A4DDFE & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_BankShopMaster___, result);
    sub_1B863B8(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B863B8(&StringLiteral_11031/*"ReceiptError"*/, v7);
    sub_1B863B8(&StringLiteral_22503/*"purchaseResultArray is null."*/, v8);
    sub_1B863B8(&StringLiteral_7014/*"Google Play canceled on restore purchase"*/, v9);
    sub_1B863B8(&StringLiteral_10639/*"PurchaseLogic:EndSendReceiptData ["*/, v10);
    sub_1B863B8(&StringLiteral_22656/*"receipt_error"*/, v11);
    sub_1B863B8(&StringLiteral_17501/*"canceled_purchase_error"*/, v12);
    sub_1B863B8(&StringLiteral_10642/*"PurchaseResult NotFound Error"*/, v13);
    sub_1B863B8(&StringLiteral_10643/*"PurchaseResult NotFound."*/, v14);
    sub_1B863B8(&StringLiteral_10433/*"PaymentOk"*/, v15);
    sub_1B863B8(&StringLiteral_7015/*"Google Play pending on restore purchase"*/, v16);
    sub_1B863B8(&StringLiteral_10638/*"PurchaseBehaviour.Result.SUCCESS_WITHOUT_NOTICE _currentTransactionId="*/, v17);
    sub_1B863B8(&StringLiteral_6117/*"Error["*/, v18);
    sub_1B863B8(&StringLiteral_22345/*"pending_purchase_error"*/, v19);
    sub_1B863B8(&StringLiteral_1/*""*/, v20);
    sub_1B863B8(&StringLiteral_5182/*"DeferredPurchaseProductIds"*/, v21);
    sub_1B863B8(&StringLiteral_15836/*"]"*/, v22);
    byte_4A4DDFE = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  FirstPurchaseResult = (__int64)System_String__Concat_61683424(
                                   (System_String_o *)StringLiteral_10639/*"PurchaseLogic:EndSendReceiptData ["*/,
                                   result,
                                   (System_String_o *)StringLiteral_15836/*"]"*/,
                                   0LL);
  if ( !logOutputAction )
    goto LABEL_49;
  FirstPurchaseResult = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logOutputAction->fields.m_target)(
                          logOutputAction->fields.original_method_info,
                          FirstPurchaseResult,
                          *(_QWORD *)&logOutputAction->fields.extra_arg);
  klass = (System_String_o *)StringLiteral_1/*""*/;
  if ( result && !result->fields._stringLength )
  {
    purchaseResultArray = this->fields._purchaseResultArray;
    if ( purchaseResultArray )
    {
      IsServerCommitedPurchase = PurchaseLogic__IsServerCommitedPurchase(
                                   (PurchaseLogic_o *)FirstPurchaseResult,
                                   purchaseResultArray,
                                   v26);
      if ( (IsServerCommitedPurchase & 1) != 0 )
      {
        v35 = this->fields._logOutputAction;
        FirstPurchaseResult = (__int64)System_String__Concat_61645176(
                                         (System_String_o *)StringLiteral_10638/*"PurchaseBehaviour.Result.SUCCESS_WITHOUT_NOTICE _currentTransactionId="*/,
                                         this->fields._currentTransactionId,
                                         0LL);
        if ( !v35 )
          goto LABEL_49;
        IsServerCommitedPurchase = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v35->fields.m_target)(
                                     v35->fields.original_method_info,
                                     FirstPurchaseResult,
                                     *(_QWORD *)&v35->fields.extra_arg);
        v36 = 4;
LABEL_21:
        FirstPurchaseResult = (__int64)PurchaseLogic__GetFirstPurchaseResult(
                                         (PurchaseLogic_o *)IsServerCommitedPurchase,
                                         this->fields._purchaseResultArray,
                                         this->fields._currentTransactionId,
                                         v34);
        if ( FirstPurchaseResult )
        {
          v41 = *(_DWORD *)(FirstPurchaseResult + 16);
          if ( v41 >= 1 )
          {
            PurchaseLogic__RemovePreparePurchaseShopIdsInPlayerPrefs(this, v41, v40);
            FirstPurchaseResult = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !FirstPurchaseResult )
              goto LABEL_49;
            FirstPurchaseResult = (__int64)DataManager__GetMasterData_object_(
                                             (DataManager_o *)FirstPurchaseResult,
                                             (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_BankShopMaster___);
            if ( !FirstPurchaseResult )
              goto LABEL_49;
            Entity = (const MethodInfo *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)FirstPurchaseResult,
                                           v41,
                                           (const MethodInfo_3214280 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
            if ( Entity )
            {
              klass = (System_String_o *)Entity->klass;
              FirstPurchaseResult = PurchaseLogic__IsAppleDevice(Entity);
              if ( (FirstPurchaseResult & 1) != 0 )
              {
                FirstPurchaseResult = UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5182/*"DeferredPurchaseProductIds"*/, 0LL);
                if ( (FirstPurchaseResult & 1) != 0 )
                {
                  v44 = this->fields._purchaseResultArray;
                  if ( v44 )
                  {
                    max_length = v44->max_length;
                    if ( max_length == 1 )
                    {
                      PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(this, klass, v43);
LABEL_37:
                      StoneCountRefreshComponent__RefreshAllStoneCount((const MethodInfo *)FirstPurchaseResult);
                      goto LABEL_38;
                    }
                    if ( max_length < 2 )
                      goto LABEL_37;
                    v50 = 0LL;
                    while ( 1 )
                    {
                      if ( (unsigned int)v50 >= max_length )
                        sub_1B8661C(FirstPurchaseResult, purchaseResultArray);
                      v51 = v44->m_Items[v50];
                      if ( !v51 )
                        break;
                      purchasedBankShopId = v51->fields.purchasedBankShopId;
                      FirstPurchaseResult = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !FirstPurchaseResult )
                        break;
                      FirstPurchaseResult = (__int64)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)FirstPurchaseResult,
                                                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_BankShopMaster___);
                      if ( !FirstPurchaseResult )
                        break;
                      FirstPurchaseResult = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)FirstPurchaseResult,
                                                       purchasedBankShopId,
                                                       (const MethodInfo_3214280 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
                      if ( FirstPurchaseResult )
                        PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(
                          this,
                          *(System_String_o **)(FirstPurchaseResult + 32),
                          v53);
                      max_length = v44->max_length;
                      if ( (int)++v50 >= max_length )
                        goto LABEL_37;
                    }
LABEL_49:
                    sub_1B86614(FirstPurchaseResult, purchaseResultArray);
                  }
                }
              }
              FirstPurchaseResult = PurchaseLogic__IsGooglePlayDevice((const MethodInfo *)FirstPurchaseResult);
              if ( (FirstPurchaseResult & 1) != 0 )
                goto LABEL_37;
            }
LABEL_38:
            currentTransactionId = this->fields._currentTransactionId;
            v47 = this;
            v31 = v36;
            v48 = klass;
            v32 = (System_String_o *)StringLiteral_10433/*"PaymentOk"*/;
            v49 = v41;
            goto LABEL_35;
          }
        }
        logErrorOutputAction = this->fields._logErrorOutputAction;
        if ( logErrorOutputAction )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logErrorOutputAction->fields.m_target)(
            logErrorOutputAction->fields.original_method_info,
            StringLiteral_10643/*"PurchaseResult NotFound."*/,
            *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
          v37 = &StringLiteral_10642/*"PurchaseResult NotFound Error"*/;
          goto LABEL_33;
        }
        goto LABEL_49;
      }
    }
    else
    {
      v39 = this->fields._logErrorOutputAction;
      if ( !v39 )
        goto LABEL_49;
      IsServerCommitedPurchase = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v39->fields.m_target)(
                                   v39->fields.original_method_info,
                                   StringLiteral_22503/*"purchaseResultArray is null."*/,
                                   *(_QWORD *)&v39->fields.extra_arg);
    }
    v36 = 2;
    goto LABEL_21;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22345/*"pending_purchase_error"*/, 0LL) )
  {
    if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_17501/*"canceled_purchase_error"*/, 0LL) )
    {
      v29 = &StringLiteral_7014/*"Google Play canceled on restore purchase"*/;
      currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
      v31 = 17;
      goto LABEL_10;
    }
    if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22656/*"receipt_error"*/, 0LL) )
    {
      v38 = System_String__Concat_61683424(
              (System_String_o *)StringLiteral_6117/*"Error["*/,
              result,
              (System_String_o *)StringLiteral_15836/*"]"*/,
              0LL);
      currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
      v31 = 7;
      v32 = v38;
      goto LABEL_34;
    }
    v37 = &StringLiteral_11031/*"ReceiptError"*/;
LABEL_33:
    v32 = (System_String_o *)*v37;
    currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
    v31 = 7;
    goto LABEL_34;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, __int64, Il2CppMethodPointer))this->klass->vtable._30_SetExistsDeferredPurchase.method)(
    this,
    1LL,
    this->klass->vtable._31_IsDeferredPurchaseExists.methodPtr);
  v29 = &StringLiteral_7015/*"Google Play pending on restore purchase"*/;
  currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
  v31 = 16;
LABEL_10:
  v32 = (System_String_o *)*v29;
LABEL_34:
  v47 = this;
  v48 = klass;
  v49 = 0;
LABEL_35:
  PurchaseLogic__OnEndPaymentStore(v47, v31, v32, v48, v49, currentTransactionId, v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__OnInitializeFailed(PurchaseLogic_o *this, int32_t error, const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  struct System_Action_string__o *logErrorOutputAction; // x20
  System_String_o *v11; // x0
  System_Enum_o v12; // [xsp+8h] [xbp-38h] BYREF
  int32_t v13; // [xsp+18h] [xbp-28h]

  if ( (byte_4A4DE09 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Purchasing_InitializationFailureReason_TypeInfo, *(_QWORD *)&error);
    sub_1B863B8(&StringLiteral_9764/*"OnInitializeFailed InitializationFailureReason:"*/, v5);
    byte_4A4DE09 = 1;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.method)(
    this,
    this->klass->vtable._30_SetExistsDeferredPurchase.methodPtr,
    method);
  if ( (unsigned int)error <= 1 )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    v12.klass = (System_Enum_c *)UnityEngine_Purchasing_InitializationFailureReason_TypeInfo;
    v12.monitor = (void *)-1LL;
    v13 = error;
    v7 = System_Enum__ToString(&v12, 0LL);
    v8 = System_String__Concat_61645176((System_String_o *)StringLiteral_9764/*"OnInitializeFailed InitializationFailureReason:"*/, v7, 0LL);
    if ( logErrorOutputActionSampledByRatio )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD, float))logErrorOutputActionSampledByRatio->fields.m_target)(
        logErrorOutputActionSampledByRatio->fields.original_method_info,
        v8,
        *(_QWORD *)&logErrorOutputActionSampledByRatio->fields.extra_arg,
        0.01);
      return;
    }
LABEL_9:
    sub_1B86614(v8, v9);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v12.klass = (System_Enum_c *)UnityEngine_Purchasing_InitializationFailureReason_TypeInfo;
  v12.monitor = (void *)-1LL;
  v13 = error;
  v11 = System_Enum__ToString(&v12, 0LL);
  v8 = System_String__Concat_61645176((System_String_o *)StringLiteral_9764/*"OnInitializeFailed InitializationFailureReason:"*/, v11, 0LL);
  if ( !logErrorOutputAction )
    goto LABEL_9;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))logErrorOutputAction->fields.m_target)(
    logErrorOutputAction->fields.original_method_info,
    v8,
    *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
}


void __fastcall PurchaseLogic__OnInitialized(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_IStoreController_o *controller,
        UnityEngine_Purchasing_IExtensionProvider_o *extensions,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Action_string__o *logOutputAction; // x8
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct PurchaseLogic_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  PurchaseLogic_o *v18; // x0
  const MethodInfo *v19; // x1
  UnityEngine_Purchasing_IAppleExtensions_o *AppleExtension; // x0
  UnityEngine_Purchasing_IAppleExtensions_o *v21; // x20
  System_Action_object__o *v22; // x21
  UnityEngine_Purchasing_IAppleExtensions_c *klass; // x8
  __int64 v24; // x9
  UnityEngine_Purchasing_IAppleExtensions_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4A4DE06 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_Product__TypeInfo, controller);
    sub_1B863B8(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v7);
    sub_1B863B8(&PurchaseLogic_TypeInfo, v8);
    sub_1B863B8(&StringLiteral_9765/*"OnInitialized: PASS"*/, v9);
    byte_4A4DE06 = 1;
  }
  v10 = ((__int64 (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer, UnityEngine_Purchasing_IExtensionProvider_o *, const MethodInfo *))this->klass->vtable._28_EnableCrashReporterOnInitializeSucceeded.method)(
          this,
          this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.methodPtr,
          extensions,
          method);
  logOutputAction = this->fields._logOutputAction;
  if ( !logOutputAction )
    sub_1B86614(v10, v11);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logOutputAction->fields.m_target)(
    logOutputAction->fields.original_method_info,
    StringLiteral_9765/*"OnInitialized: PASS"*/,
    *(_QWORD *)&logOutputAction->fields.extra_arg);
  PurchaseLogic_TypeInfo->static_fields->_storeController = controller;
  sub_1B8635C((CGThumbnailListItem_o *)PurchaseLogic_TypeInfo->static_fields, (int32_t)controller, v13, v14);
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  static_fields->_storeExtensionProvider = extensions;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_storeExtensionProvider, (int32_t)extensions, v16, v17);
  AppleExtension = PurchaseLogic__GetAppleExtension(v18, v19);
  if ( AppleExtension )
  {
    v21 = AppleExtension;
    v22 = (System_Action_object__o *)sub_1B86604(System_Action_Product__TypeInfo);
    System_Action_object____ctor(
      v22,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._26_OnInitializeFailed.methodPtr,
      0LL);
    klass = v21->klass;
    v24 = *(unsigned __int16 *)(&v21->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v21->klass->_2.bitflags2 + 3) )
    {
      p_offset = (UnityEngine_Purchasing_IAppleExtensions_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
      {
        --v24;
        p_offset += 2;
        if ( !v24 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BD6B4C(v21, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 2LL);
    }
    (*(void (__fastcall **)(UnityEngine_Purchasing_IAppleExtensions_o *, System_Action_object__o *, _QWORD))p_method)(
      v21,
      v22,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall PurchaseLogic__OnPurchaseFailed(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        int32_t failureReason,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x21
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x22
  __int64 IsAppleDevice; // x0
  const MethodInfo *v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  InvokerMethod invoker_method; // x8
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  System_String_o **v33; // x24
  const MethodInfo *v34; // x0
  const MethodInfo *v35; // x2
  struct System_Action_string__o *logErrorOutputAction; // x23
  System_String_o *v37; // x20
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  struct System_Action_string__o *sendReportOutputAction; // x25
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_String_o *v45; // x24
  System_Object_array *v46; // x23
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  Il2CppObject *v52; // x24
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  Il2CppObject *v55; // x24
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  Il2CppObject *v58; // x24
  Il2CppObject *Instance; // x24
  Il2CppObject *v60; // x24
  PurchaseLogic_ProductFinishedAction_o *v61; // x25
  const MethodInfo *v62; // x3
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  const char *name; // x8
  System_Decimal_o *v66; // x23
  PurchaseBehaviour_c *v67; // x0
  System_Collections_Generic_IEnumerable_TSource__o *BankShopEntityCollection; // x23
  System_Func_object__bool__o *v69; // x24
  Il2CppObject *v70; // x0
  int32_t klass; // w22
  const MethodInfo *v72; // x7
  int32_t v73; // w1
  __int64 v74; // x0
  int32_t v75; // [xsp+Ch] [xbp-54h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-48h] BYREF
  System_DateTime_o v77; // 0:x0.8
  System_DateTime_o v78; // 0:x0.8

  v5 = (const MethodInfo *)product;
  if ( (byte_4A4DE0B & 1) == 0 )
  {
    sub_1B863B8(&Method_CommonUI_OpenStonePurchaseReciveMenu___76104864, product);
    sub_1B863B8(&System_DateTime_TypeInfo, v7);
    sub_1B863B8(&System_Decimal_TypeInfo, v8);
    sub_1B863B8(&Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___, v9);
    sub_1B863B8(&System_Func_BankShopEntity__bool__TypeInfo, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Contains__, v11);
    sub_1B863B8(&NetworkManager_TypeInfo, v12);
    sub_1B863B8(&object___TypeInfo, v13);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v14);
    sub_1B863B8(&PurchaseLogic_ProductFinishedAction_TypeInfo, v15);
    sub_1B863B8(&PurchaseBehaviour_TypeInfo, v16);
    sub_1B863B8(&UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, v17);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_1B863B8(&string_TypeInfo, v19);
    sub_1B863B8(&Method_PurchaseLogic___c__DisplayClass61_0__OnPurchaseFailed_b__0__, v20);
    sub_1B863B8(&PurchaseLogic___c__DisplayClass61_0_TypeInfo, v21);
    sub_1B863B8(&StringLiteral_24720/*"yyyy/MM/dd HH:mm:ss"*/, v22);
    sub_1B863B8(&StringLiteral_9799/*"OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}, Purchase StartTime: {2}, Purchase FailedTime: {3}"*/, v23);
    sub_1B863B8(&StringLiteral_5165/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/, v24);
    byte_4A4DE0B = 1;
  }
  dateData = 0LL;
  v25 = sub_1B86604(PurchaseLogic___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( v5 )
  {
    invoker_method = v5->invoker_method;
    if ( !invoker_method )
      goto LABEL_53;
    static_fields = (struct System_String_StaticFields *)((char *)invoker_method + 24);
    if ( !v25 )
      goto LABEL_53;
  }
  else
  {
    static_fields = string_TypeInfo->static_fields;
    if ( !v25 )
      goto LABEL_53;
  }
  Empty = static_fields->Empty;
  *(struct System_String_StaticFields *)(v25 + 16) = (struct System_String_StaticFields)static_fields->Empty;
  v33 = (System_String_o **)(v25 + 16);
  sub_1B8635C((CGThumbnailListItem_o *)(v25 + 16), (int32_t)Empty, v28, v29);
  IsAppleDevice = PurchaseLogic__IsAppleDevice(v34);
  if ( (IsAppleDevice & 1) != 0 )
  {
    IsAppleDevice = System_String__IsNullOrEmpty(*v33, 0LL);
    if ( (IsAppleDevice & 1) == 0 )
    {
      IsAppleDevice = (__int64)PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                 (PurchaseLogic_o *)IsAppleDevice,
                                 v27);
      if ( !IsAppleDevice )
        goto LABEL_53;
      IsAppleDevice = System_Collections_Generic_List_object___Contains(
                        (System_Collections_Generic_List_object__o *)IsAppleDevice,
                        (Il2CppObject *)*v33,
                        (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_string__Contains__);
      if ( (IsAppleDevice & 1) != 0 )
      {
        PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(this, *v33, v35);
        logErrorOutputAction = this->fields._logErrorOutputAction;
        v37 = *v33;
        v75 = 4;
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(
                                UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo,
                                &v75,
                                v38,
                                v39,
                                v40);
        IsAppleDevice = (__int64)System_String__Format_61686468(
                                   (System_String_o *)StringLiteral_5165/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/,
                                   (Il2CppObject *)v37,
                                   v41,
                                   0LL);
        if ( !logErrorOutputAction )
          goto LABEL_53;
        IsAppleDevice = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logErrorOutputAction->fields.m_target)(
                          logErrorOutputAction->fields.original_method_info,
                          IsAppleDevice,
                          *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
        failureReason = 4;
        goto LABEL_34;
      }
    }
  }
  if ( failureReason == 4 )
    goto LABEL_34;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getDateTime(0LL).fields._dateData;
  sendReportOutputAction = this->fields._sendReportOutputAction;
  IsAppleDevice = sub_1B86460(object___TypeInfo, 4LL);
  if ( !IsAppleDevice )
LABEL_53:
    sub_1B86614(IsAppleDevice, v27);
  v45 = *v33;
  v46 = (System_Object_array *)IsAppleDevice;
  if ( v45 )
  {
    IsAppleDevice = sub_1B864F4(v45, *(_QWORD *)(*(_QWORD *)IsAppleDevice + 64LL));
    if ( !IsAppleDevice )
      goto LABEL_55;
  }
  if ( !v46->max_length )
    goto LABEL_54;
  v46->m_Items[0] = (Il2CppObject *)v45;
  sub_1B8635C((CGThumbnailListItem_o *)v46->m_Items, (int32_t)v45, v43, v44);
  v75 = failureReason;
  IsAppleDevice = j_il2cpp_value_box_0(UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, &v75, v47, v48, v49);
  v52 = (Il2CppObject *)IsAppleDevice;
  if ( IsAppleDevice )
  {
    IsAppleDevice = sub_1B864F4(IsAppleDevice, v46->obj.klass->_1.element_class);
    if ( !IsAppleDevice )
      goto LABEL_55;
  }
  if ( v46->max_length <= 1 )
    goto LABEL_54;
  v46->m_Items[1] = v52;
  sub_1B8635C((CGThumbnailListItem_o *)&v46->m_Items[1], (int32_t)v52, v50, v51);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v77.fields._dateData = (uint64_t)&this->fields._purchaseStartTime;
  IsAppleDevice = (__int64)System_DateTime__ToString_63048508(v77, (System_String_o *)StringLiteral_24720/*"yyyy/MM/dd HH:mm:ss"*/, 0LL);
  v55 = (Il2CppObject *)IsAppleDevice;
  if ( IsAppleDevice )
  {
    IsAppleDevice = sub_1B864F4(IsAppleDevice, v46->obj.klass->_1.element_class);
    if ( !IsAppleDevice )
      goto LABEL_55;
  }
  if ( v46->max_length <= 2 )
    goto LABEL_54;
  v46->m_Items[2] = v55;
  sub_1B8635C((CGThumbnailListItem_o *)&v46->m_Items[2], (int32_t)v55, v53, v54);
  v78.fields._dateData = (uint64_t)&dateData;
  IsAppleDevice = (__int64)System_DateTime__ToString_63048508(v78, (System_String_o *)StringLiteral_24720/*"yyyy/MM/dd HH:mm:ss"*/, 0LL);
  v58 = (Il2CppObject *)IsAppleDevice;
  if ( IsAppleDevice )
  {
    IsAppleDevice = sub_1B864F4(IsAppleDevice, v46->obj.klass->_1.element_class);
    if ( !IsAppleDevice )
    {
LABEL_55:
      v74 = sub_1B86638(IsAppleDevice);
      sub_1B864E0(v74, 0LL);
    }
  }
  if ( v46->max_length <= 3 )
LABEL_54:
    sub_1B8661C(IsAppleDevice, v27);
  v46->m_Items[3] = v58;
  sub_1B8635C((CGThumbnailListItem_o *)&v46->m_Items[3], (int32_t)v58, v56, v57);
  IsAppleDevice = (__int64)System_String__Format_61686604((System_String_o *)StringLiteral_9799/*"OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}, Purchase StartTime: {2}, Purchase FailedTime: {3}"*/, v46, 0LL);
  if ( !sendReportOutputAction )
    goto LABEL_53;
  IsAppleDevice = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))sendReportOutputAction->fields.m_target)(
                    sendReportOutputAction->fields.original_method_info,
                    IsAppleDevice,
                    *(_QWORD *)&sendReportOutputAction->fields.extra_arg);
LABEL_34:
  if ( !this->fields._buyProductFinishedAction )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsAppleDevice = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
    if ( (IsAppleDevice & 1) != 0 )
    {
      v60 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v61 = (PurchaseLogic_ProductFinishedAction_o *)sub_1B86604(PurchaseLogic_ProductFinishedAction_TypeInfo);
      PurchaseLogic_ProductFinishedAction___ctor(
        v61,
        v60,
        (intptr_t)Method_CommonUI_OpenStonePurchaseReciveMenu___76104864,
        v62);
      this->fields._buyProductFinishedAction = v61;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields._buyProductFinishedAction, (int32_t)v61, v63, v64);
    }
  }
  if ( v5 )
  {
    name = v5->name;
    if ( !name )
      goto LABEL_53;
    v66 = (System_Decimal_o *)*((_QWORD *)name + 6);
    v5 = (const MethodInfo *)*((_QWORD *)name + 7);
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    LODWORD(v5) = System_Decimal__ToInt32(v66, v5);
  }
  v67 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v67 = PurchaseBehaviour_TypeInfo;
  }
  BankShopEntityCollection = (System_Collections_Generic_IEnumerable_TSource__o *)v67->static_fields->BankShopEntityCollection;
  v69 = (System_Func_object__bool__o *)sub_1B86604(System_Func_BankShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v69,
    (Il2CppObject *)v25,
    Method_PurchaseLogic___c__DisplayClass61_0__OnPurchaseFailed_b__0__,
    0LL);
  v70 = System_Linq_Enumerable__FirstOrDefault_object__49893388(
          BankShopEntityCollection,
          (System_Func_TSource__bool__o *)v69,
          (const MethodInfo_2F9500C *)Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
  if ( v70 )
    klass = (int32_t)v70[1].klass;
  else
    klass = 0;
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._23_ShowPurchaseFailedNotification.method)(
    this,
    (unsigned int)failureReason,
    this->klass->vtable._24_SendPurchaseAction.methodPtr);
  if ( (unsigned int)failureReason > 6 )
    v73 = 7;
  else
    v73 = dword_BFCB6C[failureReason];
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, v73, (int32_t)v5, 0, 0, klass, 0, v72);
}


int32_t __fastcall PurchaseLogic__ProcessPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_PurchaseEventArgs_o *purchaseEventArgs,
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
  __int64 v14; // x21
  __int64 v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct UnityEngine_Purchasing_Product_o *purchasedProduct_k__BackingField; // x1
  UnityEngine_Purchasing_Product_o **v19; // x20
  PurchaseBehaviour_c *v20; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_object__bool__o *v22; // x23
  __int64 v23; // x8
  __int64 v24; // x8
  struct System_Action_string__o *logOutputAction; // x21
  Il2CppObject *v26; // x1
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  struct System_Action_string__o *v28; // x21
  System_String_o *v29; // x0
  struct System_Action_string__o *v30; // x9
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  struct System_Action_string__o *logErrorOutputAction; // x8
  System_Decimal_o v35; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4A4DE0A & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_string___, purchaseEventArgs);
    sub_1B863B8(&System_Decimal_TypeInfo, v5);
    sub_1B863B8(&System_Func_string__bool__TypeInfo, v6);
    sub_1B863B8(&PurchaseBehaviour_TypeInfo, v7);
    sub_1B863B8(&Method_PurchaseLogic___c__DisplayClass60_0__ProcessPurchase_b__0__, v8);
    sub_1B863B8(&PurchaseLogic___c__DisplayClass60_0_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_10593/*"ProcessPurchase: product is null"*/, v10);
    sub_1B863B8(&StringLiteral_10592/*"ProcessPurchase: PASS. Product: '{0}'"*/, v11);
    sub_1B863B8(&StringLiteral_10591/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/, v12);
    sub_1B863B8(&StringLiteral_10574/*"Price: "*/, v13);
    byte_4A4DE0A = 1;
  }
  *(_OWORD *)&v35.fields.flags = 0uLL;
  v14 = sub_1B86604(PurchaseLogic___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( purchaseEventArgs )
  {
    purchasedProduct_k__BackingField = purchaseEventArgs->fields._purchasedProduct_k__BackingField;
    if ( !v14 )
      goto LABEL_28;
  }
  else
  {
    purchasedProduct_k__BackingField = 0LL;
    if ( !v14 )
      goto LABEL_28;
  }
  *(_QWORD *)(v14 + 16) = purchasedProduct_k__BackingField;
  v19 = (UnityEngine_Purchasing_Product_o **)(v14 + 16);
  sub_1B8635C((CGThumbnailListItem_o *)(v14 + 16), (int32_t)purchasedProduct_k__BackingField, v16, v17);
  if ( *(_QWORD *)(v14 + 16) )
  {
    v20 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v20 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v20->static_fields->ConsumableProductIdCollection;
    v22 = (System_Func_object__bool__o *)sub_1B86604(System_Func_string__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v22,
      (Il2CppObject *)v14,
      Method_PurchaseLogic___c__DisplayClass60_0__ProcessPurchase_b__0__,
      0LL);
    v15 = BasicHelper__Any_object_(
            ConsumableProductIdCollection,
            (System_Func_T__bool__o *)v22,
            (const MethodInfo_2F57CB4 *)Method_BasicHelper_Any_string___);
    v23 = *(_QWORD *)(v14 + 16);
    if ( v23 )
    {
      v24 = *(_QWORD *)(v23 + 16);
      if ( v24 )
      {
        logOutputAction = this->fields._logOutputAction;
        v26 = *(Il2CppObject **)(v24 + 16);
        if ( (v15 & 1) == 0 )
        {
          v15 = (__int64)System_String__Format((System_String_o *)StringLiteral_10591/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/, v26, 0LL);
          if ( !logOutputAction )
            goto LABEL_28;
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logOutputAction->fields.m_target)(
            logOutputAction->fields.original_method_info,
            v15,
            *(_QWORD *)&logOutputAction->fields.extra_arg);
          goto LABEL_26;
        }
        v15 = (__int64)System_String__Format((System_String_o *)StringLiteral_10592/*"ProcessPurchase: PASS. Product: '{0}'"*/, v26, 0LL);
        if ( logOutputAction )
        {
          v15 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logOutputAction->fields.m_target)(
                  logOutputAction->fields.original_method_info,
                  v15,
                  *(_QWORD *)&logOutputAction->fields.extra_arg);
          if ( *v19 )
          {
            metadata_k__BackingField = (*v19)->fields._metadata_k__BackingField;
            if ( metadata_k__BackingField )
            {
              v28 = this->fields._logOutputAction;
              *(_OWORD *)&v35.fields.flags = *(_OWORD *)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.flags;
              if ( !System_Decimal_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
              v29 = System_Decimal__ToString(&v35, 0LL);
              v15 = (__int64)System_String__Concat_61645176((System_String_o *)StringLiteral_10574/*"Price: "*/, v29, 0LL);
              if ( v28 )
              {
                v15 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v28->fields.m_target)(
                        v28->fields.original_method_info,
                        v15,
                        *(_QWORD *)&v28->fields.extra_arg);
                if ( *v19 )
                {
                  v30 = this->fields._logOutputAction;
                  if ( v30 )
                  {
                    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, _QWORD))v30->fields.m_target)(
                      v30->fields.original_method_info,
                      (*v19)->fields._receipt_k__BackingField,
                      *(_QWORD *)&v30->fields.extra_arg);
                    PurchaseLogic__ValidateReceipt(this, *v19, v31);
LABEL_26:
                    PurchaseLogic__AddPendingPurchase(this, *v19, v32);
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
    sub_1B86614(v15, purchasedProduct_k__BackingField);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  if ( !logErrorOutputAction )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logErrorOutputAction->fields.m_target)(
    logErrorOutputAction->fields.original_method_info,
    StringLiteral_10593/*"ProcessPurchase: product is null"*/,
    *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__PurchaseIfAvailable(
        PurchaseLogic_o *this,
        int32_t shopId,
        UnityEngine_Purchasing_Product_o *product,
        int32_t price,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x0
  const MethodInfo *v21; // x2
  int32_t CumulativeAmount; // w2
  const MethodInfo *v23; // x7
  NetworkManager_ResultCallbackFunc_o *v24; // x19
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  PurchaseLogic_o *v28; // x0
  const MethodInfo *v29; // x3

  if ( (byte_4A4DDF1 & 1) == 0 )
  {
    sub_1B863B8(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&shopId);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1B863B8(&Method_PurchaseLogic___c__DisplayClass29_0__PurchaseIfAvailable_b__0__, v10);
    sub_1B863B8(&Method_PurchaseLogic___c__DisplayClass29_0__PurchaseIfAvailable_b__1__, v11);
    sub_1B863B8(&PurchaseLogic___c__DisplayClass29_0_TypeInfo, v12);
    byte_4A4DDF1 = 1;
  }
  v13 = sub_1B86604(PurchaseLogic___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1B86614(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 32) = product;
  *(_DWORD *)(v13 + 24) = price;
  sub_1B8635C((CGThumbnailListItem_o *)(v13 + 32), (int32_t)product, v18, v19);
  *(_DWORD *)(v13 + 40) = shopId;
  if ( PurchaseLogic__IsAppleDevice(v20)
    && PurchaseLogic__IsPendingPurchase(this, *(UnityEngine_Purchasing_Product_o **)(v13 + 32), v21) )
  {
    if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    CumulativeAmount = AgeVerificationMenu__GetCumulativeAmount(0LL);
    PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, 13, CumulativeAmount, 0, 0, 0, 0, v23);
  }
  else
  {
    v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v24,
      (Il2CppObject *)v13,
      Method_PurchaseLogic___c__DisplayClass29_0__PurchaseIfAvailable_b__0__,
      0LL);
    *(_QWORD *)(v13 + 48) = v24;
    sub_1B8635C((CGThumbnailListItem_o *)(v13 + 48), (int32_t)v24, v25, v26);
    LODWORD(v24) = *(_DWORD *)(v13 + 40);
    v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v27,
      (Il2CppObject *)v13,
      Method_PurchaseLogic___c__DisplayClass29_0__PurchaseIfAvailable_b__1__,
      0LL);
    PurchaseLogic__RequestPreparePurchaseByBank(v28, (int32_t)v24, v27, v29);
  }
}


void __fastcall PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(
        PurchaseLogic_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x19
  System_Predicate_object__o *v15; // x21
  PurchaseLogic_o *v16; // x0
  const MethodInfo *v17; // x2

  if ( (byte_4A4DE0F & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_string__RemoveAll__, productId);
    sub_1B863B8(&System_Predicate_string__TypeInfo, v4);
    sub_1B863B8(&Method_PurchaseLogic___c__DisplayClass82_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__, v5);
    sub_1B863B8(&PurchaseLogic___c__DisplayClass82_0_TypeInfo, v6);
    byte_4A4DE0F = 1;
  }
  v7 = sub_1B86604(PurchaseLogic___c__DisplayClass82_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_7;
  *(_QWORD *)(v7 + 16) = productId;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)productId, v10, v11);
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v7 + 16), 0LL);
  if ( IsNullOrEmpty )
    return;
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)IsNullOrEmpty,
                                                v13);
  v15 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_string__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)v7,
    Method_PurchaseLogic___c__DisplayClass82_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__,
    0LL);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
LABEL_7:
    sub_1B86614(v8, v9);
  v16 = (PurchaseLogic_o *)System_Collections_Generic_List_object___RemoveAll(
                             (System_Collections_Generic_List_object__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
                             (System_Predicate_T__o *)v15,
                             (const MethodInfo_35FDFB4 *)Method_System_Collections_Generic_List_string__RemoveAll__);
  PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(v16, DeferredPurchaseProductIdsFromPlayerPrefs, v17);
}


void __fastcall PurchaseLogic__RemovePendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_HashSet_T__o *pendingProducts; // x0

  if ( (byte_4A4DDF8 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_Product__Contains__, product);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_Product__Remove__, v5);
    byte_4A4DDF8 = 1;
  }
  pendingProducts = (System_Collections_Generic_HashSet_T__o *)this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_8;
  if ( System_Collections_Generic_HashSet_object___Contains(
         pendingProducts,
         (Il2CppObject *)product,
         (const MethodInfo_34BE328 *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
  {
    pendingProducts = (System_Collections_Generic_HashSet_T__o *)this->fields._pendingProducts;
    if ( pendingProducts )
    {
      System_Collections_Generic_HashSet_object___Remove(
        pendingProducts,
        (Il2CppObject *)product,
        (const MethodInfo_34BE4F4 *)Method_System_Collections_Generic_HashSet_Product__Remove__);
      return;
    }
LABEL_8:
    sub_1B86614(pendingProducts, product);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__RemovePreparePurchaseShopIdsInPlayerPrefs(
        PurchaseLogic_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x19
  System_String_o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  PurchaseLogic_o *v12; // x0
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_string__o *PreparePurchaseShopIdsFromPlayerPrefs; // x20
  System_Predicate_object__o *v15; // x21
  PurchaseLogic_o *v16; // x0
  const MethodInfo *v17; // x2
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v18 = shopId;
  if ( (byte_4A4DE13 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_string__RemoveAll__, *(_QWORD *)&shopId);
    sub_1B863B8(&System_Predicate_string__TypeInfo, v4);
    sub_1B863B8(&Method_PurchaseLogic___c__DisplayClass86_0__RemovePreparePurchaseShopIdsInPlayerPrefs_b__0__, v5);
    sub_1B863B8(&PurchaseLogic___c__DisplayClass86_0_TypeInfo, v6);
    byte_4A4DE13 = 1;
  }
  v7 = sub_1B86604(PurchaseLogic___c__DisplayClass86_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( shopId >= 1 )
  {
    v8 = System_Int32__ToString((int32_t)&v18, 0LL);
    if ( !v7
      || (*(_QWORD *)(v7 + 16) = v8,
          sub_1B8635C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v8, v10, v11),
          PreparePurchaseShopIdsFromPlayerPrefs = PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs(v12, v13),
          v15 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_string__TypeInfo),
          System_Predicate_object____ctor(
            v15,
            (Il2CppObject *)v7,
            Method_PurchaseLogic___c__DisplayClass86_0__RemovePreparePurchaseShopIdsInPlayerPrefs_b__0__,
            0LL),
          !PreparePurchaseShopIdsFromPlayerPrefs) )
    {
      sub_1B86614(v8, v9);
    }
    v16 = (PurchaseLogic_o *)System_Collections_Generic_List_object___RemoveAll(
                               (System_Collections_Generic_List_object__o *)PreparePurchaseShopIdsFromPlayerPrefs,
                               (System_Predicate_T__o *)v15,
                               (const MethodInfo_35FDFB4 *)Method_System_Collections_Generic_List_string__RemoveAll__);
    PurchaseLogic__SavePreparePurchaseShopIdsToPlayerPrefs(v16, PreparePurchaseShopIdsFromPlayerPrefs, v17);
  }
}


void __fastcall PurchaseLogic__RequestGameServerBankStatus(
        PurchaseLogic_o *this,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Request_object; // x0
  __int64 v6; // x1

  if ( (byte_4A4DDF3 & 1) == 0 )
  {
    sub_1B863B8(&Method_NetworkManager_getRequest_BankStatusRequest___, callback);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    byte_4A4DDF3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_BankStatusRequest___);
  if ( !Request_object )
    sub_1B86614(0LL, v6);
  BankStatusRequest__beginRequest((BankStatusRequest_o *)Request_object, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__RequestPreparePurchaseByBank(
        PurchaseLogic_o *this,
        int32_t shopId,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1

  if ( (byte_4A4DDF2 & 1) == 0 )
  {
    sub_1B863B8(&Method_NetworkManager_getRequest_PreparePurchaseByBankRequest___, *(_QWORD *)&shopId);
    sub_1B863B8(&NetworkManager_TypeInfo, v6);
    byte_4A4DDF2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_PreparePurchaseByBankRequest___);
  if ( !Request_object )
    sub_1B86614(0LL, v8);
  PreparePurchaseByBankRequest__beginRequest((PreparePurchaseByBankRequest_o *)Request_object, shopId, 0LL);
}


void __fastcall PurchaseLogic__RestorePurchases(PurchaseLogic_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct PurchaseLogic_StaticFields *static_fields; // x8
  void *v13; // x8
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x20
  UnityEngine_Purchasing_IExtensionProvider_c *klass; // x8
  void *v16; // x21
  __int64 v17; // x9
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  void *monitor; // x8
  void *v23; // x19
  System_String_o *v24; // x0
  __int64 v25; // x0
  __int64 v26; // x20
  System_Action_bool__object__o *v27; // x21
  __int64 v28; // x8
  __int64 v29; // x9
  UnityEngine_Purchasing_IAppleExtensions_c **v30; // x10
  __int64 v31; // x0
  System_Enum_o v32; // [xsp+8h] [xbp-38h] BYREF
  int32_t platform; // [xsp+18h] [xbp-28h]

  v2 = (Il2CppObject *)this;
  if ( (byte_4A4DDF6 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_bool__string__TypeInfo, method);
    sub_1B863B8(&UnityEngine_Application_TypeInfo, v3);
    sub_1B863B8(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v4);
    sub_1B863B8(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___, v5);
    sub_1B863B8(&Method_PurchaseLogic__RestorePurchases_b__34_0__, v6);
    sub_1B863B8(&PurchaseLogic_TypeInfo, v7);
    sub_1B863B8(&UnityEngine_RuntimePlatform_TypeInfo, v8);
    sub_1B863B8(&StringLiteral_11184/*"RestorePurchases FAIL. Not supported on this platform. Current = "*/, v9);
    sub_1B863B8(&StringLiteral_11186/*"RestorePurchases started ..."*/, v10);
    this = (PurchaseLogic_o *)sub_1B863B8(&StringLiteral_11183/*"RestorePurchases FAIL. Not initialized."*/, v11);
    byte_4A4DDF6 = 1;
  }
  if ( (byte_4A4DDEF & 1) == 0 )
  {
    this = (PurchaseLogic_o *)sub_1B863B8(&PurchaseLogic_TypeInfo, method);
    byte_4A4DDEF = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    monitor = v2[3].monitor;
    if ( monitor )
    {
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD))monitor + 3))(
        *((_QWORD *)monitor + 8),
        StringLiteral_11183/*"RestorePurchases FAIL. Not initialized."*/,
        *((_QWORD *)monitor + 5));
      return;
    }
    goto LABEL_35;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  this = (PurchaseLogic_o *)UnityEngine_Application__get_platform(0LL);
  if ( (_DWORD)this != 8 )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    this = (PurchaseLogic_o *)UnityEngine_Application__get_platform(0LL);
    if ( (_DWORD)this != 1 )
    {
      v23 = v2[3].monitor;
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      platform = UnityEngine_Application__get_platform(0LL);
      v32.klass = (System_Enum_c *)UnityEngine_RuntimePlatform_TypeInfo;
      v32.monitor = (void *)-1LL;
      v24 = System_Enum__ToString(&v32, 0LL);
      this = (PurchaseLogic_o *)System_String__Concat_61645176((System_String_o *)StringLiteral_11184/*"RestorePurchases FAIL. Not supported on this platform. Current = "*/, v24, 0LL);
      if ( v23 )
      {
        (*((void (__fastcall **)(_QWORD, PurchaseLogic_o *, _QWORD))v23 + 3))(
          *((_QWORD *)v23 + 8),
          this,
          *((_QWORD *)v23 + 5));
        return;
      }
LABEL_35:
      sub_1B86614(this, method);
    }
  }
  v13 = v2[3].monitor;
  if ( !v13 )
    goto LABEL_35;
  this = (PurchaseLogic_o *)(*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))v13 + 3))(
                              *((_QWORD *)v13 + 8),
                              StringLiteral_11186/*"RestorePurchases started ..."*/,
                              *((_QWORD *)v13 + 5));
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    goto LABEL_35;
  klass = storeExtensionProvider->klass;
  v16 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v17 = *(unsigned __int16 *)(&storeExtensionProvider->klass->_2.bitflags2 + 3);
  v18 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 4);
  v19 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 40);
  if ( *(_WORD *)(&storeExtensionProvider->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v18 )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_19;
    }
    p_method = (__int64)&klass->vtable[*p_offset + (int)v19].method;
  }
  else
  {
LABEL_19:
    p_method = sub_1BD6B4C(storeExtensionProvider, v18, v19);
  }
  v25 = sub_1B864EC(*(_QWORD *)(p_method + 8), v16);
  v26 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, __int64))(v25 + 8))(
          storeExtensionProvider,
          v25);
  v27 = (System_Action_bool__object__o *)sub_1B86604(System_Action_bool__string__TypeInfo);
  System_Action_bool__object____ctor(v27, v2, Method_PurchaseLogic__RestorePurchases_b__34_0__, 0LL);
  if ( !v26 )
    goto LABEL_35;
  v28 = *(_QWORD *)v26;
  v29 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
  {
    v30 = (UnityEngine_Purchasing_IAppleExtensions_c **)(*(_QWORD *)(v28 + 176) + 8LL);
    while ( *(v30 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      --v29;
      v30 += 2;
      if ( !v29 )
        goto LABEL_32;
    }
    v31 = v28 + 16LL * (*(_DWORD *)v30 + 1) + 312;
  }
  else
  {
LABEL_32:
    v31 = sub_1BD6B4C(v26, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(__int64, System_Action_bool__object__o *, _QWORD))v31)(v26, v27, *(_QWORD *)(v31 + 8));
}


void __fastcall PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        System_Collections_Generic_List_string__o *deferredPurchaseProductIdList,
        const MethodInfo *method)
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
  __int64 v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t current; // w1
  System_String_o **v22; // x20
  System_String_o *v23; // x0
  PurchaseBehaviour_c *v24; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_object__bool__o *v26; // x23
  System_String_o *v27; // x21
  System_String_o *a; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A4DE0D & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_string___, deferredPurchaseProductIdList);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_1B863B8(&System_Func_string__bool__TypeInfo, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v8);
    sub_1B863B8(&PurchaseBehaviour_TypeInfo, v9);
    sub_1B863B8(&string_TypeInfo, v10);
    sub_1B863B8(&Method_PurchaseLogic___c__DisplayClass80_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__, v11);
    sub_1B863B8(&PurchaseLogic___c__DisplayClass80_0_TypeInfo, v12);
    sub_1B863B8(&StringLiteral_1503/*";"*/, v13);
    sub_1B863B8(&StringLiteral_1/*""*/, v14);
    sub_1B863B8(&StringLiteral_5182/*"DeferredPurchaseProductIds"*/, v15);
    byte_4A4DE0D = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( deferredPurchaseProductIdList )
  {
    a = (System_String_o *)StringLiteral_1/*""*/;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      (System_Collections_Generic_List_object__o *)deferredPurchaseProductIdList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v30 = v29;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v16 = sub_1B86604(PurchaseLogic___c__DisplayClass80_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v16, 0LL);
      if ( !v16 )
        sub_1B86614(v17, v18);
      current = (int32_t)v30.fields._current;
      *(_QWORD *)(v16 + 16) = v30.fields._current;
      v22 = (System_String_o **)(v16 + 16);
      sub_1B8635C((CGThumbnailListItem_o *)(v16 + 16), current, v19, v20);
      if ( *(_QWORD *)(v16 + 16) )
      {
        v23 = System_String__Trim(*(System_String_o **)(v16 + 16), 0LL);
        if ( !System_String__op_Equality(v23, string_TypeInfo->static_fields->Empty, 0LL) )
        {
          v24 = PurchaseBehaviour_TypeInfo;
          if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
            v24 = PurchaseBehaviour_TypeInfo;
          }
          ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v24->static_fields->ConsumableProductIdCollection;
          v26 = (System_Func_object__bool__o *)sub_1B86604(System_Func_string__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v26,
            (Il2CppObject *)v16,
            Method_PurchaseLogic___c__DisplayClass80_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__,
            0LL);
          if ( BasicHelper__Any_object_(
                 ConsumableProductIdCollection,
                 (System_Func_T__bool__o *)v26,
                 (const MethodInfo_2F57CB4 *)Method_BasicHelper_Any_string___) )
          {
            if ( System_String__op_Inequality(a, string_TypeInfo->static_fields->Empty, 0LL) )
              v27 = System_String__Concat_61645176(a, (System_String_o *)StringLiteral_1503/*";"*/, 0LL);
            else
              v27 = a;
            a = System_String__Concat_61645176(v27, *v22, 0LL);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( System_String__IsNullOrEmpty(a, 0LL) )
      UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5182/*"DeferredPurchaseProductIds"*/, 0LL);
    else
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_5182/*"DeferredPurchaseProductIds"*/, a, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall PurchaseLogic__SavePreparePurchaseShopIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        System_Collections_Generic_List_string__o *shopIdList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x19
  Il2CppObject *current; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x21
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A4DE11 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, shopIdList);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v6);
    sub_1B863B8(&string_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_10566/*"PreparePurchaseShopIds"*/, v8);
    sub_1B863B8(&StringLiteral_1503/*";"*/, v9);
    sub_1B863B8(&StringLiteral_1/*""*/, v10);
    byte_4A4DE11 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( shopIdList )
  {
    v11 = (System_String_o *)StringLiteral_1/*""*/;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)shopIdList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v16 = v15;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v16.fields._current;
      if ( v16.fields._current )
      {
        v13 = System_String__Trim((System_String_o *)v16.fields._current, 0LL);
        if ( !System_String__op_Equality(v13, string_TypeInfo->static_fields->Empty, 0LL) )
        {
          if ( System_String__op_Inequality(v11, string_TypeInfo->static_fields->Empty, 0LL) )
            v14 = System_String__Concat_61645176(v11, (System_String_o *)StringLiteral_1503/*";"*/, 0LL);
          else
            v14 = v11;
          v11 = System_String__Concat_61645176(v14, (System_String_o *)current, 0LL);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( System_String__IsNullOrEmpty(v11, 0LL) )
      UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10566/*"PreparePurchaseShopIds"*/, 0LL);
    else
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10566/*"PreparePurchaseShopIds"*/, v11, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall PurchaseLogic__SendPurchaseAction(
        PurchaseLogic_o *this,
        System_String_o *paymentProductId,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BankShopEntity_array *Instance; // x0
  __int64 v10; // x1
  int max_length; // w8
  BankShopEntity_array *v12; // x21
  unsigned int v13; // w22
  BankShopEntity_o *v14; // x23
  int32_t id; // w20
  int googlePrice; // w21

  if ( (byte_4A4DE05 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_BankShopMaster___, paymentProductId);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B863B8(&StringLiteral_8011/*"JPY"*/, v8);
    byte_4A4DE05 = 1;
  }
  Instance = (BankShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (BankShopEntity_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = BankShopMaster__GetEnableEntitiyList((BankShopMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_18;
  max_length = Instance->max_length;
  v12 = Instance;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1B8661C(Instance, v10);
      v14 = v12->m_Items[v13];
      if ( !v14 || !paymentProductId )
        goto LABEL_18;
      Instance = (BankShopEntity_array *)System_String__Equals_61680480(paymentProductId, v14->fields.googleShopId, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        return;
    }
    id = v14->fields.id;
    if ( (id & 0x80000000) == 0 )
    {
      googlePrice = v14->fields.googlePrice;
      Instance = (BankShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Instance )
      {
        AdManager__TrackPurchase(
          (AdManager_o *)Instance,
          id,
          (double)googlePrice,
          (System_String_o *)StringLiteral_8011/*"JPY"*/,
          transactionId,
          0LL);
        return;
      }
LABEL_18:
      sub_1B86614(Instance, v10);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__SendReceiptData(
        PurchaseLogic_o *this,
        PurchaseLogic_ReceiptContents_o *receiptContents,
        System_String_o *currentTransactionId,
        int32_t storeError,
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
  System_String_o *v18; // x0
  __int64 v19; // x1
  struct System_Action_string__o *logOutputAction; // x22
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  NetworkManager_c *v24; // x0
  NetworkManager_ResultCallbackFunc_o *v25; // x22
  Il2CppObject *Request_object; // x0
  System_String_o *payloadJsonStr; // x23
  System_String_o *googleSignatureStr; // x21
  System_String_o *v29; // x22
  struct System_String_o **p_googleSignatureStr; // t2
  PurchaseByBank_UnityIap_Request_o *v31; // x24
  System_Action_object__o *v32; // x25
  struct System_Action_string__o *logErrorOutputAction; // x20
  NetworkManager_c *v34; // x0
  System_String_o *v35; // x0
  const MethodInfo *v36; // x2
  int64_t userIdNumber; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A4DDFC & 1) == 0 )
  {
    sub_1B863B8(&System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo, receiptContents);
    sub_1B863B8(&Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___, v9);
    sub_1B863B8(&NetworkManager_TypeInfo, v10);
    sub_1B863B8(&Method_PurchaseLogic_OnEndSendReceiptData__, v11);
    sub_1B863B8(&Method_PurchaseLogic__SendReceiptData_b__42_0__, v12);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    sub_1B863B8(&StringLiteral_24299/*"user_id_error"*/, v14);
    sub_1B863B8(&StringLiteral_10641/*"PurchaseLogic:SendReceiptData ["*/, v15);
    sub_1B863B8(&StringLiteral_15000/*"UserId error: UserId="*/, v16);
    sub_1B863B8(&StringLiteral_15836/*"]"*/, v17);
    byte_4A4DDFC = 1;
  }
  userIdNumber = 0LL;
  this->fields._currentTransactionId = currentTransactionId;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._currentTransactionId,
    (int32_t)currentTransactionId,
    (int32_t)currentTransactionId,
    *(const MethodInfo **)&storeError);
  if ( !receiptContents )
    goto LABEL_25;
  logOutputAction = this->fields._logOutputAction;
  v18 = System_String__Concat_61683424(
          (System_String_o *)StringLiteral_10641/*"PurchaseLogic:SendReceiptData ["*/,
          receiptContents->fields.payloadJsonStr,
          (System_String_o *)StringLiteral_15836/*"]"*/,
          0LL);
  if ( !logOutputAction )
    goto LABEL_25;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))logOutputAction->fields.m_target)(
    logOutputAction->fields.original_method_info,
    v18,
    *(_QWORD *)&logOutputAction->fields.extra_arg);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v21);
    byte_4A48C25 = 1;
  }
  v24 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v24 = NetworkManager_TypeInfo;
  }
  if ( v24->static_fields->userIdNumber > 0 )
  {
    this->fields._purchaseResultArray = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields._purchaseResultArray, 0, v22, v23);
    v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v25,
      (Il2CppObject *)this,
      Method_PurchaseLogic_OnEndSendReceiptData__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v25,
                       (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___);
    payloadJsonStr = receiptContents->fields.payloadJsonStr;
    p_googleSignatureStr = &receiptContents->fields.googleSignatureStr;
    googleSignatureStr = receiptContents->fields.googleSignatureStr;
    v29 = p_googleSignatureStr[1];
    v31 = (PurchaseByBank_UnityIap_Request_o *)Request_object;
    v32 = (System_Action_object__o *)sub_1B86604(System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo);
    System_Action_object____ctor(v32, (Il2CppObject *)this, Method_PurchaseLogic__SendReceiptData_b__42_0__, 0LL);
    if ( v31 )
    {
      PurchaseByBank_UnityIap_Request__beginRequest(
        v31,
        v29,
        payloadJsonStr,
        storeError,
        googleSignatureStr,
        (System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____o *)v32,
        0LL);
      return;
    }
LABEL_25:
    sub_1B86614(v18, v19);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  if ( !v24->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v24);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v21);
    byte_4A48C25 = 1;
  }
  v34 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v34 = NetworkManager_TypeInfo;
  }
  userIdNumber = v34->static_fields->userIdNumber;
  v35 = System_Int64__ToString((int64_t)&userIdNumber, 0LL);
  v18 = System_String__Concat_61645176((System_String_o *)StringLiteral_15000/*"UserId error: UserId="*/, v35, 0LL);
  if ( !logErrorOutputAction )
    goto LABEL_25;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))logErrorOutputAction->fields.m_target)(
    logErrorOutputAction->fields.original_method_info,
    v18,
    *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
  PurchaseLogic__OnEndSendReceiptData(this, (System_String_o *)StringLiteral_24299/*"user_id_error"*/, v36);
}


void __fastcall PurchaseLogic__SetAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogic_o *this,
        bool isInitialized,
        const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic__SetCachedObfuscatedAccountId(
        PurchaseLogic_o *this,
        System_String_o *obfuscatedAccountId,
        const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic__SetExistsDeferredPurchase(PurchaseLogic_o *this, bool exists, const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic__SetInitializedWithMismatchedObfuscatedAccountId(
        PurchaseLogic_o *this,
        bool isMismatched,
        const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic__SetObfuscatedAccountId(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_ConfigurationBuilder_o *builder,
        const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic__ShowPurchaseFailedNotification(
        PurchaseLogic_o *this,
        int32_t failureReason,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__UpdateMonthlyPurchasePrice(
        PurchaseLogic_o *this,
        int32_t bankShopId,
        const MethodInfo *method)
{
  int32_t CumulativeAmount; // w21
  int32_t v6; // w0

  if ( (byte_4A4DE00 & 1) == 0 )
  {
    sub_1B863B8(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&bankShopId);
    byte_4A4DE00 = 1;
  }
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  CumulativeAmount = AgeVerificationMenu__GetCumulativeAmount(0LL);
  v6 = ((__int64 (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._21_GetPrice.method)(
         this,
         (unsigned int)bankShopId,
         this->klass->vtable._22_GetAddedStoneNum.methodPtr)
     + CumulativeAmount;
  AgeVerificationMenu__SaveCumulativeAmount(v6, 0LL);
}


void __fastcall PurchaseLogic__ValidateReceipt(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  PurchaseLogic_ReceiptContents_o *IsAppleDevice; // x0
  __int64 v6; // x1
  System_String_o *transactionID_k__BackingField; // x21
  PurchaseLogic_ReceiptContents_o *v8; // x20
  const MethodInfo *v9; // x4

  IsAppleDevice = (PurchaseLogic_ReceiptContents_o *)((__int64 (__fastcall *)(PurchaseLogic_o *, UnityEngine_Purchasing_Product_o *, Il2CppMethodPointer))this->klass->vtable._19_ExtractReceiptContents.method)(
                                                       this,
                                                       product,
                                                       this->klass->vtable._20_UpdateMonthlyPurchasePrice.methodPtr);
  if ( !product )
    goto LABEL_7;
  transactionID_k__BackingField = product->fields._transactionID_k__BackingField;
  v8 = IsAppleDevice;
  IsAppleDevice = (PurchaseLogic_ReceiptContents_o *)PurchaseLogic__IsAppleDevice((const MethodInfo *)IsAppleDevice);
  if ( ((unsigned __int8)IsAppleDevice & 1) == 0 )
    goto LABEL_6;
  if ( !v8 )
LABEL_7:
    sub_1B86614(IsAppleDevice, v6);
  if ( v8->fields.isIOSOldStyleReceipt )
    transactionID_k__BackingField = v8->fields.iOSOldStyleTransactionId;
LABEL_6:
  PurchaseLogic__SendReceiptData(this, v8, transactionID_k__BackingField, 0, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic___RestorePurchases_b__34_0(
        PurchaseLogic_o *this,
        bool result,
        System_String_o *errorMessage,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Action_string__o *logOutputAction; // x21
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  struct System_Action_string__o *v13; // x20
  bool v14; // [xsp+Ch] [xbp-34h] BYREF

  v14 = result;
  if ( (byte_4A4DE15 & 1) == 0 )
  {
    sub_1B863B8(&bool_TypeInfo, result);
    sub_1B863B8(&StringLiteral_11185/*"RestorePurchases continuing: "*/, v6);
    sub_1B863B8(&StringLiteral_994/*". If no further messages, no purchases available to restore."*/, v7);
    sub_1B863B8(&StringLiteral_18833/*"error: "*/, v8);
    byte_4A4DE15 = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v10 = System_Boolean__ToString((bool)&v14, 0LL);
  v11 = System_String__Concat_61683424(
          (System_String_o *)StringLiteral_11185/*"RestorePurchases continuing: "*/,
          v10,
          (System_String_o *)StringLiteral_994/*". If no further messages, no purchases available to restore."*/,
          0LL);
  if ( !logOutputAction )
    goto LABEL_10;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))logOutputAction->fields.m_target)(
    logOutputAction->fields.original_method_info,
    v11,
    *(_QWORD *)&logOutputAction->fields.extra_arg);
  if ( v14 )
    return;
  v13 = this->fields._logOutputAction;
  v11 = System_String__Concat_61645176((System_String_o *)StringLiteral_18833/*"error: "*/, errorMessage, 0LL);
  if ( !v13 )
LABEL_10:
    sub_1B86614(v11, v12);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))v13->fields.m_target)(
    v13->fields.original_method_info,
    v11,
    *(_QWORD *)&v13->fields.extra_arg);
}


void __fastcall PurchaseLogic___SendReceiptData_b__42_0(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._purchaseResultArray = purchaseResultArray;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._purchaseResultArray,
    (int32_t)purchaseResultArray,
    (int32_t)method,
    v3);
}


void __fastcall PurchaseLogic__set_BuyProductFinishedAction(
        PurchaseLogic_o *this,
        PurchaseLogic_ProductFinishedAction_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._buyProductFinishedAction = value;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._buyProductFinishedAction, (int32_t)value, (int32_t)method, v3);
}


void __fastcall PurchaseLogic__set_LogErrorOutputAction(
        PurchaseLogic_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._logErrorOutputAction = value;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._logErrorOutputAction, (int32_t)value, (int32_t)method, v3);
}


void __fastcall PurchaseLogic__set_LogErrorOutputActionSampledByRatio(
        PurchaseLogic_o *this,
        System_Action_string__float__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._logErrorOutputActionSampledByRatio = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._logErrorOutputActionSampledByRatio,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PurchaseLogic__set_LogOutputAction(
        PurchaseLogic_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._logOutputAction = value;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._logOutputAction, (int32_t)value, (int32_t)method, v3);
}


void __fastcall PurchaseLogic__set_SendReportOutputAction(
        PurchaseLogic_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._sendReportOutputAction = value;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._sendReportOutputAction, (int32_t)value, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic_ProductFinishedAction___ctor(
        PurchaseLogic_ProductFinishedAction_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 6 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D3228;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D31A0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PurchaseLogic_ProductFinishedAction__BeginInvoke(
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  _QWORD v30[7]; // [xsp+0h] [xbp-90h] BYREF
  char v31[4]; // [xsp+38h] [xbp-58h] BYREF
  int32_t v32; // [xsp+3Ch] [xbp-54h] BYREF
  int32_t v33; // [xsp+40h] [xbp-50h] BYREF
  int32_t v34; // [xsp+44h] [xbp-4Ch] BYREF
  int32_t v35; // [xsp+48h] [xbp-48h] BYREF
  int32_t v36; // [xsp+4Ch] [xbp-44h] BYREF

  v35 = perMonthAmount;
  v36 = purchaseResult;
  v33 = chargeStoneNum;
  v34 = freeStoneNum;
  v32 = shopId;
  v31[0] = isSentGift;
  if ( (byte_4A4DE16 & 1) == 0 )
  {
    sub_1B863B8(&bool_TypeInfo, *(_QWORD *)&purchaseResult);
    sub_1B863B8(&int_TypeInfo, v12);
    sub_1B863B8(&PurchaseBehaviour_Result_TypeInfo, v13);
    byte_4A4DE16 = 1;
  }
  v30[6] = 0LL;
  v30[0] = j_il2cpp_value_box_0(
             PurchaseBehaviour_Result_TypeInfo,
             &v36,
             *(_QWORD *)&perMonthAmount,
             *(_QWORD *)&freeStoneNum,
             *(_QWORD *)&chargeStoneNum);
  v30[1] = j_il2cpp_value_box_0(int_TypeInfo, &v35, v14, v15, v16);
  v30[2] = j_il2cpp_value_box_0(int_TypeInfo, &v34, v17, v18, v19);
  v30[3] = j_il2cpp_value_box_0(int_TypeInfo, &v33, v20, v21, v22);
  v30[4] = j_il2cpp_value_box_0(int_TypeInfo, &v32, v23, v24, v25);
  v30[5] = j_il2cpp_value_box_0(bool_TypeInfo, v31, v26, v27, v28);
  return (System_IAsyncResult_o *)sub_1B8636C(this, v30, callback, object);
}


void __fastcall PurchaseLogic_ProductFinishedAction__EndInvoke(
        PurchaseLogic_ProductFinishedAction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
}


void __fastcall PurchaseLogic_ProductFinishedAction__Invoke(
        PurchaseLogic_ProductFinishedAction_o *this,
        int32_t purchaseResult,
        int32_t perMonthAmount,
        int32_t freeStoneNum,
        int32_t chargeStoneNum,
        int32_t shopId,
        bool isSentGift,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, int32_t, int32_t, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    purchaseResult,
    perMonthAmount,
    freeStoneNum,
    chargeStoneNum,
    shopId,
    isSentGift,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall PurchaseLogic_ReceiptContents___ctor(PurchaseLogic_ReceiptContents_o *this, const MethodInfo *method)
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

  if ( (byte_4A4DE17 & 1) == 0 )
  {
    sub_1B863B8(&string_TypeInfo, method);
    byte_4A4DE17 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.payloadJsonStr = static_fields->Empty;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)Empty, v2, v3);
  v7 = string_TypeInfo->static_fields;
  v8 = v7->Empty;
  this->fields.googleSignatureStr = v7->Empty;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.googleSignatureStr, (int32_t)v8, v9, v10);
  v11 = string_TypeInfo->static_fields;
  v12 = v11->Empty;
  this->fields.receiptBase64Str = v11->Empty;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.receiptBase64Str, (int32_t)v12, v13, v14);
  v15 = string_TypeInfo->static_fields;
  v16 = v15->Empty;
  this->fields.purchaseToken = v15->Empty;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.purchaseToken, (int32_t)v16, v17, v18);
  v19 = string_TypeInfo->static_fields;
  v20 = v19->Empty;
  this->fields.iOSOldStyleTransactionId = v19->Empty;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.iOSOldStyleTransactionId, (int32_t)v20, v21, v22);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4DE18 & 1) == 0 )
  {
    sub_1B863B8(&PurchaseLogic___c_TypeInfo, v1);
    byte_4A4DE18 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(PurchaseLogic___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PurchaseLogic___c_TypeInfo->static_fields->__9 = (struct PurchaseLogic___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)PurchaseLogic___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall PurchaseLogic___c___ctor(PurchaseLogic___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogic___c____ctor_b__87_0(
        PurchaseLogic___c_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic___c____ctor_b__87_1(
        PurchaseLogic___c_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x19

  if ( (byte_4A4DE19 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Debug_TypeInfo, str);
    sub_1B863B8(&StringLiteral_15727/*"[UnityIAP]課金エラー:"*/, v4);
    byte_4A4DE19 = 1;
  }
  v5 = (Il2CppObject *)System_String__Concat_61645176((System_String_o *)StringLiteral_15727/*"[UnityIAP]課金エラー:"*/, str, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v5, 0LL);
}


void __fastcall PurchaseLogic___c____ctor_b__87_2(
        PurchaseLogic___c_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4A4DE1A & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, str);
    sub_1B863B8(&StringLiteral_15727/*"[UnityIAP]課金エラー:"*/, v4);
    byte_4A4DE1A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  v6 = System_String__Concat_61645176((System_String_o *)StringLiteral_15727/*"[UnityIAP]課金エラー:"*/, str, 0LL);
  if ( !Instance )
    sub_1B86614(v6, v7);
  CrashReporter__SendReport_30368068((CrashReporter_o *)Instance, v6, 0LL, 0LL, 0LL);
}


void __fastcall PurchaseLogic___c____ctor_b__87_3(
        PurchaseLogic___c_o *this,
        System_String_o *str,
        float ratio,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  float v8; // s0
  System_String_o *v9; // x0
  Il2CppObject *v10; // x19
  float v11; // [xsp+Ch] [xbp-34h] BYREF

  v11 = ratio;
  if ( (byte_4A4DE1B & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Debug_TypeInfo, str);
    sub_1B863B8(&StringLiteral_15726/*"[UnityIAP]課金エラー(ratio:"*/, v6);
    sub_1B863B8(&StringLiteral_786/*"):"*/, v7);
    byte_4A4DE1B = 1;
  }
  v8 = UnityEngine_Random__Range(0.0, 1.0, 0LL);
  if ( v8 < ratio )
  {
    v9 = System_Single__ToString(v8, (const MethodInfo *)&v11);
    v10 = (Il2CppObject *)System_String__Concat_61685428(
                            (System_String_o *)StringLiteral_15726/*"[UnityIAP]課金エラー(ratio:"*/,
                            v9,
                            (System_String_o *)StringLiteral_786/*"):"*/,
                            str,
                            0LL);
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogError(v10, 0LL);
  }
}


void __fastcall PurchaseLogic___c___CheckBankStatusAndMonthlyLimit_b__32_0(
        PurchaseLogic___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic___c___CheckBankStatusAndMonthlyLimit_b__32_1(
        PurchaseLogic___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall PurchaseLogic___c___IsServerCommitedPurchase_b__43_0(
        PurchaseLogic___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.isCommitedAlready;
}


void __fastcall PurchaseLogic___c__DisplayClass29_0___ctor(
        PurchaseLogic___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogic___c__DisplayClass29_0___PurchaseIfAvailable_b__0(
        PurchaseLogic___c__DisplayClass29_0_o *this,
        System_String_o *requestResultStr,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  uint64_t _4__this; // x0
  int32_t v13; // w20
  struct PurchaseLogic_o *v14; // x8
  struct UnityEngine_Purchasing_Product_o *product; // x9
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x9
  struct System_Action_string__o *logOutputAction; // x20
  struct PurchaseLogic_o *v18; // x20
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x20
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  struct UnityEngine_Purchasing_Product_o *v21; // x19
  __int64 v22; // x9
  UnityEngine_Purchasing_IStoreController_c **p_offset; // x10
  __int64 p_method; // x0
  struct PurchaseLogic_o *v25; // x8
  struct System_Action_string__o *logErrorOutputAction; // x20
  System_String_o *v27; // x0
  const MethodInfo *v28; // x7
  System_Enum_o v29; // [xsp+8h] [xbp-38h] BYREF
  int v30; // [xsp+18h] [xbp-28h]

  if ( (byte_4A4DE1C & 1) == 0 )
  {
    sub_1B863B8(&AgeVerificationMenu_TypeInfo, requestResultStr);
    sub_1B863B8(&UnityEngine_Purchasing_IStoreController_TypeInfo, v6);
    sub_1B863B8(&NetworkManager_TypeInfo, v7);
    sub_1B863B8(&PurchaseLogic_PurchaseAvailablilty_TypeInfo, v8);
    sub_1B863B8(&PurchaseLogic_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_10645/*"Purchasing product asychronously: '{0}'"*/, v10);
    sub_1B863B8(&StringLiteral_14733/*"Unexpected PurchaseAvailablilty value: "*/, v11);
    byte_4A4DE1C = 1;
  }
  _4__this = (uint64_t)this->fields.__4__this;
  if ( !_4__this )
LABEL_29:
    sub_1B86614(_4__this, requestResultStr);
  _4__this = PurchaseLogic__CheckBankStatusAndMonthlyLimit(
               (PurchaseLogic_o *)_4__this,
               requestResultStr,
               this->fields.price,
               v3);
  v13 = 10;
  switch ( (int)_4__this )
  {
    case 1:
      v14 = this->fields.__4__this;
      if ( !v14 )
        goto LABEL_29;
      product = this->fields.product;
      if ( !product )
        goto LABEL_29;
      definition_k__BackingField = product->fields._definition_k__BackingField;
      if ( !definition_k__BackingField )
        goto LABEL_29;
      logOutputAction = v14->fields._logOutputAction;
      _4__this = (uint64_t)System_String__Format(
                             (System_String_o *)StringLiteral_10645/*"Purchasing product asychronously: '{0}'"*/,
                             (Il2CppObject *)definition_k__BackingField->fields._id_k__BackingField,
                             0LL);
      if ( !logOutputAction )
        goto LABEL_29;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, uint64_t, _QWORD))logOutputAction->fields.m_target)(
        logOutputAction->fields.original_method_info,
        _4__this,
        *(_QWORD *)&logOutputAction->fields.extra_arg);
      v18 = this->fields.__4__this;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      _4__this = NetworkManager__getDateTime(0LL).fields._dateData;
      if ( !v18 )
        goto LABEL_29;
      v18->fields._purchaseStartTime.fields._dateData = _4__this;
      storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
      if ( !storeController )
        goto LABEL_29;
      klass = storeController->klass;
      v21 = this->fields.product;
      v22 = *(unsigned __int16 *)(&storeController->klass->_2.bitflags2 + 3);
      if ( !*(_WORD *)(&storeController->klass->_2.bitflags2 + 3) )
        goto LABEL_17;
      p_offset = (UnityEngine_Purchasing_IStoreController_c **)&klass->_1.interfaceOffsets->offset;
      break;
    case 2:
      v13 = 9;
      goto LABEL_23;
    case 3:
      goto LABEL_23;
    case 4:
      goto LABEL_21;
    default:
      v25 = this->fields.__4__this;
      if ( !v25 )
        goto LABEL_29;
      logErrorOutputAction = v25->fields._logErrorOutputAction;
      v30 = _4__this;
      v29.klass = (System_Enum_c *)PurchaseLogic_PurchaseAvailablilty_TypeInfo;
      v29.monitor = (void *)-1LL;
      v27 = System_Enum__ToString(&v29, 0LL);
      _4__this = (uint64_t)System_String__Concat_61645176((System_String_o *)StringLiteral_14733/*"Unexpected PurchaseAvailablilty value: "*/, v27, 0LL);
      if ( !logErrorOutputAction )
        goto LABEL_29;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, uint64_t, _QWORD))logErrorOutputAction->fields.m_target)(
        logErrorOutputAction->fields.original_method_info,
        _4__this,
        *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
LABEL_21:
      v13 = 7;
LABEL_23:
      if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
      _4__this = AgeVerificationMenu__GetCumulativeAmount(0LL);
      if ( !this->fields.__4__this )
        goto LABEL_29;
      PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(
        this->fields.__4__this,
        v13,
        _4__this,
        0,
        0,
        this->fields.shopId,
        0,
        v28);
      return;
  }
  while ( *(p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
  {
    --v22;
    p_offset += 2;
    if ( !v22 )
    {
LABEL_17:
      p_method = sub_1BD6B4C(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 1LL);
      goto LABEL_28;
    }
  }
  p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
LABEL_28:
  (*(void (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, struct UnityEngine_Purchasing_Product_o *, _QWORD))p_method)(
    storeController,
    v21,
    *(_QWORD *)(p_method + 8));
}


void __fastcall PurchaseLogic___c__DisplayClass29_0___PurchaseIfAvailable_b__1(
        PurchaseLogic___c__DisplayClass29_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PurchaseLogic_o *CumulativeAmount; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  PurchaseLogic_o *_4__this; // x19
  const MethodInfo *v10; // x7

  if ( (byte_4A4DE1D & 1) == 0 )
  {
    sub_1B863B8(&AgeVerificationMenu_TypeInfo, result);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v5);
    byte_4A4DE1D = 1;
  }
  CumulativeAmount = (PurchaseLogic_o *)System_String__op_Inequality(
                                          result,
                                          (System_String_o *)StringLiteral_21893/*"ng"*/,
                                          0LL);
  if ( ((unsigned __int8)CumulativeAmount & 1) != 0 )
  {
    if ( this->fields.__4__this )
    {
      PurchaseLogic__RequestGameServerBankStatus(CumulativeAmount, this->fields.checkBankStatusCallback, v8);
      return;
    }
LABEL_10:
    sub_1B86614(CumulativeAmount, v7);
  }
  _4__this = this->fields.__4__this;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  CumulativeAmount = (PurchaseLogic_o *)AgeVerificationMenu__GetCumulativeAmount(0LL);
  if ( !_4__this )
    goto LABEL_10;
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(_4__this, 9, (int32_t)CumulativeAmount, 0, 0, 0, 0, v10);
}


void __fastcall PurchaseLogic___c__DisplayClass45_0___ctor(
        PurchaseLogic___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogic___c__DisplayClass45_0___GetFirstPurchaseResult_b__0(
        PurchaseLogic___c__DisplayClass45_0_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return System_String__op_Equality(x->fields.transactionId, this->fields.transactionId, 0LL);
}


void __fastcall PurchaseLogic___c__DisplayClass47_0___ctor(
        PurchaseLogic___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogic___c__DisplayClass47_0___OnEndPaymentStore_b__0(
        PurchaseLogic___c__DisplayClass47_0_o *this,
        UnityEngine_Purchasing_Product_o *p,
        const MethodInfo *method)
{
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8

  if ( !p )
    return 0;
  definition_k__BackingField = p->fields._definition_k__BackingField;
  if ( !definition_k__BackingField )
    sub_1B86614(this, p);
  return System_String__op_Equality(definition_k__BackingField->fields._id_k__BackingField, this->fields.productId, 0LL);
}


void __fastcall PurchaseLogic___c__DisplayClass60_0___ctor(
        PurchaseLogic___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogic___c__DisplayClass60_0___ProcessPurchase_b__0(
        PurchaseLogic___c__DisplayClass60_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  struct UnityEngine_Purchasing_Product_o *product; // x8
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8

  product = this->fields.product;
  if ( !product || (definition_k__BackingField = product->fields._definition_k__BackingField) == 0LL )
    sub_1B86614(this, id);
  return System_String__Equals_61681284(definition_k__BackingField->fields._id_k__BackingField, id, 4, 0LL);
}


void __fastcall PurchaseLogic___c__DisplayClass61_0___ctor(
        PurchaseLogic___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogic___c__DisplayClass61_0___OnPurchaseFailed_b__0(
        PurchaseLogic___c__DisplayClass61_0_o *this,
        BankShopEntity_o *bankShop,
        const MethodInfo *method)
{
  if ( !bankShop )
    sub_1B86614(this, 0LL);
  return System_String__Equals_61681284(this->fields.productId, bankShop->fields.googleShopId, 4, 0LL);
}


void __fastcall PurchaseLogic___c__DisplayClass80_0___ctor(
        PurchaseLogic___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogic___c__DisplayClass80_0___SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0(
        PurchaseLogic___c__DisplayClass80_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  return System_String__Equals_61681284(id, this->fields.idStr, 4, 0LL);
}


void __fastcall PurchaseLogic___c__DisplayClass82_0___ctor(
        PurchaseLogic___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogic___c__DisplayClass82_0___RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0(
        PurchaseLogic___c__DisplayClass82_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  return System_String__op_Equality(id, this->fields.productId, 0LL);
}


void __fastcall PurchaseLogic___c__DisplayClass86_0___ctor(
        PurchaseLogic___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogic___c__DisplayClass86_0___RemovePreparePurchaseShopIdsInPlayerPrefs_b__0(
        PurchaseLogic___c__DisplayClass86_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  return System_String__op_Equality(id, this->fields.shopIdStr, 0LL);
}