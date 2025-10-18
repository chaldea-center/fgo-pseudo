bool PurchaseLogicIOS__CheckIfReceiptShouldBeSentInIOSOldStyle(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Security_AppleReceipt_o *receipt,
        System_String_o *transactionIdInOldStyleReceipt,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *inAppPurchaseReceipts; // x21
  void *monitor; // x8
  PurchaseLogicIOS___c_c *v12; // x0
  System_Func_object__bool__o *_9__2_0; // x22
  Il2CppObject *v14; // x23
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  bool v18; // w0
  System_Object_array *v19; // x19
  bool v20; // w21
  System_Func_object__bool__o *v21; // x22
  bool v22; // w0

  if ( (byte_4C428E2 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_AppleInAppPurchaseReceipt___);
    sub_1C37058(&Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___);
    sub_1C37058(&System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
    sub_1C37058(&Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__);
    sub_1C37058(&Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__);
    sub_1C37058(&PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo);
    sub_1C37058(&PurchaseLogicIOS___c_TypeInfo);
    byte_4C428E2 = 1;
  }
  v6 = sub_1C372A4(PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_1C372B4(v7);
  *(_QWORD *)(v6 + 16) = transactionIdInOldStyleReceipt;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)transactionIdInOldStyleReceipt, v8, v9);
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
  v12 = PurchaseLogicIOS___c_TypeInfo;
  if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
    v12 = PurchaseLogicIOS___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__bool__o *)v12->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = PurchaseLogicIOS___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__2_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__2_0,
      v14,
      Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__,
      0);
    static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_AppleInAppPurchaseReceipt__bool__o *)_9__2_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v16, v17);
  }
  v18 = System_Linq_Enumerable__All_object_(
          inAppPurchaseReceipts,
          (System_Func_TSource__bool__o *)_9__2_0,
          (const MethodInfo_30F2108 *)Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___);
  v19 = (System_Object_array *)receipt->fields.inAppPurchaseReceipts;
  v20 = v18;
  v21 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v6,
    Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__,
    0);
  v22 = BasicHelper__Any_object__51187876(
          v19,
          (System_Func_T__bool__o *)v21,
          (const MethodInfo_30D10A4 *)Method_BasicHelper_Any_AppleInAppPurchaseReceipt___);
  return v20 || !v22;
}


void PurchaseLogicIOS__ConfirmPurchase(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  System_Collections_Generic_List_string__o *AllPurchasedProductIdList; // x0
  _BOOL8 v5; // x0
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x21
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  Il2CppObject *current; // x20
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  UnityEngine_Purchasing_ProductCollection_o *v12; // x0
  UnityEngine_Purchasing_Product_o *v13; // x1
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C428E9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C37058(&UnityEngine_Purchasing_IStoreController_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C37058(&PurchaseLogic_TypeInfo);
    byte_4C428E9 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)product);
  if ( !AllPurchasedProductIdList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)AllPurchasedProductIdList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v5 )
      break;
    storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
    if ( !storeController )
      sub_1C372B4(v5);
    klass = storeController->klass;
    current = v16.fields._current;
    v9 = *(unsigned __int16 *)&storeController->klass->_2.rank;
    if ( *(_WORD *)&storeController->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((UnityEngine_Purchasing_IStoreController_c **)p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_1C87870(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0);
    }
    v12 = (UnityEngine_Purchasing_ProductCollection_o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))v11)(
                                                          storeController,
                                                          *(_QWORD *)(v11 + 8));
    if ( !v12 )
      sub_1C372B4(0);
    v13 = UnityEngine_Purchasing_ProductCollection__WithID(v12, (System_String_o *)current, 0);
    if ( v13 )
      PurchaseLogic__ConfirmPurchase((PurchaseLogic_o *)this, v13, v14);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


System_Collections_Generic_List_string__o *PurchaseLogicIOS__ConvertBankShopIdToProductId(
        PurchaseLogicIOS_o *this,
        System_Collections_Generic_IEnumerable_int__o *bankShopIDs,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppObject *Instance; // x0
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x8
  __int64 v13; // x20
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  int32_t v22; // w1
  Il2CppObject *Entity; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0

  if ( (byte_4C428EB & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_1C37058(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_17022/*"bankShopMaster is null"*/);
    byte_4C428EB = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( logErrorOutputActionSampledByRatio )
    {
      ((void (__fastcall *)(intptr_t, __int64, intptr_t, float))logErrorOutputActionSampledByRatio->fields.invoke_impl)(
        logErrorOutputActionSampledByRatio->fields.method_code,
        StringLiteral_17022/*"bankShopMaster is null"*/,
        logErrorOutputActionSampledByRatio->fields.method,
        0.01);
      return (System_Collections_Generic_List_string__o *)v5;
    }
LABEL_44:
    sub_1C372B4(Instance);
  }
  if ( !bankShopIDs )
    goto LABEL_44;
  klass = bankShopIDs->klass;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v9 = *(unsigned __int16 *)&bankShopIDs->klass->_2.rank;
  if ( *(_WORD *)&bankShopIDs->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v11 = sub_1C87870(bankShopIDs, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v11)(
          bankShopIDs,
          *(_QWORD *)(v11 + 8));
  if ( !v13 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v14 = *(_QWORD *)v13;
    v15 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
    {
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_19;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_19:
      v17 = sub_1C87870(v13, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) & 1) == 0 )
      break;
    v18 = *(_QWORD *)v13;
    v19 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
    {
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v20 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_26;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_26:
      v21 = sub_1C87870(v13, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v13, *(_QWORD *)(v21 + 8));
    Entity = DataMasterBase_object__object__int___GetEntity(
               v8,
               v22,
               (const MethodInfo_33A10A0 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    if ( Entity )
    {
      if ( !v5 )
        sub_1C372B4(Entity);
      v26 = (Il2CppObject *)Entity[2].klass;
      items = v5->fields._items;
      v28 = Method_System_Collections_Generic_List_string__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C372B4(Entity);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          v26,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v26, v24, v25);
      }
    }
  }
  v31 = *(_QWORD *)v13;
  v32 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
  {
    v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_38;
    }
    v34 = v31 + 16LL * *v33 + 312;
  }
  else
  {
LABEL_38:
    v34 = sub_1C87870(v13, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v34)(v13, *(_QWORD *)(v34 + 8));
  return (System_Collections_Generic_List_string__o *)v5;
}


void PurchaseLogicIOS__DebugLog(PurchaseLogicIOS_o *this, System_String_o *log, const MethodInfo *method)
{
  Il2CppObject *v4; // x19

  if ( (byte_4C428E6 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Debug_TypeInfo);
    sub_1C37058(&StringLiteral_15084/*"UnityIAP:"*/);
    byte_4C428E6 = 1;
  }
  v4 = (Il2CppObject *)System_String__Concat_63561656((System_String_o *)StringLiteral_15084/*"UnityIAP:"*/, log, 0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log(v4, 0);
}


PurchaseLogic_ReceiptContents_o *PurchaseLogicIOS__ExtractReceiptContents(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  PurchaseLogicIOS_o *v4; // x19
  System_String_o *receipt_k__BackingField; // x22
  __int64 v6; // x20
  const MethodInfo *v7; // x1
  __int64 naturalAligment; // x10
  Il2CppObject *v9; // x25
  struct System_Action_string__o *logErrorOutputAction; // x8
  UnityEngine_Purchasing_ConfigurationBuilder_o *v11; // x0
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x22
  Il2CppClass *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  System_String_o *v18; // x22
  System_Byte_array *v19; // x22
  System_Byte_array *v20; // x24
  UnityEngine_Purchasing_Security_AppleValidator_o *v21; // x23
  __int64 v22; // x0
  PurchaseLogic_o *v23; // x0
  const MethodInfo *v24; // x1
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  Il2CppObject *id_k__BackingField; // x23
  UnityEngine_Purchasing_Security_AppleReceipt_o *v27; // x22
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x23
  UnityEngine_Purchasing_IExtensionProvider_c *v32; // x8
  void *v33; // x24
  __int64 v34; // x9
  __int64 v35; // x1
  __int64 v36; // x2
  int32_t *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x23
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  System_String_o *v46; // x21
  const MethodInfo *v47; // x2
  System_String_o *TransactionIdFromOldStyleReceipt; // x23
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4C428E1 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Purchasing_Security_AppleValidator_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___);
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C37058(&UnityEngine_Purchasing_IAppleConfiguration_TypeInfo);
    sub_1C37058(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&PurchaseLogic_TypeInfo);
    sub_1C37058(&PurchaseLogic_ReceiptContents_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_10591/*"Payload"*/);
    sub_1C37058(&StringLiteral_11196/*"RawReceipt Decode Error. "*/);
    this = (PurchaseLogicIOS_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C428E1 = 1;
  }
  value = 0;
  if ( !product )
    goto LABEL_57;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v6 = sub_1C372A4(PurchaseLogic_ReceiptContents_TypeInfo);
  PurchaseLogic_ReceiptContents___ctor((PurchaseLogic_ReceiptContents_o *)v6, v7);
  this = (PurchaseLogicIOS_o *)UnityEngine_Purchasing_MiniJson__JsonDecode(receipt_k__BackingField, 0);
  if ( !this )
    goto LABEL_57;
  naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
  if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    goto LABEL_57;
  }
  v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  this = (PurchaseLogicIOS_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                                 (Il2CppObject *)StringLiteral_10591/*"Payload"*/,
                                 &value,
                                 (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( value )
    {
      if ( (System_String_c *)value->klass == string_TypeInfo )
        v9 = value;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
  }
  else
  {
    logErrorOutputAction = v4->fields._logErrorOutputAction;
    if ( !logErrorOutputAction )
      goto LABEL_57;
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))logErrorOutputAction->fields.invoke_impl)(
      logErrorOutputAction->fields.method_code,
      StringLiteral_11196/*"RawReceipt Decode Error. "*/,
      logErrorOutputAction->fields.method);
  }
  v11 = (UnityEngine_Purchasing_ConfigurationBuilder_o *)((__int64 (__fastcall *)(PurchaseLogicIOS_o *, const MethodInfo *))v4->klass->vtable._10_GetConfigurationBuilder.methodPtr)(
                                                           v4,
                                                           v4->klass->vtable._10_GetConfigurationBuilder.method);
  if ( !v11 )
    sub_1C372B4(0);
  v12 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
          v11,
          (const MethodInfo_30E00A4 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___);
  v13 = v12;
  if ( !v12 )
    sub_1C372B4(0);
  klass = v12->klass;
  v15 = *(unsigned __int16 *)&v12->klass->_2.rank;
  if ( *(_WORD *)&v12->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IAppleConfiguration_c **)p_offset - 1) != UnityEngine_Purchasing_IAppleConfiguration_TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_21;
    }
    v17 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_21:
    v17 = sub_1C87870(v12, UnityEngine_Purchasing_IAppleConfiguration_TypeInfo, 0);
  }
  v18 = (System_String_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8));
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v19 = System_Convert__FromBase64String(v18, 0);
  v20 = UnityEngine_Purchasing_Security_AppleTangle__Data(0);
  v21 = (UnityEngine_Purchasing_Security_AppleValidator_o *)sub_1C372A4(UnityEngine_Purchasing_Security_AppleValidator_TypeInfo);
  UnityEngine_Purchasing_Security_AppleValidator___ctor(v21, v20, 0);
  if ( !v21 )
    sub_1C372B4(v22);
  v23 = (PurchaseLogic_o *)UnityEngine_Purchasing_Security_AppleValidator__Validate(v21, v19, 0);
  definition_k__BackingField = product->fields._definition_k__BackingField;
  if ( !definition_k__BackingField )
    sub_1C372B4(v23);
  id_k__BackingField = (Il2CppObject *)definition_k__BackingField->fields._id_k__BackingField;
  v27 = (UnityEngine_Purchasing_Security_AppleReceipt_o *)v23;
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(v23, v24);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
    sub_1C372B4(0);
  this = (PurchaseLogicIOS_o *)System_Collections_Generic_List_object___Contains(
                                 (System_Collections_Generic_List_object__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
                                 id_k__BackingField,
                                 (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_55;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_1C372B4(this);
  v32 = storeExtensionProvider->klass;
  v33 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v34 = *(unsigned __int16 *)&storeExtensionProvider->klass->_2.rank;
  v35 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 4);
  v36 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 40);
  if ( *(_WORD *)&storeExtensionProvider->klass->_2.rank )
  {
    v37 = &v32->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)v37 - 1) != v35 )
    {
      --v34;
      v37 += 4;
      if ( !v34 )
        goto LABEL_34;
    }
    v38 = (__int64)&v32->vtable[*v37 + (int)v36];
  }
  else
  {
LABEL_34:
    v38 = sub_1C87870(storeExtensionProvider, v35, v36);
  }
  v39 = sub_1C3718C(*(_QWORD *)(v38 + 8), v33);
  v40 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *))(v39 + 8))(storeExtensionProvider);
  v41 = v40;
  if ( !v40 )
    sub_1C372B4(0);
  v42 = *(_QWORD *)v40;
  v43 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
  {
    v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
    while ( *((UnityEngine_Purchasing_IAppleExtensions_c **)v44 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_41;
    }
    v45 = v42 + 16LL * *v44 + 312;
  }
  else
  {
LABEL_41:
    v45 = sub_1C87870(v40, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 0);
  }
  v46 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, UnityEngine_Purchasing_Product_o *, _QWORD))v45)(
                             v41,
                             product,
                             *(_QWORD *)(v45 + 8));
  TransactionIdFromOldStyleReceipt = PurchaseLogicIOS__GetTransactionIdFromOldStyleReceipt(v4, v46, v47);
  this = (PurchaseLogicIOS_o *)System_String__IsNullOrEmpty(TransactionIdFromOldStyleReceipt, 0);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (PurchaseLogicIOS_o *)PurchaseLogicIOS__CheckIfReceiptShouldBeSentInIOSOldStyle(
                                       this,
                                       v27,
                                       TransactionIdFromOldStyleReceipt,
                                       v30),
        ((unsigned __int8)this & 1) == 0) )
  {
LABEL_55:
    v46 = (System_String_o *)v9;
    if ( v6 )
      goto LABEL_56;
LABEL_57:
    sub_1C372B4(this);
  }
  if ( !v6 )
    sub_1C372B4(this);
  *(_QWORD *)(v6 + 56) = TransactionIdFromOldStyleReceipt;
  *(_BYTE *)(v6 + 48) = 1;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 56), (int32_t)TransactionIdFromOldStyleReceipt, v29, v30);
LABEL_56:
  *(_QWORD *)(v6 + 32) = v46;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 32), (int32_t)v46, v29, v30);
  return (PurchaseLogic_ReceiptContents_o *)v6;
}


void PurchaseLogicIOS__GetAddedStoneNum(
        PurchaseLogicIOS_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        int32_t *freeStoneNum,
        int32_t *chargeStoneNum,
        int32_t *shopId,
        bool *isSentPresentBox,
        const MethodInfo *method)
{
  __int64 v12; // x21
  PurchaseLogicIOS___c_c *v13; // x0
  System_Func_object__bool__o *_9__12_0; // x25
  Il2CppObject *v15; // x26
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x23
  PurchaseLogicIOS___c_c *v20; // x0
  System_Func_object__int__o *_9__12_1; // x25
  Il2CppObject *v22; // x26
  struct PurchaseLogicIOS___c_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_int__o *v26; // x0
  PurchaseLogicIOS___c_c *v27; // x0
  System_Func_object__int__o *_9__12_2; // x24
  Il2CppObject *v29; // x25
  struct PurchaseLogicIOS___c_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_IEnumerable_int__o *v33; // x0
  PurchaseLogicIOS___c_c *v34; // x0
  System_Func_object__bool__o *_9__12_3; // x22
  Il2CppObject *v36; // x24
  struct PurchaseLogicIOS___c_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *object; // x0
  System_Func_object__bool__o *v41; // x20
  int32_t v42; // w8

  if ( (byte_4C428EC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_1C37058(&Method_System_Linq_Enumerable_First_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_1C37058(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    sub_1C37058(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    sub_1C37058(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__);
    sub_1C37058(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__);
    sub_1C37058(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__);
    sub_1C37058(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_3__);
    sub_1C37058(&Method_PurchaseLogicIOS___c__DisplayClass12_0__GetAddedStoneNum_b__4__);
    sub_1C37058(&PurchaseLogicIOS___c__DisplayClass12_0_TypeInfo);
    sub_1C37058(&PurchaseLogicIOS___c_TypeInfo);
    byte_4C428EC = 1;
  }
  *shopId = 0;
  *chargeStoneNum = 0;
  *freeStoneNum = 0;
  *isSentPresentBox = 0;
  if ( purchaseResultArray )
  {
    v12 = sub_1C372A4(PurchaseLogicIOS___c__DisplayClass12_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0);
    v13 = PurchaseLogicIOS___c_TypeInfo;
    if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v13 = PurchaseLogicIOS___c_TypeInfo;
    }
    _9__12_0 = (System_Func_object__bool__o *)v13->static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = PurchaseLogicIOS___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__12_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__12_0, v15, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__, 0);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      static_fields->__9__12_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__12_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v17, v18);
    }
    v19 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
            (System_Func_TSource__bool__o *)_9__12_0,
            (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    if ( System_Linq_Enumerable__Count_object_(
           v19,
           (const MethodInfo_3107FE0 *)Method_System_Linq_Enumerable_Count_PurchaseByBank_UnityIap_Request_PurchaseResult___) >= 1 )
    {
      v20 = PurchaseLogicIOS___c_TypeInfo;
      if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
        v20 = PurchaseLogicIOS___c_TypeInfo;
      }
      _9__12_1 = (System_Func_object__int__o *)v20->static_fields->__9__12_1;
      if ( !_9__12_1 )
      {
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = PurchaseLogicIOS___c_TypeInfo;
        }
        v22 = (Il2CppObject *)v20->static_fields->__9;
        _9__12_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
        System_Func_object__int____ctor(_9__12_1, v22, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__, 0);
        v23 = PurchaseLogicIOS___c_TypeInfo->static_fields;
        v23->__9__12_1 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_1;
        sub_1C36FFC((CGThumbnailListItem_o *)&v23->__9__12_1, (int32_t)_9__12_1, v24, v25);
      }
      v26 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v19,
                                                               (System_Func_TSource__TResult__o *)_9__12_1,
                                                               (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
      *freeStoneNum = System_Linq_Enumerable__Sum(v26, 0);
      v27 = PurchaseLogicIOS___c_TypeInfo;
      if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
        v27 = PurchaseLogicIOS___c_TypeInfo;
      }
      _9__12_2 = (System_Func_object__int__o *)v27->static_fields->__9__12_2;
      if ( !_9__12_2 )
      {
        if ( !v27->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v27);
          v27 = PurchaseLogicIOS___c_TypeInfo;
        }
        v29 = (Il2CppObject *)v27->static_fields->__9;
        _9__12_2 = (System_Func_object__int__o *)sub_1C372A4(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
        System_Func_object__int____ctor(_9__12_2, v29, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__, 0);
        v30 = PurchaseLogicIOS___c_TypeInfo->static_fields;
        v30->__9__12_2 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_2;
        sub_1C36FFC((CGThumbnailListItem_o *)&v30->__9__12_2, (int32_t)_9__12_2, v31, v32);
      }
      v33 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v19,
                                                               (System_Func_TSource__TResult__o *)_9__12_2,
                                                               (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
      *chargeStoneNum = System_Linq_Enumerable__Sum(v33, 0);
      v34 = PurchaseLogicIOS___c_TypeInfo;
      if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
        v34 = PurchaseLogicIOS___c_TypeInfo;
      }
      _9__12_3 = (System_Func_object__bool__o *)v34->static_fields->__9__12_3;
      if ( !_9__12_3 )
      {
        if ( !v34->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v34);
          v34 = PurchaseLogicIOS___c_TypeInfo;
        }
        v36 = (Il2CppObject *)v34->static_fields->__9;
        _9__12_3 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__12_3, v36, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_3__, 0);
        v37 = PurchaseLogicIOS___c_TypeInfo->static_fields;
        v37->__9__12_3 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__12_3;
        sub_1C36FFC((CGThumbnailListItem_o *)&v37->__9__12_3, (int32_t)_9__12_3, v38, v39);
      }
      *isSentPresentBox = System_Linq_Enumerable__Any_object__51336868(
                            v19,
                            (System_Func_TSource__bool__o *)_9__12_3,
                            (const MethodInfo_30F56A4 *)Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___);
      object = System_Linq_Enumerable__First_object_(
                 v19,
                 (const MethodInfo_310E530 *)Method_System_Linq_Enumerable_First_PurchaseByBank_UnityIap_Request_PurchaseResult___);
      if ( !object || !v12 )
        sub_1C372B4(object);
      *(_DWORD *)(v12 + 16) = object[1].klass;
      v41 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v41,
        (Il2CppObject *)v12,
        Method_PurchaseLogicIOS___c__DisplayClass12_0__GetAddedStoneNum_b__4__,
        0);
      if ( System_Linq_Enumerable__Any_object__51336868(
             v19,
             (System_Func_TSource__bool__o *)v41,
             (const MethodInfo_30F56A4 *)Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___) )
      {
        v42 = 0;
      }
      else
      {
        v42 = *(_DWORD *)(v12 + 16);
      }
      *shopId = v42;
    }
  }
}


System_Collections_Generic_List_string__o *PurchaseLogicIOS__GetAllPurchasedProductIdList(
        PurchaseLogicIOS_o *this,
        const MethodInfo *method)
{
  PurchaseLogicIOS_o *v2; // x19
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x20
  PurchaseLogicIOS___c_c *v4; // x0
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v6; // x22
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_int__o *v10; // x1
  const MethodInfo *v11; // x2
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x8
  System_Collections_Generic_List_object__o *v14; // x19

  v2 = this;
  if ( (byte_4C428EA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    sub_1C37058(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__);
    sub_1C37058(&PurchaseLogicIOS___c_TypeInfo);
    this = (PurchaseLogicIOS_o *)sub_1C37058(&StringLiteral_16578/*"_purchaseResultArray is null"*/);
    byte_4C428EA = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields._purchaseResultArray;
  if ( purchaseResultArray )
  {
    v4 = PurchaseLogicIOS___c_TypeInfo;
    if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v4 = PurchaseLogicIOS___c_TypeInfo;
    }
    _9__10_0 = (System_Func_object__int__o *)v4->static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        v4 = PurchaseLogicIOS___c_TypeInfo;
      }
      v6 = (Il2CppObject *)v4->static_fields->__9;
      _9__10_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__10_0,
        v6,
        Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__,
        0);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__10_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v8, v9);
    }
    v10 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                             purchaseResultArray,
                                                             (System_Func_TSource__TResult__o *)_9__10_0,
                                                             (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    return PurchaseLogicIOS__ConvertBankShopIdToProductId(v2, v10, v11);
  }
  else
  {
    logErrorOutputActionSampledByRatio = v2->fields._logErrorOutputActionSampledByRatio;
    if ( !logErrorOutputActionSampledByRatio )
      sub_1C372B4(this);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t, float))logErrorOutputActionSampledByRatio->fields.invoke_impl)(
      logErrorOutputActionSampledByRatio->fields.method_code,
      StringLiteral_16578/*"_purchaseResultArray is null"*/,
      logErrorOutputActionSampledByRatio->fields.method,
      0.01);
    v14 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v14,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v14;
  }
}


System_String_o *PurchaseLogicIOS__GetTransactionIdFromOldStyleReceipt(
        PurchaseLogicIOS_o *this,
        System_String_o *iOSOldStylePayloadStr,
        const MethodInfo *method)
{
  System_Byte_array *v4; // x21
  System_Text_Encoding_o *UTF8; // x0
  System_String_o *v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_Dictionary_string__object__o *v8; // x0
  Il2CppObject *v9; // x0
  System_Byte_array *v10; // x21
  System_Text_Encoding_o *v11; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x1
  System_Collections_Generic_Dictionary_string__object__o *v14; // x0
  System_String_o *v17; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C428E3 & 1) == 0 )
  {
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_22821/*"purchase-info"*/);
    sub_1C37058(&StringLiteral_24174/*"transaction-id"*/);
    byte_4C428E3 = 1;
  }
  v17 = 0;
  value = 0;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v4 = System_Convert__FromBase64String(iOSOldStylePayloadStr, 0);
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_1C372B4(0);
  v6 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, const MethodInfo *))UTF8->klass->vtable._35_GetString.methodPtr)(
                            UTF8,
                            v4,
                            UTF8->klass->vtable._35_GetString.method);
  v8 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v6, v7);
  if ( !v8 )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)v8,
    (Il2CppObject *)StringLiteral_22821/*"purchase-info"*/,
    &value,
    (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( value )
  {
    if ( (System_String_c *)value->klass == string_TypeInfo )
      v9 = value;
    else
      v9 = 0;
  }
  else
  {
    v9 = 0;
  }
  v10 = System_Convert__FromBase64String((System_String_o *)v9, 0);
  v11 = System_Text_Encoding__get_UTF8(0);
  if ( !v11 )
    sub_1C372B4(0);
  v12 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, const MethodInfo *))v11->klass->vtable._35_GetString.methodPtr)(
                             v11,
                             v10,
                             v11->klass->vtable._35_GetString.method);
  v14 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v12, v13);
  if ( !v14 )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)v14,
    (Il2CppObject *)StringLiteral_24174/*"transaction-id"*/,
    (Il2CppObject **)&v17,
    (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( !v17 )
    return 0;
  if ( v17->klass == string_TypeInfo )
    return v17;
  return 0;
}


bool PurchaseLogicIOS__IsDeferredPurchaseExists(PurchaseLogicIOS_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0

  if ( (byte_4C428EE & 1) == 0 )
  {
    this = (PurchaseLogicIOS_o *)sub_1C37058(&Method_System_Linq_Enumerable_Any_string___);
    byte_4C428EE = 1;
  }
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)this,
                                                method);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
           (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_string___);
}


bool PurchaseLogicIOS__IsPurchasingFrameworkAvailable(PurchaseLogicIOS_o *this, const MethodInfo *method)
{
  return 1;
}


void PurchaseLogicIOS__OnDeferred(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  struct System_String_o *id_k__BackingField; // x1
  System_String_o **v11; // x20
  PurchaseBehaviour_c *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *BankShopEntityCollection; // x22
  System_Func_object__bool__o *v14; // x23
  Il2CppObject *v15; // x0
  const MethodInfo *v16; // x2
  int32_t klass; // w21
  const MethodInfo *v18; // x7

  if ( (byte_4C428ED & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
    sub_1C37058(&System_Func_BankShopEntity__bool__TypeInfo);
    sub_1C37058(&PurchaseBehaviour_TypeInfo);
    sub_1C37058(&Method_PurchaseLogicIOS___c__DisplayClass14_0__OnDeferred_b__0__);
    sub_1C37058(&PurchaseLogicIOS___c__DisplayClass14_0_TypeInfo);
    byte_4C428ED = 1;
  }
  v5 = sub_1C372A4(PurchaseLogicIOS___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !product || (definition_k__BackingField = product->fields._definition_k__BackingField) == 0 || !v5 )
    sub_1C372B4(v6);
  id_k__BackingField = definition_k__BackingField->fields._id_k__BackingField;
  *(_QWORD *)(v5 + 16) = id_k__BackingField;
  v11 = (System_String_o **)(v5 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)id_k__BackingField, v7, v8);
  v12 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v12 = PurchaseBehaviour_TypeInfo;
  }
  BankShopEntityCollection = (System_Collections_Generic_IEnumerable_TSource__o *)v12->static_fields->BankShopEntityCollection;
  v14 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BankShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_PurchaseLogicIOS___c__DisplayClass14_0__OnDeferred_b__0__,
    0);
  v15 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
          BankShopEntityCollection,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
  if ( v15 )
    klass = (int32_t)v15[1].klass;
  else
    klass = 0;
  PurchaseLogic__AddDeferredPurchaseProductIdsToPlayerPrefs((PurchaseLogic_o *)v15, *v11, v16);
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear((PurchaseLogic_o *)this, 5, 0, 0, 0, klass, 0, v18);
}


System_Collections_Generic_Dictionary_string__object__o *PurchaseLogicIOS__ParseIOSOldStyleReceipt(
        System_String_o *str,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x19
  void *v4; // x0
  int v5; // w8
  _DWORD *v6; // x20
  int i; // w23
  char *v8; // x8
  System_String_o *v9; // x21
  _DWORD *v10; // x21
  Il2CppObject *v11; // x22

  if ( (byte_4C428E4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C37058(&StringLiteral_1744/*"="*/);
    sub_1C37058(&StringLiteral_1492/*";"*/);
    sub_1C37058(&StringLiteral_341/*"\""*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C428E4 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !str || (v4 = System_String__Split(str, 0xAu, 0, 0)) == 0 )
LABEL_22:
    sub_1C372B4(v4);
  v5 = *((_DWORD *)v4 + 6);
  v6 = v4;
  if ( v5 >= 1 )
  {
    for ( i = 0; i < v5; ++i )
    {
      if ( i >= (unsigned int)v5 )
LABEL_23:
        sub_1C372BC(v4);
      v8 = (char *)&v6[2 * i];
      v9 = (System_String_o *)*((_QWORD *)v8 + 4);
      if ( !v9 )
        goto LABEL_22;
      v4 = (void *)System_String__Contains(*((System_String_o **)v8 + 4), (System_String_o *)StringLiteral_1744/*"="*/, 0);
      if ( ((unsigned __int8)v4 & 1) != 0 )
      {
        v4 = System_String__Replace_63608204(
               v9,
               (System_String_o *)StringLiteral_1492/*";"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0);
        if ( !v4 )
          goto LABEL_22;
        v4 = System_String__Split((System_String_o *)v4, 0x3Du, 0, 0);
        if ( v4 )
        {
          v10 = v4;
          if ( *((int *)v4 + 6) >= 2 )
          {
            v4 = (void *)*((_QWORD *)v4 + 4);
            if ( !v4 )
              goto LABEL_22;
            v4 = System_String__Replace_63608204(
                   (System_String_o *)v4,
                   (System_String_o *)StringLiteral_341/*"\""*/,
                   (System_String_o *)StringLiteral_1/*""*/,
                   0);
            if ( !v4 )
              goto LABEL_22;
            v4 = System_String__Trim((System_String_o *)v4, 0);
            if ( v10[6] <= 1u )
              goto LABEL_23;
            v11 = (Il2CppObject *)v4;
            v4 = (void *)*((_QWORD *)v10 + 5);
            if ( !v4 )
              goto LABEL_22;
            v4 = System_String__Replace_63608204(
                   (System_String_o *)v4,
                   (System_String_o *)StringLiteral_341/*"\""*/,
                   (System_String_o *)StringLiteral_1/*""*/,
                   0);
            if ( !v4 )
              goto LABEL_22;
            v4 = System_String__Trim((System_String_o *)v4, 0);
            if ( !v3 )
              goto LABEL_22;
            System_Collections_Generic_Dictionary_object__object___Add(
              v3,
              v11,
              (Il2CppObject *)v4,
              (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
          }
        }
      }
      v5 = v6[6];
    }
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)v3;
}


void PurchaseLogicIOS__SendPurchaseAction(
        PurchaseLogicIOS_o *this,
        System_String_o *paymentProductId,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_string__o *AllPurchasedProductIdList; // x0
  Il2CppObject *current; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C428E8 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4C428E8 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)paymentProductId);
  if ( !AllPurchasedProductIdList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)AllPurchasedProductIdList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v10.fields._current;
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)v10.fields._current, 0);
    if ( !IsNullOrEmpty )
      PurchaseLogic__SendPurchaseAction((PurchaseLogic_o *)IsNullOrEmpty, (System_String_o *)current, transactionId, v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void PurchaseLogicIOS__ShowNativeAlert(
        PurchaseLogicIOS_o *this,
        System_String_o *titleText,
        System_String_o *messageText,
        System_String_o *okActionTitle,
        const MethodInfo *method)
{
  ;
}


void PurchaseLogicIOS__ShowPurchaseFailedNotification(
        PurchaseLogicIOS_o *this,
        int32_t failureReason,
        const MethodInfo *method)
{
  if ( (byte_4C428E5 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9622/*"OK"*/);
    sub_1C37058(&StringLiteral_25510/*"購入処理中に問題が発生しました"*/);
    sub_1C37058(&StringLiteral_25508/*"購入できません"*/);
    sub_1C37058(&StringLiteral_25509/*"購入処理中です、完了までお待ち下さい"*/);
    sub_1C37058(&StringLiteral_2298/*"App内の購入が機能制限されています"*/);
    sub_1C37058(&StringLiteral_25481/*"指定されたプロダクトデータが取得できませんでした"*/);
    byte_4C428E5 = 1;
  }
}


void PurchaseLogicIOS__UpdateMonthlyPurchasePrice(
        PurchaseLogicIOS_o *this,
        int32_t bankShopId,
        const MethodInfo *method)
{
  PurchaseLogicIOS___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x19
  System_Func_object__int__o *_9__7_0; // x21
  Il2CppObject *v7; // x22
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v11; // x0
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v13; // x19
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x19
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  int32_t v26; // w1
  const MethodInfo *v27; // x2
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0

  if ( (byte_4C428E7 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    sub_1C37058(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__);
    sub_1C37058(&PurchaseLogicIOS___c_TypeInfo);
    byte_4C428E7 = 1;
  }
  v4 = PurchaseLogicIOS___c_TypeInfo;
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._purchaseResultArray;
  if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
    v4 = PurchaseLogicIOS___c_TypeInfo;
  }
  _9__7_0 = (System_Func_object__int__o *)v4->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = PurchaseLogicIOS___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v7, Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__, 0);
    static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__7_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__Select_object__int_(
          purchaseResultArray,
          (System_Func_TSource__TResult__o *)_9__7_0,
          (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
  if ( !v11 )
    sub_1C372B4(0);
  klass = v11->klass;
  v13 = v11;
  v14 = *(unsigned __int16 *)&v11->klass->_2.rank;
  if ( *(_WORD *)&v11->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_14;
    }
    v16 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v16 = sub_1C87870(v11, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v16)(
          v13,
          *(_QWORD *)(v16 + 8));
  if ( !v17 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v18 = *(_QWORD *)v17;
    v19 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_21;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_21:
      v21 = sub_1C87870(v17, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) & 1) == 0 )
      break;
    v22 = *(_QWORD *)v17;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v24 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_28;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_28:
      v25 = sub_1C87870(v17, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v17, *(_QWORD *)(v25 + 8));
    PurchaseLogic__UpdateMonthlyPurchasePrice((PurchaseLogic_o *)this, v26, v27);
  }
  v28 = *(_QWORD *)v17;
  v29 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
  {
    v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_35;
    }
    v31 = v28 + 16LL * *v30 + 312;
  }
  else
  {
LABEL_35:
    v31 = sub_1C87870(v17, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v31)(v17, *(_QWORD *)(v31 + 8));
}


void PurchaseLogicIOS___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C428EF & 1) == 0 )
  {
    sub_1C37058(&PurchaseLogicIOS___c_TypeInfo);
    byte_4C428EF = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(PurchaseLogicIOS___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PurchaseLogicIOS___c_TypeInfo->static_fields->__9 = (struct PurchaseLogicIOS___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)PurchaseLogicIOS___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void PurchaseLogicIOS___c___ctor(PurchaseLogicIOS___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PurchaseLogicIOS___c___CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0(
        PurchaseLogicIOS___c_o *this,
        UnityEngine_Purchasing_Security_AppleInAppPurchaseReceipt_o *r,
        const MethodInfo *method)
{
  uint64_t dateData; // x20
  uint64_t v5; // x19
  System_DateTime_o v6; // x0
  System_DateTime_o v7; // x1

  if ( (byte_4C428F0 & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c_o *)sub_1C37058(&System_DateTime_TypeInfo);
    byte_4C428F0 = 1;
  }
  if ( !r )
    sub_1C372B4(this);
  dateData = r->fields._cancellationDate_k__BackingField.fields._dateData;
  v5 = r->fields._purchaseDate_k__BackingField.fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v6.fields._dateData = dateData;
  v7.fields._dateData = v5;
  return System_DateTime__op_GreaterThan(v6, v7, 0);
}


bool PurchaseLogicIOS___c___GetAddedStoneNum_b__12_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return !x->fields.isCommitedAlready;
}


int32_t PurchaseLogicIOS___c___GetAddedStoneNum_b__12_1(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.freeStoneNum;
}


int32_t PurchaseLogicIOS___c___GetAddedStoneNum_b__12_2(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.chargeStoneNum;
}


bool PurchaseLogicIOS___c___GetAddedStoneNum_b__12_3(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.isSentPresentBox;
}


int32_t PurchaseLogicIOS___c___GetAllPurchasedProductIdList_b__10_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.purchasedBankShopId;
}


int32_t PurchaseLogicIOS___c___UpdateMonthlyPurchasePrice_b__7_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.purchasedBankShopId;
}


void PurchaseLogicIOS___c__DisplayClass12_0___ctor(
        PurchaseLogicIOS___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PurchaseLogicIOS___c__DisplayClass12_0___GetAddedStoneNum_b__4(
        PurchaseLogicIOS___c__DisplayClass12_0_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.purchasedBankShopId != this->fields.bankShopId;
}


void PurchaseLogicIOS___c__DisplayClass14_0___ctor(
        PurchaseLogicIOS___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PurchaseLogicIOS___c__DisplayClass14_0___OnDeferred_b__0(
        PurchaseLogicIOS___c__DisplayClass14_0_o *this,
        BankShopEntity_o *bankShop,
        const MethodInfo *method)
{
  if ( !bankShop )
    sub_1C372B4(this);
  return System_String__Equals_63597764(this->fields.productId, bankShop->fields.googleShopId, 4, 0);
}


void PurchaseLogicIOS___c__DisplayClass2_0___ctor(
        PurchaseLogicIOS___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PurchaseLogicIOS___c__DisplayClass2_0___CheckIfReceiptShouldBeSentInIOSOldStyle_b__1(
        PurchaseLogicIOS___c__DisplayClass2_0_o *this,
        UnityEngine_Purchasing_Security_AppleInAppPurchaseReceipt_o *r,
        const MethodInfo *method)
{
  PurchaseLogicIOS___c__DisplayClass2_0_o *v4; // x20
  uint64_t dateData; // x21
  uint64_t v6; // x22
  System_DateTime_o v7; // x0
  System_DateTime_o v8; // x1

  v4 = this;
  if ( (byte_4C428F1 & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c__DisplayClass2_0_o *)sub_1C37058(&System_DateTime_TypeInfo);
    byte_4C428F1 = 1;
  }
  if ( !r )
    sub_1C372B4(this);
  dateData = r->fields._cancellationDate_k__BackingField.fields._dateData;
  v6 = r->fields._purchaseDate_k__BackingField.fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v7.fields._dateData = dateData;
  v8.fields._dateData = v6;
  return System_DateTime__op_LessThanOrEqual(v7, v8, 0)
      && System_String__op_Equality(
           r->fields._transactionID_k__BackingField,
           v4->fields.transactionIdInOldStyleReceipt,
           0);
}