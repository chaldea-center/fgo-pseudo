bool PurchaseLogicIOS__CheckIfReceiptShouldBeSentInIOSOldStyle(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Security_AppleReceipt_o *receipt,
        System_String_o *transactionIdInOldStyleReceipt,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x21
  PurchaseLogicIOS___c_c *v17; // x0
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__2_0; // x22
  Il2CppObject *v20; // x23
  struct PurchaseLogicIOS___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  bool v28; // w21
  System_Object_array *inAppPurchaseReceipts; // x19
  System_Func_object__bool__o *v30; // x22
  char v31; // w8

  if ( (byte_597010F & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_AppleInAppPurchaseReceipt___);
    sub_2213A60(&Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___);
    sub_2213A60(&System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
    sub_2213A60(&Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__);
    sub_2213A60(&Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__);
    sub_2213A60(&PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo);
    sub_2213A60(&PurchaseLogicIOS___c_TypeInfo);
    byte_597010F = 1;
  }
  v6 = sub_2213CCC(PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_2213CDC(v7, v8);
  *(_QWORD *)(v6 + 16) = transactionIdInOldStyleReceipt;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v6 + 16),
    (int32_t)transactionIdInOldStyleReceipt,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( receipt
    && (v16 = (System_Collections_Generic_IEnumerable_TSource__o *)receipt->fields.inAppPurchaseReceipts) != 0
    && v16[1].monitor )
  {
    v17 = PurchaseLogicIOS___c_TypeInfo;
    if ( !*(&PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo, v15);
      v17 = PurchaseLogicIOS___c_TypeInfo;
    }
    static_fields = v17->static_fields;
    _9__2_0 = (System_Func_object__bool__o *)static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !*(&v17->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v17, v15);
        static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)static_fields->__9;
      _9__2_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__2_0,
        v20,
        Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__,
        0);
      v21 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v21->__9__2_0 = (struct System_Func_AppleInAppPurchaseReceipt__bool__o *)_9__2_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v21->__9__2_0, (int32_t)_9__2_0, v22, v23, v24, v25, v26, v27);
    }
    v28 = System_Linq_Enumerable__All_object_(
            v16,
            (System_Func_TSource__bool__o *)_9__2_0,
            (const MethodInfo_3864CD0 *)Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___);
    inAppPurchaseReceipts = (System_Object_array *)receipt->fields.inAppPurchaseReceipts;
    v30 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v30,
      (Il2CppObject *)v6,
      Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__,
      0);
    v31 = v28
        | !BasicHelper__Any_object__58785420(
             inAppPurchaseReceipts,
             (System_Func_T__bool__o *)v30,
             (const MethodInfo_380FE8C *)Method_BasicHelper_Any_AppleInAppPurchaseReceipt___);
  }
  else
  {
    v31 = 1;
  }
  return v31 & 1;
}


void PurchaseLogicIOS__ConfirmPurchase(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  System_Collections_Generic_List_string__o *AllPurchasedProductIdList; // x0
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x21
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  Il2CppObject *current; // x20
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  UnityEngine_Purchasing_ProductCollection_o *v14; // x0
  __int64 v15; // x1
  UnityEngine_Purchasing_Product_o *v16; // x1
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5970116 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_2213A60(&UnityEngine_Purchasing_IStoreController_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_2213A60(&PurchaseLogic_TypeInfo);
    byte_5970116 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)product);
  if ( !AllPurchasedProductIdList )
    sub_2213CDC(0, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)AllPurchasedProductIdList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v19 = v18;
  v18.fields._list = 0;
  *(_QWORD *)&v18.fields._index = &v19;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v6 )
      break;
    storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
    if ( !storeController )
      sub_2213CDC(v6, v7);
    klass = storeController->klass;
    current = v19.fields._current;
    v11 = *(unsigned __int16 *)&storeController->klass->_2.rank;
    if ( *(_WORD *)&storeController->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((UnityEngine_Purchasing_IStoreController_c **)p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_11;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v13 = sub_224BC3C(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0);
    }
    v14 = (UnityEngine_Purchasing_ProductCollection_o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))v13)(
                                                          storeController,
                                                          *(_QWORD *)(v13 + 8));
    if ( !v14 )
      sub_2213CDC(0, v15);
    v16 = UnityEngine_Purchasing_ProductCollection__WithID(v14, (System_String_o *)current, 0);
    if ( v16 )
      PurchaseLogic__ConfirmPurchase((PurchaseLogic_o *)this, v16, v17);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


System_Collections_Generic_List_string__o *PurchaseLogicIOS__ConvertBankShopIdToProductId(
        PurchaseLogicIOS_o *this,
        System_Collections_Generic_IEnumerable_int__o *bankShopIDs,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x8
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 i; // x21
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  int32_t v27; // w1
  Il2CppObject *Entity; // x0
  Il2CppObject *v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v45; // [xsp+18h] [xbp-48h]

  if ( (byte_5970118 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_2213A60(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_17747/*"bankShopMaster is null"*/);
    byte_5970118 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( logErrorOutputActionSampledByRatio )
    {
      ((void (__fastcall *)(intptr_t, __int64, intptr_t, float))logErrorOutputActionSampledByRatio->fields.invoke_impl)(
        logErrorOutputActionSampledByRatio->fields.method_code,
        StringLiteral_17747/*"bankShopMaster is null"*/,
        logErrorOutputActionSampledByRatio->fields.method,
        0.01);
      return (System_Collections_Generic_List_string__o *)v5;
    }
LABEL_49:
    sub_2213CDC(Instance, v7);
  }
  if ( !bankShopIDs )
    goto LABEL_49;
  klass = bankShopIDs->klass;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v10 = *(unsigned __int16 *)&bankShopIDs->klass->_2.rank;
  if ( *(_WORD *)&bankShopIDs->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v10;
      p_offset += 4;
      if ( !v10 )
        goto LABEL_10;
    }
    v12 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v12 = sub_224BC3C(bankShopIDs, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v12)(
          bankShopIDs,
          *(_QWORD *)(v12 + 8));
  v45 = v14;
  if ( !v14 )
    sub_2213CDC(v14, v15);
  for ( i = v14; ; i = v45 )
  {
    v17 = *(_QWORD *)i;
    v18 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_20;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_20:
      v20 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(i, *(_QWORD *)(v20 + 8));
    if ( (v21 & 1) == 0 )
      break;
    if ( !v45 )
      sub_2213CDC(v21, v22);
    v23 = *(_QWORD *)v45;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v25 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_28;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_28:
      v26 = sub_224BC3C(v45, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v45, *(_QWORD *)(v26 + 8));
    Entity = DataMasterBase_object__object__int___GetEntity(
               v9,
               v27,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    if ( Entity )
    {
      if ( !v5
        || (items = v5->fields._items,
            v29 = (Il2CppObject *)Entity[2].klass,
            v37 = Method_System_Collections_Generic_List_string__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_2213CDC(Entity, v29);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          v29,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v29;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)v29, v30, v31, v32, v33, v34, v35);
      }
    }
  }
  if ( v45 )
  {
    v40 = *(_QWORD *)v45;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_43;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_43:
      v43 = sub_224BC3C(v45, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v43)(v45, *(_QWORD *)(v43 + 8));
  }
  return (System_Collections_Generic_List_string__o *)v5;
}


void PurchaseLogicIOS__DebugLog(PurchaseLogicIOS_o *this, System_String_o *log, const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x19

  if ( (byte_5970113 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&StringLiteral_15681/*"UnityIAP:"*/);
    byte_5970113 = 1;
  }
  v5 = (Il2CppObject *)System_String__Concat_75651716((System_String_o *)StringLiteral_15681/*"UnityIAP:"*/, log, 0);
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v4);
  UnityEngine_Debug__Log(v5, 0);
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
  __int64 v12; // x1
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x22
  Il2CppClass *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x22
  System_Byte_array *v22; // x22
  System_Byte_array *v23; // x24
  UnityEngine_Purchasing_Security_AppleValidator_o *v24; // x23
  __int64 v25; // x0
  __int64 v26; // x1
  PurchaseLogic_o *v27; // x0
  const MethodInfo *v28; // x1
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  Il2CppObject *id_k__BackingField; // x23
  UnityEngine_Purchasing_Security_AppleReceipt_o *v31; // x22
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0
  __int64 v33; // x1
  System_String_o *v34; // x2
  MethodInfo *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x23
  UnityEngine_Purchasing_IExtensionProvider_c *v41; // x8
  void *v42; // x24
  __int64 v43; // x9
  __int64 v44; // x1
  __int64 v45; // x2
  int32_t *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x23
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  System_String_o *v56; // x21
  const MethodInfo *v57; // x2
  System_String_o *TransactionIdFromOldStyleReceipt; // x23
  Il2CppObject *value; // [xsp+18h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_597010E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Purchasing_Security_AppleValidator_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___);
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&UnityEngine_Purchasing_IAppleConfiguration_TypeInfo);
    sub_2213A60(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&PurchaseLogic_TypeInfo);
    sub_2213A60(&PurchaseLogic_ReceiptContents_TypeInfo);
    sub_2213A60(&StringLiteral_11033/*"Payload"*/);
    sub_2213A60(&StringLiteral_11684/*"RawReceipt Decode Error. "*/);
    this = (PurchaseLogicIOS_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_597010E = 1;
  }
  value = 0;
  if ( !product )
    goto LABEL_57;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v6 = sub_2213CCC(PurchaseLogic_ReceiptContents_TypeInfo);
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
                                 (Il2CppObject *)StringLiteral_11033/*"Payload"*/,
                                 &value,
                                 (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( value )
    {
      if ( value->klass == (Il2CppClass *)qword_5984390 )
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
      StringLiteral_11684/*"RawReceipt Decode Error. "*/,
      logErrorOutputAction->fields.method);
  }
  v11 = (UnityEngine_Purchasing_ConfigurationBuilder_o *)((__int64 (__fastcall *)(PurchaseLogicIOS_o *, const MethodInfo *))v4->klass->vtable._10_GetConfigurationBuilder.methodPtr)(
                                                           v4,
                                                           v4->klass->vtable._10_GetConfigurationBuilder.method);
  if ( !v11 )
    sub_2213CDC(0, v12);
  v13 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
          v11,
          (const MethodInfo_382392C *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___);
  v15 = v13;
  if ( !v13 )
    sub_2213CDC(0, v14);
  klass = v13->klass;
  v17 = *(unsigned __int16 *)&v13->klass->_2.rank;
  if ( *(_WORD *)&v13->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IAppleConfiguration_c **)p_offset - 1) != UnityEngine_Purchasing_IAppleConfiguration_TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_21;
    }
    v19 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_21:
    v19 = sub_224BC3C(v13, UnityEngine_Purchasing_IAppleConfiguration_TypeInfo, 0);
  }
  v21 = (System_String_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8));
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v20);
  v22 = System_Convert__FromBase64String(v21, 0);
  v23 = UnityEngine_Purchasing_Security_AppleTangle__Data(0);
  v24 = (UnityEngine_Purchasing_Security_AppleValidator_o *)sub_2213CCC(UnityEngine_Purchasing_Security_AppleValidator_TypeInfo);
  UnityEngine_Purchasing_Security_AppleValidator___ctor(v24, v23, 0);
  if ( !v24 )
    sub_2213CDC(v25, v26);
  v27 = (PurchaseLogic_o *)UnityEngine_Purchasing_Security_AppleValidator__Validate(v24, v22, 0);
  definition_k__BackingField = product->fields._definition_k__BackingField;
  if ( !definition_k__BackingField )
    sub_2213CDC(v27, v28);
  id_k__BackingField = (Il2CppObject *)definition_k__BackingField->fields._id_k__BackingField;
  v31 = (UnityEngine_Purchasing_Security_AppleReceipt_o *)v27;
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(v27, v28);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
    sub_2213CDC(0, v33);
  this = (PurchaseLogicIOS_o *)System_Collections_Generic_List_object___Contains(
                                 (System_Collections_Generic_List_object__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
                                 id_k__BackingField,
                                 (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_55;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_2213CDC(this, product);
  v41 = storeExtensionProvider->klass;
  v42 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v43 = *(unsigned __int16 *)&storeExtensionProvider->klass->_2.rank;
  v44 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 4);
  v45 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 40);
  if ( *(_WORD *)&storeExtensionProvider->klass->_2.rank )
  {
    v46 = &v41->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)v46 - 1) != v44 )
    {
      --v43;
      v46 += 4;
      if ( !v43 )
        goto LABEL_34;
    }
    v47 = (__int64)&v41->vtable[*v46 + (int)v45];
  }
  else
  {
LABEL_34:
    v47 = sub_224BC3C(storeExtensionProvider, v44, v45);
  }
  v48 = sub_2213BAC(*(_QWORD *)(v47 + 8), v42);
  v49 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *))(v48 + 8))(storeExtensionProvider);
  v51 = v49;
  if ( !v49 )
    sub_2213CDC(0, v50);
  v52 = *(_QWORD *)v49;
  v53 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
  {
    v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
    while ( *((UnityEngine_Purchasing_IAppleExtensions_c **)v54 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      --v53;
      v54 += 4;
      if ( !v53 )
        goto LABEL_41;
    }
    v55 = v52 + 16LL * *v54 + 312;
  }
  else
  {
LABEL_41:
    v55 = sub_224BC3C(v49, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 0);
  }
  v56 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, UnityEngine_Purchasing_Product_o *, _QWORD))v55)(
                             v51,
                             product,
                             *(_QWORD *)(v55 + 8));
  TransactionIdFromOldStyleReceipt = PurchaseLogicIOS__GetTransactionIdFromOldStyleReceipt(v4, v56, v57);
  this = (PurchaseLogicIOS_o *)System_String__IsNullOrEmpty(TransactionIdFromOldStyleReceipt, 0);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (PurchaseLogicIOS_o *)PurchaseLogicIOS__CheckIfReceiptShouldBeSentInIOSOldStyle(
                                       this,
                                       v31,
                                       TransactionIdFromOldStyleReceipt,
                                       v35),
        ((unsigned __int8)this & 1) == 0) )
  {
LABEL_55:
    v56 = (System_String_o *)v9;
    if ( v6 )
      goto LABEL_56;
LABEL_57:
    sub_2213CDC(this, product);
  }
  if ( !v6 )
    sub_2213CDC(this, product);
  *(_QWORD *)(v6 + 56) = TransactionIdFromOldStyleReceipt;
  *(_BYTE *)(v6 + 48) = 1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v6 + 56),
    (int32_t)TransactionIdFromOldStyleReceipt,
    v34,
    (System_String_o *)v35,
    v36,
    v37,
    v38,
    v39);
LABEL_56:
  *(_QWORD *)(v6 + 32) = v56;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v6 + 32),
    (int32_t)v56,
    v34,
    (System_String_o *)v35,
    v36,
    v37,
    v38,
    v39);
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
  __int64 v13; // x1
  PurchaseLogicIOS___c_c *v14; // x0
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__12_0; // x25
  Il2CppObject *v17; // x26
  struct PurchaseLogicIOS___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x23
  __int64 v26; // x1
  PurchaseLogicIOS___c_c *v27; // x0
  struct PurchaseLogicIOS___c_StaticFields *v28; // x8
  System_Func_object__int__o *_9__12_1; // x25
  Il2CppObject *v30; // x26
  struct PurchaseLogicIOS___c_StaticFields *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Collections_Generic_IEnumerable_int__o *v38; // x0
  __int64 v39; // x1
  int32_t v40; // w8
  PurchaseLogicIOS___c_c *v41; // x0
  struct PurchaseLogicIOS___c_StaticFields *v42; // x8
  System_Func_object__int__o *_9__12_2; // x24
  Il2CppObject *v44; // x25
  struct PurchaseLogicIOS___c_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Collections_Generic_IEnumerable_int__o *v52; // x0
  __int64 v53; // x1
  int32_t v54; // w8
  PurchaseLogicIOS___c_c *v55; // x0
  struct PurchaseLogicIOS___c_StaticFields *v56; // x8
  System_Func_object__bool__o *_9__12_3; // x22
  Il2CppObject *v58; // x24
  struct PurchaseLogicIOS___c_StaticFields *v59; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  Il2CppObject *object; // x0
  __int64 v67; // x1
  int klass; // w9
  System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__c *v69; // x0
  System_Func_object__bool__o *v70; // x20
  int32_t v71; // w8

  if ( (byte_5970119 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_2213A60(&Method_System_Linq_Enumerable_First_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_2213A60(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    sub_2213A60(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    sub_2213A60(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__);
    sub_2213A60(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__);
    sub_2213A60(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__);
    sub_2213A60(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_3__);
    sub_2213A60(&Method_PurchaseLogicIOS___c__DisplayClass12_0__GetAddedStoneNum_b__4__);
    sub_2213A60(&PurchaseLogicIOS___c__DisplayClass12_0_TypeInfo);
    sub_2213A60(&PurchaseLogicIOS___c_TypeInfo);
    byte_5970119 = 1;
  }
  *shopId = 0;
  *chargeStoneNum = 0;
  *freeStoneNum = 0;
  *isSentPresentBox = 0;
  if ( purchaseResultArray )
  {
    v12 = sub_2213CCC(PurchaseLogicIOS___c__DisplayClass12_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0);
    v14 = PurchaseLogicIOS___c_TypeInfo;
    if ( !*(&PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo, v13);
      v14 = PurchaseLogicIOS___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__12_0 = (System_Func_object__bool__o *)static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !*(&v14->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v14, v13);
        static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__12_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__12_0, v17, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__, 0);
      v18 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v18->__9__12_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__12_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->__9__12_0, (int32_t)_9__12_0, v19, v20, v21, v22, v23, v24);
    }
    v25 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
            (System_Func_TSource__bool__o *)_9__12_0,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    if ( System_Linq_Enumerable__Count_object_(
           v25,
           (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_PurchaseByBank_UnityIap_Request_PurchaseResult___) >= 1 )
    {
      v27 = PurchaseLogicIOS___c_TypeInfo;
      if ( !*(&PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo, v26);
        v27 = PurchaseLogicIOS___c_TypeInfo;
      }
      v28 = v27->static_fields;
      _9__12_1 = (System_Func_object__int__o *)v28->__9__12_1;
      if ( !_9__12_1 )
      {
        if ( !*(&v27->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v27, v26);
          v28 = PurchaseLogicIOS___c_TypeInfo->static_fields;
        }
        v30 = (Il2CppObject *)v28->__9;
        _9__12_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
        System_Func_object__int____ctor(_9__12_1, v30, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__, 0);
        v31 = PurchaseLogicIOS___c_TypeInfo->static_fields;
        v31->__9__12_1 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v31->__9__12_1,
          (int32_t)_9__12_1,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
      }
      v38 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v25,
                                                               (System_Func_TSource__TResult__o *)_9__12_1,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
      v40 = System_Linq_Enumerable__Sum(v38, 0);
      v41 = PurchaseLogicIOS___c_TypeInfo;
      *freeStoneNum = v40;
      if ( !*(&v41->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v41, v39);
        v41 = PurchaseLogicIOS___c_TypeInfo;
      }
      v42 = v41->static_fields;
      _9__12_2 = (System_Func_object__int__o *)v42->__9__12_2;
      if ( !_9__12_2 )
      {
        if ( !*(&v41->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v41, v39);
          v42 = PurchaseLogicIOS___c_TypeInfo->static_fields;
        }
        v44 = (Il2CppObject *)v42->__9;
        _9__12_2 = (System_Func_object__int__o *)sub_2213CCC(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
        System_Func_object__int____ctor(_9__12_2, v44, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__, 0);
        v45 = PurchaseLogicIOS___c_TypeInfo->static_fields;
        v45->__9__12_2 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_2;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v45->__9__12_2,
          (int32_t)_9__12_2,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
      }
      v52 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v25,
                                                               (System_Func_TSource__TResult__o *)_9__12_2,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
      v54 = System_Linq_Enumerable__Sum(v52, 0);
      v55 = PurchaseLogicIOS___c_TypeInfo;
      *chargeStoneNum = v54;
      if ( !*(&v55->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v55, v53);
        v55 = PurchaseLogicIOS___c_TypeInfo;
      }
      v56 = v55->static_fields;
      _9__12_3 = (System_Func_object__bool__o *)v56->__9__12_3;
      if ( !_9__12_3 )
      {
        if ( !*(&v55->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v55, v53);
          v56 = PurchaseLogicIOS___c_TypeInfo->static_fields;
        }
        v58 = (Il2CppObject *)v56->__9;
        _9__12_3 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__12_3, v58, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_3__, 0);
        v59 = PurchaseLogicIOS___c_TypeInfo->static_fields;
        v59->__9__12_3 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__12_3;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v59->__9__12_3,
          (int32_t)_9__12_3,
          v60,
          v61,
          v62,
          v63,
          v64,
          v65);
      }
      *isSentPresentBox = System_Linq_Enumerable__Any_object__59145568(
                            v25,
                            (System_Func_TSource__bool__o *)_9__12_3,
                            (const MethodInfo_3867D60 *)Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___);
      object = System_Linq_Enumerable__First_object_(
                 v25,
                 (const MethodInfo_387FC04 *)Method_System_Linq_Enumerable_First_PurchaseByBank_UnityIap_Request_PurchaseResult___);
      if ( !object || !v12 )
        sub_2213CDC(object, v67);
      klass = (int)object[1].klass;
      v69 = System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo;
      *(_DWORD *)(v12 + 16) = klass;
      v70 = (System_Func_object__bool__o *)sub_2213CCC(v69);
      System_Func_object__bool____ctor(
        v70,
        (Il2CppObject *)v12,
        Method_PurchaseLogicIOS___c__DisplayClass12_0__GetAddedStoneNum_b__4__,
        0);
      if ( System_Linq_Enumerable__Any_object__59145568(
             v25,
             (System_Func_TSource__bool__o *)v70,
             (const MethodInfo_3867D60 *)Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___) )
      {
        v71 = 0;
      }
      else
      {
        v71 = *(_DWORD *)(v12 + 16);
      }
      *shopId = v71;
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
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v7; // x22
  struct PurchaseLogicIOS___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_int__o *v15; // x1
  const MethodInfo *v16; // x2
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x8
  System_Collections_Generic_List_object__o *v19; // x19

  v2 = this;
  if ( (byte_5970117 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    sub_2213A60(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__);
    sub_2213A60(&PurchaseLogicIOS___c_TypeInfo);
    this = (PurchaseLogicIOS_o *)sub_2213A60(&StringLiteral_17251/*"_purchaseResultArray is null"*/);
    byte_5970117 = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields._purchaseResultArray;
  if ( purchaseResultArray )
  {
    v4 = PurchaseLogicIOS___c_TypeInfo;
    if ( !*(&PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo, method);
      v4 = PurchaseLogicIOS___c_TypeInfo;
    }
    static_fields = v4->static_fields;
    _9__10_0 = (System_Func_object__int__o *)static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !*(&v4->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v4, method);
        static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v7 = (Il2CppObject *)static_fields->__9;
      _9__10_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__10_0,
        v7,
        Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__,
        0);
      v8 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v8->__9__10_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__10_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__10_0, (int32_t)_9__10_0, v9, v10, v11, v12, v13, v14);
    }
    v15 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                             purchaseResultArray,
                                                             (System_Func_TSource__TResult__o *)_9__10_0,
                                                             (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    return PurchaseLogicIOS__ConvertBankShopIdToProductId(v2, v15, v16);
  }
  else
  {
    logErrorOutputActionSampledByRatio = v2->fields._logErrorOutputActionSampledByRatio;
    if ( !logErrorOutputActionSampledByRatio )
      sub_2213CDC(this, method);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t, float))logErrorOutputActionSampledByRatio->fields.invoke_impl)(
      logErrorOutputActionSampledByRatio->fields.method_code,
      StringLiteral_17251/*"_purchaseResultArray is null"*/,
      logErrorOutputActionSampledByRatio->fields.method,
      0.01);
    v19 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v19;
  }
}


System_String_o *PurchaseLogicIOS__GetTransactionIdFromOldStyleReceipt(
        PurchaseLogicIOS_o *this,
        System_String_o *iOSOldStylePayloadStr,
        const MethodInfo *method)
{
  System_Byte_array *v4; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v6; // x1
  System_String_o *v7; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_Dictionary_string__object__o *v9; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  System_Byte_array *v12; // x21
  System_Text_Encoding_o *v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x0
  const MethodInfo *v16; // x1
  System_Collections_Generic_Dictionary_string__object__o *v17; // x0
  __int64 v18; // x1
  Il2CppObject *v21; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5970110 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_24011/*"purchase-info"*/);
    sub_2213A60(&StringLiteral_25474/*"transaction-id"*/);
    byte_5970110 = 1;
  }
  v21 = 0;
  value = 0;
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, iOSOldStylePayloadStr);
  v4 = System_Convert__FromBase64String(iOSOldStylePayloadStr, 0);
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_2213CDC(0, v6);
  v7 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, const MethodInfo *))UTF8->klass->vtable._35_GetString.methodPtr)(
                            UTF8,
                            v4,
                            UTF8->klass->vtable._35_GetString.method);
  v9 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v7, v8);
  if ( !v9 )
    sub_2213CDC(0, v10);
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)v9,
    (Il2CppObject *)StringLiteral_24011/*"purchase-info"*/,
    &value,
    (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( value )
  {
    if ( value->klass == (Il2CppClass *)qword_5984390 )
      v11 = value;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
  }
  v12 = System_Convert__FromBase64String((System_String_o *)v11, 0);
  v13 = System_Text_Encoding__get_UTF8(0);
  if ( !v13 )
    sub_2213CDC(0, v14);
  v15 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, const MethodInfo *))v13->klass->vtable._35_GetString.methodPtr)(
                             v13,
                             v12,
                             v13->klass->vtable._35_GetString.method);
  v17 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v15, v16);
  if ( !v17 )
    sub_2213CDC(0, v18);
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)v17,
    (Il2CppObject *)StringLiteral_25474/*"transaction-id"*/,
    &v21,
    (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( !v21 )
    return 0;
  if ( v21->klass == (Il2CppClass *)qword_5984390 )
    return (System_String_o *)v21;
  return 0;
}


bool PurchaseLogicIOS__IsDeferredPurchaseExists(PurchaseLogicIOS_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0

  if ( (byte_597011B & 1) == 0 )
  {
    this = (PurchaseLogicIOS_o *)sub_2213A60(&Method_System_Linq_Enumerable_Any_string___);
    byte_597011B = 1;
  }
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)this,
                                                method);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
           (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_string___);
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
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  struct System_String_o *id_k__BackingField; // x1
  System_String_o **v16; // x20
  __int64 v17; // x1
  PurchaseBehaviour_c *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *BankShopEntityCollection; // x22
  System_Func_object__bool__o *v20; // x23
  Il2CppObject *v21; // x0
  const MethodInfo *v22; // x2
  int32_t klass; // w21
  const MethodInfo *v24; // x7

  if ( (byte_597011A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
    sub_2213A60(&System_Func_BankShopEntity__bool__TypeInfo);
    sub_2213A60(&PurchaseBehaviour_TypeInfo);
    sub_2213A60(&Method_PurchaseLogicIOS___c__DisplayClass14_0__OnDeferred_b__0__);
    sub_2213A60(&PurchaseLogicIOS___c__DisplayClass14_0_TypeInfo);
    byte_597011A = 1;
  }
  v5 = sub_2213CCC(PurchaseLogicIOS___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !product || (definition_k__BackingField = product->fields._definition_k__BackingField) == 0 || !v5 )
    sub_2213CDC(v6, v7);
  id_k__BackingField = definition_k__BackingField->fields._id_k__BackingField;
  *(_QWORD *)(v5 + 16) = id_k__BackingField;
  v16 = (System_String_o **)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)id_k__BackingField, v8, v9, v10, v11, v12, v13);
  v18 = PurchaseBehaviour_TypeInfo;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v17);
    v18 = PurchaseBehaviour_TypeInfo;
  }
  BankShopEntityCollection = (System_Collections_Generic_IEnumerable_TSource__o *)v18->static_fields->BankShopEntityCollection;
  v20 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BankShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v5,
    Method_PurchaseLogicIOS___c__DisplayClass14_0__OnDeferred_b__0__,
    0);
  v21 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
          BankShopEntityCollection,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
  if ( v21 )
    klass = (int32_t)v21[1].klass;
  else
    klass = 0;
  PurchaseLogic__AddDeferredPurchaseProductIdsToPlayerPrefs((PurchaseLogic_o *)v21, *v16, v22);
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear((PurchaseLogic_o *)this, 5, 0, 0, 0, klass, 0, v24);
}


System_Collections_Generic_Dictionary_string__object__o *PurchaseLogicIOS__ParseIOSOldStyleReceipt(
        System_String_o *str,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x19
  void *v4; // x0
  __int64 v5; // x1
  int v6; // w8
  _DWORD *v7; // x20
  int i; // w28
  char *v9; // x8
  System_String_o *v10; // x21
  _DWORD *v11; // x21
  Il2CppObject *v12; // x22

  if ( (byte_5970111 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&StringLiteral_1825/*"="*/);
    sub_2213A60(&StringLiteral_1568/*";"*/);
    sub_2213A60(&StringLiteral_366/*"\""*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970111 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !str || (v4 = System_String__Split(str, 0xAu, 0, 0)) == 0 )
LABEL_22:
    sub_2213CDC(v4, v5);
  v6 = *((_DWORD *)v4 + 6);
  v7 = v4;
  if ( v6 >= 1 )
  {
    for ( i = 0; i < v6; ++i )
    {
      if ( i >= (unsigned int)v6 )
LABEL_23:
        sub_2213CE4(v4);
      v9 = (char *)&v7[2 * i];
      v10 = (System_String_o *)*((_QWORD *)v9 + 4);
      if ( !v10 )
        goto LABEL_22;
      v4 = (void *)System_String__Contains(*((System_String_o **)v9 + 4), (System_String_o *)StringLiteral_1825/*"="*/, 0);
      if ( ((unsigned __int8)v4 & 1) != 0 )
      {
        v4 = System_String__Replace_75703400(
               v10,
               (System_String_o *)StringLiteral_1568/*";"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0);
        if ( !v4 )
          goto LABEL_22;
        v4 = System_String__Split((System_String_o *)v4, 0x3Du, 0, 0);
        if ( v4 )
        {
          v11 = v4;
          if ( *((int *)v4 + 6) >= 2 )
          {
            v4 = (void *)*((_QWORD *)v4 + 4);
            if ( !v4 )
              goto LABEL_22;
            v4 = System_String__Replace_75703400(
                   (System_String_o *)v4,
                   (System_String_o *)StringLiteral_366/*"\""*/,
                   (System_String_o *)StringLiteral_1/*""*/,
                   0);
            if ( !v4 )
              goto LABEL_22;
            v4 = System_String__Trim((System_String_o *)v4, 0);
            if ( (v11[6] & 0xFFFFFFFE) == 0 )
              goto LABEL_23;
            v12 = (Il2CppObject *)v4;
            v4 = (void *)*((_QWORD *)v11 + 5);
            if ( !v4 )
              goto LABEL_22;
            v4 = System_String__Replace_75703400(
                   (System_String_o *)v4,
                   (System_String_o *)StringLiteral_366/*"\""*/,
                   (System_String_o *)StringLiteral_1/*""*/,
                   0);
            if ( !v4 )
              goto LABEL_22;
            v4 = System_String__Trim((System_String_o *)v4, 0);
            if ( !v3 )
              goto LABEL_22;
            System_Collections_Generic_Dictionary_object__object___Add(
              v3,
              v12,
              (Il2CppObject *)v4,
              (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
          }
        }
      }
      v6 = v7[6];
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
  __int64 v7; // x1
  Il2CppObject *current; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v10; // x3
  __int64 v11; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v12; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5970115 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_5970115 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)paymentProductId);
  if ( !AllPurchasedProductIdList )
    sub_2213CDC(0, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)AllPurchasedProductIdList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v11 = 0;
  v12 = &v13;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v13.fields._current;
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)v13.fields._current, 0);
    if ( !IsNullOrEmpty )
      PurchaseLogic__SendPurchaseAction(
        (PurchaseLogic_o *)IsNullOrEmpty,
        (System_String_o *)current,
        transactionId,
        v10);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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
  if ( (byte_5970112 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10019/*"OK"*/);
    sub_2213A60(&StringLiteral_26910/*"購入処理中に問題が発生しました"*/);
    sub_2213A60(&StringLiteral_26908/*"購入できません"*/);
    sub_2213A60(&StringLiteral_26909/*"購入処理中です、完了までお待ち下さい"*/);
    sub_2213A60(&StringLiteral_2403/*"App内の購入が機能制限されています"*/);
    sub_2213A60(&StringLiteral_26881/*"指定されたプロダクトデータが取得できませんでした"*/);
    byte_5970112 = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void PurchaseLogicIOS__UpdateMonthlyPurchasePrice(
        PurchaseLogicIOS_o *this,
        int32_t bankShopId,
        const MethodInfo *method)
{
  PurchaseLogicIOS___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x20
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__7_0; // x21
  Il2CppObject *v8; // x22
  struct PurchaseLogicIOS___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v19; // x20
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
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
  __int64 v39; // [xsp+18h] [xbp-38h]

  if ( (byte_5970114 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    sub_2213A60(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__);
    sub_2213A60(&PurchaseLogicIOS___c_TypeInfo);
    byte_5970114 = 1;
  }
  v4 = PurchaseLogicIOS___c_TypeInfo;
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._purchaseResultArray;
  if ( !*(&PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo, *(_QWORD *)&bankShopId);
    v4 = PurchaseLogicIOS___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__7_0 = (System_Func_object__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, *(_QWORD *)&bankShopId);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v8, Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__, 0);
    v9 = PurchaseLogicIOS___c_TypeInfo->static_fields;
    v9->__9__7_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__7_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__7_0, (int32_t)_9__7_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Select_object__int_(
          purchaseResultArray,
          (System_Func_TSource__TResult__o *)_9__7_0,
          (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
  if ( !v16 )
    sub_2213CDC(0, v17);
  klass = v16->klass;
  v19 = v16;
  v20 = *(unsigned __int16 *)&v16->klass->_2.rank;
  if ( *(_WORD *)&v16->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_14;
    }
    v22 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v22 = sub_224BC3C(v16, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v22)(
          v19,
          *(_QWORD *)(v22 + 8));
  v39 = v23;
  while ( 1 )
  {
    if ( !v39 )
      sub_2213CDC(v23, v24);
    v25 = *(_QWORD *)v39;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_22;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_22:
      v28 = sub_224BC3C(v39, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v39, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v39;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v31 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_29;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_29:
      v32 = sub_224BC3C(v39, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v39, *(_QWORD *)(v32 + 8));
    PurchaseLogic__UpdateMonthlyPurchasePrice((PurchaseLogic_o *)this, v33, v34);
  }
  v35 = *(_QWORD *)v39;
  v36 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
  {
    v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_36;
    }
    v38 = v35 + 16LL * *v37 + 312;
  }
  else
  {
LABEL_36:
    v38 = sub_224BC3C(v39, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v38)(v39, *(_QWORD *)(v38 + 8));
}


void PurchaseLogicIOS___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597011C & 1) == 0 )
  {
    sub_2213A60(&PurchaseLogicIOS___c_TypeInfo);
    byte_597011C = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(PurchaseLogicIOS___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PurchaseLogicIOS___c_TypeInfo->static_fields->__9 = (struct PurchaseLogicIOS___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)PurchaseLogicIOS___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_597011D & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c_o *)sub_2213A60(&System_DateTime_TypeInfo);
    byte_597011D = 1;
  }
  if ( !r )
    sub_2213CDC(this, r);
  dateData = r->fields._cancellationDate_k__BackingField.fields._dateData;
  v5 = r->fields._purchaseDate_k__BackingField.fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, r);
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
    sub_2213CDC(this, 0);
  return !x->fields.isCommitedAlready;
}


int32_t PurchaseLogicIOS___c___GetAddedStoneNum_b__12_1(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.freeStoneNum;
}


int32_t PurchaseLogicIOS___c___GetAddedStoneNum_b__12_2(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.chargeStoneNum;
}


bool PurchaseLogicIOS___c___GetAddedStoneNum_b__12_3(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.isSentPresentBox;
}


int32_t PurchaseLogicIOS___c___GetAllPurchasedProductIdList_b__10_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.purchasedBankShopId;
}


int32_t PurchaseLogicIOS___c___UpdateMonthlyPurchasePrice_b__7_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return System_String__Equals_75687332(this->fields.productId, bankShop->fields.googleShopId, 4, 0);
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
  if ( (byte_597011E & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c__DisplayClass2_0_o *)sub_2213A60(&System_DateTime_TypeInfo);
    byte_597011E = 1;
  }
  if ( !r )
    sub_2213CDC(this, r);
  dateData = r->fields._cancellationDate_k__BackingField.fields._dateData;
  v6 = r->fields._purchaseDate_k__BackingField.fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, r);
  v7.fields._dateData = dateData;
  v8.fields._dateData = v6;
  return System_DateTime__op_LessThanOrEqual(v7, v8, 0)
      && System_String__op_Equality(
           r->fields._transactionID_k__BackingField,
           v4->fields.transactionIdInOldStyleReceipt,
           0);
}