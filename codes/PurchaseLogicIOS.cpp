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
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *inAppPurchaseReceipts; // x21
  void *monitor; // x8
  int v24; // w9
  PurchaseLogicIOS___c_c *v25; // x0
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__2_0; // x22
  Il2CppObject *v28; // x23
  struct PurchaseLogicIOS___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  bool v36; // w0
  struct UnityEngine_Purchasing_Security_AppleInAppPurchaseReceipt_array *v37; // x19
  bool v38; // w21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v39; // x22
  bool v40; // w0

  if ( (byte_4187AD5 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_AppleInAppPurchaseReceipt___, receipt);
    sub_B2C35C(&Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___, v6);
    sub_B2C35C(&Method_System_Func_AppleInAppPurchaseReceipt__bool___ctor__, v7);
    sub_B2C35C(&System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo, v8);
    sub_B2C35C(&Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__, v9);
    sub_B2C35C(&Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__, v10);
    sub_B2C35C(&PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo, v11);
    sub_B2C35C(&PurchaseLogicIOS___c_TypeInfo, v12);
    byte_4187AD5 = 1;
  }
  v13 = sub_B2C42C(PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo);
  PurchaseLogicIOS___c__DisplayClass2_0___ctor((PurchaseLogicIOS___c__DisplayClass2_0_o *)v13, 0LL);
  if ( !v13 )
    sub_B2C434(v14, v15);
  *(_QWORD *)(v13 + 16) = transactionIdInOldStyleReceipt;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v13 + 16),
    (System_Int32_array **)transactionIdInOldStyleReceipt,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
    v24 = 0;
    do
      ++v24;
    while ( v24 < (int)monitor );
  }
  v25 = PurchaseLogicIOS___c_TypeInfo;
  if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
    v25 = PurchaseLogicIOS___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__2_0,
      v28,
      Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_AppleInAppPurchaseReceipt__bool___ctor__);
    v29 = PurchaseLogicIOS___c_TypeInfo->static_fields;
    v29->__9__2_0 = (struct System_Func_AppleInAppPurchaseReceipt__bool__o *)_9__2_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v29->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
          inAppPurchaseReceipts,
          (System_Func_TSource__bool__o *)_9__2_0,
          (const MethodInfo_173783C *)Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___);
  v37 = receipt->fields.inAppPurchaseReceipts;
  v38 = v36;
  v39 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v39,
    (Il2CppObject *)v13,
    Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__,
    (const MethodInfo_2711C04 *)Method_System_Func_AppleInAppPurchaseReceipt__bool___ctor__);
  v40 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
          (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v37,
          (System_Func_T__bool__o *)v39,
          (const MethodInfo_1726758 *)Method_BasicHelper_Any_AppleInAppPurchaseReceipt___);
  return v38 || !v40;
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
  __int64 v13; // x3
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x21
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  Il2CppObject *current; // x20
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Purchasing_ProductCollection_o *v20; // x0
  __int64 v21; // x1
  UnityEngine_Purchasing_Product_o *v22; // x1
  const MethodInfo *v23; // x2
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4187ADC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, product);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_B2C35C(&UnityEngine_Purchasing_IStoreController_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    sub_B2C35C(&PurchaseLogic_TypeInfo, v8);
    byte_4187ADC = 1;
  }
  memset(&v25, 0, sizeof(v25));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)product);
  if ( !AllPurchasedProductIdList )
    sub_B2C434(0LL, v10);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AllPurchasedProductIdList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v11 )
      break;
    storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
    if ( !storeController )
      sub_B2C434(v11, v12);
    klass = storeController->klass;
    current = v25.fields.current;
    if ( *(_WORD *)&storeController->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((UnityEngine_Purchasing_IStoreController_c **)p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&storeController->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AC5258(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL, v13);
    }
    v20 = (UnityEngine_Purchasing_ProductCollection_o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))p_method)(
                                                          storeController,
                                                          *(_QWORD *)(p_method + 8));
    if ( !v20 )
      sub_B2C434(0LL, v21);
    v22 = UnityEngine_Purchasing_ProductCollection__WithID(v20, (System_String_o *)current, 0LL);
    if ( v22 )
      PurchaseLogic__ConfirmPurchase((PurchaseLogic_o *)this, v22, v23);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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
  __int64 v18; // x1
  __int64 v19; // x3
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x21
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x1
  __int64 v26; // x3
  __int64 v27; // x20
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x3
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  int32_t v37; // w1
  WarEntity_o *Entity; // x0
  __int64 v39; // x1
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0

  if ( (byte_4187ADE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string__float__Invoke__, bankShopIDs);
    sub_B2C35C(&Method_DataManager_GetMasterData_BankShopMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_int__TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_int__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v12);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&StringLiteral_16598/*"bankShopMaster is null"*/, v15);
    byte_4187ADE = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
  {
    Instance = (DataManager_o *)this->fields._logErrorOutputActionSampledByRatio;
    if ( Instance )
    {
      System_Action_string__float___Invoke(
        (System_Action_string__float__o *)Instance,
        (System_String_o *)StringLiteral_16598/*"bankShopMaster is null"*/,
        0.01,
        (const MethodInfo_24CA190 *)Method_System_Action_string__float__Invoke__);
      return (System_Collections_Generic_List_string__o *)v16;
    }
LABEL_40:
    sub_B2C434(Instance, v18);
  }
  if ( !bankShopIDs )
    goto LABEL_40;
  klass = bankShopIDs->klass;
  v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  if ( *(_WORD *)&bankShopIDs->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v22;
      p_offset += 4;
      if ( v22 >= *(unsigned __int16 *)&bankShopIDs->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AC5258(bankShopIDs, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v19);
  }
  v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          bankShopIDs,
          *(_QWORD *)(p_method + 8));
  if ( !v27 )
    sub_B2C434(0LL, v25);
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
      v31 = sub_AC5258(v27, System_Collections_IEnumerator_TypeInfo, 0LL, v26);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8)) & 1) == 0 )
      break;
    v33 = *(_QWORD *)v27;
    if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
    {
      v34 = 0LL;
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v35 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
          goto LABEL_26;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_26:
      v36 = sub_AC5258(v27, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v32);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v27, *(_QWORD *)(v36 + 8));
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v21,
               v37,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    if ( Entity )
    {
      if ( !v16 )
        sub_B2C434(Entity, v39);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Entity->fields.name,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  v40 = *(_QWORD *)v27;
  if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
  {
    v41 = 0LL;
    v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      v42 += 4;
      if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
        goto LABEL_35;
    }
    v43 = v40 + 16LL * *v42 + 312;
  }
  else
  {
LABEL_35:
    v43 = sub_AC5258(v27, System_IDisposable_TypeInfo, 0LL, v32);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v43)(v27, *(_QWORD *)(v43 + 8));
  return (System_Collections_Generic_List_string__o *)v16;
}


void __fastcall PurchaseLogicIOS__DebugLog(PurchaseLogicIOS_o *this, System_String_o *log, const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x19

  if ( (byte_4187AD9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Debug_TypeInfo, log);
    sub_B2C35C(&StringLiteral_14954/*"UnityIAP:"*/, v4);
    byte_4187AD9 = 1;
  }
  v5 = (Il2CppObject *)System_String__Concat_44305532((System_String_o *)StringLiteral_14954/*"UnityIAP:"*/, log, 0LL);
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
  __int64 v26; // x1
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x3
  Il2CppObject *v30; // x22
  Il2CppClass *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_String_o *v35; // x22
  System_Byte_array *v36; // x22
  System_Byte_array *v37; // x24
  UnityEngine_Purchasing_Security_AppleValidator_o *v38; // x23
  __int64 v39; // x0
  __int64 v40; // x1
  UnityEngine_Purchasing_Security_AppleReceipt_o *v41; // x0
  const MethodInfo *v42; // x1
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  WarBoardManager_TaskList_o *id_k__BackingField; // x23
  UnityEngine_Purchasing_Security_AppleReceipt_o *v45; // x22
  System_Collections_Generic_List_WarBoardManager_TaskList__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0
  __int64 v47; // x1
  System_String_array **v48; // x2
  MethodInfo *v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x23
  UnityEngine_Purchasing_IExtensionProvider_c *v55; // x8
  void *v56; // x24
  __int64 v57; // x1
  __int64 v58; // x2
  unsigned __int64 v59; // x10
  int32_t *v60; // x11
  __int64 v61; // x0
  __int64 (__fastcall **v62)(struct UnityEngine_Purchasing_IExtensionProvider_o *); // x0
  __int64 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x3
  __int64 v66; // x23
  __int64 v67; // x8
  unsigned __int64 v68; // x10
  int *v69; // x11
  __int64 v70; // x0
  System_String_o *v71; // x21
  const MethodInfo *v72; // x2
  System_String_o *TransactionIdFromOldStyleReceipt; // x23
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4187AD4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string__Invoke__, product);
    sub_B2C35C(&UnityEngine_Purchasing_Security_AppleValidator_TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___, v6);
    sub_B2C35C(&System_Convert_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v8);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Purchasing_IAppleConfiguration_TypeInfo, v10);
    sub_B2C35C(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v11);
    sub_B2C35C(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v13);
    sub_B2C35C(&PurchaseLogic_TypeInfo, v14);
    sub_B2C35C(&PurchaseLogic_ReceiptContents_TypeInfo, v15);
    sub_B2C35C(&string_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_10626/*"Payload"*/, v17);
    sub_B2C35C(&StringLiteral_11286/*"RawReceipt Decode Error. "*/, v18);
    this = (PurchaseLogicIOS_o *)sub_B2C35C(&StringLiteral_1/*""*/, v19);
    byte_4187AD4 = 1;
  }
  value = 0LL;
  if ( !product )
    goto LABEL_62;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v21 = sub_B2C42C(PurchaseLogic_ReceiptContents_TypeInfo);
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
         (System_Xml_XmlQualifiedName_o *)StringLiteral_10626/*"Payload"*/,
         &value,
         (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
      (System_Uri_o *)StringLiteral_11286/*"RawReceipt Decode Error. "*/,
      (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
  }
  v25 = (UnityEngine_Purchasing_ConfigurationBuilder_o *)((__int64 (__fastcall *)(PurchaseLogicIOS_o *, Il2CppMethodPointer))v4->klass->vtable._10_GetConfigurationBuilder.method)(
                                                           v4,
                                                           v4->klass->vtable._11_SetObfuscatedAccountId.methodPtr);
  if ( !v25 )
    sub_B2C434(0LL, v26);
  v27 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
          v25,
          (const MethodInfo_172E514 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___);
  v30 = v27;
  if ( !v27 )
    sub_B2C434(0LL, v28);
  klass = v27->klass;
  if ( *(_WORD *)&v27->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IAppleConfiguration_c **)p_offset - 1) != UnityEngine_Purchasing_IAppleConfiguration_TypeInfo )
    {
      ++v32;
      p_offset += 4;
      if ( v32 >= *(unsigned __int16 *)&v27->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_25:
    p_method = sub_AC5258(v27, UnityEngine_Purchasing_IAppleConfiguration_TypeInfo, 0LL, v29);
  }
  v35 = (System_String_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(v30, *(_QWORD *)(p_method + 8));
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v36 = System_Convert__FromBase64String(v35, 0LL);
  v37 = UnityEngine_Purchasing_Security_AppleTangle__Data(0LL);
  v38 = (UnityEngine_Purchasing_Security_AppleValidator_o *)sub_B2C42C(UnityEngine_Purchasing_Security_AppleValidator_TypeInfo);
  UnityEngine_Purchasing_Security_AppleValidator___ctor(v38, v37, 0LL);
  if ( !v38 )
    sub_B2C434(v39, v40);
  v41 = UnityEngine_Purchasing_Security_AppleValidator__Validate(v38, v36, 0LL);
  definition_k__BackingField = product->fields._definition_k__BackingField;
  if ( !definition_k__BackingField )
    sub_B2C434(v41, v42);
  id_k__BackingField = (WarBoardManager_TaskList_o *)definition_k__BackingField->fields._id_k__BackingField;
  v45 = v41;
  DeferredPurchaseProductIdsFromPlayerPrefs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs((PurchaseLogic_o *)v41, v42);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
    sub_B2C434(0LL, v47);
  this = (PurchaseLogicIOS_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                 DeferredPurchaseProductIdsFromPlayerPrefs,
                                 id_k__BackingField,
                                 (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_60;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_B2C434(this, product);
  v55 = storeExtensionProvider->klass;
  v56 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v57 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 3);
  v58 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 36);
  if ( *(_WORD *)&storeExtensionProvider->klass->_2.bitflags1 )
  {
    v59 = 0LL;
    v60 = &v55->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)v60 - 1) != v57 )
    {
      ++v59;
      v60 += 4;
      if ( v59 >= *(unsigned __int16 *)&storeExtensionProvider->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v61 = (__int64)&v55->vtable[*v60 + (int)v58].method;
  }
  else
  {
LABEL_39:
    v61 = sub_AC5258(storeExtensionProvider, v57, v58, v49);
  }
  v62 = (__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *))sub_B2C40C(
                                                                                         *(_QWORD *)(v61 + 8),
                                                                                         v56);
  v63 = (*v62)(storeExtensionProvider);
  v66 = v63;
  if ( !v63 )
    sub_B2C434(0LL, v64);
  v67 = *(_QWORD *)v63;
  if ( *(_WORD *)(*(_QWORD *)v63 + 298LL) )
  {
    v68 = 0LL;
    v69 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
    while ( *((UnityEngine_Purchasing_IAppleExtensions_c **)v69 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      ++v68;
      v69 += 4;
      if ( v68 >= *(unsigned __int16 *)(*(_QWORD *)v63 + 298LL) )
        goto LABEL_46;
    }
    v70 = v67 + 16LL * *v69 + 312;
  }
  else
  {
LABEL_46:
    v70 = sub_AC5258(v63, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 0LL, v65);
  }
  v71 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, UnityEngine_Purchasing_Product_o *, _QWORD))v70)(
                             v66,
                             product,
                             *(_QWORD *)(v70 + 8));
  TransactionIdFromOldStyleReceipt = PurchaseLogicIOS__GetTransactionIdFromOldStyleReceipt(v4, v71, v72);
  this = (PurchaseLogicIOS_o *)System_String__IsNullOrEmpty(TransactionIdFromOldStyleReceipt, 0LL);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (PurchaseLogicIOS_o *)PurchaseLogicIOS__CheckIfReceiptShouldBeSentInIOSOldStyle(
                                       this,
                                       v45,
                                       TransactionIdFromOldStyleReceipt,
                                       v49),
        ((unsigned __int8)this & 1) == 0) )
  {
LABEL_60:
    v71 = (System_String_o *)v24;
    if ( v21 )
      goto LABEL_61;
LABEL_62:
    sub_B2C434(this, product);
  }
  if ( !v21 )
    sub_B2C434(this, product);
  *(_QWORD *)(v21 + 56) = TransactionIdFromOldStyleReceipt;
  *(_BYTE *)(v21 + 48) = 1;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v21 + 56),
    (System_Int32_array **)TransactionIdFromOldStyleReceipt,
    v48,
    (System_String_array **)v49,
    v50,
    v51,
    v52,
    v53);
LABEL_61:
  *(_QWORD *)(v21 + 32) = v71;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v21 + 32),
    (System_Int32_array **)v71,
    v48,
    (System_String_array **)v49,
    v50,
    v51,
    v52,
    v53);
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
  PurchaseLogicIOS___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x21
  struct PurchaseLogicIOS___c_StaticFields *v31; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__12_1; // x22
  Il2CppObject *v33; // x23
  struct PurchaseLogicIOS___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v41; // x0
  PurchaseLogicIOS___c_c *v42; // x0
  struct PurchaseLogicIOS___c_StaticFields *v43; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__12_2; // x20
  Il2CppObject *v45; // x22
  struct PurchaseLogicIOS___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v53; // x0

  if ( (byte_4187ADF & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___,
      purchaseResultArray);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___, v8);
    sub_B2C35C(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__, v9);
    sub_B2C35C(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__, v10);
    sub_B2C35C(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v11);
    sub_B2C35C(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v12);
    sub_B2C35C(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__, v13);
    sub_B2C35C(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__, v14);
    sub_B2C35C(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__, v15);
    sub_B2C35C(&PurchaseLogicIOS___c_TypeInfo, v16);
    byte_4187ADF = 1;
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
      _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__12_0,
        v20,
        Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__,
        (const MethodInfo_2711C04 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__);
      v21 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v21->__9__12_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__12_0;
      sub_B2C2F8(
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
            (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    v29 = PurchaseLogicIOS___c_TypeInfo;
    v30 = v28;
    if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v29 = PurchaseLogicIOS___c_TypeInfo;
    }
    v31 = v29->static_fields;
    _9__12_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v31->__9__12_1;
    if ( !_9__12_1 )
    {
      if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v31 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v33 = (Il2CppObject *)v31->__9;
      _9__12_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__12_1,
        v33,
        Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__,
        (const MethodInfo_27127B0 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
      v34 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v34->__9__12_1 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_1;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v34->__9__12_1,
        (System_Int32_array **)_9__12_1,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
    }
    v41 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
            v30,
            (System_Func_TSource__TResult__o *)_9__12_1,
            (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    *freeStoneNum = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v41, 0LL);
    v42 = PurchaseLogicIOS___c_TypeInfo;
    if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v42 = PurchaseLogicIOS___c_TypeInfo;
    }
    v43 = v42->static_fields;
    _9__12_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v43->__9__12_2;
    if ( !_9__12_2 )
    {
      if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v43 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v45 = (Il2CppObject *)v43->__9;
      _9__12_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__12_2,
        v45,
        Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__,
        (const MethodInfo_27127B0 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
      v46 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v46->__9__12_2 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_2;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v46->__9__12_2,
        (System_Int32_array **)_9__12_2,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    v53 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
            v30,
            (System_Func_TSource__TResult__o *)_9__12_2,
            (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    *chargeStoneNum = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v53, 0LL);
  }
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogicIOS__GetAllPurchasedProductIdList(
        PurchaseLogicIOS_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x20
  PurchaseLogicIOS___c_c *v12; // x0
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v15; // x22
  struct PurchaseLogicIOS___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v23; // x1
  const MethodInfo *v24; // x2
  System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x19

  if ( (byte_4187ADD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string__float__Invoke__, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___, v3);
    sub_B2C35C(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__, v4);
    sub_B2C35C(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v6);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_B2C35C(&Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__, v8);
    sub_B2C35C(&PurchaseLogicIOS___c_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_16173/*"_purchaseResultArray is null"*/, v10);
    byte_4187ADD = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._purchaseResultArray;
  if ( purchaseResultArray )
  {
    v12 = PurchaseLogicIOS___c_TypeInfo;
    if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v12 = PurchaseLogicIOS___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__10_0,
        v15,
        Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__,
        (const MethodInfo_27127B0 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
      v16 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v16->__9__10_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__10_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v16->__9__10_0,
        (System_Int32_array **)_9__10_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    v23 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
            purchaseResultArray,
            (System_Func_TSource__TResult__o *)_9__10_0,
            (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    return PurchaseLogicIOS__ConvertBankShopIdToProductId(
             this,
             (System_Collections_Generic_IEnumerable_int__o *)v23,
             v24);
  }
  else
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( !logErrorOutputActionSampledByRatio )
      sub_B2C434(0LL, method);
    System_Action_string__float___Invoke(
      logErrorOutputActionSampledByRatio,
      (System_String_o *)StringLiteral_16173/*"_purchaseResultArray is null"*/,
      0.01,
      (const MethodInfo_24CA190 *)Method_System_Action_string__float__Invoke__);
    v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v27,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
    return (System_Collections_Generic_List_string__o *)v27;
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
  System_String_o *v15; // x0
  System_Byte_array *v16; // x21
  System_Text_Encoding_o *v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x0
  const MethodInfo *v20; // x1
  System_Collections_Generic_Dictionary_string__object__o *v21; // x0
  __int64 v22; // x1
  System_Xml_Schema_XmlSchemaObject_o *v25; // [xsp+8h] [xbp-38h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4187AD6 & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, iOSOldStylePayloadStr);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    sub_B2C35C(&string_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_21579/*"purchase-info"*/, v6);
    sub_B2C35C(&StringLiteral_22770/*"transaction-id"*/, v7);
    byte_4187AD6 = 1;
  }
  value = 0LL;
  v25 = 0LL;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v8 = System_Convert__FromBase64String(iOSOldStylePayloadStr, 0LL);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_B2C434(0LL, v10);
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, Il2CppMethodPointer))UTF8->klass->vtable._34_GetString.method)(
                             UTF8,
                             v8,
                             UTF8->klass->vtable._35_GetString.methodPtr);
  v13 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v11, v12);
  if ( !v13 )
    sub_B2C434(0LL, v14);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v13,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21579/*"purchase-info"*/,
    &value,
    (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( value )
  {
    if ( (System_String_c *)value->klass == string_TypeInfo )
      v15 = (System_String_o *)value;
    else
      v15 = 0LL;
  }
  else
  {
    v15 = 0LL;
  }
  v16 = System_Convert__FromBase64String(v15, 0LL);
  v17 = System_Text_Encoding__get_UTF8(0LL);
  if ( !v17 )
    sub_B2C434(0LL, v18);
  v19 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, Il2CppMethodPointer))v17->klass->vtable._34_GetString.method)(
                             v17,
                             v16,
                             v17->klass->vtable._35_GetString.methodPtr);
  v21 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v19, v20);
  if ( !v21 )
    sub_B2C434(0LL, v22);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v21,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22770/*"transaction-id"*/,
    &v25,
    (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( !v25 )
    return 0LL;
  if ( (System_String_c *)v25->klass == string_TypeInfo )
    return (System_String_o *)v25;
  return 0LL;
}


bool __fastcall PurchaseLogicIOS__IsDeferredPurchaseExists(PurchaseLogicIOS_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0

  if ( (byte_4187AE0 & 1) == 0 )
  {
    this = (PurchaseLogicIOS_o *)sub_B2C35C(&Method_System_Linq_Enumerable_Any_string___, method);
    byte_4187AE0 = 1;
  }
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)this,
                                                method);
  return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
           (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_string___);
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
    sub_B2C434(this, product);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v10; // x19
  System_Char_array *v11; // x0
  System_Char_array *v12; // x1
  int max_length; // w8
  System_Char_array *v14; // x20
  unsigned int v15; // w24
  Il2CppClass **v16; // x8
  System_String_o *v17; // x21
  System_String_o *v18; // x21
  System_Char_array *v19; // x21
  System_Xml_XmlQualifiedName_o *v20; // x22
  __int64 v22; // x0

  if ( (byte_4187AD7 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_B2C35C(&StringLiteral_1505/*"="*/, v6);
    sub_B2C35C(&StringLiteral_1262/*";"*/, v7);
    sub_B2C35C(&StringLiteral_288/*"\""*/, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_4187AD7 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v10,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v11 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v11 )
    goto LABEL_26;
  v12 = v11;
  if ( !v11->max_length )
    goto LABEL_27;
  v11->m_Items[2] = 10;
  if ( !str || (v11 = (System_Char_array *)System_String__Split(str, v11, 0LL)) == 0LL )
LABEL_26:
    sub_B2C434(v11, v12);
  max_length = v11->max_length;
  v14 = v11;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( v15 < max_length )
    {
      v16 = &v14->obj.klass + (int)v15;
      v17 = (System_String_o *)v16[4];
      if ( !v17 )
        goto LABEL_26;
      v11 = (System_Char_array *)System_String__Contains(
                                   (System_String_o *)v16[4],
                                   (System_String_o *)StringLiteral_1505/*"="*/,
                                   0LL);
      if ( ((unsigned __int8)v11 & 1) != 0 )
      {
        v18 = System_String__Replace_44312768(
                v17,
                (System_String_o *)StringLiteral_1262/*";"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v11 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
        if ( !v11 )
          goto LABEL_26;
        v12 = v11;
        if ( !v11->max_length )
          break;
        v11->m_Items[2] = 61;
        if ( !v18 )
          goto LABEL_26;
        v11 = (System_Char_array *)System_String__Split(v18, v11, 0LL);
        if ( v11 )
        {
          v19 = v11;
          if ( (int)v11->max_length >= 2 )
          {
            v11 = *(System_Char_array **)&v11->m_Items[2];
            if ( !v11 )
              goto LABEL_26;
            v11 = (System_Char_array *)System_String__Replace_44312768(
                                         (System_String_o *)v11,
                                         (System_String_o *)StringLiteral_288/*"\""*/,
                                         (System_String_o *)StringLiteral_1/*""*/,
                                         0LL);
            if ( !v11 )
              goto LABEL_26;
            v11 = (System_Char_array *)System_String__Trim_44292864((System_String_o *)v11, 0LL);
            if ( v19->max_length <= 1 )
              break;
            v20 = (System_Xml_XmlQualifiedName_o *)v11;
            v11 = *(System_Char_array **)&v19->m_Items[6];
            if ( !v11 )
              goto LABEL_26;
            v11 = (System_Char_array *)System_String__Replace_44312768(
                                         (System_String_o *)v11,
                                         (System_String_o *)StringLiteral_288/*"\""*/,
                                         (System_String_o *)StringLiteral_1/*""*/,
                                         0LL);
            if ( !v11 )
              goto LABEL_26;
            v11 = (System_Char_array *)System_String__Trim_44292864((System_String_o *)v11, 0LL);
            if ( !v10 )
              goto LABEL_26;
            System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
              v10,
              v20,
              (System_Xml_Schema_XmlSchemaObject_o *)v11,
              (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
          }
        }
      }
      max_length = v14->max_length;
      if ( (int)++v15 >= max_length )
        return (System_Collections_Generic_Dictionary_string__object__o *)v10;
    }
LABEL_27:
    v22 = sub_B2C460(v11);
    sub_B2C400(v22, 0LL);
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
  __int64 v10; // x1
  Il2CppObject *current; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4187ADB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, paymentProductId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v8);
    byte_4187ADB = 1;
  }
  memset(&v14, 0, sizeof(v14));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)paymentProductId);
  if ( !AllPurchasedProductIdList )
    sub_B2C434(0LL, v10);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AllPurchasedProductIdList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v14.fields.current;
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)v14.fields.current, 0LL);
    if ( !IsNullOrEmpty )
      PurchaseLogic__SendPurchaseAction(
        (PurchaseLogic_o *)IsNullOrEmpty,
        (System_String_o *)current,
        transactionId,
        v13);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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

  if ( (byte_4187AD8 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9744/*"OK"*/, *(_QWORD *)&failureReason);
    sub_B2C35C(&StringLiteral_23892/*"購入処理中に問題が発生しました"*/, v3);
    sub_B2C35C(&StringLiteral_23890/*"購入できません"*/, v4);
    sub_B2C35C(&StringLiteral_23891/*"購入処理中です、完了までお待ち下さい"*/, v5);
    sub_B2C35C(&StringLiteral_2005/*"App内の購入が機能制限されています"*/, v6);
    sub_B2C35C(&StringLiteral_23868/*"指定されたプロダクトデータが取得できませんでした"*/, v7);
    byte_4187AD8 = 1;
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
  __int64 v25; // x1
  __int64 v26; // x3
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v28; // x20
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v32; // x1
  __int64 v33; // x3
  __int64 v34; // x20
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  __int64 v39; // x3
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  int32_t v44; // w1
  const MethodInfo *v45; // x2
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0

  if ( (byte_4187ADA & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___,
      *(_QWORD *)&bankShopId);
    sub_B2C35C(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__, v4);
    sub_B2C35C(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_int__TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_int__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__, v10);
    sub_B2C35C(&PurchaseLogicIOS___c_TypeInfo, v11);
    byte_4187ADA = 1;
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
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v16,
      Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
    v17 = PurchaseLogicIOS___c_TypeInfo->static_fields;
    v17->__9__7_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__7_0;
    sub_B2C2F8(
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
          (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
  if ( !v24 )
    sub_B2C434(0LL, v25);
  klass = v24->klass;
  v28 = v24;
  if ( *(_WORD *)&v24->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v29;
      p_offset += 4;
      if ( v29 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AC5258(v24, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v26);
  }
  v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v28,
          *(_QWORD *)(p_method + 8));
  if ( !v34 )
    sub_B2C434(0LL, v32);
  while ( 1 )
  {
    v35 = *(_QWORD *)v34;
    if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
    {
      v36 = 0LL;
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
          goto LABEL_23;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_23:
      v38 = sub_AC5258(v34, System_Collections_IEnumerator_TypeInfo, 0LL, v33);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8)) & 1) == 0 )
      break;
    v40 = *(_QWORD *)v34;
    if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
    {
      v41 = 0LL;
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v42 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
          goto LABEL_30;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_30:
      v43 = sub_AC5258(v34, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v39);
    }
    v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v34, *(_QWORD *)(v43 + 8));
    PurchaseLogic__UpdateMonthlyPurchasePrice((PurchaseLogic_o *)this, v44, v45);
  }
  v46 = *(_QWORD *)v34;
  if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
  {
    v47 = 0LL;
    v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
        goto LABEL_37;
    }
    v49 = v46 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_37:
    v49 = sub_AC5258(v34, System_IDisposable_TypeInfo, 0LL, v39);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v49)(v34, *(_QWORD *)(v49 + 8));
}


void __fastcall PurchaseLogicIOS___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0

  if ( (byte_41852C6 & 1) == 0 )
  {
    sub_B2C35C(&PurchaseLogicIOS___c_TypeInfo, v1);
    byte_41852C6 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(PurchaseLogicIOS___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PurchaseLogicIOS___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_41852C7 & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c_o *)sub_B2C35C(&System_DateTime_TypeInfo, r);
    byte_41852C7 = 1;
  }
  if ( !r )
    sub_B2C434(this, r);
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
    sub_B2C434(this, 0LL);
  return !x->fields.isCommitedAlready;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_1(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.freeStoneNum;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_2(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.chargeStoneNum;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAllPurchasedProductIdList_b__10_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.purchasedBankShopId;
}


int32_t __fastcall PurchaseLogicIOS___c___UpdateMonthlyPurchasePrice_b__7_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
  if ( (byte_41852C8 & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c__DisplayClass2_0_o *)sub_B2C35C(&System_DateTime_TypeInfo, r);
    byte_41852C8 = 1;
  }
  if ( !r )
    sub_B2C434(this, r);
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