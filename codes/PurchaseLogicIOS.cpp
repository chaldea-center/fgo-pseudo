bool __fastcall PurchaseLogicIOS__CheckIfReceiptShouldBeSentInIOSOldStyle(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Security_AppleReceipt_o *receipt,
        System_String_o *transactionIdInOldStyleReceipt,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *inAppPurchaseReceipts; // x21
  void *monitor; // x8
  int v17; // w9
  PurchaseLogicIOS___c_c *v18; // x0
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__2_0; // x22
  Il2CppObject *v21; // x23
  struct PurchaseLogicIOS___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  bool v29; // w0
  struct UnityEngine_Purchasing_Security_AppleInAppPurchaseReceipt_array *v30; // x19
  bool v31; // w21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v32; // x22
  bool v33; // w0

  if ( (byte_4351F8F & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_AppleInAppPurchaseReceipt___);
    sub_B70694(&Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___);
    sub_B70694(&Method_System_Func_AppleInAppPurchaseReceipt__bool___ctor__);
    sub_B70694(&System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
    sub_B70694(&Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__);
    sub_B70694(&Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__);
    sub_B70694(&PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo);
    sub_B70694(&PurchaseLogicIOS___c_TypeInfo);
    byte_4351F8F = 1;
  }
  v6 = sub_B70764(PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo);
  PurchaseLogicIOS___c__DisplayClass2_0___ctor((PurchaseLogicIOS___c__DisplayClass2_0_o *)v6, 0LL);
  if ( !v6 )
    sub_B7076C(v7, v8);
  *(_QWORD *)(v6 + 16) = transactionIdInOldStyleReceipt;
  sub_B70630(
    (BattleServantConfConponent_o *)(v6 + 16),
    (System_Int32_array **)transactionIdInOldStyleReceipt,
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
    v17 = 0;
    do
      ++v17;
    while ( v17 < (int)monitor );
  }
  v18 = PurchaseLogicIOS___c_TypeInfo;
  if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
    v18 = PurchaseLogicIOS___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__2_0,
      v21,
      Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_AppleInAppPurchaseReceipt__bool___ctor__);
    v22 = PurchaseLogicIOS___c_TypeInfo->static_fields;
    v22->__9__2_0 = (struct System_Func_AppleInAppPurchaseReceipt__bool__o *)_9__2_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v22->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
          inAppPurchaseReceipts,
          (System_Func_TSource__bool__o *)_9__2_0,
          (const MethodInfo_1CA7D8C *)Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___);
  v30 = receipt->fields.inAppPurchaseReceipts;
  v31 = v29;
  v32 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v32,
    (Il2CppObject *)v6,
    Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__,
    (const MethodInfo_29AC578 *)Method_System_Func_AppleInAppPurchaseReceipt__bool___ctor__);
  v33 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
          (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v30,
          (System_Func_T__bool__o *)v32,
          (const MethodInfo_1BDCB34 *)Method_BasicHelper_Any_AppleInAppPurchaseReceipt___);
  return v31 || !v33;
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
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Purchasing_ProductCollection_o *v14; // x0
  __int64 v15; // x1
  UnityEngine_Purchasing_Product_o *v16; // x1
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4351F96 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B70694(&UnityEngine_Purchasing_IStoreController_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_B70694(&PurchaseLogic_TypeInfo);
    byte_4351F96 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)product);
  if ( !AllPurchasedProductIdList )
    sub_B7076C(0LL, v5);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AllPurchasedProductIdList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v19,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v6 )
      break;
    storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
    if ( !storeController )
      sub_B7076C(v6, v7);
    klass = storeController->klass;
    current = v19.fields.current;
    if ( *(_WORD *)&storeController->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((UnityEngine_Purchasing_IStoreController_c **)p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&storeController->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_B08590(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
    }
    v14 = (UnityEngine_Purchasing_ProductCollection_o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))p_method)(
                                                          storeController,
                                                          *(_QWORD *)(p_method + 8));
    if ( !v14 )
      sub_B7076C(0LL, v15);
    v16 = UnityEngine_Purchasing_ProductCollection__WithID(v14, (System_String_o *)current, 0LL);
    if ( v16 )
      PurchaseLogic__ConfirmPurchase((PurchaseLogic_o *)this, v16, v17);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogicIOS__ConvertBankShopIdToProductId(
        PurchaseLogicIOS_o *this,
        System_Collections_Generic_IEnumerable_int__o *bankShopIDs,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x21
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x8
  unsigned __int64 v16; // x10
  int *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0
  int32_t v23; // w1
  WarEntity_o *Entity; // x0
  __int64 v25; // x1
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0

  if ( (byte_4351F98 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_string__float__Invoke__);
    sub_B70694(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_B70694(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_16842/*"bankShopMaster is null"*/);
    byte_4351F98 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
  {
    Instance = (DataManager_o *)this->fields._logErrorOutputActionSampledByRatio;
    if ( Instance )
    {
      System_Action_string__float___Invoke(
        (System_Action_string__float__o *)Instance,
        (System_String_o *)StringLiteral_16842/*"bankShopMaster is null"*/,
        0.01,
        (const MethodInfo_265A800 *)Method_System_Action_string__float__Invoke__);
      return (System_Collections_Generic_List_string__o *)v5;
    }
LABEL_40:
    sub_B7076C(Instance, v7);
  }
  if ( !bankShopIDs )
    goto LABEL_40;
  klass = bankShopIDs->klass;
  v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  if ( *(_WORD *)&bankShopIDs->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v10;
      p_offset += 4;
      if ( v10 >= *(unsigned __int16 *)&bankShopIDs->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_B08590(bankShopIDs, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          bankShopIDs,
          *(_QWORD *)(p_method + 8));
  if ( !v14 )
    sub_B7076C(0LL, v13);
  while ( 1 )
  {
    v15 = *(_QWORD *)v14;
    if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
    {
      v16 = 0LL;
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
          goto LABEL_19;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_19:
      v18 = sub_B08590(v14, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
      break;
    v19 = *(_QWORD *)v14;
    if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
    {
      v20 = 0LL;
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v21 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
          goto LABEL_26;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_26:
      v22 = sub_B08590(v14, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v9,
               v23,
               (const MethodInfo_21C0440 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    if ( Entity )
    {
      if ( !v5 )
        sub_B7076C(Entity, v25);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Entity->fields.name,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  v26 = *(_QWORD *)v14;
  if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
  {
    v27 = 0LL;
    v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
        goto LABEL_35;
    }
    v29 = v26 + 16LL * *v28 + 312;
  }
  else
  {
LABEL_35:
    v29 = sub_B08590(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v29)(v14, *(_QWORD *)(v29 + 8));
  return (System_Collections_Generic_List_string__o *)v5;
}


void __fastcall PurchaseLogicIOS__DebugLog(PurchaseLogicIOS_o *this, System_String_o *log, const MethodInfo *method)
{
  Il2CppObject *v4; // x19

  if ( (byte_4351F93 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Debug_TypeInfo);
    sub_B70694(&StringLiteral_15140/*"UnityIAP:"*/);
    byte_4351F93 = 1;
  }
  v4 = (Il2CppObject *)System_String__Concat_44758168((System_String_o *)StringLiteral_15140/*"UnityIAP:"*/, log, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
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
  __int64 v7; // x10
  __int64 v8; // x10
  System_Xml_Schema_XmlSchemaObject_o *v9; // x25
  UnityEngine_Purchasing_ConfigurationBuilder_o *v10; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x22
  Il2CppClass *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_String_o *v19; // x22
  System_Byte_array *v20; // x22
  System_Byte_array *v21; // x24
  UnityEngine_Purchasing_Security_AppleValidator_o *v22; // x23
  __int64 v23; // x0
  __int64 v24; // x1
  UnityEngine_Purchasing_Security_AppleReceipt_o *v25; // x0
  const MethodInfo *v26; // x1
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  WarBoardManager_TaskList_o *id_k__BackingField; // x23
  UnityEngine_Purchasing_Security_AppleReceipt_o *v29; // x22
  System_Collections_Generic_List_WarBoardManager_TaskList__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  MethodInfo *v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x23
  UnityEngine_Purchasing_IExtensionProvider_c *v39; // x8
  void *v40; // x24
  __int64 v41; // x1
  __int64 v42; // x2
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  __int64 (__fastcall **v46)(struct UnityEngine_Purchasing_IExtensionProvider_o *); // x0
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x23
  __int64 v50; // x8
  unsigned __int64 v51; // x10
  int *v52; // x11
  __int64 v53; // x0
  System_String_o *v54; // x21
  const MethodInfo *v55; // x2
  System_String_o *TransactionIdFromOldStyleReceipt; // x23
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4351F8E & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_string__Invoke__);
    sub_B70694(&UnityEngine_Purchasing_Security_AppleValidator_TypeInfo);
    sub_B70694(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___);
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B70694(&UnityEngine_Purchasing_IAppleConfiguration_TypeInfo);
    sub_B70694(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo);
    sub_B70694(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___);
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&PurchaseLogic_TypeInfo);
    sub_B70694(&PurchaseLogic_ReceiptContents_TypeInfo);
    sub_B70694(&string_TypeInfo);
    sub_B70694(&StringLiteral_10767/*"Payload"*/);
    sub_B70694(&StringLiteral_11440/*"RawReceipt Decode Error. "*/);
    this = (PurchaseLogicIOS_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_4351F8E = 1;
  }
  value = 0LL;
  if ( !product )
    goto LABEL_62;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v6 = sub_B70764(PurchaseLogic_ReceiptContents_TypeInfo);
  PurchaseLogic_ReceiptContents___ctor((PurchaseLogic_ReceiptContents_o *)v6, 0LL);
  this = (PurchaseLogicIOS_o *)UnityEngine_Purchasing_MiniJson__JsonDecode(receipt_k__BackingField, 0LL);
  if ( !this )
    goto LABEL_62;
  v7 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v7 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    goto LABEL_62;
  }
  v8 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  v9 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v8 )
  {
    if ( (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v8 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      this = 0LL;
  }
  else
  {
    this = 0LL;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_10767/*"Payload"*/,
         &value,
         (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    if ( value )
    {
      if ( (System_String_c *)value->klass == string_TypeInfo )
        v9 = value;
      else
        v9 = 0LL;
    }
    else
    {
      v9 = 0LL;
    }
  }
  else
  {
    this = (PurchaseLogicIOS_o *)v4->fields._logErrorOutputAction;
    if ( !this )
      goto LABEL_62;
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)this,
      (System_Uri_o *)StringLiteral_11440/*"RawReceipt Decode Error. "*/,
      (const MethodInfo_264C15C *)Method_System_Action_string__Invoke__);
  }
  v10 = (UnityEngine_Purchasing_ConfigurationBuilder_o *)((__int64 (__fastcall *)(PurchaseLogicIOS_o *, Il2CppMethodPointer))v4->klass->vtable._10_GetConfigurationBuilder.method)(
                                                           v4,
                                                           v4->klass->vtable._11_SetObfuscatedAccountId.methodPtr);
  if ( !v10 )
    sub_B7076C(0LL, v11);
  v12 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
          v10,
          (const MethodInfo_1BE4978 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___);
  v14 = v12;
  if ( !v12 )
    sub_B7076C(0LL, v13);
  klass = v12->klass;
  if ( *(_WORD *)&v12->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IAppleConfiguration_c **)p_offset - 1) != UnityEngine_Purchasing_IAppleConfiguration_TypeInfo )
    {
      ++v16;
      p_offset += 4;
      if ( v16 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_25:
    p_method = sub_B08590(v12, UnityEngine_Purchasing_IAppleConfiguration_TypeInfo, 0LL);
  }
  v19 = (System_String_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(v14, *(_QWORD *)(p_method + 8));
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v20 = System_Convert__FromBase64String(v19, 0LL);
  v21 = UnityEngine_Purchasing_Security_AppleTangle__Data(0LL);
  v22 = (UnityEngine_Purchasing_Security_AppleValidator_o *)sub_B70764(UnityEngine_Purchasing_Security_AppleValidator_TypeInfo);
  UnityEngine_Purchasing_Security_AppleValidator___ctor(v22, v21, 0LL);
  if ( !v22 )
    sub_B7076C(v23, v24);
  v25 = UnityEngine_Purchasing_Security_AppleValidator__Validate(v22, v20, 0LL);
  definition_k__BackingField = product->fields._definition_k__BackingField;
  if ( !definition_k__BackingField )
    sub_B7076C(v25, v26);
  id_k__BackingField = (WarBoardManager_TaskList_o *)definition_k__BackingField->fields._id_k__BackingField;
  v29 = v25;
  DeferredPurchaseProductIdsFromPlayerPrefs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs((PurchaseLogic_o *)v25, v26);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
    sub_B7076C(0LL, v31);
  this = (PurchaseLogicIOS_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                 DeferredPurchaseProductIdsFromPlayerPrefs,
                                 id_k__BackingField,
                                 (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_60;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_B7076C(this, product);
  v39 = storeExtensionProvider->klass;
  v40 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v41 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 3);
  v42 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 36);
  if ( *(_WORD *)&storeExtensionProvider->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    v44 = &v39->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)v44 - 1) != v41 )
    {
      ++v43;
      v44 += 4;
      if ( v43 >= *(unsigned __int16 *)&storeExtensionProvider->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v45 = (__int64)&v39->vtable[*v44 + (int)v42].method;
  }
  else
  {
LABEL_39:
    v45 = sub_B08590(storeExtensionProvider, v41, v42);
  }
  v46 = (__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *))sub_B70744(
                                                                                         *(_QWORD *)(v45 + 8),
                                                                                         v40);
  v47 = (*v46)(storeExtensionProvider);
  v49 = v47;
  if ( !v47 )
    sub_B7076C(0LL, v48);
  v50 = *(_QWORD *)v47;
  if ( *(_WORD *)(*(_QWORD *)v47 + 298LL) )
  {
    v51 = 0LL;
    v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
    while ( *((UnityEngine_Purchasing_IAppleExtensions_c **)v52 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      ++v51;
      v52 += 4;
      if ( v51 >= *(unsigned __int16 *)(*(_QWORD *)v47 + 298LL) )
        goto LABEL_46;
    }
    v53 = v50 + 16LL * *v52 + 312;
  }
  else
  {
LABEL_46:
    v53 = sub_B08590(v47, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 0LL);
  }
  v54 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, UnityEngine_Purchasing_Product_o *, _QWORD))v53)(
                             v49,
                             product,
                             *(_QWORD *)(v53 + 8));
  TransactionIdFromOldStyleReceipt = PurchaseLogicIOS__GetTransactionIdFromOldStyleReceipt(v4, v54, v55);
  this = (PurchaseLogicIOS_o *)System_String__IsNullOrEmpty(TransactionIdFromOldStyleReceipt, 0LL);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (PurchaseLogicIOS_o *)PurchaseLogicIOS__CheckIfReceiptShouldBeSentInIOSOldStyle(
                                       this,
                                       v29,
                                       TransactionIdFromOldStyleReceipt,
                                       v33),
        ((unsigned __int8)this & 1) == 0) )
  {
LABEL_60:
    v54 = (System_String_o *)v9;
    if ( v6 )
      goto LABEL_61;
LABEL_62:
    sub_B7076C(this, product);
  }
  if ( !v6 )
    sub_B7076C(this, product);
  *(_QWORD *)(v6 + 56) = TransactionIdFromOldStyleReceipt;
  *(_BYTE *)(v6 + 48) = 1;
  sub_B70630(
    (BattleServantConfConponent_o *)(v6 + 56),
    (System_Int32_array **)TransactionIdFromOldStyleReceipt,
    v32,
    (System_String_array **)v33,
    v34,
    v35,
    v36,
    v37);
LABEL_61:
  *(_QWORD *)(v6 + 32) = v54;
  sub_B70630(
    (BattleServantConfConponent_o *)(v6 + 32),
    (System_Int32_array **)v54,
    v32,
    (System_String_array **)v33,
    v34,
    v35,
    v36,
    v37);
  return (PurchaseLogic_ReceiptContents_o *)v6;
}


void __fastcall PurchaseLogicIOS__GetAddedStoneNum(
        PurchaseLogicIOS_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        int32_t *freeStoneNum,
        int32_t *chargeStoneNum,
        const MethodInfo *method)
{
  PurchaseLogicIOS___c_c *v8; // x0
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__12_0; // x22
  Il2CppObject *v11; // x23
  struct PurchaseLogicIOS___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  PurchaseLogicIOS___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x21
  struct PurchaseLogicIOS___c_StaticFields *v22; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__12_1; // x22
  Il2CppObject *v24; // x23
  struct PurchaseLogicIOS___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v32; // x0
  PurchaseLogicIOS___c_c *v33; // x0
  struct PurchaseLogicIOS___c_StaticFields *v34; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__12_2; // x20
  Il2CppObject *v36; // x22
  struct PurchaseLogicIOS___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v44; // x0

  if ( (byte_4351F99 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_B70694(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__);
    sub_B70694(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
    sub_B70694(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    sub_B70694(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    sub_B70694(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__);
    sub_B70694(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__);
    sub_B70694(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__);
    sub_B70694(&PurchaseLogicIOS___c_TypeInfo);
    byte_4351F99 = 1;
  }
  *chargeStoneNum = 0;
  *freeStoneNum = 0;
  if ( purchaseResultArray )
  {
    v8 = PurchaseLogicIOS___c_TypeInfo;
    if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v8 = PurchaseLogicIOS___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v11 = (Il2CppObject *)static_fields->__9;
      _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__12_0,
        v11,
        Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__,
        (const MethodInfo_29AC578 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__);
      v12 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v12->__9__12_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__12_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v12->__9__12_0,
        (System_Int32_array **)_9__12_0,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    v19 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
            (System_Func_TSource__bool__o *)_9__12_0,
            (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    v20 = PurchaseLogicIOS___c_TypeInfo;
    v21 = v19;
    if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v20 = PurchaseLogicIOS___c_TypeInfo;
    }
    v22 = v20->static_fields;
    _9__12_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v22->__9__12_1;
    if ( !_9__12_1 )
    {
      if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v22 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v24 = (Il2CppObject *)v22->__9;
      _9__12_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__12_1,
        v24,
        Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__,
        (const MethodInfo_29AD124 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
      v25 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v25->__9__12_1 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_1;
      sub_B70630(
        (BattleServantConfConponent_o *)&v25->__9__12_1,
        (System_Int32_array **)_9__12_1,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    v32 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
            v21,
            (System_Func_TSource__TResult__o *)_9__12_1,
            (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    *freeStoneNum = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v32, 0LL);
    v33 = PurchaseLogicIOS___c_TypeInfo;
    if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v33 = PurchaseLogicIOS___c_TypeInfo;
    }
    v34 = v33->static_fields;
    _9__12_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v34->__9__12_2;
    if ( !_9__12_2 )
    {
      if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v34 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v36 = (Il2CppObject *)v34->__9;
      _9__12_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__12_2,
        v36,
        Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__,
        (const MethodInfo_29AD124 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
      v37 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v37->__9__12_2 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_2;
      sub_B70630(
        (BattleServantConfConponent_o *)&v37->__9__12_2,
        (System_Int32_array **)_9__12_2,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    v44 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
            v21,
            (System_Func_TSource__TResult__o *)_9__12_2,
            (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    *chargeStoneNum = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v44, 0LL);
  }
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogicIOS__GetAllPurchasedProductIdList(
        PurchaseLogicIOS_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x20
  PurchaseLogicIOS___c_c *v4; // x0
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v7; // x22
  struct PurchaseLogicIOS___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x1
  const MethodInfo *v16; // x2
  System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19

  if ( (byte_4351F97 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_string__float__Invoke__);
    sub_B70694(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    sub_B70694(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
    sub_B70694(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__);
    sub_B70694(&PurchaseLogicIOS___c_TypeInfo);
    sub_B70694(&StringLiteral_16410/*"_purchaseResultArray is null"*/);
    byte_4351F97 = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._purchaseResultArray;
  if ( purchaseResultArray )
  {
    v4 = PurchaseLogicIOS___c_TypeInfo;
    if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v4 = PurchaseLogicIOS___c_TypeInfo;
    }
    static_fields = v4->static_fields;
    _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v7 = (Il2CppObject *)static_fields->__9;
      _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__10_0,
        v7,
        Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__,
        (const MethodInfo_29AD124 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
      v8 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v8->__9__10_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__10_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v8->__9__10_0,
        (System_Int32_array **)_9__10_0,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    v15 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
            purchaseResultArray,
            (System_Func_TSource__TResult__o *)_9__10_0,
            (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    return PurchaseLogicIOS__ConvertBankShopIdToProductId(
             this,
             (System_Collections_Generic_IEnumerable_int__o *)v15,
             v16);
  }
  else
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( !logErrorOutputActionSampledByRatio )
      sub_B7076C(0LL, method);
    System_Action_string__float___Invoke(
      logErrorOutputActionSampledByRatio,
      (System_String_o *)StringLiteral_16410/*"_purchaseResultArray is null"*/,
      0.01,
      (const MethodInfo_265A800 *)Method_System_Action_string__float__Invoke__);
    v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v19,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v19;
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
  System_String_o *v11; // x0
  System_Byte_array *v12; // x21
  System_Text_Encoding_o *v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x0
  const MethodInfo *v16; // x1
  System_Collections_Generic_Dictionary_string__object__o *v17; // x0
  __int64 v18; // x1
  System_Xml_Schema_XmlSchemaObject_o *v21; // [xsp+8h] [xbp-38h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4351F90 & 1) == 0 )
  {
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&string_TypeInfo);
    sub_B70694(&StringLiteral_21936/*"purchase-info"*/);
    sub_B70694(&StringLiteral_23147/*"transaction-id"*/);
    byte_4351F90 = 1;
  }
  value = 0LL;
  v21 = 0LL;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v4 = System_Convert__FromBase64String(iOSOldStylePayloadStr, 0LL);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_B7076C(0LL, v6);
  v7 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, Il2CppMethodPointer))UTF8->klass->vtable._34_GetString.method)(
                            UTF8,
                            v4,
                            UTF8->klass->vtable._35_GetString.methodPtr);
  v9 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v7, v8);
  if ( !v9 )
    sub_B7076C(0LL, v10);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v9,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21936/*"purchase-info"*/,
    &value,
    (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( value )
  {
    if ( (System_String_c *)value->klass == string_TypeInfo )
      v11 = (System_String_o *)value;
    else
      v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = System_Convert__FromBase64String(v11, 0LL);
  v13 = System_Text_Encoding__get_UTF8(0LL);
  if ( !v13 )
    sub_B7076C(0LL, v14);
  v15 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, Il2CppMethodPointer))v13->klass->vtable._34_GetString.method)(
                             v13,
                             v12,
                             v13->klass->vtable._35_GetString.methodPtr);
  v17 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v15, v16);
  if ( !v17 )
    sub_B7076C(0LL, v18);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v17,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23147/*"transaction-id"*/,
    &v21,
    (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( !v21 )
    return 0LL;
  if ( (System_String_c *)v21->klass == string_TypeInfo )
    return (System_String_o *)v21;
  return 0LL;
}


bool __fastcall PurchaseLogicIOS__IsDeferredPurchaseExists(PurchaseLogicIOS_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0

  if ( (byte_4351F9A & 1) == 0 )
  {
    this = (PurchaseLogicIOS_o *)sub_B70694(&Method_System_Linq_Enumerable_Any_string___);
    byte_4351F9A = 1;
  }
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)this,
                                                method);
  return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
           (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_string___);
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
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  const MethodInfo *v5; // x5

  if ( !product || (definition_k__BackingField = product->fields._definition_k__BackingField) == 0LL )
    sub_B7076C(this, product);
  PurchaseLogic__AddDeferredPurchaseProductIdsToPlayerPrefs(
    (PurchaseLogic_o *)this,
    definition_k__BackingField->fields._id_k__BackingField,
    method);
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear((PurchaseLogic_o *)this, 4, 0, 0, 0, v5);
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall PurchaseLogicIOS__ParseIOSOldStyleReceipt(
        System_String_o *str,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v3; // x19
  System_Char_array *v4; // x0
  System_Char_array *v5; // x1
  int max_length; // w8
  System_Char_array *v7; // x20
  unsigned int v8; // w24
  Il2CppClass **v9; // x8
  System_String_o *v10; // x21
  System_String_o *v11; // x21
  System_Char_array *v12; // x21
  System_Xml_XmlQualifiedName_o *v13; // x22
  __int64 v15; // x0

  if ( (byte_4351F91 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B70694(&StringLiteral_1531/*"="*/);
    sub_B70694(&StringLiteral_1287/*";"*/);
    sub_B70694(&StringLiteral_298/*"\""*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4351F91 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v3,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v4 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_26;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_27;
  v4->m_Items[2] = 10;
  if ( !str || (v4 = (System_Char_array *)System_String__Split(str, v4, 0LL)) == 0LL )
LABEL_26:
    sub_B7076C(v4, v5);
  max_length = v4->max_length;
  v7 = v4;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( v8 < max_length )
    {
      v9 = &v7->obj.klass + (int)v8;
      v10 = (System_String_o *)v9[4];
      if ( !v10 )
        goto LABEL_26;
      v4 = (System_Char_array *)System_String__Contains(
                                  (System_String_o *)v9[4],
                                  (System_String_o *)StringLiteral_1531/*"="*/,
                                  0LL);
      if ( ((unsigned __int8)v4 & 1) != 0 )
      {
        v11 = System_String__Replace_44765404(
                v10,
                (System_String_o *)StringLiteral_1287/*";"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v4 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
        if ( !v4 )
          goto LABEL_26;
        v5 = v4;
        if ( !v4->max_length )
          break;
        v4->m_Items[2] = 61;
        if ( !v11 )
          goto LABEL_26;
        v4 = (System_Char_array *)System_String__Split(v11, v4, 0LL);
        if ( v4 )
        {
          v12 = v4;
          if ( (int)v4->max_length >= 2 )
          {
            v4 = *(System_Char_array **)&v4->m_Items[2];
            if ( !v4 )
              goto LABEL_26;
            v4 = (System_Char_array *)System_String__Replace_44765404(
                                        (System_String_o *)v4,
                                        (System_String_o *)StringLiteral_298/*"\""*/,
                                        (System_String_o *)StringLiteral_1/*""*/,
                                        0LL);
            if ( !v4 )
              goto LABEL_26;
            v4 = (System_Char_array *)System_String__Trim_44745500((System_String_o *)v4, 0LL);
            if ( v12->max_length <= 1 )
              break;
            v13 = (System_Xml_XmlQualifiedName_o *)v4;
            v4 = *(System_Char_array **)&v12->m_Items[6];
            if ( !v4 )
              goto LABEL_26;
            v4 = (System_Char_array *)System_String__Replace_44765404(
                                        (System_String_o *)v4,
                                        (System_String_o *)StringLiteral_298/*"\""*/,
                                        (System_String_o *)StringLiteral_1/*""*/,
                                        0LL);
            if ( !v4 )
              goto LABEL_26;
            v4 = (System_Char_array *)System_String__Trim_44745500((System_String_o *)v4, 0LL);
            if ( !v3 )
              goto LABEL_26;
            System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
              v3,
              v13,
              (System_Xml_Schema_XmlSchemaObject_o *)v4,
              (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
          }
        }
      }
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return (System_Collections_Generic_Dictionary_string__object__o *)v3;
    }
LABEL_27:
    v15 = sub_B70798(v4);
    sub_B70738(v15, 0LL);
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
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4351F95 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4351F95 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)paymentProductId);
  if ( !AllPurchasedProductIdList )
    sub_B7076C(0LL, v7);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AllPurchasedProductIdList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v11.fields.current;
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)v11.fields.current, 0LL);
    if ( !IsNullOrEmpty )
      PurchaseLogic__SendPurchaseAction(
        (PurchaseLogic_o *)IsNullOrEmpty,
        (System_String_o *)current,
        transactionId,
        v10);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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
  if ( (byte_4351F92 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9858/*"OK"*/);
    sub_B70694(&StringLiteral_24291/*"購入処理中に問題が発生しました"*/);
    sub_B70694(&StringLiteral_24289/*"購入できません"*/);
    sub_B70694(&StringLiteral_24290/*"購入処理中です、完了までお待ち下さい"*/);
    sub_B70694(&StringLiteral_2038/*"App内の購入が機能制限されています"*/);
    sub_B70694(&StringLiteral_24265/*"指定されたプロダクトデータが取得できませんでした"*/);
    byte_4351F92 = 1;
  }
}


void __fastcall PurchaseLogicIOS__UpdateMonthlyPurchasePrice(
        PurchaseLogicIOS_o *this,
        int32_t bankShopId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x20
  PurchaseLogicIOS___c_c *v5; // x0
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x21
  Il2CppObject *v8; // x22
  struct PurchaseLogicIOS___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v19; // x20
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x1
  __int64 v24; // x20
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  int32_t v33; // w1
  const MethodInfo *v34; // x2
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0

  if ( (byte_4351F94 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    sub_B70694(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
    sub_B70694(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__);
    sub_B70694(&PurchaseLogicIOS___c_TypeInfo);
    byte_4351F94 = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._purchaseResultArray;
  v5 = PurchaseLogicIOS___c_TypeInfo;
  if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
    v5 = PurchaseLogicIOS___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v8,
      Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__,
      (const MethodInfo_29AD124 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
    v9 = PurchaseLogicIOS___c_TypeInfo->static_fields;
    v9->__9__7_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__7_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v9->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
          purchaseResultArray,
          (System_Func_TSource__TResult__o *)_9__7_0,
          (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
  if ( !v16 )
    sub_B7076C(0LL, v17);
  klass = v16->klass;
  v19 = v16;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v20;
      p_offset += 4;
      if ( v20 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_B08590(v16, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v19,
          *(_QWORD *)(p_method + 8));
  if ( !v24 )
    sub_B7076C(0LL, v23);
  while ( 1 )
  {
    v25 = *(_QWORD *)v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_23;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_23:
      v28 = sub_B08590(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v30 = 0LL;
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v31 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_30;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_30:
      v32 = sub_B08590(v24, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
    PurchaseLogic__UpdateMonthlyPurchasePrice((PurchaseLogic_o *)this, v33, v34);
  }
  v35 = *(_QWORD *)v24;
  if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
  {
    v36 = 0LL;
    v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
        goto LABEL_37;
    }
    v38 = v35 + 16LL * *v37 + 312;
  }
  else
  {
LABEL_37:
    v38 = sub_B08590(v24, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v38)(v24, *(_QWORD *)(v38 + 8));
}


void __fastcall PurchaseLogicIOS___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4351ABF & 1) == 0 )
  {
    sub_B70694(&PurchaseLogicIOS___c_TypeInfo);
    byte_4351ABF = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(PurchaseLogicIOS___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)PurchaseLogicIOS___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4351AC0 & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c_o *)sub_B70694(&System_DateTime_TypeInfo);
    byte_4351AC0 = 1;
  }
  if ( !r )
    sub_B7076C(this, r);
  dateData = r->fields._cancellationDate_k__BackingField.fields.dateData;
  v5 = r->fields._purchaseDate_k__BackingField.fields.dateData;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  v7.fields.dateData = dateData;
  v8.fields.dateData = v5;
  return System_DateTime__op_GreaterThan(v7, v8, 0LL);
}


bool __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return !x->fields.isCommitedAlready;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_1(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.freeStoneNum;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_2(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.chargeStoneNum;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAllPurchasedProductIdList_b__10_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.purchasedBankShopId;
}


int32_t __fastcall PurchaseLogicIOS___c___UpdateMonthlyPurchasePrice_b__7_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.purchasedBankShopId;
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
  if ( (byte_4351AC1 & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c__DisplayClass2_0_o *)sub_B70694(&System_DateTime_TypeInfo);
    byte_4351AC1 = 1;
  }
  if ( !r )
    sub_B7076C(this, r);
  dateData = r->fields._cancellationDate_k__BackingField.fields.dateData;
  v6 = r->fields._purchaseDate_k__BackingField.fields.dateData;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  v8.fields.dateData = dateData;
  v9.fields.dateData = v6;
  return System_DateTime__op_LessThanOrEqual(v8, v9, 0LL)
      && System_String__op_Equality(
           r->fields._transactionID_k__BackingField,
           v4->fields.transactionIdInOldStyleReceipt,
           0LL);
}