void __fastcall PurchaseLogic___ctor(PurchaseLogic_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  PurchaseLogic___c_c *v35; // x0
  struct PurchaseLogic___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__77_0; // x20
  Il2CppObject *v38; // x21
  struct PurchaseLogic___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  PurchaseLogic___c_c *v53; // x0
  struct PurchaseLogic___c_StaticFields *v54; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__77_1; // x20
  Il2CppObject *v56; // x21
  struct PurchaseLogic___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  PurchaseLogic___c_c *v71; // x0
  struct PurchaseLogic___c_StaticFields *v72; // x8
  System_Action_string__float__o *_9__77_2; // x20
  Il2CppObject *v74; // x21
  struct PurchaseLogic___c_StaticFields *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7

  if ( (byte_421451C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string___ctor__, method);
    sub_B0D8A4(&System_Action_string__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Action_string__float___ctor__, v5);
    sub_B0D8A4(&System_Action_string__float__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Product___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_HashSet_Product__TypeInfo, v8);
    sub_B0D8A4(&Method_PurchaseLogic___c___ctor_b__77_0__, v9);
    sub_B0D8A4(&Method_PurchaseLogic___c___ctor_b__77_1__, v10);
    sub_B0D8A4(&Method_PurchaseLogic___c___ctor_b__77_2__, v11);
    sub_B0D8A4(&PurchaseLogic___c_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_421451C = 1;
  }
  v14 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                             System_Collections_Generic_HashSet_Product__TypeInfo,
                                                                             method,
                                                                             v2);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v14,
    (const MethodInfo_2C7B9D8 *)Method_System_Collections_Generic_HashSet_Product___ctor__);
  this->fields._pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)v14;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._currentTransactionId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields._currentTransactionId, v21, v22, v23, v24, v25, v26, v27);
  v35 = PurchaseLogic___c_TypeInfo;
  if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v35 = PurchaseLogic___c_TypeInfo;
  }
  static_fields = v35->static_fields;
  _9__77_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__77_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                      System_Action_string__TypeInfo,
                                                                                      v28,
                                                                                      v29);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__77_0,
      v38,
      Method_PurchaseLogic___c___ctor_b__77_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_string___ctor__);
    v39 = PurchaseLogic___c_TypeInfo->static_fields;
    v39->__9__77_0 = (struct System_Action_string__o *)_9__77_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v39->__9__77_0,
      (System_Int32_array **)_9__77_0,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  this->fields._logOutputAction = (struct System_Action_string__o *)_9__77_0;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._logOutputAction,
    (System_Int32_array **)_9__77_0,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v53 = PurchaseLogic___c_TypeInfo;
  if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v53 = PurchaseLogic___c_TypeInfo;
  }
  v54 = v53->static_fields;
  _9__77_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v54->__9__77_1;
  if ( !_9__77_1 )
  {
    if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v54 = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v56 = (Il2CppObject *)v54->__9;
    _9__77_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                      System_Action_string__TypeInfo,
                                                                                      v46,
                                                                                      v47);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__77_1,
      v56,
      Method_PurchaseLogic___c___ctor_b__77_1__,
      (const MethodInfo_246EA3C *)Method_System_Action_string___ctor__);
    v57 = PurchaseLogic___c_TypeInfo->static_fields;
    v57->__9__77_1 = (struct System_Action_string__o *)_9__77_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v57->__9__77_1,
      (System_Int32_array **)_9__77_1,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  this->fields._logErrorOutputAction = (struct System_Action_string__o *)_9__77_1;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._logErrorOutputAction,
    (System_Int32_array **)_9__77_1,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v71 = PurchaseLogic___c_TypeInfo;
  if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v71 = PurchaseLogic___c_TypeInfo;
  }
  v72 = v71->static_fields;
  _9__77_2 = v72->__9__77_2;
  if ( !_9__77_2 )
  {
    if ( (BYTE3(v71->vtable._0_Equals.methodPtr) & 4) != 0 && !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71);
      v72 = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v74 = (Il2CppObject *)v72->__9;
    _9__77_2 = (System_Action_string__float__o *)sub_B0D974(System_Action_string__float__TypeInfo, v64, v65);
    System_Action_string__float____ctor(
      _9__77_2,
      v74,
      Method_PurchaseLogic___c___ctor_b__77_2__,
      (const MethodInfo_247D0E0 *)Method_System_Action_string__float___ctor__);
    v75 = PurchaseLogic___c_TypeInfo->static_fields;
    v75->__9__77_2 = _9__77_2;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v75->__9__77_2,
      (System_Int32_array **)_9__77_2,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
  }
  this->fields._logErrorOutputActionSampledByRatio = _9__77_2;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._logErrorOutputActionSampledByRatio,
    (System_Int32_array **)_9__77_2,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogic__AddDeferredPurchaseProductIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  PurchaseLogic_o *v11; // x0
  const MethodInfo *v12; // x2

  if ( (byte_421451A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Distinct_string___, productId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_string___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v5);
    byte_421451A = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(productId, 0LL);
  if ( !IsNullOrEmpty )
  {
    DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                  (PurchaseLogic_o *)IsNullOrEmpty,
                                                  v7);
    if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
      sub_B0D97C(0LL);
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)DeferredPurchaseProductIdsFromPlayerPrefs;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
      (EventMissionProgressRequest_Argument_ProgressData_o *)productId,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
    v10 = System_Linq_Enumerable__Distinct_string_(
            v9,
            (const MethodInfo_1B48A0C *)Method_System_Linq_Enumerable_Distinct_string___);
    v11 = (PurchaseLogic_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                               v10,
                               (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_string___);
    PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(
      v11,
      (System_Collections_Generic_List_string__o *)v11,
      v12);
  }
}


void __fastcall PurchaseLogic__AddPendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0

  if ( (byte_4214505 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Product__Add__, product);
    byte_4214505 = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_B0D97C(0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)pendingProducts,
    (WarBoardAIRoute_RouteData_o *)product,
    (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_Product__Add__);
}


int32_t __fastcall PurchaseLogic__CheckBankStatusAndMonthlyLimit(
        PurchaseLogic_o *this,
        System_String_o *result,
        int32_t price,
        const MethodInfo *method)
{
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
  __int64 v20; // x1
  System_String_o *v21; // x19
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v23; // x22
  struct PurchaseLogic___c_StaticFields **Item; // x0
  System_String_o *v25; // x0
  int32_t v26; // w21
  PurchaseLogic_o *v27; // x0
  const MethodInfo *v28; // x2
  int32_t v29; // w21
  System_String_o *v30; // x0
  int32_t v31; // w20
  System_String_o *v32; // x0
  CommonUI_o *Instance; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  struct PurchaseLogic___c_StaticFields *static_fields; // x8
  System_Action_o *_9__29_0; // x22
  Il2CppObject *v38; // x21
  struct PurchaseLogic___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  CommonUI_o *v46; // x20
  __int64 v47; // x1
  __int64 v48; // x2
  struct PurchaseLogic___c_StaticFields *v49; // x8
  System_Action_o *_9__29_1; // x21
  Il2CppObject *v51; // x22
  struct PurchaseLogic___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7

  if ( (byte_4214502 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, result);
    sub_B0D8A4(&AgeVerificationMenu_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_B0D8A4(&JsonManager_TypeInfo, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B0D8A4(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__29_0__, v13);
    sub_B0D8A4(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__29_1__, v14);
    sub_B0D8A4(&PurchaseLogic___c_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_12423/*"STONE_PURCHASE_RESULT_BLOCK"*/, v16);
    sub_B0D8A4(&StringLiteral_21523/*"perMonthAmount"*/, v17);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v18);
    sub_B0D8A4(&StringLiteral_20536/*"message"*/, v19);
    sub_B0D8A4(&StringLiteral_16646/*"bankAvailable"*/, v20);
    byte_4214502 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12423/*"STONE_PURCHASE_RESULT_BLOCK"*/, 0LL);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
    goto LABEL_39;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0LL);
  v23 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary;
  if ( !Dictionary
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Dictionary,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21523/*"perMonthAmount"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    goto LABEL_39;
  }
  Item = (struct PurchaseLogic___c_StaticFields **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                     v23,
                                                     (System_Type_o *)StringLiteral_21523/*"perMonthAmount"*/,
                                                     (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_57;
  v25 = (System_String_o *)((__int64 (__fastcall *)(struct PurchaseLogic___c_StaticFields **, struct System_Action_string__o *))(*Item)[6].__9__40_0)(
                             Item,
                             (*Item)[6].__9__77_0);
  v26 = System_Int32__Parse(v25, 0LL);
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  }
  AgeVerificationMenu__SaveCumulativeAmount(v26, 0LL);
  if ( !PurchaseLogic__IsLimitOver(v27, v26 + price, v28) )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v23,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_16646/*"bankAvailable"*/,
           (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (struct PurchaseLogic___c_StaticFields **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                         v23,
                                                         (System_Type_o *)StringLiteral_16646/*"bankAvailable"*/,
                                                         (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_57;
      v30 = (System_String_o *)((__int64 (__fastcall *)(struct PurchaseLogic___c_StaticFields **, struct System_Action_string__o *))(*Item)[6].__9__40_0)(
                                 Item,
                                 (*Item)[6].__9__77_0);
      v31 = System_Int32__Parse(v30, 0LL);
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v23,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_20536/*"message"*/,
             (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (struct PurchaseLogic___c_StaticFields **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                           v23,
                                                           (System_Type_o *)StringLiteral_20536/*"message"*/,
                                                           (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_57;
        v32 = (System_String_o *)((__int64 (__fastcall *)(struct PurchaseLogic___c_StaticFields **, struct System_Action_string__o *))(*Item)[6].__9__40_0)(
                                   Item,
                                   (*Item)[6].__9__77_0);
        v21 = v32;
        if ( !v31 )
        {
          if ( !System_String__IsNullOrEmpty(v32, 0LL) )
          {
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                v38 = (Il2CppObject *)static_fields->__9;
                _9__29_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v34, v35);
                System_Action___ctor(
                  _9__29_0,
                  v38,
                  Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__29_0__,
                  0LL);
                v39 = PurchaseLogic___c_TypeInfo->static_fields;
                v39->__9__29_0 = _9__29_0;
                sub_B0D840(
                  (BattleServantConfConponent_o *)&v39->__9__29_0,
                  (System_Int32_array **)_9__29_0,
                  v40,
                  v41,
                  v42,
                  v43,
                  v44,
                  v45);
              }
              if ( Instance )
              {
                v29 = 1;
                CommonUI__OpenNotificationDialog(Instance, 0LL, v21, _9__29_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
                return v29;
              }
LABEL_57:
              sub_B0D97C(Item);
            }
          }
          return 1;
        }
      }
      else if ( !v31 )
      {
        return 1;
      }
    }
LABEL_39:
    if ( !System_String__IsNullOrEmpty(v21, 0LL) )
    {
      v46 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v46, 0LL, 0LL) )
      {
        Item = (struct PurchaseLogic___c_StaticFields **)PurchaseLogic___c_TypeInfo;
        if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
          Item = (struct PurchaseLogic___c_StaticFields **)PurchaseLogic___c_TypeInfo;
        }
        v49 = Item[23];
        _9__29_1 = v49->__9__29_1;
        if ( !_9__29_1 )
        {
          if ( (*((_BYTE *)Item + 307) & 4) != 0 && !*((_DWORD *)Item + 56) )
          {
            j_il2cpp_runtime_class_init_0(Item);
            v49 = PurchaseLogic___c_TypeInfo->static_fields;
          }
          v51 = (Il2CppObject *)v49->__9;
          _9__29_1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v47, v48);
          System_Action___ctor(_9__29_1, v51, Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__29_1__, 0LL);
          v52 = PurchaseLogic___c_TypeInfo->static_fields;
          v52->__9__29_1 = _9__29_1;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v52->__9__29_1,
            (System_Int32_array **)_9__29_1,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58);
        }
        if ( !v46 )
          goto LABEL_57;
        CommonUI__OpenNotificationDialog(v46, 0LL, v21, _9__29_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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
    return dword_32037C0[failureReason];
}


void __fastcall PurchaseLogic__ConfirmPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x20
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  unsigned __int64 v11; // x10
  UnityEngine_Purchasing_IStoreController_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4214508 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Product__Contains__, product);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Product__Remove__, v5);
    sub_B0D8A4(&UnityEngine_Purchasing_IStoreController_TypeInfo, v6);
    sub_B0D8A4(&PurchaseLogic_TypeInfo, v7);
    byte_4214508 = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_15;
  if ( !System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
          (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
          (BattleBuffData_BuffData_o *)product,
          (const MethodInfo_2C7C05C *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
    return;
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts
    || (pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)System_Collections_Generic_HashSet_BattleBuffData_BuffData___Remove(
                                                                                    (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
                                                                                    (BattleBuffData_BuffData_o *)product,
                                                                                    (const MethodInfo_2C7C20C *)Method_System_Collections_Generic_HashSet_Product__Remove__),
        (storeController = PurchaseLogic_TypeInfo->static_fields->_storeController) == 0LL) )
  {
LABEL_15:
    sub_B0D97C(pendingProducts);
  }
  klass = storeController->klass;
  if ( *(_WORD *)&storeController->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = (UnityEngine_Purchasing_IStoreController_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      ++v11;
      p_offset += 2;
      if ( v11 >= *(unsigned __int16 *)&storeController->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AA67A0(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 2LL);
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
  sub_B0D840(
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

  if ( (byte_4214509 & 1) == 0 )
  {
    sub_B0D8A4(&PurchaseLogic_ReceiptContents_TypeInfo, product);
    byte_4214509 = 1;
  }
  v3 = (PurchaseLogic_ReceiptContents_o *)sub_B0D974(PurchaseLogic_ReceiptContents_TypeInfo, product, method);
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
          sub_B0D97C(this);
        }
      }
      v8 = sub_B0D9A8(this);
      sub_B0D948(v8, 0LL);
    }
  }
}


UnityEngine_Purchasing_IAppleExtensions_o *__fastcall PurchaseLogic__GetAppleExtension(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  _BOOL8 IsAppleDevice; // x0
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x19
  UnityEngine_Purchasing_IExtensionProvider_c *klass; // x8
  void *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 (__fastcall **v13)(struct UnityEngine_Purchasing_IExtensionProvider_o *, _QWORD); // x0

  if ( (byte_4214514 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___, method);
    this = (PurchaseLogic_o *)sub_B0D8A4(&PurchaseLogic_TypeInfo, v2);
    byte_4214514 = 1;
  }
  if ( !PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider )
    return 0LL;
  IsAppleDevice = PurchaseLogic__IsAppleDevice((const MethodInfo *)this);
  if ( !IsAppleDevice )
    return 0LL;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_B0D97C(IsAppleDevice);
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
    p_method = sub_AA67A0(storeExtensionProvider, v7, v8);
  }
  v13 = (__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, _QWORD))sub_B0D954(
                                                                                                 *(_QWORD *)(p_method + 8),
                                                                                                 v6);
  return (UnityEngine_Purchasing_IAppleExtensions_o *)(*v13)(storeExtensionProvider, v13);
}


UnityEngine_Purchasing_ConfigurationBuilder_o *__fastcall PurchaseLogic__GetConfigurationBuilder(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  UnityEngine_Purchasing_Extension_IPurchasingModule_o *v3; // x19
  _QWORD **v4; // x21
  __int64 v5; // x20
  __int16 v6; // w8
  __int64 v7; // x20
  __int64 v8; // x20
  __int64 v9; // x20

  if ( (byte_42144FD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_IPurchasingModule___, method);
    sub_B0D8A4(&UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo, v2);
    byte_42144FD = 1;
  }
  if ( (BYTE3(UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo);
  }
  v3 = (UnityEngine_Purchasing_Extension_IPurchasingModule_o *)UnityEngine_Purchasing_StandardPurchasingModule__Instance(0LL);
  v4 = (_QWORD **)Method_System_Array_Empty_IPurchasingModule___;
  v5 = **((_QWORD **)Method_System_Array_Empty_IPurchasingModule___ + 6);
  v6 = *(_WORD *)(v5 + 306);
  if ( (v6 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_IPurchasingModule___ + 6));
    v6 = *(_WORD *)(v5 + 306);
  }
  if ( (v6 & 0x400) != 0 )
  {
    v7 = *v4[6];
    if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
      sub_AA65A4(*v4[6]);
    if ( !*(_DWORD *)(v7 + 224) )
    {
      v8 = *v4[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AA65A4(*v4[6]);
      j_il2cpp_runtime_class_init_0(v8);
    }
  }
  v9 = *v4[6];
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AA65A4(*v4[6]);
  return UnityEngine_Purchasing_ConfigurationBuilder__Instance(
           v3,
           **(UnityEngine_Purchasing_Extension_IPurchasingModule_array ***)(v9 + 184),
           0LL);
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *String; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  System_Char_array *v10; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  __int64 v14; // x0

  if ( (byte_4214518 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_string___, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_B0D8A4(&string_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_5242/*"DeferredPurchaseProductIds"*/, v6);
    byte_4214518 = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_5242/*"DeferredPurchaseProductIds"*/,
             string_TypeInfo->static_fields->Empty,
             0LL);
  if ( System_String__op_Inequality(String, string_TypeInfo->static_fields->Empty, 0LL) )
  {
    v10 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !v10 )
      goto LABEL_10;
    if ( !v10->max_length )
    {
      v14 = sub_B0D9A8(v10);
      sub_B0D948(v14, 0LL);
    }
    v10->m_Items[2] = 59;
    if ( !String )
LABEL_10:
      sub_B0D97C(v10);
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String, v10, 0LL);
    return (System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                          v11,
                                                          (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_string___);
  }
  else
  {
    v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_string__TypeInfo,
                                                                                                    v8,
                                                                                                    v9);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v12,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  }
  return (System_Collections_Generic_List_string__o *)v12;
}


PurchaseByBank_UnityIap_Request_PurchaseResult_o *__fastcall PurchaseLogic__GetFirstPurchaseResult(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  __int64 v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20

  if ( (byte_421450D & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____67989320,
      purchaseResultArray);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___, v6);
    sub_B0D8A4(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_PurchaseLogic___c__DisplayClass42_0__GetFirstPurchaseResult_b__0__, v9);
    sub_B0D8A4(&PurchaseLogic___c__DisplayClass42_0_TypeInfo, v10);
    byte_421450D = 1;
  }
  v11 = sub_B0D974(PurchaseLogic___c__DisplayClass42_0_TypeInfo, purchaseResultArray, transactionId);
  PurchaseLogic___c__DisplayClass42_0___ctor((PurchaseLogic___c__DisplayClass42_0_o *)v11, 0LL);
  if ( !v11 )
    sub_B0D97C(v12);
  *(_QWORD *)(v11 + 16) = transactionId;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v11 + 16),
    (System_Int32_array **)transactionId,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !purchaseResultArray )
    return 0LL;
  if ( !PurchaseLogic__IsAppleDevice(v19) )
    return System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
             (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
             (const MethodInfo_1B4B938 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___);
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo,
                                                                             v20,
                                                                             v21);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v11,
    Method_PurchaseLogic___c__DisplayClass42_0__GetFirstPurchaseResult_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__);
  return (PurchaseByBank_UnityIap_Request_PurchaseResult_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                               (System_Func_TSource__bool__o *)v22,
                                                               (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____67989320);
}


PurchaseLogic_o *__fastcall PurchaseLogic__GetInstance(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  PurchaseLogic_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_42144FB & 1) == 0 )
  {
    sub_B0D8A4(&PurchaseLogicAndroid_TypeInfo, v1);
    byte_42144FB = 1;
  }
  v3 = (PurchaseLogic_o *)sub_B0D974(PurchaseLogicAndroid_TypeInfo, v1, v2);
  PurchaseLogic___ctor(v3, v4);
  return v3;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PurchaseLogic__GetPrice(PurchaseLogic_o *this, int32_t bankShopId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  WarEntity_o *Entity; // x0
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  v14 = bankShopId;
  if ( (byte_4214510 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string__Invoke__, *(_QWORD *)&bankShopId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BankShopMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_6045/*"Entity is not found. bankShopId="*/, v8);
    byte_4214510 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             bankShopId,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
  if ( Entity )
    return Entity->fields.priority;
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v13 = System_Int32__ToString((int32_t)&v14, 0LL);
  Instance = (DataManager_o *)System_String__Concat_43849904((System_String_o *)StringLiteral_6045/*"Entity is not found. bankShopId="*/, v13, 0LL);
  if ( !logErrorOutputAction )
LABEL_9:
    sub_B0D97C(Instance);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logErrorOutputAction,
    (System_Uri_o *)Instance,
    (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
  return 0;
}


void __fastcall PurchaseLogic__InitializePurchasingFramework(PurchaseLogic_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct PurchaseLogic_StaticFields *static_fields; // x8
  UnityEngine_Purchasing_ConfigurationBuilder_o *v8; // x20
  PurchaseBehaviour_c *v9; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ConsumableProductIdCollection; // x0
  _BOOL8 v11; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42144FC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v5);
    sub_B0D8A4(&PurchaseBehaviour_TypeInfo, v6);
    byte_42144FC = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( (byte_42144FE & 1) == 0 )
  {
    sub_B0D8A4(&PurchaseLogic_TypeInfo, method);
    byte_42144FE = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    ((void (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))this->klass->vtable._27_DisableCrashReporterOnInitialize.method)(
      this,
      this->klass->vtable._28_EnableCrashReporterOnInitializeSucceeded.methodPtr);
    v8 = (UnityEngine_Purchasing_ConfigurationBuilder_o *)((__int64 (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))this->klass->vtable._10_GetConfigurationBuilder.method)(
                                                            this,
                                                            this->klass->vtable._11_SetObfuscatedAccountId.methodPtr);
    ((void (__fastcall *)(PurchaseLogic_o *, UnityEngine_Purchasing_ConfigurationBuilder_o *, Il2CppMethodPointer))this->klass->vtable._11_SetObfuscatedAccountId.method)(
      this,
      v8,
      this->klass->vtable._12_SetCachedObfuscatedAccountId.methodPtr);
    ((void (__fastcall *)(PurchaseLogic_o *, __int64, Il2CppMethodPointer))this->klass->vtable._15_SetAlreadyInitializedWithObfuscatedAccountId.method)(
      this,
      1LL,
      this->klass->vtable._16_IsInitializedWithMismatchedObfuscatedAccountId.methodPtr);
    v9 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v9 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v9->static_fields->ConsumableProductIdCollection;
    if ( !ConsumableProductIdCollection )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      ConsumableProductIdCollection,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
      if ( !v11 )
        break;
      if ( !v8 )
        sub_B0D97C(v11);
      UnityEngine_Purchasing_ConfigurationBuilder__AddProduct(v8, (System_String_o *)v12.fields.current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    UnityEngine_Purchasing_UnityPurchasing__Initialize((UnityEngine_Purchasing_IStoreListener_o *)this, v8, 0LL);
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
    sub_B0D97C(this);
  PurchaseLogic__InitiatePurchase_24388380(
    this,
    bankShop->fields.googleShopId,
    bankShop->fields.googlePrice,
    finishedAction,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__InitiatePurchase_24388380(
        PurchaseLogic_o *this,
        System_String_o *productId,
        int32_t price,
        PurchaseLogic_ProductFinishedAction_o *finishedAction,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  struct PurchaseLogic_StaticFields *static_fields; // x8
  System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x0
  const MethodInfo *v23; // x5
  int32_t v24; // w1
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x22
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 *v30; // x8
  struct UnityEngine_Purchasing_IStoreController_o *v31; // x22
  UnityEngine_Purchasing_IStoreController_c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  UnityEngine_Purchasing_Product_o *v36; // x0
  const MethodInfo *v37; // x3

  if ( (byte_42144FF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string__Invoke__, productId);
    sub_B0D8A4(&Method_System_Action_string__float__Invoke__, v12);
    sub_B0D8A4(&UnityEngine_Purchasing_IStoreController_TypeInfo, v13);
    sub_B0D8A4(&PurchaseLogic_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_7645/*"InitiatePurchase: FAIL. PurchasingFramework not initialized."*/, v15);
    sub_B0D8A4(&StringLiteral_7646/*"InitiatePurchase: FAIL. StoreController is null."*/, v16);
    sub_B0D8A4(&StringLiteral_7644/*"InitiatePurchase: FAIL. Not purchasing product, either is not found or is not available for purchase"*/, v17);
    sub_B0D8A4(&StringLiteral_7647/*"InitiatePurchase: FAIL. StoreController.products is null."*/, v18);
    sub_B0D8A4(&StringLiteral_7648/*"InitiatePurchase: Initialized With Mismatched ObfuscatedAccountId."*/, v19);
    byte_42144FF = 1;
  }
  this->fields._buyProductFinishedAction = finishedAction;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._buyProductFinishedAction,
    (System_Int32_array **)finishedAction,
    *(System_String_array ***)&price,
    (System_String_array **)finishedAction,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( (byte_42144FE & 1) == 0 )
  {
    sub_B0D8A4(&PurchaseLogic_TypeInfo, v20);
    byte_42144FE = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( logErrorOutputActionSampledByRatio )
    {
      System_Action_string__float___Invoke(
        logErrorOutputActionSampledByRatio,
        (System_String_o *)StringLiteral_7645/*"InitiatePurchase: FAIL. PurchasingFramework not initialized."*/,
        0.01,
        (const MethodInfo_247D0F4 *)Method_System_Action_string__float__Invoke__);
      v24 = 10;
      goto LABEL_33;
    }
LABEL_39:
    sub_B0D97C(logErrorOutputActionSampledByRatio);
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
        (System_Uri_o *)StringLiteral_7648/*"InitiatePurchase: Initialized With Mismatched ObfuscatedAccountId."*/,
        (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
      v24 = 13;
LABEL_33:
      PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, v24, 0, 0, 0, v23);
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
    v30 = &StringLiteral_7646/*"InitiatePurchase: FAIL. StoreController is null."*/;
LABEL_30:
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)logErrorOutputActionSampledByRatio,
      (System_Uri_o *)*v30,
      (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
LABEL_31:
    logErrorOutputActionSampledByRatio = (System_Action_string__float__o *)this->fields._logErrorOutputAction;
    if ( logErrorOutputActionSampledByRatio )
    {
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)logErrorOutputActionSampledByRatio,
        (System_Uri_o *)StringLiteral_7644/*"InitiatePurchase: FAIL. Not purchasing product, either is not found or is not available for purchase"*/,
        (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
      v24 = 11;
      goto LABEL_33;
    }
    goto LABEL_39;
  }
  klass = storeController->klass;
  if ( *(_WORD *)&storeController->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IStoreController_c **)p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      ++v27;
      p_offset += 4;
      if ( v27 >= *(unsigned __int16 *)&storeController->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_AA67A0(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
  }
  logErrorOutputActionSampledByRatio = (System_Action_string__float__o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))p_method)(
                                                                           storeController,
                                                                           *(_QWORD *)(p_method + 8));
  if ( !logErrorOutputActionSampledByRatio )
  {
    logErrorOutputActionSampledByRatio = (System_Action_string__float__o *)this->fields._logErrorOutputAction;
    if ( !logErrorOutputActionSampledByRatio )
      goto LABEL_39;
    v30 = &StringLiteral_7647/*"InitiatePurchase: FAIL. StoreController.products is null."*/;
    goto LABEL_30;
  }
  v31 = PurchaseLogic_TypeInfo->static_fields->_storeController;
  if ( !v31 )
    goto LABEL_39;
  v32 = v31->klass;
  if ( *(_WORD *)&v31->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IStoreController_c **)v34 - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&v31->klass->_2.bitflags1 )
        goto LABEL_27;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_27:
    v35 = sub_AA67A0(v31, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
  }
  logErrorOutputActionSampledByRatio = (System_Action_string__float__o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))v35)(
                                                                           v31,
                                                                           *(_QWORD *)(v35 + 8));
  if ( !logErrorOutputActionSampledByRatio )
    goto LABEL_39;
  v36 = UnityEngine_Purchasing_ProductCollection__WithID(
          (UnityEngine_Purchasing_ProductCollection_o *)logErrorOutputActionSampledByRatio,
          productId,
          0LL);
  if ( !v36 || !v36->fields._availableToPurchase_k__BackingField )
    goto LABEL_31;
  PurchaseLogic__PurchaseIfAvailable(this, v36, price, v37);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall PurchaseLogic__IsLimitOver(PurchaseLogic_o *this, int32_t value, const MethodInfo *method)
{
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  int32_t Limit; // w0

  if ( (byte_4214503 & 1) == 0 )
  {
    sub_B0D8A4(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&value);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v4);
    byte_4214503 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
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

  if ( (byte_4214507 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Product__Contains__, prodcut);
    byte_4214507 = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_B0D97C(0LL);
  return System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
           (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
           (BattleBuffData_BuffData_o *)prodcut,
           (const MethodInfo_2C7C05C *)Method_System_Collections_Generic_HashSet_Product__Contains__);
}


bool __fastcall PurchaseLogic__IsPurchasingFrameworkInitialized(PurchaseLogic_o *this, const MethodInfo *method)
{
  struct PurchaseLogic_StaticFields *static_fields; // x8

  if ( (byte_42144FE & 1) == 0 )
  {
    sub_B0D8A4(&PurchaseLogic_TypeInfo, method);
    byte_42144FE = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  return static_fields->_storeController && static_fields->_storeExtensionProvider != 0LL;
}


bool __fastcall PurchaseLogic__IsServerCommitedPurchase(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  PurchaseLogic___c_c *v8; // x0
  struct PurchaseLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__40_0; // x20
  Il2CppObject *v11; // x21
  struct PurchaseLogic___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_421450B & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___,
      purchaseResultArray);
    sub_B0D8A4(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__, v4);
    sub_B0D8A4(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v5);
    sub_B0D8A4(&Method_PurchaseLogic___c__IsServerCommitedPurchase_b__40_0__, v6);
    sub_B0D8A4(&PurchaseLogic___c_TypeInfo, v7);
    byte_421450B = 1;
  }
  if ( !purchaseResultArray )
    return 0;
  v8 = PurchaseLogic___c_TypeInfo;
  if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v8 = PurchaseLogic___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo,
                                                                                    purchaseResultArray,
                                                                                    method);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__40_0,
      v11,
      Method_PurchaseLogic___c__IsServerCommitedPurchase_b__40_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__);
    v12 = PurchaseLogic___c_TypeInfo->static_fields;
    v12->__9__40_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__40_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v12->__9__40_0,
      (System_Int32_array **)_9__40_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  return System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
           (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
           (System_Func_TSource__bool__o *)_9__40_0,
           (const MethodInfo_171872C *)Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___);
}


void __fastcall PurchaseLogic__OnDeferred(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  PurchaseLogic_o *v4; // x19
  __int64 v5; // x1
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  System_Action_Uri__o *logOutputAction; // x19

  v4 = this;
  if ( (byte_4214513 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string__Invoke__, product);
    this = (PurchaseLogic_o *)sub_B0D8A4(&StringLiteral_10007/*"OnDeferred product="*/, v5);
    byte_4214513 = 1;
  }
  if ( !product
    || (metadata_k__BackingField = product->fields._metadata_k__BackingField) == 0LL
    || (logOutputAction = (System_Action_Uri__o *)v4->fields._logOutputAction,
        this = (PurchaseLogic_o *)System_String__Concat_43849904(
                                    (System_String_o *)StringLiteral_10007/*"OnDeferred product="*/,
                                    metadata_k__BackingField->fields._localizedTitle_k__BackingField,
                                    0LL),
        !logOutputAction) )
  {
    sub_B0D97C(this);
  }
  System_Action_Uri___Invoke(
    logOutputAction,
    (System_Uri_o *)this,
    (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__OnEndPaymentStore(
        PurchaseLogic_o *this,
        int32_t purchaseResult,
        System_String_o *resultData,
        System_String_o *productId,
        int32_t bankShopId,
        System_String_o *transactionId,
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x22
  System_String_o *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_o **v36; // x24
  struct System_Action_string__o *logOutputAction; // x25
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array *v44; // x26
  int32_t *v45; // x0
  System_Int32_array **v46; // x1
  System_String_o *v47; // x28
  System_Int32_array **v48; // x27
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x1
  struct System_Action_string__o *v75; // x20
  System_Collections_Generic_IEnumerable_TSource__o *pendingProducts; // x20
  __int64 v77; // x1
  __int64 v78; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v79; // x21
  WarBoardData_SquareRangeSearch_o *v80; // x0
  UnityEngine_Object_o *Instance; // x21
  Il2CppObject *v82; // x21
  __int64 v83; // x1
  __int64 v84; // x2
  PurchaseLogic_ProductFinishedAction_o *v85; // x22
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  const MethodInfo *v92; // x5
  __int64 v93; // x0
  __int64 v94; // x0
  int32_t chargeStoneNum; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v96; // [xsp+8h] [xbp-58h] BYREF
  int32_t v97; // [xsp+Ch] [xbp-54h] BYREF

  v97 = purchaseResult;
  if ( (byte_421450F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string__Invoke__, *(_QWORD *)&purchaseResult);
    sub_B0D8A4(&Method_CommonUI_OpenStonePurchaseReciveMenu__, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_Product___, v13);
    sub_B0D8A4(&Method_System_Func_Product__bool___ctor__, v14);
    sub_B0D8A4(&System_Func_Product__bool__TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&PurchaseLogic_ProductFinishedAction_TypeInfo, v17);
    sub_B0D8A4(&PurchaseBehaviour_Result_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_B0D8A4(&string___TypeInfo, v20);
    sub_B0D8A4(&Method_PurchaseLogic___c__DisplayClass44_0__OnEndPaymentStore_b__0__, v21);
    sub_B0D8A4(&PurchaseLogic___c__DisplayClass44_0_TypeInfo, v22);
    sub_B0D8A4(&StringLiteral_15920/*"] "*/, v23);
    sub_B0D8A4(&StringLiteral_15683/*"[ "*/, v24);
    sub_B0D8A4(&StringLiteral_10866/*"PurchaseLogic:OnEndPaymentStore result "*/, v25);
    sub_B0D8A4(&StringLiteral_4243/*"Confirming purchase of "*/, v26);
    sub_B0D8A4(&StringLiteral_1/*""*/, v27);
    byte_421450F = 1;
  }
  chargeStoneNum = 0;
  v96 = 0;
  v28 = sub_B0D974(PurchaseLogic___c__DisplayClass44_0_TypeInfo, *(_QWORD *)&purchaseResult, resultData);
  PurchaseLogic___c__DisplayClass44_0___ctor((PurchaseLogic___c__DisplayClass44_0_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_43;
  *(_QWORD *)(v28 + 16) = productId;
  v36 = (System_String_o **)(v28 + 16);
  sub_B0D840((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)productId, v30, v31, v32, v33, v34, v35);
  logOutputAction = this->fields._logOutputAction;
  v29 = (System_String_o *)sub_B0D8BC(string___TypeInfo, 5LL);
  if ( !v29 )
    goto LABEL_43;
  v44 = (System_String_array *)v29;
  v45 = (int32_t *)StringLiteral_10866/*"PurchaseLogic:OnEndPaymentStore result "*/;
  if ( StringLiteral_10866/*"PurchaseLogic:OnEndPaymentStore result "*/ )
  {
    v45 = (int32_t *)sub_B0D964(StringLiteral_10866/*"PurchaseLogic:OnEndPaymentStore result "*/, v44->obj.klass->_1.element_class);
    if ( !v45 )
      goto LABEL_44;
    v46 = (System_Int32_array **)StringLiteral_10866/*"PurchaseLogic:OnEndPaymentStore result "*/;
  }
  else
  {
    v46 = 0LL;
  }
  if ( !v44->max_length )
    goto LABEL_42;
  v44->m_Items[0] = (System_String_o *)v46;
  sub_B0D840((BattleServantConfConponent_o *)v44->m_Items, v46, v38, v39, v40, v41, v42, v43);
  v29 = (System_String_o *)j_il2cpp_value_box_0(PurchaseBehaviour_Result_TypeInfo, &v97);
  if ( !v29 )
    goto LABEL_43;
  v47 = v29;
  v48 = (System_Int32_array **)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))v29->klass->vtable._3_ToString.method)(
                                 v29,
                                 v29->klass->vtable._4_CompareTo.methodPtr);
  v45 = (int32_t *)j_il2cpp_object_unbox_0(v47);
  v97 = *v45;
  if ( v48 )
  {
    v45 = (int32_t *)sub_B0D964(v48, v44->obj.klass->_1.element_class);
    if ( !v45 )
      goto LABEL_44;
  }
  if ( v44->max_length <= 1 )
    goto LABEL_42;
  v44->m_Items[1] = (System_String_o *)v48;
  sub_B0D840((BattleServantConfConponent_o *)&v44->m_Items[1], v48, v49, v50, v51, v52, v53, v54);
  v45 = (int32_t *)StringLiteral_15683/*"[ "*/;
  if ( StringLiteral_15683/*"[ "*/ )
  {
    v45 = (int32_t *)sub_B0D964(StringLiteral_15683/*"[ "*/, v44->obj.klass->_1.element_class);
    if ( !v45 )
      goto LABEL_44;
    v61 = (System_Int32_array **)StringLiteral_15683/*"[ "*/;
  }
  else
  {
    v61 = 0LL;
  }
  if ( v44->max_length <= 2 )
    goto LABEL_42;
  v44->m_Items[2] = (System_String_o *)v61;
  sub_B0D840((BattleServantConfConponent_o *)&v44->m_Items[2], v61, v55, v56, v57, v58, v59, v60);
  if ( resultData )
  {
    v45 = (int32_t *)sub_B0D964(resultData, v44->obj.klass->_1.element_class);
    if ( !v45 )
    {
LABEL_44:
      v94 = sub_B0D99C(v45);
      sub_B0D948(v94, 0LL);
    }
  }
  if ( v44->max_length <= 3 )
    goto LABEL_42;
  v44->m_Items[3] = resultData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v44->m_Items[3],
    (System_Int32_array **)resultData,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v45 = (int32_t *)StringLiteral_15920/*"] "*/;
  if ( StringLiteral_15920/*"] "*/ )
  {
    v45 = (int32_t *)sub_B0D964(StringLiteral_15920/*"] "*/, v44->obj.klass->_1.element_class);
    if ( v45 )
    {
      v74 = (System_Int32_array **)StringLiteral_15920/*"] "*/;
      goto LABEL_26;
    }
    goto LABEL_44;
  }
  v74 = 0LL;
LABEL_26:
  if ( v44->max_length <= 4 )
  {
LABEL_42:
    v93 = sub_B0D9A8(v45);
    sub_B0D948(v93, 0LL);
  }
  v44->m_Items[4] = (System_String_o *)v74;
  sub_B0D840((BattleServantConfConponent_o *)&v44->m_Items[4], v74, v68, v69, v70, v71, v72, v73);
  v29 = System_String__Concat_43930028(v44, 0LL);
  if ( !logOutputAction )
    goto LABEL_43;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)v29,
    (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
  if ( (v97 & 0xFFFFFFFE) != 2 )
    goto LABEL_34;
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._20_UpdateMonthlyPurchasePrice.method)(
    this,
    (unsigned int)bankShopId,
    this->klass->vtable._21_GetPrice.methodPtr);
  if ( System_String__op_Inequality(*v36, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    ((void (__fastcall *)(PurchaseLogic_o *, System_String_o *, System_String_o *, Il2CppMethodPointer))this->klass->vtable._24_SendPurchaseAction.method)(
      this,
      *v36,
      transactionId,
      this->klass->vtable._25_OnDeferred.methodPtr);
  v75 = this->fields._logOutputAction;
  v29 = System_String__Concat_43849904((System_String_o *)StringLiteral_4243/*"Confirming purchase of "*/, *v36, 0LL);
  if ( !v75 )
LABEL_43:
    sub_B0D97C(v29);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)v75,
    (System_Uri_o *)v29,
    (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
  pendingProducts = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._pendingProducts;
  v79 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_Product__bool__TypeInfo,
                                                                             v77,
                                                                             v78);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v79,
    (Il2CppObject *)v28,
    Method_PurchaseLogic___c__DisplayClass44_0__OnEndPaymentStore_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_Product__bool___ctor__);
  v80 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          pendingProducts,
          (System_Func_TSource__bool__o *)v79,
          (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_Product___);
  if ( v80 )
    ((void (__fastcall *)(PurchaseLogic_o *, WarBoardData_SquareRangeSearch_o *, Il2CppMethodPointer))this->klass->vtable._18_ConfirmPurchase.method)(
      this,
      v80,
      this->klass->vtable._19_ExtractReceiptContents.methodPtr);
LABEL_34:
  if ( !this->fields._buyProductFinishedAction && v97 != 3 )
  {
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    {
      v82 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v85 = (PurchaseLogic_ProductFinishedAction_o *)sub_B0D974(PurchaseLogic_ProductFinishedAction_TypeInfo, v83, v84);
      PurchaseLogic_ProductFinishedAction___ctor(v85, v82, Method_CommonUI_OpenStonePurchaseReciveMenu__, 0LL);
      this->fields._buyProductFinishedAction = v85;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields._buyProductFinishedAction,
        (System_Int32_array **)v85,
        v86,
        v87,
        v88,
        v89,
        v90,
        v91);
    }
  }
  chargeStoneNum = 0;
  v96 = 0;
  ((void (__fastcall *)(PurchaseLogic_o *, struct PurchaseByBank_UnityIap_Request_PurchaseResult_array *, int32_t *, int32_t *, Il2CppMethodPointer))this->klass->vtable._22_GetAddedStoneNum.method)(
    this,
    this->fields._purchaseResultArray,
    &v96,
    &chargeStoneNum,
    this->klass->vtable._23_ShowPurchaseFailedNotification.methodPtr);
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, v97, 0, v96, chargeStoneNum, v92);
}


void __fastcall PurchaseLogic__OnEndSendReceiptData(
        PurchaseLogic_o *this,
        System_String_o *result,
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  struct System_Action_string__o *logOutputAction; // x20
  void *Instance; // x0
  PurchaseLogic_o *v26; // x0
  const MethodInfo *v27; // x2
  System_String_o *return_type; // x20
  const MethodInfo *v29; // x6
  __int64 *v30; // x8
  System_String_o *currentTransactionId; // x5
  int32_t v32; // w1
  PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray; // x1
  _BOOL8 IsServerCommitedPurchase; // x0
  const MethodInfo *v35; // x3
  struct System_Action_string__o *v36; // x21
  int v37; // w21
  System_String_o *v38; // x2
  __int64 *v39; // x8
  System_String_o *v40; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *FirstPurchaseResult; // x0
  int32_t purchasedBankShopId; // w22
  const MethodInfo *Entity; // x0
  const MethodInfo *v44; // x2
  struct PurchaseByBank_UnityIap_Request_PurchaseResult_array *v45; // x27
  int max_length; // w8
  PurchaseLogic_o *v47; // x0
  System_String_o *v48; // x3
  int32_t v49; // w4
  __int64 v50; // x28
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v51; // x8
  int32_t v52; // w23
  const MethodInfo *v53; // x2
  __int64 v54; // x0

  if ( (byte_421450C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string__Invoke__, result);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BankShopMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_11346/*"ReceiptError"*/, v8);
    sub_B0D8A4(&StringLiteral_21653/*"purchaseResultArray is null."*/, v9);
    sub_B0D8A4(&StringLiteral_7010/*"Google Play canceled on restore purchase"*/, v10);
    sub_B0D8A4(&StringLiteral_10865/*"PurchaseLogic:EndSendReceiptData ["*/, v11);
    sub_B0D8A4(&StringLiteral_21787/*"receipt_error"*/, v12);
    sub_B0D8A4(&StringLiteral_17253/*"canceled_purchase_error"*/, v13);
    sub_B0D8A4(&StringLiteral_10868/*"PurchaseResult NotFound Error"*/, v14);
    sub_B0D8A4(&StringLiteral_10869/*"PurchaseResult NotFound."*/, v15);
    sub_B0D8A4(&StringLiteral_10654/*"PaymentOk"*/, v16);
    sub_B0D8A4(&StringLiteral_7011/*"Google Play pending on restore purchase"*/, v17);
    sub_B0D8A4(&StringLiteral_10864/*"PurchaseBehaviour.Result.SUCCESS_WITHOUT_NOTICE _currentTransactionId="*/, v18);
    sub_B0D8A4(&StringLiteral_6155/*"Error["*/, v19);
    sub_B0D8A4(&StringLiteral_21521/*"pending_purchase_error"*/, v20);
    sub_B0D8A4(&StringLiteral_1/*""*/, v21);
    sub_B0D8A4(&StringLiteral_5242/*"DeferredPurchaseProductIds"*/, v22);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v23);
    byte_421450C = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  Instance = System_String__Concat_43852188(
               (System_String_o *)StringLiteral_10865/*"PurchaseLogic:EndSendReceiptData ["*/,
               result,
               (System_String_o *)StringLiteral_15917/*"]"*/,
               0LL);
  if ( !logOutputAction )
    goto LABEL_49;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)Instance,
    (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
  return_type = (System_String_o *)StringLiteral_1/*""*/;
  if ( !result )
    goto LABEL_17;
  if ( !result->fields.m_stringLength )
  {
    purchaseResultArray = this->fields._purchaseResultArray;
    if ( purchaseResultArray )
    {
      IsServerCommitedPurchase = PurchaseLogic__IsServerCommitedPurchase(v26, purchaseResultArray, v27);
      if ( IsServerCommitedPurchase )
      {
        v36 = this->fields._logOutputAction;
        Instance = System_String__Concat_43849904(
                     (System_String_o *)StringLiteral_10864/*"PurchaseBehaviour.Result.SUCCESS_WITHOUT_NOTICE _currentTransactionId="*/,
                     this->fields._currentTransactionId,
                     0LL);
        if ( !v36 )
          goto LABEL_49;
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)v36,
          (System_Uri_o *)Instance,
          (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
        v37 = 3;
LABEL_21:
        FirstPurchaseResult = PurchaseLogic__GetFirstPurchaseResult(
                                (PurchaseLogic_o *)IsServerCommitedPurchase,
                                this->fields._purchaseResultArray,
                                this->fields._currentTransactionId,
                                v35);
        if ( FirstPurchaseResult )
        {
          purchasedBankShopId = FirstPurchaseResult->fields.purchasedBankShopId;
          if ( purchasedBankShopId >= 1 )
          {
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_49;
            Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BankShopMaster___);
            if ( !Instance )
              goto LABEL_49;
            Entity = (const MethodInfo *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                           purchasedBankShopId,
                                           (const MethodInfo_2669BD4 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
            if ( Entity )
            {
              return_type = (System_String_o *)Entity->return_type;
              if ( PurchaseLogic__IsAppleDevice(Entity) )
              {
                Instance = (void *)UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5242/*"DeferredPurchaseProductIds"*/, 0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  v45 = this->fields._purchaseResultArray;
                  if ( v45 )
                  {
                    max_length = v45->max_length;
                    if ( max_length == 1 )
                    {
                      PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(this, return_type, v44);
LABEL_37:
                      StoneCountRefreshComponent__RefreshAllStoneCount(0LL);
                      goto LABEL_38;
                    }
                    if ( max_length < 2 )
                      goto LABEL_37;
                    v50 = 0LL;
                    while ( 1 )
                    {
                      if ( (unsigned int)v50 >= max_length )
                      {
                        v54 = sub_B0D9A8(Instance);
                        sub_B0D948(v54, 0LL);
                      }
                      v51 = v45->m_Items[v50];
                      if ( !v51 )
                        break;
                      v52 = v51->fields.purchasedBankShopId;
                      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !Instance )
                        break;
                      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BankShopMaster___);
                      if ( !Instance )
                        break;
                      Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                   v52,
                                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
                      if ( Instance )
                        PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(
                          this,
                          *((System_String_o **)Instance + 4),
                          v53);
                      max_length = v45->max_length;
                      if ( (int)++v50 >= max_length )
                        goto LABEL_37;
                    }
LABEL_49:
                    sub_B0D97C(Instance);
                  }
                }
              }
              if ( UnityEngine_Application__get_platform(0LL) == 11 )
                goto LABEL_37;
            }
LABEL_38:
            currentTransactionId = this->fields._currentTransactionId;
            v47 = this;
            v32 = v37;
            v48 = return_type;
            v38 = (System_String_o *)StringLiteral_10654/*"PaymentOk"*/;
            v49 = purchasedBankShopId;
            goto LABEL_35;
          }
        }
        Instance = this->fields._logErrorOutputAction;
        if ( Instance )
        {
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)Instance,
            (System_Uri_o *)StringLiteral_10869/*"PurchaseResult NotFound."*/,
            (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
          v39 = &StringLiteral_10868/*"PurchaseResult NotFound Error"*/;
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
        (System_Uri_o *)StringLiteral_21653/*"purchaseResultArray is null."*/,
        (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
    }
    v37 = 2;
    goto LABEL_21;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21521/*"pending_purchase_error"*/, 0LL) )
  {
    if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_17253/*"canceled_purchase_error"*/, 0LL) )
    {
      v30 = &StringLiteral_7010/*"Google Play canceled on restore purchase"*/;
      currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
      v32 = 16;
      goto LABEL_14;
    }
    if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21787/*"receipt_error"*/, 0LL) )
    {
      v39 = &StringLiteral_11346/*"ReceiptError"*/;
LABEL_33:
      v38 = (System_String_o *)*v39;
      currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
      v32 = 6;
      goto LABEL_34;
    }
LABEL_17:
    v40 = System_String__Concat_43852188(
            (System_String_o *)StringLiteral_6155/*"Error["*/,
            result,
            (System_String_o *)StringLiteral_15917/*"]"*/,
            0LL);
    currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
    v32 = 6;
    v38 = v40;
    goto LABEL_34;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, __int64, Il2CppMethodPointer))this->klass->vtable._30_SetExistsDeferredPurchase.method)(
    this,
    1LL,
    this->klass->vtable._31_IsDeferredPurchaseExists.methodPtr);
  v30 = &StringLiteral_7011/*"Google Play pending on restore purchase"*/;
  currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
  v32 = 15;
LABEL_14:
  v38 = (System_String_o *)*v30;
LABEL_34:
  v47 = this;
  v48 = return_type;
  v49 = 0;
LABEL_35:
  PurchaseLogic__OnEndPaymentStore(v47, v32, v38, v48, v49, currentTransactionId, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__OnInitializeFailed(PurchaseLogic_o *this, int32_t error, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x19
  System_String_o *v9; // x0
  System_String_o *v10; // x20
  System_String_o *v11; // x21
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v13; // x20
  System_String_o *v14; // x21
  int32_t v15; // [xsp+Ch] [xbp-14h] BYREF

  v15 = error;
  if ( (byte_4214515 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string__Invoke__, *(_QWORD *)&error);
    sub_B0D8A4(&Method_System_Action_string__float__Invoke__, v5);
    sub_B0D8A4(&UnityEngine_Purchasing_InitializationFailureReason_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_10035/*"OnInitializeFailed InitializationFailureReason:"*/, v7);
    byte_4214515 = 1;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.method)(
    this,
    this->klass->vtable._30_SetExistsDeferredPurchase.methodPtr,
    method);
  if ( (unsigned int)error <= 1 )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    v9 = (System_String_o *)j_il2cpp_value_box_0(UnityEngine_Purchasing_InitializationFailureReason_TypeInfo, &v15);
    if ( v9 )
    {
      v10 = v9;
      v11 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                                 v9,
                                 v9->klass->vtable._4_CompareTo.methodPtr);
      v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v10);
      v9 = System_String__Concat_43849904((System_String_o *)StringLiteral_10035/*"OnInitializeFailed InitializationFailureReason:"*/, v11, 0LL);
      if ( logErrorOutputActionSampledByRatio )
      {
        System_Action_string__float___Invoke(
          logErrorOutputActionSampledByRatio,
          v9,
          0.01,
          (const MethodInfo_247D0F4 *)Method_System_Action_string__float__Invoke__);
        return;
      }
    }
LABEL_10:
    sub_B0D97C(v9);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v9 = (System_String_o *)j_il2cpp_value_box_0(UnityEngine_Purchasing_InitializationFailureReason_TypeInfo, &v15);
  if ( !v9 )
    goto LABEL_10;
  v13 = v9;
  v14 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                             v9,
                             v9->klass->vtable._4_CompareTo.methodPtr);
  v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v13);
  v9 = System_String__Concat_43849904((System_String_o *)StringLiteral_10035/*"OnInitializeFailed InitializationFailureReason:"*/, v14, 0LL);
  if ( !logErrorOutputAction )
    goto LABEL_10;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logErrorOutputAction,
    (System_Uri_o *)v9,
    (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
}


void __fastcall PurchaseLogic__OnInitialized(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_IStoreController_o *controller,
        UnityEngine_Purchasing_IExtensionProvider_o *extensions,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Action_string__o *logOutputAction; // x0
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct PurchaseLogic_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  PurchaseLogic_o *v27; // x0
  const MethodInfo *v28; // x1
  UnityEngine_Purchasing_IAppleExtensions_o *AppleExtension; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_Purchasing_IAppleExtensions_o *v32; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v33; // x21
  UnityEngine_Purchasing_IAppleExtensions_c *klass; // x8
  unsigned __int64 v35; // x10
  UnityEngine_Purchasing_IAppleExtensions_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4214512 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string__Invoke__, controller);
    sub_B0D8A4(&Method_System_Action_Product___ctor__, v7);
    sub_B0D8A4(&System_Action_Product__TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v9);
    sub_B0D8A4(&PurchaseLogic_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_10036/*"OnInitialized: PASS"*/, v11);
    byte_4214512 = 1;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer, UnityEngine_Purchasing_IExtensionProvider_o *, const MethodInfo *))this->klass->vtable._28_EnableCrashReporterOnInitializeSucceeded.method)(
    this,
    this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.methodPtr,
    extensions,
    method);
  logOutputAction = this->fields._logOutputAction;
  if ( !logOutputAction )
    sub_B0D97C(0LL);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)StringLiteral_10036/*"OnInitialized: PASS"*/,
    (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
  static_fields = (BattleServantConfConponent_o *)PurchaseLogic_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)controller;
  sub_B0D840(static_fields, (System_Int32_array **)controller, v14, v15, v16, v17, v18, v19);
  v20 = PurchaseLogic_TypeInfo->static_fields;
  v20->_storeExtensionProvider = extensions;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v20->_storeExtensionProvider,
    (System_Int32_array **)extensions,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  AppleExtension = PurchaseLogic__GetAppleExtension(v27, v28);
  if ( AppleExtension )
  {
    v32 = AppleExtension;
    v33 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_Product__TypeInfo,
                                                                                 v30,
                                                                                 v31);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v33,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._26_OnInitializeFailed.methodPtr,
      (const MethodInfo_246EA3C *)Method_System_Action_Product___ctor__);
    klass = v32->klass;
    if ( *(_WORD *)&v32->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      p_offset = (UnityEngine_Purchasing_IAppleExtensions_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
      {
        ++v35;
        p_offset += 2;
        if ( v35 >= *(unsigned __int16 *)&v32->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AA67A0(v32, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 2LL);
    }
    (*(void (__fastcall **)(UnityEngine_Purchasing_IAppleExtensions_o *, System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *, _QWORD))p_method)(
      v32,
      v33,
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
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  struct System_String_StaticFields *p_storeSpecificId_k__BackingField; // x8
  System_String_o *Empty; // x22
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  System_Action_Uri__o *logErrorOutputAction; // x20
  Il2CppObject *v23; // x0
  System_Action_Uri__o *v24; // x23
  Il2CppObject *v25; // x0
  UnityEngine_Object_o *Instance; // x23
  Il2CppObject *v27; // x23
  __int64 v28; // x1
  __int64 v29; // x2
  PurchaseLogic_ProductFinishedAction_o *v30; // x24
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  __int64 v38; // x22
  const MethodInfo *v39; // x5
  int32_t v40; // w1
  int32_t v41; // [xsp+8h] [xbp-38h] BYREF
  int v42; // [xsp+Ch] [xbp-34h] BYREF
  System_Decimal_o v43; // 0:x0.16

  v5 = product;
  v6 = this;
  if ( (byte_4214517 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string__Invoke__, product);
    sub_B0D8A4(&Method_CommonUI_OpenStonePurchaseReciveMenu__, v7);
    sub_B0D8A4(&System_Decimal_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&PurchaseLogic_ProductFinishedAction_TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B0D8A4(&string_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_10069/*"OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}"*/, v15);
    this = (PurchaseLogic_o *)sub_B0D8A4(&StringLiteral_5225/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/, v16);
    byte_4214517 = 1;
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
  this = (PurchaseLogic_o *)PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(this, v20);
  if ( !this )
    goto LABEL_32;
  this = (PurchaseLogic_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                              (WarBoardManager_TaskList_o *)Empty,
                              (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(v6, Empty, v21);
    logErrorOutputAction = (System_Action_Uri__o *)v6->fields._logErrorOutputAction;
    v42 = 4;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, &v42);
    this = (PurchaseLogic_o *)System_String__Format_43845440(
                                (System_String_o *)StringLiteral_5225/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/,
                                (Il2CppObject *)Empty,
                                v23,
                                0LL);
    if ( !logErrorOutputAction )
      goto LABEL_32;
    System_Action_Uri___Invoke(
      logErrorOutputAction,
      (System_Uri_o *)this,
      (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
    failureReason = 4;
  }
  else
  {
LABEL_13:
    if ( failureReason != 4 )
    {
      v24 = (System_Action_Uri__o *)v6->fields._logErrorOutputAction;
      v41 = failureReason;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, &v41);
      this = (PurchaseLogic_o *)System_String__Format_43845440(
                                  (System_String_o *)StringLiteral_10069/*"OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}"*/,
                                  (Il2CppObject *)Empty,
                                  v25,
                                  0LL);
      if ( !v24 )
        goto LABEL_32;
      System_Action_Uri___Invoke(
        v24,
        (System_Uri_o *)this,
        (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
    }
  }
  if ( !v6->fields._buyProductFinishedAction )
  {
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (PurchaseLogic_o *)UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v27 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v30 = (PurchaseLogic_ProductFinishedAction_o *)sub_B0D974(PurchaseLogic_ProductFinishedAction_TypeInfo, v28, v29);
      PurchaseLogic_ProductFinishedAction___ctor(v30, v27, Method_CommonUI_OpenStonePurchaseReciveMenu__, 0LL);
      v6->fields._buyProductFinishedAction = v30;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v6->fields._buyProductFinishedAction,
        (System_Int32_array **)v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
  }
  if ( v5 )
  {
    metadata_k__BackingField = v5->fields._metadata_k__BackingField;
    if ( metadata_k__BackingField )
    {
      v38 = *(_QWORD *)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.flags;
      v5 = *(UnityEngine_Purchasing_Product_o **)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.lo;
      if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      }
      *(_QWORD *)&v43.fields.flags = v38;
      *(_QWORD *)&v43.fields.lo = v5;
      LODWORD(v5) = System_Decimal__ToInt32(v43, 0LL);
      goto LABEL_28;
    }
LABEL_32:
    sub_B0D97C(this);
  }
LABEL_28:
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._23_ShowPurchaseFailedNotification.method)(
    v6,
    (unsigned int)failureReason,
    v6->klass->vtable._24_SendPurchaseAction.methodPtr);
  if ( (unsigned int)failureReason > 6 )
    v40 = 6;
  else
    v40 = dword_32037C0[failureReason];
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(v6, v40, (int32_t)v5, 0, 0, v39);
}


int32_t __fastcall PurchaseLogic__ProcessPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_PurchaseEventArgs_o *purchaseEventArgs,
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
  __int64 v15; // x21
  System_Uri_o *logErrorOutputAction; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **purchasedProduct_k__BackingField; // x1
  UnityEngine_Purchasing_Product_o **v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  PurchaseBehaviour_c *v27; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x23
  __int64 v30; // x8
  __int64 v31; // x8
  struct System_Action_string__o *logOutputAction; // x21
  Il2CppObject *v33; // x1
  const MethodInfo *v34; // x2
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  struct System_Action_string__o *v36; // x21
  System_String_o *v37; // x0
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x2
  struct System_Decimal_o localizedPrice_k__BackingField; // [xsp+0h] [xbp-40h] BYREF
  System_Decimal_o v42; // 0:x0.16

  if ( (byte_4214516 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string__Invoke__, purchaseEventArgs);
    sub_B0D8A4(&Method_BasicHelper_Any_string___, v5);
    sub_B0D8A4(&Method_System_Func_string__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_string__bool__TypeInfo, v7);
    sub_B0D8A4(&PurchaseBehaviour_TypeInfo, v8);
    sub_B0D8A4(&Method_PurchaseLogic___c__DisplayClass57_0__ProcessPurchase_b__0__, v9);
    sub_B0D8A4(&PurchaseLogic___c__DisplayClass57_0_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_10816/*"ProcessPurchase: product is null"*/, v11);
    sub_B0D8A4(&StringLiteral_10815/*"ProcessPurchase: PASS. Product: '{0}'"*/, v12);
    sub_B0D8A4(&StringLiteral_10814/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/, v13);
    sub_B0D8A4(&StringLiteral_10781/*"Price: "*/, v14);
    byte_4214516 = 1;
  }
  localizedPrice_k__BackingField = (struct System_Decimal_o)0LL;
  v15 = sub_B0D974(PurchaseLogic___c__DisplayClass57_0_TypeInfo, purchaseEventArgs, method);
  PurchaseLogic___c__DisplayClass57_0___ctor((PurchaseLogic___c__DisplayClass57_0_o *)v15, 0LL);
  if ( purchaseEventArgs )
  {
    purchasedProduct_k__BackingField = (System_Int32_array **)purchaseEventArgs->fields._purchasedProduct_k__BackingField;
    if ( !v15 )
      goto LABEL_27;
  }
  else
  {
    purchasedProduct_k__BackingField = 0LL;
    if ( !v15 )
      goto LABEL_27;
  }
  *(_QWORD *)(v15 + 16) = purchasedProduct_k__BackingField;
  v24 = (UnityEngine_Purchasing_Product_o **)(v15 + 16);
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 16), purchasedProduct_k__BackingField, v17, v18, v19, v20, v21, v22);
  if ( *(_QWORD *)(v15 + 16) )
  {
    v27 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v27 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v27->static_fields->ConsumableProductIdCollection;
    v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_string__bool__TypeInfo,
                                                                               v25,
                                                                               v26);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v29,
      (Il2CppObject *)v15,
      Method_PurchaseLogic___c__DisplayClass57_0__ProcessPurchase_b__0__,
      (const MethodInfo_26189B8 *)Method_System_Func_string__bool___ctor__);
    logErrorOutputAction = (System_Uri_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                             ConsumableProductIdCollection,
                                             (System_Func_T__bool__o *)v29,
                                             (const MethodInfo_1707138 *)Method_BasicHelper_Any_string___);
    v30 = *(_QWORD *)(v15 + 16);
    if ( v30 )
    {
      v31 = *(_QWORD *)(v30 + 16);
      if ( v31 )
      {
        logOutputAction = this->fields._logOutputAction;
        v33 = *(Il2CppObject **)(v31 + 16);
        if ( ((unsigned __int8)logErrorOutputAction & 1) == 0 )
        {
          logErrorOutputAction = (System_Uri_o *)System_String__Format((System_String_o *)StringLiteral_10814/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/, v33, 0LL);
          if ( !logOutputAction )
            goto LABEL_27;
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)logOutputAction,
            logErrorOutputAction,
            (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
          goto LABEL_25;
        }
        logErrorOutputAction = (System_Uri_o *)System_String__Format((System_String_o *)StringLiteral_10815/*"ProcessPurchase: PASS. Product: '{0}'"*/, v33, 0LL);
        if ( logOutputAction )
        {
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)logOutputAction,
            logErrorOutputAction,
            (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
          if ( *v24 )
          {
            metadata_k__BackingField = (*v24)->fields._metadata_k__BackingField;
            if ( metadata_k__BackingField )
            {
              v36 = this->fields._logOutputAction;
              *(_QWORD *)&v42.fields.flags = &localizedPrice_k__BackingField;
              *(_QWORD *)&v42.fields.lo = 0LL;
              localizedPrice_k__BackingField = metadata_k__BackingField->fields._localizedPrice_k__BackingField;
              v37 = System_Decimal__ToString(v42, v34);
              logErrorOutputAction = (System_Uri_o *)System_String__Concat_43849904(
                                                       (System_String_o *)StringLiteral_10781/*"Price: "*/,
                                                       v37,
                                                       0LL);
              if ( v36 )
              {
                System_Action_Uri___Invoke(
                  (System_Action_Uri__o *)v36,
                  logErrorOutputAction,
                  (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
                if ( *v24 )
                {
                  logErrorOutputAction = (System_Uri_o *)this->fields._logOutputAction;
                  if ( logErrorOutputAction )
                  {
                    System_Action_Uri___Invoke(
                      (System_Action_Uri__o *)logErrorOutputAction,
                      (System_Uri_o *)(*v24)->fields._receipt_k__BackingField,
                      (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
                    PurchaseLogic__ValidateReceipt(this, *v24, v38);
LABEL_25:
                    PurchaseLogic__AddPendingPurchase(this, *v24, v39);
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
    sub_B0D97C(logErrorOutputAction);
  }
  logErrorOutputAction = (System_Uri_o *)this->fields._logErrorOutputAction;
  if ( !logErrorOutputAction )
    goto LABEL_27;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logErrorOutputAction,
    (System_Uri_o *)StringLiteral_10816/*"ProcessPurchase: product is null"*/,
    (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__PurchaseIfAvailable(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        int32_t price,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  int32_t CumulativeAmount; // w2
  const MethodInfo *v28; // x5
  NetworkManager_ResultCallbackFunc_o *v29; // x19
  PurchaseLogic_o *v30; // x0
  const MethodInfo *v31; // x2

  if ( (byte_4214500 & 1) == 0 )
  {
    sub_B0D8A4(&AgeVerificationMenu_TypeInfo, product);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B0D8A4(&Method_PurchaseLogic___c__DisplayClass27_0__PurchaseIfAvailable_b__0__, v8);
    sub_B0D8A4(&PurchaseLogic___c__DisplayClass27_0_TypeInfo, v9);
    byte_4214500 = 1;
  }
  v10 = sub_B0D974(PurchaseLogic___c__DisplayClass27_0_TypeInfo, product, *(_QWORD *)&price);
  PurchaseLogic___c__DisplayClass27_0___ctor((PurchaseLogic___c__DisplayClass27_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B0D97C(v11);
  *(_QWORD *)(v10 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v10 + 32) = product;
  *(_DWORD *)(v10 + 24) = price;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)product, v18, v19, v20, v21, v22, v23);
  if ( PurchaseLogic__IsAppleDevice(v24)
    && PurchaseLogic__IsPendingPurchase(this, *(UnityEngine_Purchasing_Product_o **)(v10 + 32), v26) )
  {
    if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    }
    CumulativeAmount = AgeVerificationMenu__GetCumulativeAmount(0LL);
    PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, 12, CumulativeAmount, 0, 0, v28);
  }
  else
  {
    v29 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v25, v26);
    NetworkManager_ResultCallbackFunc___ctor(
      v29,
      (Il2CppObject *)v10,
      Method_PurchaseLogic___c__DisplayClass27_0__PurchaseIfAvailable_b__0__,
      0LL);
    PurchaseLogic__RequestGameServerBankStatus(v30, v29, v31);
  }
}


void __fastcall PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(
        PurchaseLogic_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x21
  PurchaseLogic_o *v22; // x0
  const MethodInfo *v23; // x2

  if ( (byte_421451B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__RemoveAll__, productId);
    sub_B0D8A4(&Method_System_Predicate_string___ctor__, v4);
    sub_B0D8A4(&System_Predicate_string__TypeInfo, v5);
    sub_B0D8A4(&Method_PurchaseLogic___c__DisplayClass76_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__, v6);
    sub_B0D8A4(&PurchaseLogic___c__DisplayClass76_0_TypeInfo, v7);
    byte_421451B = 1;
  }
  v8 = sub_B0D974(PurchaseLogic___c__DisplayClass76_0_TypeInfo, productId, method);
  PurchaseLogic___c__DisplayClass76_0___ctor((PurchaseLogic___c__DisplayClass76_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_7;
  *(_QWORD *)(v8 + 16) = productId;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)productId, v10, v11, v12, v13, v14, v15);
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v8 + 16), 0LL);
  if ( IsNullOrEmpty )
    return;
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)IsNullOrEmpty,
                                                v17);
  v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(System_Predicate_string__TypeInfo, v19, v20);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v21,
    (Il2CppObject *)v8,
    Method_PurchaseLogic___c__DisplayClass76_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_string___ctor__);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
LABEL_7:
    sub_B0D97C(v9);
  v22 = (PurchaseLogic_o *)System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
                             (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
                             (System_Predicate_T__o *)v21,
                             (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_string__RemoveAll__);
  PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(v22, DeferredPurchaseProductIdsFromPlayerPrefs, v23);
}


void __fastcall PurchaseLogic__RemovePendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0

  if ( (byte_4214506 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Product__Contains__, product);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Product__Remove__, v5);
    byte_4214506 = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_8;
  if ( System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
         (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
         (BattleBuffData_BuffData_o *)product,
         (const MethodInfo_2C7C05C *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
  {
    pendingProducts = this->fields._pendingProducts;
    if ( pendingProducts )
    {
      System_Collections_Generic_HashSet_BattleBuffData_BuffData___Remove(
        (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
        (BattleBuffData_BuffData_o *)product,
        (const MethodInfo_2C7C20C *)Method_System_Collections_Generic_HashSet_Product__Remove__);
      return;
    }
LABEL_8:
    sub_B0D97C(pendingProducts);
  }
}


void __fastcall PurchaseLogic__RequestGameServerBankStatus(
        PurchaseLogic_o *this,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  BankStatusRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_4214501 & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_getRequest_BankStatusRequest___, callback);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    byte_4214501 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (BankStatusRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               callback,
                                                               (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_BankStatusRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B0D97C(0LL);
  BankStatusRequest__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
}


void __fastcall PurchaseLogic__RestorePurchases(PurchaseLogic_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct PurchaseLogic_StaticFields *static_fields; // x8
  System_Action_Uri__o *logOutputAction; // x0
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x20
  UnityEngine_Purchasing_IExtensionProvider_c *klass; // x8
  void *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Uri_o *v23; // x1
  const MethodInfo_246EA50 *v24; // x2
  struct System_Action_string__o *v25; // x19
  System_Action_Uri__o *v26; // x20
  System_String_o *v27; // x21
  __int64 (__fastcall **v28)(struct UnityEngine_Purchasing_IExtensionProvider_o *, _QWORD); // x0
  __int64 v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  System_Action_bool__o *v32; // x21
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  UnityEngine_Purchasing_IAppleExtensions_c **v35; // x11
  __int64 v36; // x0
  int32_t platform; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4214504 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string__Invoke__, method);
    sub_B0D8A4(&Method_System_Action_bool___ctor__, v3);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___, v6);
    sub_B0D8A4(&Method_PurchaseLogic__RestorePurchases_b__31_0__, v7);
    sub_B0D8A4(&PurchaseLogic_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_RuntimePlatform_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_11508/*"RestorePurchases FAIL. Not supported on this platform. Current = "*/, v10);
    sub_B0D8A4(&StringLiteral_11510/*"RestorePurchases started ..."*/, v11);
    sub_B0D8A4(&StringLiteral_11507/*"RestorePurchases FAIL. Not initialized."*/, v12);
    byte_4214504 = 1;
  }
  platform = 0;
  if ( (byte_42144FE & 1) == 0 )
  {
    sub_B0D8A4(&PurchaseLogic_TypeInfo, method);
    byte_42144FE = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    logOutputAction = (System_Action_Uri__o *)this->fields._logOutputAction;
    if ( !logOutputAction )
      goto LABEL_31;
    v23 = (System_Uri_o *)StringLiteral_11507/*"RestorePurchases FAIL. Not initialized."*/;
    v24 = (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__;
    goto LABEL_18;
  }
  if ( UnityEngine_Application__get_platform(0LL) != 8 && UnityEngine_Application__get_platform(0LL) != 1 )
  {
    v25 = this->fields._logOutputAction;
    platform = UnityEngine_Application__get_platform(0LL);
    logOutputAction = (System_Action_Uri__o *)j_il2cpp_value_box_0(UnityEngine_RuntimePlatform_TypeInfo, &platform);
    if ( !logOutputAction )
      goto LABEL_31;
    v26 = logOutputAction;
    v27 = (System_String_o *)((__int64 (__fastcall *)(System_Action_Uri__o *, Il2CppMethodPointer))logOutputAction->klass->vtable._3_ToString.method)(
                               logOutputAction,
                               logOutputAction->klass->vtable._4_unknown.methodPtr);
    platform = *(_DWORD *)j_il2cpp_object_unbox_0(v26);
    logOutputAction = (System_Action_Uri__o *)System_String__Concat_43849904(
                                                (System_String_o *)StringLiteral_11508/*"RestorePurchases FAIL. Not supported on this platform. Current = "*/,
                                                v27,
                                                0LL);
    if ( !v25 )
      goto LABEL_31;
    v23 = (System_Uri_o *)logOutputAction;
    logOutputAction = (System_Action_Uri__o *)v25;
    v24 = (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__;
LABEL_18:
    System_Action_Uri___Invoke(logOutputAction, v23, v24);
    return;
  }
  logOutputAction = (System_Action_Uri__o *)this->fields._logOutputAction;
  if ( !logOutputAction )
    goto LABEL_31;
  System_Action_Uri___Invoke(
    logOutputAction,
    (System_Uri_o *)StringLiteral_11510/*"RestorePurchases started ..."*/,
    (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    goto LABEL_31;
  klass = storeExtensionProvider->klass;
  v17 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v18 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 3);
  v19 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 36);
  if ( *(_WORD *)&storeExtensionProvider->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v18 )
    {
      ++v20;
      p_offset += 4;
      if ( v20 >= *(unsigned __int16 *)&storeExtensionProvider->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    p_method = (__int64)&klass->vtable[*p_offset + (int)v19].method;
  }
  else
  {
LABEL_15:
    p_method = sub_AA67A0(storeExtensionProvider, v18, v19);
  }
  v28 = (__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, _QWORD))sub_B0D954(
                                                                                                 *(_QWORD *)(p_method + 8),
                                                                                                 v17);
  v29 = (*v28)(storeExtensionProvider, v28);
  v32 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v30, v31);
  System_Action_bool____ctor(
    v32,
    (Il2CppObject *)this,
    Method_PurchaseLogic__RestorePurchases_b__31_0__,
    (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
  if ( !v29 )
LABEL_31:
    sub_B0D97C(logOutputAction);
  v33 = *(_QWORD *)v29;
  if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
  {
    v34 = 0LL;
    v35 = (UnityEngine_Purchasing_IAppleExtensions_c **)(*(_QWORD *)(v33 + 176) + 8LL);
    while ( *(v35 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      ++v34;
      v35 += 2;
      if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
        goto LABEL_28;
    }
    v36 = v33 + 16LL * (*(_DWORD *)v35 + 1) + 312;
  }
  else
  {
LABEL_28:
    v36 = sub_AA67A0(v29, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(__int64, System_Action_bool__o *, _QWORD))v36)(v29, v32, *(_QWORD *)(v36 + 8));
}


void __fastcall PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        System_Collections_Generic_List_string__o *deferredPurchaseProductIdList,
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x21
  __int64 v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **current; // x1
  System_String_o **v28; // x20
  System_String_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  PurchaseBehaviour_c *v32; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v34; // x23
  System_String_o *v35; // x21
  System_String_o *a; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4214519 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_string___, deferredPurchaseProductIdList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_B0D8A4(&Method_System_Func_string__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_string__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v9);
    sub_B0D8A4(&PurchaseBehaviour_TypeInfo, v10);
    sub_B0D8A4(&string_TypeInfo, v11);
    sub_B0D8A4(&Method_PurchaseLogic___c__DisplayClass74_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__, v12);
    sub_B0D8A4(&PurchaseLogic___c__DisplayClass74_0_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_1269/*";"*/, v14);
    sub_B0D8A4(&StringLiteral_1/*""*/, v15);
    sub_B0D8A4(&StringLiteral_5242/*"DeferredPurchaseProductIds"*/, v16);
    byte_4214519 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( deferredPurchaseProductIdList )
  {
    a = (System_String_o *)StringLiteral_1/*""*/;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)deferredPurchaseProductIdList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v38 = v37;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v38,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v19 = sub_B0D974(PurchaseLogic___c__DisplayClass74_0_TypeInfo, v17, v18);
      PurchaseLogic___c__DisplayClass74_0___ctor((PurchaseLogic___c__DisplayClass74_0_o *)v19, 0LL);
      if ( !v19 )
        sub_B0D97C(v20);
      current = (System_Int32_array **)v38.fields.current;
      *(_QWORD *)(v19 + 16) = v38.fields.current;
      v28 = (System_String_o **)(v19 + 16);
      sub_B0D840((BattleServantConfConponent_o *)(v19 + 16), current, v21, v22, v23, v24, v25, v26);
      if ( *(_QWORD *)(v19 + 16) )
      {
        v29 = System_String__Trim_43837236(*(System_String_o **)(v19 + 16), 0LL);
        if ( !System_String__op_Equality(v29, string_TypeInfo->static_fields->Empty, 0LL) )
        {
          v32 = PurchaseBehaviour_TypeInfo;
          if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
            v32 = PurchaseBehaviour_TypeInfo;
          }
          ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v32->static_fields->ConsumableProductIdCollection;
          v34 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_string__bool__TypeInfo,
                                                                                     v30,
                                                                                     v31);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v34,
            (Il2CppObject *)v19,
            Method_PurchaseLogic___c__DisplayClass74_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__,
            (const MethodInfo_26189B8 *)Method_System_Func_string__bool___ctor__);
          if ( BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                 ConsumableProductIdCollection,
                 (System_Func_T__bool__o *)v34,
                 (const MethodInfo_1707138 *)Method_BasicHelper_Any_string___) )
          {
            v35 = a;
            if ( System_String__op_Inequality(a, string_TypeInfo->static_fields->Empty, 0LL) )
              v35 = System_String__Concat_43849904(a, (System_String_o *)StringLiteral_1269/*";"*/, 0LL);
            a = System_String__Concat_43849904(v35, *v28, 0LL);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v38,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( System_String__IsNullOrEmpty(a, 0LL) )
      UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5242/*"DeferredPurchaseProductIds"*/, 0LL);
    else
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_5242/*"DeferredPurchaseProductIds"*/, a, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall PurchaseLogic__SendPurchaseAction(
        PurchaseLogic_o *this,
        System_String_o *paymentProductId,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  void *Instance; // x0
  int v10; // w8
  void *v11; // x21
  unsigned int v12; // w22
  __int64 v13; // x23
  int32_t v14; // w20
  int v15; // w21
  __int64 v16; // x0

  if ( (byte_4214511 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_BankShopMaster___, paymentProductId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_8303/*"JPY"*/, v8);
    byte_4214511 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = BankShopMaster__GetEnableEntitiyList((BankShopMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_18;
  v10 = *((_DWORD *)Instance + 6);
  v11 = Instance;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
      {
        v16 = sub_B0D9A8(Instance);
        sub_B0D948(v16, 0LL);
      }
      v13 = *((_QWORD *)v11 + (int)v12 + 4);
      if ( !v13 || !paymentProductId )
        goto LABEL_18;
      Instance = (void *)System_String__Equals_43837244(paymentProductId, *(System_String_o **)(v13 + 32), 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        return;
    }
    v14 = *(_DWORD *)(v13 + 16);
    if ( (v14 & 0x80000000) == 0 )
    {
      v15 = *(_DWORD *)(v13 + 52);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Instance )
      {
        AdManager__TrackPurchase(
          (AdManager_o *)Instance,
          v14,
          (double)v15,
          (System_String_o *)StringLiteral_8303/*"JPY"*/,
          transactionId,
          0LL);
        return;
      }
LABEL_18:
      sub_B0D97C(Instance);
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
  System_String_o *v23; // x0
  struct System_Action_string__o *logOutputAction; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  NetworkManager_ResultCallbackFunc_o *v33; // x22
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_String_o *receiptBase64Str; // x22
  System_String_o *googleSignatureStr; // x21
  System_String_o *payloadJsonStr; // x23
  PurchaseByBank_UnityIap_Request_o *v38; // x24
  __int64 v39; // x1
  __int64 v40; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v41; // x25
  const MethodInfo *v42; // x6
  struct System_Action_string__o *logErrorOutputAction; // x20
  System_String_o *v44; // x0
  const MethodInfo *v45; // x2
  int64_t UserId; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421450A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string__Invoke__, receiptContents);
    sub_B0D8A4(&Method_System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult_____ctor__, v12);
    sub_B0D8A4(&System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo, v13);
    sub_B0D8A4(&Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___, v14);
    sub_B0D8A4(&NetworkManager_TypeInfo, v15);
    sub_B0D8A4(&Method_PurchaseLogic_OnEndSendReceiptData__, v16);
    sub_B0D8A4(&Method_PurchaseLogic__SendReceiptData_b__39_0__, v17);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_23150/*"user_id_error"*/, v19);
    sub_B0D8A4(&StringLiteral_10867/*"PurchaseLogic:SendReceiptData ["*/, v20);
    sub_B0D8A4(&StringLiteral_15146/*"UserId error: UserId="*/, v21);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v22);
    byte_421450A = 1;
  }
  UserId = 0LL;
  this->fields._currentTransactionId = currentTransactionId;
  sub_B0D840(
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
  v23 = System_String__Concat_43852188(
          (System_String_o *)StringLiteral_10867/*"PurchaseLogic:SendReceiptData ["*/,
          receiptContents->fields.payloadJsonStr,
          (System_String_o *)StringLiteral_15917/*"]"*/,
          0LL);
  if ( !logOutputAction )
    goto LABEL_19;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)v23,
    (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( NetworkManager__get_UserId(0LL) > 0 )
  {
    this->fields._purchaseResultArray = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields._purchaseResultArray, 0LL, v25, v26, v27, v28, v29, v30);
    v33 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v31, v32);
    NetworkManager_ResultCallbackFunc___ctor(
      v33,
      (Il2CppObject *)this,
      Method_PurchaseLogic_OnEndSendReceiptData__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v33,
                                          (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___);
    receiptBase64Str = receiptContents->fields.receiptBase64Str;
    payloadJsonStr = receiptContents->fields.payloadJsonStr;
    googleSignatureStr = receiptContents->fields.googleSignatureStr;
    v38 = (PurchaseByBank_UnityIap_Request_o *)Request_WarBoardWallAttackRequest;
    v41 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo,
                                                                                 v39,
                                                                                 v40);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v41,
      (Il2CppObject *)this,
      Method_PurchaseLogic__SendReceiptData_b__39_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult_____ctor__);
    if ( v38 )
    {
      PurchaseByBank_UnityIap_Request__beginRequest(
        v38,
        receiptBase64Str,
        payloadJsonStr,
        storeError,
        googleSignatureStr,
        (System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____o *)v41,
        v42);
      return;
    }
LABEL_19:
    sub_B0D97C(v23);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v44 = System_Int64__ToString((int64_t)&UserId, 0LL);
  v23 = System_String__Concat_43849904((System_String_o *)StringLiteral_15146/*"UserId error: UserId="*/, v44, 0LL);
  if ( !logErrorOutputAction )
    goto LABEL_19;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logErrorOutputAction,
    (System_Uri_o *)v23,
    (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
  PurchaseLogic__OnEndSendReceiptData(this, (System_String_o *)StringLiteral_23150/*"user_id_error"*/, v45);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__UpdateMonthlyPurchasePrice(
        PurchaseLogic_o *this,
        int32_t bankShopId,
        const MethodInfo *method)
{
  int32_t CumulativeAmount; // w21
  int32_t v6; // w0

  if ( (byte_421450E & 1) == 0 )
  {
    sub_B0D8A4(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&bankShopId);
    byte_421450E = 1;
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
  System_String_o *transactionID_k__BackingField; // x21
  PurchaseLogic_ReceiptContents_o *v7; // x20
  const MethodInfo *v8; // x4

  IsAppleDevice = (PurchaseLogic_ReceiptContents_o *)((__int64 (__fastcall *)(PurchaseLogic_o *, UnityEngine_Purchasing_Product_o *, Il2CppMethodPointer))this->klass->vtable._19_ExtractReceiptContents.method)(
                                                       this,
                                                       product,
                                                       this->klass->vtable._20_UpdateMonthlyPurchasePrice.methodPtr);
  if ( !product )
    goto LABEL_7;
  transactionID_k__BackingField = product->fields._transactionID_k__BackingField;
  v7 = IsAppleDevice;
  IsAppleDevice = (PurchaseLogic_ReceiptContents_o *)PurchaseLogic__IsAppleDevice((const MethodInfo *)IsAppleDevice);
  if ( ((unsigned __int8)IsAppleDevice & 1) == 0 )
    goto LABEL_6;
  if ( !v7 )
LABEL_7:
    sub_B0D97C(IsAppleDevice);
  if ( v7->fields.isIOSOldStyleReceipt )
    transactionID_k__BackingField = v7->fields.iOSOldStyleTransactionId;
LABEL_6:
  PurchaseLogic__SendReceiptData(this, v7, transactionID_k__BackingField, 0, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic___RestorePurchases_b__31_0(PurchaseLogic_o *this, bool result, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Action_string__o *logOutputAction; // x19
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  bool v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = result;
  if ( (byte_421451D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string__Invoke__, result);
    sub_B0D8A4(&StringLiteral_11509/*"RestorePurchases continuing: "*/, v4);
    sub_B0D8A4(&StringLiteral_812/*". If no further messages, no purchases available to restore."*/, v5);
    byte_421451D = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  v7 = System_Boolean__ToString((bool)&v9, 0LL);
  v8 = System_String__Concat_43852188(
         (System_String_o *)StringLiteral_11509/*"RestorePurchases continuing: "*/,
         v7,
         (System_String_o *)StringLiteral_812/*". If no further messages, no purchases available to restore."*/,
         0LL);
  if ( !logOutputAction )
    sub_B0D97C(v8);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)v8,
    (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
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
  __int64 v11; // x1
  __int64 v13[5]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+30h] [xbp-30h] BYREF
  int32_t v15; // [xsp+34h] [xbp-2Ch] BYREF
  int32_t v16; // [xsp+38h] [xbp-28h] BYREF
  int32_t v17; // [xsp+3Ch] [xbp-24h] BYREF

  v16 = perMonthAmount;
  v17 = purchaseResult;
  v15 = freeStoneNum;
  v14 = chargeStoneNum;
  if ( (byte_42121B7 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&purchaseResult);
    sub_B0D8A4(&PurchaseBehaviour_Result_TypeInfo, v11);
    byte_42121B7 = 1;
  }
  v13[4] = 0LL;
  v13[0] = j_il2cpp_value_box_0(PurchaseBehaviour_Result_TypeInfo, &v17);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v13[2] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v13[3] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B0D848(this, v13, callback, object);
}


void __fastcall PurchaseLogic_ProductFinishedAction__EndInvoke(
        PurchaseLogic_ProductFinishedAction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
        sub_B0D960(
          *(_QWORD *)&v23->fields.extra_arg,
          *(_QWORD *)&purchaseResult,
          *(_QWORD *)&perMonthAmount,
          *(_QWORD *)&freeStoneNum);
      if ( (sub_B0D8D4(v25) & 1) == 0 )
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
      v27 = sub_B0D8CC(v25);
      v28 = sub_B0DCD0(v25);
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
            v21 = sub_AA67A0(v24, v31, v32);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_B0D954(v20, v25);
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
            v19 = sub_AA67A0(v24, class_0, v13);
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
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_StaticFields *v5; // x8
  struct System_String_o *v6; // x1
  struct System_String_StaticFields *v7; // x8
  struct System_String_o *v8; // x1
  struct System_String_StaticFields *v9; // x8
  struct System_String_o *v10; // x1
  struct System_String_StaticFields *v11; // x8
  struct System_String_o *v12; // x1

  if ( (byte_42121B8 & 1) == 0 )
  {
    sub_B0D8A4(&string_TypeInfo, method);
    byte_42121B8 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.payloadJsonStr = static_fields->Empty;
  sub_B0D840(&this->fields, Empty);
  v5 = string_TypeInfo->static_fields;
  v6 = v5->Empty;
  this->fields.googleSignatureStr = v5->Empty;
  sub_B0D840(&this->fields.googleSignatureStr, v6);
  v7 = string_TypeInfo->static_fields;
  v8 = v7->Empty;
  this->fields.receiptBase64Str = v7->Empty;
  sub_B0D840(&this->fields.receiptBase64Str, v8);
  v9 = string_TypeInfo->static_fields;
  v10 = v9->Empty;
  this->fields.purchaseToken = v9->Empty;
  sub_B0D840(&this->fields.purchaseToken, v10);
  v11 = string_TypeInfo->static_fields;
  v12 = v11->Empty;
  this->fields.iOSOldStyleTransactionId = v11->Empty;
  sub_B0D840(&this->fields.iOSOldStyleTransactionId, v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct PurchaseLogic___c_StaticFields *static_fields; // x0

  if ( (byte_42121B3 & 1) == 0 )
  {
    sub_B0D8A4(&PurchaseLogic___c_TypeInfo, v1);
    byte_42121B3 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(PurchaseLogic___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = PurchaseLogic___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PurchaseLogic___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  __int64 v4; // x1
  Il2CppObject *v5; // x19

  if ( (byte_42121B4 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Debug_TypeInfo, str);
    sub_B0D8A4(&StringLiteral_15810/*"[UnityIAP]課金エラー:"*/, v4);
    byte_42121B4 = 1;
  }
  v5 = (Il2CppObject *)System_String__Concat_43849904((System_String_o *)StringLiteral_15810/*"[UnityIAP]課金エラー:"*/, str, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError(v5, 0LL);
}


void __fastcall PurchaseLogic___c____ctor_b__77_2(
        PurchaseLogic___c_o *this,
        System_String_o *str,
        float ratio,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  float v8; // s0
  System_String_o *v9; // x0
  Il2CppObject *v10; // x19
  float v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = ratio;
  if ( (byte_42121B5 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Debug_TypeInfo, str);
    sub_B0D8A4(&StringLiteral_15809/*"[UnityIAP]課金エラー(ratio:"*/, v6);
    sub_B0D8A4(&StringLiteral_677/*"):"*/, v7);
    byte_42121B5 = 1;
  }
  v8 = UnityEngine_Random__Range(0.0, 1.0, 0LL);
  if ( v8 < ratio )
  {
    v9 = System_Single__ToString(v8, (const MethodInfo *)&v11);
    v10 = (Il2CppObject *)System_String__Concat_43853316(
                            (System_String_o *)StringLiteral_15809/*"[UnityIAP]課金エラー(ratio:"*/,
                            v9,
                            (System_String_o *)StringLiteral_677/*"):"*/,
                            str,
                            0LL);
    if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError(v10, 0LL);
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
    sub_B0D97C(this);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  PurchaseLogic_o *_4__this; // x0
  int32_t v12; // w20
  struct PurchaseLogic_o *v13; // x8
  struct UnityEngine_Purchasing_Product_o *product; // x9
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x9
  System_Action_Uri__o *logOutputAction; // x20
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x20
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  struct UnityEngine_Purchasing_Product_o *v19; // x19
  unsigned __int64 v20; // x10
  UnityEngine_Purchasing_IStoreController_c **p_offset; // x11
  __int64 p_method; // x0
  struct PurchaseLogic_o *v23; // x8
  System_Action_Uri__o *logErrorOutputAction; // x20
  PurchaseLogic_o *v25; // x21
  System_String_o *v26; // x22
  int v27; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42121B6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string__Invoke__, requestResultStr);
    sub_B0D8A4(&AgeVerificationMenu_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Purchasing_IStoreController_TypeInfo, v6);
    sub_B0D8A4(&PurchaseLogic_PurchaseAvailablilty_TypeInfo, v7);
    sub_B0D8A4(&PurchaseLogic_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_10871/*"Purchasing product asychronously: '{0}'"*/, v9);
    sub_B0D8A4(&StringLiteral_14899/*"Unexpected PurchaseAvailablilty value: "*/, v10);
    byte_42121B6 = 1;
  }
  v27 = 0;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_29:
    sub_B0D97C(_4__this);
  _4__this = (PurchaseLogic_o *)PurchaseLogic__CheckBankStatusAndMonthlyLimit(
                                  _4__this,
                                  requestResultStr,
                                  this->fields.price,
                                  0LL);
  v27 = (int)_4__this;
  v12 = 9;
  switch ( (int)_4__this )
  {
    case 1:
      v13 = this->fields.__4__this;
      if ( !v13 )
        goto LABEL_29;
      product = this->fields.product;
      if ( !product )
        goto LABEL_29;
      definition_k__BackingField = product->fields._definition_k__BackingField;
      if ( !definition_k__BackingField )
        goto LABEL_29;
      logOutputAction = (System_Action_Uri__o *)v13->fields._logOutputAction;
      _4__this = (PurchaseLogic_o *)System_String__Format(
                                      (System_String_o *)StringLiteral_10871/*"Purchasing product asychronously: '{0}'"*/,
                                      (Il2CppObject *)definition_k__BackingField->fields._id_k__BackingField,
                                      0LL);
      if ( !logOutputAction )
        goto LABEL_29;
      System_Action_Uri___Invoke(
        logOutputAction,
        (System_Uri_o *)_4__this,
        (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
      storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
      if ( !storeController )
        goto LABEL_29;
      klass = storeController->klass;
      v19 = this->fields.product;
      if ( !*(_WORD *)&storeController->klass->_2.bitflags1 )
        goto LABEL_14;
      v20 = 0LL;
      p_offset = (UnityEngine_Purchasing_IStoreController_c **)&klass->_1.interfaceOffsets->offset;
      break;
    case 2:
      v12 = 8;
      goto LABEL_21;
    case 3:
      goto LABEL_21;
    case 4:
      goto LABEL_20;
    default:
      v23 = this->fields.__4__this;
      if ( !v23 )
        goto LABEL_29;
      logErrorOutputAction = (System_Action_Uri__o *)v23->fields._logErrorOutputAction;
      _4__this = (PurchaseLogic_o *)j_il2cpp_value_box_0(PurchaseLogic_PurchaseAvailablilty_TypeInfo, &v27);
      if ( !_4__this )
        goto LABEL_29;
      v25 = _4__this;
      v26 = (System_String_o *)((__int64 (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))_4__this->klass->vtable._3_ToString.method)(
                                 _4__this,
                                 _4__this->klass->vtable._4_OnInitializeFailed.methodPtr);
      v27 = *(_DWORD *)j_il2cpp_object_unbox_0(v25);
      _4__this = (PurchaseLogic_o *)System_String__Concat_43849904((System_String_o *)StringLiteral_14899/*"Unexpected PurchaseAvailablilty value: "*/, v26, 0LL);
      if ( !logErrorOutputAction )
        goto LABEL_29;
      System_Action_Uri___Invoke(
        logErrorOutputAction,
        (System_Uri_o *)_4__this,
        (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
LABEL_20:
      v12 = 6;
LABEL_21:
      if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
      }
      _4__this = (PurchaseLogic_o *)AgeVerificationMenu__GetCumulativeAmount(0LL);
      if ( !this->fields.__4__this )
        goto LABEL_29;
      PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this->fields.__4__this, v12, (int32_t)_4__this, 0, 0, 0LL);
      return;
  }
  while ( *(p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
  {
    ++v20;
    p_offset += 2;
    if ( v20 >= *(unsigned __int16 *)&storeController->klass->_2.bitflags1 )
    {
LABEL_14:
      p_method = sub_AA67A0(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 1LL);
      goto LABEL_28;
    }
  }
  p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
LABEL_28:
  (*(void (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, struct UnityEngine_Purchasing_Product_o *, _QWORD))p_method)(
    storeController,
    v19,
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return System_String__Equals_43908720(definition_k__BackingField->fields._id_k__BackingField, id, 4, 0LL);
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
  return System_String__Equals_43908720(id, this->fields.idStr, 4, 0LL);
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