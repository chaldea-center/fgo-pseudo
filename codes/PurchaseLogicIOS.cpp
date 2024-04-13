bool __fastcall PurchaseLogicIOS__CheckIfReceiptShouldBeSentInIOSOldStyle(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Security_AppleReceipt_o *receipt,
        System_String_o *transactionIdInOldStyleReceipt,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 v27; // x20
  __int64 v28; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *inAppPurchaseReceipts; // x21
  void *monitor; // x8
  int v38; // w9
  PurchaseLogicIOS___c_c *v39; // x0
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__2_0; // x22
  Il2CppObject *v42; // x23
  struct PurchaseLogicIOS___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  bool v50; // w0
  struct UnityEngine_Purchasing_Security_AppleInAppPurchaseReceipt_array *v51; // x19
  bool v52; // w21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v53; // x22
  bool v54; // w0

  if ( (byte_42E8855 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_BasicHelper_Any_AppleInAppPurchaseReceipt___,
      (_DWORD)receipt,
      (_DWORD)transactionIdInOldStyleReceipt,
      method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_AppleInAppPurchaseReceipt__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__, v15, v16, v17);
    sub_B5D5C4(
      &Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__,
      v18,
      v19,
      v20);
    sub_B5D5C4(&PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&PurchaseLogicIOS___c_TypeInfo, v24, v25, v26);
    byte_42E8855 = 1;
  }
  v27 = sub_B5D694(PurchaseLogicIOS___c__DisplayClass2_0_TypeInfo);
  PurchaseLogicIOS___c__DisplayClass2_0___ctor((PurchaseLogicIOS___c__DisplayClass2_0_o *)v27, 0LL);
  if ( !v27 )
    sub_B5D69C(v28, v29);
  *(_QWORD *)(v27 + 16) = transactionIdInOldStyleReceipt;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v27 + 16),
    (System_Int32_array **)transactionIdInOldStyleReceipt,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
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
    v38 = 0;
    do
      ++v38;
    while ( v38 < (int)monitor );
  }
  v39 = PurchaseLogicIOS___c_TypeInfo;
  if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
    v39 = PurchaseLogicIOS___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__2_0,
      v42,
      Method_PurchaseLogicIOS___c__CheckIfReceiptShouldBeSentInIOSOldStyle_b__2_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_AppleInAppPurchaseReceipt__bool___ctor__);
    v43 = PurchaseLogicIOS___c_TypeInfo->static_fields;
    v43->__9__2_0 = (struct System_Func_AppleInAppPurchaseReceipt__bool__o *)_9__2_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v43->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  v50 = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
          inAppPurchaseReceipts,
          (System_Func_TSource__bool__o *)_9__2_0,
          (const MethodInfo_1C97E70 *)Method_System_Linq_Enumerable_All_AppleInAppPurchaseReceipt___);
  v51 = receipt->fields.inAppPurchaseReceipts;
  v52 = v50;
  v53 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_AppleInAppPurchaseReceipt__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v53,
    (Il2CppObject *)v27,
    Method_PurchaseLogicIOS___c__DisplayClass2_0__CheckIfReceiptShouldBeSentInIOSOldStyle_b__1__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_AppleInAppPurchaseReceipt__bool___ctor__);
  v54 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
          (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v51,
          (System_Func_T__bool__o *)v53,
          (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_AppleInAppPurchaseReceipt___);
  return v52 || !v54;
}


void __fastcall PurchaseLogicIOS__ConfirmPurchase(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_string__o *AllPurchasedProductIdList; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x3
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x21
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  Il2CppObject *current; // x20
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Purchasing_ProductCollection_o *v31; // x0
  __int64 v32; // x1
  UnityEngine_Purchasing_Product_o *v33; // x1
  const MethodInfo *v34; // x2
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E885C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_string__Dispose__,
      (_DWORD)product,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Purchasing_IStoreController_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&PurchaseLogic_TypeInfo, v17, v18, v19);
    byte_42E885C = 1;
  }
  memset(&v36, 0, sizeof(v36));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)product);
  if ( !AllPurchasedProductIdList )
    sub_B5D69C(0LL, v21);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AllPurchasedProductIdList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v22 )
      break;
    storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
    if ( !storeController )
      sub_B5D69C(v22, v23);
    klass = storeController->klass;
    current = v36.fields.current;
    if ( *(_WORD *)&storeController->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((UnityEngine_Purchasing_IStoreController_c **)p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
      {
        ++v28;
        p_offset += 4;
        if ( v28 >= *(unsigned __int16 *)&storeController->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AF54C0(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL, v24);
    }
    v31 = (UnityEngine_Purchasing_ProductCollection_o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))p_method)(
                                                          storeController,
                                                          *(_QWORD *)(p_method + 8));
    if ( !v31 )
      sub_B5D69C(0LL, v32);
    v33 = UnityEngine_Purchasing_ProductCollection__WithID(v31, (System_String_o *)current, 0LL);
    if ( v33 )
      PurchaseLogic__ConfirmPurchase((PurchaseLogic_o *)this, v33, v34);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogicIOS__ConvertBankShopIdToProductId(
        PurchaseLogicIOS_o *this,
        System_Collections_Generic_IEnumerable_int__o *bankShopIDs,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x19
  DataManager_o *Instance; // x0
  __int64 v41; // x1
  __int64 v42; // x3
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v44; // x21
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v48; // x1
  __int64 v49; // x3
  __int64 v50; // x20
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0
  __int64 v55; // x3
  __int64 v56; // x8
  unsigned __int64 v57; // x10
  int *v58; // x11
  __int64 v59; // x0
  int32_t v60; // w1
  WarEntity_o *Entity; // x0
  __int64 v62; // x1
  __int64 v63; // x8
  unsigned __int64 v64; // x10
  int *v65; // x11
  __int64 v66; // x0

  if ( (byte_42E885E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__float__Invoke__, (_DWORD)bankShopIDs, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BankShopMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_int__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_16798/*"bankShopMaster is null"*/, v36, v37, v38);
    byte_42E885E = 1;
  }
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
  {
    Instance = (DataManager_o *)this->fields._logErrorOutputActionSampledByRatio;
    if ( Instance )
    {
      System_Action_string__float___Invoke(
        (System_Action_string__float__o *)Instance,
        (System_String_o *)StringLiteral_16798/*"bankShopMaster is null"*/,
        0.01,
        (const MethodInfo_25999D8 *)Method_System_Action_string__float__Invoke__);
      return (System_Collections_Generic_List_string__o *)v39;
    }
LABEL_40:
    sub_B5D69C(Instance, v41);
  }
  if ( !bankShopIDs )
    goto LABEL_40;
  klass = bankShopIDs->klass;
  v44 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  if ( *(_WORD *)&bankShopIDs->klass->_2.bitflags1 )
  {
    v45 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v45;
      p_offset += 4;
      if ( v45 >= *(unsigned __int16 *)&bankShopIDs->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AF54C0(bankShopIDs, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v42);
  }
  v50 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          bankShopIDs,
          *(_QWORD *)(p_method + 8));
  if ( !v50 )
    sub_B5D69C(0LL, v48);
  while ( 1 )
  {
    v51 = *(_QWORD *)v50;
    if ( *(_WORD *)(*(_QWORD *)v50 + 298LL) )
    {
      v52 = 0LL;
      v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v53 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v52;
        v53 += 4;
        if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v50 + 298LL) )
          goto LABEL_19;
      }
      v54 = v51 + 16LL * *v53 + 312;
    }
    else
    {
LABEL_19:
      v54 = sub_AF54C0(v50, System_Collections_IEnumerator_TypeInfo, 0LL, v49);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v50, *(_QWORD *)(v54 + 8)) & 1) == 0 )
      break;
    v56 = *(_QWORD *)v50;
    if ( *(_WORD *)(*(_QWORD *)v50 + 298LL) )
    {
      v57 = 0LL;
      v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v58 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v57;
        v58 += 4;
        if ( v57 >= *(unsigned __int16 *)(*(_QWORD *)v50 + 298LL) )
          goto LABEL_26;
      }
      v59 = v56 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_26:
      v59 = sub_AF54C0(v50, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v55);
    }
    v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v50, *(_QWORD *)(v59 + 8));
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v44,
               v60,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    if ( Entity )
    {
      if ( !v39 )
        sub_B5D69C(Entity, v62);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v39,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Entity->fields.name,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  v63 = *(_QWORD *)v50;
  if ( *(_WORD *)(*(_QWORD *)v50 + 298LL) )
  {
    v64 = 0LL;
    v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
    {
      ++v64;
      v65 += 4;
      if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)v50 + 298LL) )
        goto LABEL_35;
    }
    v66 = v63 + 16LL * *v65 + 312;
  }
  else
  {
LABEL_35:
    v66 = sub_AF54C0(v50, System_IDisposable_TypeInfo, 0LL, v55);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v66)(v50, *(_QWORD *)(v66 + 8));
  return (System_Collections_Generic_List_string__o *)v39;
}


void __fastcall PurchaseLogicIOS__DebugLog(PurchaseLogicIOS_o *this, System_String_o *log, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x19

  if ( (byte_42E8859 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Debug_TypeInfo, (_DWORD)log, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_15112/*"UnityIAP:"*/, v5, v6, v7);
    byte_42E8859 = 1;
  }
  v8 = (Il2CppObject *)System_String__Concat_44577788((System_String_o *)StringLiteral_15112/*"UnityIAP:"*/, log, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log(v8, 0LL);
}


PurchaseLogic_ReceiptContents_o *__fastcall PurchaseLogicIOS__ExtractReceiptContents(
        PurchaseLogicIOS_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PurchaseLogicIOS_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  System_String_o *receipt_k__BackingField; // x22
  __int64 v52; // x20
  __int64 v53; // x10
  __int64 v54; // x10
  System_Xml_Schema_XmlSchemaObject_o *v55; // x25
  UnityEngine_Purchasing_ConfigurationBuilder_o *v56; // x0
  __int64 v57; // x1
  Il2CppObject *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x3
  Il2CppObject *v61; // x22
  Il2CppClass *klass; // x8
  unsigned __int64 v63; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_String_o *v66; // x22
  System_Byte_array *v67; // x22
  System_Byte_array *v68; // x24
  UnityEngine_Purchasing_Security_AppleValidator_o *v69; // x23
  __int64 v70; // x0
  __int64 v71; // x1
  UnityEngine_Purchasing_Security_AppleReceipt_o *v72; // x0
  const MethodInfo *v73; // x1
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  WarBoardManager_TaskList_o *id_k__BackingField; // x23
  UnityEngine_Purchasing_Security_AppleReceipt_o *v76; // x22
  System_Collections_Generic_List_WarBoardManager_TaskList__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0
  __int64 v78; // x1
  System_String_array **v79; // x2
  MethodInfo *v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x23
  UnityEngine_Purchasing_IExtensionProvider_c *v86; // x8
  void *v87; // x24
  __int64 v88; // x1
  __int64 v89; // x2
  unsigned __int64 v90; // x10
  int32_t *v91; // x11
  __int64 v92; // x0
  __int64 (__fastcall **v93)(struct UnityEngine_Purchasing_IExtensionProvider_o *); // x0
  __int64 v94; // x0
  __int64 v95; // x1
  __int64 v96; // x3
  __int64 v97; // x23
  __int64 v98; // x8
  unsigned __int64 v99; // x10
  int *v100; // x11
  __int64 v101; // x0
  System_String_o *v102; // x21
  const MethodInfo *v103; // x2
  System_String_o *TransactionIdFromOldStyleReceipt; // x23
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-38h] BYREF

  v5 = this;
  if ( (byte_42E8854 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__Invoke__, (_DWORD)product, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Purchasing_Security_AppleValidator_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___, v9, v10, v11);
    sub_B5D5C4(&System_Convert_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Purchasing_IAppleConfiguration_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v30, v31, v32);
    sub_B5D5C4(&PurchaseLogic_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&PurchaseLogic_ReceiptContents_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&string_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_10746/*"Payload"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_11419/*"RawReceipt Decode Error. "*/, v45, v46, v47);
    this = (PurchaseLogicIOS_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v48, v49, v50);
    byte_42E8854 = 1;
  }
  value = 0LL;
  if ( !product )
    goto LABEL_62;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v52 = sub_B5D694(PurchaseLogic_ReceiptContents_TypeInfo);
  PurchaseLogic_ReceiptContents___ctor((PurchaseLogic_ReceiptContents_o *)v52, 0LL);
  this = (PurchaseLogicIOS_o *)UnityEngine_Purchasing_MiniJson__JsonDecode(receipt_k__BackingField, 0LL);
  if ( !this )
    goto LABEL_62;
  v53 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v53
    || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v53 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    goto LABEL_62;
  }
  v54 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  v55 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v54 )
  {
    if ( (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v54 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      this = 0LL;
  }
  else
  {
    this = 0LL;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_10746/*"Payload"*/,
         &value,
         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    if ( value )
    {
      if ( (System_String_c *)value->klass == string_TypeInfo )
        v55 = value;
      else
        v55 = 0LL;
    }
    else
    {
      v55 = 0LL;
    }
  }
  else
  {
    this = (PurchaseLogicIOS_o *)v5->fields._logErrorOutputAction;
    if ( !this )
      goto LABEL_62;
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)this,
      (System_Uri_o *)StringLiteral_11419/*"RawReceipt Decode Error. "*/,
      (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
  }
  v56 = (UnityEngine_Purchasing_ConfigurationBuilder_o *)((__int64 (__fastcall *)(PurchaseLogicIOS_o *, Il2CppMethodPointer))v5->klass->vtable._10_GetConfigurationBuilder.method)(
                                                           v5,
                                                           v5->klass->vtable._11_SetObfuscatedAccountId.methodPtr);
  if ( !v56 )
    sub_B5D69C(0LL, v57);
  v58 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
          v56,
          (const MethodInfo_1ADEC24 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IAppleConfiguration___);
  v61 = v58;
  if ( !v58 )
    sub_B5D69C(0LL, v59);
  klass = v58->klass;
  if ( *(_WORD *)&v58->klass->_2.bitflags1 )
  {
    v63 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IAppleConfiguration_c **)p_offset - 1) != UnityEngine_Purchasing_IAppleConfiguration_TypeInfo )
    {
      ++v63;
      p_offset += 4;
      if ( v63 >= *(unsigned __int16 *)&v58->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_25:
    p_method = sub_AF54C0(v58, UnityEngine_Purchasing_IAppleConfiguration_TypeInfo, 0LL, v60);
  }
  v66 = (System_String_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(v61, *(_QWORD *)(p_method + 8));
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v67 = System_Convert__FromBase64String(v66, 0LL);
  v68 = UnityEngine_Purchasing_Security_AppleTangle__Data(0LL);
  v69 = (UnityEngine_Purchasing_Security_AppleValidator_o *)sub_B5D694(UnityEngine_Purchasing_Security_AppleValidator_TypeInfo);
  UnityEngine_Purchasing_Security_AppleValidator___ctor(v69, v68, 0LL);
  if ( !v69 )
    sub_B5D69C(v70, v71);
  v72 = UnityEngine_Purchasing_Security_AppleValidator__Validate(v69, v67, 0LL);
  definition_k__BackingField = product->fields._definition_k__BackingField;
  if ( !definition_k__BackingField )
    sub_B5D69C(v72, v73);
  id_k__BackingField = (WarBoardManager_TaskList_o *)definition_k__BackingField->fields._id_k__BackingField;
  v76 = v72;
  DeferredPurchaseProductIdsFromPlayerPrefs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs((PurchaseLogic_o *)v72, v73);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
    sub_B5D69C(0LL, v78);
  this = (PurchaseLogicIOS_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                 DeferredPurchaseProductIdsFromPlayerPrefs,
                                 id_k__BackingField,
                                 (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_60;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_B5D69C(this, product);
  v86 = storeExtensionProvider->klass;
  v87 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v88 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 3);
  v89 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 36);
  if ( *(_WORD *)&storeExtensionProvider->klass->_2.bitflags1 )
  {
    v90 = 0LL;
    v91 = &v86->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)v91 - 1) != v88 )
    {
      ++v90;
      v91 += 4;
      if ( v90 >= *(unsigned __int16 *)&storeExtensionProvider->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v92 = (__int64)&v86->vtable[*v91 + (int)v89].method;
  }
  else
  {
LABEL_39:
    v92 = sub_AF54C0(storeExtensionProvider, v88, v89, v80);
  }
  v93 = (__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *))sub_B5D674(
                                                                                         *(_QWORD *)(v92 + 8),
                                                                                         v87);
  v94 = (*v93)(storeExtensionProvider);
  v97 = v94;
  if ( !v94 )
    sub_B5D69C(0LL, v95);
  v98 = *(_QWORD *)v94;
  if ( *(_WORD *)(*(_QWORD *)v94 + 298LL) )
  {
    v99 = 0LL;
    v100 = (int *)(*(_QWORD *)(v98 + 176) + 8LL);
    while ( *((UnityEngine_Purchasing_IAppleExtensions_c **)v100 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      ++v99;
      v100 += 4;
      if ( v99 >= *(unsigned __int16 *)(*(_QWORD *)v94 + 298LL) )
        goto LABEL_46;
    }
    v101 = v98 + 16LL * *v100 + 312;
  }
  else
  {
LABEL_46:
    v101 = sub_AF54C0(v94, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 0LL, v96);
  }
  v102 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, UnityEngine_Purchasing_Product_o *, _QWORD))v101)(
                              v97,
                              product,
                              *(_QWORD *)(v101 + 8));
  TransactionIdFromOldStyleReceipt = PurchaseLogicIOS__GetTransactionIdFromOldStyleReceipt(v5, v102, v103);
  this = (PurchaseLogicIOS_o *)System_String__IsNullOrEmpty(TransactionIdFromOldStyleReceipt, 0LL);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (PurchaseLogicIOS_o *)PurchaseLogicIOS__CheckIfReceiptShouldBeSentInIOSOldStyle(
                                       this,
                                       v76,
                                       TransactionIdFromOldStyleReceipt,
                                       v80),
        ((unsigned __int8)this & 1) == 0) )
  {
LABEL_60:
    v102 = (System_String_o *)v55;
    if ( v52 )
      goto LABEL_61;
LABEL_62:
    sub_B5D69C(this, product);
  }
  if ( !v52 )
    sub_B5D69C(this, product);
  *(_QWORD *)(v52 + 56) = TransactionIdFromOldStyleReceipt;
  *(_BYTE *)(v52 + 48) = 1;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v52 + 56),
    (System_Int32_array **)TransactionIdFromOldStyleReceipt,
    v79,
    (System_String_array **)v80,
    v81,
    v82,
    v83,
    v84);
LABEL_61:
  *(_QWORD *)(v52 + 32) = v102;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v52 + 32),
    (System_Int32_array **)v102,
    v79,
    (System_String_array **)v80,
    v81,
    v82,
    v83,
    v84);
  return (PurchaseLogic_ReceiptContents_o *)v52;
}


void __fastcall PurchaseLogicIOS__GetAddedStoneNum(
        PurchaseLogicIOS_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        int32_t *freeStoneNum,
        int32_t *chargeStoneNum,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  PurchaseLogicIOS___c_c *v35; // x0
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__12_0; // x22
  Il2CppObject *v38; // x23
  struct PurchaseLogicIOS___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  PurchaseLogicIOS___c_c *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x21
  struct PurchaseLogicIOS___c_StaticFields *v49; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__12_1; // x22
  Il2CppObject *v51; // x23
  struct PurchaseLogicIOS___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v59; // x0
  PurchaseLogicIOS___c_c *v60; // x0
  struct PurchaseLogicIOS___c_StaticFields *v61; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__12_2; // x20
  Il2CppObject *v63; // x22
  struct PurchaseLogicIOS___c_StaticFields *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v71; // x0

  if ( (byte_42E885F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___,
      (_DWORD)purchaseResultArray,
      (_DWORD)freeStoneNum,
      chargeStoneNum);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__, v23, v24, v25);
    sub_B5D5C4(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__, v26, v27, v28);
    sub_B5D5C4(&Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__, v29, v30, v31);
    sub_B5D5C4(&PurchaseLogicIOS___c_TypeInfo, v32, v33, v34);
    byte_42E885F = 1;
  }
  *chargeStoneNum = 0;
  *freeStoneNum = 0;
  if ( purchaseResultArray )
  {
    v35 = PurchaseLogicIOS___c_TypeInfo;
    if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v35 = PurchaseLogicIOS___c_TypeInfo;
    }
    static_fields = v35->static_fields;
    _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)static_fields->__9;
      _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__12_0,
        v38,
        Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__);
      v39 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v39->__9__12_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__12_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v39->__9__12_0,
        (System_Int32_array **)_9__12_0,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    v46 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
            (System_Func_TSource__bool__o *)_9__12_0,
            (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    v47 = PurchaseLogicIOS___c_TypeInfo;
    v48 = v46;
    if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v47 = PurchaseLogicIOS___c_TypeInfo;
    }
    v49 = v47->static_fields;
    _9__12_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v49->__9__12_1;
    if ( !_9__12_1 )
    {
      if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v47);
        v49 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v51 = (Il2CppObject *)v49->__9;
      _9__12_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__12_1,
        v51,
        Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_1__,
        (const MethodInfo_2C2F87C *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
      v52 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v52->__9__12_1 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v52->__9__12_1,
        (System_Int32_array **)_9__12_1,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
    }
    v59 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
            v48,
            (System_Func_TSource__TResult__o *)_9__12_1,
            (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    *freeStoneNum = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v59, 0LL);
    v60 = PurchaseLogicIOS___c_TypeInfo;
    if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v60 = PurchaseLogicIOS___c_TypeInfo;
    }
    v61 = v60->static_fields;
    _9__12_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v61->__9__12_2;
    if ( !_9__12_2 )
    {
      if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v60);
        v61 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v63 = (Il2CppObject *)v61->__9;
      _9__12_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__12_2,
        v63,
        Method_PurchaseLogicIOS___c__GetAddedStoneNum_b__12_2__,
        (const MethodInfo_2C2F87C *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
      v64 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v64->__9__12_2 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__12_2;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v64->__9__12_2,
        (System_Int32_array **)_9__12_2,
        v65,
        v66,
        v67,
        v68,
        v69,
        v70);
    }
    v71 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
            v48,
            (System_Func_TSource__TResult__o *)_9__12_2,
            (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    *chargeStoneNum = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v71, 0LL);
  }
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogicIOS__GetAllPurchasedProductIdList(
        PurchaseLogicIOS_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x20
  PurchaseLogicIOS___c_c *v30; // x0
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v33; // x22
  struct PurchaseLogicIOS___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v41; // x1
  const MethodInfo *v42; // x2
  System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x19

  if ( (byte_42E885D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__float__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__, v20, v21, v22);
    sub_B5D5C4(&PurchaseLogicIOS___c_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_16366/*"_purchaseResultArray is null"*/, v26, v27, v28);
    byte_42E885D = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._purchaseResultArray;
  if ( purchaseResultArray )
  {
    v30 = PurchaseLogicIOS___c_TypeInfo;
    if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
      v30 = PurchaseLogicIOS___c_TypeInfo;
    }
    static_fields = v30->static_fields;
    _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
      }
      v33 = (Il2CppObject *)static_fields->__9;
      _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__10_0,
        v33,
        Method_PurchaseLogicIOS___c__GetAllPurchasedProductIdList_b__10_0__,
        (const MethodInfo_2C2F87C *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
      v34 = PurchaseLogicIOS___c_TypeInfo->static_fields;
      v34->__9__10_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__10_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v34->__9__10_0,
        (System_Int32_array **)_9__10_0,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
    }
    v41 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
            purchaseResultArray,
            (System_Func_TSource__TResult__o *)_9__10_0,
            (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
    return PurchaseLogicIOS__ConvertBankShopIdToProductId(
             this,
             (System_Collections_Generic_IEnumerable_int__o *)v41,
             v42);
  }
  else
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( !logErrorOutputActionSampledByRatio )
      sub_B5D69C(0LL, method);
    System_Action_string__float___Invoke(
      logErrorOutputActionSampledByRatio,
      (System_String_o *)StringLiteral_16366/*"_purchaseResultArray is null"*/,
      0.01,
      (const MethodInfo_25999D8 *)Method_System_Action_string__float__Invoke__);
    v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v45,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v45;
  }
}


System_String_o *__fastcall PurchaseLogicIOS__GetTransactionIdFromOldStyleReceipt(
        PurchaseLogicIOS_o *this,
        System_String_o *iOSOldStylePayloadStr,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Byte_array *v17; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v19; // x1
  System_String_o *v20; // x0
  const MethodInfo *v21; // x1
  System_Collections_Generic_Dictionary_string__object__o *v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x0
  System_Byte_array *v25; // x21
  System_Text_Encoding_o *v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x0
  const MethodInfo *v29; // x1
  System_Collections_Generic_Dictionary_string__object__o *v30; // x0
  __int64 v31; // x1
  System_Xml_Schema_XmlSchemaObject_o *v34; // [xsp+8h] [xbp-38h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42E8856 & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)iOSOldStylePayloadStr, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5, v6, v7);
    sub_B5D5C4(&string_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_21869/*"purchase-info"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_23075/*"transaction-id"*/, v14, v15, v16);
    byte_42E8856 = 1;
  }
  value = 0LL;
  v34 = 0LL;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v17 = System_Convert__FromBase64String(iOSOldStylePayloadStr, 0LL);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_B5D69C(0LL, v19);
  v20 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, Il2CppMethodPointer))UTF8->klass->vtable._34_GetString.method)(
                             UTF8,
                             v17,
                             UTF8->klass->vtable._35_GetString.methodPtr);
  v22 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v20, v21);
  if ( !v22 )
    sub_B5D69C(0LL, v23);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v22,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21869/*"purchase-info"*/,
    &value,
    (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( value )
  {
    if ( (System_String_c *)value->klass == string_TypeInfo )
      v24 = (System_String_o *)value;
    else
      v24 = 0LL;
  }
  else
  {
    v24 = 0LL;
  }
  v25 = System_Convert__FromBase64String(v24, 0LL);
  v26 = System_Text_Encoding__get_UTF8(0LL);
  if ( !v26 )
    sub_B5D69C(0LL, v27);
  v28 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, Il2CppMethodPointer))v26->klass->vtable._34_GetString.method)(
                             v26,
                             v25,
                             v26->klass->vtable._35_GetString.methodPtr);
  v30 = PurchaseLogicIOS__ParseIOSOldStyleReceipt(v28, v29);
  if ( !v30 )
    sub_B5D69C(0LL, v31);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v30,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23075/*"transaction-id"*/,
    &v34,
    (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( !v34 )
    return 0LL;
  if ( (System_String_c *)v34->klass == string_TypeInfo )
    return (System_String_o *)v34;
  return 0LL;
}


bool __fastcall PurchaseLogicIOS__IsDeferredPurchaseExists(PurchaseLogicIOS_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0

  if ( (byte_42E8860 & 1) == 0 )
  {
    this = (PurchaseLogicIOS_o *)sub_B5D5C4(&Method_System_Linq_Enumerable_Any_string___, (_DWORD)method, v2, v3);
    byte_42E8860 = 1;
  }
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)this,
                                                method);
  return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
           (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_string___);
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
    sub_B5D69C(this, product);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v26; // x19
  System_Char_array *v27; // x0
  System_Char_array *v28; // x1
  int max_length; // w8
  System_Char_array *v30; // x20
  unsigned int v31; // w24
  Il2CppClass **v32; // x8
  System_String_o *v33; // x21
  System_String_o *v34; // x21
  System_Char_array *v35; // x21
  System_Xml_XmlQualifiedName_o *v36; // x22
  __int64 v38; // x0

  if ( (byte_42E8857 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1526/*"="*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1282/*";"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_294/*"\""*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    byte_42E8857 = 1;
  }
  v26 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v26,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v27 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v27 )
    goto LABEL_26;
  v28 = v27;
  if ( !v27->max_length )
    goto LABEL_27;
  v27->m_Items[2] = 10;
  if ( !str || (v27 = (System_Char_array *)System_String__Split(str, v27, 0LL)) == 0LL )
LABEL_26:
    sub_B5D69C(v27, v28);
  max_length = v27->max_length;
  v30 = v27;
  if ( max_length >= 1 )
  {
    v31 = 0;
    while ( v31 < max_length )
    {
      v32 = &v30->obj.klass + (int)v31;
      v33 = (System_String_o *)v32[4];
      if ( !v33 )
        goto LABEL_26;
      v27 = (System_Char_array *)System_String__Contains(
                                   (System_String_o *)v32[4],
                                   (System_String_o *)StringLiteral_1526/*"="*/,
                                   0LL);
      if ( ((unsigned __int8)v27 & 1) != 0 )
      {
        v34 = System_String__Replace_44585024(
                v33,
                (System_String_o *)StringLiteral_1282/*";"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v27 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !v27 )
          goto LABEL_26;
        v28 = v27;
        if ( !v27->max_length )
          break;
        v27->m_Items[2] = 61;
        if ( !v34 )
          goto LABEL_26;
        v27 = (System_Char_array *)System_String__Split(v34, v27, 0LL);
        if ( v27 )
        {
          v35 = v27;
          if ( (int)v27->max_length >= 2 )
          {
            v27 = *(System_Char_array **)&v27->m_Items[2];
            if ( !v27 )
              goto LABEL_26;
            v27 = (System_Char_array *)System_String__Replace_44585024(
                                         (System_String_o *)v27,
                                         (System_String_o *)StringLiteral_294/*"\""*/,
                                         (System_String_o *)StringLiteral_1/*""*/,
                                         0LL);
            if ( !v27 )
              goto LABEL_26;
            v27 = (System_Char_array *)System_String__Trim_44565120((System_String_o *)v27, 0LL);
            if ( v35->max_length <= 1 )
              break;
            v36 = (System_Xml_XmlQualifiedName_o *)v27;
            v27 = *(System_Char_array **)&v35->m_Items[6];
            if ( !v27 )
              goto LABEL_26;
            v27 = (System_Char_array *)System_String__Replace_44585024(
                                         (System_String_o *)v27,
                                         (System_String_o *)StringLiteral_294/*"\""*/,
                                         (System_String_o *)StringLiteral_1/*""*/,
                                         0LL);
            if ( !v27 )
              goto LABEL_26;
            v27 = (System_Char_array *)System_String__Trim_44565120((System_String_o *)v27, 0LL);
            if ( !v26 )
              goto LABEL_26;
            System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
              v26,
              v36,
              (System_Xml_Schema_XmlSchemaObject_o *)v27,
              (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
          }
        }
      }
      max_length = v30->max_length;
      if ( (int)++v31 >= max_length )
        return (System_Collections_Generic_Dictionary_string__object__o *)v26;
    }
LABEL_27:
    v38 = sub_B5D6C8(v27);
    sub_B5D668(v38, 0LL);
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)v26;
}


void __fastcall PurchaseLogicIOS__SendPurchaseAction(
        PurchaseLogicIOS_o *this,
        System_String_o *paymentProductId,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_string__o *AllPurchasedProductIdList; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E885B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_string__Dispose__,
      (_DWORD)paymentProductId,
      (_DWORD)transactionId,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v12, v13, v14);
    byte_42E885B = 1;
  }
  memset(&v20, 0, sizeof(v20));
  AllPurchasedProductIdList = PurchaseLogicIOS__GetAllPurchasedProductIdList(this, (const MethodInfo *)paymentProductId);
  if ( !AllPurchasedProductIdList )
    sub_B5D69C(0LL, v16);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AllPurchasedProductIdList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v20.fields.current;
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)v20.fields.current, 0LL);
    if ( !IsNullOrEmpty )
      PurchaseLogic__SendPurchaseAction(
        (PurchaseLogic_o *)IsNullOrEmpty,
        (System_String_o *)current,
        transactionId,
        v19);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3

  if ( (byte_42E8858 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9842/*"OK"*/, failureReason, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_24214/*"購入処理中に問題が発生しました"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_24212/*"購入できません"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_24213/*"購入処理中です、完了までお待ち下さい"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_2033/*"App内の購入が機能制限されています"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_24189/*"指定されたプロダクトデータが取得できませんでした"*/, v16, v17, v18);
    byte_42E8858 = 1;
  }
}


void __fastcall PurchaseLogicIOS__UpdateMonthlyPurchasePrice(
        PurchaseLogicIOS_o *this,
        int32_t bankShopId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x20
  PurchaseLogicIOS___c_c *v30; // x0
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x21
  Il2CppObject *v33; // x22
  struct PurchaseLogicIOS___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x3
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v45; // x20
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v49; // x1
  __int64 v50; // x3
  __int64 v51; // x20
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  __int64 v56; // x3
  __int64 v57; // x8
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  int32_t v61; // w1
  const MethodInfo *v62; // x2
  __int64 v63; // x8
  unsigned __int64 v64; // x10
  int *v65; // x11
  __int64 v66; // x0

  if ( (byte_42E885A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___,
      bankShopId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__, v23, v24, v25);
    sub_B5D5C4(&PurchaseLogicIOS___c_TypeInfo, v26, v27, v28);
    byte_42E885A = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._purchaseResultArray;
  v30 = PurchaseLogicIOS___c_TypeInfo;
  if ( (BYTE3(PurchaseLogicIOS___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicIOS___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicIOS___c_TypeInfo);
    v30 = PurchaseLogicIOS___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v33,
      Method_PurchaseLogicIOS___c__UpdateMonthlyPurchasePrice_b__7_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int___ctor__);
    v34 = PurchaseLogicIOS___c_TypeInfo->static_fields;
    v34->__9__7_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__int__o *)_9__7_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v34->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  v41 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
          purchaseResultArray,
          (System_Func_TSource__TResult__o *)_9__7_0,
          (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_UnityIap_Request_PurchaseResult__int___);
  if ( !v41 )
    sub_B5D69C(0LL, v42);
  klass = v41->klass;
  v45 = v41;
  if ( *(_WORD *)&v41->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v46;
      p_offset += 4;
      if ( v46 >= *(unsigned __int16 *)&v41->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AF54C0(v41, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v43);
  }
  v51 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v45,
          *(_QWORD *)(p_method + 8));
  if ( !v51 )
    sub_B5D69C(0LL, v49);
  while ( 1 )
  {
    v52 = *(_QWORD *)v51;
    if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
    {
      v53 = 0LL;
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v54 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v53;
        v54 += 4;
        if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
          goto LABEL_23;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_23:
      v55 = sub_AF54C0(v51, System_Collections_IEnumerator_TypeInfo, 0LL, v50);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8)) & 1) == 0 )
      break;
    v57 = *(_QWORD *)v51;
    if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
    {
      v58 = 0LL;
      v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v59 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v58;
        v59 += 4;
        if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
          goto LABEL_30;
      }
      v60 = v57 + 16LL * *v59 + 312;
    }
    else
    {
LABEL_30:
      v60 = sub_AF54C0(v51, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v56);
    }
    v61 = (*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v51, *(_QWORD *)(v60 + 8));
    PurchaseLogic__UpdateMonthlyPurchasePrice((PurchaseLogic_o *)this, v61, v62);
  }
  v63 = *(_QWORD *)v51;
  if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
  {
    v64 = 0LL;
    v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
    {
      ++v64;
      v65 += 4;
      if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
        goto LABEL_37;
    }
    v66 = v63 + 16LL * *v65 + 312;
  }
  else
  {
LABEL_37:
    v66 = sub_AF54C0(v51, System_IDisposable_TypeInfo, 0LL, v56);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v66)(v51, *(_QWORD *)(v66 + 8));
}


void __fastcall PurchaseLogicIOS___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct PurchaseLogicIOS___c_StaticFields *static_fields; // x0

  if ( (byte_42E5AC4 & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseLogicIOS___c_TypeInfo, v1, v2, v3);
    byte_42E5AC4 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(PurchaseLogicIOS___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = PurchaseLogicIOS___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PurchaseLogicIOS___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  uint64_t dateData; // x20
  uint64_t v6; // x19
  System_DateTime_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x1.8

  if ( (byte_42E5AC5 & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c_o *)sub_B5D5C4(&System_DateTime_TypeInfo, (_DWORD)r, (_DWORD)method, v3);
    byte_42E5AC5 = 1;
  }
  if ( !r )
    sub_B5D69C(this, r);
  dateData = r->fields._cancellationDate_k__BackingField.fields.dateData;
  v6 = r->fields._purchaseDate_k__BackingField.fields.dateData;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  v8.fields.dateData = dateData;
  v9.fields.dateData = v6;
  return System_DateTime__op_GreaterThan(v8, v9, 0LL);
}


bool __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return !x->fields.isCommitedAlready;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_1(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.freeStoneNum;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAddedStoneNum_b__12_2(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.chargeStoneNum;
}


int32_t __fastcall PurchaseLogicIOS___c___GetAllPurchasedProductIdList_b__10_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.purchasedBankShopId;
}


int32_t __fastcall PurchaseLogicIOS___c___UpdateMonthlyPurchasePrice_b__7_0(
        PurchaseLogicIOS___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  PurchaseLogicIOS___c__DisplayClass2_0_o *v5; // x20
  uint64_t dateData; // x21
  uint64_t v7; // x22
  System_DateTime_o v9; // 0:x0.8
  System_DateTime_o v10; // 0:x1.8

  v5 = this;
  if ( (byte_42E5AC6 & 1) == 0 )
  {
    this = (PurchaseLogicIOS___c__DisplayClass2_0_o *)sub_B5D5C4(
                                                        &System_DateTime_TypeInfo,
                                                        (_DWORD)r,
                                                        (_DWORD)method,
                                                        v3);
    byte_42E5AC6 = 1;
  }
  if ( !r )
    sub_B5D69C(this, r);
  dateData = r->fields._cancellationDate_k__BackingField.fields.dateData;
  v7 = r->fields._purchaseDate_k__BackingField.fields.dateData;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  v9.fields.dateData = dateData;
  v10.fields.dateData = v7;
  return System_DateTime__op_LessThanOrEqual(v9, v10, 0LL)
      && System_String__op_Equality(
           r->fields._transactionID_k__BackingField,
           v5->fields.transactionIdInOldStyleReceipt,
           0LL);
}