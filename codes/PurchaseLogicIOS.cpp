bool __fastcall PurchaseLogicIOS__CheckIfReceiptShouldBeSentInIOSOldStyle(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Security_AppleReceipt_o *receipt,
        System_String_o *transactionIdInOldStyleReceipt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_IEnumerable_TSource__o *inAppPurchaseReceipts; // x21
  void *monitor; // x8
  int v27; // w9
  PurchaseLogicIOS___c_c *v28; // x0
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__2_0; // x22
  Il2CppObject *v31; // x23
  struct PurchaseLogicIOS___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  bool v39; // w0
  struct UnityEngine_Purchasing_Security_AppleInAppPurchaseReceipt_array *v40; // x19
  bool v41; // w21
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v46; // x22
  bool v47; // w0

  if ( (byte_40FA08F & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_AppleInAppPurchaseReceipt___, receipt);
    sub_B16FFC(&Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___, v7);
    sub_B16FFC(&Method_System_Func_AppleInAppPurchaseReceipt__bool___ctor__, v8);
    sub_B16FFC(&System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo, v9);
    sub_B16FFC(&Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__, v10);
    sub_B16FFC(&Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__, v11);
    sub_B16FFC(&PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo, v12);
    sub_B16FFC(&PurchaseLogicIOS___c_TypeInfo, v13);
    byte_40FA08F = 1;
  }
  v14 = sub_B170CC(PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo, receipt, transactionIdInOldStyleReceipt, method, v4);
  PurchaseLogicIOS___c__DisplayClass2_0___ctor((PurchaseLogicIOS___c__DisplayClass2_0_o *)v14, 0LL);
  if ( !v14 )
    sub_B170D4();
  *(_QWORD *)(v14 + 16) = transactionIdInOldStyleReceipt;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v14 + 16),
    (System_Int32_array **)transactionIdInOldStyleReceipt,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
    v27 = 0;
    do
      ++v27;
    while ( v27 < (int)monitor );
  }
  v28 = PurchaseLogicIOS___c_TypeInfo;
  if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
    v28 = PurchaseLogicIOS___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo,
                                                                                   v21,
                                                                                   v22,
                                                                                   v23,
                                                                                   v24);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__2_0,
      v31,
      Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_AppleInAppPurchaseReceipt__bool___ctor__);
    v32 = PurchaseLogicIOS___c_TypeInfo->static_fields;
    v32->__9__2_0 = (struct System_Func_AppleInAppPurchaseReceipt__bool__o *)_9__2_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v32->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v39 = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
          inAppPurchaseReceipts,
          (System_Func_TSource__bool__o *)_9__2_0,
          (const MethodInfo_18C70D4 *)Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___);
  v40 = receipt->fields.inAppPurchaseReceipts;
  v41 = v39;
  v46 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo,
                                                                             v42,
                                                                             v43,
                                                                             v44,
                                                                             v45);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v46,
    (Il2CppObject *)v14,
    Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_AppleInAppPurchaseReceipt__bool___ctor__);
  v47 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
          (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v40,
          (System_Func_T__bool__o *)v46,
          (const MethodInfo_18B6074 *)Method_BasicHelper_Any_AppleInAppPurchaseReceipt___);
  return v41 || !v47;
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
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x21
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  Il2CppObject *current; // x20
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Purchasing_ProductCollection_o *v16; // x0
  UnityEngine_Purchasing_Product_o *v17; // x1
  const MethodInfo *v18; // x2
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FA096 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, product);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_B16FFC(&UnityEngine_Purchasing_IStoreController_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    sub_B16FFC(&PurchaseLogic_TypeInfo, v8);
    byte_40FA096 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)product);
  if ( !AllPurchasedProductIdList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AllPurchasedProductIdList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
    if ( !storeController )
      sub_B170D4();
    klass = storeController->klass;
    current = v20.fields.current;
    if ( *(_WORD *)&storeController->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((UnityEngine_Purchasing_IStoreController_c **)p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&storeController->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AAFEF8(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
    }
    v16 = (UnityEngine_Purchasing_ProductCollection_o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))p_method)(
                                                          storeController,
                                                          *(_QWORD *)(p_method + 8));
    if ( !v16 )
      sub_B170D4();
    v17 = UnityEngine_Purchasing_ProductCollection__WithID(v16, (System_String_o *)current, 0LL);
    if ( v17 )
      PurchaseLogic__ConfirmPurchase((PurchaseLogic_o *)this, v17, v18);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogicIOS__ConvertBankShopIdToProductId(
        PurchaseLogicIOS_o *this,
        System_Collections_Generic_IEnumerable_int__o *bankShopIDs,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x21
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x0
  __int64 v27; // x20
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  int32_t v36; // w1
  WarEntity_o *Entity; // x0
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0

  if ( (byte_40FA098 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__float__Invoke__, bankShopIDs);
    sub_B16FFC(&Method_DataManager_GetMasterData_BankShopMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v8);
    sub_B16FFC(&System_IDisposable_TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_int__TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_int__TypeInfo, v11);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&StringLiteral_16534/*"bankShopMaster is null"*/, v17);
    byte_40FA098 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  bankShopIDs,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( logErrorOutputActionSampledByRatio )
    {
      System_Action_string__float___Invoke(
        logErrorOutputActionSampledByRatio,
        (System_String_o *)StringLiteral_16534/*"bankShopMaster is null"*/,
        0.01,
        (const MethodInfo_24C5364 *)Method_System_Action_string__float__Invoke__);
      return (System_Collections_Generic_List_string__o *)v18;
    }
LABEL_40:
    sub_B170D4();
  }
  if ( !bankShopIDs )
    goto LABEL_40;
  klass = bankShopIDs->klass;
  v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( *(_WORD *)&bankShopIDs->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v23;
      p_offset += 4;
      if ( v23 >= *(unsigned __int16 *)&bankShopIDs->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AAFEF8(bankShopIDs, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          bankShopIDs,
          *(_QWORD *)(p_method + 8));
  if ( !v27 )
    sub_B170D4();
  while ( 1 )
  {
    v28 = *(_QWORD *)v27;
    if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
    {
      v29 = 0LL;
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
          goto LABEL_19;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_19:
      v31 = sub_AAFEF8(v27, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8)) & 1) == 0 )
      break;
    v32 = *(_QWORD *)v27;
    if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
    {
      v33 = 0LL;
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v34 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
          goto LABEL_26;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_26:
      v35 = sub_AAFEF8(v27, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v27, *(_QWORD *)(v35 + 8));
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v22,
               v36,
               (const MethodInfo_266F388 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    if ( Entity )
    {
      if ( !v18 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v18,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Entity->fields.name,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  v38 = *(_QWORD *)v27;
  if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
  {
    v39 = 0LL;
    v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
        goto LABEL_35;
    }
    v41 = v38 + 16LL * *v40 + 312;
  }
  else
  {
LABEL_35:
    v41 = sub_AAFEF8(v27, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v41)(v27, *(_QWORD *)(v41 + 8));
  return (System_Collections_Generic_List_string__o *)v18;
}


void __fastcall PurchaseLogicIOS__DebugLog(PurchaseLogicIOS_o *this, System_String_o *log, const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x19

  if ( (byte_40FA093 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Debug_TypeInfo, log);
    sub_B16FFC(&StringLiteral_14894/*"UnityIAP:"*/, v4);
    byte_40FA093 = 1;
  }
  v5 = (Il2CppObject *)System_String__Concat_43743732((System_String_o *)StringLiteral_14894/*"UnityIAP:"*/, log, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log(v5, 0LL);
}


PurchaseLogic_ReceiptContents_o *__fastcall PurchaseLogicIOS__ExtractReceiptContents(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_String_o *receipt_k__BackingField; // x22
  __int64 v23; // x20
  Il2CppObject *v24; // x0
  __int64 v25; // x10
  __int64 v26; // x10
  System_Xml_Schema_XmlSchemaObject_o *v27; // x25
  struct System_Action_string__o *logErrorOutputAction; // x0
  UnityEngine_Purchasing_ConfigurationBuilder_o *v29; // x0
  Il2CppObject *v30; // x0
  Il2CppObject *v31; // x22
  Il2CppClass *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_String_o *v36; // x22
  System_Byte_array *v37; // x22
  System_Byte_array *v38; // x24
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  UnityEngine_Purchasing_Security_AppleValidator_o *v43; // x23
  UnityEngine_Purchasing_Security_AppleReceipt_o *v44; // x0
  const MethodInfo *v45; // x1
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  WarBoardManager_TaskList_o *id_k__BackingField; // x23
  UnityEngine_Purchasing_Security_AppleReceipt_o *v48; // x22
  System_Collections_Generic_List_WarBoardManager_TaskList__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0
  System_String_array **v50; // x2
  MethodInfo *v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x23
  UnityEngine_Purchasing_IExtensionProvider_c *v57; // x8
  void *v58; // x24
  __int64 v59; // x1
  __int64 v60; // x2
  unsigned __int64 v61; // x10
  int32_t *v62; // x11
  __int64 v63; // x0
  __int64 (__fastcall **v64)(struct UnityEngine_Purchasing_IExtensionProvider_o *); // x0
  __int64 v65; // x0
  __int64 v66; // x23
  __int64 v67; // x8
  unsigned __int64 v68; // x10
  int *v69; // x11
  __int64 v70; // x0
  System_String_o *v71; // x21
  const MethodInfo *v72; // x2
  System_String_o *TransactionIdFromOldStyleReceipt; // x23
  _BOOL8 IsNullOrEmpty; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FA08E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__Invoke__, product);
    sub_B16FFC(&UnityEngine_Purchasing_Security_AppleValidator_TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___, v8);
    sub_B16FFC(&System_Convert_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v10);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Purchasing_IAppleConfiguration_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v13);
    sub_B16FFC(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v15);
    sub_B16FFC(&PurchaseLogic_TypeInfo, v16);
    sub_B16FFC(&PurchaseLogic_ReceiptContents_TypeInfo, v17);
    sub_B16FFC(&string_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_10592/*"Payload"*/, v19);
    sub_B16FFC(&StringLiteral_11250/*"RawReceipt Decode Error. "*/, v20);
    sub_B16FFC(&StringLiteral_1/*""*/, v21);
    byte_40FA08E = 1;
  }
  value = 0LL;
  if ( !product )
    goto LABEL_62;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v23 = sub_B170CC(PurchaseLogic_ReceiptContents_TypeInfo, product, method, v3, v4);
  PurchaseLogic_ReceiptContents___ctor((PurchaseLogic_ReceiptContents_o *)v23, 0LL);
  v24 = UnityEngine_Purchasing_MiniJson__JsonDecode(receipt_k__BackingField, 0LL);
  if ( !v24 )
    goto LABEL_62;
  v25 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v25
    || (System_Collections_Generic_Dictionary_string__object__c *)v24->klass->_2.typeHierarchy[v25 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    goto LABEL_62;
  }
  v26 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  v27 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  if ( *(&v24->klass->_2.bitflags2 + 1) >= (unsigned int)v26 )
  {
    if ( (System_Collections_Generic_Dictionary_string__object__c *)v24->klass->_2.typeHierarchy[v26 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      v24 = 0LL;
  }
  else
  {
    v24 = 0LL;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v24,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_10592/*"Payload"*/,
         &value,
         (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    if ( value )
    {
      if ( (System_String_c *)value->klass == string_TypeInfo )
        v27 = value;
      else
        v27 = 0LL;
    }
    else
    {
      v27 = 0LL;
    }
  }
  else
  {
    logErrorOutputAction = this->fields._logErrorOutputAction;
    if ( !logErrorOutputAction )
      goto LABEL_62;
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)logErrorOutputAction,
      (System_Uri_o *)StringLiteral_11250/*"RawReceipt Decode Error. "*/,
      (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
  }
  v29 = (UnityEngine_Purchasing_ConfigurationBuilder_o *)((__int64 (__fastcall *)(PurchaseLogicIOS_o *, Il2CppMethodPointer))this->klass->vtable._10_GetConfigurationBuilder.method)(
                                                           this,
                                                           this->klass->vtable._11_SetObfuscatedAccountId.methodPtr);
  if ( !v29 )
    sub_B170D4();
  v30 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
          v29,
          (const MethodInfo_18BDDAC *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___);
  v31 = v30;
  if ( !v30 )
    sub_B170D4();
  klass = v30->klass;
  if ( *(_WORD *)&v30->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IAppleConfiguration_c **)p_offset - 1) != UnityEngine_Purchasing_IAppleConfiguration_TypeInfo )
    {
      ++v33;
      p_offset += 4;
      if ( v33 >= *(unsigned __int16 *)&v30->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_25:
    p_method = sub_AAFEF8(v30, UnityEngine_Purchasing_IAppleConfiguration_TypeInfo, 0LL);
  }
  v36 = (System_String_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(v31, *(_QWORD *)(p_method + 8));
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v37 = System_Convert__FromBase64String(v36, 0LL);
  v38 = UnityEngine_Purchasing_Security_AppleTangle__Data(0LL);
  v43 = (UnityEngine_Purchasing_Security_AppleValidator_o *)sub_B170CC(
                                                              UnityEngine_Purchasing_Security_AppleValidator_TypeInfo,
                                                              v39,
                                                              v40,
                                                              v41,
                                                              v42);
  UnityEngine_Purchasing_Security_AppleValidator___ctor(v43, v38, 0LL);
  if ( !v43 )
    sub_B170D4();
  v44 = UnityEngine_Purchasing_Security_AppleValidator__Validate(v43, v37, 0LL);
  definition_k__BackingField = product->fields._definition_k__BackingField;
  if ( !definition_k__BackingField )
    sub_B170D4();
  id_k__BackingField = (WarBoardManager_TaskList_o *)definition_k__BackingField->fields._id_k__BackingField;
  v48 = v44;
  DeferredPurchaseProductIdsFromPlayerPrefs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs((PurchaseLogic_o *)v44, v45);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
    sub_B170D4();
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          DeferredPurchaseProductIdsFromPlayerPrefs,
          id_k__BackingField,
          (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_60;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_B170D4();
  v57 = storeExtensionProvider->klass;
  v58 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v59 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 3);
  v60 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 36);
  if ( *(_WORD *)&storeExtensionProvider->klass->_2.bitflags1 )
  {
    v61 = 0LL;
    v62 = &v57->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)v62 - 1) != v59 )
    {
      ++v61;
      v62 += 4;
      if ( v61 >= *(unsigned __int16 *)&storeExtensionProvider->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v63 = (__int64)&v57->vtable[*v62 + (int)v60].method;
  }
  else
  {
LABEL_39:
    v63 = sub_AAFEF8(storeExtensionProvider, v59, v60);
  }
  v64 = (__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *))sub_B170AC(
                                                                                         *(_QWORD *)(v63 + 8),
                                                                                         v58);
  v65 = (*v64)(storeExtensionProvider);
  v66 = v65;
  if ( !v65 )
    sub_B170D4();
  v67 = *(_QWORD *)v65;
  if ( *(_WORD *)(*(_QWORD *)v65 + 298LL) )
  {
    v68 = 0LL;
    v69 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
    while ( *((UnityEngine_Purchasing_IAppleExtensions_c **)v69 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      ++v68;
      v69 += 4;
      if ( v68 >= *(unsigned __int16 *)(*(_QWORD *)v65 + 298LL) )
        goto LABEL_46;
    }
    v70 = v67 + 16LL * *v69 + 312;
  }
  else
  {
LABEL_46:
    v70 = sub_AAFEF8(v65, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 0LL);
  }
  v71 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, UnityEngine_Purchasing_Product_o *, _QWORD))v70)(
                             v66,
                             product,
                             *(_QWORD *)(v70 + 8));
  TransactionIdFromOldStyleReceipt = PurchaseLogicIOS__GetTransactionIdFromOldStyleReceipt(this, v71, v72);
  IsNullOrEmpty = System_String__IsNullOrEmpty(TransactionIdFromOldStyleReceipt, 0LL);
  if ( IsNullOrEmpty
    || !PurchaseLogicIOS__CheckIfReceiptShouldBeSentInIOSOldStyle(
          (PurchaseLogicIOS_o *)IsNullOrEmpty,
          v48,
          TransactionIdFromOldStyleReceipt,
          v51) )
  {
LABEL_60:
    v71 = (System_String_o *)v27;
    if ( v23 )
      goto LABEL_61;
LABEL_62:
    sub_B170D4();
  }
  if ( !v23 )
    sub_B170D4();
  *(_QWORD *)(v23 + 56) = TransactionIdFromOldStyleReceipt;
  *(_BYTE *)(v23 + 48) = 1;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v23 + 56),
    (System_Int32_array **)TransactionIdFromOldStyleReceipt,
    v50,
    (System_String_array **)v51,
    v52,
    v53,
    v54,
    v55);
LABEL_61:
  *(_QWORD *)(v23 + 32) = v71;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v23 + 32),
    (System_Int32_array **)v71,
    v50,
    (System_String_array **)v51,
    v52,
    v53,
    v54,
    v55);
  return (PurchaseLogic_ReceiptContents_o *)v23;
}


void __fastcall PurchaseLogicIOS__GetAddedStoneNum(
        PurchaseLogicIOS_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        int32_t *freeStoneNum,
        int32_t *chargeStoneNum,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  PurchaseLogicIOS___c_c *v17; // x0
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__12_0; // x22
  Il2CppObject *v20; // x23
  struct PurchaseLogicIOS___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  PurchaseLogicIOS___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x21
  struct PurchaseLogicIOS___c_StaticFields *v35; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__12_1; // x22
  Il2CppObject *v37; // x23
  struct PurchaseLogicIOS___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  PurchaseLogicIOS___c_c *v50; // x0
  struct PurchaseLogicIOS___c_StaticFields *v51; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__12_2; // x20
  Il2CppObject *v53; // x22
  struct PurchaseLogicIOS___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v61; // x0

  if ( (byte_40FA099 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___,
      purchaseResultArray);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___, v8);
    sub_B16FFC(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__, v9);
    sub_B16FFC(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__, v10);
    sub_B16FFC(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v11);
    sub_B16FFC(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v12);
    sub_B16FFC(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__, v13);
    sub_B16FFC(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__, v14);
    sub_B16FFC(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__, v15);
    sub_B16FFC(&PurchaseLogicIOS___c_TypeInfo, v16);
    byte_40FA099 = 1;
  }
  *chargeStoneNum = 0;
  *freeStoneNum = 0;
  if ( purchaseResultArray )
  {
    v17 = PurchaseLogicIOS___c_TypeInfo;
    if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v17 = PurchaseLogicIOS___c_TypeInfo;
    }
    static_fields = v17->static_fields;
    _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)static_fields->__9;
      _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo,
                                                                                      purchaseResultArray,
                                                                                      freeStoneNum,
                                                                                      chargeStoneNum,
                                                                                      method);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__12_0,
        v20,
        Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__);
      v21 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v21->__9__12_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__12_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v21->__9__12_0,
        (System_Int32_array **)_9__12_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    v28 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
            (System_Func_TSource__bool__o *)_9__12_0,
            (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    v33 = PurchaseLogicIOS___c_TypeInfo;
    v34 = v28;
    if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v33 = PurchaseLogicIOS___c_TypeInfo;
    }
    v35 = v33->static_fields;
    _9__12_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v35->__9__12_1;
    if ( !_9__12_1 )
    {
      if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v35 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v37 = (Il2CppObject *)v35->__9;
      _9__12_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                   System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo,
                                                                                   v29,
                                                                                   v30,
                                                                                   v31,
                                                                                   v32);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__12_1,
        v37,
        Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
      v38 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v38->__9__12_1 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v38->__9__12_1,
        (System_Int32_array **)_9__12_1,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
    }
    v45 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
            v34,
            (System_Func_TSource__TResult__o *)_9__12_1,
            (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    *freeStoneNum = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v45, 0LL);
    v50 = PurchaseLogicIOS___c_TypeInfo;
    if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v50 = PurchaseLogicIOS___c_TypeInfo;
    }
    v51 = v50->static_fields;
    _9__12_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v51->__9__12_2;
    if ( !_9__12_2 )
    {
      if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v50);
        v51 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v53 = (Il2CppObject *)v51->__9;
      _9__12_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                   System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo,
                                                                                   v46,
                                                                                   v47,
                                                                                   v48,
                                                                                   v49);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__12_2,
        v53,
        Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
      v54 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v54->__9__12_2 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_2;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v54->__9__12_2,
        (System_Int32_array **)_9__12_2,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
    }
    v61 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
            v34,
            (System_Func_TSource__TResult__o *)_9__12_2,
            (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    *chargeStoneNum = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v61, 0LL);
  }
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogicIOS__GetAllPurchasedProductIdList(
        PurchaseLogicIOS_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x20
  PurchaseLogicIOS___c_c *v15; // x0
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v18; // x22
  struct PurchaseLogicIOS___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v26; // x1
  const MethodInfo *v27; // x2
  System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x19

  if ( (byte_40FA097 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__float__Invoke__, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___, v6);
    sub_B16FFC(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__, v7);
    sub_B16FFC(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_B16FFC(&Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__, v11);
    sub_B16FFC(&PurchaseLogicIOS___c_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_16108/*"_purchaseResultArray is null"*/, v13);
    byte_40FA097 = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._purchaseResultArray;
  if ( purchaseResultArray )
  {
    v15 = PurchaseLogicIOS___c_TypeInfo;
    if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v15 = PurchaseLogicIOS___c_TypeInfo;
    }
    static_fields = v15->static_fields;
    _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v18 = (Il2CppObject *)static_fields->__9;
      _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                   System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo,
                                                                                   method,
                                                                                   v2,
                                                                                   v3,
                                                                                   v4);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__10_0,
        v18,
        Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
      v19 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v19->__9__10_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__10_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v19->__9__10_0,
        (System_Int32_array **)_9__10_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    v26 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
            purchaseResultArray,
            (System_Func_TSource__TResult__o *)_9__10_0,
            (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    return PurchaseLogicIOS__ConvertBankShopIdToProductId(
             this,
             (System_Collections_Generic_IEnumerable_int__o *)v26,
             v27);
  }
  else
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( !logErrorOutputActionSampledByRatio )
      sub_B170D4();
    System_Action_string__float___Invoke(
      logErrorOutputActionSampledByRatio,
      (System_String_o *)StringLiteral_16108/*"_purchaseResultArray is null"*/,
      0.01,
      (const MethodInfo_24C5364 *)Method_System_Action_string__float__Invoke__);
    v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_string__TypeInfo,
                                                                                                    v30,
                                                                                                    v31,
                                                                                                    v32,
                                                                                                    v33);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v34,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v34;
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
  System_String_o *v13; // x0
  System_Byte_array *v14; // x21
  System_Text_Encoding_o *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x1
  System_Collections_Generic_Dictionary_string__object__o *v18; // x0
  System_Xml_Schema_XmlSchemaObject_o *v21; // [xsp+8h] [xbp-38h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40FA090 & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, iOSOldStylePayloadStr);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    sub_B16FFC(&string_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_21487/*"purchase-info"*/, v6);
    sub_B16FFC(&StringLiteral_22677/*"transaction-id"*/, v7);
    byte_40FA090 = 1;
  }
  value = 0LL;
  v21 = 0LL;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v8 = System_Convert__FromBase64String(iOSOldStylePayloadStr, 0LL);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_B170D4();
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, Il2CppMethodPointer))UTF8->klass->vtable._34_GetString.method)(
                             UTF8,
                             v8,
                             UTF8->klass->vtable._35_GetString.methodPtr);
  v12 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v10, v11);
  if ( !v12 )
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v12,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21487/*"purchase-info"*/,
    &value,
    (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( value )
  {
    if ( (System_String_c *)value->klass == string_TypeInfo )
      v13 = (System_String_o *)value;
    else
      v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  v14 = System_Convert__FromBase64String(v13, 0LL);
  v15 = System_Text_Encoding__get_UTF8(0LL);
  if ( !v15 )
    sub_B170D4();
  v16 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, Il2CppMethodPointer))v15->klass->vtable._34_GetString.method)(
                             v15,
                             v14,
                             v15->klass->vtable._35_GetString.methodPtr);
  v18 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v16, v17);
  if ( !v18 )
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v18,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22677/*"transaction-id"*/,
    &v21,
    (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( !v21 )
    return 0LL;
  if ( (System_String_c *)v21->klass == string_TypeInfo )
    return (System_String_o *)v21;
  return 0LL;
}


bool __fastcall PurchaseLogicIOS__IsDeferredPurchaseExists(PurchaseLogicIOS_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0

  if ( (byte_40FA09A & 1) == 0 )
  {
    this = (PurchaseLogicIOS_o *)sub_B16FFC(&Method_System_Linq_Enumerable_Any_string___, method);
    byte_40FA09A = 1;
  }
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)this,
                                                method);
  return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
           (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_string___);
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
    sub_B170D4();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v13; // x19
  __int64 v14; // x2
  __int64 v15; // x0
  __int64 v16; // x2
  __int64 v17; // x1
  int v18; // w8
  __int64 v19; // x20
  unsigned int v20; // w24
  __int64 v21; // x8
  System_String_o *v22; // x21
  System_String_o *v23; // x21
  __int64 v24; // x2
  __int64 v25; // x21
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  System_Xml_XmlQualifiedName_o *v28; // x22
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x0

  if ( (byte_40FA091 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v8);
    sub_B16FFC(&StringLiteral_1503/*"="*/, v9);
    sub_B16FFC(&StringLiteral_1260/*";"*/, v10);
    sub_B16FFC(&StringLiteral_288/*"\""*/, v11);
    sub_B16FFC(&StringLiteral_1/*""*/, v12);
    byte_40FA091 = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                        method,
                                                                                        v2,
                                                                                        v3,
                                                                                        v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v13,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v15 = sub_B17014(char___TypeInfo, 1LL, v14);
  if ( !v15 )
    goto LABEL_26;
  v17 = v15;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_27;
  *(_WORD *)(v15 + 32) = 10;
  if ( !str || (v15 = (__int64)System_String__Split(str, (System_Char_array *)v15, 0LL)) == 0 )
LABEL_26:
    sub_B170D4();
  v18 = *(_DWORD *)(v15 + 24);
  v19 = v15;
  if ( v18 >= 1 )
  {
    v20 = 0;
    while ( v20 < v18 )
    {
      v21 = v19 + 8LL * (int)v20;
      v22 = *(System_String_o **)(v21 + 32);
      if ( !v22 )
        goto LABEL_26;
      v15 = System_String__Contains(*(System_String_o **)(v21 + 32), (System_String_o *)StringLiteral_1503/*"="*/, 0LL);
      if ( (v15 & 1) != 0 )
      {
        v23 = System_String__Replace_43750968(
                v22,
                (System_String_o *)StringLiteral_1260/*";"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v15 = sub_B17014(char___TypeInfo, 1LL, v24);
        if ( !v15 )
          goto LABEL_26;
        v17 = v15;
        if ( !*(_DWORD *)(v15 + 24) )
          break;
        *(_WORD *)(v15 + 32) = 61;
        if ( !v23 )
          goto LABEL_26;
        v15 = (__int64)System_String__Split(v23, (System_Char_array *)v15, 0LL);
        if ( v15 )
        {
          v25 = v15;
          if ( *(int *)(v15 + 24) >= 2 )
          {
            v26 = *(System_String_o **)(v15 + 32);
            if ( !v26 )
              goto LABEL_26;
            v27 = System_String__Replace_43750968(
                    v26,
                    (System_String_o *)StringLiteral_288/*"\""*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
            if ( !v27 )
              goto LABEL_26;
            v15 = (__int64)System_String__Trim_43731064(v27, 0LL);
            if ( *(_DWORD *)(v25 + 24) <= 1u )
              break;
            v28 = (System_Xml_XmlQualifiedName_o *)v15;
            v29 = *(System_String_o **)(v25 + 40);
            if ( !v29 )
              goto LABEL_26;
            v30 = System_String__Replace_43750968(
                    v29,
                    (System_String_o *)StringLiteral_288/*"\""*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
            if ( !v30 )
              goto LABEL_26;
            v31 = System_String__Trim_43731064(v30, 0LL);
            if ( !v13 )
              goto LABEL_26;
            System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
              v13,
              v28,
              (System_Xml_Schema_XmlSchemaObject_o *)v31,
              (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
          }
        }
      }
      v18 = *(_DWORD *)(v19 + 24);
      if ( (int)++v20 >= v18 )
        return (System_Collections_Generic_Dictionary_string__object__o *)v13;
    }
LABEL_27:
    sub_B17100(v15, v17, v16);
    sub_B170A0();
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)v13;
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
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FA095 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, paymentProductId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v8);
    byte_40FA095 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)paymentProductId);
  if ( !AllPurchasedProductIdList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AllPurchasedProductIdList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v13.fields.current;
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)v13.fields.current, 0LL);
    if ( !IsNullOrEmpty )
      PurchaseLogic__SendPurchaseAction(
        (PurchaseLogic_o *)IsNullOrEmpty,
        (System_String_o *)current,
        transactionId,
        v12);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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

  if ( (byte_40FA092 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9714/*"OK"*/, *(_QWORD *)&failureReason);
    sub_B16FFC(&StringLiteral_23792/*"購入処理中に問題が発生しました"*/, v3);
    sub_B16FFC(&StringLiteral_23790/*"購入できません"*/, v4);
    sub_B16FFC(&StringLiteral_23791/*"購入処理中です、完了までお待ち下さい"*/, v5);
    sub_B16FFC(&StringLiteral_1999/*"App内の購入が機能制限されています"*/, v6);
    sub_B16FFC(&StringLiteral_23769/*"指定されたプロダクトデータが取得できませんでした"*/, v7);
    byte_40FA092 = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogicIOS__UpdateMonthlyPurchasePrice(
        PurchaseLogicIOS_o *this,
        int32_t bankShopId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x20
  PurchaseLogicIOS___c_c *v15; // x0
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x21
  Il2CppObject *v18; // x22
  struct PurchaseLogicIOS___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v26; // x0
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v28; // x20
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v32; // x20
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  int32_t v41; // w1
  const MethodInfo *v42; // x2
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0

  if ( (byte_40FA094 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___,
      *(_QWORD *)&bankShopId);
    sub_B16FFC(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__, v6);
    sub_B16FFC(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v7);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_int__TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_int__TypeInfo, v10);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B16FFC(&Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__, v12);
    sub_B16FFC(&PurchaseLogicIOS___c_TypeInfo, v13);
    byte_40FA094 = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._purchaseResultArray;
  v15 = PurchaseLogicIOS___c_TypeInfo;
  if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
    v15 = PurchaseLogicIOS___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo,
                                                                                *(_QWORD *)&bankShopId,
                                                                                method,
                                                                                v3,
                                                                                v4);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v18,
      Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
    v19 = PurchaseLogicIOS___c_TypeInfo->static_fields;
    v19->__9__7_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__7_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v19->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
          purchaseResultArray,
          (System_Func_TSource__TResult__o *)_9__7_0,
          (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
  if ( !v26 )
    sub_B170D4();
  klass = v26->klass;
  v28 = v26;
  if ( *(_WORD *)&v26->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v29;
      p_offset += 4;
      if ( v29 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AAFEF8(v26, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v28,
          *(_QWORD *)(p_method + 8));
  if ( !v32 )
    sub_B170D4();
  while ( 1 )
  {
    v33 = *(_QWORD *)v32;
    if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
    {
      v34 = 0LL;
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
          goto LABEL_23;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_23:
      v36 = sub_AAFEF8(v32, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
      break;
    v37 = *(_QWORD *)v32;
    if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
    {
      v38 = 0LL;
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v39 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
          goto LABEL_30;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_30:
      v40 = sub_AAFEF8(v32, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v32, *(_QWORD *)(v40 + 8));
    PurchaseLogic__UpdateMonthlyPurchasePrice((PurchaseLogic_o *)this, v41, v42);
  }
  v43 = *(_QWORD *)v32;
  if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
  {
    v44 = 0LL;
    v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      ++v44;
      v45 += 4;
      if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
        goto LABEL_37;
    }
    v46 = v43 + 16LL * *v45 + 312;
  }
  else
  {
LABEL_37:
    v46 = sub_AAFEF8(v32, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v46)(v32, *(_QWORD *)(v46 + 8));
}


void __fastcall PurchaseLogicIOS___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FA2CD & 1) == 0 )
  {
    sub_B16FFC(&PurchaseLogicIOS___c_TypeInfo, v1);
    byte_40FA2CD = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(PurchaseLogicIOS___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)PurchaseLogicIOS___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40FA2CE & 1) == 0 )
  {
    sub_B16FFC(&System_DateTime_TypeInfo, r);
    byte_40FA2CE = 1;
  }
  if ( !r )
    sub_B170D4();
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
    sub_B170D4();
  return !x->fields.isCommitedAlready;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_1(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.freeStoneNum;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_2(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.chargeStoneNum;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAllPurchasedProductIdList_b__10_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.purchasedBankShopId;
}


int32_t __fastcall PurchaseLogicIOS___c___UpdateMonthlyPurchasePrice_b__7_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
  uint64_t dateData; // x21
  uint64_t v6; // x22
  System_DateTime_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x1.8

  if ( (byte_40FA2CF & 1) == 0 )
  {
    sub_B16FFC(&System_DateTime_TypeInfo, r);
    byte_40FA2CF = 1;
  }
  if ( !r )
    sub_B170D4();
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
           this->fields.transactionIdInOldStyleReceipt,
           0LL);
}