bool __fastcall PurchaseLogicIOS__CheckIfReceiptShouldBeSentInIOSOldStyle(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Security_AppleReceipt_o *receipt,
        System_String_o *transactionIdInOldStyleReceipt,
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
  __int64 v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_IEnumerable_TSource__o *inAppPurchaseReceipts; // x21
  void *monitor; // x8
  PurchaseLogicIOS___c_c *v32; // x0
  System_Func_object__bool__o *_9__2_0; // x22
  Il2CppObject *v34; // x23
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  bool v42; // w0
  System_Object_array *v43; // x19
  bool v44; // w21
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Func_object__bool__o *v48; // x22
  bool v49; // w0

  if ( (byte_4B15B9F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_AppleInAppPurchaseReceipt___, receipt, transactionIdInOldStyleReceipt);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___, v6, v7);
    sub_1BCA7E0(&System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__, v10, v11);
    sub_1BCA7E0(&Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__, v12, v13);
    sub_1BCA7E0(&PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo, v14, v15);
    sub_1BCA7E0(&PurchaseLogicIOS___c_TypeInfo, v16, v17);
    byte_4B15B9F = 1;
  }
  v18 = sub_1BCAA2C(PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo, receipt, transactionIdInOldStyleReceipt, method);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    sub_1BCAA3C(v19, v20);
  *(_QWORD *)(v18 + 16) = transactionIdInOldStyleReceipt;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)(v18 + 16),
    (int64_t)transactionIdInOldStyleReceipt,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( !receipt )
    return 1;
  inAppPurchaseReceipts = (System_Collections_Generic_IEnumerable_TSource__o *)receipt->fields.inAppPurchaseReceipts;
  if ( !inAppPurchaseReceipts )
    return 1;
  monitor = inAppPurchaseReceipts[1].monitor;
  if ( !monitor )
    return 1;
  if ( (int)monitor >= 1 )
  {
    do
      LODWORD(monitor) = (_DWORD)monitor - 1;
    while ( (_DWORD)monitor );
  }
  v32 = PurchaseLogicIOS___c_TypeInfo;
  if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo, v27);
    v32 = PurchaseLogicIOS___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__bool__o *)v32->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32, v27);
      v32 = PurchaseLogicIOS___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v32->static_fields->__9;
    _9__2_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                               System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo,
                                               v27,
                                               v28,
                                               v29);
    System_Func_object__bool____ctor(
      _9__2_0,
      v34,
      Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__,
      0LL);
    static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_AppleInAppPurchaseReceipt__bool__o *)_9__2_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v36, v37, v38, v39, v40, v41);
  }
  v42 = System_Linq_Enumerable__All_object_(
          inAppPurchaseReceipts,
          (System_Func_TSource__bool__o *)_9__2_0,
          (const MethodInfo_2F1D414 *)Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___);
  v43 = (System_Object_array *)receipt->fields.inAppPurchaseReceipts;
  v44 = v42;
  v48 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo, v45, v46, v47);
  System_Func_object__bool____ctor(
    v48,
    (Il2CppObject *)v18,
    Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__,
    0LL);
  v49 = BasicHelper__Any_object__49274176(
          v43,
          (System_Func_T__bool__o *)v48,
          (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_AppleInAppPurchaseReceipt___);
  return v44 || !v49;
}


void __fastcall PurchaseLogicIOS__ConfirmPurchase(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Product_o *product,
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
  System_Collections_Generic_List_string__o *AllPurchasedProductIdList; // x0
  __int64 v15; // x1
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x21
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  Il2CppObject *current; // x20
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Purchasing_ProductCollection_o *v24; // x0
  __int64 v25; // x1
  UnityEngine_Purchasing_Product_o *v26; // x1
  const MethodInfo *v27; // x2
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B15BA6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, product, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Purchasing_IStoreController_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&PurchaseLogic_TypeInfo, v12, v13);
    byte_4B15BA6 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)product);
  if ( !AllPurchasedProductIdList )
    sub_1BCAA3C(0LL, v15);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)AllPurchasedProductIdList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v16 )
      break;
    storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
    if ( !storeController )
      sub_1BCAA3C(v16, v17);
    klass = storeController->klass;
    current = v29.fields._current;
    v21 = *(unsigned __int16 *)(&storeController->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&storeController->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((UnityEngine_Purchasing_IStoreController_c **)p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
    }
    v24 = (UnityEngine_Purchasing_ProductCollection_o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))p_method)(
                                                          storeController,
                                                          *(_QWORD *)(p_method + 8));
    if ( !v24 )
      sub_1BCAA3C(0LL, v25);
    v26 = UnityEngine_Purchasing_ProductCollection__WithID(v24, (System_String_o *)current, 0LL);
    if ( v26 )
      PurchaseLogic__ConfirmPurchase((PurchaseLogic_o *)this, v26, v27);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogicIOS__ConvertBankShopIdToProductId(
        PurchaseLogicIOS_o *this,
        System_Collections_Generic_IEnumerable_int__o *bankShopIDs,
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
  Il2CppObject *Instance; // x0
  __int64 v28; // x1
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x21
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x8
  __int64 v35; // x1
  __int64 v36; // x20
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  int32_t v45; // w1
  Il2CppObject *Entity; // x0
  __int64 v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  Il2CppObject *v54; // x1
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0

  if ( (byte_4B15BA8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BankShopMaster___, bankShopIDs, method);
    sub_1BCA7E0(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_int__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_int__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    sub_1BCA7E0(&StringLiteral_17229/*"bankShopMaster is null"*/, v24, v25);
    byte_4B15BA8 = 1;
  }
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       bankShopIDs,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( logErrorOutputActionSampledByRatio )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, float))logErrorOutputActionSampledByRatio->fields.m_target)(
        logErrorOutputActionSampledByRatio->fields.original_method_info,
        StringLiteral_17229/*"bankShopMaster is null"*/,
        *(_QWORD *)&logErrorOutputActionSampledByRatio->fields.extra_arg,
        0.01);
      return (System_Collections_Generic_List_string__o *)v26;
    }
LABEL_44:
    sub_1BCAA3C(Instance, v28);
  }
  if ( !bankShopIDs )
    goto LABEL_44;
  klass = bankShopIDs->klass;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v31 = *(unsigned __int16 *)(&bankShopIDs->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&bankShopIDs->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(bankShopIDs, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          bankShopIDs,
          *(_QWORD *)(p_method + 8));
  if ( !v36 )
    sub_1BCAA3C(0LL, v35);
  while ( 1 )
  {
    v37 = *(_QWORD *)v36;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_19;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_19:
      v40 = sub_1C1C7C0(v36, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8)) & 1) == 0 )
      break;
    v41 = *(_QWORD *)v36;
    v42 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
    {
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v43 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_26;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_26:
      v44 = sub_1C1C7C0(v36, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v36, *(_QWORD *)(v44 + 8));
    Entity = DataMasterBase_object__object__int___GetEntity(
               v30,
               v45,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    if ( Entity )
    {
      if ( !v26 )
        sub_1BCAA3C(Entity, v47);
      v54 = (Il2CppObject *)Entity[2].klass;
      items = v26->fields._items;
      v56 = Method_System_Collections_Generic_List_string__Add__;
      ++v26->fields._version;
      if ( !items )
        sub_1BCAA3C(Entity, v54);
      size = v26->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          v54,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = &items->obj.klass + size;
        v26->fields._size = size + 1;
        v58[4] = (Il2CppClass *)v54;
        sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)v54, v48, v49, v50, v51, v52, v53);
      }
    }
  }
  v59 = *(_QWORD *)v36;
  v60 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
  {
    v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
    {
      --v60;
      v61 += 4;
      if ( !v60 )
        goto LABEL_38;
    }
    v62 = v59 + 16LL * *v61 + 312;
  }
  else
  {
LABEL_38:
    v62 = sub_1C1C7C0(v36, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v62)(v36, *(_QWORD *)(v62 + 8));
  return (System_Collections_Generic_List_string__o *)v26;
}


void __fastcall PurchaseLogicIOS__DebugLog(PurchaseLogicIOS_o *this, System_String_o *log, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *v7; // x19

  if ( (byte_4B15BA3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Debug_TypeInfo, log, method);
    sub_1BCA7E0(&StringLiteral_15239/*"UnityIAP:"*/, v4, v5);
    byte_4B15BA3 = 1;
  }
  v7 = (Il2CppObject *)System_String__Concat_62401220((System_String_o *)StringLiteral_15239/*"UnityIAP:"*/, log, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v6);
  UnityEngine_Debug__Log(v7, 0LL);
}


PurchaseLogic_ReceiptContents_o *__fastcall PurchaseLogicIOS__ExtractReceiptContents(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PurchaseLogicIOS_o *v5; // x19
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
  System_String_o *receipt_k__BackingField; // x22
  __int64 v35; // x20
  const MethodInfo *v36; // x1
  PurchaseLogicIOS_c *klass; // x9
  __int64 methodPtr_low; // x10
  Il2CppObject *v39; // x25
  struct System_Action_string__o *logErrorOutputAction; // x8
  UnityEngine_Purchasing_ConfigurationBuilder_o *v41; // x0
  __int64 v42; // x1
  Il2CppObject *v43; // x0
  __int64 v44; // x1
  Il2CppObject *v45; // x22
  Il2CppClass *v46; // x8
  __int64 v47; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v50; // x1
  System_String_o *v51; // x22
  System_Byte_array *v52; // x22
  System_Byte_array *v53; // x24
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  UnityEngine_Purchasing_Security_AppleValidator_o *v57; // x23
  __int64 v58; // x0
  __int64 v59; // x1
  PurchaseLogic_o *v60; // x0
  const MethodInfo *v61; // x1
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  Il2CppObject *id_k__BackingField; // x23
  UnityEngine_Purchasing_Security_AppleReceipt_o *v64; // x22
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0
  __int64 v66; // x1
  int64_t v67; // x2
  const MethodInfo *v68; // x3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x23
  UnityEngine_Purchasing_IExtensionProvider_c *v74; // x8
  void *v75; // x24
  __int64 v76; // x9
  __int64 v77; // x1
  __int64 v78; // x2
  int32_t *v79; // x10
  __int64 v80; // x0
  __int64 v81; // x0
  __int64 v82; // x0
  __int64 v83; // x1
  __int64 v84; // x23
  __int64 v85; // x8
  __int64 v86; // x9
  int *v87; // x10
  __int64 v88; // x0
  System_String_o *v89; // x21
  const MethodInfo *v90; // x2
  System_String_o *TransactionIdFromOldStyleReceipt; // x23
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  v5 = this;
  if ( (byte_4B15B9E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Purchasing_Security_AppleValidator_TypeInfo, product, method);
    sub_1BCA7E0(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___, v6, v7);
    sub_1BCA7E0(&System_Convert_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Purchasing_IAppleConfiguration_TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v20, v21);
    sub_1BCA7E0(&PurchaseLogic_TypeInfo, v22, v23);
    sub_1BCA7E0(&PurchaseLogic_ReceiptContents_TypeInfo, v24, v25);
    sub_1BCA7E0(&string_TypeInfo, v26, v27);
    sub_1BCA7E0(&StringLiteral_10721/*"Payload"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_11298/*"RawReceipt Decode Error. "*/, v30, v31);
    this = (PurchaseLogicIOS_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v32, v33);
    byte_4B15B9E = 1;
  }
  value = 0LL;
  if ( !product )
    goto LABEL_59;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v35 = sub_1BCAA2C(PurchaseLogic_ReceiptContents_TypeInfo, product, method, v3);
  PurchaseLogic_ReceiptContents___ctor((PurchaseLogic_ReceiptContents_o *)v35, v36);
  this = (PurchaseLogicIOS_o *)UnityEngine_Purchasing_MiniJson__JsonDecode(receipt_k__BackingField, 0LL);
  if ( !this )
    goto LABEL_59;
  klass = this->klass;
  methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (System_Collections_Generic_Dictionary_string__object__c *)klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    goto LABEL_59;
  }
  v39 = (Il2CppObject *)StringLiteral_1/*""*/;
  if ( (System_Collections_Generic_Dictionary_string__object__c *)klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    this = 0LL;
  this = (PurchaseLogicIOS_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                                 (Il2CppObject *)StringLiteral_10721/*"Payload"*/,
                                 &value,
                                 (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( value )
    {
      if ( (System_String_c *)value->klass == string_TypeInfo )
        v39 = value;
      else
        v39 = 0LL;
    }
    else
    {
      v39 = 0LL;
    }
  }
  else
  {
    logErrorOutputAction = v5->fields._logErrorOutputAction;
    if ( !logErrorOutputAction )
      goto LABEL_59;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logErrorOutputAction->fields.m_target)(
      logErrorOutputAction->fields.original_method_info,
      StringLiteral_11298/*"RawReceipt Decode Error. "*/,
      *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
  }
  v41 = (UnityEngine_Purchasing_ConfigurationBuilder_o *)((__int64 (__fastcall *)(PurchaseLogicIOS_o *, Il2CppMethodPointer))v5->klass->vtable._10_GetConfigurationBuilder.method)(
                                                           v5,
                                                           v5->klass->vtable._11_SetObfuscatedAccountId.methodPtr);
  if ( !v41 )
    sub_1BCAA3C(0LL, v42);
  v43 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
          v41,
          (const MethodInfo_2F0B178 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___);
  v45 = v43;
  if ( !v43 )
    sub_1BCAA3C(0LL, v44);
  v46 = v43->klass;
  v47 = *(unsigned __int16 *)(&v43->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v43->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v46->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IAppleConfiguration_c **)p_offset - 1) != UnityEngine_Purchasing_IAppleConfiguration_TypeInfo )
    {
      --v47;
      p_offset += 4;
      if ( !v47 )
        goto LABEL_23;
    }
    p_method = (__int64)&v46->vtable[*p_offset].method;
  }
  else
  {
LABEL_23:
    p_method = sub_1C1C7C0(v43, UnityEngine_Purchasing_IAppleConfiguration_TypeInfo, 0LL);
  }
  v51 = (System_String_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(v45, *(_QWORD *)(p_method + 8));
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v50);
  v52 = System_Convert__FromBase64String(v51, 0LL);
  v53 = UnityEngine_Purchasing_Security_AppleTangle__Data(0LL);
  v57 = (UnityEngine_Purchasing_Security_AppleValidator_o *)sub_1BCAA2C(
                                                              UnityEngine_Purchasing_Security_AppleValidator_TypeInfo,
                                                              v54,
                                                              v55,
                                                              v56);
  UnityEngine_Purchasing_Security_AppleValidator___ctor(v57, v53, 0LL);
  if ( !v57 )
    sub_1BCAA3C(v58, v59);
  v60 = (PurchaseLogic_o *)UnityEngine_Purchasing_Security_AppleValidator__Validate(v57, v52, 0LL);
  definition_k__BackingField = product->fields._definition_k__BackingField;
  if ( !definition_k__BackingField )
    sub_1BCAA3C(v60, v61);
  id_k__BackingField = (Il2CppObject *)definition_k__BackingField->fields._id_k__BackingField;
  v64 = (UnityEngine_Purchasing_Security_AppleReceipt_o *)v60;
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(v60, v61);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
    sub_1BCAA3C(0LL, v66);
  this = (PurchaseLogicIOS_o *)System_Collections_Generic_List_object___Contains(
                                 (System_Collections_Generic_List_object__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
                                 id_k__BackingField,
                                 (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_57;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_1BCAA3C(this, product);
  v74 = storeExtensionProvider->klass;
  v75 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v76 = *(unsigned __int16 *)(&storeExtensionProvider->klass->_2.bitflags2 + 3);
  v77 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 4);
  v78 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 40);
  if ( *(_WORD *)(&storeExtensionProvider->klass->_2.bitflags2 + 3) )
  {
    v79 = &v74->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)v79 - 1) != v77 )
    {
      --v76;
      v79 += 4;
      if ( !v76 )
        goto LABEL_36;
    }
    v80 = (__int64)&v74->vtable[*v79 + (int)v78].method;
  }
  else
  {
LABEL_36:
    v80 = sub_1C1C7C0(storeExtensionProvider, v77, v78);
  }
  v81 = sub_1BCA914(*(_QWORD *)(v80 + 8), v75);
  v82 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *))(v81 + 8))(storeExtensionProvider);
  v84 = v82;
  if ( !v82 )
    sub_1BCAA3C(0LL, v83);
  v85 = *(_QWORD *)v82;
  v86 = *(unsigned __int16 *)(*(_QWORD *)v82 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v82 + 302LL) )
  {
    v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
    while ( *((UnityEngine_Purchasing_IAppleExtensions_c **)v87 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      --v86;
      v87 += 4;
      if ( !v86 )
        goto LABEL_43;
    }
    v88 = v85 + 16LL * *v87 + 312;
  }
  else
  {
LABEL_43:
    v88 = sub_1C1C7C0(v82, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 0LL);
  }
  v89 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, UnityEngine_Purchasing_Product_o *, _QWORD))v88)(
                             v84,
                             product,
                             *(_QWORD *)(v88 + 8));
  TransactionIdFromOldStyleReceipt = PurchaseLogicIOS__GetTransactionIdFromOldStyleReceipt(v5, v89, v90);
  this = (PurchaseLogicIOS_o *)System_String__IsNullOrEmpty(TransactionIdFromOldStyleReceipt, 0LL);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (PurchaseLogicIOS_o *)PurchaseLogicIOS__CheckIfReceiptShouldBeSentInIOSOldStyle(
                                       this,
                                       v64,
                                       TransactionIdFromOldStyleReceipt,
                                       v68),
        ((unsigned __int8)this & 1) == 0) )
  {
LABEL_57:
    v89 = (System_String_o *)v39;
    if ( v35 )
      goto LABEL_58;
LABEL_59:
    sub_1BCAA3C(this, product);
  }
  if ( !v35 )
    sub_1BCAA3C(this, product);
  *(_QWORD *)(v35 + 56) = TransactionIdFromOldStyleReceipt;
  *(_BYTE *)(v35 + 48) = 1;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)(v35 + 56),
    (int64_t)TransactionIdFromOldStyleReceipt,
    v67,
    (int32_t)v68,
    v69,
    v70,
    v71,
    v72);
LABEL_58:
  *(_QWORD *)(v35 + 32) = v89;
  sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 32), (int64_t)v89, v67, (int32_t)v68, v69, v70, v71, v72);
  return (PurchaseLogic_ReceiptContents_o *)v35;
}


void __fastcall PurchaseLogicIOS__GetAddedStoneNum(
        PurchaseLogicIOS_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        int32_t *freeStoneNum,
        int32_t *chargeStoneNum,
        int32_t *shopId,
        bool *isSentPresentBox,
        const MethodInfo *method)
{
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
  __int64 v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  PurchaseLogicIOS___c_c *v40; // x0
  System_Func_object__bool__o *_9__12_0; // x25
  Il2CppObject *v42; // x26
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  PurchaseLogicIOS___c_c *v54; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x23
  System_Func_object__int__o *_9__12_1; // x25
  Il2CppObject *v57; // x26
  struct PurchaseLogicIOS___c_StaticFields *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Collections_Generic_IEnumerable_int__o *v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  PurchaseLogicIOS___c_c *v69; // x0
  System_Func_object__int__o *_9__12_2; // x24
  Il2CppObject *v71; // x25
  struct PurchaseLogicIOS___c_StaticFields *v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_Collections_Generic_IEnumerable_int__o *v79; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  PurchaseLogicIOS___c_c *v83; // x0
  System_Func_object__bool__o *_9__12_3; // x22
  Il2CppObject *v85; // x24
  struct PurchaseLogicIOS___c_StaticFields *v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  Il2CppObject *object; // x0
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  System_Func_object__bool__o *v97; // x20
  int32_t v98; // w8

  if ( (byte_4B15BA9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___,
      purchaseResultArray,
      freeStoneNum);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_PurchaseByBank_UnityIap_Request_PurchaseResult___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___, v16, v17);
    sub_1BCA7E0(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__, v22, v23);
    sub_1BCA7E0(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__, v24, v25);
    sub_1BCA7E0(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__, v26, v27);
    sub_1BCA7E0(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_3__, v28, v29);
    sub_1BCA7E0(&Method_PurchaseLogicIOS___c__DisplayClass12_0__GetAddedStoneNum_b__4__, v30, v31);
    sub_1BCA7E0(&PurchaseLogicIOS___c__DisplayClass12_0_TypeInfo, v32, v33);
    sub_1BCA7E0(&PurchaseLogicIOS___c_TypeInfo, v34, v35);
    byte_4B15BA9 = 1;
  }
  *shopId = 0;
  *chargeStoneNum = 0;
  *freeStoneNum = 0;
  *isSentPresentBox = 0;
  if ( purchaseResultArray )
  {
    v36 = sub_1BCAA2C(
            PurchaseLogicIOS___c__DisplayClass12_0_TypeInfo,
            purchaseResultArray,
            freeStoneNum,
            chargeStoneNum);
    System_Object___ctor((Il2CppObject *)v36, 0LL);
    v40 = PurchaseLogicIOS___c_TypeInfo;
    if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo, v37);
      v40 = PurchaseLogicIOS___c_TypeInfo;
    }
    _9__12_0 = (System_Func_object__bool__o *)v40->static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !v40->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v40, v37);
        v40 = PurchaseLogicIOS___c_TypeInfo;
      }
      v42 = (Il2CppObject *)v40->static_fields->__9;
      _9__12_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo,
                                                  v37,
                                                  v38,
                                                  v39);
      System_Func_object__bool____ctor(_9__12_0, v42, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__, 0LL);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      static_fields->__9__12_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__12_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__12_0,
        (int64_t)_9__12_0,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
    }
    v50 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
            (System_Func_TSource__bool__o *)_9__12_0,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    v54 = PurchaseLogicIOS___c_TypeInfo;
    v55 = v50;
    if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo, v51);
      v54 = PurchaseLogicIOS___c_TypeInfo;
    }
    _9__12_1 = (System_Func_object__int__o *)v54->static_fields->__9__12_1;
    if ( !_9__12_1 )
    {
      if ( !v54->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v54, v51);
        v54 = PurchaseLogicIOS___c_TypeInfo;
      }
      v57 = (Il2CppObject *)v54->static_fields->__9;
      _9__12_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                 System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo,
                                                 v51,
                                                 v52,
                                                 v53);
      System_Func_object__int____ctor(_9__12_1, v57, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__, 0LL);
      v58 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v58->__9__12_1 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v58->__9__12_1, (int64_t)_9__12_1, v59, v60, v61, v62, v63, v64);
    }
    v65 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                             v55,
                                                             (System_Func_TSource__TResult__o *)_9__12_1,
                                                             (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    *freeStoneNum = System_Linq_Enumerable__Sum(v65, 0LL);
    v69 = PurchaseLogicIOS___c_TypeInfo;
    if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo, v66);
      v69 = PurchaseLogicIOS___c_TypeInfo;
    }
    _9__12_2 = (System_Func_object__int__o *)v69->static_fields->__9__12_2;
    if ( !_9__12_2 )
    {
      if ( !v69->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v69, v66);
        v69 = PurchaseLogicIOS___c_TypeInfo;
      }
      v71 = (Il2CppObject *)v69->static_fields->__9;
      _9__12_2 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                 System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo,
                                                 v66,
                                                 v67,
                                                 v68);
      System_Func_object__int____ctor(_9__12_2, v71, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__, 0LL);
      v72 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v72->__9__12_2 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_2;
      sub_1BCA784((PartyOrganizationUtility_o *)&v72->__9__12_2, (int64_t)_9__12_2, v73, v74, v75, v76, v77, v78);
    }
    v79 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                             v55,
                                                             (System_Func_TSource__TResult__o *)_9__12_2,
                                                             (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    *chargeStoneNum = System_Linq_Enumerable__Sum(v79, 0LL);
    v83 = PurchaseLogicIOS___c_TypeInfo;
    if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo, v80);
      v83 = PurchaseLogicIOS___c_TypeInfo;
    }
    _9__12_3 = (System_Func_object__bool__o *)v83->static_fields->__9__12_3;
    if ( !_9__12_3 )
    {
      if ( !v83->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v83, v80);
        v83 = PurchaseLogicIOS___c_TypeInfo;
      }
      v85 = (Il2CppObject *)v83->static_fields->__9;
      _9__12_3 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo,
                                                  v80,
                                                  v81,
                                                  v82);
      System_Func_object__bool____ctor(_9__12_3, v85, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_3__, 0LL);
      v86 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v86->__9__12_3 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__12_3;
      sub_1BCA784((PartyOrganizationUtility_o *)&v86->__9__12_3, (int64_t)_9__12_3, v87, v88, v89, v90, v91, v92);
    }
    *isSentPresentBox = System_Linq_Enumerable__Any_object__49415960(
                          v55,
                          (System_Func_TSource__bool__o *)_9__12_3,
                          (const MethodInfo_2F20718 *)Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    object = System_Linq_Enumerable__First_object_(
               v55,
               (const MethodInfo_2F32D3C *)Method_System_Linq_Enumerable_First_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    if ( !object || !v36 )
      sub_1BCAA3C(object, v94);
    *(_DWORD *)(v36 + 16) = object[1].klass;
    v97 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                           System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo,
                                           v94,
                                           v95,
                                           v96);
    System_Func_object__bool____ctor(
      v97,
      (Il2CppObject *)v36,
      Method_PurchaseLogicIOS___c__DisplayClass12_0__GetAddedStoneNum_b__4__,
      0LL);
    if ( System_Linq_Enumerable__Any_object__49415960(
           v55,
           (System_Func_TSource__bool__o *)v97,
           (const MethodInfo_2F20718 *)Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___) )
    {
      v98 = 0;
    }
    else
    {
      v98 = *(_DWORD *)(v36 + 16);
    }
    *shopId = v98;
  }
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogicIOS__GetAllPurchasedProductIdList(
        PurchaseLogicIOS_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  PurchaseLogicIOS_o *v4; // x19
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
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x20
  PurchaseLogicIOS___c_c *v18; // x0
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v20; // x22
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_IEnumerable_int__o *v28; // x1
  const MethodInfo *v29; // x2
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Collections_Generic_List_object__o *v35; // x19

  v4 = this;
  if ( (byte_4B15BA7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___,
      method,
      v2);
    sub_1BCA7E0(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__, v11, v12);
    sub_1BCA7E0(&PurchaseLogicIOS___c_TypeInfo, v13, v14);
    this = (PurchaseLogicIOS_o *)sub_1BCA7E0(&StringLiteral_16738/*"_purchaseResultArray is null"*/, v15, v16);
    byte_4B15BA7 = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields._purchaseResultArray;
  if ( purchaseResultArray )
  {
    v18 = PurchaseLogicIOS___c_TypeInfo;
    if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo, method);
      v18 = PurchaseLogicIOS___c_TypeInfo;
    }
    _9__10_0 = (System_Func_object__int__o *)v18->static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18, method);
        v18 = PurchaseLogicIOS___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__10_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                 System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
      System_Func_object__int____ctor(
        _9__10_0,
        v20,
        Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__,
        0LL);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__10_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
        (int64_t)_9__10_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    v28 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                             purchaseResultArray,
                                                             (System_Func_TSource__TResult__o *)_9__10_0,
                                                             (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    return PurchaseLogicIOS__ConvertBankShopIdToProductId(v4, v28, v29);
  }
  else
  {
    logErrorOutputActionSampledByRatio = v4->fields._logErrorOutputActionSampledByRatio;
    if ( !logErrorOutputActionSampledByRatio )
      sub_1BCAA3C(this, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, float))logErrorOutputActionSampledByRatio->fields.m_target)(
      logErrorOutputActionSampledByRatio->fields.original_method_info,
      StringLiteral_16738/*"_purchaseResultArray is null"*/,
      *(_QWORD *)&logErrorOutputActionSampledByRatio->fields.extra_arg,
      0.01);
    v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_string__TypeInfo,
                                                         v32,
                                                         v33,
                                                         v34);
    System_Collections_Generic_List_object____ctor(
      v35,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v35;
  }
}


System_String_o *__fastcall PurchaseLogicIOS__GetTransactionIdFromOldStyleReceipt(
        PurchaseLogicIOS_o *this,
        System_String_o *iOSOldStylePayloadStr,
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
  System_Byte_array *v12; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v14; // x1
  System_String_o *v15; // x0
  const MethodInfo *v16; // x1
  System_Collections_Generic_Dictionary_string__object__o *v17; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x0
  System_Byte_array *v20; // x21
  System_Text_Encoding_o *v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x0
  const MethodInfo *v24; // x1
  System_Collections_Generic_Dictionary_string__object__o *v25; // x0
  __int64 v26; // x1
  System_String_o *v29; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B15BA0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, iOSOldStylePayloadStr, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4, v5);
    sub_1BCA7E0(&string_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_22893/*"purchase-info"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_24286/*"transaction-id"*/, v10, v11);
    byte_4B15BA0 = 1;
  }
  v29 = 0LL;
  value = 0LL;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, iOSOldStylePayloadStr);
  v12 = System_Convert__FromBase64String(iOSOldStylePayloadStr, 0LL);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1BCAA3C(0LL, v14);
  v15 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, Il2CppMethodPointer))UTF8->klass->vtable._36_GetString.method)(
                             UTF8,
                             v12,
                             UTF8->klass->vtable._37_GetString.methodPtr);
  v17 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v15, v16);
  if ( !v17 )
    sub_1BCAA3C(0LL, v18);
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)v17,
    (Il2CppObject *)StringLiteral_22893/*"purchase-info"*/,
    &value,
    (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( value )
  {
    if ( (System_String_c *)value->klass == string_TypeInfo )
      v19 = value;
    else
      v19 = 0LL;
  }
  else
  {
    v19 = 0LL;
  }
  v20 = System_Convert__FromBase64String((System_String_o *)v19, 0LL);
  v21 = System_Text_Encoding__get_UTF8(0LL);
  if ( !v21 )
    sub_1BCAA3C(0LL, v22);
  v23 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, Il2CppMethodPointer))v21->klass->vtable._36_GetString.method)(
                             v21,
                             v20,
                             v21->klass->vtable._37_GetString.methodPtr);
  v25 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v23, v24);
  if ( !v25 )
    sub_1BCAA3C(0LL, v26);
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)v25,
    (Il2CppObject *)StringLiteral_24286/*"transaction-id"*/,
    (Il2CppObject **)&v29,
    (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( !v29 )
    return 0LL;
  if ( v29->klass == string_TypeInfo )
    return v29;
  return 0LL;
}


bool __fastcall PurchaseLogicIOS__IsDeferredPurchaseExists(PurchaseLogicIOS_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0

  if ( (byte_4B15BAB & 1) == 0 )
  {
    this = (PurchaseLogicIOS_o *)sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_string___, method, v2);
    byte_4B15BAB = 1;
  }
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)this,
                                                method);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
           (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_string___);
}


bool __fastcall PurchaseLogicIOS__IsPurchasingFrameworkAvailable(PurchaseLogicIOS_o *this, const MethodInfo *method)
{
  return 1;
}


void __fastcall PurchaseLogicIOS__OnDeferred(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Product_o *product,
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
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  int64_t id_k__BackingField; // x1
  System_String_o **v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  PurchaseBehaviour_c *v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o *BankShopEntityCollection; // x22
  System_Func_object__bool__o *v31; // x23
  Il2CppObject *v32; // x0
  const MethodInfo *v33; // x2
  int32_t klass; // w21
  const MethodInfo *v35; // x7

  if ( (byte_4B15BAA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___, product, method);
    sub_1BCA7E0(&System_Func_BankShopEntity__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_PurchaseLogicIOS___c__DisplayClass14_0__OnDeferred_b__0__, v10, v11);
    sub_1BCA7E0(&PurchaseLogicIOS___c__DisplayClass14_0_TypeInfo, v12, v13);
    byte_4B15BAA = 1;
  }
  v14 = sub_1BCAA2C(PurchaseLogicIOS___c__DisplayClass14_0_TypeInfo, product, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !product || (definition_k__BackingField = product->fields._definition_k__BackingField) == 0LL || !v14 )
    sub_1BCAA3C(v15, v16);
  id_k__BackingField = (int64_t)definition_k__BackingField->fields._id_k__BackingField;
  *(_QWORD *)(v14 + 16) = id_k__BackingField;
  v25 = (System_String_o **)(v14 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), id_k__BackingField, v17, v18, v19, v20, v21, v22);
  v29 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v26);
    v29 = PurchaseBehaviour_TypeInfo;
  }
  BankShopEntityCollection = (System_Collections_Generic_IEnumerable_TSource__o *)v29->static_fields->BankShopEntityCollection;
  v31 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BankShopEntity__bool__TypeInfo, v26, v27, v28);
  System_Func_object__bool____ctor(
    v31,
    (Il2CppObject *)v14,
    Method_PurchaseLogicIOS___c__DisplayClass14_0__OnDeferred_b__0__,
    0LL);
  v32 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          BankShopEntityCollection,
          (System_Func_TSource__bool__o *)v31,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
  if ( v32 )
    klass = (int32_t)v32[1].klass;
  else
    klass = 0;
  PurchaseLogic__AddDeferredPurchaseProductIdsToPlayerPrefs((PurchaseLogic_o *)v32, *v25, v33);
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear((PurchaseLogic_o *)this, 5, 0, 0, 0, klass, 0, v35);
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall PurchaseLogicIOS__ParseIOSOldStyleReceipt(
        System_String_o *str,
        const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_object__object__o *v17; // x19
  void *v18; // x0
  __int64 v19; // x1
  int v20; // w8
  _DWORD *v21; // x20
  int i; // w23
  char *v23; // x8
  System_String_o *v24; // x21
  _DWORD *v25; // x21
  Il2CppObject *v26; // x22

  if ( (byte_4B15BA1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_1849/*"="*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_1576/*";"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_367/*"\""*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B15BA1 = 1;
  }
  v17 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                     method,
                                                                     v2,
                                                                     v3);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v17,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !str || (v18 = System_String__Split(str, 0xAu, 0, 0LL)) == 0LL )
LABEL_22:
    sub_1BCAA3C(v18, v19);
  v20 = *((_DWORD *)v18 + 6);
  v21 = v18;
  if ( v20 >= 1 )
  {
    for ( i = 0; i < v20; ++i )
    {
      if ( i >= (unsigned int)v20 )
LABEL_23:
        sub_1BCAA44(v18, v19);
      v23 = (char *)&v21[2 * i];
      v24 = (System_String_o *)*((_QWORD *)v23 + 4);
      if ( !v24 )
        goto LABEL_22;
      v18 = (void *)System_String__Contains(*((System_String_o **)v23 + 4), (System_String_o *)StringLiteral_1849/*"="*/, 0LL);
      if ( ((unsigned __int8)v18 & 1) != 0 )
      {
        v18 = System_String__Replace_62420848(
                v24,
                (System_String_o *)StringLiteral_1576/*";"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( !v18 )
          goto LABEL_22;
        v18 = System_String__Split((System_String_o *)v18, 0x3Du, 0, 0LL);
        if ( v18 )
        {
          v25 = v18;
          if ( *((int *)v18 + 6) >= 2 )
          {
            v18 = (void *)*((_QWORD *)v18 + 4);
            if ( !v18 )
              goto LABEL_22;
            v18 = System_String__Replace_62420848(
                    (System_String_o *)v18,
                    (System_String_o *)StringLiteral_367/*"\""*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
            if ( !v18 )
              goto LABEL_22;
            v18 = System_String__Trim((System_String_o *)v18, 0LL);
            if ( v25[6] <= 1u )
              goto LABEL_23;
            v26 = (Il2CppObject *)v18;
            v18 = (void *)*((_QWORD *)v25 + 5);
            if ( !v18 )
              goto LABEL_22;
            v18 = System_String__Replace_62420848(
                    (System_String_o *)v18,
                    (System_String_o *)StringLiteral_367/*"\""*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
            if ( !v18 )
              goto LABEL_22;
            v18 = System_String__Trim((System_String_o *)v18, 0LL);
            if ( !v17 )
              goto LABEL_22;
            System_Collections_Generic_Dictionary_object__object___Add(
              v17,
              v26,
              (Il2CppObject *)v18,
              (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
          }
        }
      }
      v20 = v21[6];
    }
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)v17;
}


void __fastcall PurchaseLogicIOS__SendPurchaseAction(
        PurchaseLogicIOS_o *this,
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
  System_Collections_Generic_List_string__o *AllPurchasedProductIdList; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B15BA5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, paymentProductId, transactionId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v10, v11);
    byte_4B15BA5 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)paymentProductId);
  if ( !AllPurchasedProductIdList )
    sub_1BCAA3C(0LL, v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)AllPurchasedProductIdList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v17.fields._current;
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)v17.fields._current, 0LL);
    if ( !IsNullOrEmpty )
      PurchaseLogic__SendPurchaseAction(
        (PurchaseLogic_o *)IsNullOrEmpty,
        (System_String_o *)current,
        transactionId,
        v16);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall PurchaseLogicIOS__ShowNativeAlert(
        PurchaseLogicIOS_o *this,
        System_String_o *titleText,
        System_String_o *messageText,
        System_String_o *okActionTitle,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogicIOS__ShowPurchaseFailedNotification(
        PurchaseLogicIOS_o *this,
        int32_t failureReason,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_4B15BA2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9747/*"OK"*/, *(_QWORD *)&failureReason, method);
    sub_1BCA7E0(&StringLiteral_25647/*"購入処理中に問題が発生しました"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_25645/*"購入できません"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_25646/*"購入処理中です、完了までお待ち下さい"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_2428/*"App内の購入が機能制限されています"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_25619/*"指定されたプロダクトデータが取得できませんでした"*/, v11, v12);
    byte_4B15BA2 = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogicIOS__UpdateMonthlyPurchasePrice(
        PurchaseLogicIOS_o *this,
        int32_t bankShopId,
        const MethodInfo *method)
{
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
  PurchaseLogicIOS___c_c *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x19
  System_Func_object__int__o *_9__7_0; // x21
  Il2CppObject *v22; // x22
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v30; // x0
  __int64 v31; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v33; // x19
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v37; // x1
  __int64 v38; // x19
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  int32_t v47; // w1
  const MethodInfo *v48; // x2
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0

  if ( (byte_4B15BA4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___,
      *(_QWORD *)&bankShopId,
      method);
    sub_1BCA7E0(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v5, v6);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_int__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_int__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__, v15, v16);
    sub_1BCA7E0(&PurchaseLogicIOS___c_TypeInfo, v17, v18);
    byte_4B15BA4 = 1;
  }
  v19 = PurchaseLogicIOS___c_TypeInfo;
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._purchaseResultArray;
  if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo, *(_QWORD *)&bankShopId);
    v19 = PurchaseLogicIOS___c_TypeInfo;
  }
  _9__7_0 = (System_Func_object__int__o *)v19->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19, *(_QWORD *)&bankShopId);
      v19 = PurchaseLogicIOS___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo,
                                              *(_QWORD *)&bankShopId,
                                              method,
                                              v3);
    System_Func_object__int____ctor(_9__7_0, v22, Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__, 0LL);
    static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__7_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v24, v25, v26, v27, v28, v29);
  }
  v30 = System_Linq_Enumerable__Select_object__int_(
          purchaseResultArray,
          (System_Func_TSource__TResult__o *)_9__7_0,
          (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
  if ( !v30 )
    sub_1BCAA3C(0LL, v31);
  klass = v30->klass;
  v33 = v30;
  v34 = *(unsigned __int16 *)(&v30->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v30->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v34;
      p_offset += 4;
      if ( !v34 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1C1C7C0(v30, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v38 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v33,
          *(_QWORD *)(p_method + 8));
  if ( !v38 )
    sub_1BCAA3C(0LL, v37);
  while ( 1 )
  {
    v39 = *(_QWORD *)v38;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_21;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_21:
      v42 = sub_1C1C7C0(v38, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8)) & 1) == 0 )
      break;
    v43 = *(_QWORD *)v38;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v45 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_28;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_28:
      v46 = sub_1C1C7C0(v38, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v38, *(_QWORD *)(v46 + 8));
    PurchaseLogic__UpdateMonthlyPurchasePrice((PurchaseLogic_o *)this, v47, v48);
  }
  v49 = *(_QWORD *)v38;
  v50 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
  {
    v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_35;
    }
    v52 = v49 + 16LL * *v51 + 312;
  }
  else
  {
LABEL_35:
    v52 = sub_1C1C7C0(v38, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v52)(v38, *(_QWORD *)(v52 + 8));
}


void __fastcall PurchaseLogicIOS___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B15BAC & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseLogicIOS___c_TypeInfo, v1, v2);
    byte_4B15BAC = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(PurchaseLogicIOS___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  PurchaseLogicIOS___c_TypeInfo->static_fields->__9 = (struct PurchaseLogicIOS___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)PurchaseLogicIOS___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall PurchaseLogicIOS___c___ctor(PurchaseLogicIOS___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogicIOS___c___CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0(
        PurchaseLogicIOS___c_o *this,
        UnityEngine_Purchasing_Security_AppleInAppPurchaseReceipt_o *r,
        const MethodInfo *method)
{
  uint64_t dateData; // x20
  uint64_t v5; // x19
  System_DateTime_o v7; // 0:x0.8
  System_DateTime_o v8; // 0:x1.8

  if ( (byte_4B15BAD & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c_o *)sub_1BCA7E0(&System_DateTime_TypeInfo, r, method);
    byte_4B15BAD = 1;
  }
  if ( !r )
    sub_1BCAA3C(this, r);
  dateData = r->fields._cancellationDate_k__BackingField.fields._dateData;
  v5 = r->fields._purchaseDate_k__BackingField.fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, r);
  v7.fields._dateData = dateData;
  v8.fields._dateData = v5;
  return System_DateTime__op_GreaterThan(v7, v8, 0LL);
}


bool __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return !x->fields.isCommitedAlready;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_1(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.freeStoneNum;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_2(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.chargeStoneNum;
}


bool __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_3(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.isSentPresentBox;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAllPurchasedProductIdList_b__10_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.purchasedBankShopId;
}


int32_t __fastcall PurchaseLogicIOS___c___UpdateMonthlyPurchasePrice_b__7_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.purchasedBankShopId;
}


void __fastcall PurchaseLogicIOS___c__DisplayClass12_0___ctor(
        PurchaseLogicIOS___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogicIOS___c__DisplayClass12_0___GetAddedStoneNum_b__4(
        PurchaseLogicIOS___c__DisplayClass12_0_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.purchasedBankShopId != this->fields.bankShopId;
}


void __fastcall PurchaseLogicIOS___c__DisplayClass14_0___ctor(
        PurchaseLogicIOS___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogicIOS___c__DisplayClass14_0___OnDeferred_b__0(
        PurchaseLogicIOS___c__DisplayClass14_0_o *this,
        BankShopEntity_o *bankShop,
        const MethodInfo *method)
{
  if ( !bankShop )
    sub_1BCAA3C(this, 0LL);
  return System_String__Equals_62410340(this->fields.productId, bankShop->fields.googleShopId, 4, 0LL);
}


void __fastcall PurchaseLogicIOS___c__DisplayClass2_0___ctor(
        PurchaseLogicIOS___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogicIOS___c__DisplayClass2_0___CheckIfReceiptShouldBeSentInIOSOldStyle_b__1(
        PurchaseLogicIOS___c__DisplayClass2_0_o *this,
        UnityEngine_Purchasing_Security_AppleInAppPurchaseReceipt_o *r,
        const MethodInfo *method)
{
  PurchaseLogicIOS___c__DisplayClass2_0_o *v4; // x20
  uint64_t dateData; // x21
  uint64_t v6; // x22
  System_DateTime_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x1.8

  v4 = this;
  if ( (byte_4B15BAE & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c__DisplayClass2_0_o *)sub_1BCA7E0(&System_DateTime_TypeInfo, r, method);
    byte_4B15BAE = 1;
  }
  if ( !r )
    sub_1BCAA3C(this, r);
  dateData = r->fields._cancellationDate_k__BackingField.fields._dateData;
  v6 = r->fields._purchaseDate_k__BackingField.fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, r);
  v8.fields._dateData = dateData;
  v9.fields._dateData = v6;
  return System_DateTime__op_LessThanOrEqual(v8, v9, 0LL)
      && System_String__op_Equality(
           r->fields._transactionID_k__BackingField,
           v4->fields.transactionIdInOldStyleReceipt,
           0LL);
}