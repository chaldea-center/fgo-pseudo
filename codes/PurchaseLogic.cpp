void __fastcall PurchaseLogic___ctor(PurchaseLogic_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  System_Collections_Generic_HashSet_T__o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  void *v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x1
  int64_t v38; // x2
  __int64 v39; // x3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  PurchaseLogic___c_c *v44; // x0
  System_Action_object__o *_9__87_0; // x20
  Il2CppObject *v46; // x21
  struct PurchaseLogic___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x1
  int64_t v55; // x2
  __int64 v56; // x3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  PurchaseLogic___c_c *v61; // x0
  System_Action_object__o *_9__87_1; // x20
  Il2CppObject *v63; // x21
  struct PurchaseLogic___c_StaticFields *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x1
  int64_t v72; // x2
  __int64 v73; // x3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  PurchaseLogic___c_c *v78; // x0
  System_Action_object__o *_9__87_2; // x20
  Il2CppObject *v80; // x21
  struct PurchaseLogic___c_StaticFields *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v88; // x1
  int64_t v89; // x2
  __int64 v90; // x3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  PurchaseLogic___c_c *v95; // x0
  System_Action_T1__T2__o *_9__87_3; // x20
  Il2CppObject *v97; // x21
  struct PurchaseLogic___c_StaticFields *v98; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7

  if ( (byte_4B15B80 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_string__float__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Product___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_Product__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_PurchaseLogic___c___ctor_b__87_0__, v11, v12);
    sub_1BCA7E0(&Method_PurchaseLogic___c___ctor_b__87_1__, v13, v14);
    sub_1BCA7E0(&Method_PurchaseLogic___c___ctor_b__87_2__, v15, v16);
    sub_1BCA7E0(&Method_PurchaseLogic___c___ctor_b__87_3__, v17, v18);
    sub_1BCA7E0(&PurchaseLogic___c_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    byte_4B15B80 = 1;
  }
  v23 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_HashSet_Product__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  System_Collections_Generic_HashSet_object____ctor(
    v23,
    (const MethodInfo_345AFC8 *)Method_System_Collections_Generic_HashSet_Product___ctor__);
  this->fields._pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  v30 = StringLiteral_1/*""*/;
  this->fields._currentTransactionId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._currentTransactionId,
    (int64_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v44 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo, v37);
    v44 = PurchaseLogic___c_TypeInfo;
  }
  _9__87_0 = (System_Action_object__o *)v44->static_fields->__9__87_0;
  if ( !_9__87_0 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44, v37);
      v44 = PurchaseLogic___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v44->static_fields->__9;
    _9__87_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, v37, v38, v39);
    System_Action_object____ctor(_9__87_0, v46, Method_PurchaseLogic___c___ctor_b__87_0__, 0LL);
    static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    static_fields->__9__87_0 = (struct System_Action_string__o *)_9__87_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__87_0,
      (int64_t)_9__87_0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  this->fields._logOutputAction = (struct System_Action_string__o *)_9__87_0;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._logOutputAction,
    (int64_t)_9__87_0,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v61 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo, v54);
    v61 = PurchaseLogic___c_TypeInfo;
  }
  _9__87_1 = (System_Action_object__o *)v61->static_fields->__9__87_1;
  if ( !_9__87_1 )
  {
    if ( !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61, v54);
      v61 = PurchaseLogic___c_TypeInfo;
    }
    v63 = (Il2CppObject *)v61->static_fields->__9;
    _9__87_1 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, v54, v55, v56);
    System_Action_object____ctor(_9__87_1, v63, Method_PurchaseLogic___c___ctor_b__87_1__, 0LL);
    v64 = PurchaseLogic___c_TypeInfo->static_fields;
    v64->__9__87_1 = (struct System_Action_string__o *)_9__87_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v64->__9__87_1, (int64_t)_9__87_1, v65, v66, v67, v68, v69, v70);
  }
  this->fields._logErrorOutputAction = (struct System_Action_string__o *)_9__87_1;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._logErrorOutputAction,
    (int64_t)_9__87_1,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v78 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo, v71);
    v78 = PurchaseLogic___c_TypeInfo;
  }
  _9__87_2 = (System_Action_object__o *)v78->static_fields->__9__87_2;
  if ( !_9__87_2 )
  {
    if ( !v78->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v78, v71);
      v78 = PurchaseLogic___c_TypeInfo;
    }
    v80 = (Il2CppObject *)v78->static_fields->__9;
    _9__87_2 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, v71, v72, v73);
    System_Action_object____ctor(_9__87_2, v80, Method_PurchaseLogic___c___ctor_b__87_2__, 0LL);
    v81 = PurchaseLogic___c_TypeInfo->static_fields;
    v81->__9__87_2 = (struct System_Action_string__o *)_9__87_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v81->__9__87_2, (int64_t)_9__87_2, v82, v83, v84, v85, v86, v87);
  }
  this->fields._sendReportOutputAction = (struct System_Action_string__o *)_9__87_2;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._sendReportOutputAction,
    (int64_t)_9__87_2,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  v95 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo, v88);
    v95 = PurchaseLogic___c_TypeInfo;
  }
  _9__87_3 = (System_Action_T1__T2__o *)v95->static_fields->__9__87_3;
  if ( !_9__87_3 )
  {
    if ( !v95->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v95, v88);
      v95 = PurchaseLogic___c_TypeInfo;
    }
    v97 = (Il2CppObject *)v95->static_fields->__9;
    _9__87_3 = (System_Action_T1__T2__o *)sub_1BCAA2C(System_Action_string__float__TypeInfo, v88, v89, v90);
    System_Action_object__float____ctor(_9__87_3, v97, Method_PurchaseLogic___c___ctor_b__87_3__, 0LL);
    v98 = PurchaseLogic___c_TypeInfo->static_fields;
    v98->__9__87_3 = (struct System_Action_string__float__o *)_9__87_3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v98->__9__87_3, (int64_t)_9__87_3, v99, v100, v101, v102, v103, v104);
  }
  this->fields._logErrorOutputActionSampledByRatio = (struct System_Action_string__float__o *)_9__87_3;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._logErrorOutputActionSampledByRatio,
    (int64_t)_9__87_3,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogic__AddDeferredPurchaseProductIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_object__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  System_Collections_Generic_List_object__o *v19; // x20
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  PurchaseLogic_o *v24; // x0
  const MethodInfo *v25; // x2

  if ( (byte_4B15B7A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_string___, productId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_string___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v6, v7);
    byte_4B15B7A = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(productId, 0LL);
  if ( !IsNullOrEmpty )
  {
    DeferredPurchaseProductIdsFromPlayerPrefs = (System_Collections_Generic_List_object__o *)PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                                                               (PurchaseLogic_o *)IsNullOrEmpty,
                                                                                               v9);
    if ( !DeferredPurchaseProductIdsFromPlayerPrefs
      || (items = DeferredPurchaseProductIdsFromPlayerPrefs->fields._items,
          v19 = DeferredPurchaseProductIdsFromPlayerPrefs,
          v20 = Method_System_Collections_Generic_List_string__Add__,
          ++DeferredPurchaseProductIdsFromPlayerPrefs->fields._version,
          !items) )
    {
      sub_1BCAA3C(DeferredPurchaseProductIdsFromPlayerPrefs, v11);
    }
    size = DeferredPurchaseProductIdsFromPlayerPrefs->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        DeferredPurchaseProductIdsFromPlayerPrefs,
        (Il2CppObject *)productId,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &items->obj.klass + size;
      v19->fields._size = size + 1;
      v22[4] = (Il2CppClass *)productId;
      sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 4), (int64_t)productId, v12, v13, v14, v15, v16, v17);
    }
    v23 = System_Linq_Enumerable__Distinct_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v19,
            (const MethodInfo_2F3012C *)Method_System_Linq_Enumerable_Distinct_string___);
    v24 = (PurchaseLogic_o *)System_Linq_Enumerable__ToList_object_(
                               v23,
                               (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_string___);
    PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(
      v24,
      (System_Collections_Generic_List_string__o *)v24,
      v25);
  }
}


void __fastcall PurchaseLogic__AddPendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *pendingProducts; // x0

  if ( (byte_4B15B63 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Product__Add__, product, method);
    byte_4B15B63 = 1;
  }
  pendingProducts = (System_Collections_Generic_HashSet_T__o *)this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_1BCAA3C(0LL, product);
  System_Collections_Generic_HashSet_object___Add(
    pendingProducts,
    (Il2CppObject *)product,
    (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_Product__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__AddPreparePurchaseShopIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  PurchaseLogic_o *v8; // x20
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_object__o *PreparePurchaseShopIdsFromPlayerPrefs; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  System_Collections_Generic_List_object__o *v19; // x19
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  PurchaseLogic_o *v24; // x0
  const MethodInfo *v25; // x2
  int32_t v26; // [xsp+Ch] [xbp-24h] BYREF

  v26 = shopId;
  if ( (byte_4B15B7E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_string___, *(_QWORD *)&shopId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_string___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v6, v7);
    byte_4B15B7E = 1;
  }
  if ( shopId >= 1 )
  {
    v8 = (PurchaseLogic_o *)System_Int32__ToString((int32_t)&v26, 0LL);
    PreparePurchaseShopIdsFromPlayerPrefs = (System_Collections_Generic_List_object__o *)PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs(
                                                                                           v8,
                                                                                           v9);
    if ( !PreparePurchaseShopIdsFromPlayerPrefs
      || (items = PreparePurchaseShopIdsFromPlayerPrefs->fields._items,
          v19 = PreparePurchaseShopIdsFromPlayerPrefs,
          v20 = Method_System_Collections_Generic_List_string__Add__,
          ++PreparePurchaseShopIdsFromPlayerPrefs->fields._version,
          !items) )
    {
      sub_1BCAA3C(PreparePurchaseShopIdsFromPlayerPrefs, v11);
    }
    size = PreparePurchaseShopIdsFromPlayerPrefs->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        PreparePurchaseShopIdsFromPlayerPrefs,
        (Il2CppObject *)v8,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &items->obj.klass + size;
      v19->fields._size = size + 1;
      v22[4] = (Il2CppClass *)v8;
      sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 4), (int64_t)v8, v12, v13, v14, v15, v16, v17);
    }
    v23 = System_Linq_Enumerable__Distinct_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v19,
            (const MethodInfo_2F3012C *)Method_System_Linq_Enumerable_Distinct_string___);
    v24 = (PurchaseLogic_o *)System_Linq_Enumerable__ToList_object_(
                               v23,
                               (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_string___);
    PurchaseLogic__SavePreparePurchaseShopIdsToPlayerPrefs(v24, (System_Collections_Generic_List_string__o *)v24, v25);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PurchaseLogic__CheckBankStatusAndMonthlyLimit(
        PurchaseLogic_o *this,
        System_String_o *result,
        int32_t price,
        const MethodInfo *method)
{
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
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  System_String_o *v36; // x19
  __int64 v37; // x1
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_object__object__o *v39; // x22
  void *Item; // x0
  __int64 v41; // x1
  System_String_o *v42; // x0
  __int64 v43; // x1
  int32_t v44; // w21
  PurchaseLogic_o *v45; // x0
  const MethodInfo *v46; // x2
  int32_t v47; // w22
  System_String_o *v48; // x0
  int32_t v49; // w20
  System_String_o *v50; // x0
  __int64 v51; // x1
  Il2CppObject *Instance; // x20
  __int64 v53; // x2
  __int64 v54; // x3
  System_Action_o *v55; // x21
  Il2CppObject *v56; // x22
  struct PurchaseLogic___c_StaticFields *static_fields; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x1
  Il2CppObject *v65; // x20
  __int64 v66; // x2
  __int64 v67; // x3
  System_Action_o *v68; // x21
  Il2CppObject *v69; // x22
  struct PurchaseLogic___c_StaticFields *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7

  if ( (byte_4B15B60 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, result, *(_QWORD *)&price);
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10, v11);
    sub_1BCA7E0(&JsonManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19);
    sub_1BCA7E0(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__32_0__, v20, v21);
    sub_1BCA7E0(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__32_1__, v22, v23);
    sub_1BCA7E0(&PurchaseLogic___c_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_12434/*"STONE_PURCHASE_RESULT_BLOCK"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_22745/*"perMonthAmount"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_21627/*"message"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_17227/*"bankAvailable"*/, v34, v35);
    byte_4B15B60 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, result);
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12434/*"STONE_PURCHASE_RESULT_BLOCK"*/, 0LL);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
    goto LABEL_33;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v37);
  Dictionary = JsonManager__getDictionary(result, 0LL);
  v39 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
  if ( !Dictionary
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
          (Il2CppObject *)StringLiteral_22745/*"perMonthAmount"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    goto LABEL_33;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v39,
           (Il2CppObject *)StringLiteral_22745/*"perMonthAmount"*/,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_48;
  v42 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                             Item,
                             *(_QWORD *)(*(_QWORD *)Item + 368LL));
  v44 = System_Int32__Parse(v42, 0LL);
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v43);
  AgeVerificationMenu__SaveCumulativeAmount(v44, 0LL);
  if ( !PurchaseLogic__IsLimitOver(v45, v44 + price, v46) )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v39,
           (Il2CppObject *)StringLiteral_17227/*"bankAvailable"*/,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               v39,
               (Il2CppObject *)StringLiteral_17227/*"bankAvailable"*/,
               (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_48;
      v48 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                                 Item,
                                 *(_QWORD *)(*(_QWORD *)Item + 368LL));
      v49 = System_Int32__Parse(v48, 0LL);
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             v39,
             (Il2CppObject *)StringLiteral_21627/*"message"*/,
             (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v39,
                 (Il2CppObject *)StringLiteral_21627/*"message"*/,
                 (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_48;
        v50 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                                   Item,
                                   *(_QWORD *)(*(_QWORD *)Item + 368LL));
        v36 = v50;
        if ( !v49 )
        {
          if ( !System_String__IsNullOrEmpty(v50, 0LL) )
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
            {
              Item = PurchaseLogic___c_TypeInfo;
              if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo, v41);
                Item = PurchaseLogic___c_TypeInfo;
              }
              v55 = *(System_Action_o **)(*((_QWORD *)Item + 23) + 8LL);
              if ( !v55 )
              {
                if ( !*((_DWORD *)Item + 56) )
                {
                  j_il2cpp_runtime_class_init_0(Item, v41);
                  Item = PurchaseLogic___c_TypeInfo;
                }
                v56 = (Il2CppObject *)**((_QWORD **)Item + 23);
                v55 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v41, v53, v54);
                System_Action___ctor(v55, v56, Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__32_0__, 0LL);
                static_fields = PurchaseLogic___c_TypeInfo->static_fields;
                static_fields->__9__32_0 = v55;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&static_fields->__9__32_0,
                  (int64_t)v55,
                  v58,
                  v59,
                  v60,
                  v61,
                  v62,
                  v63);
              }
              if ( Instance )
              {
                v47 = 1;
                CommonUI__OpenNotificationDialog(
                  (CommonUI_o *)Instance,
                  0LL,
                  v36,
                  v55,
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
                return v47;
              }
LABEL_48:
              sub_1BCAA3C(Item, v41);
            }
          }
          return 1;
        }
      }
      else if ( !v49 )
      {
        return 1;
      }
    }
LABEL_33:
    if ( !System_String__IsNullOrEmpty(v36, 0LL) )
    {
      v65 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v65, 0LL, 0LL) )
      {
        Item = PurchaseLogic___c_TypeInfo;
        if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo, v41);
          Item = PurchaseLogic___c_TypeInfo;
        }
        v68 = *(System_Action_o **)(*((_QWORD *)Item + 23) + 16LL);
        if ( !v68 )
        {
          if ( !*((_DWORD *)Item + 56) )
          {
            j_il2cpp_runtime_class_init_0(Item, v41);
            Item = PurchaseLogic___c_TypeInfo;
          }
          v69 = (Il2CppObject *)**((_QWORD **)Item + 23);
          v68 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v41, v66, v67);
          System_Action___ctor(v68, v69, Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__32_1__, 0LL);
          v70 = PurchaseLogic___c_TypeInfo->static_fields;
          v70->__9__32_1 = v68;
          sub_1BCA784((PartyOrganizationUtility_o *)&v70->__9__32_1, (int64_t)v68, v71, v72, v73, v74, v75, v76);
        }
        if ( !v65 )
          goto LABEL_48;
        CommonUI__OpenNotificationDialog((CommonUI_o *)v65, 0LL, v36, v68, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
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
    return dword_C0D630[failureReason];
}


void __fastcall PurchaseLogic__ConfirmPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x20
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  __int64 v14; // x9
  UnityEngine_Purchasing_IStoreController_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B15B66 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Product__Contains__, product, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Product__Remove__, v5, v6);
    sub_1BCA7E0(&UnityEngine_Purchasing_IStoreController_TypeInfo, v7, v8);
    sub_1BCA7E0(&PurchaseLogic_TypeInfo, v9, v10);
    byte_4B15B66 = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_15;
  if ( !System_Collections_Generic_HashSet_object___Contains(
          (System_Collections_Generic_HashSet_T__o *)pendingProducts,
          (Il2CppObject *)product,
          (const MethodInfo_345B6BC *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
    return;
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts
    || (pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)System_Collections_Generic_HashSet_object___Remove(
                                                                                    (System_Collections_Generic_HashSet_T__o *)pendingProducts,
                                                                                    (Il2CppObject *)product,
                                                                                    (const MethodInfo_345B888 *)Method_System_Collections_Generic_HashSet_Product__Remove__),
        (storeController = PurchaseLogic_TypeInfo->static_fields->_storeController) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(pendingProducts, product);
  }
  klass = storeController->klass;
  v14 = *(unsigned __int16 *)(&storeController->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&storeController->klass->_2.bitflags2 + 3) )
  {
    p_offset = (UnityEngine_Purchasing_IStoreController_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      --v14;
      p_offset += 2;
      if ( !v14 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
  }
  else
  {
LABEL_11:
    p_method = sub_1C1C7C0(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 2LL);
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
  sub_1BCA784(
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
  __int64 v3; // x3
  PurchaseLogic_ReceiptContents_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_4B15B67 & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseLogic_ReceiptContents_TypeInfo, product, method);
    byte_4B15B67 = 1;
  }
  v4 = (PurchaseLogic_ReceiptContents_o *)sub_1BCAA2C(PurchaseLogic_ReceiptContents_TypeInfo, product, method, v3);
  PurchaseLogic_ReceiptContents___ctor(v4, v5);
  return v4;
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
        sub_1BCAA44(this, purchaseResultArray);
      v8 = purchaseResultArray->m_Items[0];
      if ( !v8 )
        sub_1BCAA3C(this, purchaseResultArray);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  _BOOL8 IsAppleDevice; // x0
  __int64 v6; // x1
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x19
  UnityEngine_Purchasing_IExtensionProvider_c *klass; // x8
  void *v9; // x20
  __int64 v10; // x9
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v16; // x1

  if ( (byte_4B15B74 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___, method, v2);
    this = (PurchaseLogic_o *)sub_1BCA7E0(&PurchaseLogic_TypeInfo, v3, v4);
    byte_4B15B74 = 1;
  }
  if ( !PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider )
    return 0LL;
  IsAppleDevice = PurchaseLogic__IsAppleDevice((const MethodInfo *)this);
  if ( !IsAppleDevice )
    return 0LL;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_1BCAA3C(IsAppleDevice, v6);
  klass = storeExtensionProvider->klass;
  v9 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v10 = *(unsigned __int16 *)(&storeExtensionProvider->klass->_2.bitflags2 + 3);
  v11 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 4);
  v12 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 40);
  if ( *(_WORD *)(&storeExtensionProvider->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v11 )
    {
      --v10;
      p_offset += 4;
      if ( !v10 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset + (int)v12].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(storeExtensionProvider, v11, v12);
  }
  v16 = sub_1BCA914(*(_QWORD *)(p_method + 8), v9);
  return (UnityEngine_Purchasing_IAppleExtensions_o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, __int64))(v16 + 8))(
                                                        storeExtensionProvider,
                                                        v16);
}


UnityEngine_Purchasing_ConfigurationBuilder_o *__fastcall PurchaseLogic__GetConfigurationBuilder(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Purchasing_StandardPurchasingModule_o *v5; // x0
  __int64 v6; // x1
  long double inited; // q0
  _QWORD *v8; // x20
  UnityEngine_Purchasing_Extension_IPurchasingModule_o *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0

  if ( (byte_4B15B5A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_IPurchasingModule___, method, v2);
    sub_1BCA7E0(&UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo, v3, v4);
    byte_4B15B5A = 1;
  }
  if ( !UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo, method);
  v5 = UnityEngine_Purchasing_StandardPurchasingModule__Instance(0LL);
  v8 = Method_System_Array_Empty_IPurchasingModule___;
  v9 = (UnityEngine_Purchasing_Extension_IPurchasingModule_o *)v5;
  v10 = *((_QWORD *)Method_System_Array_Empty_IPurchasingModule___ + 7);
  if ( !v10 )
  {
    sub_1C1C718(Method_System_Array_Empty_IPurchasingModule___, v6);
    v10 = v8[7];
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v11 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v11, v6);
  v12 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C1C6BC(inited);
  return UnityEngine_Purchasing_ConfigurationBuilder__Instance(
           v9,
           **(UnityEngine_Purchasing_Extension_IPurchasingModule_array ***)(v12 + 184),
           0LL);
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *String; // x19
  _BOOL8 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_List_object__o *v18; // x19

  if ( (byte_4B15B78 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_string___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v3, v4);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v5, v6);
    sub_1BCA7E0(&string_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_5326/*"DeferredPurchaseProductIds"*/, v9, v10);
    byte_4B15B78 = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_5326/*"DeferredPurchaseProductIds"*/,
             string_TypeInfo->static_fields->Empty,
             0LL);
  v12 = System_String__op_Inequality(String, string_TypeInfo->static_fields->Empty, 0LL);
  if ( v12 )
  {
    if ( !String )
      sub_1BCAA3C(v12, v13);
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String, 0x3Bu, 0, 0LL);
    return (System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                          v16,
                                                          (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_string___);
  }
  else
  {
    v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_string__TypeInfo,
                                                         v13,
                                                         v14,
                                                         v15);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v18;
  }
}


PurchaseByBank_UnityIap_Request_PurchaseResult_o *__fastcall PurchaseLogic__GetFirstPurchaseResult(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Func_object__bool__o *v27; // x20

  if ( (byte_4B15B6B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____76880696,
      purchaseResultArray,
      transactionId);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___, v6, v7);
    sub_1BCA7E0(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_PurchaseLogic___c__DisplayClass45_0__GetFirstPurchaseResult_b__0__, v10, v11);
    sub_1BCA7E0(&PurchaseLogic___c__DisplayClass45_0_TypeInfo, v12, v13);
    byte_4B15B6B = 1;
  }
  v14 = sub_1BCAA2C(PurchaseLogic___c__DisplayClass45_0_TypeInfo, purchaseResultArray, transactionId, method);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_QWORD *)(v14 + 16) = transactionId;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)transactionId, v17, v18, v19, v20, v21, v22);
  if ( !purchaseResultArray )
    return 0LL;
  if ( !PurchaseLogic__IsAppleDevice(v23) )
    return (PurchaseByBank_UnityIap_Request_PurchaseResult_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                                 (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___);
  v27 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo,
                                         v24,
                                         v25,
                                         v26);
  System_Func_object__bool____ctor(
    v27,
    (Il2CppObject *)v14,
    Method_PurchaseLogic___c__DisplayClass45_0__GetFirstPurchaseResult_b__0__,
    0LL);
  return (PurchaseByBank_UnityIap_Request_PurchaseResult_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                               (System_Func_TSource__bool__o *)v27,
                                                               (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____76880696);
}


PurchaseLogic_o *__fastcall PurchaseLogic__GetInstance(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  PurchaseLogic_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_4B15B58 & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseLogicAndroid_TypeInfo, v1, v2);
    byte_4B15B58 = 1;
  }
  v4 = (PurchaseLogic_o *)sub_1BCAA2C(PurchaseLogicAndroid_TypeInfo, v1, v2, v3);
  PurchaseLogic___ctor(v4, v5);
  return v4;
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x19
  System_String_o *String; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_4B15B7C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_string___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v6, v7);
    sub_1BCA7E0(&string_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_10861/*"PreparePurchaseShopIds"*/, v10, v11);
    byte_4B15B7C = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_10861/*"PreparePurchaseShopIds"*/,
             string_TypeInfo->static_fields->Empty,
             0LL);
  v14 = System_String__op_Inequality(String, string_TypeInfo->static_fields->Empty, 0LL);
  if ( !v14 )
    return (System_Collections_Generic_List_string__o *)v12;
  if ( !String )
    sub_1BCAA3C(v14, v15);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String, 0x3Bu, 0, 0LL);
  return (System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                        v16,
                                                        (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_string___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PurchaseLogic__GetPrice(PurchaseLogic_o *this, int32_t bankShopId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *Entity; // x0
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v16; // x0
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  v17 = bankShopId;
  if ( (byte_4B15B70 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BankShopMaster___, *(_QWORD *)&bankShopId, method);
    sub_1BCA7E0(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&StringLiteral_6157/*"Entity is not found. bankShopId="*/, v9, v10);
    byte_4B15B70 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             bankShopId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
  if ( Entity )
    return (int32_t)Entity[3].monitor;
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v16 = System_Int32__ToString((int32_t)&v17, 0LL);
  Instance = (DataManager_o *)System_String__Concat_62401220((System_String_o *)StringLiteral_6157/*"Entity is not found. bankShopId="*/, v16, 0LL);
  if ( !logErrorOutputAction )
LABEL_9:
    sub_1BCAA3C(Instance, v12);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, DataManager_o *, _QWORD))logErrorOutputAction->fields.m_target)(
    logErrorOutputAction->fields.original_method_info,
    Instance,
    *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
  return 0;
}


void __fastcall PurchaseLogic__InitializePurchasingFramework(PurchaseLogic_o *this, const MethodInfo *method)
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
  struct PurchaseLogic_StaticFields *static_fields; // x8
  UnityEngine_Purchasing_ConfigurationBuilder_o *v13; // x20
  __int64 v14; // x1
  PurchaseBehaviour_c *v15; // x0
  System_Collections_Generic_List_object__o *ConsumableProductIdCollection; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B15B59 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v10, v11);
    byte_4B15B59 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( (byte_4B15B5B & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseLogic_TypeInfo, method, v2);
    byte_4B15B5B = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    ((void (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))this->klass->vtable._27_DisableCrashReporterOnInitialize.method)(
      this,
      this->klass->vtable._28_EnableCrashReporterOnInitializeSucceeded.methodPtr);
    v13 = (UnityEngine_Purchasing_ConfigurationBuilder_o *)((__int64 (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))this->klass->vtable._10_GetConfigurationBuilder.method)(
                                                             this,
                                                             this->klass->vtable._11_SetObfuscatedAccountId.methodPtr);
    ((void (__fastcall *)(PurchaseLogic_o *, UnityEngine_Purchasing_ConfigurationBuilder_o *, Il2CppMethodPointer))this->klass->vtable._11_SetObfuscatedAccountId.method)(
      this,
      v13,
      this->klass->vtable._12_SetCachedObfuscatedAccountId.methodPtr);
    ((void (__fastcall *)(PurchaseLogic_o *, __int64, Il2CppMethodPointer))this->klass->vtable._15_SetAlreadyInitializedWithObfuscatedAccountId.method)(
      this,
      1LL,
      this->klass->vtable._16_IsInitializedWithMismatchedObfuscatedAccountId.methodPtr);
    v15 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v14);
      v15 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_object__o *)v15->static_fields->ConsumableProductIdCollection;
    if ( !ConsumableProductIdCollection )
      sub_1BCAA3C(0LL, v14);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      ConsumableProductIdCollection,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( 1 )
    {
      v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
      if ( !v17 )
        break;
      if ( !v13 )
        sub_1BCAA3C(v17, v18);
      UnityEngine_Purchasing_ConfigurationBuilder__AddProduct(v13, (System_String_o *)v19.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    UnityEngine_Purchasing_UnityPurchasing__Initialize((UnityEngine_Purchasing_IStoreListener_o *)this, v13, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  PurchaseLogic__InitiatePurchase_39337900(
    this,
    bankShop->fields.id,
    bankShop->fields.googleShopId,
    bankShop->fields.googlePrice,
    finishedAction,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__InitiatePurchase_39337900(
        PurchaseLogic_o *this,
        int32_t shopId,
        System_String_o *productId,
        int32_t price,
        PurchaseLogic_ProductFinishedAction_o *finishedAction,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  struct PurchaseLogic_StaticFields *static_fields; // x8
  struct System_Action_string__o *logErrorOutputAction; // x8
  const MethodInfo *v30; // x7
  int32_t v31; // w1
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x8
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x23
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct System_Action_string__o *v38; // x8
  __int64 *v39; // x9
  struct UnityEngine_Purchasing_IStoreController_o *v40; // x23
  UnityEngine_Purchasing_IStoreController_c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  struct System_Action_string__o *v45; // x8
  const MethodInfo *v46; // x4

  if ( (byte_4B15B5C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Purchasing_IStoreController_TypeInfo, *(_QWORD *)&shopId, productId);
    sub_1BCA7E0(&PurchaseLogic_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_7732/*"InitiatePurchase: FAIL. PurchasingFramework not initialized."*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_7733/*"InitiatePurchase: FAIL. StoreController is null."*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_7731/*"InitiatePurchase: FAIL. Not purchasing product, either is not found or is not available for purchase"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_7734/*"InitiatePurchase: FAIL. StoreController.products is null."*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_7735/*"InitiatePurchase: Initialized With Mismatched ObfuscatedAccountId."*/, v23, v24);
    byte_4B15B5C = 1;
  }
  this->fields._buyProductFinishedAction = finishedAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._buyProductFinishedAction,
    (int64_t)finishedAction,
    (int64_t)productId,
    price,
    (System_String_o *)finishedAction,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  if ( (byte_4B15B5B & 1) == 0 )
  {
    v25 = sub_1BCA7E0(&PurchaseLogic_TypeInfo, v26, v27);
    byte_4B15B5B = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( logErrorOutputActionSampledByRatio )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, float))logErrorOutputActionSampledByRatio->fields.m_target)(
        logErrorOutputActionSampledByRatio->fields.original_method_info,
        StringLiteral_7732/*"InitiatePurchase: FAIL. PurchasingFramework not initialized."*/,
        *(_QWORD *)&logErrorOutputActionSampledByRatio->fields.extra_arg,
        0.01);
      v31 = 11;
      goto LABEL_33;
    }
LABEL_39:
    sub_1BCAA3C(v25, v26);
  }
  v25 = ((__int64 (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))this->klass->vtable._16_IsInitializedWithMismatchedObfuscatedAccountId.method)(
          this,
          this->klass->vtable._17_SetInitializedWithMismatchedObfuscatedAccountId.methodPtr);
  if ( (v25 & 1) != 0 )
  {
    logErrorOutputAction = this->fields._logErrorOutputAction;
    if ( logErrorOutputAction )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logErrorOutputAction->fields.m_target)(
        logErrorOutputAction->fields.original_method_info,
        StringLiteral_7735/*"InitiatePurchase: Initialized With Mismatched ObfuscatedAccountId."*/,
        *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
      v31 = 14;
LABEL_33:
      PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, v31, 0, 0, 0, 0, 0, v30);
      return;
    }
    goto LABEL_39;
  }
  storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
  if ( !storeController )
  {
    v38 = this->fields._logErrorOutputAction;
    if ( !v38 )
      goto LABEL_39;
    v39 = &StringLiteral_7733/*"InitiatePurchase: FAIL. StoreController is null."*/;
LABEL_30:
    v25 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v38->fields.m_target)(
            v38->fields.original_method_info,
            *v39,
            *(_QWORD *)&v38->fields.extra_arg);
LABEL_31:
    v45 = this->fields._logErrorOutputAction;
    if ( v45 )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v45->fields.m_target)(
        v45->fields.original_method_info,
        StringLiteral_7731/*"InitiatePurchase: FAIL. Not purchasing product, either is not found or is not available for purchase"*/,
        *(_QWORD *)&v45->fields.extra_arg);
      v31 = 12;
      goto LABEL_33;
    }
    goto LABEL_39;
  }
  klass = storeController->klass;
  v35 = *(unsigned __int16 *)(&storeController->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&storeController->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IStoreController_c **)p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      --v35;
      p_offset += 4;
      if ( !v35 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_1C1C7C0(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
  }
  v25 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))p_method)(
          storeController,
          *(_QWORD *)(p_method + 8));
  if ( !v25 )
  {
    v38 = this->fields._logErrorOutputAction;
    if ( !v38 )
      goto LABEL_39;
    v39 = &StringLiteral_7734/*"InitiatePurchase: FAIL. StoreController.products is null."*/;
    goto LABEL_30;
  }
  v40 = PurchaseLogic_TypeInfo->static_fields->_storeController;
  if ( !v40 )
    goto LABEL_39;
  v41 = v40->klass;
  v42 = *(unsigned __int16 *)(&v40->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v40->klass->_2.bitflags2 + 3) )
  {
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IStoreController_c **)v43 - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_27;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_27:
    v44 = sub_1C1C7C0(v40, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
  }
  v25 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))v44)(
          v40,
          *(_QWORD *)(v44 + 8));
  if ( !v25 )
    goto LABEL_39;
  v25 = (__int64)UnityEngine_Purchasing_ProductCollection__WithID(
                   (UnityEngine_Purchasing_ProductCollection_o *)v25,
                   productId,
                   0LL);
  if ( !v25 || !*(_BYTE *)(v25 + 32) )
    goto LABEL_31;
  PurchaseLogic__PurchaseIfAvailable(this, shopId, (UnityEngine_Purchasing_Product_o *)v25, price, v46);
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
  __int64 v2; // x2
  __int64 v3; // x1

  if ( (byte_4B15B6E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, v1, v2);
    byte_4B15B6E = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v1);
  if ( UnityEngine_Application__get_platform(0LL) == 8 )
    return 1;
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v3);
  return UnityEngine_Application__get_platform(0LL) == 1;
}


bool __fastcall PurchaseLogic__IsDeferredPurchaseExists(PurchaseLogic_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall PurchaseLogic__IsGooglePlayDevice(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B15B6F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, v1, v2);
    byte_4B15B6F = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v1);
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
  __int64 v5; // x2
  ManagerConfig_c *v6; // x0
  int32_t Limit; // w0

  if ( (byte_4B15B61 & 1) == 0 )
  {
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&value, method);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v4, v5);
    byte_4B15B61 = 1;
  }
  v6 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, *(_QWORD *)&value);
    v6 = ManagerConfig_TypeInfo;
  }
  if ( v6->static_fields->UseMock )
    return 1;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, *(_QWORD *)&value);
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

  if ( (byte_4B15B65 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Product__Contains__, prodcut, method);
    byte_4B15B65 = 1;
  }
  pendingProducts = (System_Collections_Generic_HashSet_T__o *)this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_1BCAA3C(0LL, prodcut);
  return System_Collections_Generic_HashSet_object___Contains(
           pendingProducts,
           (Il2CppObject *)prodcut,
           (const MethodInfo_345B6BC *)Method_System_Collections_Generic_HashSet_Product__Contains__);
}


bool __fastcall PurchaseLogic__IsPurchasingFrameworkInitialized(PurchaseLogic_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct PurchaseLogic_StaticFields *static_fields; // x8

  if ( (byte_4B15B5B & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseLogic_TypeInfo, method, v2);
    byte_4B15B5B = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  return static_fields->_storeController && static_fields->_storeExtensionProvider != 0LL;
}


bool __fastcall PurchaseLogic__IsServerCommitedPurchase(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  PurchaseLogic___c_c *v11; // x0
  System_Func_object__bool__o *_9__43_0; // x20
  Il2CppObject *v13; // x21
  struct PurchaseLogic___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B15B69 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___,
      purchaseResultArray,
      method);
    sub_1BCA7E0(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_PurchaseLogic___c__IsServerCommitedPurchase_b__43_0__, v7, v8);
    sub_1BCA7E0(&PurchaseLogic___c_TypeInfo, v9, v10);
    byte_4B15B69 = 1;
  }
  if ( !purchaseResultArray )
    return 0;
  v11 = PurchaseLogic___c_TypeInfo;
  if ( !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo, purchaseResultArray);
    v11 = PurchaseLogic___c_TypeInfo;
  }
  _9__43_0 = (System_Func_object__bool__o *)v11->static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, purchaseResultArray);
      v11 = PurchaseLogic___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__43_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo,
                                                purchaseResultArray,
                                                method,
                                                v3);
    System_Func_object__bool____ctor(_9__43_0, v13, Method_PurchaseLogic___c__IsServerCommitedPurchase_b__43_0__, 0LL);
    static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__43_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__43_0,
      (int64_t)_9__43_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
           (System_Func_TSource__bool__o *)_9__43_0,
           (const MethodInfo_2F1D414 *)Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___);
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
  if ( (byte_4B15B73 & 1) == 0 )
  {
    this = (PurchaseLogic_o *)sub_1BCA7E0(&StringLiteral_10012/*"OnDeferred product="*/, product, method);
    byte_4B15B73 = 1;
  }
  if ( !product
    || (metadata_k__BackingField = product->fields._metadata_k__BackingField) == 0LL
    || (logOutputAction = v4->fields._logOutputAction,
        this = (PurchaseLogic_o *)System_String__Concat_62401220(
                                    (System_String_o *)StringLiteral_10012/*"OnDeferred product="*/,
                                    metadata_k__BackingField->fields._localizedTitle_k__BackingField,
                                    0LL),
        !logOutputAction) )
  {
    sub_1BCAA3C(this, product);
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
  __int64 v41; // x23
  System_String_o *v42; // x0
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_String_o **v50; // x25
  struct System_Action_string__o *logOutputAction; // x28
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_String_o *v58; // x26
  int64_t v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  void *v72; // x1
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t v85; // x1
  struct System_Action_string__o *v86; // x21
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x21
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  System_Func_object__bool__o *v91; // x22
  Il2CppObject *v92; // x0
  __int64 v93; // x1
  Il2CppObject *Instance; // x22
  Il2CppObject *v95; // x22
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  PurchaseLogic_ProductFinishedAction_o *v99; // x23
  const MethodInfo *v100; // x3
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  const MethodInfo *v107; // x7
  System_Enum_o v108; // [xsp+8h] [xbp-88h] BYREF
  int32_t v109; // [xsp+18h] [xbp-78h]
  bool isSentGift[4]; // [xsp+20h] [xbp-70h] BYREF
  int32_t shopId; // [xsp+24h] [xbp-6Ch] BYREF
  __int64 v112; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B15B6D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommonUI_OpenStonePurchaseReciveMenu___76856936, *(_QWORD *)&purchaseResult, resultData);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_Product___, v13, v14);
    sub_1BCA7E0(&System_Func_Product__bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&PurchaseLogic_ProductFinishedAction_TypeInfo, v19, v20);
    sub_1BCA7E0(&PurchaseBehaviour_Result_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23, v24);
    sub_1BCA7E0(&string___TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_PurchaseLogic___c__DisplayClass47_0__OnEndPaymentStore_b__0__, v27, v28);
    sub_1BCA7E0(&PurchaseLogic___c__DisplayClass47_0_TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_16239/*"] "*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_15980/*"[ "*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_10938/*"PurchaseLogic:OnEndPaymentStore result "*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_4753/*"Confirming purchase of "*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v39, v40);
    byte_4B15B6D = 1;
  }
  v112 = 0LL;
  shopId = 0;
  isSentGift[0] = 0;
  v41 = sub_1BCAA2C(PurchaseLogic___c__DisplayClass47_0_TypeInfo, *(_QWORD *)&purchaseResult, resultData, productId);
  System_Object___ctor((Il2CppObject *)v41, 0LL);
  if ( !v41 )
    goto LABEL_26;
  *(_QWORD *)(v41 + 16) = productId;
  v50 = (System_String_o **)(v41 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 16), (int64_t)productId, v44, v45, v46, v47, v48, v49);
  logOutputAction = this->fields._logOutputAction;
  v42 = (System_String_o *)sub_1BCA888(string___TypeInfo, 5LL);
  if ( !v42 )
    goto LABEL_26;
  v58 = v42;
  if ( !LODWORD(v42[1].klass) )
    goto LABEL_25;
  v59 = StringLiteral_10938/*"PurchaseLogic:OnEndPaymentStore result "*/;
  v42[1].monitor = (void *)StringLiteral_10938/*"PurchaseLogic:OnEndPaymentStore result "*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v42[1].monitor, v59, v52, v53, v54, v55, v56, v57);
  v108.klass = (System_Enum_c *)PurchaseBehaviour_Result_TypeInfo;
  v108.monitor = (void *)-1LL;
  v109 = purchaseResult;
  v42 = System_Enum__ToString(&v108, 0LL);
  if ( LODWORD(v58[1].klass) <= 1
    || (v58[1].fields = (System_String_Fields)v42,
        sub_1BCA784((PartyOrganizationUtility_o *)&v58[1].fields, (int64_t)v42, v60, v61, v62, v63, v64, v65),
        LODWORD(v58[1].klass) <= 2)
    || (v72 = StringLiteral_15980/*"[ "*/,
        v58[2].klass = (System_String_c *)StringLiteral_15980/*"[ "*/,
        sub_1BCA784((PartyOrganizationUtility_o *)&v58[2], (int64_t)v72, v66, v67, v68, v69, v70, v71),
        LODWORD(v58[1].klass) <= 3)
    || (v58[2].monitor = resultData,
        sub_1BCA784((PartyOrganizationUtility_o *)&v58[2].monitor, (int64_t)resultData, v73, v74, v75, v76, v77, v78),
        LODWORD(v58[1].klass) <= 4) )
  {
LABEL_25:
    sub_1BCAA44(v42, v43);
  }
  v85 = StringLiteral_16239/*"] "*/;
  v58[2].fields = (System_String_Fields)StringLiteral_16239/*"] "*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v58[2].fields, v85, v79, v80, v81, v82, v83, v84);
  v42 = System_String__Concat_62414748((System_String_array *)v58, 0LL);
  if ( !logOutputAction )
    goto LABEL_26;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))logOutputAction->fields.m_target)(
    logOutputAction->fields.original_method_info,
    v42,
    *(_QWORD *)&logOutputAction->fields.extra_arg);
  if ( purchaseResult != 4 && purchaseResult != 2 )
    goto LABEL_18;
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._20_UpdateMonthlyPurchasePrice.method)(
    this,
    (unsigned int)bankShopId,
    this->klass->vtable._21_GetPrice.methodPtr);
  if ( System_String__op_Inequality(*v50, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    ((void (__fastcall *)(PurchaseLogic_o *, System_String_o *, System_String_o *, Il2CppMethodPointer))this->klass->vtable._24_SendPurchaseAction.method)(
      this,
      *v50,
      transactionId,
      this->klass->vtable._25_OnDeferred.methodPtr);
  v86 = this->fields._logOutputAction;
  v42 = System_String__Concat_62401220((System_String_o *)StringLiteral_4753/*"Confirming purchase of "*/, *v50, 0LL);
  if ( !v86 )
LABEL_26:
    sub_1BCAA3C(v42, v43);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))v86->fields.m_target)(
    v86->fields.original_method_info,
    v42,
    *(_QWORD *)&v86->fields.extra_arg);
  pendingProducts = this->fields._pendingProducts;
  v91 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_Product__bool__TypeInfo, v88, v89, v90);
  System_Func_object__bool____ctor(
    v91,
    (Il2CppObject *)v41,
    Method_PurchaseLogic___c__DisplayClass47_0__OnEndPaymentStore_b__0__,
    0LL);
  v92 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          (System_Collections_Generic_IEnumerable_TSource__o *)pendingProducts,
          (System_Func_TSource__bool__o *)v91,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_Product___);
  if ( v92 )
    ((void (__fastcall *)(PurchaseLogic_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._18_ConfirmPurchase.method)(
      this,
      v92,
      this->klass->vtable._19_ExtractReceiptContents.methodPtr);
LABEL_18:
  if ( purchaseResult != 4 && !this->fields._buyProductFinishedAction )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    {
      v95 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v99 = (PurchaseLogic_ProductFinishedAction_o *)sub_1BCAA2C(
                                                       PurchaseLogic_ProductFinishedAction_TypeInfo,
                                                       v96,
                                                       v97,
                                                       v98);
      PurchaseLogic_ProductFinishedAction___ctor(
        v99,
        v95,
        (intptr_t)Method_CommonUI_OpenStonePurchaseReciveMenu___76856936,
        v100);
      this->fields._buyProductFinishedAction = v99;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields._buyProductFinishedAction,
        (int64_t)v99,
        v101,
        v102,
        v103,
        v104,
        v105,
        v106);
    }
  }
  v112 = 0LL;
  shopId = 0;
  isSentGift[0] = 0;
  ((void (__fastcall *)(PurchaseLogic_o *, struct PurchaseByBank_UnityIap_Request_PurchaseResult_array *, char *, __int64 *, int32_t *, bool *, Il2CppMethodPointer))this->klass->vtable._22_GetAddedStoneNum.method)(
    this,
    this->fields._purchaseResultArray,
    (char *)&v112 + 4,
    &v112,
    &shopId,
    isSentGift,
    this->klass->vtable._23_ShowPurchaseFailedNotification.methodPtr);
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(
    this,
    purchaseResult,
    0,
    SHIDWORD(v112),
    v112,
    shopId,
    isSentGift[0],
    v107);
}


void __fastcall PurchaseLogic__OnEndSendReceiptData(
        PurchaseLogic_o *this,
        System_String_o *result,
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
  struct System_Action_string__o *logOutputAction; // x23
  __int64 FirstPurchaseResult; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray; // x1
  const MethodInfo *v44; // x2
  System_String_o *klass; // x20
  const MethodInfo *v46; // x6
  __int64 *v47; // x8
  System_String_o *currentTransactionId; // x5
  int32_t v49; // w1
  System_String_o *v50; // x2
  __int64 IsServerCommitedPurchase; // x0
  const MethodInfo *v52; // x3
  struct System_Action_string__o *v53; // x21
  int v54; // w21
  __int64 *v55; // x8
  System_String_o *v56; // x0
  struct System_Action_string__o *v57; // x8
  const MethodInfo *v58; // x2
  int32_t v59; // w22
  const MethodInfo *Entity; // x0
  const MethodInfo *v61; // x2
  struct PurchaseByBank_UnityIap_Request_PurchaseResult_array *v62; // x27
  int max_length; // w8
  struct System_Action_string__o *logErrorOutputAction; // x8
  PurchaseLogic_o *v65; // x0
  System_String_o *v66; // x3
  int32_t v67; // w4
  __int64 v68; // x28
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v69; // x8
  int32_t purchasedBankShopId; // w23
  const MethodInfo *v71; // x2

  if ( (byte_4B15B6A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BankShopMaster___, result, method);
    sub_1BCA7E0(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&StringLiteral_11327/*"ReceiptError"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_22897/*"purchaseResultArray is null."*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_7179/*"Google Play canceled on restore purchase"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_10937/*"PurchaseLogic:EndSendReceiptData ["*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_23047/*"receipt_error"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_17912/*"canceled_purchase_error"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_10940/*"PurchaseResult NotFound Error"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_10941/*"PurchaseResult NotFound."*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_10724/*"PaymentOk"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_7180/*"Google Play pending on restore purchase"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_10936/*"PurchaseBehaviour.Result.SUCCESS_WITHOUT_NOTICE _currentTransactionId="*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_6265/*"Error["*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_22743/*"pending_purchase_error"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_5326/*"DeferredPurchaseProductIds"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v39, v40);
    byte_4B15B6A = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  FirstPurchaseResult = (__int64)System_String__Concat_62412480(
                                   (System_String_o *)StringLiteral_10937/*"PurchaseLogic:EndSendReceiptData ["*/,
                                   result,
                                   (System_String_o *)StringLiteral_16236/*"]"*/,
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
                                   v44);
      if ( (IsServerCommitedPurchase & 1) != 0 )
      {
        v53 = this->fields._logOutputAction;
        FirstPurchaseResult = (__int64)System_String__Concat_62401220(
                                         (System_String_o *)StringLiteral_10936/*"PurchaseBehaviour.Result.SUCCESS_WITHOUT_NOTICE _currentTransactionId="*/,
                                         this->fields._currentTransactionId,
                                         0LL);
        if ( !v53 )
          goto LABEL_49;
        IsServerCommitedPurchase = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v53->fields.m_target)(
                                     v53->fields.original_method_info,
                                     FirstPurchaseResult,
                                     *(_QWORD *)&v53->fields.extra_arg);
        v54 = 4;
LABEL_21:
        FirstPurchaseResult = (__int64)PurchaseLogic__GetFirstPurchaseResult(
                                         (PurchaseLogic_o *)IsServerCommitedPurchase,
                                         this->fields._purchaseResultArray,
                                         this->fields._currentTransactionId,
                                         v52);
        if ( FirstPurchaseResult )
        {
          v59 = *(_DWORD *)(FirstPurchaseResult + 16);
          if ( v59 >= 1 )
          {
            PurchaseLogic__RemovePreparePurchaseShopIdsInPlayerPrefs(this, v59, v58);
            FirstPurchaseResult = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !FirstPurchaseResult )
              goto LABEL_49;
            FirstPurchaseResult = (__int64)DataManager__GetMasterData_object_(
                                             (DataManager_o *)FirstPurchaseResult,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BankShopMaster___);
            if ( !FirstPurchaseResult )
              goto LABEL_49;
            Entity = (const MethodInfo *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)FirstPurchaseResult,
                                           v59,
                                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
            if ( Entity )
            {
              klass = (System_String_o *)Entity->klass;
              FirstPurchaseResult = PurchaseLogic__IsAppleDevice(Entity);
              if ( (FirstPurchaseResult & 1) != 0 )
              {
                FirstPurchaseResult = UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5326/*"DeferredPurchaseProductIds"*/, 0LL);
                if ( (FirstPurchaseResult & 1) != 0 )
                {
                  v62 = this->fields._purchaseResultArray;
                  if ( v62 )
                  {
                    max_length = v62->max_length;
                    if ( max_length == 1 )
                    {
                      PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(this, klass, v61);
LABEL_37:
                      StoneCountRefreshComponent__RefreshAllStoneCount((const MethodInfo *)FirstPurchaseResult);
                      goto LABEL_38;
                    }
                    if ( max_length < 2 )
                      goto LABEL_37;
                    v68 = 0LL;
                    while ( 1 )
                    {
                      if ( (unsigned int)v68 >= max_length )
                        sub_1BCAA44(FirstPurchaseResult, purchaseResultArray);
                      v69 = v62->m_Items[v68];
                      if ( !v69 )
                        break;
                      purchasedBankShopId = v69->fields.purchasedBankShopId;
                      FirstPurchaseResult = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !FirstPurchaseResult )
                        break;
                      FirstPurchaseResult = (__int64)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)FirstPurchaseResult,
                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BankShopMaster___);
                      if ( !FirstPurchaseResult )
                        break;
                      FirstPurchaseResult = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)FirstPurchaseResult,
                                                       purchasedBankShopId,
                                                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
                      if ( FirstPurchaseResult )
                        PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(
                          this,
                          *(System_String_o **)(FirstPurchaseResult + 32),
                          v71);
                      max_length = v62->max_length;
                      if ( (int)++v68 >= max_length )
                        goto LABEL_37;
                    }
LABEL_49:
                    sub_1BCAA3C(FirstPurchaseResult, purchaseResultArray);
                  }
                }
              }
              FirstPurchaseResult = PurchaseLogic__IsGooglePlayDevice((const MethodInfo *)FirstPurchaseResult);
              if ( (FirstPurchaseResult & 1) != 0 )
                goto LABEL_37;
            }
LABEL_38:
            currentTransactionId = this->fields._currentTransactionId;
            v65 = this;
            v49 = v54;
            v66 = klass;
            v50 = (System_String_o *)StringLiteral_10724/*"PaymentOk"*/;
            v67 = v59;
            goto LABEL_35;
          }
        }
        logErrorOutputAction = this->fields._logErrorOutputAction;
        if ( logErrorOutputAction )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logErrorOutputAction->fields.m_target)(
            logErrorOutputAction->fields.original_method_info,
            StringLiteral_10941/*"PurchaseResult NotFound."*/,
            *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
          v55 = &StringLiteral_10940/*"PurchaseResult NotFound Error"*/;
          goto LABEL_33;
        }
        goto LABEL_49;
      }
    }
    else
    {
      v57 = this->fields._logErrorOutputAction;
      if ( !v57 )
        goto LABEL_49;
      IsServerCommitedPurchase = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v57->fields.m_target)(
                                   v57->fields.original_method_info,
                                   StringLiteral_22897/*"purchaseResultArray is null."*/,
                                   *(_QWORD *)&v57->fields.extra_arg);
    }
    v54 = 2;
    goto LABEL_21;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22743/*"pending_purchase_error"*/, 0LL) )
  {
    if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_17912/*"canceled_purchase_error"*/, 0LL) )
    {
      v47 = &StringLiteral_7179/*"Google Play canceled on restore purchase"*/;
      currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
      v49 = 17;
      goto LABEL_10;
    }
    if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_23047/*"receipt_error"*/, 0LL) )
    {
      v56 = System_String__Concat_62412480(
              (System_String_o *)StringLiteral_6265/*"Error["*/,
              result,
              (System_String_o *)StringLiteral_16236/*"]"*/,
              0LL);
      currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
      v49 = 7;
      v50 = v56;
      goto LABEL_34;
    }
    v55 = &StringLiteral_11327/*"ReceiptError"*/;
LABEL_33:
    v50 = (System_String_o *)*v55;
    currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
    v49 = 7;
    goto LABEL_34;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, __int64, Il2CppMethodPointer))this->klass->vtable._30_SetExistsDeferredPurchase.method)(
    this,
    1LL,
    this->klass->vtable._31_IsDeferredPurchaseExists.methodPtr);
  v47 = &StringLiteral_7180/*"Google Play pending on restore purchase"*/;
  currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
  v49 = 16;
LABEL_10:
  v50 = (System_String_o *)*v47;
LABEL_34:
  v65 = this;
  v66 = klass;
  v67 = 0;
LABEL_35:
  PurchaseLogic__OnEndPaymentStore(v65, v49, v50, v66, v67, currentTransactionId, v46);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__OnInitializeFailed(PurchaseLogic_o *this, int32_t error, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  struct System_Action_string__o *logErrorOutputAction; // x20
  System_String_o *v12; // x0
  System_Enum_o v13; // [xsp+8h] [xbp-38h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h]

  if ( (byte_4B15B75 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Purchasing_InitializationFailureReason_TypeInfo, *(_QWORD *)&error, method);
    sub_1BCA7E0(&StringLiteral_10042/*"OnInitializeFailed InitializationFailureReason:"*/, v5, v6);
    byte_4B15B75 = 1;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.method)(
    this,
    this->klass->vtable._30_SetExistsDeferredPurchase.methodPtr,
    method);
  if ( (unsigned int)error <= 1 )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    v13.klass = (System_Enum_c *)UnityEngine_Purchasing_InitializationFailureReason_TypeInfo;
    v13.monitor = (void *)-1LL;
    v14 = error;
    v8 = System_Enum__ToString(&v13, 0LL);
    v9 = System_String__Concat_62401220((System_String_o *)StringLiteral_10042/*"OnInitializeFailed InitializationFailureReason:"*/, v8, 0LL);
    if ( logErrorOutputActionSampledByRatio )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD, float))logErrorOutputActionSampledByRatio->fields.m_target)(
        logErrorOutputActionSampledByRatio->fields.original_method_info,
        v9,
        *(_QWORD *)&logErrorOutputActionSampledByRatio->fields.extra_arg,
        0.01);
      return;
    }
LABEL_9:
    sub_1BCAA3C(v9, v10);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v13.klass = (System_Enum_c *)UnityEngine_Purchasing_InitializationFailureReason_TypeInfo;
  v13.monitor = (void *)-1LL;
  v14 = error;
  v12 = System_Enum__ToString(&v13, 0LL);
  v9 = System_String__Concat_62401220((System_String_o *)StringLiteral_10042/*"OnInitializeFailed InitializationFailureReason:"*/, v12, 0LL);
  if ( !logErrorOutputAction )
    goto LABEL_9;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))logErrorOutputAction->fields.m_target)(
    logErrorOutputAction->fields.original_method_info,
    v9,
    *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
}


void __fastcall PurchaseLogic__OnInitialized(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_IStoreController_o *controller,
        UnityEngine_Purchasing_IExtensionProvider_o *extensions,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x0
  __int64 v14; // x1
  struct System_Action_string__o *logOutputAction; // x8
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct PurchaseLogic_StaticFields *static_fields; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  PurchaseLogic_o *v29; // x0
  const MethodInfo *v30; // x1
  UnityEngine_Purchasing_IAppleExtensions_o *AppleExtension; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  UnityEngine_Purchasing_IAppleExtensions_o *v35; // x20
  System_Action_object__o *v36; // x21
  UnityEngine_Purchasing_IAppleExtensions_c *klass; // x8
  __int64 v38; // x9
  UnityEngine_Purchasing_IAppleExtensions_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B15B72 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_Product__TypeInfo, controller, extensions);
    sub_1BCA7E0(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v7, v8);
    sub_1BCA7E0(&PurchaseLogic_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_10043/*"OnInitialized: PASS"*/, v11, v12);
    byte_4B15B72 = 1;
  }
  v13 = ((__int64 (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer, UnityEngine_Purchasing_IExtensionProvider_o *, const MethodInfo *))this->klass->vtable._28_EnableCrashReporterOnInitializeSucceeded.method)(
          this,
          this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.methodPtr,
          extensions,
          method);
  logOutputAction = this->fields._logOutputAction;
  if ( !logOutputAction )
    sub_1BCAA3C(v13, v14);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logOutputAction->fields.m_target)(
    logOutputAction->fields.original_method_info,
    StringLiteral_10043/*"OnInitialized: PASS"*/,
    *(_QWORD *)&logOutputAction->fields.extra_arg);
  PurchaseLogic_TypeInfo->static_fields->_storeController = controller;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)PurchaseLogic_TypeInfo->static_fields,
    (int64_t)controller,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  static_fields->_storeExtensionProvider = extensions;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->_storeExtensionProvider,
    (int64_t)extensions,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  AppleExtension = PurchaseLogic__GetAppleExtension(v29, v30);
  if ( AppleExtension )
  {
    v35 = AppleExtension;
    v36 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Product__TypeInfo, v32, v33, v34);
    System_Action_object____ctor(
      v36,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._26_OnInitializeFailed.methodPtr,
      0LL);
    klass = v35->klass;
    v38 = *(unsigned __int16 *)(&v35->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v35->klass->_2.bitflags2 + 3) )
    {
      p_offset = (UnityEngine_Purchasing_IAppleExtensions_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
      {
        --v38;
        p_offset += 2;
        if ( !v38 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(v35, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 2LL);
    }
    (*(void (__fastcall **)(UnityEngine_Purchasing_IAppleExtensions_o *, System_Action_object__o *, _QWORD))p_method)(
      v35,
      v36,
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
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x22
  __int64 IsAppleDevice; // x0
  const MethodInfo *v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  InvokerMethod invoker_method; // x8
  struct System_String_StaticFields *static_fields; // x8
  int64_t Empty; // x1
  System_String_o **v55; // x24
  const MethodInfo *v56; // x0
  const MethodInfo *v57; // x2
  __int64 v58; // x3
  struct System_Action_string__o *logErrorOutputAction; // x23
  System_String_o *v60; // x20
  Il2CppObject *v61; // x0
  struct System_Action_string__o *sendReportOutputAction; // x25
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_String_o *v69; // x24
  System_Object_array *v70; // x23
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x24
  __int64 v78; // x1
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t v85; // x24
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x24
  __int64 v93; // x1
  Il2CppObject *Instance; // x24
  Il2CppObject *v95; // x24
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  PurchaseLogic_ProductFinishedAction_o *v99; // x25
  const MethodInfo *v100; // x3
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  const char *name; // x8
  System_Decimal_o *v108; // x23
  PurchaseBehaviour_c *v109; // x0
  System_Collections_Generic_IEnumerable_TSource__o *BankShopEntityCollection; // x23
  System_Func_object__bool__o *v111; // x24
  Il2CppObject *v112; // x0
  int32_t klass; // w22
  const MethodInfo *v114; // x7
  int32_t v115; // w1
  __int64 v116; // x0
  unsigned int v117; // [xsp+Ch] [xbp-54h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-48h] BYREF
  System_DateTime_o v119; // 0:x0.8
  System_DateTime_o v120; // 0:x0.8

  v4 = failureReason;
  v5 = (const MethodInfo *)product;
  if ( (byte_4B15B77 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommonUI_OpenStonePurchaseReciveMenu___76856936, product, *(_QWORD *)&failureReason);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Decimal_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___, v11, v12);
    sub_1BCA7E0(&System_Func_BankShopEntity__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v15, v16);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&object___TypeInfo, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&PurchaseLogic_ProductFinishedAction_TypeInfo, v23, v24);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v25, v26);
    sub_1BCA7E0(&UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v29, v30);
    sub_1BCA7E0(&string_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_PurchaseLogic___c__DisplayClass61_0__OnPurchaseFailed_b__0__, v33, v34);
    sub_1BCA7E0(&PurchaseLogic___c__DisplayClass61_0_TypeInfo, v35, v36);
    sub_1BCA7E0(&StringLiteral_25139/*"yyyy/MM/dd HH:mm:ss"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_10077/*"OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}, Purchase StartTime: {2}, Purchase FailedTime: {3}"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_5305/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/, v41, v42);
    byte_4B15B77 = 1;
  }
  dateData = 0LL;
  v43 = sub_1BCAA2C(PurchaseLogic___c__DisplayClass61_0_TypeInfo, product, *(_QWORD *)&failureReason, method);
  System_Object___ctor((Il2CppObject *)v43, 0LL);
  if ( v5 )
  {
    invoker_method = v5->invoker_method;
    if ( !invoker_method )
      goto LABEL_53;
    static_fields = (struct System_String_StaticFields *)((char *)invoker_method + 24);
    if ( !v43 )
      goto LABEL_53;
  }
  else
  {
    static_fields = string_TypeInfo->static_fields;
    if ( !v43 )
      goto LABEL_53;
  }
  Empty = (int64_t)static_fields->Empty;
  *(struct System_String_StaticFields *)(v43 + 16) = (struct System_String_StaticFields)static_fields->Empty;
  v55 = (System_String_o **)(v43 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 16), Empty, v46, v47, v48, v49, v50, v51);
  IsAppleDevice = PurchaseLogic__IsAppleDevice(v56);
  if ( (IsAppleDevice & 1) != 0 )
  {
    IsAppleDevice = System_String__IsNullOrEmpty(*v55, 0LL);
    if ( (IsAppleDevice & 1) == 0 )
    {
      IsAppleDevice = (__int64)PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                 (PurchaseLogic_o *)IsAppleDevice,
                                 v45);
      if ( !IsAppleDevice )
        goto LABEL_53;
      IsAppleDevice = System_Collections_Generic_List_object___Contains(
                        (System_Collections_Generic_List_object__o *)IsAppleDevice,
                        (Il2CppObject *)*v55,
                        (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__);
      if ( (IsAppleDevice & 1) != 0 )
      {
        PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(this, *v55, v57);
        logErrorOutputAction = this->fields._logErrorOutputAction;
        v60 = *v55;
        v117 = 4;
        v61 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, &v117);
        IsAppleDevice = (__int64)System_String__Format_62415592(
                                   (System_String_o *)StringLiteral_5305/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/,
                                   (Il2CppObject *)v60,
                                   v61,
                                   0LL);
        if ( !logErrorOutputAction )
          goto LABEL_53;
        IsAppleDevice = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logErrorOutputAction->fields.m_target)(
                          logErrorOutputAction->fields.original_method_info,
                          IsAppleDevice,
                          *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
        v4 = 4;
        goto LABEL_34;
      }
    }
  }
  if ( v4 == 4 )
    goto LABEL_34;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v45);
  dateData = NetworkManager__getDateTime(0LL).fields._dateData;
  sendReportOutputAction = this->fields._sendReportOutputAction;
  IsAppleDevice = sub_1BCA888(object___TypeInfo, 4LL);
  if ( !IsAppleDevice )
LABEL_53:
    sub_1BCAA3C(IsAppleDevice, v45);
  v69 = *v55;
  v70 = (System_Object_array *)IsAppleDevice;
  if ( v69 )
  {
    IsAppleDevice = sub_1BCA91C(v69, *(_QWORD *)(*(_QWORD *)IsAppleDevice + 64LL));
    if ( !IsAppleDevice )
      goto LABEL_55;
  }
  if ( !v70->max_length )
    goto LABEL_54;
  v70->m_Items[0] = (Il2CppObject *)v69;
  sub_1BCA784((PartyOrganizationUtility_o *)v70->m_Items, (int64_t)v69, v63, v64, v65, v66, v67, v68);
  v117 = v4;
  IsAppleDevice = j_il2cpp_value_box_0(UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, &v117);
  v77 = IsAppleDevice;
  if ( IsAppleDevice )
  {
    IsAppleDevice = sub_1BCA91C(IsAppleDevice, v70->obj.klass->_1.element_class);
    if ( !IsAppleDevice )
      goto LABEL_55;
  }
  if ( v70->max_length <= 1 )
    goto LABEL_54;
  v70->m_Items[1] = (Il2CppObject *)v77;
  sub_1BCA784((PartyOrganizationUtility_o *)&v70->m_Items[1], v77, v71, v72, v73, v74, v75, v76);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v78);
  v119.fields._dateData = (uint64_t)&this->fields._purchaseStartTime;
  IsAppleDevice = (__int64)System_DateTime__ToString_63092192(v119, (System_String_o *)StringLiteral_25139/*"yyyy/MM/dd HH:mm:ss"*/, 0LL);
  v85 = IsAppleDevice;
  if ( IsAppleDevice )
  {
    IsAppleDevice = sub_1BCA91C(IsAppleDevice, v70->obj.klass->_1.element_class);
    if ( !IsAppleDevice )
      goto LABEL_55;
  }
  if ( v70->max_length <= 2 )
    goto LABEL_54;
  v70->m_Items[2] = (Il2CppObject *)v85;
  sub_1BCA784((PartyOrganizationUtility_o *)&v70->m_Items[2], v85, v79, v80, v81, v82, v83, v84);
  v120.fields._dateData = (uint64_t)&dateData;
  IsAppleDevice = (__int64)System_DateTime__ToString_63092192(v120, (System_String_o *)StringLiteral_25139/*"yyyy/MM/dd HH:mm:ss"*/, 0LL);
  v92 = IsAppleDevice;
  if ( IsAppleDevice )
  {
    IsAppleDevice = sub_1BCA91C(IsAppleDevice, v70->obj.klass->_1.element_class);
    if ( !IsAppleDevice )
    {
LABEL_55:
      v116 = sub_1BCAA60(IsAppleDevice);
      sub_1BCA908(v116, 0LL);
    }
  }
  if ( v70->max_length <= 3 )
LABEL_54:
    sub_1BCAA44(IsAppleDevice, v45);
  v70->m_Items[3] = (Il2CppObject *)v92;
  sub_1BCA784((PartyOrganizationUtility_o *)&v70->m_Items[3], v92, v86, v87, v88, v89, v90, v91);
  IsAppleDevice = (__int64)System_String__Format_62415728((System_String_o *)StringLiteral_10077/*"OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}, Purchase StartTime: {2}, Purchase FailedTime: {3}"*/, v70, 0LL);
  if ( !sendReportOutputAction )
    goto LABEL_53;
  IsAppleDevice = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))sendReportOutputAction->fields.m_target)(
                    sendReportOutputAction->fields.original_method_info,
                    IsAppleDevice,
                    *(_QWORD *)&sendReportOutputAction->fields.extra_arg);
LABEL_34:
  if ( !this->fields._buyProductFinishedAction )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
    IsAppleDevice = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
    if ( (IsAppleDevice & 1) != 0 )
    {
      v95 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v99 = (PurchaseLogic_ProductFinishedAction_o *)sub_1BCAA2C(
                                                       PurchaseLogic_ProductFinishedAction_TypeInfo,
                                                       v96,
                                                       v97,
                                                       v98);
      PurchaseLogic_ProductFinishedAction___ctor(
        v99,
        v95,
        (intptr_t)Method_CommonUI_OpenStonePurchaseReciveMenu___76856936,
        v100);
      this->fields._buyProductFinishedAction = v99;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields._buyProductFinishedAction,
        (int64_t)v99,
        v101,
        v102,
        v103,
        v104,
        v105,
        v106);
    }
  }
  if ( v5 )
  {
    name = v5->name;
    if ( !name )
      goto LABEL_53;
    v108 = (System_Decimal_o *)*((_QWORD *)name + 6);
    v5 = (const MethodInfo *)*((_QWORD *)name + 7);
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v45);
    LODWORD(v5) = System_Decimal__ToInt32(v108, v5);
  }
  v109 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v45);
    v109 = PurchaseBehaviour_TypeInfo;
  }
  BankShopEntityCollection = (System_Collections_Generic_IEnumerable_TSource__o *)v109->static_fields->BankShopEntityCollection;
  v111 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BankShopEntity__bool__TypeInfo, v45, v57, v58);
  System_Func_object__bool____ctor(
    v111,
    (Il2CppObject *)v43,
    Method_PurchaseLogic___c__DisplayClass61_0__OnPurchaseFailed_b__0__,
    0LL);
  v112 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
           BankShopEntityCollection,
           (System_Func_TSource__bool__o *)v111,
           (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
  if ( v112 )
    klass = (int32_t)v112[1].klass;
  else
    klass = 0;
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._23_ShowPurchaseFailedNotification.method)(
    this,
    v4,
    this->klass->vtable._24_SendPurchaseAction.methodPtr);
  if ( v4 > 6 )
    v115 = 7;
  else
    v115 = dword_C0D630[v4];
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, v115, (int32_t)v5, 0, 0, klass, 0, v114);
}


int32_t __fastcall PurchaseLogic__ProcessPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_PurchaseEventArgs_o *purchaseEventArgs,
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
  __int64 v24; // x21
  __int64 v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct UnityEngine_Purchasing_Product_o *purchasedProduct_k__BackingField; // x1
  UnityEngine_Purchasing_Product_o **v33; // x20
  __int64 v34; // x2
  __int64 v35; // x3
  PurchaseBehaviour_c *v36; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_object__bool__o *v38; // x23
  __int64 v39; // x8
  __int64 v40; // x8
  struct System_Action_string__o *logOutputAction; // x21
  Il2CppObject *v42; // x1
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  struct System_Action_string__o *v44; // x21
  System_String_o *v45; // x0
  struct System_Action_string__o *v46; // x9
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2
  struct System_Action_string__o *logErrorOutputAction; // x8
  System_Decimal_o v51; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4B15B76 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_string___, purchaseEventArgs, method);
    sub_1BCA7E0(&System_Decimal_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Func_string__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_PurchaseLogic___c__DisplayClass60_0__ProcessPurchase_b__0__, v12, v13);
    sub_1BCA7E0(&PurchaseLogic___c__DisplayClass60_0_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_10889/*"ProcessPurchase: product is null"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_10888/*"ProcessPurchase: PASS. Product: '{0}'"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_10887/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_10869/*"Price: "*/, v22, v23);
    byte_4B15B76 = 1;
  }
  *(_OWORD *)&v51.fields.flags = 0uLL;
  v24 = sub_1BCAA2C(PurchaseLogic___c__DisplayClass60_0_TypeInfo, purchaseEventArgs, method, v3);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( purchaseEventArgs )
  {
    purchasedProduct_k__BackingField = purchaseEventArgs->fields._purchasedProduct_k__BackingField;
    if ( !v24 )
      goto LABEL_28;
  }
  else
  {
    purchasedProduct_k__BackingField = 0LL;
    if ( !v24 )
      goto LABEL_28;
  }
  *(_QWORD *)(v24 + 16) = purchasedProduct_k__BackingField;
  v33 = (UnityEngine_Purchasing_Product_o **)(v24 + 16);
  sub_1BCA784(
    (PartyOrganizationUtility_o *)(v24 + 16),
    (int64_t)purchasedProduct_k__BackingField,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( *(_QWORD *)(v24 + 16) )
  {
    v36 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, purchasedProduct_k__BackingField);
      v36 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v36->static_fields->ConsumableProductIdCollection;
    v38 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                           System_Func_string__bool__TypeInfo,
                                           purchasedProduct_k__BackingField,
                                           v34,
                                           v35);
    System_Func_object__bool____ctor(
      v38,
      (Il2CppObject *)v24,
      Method_PurchaseLogic___c__DisplayClass60_0__ProcessPurchase_b__0__,
      0LL);
    v25 = BasicHelper__Any_object_(
            ConsumableProductIdCollection,
            (System_Func_T__bool__o *)v38,
            (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_string___);
    v39 = *(_QWORD *)(v24 + 16);
    if ( v39 )
    {
      v40 = *(_QWORD *)(v39 + 16);
      if ( v40 )
      {
        logOutputAction = this->fields._logOutputAction;
        v42 = *(Il2CppObject **)(v40 + 16);
        if ( (v25 & 1) == 0 )
        {
          v25 = (__int64)System_String__Format((System_String_o *)StringLiteral_10887/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/, v42, 0LL);
          if ( !logOutputAction )
            goto LABEL_28;
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logOutputAction->fields.m_target)(
            logOutputAction->fields.original_method_info,
            v25,
            *(_QWORD *)&logOutputAction->fields.extra_arg);
          goto LABEL_26;
        }
        v25 = (__int64)System_String__Format((System_String_o *)StringLiteral_10888/*"ProcessPurchase: PASS. Product: '{0}'"*/, v42, 0LL);
        if ( logOutputAction )
        {
          v25 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logOutputAction->fields.m_target)(
                  logOutputAction->fields.original_method_info,
                  v25,
                  *(_QWORD *)&logOutputAction->fields.extra_arg);
          if ( *v33 )
          {
            metadata_k__BackingField = (*v33)->fields._metadata_k__BackingField;
            if ( metadata_k__BackingField )
            {
              v44 = this->fields._logOutputAction;
              *(_OWORD *)&v51.fields.flags = *(_OWORD *)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.flags;
              if ( !System_Decimal_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, purchasedProduct_k__BackingField);
              v45 = System_Decimal__ToString(&v51, 0LL);
              v25 = (__int64)System_String__Concat_62401220((System_String_o *)StringLiteral_10869/*"Price: "*/, v45, 0LL);
              if ( v44 )
              {
                v25 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v44->fields.m_target)(
                        v44->fields.original_method_info,
                        v25,
                        *(_QWORD *)&v44->fields.extra_arg);
                if ( *v33 )
                {
                  v46 = this->fields._logOutputAction;
                  if ( v46 )
                  {
                    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, _QWORD))v46->fields.m_target)(
                      v46->fields.original_method_info,
                      (*v33)->fields._receipt_k__BackingField,
                      *(_QWORD *)&v46->fields.extra_arg);
                    PurchaseLogic__ValidateReceipt(this, *v33, v47);
LABEL_26:
                    PurchaseLogic__AddPendingPurchase(this, *v33, v48);
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
    sub_1BCAA3C(v25, purchasedProduct_k__BackingField);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  if ( !logErrorOutputAction )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logErrorOutputAction->fields.m_target)(
    logErrorOutputAction->fields.original_method_info,
    StringLiteral_10889/*"ProcessPurchase: product is null"*/,
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x2
  __int64 v35; // x3
  int32_t CumulativeAmount; // w2
  const MethodInfo *v37; // x7
  NetworkManager_ResultCallbackFunc_o *v38; // x19
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  NetworkManager_ResultCallbackFunc_o *v48; // x21
  PurchaseLogic_o *v49; // x0
  const MethodInfo *v50; // x3

  if ( (byte_4B15B5D & 1) == 0 )
  {
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&shopId, product);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_PurchaseLogic___c__DisplayClass29_0__PurchaseIfAvailable_b__0__, v11, v12);
    sub_1BCA7E0(&Method_PurchaseLogic___c__DisplayClass29_0__PurchaseIfAvailable_b__1__, v13, v14);
    sub_1BCA7E0(&PurchaseLogic___c__DisplayClass29_0_TypeInfo, v15, v16);
    byte_4B15B5D = 1;
  }
  v17 = sub_1BCAA2C(PurchaseLogic___c__DisplayClass29_0_TypeInfo, *(_QWORD *)&shopId, product, *(_QWORD *)&price);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    sub_1BCAA3C(v18, v19);
  *(_QWORD *)(v17 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 32) = product;
  *(_DWORD *)(v17 + 24) = price;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)product, v26, v27, v28, v29, v30, v31);
  *(_DWORD *)(v17 + 40) = shopId;
  if ( PurchaseLogic__IsAppleDevice(v32)
    && PurchaseLogic__IsPendingPurchase(this, *(UnityEngine_Purchasing_Product_o **)(v17 + 32), v34) )
  {
    if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v33);
    CumulativeAmount = AgeVerificationMenu__GetCumulativeAmount(0LL);
    PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, 13, CumulativeAmount, 0, 0, 0, 0, v37);
  }
  else
  {
    v38 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v33, v34, v35);
    NetworkManager_ResultCallbackFunc___ctor(
      v38,
      (Il2CppObject *)v17,
      Method_PurchaseLogic___c__DisplayClass29_0__PurchaseIfAvailable_b__0__,
      0LL);
    *(_QWORD *)(v17 + 48) = v38;
    sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 48), (int64_t)v38, v39, v40, v41, v42, v43, v44);
    LODWORD(v38) = *(_DWORD *)(v17 + 40);
    v48 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v45, v46, v47);
    NetworkManager_ResultCallbackFunc___ctor(
      v48,
      (Il2CppObject *)v17,
      Method_PurchaseLogic___c__DisplayClass29_0__PurchaseIfAvailable_b__1__,
      0LL);
    PurchaseLogic__RequestPreparePurchaseByBank(v49, (int32_t)v38, v48, v50);
  }
}


void __fastcall PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(
        PurchaseLogic_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v21; // x1
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Predicate_object__o *v26; // x21
  PurchaseLogic_o *v27; // x0
  const MethodInfo *v28; // x2

  if ( (byte_4B15B7B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__RemoveAll__, productId, method);
    sub_1BCA7E0(&System_Predicate_string__TypeInfo, v5, v6);
    sub_1BCA7E0(
      &Method_PurchaseLogic___c__DisplayClass82_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__,
      v7,
      v8);
    sub_1BCA7E0(&PurchaseLogic___c__DisplayClass82_0_TypeInfo, v9, v10);
    byte_4B15B7B = 1;
  }
  v11 = sub_1BCAA2C(PurchaseLogic___c__DisplayClass82_0_TypeInfo, productId, method, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_7;
  *(_QWORD *)(v11 + 16) = productId;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)productId, v14, v15, v16, v17, v18, v19);
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v11 + 16), 0LL);
  if ( IsNullOrEmpty )
    return;
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)IsNullOrEmpty,
                                                v21);
  v26 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_string__TypeInfo, v23, v24, v25);
  System_Predicate_object____ctor(
    v26,
    (Il2CppObject *)v11,
    Method_PurchaseLogic___c__DisplayClass82_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__,
    0LL);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
LABEL_7:
    sub_1BCAA3C(v12, v13);
  v27 = (PurchaseLogic_o *)System_Collections_Generic_List_object___RemoveAll(
                             (System_Collections_Generic_List_object__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
                             (System_Predicate_T__o *)v26,
                             (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_string__RemoveAll__);
  PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(v27, DeferredPurchaseProductIdsFromPlayerPrefs, v28);
}


void __fastcall PurchaseLogic__RemovePendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_HashSet_T__o *pendingProducts; // x0

  if ( (byte_4B15B64 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Product__Contains__, product, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Product__Remove__, v5, v6);
    byte_4B15B64 = 1;
  }
  pendingProducts = (System_Collections_Generic_HashSet_T__o *)this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_8;
  if ( System_Collections_Generic_HashSet_object___Contains(
         pendingProducts,
         (Il2CppObject *)product,
         (const MethodInfo_345B6BC *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
  {
    pendingProducts = (System_Collections_Generic_HashSet_T__o *)this->fields._pendingProducts;
    if ( pendingProducts )
    {
      System_Collections_Generic_HashSet_object___Remove(
        pendingProducts,
        (Il2CppObject *)product,
        (const MethodInfo_345B888 *)Method_System_Collections_Generic_HashSet_Product__Remove__);
      return;
    }
LABEL_8:
    sub_1BCAA3C(pendingProducts, product);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__RemovePreparePurchaseShopIdsInPlayerPrefs(
        PurchaseLogic_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x19
  System_String_o *v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  PurchaseLogic_o *v20; // x0
  const MethodInfo *v21; // x1
  System_Collections_Generic_List_string__o *PreparePurchaseShopIdsFromPlayerPrefs; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Predicate_object__o *v26; // x21
  PurchaseLogic_o *v27; // x0
  const MethodInfo *v28; // x2
  int32_t v29; // [xsp+Ch] [xbp-24h] BYREF

  v29 = shopId;
  if ( (byte_4B15B7F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__RemoveAll__, *(_QWORD *)&shopId, method);
    sub_1BCA7E0(&System_Predicate_string__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_PurchaseLogic___c__DisplayClass86_0__RemovePreparePurchaseShopIdsInPlayerPrefs_b__0__, v7, v8);
    sub_1BCA7E0(&PurchaseLogic___c__DisplayClass86_0_TypeInfo, v9, v10);
    byte_4B15B7F = 1;
  }
  v11 = sub_1BCAA2C(PurchaseLogic___c__DisplayClass86_0_TypeInfo, *(_QWORD *)&shopId, method, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( shopId >= 1 )
  {
    v12 = System_Int32__ToString((int32_t)&v29, 0LL);
    if ( !v11
      || (*(_QWORD *)(v11 + 16) = v12,
          sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)v12, v14, v15, v16, v17, v18, v19),
          PreparePurchaseShopIdsFromPlayerPrefs = PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs(v20, v21),
          v26 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_string__TypeInfo, v23, v24, v25),
          System_Predicate_object____ctor(
            v26,
            (Il2CppObject *)v11,
            Method_PurchaseLogic___c__DisplayClass86_0__RemovePreparePurchaseShopIdsInPlayerPrefs_b__0__,
            0LL),
          !PreparePurchaseShopIdsFromPlayerPrefs) )
    {
      sub_1BCAA3C(v12, v13);
    }
    v27 = (PurchaseLogic_o *)System_Collections_Generic_List_object___RemoveAll(
                               (System_Collections_Generic_List_object__o *)PreparePurchaseShopIdsFromPlayerPrefs,
                               (System_Predicate_T__o *)v26,
                               (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_string__RemoveAll__);
    PurchaseLogic__SavePreparePurchaseShopIdsToPlayerPrefs(v27, PreparePurchaseShopIdsFromPlayerPrefs, v28);
  }
}


void __fastcall PurchaseLogic__RequestGameServerBankStatus(
        PurchaseLogic_o *this,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4B15B5F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_BankStatusRequest___, callback, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    byte_4B15B5F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, callback);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_BankStatusRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v7);
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
  __int64 v7; // x2
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1

  if ( (byte_4B15B5E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_PreparePurchaseByBankRequest___, *(_QWORD *)&shopId, callback);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    byte_4B15B5E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&shopId);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_PreparePurchaseByBankRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v9);
  PreparePurchaseByBankRequest__beginRequest((PreparePurchaseByBankRequest_o *)Request_object, shopId, 0LL);
}


void __fastcall PurchaseLogic__RestorePurchases(PurchaseLogic_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
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
  struct PurchaseLogic_StaticFields *static_fields; // x8
  void *v23; // x8
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x20
  UnityEngine_Purchasing_IExtensionProvider_c *klass; // x8
  void *v26; // x21
  __int64 v27; // x9
  __int64 v28; // x1
  __int64 v29; // x2
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  void *monitor; // x8
  void *v33; // x19
  System_String_o *v34; // x0
  __int64 v35; // x0
  __int64 v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Action_bool__object__o *v40; // x21
  __int64 v41; // x8
  __int64 v42; // x9
  UnityEngine_Purchasing_IAppleExtensions_c **v43; // x10
  __int64 v44; // x0
  System_Enum_o v45; // [xsp+8h] [xbp-38h] BYREF
  int32_t platform; // [xsp+18h] [xbp-28h]

  v3 = (Il2CppObject *)this;
  if ( (byte_4B15B62 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__string__TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___, v8, v9);
    sub_1BCA7E0(&Method_PurchaseLogic__RestorePurchases_b__34_0__, v10, v11);
    sub_1BCA7E0(&PurchaseLogic_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_RuntimePlatform_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_11486/*"RestorePurchases FAIL. Not supported on this platform. Current = "*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_11488/*"RestorePurchases started ..."*/, v18, v19);
    this = (PurchaseLogic_o *)sub_1BCA7E0(&StringLiteral_11485/*"RestorePurchases FAIL. Not initialized."*/, v20, v21);
    byte_4B15B62 = 1;
  }
  if ( (byte_4B15B5B & 1) == 0 )
  {
    this = (PurchaseLogic_o *)sub_1BCA7E0(&PurchaseLogic_TypeInfo, method, v2);
    byte_4B15B5B = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    monitor = v3[3].monitor;
    if ( monitor )
    {
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD))monitor + 3))(
        *((_QWORD *)monitor + 8),
        StringLiteral_11485/*"RestorePurchases FAIL. Not initialized."*/,
        *((_QWORD *)monitor + 5));
      return;
    }
    goto LABEL_35;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  this = (PurchaseLogic_o *)UnityEngine_Application__get_platform(0LL);
  if ( (_DWORD)this != 8 )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
    this = (PurchaseLogic_o *)UnityEngine_Application__get_platform(0LL);
    if ( (_DWORD)this != 1 )
    {
      v33 = v3[3].monitor;
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
      platform = UnityEngine_Application__get_platform(0LL);
      v45.klass = (System_Enum_c *)UnityEngine_RuntimePlatform_TypeInfo;
      v45.monitor = (void *)-1LL;
      v34 = System_Enum__ToString(&v45, 0LL);
      this = (PurchaseLogic_o *)System_String__Concat_62401220((System_String_o *)StringLiteral_11486/*"RestorePurchases FAIL. Not supported on this platform. Current = "*/, v34, 0LL);
      if ( v33 )
      {
        (*((void (__fastcall **)(_QWORD, PurchaseLogic_o *, _QWORD))v33 + 3))(
          *((_QWORD *)v33 + 8),
          this,
          *((_QWORD *)v33 + 5));
        return;
      }
LABEL_35:
      sub_1BCAA3C(this, method);
    }
  }
  v23 = v3[3].monitor;
  if ( !v23 )
    goto LABEL_35;
  this = (PurchaseLogic_o *)(*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))v23 + 3))(
                              *((_QWORD *)v23 + 8),
                              StringLiteral_11488/*"RestorePurchases started ..."*/,
                              *((_QWORD *)v23 + 5));
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    goto LABEL_35;
  klass = storeExtensionProvider->klass;
  v26 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v27 = *(unsigned __int16 *)(&storeExtensionProvider->klass->_2.bitflags2 + 3);
  v28 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 4);
  v29 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 40);
  if ( *(_WORD *)(&storeExtensionProvider->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v28 )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_19;
    }
    p_method = (__int64)&klass->vtable[*p_offset + (int)v29].method;
  }
  else
  {
LABEL_19:
    p_method = sub_1C1C7C0(storeExtensionProvider, v28, v29);
  }
  v35 = sub_1BCA914(*(_QWORD *)(p_method + 8), v26);
  v36 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, __int64))(v35 + 8))(
          storeExtensionProvider,
          v35);
  v40 = (System_Action_bool__object__o *)sub_1BCAA2C(System_Action_bool__string__TypeInfo, v37, v38, v39);
  System_Action_bool__object____ctor(v40, v3, Method_PurchaseLogic__RestorePurchases_b__34_0__, 0LL);
  if ( !v36 )
    goto LABEL_35;
  v41 = *(_QWORD *)v36;
  v42 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
  {
    v43 = (UnityEngine_Purchasing_IAppleExtensions_c **)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *(v43 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      --v42;
      v43 += 2;
      if ( !v42 )
        goto LABEL_32;
    }
    v44 = v41 + 16LL * (*(_DWORD *)v43 + 1) + 312;
  }
  else
  {
LABEL_32:
    v44 = sub_1C1C7C0(v36, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(__int64, System_Action_bool__object__o *, _QWORD))v44)(v36, v40, *(_QWORD *)(v44 + 8));
}


void __fastcall PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        System_Collections_Generic_List_string__o *deferredPurchaseProductIdList,
        const MethodInfo *method)
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
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x21
  __int64 v32; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  Il2CppObject *current; // x1
  System_String_o **v41; // x20
  System_String_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  PurchaseBehaviour_c *v46; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_object__bool__o *v48; // x23
  System_String_o *v49; // x21
  System_String_o *a; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B15B79 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_string___, deferredPurchaseProductIdList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8, v9);
    sub_1BCA7E0(&System_Func_string__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v14, v15);
    sub_1BCA7E0(&string_TypeInfo, v16, v17);
    sub_1BCA7E0(
      &Method_PurchaseLogic___c__DisplayClass80_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__,
      v18,
      v19);
    sub_1BCA7E0(&PurchaseLogic___c__DisplayClass80_0_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_1576/*";"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_5326/*"DeferredPurchaseProductIds"*/, v26, v27);
    byte_4B15B79 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  if ( deferredPurchaseProductIdList )
  {
    a = (System_String_o *)StringLiteral_1/*""*/;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v51,
      (System_Collections_Generic_List_object__o *)deferredPurchaseProductIdList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v52 = v51;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v52,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v31 = sub_1BCAA2C(PurchaseLogic___c__DisplayClass80_0_TypeInfo, v28, v29, v30);
      System_Object___ctor((Il2CppObject *)v31, 0LL);
      if ( !v31 )
        sub_1BCAA3C(v32, v33);
      current = v52.fields._current;
      *(_QWORD *)(v31 + 16) = v52.fields._current;
      v41 = (System_String_o **)(v31 + 16);
      sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 16), (int64_t)current, v34, v35, v36, v37, v38, v39);
      if ( *(_QWORD *)(v31 + 16) )
      {
        v42 = System_String__Trim(*(System_String_o **)(v31 + 16), 0LL);
        if ( !System_String__op_Equality(v42, string_TypeInfo->static_fields->Empty, 0LL) )
        {
          v46 = PurchaseBehaviour_TypeInfo;
          if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v43);
            v46 = PurchaseBehaviour_TypeInfo;
          }
          ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v46->static_fields->ConsumableProductIdCollection;
          v48 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_string__bool__TypeInfo, v43, v44, v45);
          System_Func_object__bool____ctor(
            v48,
            (Il2CppObject *)v31,
            Method_PurchaseLogic___c__DisplayClass80_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__,
            0LL);
          if ( BasicHelper__Any_object_(
                 ConsumableProductIdCollection,
                 (System_Func_T__bool__o *)v48,
                 (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_string___) )
          {
            if ( System_String__op_Inequality(a, string_TypeInfo->static_fields->Empty, 0LL) )
              v49 = System_String__Concat_62401220(a, (System_String_o *)StringLiteral_1576/*";"*/, 0LL);
            else
              v49 = a;
            a = System_String__Concat_62401220(v49, *v41, 0LL);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v52,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( System_String__IsNullOrEmpty(a, 0LL) )
      UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5326/*"DeferredPurchaseProductIds"*/, 0LL);
    else
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_5326/*"DeferredPurchaseProductIds"*/, a, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall PurchaseLogic__SavePreparePurchaseShopIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        System_Collections_Generic_List_string__o *shopIdList,
        const MethodInfo *method)
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
  System_String_o *v18; // x19
  Il2CppObject *current; // x20
  System_String_o *v20; // x0
  System_String_o *v21; // x21
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B15B7D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, shopIdList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&string_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_10861/*"PreparePurchaseShopIds"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1576/*";"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    byte_4B15B7D = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( shopIdList )
  {
    v18 = (System_String_o *)StringLiteral_1/*""*/;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)shopIdList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v23 = v22;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v23.fields._current;
      if ( v23.fields._current )
      {
        v20 = System_String__Trim((System_String_o *)v23.fields._current, 0LL);
        if ( !System_String__op_Equality(v20, string_TypeInfo->static_fields->Empty, 0LL) )
        {
          if ( System_String__op_Inequality(v18, string_TypeInfo->static_fields->Empty, 0LL) )
            v21 = System_String__Concat_62401220(v18, (System_String_o *)StringLiteral_1576/*";"*/, 0LL);
          else
            v21 = v18;
          v18 = System_String__Concat_62401220(v21, (System_String_o *)current, 0LL);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( System_String__IsNullOrEmpty(v18, 0LL) )
      UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10861/*"PreparePurchaseShopIds"*/, 0LL);
    else
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10861/*"PreparePurchaseShopIds"*/, v18, 0LL);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  BankShopEntity_array *Instance; // x0
  __int64 v13; // x1
  int max_length; // w8
  BankShopEntity_array *v15; // x21
  unsigned int v16; // w22
  BankShopEntity_o *v17; // x23
  int32_t id; // w20
  int googlePrice; // w21

  if ( (byte_4B15B71 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BankShopMaster___, paymentProductId, transactionId);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_8261/*"JPY"*/, v10, v11);
    byte_4B15B71 = 1;
  }
  Instance = (BankShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (BankShopEntity_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = BankShopMaster__GetEnableEntitiyList((BankShopMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_18;
  max_length = Instance->max_length;
  v15 = Instance;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1BCAA44(Instance, v13);
      v17 = v15->m_Items[v16];
      if ( !v17 || !paymentProductId )
        goto LABEL_18;
      Instance = (BankShopEntity_array *)System_String__Equals_62409536(paymentProductId, v17->fields.googleShopId, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      max_length = v15->max_length;
      if ( (int)++v16 >= max_length )
        return;
    }
    id = v17->fields.id;
    if ( (id & 0x80000000) == 0 )
    {
      googlePrice = v17->fields.googlePrice;
      Instance = (BankShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Instance )
      {
        AdManager__TrackPurchase(
          (AdManager_o *)Instance,
          id,
          (double)googlePrice,
          (System_String_o *)StringLiteral_8261/*"JPY"*/,
          transactionId,
          0LL);
        return;
      }
LABEL_18:
      sub_1BCAA3C(Instance, v13);
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
  System_String_o *v30; // x0
  __int64 v31; // x1
  struct System_Action_string__o *logOutputAction; // x22
  __int64 v33; // x1
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  NetworkManager_ResultCallbackFunc_o *v44; // x22
  __int64 v45; // x1
  Il2CppObject *Request_object; // x0
  System_String_o *payloadJsonStr; // x23
  System_String_o *googleSignatureStr; // x21
  System_String_o *v49; // x22
  struct System_String_o **p_googleSignatureStr; // t2
  PurchaseByBank_UnityIap_Request_o *v51; // x24
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Action_object__o *v55; // x25
  struct System_Action_string__o *logErrorOutputAction; // x20
  System_String_o *v57; // x0
  const MethodInfo *v58; // x2
  int64_t UserId; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B15B68 & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo,
      receiptContents,
      currentTransactionId);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___, v12, v13);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_PurchaseLogic_OnEndSendReceiptData__, v16, v17);
    sub_1BCA7E0(&Method_PurchaseLogic__SendReceiptData_b__42_0__, v18, v19);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_24714/*"user_id_error"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_10939/*"PurchaseLogic:SendReceiptData ["*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_15390/*"UserId error: UserId="*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v28, v29);
    byte_4B15B68 = 1;
  }
  this->fields._currentTransactionId = currentTransactionId;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._currentTransactionId,
    (int64_t)currentTransactionId,
    (int64_t)currentTransactionId,
    storeError,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( !receiptContents )
    goto LABEL_17;
  logOutputAction = this->fields._logOutputAction;
  v30 = System_String__Concat_62412480(
          (System_String_o *)StringLiteral_10939/*"PurchaseLogic:SendReceiptData ["*/,
          receiptContents->fields.payloadJsonStr,
          (System_String_o *)StringLiteral_16236/*"]"*/,
          0LL);
  if ( !logOutputAction )
    goto LABEL_17;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))logOutputAction->fields.m_target)(
    logOutputAction->fields.original_method_info,
    v30,
    *(_QWORD *)&logOutputAction->fields.extra_arg);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v33);
  if ( NetworkManager__get_UserId(0LL) > 0 )
  {
    this->fields._purchaseResultArray = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._purchaseResultArray, 0LL, v35, v36, v37, v38, v39, v40);
    v44 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v41, v42, v43);
    NetworkManager_ResultCallbackFunc___ctor(
      v44,
      (Il2CppObject *)this,
      Method_PurchaseLogic_OnEndSendReceiptData__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v45);
    Request_object = NetworkManager__getRequest_object_(
                       v44,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___);
    payloadJsonStr = receiptContents->fields.payloadJsonStr;
    p_googleSignatureStr = &receiptContents->fields.googleSignatureStr;
    googleSignatureStr = receiptContents->fields.googleSignatureStr;
    v49 = p_googleSignatureStr[1];
    v51 = (PurchaseByBank_UnityIap_Request_o *)Request_object;
    v55 = (System_Action_object__o *)sub_1BCAA2C(
                                       System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo,
                                       v52,
                                       v53,
                                       v54);
    System_Action_object____ctor(v55, (Il2CppObject *)this, Method_PurchaseLogic__SendReceiptData_b__42_0__, 0LL);
    if ( v51 )
    {
      PurchaseByBank_UnityIap_Request__beginRequest(
        v51,
        v49,
        payloadJsonStr,
        storeError,
        googleSignatureStr,
        (System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____o *)v55,
        0LL);
      return;
    }
LABEL_17:
    sub_1BCAA3C(v30, v31);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v34);
  UserId = NetworkManager__get_UserId(0LL);
  v57 = System_Int64__ToString((int64_t)&UserId, 0LL);
  v30 = System_String__Concat_62401220((System_String_o *)StringLiteral_15390/*"UserId error: UserId="*/, v57, 0LL);
  if ( !logErrorOutputAction )
    goto LABEL_17;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))logErrorOutputAction->fields.m_target)(
    logErrorOutputAction->fields.original_method_info,
    v30,
    *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
  PurchaseLogic__OnEndSendReceiptData(this, (System_String_o *)StringLiteral_24714/*"user_id_error"*/, v58);
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

  if ( (byte_4B15B6C & 1) == 0 )
  {
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&bankShopId, method);
    byte_4B15B6C = 1;
  }
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, *(_QWORD *)&bankShopId);
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
    sub_1BCAA3C(IsAppleDevice, v6);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Action_string__o *logOutputAction; // x21
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  struct System_Action_string__o *v16; // x20
  bool v17; // [xsp+Ch] [xbp-34h] BYREF

  v17 = result;
  if ( (byte_4B15B81 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, errorMessage);
    sub_1BCA7E0(&StringLiteral_11487/*"RestorePurchases continuing: "*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_1046/*". If no further messages, no purchases available to restore."*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_19253/*"error: "*/, v10, v11);
    byte_4B15B81 = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo, result);
  v13 = System_Boolean__ToString((bool)&v17, 0LL);
  v14 = System_String__Concat_62412480(
          (System_String_o *)StringLiteral_11487/*"RestorePurchases continuing: "*/,
          v13,
          (System_String_o *)StringLiteral_1046/*". If no further messages, no purchases available to restore."*/,
          0LL);
  if ( !logOutputAction )
    goto LABEL_10;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))logOutputAction->fields.m_target)(
    logOutputAction->fields.original_method_info,
    v14,
    *(_QWORD *)&logOutputAction->fields.extra_arg);
  if ( v17 )
    return;
  v16 = this->fields._logOutputAction;
  v14 = System_String__Concat_62401220((System_String_o *)StringLiteral_19253/*"error: "*/, errorMessage, 0LL);
  if ( !v16 )
LABEL_10:
    sub_1BCAA3C(v14, v15);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))v16->fields.m_target)(
    v16->fields.original_method_info,
    v14,
    *(_QWORD *)&v16->fields.extra_arg);
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0D554;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0D4CC;
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  _QWORD v17[7]; // [xsp+0h] [xbp-90h] BYREF
  char v18[4]; // [xsp+38h] [xbp-58h] BYREF
  int32_t v19; // [xsp+3Ch] [xbp-54h] BYREF
  int32_t v20; // [xsp+40h] [xbp-50h] BYREF
  int32_t v21; // [xsp+44h] [xbp-4Ch] BYREF
  int32_t v22; // [xsp+48h] [xbp-48h] BYREF
  int32_t v23; // [xsp+4Ch] [xbp-44h] BYREF

  v22 = perMonthAmount;
  v23 = purchaseResult;
  v20 = chargeStoneNum;
  v21 = freeStoneNum;
  v19 = shopId;
  v18[0] = isSentGift;
  if ( (byte_4B15B82 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, *(_QWORD *)&purchaseResult, *(_QWORD *)&perMonthAmount);
    sub_1BCA7E0(&int_TypeInfo, v12, v13);
    sub_1BCA7E0(&PurchaseBehaviour_Result_TypeInfo, v14, v15);
    byte_4B15B82 = 1;
  }
  v17[6] = 0LL;
  v17[0] = j_il2cpp_value_box_0(PurchaseBehaviour_Result_TypeInfo, &v23);
  v17[1] = j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v17[2] = j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v17[3] = j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v17[4] = j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v17[5] = j_il2cpp_value_box_0(bool_TypeInfo, v18);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v17, callback, object);
}


void __fastcall PurchaseLogic_ProductFinishedAction__EndInvoke(
        PurchaseLogic_ProductFinishedAction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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

  if ( (byte_4B15B83 & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    byte_4B15B83 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.payloadJsonStr = static_fields->Empty;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)Empty, v2, v3, v4, v5, v6, v7);
  v11 = string_TypeInfo->static_fields;
  v12 = v11->Empty;
  this->fields.googleSignatureStr = v11->Empty;
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.receiptBase64Str, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  v27 = string_TypeInfo->static_fields;
  v28 = v27->Empty;
  this->fields.purchaseToken = v27->Empty;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.purchaseToken, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  v35 = string_TypeInfo->static_fields;
  v36 = v35->Empty;
  this->fields.iOSOldStyleTransactionId = v35->Empty;
  sub_1BCA784(
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

  if ( (byte_4B15B84 & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseLogic___c_TypeInfo, v1, v2);
    byte_4B15B84 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(PurchaseLogic___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  PurchaseLogic___c_TypeInfo->static_fields->__9 = (struct PurchaseLogic___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)PurchaseLogic___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *v7; // x19

  if ( (byte_4B15B85 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Debug_TypeInfo, str, method);
    sub_1BCA7E0(&StringLiteral_16126/*"[UnityIAP]課金エラー:"*/, v4, v5);
    byte_4B15B85 = 1;
  }
  v7 = (Il2CppObject *)System_String__Concat_62401220((System_String_o *)StringLiteral_16126/*"[UnityIAP]課金エラー:"*/, str, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v6);
  UnityEngine_Debug__LogError(v7, 0LL);
}


void __fastcall PurchaseLogic___c____ctor_b__87_2(
        PurchaseLogic___c_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_4B15B86 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, str, method);
    sub_1BCA7E0(&StringLiteral_16126/*"[UnityIAP]課金エラー:"*/, v4, v5);
    byte_4B15B86 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  v7 = System_String__Concat_62401220((System_String_o *)StringLiteral_16126/*"[UnityIAP]課金エラー:"*/, str, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v7, v8);
  CrashReporter__SendReport_30652960((CrashReporter_o *)Instance, v7, 0LL, 0LL, 0LL);
}


void __fastcall PurchaseLogic___c____ctor_b__87_3(
        PurchaseLogic___c_o *this,
        System_String_o *str,
        float ratio,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  float v10; // s0
  System_String_o *v11; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x19
  float v14; // [xsp+Ch] [xbp-34h] BYREF

  v14 = ratio;
  if ( (byte_4B15B87 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Debug_TypeInfo, str, method);
    sub_1BCA7E0(&StringLiteral_16125/*"[UnityIAP]課金エラー(ratio:"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_832/*"):"*/, v8, v9);
    byte_4B15B87 = 1;
  }
  v10 = UnityEngine_Random__Range(0.0, 1.0, 0LL);
  if ( v10 < ratio )
  {
    v11 = System_Single__ToString(v10, (const MethodInfo *)&v14);
    v13 = (Il2CppObject *)System_String__Concat_62414484(
                            (System_String_o *)StringLiteral_16125/*"[UnityIAP]課金エラー(ratio:"*/,
                            v11,
                            (System_String_o *)StringLiteral_832/*"):"*/,
                            str,
                            0LL);
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v12);
    UnityEngine_Debug__LogError(v13, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  uint64_t _4__this; // x0
  int32_t v19; // w20
  struct PurchaseLogic_o *v20; // x8
  struct UnityEngine_Purchasing_Product_o *product; // x9
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x9
  struct System_Action_string__o *logOutputAction; // x20
  __int64 v24; // x1
  struct PurchaseLogic_o *v25; // x20
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x20
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  struct UnityEngine_Purchasing_Product_o *v28; // x19
  __int64 v29; // x9
  UnityEngine_Purchasing_IStoreController_c **p_offset; // x10
  __int64 p_method; // x0
  struct PurchaseLogic_o *v32; // x8
  struct System_Action_string__o *logErrorOutputAction; // x20
  System_String_o *v34; // x0
  const MethodInfo *v35; // x7
  System_Enum_o v36; // [xsp+8h] [xbp-38h] BYREF
  int v37; // [xsp+18h] [xbp-28h]

  if ( (byte_4B15B88 & 1) == 0 )
  {
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, requestResultStr, method);
    sub_1BCA7E0(&UnityEngine_Purchasing_IStoreController_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&PurchaseLogic_PurchaseAvailablilty_TypeInfo, v10, v11);
    sub_1BCA7E0(&PurchaseLogic_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_10943/*"Purchasing product asychronously: '{0}'"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_15115/*"Unexpected PurchaseAvailablilty value: "*/, v16, v17);
    byte_4B15B88 = 1;
  }
  _4__this = (uint64_t)this->fields.__4__this;
  if ( !_4__this )
LABEL_29:
    sub_1BCAA3C(_4__this, requestResultStr);
  _4__this = PurchaseLogic__CheckBankStatusAndMonthlyLimit(
               (PurchaseLogic_o *)_4__this,
               requestResultStr,
               this->fields.price,
               v3);
  v19 = 10;
  switch ( (int)_4__this )
  {
    case 1:
      v20 = this->fields.__4__this;
      if ( !v20 )
        goto LABEL_29;
      product = this->fields.product;
      if ( !product )
        goto LABEL_29;
      definition_k__BackingField = product->fields._definition_k__BackingField;
      if ( !definition_k__BackingField )
        goto LABEL_29;
      logOutputAction = v20->fields._logOutputAction;
      _4__this = (uint64_t)System_String__Format(
                             (System_String_o *)StringLiteral_10943/*"Purchasing product asychronously: '{0}'"*/,
                             (Il2CppObject *)definition_k__BackingField->fields._id_k__BackingField,
                             0LL);
      if ( !logOutputAction )
        goto LABEL_29;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, uint64_t, _QWORD))logOutputAction->fields.m_target)(
        logOutputAction->fields.original_method_info,
        _4__this,
        *(_QWORD *)&logOutputAction->fields.extra_arg);
      v25 = this->fields.__4__this;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
      _4__this = NetworkManager__getDateTime(0LL).fields._dateData;
      if ( !v25 )
        goto LABEL_29;
      v25->fields._purchaseStartTime.fields._dateData = _4__this;
      storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
      if ( !storeController )
        goto LABEL_29;
      klass = storeController->klass;
      v28 = this->fields.product;
      v29 = *(unsigned __int16 *)(&storeController->klass->_2.bitflags2 + 3);
      if ( !*(_WORD *)(&storeController->klass->_2.bitflags2 + 3) )
        goto LABEL_17;
      p_offset = (UnityEngine_Purchasing_IStoreController_c **)&klass->_1.interfaceOffsets->offset;
      break;
    case 2:
      v19 = 9;
      goto LABEL_23;
    case 3:
      goto LABEL_23;
    case 4:
      goto LABEL_21;
    default:
      v32 = this->fields.__4__this;
      if ( !v32 )
        goto LABEL_29;
      logErrorOutputAction = v32->fields._logErrorOutputAction;
      v37 = _4__this;
      v36.klass = (System_Enum_c *)PurchaseLogic_PurchaseAvailablilty_TypeInfo;
      v36.monitor = (void *)-1LL;
      v34 = System_Enum__ToString(&v36, 0LL);
      _4__this = (uint64_t)System_String__Concat_62401220((System_String_o *)StringLiteral_15115/*"Unexpected PurchaseAvailablilty value: "*/, v34, 0LL);
      if ( !logErrorOutputAction )
        goto LABEL_29;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, uint64_t, _QWORD))logErrorOutputAction->fields.m_target)(
        logErrorOutputAction->fields.original_method_info,
        _4__this,
        *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
LABEL_21:
      v19 = 7;
LABEL_23:
      if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, requestResultStr);
      _4__this = AgeVerificationMenu__GetCumulativeAmount(0LL);
      if ( !this->fields.__4__this )
        goto LABEL_29;
      PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(
        this->fields.__4__this,
        v19,
        _4__this,
        0,
        0,
        this->fields.shopId,
        0,
        v35);
      return;
  }
  while ( *(p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
  {
    --v29;
    p_offset += 2;
    if ( !v29 )
    {
LABEL_17:
      p_method = sub_1C1C7C0(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 1LL);
      goto LABEL_28;
    }
  }
  p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
LABEL_28:
  (*(void (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, struct UnityEngine_Purchasing_Product_o *, _QWORD))p_method)(
    storeController,
    v28,
    *(_QWORD *)(p_method + 8));
}


void __fastcall PurchaseLogic___c__DisplayClass29_0___PurchaseIfAvailable_b__1(
        PurchaseLogic___c__DisplayClass29_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  PurchaseLogic_o *CumulativeAmount; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  PurchaseLogic_o *_4__this; // x19
  const MethodInfo *v11; // x7

  if ( (byte_4B15B89 & 1) == 0 )
  {
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, result, method);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v5, v6);
    byte_4B15B89 = 1;
  }
  CumulativeAmount = (PurchaseLogic_o *)System_String__op_Inequality(
                                          result,
                                          (System_String_o *)StringLiteral_22292/*"ng"*/,
                                          0LL);
  if ( ((unsigned __int8)CumulativeAmount & 1) != 0 )
  {
    if ( this->fields.__4__this )
    {
      PurchaseLogic__RequestGameServerBankStatus(CumulativeAmount, this->fields.checkBankStatusCallback, v9);
      return;
    }
LABEL_10:
    sub_1BCAA3C(CumulativeAmount, v8);
  }
  _4__this = this->fields.__4__this;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v8);
  CumulativeAmount = (PurchaseLogic_o *)AgeVerificationMenu__GetCumulativeAmount(0LL);
  if ( !_4__this )
    goto LABEL_10;
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(_4__this, 9, (int32_t)CumulativeAmount, 0, 0, 0, 0, v11);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, p);
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
    sub_1BCAA3C(this, id);
  return System_String__Equals_62410340(definition_k__BackingField->fields._id_k__BackingField, id, 4, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return System_String__Equals_62410340(this->fields.productId, bankShop->fields.googleShopId, 4, 0LL);
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
  return System_String__Equals_62410340(id, this->fields.idStr, 4, 0LL);
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