void PurchaseLogic___ctor(PurchaseLogic_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  PurchaseLogic___c_c *v24; // x0
  struct PurchaseLogic___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__87_0; // x20
  Il2CppObject *v27; // x21
  struct PurchaseLogic___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  PurchaseLogic___c_c *v42; // x0
  struct PurchaseLogic___c_StaticFields *v43; // x8
  System_Action_object__o *_9__87_1; // x20
  Il2CppObject *v45; // x21
  struct PurchaseLogic___c_StaticFields *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  PurchaseLogic___c_c *v60; // x0
  struct PurchaseLogic___c_StaticFields *v61; // x8
  System_Action_object__o *_9__87_2; // x20
  Il2CppObject *v63; // x21
  struct PurchaseLogic___c_StaticFields *v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  __int64 v71; // x1
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  PurchaseLogic___c_c *v78; // x0
  struct PurchaseLogic___c_StaticFields *v79; // x8
  System_Action_T1__T2__o *_9__87_3; // x20
  Il2CppObject *v81; // x21
  struct PurchaseLogic___c_StaticFields *v82; // x0
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7

  if ( (byte_5937F7E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_string__TypeInfo);
    sub_21FFC50(&System_Action_string__float__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Product___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_Product__TypeInfo);
    sub_21FFC50(&Method_PurchaseLogic___c___ctor_b__87_0__);
    sub_21FFC50(&Method_PurchaseLogic___c___ctor_b__87_1__);
    sub_21FFC50(&Method_PurchaseLogic___c___ctor_b__87_2__);
    sub_21FFC50(&Method_PurchaseLogic___c___ctor_b__87_3__);
    sub_21FFC50(&PurchaseLogic___c_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937F7E = 1;
  }
  v3 = (System_Collections_Generic_HashSet_object__o *)sub_21FFEBC(System_Collections_Generic_HashSet_Product__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_4286740 *)Method_System_Collections_Generic_HashSet_Product___ctor__);
  this->fields._pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields._currentTransactionId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._currentTransactionId,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v24 = PurchaseLogic___c_TypeInfo;
  if ( !*(&PurchaseLogic___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo, v17);
    v24 = PurchaseLogic___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__87_0 = (System_Action_object__o *)static_fields->__9__87_0;
  if ( !_9__87_0 )
  {
    if ( !*(&v24->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v24, v17);
      static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__87_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
    System_Action_object____ctor(_9__87_0, v27, Method_PurchaseLogic___c___ctor_b__87_0__, 0);
    v28 = PurchaseLogic___c_TypeInfo->static_fields;
    v28->__9__87_0 = (struct System_Action_string__o *)_9__87_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v28->__9__87_0, (int32_t)_9__87_0, v29, v30, v31, v32, v33, v34);
  }
  this->fields._logOutputAction = (struct System_Action_string__o *)_9__87_0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._logOutputAction,
    (int32_t)_9__87_0,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v42 = PurchaseLogic___c_TypeInfo;
  if ( !*(&PurchaseLogic___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo, v35);
    v42 = PurchaseLogic___c_TypeInfo;
  }
  v43 = v42->static_fields;
  _9__87_1 = (System_Action_object__o *)v43->__9__87_1;
  if ( !_9__87_1 )
  {
    if ( !*(&v42->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v42, v35);
      v43 = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)v43->__9;
    _9__87_1 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
    System_Action_object____ctor(_9__87_1, v45, Method_PurchaseLogic___c___ctor_b__87_1__, 0);
    v46 = PurchaseLogic___c_TypeInfo->static_fields;
    v46->__9__87_1 = (struct System_Action_string__o *)_9__87_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v46->__9__87_1, (int32_t)_9__87_1, v47, v48, v49, v50, v51, v52);
  }
  this->fields._logErrorOutputAction = (struct System_Action_string__o *)_9__87_1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._logErrorOutputAction,
    (int32_t)_9__87_1,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v60 = PurchaseLogic___c_TypeInfo;
  if ( !*(&PurchaseLogic___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo, v53);
    v60 = PurchaseLogic___c_TypeInfo;
  }
  v61 = v60->static_fields;
  _9__87_2 = (System_Action_object__o *)v61->__9__87_2;
  if ( !_9__87_2 )
  {
    if ( !*(&v60->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v60, v53);
      v61 = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v63 = (Il2CppObject *)v61->__9;
    _9__87_2 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
    System_Action_object____ctor(_9__87_2, v63, Method_PurchaseLogic___c___ctor_b__87_2__, 0);
    v64 = PurchaseLogic___c_TypeInfo->static_fields;
    v64->__9__87_2 = (struct System_Action_string__o *)_9__87_2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v64->__9__87_2, (int32_t)_9__87_2, v65, v66, v67, v68, v69, v70);
  }
  this->fields._sendReportOutputAction = (struct System_Action_string__o *)_9__87_2;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._sendReportOutputAction,
    (int32_t)_9__87_2,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v78 = PurchaseLogic___c_TypeInfo;
  if ( !*(&PurchaseLogic___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo, v71);
    v78 = PurchaseLogic___c_TypeInfo;
  }
  v79 = v78->static_fields;
  _9__87_3 = (System_Action_T1__T2__o *)v79->__9__87_3;
  if ( !_9__87_3 )
  {
    if ( !*(&v78->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v78, v71);
      v79 = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v81 = (Il2CppObject *)v79->__9;
    _9__87_3 = (System_Action_T1__T2__o *)sub_21FFEBC(System_Action_string__float__TypeInfo);
    System_Action_object__float____ctor(_9__87_3, v81, Method_PurchaseLogic___c___ctor_b__87_3__, 0);
    v82 = PurchaseLogic___c_TypeInfo->static_fields;
    v82->__9__87_3 = (struct System_Action_string__float__o *)_9__87_3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v82->__9__87_3, (int32_t)_9__87_3, v83, v84, v85, v86, v87, v88);
  }
  this->fields._logErrorOutputActionSampledByRatio = (struct System_Action_string__float__o *)_9__87_3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._logErrorOutputActionSampledByRatio,
    (int32_t)_9__87_3,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_object__o *v14; // x20
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  PurchaseLogic_o *v20; // x0
  const MethodInfo *v21; // x2

  if ( (byte_5937F78 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Distinct_string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_string___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    byte_5937F78 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(productId, 0);
  if ( !IsNullOrEmpty )
  {
    DeferredPurchaseProductIdsFromPlayerPrefs = (System_Collections_Generic_List_object__o *)PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                                                               (PurchaseLogic_o *)IsNullOrEmpty,
                                                                                               v5);
    if ( !DeferredPurchaseProductIdsFromPlayerPrefs
      || (v14 = DeferredPurchaseProductIdsFromPlayerPrefs,
          items = DeferredPurchaseProductIdsFromPlayerPrefs->fields._items,
          v16 = Method_System_Collections_Generic_List_string__Add__,
          ++DeferredPurchaseProductIdsFromPlayerPrefs->fields._version,
          !items) )
    {
      sub_21FFECC(DeferredPurchaseProductIdsFromPlayerPrefs, v7);
    }
    size = DeferredPurchaseProductIdsFromPlayerPrefs->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        DeferredPurchaseProductIdsFromPlayerPrefs,
        (Il2CppObject *)productId,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &items->obj.klass + size;
      v14->fields._size = size + 1;
      v18[4] = (Il2CppClass *)productId;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)productId, v8, v9, v10, v11, v12, v13);
    }
    v19 = System_Linq_Enumerable__Distinct_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v14,
            (const MethodInfo_38491DC *)Method_System_Linq_Enumerable_Distinct_string___);
    v20 = (PurchaseLogic_o *)System_Linq_Enumerable__ToList_object_(
                               v19,
                               (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_string___);
    PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(
      v20,
      (System_Collections_Generic_List_string__o *)v20,
      v21);
  }
}


void PurchaseLogic__AddPendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0

  if ( (byte_5937F61 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Product__Add__);
    byte_5937F61 = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_21FFECC(0, product);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_object__o *)pendingProducts,
    (Il2CppObject *)product,
    (const MethodInfo_4287934 *)Method_System_Collections_Generic_HashSet_Product__Add__);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_object__o *v14; // x19
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  PurchaseLogic_o *v20; // x0
  const MethodInfo *v21; // x2
  int32_t v22; // [xsp+Ch] [xbp-24h] BYREF

  v22 = shopId;
  if ( (byte_5937F7C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Distinct_string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_string___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    byte_5937F7C = 1;
  }
  if ( shopId >= 1 )
  {
    v4 = (PurchaseLogic_o *)System_Int32__ToString((int32_t)&v22, 0);
    PreparePurchaseShopIdsFromPlayerPrefs = (System_Collections_Generic_List_object__o *)PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs(
                                                                                           v4,
                                                                                           v5);
    if ( !PreparePurchaseShopIdsFromPlayerPrefs
      || (v14 = PreparePurchaseShopIdsFromPlayerPrefs,
          items = PreparePurchaseShopIdsFromPlayerPrefs->fields._items,
          v16 = Method_System_Collections_Generic_List_string__Add__,
          ++PreparePurchaseShopIdsFromPlayerPrefs->fields._version,
          !items) )
    {
      sub_21FFECC(PreparePurchaseShopIdsFromPlayerPrefs, v7);
    }
    size = PreparePurchaseShopIdsFromPlayerPrefs->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        PreparePurchaseShopIdsFromPlayerPrefs,
        (Il2CppObject *)v4,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &items->obj.klass + size;
      v14->fields._size = size + 1;
      v18[4] = (Il2CppClass *)v4;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v4, v8, v9, v10, v11, v12, v13);
    }
    v19 = System_Linq_Enumerable__Distinct_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v14,
            (const MethodInfo_38491DC *)Method_System_Linq_Enumerable_Distinct_string___);
    v20 = (PurchaseLogic_o *)System_Linq_Enumerable__ToList_object_(
                               v19,
                               (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_string___);
    PurchaseLogic__SavePreparePurchaseShopIdsToPlayerPrefs(v20, (System_Collections_Generic_List_string__o *)v20, v21);
  }
}


int32_t PurchaseLogic__CheckBankStatusAndMonthlyLimit(
        PurchaseLogic_o *this,
        System_String_o *result,
        int32_t price,
        const MethodInfo *method)
{
  System_String_o *v6; // x19
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_object__object__o *v9; // x22
  struct PurchaseLogic___c_StaticFields **Item; // x0
  __int64 v11; // x1
  System_String_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // w21
  PurchaseLogic_o *v15; // x0
  const MethodInfo *v16; // x2
  int32_t v17; // w22
  System_String_o *v18; // x0
  int32_t v19; // w20
  System_String_o *v20; // x0
  __int64 v21; // x1
  Il2CppObject *Instance; // x20
  struct PurchaseLogic___c_StaticFields *static_fields; // x8
  System_Action_o *_9__32_0; // x21
  Il2CppObject *v25; // x22
  struct PurchaseLogic___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  Il2CppObject *v34; // x20
  struct PurchaseLogic___c_StaticFields *v35; // x8
  System_Action_o *_9__32_1; // x21
  Il2CppObject *v37; // x22
  struct PurchaseLogic___c_StaticFields *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7

  if ( (byte_5937F5E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AgeVerificationMenu_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__32_0__);
    sub_21FFC50(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__32_1__);
    sub_21FFC50(&PurchaseLogic___c_TypeInfo);
    sub_21FFC50(&StringLiteral_12871/*"STONE_PURCHASE_RESULT_BLOCK"*/);
    sub_21FFC50(&StringLiteral_23794/*"perMonthAmount"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_22593/*"message"*/);
    sub_21FFC50(&StringLiteral_17708/*"bankAvailable"*/);
    byte_5937F5E = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, result);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12871/*"STONE_PURCHASE_RESULT_BLOCK"*/, 0);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
    goto LABEL_33;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v7);
  Dictionary = JsonManager__getDictionary(result, 0);
  v9 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
  if ( !Dictionary
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
          (Il2CppObject *)StringLiteral_23794/*"perMonthAmount"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    goto LABEL_33;
  }
  Item = (struct PurchaseLogic___c_StaticFields **)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                     v9,
                                                     (Il2CppObject *)StringLiteral_23794/*"perMonthAmount"*/,
                                                     (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_48;
  v12 = (System_String_o *)((__int64 (__fastcall *)(struct PurchaseLogic___c_StaticFields **, struct System_Action_string__o *))(*Item)[5].__9__87_1)(
                             Item,
                             (*Item)[5].__9__87_2);
  v14 = System_Int32__Parse(v12, 0);
  if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v13);
  AgeVerificationMenu__SaveCumulativeAmount(v14, 0);
  if ( !PurchaseLogic__IsLimitOver(v15, v14 + price, v16) )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v9,
           (Il2CppObject *)StringLiteral_17708/*"bankAvailable"*/,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (struct PurchaseLogic___c_StaticFields **)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                         v9,
                                                         (Il2CppObject *)StringLiteral_17708/*"bankAvailable"*/,
                                                         (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_48;
      v18 = (System_String_o *)((__int64 (__fastcall *)(struct PurchaseLogic___c_StaticFields **, struct System_Action_string__o *))(*Item)[5].__9__87_1)(
                                 Item,
                                 (*Item)[5].__9__87_2);
      v19 = System_Int32__Parse(v18, 0);
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             v9,
             (Il2CppObject *)StringLiteral_22593/*"message"*/,
             (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (struct PurchaseLogic___c_StaticFields **)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                           v9,
                                                           (Il2CppObject *)StringLiteral_22593/*"message"*/,
                                                           (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_48;
        v20 = (System_String_o *)((__int64 (__fastcall *)(struct PurchaseLogic___c_StaticFields **, struct System_Action_string__o *))(*Item)[5].__9__87_1)(
                                   Item,
                                   (*Item)[5].__9__87_2);
        v6 = v20;
        if ( !v19 )
        {
          if ( !System_String__IsNullOrEmpty(v20, 0) )
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
            {
              Item = (struct PurchaseLogic___c_StaticFields **)PurchaseLogic___c_TypeInfo;
              if ( !*(&PurchaseLogic___c_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo, v11);
                Item = (struct PurchaseLogic___c_StaticFields **)PurchaseLogic___c_TypeInfo;
              }
              static_fields = Item[23];
              _9__32_0 = static_fields->__9__32_0;
              if ( !_9__32_0 )
              {
                if ( !*((_DWORD *)Item + 57) )
                {
                  j_il2cpp_runtime_class_init_0(Item, v11);
                  static_fields = PurchaseLogic___c_TypeInfo->static_fields;
                }
                v25 = (Il2CppObject *)static_fields->__9;
                _9__32_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                System_Action___ctor(
                  _9__32_0,
                  v25,
                  Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__32_0__,
                  0);
                v26 = PurchaseLogic___c_TypeInfo->static_fields;
                v26->__9__32_0 = _9__32_0;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&v26->__9__32_0,
                  (int32_t)_9__32_0,
                  v27,
                  v28,
                  v29,
                  v30,
                  v31,
                  v32);
              }
              if ( Instance )
              {
                v17 = 1;
                CommonUI__OpenNotificationDialog(
                  (CommonUI_o *)Instance,
                  0,
                  v6,
                  _9__32_0,
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
                return v17;
              }
LABEL_48:
              sub_21FFECC(Item, v11);
            }
          }
          return 1;
        }
      }
      else if ( !v19 )
      {
        return 1;
      }
    }
LABEL_33:
    if ( !System_String__IsNullOrEmpty(v6, 0) )
    {
      v34 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v34, 0, 0) )
      {
        Item = (struct PurchaseLogic___c_StaticFields **)PurchaseLogic___c_TypeInfo;
        if ( !*(&PurchaseLogic___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo, v11);
          Item = (struct PurchaseLogic___c_StaticFields **)PurchaseLogic___c_TypeInfo;
        }
        v35 = Item[23];
        _9__32_1 = v35->__9__32_1;
        if ( !_9__32_1 )
        {
          if ( !*((_DWORD *)Item + 57) )
          {
            j_il2cpp_runtime_class_init_0(Item, v11);
            v35 = PurchaseLogic___c_TypeInfo->static_fields;
          }
          v37 = (Il2CppObject *)v35->__9;
          _9__32_1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(_9__32_1, v37, Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__32_1__, 0);
          v38 = PurchaseLogic___c_TypeInfo->static_fields;
          v38->__9__32_1 = _9__32_1;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v38->__9__32_1,
            (int32_t)_9__32_1,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44);
        }
        if ( !v34 )
          goto LABEL_48;
        CommonUI__OpenNotificationDialog((CommonUI_o *)v34, 0, v6, _9__32_1, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
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
    return dword_ED11F8[failureReason];
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

  if ( (byte_5937F64 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Product__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Product__Remove__);
    sub_21FFC50(&UnityEngine_Purchasing_IStoreController_TypeInfo);
    sub_21FFC50(&PurchaseLogic_TypeInfo);
    byte_5937F64 = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_15;
  if ( !System_Collections_Generic_HashSet_object___Contains(
          (System_Collections_Generic_HashSet_object__o *)pendingProducts,
          (Il2CppObject *)product,
          (const MethodInfo_4286E44 *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
    return;
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts
    || (pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)System_Collections_Generic_HashSet_object___Remove(
                                                                                    (System_Collections_Generic_HashSet_object__o *)pendingProducts,
                                                                                    (Il2CppObject *)product,
                                                                                    (const MethodInfo_4287014 *)Method_System_Collections_Generic_HashSet_Product__Remove__),
        (storeController = PurchaseLogic_TypeInfo->static_fields->_storeController) == 0) )
  {
LABEL_15:
    sub_21FFECC(pendingProducts, product);
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
    v10 = sub_2237E2C(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 2);
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
  MissionNaviTransitionBoardItem_o *p_buyProductFinishedAction; // x19

  p_buyProductFinishedAction = (MissionNaviTransitionBoardItem_o *)&this->fields._buyProductFinishedAction;
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
  sub_21FFBF4(
    p_buyProductFinishedAction,
    0,
    *(System_String_o **)&perMonthAmount,
    *(System_String_o **)&freeStoneNum,
    chargeStoneNum,
    shopId,
    isSentGift,
    (bool)method);
}


PurchaseLogic_ReceiptContents_o *PurchaseLogic__ExtractReceiptContents(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  PurchaseLogic_ReceiptContents_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_5937F65 & 1) == 0 )
  {
    sub_21FFC50(&PurchaseLogic_ReceiptContents_TypeInfo);
    byte_5937F65 = 1;
  }
  v3 = (PurchaseLogic_ReceiptContents_o *)sub_21FFEBC(PurchaseLogic_ReceiptContents_TypeInfo);
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
  int32_t purchasedBankShopId; // w9
  bool v10; // w8

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
        sub_21FFED4(this);
      v8 = purchaseResultArray->m_Items[0];
      if ( !v8 )
        sub_21FFECC(this, purchaseResultArray);
      *freeStoneNum = v8->fields.freeStoneNum;
      *chargeStoneNum = v8->fields.chargeStoneNum;
      purchasedBankShopId = v8->fields.purchasedBankShopId;
      v10 = v8->fields.isSentPresentBox;
      *shopId = purchasedBankShopId;
      *isSentPresentBox = v10;
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

  if ( (byte_5937F72 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___);
    this = (PurchaseLogic_o *)sub_21FFC50(&PurchaseLogic_TypeInfo);
    byte_5937F72 = 1;
  }
  if ( !PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider )
    return 0;
  IsAppleDevice = PurchaseLogic__IsAppleDevice((const MethodInfo *)this);
  if ( !IsAppleDevice )
    return 0;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_21FFECC(IsAppleDevice, v3);
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
    v11 = sub_2237E2C(storeExtensionProvider, v8, v9);
  }
  v13 = sub_21FFD9C(*(_QWORD *)(v11 + 8), v6);
  return (UnityEngine_Purchasing_IAppleExtensions_o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *))(v13 + 8))(storeExtensionProvider);
}


UnityEngine_Purchasing_ConfigurationBuilder_o *PurchaseLogic__GetConfigurationBuilder(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  UnityEngine_Purchasing_StandardPurchasingModule_o *v2; // x0
  __int64 v3; // x1
  long double v4; // q0
  _QWORD *v5; // x20
  UnityEngine_Purchasing_Extension_IPurchasingModule_o *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_5937F58 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_IPurchasingModule___);
    sub_21FFC50(&UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo);
    byte_5937F58 = 1;
  }
  if ( !*(&UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo, method);
  v2 = UnityEngine_Purchasing_StandardPurchasingModule__Instance(0);
  v5 = Method_System_Array_Empty_IPurchasingModule___;
  v6 = (UnityEngine_Purchasing_Extension_IPurchasingModule_o *)v2;
  v7 = *((_QWORD *)Method_System_Array_Empty_IPurchasingModule___ + 7);
  if ( !v7 )
  {
    sub_2237B54(Method_System_Array_Empty_IPurchasingModule___);
    v7 = v5[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_2237AF8(v4);
  if ( !*(_DWORD *)(v8 + 228) )
    *(__n128 *)&v4 = j_il2cpp_runtime_class_init_0(v8, v3);
  v9 = *(_QWORD *)(v5[7] + 16LL);
  if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
    v9 = sub_2237AF8(v4);
  return UnityEngine_Purchasing_ConfigurationBuilder__Instance(
           v6,
           **(UnityEngine_Purchasing_Extension_IPurchasingModule_array ***)(v9 + 184),
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

  if ( (byte_5937F76 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_string___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&StringLiteral_5392/*"DeferredPurchaseProductIds"*/);
    byte_5937F76 = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_5392/*"DeferredPurchaseProductIds"*/,
             **(System_String_o ***)(qword_594C0B8 + 184),
             0);
  v3 = System_String__op_Inequality(String, **(System_String_o ***)(qword_594C0B8 + 184), 0);
  if ( v3 )
  {
    if ( !String )
      sub_21FFECC(v3, v4);
    v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String, 0x3Bu, 0, 0);
    return (System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                          v5,
                                                          (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_string___);
  }
  else
  {
    v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x0
  System_Func_object__bool__o *v16; // x20

  if ( (byte_5937F69 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____91526912);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_21FFC50(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    sub_21FFC50(&Method_PurchaseLogic___c__DisplayClass45_0__GetFirstPurchaseResult_b__0__);
    sub_21FFC50(&PurchaseLogic___c__DisplayClass45_0_TypeInfo);
    byte_5937F69 = 1;
  }
  v6 = sub_21FFEBC(PurchaseLogic___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_21FFECC(v7, v8);
  *(_QWORD *)(v6 + 16) = transactionId;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)transactionId, v9, v10, v11, v12, v13, v14);
  if ( !purchaseResultArray )
    return 0;
  if ( !PurchaseLogic__IsAppleDevice(v15) )
    return (PurchaseByBank_UnityIap_Request_PurchaseResult_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                                 (const MethodInfo_384E0B0 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___);
  v16 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v6,
    Method_PurchaseLogic___c__DisplayClass45_0__GetFirstPurchaseResult_b__0__,
    0);
  return (PurchaseByBank_UnityIap_Request_PurchaseResult_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                               (System_Func_TSource__bool__o *)v16,
                                                               (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____91526912);
}


PurchaseLogic_o *PurchaseLogic__GetInstance(const MethodInfo *method)
{
  PurchaseLogic_o *v1; // x19
  const MethodInfo *v2; // x1

  if ( (byte_5937F56 & 1) == 0 )
  {
    sub_21FFC50(&PurchaseLogicAndroid_TypeInfo);
    byte_5937F56 = 1;
  }
  v1 = (PurchaseLogic_o *)sub_21FFEBC(PurchaseLogicAndroid_TypeInfo);
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

  if ( (byte_5937F7A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_string___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&StringLiteral_11171/*"PreparePurchaseShopIds"*/);
    byte_5937F7A = 1;
  }
  v2 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_11171/*"PreparePurchaseShopIds"*/,
             **(System_String_o ***)(qword_594C0B8 + 184),
             0);
  v4 = System_String__op_Inequality(String, **(System_String_o ***)(qword_594C0B8 + 184), 0);
  if ( !v4 )
    return (System_Collections_Generic_List_string__o *)v2;
  if ( !String )
    sub_21FFECC(v4, v5);
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String, 0x3Bu, 0, 0);
  return (System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                        v6,
                                                        (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_string___);
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
  if ( (byte_5937F6E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_21FFC50(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_6327/*"Entity is not found. bankShopId="*/);
    byte_5937F6E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             bankShopId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
  if ( Entity )
    return (int32_t)Entity[3].monitor;
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v10 = System_Int32__ToString((int32_t)&v11, 0);
  Instance = (DataManager_o *)System_String__Concat_75438412((System_String_o *)StringLiteral_6327/*"Entity is not found. bankShopId="*/, v10, 0);
  if ( !logErrorOutputAction )
LABEL_9:
    sub_21FFECC(Instance, v6);
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
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5937F57 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    byte_5937F57 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( (byte_5937F59 & 1) == 0 )
  {
    sub_21FFC50(&PurchaseLogic_TypeInfo);
    byte_5937F59 = 1;
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
    if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v5);
      v6 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_object__o *)v6->static_fields->ConsumableProductIdCollection;
    if ( !ConsumableProductIdCollection )
      sub_21FFECC(0, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      ConsumableProductIdCollection,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v10,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
      if ( !v8 )
        break;
      if ( !v4 )
        sub_21FFECC(v8, v9);
      UnityEngine_Purchasing_ConfigurationBuilder__AddProduct(v4, (System_String_o *)v10.fields._current, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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
    sub_21FFECC(this, 0);
  PurchaseLogic__InitiatePurchase_48383160(
    this,
    bankShop->fields.id,
    bankShop->fields.googleShopId,
    bankShop->fields.googlePrice,
    finishedAction,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void PurchaseLogic__InitiatePurchase_48383160(
        PurchaseLogic_o *this,
        int32_t shopId,
        System_String_o *productId,
        int32_t price,
        PurchaseLogic_ProductFinishedAction_o *finishedAction,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  __int64 v13; // x0
  __int64 v14; // x1
  struct PurchaseLogic_StaticFields *static_fields; // x8
  struct System_Action_string__o *logErrorOutputAction; // x8
  const MethodInfo *v17; // x7
  PurchaseLogic_o *v18; // x0
  int32_t v19; // w1
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x8
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x23
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  struct System_Action_string__o *v26; // x8
  __int64 *v27; // x9
  struct UnityEngine_Purchasing_IStoreController_o *v28; // x23
  UnityEngine_Purchasing_IStoreController_c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  struct System_Action_string__o *v33; // x8
  const MethodInfo *v34; // x4

  if ( (byte_5937F5A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Purchasing_IStoreController_TypeInfo);
    sub_21FFC50(&PurchaseLogic_TypeInfo);
    sub_21FFC50(&StringLiteral_7982/*"InitiatePurchase: FAIL. PurchasingFramework not initialized."*/);
    sub_21FFC50(&StringLiteral_7983/*"InitiatePurchase: FAIL. StoreController is null."*/);
    sub_21FFC50(&StringLiteral_7981/*"InitiatePurchase: FAIL. Not purchasing product, either is not found or is not available for purchase"*/);
    sub_21FFC50(&StringLiteral_7984/*"InitiatePurchase: FAIL. StoreController.products is null."*/);
    sub_21FFC50(&StringLiteral_7985/*"InitiatePurchase: Initialized With Mismatched ObfuscatedAccountId."*/);
    byte_5937F5A = 1;
  }
  this->fields._buyProductFinishedAction = finishedAction;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._buyProductFinishedAction,
    (int32_t)finishedAction,
    productId,
    *(System_String_o **)&price,
    (int32_t)finishedAction,
    (int32_t)method,
    v6,
    v7);
  if ( (byte_5937F59 & 1) == 0 )
  {
    v13 = sub_21FFC50(&PurchaseLogic_TypeInfo);
    byte_5937F59 = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( logErrorOutputActionSampledByRatio )
    {
      ((void (__fastcall *)(intptr_t, __int64, intptr_t, float))logErrorOutputActionSampledByRatio->fields.invoke_impl)(
        logErrorOutputActionSampledByRatio->fields.method_code,
        StringLiteral_7982/*"InitiatePurchase: FAIL. PurchasingFramework not initialized."*/,
        logErrorOutputActionSampledByRatio->fields.method,
        0.01);
      v18 = this;
      v19 = 11;
      goto LABEL_33;
    }
LABEL_39:
    sub_21FFECC(v13, v14);
  }
  v13 = ((__int64 (__fastcall *)(PurchaseLogic_o *, const MethodInfo *))this->klass->vtable._16_IsInitializedWithMismatchedObfuscatedAccountId.methodPtr)(
          this,
          this->klass->vtable._16_IsInitializedWithMismatchedObfuscatedAccountId.method);
  if ( (v13 & 1) != 0 )
  {
    logErrorOutputAction = this->fields._logErrorOutputAction;
    if ( logErrorOutputAction )
    {
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))logErrorOutputAction->fields.invoke_impl)(
        logErrorOutputAction->fields.method_code,
        StringLiteral_7985/*"InitiatePurchase: Initialized With Mismatched ObfuscatedAccountId."*/,
        logErrorOutputAction->fields.method);
      v18 = this;
      v19 = 14;
LABEL_33:
      PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(v18, v19, 0, 0, 0, 0, 0, v17);
      return;
    }
    goto LABEL_39;
  }
  storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
  if ( !storeController )
  {
    v26 = this->fields._logErrorOutputAction;
    if ( !v26 )
      goto LABEL_39;
    v27 = &StringLiteral_7983/*"InitiatePurchase: FAIL. StoreController is null."*/;
LABEL_30:
    v13 = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))v26->fields.invoke_impl)(
            v26->fields.method_code,
            *v27,
            v26->fields.method);
LABEL_31:
    v33 = this->fields._logErrorOutputAction;
    if ( v33 )
    {
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v33->fields.invoke_impl)(
        v33->fields.method_code,
        StringLiteral_7981/*"InitiatePurchase: FAIL. Not purchasing product, either is not found or is not available for purchase"*/,
        v33->fields.method);
      v18 = this;
      v19 = 12;
      goto LABEL_33;
    }
    goto LABEL_39;
  }
  klass = storeController->klass;
  v23 = *(unsigned __int16 *)&storeController->klass->_2.rank;
  if ( *(_WORD *)&storeController->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IStoreController_c **)p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_17;
    }
    v25 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_17:
    v25 = sub_2237E2C(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0);
  }
  v13 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))v25)(
          storeController,
          *(_QWORD *)(v25 + 8));
  if ( !v13 )
  {
    v26 = this->fields._logErrorOutputAction;
    if ( !v26 )
      goto LABEL_39;
    v27 = &StringLiteral_7984/*"InitiatePurchase: FAIL. StoreController.products is null."*/;
    goto LABEL_30;
  }
  v28 = PurchaseLogic_TypeInfo->static_fields->_storeController;
  if ( !v28 )
    goto LABEL_39;
  v29 = v28->klass;
  v30 = *(unsigned __int16 *)&v28->klass->_2.rank;
  if ( *(_WORD *)&v28->klass->_2.rank )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IStoreController_c **)v31 - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_27;
    }
    v32 = (__int64)&v29->vtable[*v31];
  }
  else
  {
LABEL_27:
    v32 = sub_2237E2C(v28, UnityEngine_Purchasing_IStoreController_TypeInfo, 0);
  }
  v13 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))v32)(
          v28,
          *(_QWORD *)(v32 + 8));
  if ( !v13 )
    goto LABEL_39;
  v13 = (__int64)UnityEngine_Purchasing_ProductCollection__WithID(
                   (UnityEngine_Purchasing_ProductCollection_o *)v13,
                   productId,
                   0);
  if ( !v13 || !*(_BYTE *)(v13 + 32) )
    goto LABEL_31;
  PurchaseLogic__PurchaseIfAvailable(this, shopId, (UnityEngine_Purchasing_Product_o *)v13, price, v34);
}


bool PurchaseLogic__IsAlreadyInitializedWithObfuscatedAccountId(PurchaseLogic_o *this, const MethodInfo *method)
{
  return 0;
}


bool PurchaseLogic__IsAppleDevice(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_5937F6C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    byte_5937F6C = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v1);
  if ( UnityEngine_Application__get_platform(0) == 8 )
    return 1;
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v2);
  return UnityEngine_Application__get_platform(0) == 1;
}


bool PurchaseLogic__IsDeferredPurchaseExists(PurchaseLogic_o *this, const MethodInfo *method)
{
  return 0;
}


bool PurchaseLogic__IsGooglePlayDevice(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_5937F6D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    byte_5937F6D = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v1);
  return UnityEngine_Application__get_platform(0) == 11;
}


bool PurchaseLogic__IsInitializedWithMismatchedObfuscatedAccountId(PurchaseLogic_o *this, const MethodInfo *method)
{
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool PurchaseLogic__IsLimitOver(PurchaseLogic_o *this, int32_t value, const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  int32_t Limit; // w0

  if ( (byte_5937F5F & 1) == 0 )
  {
    sub_21FFC50(&AgeVerificationMenu_TypeInfo);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    byte_5937F5F = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, *(_QWORD *)&value);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
    return 1;
  if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, *(_QWORD *)&value);
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
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0

  if ( (byte_5937F63 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Product__Contains__);
    byte_5937F63 = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_21FFECC(0, prodcut);
  return System_Collections_Generic_HashSet_object___Contains(
           (System_Collections_Generic_HashSet_object__o *)pendingProducts,
           (Il2CppObject *)prodcut,
           (const MethodInfo_4286E44 *)Method_System_Collections_Generic_HashSet_Product__Contains__);
}


bool PurchaseLogic__IsPurchasingFrameworkInitialized(PurchaseLogic_o *this, const MethodInfo *method)
{
  struct PurchaseLogic_StaticFields *static_fields; // x8

  if ( (byte_5937F59 & 1) == 0 )
  {
    sub_21FFC50(&PurchaseLogic_TypeInfo);
    byte_5937F59 = 1;
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
  struct PurchaseLogic___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__43_0; // x20
  Il2CppObject *v7; // x21
  struct PurchaseLogic___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5937F67 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_21FFC50(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    sub_21FFC50(&Method_PurchaseLogic___c__IsServerCommitedPurchase_b__43_0__);
    sub_21FFC50(&PurchaseLogic___c_TypeInfo);
    byte_5937F67 = 1;
  }
  if ( !purchaseResultArray )
    return 0;
  v4 = PurchaseLogic___c_TypeInfo;
  if ( !*(&PurchaseLogic___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo, purchaseResultArray);
    v4 = PurchaseLogic___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__43_0 = (System_Func_object__bool__o *)static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, purchaseResultArray);
      static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__43_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__43_0, v7, Method_PurchaseLogic___c__IsServerCommitedPurchase_b__43_0__, 0);
    v8 = PurchaseLogic___c_TypeInfo->static_fields;
    v8->__9__43_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__43_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__43_0, (int32_t)_9__43_0, v9, v10, v11, v12, v13, v14);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
           (System_Func_TSource__bool__o *)_9__43_0,
           (const MethodInfo_3831808 *)Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___);
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
  if ( (byte_5937F71 & 1) == 0 )
  {
    this = (PurchaseLogic_o *)sub_21FFC50(&StringLiteral_10273/*"OnDeferred product="*/);
    byte_5937F71 = 1;
  }
  if ( !product
    || (metadata_k__BackingField = product->fields._metadata_k__BackingField) == 0
    || (logOutputAction = v4->fields._logOutputAction,
        this = (PurchaseLogic_o *)System_String__Concat_75438412(
                                    (System_String_o *)StringLiteral_10273/*"OnDeferred product="*/,
                                    metadata_k__BackingField->fields._localizedTitle_k__BackingField,
                                    0),
        !logOutputAction) )
  {
    sub_21FFECC(this, product);
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o **v22; // x25
  struct System_Action_string__o *logOutputAction; // x28
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x26
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  int32_t v44; // w1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  int32_t v57; // w1
  struct System_Action_string__o *v58; // x21
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x21
  System_Func_object__bool__o *v60; // x22
  Il2CppObject *v61; // x0
  __int64 v62; // x1
  Il2CppObject *Instance; // x22
  Il2CppObject *v64; // x22
  PurchaseLogic_ProductFinishedAction_o *v65; // x23
  const MethodInfo *v66; // x3
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  struct PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray; // x1
  Il2CppMethodPointer methodPtr; // x9
  const MethodInfo *v75; // x6
  const MethodInfo *v76; // x7
  System_Enum_o v77; // [xsp+8h] [xbp-88h] BYREF
  int32_t v78; // [xsp+18h] [xbp-78h]
  bool isSentGift[4]; // [xsp+20h] [xbp-70h] BYREF
  int32_t shopId; // [xsp+24h] [xbp-6Ch] BYREF
  __int64 v81; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_5937F6B & 1) == 0 )
  {
    sub_21FFC50(&Method_CommonUI_OpenStonePurchaseReciveMenu___91503304);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_Product___);
    sub_21FFC50(&System_Func_Product__bool__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PurchaseLogic_ProductFinishedAction_TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_Result_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&Method_PurchaseLogic___c__DisplayClass47_0__OnEndPaymentStore_b__0__);
    sub_21FFC50(&PurchaseLogic___c__DisplayClass47_0_TypeInfo);
    sub_21FFC50(&StringLiteral_16662/*"] "*/);
    sub_21FFC50(&StringLiteral_16396/*"[ "*/);
    sub_21FFC50(&StringLiteral_11252/*"PurchaseLogic:OnEndPaymentStore result "*/);
    sub_21FFC50(&StringLiteral_4827/*"Confirming purchase of "*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937F6B = 1;
  }
  v81 = 0;
  shopId = 0;
  isSentGift[0] = 0;
  v13 = sub_21FFEBC(PurchaseLogic___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_26;
  *(_QWORD *)(v13 + 16) = productId;
  v22 = (System_String_o **)(v13 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)productId, v16, v17, v18, v19, v20, v21);
  logOutputAction = this->fields._logOutputAction;
  v14 = (System_String_o *)sub_21FFD10(string___TypeInfo, 5);
  if ( !v14 )
    goto LABEL_26;
  v30 = v14;
  if ( !LODWORD(v14[1].klass) )
    goto LABEL_25;
  v31 = StringLiteral_11252/*"PurchaseLogic:OnEndPaymentStore result "*/;
  v14[1].monitor = (void *)StringLiteral_11252/*"PurchaseLogic:OnEndPaymentStore result "*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14[1].monitor, v31, v24, v25, v26, v27, v28, v29);
  v78 = purchaseResult;
  v77.klass = (System_Enum_c *)PurchaseBehaviour_Result_TypeInfo;
  v77.monitor = (void *)-1LL;
  v14 = System_Enum__ToString(&v77, 0);
  if ( ((__int64)v30[1].klass & 0xFFFFFFFE) == 0
    || (v30[1].fields = (System_String_Fields)v14,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v30[1].fields, (int32_t)v14, v32, v33, v34, v35, v36, v37),
        LODWORD(v30[1].klass) <= 2)
    || (v44 = StringLiteral_16396/*"[ "*/,
        v30[2].klass = (System_String_c *)StringLiteral_16396/*"[ "*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v30[2], v44, v38, v39, v40, v41, v42, v43),
        ((__int64)v30[1].klass & 0xFFFFFFFC) == 0)
    || (v30[2].monitor = resultData,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v30[2].monitor,
          (int32_t)resultData,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50),
        LODWORD(v30[1].klass) <= 4) )
  {
LABEL_25:
    sub_21FFED4(v14);
  }
  v57 = StringLiteral_16662/*"] "*/;
  v30[2].fields = (System_String_Fields)StringLiteral_16662/*"] "*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v30[2].fields, v57, v51, v52, v53, v54, v55, v56);
  v14 = System_String__Concat_75483816((System_String_array *)v30, 0);
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
  if ( System_String__op_Inequality(*v22, (System_String_o *)StringLiteral_1/*""*/, 0) )
    ((void (__fastcall *)(PurchaseLogic_o *, System_String_o *, System_String_o *, const MethodInfo *))this->klass->vtable._24_SendPurchaseAction.methodPtr)(
      this,
      *v22,
      transactionId,
      this->klass->vtable._24_SendPurchaseAction.method);
  v58 = this->fields._logOutputAction;
  v14 = System_String__Concat_75438412((System_String_o *)StringLiteral_4827/*"Confirming purchase of "*/, *v22, 0);
  if ( !v58 )
LABEL_26:
    sub_21FFECC(v14, v15);
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))v58->fields.invoke_impl)(
    v58->fields.method_code,
    v14,
    v58->fields.method);
  pendingProducts = this->fields._pendingProducts;
  v60 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_Product__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v60,
    (Il2CppObject *)v13,
    Method_PurchaseLogic___c__DisplayClass47_0__OnEndPaymentStore_b__0__,
    0);
  v61 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
          (System_Collections_Generic_IEnumerable_TSource__o *)pendingProducts,
          (System_Func_TSource__bool__o *)v60,
          (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_Product___);
  if ( v61 )
    ((void (__fastcall *)(PurchaseLogic_o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._18_ConfirmPurchase.methodPtr)(
      this,
      v61,
      this->klass->vtable._18_ConfirmPurchase.method);
LABEL_18:
  if ( purchaseResult != 4 && !this->fields._buyProductFinishedAction )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    {
      v64 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v65 = (PurchaseLogic_ProductFinishedAction_o *)sub_21FFEBC(PurchaseLogic_ProductFinishedAction_TypeInfo);
      PurchaseLogic_ProductFinishedAction___ctor(
        v65,
        v64,
        (intptr_t)Method_CommonUI_OpenStonePurchaseReciveMenu___91503304,
        v66);
      this->fields._buyProductFinishedAction = v65;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields._buyProductFinishedAction,
        (int32_t)v65,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
    }
  }
  purchaseResultArray = this->fields._purchaseResultArray;
  methodPtr = this->klass->vtable._22_GetAddedStoneNum.methodPtr;
  v75 = this->klass->vtable._22_GetAddedStoneNum.method;
  v81 = 0;
  shopId = 0;
  isSentGift[0] = 0;
  ((void (__fastcall *)(PurchaseLogic_o *, struct PurchaseByBank_UnityIap_Request_PurchaseResult_array *, char *, __int64 *, int32_t *, bool *, const MethodInfo *))methodPtr)(
    this,
    purchaseResultArray,
    (char *)&v81 + 4,
    &v81,
    &shopId,
    isSentGift,
    v75);
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(
    this,
    purchaseResult,
    0,
    SHIDWORD(v81),
    v81,
    shopId,
    isSentGift[0],
    v76);
}


void PurchaseLogic__OnEndSendReceiptData(PurchaseLogic_o *this, System_String_o *result, const MethodInfo *method)
{
  struct System_Action_string__o *logOutputAction; // x24
  __int64 FirstPurchaseResult; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray; // x1
  const MethodInfo *v8; // x2
  System_String_o *klass; // x20
  const MethodInfo *v10; // x6
  PurchaseLogic_o *v11; // x0
  int32_t v12; // w1
  __int64 *v13; // x8
  System_String_o *currentTransactionId; // x5
  System_String_o *v15; // x2
  PurchaseLogic_o *IsServerCommitedPurchase; // x0
  const MethodInfo *v17; // x3
  struct System_Action_string__o *logErrorOutputAction; // x22
  __int64 v19; // x1
  int v20; // w21
  __int64 *v21; // x8
  const MethodInfo *v22; // x2
  int32_t v23; // w22
  const MethodInfo *Entity; // x0
  const MethodInfo *v25; // x2
  struct PurchaseByBank_UnityIap_Request_PurchaseResult_array *v26; // x27
  __int64 max_length_low; // x8
  struct System_Action_string__o *v28; // x8
  System_String_o *v29; // x3
  int32_t v30; // w4
  __int64 v31; // x28
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v32; // x8
  int32_t purchasedBankShopId; // w23
  const MethodInfo *v34; // x2

  if ( (byte_5937F68 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_21FFC50(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_11688/*"ReceiptError"*/);
    sub_21FFC50(&StringLiteral_23968/*"purchaseResultArray is null."*/);
    sub_21FFC50(&StringLiteral_7411/*"Google Play canceled on restore purchase"*/);
    sub_21FFC50(&StringLiteral_11251/*"PurchaseLogic:EndSendReceiptData ["*/);
    sub_21FFC50(&StringLiteral_24129/*"receipt_error"*/);
    sub_21FFC50(&StringLiteral_18478/*"canceled_purchase_error"*/);
    sub_21FFC50(&StringLiteral_11254/*"PurchaseResult NotFound Error"*/);
    sub_21FFC50(&StringLiteral_11255/*"PurchaseResult NotFound."*/);
    sub_21FFC50(&StringLiteral_11019/*"PaymentOk"*/);
    sub_21FFC50(&StringLiteral_7412/*"Google Play pending on restore purchase"*/);
    sub_21FFC50(&StringLiteral_11250/*"PurchaseBehaviour.Result.SUCCESS_WITHOUT_NOTICE _currentTransactionId="*/);
    sub_21FFC50(&StringLiteral_6433/*"Error["*/);
    sub_21FFC50(&StringLiteral_23793/*"pending_purchase_error"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_5392/*"DeferredPurchaseProductIds"*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_5937F68 = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  FirstPurchaseResult = (__int64)System_String__Concat_75481624(
                                   (System_String_o *)StringLiteral_11251/*"PurchaseLogic:EndSendReceiptData ["*/,
                                   result,
                                   (System_String_o *)StringLiteral_16659/*"]"*/,
                                   0);
  if ( !logOutputAction )
    goto LABEL_51;
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
      IsServerCommitedPurchase = (PurchaseLogic_o *)PurchaseLogic__IsServerCommitedPurchase(
                                                      (PurchaseLogic_o *)FirstPurchaseResult,
                                                      purchaseResultArray,
                                                      v8);
      if ( ((unsigned __int8)IsServerCommitedPurchase & 1) == 0 )
      {
        v20 = 2;
        goto LABEL_22;
      }
      logErrorOutputAction = this->fields._logOutputAction;
      FirstPurchaseResult = (__int64)System_String__Concat_75438412(
                                       (System_String_o *)StringLiteral_11250/*"PurchaseBehaviour.Result.SUCCESS_WITHOUT_NOTICE _currentTransactionId="*/,
                                       this->fields._currentTransactionId,
                                       0);
      if ( !logErrorOutputAction )
        goto LABEL_51;
      v19 = FirstPurchaseResult;
      v20 = 4;
    }
    else
    {
      logErrorOutputAction = this->fields._logErrorOutputAction;
      if ( !logErrorOutputAction )
        goto LABEL_51;
      v20 = 2;
      v19 = StringLiteral_23968/*"purchaseResultArray is null."*/;
    }
    IsServerCommitedPurchase = (PurchaseLogic_o *)((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))logErrorOutputAction->fields.invoke_impl)(
                                                    logErrorOutputAction->fields.method_code,
                                                    v19,
                                                    logErrorOutputAction->fields.method);
LABEL_22:
    FirstPurchaseResult = (__int64)PurchaseLogic__GetFirstPurchaseResult(
                                     IsServerCommitedPurchase,
                                     this->fields._purchaseResultArray,
                                     this->fields._currentTransactionId,
                                     v17);
    if ( FirstPurchaseResult )
    {
      v23 = *(_DWORD *)(FirstPurchaseResult + 16);
      if ( v23 >= 1 )
      {
        PurchaseLogic__RemovePreparePurchaseShopIdsInPlayerPrefs(this, v23, v22);
        FirstPurchaseResult = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !FirstPurchaseResult )
          goto LABEL_51;
        FirstPurchaseResult = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)FirstPurchaseResult,
                                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_BankShopMaster___);
        if ( !FirstPurchaseResult )
          goto LABEL_51;
        Entity = (const MethodInfo *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)FirstPurchaseResult,
                                       v23,
                                       (const MethodInfo_3EDD388 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
        if ( Entity )
        {
          klass = (System_String_o *)Entity->klass;
          FirstPurchaseResult = PurchaseLogic__IsAppleDevice(Entity);
          if ( (FirstPurchaseResult & 1) != 0 )
          {
            FirstPurchaseResult = UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5392/*"DeferredPurchaseProductIds"*/, 0);
            if ( (FirstPurchaseResult & 1) != 0 )
            {
              v26 = this->fields._purchaseResultArray;
              if ( v26 )
              {
                max_length_low = LODWORD(v26->max_length);
                if ( max_length_low == 1 )
                {
                  PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(this, klass, v25);
LABEL_39:
                  StoneCountRefreshComponent__RefreshAllStoneCount((const MethodInfo *)FirstPurchaseResult);
                  goto LABEL_40;
                }
                if ( (int)max_length_low < 2 )
                  goto LABEL_39;
                v31 = 0;
                while ( 1 )
                {
                  if ( (unsigned int)v31 >= (unsigned int)max_length_low )
                    sub_21FFED4(FirstPurchaseResult);
                  v32 = v26->m_Items[v31];
                  if ( !v32 )
                    break;
                  purchasedBankShopId = v32->fields.purchasedBankShopId;
                  FirstPurchaseResult = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !FirstPurchaseResult )
                    break;
                  FirstPurchaseResult = (__int64)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)FirstPurchaseResult,
                                                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_BankShopMaster___);
                  if ( !FirstPurchaseResult )
                    break;
                  FirstPurchaseResult = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)FirstPurchaseResult,
                                                   purchasedBankShopId,
                                                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
                  if ( FirstPurchaseResult )
                    PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(
                      this,
                      *(System_String_o **)(FirstPurchaseResult + 32),
                      v34);
                  LODWORD(max_length_low) = v26->max_length;
                  if ( (int)++v31 >= (int)max_length_low )
                    goto LABEL_39;
                }
LABEL_51:
                sub_21FFECC(FirstPurchaseResult, purchaseResultArray);
              }
            }
          }
          FirstPurchaseResult = PurchaseLogic__IsGooglePlayDevice((const MethodInfo *)FirstPurchaseResult);
          if ( (FirstPurchaseResult & 1) != 0 )
            goto LABEL_39;
        }
LABEL_40:
        v11 = this;
        v12 = v20;
        currentTransactionId = this->fields._currentTransactionId;
        v29 = klass;
        v30 = v23;
        v15 = (System_String_o *)StringLiteral_11019/*"PaymentOk"*/;
        goto LABEL_37;
      }
    }
    v28 = this->fields._logErrorOutputAction;
    if ( v28 )
    {
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v28->fields.invoke_impl)(
        v28->fields.method_code,
        StringLiteral_11255/*"PurchaseResult NotFound."*/,
        v28->fields.method);
      v21 = &StringLiteral_11254/*"PurchaseResult NotFound Error"*/;
      goto LABEL_34;
    }
    goto LABEL_51;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_23793/*"pending_purchase_error"*/, 0) )
  {
    if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_18478/*"canceled_purchase_error"*/, 0) )
    {
      v11 = this;
      v12 = 17;
      v13 = &StringLiteral_7411/*"Google Play canceled on restore purchase"*/;
      goto LABEL_10;
    }
    if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_24129/*"receipt_error"*/, 0) )
    {
      v15 = System_String__Concat_75481624(
              (System_String_o *)StringLiteral_6433/*"Error["*/,
              result,
              (System_String_o *)StringLiteral_16659/*"]"*/,
              0);
LABEL_35:
      currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
      v11 = this;
      v12 = 7;
      goto LABEL_36;
    }
    v21 = &StringLiteral_11688/*"ReceiptError"*/;
LABEL_34:
    v15 = (System_String_o *)*v21;
    goto LABEL_35;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, __int64, const MethodInfo *))this->klass->vtable._30_SetExistsDeferredPurchase.methodPtr)(
    this,
    1,
    this->klass->vtable._30_SetExistsDeferredPurchase.method);
  v11 = this;
  v12 = 16;
  v13 = &StringLiteral_7412/*"Google Play pending on restore purchase"*/;
LABEL_10:
  currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
  v15 = (System_String_o *)*v13;
LABEL_36:
  v29 = klass;
  v30 = 0;
LABEL_37:
  PurchaseLogic__OnEndPaymentStore(v11, v12, v15, v29, v30, currentTransactionId, v10);
}


void PurchaseLogic__OnInitializeFailed(PurchaseLogic_o *this, int32_t error, const MethodInfo *method)
{
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  struct System_Action_string__o *logErrorOutputAction; // x20
  System_String_o *v10; // x0
  System_Enum_o v11; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+18h] [xbp-38h]

  if ( (byte_5937F73 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Purchasing_InitializationFailureReason_TypeInfo);
    sub_21FFC50(&StringLiteral_10304/*"OnInitializeFailed InitializationFailureReason:"*/);
    byte_5937F73 = 1;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.methodPtr)(
    this,
    this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.method,
    method);
  if ( (unsigned int)error <= 1 )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    v12 = error;
    v11.klass = (System_Enum_c *)UnityEngine_Purchasing_InitializationFailureReason_TypeInfo;
    v11.monitor = (void *)-1LL;
    v6 = System_Enum__ToString(&v11, 0);
    v7 = System_String__Concat_75438412((System_String_o *)StringLiteral_10304/*"OnInitializeFailed InitializationFailureReason:"*/, v6, 0);
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
    sub_21FFECC(v7, v8);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v12 = error;
  v11.klass = (System_Enum_c *)UnityEngine_Purchasing_InitializationFailureReason_TypeInfo;
  v11.monitor = (void *)-1LL;
  v10 = System_Enum__ToString(&v11, 0);
  v7 = System_String__Concat_75438412((System_String_o *)StringLiteral_10304/*"OnInitializeFailed InitializationFailureReason:"*/, v10, 0);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct PurchaseLogic_StaticFields *static_fields; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  PurchaseLogic_o *v23; // x0
  const MethodInfo *v24; // x1
  UnityEngine_Purchasing_IAppleExtensions_o *AppleExtension; // x0
  UnityEngine_Purchasing_IAppleExtensions_o *v26; // x20
  System_Action_object__o *v27; // x21
  UnityEngine_Purchasing_IAppleExtensions_c *klass; // x8
  __int64 v29; // x9
  UnityEngine_Purchasing_IAppleExtensions_c **p_offset; // x10
  __int64 v31; // x0

  if ( (byte_5937F70 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_Product__TypeInfo);
    sub_21FFC50(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo);
    sub_21FFC50(&PurchaseLogic_TypeInfo);
    sub_21FFC50(&StringLiteral_10305/*"OnInitialized: PASS"*/);
    byte_5937F70 = 1;
  }
  v7 = ((__int64 (__fastcall *)(PurchaseLogic_o *, const MethodInfo *, UnityEngine_Purchasing_IExtensionProvider_o *, const MethodInfo *))this->klass->vtable._28_EnableCrashReporterOnInitializeSucceeded.methodPtr)(
         this,
         this->klass->vtable._28_EnableCrashReporterOnInitializeSucceeded.method,
         extensions,
         method);
  logOutputAction = this->fields._logOutputAction;
  if ( !logOutputAction )
    sub_21FFECC(v7, v8);
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))logOutputAction->fields.invoke_impl)(
    logOutputAction->fields.method_code,
    StringLiteral_10305/*"OnInitialized: PASS"*/,
    logOutputAction->fields.method);
  PurchaseLogic_TypeInfo->static_fields->_storeController = controller;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)PurchaseLogic_TypeInfo->static_fields,
    (int32_t)controller,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  static_fields->_storeExtensionProvider = extensions;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_storeExtensionProvider,
    (int32_t)extensions,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  AppleExtension = PurchaseLogic__GetAppleExtension(v23, v24);
  if ( AppleExtension )
  {
    v26 = AppleExtension;
    v27 = (System_Action_object__o *)sub_21FFEBC(System_Action_Product__TypeInfo);
    System_Action_object____ctor(v27, (Il2CppObject *)this, (intptr_t)this->klass->vtable._25_OnDeferred.method, 0);
    klass = v26->klass;
    v29 = *(unsigned __int16 *)&v26->klass->_2.rank;
    if ( *(_WORD *)&v26->klass->_2.rank )
    {
      p_offset = (UnityEngine_Purchasing_IAppleExtensions_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
      {
        --v29;
        p_offset += 2;
        if ( !v29 )
          goto LABEL_9;
      }
      v31 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
    }
    else
    {
LABEL_9:
      v31 = sub_2237E2C(v26, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 2);
    }
    (*(void (__fastcall **)(UnityEngine_Purchasing_IAppleExtensions_o *, System_Action_object__o *, _QWORD))v31)(
      v26,
      v27,
      *(_QWORD *)(v31 + 8));
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  struct System_String_o **p_storeSpecificId_k__BackingField; // x8
  struct System_String_o *v18; // x1
  System_String_o **v19; // x24
  const MethodInfo *v20; // x0
  const MethodInfo *v21; // x2
  struct System_Action_string__o *logErrorOutputAction; // x23
  System_String_o *v23; // x20
  Il2CppObject *v24; // x0
  System_DateTime_o v25; // x0
  struct System_Action_string__o *sendReportOutputAction; // x25
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x24
  System_Object_array *v34; // x23
  __int64 v35; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  Il2CppObject *v42; // x24
  __int64 v43; // x1
  System_DateTime_o v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  Il2CppObject *v51; // x24
  System_DateTime_o v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  Il2CppObject *v59; // x24
  __int64 v60; // x1
  Il2CppObject *Instance; // x24
  Il2CppObject *v62; // x24
  PurchaseLogic_ProductFinishedAction_o *v63; // x25
  const MethodInfo *v64; // x3
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  const MethodInfo *v72; // x23
  PurchaseBehaviour_c *v73; // x0
  System_Collections_Generic_IEnumerable_TSource__o *BankShopEntityCollection; // x23
  System_Func_object__bool__o *v75; // x24
  Il2CppObject *v76; // x0
  int32_t klass; // w22
  const MethodInfo *v78; // x7
  int32_t v79; // w1
  __int64 v80; // x0
  int32_t v81; // [xsp+Ch] [xbp-54h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5937F75 & 1) == 0 )
  {
    sub_21FFC50(&Method_CommonUI_OpenStonePurchaseReciveMenu___91503304);
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&System_Decimal_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
    sub_21FFC50(&System_Func_BankShopEntity__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Contains__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PurchaseLogic_ProductFinishedAction_TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    sub_21FFC50(&UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_PurchaseLogic___c__DisplayClass61_0__OnPurchaseFailed_b__0__);
    sub_21FFC50(&PurchaseLogic___c__DisplayClass61_0_TypeInfo);
    sub_21FFC50(&StringLiteral_26331/*"yyyy/MM/dd HH:mm:ss"*/);
    sub_21FFC50(&StringLiteral_10340/*"OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}, Purchase StartTime: {2}, Purchase FailedTime: {3}"*/);
    sub_21FFC50(&StringLiteral_5374/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/);
    byte_5937F75 = 1;
  }
  dateData = 0;
  v7 = sub_21FFEBC(PurchaseLogic___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( product )
  {
    definition_k__BackingField = product->fields._definition_k__BackingField;
    if ( !definition_k__BackingField )
      goto LABEL_53;
    p_storeSpecificId_k__BackingField = &definition_k__BackingField->fields._storeSpecificId_k__BackingField;
    if ( !v7 )
      goto LABEL_53;
  }
  else
  {
    p_storeSpecificId_k__BackingField = *(struct System_String_o ***)(qword_594C0B8 + 184);
    if ( !v7 )
      goto LABEL_53;
  }
  v18 = *p_storeSpecificId_k__BackingField;
  *(_QWORD *)(v7 + 16) = *p_storeSpecificId_k__BackingField;
  v19 = (System_String_o **)(v7 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)v18, v10, v11, v12, v13, v14, v15);
  IsAppleDevice = PurchaseLogic__IsAppleDevice(v20);
  if ( (IsAppleDevice & 1) != 0 )
  {
    IsAppleDevice = System_String__IsNullOrEmpty(*v19, 0);
    if ( (IsAppleDevice & 1) == 0 )
    {
      IsAppleDevice = (__int64)PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                 (PurchaseLogic_o *)IsAppleDevice,
                                 v9);
      if ( !IsAppleDevice )
        goto LABEL_53;
      IsAppleDevice = System_Collections_Generic_List_object___Contains(
                        (System_Collections_Generic_List_object__o *)IsAppleDevice,
                        (Il2CppObject *)*v19,
                        (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__);
      if ( (IsAppleDevice & 1) != 0 )
      {
        PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(this, *v19, v21);
        logErrorOutputAction = this->fields._logErrorOutputAction;
        v23 = *v19;
        v81 = 4;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, &v81);
        IsAppleDevice = (__int64)System_String__Format_75484576(
                                   (System_String_o *)StringLiteral_5374/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/,
                                   (Il2CppObject *)v23,
                                   v24,
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
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  v25.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
  sendReportOutputAction = this->fields._sendReportOutputAction;
  dateData = v25.fields._dateData;
  IsAppleDevice = sub_21FFD10(object___TypeInfo, 4);
  if ( !IsAppleDevice )
LABEL_53:
    sub_21FFECC(IsAppleDevice, v9);
  v33 = *v19;
  v34 = (System_Object_array *)IsAppleDevice;
  if ( v33 )
  {
    IsAppleDevice = sub_21FFDA4(v33, *(_QWORD *)(*(_QWORD *)IsAppleDevice + 64LL));
    if ( !IsAppleDevice )
      goto LABEL_55;
  }
  if ( !LODWORD(v34->max_length) )
    goto LABEL_54;
  v34->m_Items[0] = (Il2CppObject *)v33;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v34->m_Items, (int32_t)v33, v27, v28, v29, v30, v31, v32);
  v81 = failureReason;
  IsAppleDevice = j_il2cpp_value_box_0(UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, &v81);
  v42 = (Il2CppObject *)IsAppleDevice;
  if ( IsAppleDevice )
  {
    IsAppleDevice = sub_21FFDA4(IsAppleDevice, v34->obj.klass->_1.element_class);
    if ( !IsAppleDevice )
      goto LABEL_55;
  }
  if ( (v34->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_54;
  v34->m_Items[1] = v42;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v34->m_Items[1], (int32_t)v42, v36, v37, v38, v39, v40, v41);
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v43);
  v44.fields._dateData = (uint64_t)&this->fields._purchaseStartTime;
  IsAppleDevice = (__int64)System_DateTime__ToString_76814468(v44, (System_String_o *)StringLiteral_26331/*"yyyy/MM/dd HH:mm:ss"*/, 0);
  v51 = (Il2CppObject *)IsAppleDevice;
  if ( IsAppleDevice )
  {
    IsAppleDevice = sub_21FFDA4(IsAppleDevice, v34->obj.klass->_1.element_class);
    if ( !IsAppleDevice )
      goto LABEL_55;
  }
  if ( LODWORD(v34->max_length) <= 2 )
    goto LABEL_54;
  v34->m_Items[2] = v51;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v34->m_Items[2], (int32_t)v51, v45, v46, v47, v48, v49, v50);
  v52.fields._dateData = (uint64_t)&dateData;
  IsAppleDevice = (__int64)System_DateTime__ToString_76814468(v52, (System_String_o *)StringLiteral_26331/*"yyyy/MM/dd HH:mm:ss"*/, 0);
  v59 = (Il2CppObject *)IsAppleDevice;
  if ( IsAppleDevice )
  {
    IsAppleDevice = sub_21FFDA4(IsAppleDevice, v34->obj.klass->_1.element_class);
    if ( !IsAppleDevice )
    {
LABEL_55:
      v80 = sub_21FFEF0(IsAppleDevice, v35);
      sub_21FFD90(v80, 0);
    }
  }
  if ( (v34->max_length & 0xFFFFFFFC) == 0 )
LABEL_54:
    sub_21FFED4(IsAppleDevice);
  v34->m_Items[3] = v59;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v34->m_Items[3], (int32_t)v59, v53, v54, v55, v56, v57, v58);
  IsAppleDevice = (__int64)System_String__Format_75484712((System_String_o *)StringLiteral_10340/*"OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}, Purchase StartTime: {2}, Purchase FailedTime: {3}"*/, v34, 0);
  if ( !sendReportOutputAction )
    goto LABEL_53;
  IsAppleDevice = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))sendReportOutputAction->fields.invoke_impl)(
                    sendReportOutputAction->fields.method_code,
                    IsAppleDevice,
                    sendReportOutputAction->fields.method);
LABEL_34:
  if ( !this->fields._buyProductFinishedAction )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v60);
    IsAppleDevice = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( (IsAppleDevice & 1) != 0 )
    {
      v62 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v63 = (PurchaseLogic_ProductFinishedAction_o *)sub_21FFEBC(PurchaseLogic_ProductFinishedAction_TypeInfo);
      PurchaseLogic_ProductFinishedAction___ctor(
        v63,
        v62,
        (intptr_t)Method_CommonUI_OpenStonePurchaseReciveMenu___91503304,
        v64);
      this->fields._buyProductFinishedAction = v63;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields._buyProductFinishedAction,
        (int32_t)v63,
        v65,
        v66,
        v67,
        v68,
        v69,
        v70);
    }
  }
  if ( product )
  {
    metadata_k__BackingField = product->fields._metadata_k__BackingField;
    if ( !metadata_k__BackingField )
      goto LABEL_53;
    product = *(UnityEngine_Purchasing_Product_o **)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.flags;
    v72 = *(const MethodInfo **)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.lo;
    if ( !*(&System_Decimal_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v9);
    LODWORD(product) = System_Decimal__ToInt32((System_Decimal_o *)product, v72);
  }
  v73 = PurchaseBehaviour_TypeInfo;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v9);
    v73 = PurchaseBehaviour_TypeInfo;
  }
  BankShopEntityCollection = (System_Collections_Generic_IEnumerable_TSource__o *)v73->static_fields->BankShopEntityCollection;
  v75 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BankShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v75,
    (Il2CppObject *)v7,
    Method_PurchaseLogic___c__DisplayClass61_0__OnPurchaseFailed_b__0__,
    0);
  v76 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
          BankShopEntityCollection,
          (System_Func_TSource__bool__o *)v75,
          (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
  if ( v76 )
    klass = (int32_t)v76[1].klass;
  else
    klass = 0;
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, const MethodInfo *))this->klass->vtable._23_ShowPurchaseFailedNotification.methodPtr)(
    this,
    (unsigned int)failureReason,
    this->klass->vtable._23_ShowPurchaseFailedNotification.method);
  if ( (unsigned int)failureReason > 6 )
    v79 = 7;
  else
    v79 = dword_ED11F8[failureReason];
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, v79, (int32_t)product, 0, 0, klass, 0, v78);
}


int32_t PurchaseLogic__ProcessPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_PurchaseEventArgs_o *purchaseEventArgs,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct UnityEngine_Purchasing_Product_o *purchasedProduct_k__BackingField; // x1
  UnityEngine_Purchasing_Product_o **v14; // x20
  PurchaseBehaviour_c *v15; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_object__bool__o *v17; // x23
  struct System_Action_string__o *logOutputAction; // x22
  __int64 v19; // x8
  __int64 v20; // x8
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  struct System_Action_string__o *v22; // x21
  System_String_o *v23; // x0
  struct System_Action_string__o *v24; // x9
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  struct System_Action_string__o *logErrorOutputAction; // x8
  __int64 v28; // x8
  System_Decimal_o v30; // [xsp+0h] [xbp-70h] BYREF
  __int64 v31; // [xsp+18h] [xbp-58h]

  v31 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_5937F74 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_string___);
    sub_21FFC50(&System_Decimal_TypeInfo);
    sub_21FFC50(&System_Func_string__bool__TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    sub_21FFC50(&Method_PurchaseLogic___c__DisplayClass60_0__ProcessPurchase_b__0__);
    sub_21FFC50(&PurchaseLogic___c__DisplayClass60_0_TypeInfo);
    sub_21FFC50(&StringLiteral_11202/*"ProcessPurchase: product is null"*/);
    sub_21FFC50(&StringLiteral_11201/*"ProcessPurchase: PASS. Product: '{0}'"*/);
    sub_21FFC50(&StringLiteral_11200/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/);
    sub_21FFC50(&StringLiteral_11181/*"Price: "*/);
    byte_5937F74 = 1;
  }
  *(_OWORD *)&v30.fields.flags = 0u;
  v5 = sub_21FFEBC(PurchaseLogic___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( purchaseEventArgs )
  {
    purchasedProduct_k__BackingField = purchaseEventArgs->fields._purchasedProduct_k__BackingField;
    if ( !v5 )
      goto LABEL_30;
  }
  else
  {
    purchasedProduct_k__BackingField = 0;
    if ( !v5 )
      goto LABEL_30;
  }
  *(_QWORD *)(v5 + 16) = purchasedProduct_k__BackingField;
  v14 = (UnityEngine_Purchasing_Product_o **)(v5 + 16);
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v5 + 16),
    (int32_t)purchasedProduct_k__BackingField,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( *(_QWORD *)(v5 + 16) )
  {
    v15 = PurchaseBehaviour_TypeInfo;
    if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, purchasedProduct_k__BackingField);
      v15 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v15->static_fields->ConsumableProductIdCollection;
    v17 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_string__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      (Il2CppObject *)v5,
      Method_PurchaseLogic___c__DisplayClass60_0__ProcessPurchase_b__0__,
      0);
    v6 = BasicHelper__Any_object_(
           ConsumableProductIdCollection,
           (System_Func_T__bool__o *)v17,
           (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_string___);
    logOutputAction = this->fields._logOutputAction;
    v19 = *(_QWORD *)(v5 + 16);
    if ( (v6 & 1) != 0 )
    {
      if ( v19 )
      {
        v20 = *(_QWORD *)(v19 + 16);
        if ( v20 )
        {
          v6 = (__int64)System_String__Format((System_String_o *)StringLiteral_11201/*"ProcessPurchase: PASS. Product: '{0}'"*/, *(Il2CppObject **)(v20 + 16), 0);
          if ( logOutputAction )
          {
            v6 = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))logOutputAction->fields.invoke_impl)(
                   logOutputAction->fields.method_code,
                   v6,
                   logOutputAction->fields.method);
            if ( *v14 )
            {
              metadata_k__BackingField = (*v14)->fields._metadata_k__BackingField;
              if ( metadata_k__BackingField )
              {
                v22 = this->fields._logOutputAction;
                *(_OWORD *)&v30.fields.flags = *(_OWORD *)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.flags;
                if ( !*(&System_Decimal_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, purchasedProduct_k__BackingField);
                v23 = System_Decimal__ToString(&v30, 0);
                v6 = (__int64)System_String__Concat_75438412((System_String_o *)StringLiteral_11181/*"Price: "*/, v23, 0);
                if ( v22 )
                {
                  v6 = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))v22->fields.invoke_impl)(
                         v22->fields.method_code,
                         v6,
                         v22->fields.method);
                  if ( *v14 )
                  {
                    v24 = this->fields._logOutputAction;
                    if ( v24 )
                    {
                      ((void (__fastcall *)(intptr_t, struct System_String_o *, intptr_t))v24->fields.invoke_impl)(
                        v24->fields.method_code,
                        (*v14)->fields._receipt_k__BackingField,
                        v24->fields.method);
                      PurchaseLogic__ValidateReceipt(this, *v14, v25);
LABEL_28:
                      PurchaseLogic__AddPendingPurchase(this, *v14, v26);
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else if ( v19 )
    {
      v28 = *(_QWORD *)(v19 + 16);
      if ( v28 )
      {
        v6 = (__int64)System_String__Format((System_String_o *)StringLiteral_11200/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/, *(Il2CppObject **)(v28 + 16), 0);
        if ( logOutputAction )
        {
          ((void (__fastcall *)(intptr_t, __int64, intptr_t))logOutputAction->fields.invoke_impl)(
            logOutputAction->fields.method_code,
            v6,
            logOutputAction->fields.method);
          goto LABEL_28;
        }
      }
    }
LABEL_30:
    sub_21FFECC(v6, purchasedProduct_k__BackingField);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  if ( !logErrorOutputAction )
    goto LABEL_30;
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))logErrorOutputAction->fields.invoke_impl)(
    logErrorOutputAction->fields.method_code,
    StringLiteral_11202/*"ProcessPurchase: product is null"*/,
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x0
  const MethodInfo *v25; // x2
  __int64 v26; // x1
  int32_t CumulativeAmount; // w2
  const MethodInfo *v28; // x7
  NetworkManager_ResultCallbackFunc_o *v29; // x19
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  NetworkManager_ResultCallbackFunc_o *v36; // x21
  PurchaseLogic_o *v37; // x0
  const MethodInfo *v38; // x3

  if ( (byte_5937F5B & 1) == 0 )
  {
    sub_21FFC50(&AgeVerificationMenu_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_PurchaseLogic___c__DisplayClass29_0__PurchaseIfAvailable_b__0__);
    sub_21FFC50(&Method_PurchaseLogic___c__DisplayClass29_0__PurchaseIfAvailable_b__1__);
    sub_21FFC50(&PurchaseLogic___c__DisplayClass29_0_TypeInfo);
    byte_5937F5B = 1;
  }
  v9 = sub_21FFEBC(PurchaseLogic___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_21FFECC(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = product;
  *(_DWORD *)(v9 + 24) = price;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)product, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v9 + 40) = shopId;
  if ( PurchaseLogic__IsAppleDevice(v24)
    && PurchaseLogic__IsPendingPurchase(this, *(UnityEngine_Purchasing_Product_o **)(v9 + 32), v25) )
  {
    if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v26);
    CumulativeAmount = AgeVerificationMenu__GetCumulativeAmount(0);
    PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, 13, CumulativeAmount, 0, 0, 0, 0, v28);
  }
  else
  {
    v29 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v29,
      (Il2CppObject *)v9,
      Method_PurchaseLogic___c__DisplayClass29_0__PurchaseIfAvailable_b__0__,
      0);
    *(_QWORD *)(v9 + 48) = v29;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 48), (int32_t)v29, v30, v31, v32, v33, v34, v35);
    LODWORD(v29) = *(_DWORD *)(v9 + 40);
    v36 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v36,
      (Il2CppObject *)v9,
      Method_PurchaseLogic___c__DisplayClass29_0__PurchaseIfAvailable_b__1__,
      0);
    PurchaseLogic__RequestPreparePurchaseByBank(v37, (int32_t)v29, v36, v38);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x19
  System_Predicate_object__o *v16; // x21
  PurchaseLogic_o *v17; // x0
  const MethodInfo *v18; // x2

  if ( (byte_5937F79 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__RemoveAll__);
    sub_21FFC50(&System_Predicate_string__TypeInfo);
    sub_21FFC50(&Method_PurchaseLogic___c__DisplayClass82_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__);
    sub_21FFC50(&PurchaseLogic___c__DisplayClass82_0_TypeInfo);
    byte_5937F79 = 1;
  }
  v4 = sub_21FFEBC(PurchaseLogic___c__DisplayClass82_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_7;
  *(_QWORD *)(v4 + 16) = productId;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)productId, v7, v8, v9, v10, v11, v12);
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v4 + 16), 0);
  if ( IsNullOrEmpty )
    return;
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)IsNullOrEmpty,
                                                v14);
  v16 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_string__TypeInfo);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v4,
    Method_PurchaseLogic___c__DisplayClass82_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__,
    0);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
LABEL_7:
    sub_21FFECC(v5, v6);
  v17 = (PurchaseLogic_o *)System_Collections_Generic_List_object___RemoveAll(
                             (System_Collections_Generic_List_object__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
                             (System_Predicate_T__o *)v16,
                             (const MethodInfo_4451158 *)Method_System_Collections_Generic_List_string__RemoveAll__);
  PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(v17, DeferredPurchaseProductIdsFromPlayerPrefs, v18);
}


void PurchaseLogic__RemovePendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0

  if ( (byte_5937F62 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Product__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Product__Remove__);
    byte_5937F62 = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_8;
  if ( System_Collections_Generic_HashSet_object___Contains(
         (System_Collections_Generic_HashSet_object__o *)pendingProducts,
         (Il2CppObject *)product,
         (const MethodInfo_4286E44 *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
  {
    pendingProducts = this->fields._pendingProducts;
    if ( pendingProducts )
    {
      System_Collections_Generic_HashSet_object___Remove(
        (System_Collections_Generic_HashSet_object__o *)pendingProducts,
        (Il2CppObject *)product,
        (const MethodInfo_4287014 *)Method_System_Collections_Generic_HashSet_Product__Remove__);
      return;
    }
LABEL_8:
    sub_21FFECC(pendingProducts, product);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  PurchaseLogic_o *v13; // x0
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_string__o *PreparePurchaseShopIdsFromPlayerPrefs; // x20
  System_Predicate_object__o *v16; // x21
  PurchaseLogic_o *v17; // x0
  const MethodInfo *v18; // x2
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  v19 = shopId;
  if ( (byte_5937F7D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__RemoveAll__);
    sub_21FFC50(&System_Predicate_string__TypeInfo);
    sub_21FFC50(&Method_PurchaseLogic___c__DisplayClass86_0__RemovePreparePurchaseShopIdsInPlayerPrefs_b__0__);
    sub_21FFC50(&PurchaseLogic___c__DisplayClass86_0_TypeInfo);
    byte_5937F7D = 1;
  }
  v4 = sub_21FFEBC(PurchaseLogic___c__DisplayClass86_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( shopId >= 1 )
  {
    v5 = System_Int32__ToString((int32_t)&v19, 0);
    if ( !v4
      || (*(_QWORD *)(v4 + 16) = v5,
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)v5, v7, v8, v9, v10, v11, v12),
          PreparePurchaseShopIdsFromPlayerPrefs = PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs(v13, v14),
          v16 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_string__TypeInfo),
          System_Predicate_object____ctor(
            v16,
            (Il2CppObject *)v4,
            Method_PurchaseLogic___c__DisplayClass86_0__RemovePreparePurchaseShopIdsInPlayerPrefs_b__0__,
            0),
          !PreparePurchaseShopIdsFromPlayerPrefs) )
    {
      sub_21FFECC(v5, v6);
    }
    v17 = (PurchaseLogic_o *)System_Collections_Generic_List_object___RemoveAll(
                               (System_Collections_Generic_List_object__o *)PreparePurchaseShopIdsFromPlayerPrefs,
                               (System_Predicate_T__o *)v16,
                               (const MethodInfo_4451158 *)Method_System_Collections_Generic_List_string__RemoveAll__);
    PurchaseLogic__SavePreparePurchaseShopIdsToPlayerPrefs(v17, PreparePurchaseShopIdsFromPlayerPrefs, v18);
  }
}


void PurchaseLogic__RequestGameServerBankStatus(
        PurchaseLogic_o *this,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_5937F5D & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_BankStatusRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5937F5D = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, callback);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_BankStatusRequest___);
  if ( !Request_object )
    sub_21FFECC(0, v5);
  BankStatusRequest__beginRequest((BankStatusRequest_o *)Request_object, 0);
}


// local variable allocation has failed, the output may be wrong!
void PurchaseLogic__RequestPreparePurchaseByBank(
        PurchaseLogic_o *this,
        int32_t shopId,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_5937F5C & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_PreparePurchaseByBankRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5937F5C = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&shopId);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_PreparePurchaseByBankRequest___);
  if ( !Request_object )
    sub_21FFECC(0, v7);
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
  if ( (byte_5937F60 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_bool__string__TypeInfo);
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___);
    sub_21FFC50(&Method_PurchaseLogic__RestorePurchases_b__34_0__);
    sub_21FFC50(&PurchaseLogic_TypeInfo);
    sub_21FFC50(&UnityEngine_RuntimePlatform_TypeInfo);
    sub_21FFC50(&StringLiteral_11854/*"RestorePurchases FAIL. Not supported on this platform. Current = "*/);
    sub_21FFC50(&StringLiteral_11856/*"RestorePurchases started ..."*/);
    this = (PurchaseLogic_o *)sub_21FFC50(&StringLiteral_11853/*"RestorePurchases FAIL. Not initialized."*/);
    byte_5937F60 = 1;
  }
  if ( (byte_5937F59 & 1) == 0 )
  {
    this = (PurchaseLogic_o *)sub_21FFC50(&PurchaseLogic_TypeInfo);
    byte_5937F59 = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    monitor = v2[3].monitor;
    if ( monitor )
    {
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD))monitor + 3))(
        *((_QWORD *)monitor + 8),
        StringLiteral_11853/*"RestorePurchases FAIL. Not initialized."*/,
        *((_QWORD *)monitor + 5));
      return;
    }
    goto LABEL_35;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  this = (PurchaseLogic_o *)UnityEngine_Application__get_platform(0);
  if ( (_DWORD)this != 8 )
  {
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
    this = (PurchaseLogic_o *)UnityEngine_Application__get_platform(0);
    if ( (_DWORD)this != 1 )
    {
      v14 = v2[3].monitor;
      if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
      platform = UnityEngine_Application__get_platform(0);
      v23.klass = (System_Enum_c *)UnityEngine_RuntimePlatform_TypeInfo;
      v23.monitor = (void *)-1LL;
      v15 = System_Enum__ToString(&v23, 0);
      this = (PurchaseLogic_o *)System_String__Concat_75438412((System_String_o *)StringLiteral_11854/*"RestorePurchases FAIL. Not supported on this platform. Current = "*/, v15, 0);
      if ( v14 )
      {
        (*((void (__fastcall **)(_QWORD, PurchaseLogic_o *, _QWORD))v14 + 3))(
          *((_QWORD *)v14 + 8),
          this,
          *((_QWORD *)v14 + 5));
        return;
      }
LABEL_35:
      sub_21FFECC(this, method);
    }
  }
  v4 = v2[3].monitor;
  if ( !v4 )
    goto LABEL_35;
  this = (PurchaseLogic_o *)(*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))v4 + 3))(
                              *((_QWORD *)v4 + 8),
                              StringLiteral_11856/*"RestorePurchases started ..."*/,
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
    v12 = sub_2237E2C(storeExtensionProvider, v9, v10);
  }
  v16 = sub_21FFD9C(*(_QWORD *)(v12 + 8), v7);
  v17 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, __int64))(v16 + 8))(
          storeExtensionProvider,
          v16);
  v18 = (System_Action_bool__object__o *)sub_21FFEBC(System_Action_bool__string__TypeInfo);
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
    v22 = sub_2237E2C(v17, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 1);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int32_t current; // w1
  System_String_o **v14; // x20
  System_String_o *v15; // x0
  __int64 v16; // x1
  PurchaseBehaviour_c *v17; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_object__bool__o *v19; // x23
  System_String_o *v20; // x21
  struct System_Collections_Generic_List_T__o *list; // x20
  System_String_o *a; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5937F77 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_string___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&System_Func_string__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    sub_21FFC50(&Method_PurchaseLogic___c__DisplayClass80_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__);
    sub_21FFC50(&PurchaseLogic___c__DisplayClass80_0_TypeInfo);
    sub_21FFC50(&StringLiteral_1567/*";"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_5392/*"DeferredPurchaseProductIds"*/);
    byte_5937F77 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( deferredPurchaseProductIdList )
  {
    a = (System_String_o *)StringLiteral_1/*""*/;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      (System_Collections_Generic_List_object__o *)deferredPurchaseProductIdList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v24 = v23;
    v23.fields._list = 0;
    *(_QWORD *)&v23.fields._index = &v24;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v24,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v4 = sub_21FFEBC(PurchaseLogic___c__DisplayClass80_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v4, 0);
      if ( !v4 )
        sub_21FFECC(v5, v6);
      current = (int32_t)v24.fields._current;
      *(_QWORD *)(v4 + 16) = v24.fields._current;
      v14 = (System_String_o **)(v4 + 16);
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), current, v7, v8, v9, v10, v11, v12);
      if ( *(_QWORD *)(v4 + 16) )
      {
        v15 = System_String__Trim(*(System_String_o **)(v4 + 16), 0);
        if ( !System_String__op_Equality(v15, **(System_String_o ***)(qword_594C0B8 + 184), 0) )
        {
          v17 = PurchaseBehaviour_TypeInfo;
          if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v16);
            v17 = PurchaseBehaviour_TypeInfo;
          }
          ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v17->static_fields->ConsumableProductIdCollection;
          v19 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_string__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v19,
            (Il2CppObject *)v4,
            Method_PurchaseLogic___c__DisplayClass80_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__,
            0);
          if ( BasicHelper__Any_object_(
                 ConsumableProductIdCollection,
                 (System_Func_T__bool__o *)v19,
                 (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_string___) )
          {
            if ( System_String__op_Inequality(a, **(System_String_o ***)(qword_594C0B8 + 184), 0) )
              v20 = System_String__Concat_75438412(a, (System_String_o *)StringLiteral_1567/*";"*/, 0);
            else
              v20 = a;
            a = System_String__Concat_75438412(v20, *v14, 0);
          }
        }
      }
    }
    list = v23.fields._list;
    System_Collections_Generic_List_Enumerator_object___Dispose(
      *(System_Collections_Generic_List_Enumerator_object__o **)&v23.fields._index,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( list )
      sub_21FFEC4(list);
    if ( System_String__IsNullOrEmpty(a, 0) )
      UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5392/*"DeferredPurchaseProductIds"*/, 0);
    else
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_5392/*"DeferredPurchaseProductIds"*/, a, 0);
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
  struct System_Collections_Generic_List_T__o *list; // x20
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5937F7B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_21FFC50(&StringLiteral_11171/*"PreparePurchaseShopIds"*/);
    sub_21FFC50(&StringLiteral_1567/*";"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937F7B = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( shopIdList )
  {
    v4 = (System_String_o *)StringLiteral_1/*""*/;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      (System_Collections_Generic_List_object__o *)shopIdList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v10 = v9;
    v9.fields._list = 0;
    *(_QWORD *)&v9.fields._index = &v10;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v10.fields._current;
      if ( v10.fields._current )
      {
        v6 = System_String__Trim((System_String_o *)v10.fields._current, 0);
        if ( !System_String__op_Equality(v6, **(System_String_o ***)(qword_594C0B8 + 184), 0) )
        {
          if ( System_String__op_Inequality(v4, **(System_String_o ***)(qword_594C0B8 + 184), 0) )
            v7 = System_String__Concat_75438412(v4, (System_String_o *)StringLiteral_1567/*";"*/, 0);
          else
            v7 = v4;
          v4 = System_String__Concat_75438412(v7, (System_String_o *)current, 0);
        }
      }
    }
    list = v9.fields._list;
    System_Collections_Generic_List_Enumerator_object___Dispose(
      *(System_Collections_Generic_List_Enumerator_object__o **)&v9.fields._index,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( list )
      sub_21FFEC4(list);
    if ( System_String__IsNullOrEmpty(v4, 0) )
      UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11171/*"PreparePurchaseShopIds"*/, 0);
    else
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11171/*"PreparePurchaseShopIds"*/, v4, 0);
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
  __int64 v10; // x22
  BankShopEntity_o *v11; // x24
  int32_t id; // w20
  int googlePrice; // w21

  if ( (byte_5937F6F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_8496/*"JPY"*/);
    byte_5937F6F = 1;
  }
  Instance = (BankShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (BankShopEntity_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_BankShopMaster___);
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
      if ( (unsigned int)v10 >= max_length )
        sub_21FFED4(Instance);
      v11 = v9->m_Items[v10];
      if ( !v11 || !paymentProductId )
        goto LABEL_18;
      Instance = (BankShopEntity_array *)System_String__Equals_75473208(paymentProductId, v11->fields.googleShopId, 0);
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
      Instance = (BankShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Instance )
      {
        AdManager__TrackPurchase(
          (AdManager_o *)Instance,
          id,
          (double)googlePrice,
          (System_String_o *)StringLiteral_8496/*"JPY"*/,
          transactionId,
          0);
        return;
      }
LABEL_18:
      sub_21FFECC(Instance, v7);
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
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x0
  __int64 v13; // x1
  struct System_Action_string__o *logOutputAction; // x22
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  NetworkManager_c *v22; // x0
  NetworkManager_ResultCallbackFunc_o *v23; // x22
  __int64 v24; // x1
  Il2CppObject *Request_object; // x0
  System_String_o *payloadJsonStr; // x23
  PurchaseByBank_UnityIap_Request_o *v27; // x24
  System_String_o *googleSignatureStr; // x21
  System_String_o *v29; // x22
  struct System_String_o **p_googleSignatureStr; // t2
  System_Action_object__o *v31; // x25
  struct System_Action_string__o *logErrorOutputAction; // x20
  NetworkManager_c *v33; // x0
  System_String_o *v34; // x0
  const MethodInfo *v35; // x2
  int64_t userIdNumber; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5937F66 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_PurchaseLogic_OnEndSendReceiptData__);
    sub_21FFC50(&Method_PurchaseLogic__SendReceiptData_b__42_0__);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&StringLiteral_25900/*"user_id_error"*/);
    sub_21FFC50(&StringLiteral_11253/*"PurchaseLogic:SendReceiptData ["*/);
    sub_21FFC50(&StringLiteral_15807/*"UserId error: UserId="*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_5937F66 = 1;
  }
  userIdNumber = 0;
  this->fields._currentTransactionId = currentTransactionId;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._currentTransactionId,
    (int32_t)currentTransactionId,
    currentTransactionId,
    *(System_String_o **)&storeError,
    (int32_t)method,
    v5,
    v6,
    v7);
  if ( !receiptContents )
    goto LABEL_24;
  logOutputAction = this->fields._logOutputAction;
  v12 = System_String__Concat_75481624(
          (System_String_o *)StringLiteral_11253/*"PurchaseLogic:SendReceiptData ["*/,
          receiptContents->fields.payloadJsonStr,
          (System_String_o *)StringLiteral_16659/*"]"*/,
          0);
  if ( !logOutputAction )
    goto LABEL_24;
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))logOutputAction->fields.invoke_impl)(
    logOutputAction->fields.method_code,
    v12,
    logOutputAction->fields.method);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v22 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
    v22 = NetworkManager_TypeInfo;
  }
  if ( v22->static_fields->userIdNumber > 0 )
  {
    this->fields._purchaseResultArray = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._purchaseResultArray, 0, v16, v17, v18, v19, v20, v21);
    v23 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v23, (Il2CppObject *)this, Method_PurchaseLogic_OnEndSendReceiptData__, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
    Request_object = NetworkManager__getRequest_object_(
                       v23,
                       (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___);
    payloadJsonStr = receiptContents->fields.payloadJsonStr;
    v27 = (PurchaseByBank_UnityIap_Request_o *)Request_object;
    p_googleSignatureStr = &receiptContents->fields.googleSignatureStr;
    googleSignatureStr = receiptContents->fields.googleSignatureStr;
    v29 = p_googleSignatureStr[1];
    v31 = (System_Action_object__o *)sub_21FFEBC(System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo);
    System_Action_object____ctor(v31, (Il2CppObject *)this, Method_PurchaseLogic__SendReceiptData_b__42_0__, 0);
    if ( v27 )
    {
      PurchaseByBank_UnityIap_Request__beginRequest(
        v27,
        v29,
        payloadJsonStr,
        storeError,
        googleSignatureStr,
        (System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____o *)v31,
        0);
      return;
    }
LABEL_24:
    sub_21FFECC(v12, v13);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  if ( !*(&v22->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v22, v15);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v33 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
    v33 = NetworkManager_TypeInfo;
  }
  userIdNumber = v33->static_fields->userIdNumber;
  v34 = System_Int64__ToString((int64_t)&userIdNumber, 0);
  v12 = System_String__Concat_75438412((System_String_o *)StringLiteral_15807/*"UserId error: UserId="*/, v34, 0);
  if ( !logErrorOutputAction )
    goto LABEL_24;
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))logErrorOutputAction->fields.invoke_impl)(
    logErrorOutputAction->fields.method_code,
    v12,
    logErrorOutputAction->fields.method);
  PurchaseLogic__OnEndSendReceiptData(this, (System_String_o *)StringLiteral_25900/*"user_id_error"*/, v35);
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


// local variable allocation has failed, the output may be wrong!
void PurchaseLogic__UpdateMonthlyPurchasePrice(PurchaseLogic_o *this, int32_t bankShopId, const MethodInfo *method)
{
  int32_t CumulativeAmount; // w21
  int32_t v6; // w0

  if ( (byte_5937F6A & 1) == 0 )
  {
    sub_21FFC50(&AgeVerificationMenu_TypeInfo);
    byte_5937F6A = 1;
  }
  if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, *(_QWORD *)&bankShopId);
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
    sub_21FFECC(IsAppleDevice, v6);
  if ( v8->fields.isIOSOldStyleReceipt )
    transactionID_k__BackingField = v8->fields.iOSOldStyleTransactionId;
LABEL_6:
  PurchaseLogic__SendReceiptData(this, v8, transactionID_k__BackingField, 0, v9);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_5937F7F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11855/*"RestorePurchases continuing: "*/);
    sub_21FFC50(&StringLiteral_1066/*". If no further messages, no purchases available to restore."*/);
    sub_21FFC50(&StringLiteral_19917/*"error: "*/);
    byte_5937F7F = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  if ( !*(_DWORD *)(qword_594C050 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C050, result);
  v7 = System_Boolean__ToString((bool)&v11, 0);
  v8 = System_String__Concat_75481624(
         (System_String_o *)StringLiteral_11855/*"RestorePurchases continuing: "*/,
         v7,
         (System_String_o *)StringLiteral_1066/*". If no further messages, no purchases available to restore."*/,
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
  v8 = System_String__Concat_75438412((System_String_o *)StringLiteral_19917/*"error: "*/, errorMessage, 0);
  if ( !v10 )
LABEL_10:
    sub_21FFECC(v8, v9);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._purchaseResultArray = purchaseResultArray;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._purchaseResultArray,
    (int32_t)purchaseResultArray,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PurchaseLogic__set_BuyProductFinishedAction(
        PurchaseLogic_o *this,
        PurchaseLogic_ProductFinishedAction_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._buyProductFinishedAction = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._buyProductFinishedAction,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PurchaseLogic__set_LogErrorOutputAction(
        PurchaseLogic_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._logErrorOutputAction = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._logErrorOutputAction,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PurchaseLogic__set_LogErrorOutputActionSampledByRatio(
        PurchaseLogic_o *this,
        System_Action_string__float__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._logErrorOutputActionSampledByRatio = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._logErrorOutputActionSampledByRatio,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PurchaseLogic__set_LogOutputAction(
        PurchaseLogic_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._logOutputAction = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._logOutputAction,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PurchaseLogic__set_SendReportOutputAction(
        PurchaseLogic_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._sendReportOutputAction = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._sendReportOutputAction,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PurchaseLogic_ProductFinishedAction___ctor(
        PurchaseLogic_ProductFinishedAction_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 6 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FFA9E4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFA95C;
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
  _QWORD v13[7]; // [xsp+0h] [xbp-80h] BYREF
  bool v14[4]; // [xsp+38h] [xbp-48h] BYREF
  int32_t v15; // [xsp+3Ch] [xbp-44h] BYREF
  int32_t v16; // [xsp+40h] [xbp-40h] BYREF
  int32_t v17; // [xsp+44h] [xbp-3Ch] BYREF
  int32_t v18; // [xsp+48h] [xbp-38h] BYREF
  int32_t v19; // [xsp+4Ch] [xbp-34h] BYREF

  v18 = perMonthAmount;
  v19 = purchaseResult;
  v16 = chargeStoneNum;
  v17 = freeStoneNum;
  v15 = shopId;
  v14[0] = isSentGift;
  if ( (byte_5937F80 & 1) == 0 )
  {
    sub_21FFC50(&PurchaseBehaviour_Result_TypeInfo);
    byte_5937F80 = 1;
  }
  v13[6] = 0;
  v13[0] = j_il2cpp_value_box_0(PurchaseBehaviour_Result_TypeInfo, &v19);
  v13[1] = j_il2cpp_value_box_0(qword_594C070, &v18);
  v13[2] = j_il2cpp_value_box_0(qword_594C070, &v17);
  v13[3] = j_il2cpp_value_box_0(qword_594C070, &v16);
  v13[4] = j_il2cpp_value_box_0(qword_594C070, &v15);
  v13[5] = j_il2cpp_value_box_0(qword_594C050, v14);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v13, callback, object);
}


void PurchaseLogic_ProductFinishedAction__EndInvoke(
        PurchaseLogic_ProductFinishedAction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **v9; // x8
  struct System_String_o *v10; // x1
  struct System_String_o **v11; // x8
  struct System_String_o *v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_String_o **v19; // x8
  struct System_String_o *v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_String_o **v27; // x8
  struct System_String_o *v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_String_o **v35; // x8
  struct System_String_o *v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7

  v9 = *(struct System_String_o ***)(qword_594C0B8 + 184);
  v10 = *v9;
  this->fields.payloadJsonStr = *v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v10, v2, v3, v4, v5, v6, v7);
  v11 = *(struct System_String_o ***)(qword_594C0B8 + 184);
  v12 = *v11;
  this->fields.googleSignatureStr = *v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.googleSignatureStr,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = *(struct System_String_o ***)(qword_594C0B8 + 184);
  v20 = *v19;
  this->fields.receiptBase64Str = *v19;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.receiptBase64Str,
    (int32_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = *(struct System_String_o ***)(qword_594C0B8 + 184);
  v28 = *v27;
  this->fields.purchaseToken = *v27;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.purchaseToken,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = *(struct System_String_o ***)(qword_594C0B8 + 184);
  v36 = *v35;
  this->fields.iOSOldStyleTransactionId = *v35;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iOSOldStyleTransactionId,
    (int32_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PurchaseLogic___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5937F81 & 1) == 0 )
  {
    sub_21FFC50(&PurchaseLogic___c_TypeInfo);
    byte_5937F81 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(PurchaseLogic___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PurchaseLogic___c_TypeInfo->static_fields->__9 = (struct PurchaseLogic___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)PurchaseLogic___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v4; // x1
  Il2CppObject *v5; // x19

  if ( (byte_5937F82 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&StringLiteral_16549/*"[UnityIAP]課金エラー:"*/);
    byte_5937F82 = 1;
  }
  v5 = (Il2CppObject *)System_String__Concat_75438412((System_String_o *)StringLiteral_16549/*"[UnityIAP]課金エラー:"*/, str, 0);
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v4);
  UnityEngine_Debug__LogError(v5, 0);
}


void PurchaseLogic___c____ctor_b__87_2(PurchaseLogic___c_o *this, System_String_o *str, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_5937F83 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_21FFC50(&StringLiteral_16549/*"[UnityIAP]課金エラー:"*/);
    byte_5937F83 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  v5 = System_String__Concat_75438412((System_String_o *)StringLiteral_16549/*"[UnityIAP]課金エラー:"*/, str, 0);
  if ( !Instance )
    sub_21FFECC(v5, v6);
  CrashReporter__SendReport_37176220((CrashReporter_o *)Instance, v5, 0, 0, 0);
}


void PurchaseLogic___c____ctor_b__87_3(
        PurchaseLogic___c_o *this,
        System_String_o *str,
        float ratio,
        const MethodInfo *method)
{
  float v6; // s0
  System_String_o *v7; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x19
  float v10; // [xsp+Ch] [xbp-34h] BYREF

  v10 = ratio;
  if ( (byte_5937F84 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&StringLiteral_16548/*"[UnityIAP]課金エラー(ratio:"*/);
    sub_21FFC50(&StringLiteral_811/*"):"*/);
    byte_5937F84 = 1;
  }
  v6 = UnityEngine_Random__Range(0.0, 1.0, 0);
  if ( v6 < ratio )
  {
    v7 = System_Single__ToString(v6, (const MethodInfo *)&v10);
    v9 = (Il2CppObject *)System_String__Concat_75483552(
                           (System_String_o *)StringLiteral_16548/*"[UnityIAP]課金エラー(ratio:"*/,
                           v7,
                           (System_String_o *)StringLiteral_811/*"):"*/,
                           str,
                           0);
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v8);
    UnityEngine_Debug__LogError(v9, 0);
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
    sub_21FFECC(this, 0);
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
  struct System_Action_string__o *logErrorOutputAction; // x20
  System_String_o *v10; // x0
  struct PurchaseLogic_o *v11; // x8
  struct UnityEngine_Purchasing_Product_o *product; // x9
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x9
  struct System_Action_string__o *logOutputAction; // x20
  __int64 v15; // x1
  struct PurchaseLogic_o *v16; // x20
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x20
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  struct UnityEngine_Purchasing_Product_o *v19; // x19
  __int64 v20; // x9
  UnityEngine_Purchasing_IStoreController_c **p_offset; // x10
  __int64 v22; // x0
  const MethodInfo *v23; // x7
  System_Enum_o v24; // [xsp+8h] [xbp-38h] BYREF
  int v25; // [xsp+18h] [xbp-28h]

  if ( (byte_5937F85 & 1) == 0 )
  {
    sub_21FFC50(&AgeVerificationMenu_TypeInfo);
    sub_21FFC50(&UnityEngine_Purchasing_IStoreController_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&PurchaseLogic_PurchaseAvailablilty_TypeInfo);
    sub_21FFC50(&PurchaseLogic_TypeInfo);
    sub_21FFC50(&StringLiteral_11257/*"Purchasing product asychronously: '{0}'"*/);
    sub_21FFC50(&StringLiteral_15531/*"Unexpected PurchaseAvailablilty value: "*/);
    byte_5937F85 = 1;
  }
  _4__this = (uint64_t)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_34;
  _4__this = PurchaseLogic__CheckBankStatusAndMonthlyLimit(
               (PurchaseLogic_o *)_4__this,
               requestResultStr,
               this->fields.price,
               v3);
  if ( (int)_4__this > 2 )
  {
    if ( (_DWORD)_4__this == 3 )
    {
      v7 = 10;
LABEL_28:
      if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, requestResultStr);
      _4__this = AgeVerificationMenu__GetCumulativeAmount(0);
      if ( this->fields.__4__this )
      {
        PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(
          this->fields.__4__this,
          v7,
          _4__this,
          0,
          0,
          this->fields.shopId,
          0,
          v23);
        return;
      }
LABEL_34:
      sub_21FFECC(_4__this, requestResultStr);
    }
    if ( (_DWORD)_4__this == 4 )
    {
LABEL_13:
      v7 = 7;
      goto LABEL_28;
    }
LABEL_10:
    v8 = this->fields.__4__this;
    if ( !v8 )
      goto LABEL_34;
    logErrorOutputAction = v8->fields._logErrorOutputAction;
    v25 = _4__this;
    v24.klass = (System_Enum_c *)PurchaseLogic_PurchaseAvailablilty_TypeInfo;
    v24.monitor = (void *)-1LL;
    v10 = System_Enum__ToString(&v24, 0);
    _4__this = (uint64_t)System_String__Concat_75438412((System_String_o *)StringLiteral_15531/*"Unexpected PurchaseAvailablilty value: "*/, v10, 0);
    if ( !logErrorOutputAction )
      goto LABEL_34;
    ((void (__fastcall *)(intptr_t, uint64_t, intptr_t))logErrorOutputAction->fields.invoke_impl)(
      logErrorOutputAction->fields.method_code,
      _4__this,
      logErrorOutputAction->fields.method);
    goto LABEL_13;
  }
  if ( (_DWORD)_4__this != 1 )
  {
    if ( (_DWORD)_4__this == 2 )
    {
      v7 = 9;
      goto LABEL_28;
    }
    goto LABEL_10;
  }
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_34;
  product = this->fields.product;
  if ( !product )
    goto LABEL_34;
  definition_k__BackingField = product->fields._definition_k__BackingField;
  if ( !definition_k__BackingField )
    goto LABEL_34;
  logOutputAction = v11->fields._logOutputAction;
  _4__this = (uint64_t)System_String__Format(
                         (System_String_o *)StringLiteral_11257/*"Purchasing product asychronously: '{0}'"*/,
                         (Il2CppObject *)definition_k__BackingField->fields._id_k__BackingField,
                         0);
  if ( !logOutputAction )
    goto LABEL_34;
  ((void (__fastcall *)(intptr_t, uint64_t, intptr_t))logOutputAction->fields.invoke_impl)(
    logOutputAction->fields.method_code,
    _4__this,
    logOutputAction->fields.method);
  v16 = this->fields.__4__this;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
  _4__this = NetworkManager__getDateTime(0).fields._dateData;
  if ( !v16 )
    goto LABEL_34;
  v16->fields._purchaseStartTime.fields._dateData = _4__this;
  storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
  if ( !storeController )
    goto LABEL_34;
  klass = storeController->klass;
  v19 = this->fields.product;
  v20 = *(unsigned __int16 *)&storeController->klass->_2.rank;
  if ( *(_WORD *)&storeController->klass->_2.rank )
  {
    p_offset = (UnityEngine_Purchasing_IStoreController_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      --v20;
      p_offset += 2;
      if ( !v20 )
        goto LABEL_26;
    }
    v22 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_26:
    v22 = sub_2237E2C(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 1);
  }
  (*(void (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, struct UnityEngine_Purchasing_Product_o *, _QWORD))v22)(
    storeController,
    v19,
    *(_QWORD *)(v22 + 8));
}


void PurchaseLogic___c__DisplayClass29_0___PurchaseIfAvailable_b__1(
        PurchaseLogic___c__DisplayClass29_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PurchaseLogic_o *CumulativeAmount; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  PurchaseLogic_o *_4__this; // x20
  const MethodInfo *v9; // x7

  if ( (byte_5937F86 & 1) == 0 )
  {
    sub_21FFC50(&AgeVerificationMenu_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_5937F86 = 1;
  }
  CumulativeAmount = (PurchaseLogic_o *)System_String__op_Inequality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0);
  _4__this = this->fields.__4__this;
  if ( ((unsigned __int8)CumulativeAmount & 1) != 0 )
  {
    if ( _4__this )
    {
      PurchaseLogic__RequestGameServerBankStatus(CumulativeAmount, this->fields.checkBankStatusCallback, v7);
      return;
    }
LABEL_10:
    sub_21FFECC(CumulativeAmount, v6);
  }
  if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v6);
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, p);
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
    sub_21FFECC(this, id);
  return System_String__Equals_75474028(definition_k__BackingField->fields._id_k__BackingField, id, 4, 0);
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
    sub_21FFECC(this, 0);
  return System_String__Equals_75474028(this->fields.productId, bankShop->fields.googleShopId, 4, 0);
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
  return System_String__Equals_75474028(id, this->fields.idStr, 4, 0);
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