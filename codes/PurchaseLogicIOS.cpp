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
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *inAppPurchaseReceipts; // x21
  void *monitor; // x8
  PurchaseLogicIOS___c_c *v19; // x0
  System_Func_object__bool__o *_9__2_0; // x22
  Il2CppObject *v21; // x23
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  bool v25; // w0
  System_Object_array *v26; // x19
  bool v27; // w21
  System_Func_object__bool__o *v28; // x22
  bool v29; // w0

  if ( (byte_4B0197F & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_AppleInAppPurchaseReceipt___, receipt);
    sub_1BC3008(&Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___, v6);
    sub_1BC3008(&System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo, v7);
    sub_1BC3008(&Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__, v8);
    sub_1BC3008(&Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__, v9);
    sub_1BC3008(&PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo, v10);
    sub_1BC3008(&PurchaseLogicIOS___c_TypeInfo, v11);
    byte_4B0197F = 1;
  }
  v12 = sub_1BC3254(PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BC3264(v13, v14);
  *(_QWORD *)(v12 + 16) = transactionIdInOldStyleReceipt;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 16), (int32_t)transactionIdInOldStyleReceipt, v15, v16);
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
  v19 = PurchaseLogicIOS___c_TypeInfo;
  if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
    v19 = PurchaseLogicIOS___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__bool__o *)v19->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = PurchaseLogicIOS___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__2_0 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__2_0,
      v21,
      Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__,
      0LL);
    static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_AppleInAppPurchaseReceipt__bool__o *)_9__2_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v23, v24);
  }
  v25 = System_Linq_Enumerable__All_object_(
          inAppPurchaseReceipts,
          (System_Func_TSource__bool__o *)_9__2_0,
          (const MethodInfo_300C314 *)Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___);
  v26 = (System_Object_array *)receipt->fields.inAppPurchaseReceipts;
  v27 = v25;
  v28 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v12,
    Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__,
    0LL);
  v29 = BasicHelper__Any_object__50246536(
          v26,
          (System_Func_T__bool__o *)v28,
          (const MethodInfo_2FEB388 *)Method_BasicHelper_Any_AppleInAppPurchaseReceipt___);
  return v27 || !v29;
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
  __int64 v10; // x1
  _BOOL8 v11; // x0
  __int64 v12; // x1
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x21
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  Il2CppObject *current; // x20
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Purchasing_ProductCollection_o *v19; // x0
  __int64 v20; // x1
  UnityEngine_Purchasing_Product_o *v21; // x1
  const MethodInfo *v22; // x2
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B01986 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, product);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_1BC3008(&UnityEngine_Purchasing_IStoreController_TypeInfo, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    sub_1BC3008(&PurchaseLogic_TypeInfo, v8);
    byte_4B01986 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)product);
  if ( !AllPurchasedProductIdList )
    sub_1BC3264(0LL, v10);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)AllPurchasedProductIdList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v11 )
      break;
    storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
    if ( !storeController )
      sub_1BC3264(v11, v12);
    klass = storeController->klass;
    current = v24.fields._current;
    v16 = *(unsigned __int16 *)(&storeController->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&storeController->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((UnityEngine_Purchasing_IStoreController_c **)p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C13570(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
    }
    v19 = (UnityEngine_Purchasing_ProductCollection_o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))p_method)(
                                                          storeController,
                                                          *(_QWORD *)(p_method + 8));
    if ( !v19 )
      sub_1BC3264(0LL, v20);
    v21 = UnityEngine_Purchasing_ProductCollection__WithID(v19, (System_String_o *)current, 0LL);
    if ( v21 )
      PurchaseLogic__ConfirmPurchase((PurchaseLogic_o *)this, v21, v22);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x8
  __int64 v24; // x1
  __int64 v25; // x20
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  int32_t v34; // w1
  Il2CppObject *Entity; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x1
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0

  if ( (byte_4B01988 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_BankShopMaster___, bankShopIDs);
    sub_1BC3008(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v5);
    sub_1BC3008(&System_IDisposable_TypeInfo, v6);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_int__TypeInfo, v7);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_int__TypeInfo, v8);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v11);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BC3008(&StringLiteral_16873/*"bankShopMaster is null"*/, v14);
    byte_4B01988 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( logErrorOutputActionSampledByRatio )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, float))logErrorOutputActionSampledByRatio->fields.m_target)(
        logErrorOutputActionSampledByRatio->fields.original_method_info,
        StringLiteral_16873/*"bankShopMaster is null"*/,
        *(_QWORD *)&logErrorOutputActionSampledByRatio->fields.extra_arg,
        0.01);
      return (System_Collections_Generic_List_string__o *)v15;
    }
LABEL_44:
    sub_1BC3264(Instance, v17);
  }
  if ( !bankShopIDs )
    goto LABEL_44;
  klass = bankShopIDs->klass;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v20 = *(unsigned __int16 *)(&bankShopIDs->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&bankShopIDs->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C13570(bankShopIDs, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          bankShopIDs,
          *(_QWORD *)(p_method + 8));
  if ( !v25 )
    sub_1BC3264(0LL, v24);
  while ( 1 )
  {
    v26 = *(_QWORD *)v25;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_19;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_19:
      v29 = sub_1C13570(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = *(_QWORD *)v25;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v32 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_26;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_26:
      v33 = sub_1C13570(v25, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
    Entity = DataMasterBase_object__object__int___GetEntity(
               v19,
               v34,
               (const MethodInfo_32AF070 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    if ( Entity )
    {
      if ( !v15 )
        sub_1BC3264(Entity, v36);
      v39 = (Il2CppObject *)Entity[2].klass;
      items = v15->fields._items;
      v41 = Method_System_Collections_Generic_List_string__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1BC3264(Entity, v39);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          v39,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v39;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v43 + 4), (int32_t)v39, v37, v38);
      }
    }
  }
  v44 = *(_QWORD *)v25;
  v45 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
  {
    v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_38;
    }
    v47 = v44 + 16LL * *v46 + 312;
  }
  else
  {
LABEL_38:
    v47 = sub_1C13570(v25, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v47)(v25, *(_QWORD *)(v47 + 8));
  return (System_Collections_Generic_List_string__o *)v15;
}


void __fastcall PurchaseLogicIOS__DebugLog(PurchaseLogicIOS_o *this, System_String_o *log, const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x19

  if ( (byte_4B01983 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Debug_TypeInfo, log);
    sub_1BC3008(&StringLiteral_14950/*"UnityIAP:"*/, v4);
    byte_4B01983 = 1;
  }
  v5 = (Il2CppObject *)System_String__Concat_62348648((System_String_o *)StringLiteral_14950/*"UnityIAP:"*/, log, 0LL);
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
  __int64 v27; // x1
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  Il2CppObject *v30; // x22
  Il2CppClass *v31; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_String_o *v35; // x22
  System_Byte_array *v36; // x22
  System_Byte_array *v37; // x24
  UnityEngine_Purchasing_Security_AppleValidator_o *v38; // x23
  __int64 v39; // x0
  __int64 v40; // x1
  PurchaseLogic_o *v41; // x0
  const MethodInfo *v42; // x1
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  Il2CppObject *id_k__BackingField; // x23
  UnityEngine_Purchasing_Security_AppleReceipt_o *v45; // x22
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0
  __int64 v47; // x1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x23
  UnityEngine_Purchasing_IExtensionProvider_c *v51; // x8
  void *v52; // x24
  __int64 v53; // x9
  __int64 v54; // x1
  __int64 v55; // x2
  int32_t *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x23
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  System_String_o *v66; // x21
  const MethodInfo *v67; // x2
  System_String_o *TransactionIdFromOldStyleReceipt; // x23
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4B0197E & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Purchasing_Security_AppleValidator_TypeInfo, product);
    sub_1BC3008(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___, v5);
    sub_1BC3008(&System_Convert_TypeInfo, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v7);
    sub_1BC3008(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v8);
    sub_1BC3008(&UnityEngine_Purchasing_IAppleConfiguration_TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v10);
    sub_1BC3008(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Contains__, v12);
    sub_1BC3008(&PurchaseLogic_TypeInfo, v13);
    sub_1BC3008(&PurchaseLogic_ReceiptContents_TypeInfo, v14);
    sub_1BC3008(&string_TypeInfo, v15);
    sub_1BC3008(&StringLiteral_10498/*"Payload"*/, v16);
    sub_1BC3008(&StringLiteral_11081/*"RawReceipt Decode Error. "*/, v17);
    this = (PurchaseLogicIOS_o *)sub_1BC3008(&StringLiteral_1/*""*/, v18);
    byte_4B0197E = 1;
  }
  value = 0LL;
  if ( !product )
    goto LABEL_59;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v20 = sub_1BC3254(PurchaseLogic_ReceiptContents_TypeInfo);
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
                                 (Il2CppObject *)StringLiteral_10498/*"Payload"*/,
                                 &value,
                                 (const MethodInfo_336E7F4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
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
      StringLiteral_11081/*"RawReceipt Decode Error. "*/,
      *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
  }
  v26 = (UnityEngine_Purchasing_ConfigurationBuilder_o *)((__int64 (__fastcall *)(PurchaseLogicIOS_o *, Il2CppMethodPointer))v4->klass->vtable._10_GetConfigurationBuilder.method)(
                                                           v4,
                                                           v4->klass->vtable._11_SetObfuscatedAccountId.methodPtr);
  if ( !v26 )
    sub_1BC3264(0LL, v27);
  v28 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
          v26,
          (const MethodInfo_2FFA2B0 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___);
  v30 = v28;
  if ( !v28 )
    sub_1BC3264(0LL, v29);
  v31 = v28->klass;
  v32 = *(unsigned __int16 *)(&v28->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v28->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v31->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IAppleConfiguration_c **)p_offset - 1) != UnityEngine_Purchasing_IAppleConfiguration_TypeInfo )
    {
      --v32;
      p_offset += 4;
      if ( !v32 )
        goto LABEL_23;
    }
    p_method = (__int64)&v31->vtable[*p_offset].method;
  }
  else
  {
LABEL_23:
    p_method = sub_1C13570(v28, UnityEngine_Purchasing_IAppleConfiguration_TypeInfo, 0LL);
  }
  v35 = (System_String_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(v30, *(_QWORD *)(p_method + 8));
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v36 = System_Convert__FromBase64String(v35, 0LL);
  v37 = UnityEngine_Purchasing_Security_AppleTangle__Data(0LL);
  v38 = (UnityEngine_Purchasing_Security_AppleValidator_o *)sub_1BC3254(UnityEngine_Purchasing_Security_AppleValidator_TypeInfo);
  UnityEngine_Purchasing_Security_AppleValidator___ctor(v38, v37, 0LL);
  if ( !v38 )
    sub_1BC3264(v39, v40);
  v41 = (PurchaseLogic_o *)UnityEngine_Purchasing_Security_AppleValidator__Validate(v38, v36, 0LL);
  definition_k__BackingField = product->fields._definition_k__BackingField;
  if ( !definition_k__BackingField )
    sub_1BC3264(v41, v42);
  id_k__BackingField = (Il2CppObject *)definition_k__BackingField->fields._id_k__BackingField;
  v45 = (UnityEngine_Purchasing_Security_AppleReceipt_o *)v41;
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(v41, v42);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
    sub_1BC3264(0LL, v47);
  this = (PurchaseLogicIOS_o *)System_Collections_Generic_List_object___Contains(
                                 (System_Collections_Generic_List_object__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
                                 id_k__BackingField,
                                 (const MethodInfo_36A11D0 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_57;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_1BC3264(this, product);
  v51 = storeExtensionProvider->klass;
  v52 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v53 = *(unsigned __int16 *)(&storeExtensionProvider->klass->_2.bitflags2 + 3);
  v54 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 4);
  v55 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 40);
  if ( *(_WORD *)(&storeExtensionProvider->klass->_2.bitflags2 + 3) )
  {
    v56 = &v51->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)v56 - 1) != v54 )
    {
      --v53;
      v56 += 4;
      if ( !v53 )
        goto LABEL_36;
    }
    v57 = (__int64)&v51->vtable[*v56 + (int)v55].method;
  }
  else
  {
LABEL_36:
    v57 = sub_1C13570(storeExtensionProvider, v54, v55);
  }
  v58 = sub_1BC313C(*(_QWORD *)(v57 + 8), v52);
  v59 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *))(v58 + 8))(storeExtensionProvider);
  v61 = v59;
  if ( !v59 )
    sub_1BC3264(0LL, v60);
  v62 = *(_QWORD *)v59;
  v63 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
  {
    v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
    while ( *((UnityEngine_Purchasing_IAppleExtensions_c **)v64 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_43;
    }
    v65 = v62 + 16LL * *v64 + 312;
  }
  else
  {
LABEL_43:
    v65 = sub_1C13570(v59, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 0LL);
  }
  v66 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, UnityEngine_Purchasing_Product_o *, _QWORD))v65)(
                             v61,
                             product,
                             *(_QWORD *)(v65 + 8));
  TransactionIdFromOldStyleReceipt = PurchaseLogicIOS__GetTransactionIdFromOldStyleReceipt(v4, v66, v67);
  this = (PurchaseLogicIOS_o *)System_String__IsNullOrEmpty(TransactionIdFromOldStyleReceipt, 0LL);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (PurchaseLogicIOS_o *)PurchaseLogicIOS__CheckIfReceiptShouldBeSentInIOSOldStyle(
                                       this,
                                       v45,
                                       TransactionIdFromOldStyleReceipt,
                                       v49),
        ((unsigned __int8)this & 1) == 0) )
  {
LABEL_57:
    v66 = (System_String_o *)v24;
    if ( v20 )
      goto LABEL_58;
LABEL_59:
    sub_1BC3264(this, product);
  }
  if ( !v20 )
    sub_1BC3264(this, product);
  *(_QWORD *)(v20 + 56) = TransactionIdFromOldStyleReceipt;
  *(_BYTE *)(v20 + 48) = 1;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 56), (int32_t)TransactionIdFromOldStyleReceipt, v48, v49);
LABEL_58:
  *(_QWORD *)(v20 + 32) = v66;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 32), (int32_t)v66, v48, v49);
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
  __int64 v24; // x1
  __int64 v25; // x21
  PurchaseLogicIOS___c_c *v26; // x0
  System_Func_object__bool__o *_9__12_0; // x25
  Il2CppObject *v28; // x26
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x23
  PurchaseLogicIOS___c_c *v33; // x0
  System_Func_object__int__o *_9__12_1; // x25
  Il2CppObject *v35; // x26
  struct PurchaseLogicIOS___c_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_IEnumerable_int__o *v39; // x0
  PurchaseLogicIOS___c_c *v40; // x0
  System_Func_object__int__o *_9__12_2; // x24
  Il2CppObject *v42; // x25
  struct PurchaseLogicIOS___c_StaticFields *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Collections_Generic_IEnumerable_int__o *v46; // x0
  PurchaseLogicIOS___c_c *v47; // x0
  System_Func_object__bool__o *_9__12_3; // x22
  Il2CppObject *v49; // x24
  struct PurchaseLogicIOS___c_StaticFields *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  Il2CppObject *object; // x0
  __int64 v54; // x1
  System_Func_object__bool__o *v55; // x20
  int32_t v56; // w8

  if ( (byte_4B01989 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___,
      purchaseResultArray);
    sub_1BC3008(&Method_System_Linq_Enumerable_Count_PurchaseByBank_UnityIap_Request_PurchaseResult___, v12);
    sub_1BC3008(&Method_System_Linq_Enumerable_First_PurchaseByBank_UnityIap_Request_PurchaseResult___, v13);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___, v14);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___, v15);
    sub_1BC3008(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v16);
    sub_1BC3008(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v17);
    sub_1BC3008(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__, v18);
    sub_1BC3008(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__, v19);
    sub_1BC3008(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__, v20);
    sub_1BC3008(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_3__, v21);
    sub_1BC3008(&Method_PurchaseLogicIOS___c__DisplayClass12_0__GetAddedStoneNum_b__4__, v22);
    sub_1BC3008(&PurchaseLogicIOS___c__DisplayClass12_0_TypeInfo, v23);
    sub_1BC3008(&PurchaseLogicIOS___c_TypeInfo, v24);
    byte_4B01989 = 1;
  }
  *shopId = 0;
  *chargeStoneNum = 0;
  *freeStoneNum = 0;
  *isSentPresentBox = 0;
  if ( purchaseResultArray )
  {
    v25 = sub_1BC3254(PurchaseLogicIOS___c__DisplayClass12_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v25, 0LL);
    v26 = PurchaseLogicIOS___c_TypeInfo;
    if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v26 = PurchaseLogicIOS___c_TypeInfo;
    }
    _9__12_0 = (System_Func_object__bool__o *)v26->static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = PurchaseLogicIOS___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v26->static_fields->__9;
      _9__12_0 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__12_0, v28, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__, 0LL);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      static_fields->__9__12_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__12_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v30, v31);
    }
    v32 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
            (System_Func_TSource__bool__o *)_9__12_0,
            (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    if ( System_Linq_Enumerable__Count_object_(
           v32,
           (const MethodInfo_301E214 *)Method_System_Linq_Enumerable_Count_PurchaseByBank_UnityIap_Request_PurchaseResult___) >= 1 )
    {
      v33 = PurchaseLogicIOS___c_TypeInfo;
      if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
        v33 = PurchaseLogicIOS___c_TypeInfo;
      }
      _9__12_1 = (System_Func_object__int__o *)v33->static_fields->__9__12_1;
      if ( !_9__12_1 )
      {
        if ( !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          v33 = PurchaseLogicIOS___c_TypeInfo;
        }
        v35 = (Il2CppObject *)v33->static_fields->__9;
        _9__12_1 = (System_Func_object__int__o *)sub_1BC3254(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
        System_Func_object__int____ctor(_9__12_1, v35, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__, 0LL);
        v36 = PurchaseLogicIOS___c_TypeInfo->static_fields;
        v36->__9__12_1 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_1;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v36->__9__12_1, (int32_t)_9__12_1, v37, v38);
      }
      v39 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v32,
                                                               (System_Func_TSource__TResult__o *)_9__12_1,
                                                               (const MethodInfo_3035A44 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
      *freeStoneNum = System_Linq_Enumerable__Sum(v39, 0LL);
      v40 = PurchaseLogicIOS___c_TypeInfo;
      if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
        v40 = PurchaseLogicIOS___c_TypeInfo;
      }
      _9__12_2 = (System_Func_object__int__o *)v40->static_fields->__9__12_2;
      if ( !_9__12_2 )
      {
        if ( !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40);
          v40 = PurchaseLogicIOS___c_TypeInfo;
        }
        v42 = (Il2CppObject *)v40->static_fields->__9;
        _9__12_2 = (System_Func_object__int__o *)sub_1BC3254(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
        System_Func_object__int____ctor(_9__12_2, v42, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__, 0LL);
        v43 = PurchaseLogicIOS___c_TypeInfo->static_fields;
        v43->__9__12_2 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_2;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v43->__9__12_2, (int32_t)_9__12_2, v44, v45);
      }
      v46 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v32,
                                                               (System_Func_TSource__TResult__o *)_9__12_2,
                                                               (const MethodInfo_3035A44 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
      *chargeStoneNum = System_Linq_Enumerable__Sum(v46, 0LL);
      v47 = PurchaseLogicIOS___c_TypeInfo;
      if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
        v47 = PurchaseLogicIOS___c_TypeInfo;
      }
      _9__12_3 = (System_Func_object__bool__o *)v47->static_fields->__9__12_3;
      if ( !_9__12_3 )
      {
        if ( !v47->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v47);
          v47 = PurchaseLogicIOS___c_TypeInfo;
        }
        v49 = (Il2CppObject *)v47->static_fields->__9;
        _9__12_3 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__12_3, v49, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_3__, 0LL);
        v50 = PurchaseLogicIOS___c_TypeInfo->static_fields;
        v50->__9__12_3 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__12_3;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v50->__9__12_3, (int32_t)_9__12_3, v51, v52);
      }
      *isSentPresentBox = System_Linq_Enumerable__Any_object__50395312(
                            v32,
                            (System_Func_TSource__bool__o *)_9__12_3,
                            (const MethodInfo_300F8B0 *)Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___);
      object = System_Linq_Enumerable__First_object_(
                 v32,
                 (const MethodInfo_3024764 *)Method_System_Linq_Enumerable_First_PurchaseByBank_UnityIap_Request_PurchaseResult___);
      if ( !object || !v25 )
        sub_1BC3264(object, v54);
      *(_DWORD *)(v25 + 16) = object[1].klass;
      v55 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v55,
        (Il2CppObject *)v25,
        Method_PurchaseLogicIOS___c__DisplayClass12_0__GetAddedStoneNum_b__4__,
        0LL);
      if ( System_Linq_Enumerable__Any_object__50395312(
             v32,
             (System_Func_TSource__bool__o *)v55,
             (const MethodInfo_300F8B0 *)Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___) )
      {
        v56 = 0;
      }
      else
      {
        v56 = *(_DWORD *)(v25 + 16);
      }
      *shopId = v56;
    }
  }
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogicIOS__GetAllPurchasedProductIdList(
        PurchaseLogicIOS_o *this,
        const MethodInfo *method)
{
  PurchaseLogicIOS_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x20
  PurchaseLogicIOS___c_c *v10; // x0
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v12; // x22
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_int__o *v16; // x1
  const MethodInfo *v17; // x2
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x8
  System_Collections_Generic_List_object__o *v20; // x19

  v2 = this;
  if ( (byte_4B01987 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___, method);
    sub_1BC3008(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1BC3008(&Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__, v6);
    sub_1BC3008(&PurchaseLogicIOS___c_TypeInfo, v7);
    this = (PurchaseLogicIOS_o *)sub_1BC3008(&StringLiteral_16429/*"_purchaseResultArray is null"*/, v8);
    byte_4B01987 = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields._purchaseResultArray;
  if ( purchaseResultArray )
  {
    v10 = PurchaseLogicIOS___c_TypeInfo;
    if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v10 = PurchaseLogicIOS___c_TypeInfo;
    }
    _9__10_0 = (System_Func_object__int__o *)v10->static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = PurchaseLogicIOS___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__10_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__10_0,
        v12,
        Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__,
        0LL);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__10_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v14, v15);
    }
    v16 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                             purchaseResultArray,
                                                             (System_Func_TSource__TResult__o *)_9__10_0,
                                                             (const MethodInfo_3035A44 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    return PurchaseLogicIOS__ConvertBankShopIdToProductId(v2, v16, v17);
  }
  else
  {
    logErrorOutputActionSampledByRatio = v2->fields._logErrorOutputActionSampledByRatio;
    if ( !logErrorOutputActionSampledByRatio )
      sub_1BC3264(this, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, float))logErrorOutputActionSampledByRatio->fields.m_target)(
      logErrorOutputActionSampledByRatio->fields.original_method_info,
      StringLiteral_16429/*"_purchaseResultArray is null"*/,
      *(_QWORD *)&logErrorOutputActionSampledByRatio->fields.extra_arg,
      0.01);
    v20 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v20;
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
  __int64 v10; // x1
  System_String_o *v11; // x0
  const MethodInfo *v12; // x1
  System_Collections_Generic_Dictionary_string__object__o *v13; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x0
  System_Byte_array *v16; // x21
  System_Text_Encoding_o *v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x0
  const MethodInfo *v20; // x1
  System_Collections_Generic_Dictionary_string__object__o *v21; // x0
  __int64 v22; // x1
  System_String_o *v25; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B01980 & 1) == 0 )
  {
    sub_1BC3008(&System_Convert_TypeInfo, iOSOldStylePayloadStr);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    sub_1BC3008(&string_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_22595/*"purchase-info"*/, v6);
    sub_1BC3008(&StringLiteral_23936/*"transaction-id"*/, v7);
    byte_4B01980 = 1;
  }
  v25 = 0LL;
  value = 0LL;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v8 = System_Convert__FromBase64String(iOSOldStylePayloadStr, 0LL);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1BC3264(0LL, v10);
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, Il2CppMethodPointer))UTF8->klass->vtable._35_GetString.method)(
                             UTF8,
                             v8,
                             UTF8->klass->vtable._36_GetString.methodPtr);
  v13 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v11, v12);
  if ( !v13 )
    sub_1BC3264(0LL, v14);
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)v13,
    (Il2CppObject *)StringLiteral_22595/*"purchase-info"*/,
    &value,
    (const MethodInfo_336E7F4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( value )
  {
    if ( (System_String_c *)value->klass == string_TypeInfo )
      v15 = value;
    else
      v15 = 0LL;
  }
  else
  {
    v15 = 0LL;
  }
  v16 = System_Convert__FromBase64String((System_String_o *)v15, 0LL);
  v17 = System_Text_Encoding__get_UTF8(0LL);
  if ( !v17 )
    sub_1BC3264(0LL, v18);
  v19 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, Il2CppMethodPointer))v17->klass->vtable._35_GetString.method)(
                             v17,
                             v16,
                             v17->klass->vtable._36_GetString.methodPtr);
  v21 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v19, v20);
  if ( !v21 )
    sub_1BC3264(0LL, v22);
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)v21,
    (Il2CppObject *)StringLiteral_23936/*"transaction-id"*/,
    (Il2CppObject **)&v25,
    (const MethodInfo_336E7F4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( !v25 )
    return 0LL;
  if ( v25->klass == string_TypeInfo )
    return v25;
  return 0LL;
}


bool __fastcall PurchaseLogicIOS__IsDeferredPurchaseExists(PurchaseLogicIOS_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0

  if ( (byte_4B0198B & 1) == 0 )
  {
    this = (PurchaseLogicIOS_o *)sub_1BC3008(&Method_System_Linq_Enumerable_Any_string___, method);
    byte_4B0198B = 1;
  }
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)this,
                                                method);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
           (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_string___);
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
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
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

  if ( (byte_4B0198A & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___, product);
    sub_1BC3008(&System_Func_BankShopEntity__bool__TypeInfo, v5);
    sub_1BC3008(&PurchaseBehaviour_TypeInfo, v6);
    sub_1BC3008(&Method_PurchaseLogicIOS___c__DisplayClass14_0__OnDeferred_b__0__, v7);
    sub_1BC3008(&PurchaseLogicIOS___c__DisplayClass14_0_TypeInfo, v8);
    byte_4B0198A = 1;
  }
  v9 = sub_1BC3254(PurchaseLogicIOS___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !product || (definition_k__BackingField = product->fields._definition_k__BackingField) == 0LL || !v9 )
    sub_1BC3264(v10, v11);
  id_k__BackingField = definition_k__BackingField->fields._id_k__BackingField;
  *(_QWORD *)(v9 + 16) = id_k__BackingField;
  v16 = (System_String_o **)(v9 + 16);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)id_k__BackingField, v12, v13);
  v17 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v17 = PurchaseBehaviour_TypeInfo;
  }
  BankShopEntityCollection = (System_Collections_Generic_IEnumerable_TSource__o *)v17->static_fields->BankShopEntityCollection;
  v19 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_BankShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v9,
    Method_PurchaseLogicIOS___c__DisplayClass14_0__OnDeferred_b__0__,
    0LL);
  v20 = System_Linq_Enumerable__FirstOrDefault_object__50493748(
          BankShopEntityCollection,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
  if ( v20 )
    klass = (int32_t)v20[1].klass;
  else
    klass = 0;
  PurchaseLogic__AddDeferredPurchaseProductIdsToPlayerPrefs((PurchaseLogic_o *)v20, *v16, v21);
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear((PurchaseLogic_o *)this, 5, 0, 0, 0, klass, 0, v23);
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall PurchaseLogicIOS__ParseIOSOldStyleReceipt(
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *v9; // x19
  void *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int v13; // w8
  _DWORD *v14; // x20
  int i; // w23
  char *v16; // x8
  System_String_o *v17; // x21
  _DWORD *v18; // x21
  Il2CppObject *v19; // x22

  if ( (byte_4B01981 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__Add__, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v3);
    sub_1BC3008(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v4);
    sub_1BC3008(&StringLiteral_1733/*"="*/, v5);
    sub_1BC3008(&StringLiteral_1482/*";"*/, v6);
    sub_1BC3008(&StringLiteral_340/*"\""*/, v7);
    sub_1BC3008(&StringLiteral_1/*""*/, v8);
    byte_4B01981 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v9,
    (const MethodInfo_336C638 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !str || (v10 = System_String__Split(str, 0xAu, 0, 0LL)) == 0LL )
LABEL_22:
    sub_1BC3264(v10, v11);
  v13 = *((_DWORD *)v10 + 6);
  v14 = v10;
  if ( v13 >= 1 )
  {
    for ( i = 0; i < v13; ++i )
    {
      if ( i >= (unsigned int)v13 )
LABEL_23:
        sub_1BC326C(v10, v11, v12);
      v16 = (char *)&v14[2 * i];
      v17 = (System_String_o *)*((_QWORD *)v16 + 4);
      if ( !v17 )
        goto LABEL_22;
      v10 = (void *)System_String__Contains(*((System_String_o **)v16 + 4), (System_String_o *)StringLiteral_1733/*"="*/, 0LL);
      if ( ((unsigned __int8)v10 & 1) != 0 )
      {
        v10 = System_String__Replace_62395196(
                v17,
                (System_String_o *)StringLiteral_1482/*";"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( !v10 )
          goto LABEL_22;
        v10 = System_String__Split((System_String_o *)v10, 0x3Du, 0, 0LL);
        if ( v10 )
        {
          v18 = v10;
          if ( *((int *)v10 + 6) >= 2 )
          {
            v10 = (void *)*((_QWORD *)v10 + 4);
            if ( !v10 )
              goto LABEL_22;
            v10 = System_String__Replace_62395196(
                    (System_String_o *)v10,
                    (System_String_o *)StringLiteral_340/*"\""*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
            if ( !v10 )
              goto LABEL_22;
            v10 = System_String__Trim((System_String_o *)v10, 0LL);
            if ( v18[6] <= 1u )
              goto LABEL_23;
            v19 = (Il2CppObject *)v10;
            v10 = (void *)*((_QWORD *)v18 + 5);
            if ( !v10 )
              goto LABEL_22;
            v10 = System_String__Replace_62395196(
                    (System_String_o *)v10,
                    (System_String_o *)StringLiteral_340/*"\""*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
            if ( !v10 )
              goto LABEL_22;
            v10 = System_String__Trim((System_String_o *)v10, 0LL);
            if ( !v9 )
              goto LABEL_22;
            System_Collections_Generic_Dictionary_object__object___Add(
              v9,
              v19,
              (Il2CppObject *)v10,
              (const MethodInfo_336CFE8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
          }
        }
      }
      v13 = v14[6];
    }
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)v9;
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
  __int64 v10; // x1
  Il2CppObject *current; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B01985 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, paymentProductId);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__GetEnumerator__, v8);
    byte_4B01985 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)paymentProductId);
  if ( !AllPurchasedProductIdList )
    sub_1BC3264(0LL, v10);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)AllPurchasedProductIdList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v14.fields._current;
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)v14.fields._current, 0LL);
    if ( !IsNullOrEmpty )
      PurchaseLogic__SendPurchaseAction(
        (PurchaseLogic_o *)IsNullOrEmpty,
        (System_String_o *)current,
        transactionId,
        v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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

  if ( (byte_4B01982 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_9536/*"OK"*/, *(_QWORD *)&failureReason);
    sub_1BC3008(&StringLiteral_25263/*"購入処理中に問題が発生しました"*/, v3);
    sub_1BC3008(&StringLiteral_25261/*"購入できません"*/, v4);
    sub_1BC3008(&StringLiteral_25262/*"購入処理中です、完了までお待ち下さい"*/, v5);
    sub_1BC3008(&StringLiteral_2281/*"App内の購入が機能制限されています"*/, v6);
    sub_1BC3008(&StringLiteral_25234/*"指定されたプロダクトデータが取得できませんでした"*/, v7);
    byte_4B01982 = 1;
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
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v21; // x19
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v25; // x1
  __int64 v26; // x19
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  int32_t v35; // w1
  const MethodInfo *v36; // x2
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0

  if ( (byte_4B01984 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___,
      *(_QWORD *)&bankShopId);
    sub_1BC3008(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v4);
    sub_1BC3008(&System_IDisposable_TypeInfo, v5);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_int__TypeInfo, v6);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_int__TypeInfo, v7);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BC3008(&Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__, v9);
    sub_1BC3008(&PurchaseLogicIOS___c_TypeInfo, v10);
    byte_4B01984 = 1;
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
    _9__7_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v14, Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__, 0LL);
    static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__7_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v16, v17);
  }
  v18 = System_Linq_Enumerable__Select_object__int_(
          purchaseResultArray,
          (System_Func_TSource__TResult__o *)_9__7_0,
          (const MethodInfo_3035A44 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
  if ( !v18 )
    sub_1BC3264(0LL, v19);
  klass = v18->klass;
  v21 = v18;
  v22 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1C13570(v18, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v21,
          *(_QWORD *)(p_method + 8));
  if ( !v26 )
    sub_1BC3264(0LL, v25);
  while ( 1 )
  {
    v27 = *(_QWORD *)v26;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_21;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_21:
      v30 = sub_1C13570(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v31 = *(_QWORD *)v26;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v33 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_28;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_28:
      v34 = sub_1C13570(v26, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
    PurchaseLogic__UpdateMonthlyPurchasePrice((PurchaseLogic_o *)this, v35, v36);
  }
  v37 = *(_QWORD *)v26;
  v38 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
  {
    v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_35;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_35:
    v40 = sub_1C13570(v26, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v40)(v26, *(_QWORD *)(v40 + 8));
}


void __fastcall PurchaseLogicIOS___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B0198C & 1) == 0 )
  {
    sub_1BC3008(&PurchaseLogicIOS___c_TypeInfo, v1);
    byte_4B0198C = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(PurchaseLogicIOS___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PurchaseLogicIOS___c_TypeInfo->static_fields->__9 = (struct PurchaseLogicIOS___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)PurchaseLogicIOS___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_4B0198D & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c_o *)sub_1BC3008(&System_DateTime_TypeInfo, r);
    byte_4B0198D = 1;
  }
  if ( !r )
    sub_1BC3264(this, r);
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
    sub_1BC3264(this, 0LL);
  return !x->fields.isCommitedAlready;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_1(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.freeStoneNum;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_2(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.chargeStoneNum;
}


bool __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_3(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.isSentPresentBox;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAllPurchasedProductIdList_b__10_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.purchasedBankShopId;
}


int32_t __fastcall PurchaseLogicIOS___c___UpdateMonthlyPurchasePrice_b__7_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
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
    sub_1BC3264(this, 0LL);
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
    sub_1BC3264(this, 0LL);
  return System_String__Equals_62384756(this->fields.productId, bankShop->fields.googleShopId, 4, 0LL);
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
  if ( (byte_4B0198E & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c__DisplayClass2_0_o *)sub_1BC3008(&System_DateTime_TypeInfo, r);
    byte_4B0198E = 1;
  }
  if ( !r )
    sub_1BC3264(this, r);
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