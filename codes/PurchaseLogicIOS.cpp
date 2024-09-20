bool __fastcall PurchaseLogicIOS__CheckIfReceiptShouldBeSentInIOSOldStyle(
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
  System_Collections_Generic_IEnumerable_TSource__o *inAppPurchaseReceipts; // x21
  void *monitor; // x8
  PurchaseLogicIOS___c_c *v13; // x0
  System_Func_object__bool__o *_9__2_0; // x22
  Il2CppObject *v15; // x23
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  bool v19; // w0
  System_Object_array *v20; // x19
  bool v21; // w21
  System_Func_object__bool__o *v22; // x22
  bool v23; // w0

  if ( (byte_4A5AB1B & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_AppleInAppPurchaseReceipt___);
    sub_1B885B0(&Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___);
    sub_1B885B0(&System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
    sub_1B885B0(&Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__);
    sub_1B885B0(&Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__);
    sub_1B885B0(&PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo);
    sub_1B885B0(&PurchaseLogicIOS___c_TypeInfo);
    byte_4A5AB1B = 1;
  }
  v6 = sub_1B887FC(PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    sub_1B8880C(v7, v8);
  *(_QWORD *)(v6 + 16) = transactionIdInOldStyleReceipt;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 16), (int32_t)transactionIdInOldStyleReceipt, v9, v10);
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
  v13 = PurchaseLogicIOS___c_TypeInfo;
  if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
    v13 = PurchaseLogicIOS___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__bool__o *)v13->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = PurchaseLogicIOS___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__2_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__2_0,
      v15,
      Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__,
      0LL);
    static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_AppleInAppPurchaseReceipt__bool__o *)_9__2_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v17, v18);
  }
  v19 = System_Linq_Enumerable__All_object_(
          inAppPurchaseReceipts,
          (System_Func_TSource__bool__o *)_9__2_0,
          (const MethodInfo_2E8BEAC *)Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___);
  v20 = (System_Object_array *)receipt->fields.inAppPurchaseReceipts;
  v21 = v19;
  v22 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v6,
    Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__,
    0LL);
  v23 = BasicHelper__Any_object__48672124(
          v20,
          (System_Func_T__bool__o *)v22,
          (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_AppleInAppPurchaseReceipt___);
  return v21 || !v23;
}


void __fastcall PurchaseLogicIOS__ConfirmPurchase(
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
  __int64 p_method; // x0
  UnityEngine_Purchasing_ProductCollection_o *v14; // x0
  __int64 v15; // x1
  UnityEngine_Purchasing_Product_o *v16; // x1
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5AB22 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1B885B0(&UnityEngine_Purchasing_IStoreController_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1B885B0(&PurchaseLogic_TypeInfo);
    byte_4A5AB22 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)product);
  if ( !AllPurchasedProductIdList )
    sub_1B8880C(0LL, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)AllPurchasedProductIdList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v6 )
      break;
    storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
    if ( !storeController )
      sub_1B8880C(v6, v7);
    klass = storeController->klass;
    current = v19.fields._current;
    v11 = *(unsigned __int16 *)(&storeController->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&storeController->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((UnityEngine_Purchasing_IStoreController_c **)p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BDA590(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
    }
    v14 = (UnityEngine_Purchasing_ProductCollection_o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))p_method)(
                                                          storeController,
                                                          *(_QWORD *)(p_method + 8));
    if ( !v14 )
      sub_1B8880C(0LL, v15);
    v16 = UnityEngine_Purchasing_ProductCollection__WithID(v14, (System_String_o *)current, 0LL);
    if ( v16 )
      PurchaseLogic__ConfirmPurchase((PurchaseLogic_o *)this, v16, v17);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogicIOS__ConvertBankShopIdToProductId(
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
  __int64 p_method; // x0
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
  Il2CppObject *v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0

  if ( (byte_4A5AB24 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_17058/*"bankShopMaster is null"*/);
    byte_4A5AB24 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( logErrorOutputActionSampledByRatio )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, float))logErrorOutputActionSampledByRatio->fields.m_target)(
        logErrorOutputActionSampledByRatio->fields.original_method_info,
        StringLiteral_17058/*"bankShopMaster is null"*/,
        *(_QWORD *)&logErrorOutputActionSampledByRatio->fields.extra_arg,
        0.01);
      return (System_Collections_Generic_List_string__o *)v5;
    }
LABEL_44:
    sub_1B8880C(Instance, v7);
  }
  if ( !bankShopIDs )
    goto LABEL_44;
  klass = bankShopIDs->klass;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v10 = *(unsigned __int16 *)(&bankShopIDs->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&bankShopIDs->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v10;
      p_offset += 4;
      if ( !v10 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BDA590(bankShopIDs, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          bankShopIDs,
          *(_QWORD *)(p_method + 8));
  if ( !v15 )
    sub_1B8880C(0LL, v14);
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
      v19 = sub_1BDA590(v15, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v23 = sub_1BDA590(v15, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
    Entity = DataMasterBase_object__object__int___GetEntity(
               v9,
               v24,
               (const MethodInfo_311D934 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    if ( Entity )
    {
      if ( !v5 )
        sub_1B8880C(Entity, v26);
      v29 = (Il2CppObject *)Entity[2].klass;
      items = v5->fields._items;
      v31 = Method_System_Collections_Generic_List_string__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1B8880C(Entity, v29);
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          v29,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v29;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v29, v27, v28);
      }
    }
  }
  v34 = *(_QWORD *)v15;
  v35 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
  {
    v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_38;
    }
    v37 = v34 + 16LL * *v36 + 312;
  }
  else
  {
LABEL_38:
    v37 = sub_1BDA590(v15, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v37)(v15, *(_QWORD *)(v37 + 8));
  return (System_Collections_Generic_List_string__o *)v5;
}


void __fastcall PurchaseLogicIOS__DebugLog(PurchaseLogicIOS_o *this, System_String_o *log, const MethodInfo *method)
{
  Il2CppObject *v4; // x19

  if ( (byte_4A5AB1F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Debug_TypeInfo);
    sub_1B885B0(&StringLiteral_15073/*"UnityIAP:"*/);
    byte_4A5AB1F = 1;
  }
  v4 = (Il2CppObject *)System_String__Concat_61707032((System_String_o *)StringLiteral_15073/*"UnityIAP:"*/, log, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log(v4, 0LL);
}


PurchaseLogic_ReceiptContents_o *__fastcall PurchaseLogicIOS__ExtractReceiptContents(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  PurchaseLogicIOS_o *v4; // x19
  System_String_o *receipt_k__BackingField; // x22
  __int64 v6; // x20
  const MethodInfo *v7; // x1
  PurchaseLogicIOS_c *klass; // x9
  __int64 methodPtr_low; // x10
  Il2CppObject *v10; // x25
  struct System_Action_string__o *logErrorOutputAction; // x8
  UnityEngine_Purchasing_ConfigurationBuilder_o *v12; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x22
  Il2CppClass *v17; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
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
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x23
  UnityEngine_Purchasing_IExtensionProvider_c *v37; // x8
  void *v38; // x24
  __int64 v39; // x9
  __int64 v40; // x1
  __int64 v41; // x2
  int32_t *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x23
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  System_String_o *v52; // x21
  const MethodInfo *v53; // x2
  System_String_o *TransactionIdFromOldStyleReceipt; // x23
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4A5AB1A & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Purchasing_Security_AppleValidator_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___);
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&UnityEngine_Purchasing_IAppleConfiguration_TypeInfo);
    sub_1B885B0(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1B885B0(&PurchaseLogic_TypeInfo);
    sub_1B885B0(&PurchaseLogic_ReceiptContents_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_10587/*"Payload"*/);
    sub_1B885B0(&StringLiteral_11161/*"RawReceipt Decode Error. "*/);
    this = (PurchaseLogicIOS_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AB1A = 1;
  }
  value = 0LL;
  if ( !product )
    goto LABEL_59;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v6 = sub_1B887FC(PurchaseLogic_ReceiptContents_TypeInfo);
  PurchaseLogic_ReceiptContents___ctor((PurchaseLogic_ReceiptContents_o *)v6, v7);
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
  v10 = (Il2CppObject *)StringLiteral_1/*""*/;
  if ( (System_Collections_Generic_Dictionary_string__object__c *)klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    this = 0LL;
  this = (PurchaseLogicIOS_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                                 (Il2CppObject *)StringLiteral_10587/*"Payload"*/,
                                 &value,
                                 (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( value )
    {
      if ( (System_String_c *)value->klass == string_TypeInfo )
        v10 = value;
      else
        v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
  }
  else
  {
    logErrorOutputAction = v4->fields._logErrorOutputAction;
    if ( !logErrorOutputAction )
      goto LABEL_59;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))logErrorOutputAction->fields.m_target)(
      logErrorOutputAction->fields.original_method_info,
      StringLiteral_11161/*"RawReceipt Decode Error. "*/,
      *(_QWORD *)&logErrorOutputAction->fields.extra_arg);
  }
  v12 = (UnityEngine_Purchasing_ConfigurationBuilder_o *)((__int64 (__fastcall *)(PurchaseLogicIOS_o *, Il2CppMethodPointer))v4->klass->vtable._10_GetConfigurationBuilder.method)(
                                                           v4,
                                                           v4->klass->vtable._11_SetObfuscatedAccountId.methodPtr);
  if ( !v12 )
    sub_1B8880C(0LL, v13);
  v14 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
          v12,
          (const MethodInfo_2E77DF0 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___);
  v16 = v14;
  if ( !v14 )
    sub_1B8880C(0LL, v15);
  v17 = v14->klass;
  v18 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v17->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IAppleConfiguration_c **)p_offset - 1) != UnityEngine_Purchasing_IAppleConfiguration_TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_23;
    }
    p_method = (__int64)&v17->vtable[*p_offset].method;
  }
  else
  {
LABEL_23:
    p_method = sub_1BDA590(v14, UnityEngine_Purchasing_IAppleConfiguration_TypeInfo, 0LL);
  }
  v21 = (System_String_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(v16, *(_QWORD *)(p_method + 8));
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v22 = System_Convert__FromBase64String(v21, 0LL);
  v23 = UnityEngine_Purchasing_Security_AppleTangle__Data(0LL);
  v24 = (UnityEngine_Purchasing_Security_AppleValidator_o *)sub_1B887FC(UnityEngine_Purchasing_Security_AppleValidator_TypeInfo);
  UnityEngine_Purchasing_Security_AppleValidator___ctor(v24, v23, 0LL);
  if ( !v24 )
    sub_1B8880C(v25, v26);
  v27 = (PurchaseLogic_o *)UnityEngine_Purchasing_Security_AppleValidator__Validate(v24, v22, 0LL);
  definition_k__BackingField = product->fields._definition_k__BackingField;
  if ( !definition_k__BackingField )
    sub_1B8880C(v27, v28);
  id_k__BackingField = (Il2CppObject *)definition_k__BackingField->fields._id_k__BackingField;
  v31 = (UnityEngine_Purchasing_Security_AppleReceipt_o *)v27;
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(v27, v28);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
    sub_1B8880C(0LL, v33);
  this = (PurchaseLogicIOS_o *)System_Collections_Generic_List_object___Contains(
                                 (System_Collections_Generic_List_object__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
                                 id_k__BackingField,
                                 (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_57;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_1B8880C(this, product);
  v37 = storeExtensionProvider->klass;
  v38 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v39 = *(unsigned __int16 *)(&storeExtensionProvider->klass->_2.bitflags2 + 3);
  v40 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 4);
  v41 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 40);
  if ( *(_WORD *)(&storeExtensionProvider->klass->_2.bitflags2 + 3) )
  {
    v42 = &v37->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)v42 - 1) != v40 )
    {
      --v39;
      v42 += 4;
      if ( !v39 )
        goto LABEL_36;
    }
    v43 = (__int64)&v37->vtable[*v42 + (int)v41].method;
  }
  else
  {
LABEL_36:
    v43 = sub_1BDA590(storeExtensionProvider, v40, v41);
  }
  v44 = sub_1B886E4(*(_QWORD *)(v43 + 8), v38);
  v45 = (*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *))(v44 + 8))(storeExtensionProvider);
  v47 = v45;
  if ( !v45 )
    sub_1B8880C(0LL, v46);
  v48 = *(_QWORD *)v45;
  v49 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
  {
    v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
    while ( *((UnityEngine_Purchasing_IAppleExtensions_c **)v50 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_43;
    }
    v51 = v48 + 16LL * *v50 + 312;
  }
  else
  {
LABEL_43:
    v51 = sub_1BDA590(v45, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 0LL);
  }
  v52 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, UnityEngine_Purchasing_Product_o *, _QWORD))v51)(
                             v47,
                             product,
                             *(_QWORD *)(v51 + 8));
  TransactionIdFromOldStyleReceipt = PurchaseLogicIOS__GetTransactionIdFromOldStyleReceipt(v4, v52, v53);
  this = (PurchaseLogicIOS_o *)System_String__IsNullOrEmpty(TransactionIdFromOldStyleReceipt, 0LL);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (PurchaseLogicIOS_o *)PurchaseLogicIOS__CheckIfReceiptShouldBeSentInIOSOldStyle(
                                       this,
                                       v31,
                                       TransactionIdFromOldStyleReceipt,
                                       v35),
        ((unsigned __int8)this & 1) == 0) )
  {
LABEL_57:
    v52 = (System_String_o *)v10;
    if ( v6 )
      goto LABEL_58;
LABEL_59:
    sub_1B8880C(this, product);
  }
  if ( !v6 )
    sub_1B8880C(this, product);
  *(_QWORD *)(v6 + 56) = TransactionIdFromOldStyleReceipt;
  *(_BYTE *)(v6 + 48) = 1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)(v6 + 56),
    (int32_t)TransactionIdFromOldStyleReceipt,
    v34,
    (int32_t)v35);
LABEL_58:
  *(_QWORD *)(v6 + 32) = v52;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 32), (int32_t)v52, v34, (int32_t)v35);
  return (PurchaseLogic_ReceiptContents_o *)v6;
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
  __int64 v12; // x21
  PurchaseLogicIOS___c_c *v13; // x0
  System_Func_object__bool__o *_9__12_0; // x25
  Il2CppObject *v15; // x26
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  PurchaseLogicIOS___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x23
  System_Func_object__int__o *_9__12_1; // x25
  Il2CppObject *v23; // x26
  struct PurchaseLogicIOS___c_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_IEnumerable_int__o *v27; // x0
  PurchaseLogicIOS___c_c *v28; // x0
  System_Func_object__int__o *_9__12_2; // x24
  Il2CppObject *v30; // x25
  struct PurchaseLogicIOS___c_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_IEnumerable_int__o *v34; // x0
  PurchaseLogicIOS___c_c *v35; // x0
  System_Func_object__bool__o *_9__12_3; // x22
  Il2CppObject *v37; // x24
  struct PurchaseLogicIOS___c_StaticFields *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *object; // x0
  __int64 v42; // x1
  System_Func_object__bool__o *v43; // x20
  int32_t v44; // w8

  if ( (byte_4A5AB25 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_1B885B0(&Method_System_Linq_Enumerable_First_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_1B885B0(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    sub_1B885B0(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    sub_1B885B0(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__);
    sub_1B885B0(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__);
    sub_1B885B0(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__);
    sub_1B885B0(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_3__);
    sub_1B885B0(&Method_PurchaseLogicIOS___c__DisplayClass12_0__GetAddedStoneNum_b__4__);
    sub_1B885B0(&PurchaseLogicIOS___c__DisplayClass12_0_TypeInfo);
    sub_1B885B0(&PurchaseLogicIOS___c_TypeInfo);
    byte_4A5AB25 = 1;
  }
  *shopId = 0;
  *chargeStoneNum = 0;
  *freeStoneNum = 0;
  *isSentPresentBox = 0;
  if ( purchaseResultArray )
  {
    v12 = sub_1B887FC(PurchaseLogicIOS___c__DisplayClass12_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
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
      _9__12_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__12_0, v15, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__, 0LL);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      static_fields->__9__12_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__12_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v17, v18);
    }
    v19 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
            (System_Func_TSource__bool__o *)_9__12_0,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    v20 = PurchaseLogicIOS___c_TypeInfo;
    v21 = v19;
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
      v23 = (Il2CppObject *)v20->static_fields->__9;
      _9__12_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
      System_Func_object__int____ctor(_9__12_1, v23, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__, 0LL);
      v24 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v24->__9__12_1 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v24->__9__12_1, (int32_t)_9__12_1, v25, v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                             v21,
                                                             (System_Func_TSource__TResult__o *)_9__12_1,
                                                             (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    *freeStoneNum = System_Linq_Enumerable__Sum(v27, 0LL);
    v28 = PurchaseLogicIOS___c_TypeInfo;
    if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v28 = PurchaseLogicIOS___c_TypeInfo;
    }
    _9__12_2 = (System_Func_object__int__o *)v28->static_fields->__9__12_2;
    if ( !_9__12_2 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = PurchaseLogicIOS___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__12_2 = (System_Func_object__int__o *)sub_1B887FC(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
      System_Func_object__int____ctor(_9__12_2, v30, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__, 0LL);
      v31 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v31->__9__12_2 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_2;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v31->__9__12_2, (int32_t)_9__12_2, v32, v33);
    }
    v34 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                             v21,
                                                             (System_Func_TSource__TResult__o *)_9__12_2,
                                                             (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    *chargeStoneNum = System_Linq_Enumerable__Sum(v34, 0LL);
    v35 = PurchaseLogicIOS___c_TypeInfo;
    if ( !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v35 = PurchaseLogicIOS___c_TypeInfo;
    }
    _9__12_3 = (System_Func_object__bool__o *)v35->static_fields->__9__12_3;
    if ( !_9__12_3 )
    {
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v35 = PurchaseLogicIOS___c_TypeInfo;
      }
      v37 = (Il2CppObject *)v35->static_fields->__9;
      _9__12_3 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__12_3, v37, Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_3__, 0LL);
      v38 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v38->__9__12_3 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__12_3;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v38->__9__12_3, (int32_t)_9__12_3, v39, v40);
    }
    *isSentPresentBox = System_Linq_Enumerable__Any_object__48820656(
                          v21,
                          (System_Func_TSource__bool__o *)_9__12_3,
                          (const MethodInfo_2E8F1B0 *)Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    object = System_Linq_Enumerable__First_object_(
               v21,
               (const MethodInfo_2EA17D4 *)Method_System_Linq_Enumerable_First_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    if ( !object || !v12 )
      sub_1B8880C(object, v42);
    *(_DWORD *)(v12 + 16) = object[1].klass;
    v43 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v43,
      (Il2CppObject *)v12,
      Method_PurchaseLogicIOS___c__DisplayClass12_0__GetAddedStoneNum_b__4__,
      0LL);
    if ( System_Linq_Enumerable__Any_object__48820656(
           v21,
           (System_Func_TSource__bool__o *)v43,
           (const MethodInfo_2E8F1B0 *)Method_System_Linq_Enumerable_Any_PurchaseByBank_UnityIap_Request_PurchaseResult___) )
    {
      v44 = 0;
    }
    else
    {
      v44 = *(_DWORD *)(v12 + 16);
    }
    *shopId = v44;
  }
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogicIOS__GetAllPurchasedProductIdList(
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
  System_Collections_Generic_IEnumerable_int__o *v10; // x1
  const MethodInfo *v11; // x2
  struct System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x8
  System_Collections_Generic_List_object__o *v14; // x19

  v2 = this;
  if ( (byte_4A5AB23 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    sub_1B885B0(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__);
    sub_1B885B0(&PurchaseLogicIOS___c_TypeInfo);
    this = (PurchaseLogicIOS_o *)sub_1B885B0(&StringLiteral_16569/*"_purchaseResultArray is null"*/);
    byte_4A5AB23 = 1;
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
      _9__10_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__10_0,
        v6,
        Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__,
        0LL);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__10_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v8, v9);
    }
    v10 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                             purchaseResultArray,
                                                             (System_Func_TSource__TResult__o *)_9__10_0,
                                                             (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    return PurchaseLogicIOS__ConvertBankShopIdToProductId(v2, v10, v11);
  }
  else
  {
    logErrorOutputActionSampledByRatio = v2->fields._logErrorOutputActionSampledByRatio;
    if ( !logErrorOutputActionSampledByRatio )
      sub_1B8880C(this, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, float))logErrorOutputActionSampledByRatio->fields.m_target)(
      logErrorOutputActionSampledByRatio->fields.original_method_info,
      StringLiteral_16569/*"_purchaseResultArray is null"*/,
      *(_QWORD *)&logErrorOutputActionSampledByRatio->fields.extra_arg,
      0.01);
    v14 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v14,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v14;
  }
}


System_String_o *__fastcall PurchaseLogicIOS__GetTransactionIdFromOldStyleReceipt(
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

  if ( (byte_4A5AB1C & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_22649/*"purchase-info"*/);
    sub_1B885B0(&StringLiteral_24035/*"transaction-id"*/);
    byte_4A5AB1C = 1;
  }
  v21 = 0LL;
  value = 0LL;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v4 = System_Convert__FromBase64String(iOSOldStylePayloadStr, 0LL);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1B8880C(0LL, v6);
  v7 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, Il2CppMethodPointer))UTF8->klass->vtable._36_GetString.method)(
                            UTF8,
                            v4,
                            UTF8->klass->vtable._37_GetString.methodPtr);
  v9 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v7, v8);
  if ( !v9 )
    sub_1B8880C(0LL, v10);
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)v9,
    (Il2CppObject *)StringLiteral_22649/*"purchase-info"*/,
    &value,
    (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( value )
  {
    if ( (System_String_c *)value->klass == string_TypeInfo )
      v11 = value;
    else
      v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = System_Convert__FromBase64String((System_String_o *)v11, 0LL);
  v13 = System_Text_Encoding__get_UTF8(0LL);
  if ( !v13 )
    sub_1B8880C(0LL, v14);
  v15 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, Il2CppMethodPointer))v13->klass->vtable._36_GetString.method)(
                             v13,
                             v12,
                             v13->klass->vtable._37_GetString.methodPtr);
  v17 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v15, v16);
  if ( !v17 )
    sub_1B8880C(0LL, v18);
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)v17,
    (Il2CppObject *)StringLiteral_24035/*"transaction-id"*/,
    (Il2CppObject **)&v21,
    (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( !v21 )
    return 0LL;
  if ( v21->klass == string_TypeInfo )
    return v21;
  return 0LL;
}


bool __fastcall PurchaseLogicIOS__IsDeferredPurchaseExists(PurchaseLogicIOS_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0

  if ( (byte_4A5AB27 & 1) == 0 )
  {
    this = (PurchaseLogicIOS_o *)sub_1B885B0(&Method_System_Linq_Enumerable_Any_string___);
    byte_4A5AB27 = 1;
  }
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)this,
                                                method);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
           (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_string___);
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  struct System_String_o *id_k__BackingField; // x1
  System_String_o **v12; // x20
  PurchaseBehaviour_c *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *BankShopEntityCollection; // x22
  System_Func_object__bool__o *v15; // x23
  Il2CppObject *v16; // x0
  const MethodInfo *v17; // x2
  int32_t klass; // w21
  const MethodInfo *v19; // x7

  if ( (byte_4A5AB26 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
    sub_1B885B0(&System_Func_BankShopEntity__bool__TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    sub_1B885B0(&Method_PurchaseLogicIOS___c__DisplayClass14_0__OnDeferred_b__0__);
    sub_1B885B0(&PurchaseLogicIOS___c__DisplayClass14_0_TypeInfo);
    byte_4A5AB26 = 1;
  }
  v5 = sub_1B887FC(PurchaseLogicIOS___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !product || (definition_k__BackingField = product->fields._definition_k__BackingField) == 0LL || !v5 )
    sub_1B8880C(v6, v7);
  id_k__BackingField = definition_k__BackingField->fields._id_k__BackingField;
  *(_QWORD *)(v5 + 16) = id_k__BackingField;
  v12 = (System_String_o **)(v5 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)id_k__BackingField, v8, v9);
  v13 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v13 = PurchaseBehaviour_TypeInfo;
  }
  BankShopEntityCollection = (System_Collections_Generic_IEnumerable_TSource__o *)v13->static_fields->BankShopEntityCollection;
  v15 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BankShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_PurchaseLogicIOS___c__DisplayClass14_0__OnDeferred_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          BankShopEntityCollection,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
  if ( v16 )
    klass = (int32_t)v16[1].klass;
  else
    klass = 0;
  PurchaseLogic__AddDeferredPurchaseProductIdsToPlayerPrefs((PurchaseLogic_o *)v16, *v12, v17);
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear((PurchaseLogic_o *)this, 5, 0, 0, 0, klass, 0, v19);
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall PurchaseLogicIOS__ParseIOSOldStyleReceipt(
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

  if ( (byte_4A5AB1D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&StringLiteral_1852/*"="*/);
    sub_1B885B0(&StringLiteral_1579/*";"*/);
    sub_1B885B0(&StringLiteral_372/*"\""*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AB1D = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !str || (v4 = System_String__Split(str, 0xAu, 0, 0LL)) == 0LL )
LABEL_22:
    sub_1B8880C(v4, v5);
  v6 = *((_DWORD *)v4 + 6);
  v7 = v4;
  if ( v6 >= 1 )
  {
    for ( i = 0; i < v6; ++i )
    {
      if ( i >= (unsigned int)v6 )
LABEL_23:
        sub_1B88814(v4, v5);
      v9 = (char *)&v7[2 * i];
      v10 = (System_String_o *)*((_QWORD *)v9 + 4);
      if ( !v10 )
        goto LABEL_22;
      v4 = (void *)System_String__Contains(*((System_String_o **)v9 + 4), (System_String_o *)StringLiteral_1852/*"="*/, 0LL);
      if ( ((unsigned __int8)v4 & 1) != 0 )
      {
        v4 = System_String__Replace_61726660(
               v10,
               (System_String_o *)StringLiteral_1579/*";"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0LL);
        if ( !v4 )
          goto LABEL_22;
        v4 = System_String__Split((System_String_o *)v4, 0x3Du, 0, 0LL);
        if ( v4 )
        {
          v11 = v4;
          if ( *((int *)v4 + 6) >= 2 )
          {
            v4 = (void *)*((_QWORD *)v4 + 4);
            if ( !v4 )
              goto LABEL_22;
            v4 = System_String__Replace_61726660(
                   (System_String_o *)v4,
                   (System_String_o *)StringLiteral_372/*"\""*/,
                   (System_String_o *)StringLiteral_1/*""*/,
                   0LL);
            if ( !v4 )
              goto LABEL_22;
            v4 = System_String__Trim((System_String_o *)v4, 0LL);
            if ( v11[6] <= 1u )
              goto LABEL_23;
            v12 = (Il2CppObject *)v4;
            v4 = (void *)*((_QWORD *)v11 + 5);
            if ( !v4 )
              goto LABEL_22;
            v4 = System_String__Replace_61726660(
                   (System_String_o *)v4,
                   (System_String_o *)StringLiteral_372/*"\""*/,
                   (System_String_o *)StringLiteral_1/*""*/,
                   0LL);
            if ( !v4 )
              goto LABEL_22;
            v4 = System_String__Trim((System_String_o *)v4, 0LL);
            if ( !v3 )
              goto LABEL_22;
            System_Collections_Generic_Dictionary_object__object___Add(
              v3,
              v12,
              (Il2CppObject *)v4,
              (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
          }
        }
      }
      v6 = v7[6];
    }
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)v3;
}


void __fastcall PurchaseLogicIOS__SendPurchaseAction(
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

  if ( (byte_4A5AB21 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4A5AB21 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)paymentProductId);
  if ( !AllPurchasedProductIdList )
    sub_1B8880C(0LL, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)AllPurchasedProductIdList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v11.fields._current;
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)v11.fields._current, 0LL);
    if ( !IsNullOrEmpty )
      PurchaseLogic__SendPurchaseAction(
        (PurchaseLogic_o *)IsNullOrEmpty,
        (System_String_o *)current,
        transactionId,
        v10);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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


void __fastcall PurchaseLogicIOS__ShowPurchaseFailedNotification(
        PurchaseLogicIOS_o *this,
        int32_t failureReason,
        const MethodInfo *method)
{
  if ( (byte_4A5AB1E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9616/*"OK"*/);
    sub_1B885B0(&StringLiteral_25392/*"購入処理中に問題が発生しました"*/);
    sub_1B885B0(&StringLiteral_25390/*"購入できません"*/);
    sub_1B885B0(&StringLiteral_25391/*"購入処理中です、完了までお待ち下さい"*/);
    sub_1B885B0(&StringLiteral_2407/*"App内の購入が機能制限されています"*/);
    sub_1B885B0(&StringLiteral_25364/*"指定されたプロダクトデータが取得できませんでした"*/);
    byte_4A5AB1E = 1;
  }
}


void __fastcall PurchaseLogicIOS__UpdateMonthlyPurchasePrice(
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
  System_Collections_Generic_IEnumerable_TResult__o *v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x19
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v18; // x1
  __int64 v19; // x19
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  int32_t v28; // w1
  const MethodInfo *v29; // x2
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( (byte_4A5AB20 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    sub_1B885B0(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__);
    sub_1B885B0(&PurchaseLogicIOS___c_TypeInfo);
    byte_4A5AB20 = 1;
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
    _9__7_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v7, Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__, 0LL);
    static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__7_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__Select_object__int_(
          purchaseResultArray,
          (System_Func_TSource__TResult__o *)_9__7_0,
          (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
  if ( !v11 )
    sub_1B8880C(0LL, v12);
  klass = v11->klass;
  v14 = v11;
  v15 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1BDA590(v11, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v14,
          *(_QWORD *)(p_method + 8));
  if ( !v19 )
    sub_1B8880C(0LL, v18);
  while ( 1 )
  {
    v20 = *(_QWORD *)v19;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_21;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_21:
      v23 = sub_1BDA590(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v19;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v26 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_28;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_28:
      v27 = sub_1BDA590(v19, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
    PurchaseLogic__UpdateMonthlyPurchasePrice((PurchaseLogic_o *)this, v28, v29);
  }
  v30 = *(_QWORD *)v19;
  v31 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_35;
    }
    v33 = v30 + 16LL * *v32 + 312;
  }
  else
  {
LABEL_35:
    v33 = sub_1BDA590(v19, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v33)(v19, *(_QWORD *)(v33 + 8));
}


void __fastcall PurchaseLogicIOS___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5AB28 & 1) == 0 )
  {
    sub_1B885B0(&PurchaseLogicIOS___c_TypeInfo);
    byte_4A5AB28 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(PurchaseLogicIOS___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  PurchaseLogicIOS___c_TypeInfo->static_fields->__9 = (struct PurchaseLogicIOS___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)PurchaseLogicIOS___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4A5AB29 & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c_o *)sub_1B885B0(&System_DateTime_TypeInfo);
    byte_4A5AB29 = 1;
  }
  if ( !r )
    sub_1B8880C(this, r);
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
    sub_1B8880C(this, 0LL);
  return !x->fields.isCommitedAlready;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_1(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.freeStoneNum;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_2(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.chargeStoneNum;
}


bool __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_3(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.isSentPresentBox;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAllPurchasedProductIdList_b__10_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.purchasedBankShopId;
}


int32_t __fastcall PurchaseLogicIOS___c___UpdateMonthlyPurchasePrice_b__7_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return System_String__Equals_61716152(this->fields.productId, bankShop->fields.googleShopId, 4, 0LL);
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
  if ( (byte_4A5AB2A & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c__DisplayClass2_0_o *)sub_1B885B0(&System_DateTime_TypeInfo);
    byte_4A5AB2A = 1;
  }
  if ( !r )
    sub_1B8880C(this, r);
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