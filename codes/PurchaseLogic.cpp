void __fastcall PurchaseLogic___ctor(PurchaseLogic_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  void *v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  PurchaseLogic___c_c *v23; // x0
  System_Action_object__o *_9__87_0; // x20
  Il2CppObject *v25; // x21
  struct PurchaseLogic___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  PurchaseLogic___c_c *v39; // x0
  System_Action_object__o *_9__87_1; // x20
  Il2CppObject *v41; // x21
  struct PurchaseLogic___c_StaticFields *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  PurchaseLogic___c_c *v55; // x0
  System_Action_object__o *_9__87_2; // x20
  Il2CppObject *v57; // x21
  struct PurchaseLogic___c_StaticFields *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  PurchaseLogic___c_c *v71; // x0
  System_Action_T1__T2__o *_9__87_3; // x20
  Il2CppObject *v73; // x21
  struct PurchaseLogic___c_StaticFields *v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7

  if ( (byte_4BDBEC3 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_string__TypeInfo);
    sub_1C21E38(&System_Action_string__float__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Product___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_Product__TypeInfo);
    sub_1C21E38(&Method_PurchaseLogic___c___ctor_b__87_0__);
    sub_1C21E38(&Method_PurchaseLogic___c___ctor_b__87_1__);
    sub_1C21E38(&Method_PurchaseLogic___c___ctor_b__87_2__);
    sub_1C21E38(&Method_PurchaseLogic___c___ctor_b__87_3__);
    sub_1C21E38(&PurchaseLogic___c_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDBEC3 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_T__o *)sub_1C22084(System_Collections_Generic_HashSet_Product__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_3508BA4 *)Method_System_Collections_Generic_HashSet_Product___ctor__);
  this->fields._pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = StringLiteral_1/*""*/;
  this->fields._currentTransactionId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._currentTransactionId,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v23 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v23 = PurchaseLogic___c_TypeInfo;
  }
  _9__87_0 = (System_Action_object__o *)v23->static_fields->__9__87_0;
  if ( !_9__87_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = PurchaseLogic___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v23->static_fields->__9;
    _9__87_0 = (System_Action_object__o *)sub_1C22084(System_Action_string__TypeInfo);
    System_Action_object____ctor(_9__87_0, v25, Method_PurchaseLogic___c___ctor_b__87_0__, 0LL);
    static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    static_fields->__9__87_0 = (struct System_Action_string__o *)_9__87_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__87_0,
      (int64_t)_9__87_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  this->fields._logOutputAction = (struct System_Action_string__o *)_9__87_0;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._logOutputAction,
    (int64_t)_9__87_0,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v39 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v39 = PurchaseLogic___c_TypeInfo;
  }
  _9__87_1 = (System_Action_object__o *)v39->static_fields->__9__87_1;
  if ( !_9__87_1 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = PurchaseLogic___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v39->static_fields->__9;
    _9__87_1 = (System_Action_object__o *)sub_1C22084(System_Action_string__TypeInfo);
    System_Action_object____ctor(_9__87_1, v41, Method_PurchaseLogic___c___ctor_b__87_1__, 0LL);
    v42 = PurchaseLogic___c_TypeInfo->static_fields;
    v42->__9__87_1 = (struct System_Action_string__o *)_9__87_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v42->__9__87_1, (int64_t)_9__87_1, v43, v44, v45, v46, v47, v48);
  }
  this->fields._logErrorOutputAction = (struct System_Action_string__o *)_9__87_1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._logErrorOutputAction,
    (int64_t)_9__87_1,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v55 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v55 = PurchaseLogic___c_TypeInfo;
  }
  _9__87_2 = (System_Action_object__o *)v55->static_fields->__9__87_2;
  if ( !_9__87_2 )
  {
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v55 = PurchaseLogic___c_TypeInfo;
    }
    v57 = (Il2CppObject *)v55->static_fields->__9;
    _9__87_2 = (System_Action_object__o *)sub_1C22084(System_Action_string__TypeInfo);
    System_Action_object____ctor(_9__87_2, v57, Method_PurchaseLogic___c___ctor_b__87_2__, 0LL);
    v58 = PurchaseLogic___c_TypeInfo->static_fields;
    v58->__9__87_2 = (struct System_Action_string__o *)_9__87_2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v58->__9__87_2, (int64_t)_9__87_2, v59, v60, v61, v62, v63, v64);
  }
  this->fields._sendReportOutputAction = (struct System_Action_string__o *)_9__87_2;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._sendReportOutputAction,
    (int64_t)_9__87_2,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v71 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v71 = PurchaseLogic___c_TypeInfo;
  }
  _9__87_3 = (System_Action_T1__T2__o *)v71->static_fields->__9__87_3;
  if ( !_9__87_3 )
  {
    if ( !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71);
      v71 = PurchaseLogic___c_TypeInfo;
    }
    v73 = (Il2CppObject *)v71->static_fields->__9;
    _9__87_3 = (System_Action_T1__T2__o *)sub_1C22084(System_Action_string__float__TypeInfo);
    System_Action_object__float____ctor(_9__87_3, v73, Method_PurchaseLogic___c___ctor_b__87_3__, 0LL);
    v74 = PurchaseLogic___c_TypeInfo->static_fields;
    v74->__9__87_3 = (struct System_Action_string__float__o *)_9__87_3;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v74->__9__87_3, (int64_t)_9__87_3, v75, v76, v77, v78, v79, v80);
  }
  this->fields._logErrorOutputActionSampledByRatio = (struct System_Action_string__float__o *)_9__87_3;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._logErrorOutputActionSampledByRatio,
    (int64_t)_9__87_3,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogic__AddDeferredPurchaseProductIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_object__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Object_array *items; // x8
  System_Collections_Generic_List_object__o *v15; // x20
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  PurchaseLogic_o *v20; // x0
  const MethodInfo *v21; // x2

  if ( (byte_4BDBEBD & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Distinct_string___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    byte_4BDBEBD = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(productId, 0LL);
  if ( !IsNullOrEmpty )
  {
    DeferredPurchaseProductIdsFromPlayerPrefs = (System_Collections_Generic_List_object__o *)PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                                                               (PurchaseLogic_o *)IsNullOrEmpty,
                                                                                               v5);
    if ( !DeferredPurchaseProductIdsFromPlayerPrefs
      || (items = DeferredPurchaseProductIdsFromPlayerPrefs->fields._items,
          v15 = DeferredPurchaseProductIdsFromPlayerPrefs,
          v16 = Method_System_Collections_Generic_List_string__Add__,
          ++DeferredPurchaseProductIdsFromPlayerPrefs->fields._version,
          !items) )
    {
      sub_1C22094(DeferredPurchaseProductIdsFromPlayerPrefs, v7);
    }
    size = DeferredPurchaseProductIdsFromPlayerPrefs->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        DeferredPurchaseProductIdsFromPlayerPrefs,
        (Il2CppObject *)productId,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &items->obj.klass + size;
      v15->fields._size = size + 1;
      v18[4] = (Il2CppClass *)productId;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), (int64_t)productId, v8, v9, v10, v11, v12, v13);
    }
    v19 = System_Linq_Enumerable__Distinct_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v15,
            (const MethodInfo_2FCD2BC *)Method_System_Linq_Enumerable_Distinct_string___);
    v20 = (PurchaseLogic_o *)System_Linq_Enumerable__ToList_object_(
                               v19,
                               (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_string___);
    PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(
      v20,
      (System_Collections_Generic_List_string__o *)v20,
      v21);
  }
}


void __fastcall PurchaseLogic__AddPendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *pendingProducts; // x0

  if ( (byte_4BDBEA6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Product__Add__);
    byte_4BDBEA6 = 1;
  }
  pendingProducts = (System_Collections_Generic_HashSet_T__o *)this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_1C22094(0LL, product);
  System_Collections_Generic_HashSet_object___Add(
    pendingProducts,
    (Il2CppObject *)product,
    (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_Product__Add__);
}


void __fastcall PurchaseLogic__AddPreparePurchaseShopIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  PurchaseLogic_o *v4; // x20
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_object__o *PreparePurchaseShopIdsFromPlayerPrefs; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Object_array *items; // x8
  System_Collections_Generic_List_object__o *v15; // x19
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  PurchaseLogic_o *v20; // x0
  const MethodInfo *v21; // x2
  int32_t v22; // [xsp+Ch] [xbp-24h] BYREF

  v22 = shopId;
  if ( (byte_4BDBEC1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Distinct_string___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    byte_4BDBEC1 = 1;
  }
  if ( shopId >= 1 )
  {
    v4 = (PurchaseLogic_o *)System_Int32__ToString((int32_t)&v22, 0LL);
    PreparePurchaseShopIdsFromPlayerPrefs = (System_Collections_Generic_List_object__o *)PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs(
                                                                                           v4,
                                                                                           v5);
    if ( !PreparePurchaseShopIdsFromPlayerPrefs
      || (items = PreparePurchaseShopIdsFromPlayerPrefs->fields._items,
          v15 = PreparePurchaseShopIdsFromPlayerPrefs,
          v16 = Method_System_Collections_Generic_List_string__Add__,
          ++PreparePurchaseShopIdsFromPlayerPrefs->fields._version,
          !items) )
    {
      sub_1C22094(PreparePurchaseShopIdsFromPlayerPrefs, v7);
    }
    size = PreparePurchaseShopIdsFromPlayerPrefs->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        PreparePurchaseShopIdsFromPlayerPrefs,
        (Il2CppObject *)v4,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &items->obj.klass + size;
      v15->fields._size = size + 1;
      v18[4] = (Il2CppClass *)v4;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), (int64_t)v4, v8, v9, v10, v11, v12, v13);
    }
    v19 = System_Linq_Enumerable__Distinct_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v15,
            (const MethodInfo_2FCD2BC *)Method_System_Linq_Enumerable_Distinct_string___);
    v20 = (PurchaseLogic_o *)System_Linq_Enumerable__ToList_object_(
                               v19,
                               (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_string___);
    PurchaseLogic__SavePreparePurchaseShopIdsToPlayerPrefs(v20, (System_Collections_Generic_List_string__o *)v20, v21);
  }
}


int32_t __fastcall PurchaseLogic__CheckBankStatusAndMonthlyLimit(
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *v29; // x20
  System_Action_o *v30; // x21
  Il2CppObject *v31; // x22
  struct PurchaseLogic___c_StaticFields *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4BDBEA3 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AgeVerificationMenu_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__32_0__);
    sub_1C21E38(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__32_1__);
    sub_1C21E38(&PurchaseLogic___c_TypeInfo);
    sub_1C21E38(&StringLiteral_12519/*"STONE_PURCHASE_RESULT_BLOCK"*/);
    sub_1C21E38(&StringLiteral_22914/*"perMonthAmount"*/);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    sub_1C21E38(&StringLiteral_21780/*"message"*/);
    sub_1C21E38(&StringLiteral_17341/*"bankAvailable"*/);
    byte_4BDBEA3 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12519/*"STONE_PURCHASE_RESULT_BLOCK"*/, 0LL);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22456/*"ng"*/, 0LL) )
    goto LABEL_33;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0LL);
  v8 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
  if ( !Dictionary
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
          (Il2CppObject *)StringLiteral_22914/*"perMonthAmount"*/,
          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    goto LABEL_33;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v8,
           (Il2CppObject *)StringLiteral_22914/*"perMonthAmount"*/,
           (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_48;
  v11 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                             Item,
                             *(_QWORD *)(*(_QWORD *)Item + 368LL));
  v12 = System_Int32__Parse(v11, 0LL);
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  AgeVerificationMenu__SaveCumulativeAmount(v12, 0LL);
  if ( !PurchaseLogic__IsLimitOver(v13, v12 + price, v14) )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v8,
           (Il2CppObject *)StringLiteral_17341/*"bankAvailable"*/,
           (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               v8,
               (Il2CppObject *)StringLiteral_17341/*"bankAvailable"*/,
               (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_48;
      v16 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                                 Item,
                                 *(_QWORD *)(*(_QWORD *)Item + 368LL));
      v17 = System_Int32__Parse(v16, 0LL);
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             v8,
             (Il2CppObject *)StringLiteral_21780/*"message"*/,
             (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v8,
                 (Il2CppObject *)StringLiteral_21780/*"message"*/,
                 (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_48;
        v18 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                                   Item,
                                   *(_QWORD *)(*(_QWORD *)Item + 368LL));
        v6 = v18;
        if ( !v17 )
        {
          if ( !System_String__IsNullOrEmpty(v18, 0LL) )
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
              v20 = *(System_Action_o **)(*((_QWORD *)Item + 23) + 8LL);
              if ( !v20 )
              {
                if ( !*((_DWORD *)Item + 56) )
                {
                  j_il2cpp_runtime_class_init_0(Item);
                  Item = PurchaseLogic___c_TypeInfo;
                }
                v21 = (Il2CppObject *)**((_QWORD **)Item + 23);
                v20 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                System_Action___ctor(v20, v21, Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__32_0__, 0LL);
                static_fields = PurchaseLogic___c_TypeInfo->static_fields;
                static_fields->__9__32_0 = v20;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)&static_fields->__9__32_0,
                  (int64_t)v20,
                  v23,
                  v24,
                  v25,
                  v26,
                  v27,
                  v28);
              }
              if ( Instance )
              {
                v15 = 1;
                CommonUI__OpenNotificationDialog(
                  (CommonUI_o *)Instance,
                  0LL,
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
                  0LL,
                  0.0,
                  0LL);
                return v15;
              }
LABEL_48:
              sub_1C22094(Item, v10);
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
    if ( !System_String__IsNullOrEmpty(v6, 0LL) )
    {
      v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL) )
      {
        Item = PurchaseLogic___c_TypeInfo;
        if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
          Item = PurchaseLogic___c_TypeInfo;
        }
        v30 = *(System_Action_o **)(*((_QWORD *)Item + 23) + 16LL);
        if ( !v30 )
        {
          if ( !*((_DWORD *)Item + 56) )
          {
            j_il2cpp_runtime_class_init_0(Item);
            Item = PurchaseLogic___c_TypeInfo;
          }
          v31 = (Il2CppObject *)**((_QWORD **)Item + 23);
          v30 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(v30, v31, Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__32_1__, 0LL);
          v32 = PurchaseLogic___c_TypeInfo->static_fields;
          v32->__9__32_1 = v30;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v32->__9__32_1, (int64_t)v30, v33, v34, v35, v36, v37, v38);
        }
        if ( !v29 )
          goto LABEL_48;
        CommonUI__OpenNotificationDialog((CommonUI_o *)v29, 0LL, v6, v30, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
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
    return dword_C39520[failureReason];
}


void __fastcall PurchaseLogic__ConfirmPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x20
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  __int64 v8; // x9
  UnityEngine_Purchasing_IStoreController_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4BDBEA9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Product__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Product__Remove__);
    sub_1C21E38(&UnityEngine_Purchasing_IStoreController_TypeInfo);
    sub_1C21E38(&PurchaseLogic_TypeInfo);
    byte_4BDBEA9 = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_15;
  if ( !System_Collections_Generic_HashSet_object___Contains(
          (System_Collections_Generic_HashSet_T__o *)pendingProducts,
          (Il2CppObject *)product,
          (const MethodInfo_3509298 *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
    return;
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts
    || (pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)System_Collections_Generic_HashSet_object___Remove(
                                                                                    (System_Collections_Generic_HashSet_T__o *)pendingProducts,
                                                                                    (Il2CppObject *)product,
                                                                                    (const MethodInfo_3509464 *)Method_System_Collections_Generic_HashSet_Product__Remove__),
        (storeController = PurchaseLogic_TypeInfo->static_fields->_storeController) == 0LL) )
  {
LABEL_15:
    sub_1C22094(pendingProducts, product);
  }
  klass = storeController->klass;
  v8 = *(unsigned __int16 *)(&storeController->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&storeController->klass->_2.bitflags2 + 3) )
  {
    p_offset = (UnityEngine_Purchasing_IStoreController_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      --v8;
      p_offset += 2;
      if ( !v8 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
  }
  else
  {
LABEL_11:
    p_method = sub_1C73E18(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 2LL);
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
  PartyOrganizationUtility_o *p_buyProductFinishedAction; // x19

  p_buyProductFinishedAction = (PartyOrganizationUtility_o *)&this->fields._buyProductFinishedAction;
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
  sub_1C21DDC(
    p_buyProductFinishedAction,
    0LL,
    *(int64_t *)&perMonthAmount,
    freeStoneNum,
    *(System_String_o **)&chargeStoneNum,
    *(BattleSetupInfo_o **)&shopId,
    (FollowerInfo_o *)isSentGift,
    (PartyListViewItem_o *)method);
}


PurchaseLogic_ReceiptContents_o *__fastcall PurchaseLogic__ExtractReceiptContents(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  PurchaseLogic_ReceiptContents_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_4BDBEAA & 1) == 0 )
  {
    sub_1C21E38(&PurchaseLogic_ReceiptContents_TypeInfo);
    byte_4BDBEAA = 1;
  }
  v3 = (PurchaseLogic_ReceiptContents_o *)sub_1C22084(PurchaseLogic_ReceiptContents_TypeInfo);
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
        sub_1C2209C(this, purchaseResultArray);
      v8 = purchaseResultArray->m_Items[0];
      if ( !v8 )
        sub_1C22094(this, purchaseResultArray);
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
  _BOOL8 IsAppleDevice; // x0
  __int64 v3; // x1
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x19
  UnityEngine_Purchasing_IExtensionProvider_c *klass; // x8
  __int64 v6; // x9
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v12; // x1

  if ( (byte_4BDBEB7 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___);
    this = (PurchaseLogic_o *)sub_1C21E38(&PurchaseLogic_TypeInfo);
    byte_4BDBEB7 = 1;
  }
  if ( !PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider )
    return 0LL;
  IsAppleDevice = PurchaseLogic__IsAppleDevice((const MethodInfo *)this);
  if ( !IsAppleDevice )
    return 0LL;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_1C22094(IsAppleDevice, v3);
  klass = storeExtensionProvider->klass;
  v6 = *(unsigned __int16 *)(&storeExtensionProvider->klass->_2.bitflags2 + 3);
  v7 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 4);
  v8 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 40);
  if ( *(_WORD *)(&storeExtensionProvider->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v7 )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset + (int)v8].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C73E18(storeExtensionProvider, v7, v8);
  }
  v12 = sub_1C21F6C(*(_QWORD *)(p_method + 8));
  return (UnityEngine_Purchasing_IAppleExtensions_o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, __int64))(v12 + 8))(
                                                        storeExtensionProvider,
                                                        v12);
}


UnityEngine_Purchasing_ConfigurationBuilder_o *__fastcall PurchaseLogic__GetConfigurationBuilder(
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

  if ( (byte_4BDBE9D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_IPurchasingModule___);
    sub_1C21E38(&UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo);
    byte_4BDBE9D = 1;
  }
  if ( !UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo);
  v2 = UnityEngine_Purchasing_StandardPurchasingModule__Instance(0LL);
  v4 = Method_System_Array_Empty_IPurchasingModule___;
  v5 = (UnityEngine_Purchasing_Extension_IPurchasingModule_o *)v2;
  v6 = *((_QWORD *)Method_System_Array_Empty_IPurchasingModule___ + 7);
  if ( !v6 )
  {
    sub_1C73D70(Method_System_Array_Empty_IPurchasingModule___);
    v6 = v4[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C73D14(inited);
  if ( !*(_DWORD *)(v7 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v7);
  v8 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C73D14(inited);
  return UnityEngine_Purchasing_ConfigurationBuilder__Instance(
           v5,
           **(UnityEngine_Purchasing_Extension_IPurchasingModule_array ***)(v8 + 184),
           0LL);
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  System_String_o *String; // x19
  _BOOL8 v3; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0
  System_Collections_Generic_List_object__o *v7; // x19

  if ( (byte_4BDBEBB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_5361/*"DeferredPurchaseProductIds"*/);
    byte_4BDBEBB = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_5361/*"DeferredPurchaseProductIds"*/,
             string_TypeInfo->static_fields->Empty,
             0LL);
  v3 = System_String__op_Inequality(String, string_TypeInfo->static_fields->Empty, 0LL);
  if ( v3 )
  {
    if ( !String )
      sub_1C22094(v3, v4);
    v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String, 0x3Bu, 0, 0LL);
    return (System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                          v5,
                                                          (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_string___);
  }
  else
  {
    v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v7;
  }
}


PurchaseByBank_UnityIap_Request_PurchaseResult_o *__fastcall PurchaseLogic__GetFirstPurchaseResult(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x0
  System_Func_object__bool__o *v16; // x20

  if ( (byte_4BDBEAE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____77670600);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_1C21E38(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    sub_1C21E38(&Method_PurchaseLogic___c__DisplayClass45_0__GetFirstPurchaseResult_b__0__);
    sub_1C21E38(&PurchaseLogic___c__DisplayClass45_0_TypeInfo);
    byte_4BDBEAE = 1;
  }
  v6 = sub_1C22084(PurchaseLogic___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    sub_1C22094(v7, v8);
  *(_QWORD *)(v6 + 16) = transactionId;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 16), (int64_t)transactionId, v9, v10, v11, v12, v13, v14);
  if ( !purchaseResultArray )
    return 0LL;
  if ( !PurchaseLogic__IsAppleDevice(v15) )
    return (PurchaseByBank_UnityIap_Request_PurchaseResult_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                                 (const MethodInfo_2FD26B0 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___);
  v16 = (System_Func_object__bool__o *)sub_1C22084(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v6,
    Method_PurchaseLogic___c__DisplayClass45_0__GetFirstPurchaseResult_b__0__,
    0LL);
  return (PurchaseByBank_UnityIap_Request_PurchaseResult_o *)System_Linq_Enumerable__FirstOrDefault_object__50149120(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                               (System_Func_TSource__bool__o *)v16,
                                                               (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____77670600);
}


PurchaseLogic_o *__fastcall PurchaseLogic__GetInstance(const MethodInfo *method)
{
  PurchaseLogic_o *v1; // x19
  const MethodInfo *v2; // x1

  if ( (byte_4BDBE9B & 1) == 0 )
  {
    sub_1C21E38(&PurchaseLogicAndroid_TypeInfo);
    byte_4BDBE9B = 1;
  }
  v1 = (PurchaseLogic_o *)sub_1C22084(PurchaseLogicAndroid_TypeInfo);
  PurchaseLogic___ctor(v1, v2);
  return v1;
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v2; // x19
  System_String_o *String; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_4BDBEBF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_10935/*"PreparePurchaseShopIds"*/);
    byte_4BDBEBF = 1;
  }
  v2 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_10935/*"PreparePurchaseShopIds"*/,
             string_TypeInfo->static_fields->Empty,
             0LL);
  v4 = System_String__op_Inequality(String, string_TypeInfo->static_fields->Empty, 0LL);
  if ( !v4 )
    return (System_Collections_Generic_List_string__o *)v2;
  if ( !String )
    sub_1C22094(v4, v5);
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String, 0x3Bu, 0, 0LL);
  return (System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                        v6,
                                                        (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_string___);
}


int32_t __fastcall PurchaseLogic__GetPrice(PurchaseLogic_o *this, int32_t bankShopId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = bankShopId;
  if ( (byte_4BDBEB3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_1C21E38(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_6204/*"Entity is not found. bankShopId="*/);
    byte_4BDBEB3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             bankShopId,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
  if ( Entity )
    return (int32_t)Entity[3].monitor;
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v10 = System_Int32__ToString((int32_t)&v11, 0LL);
  Instance = (DataManager_o *)System_String__Concat_63115476((System_String_o *)StringLiteral_6204/*"Entity is not found. bankShopId="*/, v10, 0LL);
  if ( !logErrorOutputAction )
LABEL_9:
    sub_1C22094(Instance, v6);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, DataManager_o *, _QWORD))logErrorOutputAction->fields.m_target)(
    logErrorOutputAction->fields.original_method_info,
    Instance,
    *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
  return 0;
}


void __fastcall PurchaseLogic__InitializePurchasingFramework(PurchaseLogic_o *this, const MethodInfo *method)
{
  struct PurchaseLogic_StaticFields *static_fields; // x8
  UnityEngine_Purchasing_ConfigurationBuilder_o *v4; // x20
  __int64 v5; // x1
  PurchaseBehaviour_c *v6; // x0
  System_Collections_Generic_List_object__o *ConsumableProductIdCollection; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDBE9C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C21E38(&PurchaseBehaviour_TypeInfo);
    byte_4BDBE9C = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( (byte_4BDBE9E & 1) == 0 )
  {
    sub_1C21E38(&PurchaseLogic_TypeInfo);
    byte_4BDBE9E = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    ((void (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))this->klass->vtable._27_DisableCrashReporterOnInitialize.method)(
      this,
      this->klass->vtable._28_EnableCrashReporterOnInitializeSucceeded.methodPtr);
    v4 = (UnityEngine_Purchasing_ConfigurationBuilder_o *)((__int64 (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))this->klass->vtable._10_GetConfigurationBuilder.method)(
                                                            this,
                                                            this->klass->vtable._11_SetObfuscatedAccountId.methodPtr);
    ((void (__fastcall *)(PurchaseLogic_o *, UnityEngine_Purchasing_ConfigurationBuilder_o *, Il2CppMethodPointer))this->klass->vtable._11_SetObfuscatedAccountId.method)(
      this,
      v4,
      this->klass->vtable._12_SetCachedObfuscatedAccountId.methodPtr);
    ((void (__fastcall *)(PurchaseLogic_o *, __int64, Il2CppMethodPointer))this->klass->vtable._15_SetAlreadyInitializedWithObfuscatedAccountId.method)(
      this,
      1LL,
      this->klass->vtable._16_IsInitializedWithMismatchedObfuscatedAccountId.methodPtr);
    v6 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v6 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_object__o *)v6->static_fields->ConsumableProductIdCollection;
    if ( !ConsumableProductIdCollection )
      sub_1C22094(0LL, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      ConsumableProductIdCollection,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v10,
             (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
      if ( !v8 )
        break;
      if ( !v4 )
        sub_1C22094(v8, v9);
      UnityEngine_Purchasing_ConfigurationBuilder__AddProduct(v4, (System_String_o *)v10.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    UnityEngine_Purchasing_UnityPurchasing__Initialize((UnityEngine_Purchasing_IStoreListener_o *)this, v4, 0LL);
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
    sub_1C22094(this, 0LL);
  PurchaseLogic__InitiatePurchase_39875216(
    this,
    bankShop->fields.id,
    bankShop->fields.googleShopId,
    bankShop->fields.googlePrice,
    finishedAction,
    v4);
}


void __fastcall PurchaseLogic__InitiatePurchase_39875216(
        PurchaseLogic_o *this,
        int32_t shopId,
        System_String_o *productId,
        int32_t price,
        PurchaseLogic_ProductFinishedAction_o *finishedAction,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v13; // x0
  __int64 v14; // x1
  struct PurchaseLogic_StaticFields *static_fields; // x8
  struct System_Action_string__o *logErrorOutputAction; // x8
  const MethodInfo *v17; // x7
  int32_t v18; // w1
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x8
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x23
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct System_Action_string__o *v25; // x8
  __int64 *v26; // x9
  struct UnityEngine_Purchasing_IStoreController_o *v27; // x23
  UnityEngine_Purchasing_IStoreController_c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  struct System_Action_string__o *v32; // x8
  const MethodInfo *v33; // x4

  if ( (byte_4BDBE9F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Purchasing_IStoreController_TypeInfo);
    sub_1C21E38(&PurchaseLogic_TypeInfo);
    sub_1C21E38(&StringLiteral_7784/*"InitiatePurchase: FAIL. PurchasingFramework not initialized."*/);
    sub_1C21E38(&StringLiteral_7785/*"InitiatePurchase: FAIL. StoreController is null."*/);
    sub_1C21E38(&StringLiteral_7783/*"InitiatePurchase: FAIL. Not purchasing product, either is not found or is not available for purchase"*/);
    sub_1C21E38(&StringLiteral_7786/*"InitiatePurchase: FAIL. StoreController.products is null."*/);
    sub_1C21E38(&StringLiteral_7787/*"InitiatePurchase: Initialized With Mismatched ObfuscatedAccountId."*/);
    byte_4BDBE9F = 1;
  }
  this->fields._buyProductFinishedAction = finishedAction;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._buyProductFinishedAction,
    (int64_t)finishedAction,
    (int64_t)productId,
    price,
    (System_String_o *)finishedAction,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  if ( (byte_4BDBE9E & 1) == 0 )
  {
    v13 = sub_1C21E38(&PurchaseLogic_TypeInfo);
    byte_4BDBE9E = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( logErrorOutputActionSampledByRatio )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, float))logErrorOutputActionSampledByRatio->fields.m_target)(
        logErrorOutputActionSampledByRatio->fields.original_method_info,
        StringLiteral_7784/*"InitiatePurchase: FAIL. PurchasingFramework not initialized."*/,
        *(_QWORD *)&logErrorOutputActionSampledByRatio->fields.extra_arg,
        0.01);
      v18 = 11;
      goto LABEL_33;
    }
LABEL_39:
    sub_1C22094(v13, v14);
  }
  v13 = ((__int64 (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))this->klass->vtable._16_IsInitializedWithMismatchedObfuscatedAccountId.method)(
          this,
          this->klass->vtable._17_SetInitializedWithMismatchedObfuscatedAccountId.methodPtr);
  if ( (v13 & 1) != 0 )
  {
    logErrorOutputAction = this->fields._logErrorOutputAction;
    if ( logErrorOutputAction )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logErrorOutputAction->fields.m_target)(
        logErrorOutputAction->fields.original_method_info,
        StringLiteral_7787/*"InitiatePurchase: Initialized With Mismatched ObfuscatedAccountId."*/,
        *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
      v18 = 14;
LABEL_33:
      PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, v18, 0, 0, 0, 0, 0, v17);
      return;
    }
    goto LABEL_39;
  }
  storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
  if ( !storeController )
  {
    v25 = this->fields._logErrorOutputAction;
    if ( !v25 )
      goto LABEL_39;
    v26 = &StringLiteral_7785/*"InitiatePurchase: FAIL. StoreController is null."*/;
LABEL_30:
    v13 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v25->fields.m_target)(
            v25->fields.original_method_info,
            *v26,
            *(_QWORD *)&v25->fields.extra_arg);
LABEL_31:
    v32 = this->fields._logErrorOutputAction;
    if ( v32 )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v32->fields.m_target)(
        v32->fields.original_method_info,
        StringLiteral_7783/*"InitiatePurchase: FAIL. Not purchasing product, either is not found or is not available for purchase"*/,
        *(_QWORD *)&v32->fields.extra_arg);
      v18 = 12;
      goto LABEL_33;
    }
    goto LABEL_39;
  }
  klass = storeController->klass;
  v22 = *(unsigned __int16 *)(&storeController->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&storeController->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IStoreController_c **)p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_1C73E18(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
  }
  v13 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))p_method)(
          storeController,
          *(_QWORD *)(p_method + 8));
  if ( !v13 )
  {
    v25 = this->fields._logErrorOutputAction;
    if ( !v25 )
      goto LABEL_39;
    v26 = &StringLiteral_7786/*"InitiatePurchase: FAIL. StoreController.products is null."*/;
    goto LABEL_30;
  }
  v27 = PurchaseLogic_TypeInfo->static_fields->_storeController;
  if ( !v27 )
    goto LABEL_39;
  v28 = v27->klass;
  v29 = *(unsigned __int16 *)(&v27->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v27->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IStoreController_c **)v30 - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_27;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_27:
    v31 = sub_1C73E18(v27, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
  }
  v13 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))v31)(
          v27,
          *(_QWORD *)(v31 + 8));
  if ( !v13 )
    goto LABEL_39;
  v13 = (__int64)UnityEngine_Purchasing_ProductCollection__WithID(
                   (UnityEngine_Purchasing_ProductCollection_o *)v13,
                   productId,
                   0LL);
  if ( !v13 || !*(_BYTE *)(v13 + 32) )
    goto LABEL_31;
  PurchaseLogic__PurchaseIfAvailable(this, shopId, (UnityEngine_Purchasing_Product_o *)v13, price, v33);
}


bool __fastcall PurchaseLogic__IsAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall PurchaseLogic__IsAppleDevice(const MethodInfo *method)
{
  if ( (byte_4BDBEB1 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    byte_4BDBEB1 = 1;
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
  if ( (byte_4BDBEB2 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    byte_4BDBEB2 = 1;
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


bool __fastcall PurchaseLogic__IsLimitOver(PurchaseLogic_o *this, int32_t value, const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  int32_t Limit; // w0

  if ( (byte_4BDBEA4 & 1) == 0 )
  {
    sub_1C21E38(&AgeVerificationMenu_TypeInfo);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    byte_4BDBEA4 = 1;
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

  if ( (byte_4BDBEA8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Product__Contains__);
    byte_4BDBEA8 = 1;
  }
  pendingProducts = (System_Collections_Generic_HashSet_T__o *)this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_1C22094(0LL, prodcut);
  return System_Collections_Generic_HashSet_object___Contains(
           pendingProducts,
           (Il2CppObject *)prodcut,
           (const MethodInfo_3509298 *)Method_System_Collections_Generic_HashSet_Product__Contains__);
}


bool __fastcall PurchaseLogic__IsPurchasingFrameworkInitialized(PurchaseLogic_o *this, const MethodInfo *method)
{
  struct PurchaseLogic_StaticFields *static_fields; // x8

  if ( (byte_4BDBE9E & 1) == 0 )
  {
    sub_1C21E38(&PurchaseLogic_TypeInfo);
    byte_4BDBE9E = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  return static_fields->_storeController && static_fields->_storeExtensionProvider != 0LL;
}


bool __fastcall PurchaseLogic__IsServerCommitedPurchase(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        const MethodInfo *method)
{
  PurchaseLogic___c_c *v4; // x0
  System_Func_object__bool__o *_9__43_0; // x20
  Il2CppObject *v6; // x21
  struct PurchaseLogic___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDBEAC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_1C21E38(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    sub_1C21E38(&Method_PurchaseLogic___c__IsServerCommitedPurchase_b__43_0__);
    sub_1C21E38(&PurchaseLogic___c_TypeInfo);
    byte_4BDBEAC = 1;
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
    _9__43_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__43_0, v6, Method_PurchaseLogic___c__IsServerCommitedPurchase_b__43_0__, 0LL);
    static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__43_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__43_0, (int64_t)_9__43_0, v8, v9, v10, v11, v12, v13);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
           (System_Func_TSource__bool__o *)_9__43_0,
           (const MethodInfo_2FB9E74 *)Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___);
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
  if ( (byte_4BDBEB6 & 1) == 0 )
  {
    this = (PurchaseLogic_o *)sub_1C21E38(&StringLiteral_10076/*"OnDeferred product="*/);
    byte_4BDBEB6 = 1;
  }
  if ( !product
    || (metadata_k__BackingField = product->fields._metadata_k__BackingField) == 0LL
    || (logOutputAction = v4->fields._logOutputAction,
        this = (PurchaseLogic_o *)System_String__Concat_63115476(
                                    (System_String_o *)StringLiteral_10076/*"OnDeferred product="*/,
                                    metadata_k__BackingField->fields._localizedTitle_k__BackingField,
                                    0LL),
        !logOutputAction) )
  {
    sub_1C22094(this, product);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, PurchaseLogic_o *, _QWORD))logOutputAction->fields.m_target)(
    logOutputAction->fields.original_method_info,
    this,
    *(_QWORD *)&logOutputAction->fields.extra_arg);
}


void __fastcall PurchaseLogic__OnEndPaymentStore(
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_String_o **v22; // x25
  struct System_Action_string__o *logOutputAction; // x28
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_String_o *v30; // x26
  int64_t v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  void *v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x1
  struct System_Action_string__o *v58; // x21
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x21
  System_Func_object__bool__o *v60; // x22
  Il2CppObject *v61; // x0
  Il2CppObject *Instance; // x22
  Il2CppObject *v63; // x22
  PurchaseLogic_ProductFinishedAction_o *v64; // x23
  const MethodInfo *v65; // x3
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  const MethodInfo *v72; // x7
  System_Enum_o v73; // [xsp+8h] [xbp-88h] BYREF
  int32_t v74; // [xsp+18h] [xbp-78h]
  bool isSentGift[4]; // [xsp+20h] [xbp-70h] BYREF
  int32_t shopId; // [xsp+24h] [xbp-6Ch] BYREF
  __int64 v77; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4BDBEB0 & 1) == 0 )
  {
    sub_1C21E38(&Method_CommonUI_OpenStonePurchaseReciveMenu___77646856);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_Product___);
    sub_1C21E38(&System_Func_Product__bool__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&PurchaseLogic_ProductFinishedAction_TypeInfo);
    sub_1C21E38(&PurchaseBehaviour_Result_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&Method_PurchaseLogic___c__DisplayClass47_0__OnEndPaymentStore_b__0__);
    sub_1C21E38(&PurchaseLogic___c__DisplayClass47_0_TypeInfo);
    sub_1C21E38(&StringLiteral_16348/*"] "*/);
    sub_1C21E38(&StringLiteral_16088/*"[ "*/);
    sub_1C21E38(&StringLiteral_11012/*"PurchaseLogic:OnEndPaymentStore result "*/);
    sub_1C21E38(&StringLiteral_4780/*"Confirming purchase of "*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDBEB0 = 1;
  }
  v77 = 0LL;
  shopId = 0;
  isSentGift[0] = 0;
  v13 = sub_1C22084(PurchaseLogic___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_26;
  *(_QWORD *)(v13 + 16) = productId;
  v22 = (System_String_o **)(v13 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)productId, v16, v17, v18, v19, v20, v21);
  logOutputAction = this->fields._logOutputAction;
  v14 = (System_String_o *)sub_1C21EE0(string___TypeInfo, 5LL);
  if ( !v14 )
    goto LABEL_26;
  v30 = v14;
  if ( !LODWORD(v14[1].klass) )
    goto LABEL_25;
  v31 = StringLiteral_11012/*"PurchaseLogic:OnEndPaymentStore result "*/;
  v14[1].monitor = (void *)StringLiteral_11012/*"PurchaseLogic:OnEndPaymentStore result "*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v14[1].monitor, v31, v24, v25, v26, v27, v28, v29);
  v73.klass = (System_Enum_c *)PurchaseBehaviour_Result_TypeInfo;
  v73.monitor = (void *)-1LL;
  v74 = purchaseResult;
  v14 = System_Enum__ToString(&v73, 0LL);
  if ( LODWORD(v30[1].klass) <= 1
    || (v30[1].fields = (System_String_Fields)v14,
        sub_1C21DDC((PartyOrganizationUtility_o *)&v30[1].fields, (int64_t)v14, v32, v33, v34, v35, v36, v37),
        LODWORD(v30[1].klass) <= 2)
    || (v44 = StringLiteral_16088/*"[ "*/,
        v30[2].klass = (System_String_c *)StringLiteral_16088/*"[ "*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)&v30[2], (int64_t)v44, v38, v39, v40, v41, v42, v43),
        LODWORD(v30[1].klass) <= 3)
    || (v30[2].monitor = resultData,
        sub_1C21DDC((PartyOrganizationUtility_o *)&v30[2].monitor, (int64_t)resultData, v45, v46, v47, v48, v49, v50),
        LODWORD(v30[1].klass) <= 4) )
  {
LABEL_25:
    sub_1C2209C(v14, v15);
  }
  v57 = StringLiteral_16348/*"] "*/;
  v30[2].fields = (System_String_Fields)StringLiteral_16348/*"] "*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v30[2].fields, v57, v51, v52, v53, v54, v55, v56);
  v14 = System_String__Concat_63129004((System_String_array *)v30, 0LL);
  if ( !logOutputAction )
    goto LABEL_26;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))logOutputAction->fields.m_target)(
    logOutputAction->fields.original_method_info,
    v14,
    *(_QWORD *)&logOutputAction->fields.extra_arg);
  if ( purchaseResult != 4 && purchaseResult != 2 )
    goto LABEL_18;
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._20_UpdateMonthlyPurchasePrice.method)(
    this,
    (unsigned int)bankShopId,
    this->klass->vtable._21_GetPrice.methodPtr);
  if ( System_String__op_Inequality(*v22, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    ((void (__fastcall *)(PurchaseLogic_o *, System_String_o *, System_String_o *, Il2CppMethodPointer))this->klass->vtable._24_SendPurchaseAction.method)(
      this,
      *v22,
      transactionId,
      this->klass->vtable._25_OnDeferred.methodPtr);
  v58 = this->fields._logOutputAction;
  v14 = System_String__Concat_63115476((System_String_o *)StringLiteral_4780/*"Confirming purchase of "*/, *v22, 0LL);
  if ( !v58 )
LABEL_26:
    sub_1C22094(v14, v15);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))v58->fields.m_target)(
    v58->fields.original_method_info,
    v14,
    *(_QWORD *)&v58->fields.extra_arg);
  pendingProducts = this->fields._pendingProducts;
  v60 = (System_Func_object__bool__o *)sub_1C22084(System_Func_Product__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v60,
    (Il2CppObject *)v13,
    Method_PurchaseLogic___c__DisplayClass47_0__OnEndPaymentStore_b__0__,
    0LL);
  v61 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
          (System_Collections_Generic_IEnumerable_TSource__o *)pendingProducts,
          (System_Func_TSource__bool__o *)v60,
          (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_Product___);
  if ( v61 )
    ((void (__fastcall *)(PurchaseLogic_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._18_ConfirmPurchase.method)(
      this,
      v61,
      this->klass->vtable._19_ExtractReceiptContents.methodPtr);
LABEL_18:
  if ( purchaseResult != 4 && !this->fields._buyProductFinishedAction )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    {
      v63 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v64 = (PurchaseLogic_ProductFinishedAction_o *)sub_1C22084(PurchaseLogic_ProductFinishedAction_TypeInfo);
      PurchaseLogic_ProductFinishedAction___ctor(
        v64,
        v63,
        (intptr_t)Method_CommonUI_OpenStonePurchaseReciveMenu___77646856,
        v65);
      this->fields._buyProductFinishedAction = v64;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields._buyProductFinishedAction,
        (int64_t)v64,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
    }
  }
  v77 = 0LL;
  shopId = 0;
  isSentGift[0] = 0;
  ((void (__fastcall *)(PurchaseLogic_o *, struct PurchaseByBank_UnityIap_Request_PurchaseResult_array *, char *, __int64 *, int32_t *, bool *, Il2CppMethodPointer))this->klass->vtable._22_GetAddedStoneNum.method)(
    this,
    this->fields._purchaseResultArray,
    (char *)&v77 + 4,
    &v77,
    &shopId,
    isSentGift,
    this->klass->vtable._23_ShowPurchaseFailedNotification.methodPtr);
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(
    this,
    purchaseResult,
    0,
    SHIDWORD(v77),
    v77,
    shopId,
    isSentGift[0],
    v72);
}


void __fastcall PurchaseLogic__OnEndSendReceiptData(
        PurchaseLogic_o *this,
        System_String_o *result,
        const MethodInfo *method)
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

  if ( (byte_4BDBEAD & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_1C21E38(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_11405/*"ReceiptError"*/);
    sub_1C21E38(&StringLiteral_23065/*"purchaseResultArray is null."*/);
    sub_1C21E38(&StringLiteral_7231/*"Google Play canceled on restore purchase"*/);
    sub_1C21E38(&StringLiteral_11011/*"PurchaseLogic:EndSendReceiptData ["*/);
    sub_1C21E38(&StringLiteral_23218/*"receipt_error"*/);
    sub_1C21E38(&StringLiteral_18032/*"canceled_purchase_error"*/);
    sub_1C21E38(&StringLiteral_11014/*"PurchaseResult NotFound Error"*/);
    sub_1C21E38(&StringLiteral_11015/*"PurchaseResult NotFound."*/);
    sub_1C21E38(&StringLiteral_10796/*"PaymentOk"*/);
    sub_1C21E38(&StringLiteral_7232/*"Google Play pending on restore purchase"*/);
    sub_1C21E38(&StringLiteral_11010/*"PurchaseBehaviour.Result.SUCCESS_WITHOUT_NOTICE _currentTransactionId="*/);
    sub_1C21E38(&StringLiteral_6313/*"Error["*/);
    sub_1C21E38(&StringLiteral_22912/*"pending_purchase_error"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_5361/*"DeferredPurchaseProductIds"*/);
    sub_1C21E38(&StringLiteral_16345/*"]"*/);
    byte_4BDBEAD = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  FirstPurchaseResult = (__int64)System_String__Concat_63126736(
                                   (System_String_o *)StringLiteral_11011/*"PurchaseLogic:EndSendReceiptData ["*/,
                                   result,
                                   (System_String_o *)StringLiteral_16345/*"]"*/,
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
                                   v8);
      if ( (IsServerCommitedPurchase & 1) != 0 )
      {
        v17 = this->fields._logOutputAction;
        FirstPurchaseResult = (__int64)System_String__Concat_63115476(
                                         (System_String_o *)StringLiteral_11010/*"PurchaseBehaviour.Result.SUCCESS_WITHOUT_NOTICE _currentTransactionId="*/,
                                         this->fields._currentTransactionId,
                                         0LL);
        if ( !v17 )
          goto LABEL_49;
        IsServerCommitedPurchase = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v17->fields.m_target)(
                                     v17->fields.original_method_info,
                                     FirstPurchaseResult,
                                     *(_QWORD *)&v17->fields.extra_arg);
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
            FirstPurchaseResult = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !FirstPurchaseResult )
              goto LABEL_49;
            FirstPurchaseResult = (__int64)DataManager__GetMasterData_object_(
                                             (DataManager_o *)FirstPurchaseResult,
                                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_BankShopMaster___);
            if ( !FirstPurchaseResult )
              goto LABEL_49;
            Entity = (const MethodInfo *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)FirstPurchaseResult,
                                           v23,
                                           (const MethodInfo_325BDC8 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
            if ( Entity )
            {
              klass = (System_String_o *)Entity->klass;
              FirstPurchaseResult = PurchaseLogic__IsAppleDevice(Entity);
              if ( (FirstPurchaseResult & 1) != 0 )
              {
                FirstPurchaseResult = UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5361/*"DeferredPurchaseProductIds"*/, 0LL);
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
                    v32 = 0LL;
                    while ( 1 )
                    {
                      if ( (unsigned int)v32 >= max_length )
                        sub_1C2209C(FirstPurchaseResult, purchaseResultArray);
                      v33 = v26->m_Items[v32];
                      if ( !v33 )
                        break;
                      purchasedBankShopId = v33->fields.purchasedBankShopId;
                      FirstPurchaseResult = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !FirstPurchaseResult )
                        break;
                      FirstPurchaseResult = (__int64)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)FirstPurchaseResult,
                                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_BankShopMaster___);
                      if ( !FirstPurchaseResult )
                        break;
                      FirstPurchaseResult = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)FirstPurchaseResult,
                                                       purchasedBankShopId,
                                                       (const MethodInfo_325BDC8 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
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
                    sub_1C22094(FirstPurchaseResult, purchaseResultArray);
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
            v14 = (System_String_o *)StringLiteral_10796/*"PaymentOk"*/;
            v31 = v23;
            goto LABEL_35;
          }
        }
        logErrorOutputAction = this->fields._logErrorOutputAction;
        if ( logErrorOutputAction )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logErrorOutputAction->fields.m_target)(
            logErrorOutputAction->fields.original_method_info,
            StringLiteral_11015/*"PurchaseResult NotFound."*/,
            *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
          v19 = &StringLiteral_11014/*"PurchaseResult NotFound Error"*/;
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
      IsServerCommitedPurchase = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v21->fields.m_target)(
                                   v21->fields.original_method_info,
                                   StringLiteral_23065/*"purchaseResultArray is null."*/,
                                   *(_QWORD *)&v21->fields.extra_arg);
    }
    v18 = 2;
    goto LABEL_21;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22912/*"pending_purchase_error"*/, 0LL) )
  {
    if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_18032/*"canceled_purchase_error"*/, 0LL) )
    {
      v11 = &StringLiteral_7231/*"Google Play canceled on restore purchase"*/;
      currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
      v13 = 17;
      goto LABEL_10;
    }
    if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_23218/*"receipt_error"*/, 0LL) )
    {
      v20 = System_String__Concat_63126736(
              (System_String_o *)StringLiteral_6313/*"Error["*/,
              result,
              (System_String_o *)StringLiteral_16345/*"]"*/,
              0LL);
      currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
      v13 = 7;
      v14 = v20;
      goto LABEL_34;
    }
    v19 = &StringLiteral_11405/*"ReceiptError"*/;
LABEL_33:
    v14 = (System_String_o *)*v19;
    currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
    v13 = 7;
    goto LABEL_34;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, __int64, Il2CppMethodPointer))this->klass->vtable._30_SetExistsDeferredPurchase.method)(
    this,
    1LL,
    this->klass->vtable._31_IsDeferredPurchaseExists.methodPtr);
  v11 = &StringLiteral_7232/*"Google Play pending on restore purchase"*/;
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


void __fastcall PurchaseLogic__OnInitializeFailed(PurchaseLogic_o *this, int32_t error, const MethodInfo *method)
{
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  struct System_Action_string__o *logErrorOutputAction; // x20
  System_String_o *v10; // x0
  System_Enum_o v11; // [xsp+8h] [xbp-38h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h]

  if ( (byte_4BDBEB8 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Purchasing_InitializationFailureReason_TypeInfo);
    sub_1C21E38(&StringLiteral_10106/*"OnInitializeFailed InitializationFailureReason:"*/);
    byte_4BDBEB8 = 1;
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
    v6 = System_Enum__ToString(&v11, 0LL);
    v7 = System_String__Concat_63115476((System_String_o *)StringLiteral_10106/*"OnInitializeFailed InitializationFailureReason:"*/, v6, 0LL);
    if ( logErrorOutputActionSampledByRatio )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD, float))logErrorOutputActionSampledByRatio->fields.m_target)(
        logErrorOutputActionSampledByRatio->fields.original_method_info,
        v7,
        *(_QWORD *)&logErrorOutputActionSampledByRatio->fields.extra_arg,
        0.01);
      return;
    }
LABEL_9:
    sub_1C22094(v7, v8);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v11.klass = (System_Enum_c *)UnityEngine_Purchasing_InitializationFailureReason_TypeInfo;
  v11.monitor = (void *)-1LL;
  v12 = error;
  v10 = System_Enum__ToString(&v11, 0LL);
  v7 = System_String__Concat_63115476((System_String_o *)StringLiteral_10106/*"OnInitializeFailed InitializationFailureReason:"*/, v10, 0LL);
  if ( !logErrorOutputAction )
    goto LABEL_9;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))logErrorOutputAction->fields.m_target)(
    logErrorOutputAction->fields.original_method_info,
    v7,
    *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
}


void __fastcall PurchaseLogic__OnInitialized(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_IStoreController_o *controller,
        UnityEngine_Purchasing_IExtensionProvider_o *extensions,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  struct System_Action_string__o *logOutputAction; // x8
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct PurchaseLogic_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  PurchaseLogic_o *v23; // x0
  const MethodInfo *v24; // x1
  UnityEngine_Purchasing_IAppleExtensions_o *AppleExtension; // x0
  UnityEngine_Purchasing_IAppleExtensions_o *v26; // x20
  System_Action_object__o *v27; // x21
  UnityEngine_Purchasing_IAppleExtensions_c *klass; // x8
  __int64 v29; // x9
  UnityEngine_Purchasing_IAppleExtensions_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4BDBEB5 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_Product__TypeInfo);
    sub_1C21E38(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo);
    sub_1C21E38(&PurchaseLogic_TypeInfo);
    sub_1C21E38(&StringLiteral_10107/*"OnInitialized: PASS"*/);
    byte_4BDBEB5 = 1;
  }
  v7 = ((__int64 (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer, UnityEngine_Purchasing_IExtensionProvider_o *, const MethodInfo *))this->klass->vtable._28_EnableCrashReporterOnInitializeSucceeded.method)(
         this,
         this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.methodPtr,
         extensions,
         method);
  logOutputAction = this->fields._logOutputAction;
  if ( !logOutputAction )
    sub_1C22094(v7, v8);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logOutputAction->fields.m_target)(
    logOutputAction->fields.original_method_info,
    StringLiteral_10107/*"OnInitialized: PASS"*/,
    *(_QWORD *)&logOutputAction->fields.extra_arg);
  PurchaseLogic_TypeInfo->static_fields->_storeController = controller;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)PurchaseLogic_TypeInfo->static_fields,
    (int64_t)controller,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  static_fields->_storeExtensionProvider = extensions;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->_storeExtensionProvider,
    (int64_t)extensions,
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
    v27 = (System_Action_object__o *)sub_1C22084(System_Action_Product__TypeInfo);
    System_Action_object____ctor(
      v27,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._26_OnInitializeFailed.methodPtr,
      0LL);
    klass = v26->klass;
    v29 = *(unsigned __int16 *)(&v26->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v26->klass->_2.bitflags2 + 3) )
    {
      p_offset = (UnityEngine_Purchasing_IAppleExtensions_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
      {
        --v29;
        p_offset += 2;
        if ( !v29 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C73E18(v26, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 2LL);
    }
    (*(void (__fastcall **)(UnityEngine_Purchasing_IAppleExtensions_o *, System_Action_object__o *, _QWORD))p_method)(
      v26,
      v27,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall PurchaseLogic__OnPurchaseFailed(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        int32_t failureReason,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 IsAppleDevice; // x0
  const MethodInfo *v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  struct System_String_StaticFields *p_storeSpecificId_k__BackingField; // x8
  int64_t Empty; // x1
  System_String_o **v19; // x24
  const MethodInfo *v20; // x0
  const MethodInfo *v21; // x2
  struct System_Action_string__o *logErrorOutputAction; // x23
  System_String_o *v23; // x20
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  struct System_Action_string__o *sendReportOutputAction; // x25
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_String_o *v35; // x24
  System_Object_array *v36; // x23
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x24
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x24
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x24
  Il2CppObject *Instance; // x24
  Il2CppObject *v62; // x24
  PurchaseLogic_ProductFinishedAction_o *v63; // x25
  const MethodInfo *v64; // x3
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  System_Decimal_o *v72; // x23
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
  System_DateTime_o v83; // 0:x0.8
  System_DateTime_o v84; // 0:x0.8

  if ( (byte_4BDBEBA & 1) == 0 )
  {
    sub_1C21E38(&Method_CommonUI_OpenStonePurchaseReciveMenu___77646856);
    sub_1C21E38(&System_DateTime_TypeInfo);
    sub_1C21E38(&System_Decimal_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
    sub_1C21E38(&System_Func_BankShopEntity__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&PurchaseLogic_ProductFinishedAction_TypeInfo);
    sub_1C21E38(&PurchaseBehaviour_TypeInfo);
    sub_1C21E38(&UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&Method_PurchaseLogic___c__DisplayClass61_0__OnPurchaseFailed_b__0__);
    sub_1C21E38(&PurchaseLogic___c__DisplayClass61_0_TypeInfo);
    sub_1C21E38(&StringLiteral_25327/*"yyyy/MM/dd HH:mm:ss"*/);
    sub_1C21E38(&StringLiteral_10141/*"OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}, Purchase StartTime: {2}, Purchase FailedTime: {3}"*/);
    sub_1C21E38(&StringLiteral_5340/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/);
    byte_4BDBEBA = 1;
  }
  dateData = 0LL;
  v7 = sub_1C22084(PurchaseLogic___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
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
  Empty = (int64_t)p_storeSpecificId_k__BackingField->Empty;
  *(struct System_String_StaticFields *)(v7 + 16) = (struct System_String_StaticFields)p_storeSpecificId_k__BackingField->Empty;
  v19 = (System_String_o **)(v7 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), Empty, v10, v11, v12, v13, v14, v15);
  IsAppleDevice = PurchaseLogic__IsAppleDevice(v20);
  if ( (IsAppleDevice & 1) != 0 )
  {
    IsAppleDevice = System_String__IsNullOrEmpty(*v19, 0LL);
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
                        (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__);
      if ( (IsAppleDevice & 1) != 0 )
      {
        PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(this, *v19, v21);
        logErrorOutputAction = this->fields._logErrorOutputAction;
        v23 = *v19;
        v81 = 4;
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(
                                UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo,
                                &v81,
                                v24,
                                v25,
                                v26);
        IsAppleDevice = (__int64)System_String__Format_63129848(
                                   (System_String_o *)StringLiteral_5340/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/,
                                   (Il2CppObject *)v23,
                                   v27,
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
  IsAppleDevice = sub_1C21EE0(object___TypeInfo, 4LL);
  if ( !IsAppleDevice )
LABEL_53:
    sub_1C22094(IsAppleDevice, v9);
  v35 = *v19;
  v36 = (System_Object_array *)IsAppleDevice;
  if ( v35 )
  {
    IsAppleDevice = sub_1C21F74(v35, *(_QWORD *)(*(_QWORD *)IsAppleDevice + 64LL));
    if ( !IsAppleDevice )
      goto LABEL_55;
  }
  if ( !v36->max_length )
    goto LABEL_54;
  v36->m_Items[0] = (Il2CppObject *)v35;
  sub_1C21DDC((PartyOrganizationUtility_o *)v36->m_Items, (int64_t)v35, v29, v30, v31, v32, v33, v34);
  v81 = failureReason;
  IsAppleDevice = j_il2cpp_value_box_0(UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, &v81, v37, v38, v39);
  v46 = IsAppleDevice;
  if ( IsAppleDevice )
  {
    IsAppleDevice = sub_1C21F74(IsAppleDevice, v36->obj.klass->_1.element_class);
    if ( !IsAppleDevice )
      goto LABEL_55;
  }
  if ( v36->max_length <= 1 )
    goto LABEL_54;
  v36->m_Items[1] = (Il2CppObject *)v46;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v36->m_Items[1], v46, v40, v41, v42, v43, v44, v45);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v83.fields._dateData = (uint64_t)&this->fields._purchaseStartTime;
  IsAppleDevice = (__int64)System_DateTime__ToString_63806448(v83, (System_String_o *)StringLiteral_25327/*"yyyy/MM/dd HH:mm:ss"*/, 0LL);
  v53 = IsAppleDevice;
  if ( IsAppleDevice )
  {
    IsAppleDevice = sub_1C21F74(IsAppleDevice, v36->obj.klass->_1.element_class);
    if ( !IsAppleDevice )
      goto LABEL_55;
  }
  if ( v36->max_length <= 2 )
    goto LABEL_54;
  v36->m_Items[2] = (Il2CppObject *)v53;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v36->m_Items[2], v53, v47, v48, v49, v50, v51, v52);
  v84.fields._dateData = (uint64_t)&dateData;
  IsAppleDevice = (__int64)System_DateTime__ToString_63806448(v84, (System_String_o *)StringLiteral_25327/*"yyyy/MM/dd HH:mm:ss"*/, 0LL);
  v60 = IsAppleDevice;
  if ( IsAppleDevice )
  {
    IsAppleDevice = sub_1C21F74(IsAppleDevice, v36->obj.klass->_1.element_class);
    if ( !IsAppleDevice )
    {
LABEL_55:
      v80 = sub_1C220B8(IsAppleDevice);
      sub_1C21F60(v80, 0LL);
    }
  }
  if ( v36->max_length <= 3 )
LABEL_54:
    sub_1C2209C(IsAppleDevice, v9);
  v36->m_Items[3] = (Il2CppObject *)v60;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v36->m_Items[3], v60, v54, v55, v56, v57, v58, v59);
  IsAppleDevice = (__int64)System_String__Format_63129984((System_String_o *)StringLiteral_10141/*"OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}, Purchase StartTime: {2}, Purchase FailedTime: {3}"*/, v36, 0LL);
  if ( !sendReportOutputAction )
    goto LABEL_53;
  IsAppleDevice = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))sendReportOutputAction->fields.m_target)(
                    sendReportOutputAction->fields.original_method_info,
                    IsAppleDevice,
                    *(_QWORD *)&sendReportOutputAction->fields.extra_arg);
LABEL_34:
  if ( !this->fields._buyProductFinishedAction )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsAppleDevice = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
    if ( (IsAppleDevice & 1) != 0 )
    {
      v62 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v63 = (PurchaseLogic_ProductFinishedAction_o *)sub_1C22084(PurchaseLogic_ProductFinishedAction_TypeInfo);
      PurchaseLogic_ProductFinishedAction___ctor(
        v63,
        v62,
        (intptr_t)Method_CommonUI_OpenStonePurchaseReciveMenu___77646856,
        v64);
      this->fields._buyProductFinishedAction = v63;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields._buyProductFinishedAction,
        (int64_t)v63,
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
    v72 = *(System_Decimal_o **)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.flags;
    product = *(UnityEngine_Purchasing_Product_o **)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.lo;
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    LODWORD(product) = System_Decimal__ToInt32(v72, (const MethodInfo *)product);
  }
  v73 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v73 = PurchaseBehaviour_TypeInfo;
  }
  BankShopEntityCollection = (System_Collections_Generic_IEnumerable_TSource__o *)v73->static_fields->BankShopEntityCollection;
  v75 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BankShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v75,
    (Il2CppObject *)v7,
    Method_PurchaseLogic___c__DisplayClass61_0__OnPurchaseFailed_b__0__,
    0LL);
  v76 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
          BankShopEntityCollection,
          (System_Func_TSource__bool__o *)v75,
          (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
  if ( v76 )
    klass = (int32_t)v76[1].klass;
  else
    klass = 0;
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._23_ShowPurchaseFailedNotification.method)(
    this,
    (unsigned int)failureReason,
    this->klass->vtable._24_SendPurchaseAction.methodPtr);
  if ( (unsigned int)failureReason > 6 )
    v79 = 7;
  else
    v79 = dword_C39520[failureReason];
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, v79, (int32_t)product, 0, 0, klass, 0, v78);
}


int32_t __fastcall PurchaseLogic__ProcessPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_PurchaseEventArgs_o *purchaseEventArgs,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct UnityEngine_Purchasing_Product_o *purchasedProduct_k__BackingField; // x1
  UnityEngine_Purchasing_Product_o **v14; // x20
  PurchaseBehaviour_c *v15; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_object__bool__o *v17; // x23
  __int64 v18; // x8
  __int64 v19; // x8
  struct System_Action_string__o *logOutputAction; // x21
  Il2CppObject *v21; // x1
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  struct System_Action_string__o *v23; // x21
  System_String_o *v24; // x0
  struct System_Action_string__o *v25; // x9
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  struct System_Action_string__o *logErrorOutputAction; // x8
  System_Decimal_o v30; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4BDBEB9 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_string___);
    sub_1C21E38(&System_Decimal_TypeInfo);
    sub_1C21E38(&System_Func_string__bool__TypeInfo);
    sub_1C21E38(&PurchaseBehaviour_TypeInfo);
    sub_1C21E38(&Method_PurchaseLogic___c__DisplayClass60_0__ProcessPurchase_b__0__);
    sub_1C21E38(&PurchaseLogic___c__DisplayClass60_0_TypeInfo);
    sub_1C21E38(&StringLiteral_10963/*"ProcessPurchase: product is null"*/);
    sub_1C21E38(&StringLiteral_10962/*"ProcessPurchase: PASS. Product: '{0}'"*/);
    sub_1C21E38(&StringLiteral_10961/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/);
    sub_1C21E38(&StringLiteral_10943/*"Price: "*/);
    byte_4BDBEB9 = 1;
  }
  *(_OWORD *)&v30.fields.flags = 0uLL;
  v5 = sub_1C22084(PurchaseLogic___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( purchaseEventArgs )
  {
    purchasedProduct_k__BackingField = purchaseEventArgs->fields._purchasedProduct_k__BackingField;
    if ( !v5 )
      goto LABEL_28;
  }
  else
  {
    purchasedProduct_k__BackingField = 0LL;
    if ( !v5 )
      goto LABEL_28;
  }
  *(_QWORD *)(v5 + 16) = purchasedProduct_k__BackingField;
  v14 = (UnityEngine_Purchasing_Product_o **)(v5 + 16);
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)(v5 + 16),
    (int64_t)purchasedProduct_k__BackingField,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( *(_QWORD *)(v5 + 16) )
  {
    v15 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v15 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v15->static_fields->ConsumableProductIdCollection;
    v17 = (System_Func_object__bool__o *)sub_1C22084(System_Func_string__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      (Il2CppObject *)v5,
      Method_PurchaseLogic___c__DisplayClass60_0__ProcessPurchase_b__0__,
      0LL);
    v6 = BasicHelper__Any_object_(
           ConsumableProductIdCollection,
           (System_Func_T__bool__o *)v17,
           (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_string___);
    v18 = *(_QWORD *)(v5 + 16);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 16);
      if ( v19 )
      {
        logOutputAction = this->fields._logOutputAction;
        v21 = *(Il2CppObject **)(v19 + 16);
        if ( (v6 & 1) == 0 )
        {
          v6 = (__int64)System_String__Format((System_String_o *)StringLiteral_10961/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/, v21, 0LL);
          if ( !logOutputAction )
            goto LABEL_28;
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logOutputAction->fields.m_target)(
            logOutputAction->fields.original_method_info,
            v6,
            *(_QWORD *)&logOutputAction->fields.extra_arg);
          goto LABEL_26;
        }
        v6 = (__int64)System_String__Format((System_String_o *)StringLiteral_10962/*"ProcessPurchase: PASS. Product: '{0}'"*/, v21, 0LL);
        if ( logOutputAction )
        {
          v6 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logOutputAction->fields.m_target)(
                 logOutputAction->fields.original_method_info,
                 v6,
                 *(_QWORD *)&logOutputAction->fields.extra_arg);
          if ( *v14 )
          {
            metadata_k__BackingField = (*v14)->fields._metadata_k__BackingField;
            if ( metadata_k__BackingField )
            {
              v23 = this->fields._logOutputAction;
              *(_OWORD *)&v30.fields.flags = *(_OWORD *)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.flags;
              if ( !System_Decimal_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
              v24 = System_Decimal__ToString(&v30, 0LL);
              v6 = (__int64)System_String__Concat_63115476((System_String_o *)StringLiteral_10943/*"Price: "*/, v24, 0LL);
              if ( v23 )
              {
                v6 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v23->fields.m_target)(
                       v23->fields.original_method_info,
                       v6,
                       *(_QWORD *)&v23->fields.extra_arg);
                if ( *v14 )
                {
                  v25 = this->fields._logOutputAction;
                  if ( v25 )
                  {
                    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, _QWORD))v25->fields.m_target)(
                      v25->fields.original_method_info,
                      (*v14)->fields._receipt_k__BackingField,
                      *(_QWORD *)&v25->fields.extra_arg);
                    PurchaseLogic__ValidateReceipt(this, *v14, v26);
LABEL_26:
                    PurchaseLogic__AddPendingPurchase(this, *v14, v27);
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
    sub_1C22094(v6, purchasedProduct_k__BackingField);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  if ( !logErrorOutputAction )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logErrorOutputAction->fields.m_target)(
    logErrorOutputAction->fields.original_method_info,
    StringLiteral_10963/*"ProcessPurchase: product is null"*/,
    *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
  return 1;
}


void __fastcall PurchaseLogic__PurchaseIfAvailable(
        PurchaseLogic_o *this,
        int32_t shopId,
        UnityEngine_Purchasing_Product_o *product,
        int32_t price,
        const MethodInfo *method)
{
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x0
  const MethodInfo *v25; // x2
  int32_t CumulativeAmount; // w2
  const MethodInfo *v27; // x7
  NetworkManager_ResultCallbackFunc_o *v28; // x19
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  NetworkManager_ResultCallbackFunc_o *v35; // x21
  PurchaseLogic_o *v36; // x0
  const MethodInfo *v37; // x3

  if ( (byte_4BDBEA0 & 1) == 0 )
  {
    sub_1C21E38(&AgeVerificationMenu_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_PurchaseLogic___c__DisplayClass29_0__PurchaseIfAvailable_b__0__);
    sub_1C21E38(&Method_PurchaseLogic___c__DisplayClass29_0__PurchaseIfAvailable_b__1__);
    sub_1C21E38(&PurchaseLogic___c__DisplayClass29_0_TypeInfo);
    byte_4BDBEA0 = 1;
  }
  v9 = sub_1C22084(PurchaseLogic___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1C22094(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = product;
  *(_DWORD *)(v9 + 24) = price;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)product, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v9 + 40) = shopId;
  if ( PurchaseLogic__IsAppleDevice(v24)
    && PurchaseLogic__IsPendingPurchase(this, *(UnityEngine_Purchasing_Product_o **)(v9 + 32), v25) )
  {
    if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    CumulativeAmount = AgeVerificationMenu__GetCumulativeAmount(0LL);
    PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, 13, CumulativeAmount, 0, 0, 0, 0, v27);
  }
  else
  {
    v28 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v28,
      (Il2CppObject *)v9,
      Method_PurchaseLogic___c__DisplayClass29_0__PurchaseIfAvailable_b__0__,
      0LL);
    *(_QWORD *)(v9 + 48) = v28;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 48), (int64_t)v28, v29, v30, v31, v32, v33, v34);
    LODWORD(v28) = *(_DWORD *)(v9 + 40);
    v35 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v35,
      (Il2CppObject *)v9,
      Method_PurchaseLogic___c__DisplayClass29_0__PurchaseIfAvailable_b__1__,
      0LL);
    PurchaseLogic__RequestPreparePurchaseByBank(v36, (int32_t)v28, v35, v37);
  }
}


void __fastcall PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(
        PurchaseLogic_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x19
  System_Predicate_object__o *v16; // x21
  PurchaseLogic_o *v17; // x0
  const MethodInfo *v18; // x2

  if ( (byte_4BDBEBE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__RemoveAll__);
    sub_1C21E38(&System_Predicate_string__TypeInfo);
    sub_1C21E38(&Method_PurchaseLogic___c__DisplayClass82_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__);
    sub_1C21E38(&PurchaseLogic___c__DisplayClass82_0_TypeInfo);
    byte_4BDBEBE = 1;
  }
  v4 = sub_1C22084(PurchaseLogic___c__DisplayClass82_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_7;
  *(_QWORD *)(v4 + 16) = productId;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)productId, v7, v8, v9, v10, v11, v12);
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v4 + 16), 0LL);
  if ( IsNullOrEmpty )
    return;
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)IsNullOrEmpty,
                                                v14);
  v16 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_string__TypeInfo);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v4,
    Method_PurchaseLogic___c__DisplayClass82_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__,
    0LL);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
LABEL_7:
    sub_1C22094(v5, v6);
  v17 = (PurchaseLogic_o *)System_Collections_Generic_List_object___RemoveAll(
                             (System_Collections_Generic_List_object__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
                             (System_Predicate_T__o *)v16,
                             (const MethodInfo_3650710 *)Method_System_Collections_Generic_List_string__RemoveAll__);
  PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(v17, DeferredPurchaseProductIdsFromPlayerPrefs, v18);
}


void __fastcall PurchaseLogic__RemovePendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *pendingProducts; // x0

  if ( (byte_4BDBEA7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Product__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Product__Remove__);
    byte_4BDBEA7 = 1;
  }
  pendingProducts = (System_Collections_Generic_HashSet_T__o *)this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_8;
  if ( System_Collections_Generic_HashSet_object___Contains(
         pendingProducts,
         (Il2CppObject *)product,
         (const MethodInfo_3509298 *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
  {
    pendingProducts = (System_Collections_Generic_HashSet_T__o *)this->fields._pendingProducts;
    if ( pendingProducts )
    {
      System_Collections_Generic_HashSet_object___Remove(
        pendingProducts,
        (Il2CppObject *)product,
        (const MethodInfo_3509464 *)Method_System_Collections_Generic_HashSet_Product__Remove__);
      return;
    }
LABEL_8:
    sub_1C22094(pendingProducts, product);
  }
}


void __fastcall PurchaseLogic__RemovePreparePurchaseShopIdsInPlayerPrefs(
        PurchaseLogic_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v4; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  PurchaseLogic_o *v13; // x0
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_string__o *PreparePurchaseShopIdsFromPlayerPrefs; // x20
  System_Predicate_object__o *v16; // x21
  PurchaseLogic_o *v17; // x0
  const MethodInfo *v18; // x2
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  v19 = shopId;
  if ( (byte_4BDBEC2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__RemoveAll__);
    sub_1C21E38(&System_Predicate_string__TypeInfo);
    sub_1C21E38(&Method_PurchaseLogic___c__DisplayClass86_0__RemovePreparePurchaseShopIdsInPlayerPrefs_b__0__);
    sub_1C21E38(&PurchaseLogic___c__DisplayClass86_0_TypeInfo);
    byte_4BDBEC2 = 1;
  }
  v4 = sub_1C22084(PurchaseLogic___c__DisplayClass86_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( shopId >= 1 )
  {
    v5 = System_Int32__ToString((int32_t)&v19, 0LL);
    if ( !v4
      || (*(_QWORD *)(v4 + 16) = v5,
          sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)v5, v7, v8, v9, v10, v11, v12),
          PreparePurchaseShopIdsFromPlayerPrefs = PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs(v13, v14),
          v16 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_string__TypeInfo),
          System_Predicate_object____ctor(
            v16,
            (Il2CppObject *)v4,
            Method_PurchaseLogic___c__DisplayClass86_0__RemovePreparePurchaseShopIdsInPlayerPrefs_b__0__,
            0LL),
          !PreparePurchaseShopIdsFromPlayerPrefs) )
    {
      sub_1C22094(v5, v6);
    }
    v17 = (PurchaseLogic_o *)System_Collections_Generic_List_object___RemoveAll(
                               (System_Collections_Generic_List_object__o *)PreparePurchaseShopIdsFromPlayerPrefs,
                               (System_Predicate_T__o *)v16,
                               (const MethodInfo_3650710 *)Method_System_Collections_Generic_List_string__RemoveAll__);
    PurchaseLogic__SavePreparePurchaseShopIdsToPlayerPrefs(v17, PreparePurchaseShopIdsFromPlayerPrefs, v18);
  }
}


void __fastcall PurchaseLogic__RequestGameServerBankStatus(
        PurchaseLogic_o *this,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4BDBEA2 & 1) == 0 )
  {
    sub_1C21E38(&Method_NetworkManager_getRequest_BankStatusRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDBEA2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_BankStatusRequest___);
  if ( !Request_object )
    sub_1C22094(0LL, v5);
  BankStatusRequest__beginRequest((BankStatusRequest_o *)Request_object, 0LL);
}


void __fastcall PurchaseLogic__RequestPreparePurchaseByBank(
        PurchaseLogic_o *this,
        int32_t shopId,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4BDBEA1 & 1) == 0 )
  {
    sub_1C21E38(&Method_NetworkManager_getRequest_PreparePurchaseByBankRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDBEA1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_PreparePurchaseByBankRequest___);
  if ( !Request_object )
    sub_1C22094(0LL, v7);
  PreparePurchaseByBankRequest__beginRequest((PreparePurchaseByBankRequest_o *)Request_object, shopId, 0LL);
}


void __fastcall PurchaseLogic__RestorePurchases(PurchaseLogic_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  struct PurchaseLogic_StaticFields *static_fields; // x8
  void *v4; // x8
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x20
  UnityEngine_Purchasing_IExtensionProvider_c *klass; // x8
  __int64 v7; // x9
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  void *monitor; // x8
  void *v13; // x19
  System_String_o *v14; // x0
  __int64 v15; // x0
  __int64 v16; // x20
  System_Action_bool__object__o *v17; // x21
  __int64 v18; // x8
  __int64 v19; // x9
  UnityEngine_Purchasing_IAppleExtensions_c **v20; // x10
  __int64 v21; // x0
  System_Enum_o v22; // [xsp+8h] [xbp-38h] BYREF
  int32_t platform; // [xsp+18h] [xbp-28h]

  v2 = (Il2CppObject *)this;
  if ( (byte_4BDBEA5 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__string__TypeInfo);
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    sub_1C21E38(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___);
    sub_1C21E38(&Method_PurchaseLogic__RestorePurchases_b__34_0__);
    sub_1C21E38(&PurchaseLogic_TypeInfo);
    sub_1C21E38(&UnityEngine_RuntimePlatform_TypeInfo);
    sub_1C21E38(&StringLiteral_11565/*"RestorePurchases FAIL. Not supported on this platform. Current = "*/);
    sub_1C21E38(&StringLiteral_11567/*"RestorePurchases started ..."*/);
    this = (PurchaseLogic_o *)sub_1C21E38(&StringLiteral_11564/*"RestorePurchases FAIL. Not initialized."*/);
    byte_4BDBEA5 = 1;
  }
  if ( (byte_4BDBE9E & 1) == 0 )
  {
    this = (PurchaseLogic_o *)sub_1C21E38(&PurchaseLogic_TypeInfo);
    byte_4BDBE9E = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    monitor = v2[3].monitor;
    if ( monitor )
    {
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD))monitor + 3))(
        *((_QWORD *)monitor + 8),
        StringLiteral_11564/*"RestorePurchases FAIL. Not initialized."*/,
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
      v13 = v2[3].monitor;
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      platform = UnityEngine_Application__get_platform(0LL);
      v22.klass = (System_Enum_c *)UnityEngine_RuntimePlatform_TypeInfo;
      v22.monitor = (void *)-1LL;
      v14 = System_Enum__ToString(&v22, 0LL);
      this = (PurchaseLogic_o *)System_String__Concat_63115476((System_String_o *)StringLiteral_11565/*"RestorePurchases FAIL. Not supported on this platform. Current = "*/, v14, 0LL);
      if ( v13 )
      {
        (*((void (__fastcall **)(_QWORD, PurchaseLogic_o *, _QWORD))v13 + 3))(
          *((_QWORD *)v13 + 8),
          this,
          *((_QWORD *)v13 + 5));
        return;
      }
LABEL_35:
      sub_1C22094(this, method);
    }
  }
  v4 = v2[3].monitor;
  if ( !v4 )
    goto LABEL_35;
  this = (PurchaseLogic_o *)(*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))v4 + 3))(
                              *((_QWORD *)v4 + 8),
                              StringLiteral_11567/*"RestorePurchases started ..."*/,
                              *((_QWORD *)v4 + 5));
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    goto LABEL_35;
  klass = storeExtensionProvider->klass;
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
        goto LABEL_19;
    }
    p_method = (__int64)&klass->vtable[*p_offset + (int)v9].method;
  }
  else
  {
LABEL_19:
    p_method = sub_1C73E18(storeExtensionProvider, v8, v9);
  }
  v15 = sub_1C21F6C(*(_QWORD *)(p_method + 8));
  v16 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, __int64))(v15 + 8))(
          storeExtensionProvider,
          v15);
  v17 = (System_Action_bool__object__o *)sub_1C22084(System_Action_bool__string__TypeInfo);
  System_Action_bool__object____ctor(v17, v2, Method_PurchaseLogic__RestorePurchases_b__34_0__, 0LL);
  if ( !v16 )
    goto LABEL_35;
  v18 = *(_QWORD *)v16;
  v19 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
  {
    v20 = (UnityEngine_Purchasing_IAppleExtensions_c **)(*(_QWORD *)(v18 + 176) + 8LL);
    while ( *(v20 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      --v19;
      v20 += 2;
      if ( !v19 )
        goto LABEL_32;
    }
    v21 = v18 + 16LL * (*(_DWORD *)v20 + 1) + 312;
  }
  else
  {
LABEL_32:
    v21 = sub_1C73E18(v16, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(__int64, System_Action_bool__object__o *, _QWORD))v21)(v16, v17, *(_QWORD *)(v21 + 8));
}


void __fastcall PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        System_Collections_Generic_List_string__o *deferredPurchaseProductIdList,
        const MethodInfo *method)
{
  __int64 v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  Il2CppObject *current; // x1
  System_String_o **v14; // x20
  System_String_o *v15; // x0
  PurchaseBehaviour_c *v16; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_object__bool__o *v18; // x23
  System_String_o *v19; // x21
  System_String_o *a; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BDBEBC & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_string___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C21E38(&System_Func_string__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C21E38(&PurchaseBehaviour_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&Method_PurchaseLogic___c__DisplayClass80_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__);
    sub_1C21E38(&PurchaseLogic___c__DisplayClass80_0_TypeInfo);
    sub_1C21E38(&StringLiteral_1581/*";"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_5361/*"DeferredPurchaseProductIds"*/);
    byte_4BDBEBC = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( deferredPurchaseProductIdList )
  {
    a = (System_String_o *)StringLiteral_1/*""*/;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      (System_Collections_Generic_List_object__o *)deferredPurchaseProductIdList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v22 = v21;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v4 = sub_1C22084(PurchaseLogic___c__DisplayClass80_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v4, 0LL);
      if ( !v4 )
        sub_1C22094(v5, v6);
      current = v22.fields._current;
      *(_QWORD *)(v4 + 16) = v22.fields._current;
      v14 = (System_String_o **)(v4 + 16);
      sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)current, v7, v8, v9, v10, v11, v12);
      if ( *(_QWORD *)(v4 + 16) )
      {
        v15 = System_String__Trim(*(System_String_o **)(v4 + 16), 0LL);
        if ( !System_String__op_Equality(v15, string_TypeInfo->static_fields->Empty, 0LL) )
        {
          v16 = PurchaseBehaviour_TypeInfo;
          if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
            v16 = PurchaseBehaviour_TypeInfo;
          }
          ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v16->static_fields->ConsumableProductIdCollection;
          v18 = (System_Func_object__bool__o *)sub_1C22084(System_Func_string__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v18,
            (Il2CppObject *)v4,
            Method_PurchaseLogic___c__DisplayClass80_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__,
            0LL);
          if ( BasicHelper__Any_object_(
                 ConsumableProductIdCollection,
                 (System_Func_T__bool__o *)v18,
                 (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_string___) )
          {
            if ( System_String__op_Inequality(a, string_TypeInfo->static_fields->Empty, 0LL) )
              v19 = System_String__Concat_63115476(a, (System_String_o *)StringLiteral_1581/*";"*/, 0LL);
            else
              v19 = a;
            a = System_String__Concat_63115476(v19, *v14, 0LL);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( System_String__IsNullOrEmpty(a, 0LL) )
      UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5361/*"DeferredPurchaseProductIds"*/, 0LL);
    else
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_5361/*"DeferredPurchaseProductIds"*/, a, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall PurchaseLogic__SavePreparePurchaseShopIdsToPlayerPrefs(
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

  if ( (byte_4BDBEC0 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_10935/*"PreparePurchaseShopIds"*/);
    sub_1C21E38(&StringLiteral_1581/*";"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDBEC0 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( shopIdList )
  {
    v4 = (System_String_o *)StringLiteral_1/*""*/;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      (System_Collections_Generic_List_object__o *)shopIdList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v9 = v8;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v9.fields._current;
      if ( v9.fields._current )
      {
        v6 = System_String__Trim((System_String_o *)v9.fields._current, 0LL);
        if ( !System_String__op_Equality(v6, string_TypeInfo->static_fields->Empty, 0LL) )
        {
          if ( System_String__op_Inequality(v4, string_TypeInfo->static_fields->Empty, 0LL) )
            v7 = System_String__Concat_63115476(v4, (System_String_o *)StringLiteral_1581/*";"*/, 0LL);
          else
            v7 = v4;
          v4 = System_String__Concat_63115476(v7, (System_String_o *)current, 0LL);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( System_String__IsNullOrEmpty(v4, 0LL) )
      UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10935/*"PreparePurchaseShopIds"*/, 0LL);
    else
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10935/*"PreparePurchaseShopIds"*/, v4, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall PurchaseLogic__SendPurchaseAction(
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

  if ( (byte_4BDBEB4 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_8313/*"JPY"*/);
    byte_4BDBEB4 = 1;
  }
  Instance = (BankShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (BankShopEntity_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = BankShopMaster__GetEnableEntitiyList((BankShopMaster_o *)Instance, 0LL);
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
        sub_1C2209C(Instance, v7);
      v11 = v9->m_Items[v10];
      if ( !v11 || !paymentProductId )
        goto LABEL_18;
      Instance = (BankShopEntity_array *)System_String__Equals_63123792(paymentProductId, v11->fields.googleShopId, 0LL);
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
      Instance = (BankShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Instance )
      {
        AdManager__TrackPurchase(
          (AdManager_o *)Instance,
          id,
          (double)googlePrice,
          (System_String_o *)StringLiteral_8313/*"JPY"*/,
          transactionId,
          0LL);
        return;
      }
LABEL_18:
      sub_1C22094(Instance, v7);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_String_o *v12; // x0
  __int64 v13; // x1
  struct System_Action_string__o *logOutputAction; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  NetworkManager_c *v21; // x0
  NetworkManager_ResultCallbackFunc_o *v22; // x22
  Il2CppObject *Request_object; // x0
  System_String_o *payloadJsonStr; // x23
  System_String_o *googleSignatureStr; // x21
  System_String_o *v26; // x22
  struct System_String_o **p_googleSignatureStr; // t2
  PurchaseByBank_UnityIap_Request_o *v28; // x24
  System_Action_object__o *v29; // x25
  struct System_Action_string__o *logErrorOutputAction; // x20
  NetworkManager_c *v31; // x0
  System_String_o *v32; // x0
  const MethodInfo *v33; // x2
  int64_t userIdNumber; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BDBEAB & 1) == 0 )
  {
    sub_1C21E38(&System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo);
    sub_1C21E38(&Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_PurchaseLogic_OnEndSendReceiptData__);
    sub_1C21E38(&Method_PurchaseLogic__SendReceiptData_b__42_0__);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&StringLiteral_24901/*"user_id_error"*/);
    sub_1C21E38(&StringLiteral_11013/*"PurchaseLogic:SendReceiptData ["*/);
    sub_1C21E38(&StringLiteral_15489/*"UserId error: UserId="*/);
    sub_1C21E38(&StringLiteral_16345/*"]"*/);
    byte_4BDBEAB = 1;
  }
  userIdNumber = 0LL;
  this->fields._currentTransactionId = currentTransactionId;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._currentTransactionId,
    (int64_t)currentTransactionId,
    (int64_t)currentTransactionId,
    storeError,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( !receiptContents )
    goto LABEL_25;
  logOutputAction = this->fields._logOutputAction;
  v12 = System_String__Concat_63126736(
          (System_String_o *)StringLiteral_11013/*"PurchaseLogic:SendReceiptData ["*/,
          receiptContents->fields.payloadJsonStr,
          (System_String_o *)StringLiteral_16345/*"]"*/,
          0LL);
  if ( !logOutputAction )
    goto LABEL_25;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))logOutputAction->fields.m_target)(
    logOutputAction->fields.original_method_info,
    v12,
    *(_QWORD *)&logOutputAction->fields.extra_arg);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v21 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v21 = NetworkManager_TypeInfo;
  }
  if ( v21->static_fields->userIdNumber > 0 )
  {
    this->fields._purchaseResultArray = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._purchaseResultArray, 0LL, v15, v16, v17, v18, v19, v20);
    v22 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      Method_PurchaseLogic_OnEndSendReceiptData__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v22,
                       (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___);
    payloadJsonStr = receiptContents->fields.payloadJsonStr;
    p_googleSignatureStr = &receiptContents->fields.googleSignatureStr;
    googleSignatureStr = receiptContents->fields.googleSignatureStr;
    v26 = p_googleSignatureStr[1];
    v28 = (PurchaseByBank_UnityIap_Request_o *)Request_object;
    v29 = (System_Action_object__o *)sub_1C22084(System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo);
    System_Action_object____ctor(v29, (Il2CppObject *)this, Method_PurchaseLogic__SendReceiptData_b__42_0__, 0LL);
    if ( v28 )
    {
      PurchaseByBank_UnityIap_Request__beginRequest(
        v28,
        v26,
        payloadJsonStr,
        storeError,
        googleSignatureStr,
        (System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____o *)v29,
        0LL);
      return;
    }
LABEL_25:
    sub_1C22094(v12, v13);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  if ( !v21->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v21);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v31 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v31 = NetworkManager_TypeInfo;
  }
  userIdNumber = v31->static_fields->userIdNumber;
  v32 = System_Int64__ToString((int64_t)&userIdNumber, 0LL);
  v12 = System_String__Concat_63115476((System_String_o *)StringLiteral_15489/*"UserId error: UserId="*/, v32, 0LL);
  if ( !logErrorOutputAction )
    goto LABEL_25;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))logErrorOutputAction->fields.m_target)(
    logErrorOutputAction->fields.original_method_info,
    v12,
    *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
  PurchaseLogic__OnEndSendReceiptData(this, (System_String_o *)StringLiteral_24901/*"user_id_error"*/, v33);
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


void __fastcall PurchaseLogic__UpdateMonthlyPurchasePrice(
        PurchaseLogic_o *this,
        int32_t bankShopId,
        const MethodInfo *method)
{
  int32_t CumulativeAmount; // w21
  int32_t v6; // w0

  if ( (byte_4BDBEAF & 1) == 0 )
  {
    sub_1C21E38(&AgeVerificationMenu_TypeInfo);
    byte_4BDBEAF = 1;
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
    sub_1C22094(IsAppleDevice, v6);
  if ( v8->fields.isIOSOldStyleReceipt )
    transactionID_k__BackingField = v8->fields.iOSOldStyleTransactionId;
LABEL_6:
  PurchaseLogic__SendReceiptData(this, v8, transactionID_k__BackingField, 0, v9);
}


void __fastcall PurchaseLogic___RestorePurchases_b__34_0(
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
  if ( (byte_4BDBEC4 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&StringLiteral_11566/*"RestorePurchases continuing: "*/);
    sub_1C21E38(&StringLiteral_1049/*". If no further messages, no purchases available to restore."*/);
    sub_1C21E38(&StringLiteral_19384/*"error: "*/);
    byte_4BDBEC4 = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v7 = System_Boolean__ToString((bool)&v11, 0LL);
  v8 = System_String__Concat_63126736(
         (System_String_o *)StringLiteral_11566/*"RestorePurchases continuing: "*/,
         v7,
         (System_String_o *)StringLiteral_1049/*". If no further messages, no purchases available to restore."*/,
         0LL);
  if ( !logOutputAction )
    goto LABEL_10;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))logOutputAction->fields.m_target)(
    logOutputAction->fields.original_method_info,
    v8,
    *(_QWORD *)&logOutputAction->fields.extra_arg);
  if ( v11 )
    return;
  v10 = this->fields._logOutputAction;
  v8 = System_String__Concat_63115476((System_String_o *)StringLiteral_19384/*"error: "*/, errorMessage, 0LL);
  if ( !v10 )
LABEL_10:
    sub_1C22094(v8, v9);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))v10->fields.m_target)(
    v10->fields.original_method_info,
    v8,
    *(_QWORD *)&v10->fields.extra_arg);
}


void __fastcall PurchaseLogic___SendReceiptData_b__42_0(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._purchaseResultArray = purchaseResultArray;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._purchaseResultArray,
    (int64_t)purchaseResultArray,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PurchaseLogic__set_BuyProductFinishedAction(
        PurchaseLogic_o *this,
        PurchaseLogic_ProductFinishedAction_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._buyProductFinishedAction = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._buyProductFinishedAction,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PurchaseLogic__set_LogErrorOutputAction(
        PurchaseLogic_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._logErrorOutputAction = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._logErrorOutputAction,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PurchaseLogic__set_LogErrorOutputActionSampledByRatio(
        PurchaseLogic_o *this,
        System_Action_string__float__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._logErrorOutputActionSampledByRatio = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._logErrorOutputActionSampledByRatio,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PurchaseLogic__set_LogOutputAction(
        PurchaseLogic_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._logOutputAction = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._logOutputAction,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PurchaseLogic__set_SendReportOutputAction(
        PurchaseLogic_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._sendReportOutputAction = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._sendReportOutputAction,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic_ProductFinishedAction___ctor(
        PurchaseLogic_ProductFinishedAction_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 6 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A63930;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A638A8;
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  _QWORD v28[7]; // [xsp+0h] [xbp-90h] BYREF
  char v29[4]; // [xsp+38h] [xbp-58h] BYREF
  int32_t v30; // [xsp+3Ch] [xbp-54h] BYREF
  int32_t v31; // [xsp+40h] [xbp-50h] BYREF
  int32_t v32; // [xsp+44h] [xbp-4Ch] BYREF
  int32_t v33; // [xsp+48h] [xbp-48h] BYREF
  int32_t v34; // [xsp+4Ch] [xbp-44h] BYREF

  v33 = perMonthAmount;
  v34 = purchaseResult;
  v31 = chargeStoneNum;
  v32 = freeStoneNum;
  v30 = shopId;
  v29[0] = isSentGift;
  if ( (byte_4BDBEC5 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&PurchaseBehaviour_Result_TypeInfo);
    byte_4BDBEC5 = 1;
  }
  v28[6] = 0LL;
  v28[0] = j_il2cpp_value_box_0(
             PurchaseBehaviour_Result_TypeInfo,
             &v34,
             *(_QWORD *)&perMonthAmount,
             *(_QWORD *)&freeStoneNum,
             *(_QWORD *)&chargeStoneNum);
  v28[1] = j_il2cpp_value_box_0(int_TypeInfo, &v33, v12, v13, v14);
  v28[2] = j_il2cpp_value_box_0(int_TypeInfo, &v32, v15, v16, v17);
  v28[3] = j_il2cpp_value_box_0(int_TypeInfo, &v31, v18, v19, v20);
  v28[4] = j_il2cpp_value_box_0(int_TypeInfo, &v30, v21, v22, v23);
  v28[5] = j_il2cpp_value_box_0(bool_TypeInfo, v29, v24, v25, v26);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v28, callback, object);
}


void __fastcall PurchaseLogic_ProductFinishedAction__EndInvoke(
        PurchaseLogic_ProductFinishedAction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_StaticFields *v11; // x8
  struct System_String_o *v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_String_StaticFields *v19; // x8
  struct System_String_o *v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_String_StaticFields *v27; // x8
  struct System_String_o *v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_String_StaticFields *v35; // x8
  struct System_String_o *v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4BDBEC6 & 1) == 0 )
  {
    sub_1C21E38(&string_TypeInfo);
    byte_4BDBEC6 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.payloadJsonStr = static_fields->Empty;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)Empty, v2, v3, v4, v5, v6, v7);
  v11 = string_TypeInfo->static_fields;
  v12 = v11->Empty;
  this->fields.googleSignatureStr = v11->Empty;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.googleSignatureStr,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = string_TypeInfo->static_fields;
  v20 = v19->Empty;
  this->fields.receiptBase64Str = v19->Empty;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.receiptBase64Str, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  v27 = string_TypeInfo->static_fields;
  v28 = v27->Empty;
  this->fields.purchaseToken = v27->Empty;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.purchaseToken, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  v35 = string_TypeInfo->static_fields;
  v36 = v35->Empty;
  this->fields.iOSOldStyleTransactionId = v35->Empty;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.iOSOldStyleTransactionId,
    (int64_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogic___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDBEC7 & 1) == 0 )
  {
    sub_1C21E38(&PurchaseLogic___c_TypeInfo);
    byte_4BDBEC7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(PurchaseLogic___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  PurchaseLogic___c_TypeInfo->static_fields->__9 = (struct PurchaseLogic___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)PurchaseLogic___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  Il2CppObject *v4; // x19

  if ( (byte_4BDBEC8 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Debug_TypeInfo);
    sub_1C21E38(&StringLiteral_16234/*"[UnityIAP]課金エラー:"*/);
    byte_4BDBEC8 = 1;
  }
  v4 = (Il2CppObject *)System_String__Concat_63115476((System_String_o *)StringLiteral_16234/*"[UnityIAP]課金エラー:"*/, str, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v4, 0LL);
}


void __fastcall PurchaseLogic___c____ctor_b__87_2(
        PurchaseLogic___c_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_4BDBEC9 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C21E38(&StringLiteral_16234/*"[UnityIAP]課金エラー:"*/);
    byte_4BDBEC9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  v5 = System_String__Concat_63115476((System_String_o *)StringLiteral_16234/*"[UnityIAP]課金エラー:"*/, str, 0LL);
  if ( !Instance )
    sub_1C22094(v5, v6);
  CrashReporter__SendReport_31012460((CrashReporter_o *)Instance, v5, 0LL, 0LL, 0LL);
}


void __fastcall PurchaseLogic___c____ctor_b__87_3(
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
  if ( (byte_4BDBECA & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Debug_TypeInfo);
    sub_1C21E38(&StringLiteral_16233/*"[UnityIAP]課金エラー(ratio:"*/);
    sub_1C21E38(&StringLiteral_835/*"):"*/);
    byte_4BDBECA = 1;
  }
  v6 = UnityEngine_Random__Range(0.0, 1.0, 0LL);
  if ( v6 < ratio )
  {
    v7 = System_Single__ToString(v6, (const MethodInfo *)&v9);
    v8 = (Il2CppObject *)System_String__Concat_63128740(
                           (System_String_o *)StringLiteral_16233/*"[UnityIAP]課金エラー(ratio:"*/,
                           v7,
                           (System_String_o *)StringLiteral_835/*"):"*/,
                           str,
                           0LL);
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogError(v8, 0LL);
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
    sub_1C22094(this, 0LL);
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
  __int64 p_method; // x0
  struct PurchaseLogic_o *v19; // x8
  struct System_Action_string__o *logErrorOutputAction; // x20
  System_String_o *v21; // x0
  const MethodInfo *v22; // x7
  System_Enum_o v23; // [xsp+8h] [xbp-38h] BYREF
  int v24; // [xsp+18h] [xbp-28h]

  if ( (byte_4BDBECB & 1) == 0 )
  {
    sub_1C21E38(&AgeVerificationMenu_TypeInfo);
    sub_1C21E38(&UnityEngine_Purchasing_IStoreController_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&PurchaseLogic_PurchaseAvailablilty_TypeInfo);
    sub_1C21E38(&PurchaseLogic_TypeInfo);
    sub_1C21E38(&StringLiteral_11017/*"Purchasing product asychronously: '{0}'"*/);
    sub_1C21E38(&StringLiteral_15212/*"Unexpected PurchaseAvailablilty value: "*/);
    byte_4BDBECB = 1;
  }
  _4__this = (uint64_t)this->fields.__4__this;
  if ( !_4__this )
LABEL_29:
    sub_1C22094(_4__this, requestResultStr);
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
                             (System_String_o *)StringLiteral_11017/*"Purchasing product asychronously: '{0}'"*/,
                             (Il2CppObject *)definition_k__BackingField->fields._id_k__BackingField,
                             0LL);
      if ( !logOutputAction )
        goto LABEL_29;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, uint64_t, _QWORD))logOutputAction->fields.m_target)(
        logOutputAction->fields.original_method_info,
        _4__this,
        *(_QWORD *)&logOutputAction->fields.extra_arg);
      v12 = this->fields.__4__this;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      _4__this = NetworkManager__getDateTime(0LL).fields._dateData;
      if ( !v12 )
        goto LABEL_29;
      v12->fields._purchaseStartTime.fields._dateData = _4__this;
      storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
      if ( !storeController )
        goto LABEL_29;
      klass = storeController->klass;
      v15 = this->fields.product;
      v16 = *(unsigned __int16 *)(&storeController->klass->_2.bitflags2 + 3);
      if ( !*(_WORD *)(&storeController->klass->_2.bitflags2 + 3) )
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
      v21 = System_Enum__ToString(&v23, 0LL);
      _4__this = (uint64_t)System_String__Concat_63115476((System_String_o *)StringLiteral_15212/*"Unexpected PurchaseAvailablilty value: "*/, v21, 0LL);
      if ( !logErrorOutputAction )
        goto LABEL_29;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, uint64_t, _QWORD))logErrorOutputAction->fields.m_target)(
        logErrorOutputAction->fields.original_method_info,
        _4__this,
        *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
LABEL_21:
      v7 = 7;
LABEL_23:
      if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
      _4__this = AgeVerificationMenu__GetCumulativeAmount(0LL);
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
      p_method = sub_1C73E18(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 1LL);
      goto LABEL_28;
    }
  }
  p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
LABEL_28:
  (*(void (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, struct UnityEngine_Purchasing_Product_o *, _QWORD))p_method)(
    storeController,
    v15,
    *(_QWORD *)(p_method + 8));
}


void __fastcall PurchaseLogic___c__DisplayClass29_0___PurchaseIfAvailable_b__1(
        PurchaseLogic___c__DisplayClass29_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PurchaseLogic_o *CumulativeAmount; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  PurchaseLogic_o *_4__this; // x19
  const MethodInfo *v9; // x7

  if ( (byte_4BDBECC & 1) == 0 )
  {
    sub_1C21E38(&AgeVerificationMenu_TypeInfo);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDBECC = 1;
  }
  CumulativeAmount = (PurchaseLogic_o *)System_String__op_Inequality(
                                          result,
                                          (System_String_o *)StringLiteral_22456/*"ng"*/,
                                          0LL);
  if ( ((unsigned __int8)CumulativeAmount & 1) != 0 )
  {
    if ( this->fields.__4__this )
    {
      PurchaseLogic__RequestGameServerBankStatus(CumulativeAmount, this->fields.checkBankStatusCallback, v7);
      return;
    }
LABEL_10:
    sub_1C22094(CumulativeAmount, v6);
  }
  _4__this = this->fields.__4__this;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  CumulativeAmount = (PurchaseLogic_o *)AgeVerificationMenu__GetCumulativeAmount(0LL);
  if ( !_4__this )
    goto LABEL_10;
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(_4__this, 9, (int32_t)CumulativeAmount, 0, 0, 0, 0, v9);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, p);
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
    sub_1C22094(this, id);
  return System_String__Equals_63124596(definition_k__BackingField->fields._id_k__BackingField, id, 4, 0LL);
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
    sub_1C22094(this, 0LL);
  return System_String__Equals_63124596(this->fields.productId, bankShop->fields.googleShopId, 4, 0LL);
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
  return System_String__Equals_63124596(id, this->fields.idStr, 4, 0LL);
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