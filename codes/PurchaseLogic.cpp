void __fastcall PurchaseLogic___ctor(PurchaseLogic_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t v20; // w3
  PurchaseLogic___c_c *v21; // x0
  System_Action_object__o *_9__83_0; // x20
  Il2CppObject *v23; // x21
  struct PurchaseLogic___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  __int64 v28; // x2
  int32_t v29; // w3
  PurchaseLogic___c_c *v30; // x0
  System_Action_object__o *_9__83_1; // x20
  Il2CppObject *v32; // x21
  struct PurchaseLogic___c_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x1
  __int64 v37; // x2
  int32_t v38; // w3
  PurchaseLogic___c_c *v39; // x0
  System_Action_T1__T2__o *_9__83_2; // x20
  Il2CppObject *v41; // x21
  struct PurchaseLogic___c_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3

  if ( (byte_49FBD15 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_string__TypeInfo, method);
    sub_1B640C8(&System_Action_string__float__TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Product___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_HashSet_Product__TypeInfo, v6);
    sub_1B640C8(&Method_PurchaseLogic___c___ctor_b__83_0__, v7);
    sub_1B640C8(&Method_PurchaseLogic___c___ctor_b__83_1__, v8);
    sub_1B640C8(&Method_PurchaseLogic___c___ctor_b__83_2__, v9);
    sub_1B640C8(&PurchaseLogic___c_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_1/*""*/, v11);
    byte_49FBD15 = 1;
  }
  v12 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                     System_Collections_Generic_HashSet_Product__TypeInfo,
                                                     method,
                                                     v2);
  System_Collections_Generic_HashSet_object____ctor(
    v12,
    (const MethodInfo_3369DD0 *)Method_System_Collections_Generic_HashSet_Product___ctor__);
  this->fields._pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v12, v13, v14);
  v15 = (int)StringLiteral_1/*""*/;
  this->fields._currentTransactionId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._currentTransactionId, v15, v16, v17);
  v21 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v21 = PurchaseLogic___c_TypeInfo;
  }
  _9__83_0 = (System_Action_object__o *)v21->static_fields->__9__83_0;
  if ( !_9__83_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = PurchaseLogic___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__83_0 = (System_Action_object__o *)sub_1B64314(System_Action_string__TypeInfo, v18, v19);
    System_Action_object____ctor(_9__83_0, v23, Method_PurchaseLogic___c___ctor_b__83_0__, 0LL);
    static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    static_fields->__9__83_0 = (struct System_Action_string__o *)_9__83_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__83_0, (int32_t)_9__83_0, v25, v26);
  }
  this->fields._logOutputAction = (struct System_Action_string__o *)_9__83_0;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._logOutputAction, (int32_t)_9__83_0, v19, v20);
  v30 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v30 = PurchaseLogic___c_TypeInfo;
  }
  _9__83_1 = (System_Action_object__o *)v30->static_fields->__9__83_1;
  if ( !_9__83_1 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = PurchaseLogic___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v30->static_fields->__9;
    _9__83_1 = (System_Action_object__o *)sub_1B64314(System_Action_string__TypeInfo, v27, v28);
    System_Action_object____ctor(_9__83_1, v32, Method_PurchaseLogic___c___ctor_b__83_1__, 0LL);
    v33 = PurchaseLogic___c_TypeInfo->static_fields;
    v33->__9__83_1 = (struct System_Action_string__o *)_9__83_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v33->__9__83_1, (int32_t)_9__83_1, v34, v35);
  }
  this->fields._logErrorOutputAction = (struct System_Action_string__o *)_9__83_1;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._logErrorOutputAction, (int32_t)_9__83_1, v28, v29);
  v39 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v39 = PurchaseLogic___c_TypeInfo;
  }
  _9__83_2 = (System_Action_T1__T2__o *)v39->static_fields->__9__83_2;
  if ( !_9__83_2 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = PurchaseLogic___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v39->static_fields->__9;
    _9__83_2 = (System_Action_T1__T2__o *)sub_1B64314(System_Action_string__float__TypeInfo, v36, v37);
    System_Action_object__float____ctor(_9__83_2, v41, Method_PurchaseLogic___c___ctor_b__83_2__, 0LL);
    v42 = PurchaseLogic___c_TypeInfo->static_fields;
    v42->__9__83_2 = (struct System_Action_string__float__o *)_9__83_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v42->__9__83_2, (int32_t)_9__83_2, v43, v44);
  }
  this->fields._logErrorOutputActionSampledByRatio = (struct System_Action_string__float__o *)_9__83_2;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._logErrorOutputActionSampledByRatio,
    (int32_t)_9__83_2,
    v37,
    v38);
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
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  System_Collections_Generic_List_object__o *v12; // x20
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  PurchaseLogic_o *v17; // x0
  const MethodInfo *v18; // x2

  if ( (byte_49FBD0F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Distinct_string___, productId);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_string___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v5);
    byte_49FBD0F = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(productId, 0LL);
  if ( !IsNullOrEmpty )
  {
    DeferredPurchaseProductIdsFromPlayerPrefs = (System_Collections_Generic_List_object__o *)PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                                                               (PurchaseLogic_o *)IsNullOrEmpty,
                                                                                               v7);
    if ( !DeferredPurchaseProductIdsFromPlayerPrefs
      || (items = DeferredPurchaseProductIdsFromPlayerPrefs->fields._items,
          v12 = DeferredPurchaseProductIdsFromPlayerPrefs,
          v13 = Method_System_Collections_Generic_List_string__Add__,
          ++DeferredPurchaseProductIdsFromPlayerPrefs->fields._version,
          !items) )
    {
      sub_1B64324(DeferredPurchaseProductIdsFromPlayerPrefs);
    }
    size = DeferredPurchaseProductIdsFromPlayerPrefs->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        DeferredPurchaseProductIdsFromPlayerPrefs,
        (Il2CppObject *)productId,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      v12->fields._size = size + 1;
      v15[4] = (Il2CppClass *)productId;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)productId, v9, v10);
    }
    v16 = System_Linq_Enumerable__Distinct_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v12,
            (const MethodInfo_2E57E58 *)Method_System_Linq_Enumerable_Distinct_string___);
    v17 = (PurchaseLogic_o *)System_Linq_Enumerable__ToList_object_(
                               v16,
                               (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_string___);
    PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(
      v17,
      (System_Collections_Generic_List_string__o *)v17,
      v18);
  }
}


void __fastcall PurchaseLogic__AddPendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *pendingProducts; // x0

  if ( (byte_49FBCF8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Product__Add__, product);
    byte_49FBCF8 = 1;
  }
  pendingProducts = (System_Collections_Generic_HashSet_T__o *)this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_1B64324(0LL);
  System_Collections_Generic_HashSet_object___Add(
    pendingProducts,
    (Il2CppObject *)product,
    (const MethodInfo_336AFB4 *)Method_System_Collections_Generic_HashSet_Product__Add__);
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
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  System_Collections_Generic_List_object__o *v12; // x19
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  PurchaseLogic_o *v17; // x0
  const MethodInfo *v18; // x2
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  v19 = shopId;
  if ( (byte_49FBD13 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Distinct_string___, *(_QWORD *)&shopId);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_string___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v5);
    byte_49FBD13 = 1;
  }
  if ( shopId >= 1 )
  {
    v6 = (PurchaseLogic_o *)System_Int32__ToString((int32_t)&v19, 0LL);
    PreparePurchaseShopIdsFromPlayerPrefs = (System_Collections_Generic_List_object__o *)PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs(
                                                                                           v6,
                                                                                           v7);
    if ( !PreparePurchaseShopIdsFromPlayerPrefs
      || (items = PreparePurchaseShopIdsFromPlayerPrefs->fields._items,
          v12 = PreparePurchaseShopIdsFromPlayerPrefs,
          v13 = Method_System_Collections_Generic_List_string__Add__,
          ++PreparePurchaseShopIdsFromPlayerPrefs->fields._version,
          !items) )
    {
      sub_1B64324(PreparePurchaseShopIdsFromPlayerPrefs);
    }
    size = PreparePurchaseShopIdsFromPlayerPrefs->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        PreparePurchaseShopIdsFromPlayerPrefs,
        (Il2CppObject *)v6,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      v12->fields._size = size + 1;
      v15[4] = (Il2CppClass *)v6;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v9, v10);
    }
    v16 = System_Linq_Enumerable__Distinct_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v12,
            (const MethodInfo_2E57E58 *)Method_System_Linq_Enumerable_Distinct_string___);
    v17 = (PurchaseLogic_o *)System_Linq_Enumerable__ToList_object_(
                               v16,
                               (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_string___);
    PurchaseLogic__SavePreparePurchaseShopIdsToPlayerPrefs(v17, (System_Collections_Generic_List_string__o *)v17, v18);
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
  System_String_o *v25; // x0
  int32_t v26; // w21
  PurchaseLogic_o *v27; // x0
  const MethodInfo *v28; // x2
  int32_t v29; // w22
  System_String_o *v30; // x0
  int32_t v31; // w20
  System_String_o *v32; // x0
  Il2CppObject *Instance; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  System_Action_o *v36; // x21
  Il2CppObject *v37; // x22
  struct PurchaseLogic___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *v41; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  System_Action_o *v44; // x21
  Il2CppObject *v45; // x22
  struct PurchaseLogic___c_StaticFields *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3

  if ( (byte_49FBCF5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, result);
    sub_1B640C8(&AgeVerificationMenu_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_1B640C8(&JsonManager_TypeInfo, v9);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B640C8(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__31_0__, v13);
    sub_1B640C8(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__31_1__, v14);
    sub_1B640C8(&PurchaseLogic___c_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_12223/*"STONE_PURCHASE_RESULT_BLOCK"*/, v16);
    sub_1B640C8(&StringLiteral_22412/*"perMonthAmount"*/, v17);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v18);
    sub_1B640C8(&StringLiteral_21313/*"message"*/, v19);
    sub_1B640C8(&StringLiteral_16988/*"bankAvailable"*/, v20);
    byte_49FBCF5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12223/*"STONE_PURCHASE_RESULT_BLOCK"*/, 0LL);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
    goto LABEL_33;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0LL);
  v23 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
  if ( !Dictionary
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
          (Il2CppObject *)StringLiteral_22412/*"perMonthAmount"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    goto LABEL_33;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v23,
           (Il2CppObject *)StringLiteral_22412/*"perMonthAmount"*/,
           (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_48;
  v25 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                             Item,
                             *(_QWORD *)(*(_QWORD *)Item + 368LL));
  v26 = System_Int32__Parse(v25, 0LL);
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  AgeVerificationMenu__SaveCumulativeAmount(v26, 0LL);
  if ( !PurchaseLogic__IsLimitOver(v27, v26 + price, v28) )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v23,
           (Il2CppObject *)StringLiteral_16988/*"bankAvailable"*/,
           (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               v23,
               (Il2CppObject *)StringLiteral_16988/*"bankAvailable"*/,
               (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_48;
      v30 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                                 Item,
                                 *(_QWORD *)(*(_QWORD *)Item + 368LL));
      v31 = System_Int32__Parse(v30, 0LL);
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             v23,
             (Il2CppObject *)StringLiteral_21313/*"message"*/,
             (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v23,
                 (Il2CppObject *)StringLiteral_21313/*"message"*/,
                 (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_48;
        v32 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                                   Item,
                                   *(_QWORD *)(*(_QWORD *)Item + 368LL));
        v21 = v32;
        if ( !v31 )
        {
          if ( !System_String__IsNullOrEmpty(v32, 0LL) )
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
              v36 = *(System_Action_o **)(*((_QWORD *)Item + 23) + 8LL);
              if ( !v36 )
              {
                if ( !*((_DWORD *)Item + 56) )
                {
                  j_il2cpp_runtime_class_init_0(Item);
                  Item = PurchaseLogic___c_TypeInfo;
                }
                v37 = (Il2CppObject *)**((_QWORD **)Item + 23);
                v36 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v34, v35);
                System_Action___ctor(v36, v37, Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__31_0__, 0LL);
                static_fields = PurchaseLogic___c_TypeInfo->static_fields;
                static_fields->__9__31_0 = v36;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__31_0, (int32_t)v36, v39, v40);
              }
              if ( Instance )
              {
                v29 = 1;
                CommonUI__OpenNotificationDialog(
                  (CommonUI_o *)Instance,
                  0LL,
                  v21,
                  v36,
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
                return v29;
              }
LABEL_48:
              sub_1B64324(Item);
            }
          }
          return 1;
        }
      }
      else if ( !v31 )
      {
        return 1;
      }
    }
LABEL_33:
    if ( !System_String__IsNullOrEmpty(v21, 0LL) )
    {
      v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v41, 0LL, 0LL) )
      {
        Item = PurchaseLogic___c_TypeInfo;
        if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
          Item = PurchaseLogic___c_TypeInfo;
        }
        v44 = *(System_Action_o **)(*((_QWORD *)Item + 23) + 16LL);
        if ( !v44 )
        {
          if ( !*((_DWORD *)Item + 56) )
          {
            j_il2cpp_runtime_class_init_0(Item);
            Item = PurchaseLogic___c_TypeInfo;
          }
          v45 = (Il2CppObject *)**((_QWORD **)Item + 23);
          v44 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v42, v43);
          System_Action___ctor(v44, v45, Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__31_1__, 0LL);
          v46 = PurchaseLogic___c_TypeInfo->static_fields;
          v46->__9__31_1 = v44;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v46->__9__31_1, (int32_t)v44, v47, v48);
        }
        if ( !v41 )
          goto LABEL_48;
        CommonUI__OpenNotificationDialog((CommonUI_o *)v41, 0LL, v21, v44, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
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
    return dword_BDD490[failureReason];
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

  if ( (byte_49FBCFB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Product__Contains__, product);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Product__Remove__, v5);
    sub_1B640C8(&UnityEngine_Purchasing_IStoreController_TypeInfo, v6);
    sub_1B640C8(&PurchaseLogic_TypeInfo, v7);
    byte_49FBCFB = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_15;
  if ( !System_Collections_Generic_HashSet_object___Contains(
          (System_Collections_Generic_HashSet_T__o *)pendingProducts,
          (Il2CppObject *)product,
          (const MethodInfo_336A4C4 *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
    return;
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts
    || (pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)System_Collections_Generic_HashSet_object___Remove(
                                                                                    (System_Collections_Generic_HashSet_T__o *)pendingProducts,
                                                                                    (Il2CppObject *)product,
                                                                                    (const MethodInfo_336A690 *)Method_System_Collections_Generic_HashSet_Product__Remove__),
        (storeController = PurchaseLogic_TypeInfo->static_fields->_storeController) == 0LL) )
  {
LABEL_15:
    sub_1B64324(pendingProducts);
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
    p_method = sub_1BB60A8(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 2LL);
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
  ServantStatusBattleListViewItem_o *p_buyProductFinishedAction; // x19

  p_buyProductFinishedAction = (ServantStatusBattleListViewItem_o *)&this->fields._buyProductFinishedAction;
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
  sub_1B6406C(p_buyProductFinishedAction, 0, perMonthAmount, freeStoneNum);
}


PurchaseLogic_ReceiptContents_o *__fastcall PurchaseLogic__ExtractReceiptContents(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  PurchaseLogic_ReceiptContents_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_49FBCFC & 1) == 0 )
  {
    sub_1B640C8(&PurchaseLogic_ReceiptContents_TypeInfo, product);
    byte_49FBCFC = 1;
  }
  v3 = (PurchaseLogic_ReceiptContents_o *)sub_1B64314(PurchaseLogic_ReceiptContents_TypeInfo, product, method);
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
        sub_1B6432C(this, purchaseResultArray);
      v8 = purchaseResultArray->m_Items[0];
      if ( !v8 )
        sub_1B64324(this);
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
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x19
  UnityEngine_Purchasing_IExtensionProvider_c *klass; // x8
  void *v6; // x20
  __int64 v7; // x9
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v13; // x1

  if ( (byte_49FBD09 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___, method);
    this = (PurchaseLogic_o *)sub_1B640C8(&PurchaseLogic_TypeInfo, v2);
    byte_49FBD09 = 1;
  }
  if ( !PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider )
    return 0LL;
  IsAppleDevice = PurchaseLogic__IsAppleDevice((const MethodInfo *)this);
  if ( !IsAppleDevice )
    return 0LL;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_1B64324(IsAppleDevice);
  klass = storeExtensionProvider->klass;
  v6 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v7 = *(unsigned __int16 *)(&storeExtensionProvider->klass->_2.bitflags2 + 3);
  v8 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 4);
  v9 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 40);
  if ( *(_WORD *)(&storeExtensionProvider->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v8 )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset + (int)v9].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB60A8(storeExtensionProvider, v8, v9);
  }
  v13 = sub_1B641FC(*(_QWORD *)(p_method + 8), v6);
  return (UnityEngine_Purchasing_IAppleExtensions_o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, __int64))(v13 + 8))(
                                                        storeExtensionProvider,
                                                        v13);
}


UnityEngine_Purchasing_ConfigurationBuilder_o *__fastcall PurchaseLogic__GetConfigurationBuilder(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  UnityEngine_Purchasing_StandardPurchasingModule_o *v3; // x0
  _QWORD *v4; // x20
  UnityEngine_Purchasing_Extension_IPurchasingModule_o *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_49FBCEF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_IPurchasingModule___, method);
    sub_1B640C8(&UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo, v2);
    byte_49FBCEF = 1;
  }
  if ( !UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo);
  v3 = UnityEngine_Purchasing_StandardPurchasingModule__Instance(0LL);
  v4 = Method_System_Array_Empty_IPurchasingModule___;
  v5 = (UnityEngine_Purchasing_Extension_IPurchasingModule_o *)v3;
  v6 = *((_QWORD *)Method_System_Array_Empty_IPurchasingModule___ + 7);
  if ( !v6 )
  {
    sub_1BB6000(Method_System_Array_Empty_IPurchasingModule___);
    v6 = v4[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BB5FA4(v7);
  if ( !*(_DWORD *)(v7 + 224) )
    j_il2cpp_runtime_class_init_0(v7);
  v8 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB5FA4(v8);
  return UnityEngine_Purchasing_ConfigurationBuilder__Instance(
           v5,
           **(UnityEngine_Purchasing_Extension_IPurchasingModule_array ***)(v8 + 184),
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
  __int64 v9; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  System_Collections_Generic_List_object__o *v12; // x19

  if ( (byte_49FBD0D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_string___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v2);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v3);
    sub_1B640C8(&string_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_5229/*"DeferredPurchaseProductIds"*/, v5);
    byte_49FBD0D = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_5229/*"DeferredPurchaseProductIds"*/,
             string_TypeInfo->static_fields->Empty,
             0LL);
  v7 = System_String__op_Inequality(String, string_TypeInfo->static_fields->Empty, 0LL);
  if ( v7 )
  {
    if ( !String )
      sub_1B64324(v7);
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String, 0x3Bu, 0, 0LL);
    return (System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                          v10,
                                                          (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_string___);
  }
  else
  {
    v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_string__TypeInfo,
                                                         v8,
                                                         v9);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v12;
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
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_Func_object__bool__o *v17; // x20

  if ( (byte_49FBD00 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____75749360,
      purchaseResultArray);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___, v6);
    sub_1B640C8(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v7);
    sub_1B640C8(&Method_PurchaseLogic___c__DisplayClass44_0__GetFirstPurchaseResult_b__0__, v8);
    sub_1B640C8(&PurchaseLogic___c__DisplayClass44_0_TypeInfo, v9);
    byte_49FBD00 = 1;
  }
  v10 = sub_1B64314(PurchaseLogic___c__DisplayClass44_0_TypeInfo, purchaseResultArray, transactionId);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B64324(v11);
  *(_QWORD *)(v10 + 16) = transactionId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)transactionId, v12, v13);
  if ( !purchaseResultArray )
    return 0LL;
  if ( !PurchaseLogic__IsAppleDevice(v14) )
    return (PurchaseByBank_UnityIap_Request_PurchaseResult_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                                 (const MethodInfo_2E5C894 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___);
  v17 = (System_Func_object__bool__o *)sub_1B64314(
                                         System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo,
                                         v15,
                                         v16);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v10,
    Method_PurchaseLogic___c__DisplayClass44_0__GetFirstPurchaseResult_b__0__,
    0LL);
  return (PurchaseByBank_UnityIap_Request_PurchaseResult_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                               (System_Func_TSource__bool__o *)v17,
                                                               (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____75749360);
}


PurchaseLogic_o *__fastcall PurchaseLogic__GetInstance(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  PurchaseLogic_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_49FBCED & 1) == 0 )
  {
    sub_1B640C8(&PurchaseLogicAndroid_TypeInfo, v1);
    byte_49FBCED = 1;
  }
  v3 = (PurchaseLogic_o *)sub_1B64314(PurchaseLogicAndroid_TypeInfo, v1, v2);
  PurchaseLogic___ctor(v3, v4);
  return v3;
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  System_String_o *String; // x20
  _BOOL8 v9; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_49FBD11 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_string___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1B640C8(&string_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_10674/*"PreparePurchaseShopIds"*/, v6);
    byte_49FBD11 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_string__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_10674/*"PreparePurchaseShopIds"*/,
             string_TypeInfo->static_fields->Empty,
             0LL);
  v9 = System_String__op_Inequality(String, string_TypeInfo->static_fields->Empty, 0LL);
  if ( !v9 )
    return (System_Collections_Generic_List_string__o *)v7;
  if ( !String )
    sub_1B64324(v9);
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String, 0x3Bu, 0, 0LL);
  return (System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                        v10,
                                                        (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_string___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PurchaseLogic__GetPrice(PurchaseLogic_o *this, int32_t bankShopId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x0
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v12; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = bankShopId;
  if ( (byte_49FBD05 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_BankShopMaster___, *(_QWORD *)&bankShopId);
    sub_1B640C8(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_6016/*"Entity is not found. bankShopId="*/, v7);
    byte_49FBD05 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             bankShopId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
  if ( Entity )
    return (int32_t)Entity[3].monitor;
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v12 = System_Int32__ToString((int32_t)&v13, 0LL);
  Instance = (DataManager_o *)System_String__Concat_61375396((System_String_o *)StringLiteral_6016/*"Entity is not found. bankShopId="*/, v12, 0LL);
  if ( !logErrorOutputAction )
LABEL_9:
    sub_1B64324(Instance);
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
  PurchaseBehaviour_c *v9; // x0
  System_Collections_Generic_List_object__o *ConsumableProductIdCollection; // x0
  _BOOL8 v11; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FBCEE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v5);
    sub_1B640C8(&PurchaseBehaviour_TypeInfo, v6);
    byte_49FBCEE = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( (byte_49FBCF0 & 1) == 0 )
  {
    sub_1B640C8(&PurchaseLogic_TypeInfo, method);
    byte_49FBCF0 = 1;
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
    v9 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v9 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_object__o *)v9->static_fields->ConsumableProductIdCollection;
    if ( !ConsumableProductIdCollection )
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      ConsumableProductIdCollection,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
      if ( !v11 )
        break;
      if ( !v8 )
        sub_1B64324(v11);
      UnityEngine_Purchasing_ConfigurationBuilder__AddProduct(v8, (System_String_o *)v12.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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
    sub_1B64324(this);
  PurchaseLogic__InitiatePurchase_38233152(
    this,
    bankShop->fields.id,
    bankShop->fields.googleShopId,
    bankShop->fields.googlePrice,
    finishedAction,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__InitiatePurchase_38233152(
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

  if ( (byte_49FBCF1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Purchasing_IStoreController_TypeInfo, *(_QWORD *)&shopId);
    sub_1B640C8(&PurchaseLogic_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_7573/*"InitiatePurchase: FAIL. PurchasingFramework not initialized."*/, v12);
    sub_1B640C8(&StringLiteral_7574/*"InitiatePurchase: FAIL. StoreController is null."*/, v13);
    sub_1B640C8(&StringLiteral_7572/*"InitiatePurchase: FAIL. Not purchasing product, either is not found or is not available for purchase"*/, v14);
    sub_1B640C8(&StringLiteral_7575/*"InitiatePurchase: FAIL. StoreController.products is null."*/, v15);
    sub_1B640C8(&StringLiteral_7576/*"InitiatePurchase: Initialized With Mismatched ObfuscatedAccountId."*/, v16);
    byte_49FBCF1 = 1;
  }
  this->fields._buyProductFinishedAction = finishedAction;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._buyProductFinishedAction,
    (int32_t)finishedAction,
    (int32_t)productId,
    price);
  if ( (byte_49FBCF0 & 1) == 0 )
  {
    v17 = sub_1B640C8(&PurchaseLogic_TypeInfo, v18);
    byte_49FBCF0 = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( logErrorOutputActionSampledByRatio )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, float))logErrorOutputActionSampledByRatio->fields.m_target)(
        logErrorOutputActionSampledByRatio->fields.original_method_info,
        StringLiteral_7573/*"InitiatePurchase: FAIL. PurchasingFramework not initialized."*/,
        *(_QWORD *)&logErrorOutputActionSampledByRatio->fields.extra_arg,
        0.01);
      v22 = 11;
      goto LABEL_33;
    }
LABEL_39:
    sub_1B64324(v17);
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
        StringLiteral_7576/*"InitiatePurchase: Initialized With Mismatched ObfuscatedAccountId."*/,
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
    v30 = &StringLiteral_7574/*"InitiatePurchase: FAIL. StoreController is null."*/;
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
        StringLiteral_7572/*"InitiatePurchase: FAIL. Not purchasing product, either is not found or is not available for purchase"*/,
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
    p_method = sub_1BB60A8(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
  }
  v17 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))p_method)(
          storeController,
          *(_QWORD *)(p_method + 8));
  if ( !v17 )
  {
    v29 = this->fields._logErrorOutputAction;
    if ( !v29 )
      goto LABEL_39;
    v30 = &StringLiteral_7575/*"InitiatePurchase: FAIL. StoreController.products is null."*/;
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
    v35 = sub_1BB60A8(v31, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
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

  if ( (byte_49FBD03 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, v1);
    byte_49FBD03 = 1;
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

  if ( (byte_49FBD04 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, v1);
    byte_49FBD04 = 1;
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

  if ( (byte_49FBCF6 & 1) == 0 )
  {
    sub_1B640C8(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&value);
    sub_1B640C8(&ManagerConfig_TypeInfo, v4);
    byte_49FBCF6 = 1;
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

  if ( (byte_49FBCFA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Product__Contains__, prodcut);
    byte_49FBCFA = 1;
  }
  pendingProducts = (System_Collections_Generic_HashSet_T__o *)this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_1B64324(0LL);
  return System_Collections_Generic_HashSet_object___Contains(
           pendingProducts,
           (Il2CppObject *)prodcut,
           (const MethodInfo_336A4C4 *)Method_System_Collections_Generic_HashSet_Product__Contains__);
}


bool __fastcall PurchaseLogic__IsPurchasingFrameworkInitialized(PurchaseLogic_o *this, const MethodInfo *method)
{
  struct PurchaseLogic_StaticFields *static_fields; // x8

  if ( (byte_49FBCF0 & 1) == 0 )
  {
    sub_1B640C8(&PurchaseLogic_TypeInfo, method);
    byte_49FBCF0 = 1;
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
  System_Func_object__bool__o *_9__42_0; // x20
  Il2CppObject *v9; // x21
  struct PurchaseLogic___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FBCFE & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___,
      purchaseResultArray);
    sub_1B640C8(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v4);
    sub_1B640C8(&Method_PurchaseLogic___c__IsServerCommitedPurchase_b__42_0__, v5);
    sub_1B640C8(&PurchaseLogic___c_TypeInfo, v6);
    byte_49FBCFE = 1;
  }
  if ( !purchaseResultArray )
    return 0;
  v7 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v7 = PurchaseLogic___c_TypeInfo;
  }
  _9__42_0 = (System_Func_object__bool__o *)v7->static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = PurchaseLogic___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__42_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo,
                                                purchaseResultArray,
                                                method);
    System_Func_object__bool____ctor(_9__42_0, v9, Method_PurchaseLogic___c__IsServerCommitedPurchase_b__42_0__, 0LL);
    static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__42_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__42_0, (int32_t)_9__42_0, v11, v12);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
           (System_Func_TSource__bool__o *)_9__42_0,
           (const MethodInfo_2E45664 *)Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___);
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
  if ( (byte_49FBD08 & 1) == 0 )
  {
    this = (PurchaseLogic_o *)sub_1B640C8(&StringLiteral_9834/*"OnDeferred product="*/, product);
    byte_49FBD08 = 1;
  }
  if ( !product
    || (metadata_k__BackingField = product->fields._metadata_k__BackingField) == 0LL
    || (logOutputAction = v4->fields._logOutputAction,
        this = (PurchaseLogic_o *)System_String__Concat_61375396(
                                    (System_String_o *)StringLiteral_9834/*"OnDeferred product="*/,
                                    metadata_k__BackingField->fields._localizedTitle_k__BackingField,
                                    0LL),
        !logOutputAction) )
  {
    sub_1B64324(this);
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
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o **v31; // x25
  struct System_Action_string__o *logOutputAction; // x28
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x26
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w1
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w1
  struct System_Action_string__o *v48; // x21
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x21
  __int64 v50; // x1
  __int64 v51; // x2
  System_Func_object__bool__o *v52; // x22
  Il2CppObject *v53; // x0
  Il2CppObject *Instance; // x22
  Il2CppObject *v55; // x22
  __int64 v56; // x1
  __int64 v57; // x2
  PurchaseLogic_ProductFinishedAction_o *v58; // x23
  const MethodInfo *v59; // x3
  int32_t v60; // w2
  int32_t v61; // w3
  const MethodInfo *v62; // x7
  System_Enum_o v63; // [xsp+8h] [xbp-88h] BYREF
  int32_t v64; // [xsp+18h] [xbp-78h]
  bool isSentGift[4]; // [xsp+20h] [xbp-70h] BYREF
  int32_t shopId; // [xsp+24h] [xbp-6Ch] BYREF
  __int64 v67; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_49FBD02 & 1) == 0 )
  {
    sub_1B640C8(&Method_CommonUI_OpenStonePurchaseReciveMenu___75725928, *(_QWORD *)&purchaseResult);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_Product___, v13);
    sub_1B640C8(&System_Func_Product__bool__TypeInfo, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&PurchaseLogic_ProductFinishedAction_TypeInfo, v16);
    sub_1B640C8(&PurchaseBehaviour_Result_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_1B640C8(&string___TypeInfo, v19);
    sub_1B640C8(&Method_PurchaseLogic___c__DisplayClass46_0__OnEndPaymentStore_b__0__, v20);
    sub_1B640C8(&PurchaseLogic___c__DisplayClass46_0_TypeInfo, v21);
    sub_1B640C8(&StringLiteral_16003/*"] "*/, v22);
    sub_1B640C8(&StringLiteral_15746/*"[ "*/, v23);
    sub_1B640C8(&StringLiteral_10750/*"PurchaseLogic:OnEndPaymentStore result "*/, v24);
    sub_1B640C8(&StringLiteral_4662/*"Confirming purchase of "*/, v25);
    sub_1B640C8(&StringLiteral_1/*""*/, v26);
    byte_49FBD02 = 1;
  }
  v67 = 0LL;
  shopId = 0;
  isSentGift[0] = 0;
  v27 = sub_1B64314(PurchaseLogic___c__DisplayClass46_0_TypeInfo, *(_QWORD *)&purchaseResult, resultData);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_26;
  *(_QWORD *)(v27 + 16) = productId;
  v31 = (System_String_o **)(v27 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 16), (int32_t)productId, v29, v30);
  logOutputAction = this->fields._logOutputAction;
  v28 = (System_String_o *)sub_1B64170(string___TypeInfo, 5LL);
  if ( !v28 )
    goto LABEL_26;
  v36 = v28;
  if ( !LODWORD(v28[1].klass) )
    goto LABEL_25;
  v37 = StringLiteral_10750/*"PurchaseLogic:OnEndPaymentStore result "*/;
  v28[1].monitor = (void *)StringLiteral_10750/*"PurchaseLogic:OnEndPaymentStore result "*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v28[1].monitor, v37, v34, v35);
  v63.klass = (System_Enum_c *)PurchaseBehaviour_Result_TypeInfo;
  v63.monitor = (void *)-1LL;
  v64 = purchaseResult;
  v28 = System_Enum__ToString(&v63, 0LL);
  if ( LODWORD(v36[1].klass) <= 1
    || (v36[1].fields = (System_String_Fields)v28,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v36[1].fields, (int32_t)v28, v38, v39),
        LODWORD(v36[1].klass) <= 2)
    || (v42 = (int)StringLiteral_15746/*"[ "*/,
        v36[2].klass = (System_String_c *)StringLiteral_15746/*"[ "*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v36[2], v42, v40, v41),
        LODWORD(v36[1].klass) <= 3)
    || (v36[2].monitor = resultData,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v36[2].monitor, (int32_t)resultData, v43, v44),
        LODWORD(v36[1].klass) <= 4) )
  {
LABEL_25:
    sub_1B6432C(v28, v33);
  }
  v47 = StringLiteral_16003/*"] "*/;
  v36[2].fields = (System_String_Fields)StringLiteral_16003/*"] "*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v36[2].fields, v47, v45, v46);
  v28 = System_String__Concat_61388924((System_String_array *)v36, 0LL);
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
  if ( System_String__op_Inequality(*v31, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    ((void (__fastcall *)(PurchaseLogic_o *, System_String_o *, System_String_o *, Il2CppMethodPointer))this->klass->vtable._24_SendPurchaseAction.method)(
      this,
      *v31,
      transactionId,
      this->klass->vtable._25_OnDeferred.methodPtr);
  v48 = this->fields._logOutputAction;
  v28 = System_String__Concat_61375396((System_String_o *)StringLiteral_4662/*"Confirming purchase of "*/, *v31, 0LL);
  if ( !v48 )
LABEL_26:
    sub_1B64324(v28);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))v48->fields.m_target)(
    v48->fields.original_method_info,
    v28,
    *(_QWORD *)&v48->fields.extra_arg);
  pendingProducts = this->fields._pendingProducts;
  v52 = (System_Func_object__bool__o *)sub_1B64314(System_Func_Product__bool__TypeInfo, v50, v51);
  System_Func_object__bool____ctor(
    v52,
    (Il2CppObject *)v27,
    Method_PurchaseLogic___c__DisplayClass46_0__OnEndPaymentStore_b__0__,
    0LL);
  v53 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
          (System_Collections_Generic_IEnumerable_TSource__o *)pendingProducts,
          (System_Func_TSource__bool__o *)v52,
          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_Product___);
  if ( v53 )
    ((void (__fastcall *)(PurchaseLogic_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._18_ConfirmPurchase.method)(
      this,
      v53,
      this->klass->vtable._19_ExtractReceiptContents.methodPtr);
LABEL_18:
  if ( purchaseResult != 4 && !this->fields._buyProductFinishedAction )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    {
      v55 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v58 = (PurchaseLogic_ProductFinishedAction_o *)sub_1B64314(PurchaseLogic_ProductFinishedAction_TypeInfo, v56, v57);
      PurchaseLogic_ProductFinishedAction___ctor(
        v58,
        v55,
        (intptr_t)Method_CommonUI_OpenStonePurchaseReciveMenu___75725928,
        v59);
      this->fields._buyProductFinishedAction = v58;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._buyProductFinishedAction, (int32_t)v58, v60, v61);
    }
  }
  v67 = 0LL;
  shopId = 0;
  isSentGift[0] = 0;
  ((void (__fastcall *)(PurchaseLogic_o *, struct PurchaseByBank_UnityIap_Request_PurchaseResult_array *, char *, __int64 *, int32_t *, bool *, Il2CppMethodPointer))this->klass->vtable._22_GetAddedStoneNum.method)(
    this,
    this->fields._purchaseResultArray,
    (char *)&v67 + 4,
    &v67,
    &shopId,
    isSentGift,
    this->klass->vtable._23_ShowPurchaseFailedNotification.methodPtr);
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(
    this,
    purchaseResult,
    0,
    SHIDWORD(v67),
    v67,
    shopId,
    isSentGift[0],
    v62);
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
  const MethodInfo *v25; // x2
  System_String_o *klass; // x20
  const MethodInfo *v27; // x6
  __int64 *v28; // x8
  System_String_o *currentTransactionId; // x5
  int32_t v30; // w1
  System_String_o *v31; // x2
  PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray; // x1
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
  __int64 v43; // x1
  const MethodInfo *v44; // x2
  struct PurchaseByBank_UnityIap_Request_PurchaseResult_array *v45; // x27
  int max_length; // w8
  struct System_Action_string__o *logErrorOutputAction; // x8
  PurchaseLogic_o *v48; // x0
  System_String_o *v49; // x3
  int32_t v50; // w4
  __int64 v51; // x28
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v52; // x8
  int32_t purchasedBankShopId; // w23
  const MethodInfo *v54; // x2

  if ( (byte_49FBCFF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_BankShopMaster___, result);
    sub_1B640C8(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_11136/*"ReceiptError"*/, v7);
    sub_1B640C8(&StringLiteral_22561/*"purchaseResultArray is null."*/, v8);
    sub_1B640C8(&StringLiteral_7027/*"Google Play canceled on restore purchase"*/, v9);
    sub_1B640C8(&StringLiteral_10749/*"PurchaseLogic:EndSendReceiptData ["*/, v10);
    sub_1B640C8(&StringLiteral_22709/*"receipt_error"*/, v11);
    sub_1B640C8(&StringLiteral_17661/*"canceled_purchase_error"*/, v12);
    sub_1B640C8(&StringLiteral_10752/*"PurchaseResult NotFound Error"*/, v13);
    sub_1B640C8(&StringLiteral_10753/*"PurchaseResult NotFound."*/, v14);
    sub_1B640C8(&StringLiteral_10540/*"PaymentOk"*/, v15);
    sub_1B640C8(&StringLiteral_7028/*"Google Play pending on restore purchase"*/, v16);
    sub_1B640C8(&StringLiteral_10748/*"PurchaseBehaviour.Result.SUCCESS_WITHOUT_NOTICE _currentTransactionId="*/, v17);
    sub_1B640C8(&StringLiteral_6124/*"Error["*/, v18);
    sub_1B640C8(&StringLiteral_22410/*"pending_purchase_error"*/, v19);
    sub_1B640C8(&StringLiteral_1/*""*/, v20);
    sub_1B640C8(&StringLiteral_5229/*"DeferredPurchaseProductIds"*/, v21);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v22);
    byte_49FBCFF = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  FirstPurchaseResult = (__int64)System_String__Concat_61386656(
                                   (System_String_o *)StringLiteral_10749/*"PurchaseLogic:EndSendReceiptData ["*/,
                                   result,
                                   (System_String_o *)StringLiteral_16000/*"]"*/,
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
                                   v25);
      if ( (IsServerCommitedPurchase & 1) != 0 )
      {
        v35 = this->fields._logOutputAction;
        FirstPurchaseResult = (__int64)System_String__Concat_61375396(
                                         (System_String_o *)StringLiteral_10748/*"PurchaseBehaviour.Result.SUCCESS_WITHOUT_NOTICE _currentTransactionId="*/,
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
            FirstPurchaseResult = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !FirstPurchaseResult )
              goto LABEL_49;
            FirstPurchaseResult = (__int64)DataManager__GetMasterData_object_(
                                             (DataManager_o *)FirstPurchaseResult,
                                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BankShopMaster___);
            if ( !FirstPurchaseResult )
              goto LABEL_49;
            Entity = (const MethodInfo *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)FirstPurchaseResult,
                                           v41,
                                           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
            if ( Entity )
            {
              klass = (System_String_o *)Entity->klass;
              FirstPurchaseResult = PurchaseLogic__IsAppleDevice(Entity);
              if ( (FirstPurchaseResult & 1) != 0 )
              {
                FirstPurchaseResult = UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5229/*"DeferredPurchaseProductIds"*/, 0LL);
                if ( (FirstPurchaseResult & 1) != 0 )
                {
                  v45 = this->fields._purchaseResultArray;
                  if ( v45 )
                  {
                    max_length = v45->max_length;
                    if ( max_length == 1 )
                    {
                      PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(this, klass, v44);
LABEL_37:
                      StoneCountRefreshComponent__RefreshAllStoneCount((const MethodInfo *)FirstPurchaseResult);
                      goto LABEL_38;
                    }
                    if ( max_length < 2 )
                      goto LABEL_37;
                    v51 = 0LL;
                    while ( 1 )
                    {
                      if ( (unsigned int)v51 >= max_length )
                        sub_1B6432C(FirstPurchaseResult, v43);
                      v52 = v45->m_Items[v51];
                      if ( !v52 )
                        break;
                      purchasedBankShopId = v52->fields.purchasedBankShopId;
                      FirstPurchaseResult = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !FirstPurchaseResult )
                        break;
                      FirstPurchaseResult = (__int64)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)FirstPurchaseResult,
                                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BankShopMaster___);
                      if ( !FirstPurchaseResult )
                        break;
                      FirstPurchaseResult = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)FirstPurchaseResult,
                                                       purchasedBankShopId,
                                                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
                      if ( FirstPurchaseResult )
                        PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(
                          this,
                          *(System_String_o **)(FirstPurchaseResult + 32),
                          v54);
                      max_length = v45->max_length;
                      if ( (int)++v51 >= max_length )
                        goto LABEL_37;
                    }
LABEL_49:
                    sub_1B64324(FirstPurchaseResult);
                  }
                }
              }
              FirstPurchaseResult = PurchaseLogic__IsGooglePlayDevice((const MethodInfo *)FirstPurchaseResult);
              if ( (FirstPurchaseResult & 1) != 0 )
                goto LABEL_37;
            }
LABEL_38:
            currentTransactionId = this->fields._currentTransactionId;
            v48 = this;
            v30 = v36;
            v49 = klass;
            v31 = (System_String_o *)StringLiteral_10540/*"PaymentOk"*/;
            v50 = v41;
            goto LABEL_35;
          }
        }
        logErrorOutputAction = this->fields._logErrorOutputAction;
        if ( logErrorOutputAction )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logErrorOutputAction->fields.m_target)(
            logErrorOutputAction->fields.original_method_info,
            StringLiteral_10753/*"PurchaseResult NotFound."*/,
            *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
          v37 = &StringLiteral_10752/*"PurchaseResult NotFound Error"*/;
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
                                   StringLiteral_22561/*"purchaseResultArray is null."*/,
                                   *(_QWORD *)&v39->fields.extra_arg);
    }
    v36 = 2;
    goto LABEL_21;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22410/*"pending_purchase_error"*/, 0LL) )
  {
    if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_17661/*"canceled_purchase_error"*/, 0LL) )
    {
      v28 = &StringLiteral_7027/*"Google Play canceled on restore purchase"*/;
      currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
      v30 = 17;
      goto LABEL_10;
    }
    if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22709/*"receipt_error"*/, 0LL) )
    {
      v38 = System_String__Concat_61386656(
              (System_String_o *)StringLiteral_6124/*"Error["*/,
              result,
              (System_String_o *)StringLiteral_16000/*"]"*/,
              0LL);
      currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
      v30 = 7;
      v31 = v38;
      goto LABEL_34;
    }
    v37 = &StringLiteral_11136/*"ReceiptError"*/;
LABEL_33:
    v31 = (System_String_o *)*v37;
    currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
    v30 = 7;
    goto LABEL_34;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, __int64, Il2CppMethodPointer))this->klass->vtable._30_SetExistsDeferredPurchase.method)(
    this,
    1LL,
    this->klass->vtable._31_IsDeferredPurchaseExists.methodPtr);
  v28 = &StringLiteral_7028/*"Google Play pending on restore purchase"*/;
  currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
  v30 = 16;
LABEL_10:
  v31 = (System_String_o *)*v28;
LABEL_34:
  v48 = this;
  v49 = klass;
  v50 = 0;
LABEL_35:
  PurchaseLogic__OnEndPaymentStore(v48, v30, v31, v49, v50, currentTransactionId, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__OnInitializeFailed(PurchaseLogic_o *this, int32_t error, const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  struct System_Action_string__o *logErrorOutputAction; // x20
  System_String_o *v10; // x0
  System_Enum_o v11; // [xsp+8h] [xbp-38h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h]

  if ( (byte_49FBD0A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Purchasing_InitializationFailureReason_TypeInfo, *(_QWORD *)&error);
    sub_1B640C8(&StringLiteral_9863/*"OnInitializeFailed InitializationFailureReason:"*/, v5);
    byte_49FBD0A = 1;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.method)(
    this,
    this->klass->vtable._30_SetExistsDeferredPurchase.methodPtr,
    method);
  if ( (unsigned int)error <= 1 )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    v11.klass = (System_Enum_c *)UnityEngine_Purchasing_InitializationFailureReason_TypeInfo;
    v11.monitor = (void *)-1LL;
    v12 = error;
    v7 = System_Enum__ToString(&v11, 0LL);
    v8 = System_String__Concat_61375396((System_String_o *)StringLiteral_9863/*"OnInitializeFailed InitializationFailureReason:"*/, v7, 0LL);
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
    sub_1B64324(v8);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v11.klass = (System_Enum_c *)UnityEngine_Purchasing_InitializationFailureReason_TypeInfo;
  v11.monitor = (void *)-1LL;
  v12 = error;
  v10 = System_Enum__ToString(&v11, 0LL);
  v8 = System_String__Concat_61375396((System_String_o *)StringLiteral_9863/*"OnInitializeFailed InitializationFailureReason:"*/, v10, 0LL);
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
  struct System_Action_string__o *logOutputAction; // x8
  int32_t v12; // w2
  int32_t v13; // w3
  struct PurchaseLogic_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  PurchaseLogic_o *v17; // x0
  const MethodInfo *v18; // x1
  UnityEngine_Purchasing_IAppleExtensions_o *AppleExtension; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Purchasing_IAppleExtensions_o *v22; // x20
  System_Action_object__o *v23; // x21
  UnityEngine_Purchasing_IAppleExtensions_c *klass; // x8
  __int64 v25; // x9
  UnityEngine_Purchasing_IAppleExtensions_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_49FBD07 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_Product__TypeInfo, controller);
    sub_1B640C8(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v7);
    sub_1B640C8(&PurchaseLogic_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_9864/*"OnInitialized: PASS"*/, v9);
    byte_49FBD07 = 1;
  }
  v10 = ((__int64 (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer, UnityEngine_Purchasing_IExtensionProvider_o *, const MethodInfo *))this->klass->vtable._28_EnableCrashReporterOnInitializeSucceeded.method)(
          this,
          this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.methodPtr,
          extensions,
          method);
  logOutputAction = this->fields._logOutputAction;
  if ( !logOutputAction )
    sub_1B64324(v10);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logOutputAction->fields.m_target)(
    logOutputAction->fields.original_method_info,
    StringLiteral_9864/*"OnInitialized: PASS"*/,
    *(_QWORD *)&logOutputAction->fields.extra_arg);
  PurchaseLogic_TypeInfo->static_fields->_storeController = controller;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)PurchaseLogic_TypeInfo->static_fields, (int32_t)controller, v12, v13);
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  static_fields->_storeExtensionProvider = extensions;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->_storeExtensionProvider,
    (int32_t)extensions,
    v15,
    v16);
  AppleExtension = PurchaseLogic__GetAppleExtension(v17, v18);
  if ( AppleExtension )
  {
    v22 = AppleExtension;
    v23 = (System_Action_object__o *)sub_1B64314(System_Action_Product__TypeInfo, v20, v21);
    System_Action_object____ctor(
      v23,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._26_OnInitializeFailed.methodPtr,
      0LL);
    klass = v22->klass;
    v25 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
    {
      p_offset = (UnityEngine_Purchasing_IAppleExtensions_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
      {
        --v25;
        p_offset += 2;
        if ( !v25 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(v22, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 2LL);
    }
    (*(void (__fastcall **)(UnityEngine_Purchasing_IAppleExtensions_o *, System_Action_object__o *, _QWORD))p_method)(
      v22,
      v23,
      *(_QWORD *)(p_method + 8));
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__OnPurchaseFailed(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        int32_t failureReason,
        const MethodInfo *method)
{
  unsigned int v4; // w20
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
  __int64 v21; // x22
  __int64 IsAppleDevice; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  InvokerMethod invoker_method; // x8
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  System_String_o **v28; // x23
  const MethodInfo *v29; // x0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2
  struct System_Action_string__o *logErrorOutputAction; // x24
  System_String_o *v33; // x20
  Il2CppObject *v34; // x0
  struct System_Action_string__o *v35; // x24
  System_String_o *v36; // x23
  Il2CppObject *v37; // x0
  Il2CppObject *Instance; // x24
  Il2CppObject *v39; // x24
  __int64 v40; // x1
  __int64 v41; // x2
  PurchaseLogic_ProductFinishedAction_o *v42; // x25
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  int32_t v45; // w3
  const char *name; // x8
  System_Decimal_o *v47; // x23
  PurchaseBehaviour_c *v48; // x0
  System_Collections_Generic_IEnumerable_TSource__o *BankShopEntityCollection; // x23
  System_Func_object__bool__o *v50; // x24
  Il2CppObject *v51; // x0
  int32_t klass; // w22
  const MethodInfo *v53; // x7
  int32_t v54; // w1
  unsigned int v55; // [xsp+8h] [xbp-48h] BYREF
  int v56; // [xsp+Ch] [xbp-44h] BYREF

  v4 = failureReason;
  v5 = (const MethodInfo *)product;
  if ( (byte_49FBD0C & 1) == 0 )
  {
    sub_1B640C8(&Method_CommonUI_OpenStonePurchaseReciveMenu___75725928, product);
    sub_1B640C8(&System_Decimal_TypeInfo, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___, v8);
    sub_1B640C8(&System_Func_BankShopEntity__bool__TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&PurchaseLogic_ProductFinishedAction_TypeInfo, v12);
    sub_1B640C8(&PurchaseBehaviour_TypeInfo, v13);
    sub_1B640C8(&UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B640C8(&string_TypeInfo, v16);
    sub_1B640C8(&Method_PurchaseLogic___c__DisplayClass60_0__OnPurchaseFailed_b__0__, v17);
    sub_1B640C8(&PurchaseLogic___c__DisplayClass60_0_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_9899/*"OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}"*/, v19);
    sub_1B640C8(&StringLiteral_5208/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/, v20);
    byte_49FBD0C = 1;
  }
  v21 = sub_1B64314(PurchaseLogic___c__DisplayClass60_0_TypeInfo, product, *(_QWORD *)&failureReason);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( v5 )
  {
    invoker_method = v5->invoker_method;
    if ( !invoker_method || (static_fields = (struct System_String_StaticFields *)((char *)invoker_method + 24), !v21) )
LABEL_36:
      sub_1B64324(IsAppleDevice);
  }
  else
  {
    static_fields = string_TypeInfo->static_fields;
    if ( !v21 )
      goto LABEL_36;
  }
  Empty = static_fields->Empty;
  *(struct System_String_StaticFields *)(v21 + 16) = (struct System_String_StaticFields)static_fields->Empty;
  v28 = (System_String_o **)(v21 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)Empty, v23, v24);
  IsAppleDevice = PurchaseLogic__IsAppleDevice(v29);
  if ( (IsAppleDevice & 1) == 0 )
    goto LABEL_14;
  IsAppleDevice = System_String__IsNullOrEmpty(*v28, 0LL);
  if ( (IsAppleDevice & 1) != 0 )
    goto LABEL_14;
  IsAppleDevice = (__int64)PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                             (PurchaseLogic_o *)IsAppleDevice,
                             v30);
  if ( !IsAppleDevice )
    goto LABEL_36;
  IsAppleDevice = System_Collections_Generic_List_object___Contains(
                    (System_Collections_Generic_List_object__o *)IsAppleDevice,
                    (Il2CppObject *)*v28,
                    (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( (IsAppleDevice & 1) != 0 )
  {
    PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(this, *v28, v31);
    logErrorOutputAction = this->fields._logErrorOutputAction;
    v33 = *v28;
    v56 = 4;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, &v56);
    IsAppleDevice = (__int64)System_String__Format_61389768(
                               (System_String_o *)StringLiteral_5208/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/,
                               (Il2CppObject *)v33,
                               v34,
                               0LL);
    if ( !logErrorOutputAction )
      goto LABEL_36;
    IsAppleDevice = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logErrorOutputAction->fields.m_target)(
                      logErrorOutputAction->fields.original_method_info,
                      IsAppleDevice,
                      *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
    v4 = 4;
  }
  else
  {
LABEL_14:
    if ( v4 != 4 )
    {
      v35 = this->fields._logErrorOutputAction;
      v36 = *v28;
      v55 = v4;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, &v55);
      IsAppleDevice = (__int64)System_String__Format_61389768(
                                 (System_String_o *)StringLiteral_9899/*"OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}"*/,
                                 (Il2CppObject *)v36,
                                 v37,
                                 0LL);
      if ( !v35 )
        goto LABEL_36;
      IsAppleDevice = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v35->fields.m_target)(
                        v35->fields.original_method_info,
                        IsAppleDevice,
                        *(_QWORD *)&v35->fields.extra_arg);
    }
  }
  if ( !this->fields._buyProductFinishedAction )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsAppleDevice = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
    if ( (IsAppleDevice & 1) != 0 )
    {
      v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v42 = (PurchaseLogic_ProductFinishedAction_o *)sub_1B64314(PurchaseLogic_ProductFinishedAction_TypeInfo, v40, v41);
      PurchaseLogic_ProductFinishedAction___ctor(
        v42,
        v39,
        (intptr_t)Method_CommonUI_OpenStonePurchaseReciveMenu___75725928,
        v43);
      this->fields._buyProductFinishedAction = v42;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._buyProductFinishedAction, (int32_t)v42, v44, v45);
    }
  }
  if ( v5 )
  {
    name = v5->name;
    if ( !name )
      goto LABEL_36;
    v47 = (System_Decimal_o *)*((_QWORD *)name + 6);
    v5 = (const MethodInfo *)*((_QWORD *)name + 7);
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    LODWORD(v5) = System_Decimal__ToInt32(v47, v5);
  }
  v48 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v48 = PurchaseBehaviour_TypeInfo;
  }
  BankShopEntityCollection = (System_Collections_Generic_IEnumerable_TSource__o *)v48->static_fields->BankShopEntityCollection;
  v50 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BankShopEntity__bool__TypeInfo, v30, v31);
  System_Func_object__bool____ctor(
    v50,
    (Il2CppObject *)v21,
    Method_PurchaseLogic___c__DisplayClass60_0__OnPurchaseFailed_b__0__,
    0LL);
  v51 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
          BankShopEntityCollection,
          (System_Func_TSource__bool__o *)v50,
          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
  if ( v51 )
    klass = (int32_t)v51[1].klass;
  else
    klass = 0;
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._23_ShowPurchaseFailedNotification.method)(
    this,
    v4,
    this->klass->vtable._24_SendPurchaseAction.methodPtr);
  if ( v4 > 6 )
    v54 = 7;
  else
    v54 = dword_BDD490[v4];
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, v54, (int32_t)v5, 0, 0, klass, 0, v53);
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
  int32_t v17; // w3
  struct UnityEngine_Purchasing_Product_o *purchasedProduct_k__BackingField; // x1
  UnityEngine_Purchasing_Product_o **v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  PurchaseBehaviour_c *v22; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_object__bool__o *v24; // x23
  __int64 v25; // x8
  __int64 v26; // x8
  struct System_Action_string__o *logOutputAction; // x21
  Il2CppObject *v28; // x1
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  struct System_Action_string__o *v30; // x21
  System_String_o *v31; // x0
  struct System_Action_string__o *v32; // x9
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2
  struct System_Action_string__o *logErrorOutputAction; // x8
  System_Decimal_o v37; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_49FBD0B & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_string___, purchaseEventArgs);
    sub_1B640C8(&System_Decimal_TypeInfo, v5);
    sub_1B640C8(&System_Func_string__bool__TypeInfo, v6);
    sub_1B640C8(&PurchaseBehaviour_TypeInfo, v7);
    sub_1B640C8(&Method_PurchaseLogic___c__DisplayClass59_0__ProcessPurchase_b__0__, v8);
    sub_1B640C8(&PurchaseLogic___c__DisplayClass59_0_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_10702/*"ProcessPurchase: product is null"*/, v10);
    sub_1B640C8(&StringLiteral_10701/*"ProcessPurchase: PASS. Product: '{0}'"*/, v11);
    sub_1B640C8(&StringLiteral_10700/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/, v12);
    sub_1B640C8(&StringLiteral_10682/*"Price: "*/, v13);
    byte_49FBD0B = 1;
  }
  *(_OWORD *)&v37.fields.flags = 0uLL;
  v14 = sub_1B64314(PurchaseLogic___c__DisplayClass59_0_TypeInfo, purchaseEventArgs, method);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)purchasedProduct_k__BackingField, v16, v17);
  if ( *(_QWORD *)(v14 + 16) )
  {
    v22 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v22 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v22->static_fields->ConsumableProductIdCollection;
    v24 = (System_Func_object__bool__o *)sub_1B64314(System_Func_string__bool__TypeInfo, v20, v21);
    System_Func_object__bool____ctor(
      v24,
      (Il2CppObject *)v14,
      Method_PurchaseLogic___c__DisplayClass59_0__ProcessPurchase_b__0__,
      0LL);
    v15 = BasicHelper__Any_object_(
            ConsumableProductIdCollection,
            (System_Func_T__bool__o *)v24,
            (const MethodInfo_2E24870 *)Method_BasicHelper_Any_string___);
    v25 = *(_QWORD *)(v14 + 16);
    if ( v25 )
    {
      v26 = *(_QWORD *)(v25 + 16);
      if ( v26 )
      {
        logOutputAction = this->fields._logOutputAction;
        v28 = *(Il2CppObject **)(v26 + 16);
        if ( (v15 & 1) == 0 )
        {
          v15 = (__int64)System_String__Format((System_String_o *)StringLiteral_10700/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/, v28, 0LL);
          if ( !logOutputAction )
            goto LABEL_28;
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logOutputAction->fields.m_target)(
            logOutputAction->fields.original_method_info,
            v15,
            *(_QWORD *)&logOutputAction->fields.extra_arg);
          goto LABEL_26;
        }
        v15 = (__int64)System_String__Format((System_String_o *)StringLiteral_10701/*"ProcessPurchase: PASS. Product: '{0}'"*/, v28, 0LL);
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
              v30 = this->fields._logOutputAction;
              *(_OWORD *)&v37.fields.flags = *(_OWORD *)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.flags;
              if ( !System_Decimal_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
              v31 = System_Decimal__ToString(&v37, 0LL);
              v15 = (__int64)System_String__Concat_61375396((System_String_o *)StringLiteral_10682/*"Price: "*/, v31, 0LL);
              if ( v30 )
              {
                v15 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v30->fields.m_target)(
                        v30->fields.original_method_info,
                        v15,
                        *(_QWORD *)&v30->fields.extra_arg);
                if ( *v19 )
                {
                  v32 = this->fields._logOutputAction;
                  if ( v32 )
                  {
                    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, _QWORD))v32->fields.m_target)(
                      v32->fields.original_method_info,
                      (*v19)->fields._receipt_k__BackingField,
                      *(_QWORD *)&v32->fields.extra_arg);
                    PurchaseLogic__ValidateReceipt(this, *v19, v33);
LABEL_26:
                    PurchaseLogic__AddPendingPurchase(this, *v19, v34);
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
    sub_1B64324(v15);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  if ( !logErrorOutputAction )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logErrorOutputAction->fields.m_target)(
    logErrorOutputAction->fields.original_method_info,
    StringLiteral_10702/*"ProcessPurchase: product is null"*/,
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
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  int32_t CumulativeAmount; // w2
  const MethodInfo *v23; // x7
  NetworkManager_ResultCallbackFunc_o *v24; // x19
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x1
  __int64 v29; // x2
  NetworkManager_ResultCallbackFunc_o *v30; // x21
  const MethodInfo *v31; // x3
  PurchaseLogic_o *v32; // x0
  const MethodInfo *v33; // x3

  if ( (byte_49FBCF2 & 1) == 0 )
  {
    sub_1B640C8(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&shopId);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1B640C8(&Method_PurchaseLogic___c__DisplayClass28_0__PurchaseIfAvailable_b__0__, v10);
    sub_1B640C8(&Method_PurchaseLogic___c__DisplayClass28_0__PurchaseIfAvailable_b__1__, v11);
    sub_1B640C8(&PurchaseLogic___c__DisplayClass28_0_TypeInfo, v12);
    byte_49FBCF2 = 1;
  }
  v13 = sub_1B64314(PurchaseLogic___c__DisplayClass28_0_TypeInfo, *(_QWORD *)&shopId, product);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1B64324(v14);
  *(_QWORD *)(v13 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v13 + 32) = product;
  *(_DWORD *)(v13 + 24) = price;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)product, v17, v18);
  *(_DWORD *)(v13 + 40) = shopId;
  if ( PurchaseLogic__IsAppleDevice(v19)
    && PurchaseLogic__IsPendingPurchase(this, *(UnityEngine_Purchasing_Product_o **)(v13 + 32), v21) )
  {
    if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    CumulativeAmount = AgeVerificationMenu__GetCumulativeAmount(0LL);
    PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, 13, CumulativeAmount, 0, 0, 0, 0, v23);
  }
  else
  {
    v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v20, v21);
    NetworkManager_ResultCallbackFunc___ctor(
      v24,
      (Il2CppObject *)v13,
      Method_PurchaseLogic___c__DisplayClass28_0__PurchaseIfAvailable_b__0__,
      v25);
    *(_QWORD *)(v13 + 48) = v24;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 48), (int32_t)v24, v26, v27);
    LODWORD(v24) = *(_DWORD *)(v13 + 40);
    v30 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v28, v29);
    NetworkManager_ResultCallbackFunc___ctor(
      v30,
      (Il2CppObject *)v13,
      Method_PurchaseLogic___c__DisplayClass28_0__PurchaseIfAvailable_b__1__,
      v31);
    PurchaseLogic__RequestPreparePurchaseByBank(v32, (int32_t)v24, v30, v33);
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
  int32_t v9; // w2
  int32_t v10; // w3
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Predicate_object__o *v16; // x21
  PurchaseLogic_o *v17; // x0
  const MethodInfo *v18; // x2

  if ( (byte_49FBD10 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__RemoveAll__, productId);
    sub_1B640C8(&System_Predicate_string__TypeInfo, v4);
    sub_1B640C8(&Method_PurchaseLogic___c__DisplayClass78_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__, v5);
    sub_1B640C8(&PurchaseLogic___c__DisplayClass78_0_TypeInfo, v6);
    byte_49FBD10 = 1;
  }
  v7 = sub_1B64314(PurchaseLogic___c__DisplayClass78_0_TypeInfo, productId, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_7;
  *(_QWORD *)(v7 + 16) = productId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)productId, v9, v10);
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v7 + 16), 0LL);
  if ( IsNullOrEmpty )
    return;
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)IsNullOrEmpty,
                                                v12);
  v16 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_string__TypeInfo, v14, v15);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v7,
    Method_PurchaseLogic___c__DisplayClass78_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__,
    0LL);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
LABEL_7:
    sub_1B64324(v8);
  v17 = (PurchaseLogic_o *)System_Collections_Generic_List_object___RemoveAll(
                             (System_Collections_Generic_List_object__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
                             (System_Predicate_T__o *)v16,
                             (const MethodInfo_34AEDD0 *)Method_System_Collections_Generic_List_string__RemoveAll__);
  PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(v17, DeferredPurchaseProductIdsFromPlayerPrefs, v18);
}


void __fastcall PurchaseLogic__RemovePendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_HashSet_T__o *pendingProducts; // x0

  if ( (byte_49FBCF9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Product__Contains__, product);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Product__Remove__, v5);
    byte_49FBCF9 = 1;
  }
  pendingProducts = (System_Collections_Generic_HashSet_T__o *)this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_8;
  if ( System_Collections_Generic_HashSet_object___Contains(
         pendingProducts,
         (Il2CppObject *)product,
         (const MethodInfo_336A4C4 *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
  {
    pendingProducts = (System_Collections_Generic_HashSet_T__o *)this->fields._pendingProducts;
    if ( pendingProducts )
    {
      System_Collections_Generic_HashSet_object___Remove(
        pendingProducts,
        (Il2CppObject *)product,
        (const MethodInfo_336A690 *)Method_System_Collections_Generic_HashSet_Product__Remove__);
      return;
    }
LABEL_8:
    sub_1B64324(pendingProducts);
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
  int32_t v9; // w2
  int32_t v10; // w3
  PurchaseLogic_o *v11; // x0
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_string__o *PreparePurchaseShopIdsFromPlayerPrefs; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Predicate_object__o *v16; // x21
  PurchaseLogic_o *v17; // x0
  const MethodInfo *v18; // x2
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  v19 = shopId;
  if ( (byte_49FBD14 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__RemoveAll__, *(_QWORD *)&shopId);
    sub_1B640C8(&System_Predicate_string__TypeInfo, v4);
    sub_1B640C8(&Method_PurchaseLogic___c__DisplayClass82_0__RemovePreparePurchaseShopIdsInPlayerPrefs_b__0__, v5);
    sub_1B640C8(&PurchaseLogic___c__DisplayClass82_0_TypeInfo, v6);
    byte_49FBD14 = 1;
  }
  v7 = sub_1B64314(PurchaseLogic___c__DisplayClass82_0_TypeInfo, *(_QWORD *)&shopId, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( shopId >= 1 )
  {
    v8 = System_Int32__ToString((int32_t)&v19, 0LL);
    if ( !v7
      || (*(_QWORD *)(v7 + 16) = v8,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)v8, v9, v10),
          PreparePurchaseShopIdsFromPlayerPrefs = PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs(v11, v12),
          v16 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_string__TypeInfo, v14, v15),
          System_Predicate_object____ctor(
            v16,
            (Il2CppObject *)v7,
            Method_PurchaseLogic___c__DisplayClass82_0__RemovePreparePurchaseShopIdsInPlayerPrefs_b__0__,
            0LL),
          !PreparePurchaseShopIdsFromPlayerPrefs) )
    {
      sub_1B64324(v8);
    }
    v17 = (PurchaseLogic_o *)System_Collections_Generic_List_object___RemoveAll(
                               (System_Collections_Generic_List_object__o *)PreparePurchaseShopIdsFromPlayerPrefs,
                               (System_Predicate_T__o *)v16,
                               (const MethodInfo_34AEDD0 *)Method_System_Collections_Generic_List_string__RemoveAll__);
    PurchaseLogic__SavePreparePurchaseShopIdsToPlayerPrefs(v17, PreparePurchaseShopIdsFromPlayerPrefs, v18);
  }
}


void __fastcall PurchaseLogic__RequestGameServerBankStatus(
        PurchaseLogic_o *this,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Request_object; // x0

  if ( (byte_49FBCF4 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_BankStatusRequest___, callback);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    byte_49FBCF4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_BankStatusRequest___);
  if ( !Request_object )
    sub_1B64324(0LL);
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

  if ( (byte_49FBCF3 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_PreparePurchaseByBankRequest___, *(_QWORD *)&shopId);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    byte_49FBCF3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_PreparePurchaseByBankRequest___);
  if ( !Request_object )
    sub_1B64324(0LL);
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
  Il2CppClass *v13; // x8
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x20
  UnityEngine_Purchasing_IExtensionProvider_c *v15; // x8
  void *v16; // x21
  __int64 v17; // x9
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *klass; // x8
  Il2CppClass *v23; // x19
  System_String_o *v24; // x0
  __int64 v25; // x0
  __int64 v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_bool__object__o *v29; // x21
  __int64 v30; // x8
  __int64 v31; // x9
  UnityEngine_Purchasing_IAppleExtensions_c **v32; // x10
  __int64 v33; // x0
  System_Enum_o v34; // [xsp+8h] [xbp-38h] BYREF
  int32_t platform; // [xsp+18h] [xbp-28h]

  v2 = (Il2CppObject *)this;
  if ( (byte_49FBCF7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__string__TypeInfo, method);
    sub_1B640C8(&UnityEngine_Application_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v4);
    sub_1B640C8(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___, v5);
    sub_1B640C8(&Method_PurchaseLogic__RestorePurchases_b__33_0__, v6);
    sub_1B640C8(&PurchaseLogic_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_RuntimePlatform_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_11295/*"RestorePurchases FAIL. Not supported on this platform. Current = "*/, v9);
    sub_1B640C8(&StringLiteral_11297/*"RestorePurchases started ..."*/, v10);
    this = (PurchaseLogic_o *)sub_1B640C8(&StringLiteral_11294/*"RestorePurchases FAIL. Not initialized."*/, v11);
    byte_49FBCF7 = 1;
  }
  if ( (byte_49FBCF0 & 1) == 0 )
  {
    this = (PurchaseLogic_o *)sub_1B640C8(&PurchaseLogic_TypeInfo, method);
    byte_49FBCF0 = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    klass = v2[3].klass;
    if ( klass )
    {
      ((void (__fastcall *)(Il2CppClass *, __int64, _QWORD))klass->_1.namespaze)(
        klass->_1.element_class,
        StringLiteral_11294/*"RestorePurchases FAIL. Not initialized."*/,
        *(_QWORD *)&klass->_1.byval_arg.bits);
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
      v23 = v2[3].klass;
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      platform = UnityEngine_Application__get_platform(0LL);
      v34.klass = (System_Enum_c *)UnityEngine_RuntimePlatform_TypeInfo;
      v34.monitor = (void *)-1LL;
      v24 = System_Enum__ToString(&v34, 0LL);
      this = (PurchaseLogic_o *)System_String__Concat_61375396((System_String_o *)StringLiteral_11295/*"RestorePurchases FAIL. Not supported on this platform. Current = "*/, v24, 0LL);
      if ( v23 )
      {
        ((void (__fastcall *)(Il2CppClass *, PurchaseLogic_o *, _QWORD))v23->_1.namespaze)(
          v23->_1.element_class,
          this,
          *(_QWORD *)&v23->_1.byval_arg.bits);
        return;
      }
LABEL_35:
      sub_1B64324(this);
    }
  }
  v13 = v2[3].klass;
  if ( !v13 )
    goto LABEL_35;
  this = (PurchaseLogic_o *)((__int64 (__fastcall *)(Il2CppClass *, __int64, _QWORD))v13->_1.namespaze)(
                              v13->_1.element_class,
                              StringLiteral_11297/*"RestorePurchases started ..."*/,
                              *(_QWORD *)&v13->_1.byval_arg.bits);
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    goto LABEL_35;
  v15 = storeExtensionProvider->klass;
  v16 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v17 = *(unsigned __int16 *)(&storeExtensionProvider->klass->_2.bitflags2 + 3);
  v18 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 4);
  v19 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 40);
  if ( *(_WORD *)(&storeExtensionProvider->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v15->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v18 )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_19;
    }
    p_method = (__int64)&v15->vtable[*p_offset + (int)v19].method;
  }
  else
  {
LABEL_19:
    p_method = sub_1BB60A8(storeExtensionProvider, v18, v19);
  }
  v25 = sub_1B641FC(*(_QWORD *)(p_method + 8), v16);
  v26 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, __int64))(v25 + 8))(
          storeExtensionProvider,
          v25);
  v29 = (System_Action_bool__object__o *)sub_1B64314(System_Action_bool__string__TypeInfo, v27, v28);
  System_Action_bool__object____ctor(v29, v2, Method_PurchaseLogic__RestorePurchases_b__33_0__, 0LL);
  if ( !v26 )
    goto LABEL_35;
  v30 = *(_QWORD *)v26;
  v31 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
  {
    v32 = (UnityEngine_Purchasing_IAppleExtensions_c **)(*(_QWORD *)(v30 + 176) + 8LL);
    while ( *(v32 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      --v31;
      v32 += 2;
      if ( !v31 )
        goto LABEL_32;
    }
    v33 = v30 + 16LL * (*(_DWORD *)v32 + 1) + 312;
  }
  else
  {
LABEL_32:
    v33 = sub_1BB60A8(v26, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(__int64, System_Action_bool__object__o *, _QWORD))v33)(v26, v29, *(_QWORD *)(v33 + 8));
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x21
  __int64 v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t current; // w1
  System_String_o **v23; // x20
  System_String_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  PurchaseBehaviour_c *v27; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_object__bool__o *v29; // x23
  System_String_o *v30; // x21
  System_String_o *a; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FBD0E & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_string___, deferredPurchaseProductIdList);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_1B640C8(&System_Func_string__bool__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v8);
    sub_1B640C8(&PurchaseBehaviour_TypeInfo, v9);
    sub_1B640C8(&string_TypeInfo, v10);
    sub_1B640C8(&Method_PurchaseLogic___c__DisplayClass76_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__, v11);
    sub_1B640C8(&PurchaseLogic___c__DisplayClass76_0_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_1581/*";"*/, v13);
    sub_1B640C8(&StringLiteral_1/*""*/, v14);
    sub_1B640C8(&StringLiteral_5229/*"DeferredPurchaseProductIds"*/, v15);
    byte_49FBD0E = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( deferredPurchaseProductIdList )
  {
    a = (System_String_o *)StringLiteral_1/*""*/;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)deferredPurchaseProductIdList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v33 = v32;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v33,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v18 = sub_1B64314(PurchaseLogic___c__DisplayClass76_0_TypeInfo, v16, v17);
      System_Object___ctor((Il2CppObject *)v18, 0LL);
      if ( !v18 )
        sub_1B64324(v19);
      current = (int32_t)v33.fields._current;
      *(_QWORD *)(v18 + 16) = v33.fields._current;
      v23 = (System_String_o **)(v18 + 16);
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 16), current, v20, v21);
      if ( *(_QWORD *)(v18 + 16) )
      {
        v24 = System_String__Trim(*(System_String_o **)(v18 + 16), 0LL);
        if ( !System_String__op_Equality(v24, string_TypeInfo->static_fields->Empty, 0LL) )
        {
          v27 = PurchaseBehaviour_TypeInfo;
          if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
            v27 = PurchaseBehaviour_TypeInfo;
          }
          ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v27->static_fields->ConsumableProductIdCollection;
          v29 = (System_Func_object__bool__o *)sub_1B64314(System_Func_string__bool__TypeInfo, v25, v26);
          System_Func_object__bool____ctor(
            v29,
            (Il2CppObject *)v18,
            Method_PurchaseLogic___c__DisplayClass76_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__,
            0LL);
          if ( BasicHelper__Any_object_(
                 ConsumableProductIdCollection,
                 (System_Func_T__bool__o *)v29,
                 (const MethodInfo_2E24870 *)Method_BasicHelper_Any_string___) )
          {
            if ( System_String__op_Inequality(a, string_TypeInfo->static_fields->Empty, 0LL) )
              v30 = System_String__Concat_61375396(a, (System_String_o *)StringLiteral_1581/*";"*/, 0LL);
            else
              v30 = a;
            a = System_String__Concat_61375396(v30, *v23, 0LL);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( System_String__IsNullOrEmpty(a, 0LL) )
      UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5229/*"DeferredPurchaseProductIds"*/, 0LL);
    else
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_5229/*"DeferredPurchaseProductIds"*/, a, 0LL);
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

  if ( (byte_49FBD12 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, shopIdList);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v6);
    sub_1B640C8(&string_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_10674/*"PreparePurchaseShopIds"*/, v8);
    sub_1B640C8(&StringLiteral_1581/*";"*/, v9);
    sub_1B640C8(&StringLiteral_1/*""*/, v10);
    byte_49FBD12 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( shopIdList )
  {
    v11 = (System_String_o *)StringLiteral_1/*""*/;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)shopIdList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v16 = v15;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v16.fields._current;
      if ( v16.fields._current )
      {
        v13 = System_String__Trim((System_String_o *)v16.fields._current, 0LL);
        if ( !System_String__op_Equality(v13, string_TypeInfo->static_fields->Empty, 0LL) )
        {
          if ( System_String__op_Inequality(v11, string_TypeInfo->static_fields->Empty, 0LL) )
            v14 = System_String__Concat_61375396(v11, (System_String_o *)StringLiteral_1581/*";"*/, 0LL);
          else
            v14 = v11;
          v11 = System_String__Concat_61375396(v14, (System_String_o *)current, 0LL);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( System_String__IsNullOrEmpty(v11, 0LL) )
      UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10674/*"PreparePurchaseShopIds"*/, 0LL);
    else
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10674/*"PreparePurchaseShopIds"*/, v11, 0LL);
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

  if ( (byte_49FBD06 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_BankShopMaster___, paymentProductId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_8097/*"JPY"*/, v8);
    byte_49FBD06 = 1;
  }
  Instance = (BankShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (BankShopEntity_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BankShopMaster___);
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
        sub_1B6432C(Instance, v10);
      v14 = v12->m_Items[v13];
      if ( !v14 || !paymentProductId )
        goto LABEL_18;
      Instance = (BankShopEntity_array *)System_String__Equals_61383712(paymentProductId, v14->fields.googleShopId, 0LL);
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
      Instance = (BankShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Instance )
      {
        AdManager__TrackPurchase(
          (AdManager_o *)Instance,
          id,
          (double)googlePrice,
          (System_String_o *)StringLiteral_8097/*"JPY"*/,
          transactionId,
          0LL);
        return;
      }
LABEL_18:
      sub_1B64324(Instance);
    }
  }
}


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
  struct System_Action_string__o *logOutputAction; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  __int64 v23; // x2
  NetworkManager_ResultCallbackFunc_o *v24; // x22
  const MethodInfo *v25; // x3
  Il2CppObject *Request_object; // x0
  System_String_o *payloadJsonStr; // x23
  System_String_o *googleSignatureStr; // x21
  System_String_o *v29; // x22
  struct System_String_o **p_googleSignatureStr; // t2
  PurchaseByBank_UnityIap_Request_o *v31; // x24
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_object__o *v34; // x25
  struct System_Action_string__o *logErrorOutputAction; // x20
  System_String_o *v36; // x0
  const MethodInfo *v37; // x2
  int64_t UserId; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FBCFD & 1) == 0 )
  {
    sub_1B640C8(&System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo, receiptContents);
    sub_1B640C8(&Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&Method_PurchaseLogic_OnEndSendReceiptData__, v11);
    sub_1B640C8(&Method_PurchaseLogic__SendReceiptData_b__41_0__, v12);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_24361/*"user_id_error"*/, v14);
    sub_1B640C8(&StringLiteral_10751/*"PurchaseLogic:SendReceiptData ["*/, v15);
    sub_1B640C8(&StringLiteral_15154/*"UserId error: UserId="*/, v16);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v17);
    byte_49FBCFD = 1;
  }
  this->fields._currentTransactionId = currentTransactionId;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._currentTransactionId,
    (int32_t)currentTransactionId,
    (int32_t)currentTransactionId,
    storeError);
  if ( !receiptContents )
    goto LABEL_17;
  logOutputAction = this->fields._logOutputAction;
  v18 = System_String__Concat_61386656(
          (System_String_o *)StringLiteral_10751/*"PurchaseLogic:SendReceiptData ["*/,
          receiptContents->fields.payloadJsonStr,
          (System_String_o *)StringLiteral_16000/*"]"*/,
          0LL);
  if ( !logOutputAction )
    goto LABEL_17;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))logOutputAction->fields.m_target)(
    logOutputAction->fields.original_method_info,
    v18,
    *(_QWORD *)&logOutputAction->fields.extra_arg);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( NetworkManager__get_UserId(0LL) > 0 )
  {
    this->fields._purchaseResultArray = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._purchaseResultArray, 0, v20, v21);
    v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v22, v23);
    NetworkManager_ResultCallbackFunc___ctor(
      v24,
      (Il2CppObject *)this,
      Method_PurchaseLogic_OnEndSendReceiptData__,
      v25);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v24,
                       (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___);
    payloadJsonStr = receiptContents->fields.payloadJsonStr;
    p_googleSignatureStr = &receiptContents->fields.googleSignatureStr;
    googleSignatureStr = receiptContents->fields.googleSignatureStr;
    v29 = p_googleSignatureStr[1];
    v31 = (PurchaseByBank_UnityIap_Request_o *)Request_object;
    v34 = (System_Action_object__o *)sub_1B64314(
                                       System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo,
                                       v32,
                                       v33);
    System_Action_object____ctor(v34, (Il2CppObject *)this, Method_PurchaseLogic__SendReceiptData_b__41_0__, 0LL);
    if ( v31 )
    {
      PurchaseByBank_UnityIap_Request__beginRequest(
        v31,
        v29,
        payloadJsonStr,
        storeError,
        googleSignatureStr,
        (System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____o *)v34,
        0LL);
      return;
    }
LABEL_17:
    sub_1B64324(v18);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v36 = System_Int64__ToString((int64_t)&UserId, 0LL);
  v18 = System_String__Concat_61375396((System_String_o *)StringLiteral_15154/*"UserId error: UserId="*/, v36, 0LL);
  if ( !logErrorOutputAction )
    goto LABEL_17;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))logErrorOutputAction->fields.m_target)(
    logErrorOutputAction->fields.original_method_info,
    v18,
    *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
  PurchaseLogic__OnEndSendReceiptData(this, (System_String_o *)StringLiteral_24361/*"user_id_error"*/, v37);
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

  if ( (byte_49FBD01 & 1) == 0 )
  {
    sub_1B640C8(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&bankShopId);
    byte_49FBD01 = 1;
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
  System_String_o *transactionID_k__BackingField; // x21
  PurchaseLogic_ReceiptContents_o *v7; // x20
  const MethodInfo *v8; // x4

  IsAppleDevice = (PurchaseLogic_ReceiptContents_o *)((__int64 (__fastcall *)(PurchaseLogic_o *, UnityEngine_Purchasing_Product_o *, Il2CppMethodPointer))this->klass->vtable._19_ExtractReceiptContents.method)(
                                                       this,
                                                       product,
                                                       this->klass->vtable._20_UpdateMonthlyPurchasePrice.methodPtr);
  if ( !product )
    goto LABEL_7;
  transactionID_k__BackingField = product->fields._transactionID_k__BackingField;
  v7 = IsAppleDevice;
  IsAppleDevice = (PurchaseLogic_ReceiptContents_o *)PurchaseLogic__IsAppleDevice((const MethodInfo *)IsAppleDevice);
  if ( ((unsigned __int8)IsAppleDevice & 1) == 0 )
    goto LABEL_6;
  if ( !v7 )
LABEL_7:
    sub_1B64324(IsAppleDevice);
  if ( v7->fields.isIOSOldStyleReceipt )
    transactionID_k__BackingField = v7->fields.iOSOldStyleTransactionId;
LABEL_6:
  PurchaseLogic__SendReceiptData(this, v7, transactionID_k__BackingField, 0, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic___RestorePurchases_b__33_0(
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
  struct System_Action_string__o *v12; // x20
  bool v13; // [xsp+Ch] [xbp-34h] BYREF

  v13 = result;
  if ( (byte_49FBD16 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, result);
    sub_1B640C8(&StringLiteral_11296/*"RestorePurchases continuing: "*/, v6);
    sub_1B640C8(&StringLiteral_1051/*". If no further messages, no purchases available to restore."*/, v7);
    sub_1B640C8(&StringLiteral_18983/*"error: "*/, v8);
    byte_49FBD16 = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v10 = System_Boolean__ToString((bool)&v13, 0LL);
  v11 = System_String__Concat_61386656(
          (System_String_o *)StringLiteral_11296/*"RestorePurchases continuing: "*/,
          v10,
          (System_String_o *)StringLiteral_1051/*". If no further messages, no purchases available to restore."*/,
          0LL);
  if ( !logOutputAction )
    goto LABEL_10;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))logOutputAction->fields.m_target)(
    logOutputAction->fields.original_method_info,
    v11,
    *(_QWORD *)&logOutputAction->fields.extra_arg);
  if ( v13 )
    return;
  v12 = this->fields._logOutputAction;
  v11 = System_String__Concat_61375396((System_String_o *)StringLiteral_18983/*"error: "*/, errorMessage, 0LL);
  if ( !v12 )
LABEL_10:
    sub_1B64324(v11);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))v12->fields.m_target)(
    v12->fields.original_method_info,
    v11,
    *(_QWORD *)&v12->fields.extra_arg);
}


void __fastcall PurchaseLogic___SendReceiptData_b__41_0(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._purchaseResultArray = purchaseResultArray;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._purchaseResultArray,
    (int32_t)purchaseResultArray,
    (int32_t)method,
    v3);
}


void __fastcall PurchaseLogic__set_BuyProductFinishedAction(
        PurchaseLogic_o *this,
        PurchaseLogic_ProductFinishedAction_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._buyProductFinishedAction = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._buyProductFinishedAction,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PurchaseLogic__set_LogErrorOutputAction(
        PurchaseLogic_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._logErrorOutputAction = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._logErrorOutputAction,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PurchaseLogic__set_LogErrorOutputActionSampledByRatio(
        PurchaseLogic_o *this,
        System_Action_string__float__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._logErrorOutputActionSampledByRatio = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._logErrorOutputActionSampledByRatio,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PurchaseLogic__set_LogOutputAction(
        PurchaseLogic_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._logOutputAction = value;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._logOutputAction, (int32_t)value, (int32_t)method, v3);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AC51C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AC494;
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
  _QWORD v15[7]; // [xsp+0h] [xbp-90h] BYREF
  char v16[4]; // [xsp+38h] [xbp-58h] BYREF
  int32_t v17; // [xsp+3Ch] [xbp-54h] BYREF
  int32_t v18; // [xsp+40h] [xbp-50h] BYREF
  int32_t v19; // [xsp+44h] [xbp-4Ch] BYREF
  int32_t v20; // [xsp+48h] [xbp-48h] BYREF
  int32_t v21; // [xsp+4Ch] [xbp-44h] BYREF

  v20 = perMonthAmount;
  v21 = purchaseResult;
  v18 = chargeStoneNum;
  v19 = freeStoneNum;
  v17 = shopId;
  v16[0] = isSentGift;
  if ( (byte_49FBD17 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, *(_QWORD *)&purchaseResult);
    sub_1B640C8(&int_TypeInfo, v12);
    sub_1B640C8(&PurchaseBehaviour_Result_TypeInfo, v13);
    byte_49FBD17 = 1;
  }
  v15[6] = 0LL;
  v15[0] = j_il2cpp_value_box_0(PurchaseBehaviour_Result_TypeInfo, &v21);
  v15[1] = j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v15[2] = j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v15[3] = j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v15[4] = j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v15[5] = j_il2cpp_value_box_0(bool_TypeInfo, v16);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v15, callback, object);
}


void __fastcall PurchaseLogic_ProductFinishedAction__EndInvoke(
        PurchaseLogic_ProductFinishedAction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  int32_t v3; // w3
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_StaticFields *v7; // x8
  struct System_String_o *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_String_StaticFields *v11; // x8
  struct System_String_o *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_String_StaticFields *v15; // x8
  struct System_String_o *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_String_StaticFields *v19; // x8
  struct System_String_o *v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_49FBD18 & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    byte_49FBD18 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.payloadJsonStr = static_fields->Empty;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)Empty, v2, v3);
  v7 = string_TypeInfo->static_fields;
  v8 = v7->Empty;
  this->fields.googleSignatureStr = v7->Empty;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.googleSignatureStr, (int32_t)v8, v9, v10);
  v11 = string_TypeInfo->static_fields;
  v12 = v11->Empty;
  this->fields.receiptBase64Str = v11->Empty;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.receiptBase64Str, (int32_t)v12, v13, v14);
  v15 = string_TypeInfo->static_fields;
  v16 = v15->Empty;
  this->fields.purchaseToken = v15->Empty;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.purchaseToken, (int32_t)v16, v17, v18);
  v19 = string_TypeInfo->static_fields;
  v20 = v19->Empty;
  this->fields.iOSOldStyleTransactionId = v19->Empty;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.iOSOldStyleTransactionId, (int32_t)v20, v21, v22);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FBD19 & 1) == 0 )
  {
    sub_1B640C8(&PurchaseLogic___c_TypeInfo, v1);
    byte_49FBD19 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(PurchaseLogic___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  PurchaseLogic___c_TypeInfo->static_fields->__9 = (struct PurchaseLogic___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)PurchaseLogic___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall PurchaseLogic___c___ctor(PurchaseLogic___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogic___c____ctor_b__83_0(
        PurchaseLogic___c_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic___c____ctor_b__83_1(
        PurchaseLogic___c_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x19

  if ( (byte_49FBD1A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Debug_TypeInfo, str);
    sub_1B640C8(&StringLiteral_15891/*"[UnityIAP]課金エラー:"*/, v4);
    byte_49FBD1A = 1;
  }
  v5 = (Il2CppObject *)System_String__Concat_61375396((System_String_o *)StringLiteral_15891/*"[UnityIAP]課金エラー:"*/, str, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v5, 0LL);
}


void __fastcall PurchaseLogic___c____ctor_b__83_2(
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
  if ( (byte_49FBD1B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Debug_TypeInfo, str);
    sub_1B640C8(&StringLiteral_15890/*"[UnityIAP]課金エラー(ratio:"*/, v6);
    sub_1B640C8(&StringLiteral_838/*"):"*/, v7);
    byte_49FBD1B = 1;
  }
  v8 = UnityEngine_Random__Range(0.0, 1.0, 0LL);
  if ( v8 < ratio )
  {
    v9 = System_Single__ToString(v8, (const MethodInfo *)&v11);
    v10 = (Il2CppObject *)System_String__Concat_61388660(
                            (System_String_o *)StringLiteral_15890/*"[UnityIAP]課金エラー(ratio:"*/,
                            v9,
                            (System_String_o *)StringLiteral_838/*"):"*/,
                            str,
                            0LL);
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogError(v10, 0LL);
  }
}


void __fastcall PurchaseLogic___c___CheckBankStatusAndMonthlyLimit_b__31_0(
        PurchaseLogic___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic___c___CheckBankStatusAndMonthlyLimit_b__31_1(
        PurchaseLogic___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall PurchaseLogic___c___IsServerCommitedPurchase_b__42_0(
        PurchaseLogic___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.isCommitedAlready;
}


void __fastcall PurchaseLogic___c__DisplayClass28_0___ctor(
        PurchaseLogic___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogic___c__DisplayClass28_0___PurchaseIfAvailable_b__0(
        PurchaseLogic___c__DisplayClass28_0_o *this,
        System_String_o *requestResultStr,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  PurchaseLogic_o *_4__this; // x0
  int32_t v12; // w20
  struct PurchaseLogic_o *v13; // x8
  struct UnityEngine_Purchasing_Product_o *product; // x9
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x9
  struct System_Action_string__o *logOutputAction; // x20
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x20
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  struct UnityEngine_Purchasing_Product_o *v19; // x19
  __int64 v20; // x9
  UnityEngine_Purchasing_IStoreController_c **p_offset; // x10
  __int64 p_method; // x0
  struct PurchaseLogic_o *v23; // x8
  struct System_Action_string__o *logErrorOutputAction; // x20
  System_String_o *v25; // x0
  const MethodInfo *v26; // x7
  System_Enum_o v27; // [xsp+8h] [xbp-38h] BYREF
  int v28; // [xsp+18h] [xbp-28h]

  if ( (byte_49FBD1C & 1) == 0 )
  {
    sub_1B640C8(&AgeVerificationMenu_TypeInfo, requestResultStr);
    sub_1B640C8(&UnityEngine_Purchasing_IStoreController_TypeInfo, v6);
    sub_1B640C8(&PurchaseLogic_PurchaseAvailablilty_TypeInfo, v7);
    sub_1B640C8(&PurchaseLogic_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_10755/*"Purchasing product asychronously: '{0}'"*/, v9);
    sub_1B640C8(&StringLiteral_14878/*"Unexpected PurchaseAvailablilty value: "*/, v10);
    byte_49FBD1C = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_26:
    sub_1B64324(_4__this);
  _4__this = (PurchaseLogic_o *)PurchaseLogic__CheckBankStatusAndMonthlyLimit(
                                  _4__this,
                                  requestResultStr,
                                  this->fields.price,
                                  v3);
  v12 = 10;
  switch ( (int)_4__this )
  {
    case 1:
      v13 = this->fields.__4__this;
      if ( !v13 )
        goto LABEL_26;
      product = this->fields.product;
      if ( !product )
        goto LABEL_26;
      definition_k__BackingField = product->fields._definition_k__BackingField;
      if ( !definition_k__BackingField )
        goto LABEL_26;
      logOutputAction = v13->fields._logOutputAction;
      _4__this = (PurchaseLogic_o *)System_String__Format(
                                      (System_String_o *)StringLiteral_10755/*"Purchasing product asychronously: '{0}'"*/,
                                      (Il2CppObject *)definition_k__BackingField->fields._id_k__BackingField,
                                      0LL);
      if ( !logOutputAction )
        goto LABEL_26;
      _4__this = (PurchaseLogic_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, PurchaseLogic_o *, _QWORD))logOutputAction->fields.m_target)(
                                      logOutputAction->fields.original_method_info,
                                      _4__this,
                                      *(_QWORD *)&logOutputAction->fields.extra_arg);
      storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
      if ( !storeController )
        goto LABEL_26;
      klass = storeController->klass;
      v19 = this->fields.product;
      v20 = *(unsigned __int16 *)(&storeController->klass->_2.bitflags2 + 3);
      if ( !*(_WORD *)(&storeController->klass->_2.bitflags2 + 3) )
        goto LABEL_14;
      p_offset = (UnityEngine_Purchasing_IStoreController_c **)&klass->_1.interfaceOffsets->offset;
      break;
    case 2:
      v12 = 9;
      goto LABEL_20;
    case 3:
      goto LABEL_20;
    case 4:
      goto LABEL_18;
    default:
      v23 = this->fields.__4__this;
      if ( !v23 )
        goto LABEL_26;
      logErrorOutputAction = v23->fields._logErrorOutputAction;
      v28 = (int)_4__this;
      v27.klass = (System_Enum_c *)PurchaseLogic_PurchaseAvailablilty_TypeInfo;
      v27.monitor = (void *)-1LL;
      v25 = System_Enum__ToString(&v27, 0LL);
      _4__this = (PurchaseLogic_o *)System_String__Concat_61375396((System_String_o *)StringLiteral_14878/*"Unexpected PurchaseAvailablilty value: "*/, v25, 0LL);
      if ( !logErrorOutputAction )
        goto LABEL_26;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, PurchaseLogic_o *, _QWORD))logErrorOutputAction->fields.m_target)(
        logErrorOutputAction->fields.original_method_info,
        _4__this,
        *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
LABEL_18:
      v12 = 7;
LABEL_20:
      if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
      _4__this = (PurchaseLogic_o *)AgeVerificationMenu__GetCumulativeAmount(0LL);
      if ( !this->fields.__4__this )
        goto LABEL_26;
      PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(
        this->fields.__4__this,
        v12,
        (int32_t)_4__this,
        0,
        0,
        this->fields.shopId,
        0,
        v26);
      return;
  }
  while ( *(p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
  {
    --v20;
    p_offset += 2;
    if ( !v20 )
    {
LABEL_14:
      p_method = sub_1BB60A8(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 1LL);
      goto LABEL_25;
    }
  }
  p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
LABEL_25:
  (*(void (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, struct UnityEngine_Purchasing_Product_o *, _QWORD))p_method)(
    storeController,
    v19,
    *(_QWORD *)(p_method + 8));
}


void __fastcall PurchaseLogic___c__DisplayClass28_0___PurchaseIfAvailable_b__1(
        PurchaseLogic___c__DisplayClass28_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PurchaseLogic_o *CumulativeAmount; // x0
  const MethodInfo *v7; // x2
  PurchaseLogic_o *_4__this; // x19
  const MethodInfo *v9; // x7

  if ( (byte_49FBD1D & 1) == 0 )
  {
    sub_1B640C8(&AgeVerificationMenu_TypeInfo, result);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v5);
    byte_49FBD1D = 1;
  }
  CumulativeAmount = (PurchaseLogic_o *)System_String__op_Inequality(
                                          result,
                                          (System_String_o *)StringLiteral_21968/*"ng"*/,
                                          0LL);
  if ( ((unsigned __int8)CumulativeAmount & 1) != 0 )
  {
    if ( this->fields.__4__this )
    {
      PurchaseLogic__RequestGameServerBankStatus(CumulativeAmount, this->fields.checkBankStatusCallback, v7);
      return;
    }
LABEL_10:
    sub_1B64324(CumulativeAmount);
  }
  _4__this = this->fields.__4__this;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  CumulativeAmount = (PurchaseLogic_o *)AgeVerificationMenu__GetCumulativeAmount(0LL);
  if ( !_4__this )
    goto LABEL_10;
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(_4__this, 9, (int32_t)CumulativeAmount, 0, 0, 0, 0, v9);
}


void __fastcall PurchaseLogic___c__DisplayClass44_0___ctor(
        PurchaseLogic___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogic___c__DisplayClass44_0___GetFirstPurchaseResult_b__0(
        PurchaseLogic___c__DisplayClass44_0_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return System_String__op_Equality(x->fields.transactionId, this->fields.transactionId, 0LL);
}


void __fastcall PurchaseLogic___c__DisplayClass46_0___ctor(
        PurchaseLogic___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogic___c__DisplayClass46_0___OnEndPaymentStore_b__0(
        PurchaseLogic___c__DisplayClass46_0_o *this,
        UnityEngine_Purchasing_Product_o *p,
        const MethodInfo *method)
{
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8

  if ( !p )
    return 0;
  definition_k__BackingField = p->fields._definition_k__BackingField;
  if ( !definition_k__BackingField )
    sub_1B64324(this);
  return System_String__op_Equality(definition_k__BackingField->fields._id_k__BackingField, this->fields.productId, 0LL);
}


void __fastcall PurchaseLogic___c__DisplayClass59_0___ctor(
        PurchaseLogic___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogic___c__DisplayClass59_0___ProcessPurchase_b__0(
        PurchaseLogic___c__DisplayClass59_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  struct UnityEngine_Purchasing_Product_o *product; // x8
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8

  product = this->fields.product;
  if ( !product || (definition_k__BackingField = product->fields._definition_k__BackingField) == 0LL )
    sub_1B64324(this);
  return System_String__Equals_61384516(definition_k__BackingField->fields._id_k__BackingField, id, 4, 0LL);
}


void __fastcall PurchaseLogic___c__DisplayClass60_0___ctor(
        PurchaseLogic___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogic___c__DisplayClass60_0___OnPurchaseFailed_b__0(
        PurchaseLogic___c__DisplayClass60_0_o *this,
        BankShopEntity_o *bankShop,
        const MethodInfo *method)
{
  if ( !bankShop )
    sub_1B64324(this);
  return System_String__Equals_61384516(this->fields.productId, bankShop->fields.googleShopId, 4, 0LL);
}


void __fastcall PurchaseLogic___c__DisplayClass76_0___ctor(
        PurchaseLogic___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogic___c__DisplayClass76_0___SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0(
        PurchaseLogic___c__DisplayClass76_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  return System_String__Equals_61384516(id, this->fields.idStr, 4, 0LL);
}


void __fastcall PurchaseLogic___c__DisplayClass78_0___ctor(
        PurchaseLogic___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogic___c__DisplayClass78_0___RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0(
        PurchaseLogic___c__DisplayClass78_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  return System_String__op_Equality(id, this->fields.productId, 0LL);
}


void __fastcall PurchaseLogic___c__DisplayClass82_0___ctor(
        PurchaseLogic___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogic___c__DisplayClass82_0___RemovePreparePurchaseShopIdsInPlayerPrefs_b__0(
        PurchaseLogic___c__DisplayClass82_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  return System_String__op_Equality(id, this->fields.shopIdStr, 0LL);
}