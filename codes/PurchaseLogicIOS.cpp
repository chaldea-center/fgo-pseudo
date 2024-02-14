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
  __int64 v12; // x1
  __int64 v13; // x20
  __int64 v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_IEnumerable_TSource__o *inAppPurchaseReceipts; // x21
  void *monitor; // x8
  int v25; // w9
  PurchaseLogicIOS___c_c *v26; // x0
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__2_0; // x22
  Il2CppObject *v29; // x23
  struct PurchaseLogicIOS___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  bool v37; // w0
  struct UnityEngine_Purchasing_Security_AppleInAppPurchaseReceipt_array *v38; // x19
  bool v39; // w21
  __int64 v40; // x1
  __int64 v41; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v42; // x22
  bool v43; // w0

  if ( (byte_421452D & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_AppleInAppPurchaseReceipt___, receipt);
    sub_B0D8A4(&Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___, v6);
    sub_B0D8A4(&Method_System_Func_AppleInAppPurchaseReceipt__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__, v9);
    sub_B0D8A4(&Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__, v10);
    sub_B0D8A4(&PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo, v11);
    sub_B0D8A4(&PurchaseLogicIOS___c_TypeInfo, v12);
    byte_421452D = 1;
  }
  v13 = sub_B0D974(PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo, receipt, transactionIdInOldStyleReceipt);
  PurchaseLogicIOS___c__DisplayClass2_0___ctor((PurchaseLogicIOS___c__DisplayClass2_0_o *)v13, 0LL);
  if ( !v13 )
    sub_B0D97C(v14);
  *(_QWORD *)(v13 + 16) = transactionIdInOldStyleReceipt;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v13 + 16),
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
    v25 = 0;
    do
      ++v25;
    while ( v25 < (int)monitor );
  }
  v26 = PurchaseLogicIOS___c_TypeInfo;
  if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
    v26 = PurchaseLogicIOS___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo,
                                                                                   v21,
                                                                                   v22);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__2_0,
      v29,
      Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_AppleInAppPurchaseReceipt__bool___ctor__);
    v30 = PurchaseLogicIOS___c_TypeInfo->static_fields;
    v30->__9__2_0 = (struct System_Func_AppleInAppPurchaseReceipt__bool__o *)_9__2_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v30->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  v37 = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
          inAppPurchaseReceipts,
          (System_Func_TSource__bool__o *)_9__2_0,
          (const MethodInfo_171872C *)Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___);
  v38 = receipt->fields.inAppPurchaseReceipts;
  v39 = v37;
  v42 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo,
                                                                             v40,
                                                                             v41);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v42,
    (Il2CppObject *)v13,
    Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__,
    (const MethodInfo_26189B8 *)Method_System_Func_AppleInAppPurchaseReceipt__bool___ctor__);
  v43 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
          (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v38,
          (System_Func_T__bool__o *)v42,
          (const MethodInfo_17071E4 *)Method_BasicHelper_Any_AppleInAppPurchaseReceipt___);
  return v39 || !v43;
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
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Purchasing_ProductCollection_o *v17; // x0
  UnityEngine_Purchasing_Product_o *v18; // x1
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4214534 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, product);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_B0D8A4(&UnityEngine_Purchasing_IStoreController_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    sub_B0D8A4(&PurchaseLogic_TypeInfo, v8);
    byte_4214534 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)product);
  if ( !AllPurchasedProductIdList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AllPurchasedProductIdList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v10 )
      break;
    storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
    if ( !storeController )
      sub_B0D97C(v10);
    klass = storeController->klass;
    current = v21.fields.current;
    if ( *(_WORD *)&storeController->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((UnityEngine_Purchasing_IStoreController_c **)p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&storeController->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AA67A0(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
    }
    v17 = (UnityEngine_Purchasing_ProductCollection_o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))p_method)(
                                                          storeController,
                                                          *(_QWORD *)(p_method + 8));
    if ( !v17 )
      sub_B0D97C(0LL);
    v18 = UnityEngine_Purchasing_ProductCollection__WithID(v17, (System_String_o *)current, 0LL);
    if ( v18 )
      PurchaseLogic__ConfirmPurchase((PurchaseLogic_o *)this, v18, v19);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  DataManager_o *Instance; // x0
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x21
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x20
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  int32_t v32; // w1
  WarEntity_o *Entity; // x0
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0

  if ( (byte_4214536 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string__float__Invoke__, bankShopIDs);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BankShopMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v6);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_int__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_int__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&StringLiteral_16647/*"bankShopMaster is null"*/, v15);
    byte_4214536 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  bankShopIDs,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
  {
    Instance = (DataManager_o *)this->fields._logErrorOutputActionSampledByRatio;
    if ( Instance )
    {
      System_Action_string__float___Invoke(
        (System_Action_string__float__o *)Instance,
        (System_String_o *)StringLiteral_16647/*"bankShopMaster is null"*/,
        0.01,
        (const MethodInfo_247D0F4 *)Method_System_Action_string__float__Invoke__);
      return (System_Collections_Generic_List_string__o *)v16;
    }
LABEL_40:
    sub_B0D97C(Instance);
  }
  if ( !bankShopIDs )
    goto LABEL_40;
  klass = bankShopIDs->klass;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  if ( *(_WORD *)&bankShopIDs->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v20;
      p_offset += 4;
      if ( v20 >= *(unsigned __int16 *)&bankShopIDs->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AA67A0(bankShopIDs, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          bankShopIDs,
          *(_QWORD *)(p_method + 8));
  if ( !v23 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v24 = *(_QWORD *)v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_19;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_19:
      v27 = sub_AA67A0(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v29 = 0LL;
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v30 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_26;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_26:
      v31 = sub_AA67A0(v23, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v19,
               v32,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    if ( Entity )
    {
      if ( !v16 )
        sub_B0D97C(Entity);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Entity->fields.name,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  v34 = *(_QWORD *)v23;
  if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
  {
    v35 = 0LL;
    v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
        goto LABEL_35;
    }
    v37 = v34 + 16LL * *v36 + 312;
  }
  else
  {
LABEL_35:
    v37 = sub_AA67A0(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v37)(v23, *(_QWORD *)(v37 + 8));
  return (System_Collections_Generic_List_string__o *)v16;
}


void __fastcall PurchaseLogicIOS__DebugLog(PurchaseLogicIOS_o *this, System_String_o *log, const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x19

  if ( (byte_4214531 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Debug_TypeInfo, log);
    sub_B0D8A4(&StringLiteral_15000/*"UnityIAP:"*/, v4);
    byte_4214531 = 1;
  }
  v5 = (Il2CppObject *)System_String__Concat_43849904((System_String_o *)StringLiteral_15000/*"UnityIAP:"*/, log, 0LL);
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
  __int64 v19; // x1
  System_String_o *receipt_k__BackingField; // x22
  __int64 v21; // x20
  __int64 v22; // x10
  __int64 v23; // x10
  System_Xml_Schema_XmlSchemaObject_o *v24; // x25
  UnityEngine_Purchasing_ConfigurationBuilder_o *v25; // x0
  Il2CppObject *v26; // x0
  Il2CppObject *v27; // x22
  Il2CppClass *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_String_o *v32; // x22
  System_Byte_array *v33; // x22
  System_Byte_array *v34; // x24
  __int64 v35; // x1
  __int64 v36; // x2
  UnityEngine_Purchasing_Security_AppleValidator_o *v37; // x23
  __int64 v38; // x0
  UnityEngine_Purchasing_Security_AppleReceipt_o *v39; // x0
  const MethodInfo *v40; // x1
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  WarBoardManager_TaskList_o *id_k__BackingField; // x23
  UnityEngine_Purchasing_Security_AppleReceipt_o *v43; // x22
  System_Collections_Generic_List_WarBoardManager_TaskList__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0
  System_String_array **v45; // x2
  MethodInfo *v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x23
  UnityEngine_Purchasing_IExtensionProvider_c *v52; // x8
  void *v53; // x24
  __int64 v54; // x1
  __int64 v55; // x2
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  __int64 (__fastcall **v59)(struct UnityEngine_Purchasing_IExtensionProvider_o *); // x0
  __int64 v60; // x0
  __int64 v61; // x23
  __int64 v62; // x8
  unsigned __int64 v63; // x10
  int *v64; // x11
  __int64 v65; // x0
  System_String_o *v66; // x21
  const MethodInfo *v67; // x2
  System_String_o *TransactionIdFromOldStyleReceipt; // x23
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_421452C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string__Invoke__, product);
    sub_B0D8A4(&UnityEngine_Purchasing_Security_AppleValidator_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___, v6);
    sub_B0D8A4(&System_Convert_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v8);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9);
    sub_B0D8A4(&UnityEngine_Purchasing_IAppleConfiguration_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v11);
    sub_B0D8A4(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v13);
    sub_B0D8A4(&PurchaseLogic_TypeInfo, v14);
    sub_B0D8A4(&PurchaseLogic_ReceiptContents_TypeInfo, v15);
    sub_B0D8A4(&string_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_10651/*"Payload"*/, v17);
    sub_B0D8A4(&StringLiteral_11313/*"RawReceipt Decode Error. "*/, v18);
    this = (PurchaseLogicIOS_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v19);
    byte_421452C = 1;
  }
  value = 0LL;
  if ( !product )
    goto LABEL_62;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v21 = sub_B0D974(PurchaseLogic_ReceiptContents_TypeInfo, product, method);
  PurchaseLogic_ReceiptContents___ctor((PurchaseLogic_ReceiptContents_o *)v21, 0LL);
  this = (PurchaseLogicIOS_o *)UnityEngine_Purchasing_MiniJson__JsonDecode(receipt_k__BackingField, 0LL);
  if ( !this )
    goto LABEL_62;
  v22 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v22
    || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v22 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    goto LABEL_62;
  }
  v23 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  v24 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v23 )
  {
    if ( (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v23 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      this = 0LL;
  }
  else
  {
    this = 0LL;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_10651/*"Payload"*/,
         &value,
         (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
    this = (PurchaseLogicIOS_o *)v4->fields._logErrorOutputAction;
    if ( !this )
      goto LABEL_62;
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)this,
      (System_Uri_o *)StringLiteral_11313/*"RawReceipt Decode Error. "*/,
      (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
  }
  v25 = (UnityEngine_Purchasing_ConfigurationBuilder_o *)((__int64 (__fastcall *)(PurchaseLogicIOS_o *, Il2CppMethodPointer))v4->klass->vtable._10_GetConfigurationBuilder.method)(
                                                           v4,
                                                           v4->klass->vtable._11_SetObfuscatedAccountId.methodPtr);
  if ( !v25 )
    sub_B0D97C(0LL);
  v26 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
          v25,
          (const MethodInfo_170F028 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___);
  v27 = v26;
  if ( !v26 )
    sub_B0D97C(0LL);
  klass = v26->klass;
  if ( *(_WORD *)&v26->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IAppleConfiguration_c **)p_offset - 1) != UnityEngine_Purchasing_IAppleConfiguration_TypeInfo )
    {
      ++v29;
      p_offset += 4;
      if ( v29 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_25:
    p_method = sub_AA67A0(v26, UnityEngine_Purchasing_IAppleConfiguration_TypeInfo, 0LL);
  }
  v32 = (System_String_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(v27, *(_QWORD *)(p_method + 8));
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v33 = System_Convert__FromBase64String(v32, 0LL);
  v34 = UnityEngine_Purchasing_Security_AppleTangle__Data(0LL);
  v37 = (UnityEngine_Purchasing_Security_AppleValidator_o *)sub_B0D974(
                                                              UnityEngine_Purchasing_Security_AppleValidator_TypeInfo,
                                                              v35,
                                                              v36);
  UnityEngine_Purchasing_Security_AppleValidator___ctor(v37, v34, 0LL);
  if ( !v37 )
    sub_B0D97C(v38);
  v39 = UnityEngine_Purchasing_Security_AppleValidator__Validate(v37, v33, 0LL);
  definition_k__BackingField = product->fields._definition_k__BackingField;
  if ( !definition_k__BackingField )
    sub_B0D97C(v39);
  id_k__BackingField = (WarBoardManager_TaskList_o *)definition_k__BackingField->fields._id_k__BackingField;
  v43 = v39;
  DeferredPurchaseProductIdsFromPlayerPrefs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs((PurchaseLogic_o *)v39, v40);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
    sub_B0D97C(0LL);
  this = (PurchaseLogicIOS_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                 DeferredPurchaseProductIdsFromPlayerPrefs,
                                 id_k__BackingField,
                                 (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_60;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_B0D97C(this);
  v52 = storeExtensionProvider->klass;
  v53 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v54 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 3);
  v55 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 36);
  if ( *(_WORD *)&storeExtensionProvider->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    v57 = &v52->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)v57 - 1) != v54 )
    {
      ++v56;
      v57 += 4;
      if ( v56 >= *(unsigned __int16 *)&storeExtensionProvider->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v58 = (__int64)&v52->vtable[*v57 + (int)v55].method;
  }
  else
  {
LABEL_39:
    v58 = sub_AA67A0(storeExtensionProvider, v54, v55);
  }
  v59 = (__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *))sub_B0D954(
                                                                                         *(_QWORD *)(v58 + 8),
                                                                                         v53);
  v60 = (*v59)(storeExtensionProvider);
  v61 = v60;
  if ( !v60 )
    sub_B0D97C(0LL);
  v62 = *(_QWORD *)v60;
  if ( *(_WORD *)(*(_QWORD *)v60 + 298LL) )
  {
    v63 = 0LL;
    v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
    while ( *((UnityEngine_Purchasing_IAppleExtensions_c **)v64 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      ++v63;
      v64 += 4;
      if ( v63 >= *(unsigned __int16 *)(*(_QWORD *)v60 + 298LL) )
        goto LABEL_46;
    }
    v65 = v62 + 16LL * *v64 + 312;
  }
  else
  {
LABEL_46:
    v65 = sub_AA67A0(v60, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 0LL);
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
                                       v43,
                                       TransactionIdFromOldStyleReceipt,
                                       v46),
        ((unsigned __int8)this & 1) == 0) )
  {
LABEL_60:
    v66 = (System_String_o *)v24;
    if ( v21 )
      goto LABEL_61;
LABEL_62:
    sub_B0D97C(this);
  }
  if ( !v21 )
    sub_B0D97C(this);
  *(_QWORD *)(v21 + 56) = TransactionIdFromOldStyleReceipt;
  *(_BYTE *)(v21 + 48) = 1;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v21 + 56),
    (System_Int32_array **)TransactionIdFromOldStyleReceipt,
    v45,
    (System_String_array **)v46,
    v47,
    v48,
    v49,
    v50);
LABEL_61:
  *(_QWORD *)(v21 + 32) = v66;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v21 + 32),
    (System_Int32_array **)v66,
    v45,
    (System_String_array **)v46,
    v47,
    v48,
    v49,
    v50);
  return (PurchaseLogic_ReceiptContents_o *)v21;
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
  PurchaseLogicIOS___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x21
  struct PurchaseLogicIOS___c_StaticFields *v33; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__12_1; // x22
  Il2CppObject *v35; // x23
  struct PurchaseLogicIOS___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  PurchaseLogicIOS___c_c *v46; // x0
  struct PurchaseLogicIOS___c_StaticFields *v47; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__12_2; // x20
  Il2CppObject *v49; // x22
  struct PurchaseLogicIOS___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v57; // x0

  if ( (byte_4214537 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___,
      purchaseResultArray);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___, v8);
    sub_B0D8A4(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__, v9);
    sub_B0D8A4(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__, v10);
    sub_B0D8A4(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v11);
    sub_B0D8A4(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v12);
    sub_B0D8A4(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__, v13);
    sub_B0D8A4(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__, v14);
    sub_B0D8A4(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__, v15);
    sub_B0D8A4(&PurchaseLogicIOS___c_TypeInfo, v16);
    byte_4214537 = 1;
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
      _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo,
                                                                                      purchaseResultArray,
                                                                                      freeStoneNum);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__12_0,
        v20,
        Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__,
        (const MethodInfo_26189B8 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__);
      v21 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v21->__9__12_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__12_0;
      sub_B0D840(
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
            (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    v31 = PurchaseLogicIOS___c_TypeInfo;
    v32 = v28;
    if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v31 = PurchaseLogicIOS___c_TypeInfo;
    }
    v33 = v31->static_fields;
    _9__12_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v33->__9__12_1;
    if ( !_9__12_1 )
    {
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v33 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v35 = (Il2CppObject *)v33->__9;
      _9__12_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                   System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo,
                                                                                   v29,
                                                                                   v30);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__12_1,
        v35,
        Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__,
        (const MethodInfo_2619564 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
      v36 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v36->__9__12_1 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v36->__9__12_1,
        (System_Int32_array **)_9__12_1,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    v43 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
            v32,
            (System_Func_TSource__TResult__o *)_9__12_1,
            (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    *freeStoneNum = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v43, 0LL);
    v46 = PurchaseLogicIOS___c_TypeInfo;
    if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v46 = PurchaseLogicIOS___c_TypeInfo;
    }
    v47 = v46->static_fields;
    _9__12_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v47->__9__12_2;
    if ( !_9__12_2 )
    {
      if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46);
        v47 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v49 = (Il2CppObject *)v47->__9;
      _9__12_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                   System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo,
                                                                                   v44,
                                                                                   v45);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__12_2,
        v49,
        Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__,
        (const MethodInfo_2619564 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
      v50 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v50->__9__12_2 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_2;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v50->__9__12_2,
        (System_Int32_array **)_9__12_2,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
    }
    v57 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
            v32,
            (System_Func_TSource__TResult__o *)_9__12_2,
            (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    *chargeStoneNum = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v57, 0LL);
  }
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogicIOS__GetAllPurchasedProductIdList(
        PurchaseLogicIOS_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x20
  PurchaseLogicIOS___c_c *v13; // x0
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v16; // x22
  struct PurchaseLogicIOS___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v24; // x1
  const MethodInfo *v25; // x2
  System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x19

  if ( (byte_4214535 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string__float__Invoke__, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___, v4);
    sub_B0D8A4(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__, v5);
    sub_B0D8A4(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v8);
    sub_B0D8A4(&Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__, v9);
    sub_B0D8A4(&PurchaseLogicIOS___c_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_16221/*"_purchaseResultArray is null"*/, v11);
    byte_4214535 = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._purchaseResultArray;
  if ( purchaseResultArray )
  {
    v13 = PurchaseLogicIOS___c_TypeInfo;
    if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v13 = PurchaseLogicIOS___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                   System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo,
                                                                                   method,
                                                                                   v2);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__10_0,
        v16,
        Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__,
        (const MethodInfo_2619564 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
      v17 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v17->__9__10_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__10_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v17->__9__10_0,
        (System_Int32_array **)_9__10_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    v24 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
            purchaseResultArray,
            (System_Func_TSource__TResult__o *)_9__10_0,
            (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    return PurchaseLogicIOS__ConvertBankShopIdToProductId(
             this,
             (System_Collections_Generic_IEnumerable_int__o *)v24,
             v25);
  }
  else
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( !logErrorOutputActionSampledByRatio )
      sub_B0D97C(0LL);
    System_Action_string__float___Invoke(
      logErrorOutputActionSampledByRatio,
      (System_String_o *)StringLiteral_16221/*"_purchaseResultArray is null"*/,
      0.01,
      (const MethodInfo_247D0F4 *)Method_System_Action_string__float__Invoke__);
    v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_string__TypeInfo,
                                                                                                    v28,
                                                                                                    v29);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v30,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v30;
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

  if ( (byte_421452E & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, iOSOldStylePayloadStr);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    sub_B0D8A4(&string_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_21649/*"purchase-info"*/, v6);
    sub_B0D8A4(&StringLiteral_22846/*"transaction-id"*/, v7);
    byte_421452E = 1;
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
    sub_B0D97C(0LL);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, Il2CppMethodPointer))UTF8->klass->vtable._34_GetString.method)(
                             UTF8,
                             v8,
                             UTF8->klass->vtable._35_GetString.methodPtr);
  v12 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v10, v11);
  if ( !v12 )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v12,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21649/*"purchase-info"*/,
    &value,
    (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
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
    sub_B0D97C(0LL);
  v16 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, Il2CppMethodPointer))v15->klass->vtable._34_GetString.method)(
                             v15,
                             v14,
                             v15->klass->vtable._35_GetString.methodPtr);
  v18 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v16, v17);
  if ( !v18 )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v18,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22846/*"transaction-id"*/,
    &v21,
    (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( !v21 )
    return 0LL;
  if ( (System_String_c *)v21->klass == string_TypeInfo )
    return (System_String_o *)v21;
  return 0LL;
}


bool __fastcall PurchaseLogicIOS__IsDeferredPurchaseExists(PurchaseLogicIOS_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0

  if ( (byte_4214538 & 1) == 0 )
  {
    this = (PurchaseLogicIOS_o *)sub_B0D8A4(&Method_System_Linq_Enumerable_Any_string___, method);
    byte_4214538 = 1;
  }
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)this,
                                                method);
  return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
           (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_string___);
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
    sub_B0D97C(this);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v11; // x19
  System_Char_array *v12; // x0
  int max_length; // w8
  System_Char_array *v14; // x20
  unsigned int v15; // w24
  Il2CppClass **v16; // x8
  System_String_o *v17; // x21
  System_String_o *v18; // x21
  System_Char_array *v19; // x21
  System_Xml_XmlQualifiedName_o *v20; // x22
  __int64 v22; // x0

  if ( (byte_421452F & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_1513/*"="*/, v7);
    sub_B0D8A4(&StringLiteral_1269/*";"*/, v8);
    sub_B0D8A4(&StringLiteral_293/*"\""*/, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_421452F = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                        method,
                                                                                        v2);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v11,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v12 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v12 )
    goto LABEL_26;
  if ( !v12->max_length )
    goto LABEL_27;
  v12->m_Items[2] = 10;
  if ( !str || (v12 = (System_Char_array *)System_String__Split(str, v12, 0LL)) == 0LL )
LABEL_26:
    sub_B0D97C(v12);
  max_length = v12->max_length;
  v14 = v12;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( v15 < max_length )
    {
      v16 = &v14->obj.klass + (int)v15;
      v17 = (System_String_o *)v16[4];
      if ( !v17 )
        goto LABEL_26;
      v12 = (System_Char_array *)System_String__Contains(
                                   (System_String_o *)v16[4],
                                   (System_String_o *)StringLiteral_1513/*"="*/,
                                   0LL);
      if ( ((unsigned __int8)v12 & 1) != 0 )
      {
        v18 = System_String__Replace_43857140(
                v17,
                (System_String_o *)StringLiteral_1269/*";"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v12 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
        if ( !v12 )
          goto LABEL_26;
        if ( !v12->max_length )
          break;
        v12->m_Items[2] = 61;
        if ( !v18 )
          goto LABEL_26;
        v12 = (System_Char_array *)System_String__Split(v18, v12, 0LL);
        if ( v12 )
        {
          v19 = v12;
          if ( (int)v12->max_length >= 2 )
          {
            v12 = *(System_Char_array **)&v12->m_Items[2];
            if ( !v12 )
              goto LABEL_26;
            v12 = (System_Char_array *)System_String__Replace_43857140(
                                         (System_String_o *)v12,
                                         (System_String_o *)StringLiteral_293/*"\""*/,
                                         (System_String_o *)StringLiteral_1/*""*/,
                                         0LL);
            if ( !v12 )
              goto LABEL_26;
            v12 = (System_Char_array *)System_String__Trim_43837236((System_String_o *)v12, 0LL);
            if ( v19->max_length <= 1 )
              break;
            v20 = (System_Xml_XmlQualifiedName_o *)v12;
            v12 = *(System_Char_array **)&v19->m_Items[6];
            if ( !v12 )
              goto LABEL_26;
            v12 = (System_Char_array *)System_String__Replace_43857140(
                                         (System_String_o *)v12,
                                         (System_String_o *)StringLiteral_293/*"\""*/,
                                         (System_String_o *)StringLiteral_1/*""*/,
                                         0LL);
            if ( !v12 )
              goto LABEL_26;
            v12 = (System_Char_array *)System_String__Trim_43837236((System_String_o *)v12, 0LL);
            if ( !v11 )
              goto LABEL_26;
            System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
              v11,
              v20,
              (System_Xml_Schema_XmlSchemaObject_o *)v12,
              (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
          }
        }
      }
      max_length = v14->max_length;
      if ( (int)++v15 >= max_length )
        return (System_Collections_Generic_Dictionary_string__object__o *)v11;
    }
LABEL_27:
    v22 = sub_B0D9A8(v12);
    sub_B0D948(v22, 0LL);
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)v11;
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

  if ( (byte_4214533 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, paymentProductId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v8);
    byte_4214533 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)paymentProductId);
  if ( !AllPurchasedProductIdList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AllPurchasedProductIdList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
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
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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

  if ( (byte_4214530 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9768/*"OK"*/, *(_QWORD *)&failureReason);
    sub_B0D8A4(&StringLiteral_23974/*"購入処理中に問題が発生しました"*/, v3);
    sub_B0D8A4(&StringLiteral_23972/*"購入できません"*/, v4);
    sub_B0D8A4(&StringLiteral_23973/*"購入処理中です、完了までお待ち下さい"*/, v5);
    sub_B0D8A4(&StringLiteral_2014/*"App内の購入が機能制限されています"*/, v6);
    sub_B0D8A4(&StringLiteral_23949/*"指定されたプロダクトデータが取得できませんでした"*/, v7);
    byte_4214530 = 1;
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
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x20
  PurchaseLogicIOS___c_c *v13; // x0
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x21
  Il2CppObject *v16; // x22
  struct PurchaseLogicIOS___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v24; // x0
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v26; // x20
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v30; // x20
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  int32_t v39; // w1
  const MethodInfo *v40; // x2
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0

  if ( (byte_4214532 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___,
      *(_QWORD *)&bankShopId);
    sub_B0D8A4(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__, v4);
    sub_B0D8A4(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v5);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_int__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_int__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B0D8A4(&Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__, v10);
    sub_B0D8A4(&PurchaseLogicIOS___c_TypeInfo, v11);
    byte_4214532 = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._purchaseResultArray;
  v13 = PurchaseLogicIOS___c_TypeInfo;
  if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
    v13 = PurchaseLogicIOS___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo,
                                                                                *(_QWORD *)&bankShopId,
                                                                                method);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v16,
      Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__,
      (const MethodInfo_2619564 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
    v17 = PurchaseLogicIOS___c_TypeInfo->static_fields;
    v17->__9__7_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__7_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v17->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
          purchaseResultArray,
          (System_Func_TSource__TResult__o *)_9__7_0,
          (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
  if ( !v24 )
    sub_B0D97C(0LL);
  klass = v24->klass;
  v26 = v24;
  if ( *(_WORD *)&v24->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v27;
      p_offset += 4;
      if ( v27 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AA67A0(v24, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v26,
          *(_QWORD *)(p_method + 8));
  if ( !v30 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v31 = *(_QWORD *)v30;
    if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
    {
      v32 = 0LL;
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
          goto LABEL_23;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_23:
      v34 = sub_AA67A0(v30, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8)) & 1) == 0 )
      break;
    v35 = *(_QWORD *)v30;
    if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
    {
      v36 = 0LL;
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v37 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
          goto LABEL_30;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_30:
      v38 = sub_AA67A0(v30, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v30, *(_QWORD *)(v38 + 8));
    PurchaseLogic__UpdateMonthlyPurchasePrice((PurchaseLogic_o *)this, v39, v40);
  }
  v41 = *(_QWORD *)v30;
  if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
  {
    v42 = 0LL;
    v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      ++v42;
      v43 += 4;
      if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
        goto LABEL_37;
    }
    v44 = v41 + 16LL * *v43 + 312;
  }
  else
  {
LABEL_37:
    v44 = sub_AA67A0(v30, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v44)(v30, *(_QWORD *)(v44 + 8));
}


void __fastcall PurchaseLogicIOS___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0

  if ( (byte_42121B9 & 1) == 0 )
  {
    sub_B0D8A4(&PurchaseLogicIOS___c_TypeInfo, v1);
    byte_42121B9 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(PurchaseLogicIOS___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PurchaseLogicIOS___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_42121BA & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c_o *)sub_B0D8A4(&System_DateTime_TypeInfo, r);
    byte_42121BA = 1;
  }
  if ( !r )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return !x->fields.isCommitedAlready;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_1(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.freeStoneNum;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_2(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.chargeStoneNum;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAllPurchasedProductIdList_b__10_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.purchasedBankShopId;
}


int32_t __fastcall PurchaseLogicIOS___c___UpdateMonthlyPurchasePrice_b__7_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
  if ( (byte_42121BB & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c__DisplayClass2_0_o *)sub_B0D8A4(&System_DateTime_TypeInfo, r);
    byte_42121BB = 1;
  }
  if ( !r )
    sub_B0D97C(this);
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