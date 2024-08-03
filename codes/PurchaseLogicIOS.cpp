bool __fastcall PurchaseLogicIOS__CheckIfReceiptShouldBeSentInIOSOldStyle(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Security_AppleReceipt_o *receipt,
        System_String_o *transactionIdInOldStyleReceipt,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_IEnumerable_TSource__o *inAppPurchaseReceipts; // x21
  void *monitor; // x8
  PurchaseLogicIOS___c_c *v20; // x0
  System_Func_object__bool__o *_9__2_0; // x22
  Il2CppObject *v22; // x23
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  bool v26; // w0
  System_Object_array *v27; // x19
  bool v28; // w21
  __int64 v29; // x1
  __int64 v30; // x2
  System_Func_object__bool__o *v31; // x22
  bool v32; // w0

  if ( (byte_49FBD33 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_AppleInAppPurchaseReceipt___, receipt);
    sub_1B640C8(&Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___, v6);
    sub_1B640C8(&System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo, v7);
    sub_1B640C8(&Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__, v8);
    sub_1B640C8(&Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__, v9);
    sub_1B640C8(&PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo, v10);
    sub_1B640C8(&PurchaseLogicIOS___c_TypeInfo, v11);
    byte_49FBD33 = 1;
  }
  v12 = sub_1B64314(PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo, receipt, transactionIdInOldStyleReceipt);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1B64324(v13);
  *(_QWORD *)(v12 + 16) = transactionIdInOldStyleReceipt;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)transactionIdInOldStyleReceipt, v14, v15);
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
  v20 = PurchaseLogicIOS___c_TypeInfo;
  if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
    v20 = PurchaseLogicIOS___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__bool__o *)v20->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = PurchaseLogicIOS___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__2_0 = (System_Func_object__bool__o *)sub_1B64314(
                                               System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo,
                                               v16,
                                               v17);
    System_Func_object__bool____ctor(
      _9__2_0,
      v22,
      Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__,
      0LL);
    static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_AppleInAppPurchaseReceipt__bool__o *)_9__2_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v24, v25);
  }
  v26 = System_Linq_Enumerable__All_object_(
          inAppPurchaseReceipts,
          (System_Func_TSource__bool__o *)_9__2_0,
          (const MethodInfo_2E45664 *)Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___);
  v27 = (System_Object_array *)receipt->fields.inAppPurchaseReceipts;
  v28 = v26;
  v31 = (System_Func_object__bool__o *)sub_1B64314(System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo, v29, v30);
  System_Func_object__bool____ctor(
    v31,
    (Il2CppObject *)v12,
    Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__,
    0LL);
  v32 = BasicHelper__Any_object__48384284(
          v27,
          (System_Func_T__bool__o *)v31,
          (const MethodInfo_2E2491C *)Method_BasicHelper_Any_AppleInAppPurchaseReceipt___);
  return v28 || !v32;
}


void __fastcall PurchaseLogicIOS__ConfirmPurchase(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_string__o *AllPurchasedProductIdList; // x0
  _BOOL8 v10; // x0
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x21
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  Il2CppObject *current; // x20
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Purchasing_ProductCollection_o *v17; // x0
  UnityEngine_Purchasing_Product_o *v18; // x1
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FBD3A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, product);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_1B640C8(&UnityEngine_Purchasing_IStoreController_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    sub_1B640C8(&PurchaseLogic_TypeInfo, v8);
    byte_49FBD3A = 1;
  }
  memset(&v21, 0, sizeof(v21));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)product);
  if ( !AllPurchasedProductIdList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)AllPurchasedProductIdList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v10 )
      break;
    storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
    if ( !storeController )
      sub_1B64324(v10);
    klass = storeController->klass;
    current = v21.fields._current;
    v14 = *(unsigned __int16 *)(&storeController->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&storeController->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((UnityEngine_Purchasing_IStoreController_c **)p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BB60A8(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
    }
    v17 = (UnityEngine_Purchasing_ProductCollection_o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))p_method)(
                                                          storeController,
                                                          *(_QWORD *)(p_method + 8));
    if ( !v17 )
      sub_1B64324(0LL);
    v18 = UnityEngine_Purchasing_ProductCollection__WithID(v17, (System_String_o *)current, 0LL);
    if ( v18 )
      PurchaseLogic__ConfirmPurchase((PurchaseLogic_o *)this, v18, v19);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogicIOS__ConvertBankShopIdToProductId(
        PurchaseLogicIOS_o *this,
        System_Collections_Generic_IEnumerable_int__o *bankShopIDs,
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
  Il2CppObject *Instance; // x0
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x21
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x8
  __int64 v23; // x20
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  int32_t v32; // w1
  Il2CppObject *Entity; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *v36; // x1
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0

  if ( (byte_49FBD3C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_BankShopMaster___, bankShopIDs);
    sub_1B640C8(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_int__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_int__TypeInfo, v8);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&StringLiteral_16990/*"bankShopMaster is null"*/, v14);
    byte_49FBD3C = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       bankShopIDs,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( logErrorOutputActionSampledByRatio )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, float))logErrorOutputActionSampledByRatio->fields.m_target)(
        logErrorOutputActionSampledByRatio->fields.original_method_info,
        StringLiteral_16990/*"bankShopMaster is null"*/,
        *(_QWORD *)&logErrorOutputActionSampledByRatio->fields.extra_arg,
        0.01);
      return (System_Collections_Generic_List_string__o *)v15;
    }
LABEL_44:
    sub_1B64324(Instance);
  }
  if ( !bankShopIDs )
    goto LABEL_44;
  klass = bankShopIDs->klass;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v19 = *(unsigned __int16 *)(&bankShopIDs->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&bankShopIDs->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB60A8(bankShopIDs, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          bankShopIDs,
          *(_QWORD *)(p_method + 8));
  if ( !v23 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v24 = *(_QWORD *)v23;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_19;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_19:
      v27 = sub_1BB60A8(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v23;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v30 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_26;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_26:
      v31 = sub_1BB60A8(v23, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
    Entity = DataMasterBase_object__object__int___GetEntity(
               v18,
               v32,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    if ( Entity )
    {
      if ( !v15 )
        sub_1B64324(Entity);
      v36 = (Il2CppObject *)Entity[2].klass;
      items = v15->fields._items;
      v38 = Method_System_Collections_Generic_List_string__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1B64324(Entity);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          v36,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v36;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v36, v34, v35);
      }
    }
  }
  v41 = *(_QWORD *)v23;
  v42 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
  {
    v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_38;
    }
    v44 = v41 + 16LL * *v43 + 312;
  }
  else
  {
LABEL_38:
    v44 = sub_1BB60A8(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v44)(v23, *(_QWORD *)(v44 + 8));
  return (System_Collections_Generic_List_string__o *)v15;
}


void __fastcall PurchaseLogicIOS__DebugLog(PurchaseLogicIOS_o *this, System_String_o *log, const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x19

  if ( (byte_49FBD37 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Debug_TypeInfo, log);
    sub_1B640C8(&StringLiteral_15002/*"UnityIAP:"*/, v4);
    byte_49FBD37 = 1;
  }
  v5 = (Il2CppObject *)System_String__Concat_61375396((System_String_o *)StringLiteral_15002/*"UnityIAP:"*/, log, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log(v5, 0LL);
}


PurchaseLogic_ReceiptContents_o *__fastcall PurchaseLogicIOS__ExtractReceiptContents(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  PurchaseLogicIOS_o *v4; // x19
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
  System_String_o *receipt_k__BackingField; // x22
  __int64 v20; // x20
  const MethodInfo *v21; // x1
  PurchaseLogicIOS_c *klass; // x9
  __int64 methodPtr_low; // x10
  Il2CppObject *v24; // x25
  struct System_Action_string__o *logErrorOutputAction; // x8
  UnityEngine_Purchasing_ConfigurationBuilder_o *v26; // x0
  Il2CppObject *v27; // x0
  Il2CppObject *v28; // x22
  Il2CppClass *v29; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_String_o *v33; // x22
  System_Byte_array *v34; // x22
  System_Byte_array *v35; // x24
  __int64 v36; // x1
  __int64 v37; // x2
  UnityEngine_Purchasing_Security_AppleValidator_o *v38; // x23
  __int64 v39; // x0
  PurchaseLogic_o *v40; // x0
  const MethodInfo *v41; // x1
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  Il2CppObject *id_k__BackingField; // x23
  UnityEngine_Purchasing_Security_AppleReceipt_o *v44; // x22
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x23
  UnityEngine_Purchasing_IExtensionProvider_c *v49; // x8
  void *v50; // x24
  __int64 v51; // x9
  __int64 v52; // x1
  __int64 v53; // x2
  int32_t *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x23
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  System_String_o *v63; // x21
  const MethodInfo *v64; // x2
  System_String_o *TransactionIdFromOldStyleReceipt; // x23
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_49FBD32 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Purchasing_Security_AppleValidator_TypeInfo, product);
    sub_1B640C8(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___, v5);
    sub_1B640C8(&System_Convert_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v7);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Purchasing_IAppleConfiguration_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v10);
    sub_1B640C8(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v12);
    sub_1B640C8(&PurchaseLogic_TypeInfo, v13);
    sub_1B640C8(&PurchaseLogic_ReceiptContents_TypeInfo, v14);
    sub_1B640C8(&string_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_10537/*"Payload"*/, v16);
    sub_1B640C8(&StringLiteral_11107/*"RawReceipt Decode Error. "*/, v17);
    this = (PurchaseLogicIOS_o *)sub_1B640C8(&StringLiteral_1/*""*/, v18);
    byte_49FBD32 = 1;
  }
  value = 0LL;
  if ( !product )
    goto LABEL_59;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v20 = sub_1B64314(PurchaseLogic_ReceiptContents_TypeInfo, product, method);
  PurchaseLogic_ReceiptContents___ctor((PurchaseLogic_ReceiptContents_o *)v20, v21);
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
  v24 = (Il2CppObject *)StringLiteral_1/*""*/;
  if ( (System_Collections_Generic_Dictionary_string__object__c *)klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    this = 0LL;
  this = (PurchaseLogicIOS_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                                 (Il2CppObject *)StringLiteral_10537/*"Payload"*/,
                                 &value,
                                 (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( value )
    {
      if ( (System_String_c *)value->klass == string_TypeInfo )
        v24 = value;
      else
        v24 = 0LL;
    }
    else
    {
      v24 = 0LL;
    }
  }
  else
  {
    logErrorOutputAction = v4->fields._logErrorOutputAction;
    if ( !logErrorOutputAction )
      goto LABEL_59;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logErrorOutputAction->fields.m_target)(
      logErrorOutputAction->fields.original_method_info,
      StringLiteral_11107/*"RawReceipt Decode Error. "*/,
      *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
  }
  v26 = (UnityEngine_Purchasing_ConfigurationBuilder_o *)((__int64 (__fastcall *)(PurchaseLogicIOS_o *, Il2CppMethodPointer))v4->klass->vtable._10_GetConfigurationBuilder.method)(
                                                           v4,
                                                           v4->klass->vtable._11_SetObfuscatedAccountId.methodPtr);
  if ( !v26 )
    sub_1B64324(0LL);
  v27 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
          v26,
          (const MethodInfo_2E318D4 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___);
  v28 = v27;
  if ( !v27 )
    sub_1B64324(0LL);
  v29 = v27->klass;
  v30 = *(unsigned __int16 *)(&v27->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v27->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v29->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IAppleConfiguration_c **)p_offset - 1) != UnityEngine_Purchasing_IAppleConfiguration_TypeInfo )
    {
      --v30;
      p_offset += 4;
      if ( !v30 )
        goto LABEL_23;
    }
    p_method = (__int64)&v29->vtable[*p_offset].method;
  }
  else
  {
LABEL_23:
    p_method = sub_1BB60A8(v27, UnityEngine_Purchasing_IAppleConfiguration_TypeInfo, 0LL);
  }
  v33 = (System_String_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(v28, *(_QWORD *)(p_method + 8));
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v34 = System_Convert__FromBase64String(v33, 0LL);
  v35 = UnityEngine_Purchasing_Security_AppleTangle__Data(0LL);
  v38 = (UnityEngine_Purchasing_Security_AppleValidator_o *)sub_1B64314(
                                                              UnityEngine_Purchasing_Security_AppleValidator_TypeInfo,
                                                              v36,
                                                              v37);
  UnityEngine_Purchasing_Security_AppleValidator___ctor(v38, v35, 0LL);
  if ( !v38 )
    sub_1B64324(v39);
  v40 = (PurchaseLogic_o *)UnityEngine_Purchasing_Security_AppleValidator__Validate(v38, v34, 0LL);
  definition_k__BackingField = product->fields._definition_k__BackingField;
  if ( !definition_k__BackingField )
    sub_1B64324(v40);
  id_k__BackingField = (Il2CppObject *)definition_k__BackingField->fields._id_k__BackingField;
  v44 = (UnityEngine_Purchasing_Security_AppleReceipt_o *)v40;
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(v40, v41);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
    sub_1B64324(0LL);
  this = (PurchaseLogicIOS_o *)System_Collections_Generic_List_object___Contains(
                                 (System_Collections_Generic_List_object__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
                                 id_k__BackingField,
                                 (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_57;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_1B64324(this);
  v49 = storeExtensionProvider->klass;
  v50 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v51 = *(unsigned __int16 *)(&storeExtensionProvider->klass->_2.bitflags2 + 3);
  v52 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 4);
  v53 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 40);
  if ( *(_WORD *)(&storeExtensionProvider->klass->_2.bitflags2 + 3) )
  {
    v54 = &v49->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)v54 - 1) != v52 )
    {
      --v51;
      v54 += 4;
      if ( !v51 )
        goto LABEL_36;
    }
    v55 = (__int64)&v49->vtable[*v54 + (int)v53].method;
  }
  else
  {
LABEL_36:
    v55 = sub_1BB60A8(storeExtensionProvider, v52, v53);
  }
  v56 = sub_1B641FC(*(_QWORD *)(v55 + 8), v50);
  v57 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *))(v56 + 8))(storeExtensionProvider);
  v58 = v57;
  if ( !v57 )
    sub_1B64324(0LL);
  v59 = *(_QWORD *)v57;
  v60 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
  {
    v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
    while ( *((UnityEngine_Purchasing_IAppleExtensions_c **)v61 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      --v60;
      v61 += 4;
      if ( !v60 )
        goto LABEL_43;
    }
    v62 = v59 + 16LL * *v61 + 312;
  }
  else
  {
LABEL_43:
    v62 = sub_1BB60A8(v57, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 0LL);
  }
  v63 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, UnityEngine_Purchasing_Product_o *, _QWORD))v62)(
                             v58,
                             product,
                             *(_QWORD *)(v62 + 8));
  TransactionIdFromOldStyleReceipt = PurchaseLogicIOS__GetTransactionIdFromOldStyleReceipt(v4, v63, v64);
  this = (PurchaseLogicIOS_o *)System_String__IsNullOrEmpty(TransactionIdFromOldStyleReceipt, 0LL);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (PurchaseLogicIOS_o *)PurchaseLogicIOS__CheckIfReceiptShouldBeSentInIOSOldStyle(
                                       this,
                                       v44,
                                       TransactionIdFromOldStyleReceipt,
                                       v47),
        ((unsigned __int8)this & 1) == 0) )
  {
LABEL_57:
    v63 = (System_String_o *)v24;
    if ( v20 )
      goto LABEL_58;
LABEL_59:
    sub_1B64324(this);
  }
  if ( !v20 )
    sub_1B64324(this);
  *(_QWORD *)(v20 + 56) = TransactionIdFromOldStyleReceipt;
  *(_BYTE *)(v20 + 48) = 1;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)(v20 + 56),
    (int32_t)TransactionIdFromOldStyleReceipt,
    v46,
    (int32_t)v47);
LABEL_58:
  *(_QWORD *)(v20 + 32) = v63;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)v63, v46, (int32_t)v47);
  return (PurchaseLogic_ReceiptContents_o *)v20;
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
  __int64 v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  PurchaseLogicIOS___c_c *v27; // x0
  System_Func_object__bool__o *_9__12_0; // x25
  Il2CppObject *v29; // x26
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  PurchaseLogicIOS___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x23
  System_Func_object__int__o *_9__12_1; // x25
  Il2CppObject *v39; // x26
  struct PurchaseLogicIOS___c_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_Collections_Generic_IEnumerable_int__o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  PurchaseLogicIOS___c_c *v46; // x0
  System_Func_object__int__o *_9__12_2; // x24
  Il2CppObject *v48; // x25
  struct PurchaseLogicIOS___c_StaticFields *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_Collections_Generic_IEnumerable_int__o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  PurchaseLogicIOS___c_c *v55; // x0
  System_Func_object__bool__o *_9__12_3; // x22
  Il2CppObject *v57; // x24
  struct PurchaseLogicIOS___c_StaticFields *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  Il2CppObject *object; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  System_Func_object__bool__o *v64; // x20
  int32_t v65; // w8

  if ( (byte_49FBD3D & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___,
      purchaseResultArray);
    sub_1B640C8(&Method_System_Linq_Enumerable_First_PurchaseByBank_UnityIap_Request_PurchaseResult___, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___, v13);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___, v14);
    sub_1B640C8(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v15);
    sub_1B640C8(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v16);
    sub_1B640C8(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__, v17);
    sub_1B640C8(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__, v18);
    sub_1B640C8(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__, v19);
    sub_1B640C8(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_3__, v20);
    sub_1B640C8(&Method_PurchaseLogicIOS___c__DisplayClass12_0__GetAddedStoneNum_b__4__, v21);
    sub_1B640C8(&PurchaseLogicIOS___c__DisplayClass12_0_TypeInfo, v22);
    sub_1B640C8(&PurchaseLogicIOS___c_TypeInfo, v23);
    byte_49FBD3D = 1;
  }
  *shopId = 0;
  *chargeStoneNum = 0;
  *freeStoneNum = 0;
  *isSentPresentBox = 0;
  if ( purchaseResultArray )
  {
    v24 = sub_1B64314(PurchaseLogicIOS___c__DisplayClass12_0_TypeInfo, purchaseResultArray, freeStoneNum);
    System_Object___ctor((Il2CppObject *)v24, 0LL);
    v27 = PurchaseLogicIOS___c_TypeInfo;
    if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v27 = PurchaseLogicIOS___c_TypeInfo;
    }
    _9__12_0 = (System_Func_object__bool__o *)v27->static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = PurchaseLogicIOS___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v27->static_fields->__9;
      _9__12_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                  System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo,
                                                  v25,
                                                  v26);
      System_Func_object__bool____ctor(_9__12_0, v29, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__, 0LL);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      static_fields->__9__12_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__12_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v31, v32);
    }
    v33 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
            (System_Func_TSource__bool__o *)_9__12_0,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    v36 = PurchaseLogicIOS___c_TypeInfo;
    v37 = v33;
    if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v36 = PurchaseLogicIOS___c_TypeInfo;
    }
    _9__12_1 = (System_Func_object__int__o *)v36->static_fields->__9__12_1;
    if ( !_9__12_1 )
    {
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        v36 = PurchaseLogicIOS___c_TypeInfo;
      }
      v39 = (Il2CppObject *)v36->static_fields->__9;
      _9__12_1 = (System_Func_object__int__o *)sub_1B64314(
                                                 System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo,
                                                 v34,
                                                 v35);
      System_Func_object__int____ctor(_9__12_1, v39, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__, 0LL);
      v40 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v40->__9__12_1 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v40->__9__12_1, (int32_t)_9__12_1, v41, v42);
    }
    v43 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                             v37,
                                                             (System_Func_TSource__TResult__o *)_9__12_1,
                                                             (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    *freeStoneNum = System_Linq_Enumerable__Sum(v43, 0LL);
    v46 = PurchaseLogicIOS___c_TypeInfo;
    if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v46 = PurchaseLogicIOS___c_TypeInfo;
    }
    _9__12_2 = (System_Func_object__int__o *)v46->static_fields->__9__12_2;
    if ( !_9__12_2 )
    {
      if ( !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46);
        v46 = PurchaseLogicIOS___c_TypeInfo;
      }
      v48 = (Il2CppObject *)v46->static_fields->__9;
      _9__12_2 = (System_Func_object__int__o *)sub_1B64314(
                                                 System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo,
                                                 v44,
                                                 v45);
      System_Func_object__int____ctor(_9__12_2, v48, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__, 0LL);
      v49 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v49->__9__12_2 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_2;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v49->__9__12_2, (int32_t)_9__12_2, v50, v51);
    }
    v52 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                             v37,
                                                             (System_Func_TSource__TResult__o *)_9__12_2,
                                                             (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    *chargeStoneNum = System_Linq_Enumerable__Sum(v52, 0LL);
    v55 = PurchaseLogicIOS___c_TypeInfo;
    if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v55 = PurchaseLogicIOS___c_TypeInfo;
    }
    _9__12_3 = (System_Func_object__bool__o *)v55->static_fields->__9__12_3;
    if ( !_9__12_3 )
    {
      if ( !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55);
        v55 = PurchaseLogicIOS___c_TypeInfo;
      }
      v57 = (Il2CppObject *)v55->static_fields->__9;
      _9__12_3 = (System_Func_object__bool__o *)sub_1B64314(
                                                  System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo,
                                                  v53,
                                                  v54);
      System_Func_object__bool____ctor(_9__12_3, v57, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_3__, 0LL);
      v58 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v58->__9__12_3 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__12_3;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v58->__9__12_3, (int32_t)_9__12_3, v59, v60);
    }
    *isSentPresentBox = System_Linq_Enumerable__Any_object__48531816(
                          v37,
                          (System_Func_TSource__bool__o *)_9__12_3,
                          (const MethodInfo_2E48968 *)Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    object = System_Linq_Enumerable__First_object_(
               v37,
               (const MethodInfo_2E5AA68 *)Method_System_Linq_Enumerable_First_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    if ( !object || !v24 )
      sub_1B64324(object);
    *(_DWORD *)(v24 + 16) = object[1].klass;
    v64 = (System_Func_object__bool__o *)sub_1B64314(
                                           System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo,
                                           v62,
                                           v63);
    System_Func_object__bool____ctor(
      v64,
      (Il2CppObject *)v24,
      Method_PurchaseLogicIOS___c__DisplayClass12_0__GetAddedStoneNum_b__4__,
      0LL);
    if ( System_Linq_Enumerable__Any_object__48531816(
           v37,
           (System_Func_TSource__bool__o *)v64,
           (const MethodInfo_2E48968 *)Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___) )
    {
      v65 = 0;
    }
    else
    {
      v65 = *(_DWORD *)(v24 + 16);
    }
    *shopId = v65;
  }
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogicIOS__GetAllPurchasedProductIdList(
        PurchaseLogicIOS_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PurchaseLogicIOS_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x20
  PurchaseLogicIOS___c_c *v11; // x0
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v13; // x22
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_int__o *v17; // x1
  const MethodInfo *v18; // x2
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x8
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x19

  v3 = this;
  if ( (byte_49FBD3B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___, method);
    sub_1B640C8(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_1B640C8(&Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__, v7);
    sub_1B640C8(&PurchaseLogicIOS___c_TypeInfo, v8);
    this = (PurchaseLogicIOS_o *)sub_1B640C8(&StringLiteral_16500/*"_purchaseResultArray is null"*/, v9);
    byte_49FBD3B = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields._purchaseResultArray;
  if ( purchaseResultArray )
  {
    v11 = PurchaseLogicIOS___c_TypeInfo;
    if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v11 = PurchaseLogicIOS___c_TypeInfo;
    }
    _9__10_0 = (System_Func_object__int__o *)v11->static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = PurchaseLogicIOS___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__10_0 = (System_Func_object__int__o *)sub_1B64314(
                                                 System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo,
                                                 method,
                                                 v2);
      System_Func_object__int____ctor(
        _9__10_0,
        v13,
        Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__,
        0LL);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__10_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v15, v16);
    }
    v17 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                             purchaseResultArray,
                                                             (System_Func_TSource__TResult__o *)_9__10_0,
                                                             (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    return PurchaseLogicIOS__ConvertBankShopIdToProductId(v3, v17, v18);
  }
  else
  {
    logErrorOutputActionSampledByRatio = v3->fields._logErrorOutputActionSampledByRatio;
    if ( !logErrorOutputActionSampledByRatio )
      sub_1B64324(this);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, float))logErrorOutputActionSampledByRatio->fields.m_target)(
      logErrorOutputActionSampledByRatio->fields.original_method_info,
      StringLiteral_16500/*"_purchaseResultArray is null"*/,
      *(_QWORD *)&logErrorOutputActionSampledByRatio->fields.extra_arg,
      0.01);
    v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_string__TypeInfo,
                                                         v21,
                                                         v22);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v23;
  }
}


System_String_o *__fastcall PurchaseLogicIOS__GetTransactionIdFromOldStyleReceipt(
        PurchaseLogicIOS_o *this,
        System_String_o *iOSOldStylePayloadStr,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Byte_array *v8; // x21
  System_Text_Encoding_o *UTF8; // x0
  System_String_o *v10; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_Dictionary_string__object__o *v12; // x0
  Il2CppObject *v13; // x0
  System_Byte_array *v14; // x21
  System_Text_Encoding_o *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x1
  System_Collections_Generic_Dictionary_string__object__o *v18; // x0
  System_String_o *v21; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FBD34 & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, iOSOldStylePayloadStr);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    sub_1B640C8(&string_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_22557/*"purchase-info"*/, v6);
    sub_1B640C8(&StringLiteral_23936/*"transaction-id"*/, v7);
    byte_49FBD34 = 1;
  }
  v21 = 0LL;
  value = 0LL;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v8 = System_Convert__FromBase64String(iOSOldStylePayloadStr, 0LL);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1B64324(0LL);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, Il2CppMethodPointer))UTF8->klass->vtable._36_GetString.method)(
                             UTF8,
                             v8,
                             UTF8->klass->vtable._37_GetString.methodPtr);
  v12 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v10, v11);
  if ( !v12 )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)v12,
    (Il2CppObject *)StringLiteral_22557/*"purchase-info"*/,
    &value,
    (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( value )
  {
    if ( (System_String_c *)value->klass == string_TypeInfo )
      v13 = value;
    else
      v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  v14 = System_Convert__FromBase64String((System_String_o *)v13, 0LL);
  v15 = System_Text_Encoding__get_UTF8(0LL);
  if ( !v15 )
    sub_1B64324(0LL);
  v16 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, Il2CppMethodPointer))v15->klass->vtable._36_GetString.method)(
                             v15,
                             v14,
                             v15->klass->vtable._37_GetString.methodPtr);
  v18 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v16, v17);
  if ( !v18 )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)v18,
    (Il2CppObject *)StringLiteral_23936/*"transaction-id"*/,
    (Il2CppObject **)&v21,
    (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( !v21 )
    return 0LL;
  if ( v21->klass == string_TypeInfo )
    return v21;
  return 0LL;
}


bool __fastcall PurchaseLogicIOS__IsDeferredPurchaseExists(PurchaseLogicIOS_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0

  if ( (byte_49FBD3F & 1) == 0 )
  {
    this = (PurchaseLogicIOS_o *)sub_1B640C8(&Method_System_Linq_Enumerable_Any_string___, method);
    byte_49FBD3F = 1;
  }
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)this,
                                                method);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
           (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_string___);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  struct System_String_o *id_k__BackingField; // x1
  System_String_o **v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  PurchaseBehaviour_c *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *BankShopEntityCollection; // x22
  System_Func_object__bool__o *v20; // x23
  Il2CppObject *v21; // x0
  const MethodInfo *v22; // x2
  int32_t klass; // w21
  const MethodInfo *v24; // x7

  if ( (byte_49FBD3E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___, product);
    sub_1B640C8(&System_Func_BankShopEntity__bool__TypeInfo, v5);
    sub_1B640C8(&PurchaseBehaviour_TypeInfo, v6);
    sub_1B640C8(&Method_PurchaseLogicIOS___c__DisplayClass14_0__OnDeferred_b__0__, v7);
    sub_1B640C8(&PurchaseLogicIOS___c__DisplayClass14_0_TypeInfo, v8);
    byte_49FBD3E = 1;
  }
  v9 = sub_1B64314(PurchaseLogicIOS___c__DisplayClass14_0_TypeInfo, product, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !product || (definition_k__BackingField = product->fields._definition_k__BackingField) == 0LL || !v9 )
    sub_1B64324(v10);
  id_k__BackingField = definition_k__BackingField->fields._id_k__BackingField;
  *(_QWORD *)(v9 + 16) = id_k__BackingField;
  v15 = (System_String_o **)(v9 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)id_k__BackingField, v11, v12);
  v18 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v18 = PurchaseBehaviour_TypeInfo;
  }
  BankShopEntityCollection = (System_Collections_Generic_IEnumerable_TSource__o *)v18->static_fields->BankShopEntityCollection;
  v20 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BankShopEntity__bool__TypeInfo, v16, v17);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_PurchaseLogicIOS___c__DisplayClass14_0__OnDeferred_b__0__,
    0LL);
  v21 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
          BankShopEntityCollection,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
  if ( v21 )
    klass = (int32_t)v21[1].klass;
  else
    klass = 0;
  PurchaseLogic__AddDeferredPurchaseProductIdsToPlayerPrefs((PurchaseLogic_o *)v21, *v15, v22);
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear((PurchaseLogic_o *)this, 5, 0, 0, 0, klass, 0, v24);
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall PurchaseLogicIOS__ParseIOSOldStyleReceipt(
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_object__object__o *v10; // x19
  void *v11; // x0
  __int64 v12; // x1
  int v13; // w8
  _DWORD *v14; // x20
  int i; // w23
  char *v16; // x8
  System_String_o *v17; // x21
  _DWORD *v18; // x21
  Il2CppObject *v19; // x22

  if ( (byte_49FBD35 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_1B640C8(&StringLiteral_1854/*"="*/, v6);
    sub_1B640C8(&StringLiteral_1581/*";"*/, v7);
    sub_1B640C8(&StringLiteral_373/*"\""*/, v8);
    sub_1B640C8(&StringLiteral_1/*""*/, v9);
    byte_49FBD35 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                     method,
                                                                     v2);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v10,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !str || (v11 = System_String__Split(str, 0xAu, 0, 0LL)) == 0LL )
LABEL_22:
    sub_1B64324(v11);
  v13 = *((_DWORD *)v11 + 6);
  v14 = v11;
  if ( v13 >= 1 )
  {
    for ( i = 0; i < v13; ++i )
    {
      if ( i >= (unsigned int)v13 )
LABEL_23:
        sub_1B6432C(v11, v12);
      v16 = (char *)&v14[2 * i];
      v17 = (System_String_o *)*((_QWORD *)v16 + 4);
      if ( !v17 )
        goto LABEL_22;
      v11 = (void *)System_String__Contains(*((System_String_o **)v16 + 4), (System_String_o *)StringLiteral_1854/*"="*/, 0LL);
      if ( ((unsigned __int8)v11 & 1) != 0 )
      {
        v11 = System_String__Replace_61395016(
                v17,
                (System_String_o *)StringLiteral_1581/*";"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( !v11 )
          goto LABEL_22;
        v11 = System_String__Split((System_String_o *)v11, 0x3Du, 0, 0LL);
        if ( v11 )
        {
          v18 = v11;
          if ( *((int *)v11 + 6) >= 2 )
          {
            v11 = (void *)*((_QWORD *)v11 + 4);
            if ( !v11 )
              goto LABEL_22;
            v11 = System_String__Replace_61395016(
                    (System_String_o *)v11,
                    (System_String_o *)StringLiteral_373/*"\""*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
            if ( !v11 )
              goto LABEL_22;
            v11 = System_String__Trim((System_String_o *)v11, 0LL);
            if ( v18[6] <= 1u )
              goto LABEL_23;
            v19 = (Il2CppObject *)v11;
            v11 = (void *)*((_QWORD *)v18 + 5);
            if ( !v11 )
              goto LABEL_22;
            v11 = System_String__Replace_61395016(
                    (System_String_o *)v11,
                    (System_String_o *)StringLiteral_373/*"\""*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
            if ( !v11 )
              goto LABEL_22;
            v11 = System_String__Trim((System_String_o *)v11, 0LL);
            if ( !v10 )
              goto LABEL_22;
            System_Collections_Generic_Dictionary_object__object___Add(
              v10,
              v19,
              (Il2CppObject *)v11,
              (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
          }
        }
      }
      v13 = v14[6];
    }
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)v10;
}


void __fastcall PurchaseLogicIOS__SendPurchaseAction(
        PurchaseLogicIOS_o *this,
        System_String_o *paymentProductId,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_string__o *AllPurchasedProductIdList; // x0
  Il2CppObject *current; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FBD39 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, paymentProductId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v8);
    byte_49FBD39 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)paymentProductId);
  if ( !AllPurchasedProductIdList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)AllPurchasedProductIdList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v13.fields._current;
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)v13.fields._current, 0LL);
    if ( !IsNullOrEmpty )
      PurchaseLogic__SendPurchaseAction(
        (PurchaseLogic_o *)IsNullOrEmpty,
        (System_String_o *)current,
        transactionId,
        v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1

  if ( (byte_49FBD36 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9573/*"OK"*/, *(_QWORD *)&failureReason);
    sub_1B640C8(&StringLiteral_25290/*"購入処理中に問題が発生しました"*/, v3);
    sub_1B640C8(&StringLiteral_25288/*"購入できません"*/, v4);
    sub_1B640C8(&StringLiteral_25289/*"購入処理中です、完了までお待ち下さい"*/, v5);
    sub_1B640C8(&StringLiteral_2405/*"App内の購入が機能制限されています"*/, v6);
    sub_1B640C8(&StringLiteral_25262/*"指定されたプロダクトデータが取得できませんでした"*/, v7);
    byte_49FBD36 = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogicIOS__UpdateMonthlyPurchasePrice(
        PurchaseLogicIOS_o *this,
        int32_t bankShopId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  PurchaseLogicIOS___c_c *v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x19
  System_Func_object__int__o *_9__7_0; // x21
  Il2CppObject *v14; // x22
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x0
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v20; // x19
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v24; // x19
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  int32_t v33; // w1
  const MethodInfo *v34; // x2
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0

  if ( (byte_49FBD38 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___,
      *(_QWORD *)&bankShopId);
    sub_1B640C8(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v4);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_int__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_int__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B640C8(&Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__, v9);
    sub_1B640C8(&PurchaseLogicIOS___c_TypeInfo, v10);
    byte_49FBD38 = 1;
  }
  v11 = PurchaseLogicIOS___c_TypeInfo;
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._purchaseResultArray;
  if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
    v11 = PurchaseLogicIOS___c_TypeInfo;
  }
  _9__7_0 = (System_Func_object__int__o *)v11->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = PurchaseLogicIOS___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_1B64314(
                                              System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo,
                                              *(_QWORD *)&bankShopId,
                                              method);
    System_Func_object__int____ctor(_9__7_0, v14, Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__, 0LL);
    static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__7_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v16, v17);
  }
  v18 = System_Linq_Enumerable__Select_object__int_(
          purchaseResultArray,
          (System_Func_TSource__TResult__o *)_9__7_0,
          (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
  if ( !v18 )
    sub_1B64324(0LL);
  klass = v18->klass;
  v20 = v18;
  v21 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1BB60A8(v18, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v20,
          *(_QWORD *)(p_method + 8));
  if ( !v24 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v25 = *(_QWORD *)v24;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_21;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_21:
      v28 = sub_1BB60A8(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v24;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v31 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_28;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_28:
      v32 = sub_1BB60A8(v24, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
    PurchaseLogic__UpdateMonthlyPurchasePrice((PurchaseLogic_o *)this, v33, v34);
  }
  v35 = *(_QWORD *)v24;
  v36 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
  {
    v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_35;
    }
    v38 = v35 + 16LL * *v37 + 312;
  }
  else
  {
LABEL_35:
    v38 = sub_1BB60A8(v24, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v38)(v24, *(_QWORD *)(v38 + 8));
}


void __fastcall PurchaseLogicIOS___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FBD40 & 1) == 0 )
  {
    sub_1B640C8(&PurchaseLogicIOS___c_TypeInfo, v1);
    byte_49FBD40 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(PurchaseLogicIOS___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  PurchaseLogicIOS___c_TypeInfo->static_fields->__9 = (struct PurchaseLogicIOS___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)PurchaseLogicIOS___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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

  if ( (byte_49FBD41 & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c_o *)sub_1B640C8(&System_DateTime_TypeInfo, r);
    byte_49FBD41 = 1;
  }
  if ( !r )
    sub_1B64324(this);
  dateData = r->fields._cancellationDate_k__BackingField.fields._dateData;
  v5 = r->fields._purchaseDate_k__BackingField.fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
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
    sub_1B64324(this);
  return !x->fields.isCommitedAlready;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_1(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.freeStoneNum;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_2(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.chargeStoneNum;
}


bool __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_3(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.isSentPresentBox;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAllPurchasedProductIdList_b__10_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.purchasedBankShopId;
}


int32_t __fastcall PurchaseLogicIOS___c___UpdateMonthlyPurchasePrice_b__7_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return System_String__Equals_61384516(this->fields.productId, bankShop->fields.googleShopId, 4, 0LL);
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
  if ( (byte_49FBD42 & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c__DisplayClass2_0_o *)sub_1B640C8(&System_DateTime_TypeInfo, r);
    byte_49FBD42 = 1;
  }
  if ( !r )
    sub_1B64324(this);
  dateData = r->fields._cancellationDate_k__BackingField.fields._dateData;
  v6 = r->fields._purchaseDate_k__BackingField.fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v8.fields._dateData = dateData;
  v9.fields._dateData = v6;
  return System_DateTime__op_LessThanOrEqual(v8, v9, 0LL)
      && System_String__op_Equality(
           r->fields._transactionID_k__BackingField,
           v4->fields.transactionIdInOldStyleReceipt,
           0LL);
}