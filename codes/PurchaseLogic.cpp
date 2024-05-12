void __fastcall PurchaseLogic___ctor(PurchaseLogic_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  PurchaseLogic___c_c *v23; // x0
  struct PurchaseLogic___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__77_0; // x20
  Il2CppObject *v26; // x21
  struct PurchaseLogic___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  PurchaseLogic___c_c *v40; // x0
  struct PurchaseLogic___c_StaticFields *v41; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__77_1; // x20
  Il2CppObject *v43; // x21
  struct PurchaseLogic___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  PurchaseLogic___c_c *v57; // x0
  struct PurchaseLogic___c_StaticFields *v58; // x8
  System_Action_string__float__o *_9__77_2; // x20
  Il2CppObject *v60; // x21
  struct PurchaseLogic___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7

  if ( (byte_438B641 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_string___ctor__);
    sub_B775C4(&System_Action_string__TypeInfo);
    sub_B775C4(&Method_System_Action_string__float___ctor__);
    sub_B775C4(&System_Action_string__float__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Product___ctor__);
    sub_B775C4(&System_Collections_Generic_HashSet_Product__TypeInfo);
    sub_B775C4(&Method_PurchaseLogic___c___ctor_b__77_0__);
    sub_B775C4(&Method_PurchaseLogic___c___ctor_b__77_1__);
    sub_B775C4(&Method_PurchaseLogic___c___ctor_b__77_2__);
    sub_B775C4(&PurchaseLogic___c_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438B641 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_HashSet_Product__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v3,
    (const MethodInfo_2EE2460 *)Method_System_Collections_Generic_HashSet_Product___ctor__);
  this->fields._pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._currentTransactionId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields._currentTransactionId, v10, v11, v12, v13, v14, v15, v16);
  v23 = PurchaseLogic___c_TypeInfo;
  if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v23 = PurchaseLogic___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__77_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__77_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_string__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__77_0,
      v26,
      Method_PurchaseLogic___c___ctor_b__77_0__,
      (const MethodInfo_26A0868 *)Method_System_Action_string___ctor__);
    v27 = PurchaseLogic___c_TypeInfo->static_fields;
    v27->__9__77_0 = (struct System_Action_string__o *)_9__77_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v27->__9__77_0,
      (System_Int32_array **)_9__77_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  this->fields._logOutputAction = (struct System_Action_string__o *)_9__77_0;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._logOutputAction,
    (System_Int32_array **)_9__77_0,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v40 = PurchaseLogic___c_TypeInfo;
  if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v40 = PurchaseLogic___c_TypeInfo;
  }
  v41 = v40->static_fields;
  _9__77_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v41->__9__77_1;
  if ( !_9__77_1 )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v41 = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)v41->__9;
    _9__77_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_string__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__77_1,
      v43,
      Method_PurchaseLogic___c___ctor_b__77_1__,
      (const MethodInfo_26A0868 *)Method_System_Action_string___ctor__);
    v44 = PurchaseLogic___c_TypeInfo->static_fields;
    v44->__9__77_1 = (struct System_Action_string__o *)_9__77_1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v44->__9__77_1,
      (System_Int32_array **)_9__77_1,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  this->fields._logErrorOutputAction = (struct System_Action_string__o *)_9__77_1;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._logErrorOutputAction,
    (System_Int32_array **)_9__77_1,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v57 = PurchaseLogic___c_TypeInfo;
  if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v57 = PurchaseLogic___c_TypeInfo;
  }
  v58 = v57->static_fields;
  _9__77_2 = v58->__9__77_2;
  if ( !_9__77_2 )
  {
    if ( (BYTE3(v57->vtable._0_Equals.methodPtr) & 4) != 0 && !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57);
      v58 = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v60 = (Il2CppObject *)v58->__9;
    _9__77_2 = (System_Action_string__float__o *)sub_B77694(System_Action_string__float__TypeInfo);
    System_Action_string__float____ctor(
      _9__77_2,
      v60,
      Method_PurchaseLogic___c___ctor_b__77_2__,
      (const MethodInfo_26AEF0C *)Method_System_Action_string__float___ctor__);
    v61 = PurchaseLogic___c_TypeInfo->static_fields;
    v61->__9__77_2 = _9__77_2;
    sub_B77560(
      (BattleServantConfConponent_o *)&v61->__9__77_2,
      (System_Int32_array **)_9__77_2,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
  }
  this->fields._logErrorOutputActionSampledByRatio = _9__77_2;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._logErrorOutputActionSampledByRatio,
    (System_Int32_array **)_9__77_2,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogic__AddDeferredPurchaseProductIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  PurchaseLogic_o *v10; // x0
  const MethodInfo *v11; // x2

  if ( (byte_438B63F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Distinct_string___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_string___);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    byte_438B63F = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(productId, 0LL);
  if ( !IsNullOrEmpty )
  {
    DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                  (PurchaseLogic_o *)IsNullOrEmpty,
                                                  v5);
    if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
      sub_B7769C(0LL, v7);
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)DeferredPurchaseProductIdsFromPlayerPrefs;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
      (EventMissionProgressRequest_Argument_ProgressData_o *)productId,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
    v9 = System_Linq_Enumerable__Distinct_string_(
           v8,
           (const MethodInfo_1D2E5E8 *)Method_System_Linq_Enumerable_Distinct_string___);
    v10 = (PurchaseLogic_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                               v9,
                               (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_string___);
    PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(
      v10,
      (System_Collections_Generic_List_string__o *)v10,
      v11);
  }
}


void __fastcall PurchaseLogic__AddPendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0

  if ( (byte_438B62A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Product__Add__);
    byte_438B62A = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_B7769C(0LL, product);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)pendingProducts,
    (WarBoardAIRoute_RouteData_o *)product,
    (const MethodInfo_2EE361C *)Method_System_Collections_Generic_HashSet_Product__Add__);
}


int32_t __fastcall PurchaseLogic__CheckBankStatusAndMonthlyLimit(
        PurchaseLogic_o *this,
        System_String_o *result,
        int32_t price,
        const MethodInfo *method)
{
  System_String_o *v6; // x19
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v8; // x22
  struct PurchaseLogic___c_StaticFields **Item; // x0
  __int64 v10; // x1
  System_String_o *v11; // x0
  int32_t v12; // w21
  PurchaseLogic_o *v13; // x0
  const MethodInfo *v14; // x2
  int32_t v15; // w21
  System_String_o *v16; // x0
  int32_t v17; // w20
  System_String_o *v18; // x0
  CommonUI_o *Instance; // x20
  struct PurchaseLogic___c_StaticFields *static_fields; // x8
  System_Action_o *_9__29_0; // x22
  Il2CppObject *v22; // x21
  struct PurchaseLogic___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  CommonUI_o *v30; // x20
  struct PurchaseLogic___c_StaticFields *v31; // x8
  System_Action_o *_9__29_1; // x21
  Il2CppObject *v33; // x22
  struct PurchaseLogic___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_438B627 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AgeVerificationMenu_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__29_0__);
    sub_B775C4(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__29_1__);
    sub_B775C4(&PurchaseLogic___c_TypeInfo);
    sub_B775C4(&StringLiteral_12618/*"STONE_PURCHASE_RESULT_BLOCK"*/);
    sub_B775C4(&StringLiteral_21901/*"perMonthAmount"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    sub_B775C4(&StringLiteral_20889/*"message"*/);
    sub_B775C4(&StringLiteral_16923/*"bankAvailable"*/);
    byte_438B627 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12618/*"STONE_PURCHASE_RESULT_BLOCK"*/, 0LL);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21504/*"ng"*/, 0LL) )
    goto LABEL_39;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0LL);
  v8 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary;
  if ( !Dictionary
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Dictionary,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21901/*"perMonthAmount"*/,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    goto LABEL_39;
  }
  Item = (struct PurchaseLogic___c_StaticFields **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                     v8,
                                                     (System_Type_o *)StringLiteral_21901/*"perMonthAmount"*/,
                                                     (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_57;
  v11 = (System_String_o *)((__int64 (__fastcall *)(struct PurchaseLogic___c_StaticFields **, struct System_Action_string__o *))(*Item)[6].__9__40_0)(
                             Item,
                             (*Item)[6].__9__77_0);
  v12 = System_Int32__Parse(v11, 0LL);
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  }
  AgeVerificationMenu__SaveCumulativeAmount(v12, 0LL);
  if ( !PurchaseLogic__IsLimitOver(v13, v12 + price, v14) )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v8,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_16923/*"bankAvailable"*/,
           (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (struct PurchaseLogic___c_StaticFields **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                         v8,
                                                         (System_Type_o *)StringLiteral_16923/*"bankAvailable"*/,
                                                         (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_57;
      v16 = (System_String_o *)((__int64 (__fastcall *)(struct PurchaseLogic___c_StaticFields **, struct System_Action_string__o *))(*Item)[6].__9__40_0)(
                                 Item,
                                 (*Item)[6].__9__77_0);
      v17 = System_Int32__Parse(v16, 0LL);
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v8,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_20889/*"message"*/,
             (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (struct PurchaseLogic___c_StaticFields **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                           v8,
                                                           (System_Type_o *)StringLiteral_20889/*"message"*/,
                                                           (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_57;
        v18 = (System_String_o *)((__int64 (__fastcall *)(struct PurchaseLogic___c_StaticFields **, struct System_Action_string__o *))(*Item)[6].__9__40_0)(
                                   Item,
                                   (*Item)[6].__9__77_0);
        v6 = v18;
        if ( !v17 )
        {
          if ( !System_String__IsNullOrEmpty(v18, 0LL) )
          {
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
            {
              Item = (struct PurchaseLogic___c_StaticFields **)PurchaseLogic___c_TypeInfo;
              if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
                Item = (struct PurchaseLogic___c_StaticFields **)PurchaseLogic___c_TypeInfo;
              }
              static_fields = Item[23];
              _9__29_0 = static_fields->__9__29_0;
              if ( !_9__29_0 )
              {
                if ( (*((_BYTE *)Item + 307) & 4) != 0 && !*((_DWORD *)Item + 56) )
                {
                  j_il2cpp_runtime_class_init_0(Item);
                  static_fields = PurchaseLogic___c_TypeInfo->static_fields;
                }
                v22 = (Il2CppObject *)static_fields->__9;
                _9__29_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                System_Action___ctor(
                  _9__29_0,
                  v22,
                  Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__29_0__,
                  0LL);
                v23 = PurchaseLogic___c_TypeInfo->static_fields;
                v23->__9__29_0 = _9__29_0;
                sub_B77560(
                  (BattleServantConfConponent_o *)&v23->__9__29_0,
                  (System_Int32_array **)_9__29_0,
                  v24,
                  v25,
                  v26,
                  v27,
                  v28,
                  v29);
              }
              if ( Instance )
              {
                v15 = 1;
                CommonUI__OpenNotificationDialog(Instance, 0LL, v6, _9__29_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
                return v15;
              }
LABEL_57:
              sub_B7769C(Item, v10);
            }
          }
          return 1;
        }
      }
      else if ( !v17 )
      {
        return 1;
      }
    }
LABEL_39:
    if ( !System_String__IsNullOrEmpty(v6, 0LL) )
    {
      v30 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0LL, 0LL) )
      {
        Item = (struct PurchaseLogic___c_StaticFields **)PurchaseLogic___c_TypeInfo;
        if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
          Item = (struct PurchaseLogic___c_StaticFields **)PurchaseLogic___c_TypeInfo;
        }
        v31 = Item[23];
        _9__29_1 = v31->__9__29_1;
        if ( !_9__29_1 )
        {
          if ( (*((_BYTE *)Item + 307) & 4) != 0 && !*((_DWORD *)Item + 56) )
          {
            j_il2cpp_runtime_class_init_0(Item);
            v31 = PurchaseLogic___c_TypeInfo->static_fields;
          }
          v33 = (Il2CppObject *)v31->__9;
          _9__29_1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
          System_Action___ctor(_9__29_1, v33, Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__29_1__, 0LL);
          v34 = PurchaseLogic___c_TypeInfo->static_fields;
          v34->__9__29_1 = _9__29_1;
          sub_B77560(
            (BattleServantConfConponent_o *)&v34->__9__29_1,
            (System_Int32_array **)_9__29_1,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
        }
        if ( !v30 )
          goto LABEL_57;
        CommonUI__OpenNotificationDialog(v30, 0LL, v6, _9__29_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
      }
    }
    return 2;
  }
  return 3;
}


int32_t __fastcall PurchaseLogic__ComputePurchaseResult(
        PurchaseLogic_o *this,
        bool succeeded,
        int32_t failureReason,
        const MethodInfo *method)
{
  if ( succeeded )
    return 2;
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._23_ShowPurchaseFailedNotification.method)(
    this,
    (unsigned int)failureReason,
    this->klass->vtable._24_SendPurchaseAction.methodPtr,
    method);
  if ( (unsigned int)failureReason > 6 )
    return 6;
  else
    return dword_331E770[failureReason];
}


void __fastcall PurchaseLogic__ConfirmPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x20
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  unsigned __int64 v8; // x10
  UnityEngine_Purchasing_IStoreController_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_438B62D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Product__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Product__Remove__);
    sub_B775C4(&UnityEngine_Purchasing_IStoreController_TypeInfo);
    sub_B775C4(&PurchaseLogic_TypeInfo);
    byte_438B62D = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_15;
  if ( !System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
          (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
          (BattleBuffData_BuffData_o *)product,
          (const MethodInfo_2EE2AE4 *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
    return;
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts
    || (pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)System_Collections_Generic_HashSet_BattleBuffData_BuffData___Remove(
                                                                                    (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
                                                                                    (BattleBuffData_BuffData_o *)product,
                                                                                    (const MethodInfo_2EE2C94 *)Method_System_Collections_Generic_HashSet_Product__Remove__),
        (storeController = PurchaseLogic_TypeInfo->static_fields->_storeController) == 0LL) )
  {
LABEL_15:
    sub_B7769C(pendingProducts, product);
  }
  klass = storeController->klass;
  if ( *(_WORD *)&storeController->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = (UnityEngine_Purchasing_IStoreController_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      ++v8;
      p_offset += 2;
      if ( v8 >= *(unsigned __int16 *)&storeController->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
  }
  else
  {
LABEL_11:
    p_method = sub_B0F4C0(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 2LL);
  }
  (*(void (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, UnityEngine_Purchasing_Product_o *, _QWORD))p_method)(
    storeController,
    product,
    *(_QWORD *)(p_method + 8));
}


void __fastcall PurchaseLogic__DisableCrashReporterOnInitialize(PurchaseLogic_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic__EnableCrashReporterOnInitializeFailed(PurchaseLogic_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic__EnableCrashReporterOnInitializeSucceeded(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic__ExecuteBuyProductFinishedAction(
        PurchaseLogic_o *this,
        int32_t purchaseResult,
        int32_t perMonthAmount,
        int32_t freeStoneNum,
        int32_t chargeStoneNum,
        const MethodInfo *method)
{
  PurchaseLogic_ProductFinishedAction_o *buyProductFinishedAction; // x0

  buyProductFinishedAction = this->fields._buyProductFinishedAction;
  if ( buyProductFinishedAction )
    PurchaseLogic_ProductFinishedAction__Invoke(
      buyProductFinishedAction,
      purchaseResult,
      perMonthAmount,
      freeStoneNum,
      chargeStoneNum,
      0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(
        PurchaseLogic_o *this,
        int32_t purchaseResult,
        int32_t perMonthAmount,
        int32_t freeStoneNum,
        int32_t chargeStoneNum,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  PurchaseLogic_ProductFinishedAction_o *buyProductFinishedAction; // x0
  BattleServantConfConponent_o *p_buyProductFinishedAction; // x19

  p_buyProductFinishedAction = (BattleServantConfConponent_o *)&this->fields._buyProductFinishedAction;
  buyProductFinishedAction = this->fields._buyProductFinishedAction;
  if ( buyProductFinishedAction )
    PurchaseLogic_ProductFinishedAction__Invoke(
      buyProductFinishedAction,
      purchaseResult,
      perMonthAmount,
      freeStoneNum,
      chargeStoneNum,
      0LL);
  p_buyProductFinishedAction->klass = 0LL;
  sub_B77560(
    p_buyProductFinishedAction,
    0LL,
    *(System_String_array ***)&perMonthAmount,
    *(System_String_array ***)&freeStoneNum,
    *(System_Boolean_array ***)&chargeStoneNum,
    (System_Int32_array **)method,
    v6,
    v7);
}


PurchaseLogic_ReceiptContents_o *__fastcall PurchaseLogic__ExtractReceiptContents(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  PurchaseLogic_ReceiptContents_o *v3; // x19

  if ( (byte_438B62E & 1) == 0 )
  {
    sub_B775C4(&PurchaseLogic_ReceiptContents_TypeInfo);
    byte_438B62E = 1;
  }
  v3 = (PurchaseLogic_ReceiptContents_o *)sub_B77694(PurchaseLogic_ReceiptContents_TypeInfo);
  PurchaseLogic_ReceiptContents___ctor(v3, 0LL);
  return v3;
}


void __fastcall PurchaseLogic__GetAddedStoneNum(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        int32_t *freeStoneNum,
        int32_t *chargeStoneNum,
        const MethodInfo *method)
{
  __int64 v5; // x8
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v6; // x8
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v7; // x8
  __int64 v8; // x0

  *chargeStoneNum = 0;
  *freeStoneNum = 0;
  if ( purchaseResultArray )
  {
    v5 = *(_QWORD *)&purchaseResultArray->max_length;
    if ( v5 )
    {
      if ( (_DWORD)v5 )
      {
        v6 = purchaseResultArray->m_Items[0];
        if ( !v6 )
          goto LABEL_10;
        *freeStoneNum = v6->fields.freeStoneNum;
        if ( purchaseResultArray->max_length )
        {
          v7 = purchaseResultArray->m_Items[0];
          if ( v7 )
          {
            *chargeStoneNum = v7->fields.chargeStoneNum;
            return;
          }
LABEL_10:
          sub_B7769C(this, purchaseResultArray);
        }
      }
      v8 = sub_B776C8(this);
      sub_B77668(v8, 0LL);
    }
  }
}


UnityEngine_Purchasing_IAppleExtensions_o *__fastcall PurchaseLogic__GetAppleExtension(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  _BOOL8 IsAppleDevice; // x0
  __int64 v3; // x1
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x19
  UnityEngine_Purchasing_IExtensionProvider_c *klass; // x8
  void *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 (__fastcall **v13)(struct UnityEngine_Purchasing_IExtensionProvider_o *, _QWORD); // x0

  if ( (byte_438B639 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___);
    this = (PurchaseLogic_o *)sub_B775C4(&PurchaseLogic_TypeInfo);
    byte_438B639 = 1;
  }
  if ( !PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider )
    return 0LL;
  IsAppleDevice = PurchaseLogic__IsAppleDevice((const MethodInfo *)this);
  if ( !IsAppleDevice )
    return 0LL;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_B7769C(IsAppleDevice, v3);
  klass = storeExtensionProvider->klass;
  v6 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v7 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 3);
  v8 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 36);
  if ( *(_WORD *)&storeExtensionProvider->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v7 )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&storeExtensionProvider->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset + (int)v8].method;
  }
  else
  {
LABEL_10:
    p_method = sub_B0F4C0(storeExtensionProvider, v7, v8);
  }
  v13 = (__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, _QWORD))sub_B77674(
                                                                                                 *(_QWORD *)(p_method + 8),
                                                                                                 v6);
  return (UnityEngine_Purchasing_IAppleExtensions_o *)(*v13)(storeExtensionProvider, v13);
}


UnityEngine_Purchasing_ConfigurationBuilder_o *__fastcall PurchaseLogic__GetConfigurationBuilder(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  UnityEngine_Purchasing_Extension_IPurchasingModule_o *v2; // x19
  _QWORD **v3; // x21
  __int64 v4; // x20
  __int16 v5; // w8
  __int64 v6; // x20
  __int64 v7; // x20
  __int64 v8; // x20

  if ( (byte_438B622 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Empty_IPurchasingModule___);
    sub_B775C4(&UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo);
    byte_438B622 = 1;
  }
  if ( (BYTE3(UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo);
  }
  v2 = (UnityEngine_Purchasing_Extension_IPurchasingModule_o *)UnityEngine_Purchasing_StandardPurchasingModule__Instance(0LL);
  v3 = (_QWORD **)Method_System_Array_Empty_IPurchasingModule___;
  v4 = **((_QWORD **)Method_System_Array_Empty_IPurchasingModule___ + 6);
  v5 = *(_WORD *)(v4 + 306);
  if ( (v5 & 1) == 0 )
  {
    sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_IPurchasingModule___ + 6));
    v5 = *(_WORD *)(v4 + 306);
  }
  if ( (v5 & 0x400) != 0 )
  {
    v6 = *v3[6];
    if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
      sub_B0F2C4(*v3[6]);
    if ( !*(_DWORD *)(v6 + 224) )
    {
      v7 = *v3[6];
      if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
        sub_B0F2C4(*v3[6]);
      j_il2cpp_runtime_class_init_0(v7);
    }
  }
  v8 = *v3[6];
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_B0F2C4(*v3[6]);
  return UnityEngine_Purchasing_ConfigurationBuilder__Instance(
           v2,
           **(UnityEngine_Purchasing_Extension_IPurchasingModule_array ***)(v8 + 184),
           0LL);
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  System_String_o *String; // x19
  System_Char_array *v3; // x0
  System_Char_array *v4; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19
  __int64 v8; // x0

  if ( (byte_438B63D & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_string___);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_5363/*"DeferredPurchaseProductIds"*/);
    byte_438B63D = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_5363/*"DeferredPurchaseProductIds"*/,
             string_TypeInfo->static_fields->Empty,
             0LL);
  if ( System_String__op_Inequality(String, string_TypeInfo->static_fields->Empty, 0LL) )
  {
    v3 = (System_Char_array *)sub_B775DC(char___TypeInfo, 1LL);
    if ( !v3 )
      goto LABEL_10;
    v4 = v3;
    if ( !v3->max_length )
    {
      v8 = sub_B776C8(v3);
      sub_B77668(v8, 0LL);
    }
    v3->m_Items[2] = 59;
    if ( !String )
LABEL_10:
      sub_B7769C(v3, v4);
    v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String, v3, 0LL);
    return (System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                          v5,
                                                          (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_string___);
  }
  else
  {
    v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v6,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  }
  return (System_Collections_Generic_List_string__o *)v6;
}


PurchaseByBank_UnityIap_Request_PurchaseResult_o *__fastcall PurchaseLogic__GetFirstPurchaseResult(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x20

  if ( (byte_438B632 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____69504400);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_B775C4(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__);
    sub_B775C4(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    sub_B775C4(&Method_PurchaseLogic___c__DisplayClass42_0__GetFirstPurchaseResult_b__0__);
    sub_B775C4(&PurchaseLogic___c__DisplayClass42_0_TypeInfo);
    byte_438B632 = 1;
  }
  v6 = sub_B77694(PurchaseLogic___c__DisplayClass42_0_TypeInfo);
  PurchaseLogic___c__DisplayClass42_0___ctor((PurchaseLogic___c__DisplayClass42_0_o *)v6, 0LL);
  if ( !v6 )
    sub_B7769C(v7, v8);
  *(_QWORD *)(v6 + 16) = transactionId;
  sub_B77560(
    (BattleServantConfConponent_o *)(v6 + 16),
    (System_Int32_array **)transactionId,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( !purchaseResultArray )
    return 0LL;
  if ( !PurchaseLogic__IsAppleDevice(v15) )
    return System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
             (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
             (const MethodInfo_1D31514 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___);
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v6,
    Method_PurchaseLogic___c__DisplayClass42_0__GetFirstPurchaseResult_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__);
  return (PurchaseByBank_UnityIap_Request_PurchaseResult_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                               (System_Func_TSource__bool__o *)v16,
                                                               (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____69504400);
}


PurchaseLogic_o *__fastcall PurchaseLogic__GetInstance(const MethodInfo *method)
{
  PurchaseLogic_o *v1; // x19
  const MethodInfo *v2; // x1

  if ( (byte_438B620 & 1) == 0 )
  {
    sub_B775C4(&PurchaseLogicAndroid_TypeInfo);
    byte_438B620 = 1;
  }
  v1 = (PurchaseLogic_o *)sub_B77694(PurchaseLogicAndroid_TypeInfo);
  PurchaseLogic___ctor(v1, v2);
  return v1;
}


int32_t __fastcall PurchaseLogic__GetPrice(PurchaseLogic_o *this, int32_t bankShopId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  WarEntity_o *Entity; // x0
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = bankShopId;
  if ( (byte_438B635 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_string__Invoke__);
    sub_B775C4(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_B775C4(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_6176/*"Entity is not found. bankShopId="*/);
    byte_438B635 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             bankShopId,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
  if ( Entity )
    return Entity->fields.priority;
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v10 = System_Int32__ToString((int32_t)&v11, 0LL);
  Instance = (DataManager_o *)System_String__Concat_44901936((System_String_o *)StringLiteral_6176/*"Entity is not found. bankShopId="*/, v10, 0LL);
  if ( !logErrorOutputAction )
LABEL_9:
    sub_B7769C(Instance, v6);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logErrorOutputAction,
    (System_Uri_o *)Instance,
    (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
  return 0;
}


void __fastcall PurchaseLogic__InitializePurchasingFramework(PurchaseLogic_o *this, const MethodInfo *method)
{
  struct PurchaseLogic_StaticFields *static_fields; // x8
  UnityEngine_Purchasing_ConfigurationBuilder_o *v4; // x20
  __int64 v5; // x1
  PurchaseBehaviour_c *v6; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ConsumableProductIdCollection; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438B621 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_B775C4(&PurchaseBehaviour_TypeInfo);
    byte_438B621 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( (byte_438B623 & 1) == 0 )
  {
    sub_B775C4(&PurchaseLogic_TypeInfo);
    byte_438B623 = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    ((void (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))this->klass->vtable._27_DisableCrashReporterOnInitialize.method)(
      this,
      this->klass->vtable._28_EnableCrashReporterOnInitializeSucceeded.methodPtr);
    v4 = (UnityEngine_Purchasing_ConfigurationBuilder_o *)((__int64 (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))this->klass->vtable._10_GetConfigurationBuilder.method)(
                                                            this,
                                                            this->klass->vtable._11_SetObfuscatedAccountId.methodPtr);
    ((void (__fastcall *)(PurchaseLogic_o *, UnityEngine_Purchasing_ConfigurationBuilder_o *, Il2CppMethodPointer))this->klass->vtable._11_SetObfuscatedAccountId.method)(
      this,
      v4,
      this->klass->vtable._12_SetCachedObfuscatedAccountId.methodPtr);
    ((void (__fastcall *)(PurchaseLogic_o *, __int64, Il2CppMethodPointer))this->klass->vtable._15_SetAlreadyInitializedWithObfuscatedAccountId.method)(
      this,
      1LL,
      this->klass->vtable._16_IsInitializedWithMismatchedObfuscatedAccountId.methodPtr);
    v6 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v6 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v6->static_fields->ConsumableProductIdCollection;
    if ( !ConsumableProductIdCollection )
      sub_B7769C(0LL, v5);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v10,
      ConsumableProductIdCollection,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v10,
             (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
      if ( !v8 )
        break;
      if ( !v4 )
        sub_B7769C(v8, v9);
      UnityEngine_Purchasing_ConfigurationBuilder__AddProduct(v4, (System_String_o *)v10.fields.current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v10,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    UnityEngine_Purchasing_UnityPurchasing__Initialize((UnityEngine_Purchasing_IStoreListener_o *)this, v4, 0LL);
  }
}


void __fastcall PurchaseLogic__InitiatePurchase(
        PurchaseLogic_o *this,
        BankShopEntity_o *bankShop,
        PurchaseLogic_ProductFinishedAction_o *finishedAction,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !bankShop )
    sub_B7769C(this, 0LL);
  PurchaseLogic__InitiatePurchase_25741792(
    this,
    bankShop->fields.googleShopId,
    bankShop->fields.googlePrice,
    finishedAction,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__InitiatePurchase_25741792(
        PurchaseLogic_o *this,
        System_String_o *productId,
        int32_t price,
        PurchaseLogic_ProductFinishedAction_o *finishedAction,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_Purchasing_Product_o *v12; // x1
  struct PurchaseLogic_StaticFields *static_fields; // x8
  System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x0
  const MethodInfo *v15; // x5
  int32_t v16; // w1
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x22
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 *v22; // x8
  struct UnityEngine_Purchasing_IStoreController_o *v23; // x22
  UnityEngine_Purchasing_IStoreController_c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  UnityEngine_Purchasing_Product_o *v28; // x0
  const MethodInfo *v29; // x3

  if ( (byte_438B624 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_string__Invoke__);
    sub_B775C4(&Method_System_Action_string__float__Invoke__);
    sub_B775C4(&UnityEngine_Purchasing_IStoreController_TypeInfo);
    sub_B775C4(&PurchaseLogic_TypeInfo);
    sub_B775C4(&StringLiteral_7779/*"InitiatePurchase: FAIL. PurchasingFramework not initialized."*/);
    sub_B775C4(&StringLiteral_7780/*"InitiatePurchase: FAIL. StoreController is null."*/);
    sub_B775C4(&StringLiteral_7778/*"InitiatePurchase: FAIL. Not purchasing product, either is not found or is not available for purchase"*/);
    sub_B775C4(&StringLiteral_7781/*"InitiatePurchase: FAIL. StoreController.products is null."*/);
    sub_B775C4(&StringLiteral_7782/*"InitiatePurchase: Initialized With Mismatched ObfuscatedAccountId."*/);
    byte_438B624 = 1;
  }
  this->fields._buyProductFinishedAction = finishedAction;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._buyProductFinishedAction,
    (System_Int32_array **)finishedAction,
    *(System_String_array ***)&price,
    (System_String_array **)finishedAction,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( (byte_438B623 & 1) == 0 )
  {
    sub_B775C4(&PurchaseLogic_TypeInfo);
    byte_438B623 = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( logErrorOutputActionSampledByRatio )
    {
      System_Action_string__float___Invoke(
        logErrorOutputActionSampledByRatio,
        (System_String_o *)StringLiteral_7779/*"InitiatePurchase: FAIL. PurchasingFramework not initialized."*/,
        0.01,
        (const MethodInfo_26AEF20 *)Method_System_Action_string__float__Invoke__);
      v16 = 10;
      goto LABEL_33;
    }
LABEL_39:
    sub_B7769C(logErrorOutputActionSampledByRatio, v12);
  }
  if ( (((__int64 (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))this->klass->vtable._16_IsInitializedWithMismatchedObfuscatedAccountId.method)(
          this,
          this->klass->vtable._17_SetInitializedWithMismatchedObfuscatedAccountId.methodPtr) & 1) != 0 )
  {
    logErrorOutputActionSampledByRatio = (System_Action_string__float__o *)this->fields._logErrorOutputAction;
    if ( logErrorOutputActionSampledByRatio )
    {
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)logErrorOutputActionSampledByRatio,
        (System_Uri_o *)StringLiteral_7782/*"InitiatePurchase: Initialized With Mismatched ObfuscatedAccountId."*/,
        (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
      v16 = 13;
LABEL_33:
      PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, v16, 0, 0, 0, v15);
      return;
    }
    goto LABEL_39;
  }
  storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
  if ( !storeController )
  {
    logErrorOutputActionSampledByRatio = (System_Action_string__float__o *)this->fields._logErrorOutputAction;
    if ( !logErrorOutputActionSampledByRatio )
      goto LABEL_39;
    v22 = &StringLiteral_7780/*"InitiatePurchase: FAIL. StoreController is null."*/;
LABEL_30:
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)logErrorOutputActionSampledByRatio,
      (System_Uri_o *)*v22,
      (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
LABEL_31:
    logErrorOutputActionSampledByRatio = (System_Action_string__float__o *)this->fields._logErrorOutputAction;
    if ( logErrorOutputActionSampledByRatio )
    {
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)logErrorOutputActionSampledByRatio,
        (System_Uri_o *)StringLiteral_7778/*"InitiatePurchase: FAIL. Not purchasing product, either is not found or is not available for purchase"*/,
        (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
      v16 = 11;
      goto LABEL_33;
    }
    goto LABEL_39;
  }
  klass = storeController->klass;
  if ( *(_WORD *)&storeController->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IStoreController_c **)p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      ++v19;
      p_offset += 4;
      if ( v19 >= *(unsigned __int16 *)&storeController->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_B0F4C0(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
  }
  logErrorOutputActionSampledByRatio = (System_Action_string__float__o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))p_method)(
                                                                           storeController,
                                                                           *(_QWORD *)(p_method + 8));
  if ( !logErrorOutputActionSampledByRatio )
  {
    logErrorOutputActionSampledByRatio = (System_Action_string__float__o *)this->fields._logErrorOutputAction;
    if ( !logErrorOutputActionSampledByRatio )
      goto LABEL_39;
    v22 = &StringLiteral_7781/*"InitiatePurchase: FAIL. StoreController.products is null."*/;
    goto LABEL_30;
  }
  v23 = PurchaseLogic_TypeInfo->static_fields->_storeController;
  if ( !v23 )
    goto LABEL_39;
  v24 = v23->klass;
  if ( *(_WORD *)&v23->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IStoreController_c **)v26 - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
        goto LABEL_27;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_27:
    v27 = sub_B0F4C0(v23, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
  }
  logErrorOutputActionSampledByRatio = (System_Action_string__float__o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))v27)(
                                                                           v23,
                                                                           *(_QWORD *)(v27 + 8));
  if ( !logErrorOutputActionSampledByRatio )
    goto LABEL_39;
  v28 = UnityEngine_Purchasing_ProductCollection__WithID(
          (UnityEngine_Purchasing_ProductCollection_o *)logErrorOutputActionSampledByRatio,
          productId,
          0LL);
  if ( !v28 )
    goto LABEL_31;
  v12 = v28;
  if ( !v28->fields._availableToPurchase_k__BackingField )
    goto LABEL_31;
  PurchaseLogic__PurchaseIfAvailable(this, v28, price, v29);
}


bool __fastcall PurchaseLogic__IsAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall PurchaseLogic__IsAppleDevice(const MethodInfo *method)
{
  return UnityEngine_Application__get_platform(0LL) == 8 || UnityEngine_Application__get_platform(0LL) == 1;
}


bool __fastcall PurchaseLogic__IsDeferredPurchaseExists(PurchaseLogic_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall PurchaseLogic__IsGooglePlayDevice(const MethodInfo *method)
{
  return UnityEngine_Application__get_platform(0LL) == 11;
}


bool __fastcall PurchaseLogic__IsInitializedWithMismatchedObfuscatedAccountId(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall PurchaseLogic__IsLimitOver(PurchaseLogic_o *this, int32_t value, const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  int32_t Limit; // w0

  if ( (byte_438B628 & 1) == 0 )
  {
    sub_B775C4(&AgeVerificationMenu_TypeInfo);
    sub_B775C4(&ManagerConfig_TypeInfo);
    byte_438B628 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
    return 1;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  }
  Limit = AgeVerificationMenu__GetLimit(0LL);
  return Limit >= 0 && Limit < value;
}


bool __fastcall PurchaseLogic__IsObfuscatedAccountIdCached(PurchaseLogic_o *this, const MethodInfo *method)
{
  return 1;
}


bool __fastcall PurchaseLogic__IsPendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *prodcut,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0

  if ( (byte_438B62C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Product__Contains__);
    byte_438B62C = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_B7769C(0LL, prodcut);
  return System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
           (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
           (BattleBuffData_BuffData_o *)prodcut,
           (const MethodInfo_2EE2AE4 *)Method_System_Collections_Generic_HashSet_Product__Contains__);
}


bool __fastcall PurchaseLogic__IsPurchasingFrameworkInitialized(PurchaseLogic_o *this, const MethodInfo *method)
{
  struct PurchaseLogic_StaticFields *static_fields; // x8

  if ( (byte_438B623 & 1) == 0 )
  {
    sub_B775C4(&PurchaseLogic_TypeInfo);
    byte_438B623 = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  return static_fields->_storeController && static_fields->_storeExtensionProvider != 0LL;
}


bool __fastcall PurchaseLogic__IsServerCommitedPurchase(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        const MethodInfo *method)
{
  PurchaseLogic___c_c *v4; // x0
  struct PurchaseLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__40_0; // x20
  Il2CppObject *v7; // x21
  struct PurchaseLogic___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_438B630 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_B775C4(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__);
    sub_B775C4(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    sub_B775C4(&Method_PurchaseLogic___c__IsServerCommitedPurchase_b__40_0__);
    sub_B775C4(&PurchaseLogic___c_TypeInfo);
    byte_438B630 = 1;
  }
  if ( !purchaseResultArray )
    return 0;
  v4 = PurchaseLogic___c_TypeInfo;
  if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v4 = PurchaseLogic___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__40_0,
      v7,
      Method_PurchaseLogic___c__IsServerCommitedPurchase_b__40_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__);
    v8 = PurchaseLogic___c_TypeInfo->static_fields;
    v8->__9__40_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__40_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__40_0,
      (System_Int32_array **)_9__40_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  return System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
           (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
           (System_Func_TSource__bool__o *)_9__40_0,
           (const MethodInfo_1D1CBDC *)Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___);
}


void __fastcall PurchaseLogic__OnDeferred(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  PurchaseLogic_o *v4; // x19
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  System_Action_Uri__o *logOutputAction; // x19

  v4 = this;
  if ( (byte_438B638 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_string__Invoke__);
    this = (PurchaseLogic_o *)sub_B775C4(&StringLiteral_10165/*"OnDeferred product="*/);
    byte_438B638 = 1;
  }
  if ( !product
    || (metadata_k__BackingField = product->fields._metadata_k__BackingField) == 0LL
    || (logOutputAction = (System_Action_Uri__o *)v4->fields._logOutputAction,
        this = (PurchaseLogic_o *)System_String__Concat_44901936(
                                    (System_String_o *)StringLiteral_10165/*"OnDeferred product="*/,
                                    metadata_k__BackingField->fields._localizedTitle_k__BackingField,
                                    0LL),
        !logOutputAction) )
  {
    sub_B7769C(this, product);
  }
  System_Action_Uri___Invoke(
    logOutputAction,
    (System_Uri_o *)this,
    (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
}


void __fastcall PurchaseLogic__OnEndPaymentStore(
        PurchaseLogic_o *this,
        int32_t purchaseResult,
        System_String_o *resultData,
        System_String_o *productId,
        int32_t bankShopId,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  __int64 v12; // x22
  System_String_o *v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_o **v21; // x24
  struct System_Action_string__o *logOutputAction; // x25
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array *v29; // x26
  int32_t *v30; // x0
  System_Int32_array **v31; // x1
  __int64 v32; // x2
  System_String_o *v33; // x28
  System_Int32_array **v34; // x27
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  struct System_Action_string__o *v61; // x20
  System_Collections_Generic_IEnumerable_TSource__o *pendingProducts; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v63; // x21
  WarBoardData_SquareRangeSearch_o *v64; // x0
  UnityEngine_Object_o *Instance; // x21
  Il2CppObject *v66; // x21
  PurchaseLogic_ProductFinishedAction_o *v67; // x22
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  const MethodInfo *v74; // x5
  __int64 v75; // x0
  __int64 v76; // x0
  int32_t chargeStoneNum; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v78; // [xsp+8h] [xbp-58h] BYREF
  int32_t v79; // [xsp+Ch] [xbp-54h] BYREF

  v79 = purchaseResult;
  if ( (byte_438B634 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_string__Invoke__);
    sub_B775C4(&Method_CommonUI_OpenStonePurchaseReciveMenu__);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_Product___);
    sub_B775C4(&Method_System_Func_Product__bool___ctor__);
    sub_B775C4(&System_Func_Product__bool__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PurchaseLogic_ProductFinishedAction_TypeInfo);
    sub_B775C4(&PurchaseBehaviour_Result_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&Method_PurchaseLogic___c__DisplayClass44_0__OnEndPaymentStore_b__0__);
    sub_B775C4(&PurchaseLogic___c__DisplayClass44_0_TypeInfo);
    sub_B775C4(&StringLiteral_16165/*"] "*/);
    sub_B775C4(&StringLiteral_15927/*"[ "*/);
    sub_B775C4(&StringLiteral_11050/*"PurchaseLogic:OnEndPaymentStore result "*/);
    sub_B775C4(&StringLiteral_4360/*"Confirming purchase of "*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438B634 = 1;
  }
  chargeStoneNum = 0;
  v78 = 0;
  v12 = sub_B77694(PurchaseLogic___c__DisplayClass44_0_TypeInfo);
  PurchaseLogic___c__DisplayClass44_0___ctor((PurchaseLogic___c__DisplayClass44_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_43;
  *(_QWORD *)(v12 + 16) = productId;
  v21 = (System_String_o **)(v12 + 16);
  sub_B77560((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)productId, v15, v16, v17, v18, v19, v20);
  logOutputAction = this->fields._logOutputAction;
  v13 = (System_String_o *)sub_B775DC(string___TypeInfo, 5LL);
  if ( !v13 )
    goto LABEL_43;
  v29 = (System_String_array *)v13;
  v30 = (int32_t *)StringLiteral_11050/*"PurchaseLogic:OnEndPaymentStore result "*/;
  if ( StringLiteral_11050/*"PurchaseLogic:OnEndPaymentStore result "*/ )
  {
    v30 = (int32_t *)sub_B77684(StringLiteral_11050/*"PurchaseLogic:OnEndPaymentStore result "*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_44;
    v31 = (System_Int32_array **)StringLiteral_11050/*"PurchaseLogic:OnEndPaymentStore result "*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( !v29->max_length )
    goto LABEL_42;
  v29->m_Items[0] = (System_String_o *)v31;
  sub_B77560((BattleServantConfConponent_o *)v29->m_Items, v31, v23, v24, v25, v26, v27, v28);
  v13 = (System_String_o *)j_il2cpp_value_box_0(PurchaseBehaviour_Result_TypeInfo, &v79, v32);
  if ( !v13 )
    goto LABEL_43;
  v33 = v13;
  v34 = (System_Int32_array **)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))v13->klass->vtable._3_ToString.method)(
                                 v13,
                                 v13->klass->vtable._4_CompareTo.methodPtr);
  v30 = (int32_t *)j_il2cpp_object_unbox_0(v33);
  v79 = *v30;
  if ( v34 )
  {
    v30 = (int32_t *)sub_B77684(v34, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_44;
  }
  if ( v29->max_length <= 1 )
    goto LABEL_42;
  v29->m_Items[1] = (System_String_o *)v34;
  sub_B77560((BattleServantConfConponent_o *)&v29->m_Items[1], v34, v35, v36, v37, v38, v39, v40);
  v30 = (int32_t *)StringLiteral_15927/*"[ "*/;
  if ( StringLiteral_15927/*"[ "*/ )
  {
    v30 = (int32_t *)sub_B77684(StringLiteral_15927/*"[ "*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_44;
    v47 = (System_Int32_array **)StringLiteral_15927/*"[ "*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v29->max_length <= 2 )
    goto LABEL_42;
  v29->m_Items[2] = (System_String_o *)v47;
  sub_B77560((BattleServantConfConponent_o *)&v29->m_Items[2], v47, v41, v42, v43, v44, v45, v46);
  if ( resultData )
  {
    v30 = (int32_t *)sub_B77684(resultData, v29->obj.klass->_1.element_class);
    if ( !v30 )
    {
LABEL_44:
      v76 = sub_B776BC(v30);
      sub_B77668(v76, 0LL);
    }
  }
  if ( v29->max_length <= 3 )
    goto LABEL_42;
  v29->m_Items[3] = resultData;
  sub_B77560(
    (BattleServantConfConponent_o *)&v29->m_Items[3],
    (System_Int32_array **)resultData,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v30 = (int32_t *)StringLiteral_16165/*"] "*/;
  if ( StringLiteral_16165/*"] "*/ )
  {
    v30 = (int32_t *)sub_B77684(StringLiteral_16165/*"] "*/, v29->obj.klass->_1.element_class);
    if ( v30 )
    {
      v60 = (System_Int32_array **)StringLiteral_16165/*"] "*/;
      goto LABEL_26;
    }
    goto LABEL_44;
  }
  v60 = 0LL;
LABEL_26:
  if ( v29->max_length <= 4 )
  {
LABEL_42:
    v75 = sub_B776C8(v30);
    sub_B77668(v75, 0LL);
  }
  v29->m_Items[4] = (System_String_o *)v60;
  sub_B77560((BattleServantConfConponent_o *)&v29->m_Items[4], v60, v54, v55, v56, v57, v58, v59);
  v13 = System_String__Concat_44982964(v29, 0LL);
  if ( !logOutputAction )
    goto LABEL_43;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)v13,
    (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
  if ( (v79 & 0xFFFFFFFE) != 2 )
    goto LABEL_34;
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._20_UpdateMonthlyPurchasePrice.method)(
    this,
    (unsigned int)bankShopId,
    this->klass->vtable._21_GetPrice.methodPtr);
  if ( System_String__op_Inequality(*v21, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    ((void (__fastcall *)(PurchaseLogic_o *, System_String_o *, System_String_o *, Il2CppMethodPointer))this->klass->vtable._24_SendPurchaseAction.method)(
      this,
      *v21,
      transactionId,
      this->klass->vtable._25_OnDeferred.methodPtr);
  v61 = this->fields._logOutputAction;
  v13 = System_String__Concat_44901936((System_String_o *)StringLiteral_4360/*"Confirming purchase of "*/, *v21, 0LL);
  if ( !v61 )
LABEL_43:
    sub_B7769C(v13, v14);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)v61,
    (System_Uri_o *)v13,
    (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
  pendingProducts = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._pendingProducts;
  v63 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_Product__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v63,
    (Il2CppObject *)v12,
    Method_PurchaseLogic___c__DisplayClass44_0__OnEndPaymentStore_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_Product__bool___ctor__);
  v64 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          pendingProducts,
          (System_Func_TSource__bool__o *)v63,
          (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_Product___);
  if ( v64 )
    ((void (__fastcall *)(PurchaseLogic_o *, WarBoardData_SquareRangeSearch_o *, Il2CppMethodPointer))this->klass->vtable._18_ConfirmPurchase.method)(
      this,
      v64,
      this->klass->vtable._19_ExtractReceiptContents.methodPtr);
LABEL_34:
  if ( !this->fields._buyProductFinishedAction && v79 != 3 )
  {
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    {
      v66 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v67 = (PurchaseLogic_ProductFinishedAction_o *)sub_B77694(PurchaseLogic_ProductFinishedAction_TypeInfo);
      PurchaseLogic_ProductFinishedAction___ctor(v67, v66, Method_CommonUI_OpenStonePurchaseReciveMenu__, 0LL);
      this->fields._buyProductFinishedAction = v67;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields._buyProductFinishedAction,
        (System_Int32_array **)v67,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
    }
  }
  chargeStoneNum = 0;
  v78 = 0;
  ((void (__fastcall *)(PurchaseLogic_o *, struct PurchaseByBank_UnityIap_Request_PurchaseResult_array *, int32_t *, int32_t *, Il2CppMethodPointer))this->klass->vtable._22_GetAddedStoneNum.method)(
    this,
    this->fields._purchaseResultArray,
    &v78,
    &chargeStoneNum,
    this->klass->vtable._23_ShowPurchaseFailedNotification.methodPtr);
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, v79, 0, v78, chargeStoneNum, v74);
}


void __fastcall PurchaseLogic__OnEndSendReceiptData(
        PurchaseLogic_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct System_Action_string__o *logOutputAction; // x20
  void *Instance; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray; // x1
  PurchaseLogic_o *v8; // x0
  const MethodInfo *v9; // x2
  System_String_o *return_type; // x20
  const MethodInfo *v11; // x6
  __int64 *v12; // x8
  System_String_o *currentTransactionId; // x5
  int32_t v14; // w1
  _BOOL8 IsServerCommitedPurchase; // x0
  const MethodInfo *v16; // x3
  struct System_Action_string__o *v17; // x21
  int v18; // w21
  System_String_o *v19; // x2
  __int64 *v20; // x8
  System_String_o *v21; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *FirstPurchaseResult; // x0
  int32_t purchasedBankShopId; // w22
  const MethodInfo *Entity; // x0
  const MethodInfo *v25; // x2
  struct PurchaseByBank_UnityIap_Request_PurchaseResult_array *v26; // x27
  int max_length; // w8
  PurchaseLogic_o *v28; // x0
  System_String_o *v29; // x3
  int32_t v30; // w4
  __int64 v31; // x28
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v32; // x8
  int32_t v33; // w23
  const MethodInfo *v34; // x2
  __int64 v35; // x0

  if ( (byte_438B631 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_string__Invoke__);
    sub_B775C4(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_B775C4(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_11534/*"ReceiptError"*/);
    sub_B775C4(&StringLiteral_22039/*"purchaseResultArray is null."*/);
    sub_B775C4(&StringLiteral_7144/*"Google Play canceled on restore purchase"*/);
    sub_B775C4(&StringLiteral_11049/*"PurchaseLogic:EndSendReceiptData ["*/);
    sub_B775C4(&StringLiteral_22177/*"receipt_error"*/);
    sub_B775C4(&StringLiteral_17544/*"canceled_purchase_error"*/);
    sub_B775C4(&StringLiteral_11052/*"PurchaseResult NotFound Error"*/);
    sub_B775C4(&StringLiteral_11053/*"PurchaseResult NotFound."*/);
    sub_B775C4(&StringLiteral_10829/*"PaymentOk"*/);
    sub_B775C4(&StringLiteral_7145/*"Google Play pending on restore purchase"*/);
    sub_B775C4(&StringLiteral_11048/*"PurchaseBehaviour.Result.SUCCESS_WITHOUT_NOTICE _currentTransactionId="*/);
    sub_B775C4(&StringLiteral_6286/*"Error["*/);
    sub_B775C4(&StringLiteral_21899/*"pending_purchase_error"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_5363/*"DeferredPurchaseProductIds"*/);
    sub_B775C4(&StringLiteral_16162/*"]"*/);
    byte_438B631 = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  Instance = System_String__Concat_44904220(
               (System_String_o *)StringLiteral_11049/*"PurchaseLogic:EndSendReceiptData ["*/,
               result,
               (System_String_o *)StringLiteral_16162/*"]"*/,
               0LL);
  if ( !logOutputAction )
    goto LABEL_49;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)Instance,
    (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
  return_type = (System_String_o *)StringLiteral_1/*""*/;
  if ( !result )
    goto LABEL_17;
  if ( !result->fields.m_stringLength )
  {
    purchaseResultArray = this->fields._purchaseResultArray;
    if ( purchaseResultArray )
    {
      IsServerCommitedPurchase = PurchaseLogic__IsServerCommitedPurchase(v8, purchaseResultArray, v9);
      if ( IsServerCommitedPurchase )
      {
        v17 = this->fields._logOutputAction;
        Instance = System_String__Concat_44901936(
                     (System_String_o *)StringLiteral_11048/*"PurchaseBehaviour.Result.SUCCESS_WITHOUT_NOTICE _currentTransactionId="*/,
                     this->fields._currentTransactionId,
                     0LL);
        if ( !v17 )
          goto LABEL_49;
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)v17,
          (System_Uri_o *)Instance,
          (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
        v18 = 3;
LABEL_21:
        FirstPurchaseResult = PurchaseLogic__GetFirstPurchaseResult(
                                (PurchaseLogic_o *)IsServerCommitedPurchase,
                                this->fields._purchaseResultArray,
                                this->fields._currentTransactionId,
                                v16);
        if ( FirstPurchaseResult )
        {
          purchasedBankShopId = FirstPurchaseResult->fields.purchasedBankShopId;
          if ( purchasedBankShopId >= 1 )
          {
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_49;
            Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_BankShopMaster___);
            if ( !Instance )
              goto LABEL_49;
            Entity = (const MethodInfo *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                           purchasedBankShopId,
                                           (const MethodInfo_21FB894 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
            if ( Entity )
            {
              return_type = (System_String_o *)Entity->return_type;
              if ( PurchaseLogic__IsAppleDevice(Entity) )
              {
                Instance = (void *)UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5363/*"DeferredPurchaseProductIds"*/, 0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  v26 = this->fields._purchaseResultArray;
                  if ( v26 )
                  {
                    max_length = v26->max_length;
                    if ( max_length == 1 )
                    {
                      PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(this, return_type, v25);
LABEL_37:
                      StoneCountRefreshComponent__RefreshAllStoneCount(0LL);
                      goto LABEL_38;
                    }
                    if ( max_length < 2 )
                      goto LABEL_37;
                    v31 = 0LL;
                    while ( 1 )
                    {
                      if ( (unsigned int)v31 >= max_length )
                      {
                        v35 = sub_B776C8(Instance);
                        sub_B77668(v35, 0LL);
                      }
                      v32 = v26->m_Items[v31];
                      if ( !v32 )
                        break;
                      v33 = v32->fields.purchasedBankShopId;
                      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !Instance )
                        break;
                      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_BankShopMaster___);
                      if ( !Instance )
                        break;
                      Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                   v33,
                                   (const MethodInfo_21FB894 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
                      if ( Instance )
                        PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(
                          this,
                          *((System_String_o **)Instance + 4),
                          v34);
                      max_length = v26->max_length;
                      if ( (int)++v31 >= max_length )
                        goto LABEL_37;
                    }
LABEL_49:
                    sub_B7769C(Instance, purchaseResultArray);
                  }
                }
              }
              if ( UnityEngine_Application__get_platform(0LL) == 11 )
                goto LABEL_37;
            }
LABEL_38:
            currentTransactionId = this->fields._currentTransactionId;
            v28 = this;
            v14 = v18;
            v29 = return_type;
            v19 = (System_String_o *)StringLiteral_10829/*"PaymentOk"*/;
            v30 = purchasedBankShopId;
            goto LABEL_35;
          }
        }
        Instance = this->fields._logErrorOutputAction;
        if ( Instance )
        {
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)Instance,
            (System_Uri_o *)StringLiteral_11053/*"PurchaseResult NotFound."*/,
            (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
          v20 = &StringLiteral_11052/*"PurchaseResult NotFound Error"*/;
          goto LABEL_33;
        }
        goto LABEL_49;
      }
    }
    else
    {
      Instance = this->fields._logErrorOutputAction;
      if ( !Instance )
        goto LABEL_49;
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)Instance,
        (System_Uri_o *)StringLiteral_22039/*"purchaseResultArray is null."*/,
        (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
    }
    v18 = 2;
    goto LABEL_21;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21899/*"pending_purchase_error"*/, 0LL) )
  {
    if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_17544/*"canceled_purchase_error"*/, 0LL) )
    {
      v12 = &StringLiteral_7144/*"Google Play canceled on restore purchase"*/;
      currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
      v14 = 16;
      goto LABEL_14;
    }
    if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22177/*"receipt_error"*/, 0LL) )
    {
      v20 = &StringLiteral_11534/*"ReceiptError"*/;
LABEL_33:
      v19 = (System_String_o *)*v20;
      currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
      v14 = 6;
      goto LABEL_34;
    }
LABEL_17:
    v21 = System_String__Concat_44904220(
            (System_String_o *)StringLiteral_6286/*"Error["*/,
            result,
            (System_String_o *)StringLiteral_16162/*"]"*/,
            0LL);
    currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
    v14 = 6;
    v19 = v21;
    goto LABEL_34;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, __int64, Il2CppMethodPointer))this->klass->vtable._30_SetExistsDeferredPurchase.method)(
    this,
    1LL,
    this->klass->vtable._31_IsDeferredPurchaseExists.methodPtr);
  v12 = &StringLiteral_7145/*"Google Play pending on restore purchase"*/;
  currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
  v14 = 15;
LABEL_14:
  v19 = (System_String_o *)*v12;
LABEL_34:
  v28 = this;
  v29 = return_type;
  v30 = 0;
LABEL_35:
  PurchaseLogic__OnEndPaymentStore(v28, v14, v19, v29, v30, currentTransactionId, v11);
}


void __fastcall PurchaseLogic__OnInitializeFailed(PurchaseLogic_o *this, int32_t error, const MethodInfo *method)
{
  __int64 v5; // x2
  System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x19
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x20
  System_String_o *v10; // x21
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v12; // x20
  System_String_o *v13; // x21
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  v14 = error;
  if ( (byte_438B63A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_string__Invoke__);
    sub_B775C4(&Method_System_Action_string__float__Invoke__);
    sub_B775C4(&UnityEngine_Purchasing_InitializationFailureReason_TypeInfo);
    sub_B775C4(&StringLiteral_10193/*"OnInitializeFailed InitializationFailureReason:"*/);
    byte_438B63A = 1;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.method)(
    this,
    this->klass->vtable._30_SetExistsDeferredPurchase.methodPtr,
    method);
  if ( (unsigned int)error <= 1 )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    v7 = (System_String_o *)j_il2cpp_value_box_0(UnityEngine_Purchasing_InitializationFailureReason_TypeInfo, &v14, v5);
    if ( v7 )
    {
      v9 = v7;
      v10 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))v7->klass->vtable._3_ToString.method)(
                                 v7,
                                 v7->klass->vtable._4_CompareTo.methodPtr);
      v14 = *(_DWORD *)j_il2cpp_object_unbox_0(v9);
      v7 = System_String__Concat_44901936((System_String_o *)StringLiteral_10193/*"OnInitializeFailed InitializationFailureReason:"*/, v10, 0LL);
      if ( logErrorOutputActionSampledByRatio )
      {
        System_Action_string__float___Invoke(
          logErrorOutputActionSampledByRatio,
          v7,
          0.01,
          (const MethodInfo_26AEF20 *)Method_System_Action_string__float__Invoke__);
        return;
      }
    }
LABEL_10:
    sub_B7769C(v7, v8);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v7 = (System_String_o *)j_il2cpp_value_box_0(UnityEngine_Purchasing_InitializationFailureReason_TypeInfo, &v14, v5);
  if ( !v7 )
    goto LABEL_10;
  v12 = v7;
  v13 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))v7->klass->vtable._3_ToString.method)(
                             v7,
                             v7->klass->vtable._4_CompareTo.methodPtr);
  v14 = *(_DWORD *)j_il2cpp_object_unbox_0(v12);
  v7 = System_String__Concat_44901936((System_String_o *)StringLiteral_10193/*"OnInitializeFailed InitializationFailureReason:"*/, v13, 0LL);
  if ( !logErrorOutputAction )
    goto LABEL_10;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logErrorOutputAction,
    (System_Uri_o *)v7,
    (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
}


void __fastcall PurchaseLogic__OnInitialized(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_IStoreController_o *controller,
        UnityEngine_Purchasing_IExtensionProvider_o *extensions,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Action_string__o *logOutputAction; // x0
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct PurchaseLogic_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  PurchaseLogic_o *v23; // x0
  const MethodInfo *v24; // x1
  UnityEngine_Purchasing_IAppleExtensions_o *AppleExtension; // x0
  UnityEngine_Purchasing_IAppleExtensions_o *v26; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v27; // x21
  UnityEngine_Purchasing_IAppleExtensions_c *klass; // x8
  unsigned __int64 v29; // x10
  UnityEngine_Purchasing_IAppleExtensions_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_438B637 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_string__Invoke__);
    sub_B775C4(&Method_System_Action_Product___ctor__);
    sub_B775C4(&System_Action_Product__TypeInfo);
    sub_B775C4(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo);
    sub_B775C4(&PurchaseLogic_TypeInfo);
    sub_B775C4(&StringLiteral_10194/*"OnInitialized: PASS"*/);
    byte_438B637 = 1;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer, UnityEngine_Purchasing_IExtensionProvider_o *, const MethodInfo *))this->klass->vtable._28_EnableCrashReporterOnInitializeSucceeded.method)(
    this,
    this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.methodPtr,
    extensions,
    method);
  logOutputAction = this->fields._logOutputAction;
  if ( !logOutputAction )
    sub_B7769C(0LL, v7);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)StringLiteral_10194/*"OnInitialized: PASS"*/,
    (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
  static_fields = (BattleServantConfConponent_o *)PurchaseLogic_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)controller;
  sub_B77560(static_fields, (System_Int32_array **)controller, v10, v11, v12, v13, v14, v15);
  v16 = PurchaseLogic_TypeInfo->static_fields;
  v16->_storeExtensionProvider = extensions;
  sub_B77560(
    (BattleServantConfConponent_o *)&v16->_storeExtensionProvider,
    (System_Int32_array **)extensions,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  AppleExtension = PurchaseLogic__GetAppleExtension(v23, v24);
  if ( AppleExtension )
  {
    v26 = AppleExtension;
    v27 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_Product__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v27,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._26_OnInitializeFailed.methodPtr,
      (const MethodInfo_26A0868 *)Method_System_Action_Product___ctor__);
    klass = v26->klass;
    if ( *(_WORD *)&v26->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      p_offset = (UnityEngine_Purchasing_IAppleExtensions_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
      {
        ++v29;
        p_offset += 2;
        if ( v29 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(v26, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 2LL);
    }
    (*(void (__fastcall **)(UnityEngine_Purchasing_IAppleExtensions_o *, System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *, _QWORD))p_method)(
      v26,
      v27,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall PurchaseLogic__OnPurchaseFailed(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        int32_t failureReason,
        const MethodInfo *method)
{
  UnityEngine_Purchasing_Product_o *v5; // x21
  PurchaseLogic_o *v6; // x19
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  struct System_String_StaticFields *p_storeSpecificId_k__BackingField; // x8
  System_String_o *Empty; // x22
  const MethodInfo *v10; // x2
  System_Action_Uri__o *logErrorOutputAction; // x20
  __int64 v12; // x2
  Il2CppObject *v13; // x0
  System_Action_Uri__o *v14; // x23
  Il2CppObject *v15; // x0
  UnityEngine_Object_o *Instance; // x23
  Il2CppObject *v17; // x23
  PurchaseLogic_ProductFinishedAction_o *v18; // x24
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  __int64 v26; // x22
  const MethodInfo *v27; // x5
  int32_t v28; // w1
  int32_t v29; // [xsp+8h] [xbp-38h] BYREF
  int v30; // [xsp+Ch] [xbp-34h] BYREF
  System_Decimal_o v31; // 0:x0.16

  v5 = product;
  v6 = this;
  if ( (byte_438B63C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_string__Invoke__);
    sub_B775C4(&Method_CommonUI_OpenStonePurchaseReciveMenu__);
    sub_B775C4(&System_Decimal_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PurchaseLogic_ProductFinishedAction_TypeInfo);
    sub_B775C4(&UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_10227/*"OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}"*/);
    this = (PurchaseLogic_o *)sub_B775C4(&StringLiteral_5346/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/);
    byte_438B63C = 1;
  }
  if ( v5 )
  {
    definition_k__BackingField = v5->fields._definition_k__BackingField;
    if ( !definition_k__BackingField )
      goto LABEL_32;
    p_storeSpecificId_k__BackingField = (struct System_String_StaticFields *)&definition_k__BackingField->fields._storeSpecificId_k__BackingField;
  }
  else
  {
    p_storeSpecificId_k__BackingField = string_TypeInfo->static_fields;
  }
  Empty = p_storeSpecificId_k__BackingField->Empty;
  this = (PurchaseLogic_o *)PurchaseLogic__IsAppleDevice((const MethodInfo *)this);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_13;
  this = (PurchaseLogic_o *)System_String__IsNullOrEmpty(Empty, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_13;
  this = (PurchaseLogic_o *)PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                              this,
                              (const MethodInfo *)product);
  if ( !this )
    goto LABEL_32;
  this = (PurchaseLogic_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                              (WarBoardManager_TaskList_o *)Empty,
                              (const MethodInfo_30536E8 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(v6, Empty, v10);
    logErrorOutputAction = (System_Action_Uri__o *)v6->fields._logErrorOutputAction;
    v30 = 4;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, &v30, v12);
    this = (PurchaseLogic_o *)System_String__Format_44897472(
                                (System_String_o *)StringLiteral_5346/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/,
                                (Il2CppObject *)Empty,
                                v13,
                                0LL);
    if ( !logErrorOutputAction )
      goto LABEL_32;
    System_Action_Uri___Invoke(
      logErrorOutputAction,
      (System_Uri_o *)this,
      (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
    failureReason = 4;
  }
  else
  {
LABEL_13:
    if ( failureReason != 4 )
    {
      v14 = (System_Action_Uri__o *)v6->fields._logErrorOutputAction;
      v29 = failureReason;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, &v29, v10);
      this = (PurchaseLogic_o *)System_String__Format_44897472(
                                  (System_String_o *)StringLiteral_10227/*"OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}"*/,
                                  (Il2CppObject *)Empty,
                                  v15,
                                  0LL);
      if ( !v14 )
        goto LABEL_32;
      System_Action_Uri___Invoke(
        v14,
        (System_Uri_o *)this,
        (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
    }
  }
  if ( !v6->fields._buyProductFinishedAction )
  {
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (PurchaseLogic_o *)UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v17 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v18 = (PurchaseLogic_ProductFinishedAction_o *)sub_B77694(PurchaseLogic_ProductFinishedAction_TypeInfo);
      PurchaseLogic_ProductFinishedAction___ctor(v18, v17, Method_CommonUI_OpenStonePurchaseReciveMenu__, 0LL);
      v6->fields._buyProductFinishedAction = v18;
      sub_B77560(
        (BattleServantConfConponent_o *)&v6->fields._buyProductFinishedAction,
        (System_Int32_array **)v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
  }
  if ( v5 )
  {
    metadata_k__BackingField = v5->fields._metadata_k__BackingField;
    if ( metadata_k__BackingField )
    {
      v26 = *(_QWORD *)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.flags;
      v5 = *(UnityEngine_Purchasing_Product_o **)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.lo;
      if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      }
      *(_QWORD *)&v31.fields.flags = v26;
      *(_QWORD *)&v31.fields.lo = v5;
      LODWORD(v5) = System_Decimal__ToInt32(v31, 0LL);
      goto LABEL_28;
    }
LABEL_32:
    sub_B7769C(this, product);
  }
LABEL_28:
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._23_ShowPurchaseFailedNotification.method)(
    v6,
    (unsigned int)failureReason,
    v6->klass->vtable._24_SendPurchaseAction.methodPtr);
  if ( (unsigned int)failureReason > 6 )
    v28 = 6;
  else
    v28 = dword_331E770[failureReason];
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(v6, v28, (int32_t)v5, 0, 0, v27);
}


int32_t __fastcall PurchaseLogic__ProcessPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_PurchaseEventArgs_o *purchaseEventArgs,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Uri_o *logErrorOutputAction; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **purchasedProduct_k__BackingField; // x1
  UnityEngine_Purchasing_Product_o **v14; // x20
  PurchaseBehaviour_c *v15; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x23
  __int64 v18; // x8
  __int64 v19; // x8
  struct System_Action_string__o *logOutputAction; // x21
  Il2CppObject *v21; // x1
  const MethodInfo *v22; // x2
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  struct System_Action_string__o *v24; // x21
  System_String_o *v25; // x0
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  struct System_Decimal_o localizedPrice_k__BackingField; // [xsp+0h] [xbp-40h] BYREF
  System_Decimal_o v30; // 0:x0.16

  if ( (byte_438B63B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_string__Invoke__);
    sub_B775C4(&Method_BasicHelper_Any_string___);
    sub_B775C4(&Method_System_Func_string__bool___ctor__);
    sub_B775C4(&System_Func_string__bool__TypeInfo);
    sub_B775C4(&PurchaseBehaviour_TypeInfo);
    sub_B775C4(&Method_PurchaseLogic___c__DisplayClass57_0__ProcessPurchase_b__0__);
    sub_B775C4(&PurchaseLogic___c__DisplayClass57_0_TypeInfo);
    sub_B775C4(&StringLiteral_11000/*"ProcessPurchase: product is null"*/);
    sub_B775C4(&StringLiteral_10999/*"ProcessPurchase: PASS. Product: '{0}'"*/);
    sub_B775C4(&StringLiteral_10998/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/);
    sub_B775C4(&StringLiteral_10965/*"Price: "*/);
    byte_438B63B = 1;
  }
  localizedPrice_k__BackingField = (struct System_Decimal_o)0LL;
  v5 = sub_B77694(PurchaseLogic___c__DisplayClass57_0_TypeInfo);
  PurchaseLogic___c__DisplayClass57_0___ctor((PurchaseLogic___c__DisplayClass57_0_o *)v5, 0LL);
  if ( purchaseEventArgs )
  {
    purchasedProduct_k__BackingField = (System_Int32_array **)purchaseEventArgs->fields._purchasedProduct_k__BackingField;
    if ( !v5 )
      goto LABEL_27;
  }
  else
  {
    purchasedProduct_k__BackingField = 0LL;
    if ( !v5 )
      goto LABEL_27;
  }
  *(_QWORD *)(v5 + 16) = purchasedProduct_k__BackingField;
  v14 = (UnityEngine_Purchasing_Product_o **)(v5 + 16);
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), purchasedProduct_k__BackingField, v7, v8, v9, v10, v11, v12);
  if ( *(_QWORD *)(v5 + 16) )
  {
    v15 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v15 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v15->static_fields->ConsumableProductIdCollection;
    v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_string__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v17,
      (Il2CppObject *)v5,
      Method_PurchaseLogic___c__DisplayClass57_0__ProcessPurchase_b__0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_string__bool___ctor__);
    logErrorOutputAction = (System_Uri_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                             ConsumableProductIdCollection,
                                             (System_Func_T__bool__o *)v17,
                                             (const MethodInfo_1C66144 *)Method_BasicHelper_Any_string___);
    v18 = *(_QWORD *)(v5 + 16);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 16);
      if ( v19 )
      {
        logOutputAction = this->fields._logOutputAction;
        v21 = *(Il2CppObject **)(v19 + 16);
        if ( ((unsigned __int8)logErrorOutputAction & 1) == 0 )
        {
          logErrorOutputAction = (System_Uri_o *)System_String__Format((System_String_o *)StringLiteral_10998/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/, v21, 0LL);
          if ( !logOutputAction )
            goto LABEL_27;
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)logOutputAction,
            logErrorOutputAction,
            (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
          goto LABEL_25;
        }
        logErrorOutputAction = (System_Uri_o *)System_String__Format((System_String_o *)StringLiteral_10999/*"ProcessPurchase: PASS. Product: '{0}'"*/, v21, 0LL);
        if ( logOutputAction )
        {
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)logOutputAction,
            logErrorOutputAction,
            (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
          if ( *v14 )
          {
            metadata_k__BackingField = (*v14)->fields._metadata_k__BackingField;
            if ( metadata_k__BackingField )
            {
              v24 = this->fields._logOutputAction;
              *(_QWORD *)&v30.fields.flags = &localizedPrice_k__BackingField;
              *(_QWORD *)&v30.fields.lo = 0LL;
              localizedPrice_k__BackingField = metadata_k__BackingField->fields._localizedPrice_k__BackingField;
              v25 = System_Decimal__ToString(v30, v22);
              logErrorOutputAction = (System_Uri_o *)System_String__Concat_44901936(
                                                       (System_String_o *)StringLiteral_10965/*"Price: "*/,
                                                       v25,
                                                       0LL);
              if ( v24 )
              {
                System_Action_Uri___Invoke(
                  (System_Action_Uri__o *)v24,
                  logErrorOutputAction,
                  (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
                if ( *v14 )
                {
                  logErrorOutputAction = (System_Uri_o *)this->fields._logOutputAction;
                  if ( logErrorOutputAction )
                  {
                    System_Action_Uri___Invoke(
                      (System_Action_Uri__o *)logErrorOutputAction,
                      (System_Uri_o *)(*v14)->fields._receipt_k__BackingField,
                      (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
                    PurchaseLogic__ValidateReceipt(this, *v14, v26);
LABEL_25:
                    PurchaseLogic__AddPendingPurchase(this, *v14, v27);
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_B7769C(logErrorOutputAction, purchasedProduct_k__BackingField);
  }
  logErrorOutputAction = (System_Uri_o *)this->fields._logErrorOutputAction;
  if ( !logErrorOutputAction )
    goto LABEL_27;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logErrorOutputAction,
    (System_Uri_o *)StringLiteral_11000/*"ProcessPurchase: product is null"*/,
    (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
  return 1;
}


void __fastcall PurchaseLogic__PurchaseIfAvailable(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        int32_t price,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x0
  const MethodInfo *v23; // x2
  int32_t CumulativeAmount; // w2
  const MethodInfo *v25; // x5
  NetworkManager_ResultCallbackFunc_o *v26; // x19
  PurchaseLogic_o *v27; // x0
  const MethodInfo *v28; // x2

  if ( (byte_438B625 & 1) == 0 )
  {
    sub_B775C4(&AgeVerificationMenu_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&Method_PurchaseLogic___c__DisplayClass27_0__PurchaseIfAvailable_b__0__);
    sub_B775C4(&PurchaseLogic___c__DisplayClass27_0_TypeInfo);
    byte_438B625 = 1;
  }
  v7 = sub_B77694(PurchaseLogic___c__DisplayClass27_0_TypeInfo);
  PurchaseLogic___c__DisplayClass27_0___ctor((PurchaseLogic___c__DisplayClass27_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B7769C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = product;
  *(_DWORD *)(v7 + 24) = price;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)product, v16, v17, v18, v19, v20, v21);
  if ( PurchaseLogic__IsAppleDevice(v22)
    && PurchaseLogic__IsPendingPurchase(this, *(UnityEngine_Purchasing_Product_o **)(v7 + 32), v23) )
  {
    if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    }
    CumulativeAmount = AgeVerificationMenu__GetCumulativeAmount(0LL);
    PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, 12, CumulativeAmount, 0, 0, v25);
  }
  else
  {
    v26 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v26,
      (Il2CppObject *)v7,
      Method_PurchaseLogic___c__DisplayClass27_0__PurchaseIfAvailable_b__0__,
      0LL);
    PurchaseLogic__RequestGameServerBankStatus(v27, v26, v28);
  }
}


void __fastcall PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(
        PurchaseLogic_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v16; // x21
  PurchaseLogic_o *v17; // x0
  const MethodInfo *v18; // x2

  if ( (byte_438B640 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__RemoveAll__);
    sub_B775C4(&Method_System_Predicate_string___ctor__);
    sub_B775C4(&System_Predicate_string__TypeInfo);
    sub_B775C4(&Method_PurchaseLogic___c__DisplayClass76_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__);
    sub_B775C4(&PurchaseLogic___c__DisplayClass76_0_TypeInfo);
    byte_438B640 = 1;
  }
  v4 = sub_B77694(PurchaseLogic___c__DisplayClass76_0_TypeInfo);
  PurchaseLogic___c__DisplayClass76_0___ctor((PurchaseLogic___c__DisplayClass76_0_o *)v4, 0LL);
  if ( !v4 )
    goto LABEL_7;
  *(_QWORD *)(v4 + 16) = productId;
  sub_B77560((BattleServantConfConponent_o *)(v4 + 16), (System_Int32_array **)productId, v7, v8, v9, v10, v11, v12);
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v4 + 16), 0LL);
  if ( IsNullOrEmpty )
    return;
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)IsNullOrEmpty,
                                                v14);
  v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_string__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v16,
    (Il2CppObject *)v4,
    Method_PurchaseLogic___c__DisplayClass76_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__,
    (const MethodInfo_2C3248C *)Method_System_Predicate_string___ctor__);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
LABEL_7:
    sub_B7769C(v5, v6);
  v17 = (PurchaseLogic_o *)System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
                             (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
                             (System_Predicate_T__o *)v16,
                             (const MethodInfo_3054DE8 *)Method_System_Collections_Generic_List_string__RemoveAll__);
  PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(v17, DeferredPurchaseProductIdsFromPlayerPrefs, v18);
}


void __fastcall PurchaseLogic__RemovePendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0

  if ( (byte_438B62B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Product__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Product__Remove__);
    byte_438B62B = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_8;
  if ( System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
         (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
         (BattleBuffData_BuffData_o *)product,
         (const MethodInfo_2EE2AE4 *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
  {
    pendingProducts = this->fields._pendingProducts;
    if ( pendingProducts )
    {
      System_Collections_Generic_HashSet_BattleBuffData_BuffData___Remove(
        (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
        (BattleBuffData_BuffData_o *)product,
        (const MethodInfo_2EE2C94 *)Method_System_Collections_Generic_HashSet_Product__Remove__);
      return;
    }
LABEL_8:
    sub_B7769C(pendingProducts, product);
  }
}


void __fastcall PurchaseLogic__RequestGameServerBankStatus(
        PurchaseLogic_o *this,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  BankStatusRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v5; // x1

  if ( (byte_438B626 & 1) == 0 )
  {
    sub_B775C4(&Method_NetworkManager_getRequest_BankStatusRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438B626 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (BankStatusRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               callback,
                                                               (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_BankStatusRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B7769C(0LL, v5);
  BankStatusRequest__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
}


void __fastcall PurchaseLogic__RestorePurchases(PurchaseLogic_o *this, const MethodInfo *method)
{
  struct PurchaseLogic_StaticFields *static_fields; // x8
  System_Action_Uri__o *logOutputAction; // x0
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x20
  UnityEngine_Purchasing_IExtensionProvider_c *klass; // x8
  void *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Uri_o *v13; // x1
  const MethodInfo_26A087C *v14; // x2
  struct System_Action_string__o *v15; // x19
  __int64 v16; // x2
  System_Action_Uri__o *v17; // x20
  System_String_o *v18; // x21
  __int64 (__fastcall **v19)(struct UnityEngine_Purchasing_IExtensionProvider_o *, _QWORD); // x0
  __int64 v20; // x20
  System_Action_bool__o *v21; // x21
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  UnityEngine_Purchasing_IAppleExtensions_c **v24; // x11
  __int64 v25; // x0
  int32_t platform; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438B629 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_string__Invoke__);
    sub_B775C4(&Method_System_Action_bool___ctor__);
    sub_B775C4(&System_Action_bool__TypeInfo);
    sub_B775C4(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___);
    sub_B775C4(&Method_PurchaseLogic__RestorePurchases_b__31_0__);
    sub_B775C4(&PurchaseLogic_TypeInfo);
    sub_B775C4(&UnityEngine_RuntimePlatform_TypeInfo);
    sub_B775C4(&StringLiteral_11696/*"RestorePurchases FAIL. Not supported on this platform. Current = "*/);
    sub_B775C4(&StringLiteral_11698/*"RestorePurchases started ..."*/);
    sub_B775C4(&StringLiteral_11695/*"RestorePurchases FAIL. Not initialized."*/);
    byte_438B629 = 1;
  }
  platform = 0;
  if ( (byte_438B623 & 1) == 0 )
  {
    sub_B775C4(&PurchaseLogic_TypeInfo);
    byte_438B623 = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    logOutputAction = (System_Action_Uri__o *)this->fields._logOutputAction;
    if ( !logOutputAction )
      goto LABEL_31;
    v13 = (System_Uri_o *)StringLiteral_11695/*"RestorePurchases FAIL. Not initialized."*/;
    v14 = (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__;
    goto LABEL_18;
  }
  if ( UnityEngine_Application__get_platform(0LL) != 8 && UnityEngine_Application__get_platform(0LL) != 1 )
  {
    v15 = this->fields._logOutputAction;
    platform = UnityEngine_Application__get_platform(0LL);
    logOutputAction = (System_Action_Uri__o *)j_il2cpp_value_box_0(UnityEngine_RuntimePlatform_TypeInfo, &platform, v16);
    if ( !logOutputAction )
      goto LABEL_31;
    v17 = logOutputAction;
    v18 = (System_String_o *)((__int64 (__fastcall *)(System_Action_Uri__o *, Il2CppMethodPointer))logOutputAction->klass->vtable._3_ToString.method)(
                               logOutputAction,
                               logOutputAction->klass->vtable._4_unknown.methodPtr);
    platform = *(_DWORD *)j_il2cpp_object_unbox_0(v17);
    logOutputAction = (System_Action_Uri__o *)System_String__Concat_44901936(
                                                (System_String_o *)StringLiteral_11696/*"RestorePurchases FAIL. Not supported on this platform. Current = "*/,
                                                v18,
                                                0LL);
    if ( !v15 )
      goto LABEL_31;
    v13 = (System_Uri_o *)logOutputAction;
    logOutputAction = (System_Action_Uri__o *)v15;
    v14 = (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__;
LABEL_18:
    System_Action_Uri___Invoke(logOutputAction, v13, v14);
    return;
  }
  logOutputAction = (System_Action_Uri__o *)this->fields._logOutputAction;
  if ( !logOutputAction )
    goto LABEL_31;
  System_Action_Uri___Invoke(
    logOutputAction,
    (System_Uri_o *)StringLiteral_11698/*"RestorePurchases started ..."*/,
    (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    goto LABEL_31;
  klass = storeExtensionProvider->klass;
  v7 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v8 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 3);
  v9 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 36);
  if ( *(_WORD *)&storeExtensionProvider->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v8 )
    {
      ++v10;
      p_offset += 4;
      if ( v10 >= *(unsigned __int16 *)&storeExtensionProvider->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    p_method = (__int64)&klass->vtable[*p_offset + (int)v9].method;
  }
  else
  {
LABEL_15:
    p_method = sub_B0F4C0(storeExtensionProvider, v8, v9);
  }
  v19 = (__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, _QWORD))sub_B77674(
                                                                                                 *(_QWORD *)(p_method + 8),
                                                                                                 v7);
  v20 = (*v19)(storeExtensionProvider, v19);
  v21 = (System_Action_bool__o *)sub_B77694(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v21,
    (Il2CppObject *)this,
    Method_PurchaseLogic__RestorePurchases_b__31_0__,
    (const MethodInfo_269C920 *)Method_System_Action_bool___ctor__);
  if ( !v20 )
LABEL_31:
    sub_B7769C(logOutputAction, method);
  v22 = *(_QWORD *)v20;
  if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
  {
    v23 = 0LL;
    v24 = (UnityEngine_Purchasing_IAppleExtensions_c **)(*(_QWORD *)(v22 + 176) + 8LL);
    while ( *(v24 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      ++v23;
      v24 += 2;
      if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
        goto LABEL_28;
    }
    v25 = v22 + 16LL * (*(_DWORD *)v24 + 1) + 312;
  }
  else
  {
LABEL_28:
    v25 = sub_B0F4C0(v20, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(__int64, System_Action_bool__o *, _QWORD))v25)(v20, v21, *(_QWORD *)(v25 + 8));
}


void __fastcall PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        System_Collections_Generic_List_string__o *deferredPurchaseProductIdList,
        const MethodInfo *method)
{
  __int64 v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **current; // x1
  System_String_o **v14; // x20
  System_String_o *v15; // x0
  PurchaseBehaviour_c *v16; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x23
  System_String_o *v19; // x21
  System_String_o *a; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_438B63E & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_string___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B775C4(&Method_System_Func_string__bool___ctor__);
    sub_B775C4(&System_Func_string__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_B775C4(&PurchaseBehaviour_TypeInfo);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&Method_PurchaseLogic___c__DisplayClass74_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__);
    sub_B775C4(&PurchaseLogic___c__DisplayClass74_0_TypeInfo);
    sub_B775C4(&StringLiteral_1289/*";"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_5363/*"DeferredPurchaseProductIds"*/);
    byte_438B63E = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( deferredPurchaseProductIdList )
  {
    a = (System_String_o *)StringLiteral_1/*""*/;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)deferredPurchaseProductIdList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v22 = v21;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v4 = sub_B77694(PurchaseLogic___c__DisplayClass74_0_TypeInfo);
      PurchaseLogic___c__DisplayClass74_0___ctor((PurchaseLogic___c__DisplayClass74_0_o *)v4, 0LL);
      if ( !v4 )
        sub_B7769C(v5, v6);
      current = (System_Int32_array **)v22.fields.current;
      *(_QWORD *)(v4 + 16) = v22.fields.current;
      v14 = (System_String_o **)(v4 + 16);
      sub_B77560((BattleServantConfConponent_o *)(v4 + 16), current, v7, v8, v9, v10, v11, v12);
      if ( *(_QWORD *)(v4 + 16) )
      {
        v15 = System_String__Trim_44889268(*(System_String_o **)(v4 + 16), 0LL);
        if ( !System_String__op_Equality(v15, string_TypeInfo->static_fields->Empty, 0LL) )
        {
          v16 = PurchaseBehaviour_TypeInfo;
          if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
            v16 = PurchaseBehaviour_TypeInfo;
          }
          ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v16->static_fields->ConsumableProductIdCollection;
          v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_string__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v18,
            (Il2CppObject *)v4,
            Method_PurchaseLogic___c__DisplayClass74_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__,
            (const MethodInfo_29E92C4 *)Method_System_Func_string__bool___ctor__);
          if ( BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                 ConsumableProductIdCollection,
                 (System_Func_T__bool__o *)v18,
                 (const MethodInfo_1C66144 *)Method_BasicHelper_Any_string___) )
          {
            v19 = a;
            if ( System_String__op_Inequality(a, string_TypeInfo->static_fields->Empty, 0LL) )
              v19 = System_String__Concat_44901936(a, (System_String_o *)StringLiteral_1289/*";"*/, 0LL);
            a = System_String__Concat_44901936(v19, *v14, 0LL);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( System_String__IsNullOrEmpty(a, 0LL) )
      UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5363/*"DeferredPurchaseProductIds"*/, 0LL);
    else
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_5363/*"DeferredPurchaseProductIds"*/, a, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall PurchaseLogic__SendPurchaseAction(
        PurchaseLogic_o *this,
        System_String_o *paymentProductId,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v7; // x1
  int v8; // w8
  void *v9; // x21
  unsigned int v10; // w22
  __int64 v11; // x23
  int32_t v12; // w20
  int v13; // w21
  __int64 v14; // x0

  if ( (byte_438B636 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_8437/*"JPY"*/);
    byte_438B636 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = BankShopMaster__GetEnableEntitiyList((BankShopMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_18;
  v8 = *((_DWORD *)Instance + 6);
  v9 = Instance;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
      {
        v14 = sub_B776C8(Instance);
        sub_B77668(v14, 0LL);
      }
      v11 = *((_QWORD *)v9 + (int)v10 + 4);
      if ( !v11 || !paymentProductId )
        goto LABEL_18;
      Instance = (void *)System_String__Equals_44889276(paymentProductId, *(System_String_o **)(v11 + 32), 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        return;
    }
    v12 = *(_DWORD *)(v11 + 16);
    if ( (v12 & 0x80000000) == 0 )
    {
      v13 = *(_DWORD *)(v11 + 52);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Instance )
      {
        AdManager__TrackPurchase(
          (AdManager_o *)Instance,
          v12,
          (double)v13,
          (System_String_o *)StringLiteral_8437/*"JPY"*/,
          transactionId,
          0LL);
        return;
      }
LABEL_18:
      sub_B7769C(Instance, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__SendReceiptData(
        PurchaseLogic_o *this,
        PurchaseLogic_ReceiptContents_o *receiptContents,
        System_String_o *currentTransactionId,
        int32_t storeError,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_o *v12; // x0
  __int64 v13; // x1
  struct System_Action_string__o *logOutputAction; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  NetworkManager_ResultCallbackFunc_o *v21; // x22
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_String_o *receiptBase64Str; // x22
  System_String_o *googleSignatureStr; // x21
  System_String_o *payloadJsonStr; // x23
  PurchaseByBank_UnityIap_Request_o *v26; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v27; // x25
  const MethodInfo *v28; // x6
  struct System_Action_string__o *logErrorOutputAction; // x20
  System_String_o *v30; // x0
  const MethodInfo *v31; // x2
  int64_t UserId; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438B62F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_string__Invoke__);
    sub_B775C4(&Method_System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult_____ctor__);
    sub_B775C4(&System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo);
    sub_B775C4(&Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_PurchaseLogic_OnEndSendReceiptData__);
    sub_B775C4(&Method_PurchaseLogic__SendReceiptData_b__39_0__);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&StringLiteral_23554/*"user_id_error"*/);
    sub_B775C4(&StringLiteral_11051/*"PurchaseLogic:SendReceiptData ["*/);
    sub_B775C4(&StringLiteral_15359/*"UserId error: UserId="*/);
    sub_B775C4(&StringLiteral_16162/*"]"*/);
    byte_438B62F = 1;
  }
  UserId = 0LL;
  this->fields._currentTransactionId = currentTransactionId;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._currentTransactionId,
    (System_Int32_array **)currentTransactionId,
    (System_String_array **)currentTransactionId,
    *(System_String_array ***)&storeError,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( !receiptContents )
    goto LABEL_19;
  logOutputAction = this->fields._logOutputAction;
  v12 = System_String__Concat_44904220(
          (System_String_o *)StringLiteral_11051/*"PurchaseLogic:SendReceiptData ["*/,
          receiptContents->fields.payloadJsonStr,
          (System_String_o *)StringLiteral_16162/*"]"*/,
          0LL);
  if ( !logOutputAction )
    goto LABEL_19;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)v12,
    (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( NetworkManager__get_UserId(0LL) > 0 )
  {
    this->fields._purchaseResultArray = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields._purchaseResultArray, 0LL, v15, v16, v17, v18, v19, v20);
    v21 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      Method_PurchaseLogic_OnEndSendReceiptData__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v21,
                                          (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___);
    receiptBase64Str = receiptContents->fields.receiptBase64Str;
    payloadJsonStr = receiptContents->fields.payloadJsonStr;
    googleSignatureStr = receiptContents->fields.googleSignatureStr;
    v26 = (PurchaseByBank_UnityIap_Request_o *)Request_WarBoardWallAttackRequest;
    v27 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v27,
      (Il2CppObject *)this,
      Method_PurchaseLogic__SendReceiptData_b__39_0__,
      (const MethodInfo_26A0868 *)Method_System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult_____ctor__);
    if ( v26 )
    {
      PurchaseByBank_UnityIap_Request__beginRequest(
        v26,
        receiptBase64Str,
        payloadJsonStr,
        storeError,
        googleSignatureStr,
        (System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____o *)v27,
        v28);
      return;
    }
LABEL_19:
    sub_B7769C(v12, v13);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v30 = System_Int64__ToString((int64_t)&UserId, 0LL);
  v12 = System_String__Concat_44901936((System_String_o *)StringLiteral_15359/*"UserId error: UserId="*/, v30, 0LL);
  if ( !logErrorOutputAction )
    goto LABEL_19;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logErrorOutputAction,
    (System_Uri_o *)v12,
    (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
  PurchaseLogic__OnEndSendReceiptData(this, (System_String_o *)StringLiteral_23554/*"user_id_error"*/, v31);
}


void __fastcall PurchaseLogic__SetAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogic_o *this,
        bool isInitialized,
        const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic__SetCachedObfuscatedAccountId(
        PurchaseLogic_o *this,
        System_String_o *obfuscatedAccountId,
        const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic__SetExistsDeferredPurchase(PurchaseLogic_o *this, bool exists, const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic__SetInitializedWithMismatchedObfuscatedAccountId(
        PurchaseLogic_o *this,
        bool isMismatched,
        const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic__SetObfuscatedAccountId(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_ConfigurationBuilder_o *builder,
        const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic__ShowPurchaseFailedNotification(
        PurchaseLogic_o *this,
        int32_t failureReason,
        const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic__UpdateMonthlyPurchasePrice(
        PurchaseLogic_o *this,
        int32_t bankShopId,
        const MethodInfo *method)
{
  int32_t CumulativeAmount; // w21
  int32_t v6; // w0

  if ( (byte_438B633 & 1) == 0 )
  {
    sub_B775C4(&AgeVerificationMenu_TypeInfo);
    byte_438B633 = 1;
  }
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  }
  CumulativeAmount = AgeVerificationMenu__GetCumulativeAmount(0LL);
  v6 = ((__int64 (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._21_GetPrice.method)(
         this,
         (unsigned int)bankShopId,
         this->klass->vtable._22_GetAddedStoneNum.methodPtr)
     + CumulativeAmount;
  AgeVerificationMenu__SaveCumulativeAmount(v6, 0LL);
}


void __fastcall PurchaseLogic__ValidateReceipt(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  PurchaseLogic_ReceiptContents_o *IsAppleDevice; // x0
  __int64 v6; // x1
  System_String_o *transactionID_k__BackingField; // x21
  PurchaseLogic_ReceiptContents_o *v8; // x20
  const MethodInfo *v9; // x4

  IsAppleDevice = (PurchaseLogic_ReceiptContents_o *)((__int64 (__fastcall *)(PurchaseLogic_o *, UnityEngine_Purchasing_Product_o *, Il2CppMethodPointer))this->klass->vtable._19_ExtractReceiptContents.method)(
                                                       this,
                                                       product,
                                                       this->klass->vtable._20_UpdateMonthlyPurchasePrice.methodPtr);
  if ( !product )
    goto LABEL_7;
  transactionID_k__BackingField = product->fields._transactionID_k__BackingField;
  v8 = IsAppleDevice;
  IsAppleDevice = (PurchaseLogic_ReceiptContents_o *)PurchaseLogic__IsAppleDevice((const MethodInfo *)IsAppleDevice);
  if ( ((unsigned __int8)IsAppleDevice & 1) == 0 )
    goto LABEL_6;
  if ( !v8 )
LABEL_7:
    sub_B7769C(IsAppleDevice, v6);
  if ( v8->fields.isIOSOldStyleReceipt )
    transactionID_k__BackingField = v8->fields.iOSOldStyleTransactionId;
LABEL_6:
  PurchaseLogic__SendReceiptData(this, v8, transactionID_k__BackingField, 0, v9);
}


void __fastcall PurchaseLogic___RestorePurchases_b__31_0(PurchaseLogic_o *this, bool result, const MethodInfo *method)
{
  struct System_Action_string__o *logOutputAction; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  __int64 v7; // x1
  bool v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = result;
  if ( (byte_438B642 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_string__Invoke__);
    sub_B775C4(&StringLiteral_11697/*"RestorePurchases continuing: "*/);
    sub_B775C4(&StringLiteral_822/*". If no further messages, no purchases available to restore."*/);
    byte_438B642 = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  v5 = System_Boolean__ToString((bool)&v8, 0LL);
  v6 = System_String__Concat_44904220(
         (System_String_o *)StringLiteral_11697/*"RestorePurchases continuing: "*/,
         v5,
         (System_String_o *)StringLiteral_822/*". If no further messages, no purchases available to restore."*/,
         0LL);
  if ( !logOutputAction )
    sub_B7769C(v6, v7);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)v6,
    (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
}


void __fastcall PurchaseLogic___SendReceiptData_b__39_0(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._purchaseResultArray = purchaseResultArray;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._purchaseResultArray,
    (System_Int32_array **)purchaseResultArray,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PurchaseLogic__set_BuyProductFinishedAction(
        PurchaseLogic_o *this,
        PurchaseLogic_ProductFinishedAction_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._buyProductFinishedAction = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._buyProductFinishedAction,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PurchaseLogic__set_LogErrorOutputAction(
        PurchaseLogic_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._logErrorOutputAction = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._logErrorOutputAction,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PurchaseLogic__set_LogErrorOutputActionSampledByRatio(
        PurchaseLogic_o *this,
        System_Action_string__float__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._logErrorOutputActionSampledByRatio = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._logErrorOutputActionSampledByRatio,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PurchaseLogic__set_LogOutputAction(
        PurchaseLogic_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._logOutputAction = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._logOutputAction,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic_ProductFinishedAction___ctor(
        PurchaseLogic_ProductFinishedAction_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PurchaseLogic_ProductFinishedAction__BeginInvoke(
        PurchaseLogic_ProductFinishedAction_o *this,
        int32_t purchaseResult,
        int32_t perMonthAmount,
        int32_t freeStoneNum,
        int32_t chargeStoneNum,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11; // x2
  __int64 v12; // x2
  __int64 v13; // x2
  __int64 v15[5]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v16; // [xsp+30h] [xbp-30h] BYREF
  int32_t v17; // [xsp+34h] [xbp-2Ch] BYREF
  int32_t v18; // [xsp+38h] [xbp-28h] BYREF
  int32_t v19; // [xsp+3Ch] [xbp-24h] BYREF

  v18 = perMonthAmount;
  v19 = purchaseResult;
  v17 = freeStoneNum;
  v16 = chargeStoneNum;
  if ( (byte_438B13B & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&PurchaseBehaviour_Result_TypeInfo);
    byte_438B13B = 1;
  }
  v15[4] = 0LL;
  v15[0] = j_il2cpp_value_box_0(PurchaseBehaviour_Result_TypeInfo, &v19, *(_QWORD *)&perMonthAmount);
  v15[1] = j_il2cpp_value_box_0(int_TypeInfo, &v18, v11);
  v15[2] = j_il2cpp_value_box_0(int_TypeInfo, &v17, v12);
  v15[3] = j_il2cpp_value_box_0(int_TypeInfo, &v16, v13);
  return (System_IAsyncResult_o *)sub_B77568(this, v15, callback, object);
}


void __fastcall PurchaseLogic_ProductFinishedAction__EndInvoke(
        PurchaseLogic_ProductFinishedAction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic_ProductFinishedAction__Invoke(
        PurchaseLogic_ProductFinishedAction_o *this,
        int32_t purchaseResult,
        int32_t perMonthAmount,
        int32_t freeStoneNum,
        int32_t chargeStoneNum,
        const MethodInfo *method)
{
  __int64 v6; // x8
  __int64 v10; // x27
  PurchaseLogic_ProductFinishedAction_o **v11; // x28
  __int64 v12; // x21
  unsigned int v13; // w26
  __int64 class_0; // x0
  __int64 v15; // x8
  unsigned int v16; // w25
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  PurchaseLogic_ProductFinishedAction_o *v23; // x8
  __int64 *v24; // x24
  __int64 v25; // x25
  void (__fastcall *v26)(int *, _QWORD, _QWORD, _QWORD, __int64); // x26
  char v27; // w26
  char v28; // w0
  unsigned int v29; // w26
  __int64 v30; // x8
  __int64 v31; // x1
  __int64 v32; // x2
  unsigned __int64 v33; // x10
  _DWORD *v34; // x11
  int v35; // [xsp+4h] [xbp-6Ch] BYREF
  PurchaseLogic_ProductFinishedAction_o *v36; // [xsp+8h] [xbp-68h]
  unsigned int v37; // [xsp+14h] [xbp-5Ch]
  PurchaseLogic_ProductFinishedAction_o *v38; // [xsp+18h] [xbp-58h] BYREF

  v38 = this;
  v37 = purchaseResult;
  v6 = *(_QWORD *)&this[1].fields.method_ptr;
  v36 = this;
  if ( !v6 )
  {
    v11 = &v38;
    v10 = 1LL;
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v6 + 24);
  if ( v10 )
  {
    v11 = (PurchaseLogic_ProductFinishedAction_o **)(v6 + 32);
LABEL_5:
    v12 = 0LL;
    while ( 1 )
    {
      v23 = v11[v12];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(int *, _QWORD, _QWORD, _QWORD, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&purchaseResult);
      if ( (sub_B775F4(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 4 )
        goto LABEL_36;
      v26((int *)v37, (unsigned int)perMonthAmount, (unsigned int)freeStoneNum, (unsigned int)chargeStoneNum, v25);
LABEL_38:
      if ( ++v12 == v10 )
        return;
    }
    if ( !v24 )
    {
      v26(&v35, (unsigned int)perMonthAmount, (unsigned int)freeStoneNum, (unsigned int)chargeStoneNum, v25);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && v36->fields.m_target )
    {
      v27 = sub_B775EC(v25);
      v28 = sub_B779F0(v25);
      if ( (v27 & 1) != 0 )
      {
        v29 = v37;
        if ( (v28 & 1) != 0 )
        {
          v30 = *v24;
          v31 = *(_QWORD *)(v25 + 24);
          v32 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v33 = 0LL;
            v34 = (_DWORD *)(*(_QWORD *)(v30 + 176) + 8LL);
            while ( *((_QWORD *)v34 - 1) != v31 )
            {
              ++v33;
              v34 += 4;
              if ( v33 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v30 + 16LL * (*v34 + (int)v32) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_B0F4C0(v24, v31, v32);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_B77674(v20, v25);
        (*v22)(v24, v29, (unsigned int)perMonthAmount, (unsigned int)freeStoneNum, (unsigned int)chargeStoneNum, v22);
      }
      else
      {
        v13 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v15 = *v24;
          v16 = v37;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v15 + 16LL * (int)(*v18 + v13) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_B0F4C0(v24, class_0, v13);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v19)(
            v24,
            v16,
            (unsigned int)perMonthAmount,
            (unsigned int)freeStoneNum,
            (unsigned int)chargeStoneNum,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*v24
                                                                                    + 16LL
                                                                                    * *(unsigned __int16 *)(v25 + 72)
                                                                                    + 312))(
            v24,
            v37,
            (unsigned int)perMonthAmount,
            (unsigned int)freeStoneNum,
            (unsigned int)chargeStoneNum,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD, __int64))v26)(
      v24,
      v37,
      (unsigned int)perMonthAmount,
      (unsigned int)freeStoneNum,
      (unsigned int)chargeStoneNum,
      v25);
    goto LABEL_38;
  }
}


void __fastcall PurchaseLogic_ReceiptContents___ctor(PurchaseLogic_ReceiptContents_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_StaticFields *v11; // x8
  struct System_String_o *v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_String_StaticFields *v19; // x8
  struct System_String_o *v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_String_StaticFields *v27; // x8
  struct System_String_o *v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_String_StaticFields *v35; // x8
  struct System_String_o *v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_438B13C & 1) == 0 )
  {
    sub_B775C4(&string_TypeInfo);
    byte_438B13C = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.payloadJsonStr = static_fields->Empty;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)Empty, v2, v3, v4, v5, v6, v7);
  v11 = string_TypeInfo->static_fields;
  v12 = v11->Empty;
  this->fields.googleSignatureStr = v11->Empty;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.googleSignatureStr,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = string_TypeInfo->static_fields;
  v20 = v19->Empty;
  this->fields.receiptBase64Str = v19->Empty;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.receiptBase64Str,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = string_TypeInfo->static_fields;
  v28 = v27->Empty;
  this->fields.purchaseToken = v27->Empty;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.purchaseToken,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = string_TypeInfo->static_fields;
  v36 = v35->Empty;
  this->fields.iOSOldStyleTransactionId = v35->Empty;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.iOSOldStyleTransactionId,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogic___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438B137 & 1) == 0 )
  {
    sub_B775C4(&PurchaseLogic___c_TypeInfo);
    byte_438B137 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(PurchaseLogic___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)PurchaseLogic___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall PurchaseLogic___c___ctor(PurchaseLogic___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogic___c____ctor_b__77_0(
        PurchaseLogic___c_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic___c____ctor_b__77_1(
        PurchaseLogic___c_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19

  if ( (byte_438B138 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Debug_TypeInfo);
    sub_B775C4(&StringLiteral_16054/*"[UnityIAP]課金エラー:"*/);
    byte_438B138 = 1;
  }
  v4 = (Il2CppObject *)System_String__Concat_44901936((System_String_o *)StringLiteral_16054/*"[UnityIAP]課金エラー:"*/, str, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError(v4, 0LL);
}


void __fastcall PurchaseLogic___c____ctor_b__77_2(
        PurchaseLogic___c_o *this,
        System_String_o *str,
        float ratio,
        const MethodInfo *method)
{
  float v6; // s0
  System_String_o *v7; // x0
  Il2CppObject *v8; // x19
  float v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = ratio;
  if ( (byte_438B139 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Debug_TypeInfo);
    sub_B775C4(&StringLiteral_16053/*"[UnityIAP]課金エラー(ratio:"*/);
    sub_B775C4(&StringLiteral_685/*"):"*/);
    byte_438B139 = 1;
  }
  v6 = UnityEngine_Random__Range(0.0, 1.0, 0LL);
  if ( v6 < ratio )
  {
    v7 = System_Single__ToString(v6, (const MethodInfo *)&v9);
    v8 = (Il2CppObject *)System_String__Concat_44905348(
                           (System_String_o *)StringLiteral_16053/*"[UnityIAP]課金エラー(ratio:"*/,
                           v7,
                           (System_String_o *)StringLiteral_685/*"):"*/,
                           str,
                           0LL);
    if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError(v8, 0LL);
  }
}


void __fastcall PurchaseLogic___c___CheckBankStatusAndMonthlyLimit_b__29_0(
        PurchaseLogic___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogic___c___CheckBankStatusAndMonthlyLimit_b__29_1(
        PurchaseLogic___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall PurchaseLogic___c___IsServerCommitedPurchase_b__40_0(
        PurchaseLogic___c_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.isCommitedAlready;
}


void __fastcall PurchaseLogic___c__DisplayClass27_0___ctor(
        PurchaseLogic___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogic___c__DisplayClass27_0___PurchaseIfAvailable_b__0(
        PurchaseLogic___c__DisplayClass27_0_o *this,
        System_String_o *requestResultStr,
        const MethodInfo *method)
{
  PurchaseLogic_o *_4__this; // x0
  __int64 v6; // x2
  int32_t v7; // w20
  struct PurchaseLogic_o *v8; // x8
  struct UnityEngine_Purchasing_Product_o *product; // x9
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x9
  System_Action_Uri__o *logOutputAction; // x20
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x20
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  struct UnityEngine_Purchasing_Product_o *v14; // x19
  unsigned __int64 v15; // x10
  UnityEngine_Purchasing_IStoreController_c **p_offset; // x11
  __int64 p_method; // x0
  struct PurchaseLogic_o *v18; // x8
  System_Action_Uri__o *logErrorOutputAction; // x20
  PurchaseLogic_o *v20; // x21
  System_String_o *v21; // x22
  int v22; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438B13A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_string__Invoke__);
    sub_B775C4(&AgeVerificationMenu_TypeInfo);
    sub_B775C4(&UnityEngine_Purchasing_IStoreController_TypeInfo);
    sub_B775C4(&PurchaseLogic_PurchaseAvailablilty_TypeInfo);
    sub_B775C4(&PurchaseLogic_TypeInfo);
    sub_B775C4(&StringLiteral_11055/*"Purchasing product asychronously: '{0}'"*/);
    sub_B775C4(&StringLiteral_15109/*"Unexpected PurchaseAvailablilty value: "*/);
    byte_438B13A = 1;
  }
  v22 = 0;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_29:
    sub_B7769C(_4__this, requestResultStr);
  _4__this = (PurchaseLogic_o *)PurchaseLogic__CheckBankStatusAndMonthlyLimit(
                                  _4__this,
                                  requestResultStr,
                                  this->fields.price,
                                  0LL);
  v22 = (int)_4__this;
  v7 = 9;
  switch ( (int)_4__this )
  {
    case 1:
      v8 = this->fields.__4__this;
      if ( !v8 )
        goto LABEL_29;
      product = this->fields.product;
      if ( !product )
        goto LABEL_29;
      definition_k__BackingField = product->fields._definition_k__BackingField;
      if ( !definition_k__BackingField )
        goto LABEL_29;
      logOutputAction = (System_Action_Uri__o *)v8->fields._logOutputAction;
      _4__this = (PurchaseLogic_o *)System_String__Format(
                                      (System_String_o *)StringLiteral_11055/*"Purchasing product asychronously: '{0}'"*/,
                                      (Il2CppObject *)definition_k__BackingField->fields._id_k__BackingField,
                                      0LL);
      if ( !logOutputAction )
        goto LABEL_29;
      System_Action_Uri___Invoke(
        logOutputAction,
        (System_Uri_o *)_4__this,
        (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
      storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
      if ( !storeController )
        goto LABEL_29;
      klass = storeController->klass;
      v14 = this->fields.product;
      if ( !*(_WORD *)&storeController->klass->_2.bitflags1 )
        goto LABEL_14;
      v15 = 0LL;
      p_offset = (UnityEngine_Purchasing_IStoreController_c **)&klass->_1.interfaceOffsets->offset;
      break;
    case 2:
      v7 = 8;
      goto LABEL_21;
    case 3:
      goto LABEL_21;
    case 4:
      goto LABEL_20;
    default:
      v18 = this->fields.__4__this;
      if ( !v18 )
        goto LABEL_29;
      logErrorOutputAction = (System_Action_Uri__o *)v18->fields._logErrorOutputAction;
      _4__this = (PurchaseLogic_o *)j_il2cpp_value_box_0(PurchaseLogic_PurchaseAvailablilty_TypeInfo, &v22, v6);
      if ( !_4__this )
        goto LABEL_29;
      v20 = _4__this;
      v21 = (System_String_o *)((__int64 (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))_4__this->klass->vtable._3_ToString.method)(
                                 _4__this,
                                 _4__this->klass->vtable._4_OnInitializeFailed.methodPtr);
      v22 = *(_DWORD *)j_il2cpp_object_unbox_0(v20);
      _4__this = (PurchaseLogic_o *)System_String__Concat_44901936((System_String_o *)StringLiteral_15109/*"Unexpected PurchaseAvailablilty value: "*/, v21, 0LL);
      if ( !logErrorOutputAction )
        goto LABEL_29;
      System_Action_Uri___Invoke(
        logErrorOutputAction,
        (System_Uri_o *)_4__this,
        (const MethodInfo_26A087C *)Method_System_Action_string__Invoke__);
LABEL_20:
      v7 = 6;
LABEL_21:
      if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
      }
      _4__this = (PurchaseLogic_o *)AgeVerificationMenu__GetCumulativeAmount(0LL);
      if ( !this->fields.__4__this )
        goto LABEL_29;
      PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this->fields.__4__this, v7, (int32_t)_4__this, 0, 0, 0LL);
      return;
  }
  while ( *(p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
  {
    ++v15;
    p_offset += 2;
    if ( v15 >= *(unsigned __int16 *)&storeController->klass->_2.bitflags1 )
    {
LABEL_14:
      p_method = sub_B0F4C0(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 1LL);
      goto LABEL_28;
    }
  }
  p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
LABEL_28:
  (*(void (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, struct UnityEngine_Purchasing_Product_o *, _QWORD))p_method)(
    storeController,
    v14,
    *(_QWORD *)(p_method + 8));
}


void __fastcall PurchaseLogic___c__DisplayClass42_0___ctor(
        PurchaseLogic___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogic___c__DisplayClass42_0___GetFirstPurchaseResult_b__0(
        PurchaseLogic___c__DisplayClass42_0_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return System_String__op_Equality(x->fields.transactionId, this->fields.transactionId, 0LL);
}


void __fastcall PurchaseLogic___c__DisplayClass44_0___ctor(
        PurchaseLogic___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogic___c__DisplayClass44_0___OnEndPaymentStore_b__0(
        PurchaseLogic___c__DisplayClass44_0_o *this,
        UnityEngine_Purchasing_Product_o *p,
        const MethodInfo *method)
{
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8

  if ( !p )
    return 0;
  definition_k__BackingField = p->fields._definition_k__BackingField;
  if ( !definition_k__BackingField )
    sub_B7769C(this, p);
  return System_String__op_Equality(definition_k__BackingField->fields._id_k__BackingField, this->fields.productId, 0LL);
}


void __fastcall PurchaseLogic___c__DisplayClass57_0___ctor(
        PurchaseLogic___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogic___c__DisplayClass57_0___ProcessPurchase_b__0(
        PurchaseLogic___c__DisplayClass57_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  struct UnityEngine_Purchasing_Product_o *product; // x8
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8

  product = this->fields.product;
  if ( !product || (definition_k__BackingField = product->fields._definition_k__BackingField) == 0LL )
    sub_B7769C(this, id);
  return System_String__Equals_44960752(definition_k__BackingField->fields._id_k__BackingField, id, 4, 0LL);
}


void __fastcall PurchaseLogic___c__DisplayClass74_0___ctor(
        PurchaseLogic___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogic___c__DisplayClass74_0___SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0(
        PurchaseLogic___c__DisplayClass74_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  return System_String__Equals_44960752(id, this->fields.idStr, 4, 0LL);
}


void __fastcall PurchaseLogic___c__DisplayClass76_0___ctor(
        PurchaseLogic___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogic___c__DisplayClass76_0___RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0(
        PurchaseLogic___c__DisplayClass76_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  return System_String__op_Equality(id, this->fields.productId, 0LL);
}