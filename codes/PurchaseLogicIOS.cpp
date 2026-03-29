bool PurchaseLogicIOS__CheckIfReceiptShouldBeSentInIOSOldStyle(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Security_AppleReceipt_o *receipt,
        System_String_o *transactionIdInOldStyleReceipt,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *inAppPurchaseReceipts; // x21
  void *monitor; // x8
  PurchaseLogicIOS___c_c *v17; // x0
  System_Func_object__bool__o *_9__2_0; // x22
  Il2CppObject *v19; // x23
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  bool v27; // w0
  System_Object_array *v28; // x19
  bool v29; // w21
  System_Func_object__bool__o *v30; // x22
  bool v31; // w0

  if ( (byte_4D3032E & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_AppleInAppPurchaseReceipt___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___);
    sub_1C93AD4(&System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
    sub_1C93AD4(&Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__);
    sub_1C93AD4(&Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__);
    sub_1C93AD4(&PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo);
    sub_1C93AD4(&PurchaseLogicIOS___c_TypeInfo);
    byte_4D3032E = 1;
  }
  v6 = sub_1C93D20(PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_1C93D2C(v7, v8);
  *(_QWORD *)(v6 + 16) = transactionIdInOldStyleReceipt;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)(v6 + 16),
    (int32_t)transactionIdInOldStyleReceipt,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
  v17 = PurchaseLogicIOS___c_TypeInfo;
  if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
    v17 = PurchaseLogicIOS___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__bool__o *)v17->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = PurchaseLogicIOS___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__2_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__2_0,
      v19,
      Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__,
      0);
    static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_AppleInAppPurchaseReceipt__bool__o *)_9__2_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v21, v22, v23, v24, v25, v26);
  }
  v27 = System_Linq_Enumerable__All_object_(
          inAppPurchaseReceipts,
          (System_Func_TSource__bool__o *)_9__2_0,
          (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___);
  v28 = (System_Object_array *)receipt->fields.inAppPurchaseReceipts;
  v29 = v27;
  v30 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v30,
    (Il2CppObject *)v6,
    Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__,
    0);
  v31 = BasicHelper__Any_object__51960868(
          v28,
          (System_Func_T__bool__o *)v30,
          (const MethodInfo_318DC24 *)Method_BasicHelper_Any_AppleInAppPurchaseReceipt___);
  return v29 || !v31;
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

  if ( (byte_4D30335 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C93AD4(&UnityEngine_Purchasing_IStoreController_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C93AD4(&PurchaseLogic_TypeInfo);
    byte_4D30335 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)product);
  if ( !AllPurchasedProductIdList )
    sub_1C93D2C(0, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)AllPurchasedProductIdList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v6 )
      break;
    storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
    if ( !storeController )
      sub_1C93D2C(v6, v7);
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
      v13 = sub_1C69E5C(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0);
    }
    v14 = (UnityEngine_Purchasing_ProductCollection_o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))v13)(
                                                          storeController,
                                                          *(_QWORD *)(v13 + 8));
    if ( !v14 )
      sub_1C93D2C(0, v15);
    v16 = UnityEngine_Purchasing_ProductCollection__WithID(v14, (System_String_o *)current, 0);
    if ( v16 )
      PurchaseLogic__ConfirmPurchase((PurchaseLogic_o *)this, v16, v17);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x8
  __int64 v14; // x1
  __int64 v15; // x20
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  int32_t v24; // w1
  Il2CppObject *Entity; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  Il2CppObject *v33; // x1
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0

  if ( (byte_4D30337 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_1C93AD4(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_17145/*"bankShopMaster is null"*/);
    byte_4D30337 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( logErrorOutputActionSampledByRatio )
    {
      ((void (__fastcall *)(intptr_t, __int64, intptr_t, float))logErrorOutputActionSampledByRatio->fields.invoke_impl)(
        logErrorOutputActionSampledByRatio->fields.method_code,
        StringLiteral_17145/*"bankShopMaster is null"*/,
        logErrorOutputActionSampledByRatio->fields.method,
        0.01);
      return (System_Collections_Generic_List_string__o *)v5;
    }
LABEL_44:
    sub_1C93D2C(Instance, v7);
  }
  if ( !bankShopIDs )
    goto LABEL_44;
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
    v12 = sub_1C69E5C(bankShopIDs, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v12)(
          bankShopIDs,
          *(_QWORD *)(v12 + 8));
  if ( !v15 )
    sub_1C93D2C(0, v14);
  while ( 1 )
  {
    v16 = *(_QWORD *)v15;
    v17 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_19;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_19:
      v19 = sub_1C69E5C(v15, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8)) & 1) == 0 )
      break;
    v20 = *(_QWORD *)v15;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v22 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_26;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_26:
      v23 = sub_1C69E5C(v15, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
    Entity = DataMasterBase_object__object__int___GetEntity(
               v9,
               v24,
               (const MethodInfo_3463274 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    if ( Entity )
    {
      if ( !v5 )
        sub_1C93D2C(Entity, v26);
      v33 = (Il2CppObject *)Entity[2].klass;
      items = v5->fields._items;
      v35 = Method_System_Collections_Generic_List_string__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C93D2C(Entity, v33);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          v33,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v33;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v37 + 4), (int32_t)v33, v27, v28, v29, v30, v31, v32);
      }
    }
  }
  v38 = *(_QWORD *)v15;
  v39 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
  {
    v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_38;
    }
    v41 = v38 + 16LL * *v40 + 312;
  }
  else
  {
LABEL_38:
    v41 = sub_1C69E5C(v15, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v41)(v15, *(_QWORD *)(v41 + 8));
  return (System_Collections_Generic_List_string__o *)v5;
}


void PurchaseLogicIOS__DebugLog(PurchaseLogicIOS_o *this, System_String_o *log, const MethodInfo *method)
{
  Il2CppObject *v4; // x19

  if ( (byte_4D30332 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&StringLiteral_15184/*"UnityIAP:"*/);
    byte_4D30332 = 1;
  }
  v4 = (Il2CppObject *)System_String__Concat_64425724((System_String_o *)StringLiteral_15184/*"UnityIAP:"*/, log, 0);
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
  __int64 v12; // x1
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x22
  Il2CppClass *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  System_String_o *v20; // x22
  System_Byte_array *v21; // x22
  System_Byte_array *v22; // x24
  UnityEngine_Purchasing_Security_AppleValidator_o *v23; // x23
  __int64 v24; // x0
  __int64 v25; // x1
  PurchaseLogic_o *v26; // x0
  const MethodInfo *v27; // x1
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  Il2CppObject *id_k__BackingField; // x23
  UnityEngine_Purchasing_Security_AppleReceipt_o *v30; // x22
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x23
  UnityEngine_Purchasing_IExtensionProvider_c *v40; // x8
  void *v41; // x24
  __int64 v42; // x9
  __int64 v43; // x1
  __int64 v44; // x2
  int32_t *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x23
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  System_String_o *v55; // x21
  const MethodInfo *v56; // x2
  System_String_o *TransactionIdFromOldStyleReceipt; // x23
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4D3032D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Purchasing_Security_AppleValidator_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___);
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C93AD4(&UnityEngine_Purchasing_IAppleConfiguration_TypeInfo);
    sub_1C93AD4(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C93AD4(&PurchaseLogic_TypeInfo);
    sub_1C93AD4(&PurchaseLogic_ReceiptContents_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_10661/*"Payload"*/);
    sub_1C93AD4(&StringLiteral_11281/*"RawReceipt Decode Error. "*/);
    this = (PurchaseLogicIOS_o *)sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D3032D = 1;
  }
  value = 0;
  if ( !product )
    goto LABEL_57;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v6 = sub_1C93D20(PurchaseLogic_ReceiptContents_TypeInfo);
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
                                 (Il2CppObject *)StringLiteral_10661/*"Payload"*/,
                                 &value,
                                 (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
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
      StringLiteral_11281/*"RawReceipt Decode Error. "*/,
      logErrorOutputAction->fields.method);
  }
  v11 = (UnityEngine_Purchasing_ConfigurationBuilder_o *)((__int64 (__fastcall *)(PurchaseLogicIOS_o *, const MethodInfo *))v4->klass->vtable._10_GetConfigurationBuilder.methodPtr)(
                                                           v4,
                                                           v4->klass->vtable._10_GetConfigurationBuilder.method);
  if ( !v11 )
    sub_1C93D2C(0, v12);
  v13 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
          v11,
          (const MethodInfo_319CE88 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___);
  v15 = v13;
  if ( !v13 )
    sub_1C93D2C(0, v14);
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
    v19 = sub_1C69E5C(v13, UnityEngine_Purchasing_IAppleConfiguration_TypeInfo, 0);
  }
  v20 = (System_String_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8));
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v21 = System_Convert__FromBase64String(v20, 0);
  v22 = UnityEngine_Purchasing_Security_AppleTangle__Data(0);
  v23 = (UnityEngine_Purchasing_Security_AppleValidator_o *)sub_1C93D20(UnityEngine_Purchasing_Security_AppleValidator_TypeInfo);
  UnityEngine_Purchasing_Security_AppleValidator___ctor(v23, v22, 0);
  if ( !v23 )
    sub_1C93D2C(v24, v25);
  v26 = (PurchaseLogic_o *)UnityEngine_Purchasing_Security_AppleValidator__Validate(v23, v21, 0);
  definition_k__BackingField = product->fields._definition_k__BackingField;
  if ( !definition_k__BackingField )
    sub_1C93D2C(v26, v27);
  id_k__BackingField = (Il2CppObject *)definition_k__BackingField->fields._id_k__BackingField;
  v30 = (UnityEngine_Purchasing_Security_AppleReceipt_o *)v26;
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(v26, v27);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
    sub_1C93D2C(0, v32);
  this = (PurchaseLogicIOS_o *)System_Collections_Generic_List_object___Contains(
                                 (System_Collections_Generic_List_object__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
                                 id_k__BackingField,
                                 (const MethodInfo_3879D2C *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_55;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_1C93D2C(this, product);
  v40 = storeExtensionProvider->klass;
  v41 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v42 = *(unsigned __int16 *)&storeExtensionProvider->klass->_2.rank;
  v43 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 4);
  v44 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 40);
  if ( *(_WORD *)&storeExtensionProvider->klass->_2.rank )
  {
    v45 = &v40->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)v45 - 1) != v43 )
    {
      --v42;
      v45 += 4;
      if ( !v42 )
        goto LABEL_34;
    }
    v46 = (__int64)&v40->vtable[*v45 + (int)v44];
  }
  else
  {
LABEL_34:
    v46 = sub_1C69E5C(storeExtensionProvider, v43, v44);
  }
  v47 = sub_1C93C08(*(_QWORD *)(v46 + 8), v41);
  v48 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *))(v47 + 8))(storeExtensionProvider);
  v50 = v48;
  if ( !v48 )
    sub_1C93D2C(0, v49);
  v51 = *(_QWORD *)v48;
  v52 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
  {
    v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
    while ( *((UnityEngine_Purchasing_IAppleExtensions_c **)v53 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_41;
    }
    v54 = v51 + 16LL * *v53 + 312;
  }
  else
  {
LABEL_41:
    v54 = sub_1C69E5C(v48, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 0);
  }
  v55 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, UnityEngine_Purchasing_Product_o *, _QWORD))v54)(
                             v50,
                             product,
                             *(_QWORD *)(v54 + 8));
  TransactionIdFromOldStyleReceipt = PurchaseLogicIOS__GetTransactionIdFromOldStyleReceipt(v4, v55, v56);
  this = (PurchaseLogicIOS_o *)System_String__IsNullOrEmpty(TransactionIdFromOldStyleReceipt, 0);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (PurchaseLogicIOS_o *)PurchaseLogicIOS__CheckIfReceiptShouldBeSentInIOSOldStyle(
                                       this,
                                       v30,
                                       TransactionIdFromOldStyleReceipt,
                                       v34),
        ((unsigned __int8)this & 1) == 0) )
  {
LABEL_55:
    v55 = (System_String_o *)v9;
    if ( v6 )
      goto LABEL_56;
LABEL_57:
    sub_1C93D2C(this, product);
  }
  if ( !v6 )
    sub_1C93D2C(this, product);
  *(_QWORD *)(v6 + 56) = TransactionIdFromOldStyleReceipt;
  *(_BYTE *)(v6 + 48) = 1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)(v6 + 56),
    (int32_t)TransactionIdFromOldStyleReceipt,
    v33,
    (int32_t)v34,
    v35,
    v36,
    v37,
    v38);
LABEL_56:
  *(_QWORD *)(v6 + 32) = v55;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 32), (int32_t)v55, v33, (int32_t)v34, v35, v36, v37, v38);
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
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x23
  PurchaseLogicIOS___c_c *v24; // x0
  System_Func_object__int__o *_9__12_1; // x25
  Il2CppObject *v26; // x26
  struct PurchaseLogicIOS___c_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_IEnumerable_int__o *v34; // x0
  PurchaseLogicIOS___c_c *v35; // x0
  System_Func_object__int__o *_9__12_2; // x24
  Il2CppObject *v37; // x25
  struct PurchaseLogicIOS___c_StaticFields *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Collections_Generic_IEnumerable_int__o *v45; // x0
  PurchaseLogicIOS___c_c *v46; // x0
  System_Func_object__bool__o *_9__12_3; // x22
  Il2CppObject *v48; // x24
  struct PurchaseLogicIOS___c_StaticFields *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  Il2CppObject *object; // x0
  __int64 v57; // x1
  System_Func_object__bool__o *v58; // x20
  int32_t v59; // w8

  if ( (byte_4D30338 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_First_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_1C93AD4(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    sub_1C93AD4(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    sub_1C93AD4(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__);
    sub_1C93AD4(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__);
    sub_1C93AD4(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__);
    sub_1C93AD4(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_3__);
    sub_1C93AD4(&Method_PurchaseLogicIOS___c__DisplayClass12_0__GetAddedStoneNum_b__4__);
    sub_1C93AD4(&PurchaseLogicIOS___c__DisplayClass12_0_TypeInfo);
    sub_1C93AD4(&PurchaseLogicIOS___c_TypeInfo);
    byte_4D30338 = 1;
  }
  *shopId = 0;
  *chargeStoneNum = 0;
  *freeStoneNum = 0;
  *isSentPresentBox = 0;
  if ( purchaseResultArray )
  {
    v12 = sub_1C93D20(PurchaseLogicIOS___c__DisplayClass12_0_TypeInfo);
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
      _9__12_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__12_0, v15, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__, 0);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      static_fields->__9__12_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__12_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__12_0,
        (int32_t)_9__12_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    v23 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
            (System_Func_TSource__bool__o *)_9__12_0,
            (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    if ( System_Linq_Enumerable__Count_object_(
           v23,
           (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_PurchaseByBank_UnityIap_Request_PurchaseResult___) >= 1 )
    {
      v24 = PurchaseLogicIOS___c_TypeInfo;
      if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
        v24 = PurchaseLogicIOS___c_TypeInfo;
      }
      _9__12_1 = (System_Func_object__int__o *)v24->static_fields->__9__12_1;
      if ( !_9__12_1 )
      {
        if ( !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          v24 = PurchaseLogicIOS___c_TypeInfo;
        }
        v26 = (Il2CppObject *)v24->static_fields->__9;
        _9__12_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
        System_Func_object__int____ctor(_9__12_1, v26, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__, 0);
        v27 = PurchaseLogicIOS___c_TypeInfo->static_fields;
        v27->__9__12_1 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_1;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v27->__9__12_1, (int32_t)_9__12_1, v28, v29, v30, v31, v32, v33);
      }
      v34 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v23,
                                                               (System_Func_TSource__TResult__o *)_9__12_1,
                                                               (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
      *freeStoneNum = System_Linq_Enumerable__Sum(v34, 0);
      v35 = PurchaseLogicIOS___c_TypeInfo;
      if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
        v35 = PurchaseLogicIOS___c_TypeInfo;
      }
      _9__12_2 = (System_Func_object__int__o *)v35->static_fields->__9__12_2;
      if ( !_9__12_2 )
      {
        if ( !v35->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v35);
          v35 = PurchaseLogicIOS___c_TypeInfo;
        }
        v37 = (Il2CppObject *)v35->static_fields->__9;
        _9__12_2 = (System_Func_object__int__o *)sub_1C93D20(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
        System_Func_object__int____ctor(_9__12_2, v37, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__, 0);
        v38 = PurchaseLogicIOS___c_TypeInfo->static_fields;
        v38->__9__12_2 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_2;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v38->__9__12_2, (int32_t)_9__12_2, v39, v40, v41, v42, v43, v44);
      }
      v45 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v23,
                                                               (System_Func_TSource__TResult__o *)_9__12_2,
                                                               (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
      *chargeStoneNum = System_Linq_Enumerable__Sum(v45, 0);
      v46 = PurchaseLogicIOS___c_TypeInfo;
      if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
        v46 = PurchaseLogicIOS___c_TypeInfo;
      }
      _9__12_3 = (System_Func_object__bool__o *)v46->static_fields->__9__12_3;
      if ( !_9__12_3 )
      {
        if ( !v46->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v46);
          v46 = PurchaseLogicIOS___c_TypeInfo;
        }
        v48 = (Il2CppObject *)v46->static_fields->__9;
        _9__12_3 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__12_3, v48, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_3__, 0);
        v49 = PurchaseLogicIOS___c_TypeInfo->static_fields;
        v49->__9__12_3 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__12_3;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v49->__9__12_3, (int32_t)_9__12_3, v50, v51, v52, v53, v54, v55);
      }
      *isSentPresentBox = System_Linq_Enumerable__Any_object__52110824(
                            v23,
                            (System_Func_TSource__bool__o *)_9__12_3,
                            (const MethodInfo_31B25E8 *)Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___);
      object = System_Linq_Enumerable__First_object_(
                 v23,
                 (const MethodInfo_31CA994 *)Method_System_Linq_Enumerable_First_PurchaseByBank_UnityIap_Request_PurchaseResult___);
      if ( !object || !v12 )
        sub_1C93D2C(object, v57);
      *(_DWORD *)(v12 + 16) = object[1].klass;
      v58 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v58,
        (Il2CppObject *)v12,
        Method_PurchaseLogicIOS___c__DisplayClass12_0__GetAddedStoneNum_b__4__,
        0);
      if ( System_Linq_Enumerable__Any_object__52110824(
             v23,
             (System_Func_TSource__bool__o *)v58,
             (const MethodInfo_31B25E8 *)Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___) )
      {
        v59 = 0;
      }
      else
      {
        v59 = *(_DWORD *)(v12 + 16);
      }
      *shopId = v59;
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_int__o *v14; // x1
  const MethodInfo *v15; // x2
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x8
  System_Collections_Generic_List_object__o *v18; // x19

  v2 = this;
  if ( (byte_4D30336 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    sub_1C93AD4(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C93AD4(&Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__);
    sub_1C93AD4(&PurchaseLogicIOS___c_TypeInfo);
    this = (PurchaseLogicIOS_o *)sub_1C93AD4(&StringLiteral_16681/*"_purchaseResultArray is null"*/);
    byte_4D30336 = 1;
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
      _9__10_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__10_0,
        v6,
        Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__,
        0);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__10_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__10_0,
        (int32_t)_9__10_0,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
    }
    v14 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                             purchaseResultArray,
                                                             (System_Func_TSource__TResult__o *)_9__10_0,
                                                             (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    return PurchaseLogicIOS__ConvertBankShopIdToProductId(v2, v14, v15);
  }
  else
  {
    logErrorOutputActionSampledByRatio = v2->fields._logErrorOutputActionSampledByRatio;
    if ( !logErrorOutputActionSampledByRatio )
      sub_1C93D2C(this, method);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t, float))logErrorOutputActionSampledByRatio->fields.invoke_impl)(
      logErrorOutputActionSampledByRatio->fields.method_code,
      StringLiteral_16681/*"_purchaseResultArray is null"*/,
      logErrorOutputActionSampledByRatio->fields.method,
      0.01);
    v18 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v18;
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
  System_String_o *v21; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D3032F & 1) == 0 )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_23106/*"purchase-info"*/);
    sub_1C93AD4(&StringLiteral_24479/*"transaction-id"*/);
    byte_4D3032F = 1;
  }
  v21 = 0;
  value = 0;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v4 = System_Convert__FromBase64String(iOSOldStylePayloadStr, 0);
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_1C93D2C(0, v6);
  v7 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, const MethodInfo *))UTF8->klass->vtable._35_GetString.methodPtr)(
                            UTF8,
                            v4,
                            UTF8->klass->vtable._35_GetString.method);
  v9 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v7, v8);
  if ( !v9 )
    sub_1C93D2C(0, v10);
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)v9,
    (Il2CppObject *)StringLiteral_23106/*"purchase-info"*/,
    &value,
    (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( value )
  {
    if ( (System_String_c *)value->klass == string_TypeInfo )
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
    sub_1C93D2C(0, v14);
  v15 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, const MethodInfo *))v13->klass->vtable._35_GetString.methodPtr)(
                             v13,
                             v12,
                             v13->klass->vtable._35_GetString.method);
  v17 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v15, v16);
  if ( !v17 )
    sub_1C93D2C(0, v18);
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)v17,
    (Il2CppObject *)StringLiteral_24479/*"transaction-id"*/,
    (Il2CppObject **)&v21,
    (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( !v21 )
    return 0;
  if ( v21->klass == string_TypeInfo )
    return v21;
  return 0;
}


bool PurchaseLogicIOS__IsDeferredPurchaseExists(PurchaseLogicIOS_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0

  if ( (byte_4D3033A & 1) == 0 )
  {
    this = (PurchaseLogicIOS_o *)sub_1C93AD4(&Method_System_Linq_Enumerable_Any_string___);
    byte_4D3033A = 1;
  }
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)this,
                                                method);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
           (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_string___);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  struct System_String_o *id_k__BackingField; // x1
  System_String_o **v16; // x20
  PurchaseBehaviour_c *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *BankShopEntityCollection; // x22
  System_Func_object__bool__o *v19; // x23
  Il2CppObject *v20; // x0
  const MethodInfo *v21; // x2
  int32_t klass; // w21
  const MethodInfo *v23; // x7

  if ( (byte_4D30339 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
    sub_1C93AD4(&System_Func_BankShopEntity__bool__TypeInfo);
    sub_1C93AD4(&PurchaseBehaviour_TypeInfo);
    sub_1C93AD4(&Method_PurchaseLogicIOS___c__DisplayClass14_0__OnDeferred_b__0__);
    sub_1C93AD4(&PurchaseLogicIOS___c__DisplayClass14_0_TypeInfo);
    byte_4D30339 = 1;
  }
  v5 = sub_1C93D20(PurchaseLogicIOS___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !product || (definition_k__BackingField = product->fields._definition_k__BackingField) == 0 || !v5 )
    sub_1C93D2C(v6, v7);
  id_k__BackingField = definition_k__BackingField->fields._id_k__BackingField;
  *(_QWORD *)(v5 + 16) = id_k__BackingField;
  v16 = (System_String_o **)(v5 + 16);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)id_k__BackingField, v8, v9, v10, v11, v12, v13);
  v17 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v17 = PurchaseBehaviour_TypeInfo;
  }
  BankShopEntityCollection = (System_Collections_Generic_IEnumerable_TSource__o *)v17->static_fields->BankShopEntityCollection;
  v19 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_BankShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v5,
    Method_PurchaseLogicIOS___c__DisplayClass14_0__OnDeferred_b__0__,
    0);
  v20 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
          BankShopEntityCollection,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
  if ( v20 )
    klass = (int32_t)v20[1].klass;
  else
    klass = 0;
  PurchaseLogic__AddDeferredPurchaseProductIdsToPlayerPrefs((PurchaseLogic_o *)v20, *v16, v21);
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear((PurchaseLogic_o *)this, 5, 0, 0, 0, klass, 0, v23);
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
  int i; // w23
  char *v9; // x8
  System_String_o *v10; // x21
  _DWORD *v11; // x21
  Il2CppObject *v12; // x22

  if ( (byte_4D30330 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C93AD4(&StringLiteral_1738/*"="*/);
    sub_1C93AD4(&StringLiteral_1486/*";"*/);
    sub_1C93AD4(&StringLiteral_342/*"\""*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D30330 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !str || (v4 = System_String__Split(str, 0xAu, 0, 0)) == 0 )
LABEL_22:
    sub_1C93D2C(v4, v5);
  v6 = *((_DWORD *)v4 + 6);
  v7 = v4;
  if ( v6 >= 1 )
  {
    for ( i = 0; i < v6; ++i )
    {
      if ( i >= (unsigned int)v6 )
LABEL_23:
        sub_1C93D34(v4);
      v9 = (char *)&v7[2 * i];
      v10 = (System_String_o *)*((_QWORD *)v9 + 4);
      if ( !v10 )
        goto LABEL_22;
      v4 = (void *)System_String__Contains(*((System_String_o **)v9 + 4), (System_String_o *)StringLiteral_1738/*"="*/, 0);
      if ( ((unsigned __int8)v4 & 1) != 0 )
      {
        v4 = System_String__Replace_64472288(
               v10,
               (System_String_o *)StringLiteral_1486/*";"*/,
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
            v4 = System_String__Replace_64472288(
                   (System_String_o *)v4,
                   (System_String_o *)StringLiteral_342/*"\""*/,
                   (System_String_o *)StringLiteral_1/*""*/,
                   0);
            if ( !v4 )
              goto LABEL_22;
            v4 = System_String__Trim((System_String_o *)v4, 0);
            if ( v11[6] <= 1u )
              goto LABEL_23;
            v12 = (Il2CppObject *)v4;
            v4 = (void *)*((_QWORD *)v11 + 5);
            if ( !v4 )
              goto LABEL_22;
            v4 = System_String__Replace_64472288(
                   (System_String_o *)v4,
                   (System_String_o *)StringLiteral_342/*"\""*/,
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
              (const MethodInfo_352EBA8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
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
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D30334 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4D30334 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)paymentProductId);
  if ( !AllPurchasedProductIdList )
    sub_1C93D2C(0, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)AllPurchasedProductIdList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v11.fields._current;
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)v11.fields._current, 0);
    if ( !IsNullOrEmpty )
      PurchaseLogic__SendPurchaseAction(
        (PurchaseLogic_o *)IsNullOrEmpty,
        (System_String_o *)current,
        transactionId,
        v10);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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
  if ( (byte_4D30331 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9676/*"OK"*/);
    sub_1C93AD4(&StringLiteral_25835/*"購入処理中に問題が発生しました"*/);
    sub_1C93AD4(&StringLiteral_25833/*"購入できません"*/);
    sub_1C93AD4(&StringLiteral_25834/*"購入処理中です、完了までお待ち下さい"*/);
    sub_1C93AD4(&StringLiteral_2307/*"App内の購入が機能制限されています"*/);
    sub_1C93AD4(&StringLiteral_25806/*"指定されたプロダクトデータが取得できませんでした"*/);
    byte_4D30331 = 1;
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x19
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x19
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  int32_t v32; // w1
  const MethodInfo *v33; // x2
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0

  if ( (byte_4D30333 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    sub_1C93AD4(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__);
    sub_1C93AD4(&PurchaseLogicIOS___c_TypeInfo);
    byte_4D30333 = 1;
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
    _9__7_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v7, Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__, 0);
    static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__7_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__Select_object__int_(
          purchaseResultArray,
          (System_Func_TSource__TResult__o *)_9__7_0,
          (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
  if ( !v15 )
    sub_1C93D2C(0, v16);
  klass = v15->klass;
  v18 = v15;
  v19 = *(unsigned __int16 *)&v15->klass->_2.rank;
  if ( *(_WORD *)&v15->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_14;
    }
    v21 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v21 = sub_1C69E5C(v15, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v21)(
          v18,
          *(_QWORD *)(v21 + 8));
  if ( !v23 )
    sub_1C93D2C(0, v22);
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
          goto LABEL_21;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_21:
      v27 = sub_1C69E5C(v23, System_Collections_IEnumerator_TypeInfo, 0);
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
          goto LABEL_28;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_28:
      v31 = sub_1C69E5C(v23, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
    PurchaseLogic__UpdateMonthlyPurchasePrice((PurchaseLogic_o *)this, v32, v33);
  }
  v34 = *(_QWORD *)v23;
  v35 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
  {
    v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_35;
    }
    v37 = v34 + 16LL * *v36 + 312;
  }
  else
  {
LABEL_35:
    v37 = sub_1C69E5C(v23, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v37)(v23, *(_QWORD *)(v37 + 8));
}


void PurchaseLogicIOS___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3033B & 1) == 0 )
  {
    sub_1C93AD4(&PurchaseLogicIOS___c_TypeInfo);
    byte_4D3033B = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(PurchaseLogicIOS___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PurchaseLogicIOS___c_TypeInfo->static_fields->__9 = (struct PurchaseLogicIOS___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)PurchaseLogicIOS___c_TypeInfo->static_fields,
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

  if ( (byte_4D3033C & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c_o *)sub_1C93AD4(&System_DateTime_TypeInfo);
    byte_4D3033C = 1;
  }
  if ( !r )
    sub_1C93D2C(this, r);
  dateData = r->fields._cancellationDate_k__BackingField.fields._dateData;
  v5 = r->fields._purchaseDate_k__BackingField.fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  return System_DateTime__op_GreaterThan((System_DateTime_o)dateData, (System_DateTime_o)v5, 0);
}


bool PurchaseLogicIOS___c___GetAddedStoneNum_b__12_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return !x->fields.isCommitedAlready;
}


int32_t PurchaseLogicIOS___c___GetAddedStoneNum_b__12_1(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.freeStoneNum;
}


int32_t PurchaseLogicIOS___c___GetAddedStoneNum_b__12_2(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.chargeStoneNum;
}


bool PurchaseLogicIOS___c___GetAddedStoneNum_b__12_3(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.isSentPresentBox;
}


int32_t PurchaseLogicIOS___c___GetAllPurchasedProductIdList_b__10_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.purchasedBankShopId;
}


int32_t PurchaseLogicIOS___c___UpdateMonthlyPurchasePrice_b__7_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
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
    sub_1C93D2C(this, 0);
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
    sub_1C93D2C(this, 0);
  return System_String__Equals_64461848(this->fields.productId, bankShop->fields.googleShopId, 4, 0);
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

  v4 = this;
  if ( (byte_4D3033D & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c__DisplayClass2_0_o *)sub_1C93AD4(&System_DateTime_TypeInfo);
    byte_4D3033D = 1;
  }
  if ( !r )
    sub_1C93D2C(this, r);
  dateData = r->fields._cancellationDate_k__BackingField.fields._dateData;
  v6 = r->fields._purchaseDate_k__BackingField.fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  return System_DateTime__op_LessThanOrEqual((System_DateTime_o)dateData, (System_DateTime_o)v6, 0)
      && System_String__op_Equality(
           r->fields._transactionID_k__BackingField,
           v4->fields.transactionIdInOldStyleReceipt,
           0);
}