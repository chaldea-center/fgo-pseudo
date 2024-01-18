void __fastcall PurchaseLogic___ctor(PurchaseLogic_o *this, const MethodInfo *method)
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
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  PurchaseLogic___c_c *v33; // x0
  struct PurchaseLogic___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__77_0; // x20
  Il2CppObject *v36; // x21
  struct PurchaseLogic___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  PurchaseLogic___c_c *v50; // x0
  struct PurchaseLogic___c_StaticFields *v51; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__77_1; // x20
  Il2CppObject *v53; // x21
  struct PurchaseLogic___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  PurchaseLogic___c_c *v67; // x0
  struct PurchaseLogic___c_StaticFields *v68; // x8
  System_Action_string__float__o *_9__77_2; // x20
  Il2CppObject *v70; // x21
  struct PurchaseLogic___c_StaticFields *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7

  if ( (byte_4187AC4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string___ctor__, method);
    sub_B2C35C(&System_Action_string__TypeInfo, v3);
    sub_B2C35C(&Method_System_Action_string__float___ctor__, v4);
    sub_B2C35C(&System_Action_string__float__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Product___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_HashSet_Product__TypeInfo, v7);
    sub_B2C35C(&Method_PurchaseLogic___c___ctor_b__77_0__, v8);
    sub_B2C35C(&Method_PurchaseLogic___c___ctor_b__77_1__, v9);
    sub_B2C35C(&Method_PurchaseLogic___c___ctor_b__77_2__, v10);
    sub_B2C35C(&PurchaseLogic___c_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_4187AC4 = 1;
  }
  v13 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_HashSet_Product__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v13,
    (const MethodInfo_2D8BA5C *)Method_System_Collections_Generic_HashSet_Product___ctor__);
  this->fields._pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)v13;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
  v20 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._currentTransactionId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields._currentTransactionId, v20, v21, v22, v23, v24, v25, v26);
  v33 = PurchaseLogic___c_TypeInfo;
  if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v33 = PurchaseLogic___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__77_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__77_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_string__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__77_0,
      v36,
      Method_PurchaseLogic___c___ctor_b__77_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_string___ctor__);
    v37 = PurchaseLogic___c_TypeInfo->static_fields;
    v37->__9__77_0 = (struct System_Action_string__o *)_9__77_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v37->__9__77_0,
      (System_Int32_array **)_9__77_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  this->fields._logOutputAction = (struct System_Action_string__o *)_9__77_0;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._logOutputAction,
    (System_Int32_array **)_9__77_0,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v50 = PurchaseLogic___c_TypeInfo;
  if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v50 = PurchaseLogic___c_TypeInfo;
  }
  v51 = v50->static_fields;
  _9__77_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v51->__9__77_1;
  if ( !_9__77_1 )
  {
    if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50);
      v51 = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v53 = (Il2CppObject *)v51->__9;
    _9__77_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_string__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__77_1,
      v53,
      Method_PurchaseLogic___c___ctor_b__77_1__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_string___ctor__);
    v54 = PurchaseLogic___c_TypeInfo->static_fields;
    v54->__9__77_1 = (struct System_Action_string__o *)_9__77_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v54->__9__77_1,
      (System_Int32_array **)_9__77_1,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  this->fields._logErrorOutputAction = (struct System_Action_string__o *)_9__77_1;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._logErrorOutputAction,
    (System_Int32_array **)_9__77_1,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v67 = PurchaseLogic___c_TypeInfo;
  if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v67 = PurchaseLogic___c_TypeInfo;
  }
  v68 = v67->static_fields;
  _9__77_2 = v68->__9__77_2;
  if ( !_9__77_2 )
  {
    if ( (BYTE3(v67->vtable._0_Equals.methodPtr) & 4) != 0 && !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67);
      v68 = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v70 = (Il2CppObject *)v68->__9;
    _9__77_2 = (System_Action_string__float__o *)sub_B2C42C(System_Action_string__float__TypeInfo);
    System_Action_string__float____ctor(
      _9__77_2,
      v70,
      Method_PurchaseLogic___c___ctor_b__77_2__,
      (const MethodInfo_24CA17C *)Method_System_Action_string__float___ctor__);
    v71 = PurchaseLogic___c_TypeInfo->static_fields;
    v71->__9__77_2 = _9__77_2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v71->__9__77_2,
      (System_Int32_array **)_9__77_2,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
  }
  this->fields._logErrorOutputActionSampledByRatio = _9__77_2;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._logErrorOutputActionSampledByRatio,
    (System_Int32_array **)_9__77_2,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
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
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  PurchaseLogic_o *v12; // x0
  const MethodInfo *v13; // x2

  if ( (byte_4187AC2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Distinct_string___, productId);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_string___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v5);
    byte_4187AC2 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(productId, 0LL);
  if ( !IsNullOrEmpty )
  {
    DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                  (PurchaseLogic_o *)IsNullOrEmpty,
                                                  v7);
    if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
      sub_B2C434(0LL, v9);
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)DeferredPurchaseProductIdsFromPlayerPrefs;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
      (EventMissionProgressRequest_Argument_ProgressData_o *)productId,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    v11 = System_Linq_Enumerable__Distinct_string_(
            v10,
            (const MethodInfo_1A8D740 *)Method_System_Linq_Enumerable_Distinct_string___);
    v12 = (PurchaseLogic_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                               v11,
                               (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_string___);
    PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(
      v12,
      (System_Collections_Generic_List_string__o *)v12,
      v13);
  }
}


void __fastcall PurchaseLogic__AddPendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0

  if ( (byte_4187AAD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Product__Add__, product);
    byte_4187AAD = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_B2C434(0LL, product);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)pendingProducts,
    (WarBoardAIRoute_RouteData_o *)product,
    (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_Product__Add__);
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
  __int64 v25; // x1
  System_String_o *v26; // x0
  int32_t v27; // w21
  PurchaseLogic_o *v28; // x0
  const MethodInfo *v29; // x2
  int32_t v30; // w21
  System_String_o *v31; // x0
  int32_t v32; // w20
  System_String_o *v33; // x0
  CommonUI_o *Instance; // x20
  struct PurchaseLogic___c_StaticFields *static_fields; // x8
  System_Action_o *_9__29_0; // x22
  Il2CppObject *v37; // x21
  struct PurchaseLogic___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  CommonUI_o *v45; // x20
  struct PurchaseLogic___c_StaticFields *v46; // x8
  System_Action_o *_9__29_1; // x21
  Il2CppObject *v48; // x22
  struct PurchaseLogic___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_4187AAA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, result);
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_B2C35C(&JsonManager_TypeInfo, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B2C35C(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__29_0__, v13);
    sub_B2C35C(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__29_1__, v14);
    sub_B2C35C(&PurchaseLogic___c_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_12385/*"STONE_PURCHASE_RESULT_BLOCK"*/, v16);
    sub_B2C35C(&StringLiteral_21453/*"perMonthAmount"*/, v17);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v18);
    sub_B2C35C(&StringLiteral_20473/*"message"*/, v19);
    sub_B2C35C(&StringLiteral_16597/*"bankAvailable"*/, v20);
    byte_4187AAA = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12385/*"STONE_PURCHASE_RESULT_BLOCK"*/, 0LL);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
    goto LABEL_39;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0LL);
  v23 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary;
  if ( !Dictionary
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Dictionary,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21453/*"perMonthAmount"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    goto LABEL_39;
  }
  Item = (struct PurchaseLogic___c_StaticFields **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                     v23,
                                                     (System_Type_o *)StringLiteral_21453/*"perMonthAmount"*/,
                                                     (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_57;
  v26 = (System_String_o *)((__int64 (__fastcall *)(struct PurchaseLogic___c_StaticFields **, struct System_Action_string__o *))(*Item)[6].__9__40_0)(
                             Item,
                             (*Item)[6].__9__77_0);
  v27 = System_Int32__Parse(v26, 0LL);
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  }
  AgeVerificationMenu__SaveCumulativeAmount(v27, 0LL);
  if ( !PurchaseLogic__IsLimitOver(v28, v27 + price, v29) )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v23,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_16597/*"bankAvailable"*/,
           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (struct PurchaseLogic___c_StaticFields **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                         v23,
                                                         (System_Type_o *)StringLiteral_16597/*"bankAvailable"*/,
                                                         (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_57;
      v31 = (System_String_o *)((__int64 (__fastcall *)(struct PurchaseLogic___c_StaticFields **, struct System_Action_string__o *))(*Item)[6].__9__40_0)(
                                 Item,
                                 (*Item)[6].__9__77_0);
      v32 = System_Int32__Parse(v31, 0LL);
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v23,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_20473/*"message"*/,
             (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (struct PurchaseLogic___c_StaticFields **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                           v23,
                                                           (System_Type_o *)StringLiteral_20473/*"message"*/,
                                                           (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_57;
        v33 = (System_String_o *)((__int64 (__fastcall *)(struct PurchaseLogic___c_StaticFields **, struct System_Action_string__o *))(*Item)[6].__9__40_0)(
                                   Item,
                                   (*Item)[6].__9__77_0);
        v21 = v33;
        if ( !v32 )
        {
          if ( !System_String__IsNullOrEmpty(v33, 0LL) )
          {
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                v37 = (Il2CppObject *)static_fields->__9;
                _9__29_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                System_Action___ctor(
                  _9__29_0,
                  v37,
                  Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__29_0__,
                  0LL);
                v38 = PurchaseLogic___c_TypeInfo->static_fields;
                v38->__9__29_0 = _9__29_0;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)&v38->__9__29_0,
                  (System_Int32_array **)_9__29_0,
                  v39,
                  v40,
                  v41,
                  v42,
                  v43,
                  v44);
              }
              if ( Instance )
              {
                v30 = 1;
                CommonUI__OpenNotificationDialog(Instance, 0LL, v21, _9__29_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
                return v30;
              }
LABEL_57:
              sub_B2C434(Item, v25);
            }
          }
          return 1;
        }
      }
      else if ( !v32 )
      {
        return 1;
      }
    }
LABEL_39:
    if ( !System_String__IsNullOrEmpty(v21, 0LL) )
    {
      v45 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0LL, 0LL) )
      {
        Item = (struct PurchaseLogic___c_StaticFields **)PurchaseLogic___c_TypeInfo;
        if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
          Item = (struct PurchaseLogic___c_StaticFields **)PurchaseLogic___c_TypeInfo;
        }
        v46 = Item[23];
        _9__29_1 = v46->__9__29_1;
        if ( !_9__29_1 )
        {
          if ( (*((_BYTE *)Item + 307) & 4) != 0 && !*((_DWORD *)Item + 56) )
          {
            j_il2cpp_runtime_class_init_0(Item);
            v46 = PurchaseLogic___c_TypeInfo->static_fields;
          }
          v48 = (Il2CppObject *)v46->__9;
          _9__29_1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(_9__29_1, v48, Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__29_1__, 0LL);
          v49 = PurchaseLogic___c_TypeInfo->static_fields;
          v49->__9__29_1 = _9__29_1;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v49->__9__29_1,
            (System_Int32_array **)_9__29_1,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55);
        }
        if ( !v45 )
          goto LABEL_57;
        CommonUI__OpenNotificationDialog(v45, 0LL, v21, _9__29_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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
    return dword_31A1EF0[failureReason];
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
  __int64 v9; // x3
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x20
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  unsigned __int64 v12; // x10
  UnityEngine_Purchasing_IStoreController_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4187AB0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Product__Contains__, product);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Product__Remove__, v5);
    sub_B2C35C(&UnityEngine_Purchasing_IStoreController_TypeInfo, v6);
    sub_B2C35C(&PurchaseLogic_TypeInfo, v7);
    byte_4187AB0 = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_15;
  if ( !System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
          (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
          (BattleBuffData_BuffData_o *)product,
          (const MethodInfo_2D8C0E0 *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
    return;
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts
    || (pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)System_Collections_Generic_HashSet_BattleBuffData_BuffData___Remove(
                                                                                    (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
                                                                                    (BattleBuffData_BuffData_o *)product,
                                                                                    (const MethodInfo_2D8C290 *)Method_System_Collections_Generic_HashSet_Product__Remove__),
        (storeController = PurchaseLogic_TypeInfo->static_fields->_storeController) == 0LL) )
  {
LABEL_15:
    sub_B2C434(pendingProducts, product);
  }
  klass = storeController->klass;
  if ( *(_WORD *)&storeController->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = (UnityEngine_Purchasing_IStoreController_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      ++v12;
      p_offset += 2;
      if ( v12 >= *(unsigned __int16 *)&storeController->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AC5258(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 2LL, v9);
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
  sub_B2C2F8(
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

  if ( (byte_4187AB1 & 1) == 0 )
  {
    sub_B2C35C(&PurchaseLogic_ReceiptContents_TypeInfo, product);
    byte_4187AB1 = 1;
  }
  v3 = (PurchaseLogic_ReceiptContents_o *)sub_B2C42C(PurchaseLogic_ReceiptContents_TypeInfo);
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
          sub_B2C434(this, purchaseResultArray);
        }
      }
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
    }
  }
}


UnityEngine_Purchasing_IAppleExtensions_o *__fastcall PurchaseLogic__GetAppleExtension(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  _BOOL8 IsAppleDevice; // x0
  __int64 v4; // x1
  __int64 v5; // x3
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x19
  UnityEngine_Purchasing_IExtensionProvider_c *klass; // x8
  void *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 (__fastcall **v15)(struct UnityEngine_Purchasing_IExtensionProvider_o *, _QWORD); // x0

  if ( (byte_4187ABC & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___, method);
    this = (PurchaseLogic_o *)sub_B2C35C(&PurchaseLogic_TypeInfo, v2);
    byte_4187ABC = 1;
  }
  if ( !PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider )
    return 0LL;
  IsAppleDevice = PurchaseLogic__IsAppleDevice((const MethodInfo *)this);
  if ( !IsAppleDevice )
    return 0LL;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_B2C434(IsAppleDevice, v4);
  klass = storeExtensionProvider->klass;
  v8 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v9 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 3);
  v10 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 36);
  if ( *(_WORD *)&storeExtensionProvider->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v9 )
    {
      ++v11;
      p_offset += 4;
      if ( v11 >= *(unsigned __int16 *)&storeExtensionProvider->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset + (int)v10].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AC5258(storeExtensionProvider, v9, v10, v5);
  }
  v15 = (__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, _QWORD))sub_B2C40C(
                                                                                                 *(_QWORD *)(p_method + 8),
                                                                                                 v8);
  return (UnityEngine_Purchasing_IAppleExtensions_o *)(*v15)(storeExtensionProvider, v15);
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

  if ( (byte_4187AA5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_IPurchasingModule___, method);
    sub_B2C35C(&UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo, v2);
    byte_4187AA5 = 1;
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
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_IPurchasingModule___ + 6));
    v6 = *(_WORD *)(v5 + 306);
  }
  if ( (v6 & 0x400) != 0 )
  {
    v7 = *v4[6];
    if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
      sub_AC505C(*v4[6]);
    if ( !*(_DWORD *)(v7 + 224) )
    {
      v8 = *v4[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AC505C(*v4[6]);
      j_il2cpp_runtime_class_init_0(v8);
    }
  }
  v9 = *v4[6];
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AC505C(*v4[6]);
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
  System_Char_array *v8; // x0
  System_Char_array *v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v13; // x0

  if ( (byte_4187AC0 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_string___, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v3);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_B2C35C(&string_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_5226/*"DeferredPurchaseProductIds"*/, v6);
    byte_4187AC0 = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_5226/*"DeferredPurchaseProductIds"*/,
             string_TypeInfo->static_fields->Empty,
             0LL);
  if ( System_String__op_Inequality(String, string_TypeInfo->static_fields->Empty, 0LL) )
  {
    v8 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !v8 )
      goto LABEL_10;
    v9 = v8;
    if ( !v8->max_length )
    {
      v13 = sub_B2C460(v8);
      sub_B2C400(v13, 0LL);
    }
    v8->m_Items[2] = 59;
    if ( !String )
LABEL_10:
      sub_B2C434(v8, v9);
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String, v8, 0LL);
    return (System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                          v10,
                                                          (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_string___);
  }
  else
  {
    v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v11,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  }
  return (System_Collections_Generic_List_string__o *)v11;
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
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x20

  if ( (byte_4187AB5 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____67414824,
      purchaseResultArray);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___, v6);
    sub_B2C35C(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__, v7);
    sub_B2C35C(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v8);
    sub_B2C35C(&Method_PurchaseLogic___c__DisplayClass42_0__GetFirstPurchaseResult_b__0__, v9);
    sub_B2C35C(&PurchaseLogic___c__DisplayClass42_0_TypeInfo, v10);
    byte_4187AB5 = 1;
  }
  v11 = sub_B2C42C(PurchaseLogic___c__DisplayClass42_0_TypeInfo);
  PurchaseLogic___c__DisplayClass42_0___ctor((PurchaseLogic___c__DisplayClass42_0_o *)v11, 0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  *(_QWORD *)(v11 + 16) = transactionId;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v11 + 16),
    (System_Int32_array **)transactionId,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !purchaseResultArray )
    return 0LL;
  if ( !PurchaseLogic__IsAppleDevice(v20) )
    return System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
             (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
             (const MethodInfo_1A9066C *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___);
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v11,
    Method_PurchaseLogic___c__DisplayClass42_0__GetFirstPurchaseResult_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__);
  return (PurchaseByBank_UnityIap_Request_PurchaseResult_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                               (System_Func_TSource__bool__o *)v21,
                                                               (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____67414824);
}


PurchaseLogic_o *__fastcall PurchaseLogic__GetInstance(const MethodInfo *method)
{
  __int64 v1; // x1
  PurchaseLogic_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_4187AA3 & 1) == 0 )
  {
    sub_B2C35C(&PurchaseLogicAndroid_TypeInfo, v1);
    byte_4187AA3 = 1;
  }
  v2 = (PurchaseLogic_o *)sub_B2C42C(PurchaseLogicAndroid_TypeInfo);
  PurchaseLogic___ctor(v2, v3);
  return v2;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PurchaseLogic__GetPrice(PurchaseLogic_o *this, int32_t bankShopId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  WarEntity_o *Entity; // x0
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-14h] BYREF

  v15 = bankShopId;
  if ( (byte_4187AB8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string__Invoke__, *(_QWORD *)&bankShopId);
    sub_B2C35C(&Method_DataManager_GetMasterData_BankShopMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_6028/*"Entity is not found. bankShopId="*/, v8);
    byte_4187AB8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             bankShopId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
  if ( Entity )
    return Entity->fields.priority;
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v14 = System_Int32__ToString((int32_t)&v15, 0LL);
  Instance = (DataManager_o *)System_String__Concat_44305532((System_String_o *)StringLiteral_6028/*"Entity is not found. bankShopId="*/, v14, 0LL);
  if ( !logErrorOutputAction )
LABEL_9:
    sub_B2C434(Instance, v10);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logErrorOutputAction,
    (System_Uri_o *)Instance,
    (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
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
  __int64 v9; // x1
  PurchaseBehaviour_c *v10; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ConsumableProductIdCollection; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4187AA4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v5);
    sub_B2C35C(&PurchaseBehaviour_TypeInfo, v6);
    byte_4187AA4 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( (byte_4187AA6 & 1) == 0 )
  {
    sub_B2C35C(&PurchaseLogic_TypeInfo, method);
    byte_4187AA6 = 1;
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
    v10 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v10 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v10->static_fields->ConsumableProductIdCollection;
    if ( !ConsumableProductIdCollection )
      sub_B2C434(0LL, v9);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      ConsumableProductIdCollection,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
      if ( !v12 )
        break;
      if ( !v8 )
        sub_B2C434(v12, v13);
      UnityEngine_Purchasing_ConfigurationBuilder__AddProduct(v8, (System_String_o *)v14.fields.current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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
    sub_B2C434(this, 0LL);
  PurchaseLogic__InitiatePurchase_25224224(
    this,
    bankShop->fields.googleShopId,
    bankShop->fields.googlePrice,
    finishedAction,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__InitiatePurchase_25224224(
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
  UnityEngine_Purchasing_Product_o *v20; // x1
  struct PurchaseLogic_StaticFields *static_fields; // x8
  __int64 v22; // x3
  System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x0
  const MethodInfo *v24; // x5
  int32_t v25; // w1
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x22
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 *v31; // x8
  __int64 v32; // x3
  struct UnityEngine_Purchasing_IStoreController_o *v33; // x22
  UnityEngine_Purchasing_IStoreController_c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  UnityEngine_Purchasing_Product_o *v38; // x0
  const MethodInfo *v39; // x3

  if ( (byte_4187AA7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string__Invoke__, productId);
    sub_B2C35C(&Method_System_Action_string__float__Invoke__, v12);
    sub_B2C35C(&UnityEngine_Purchasing_IStoreController_TypeInfo, v13);
    sub_B2C35C(&PurchaseLogic_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_7624/*"InitiatePurchase: FAIL. PurchasingFramework not initialized."*/, v15);
    sub_B2C35C(&StringLiteral_7625/*"InitiatePurchase: FAIL. StoreController is null."*/, v16);
    sub_B2C35C(&StringLiteral_7623/*"InitiatePurchase: FAIL. Not purchasing product, either is not found or is not available for purchase"*/, v17);
    sub_B2C35C(&StringLiteral_7626/*"InitiatePurchase: FAIL. StoreController.products is null."*/, v18);
    sub_B2C35C(&StringLiteral_7627/*"InitiatePurchase: Initialized With Mismatched ObfuscatedAccountId."*/, v19);
    byte_4187AA7 = 1;
  }
  this->fields._buyProductFinishedAction = finishedAction;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._buyProductFinishedAction,
    (System_Int32_array **)finishedAction,
    *(System_String_array ***)&price,
    (System_String_array **)finishedAction,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( (byte_4187AA6 & 1) == 0 )
  {
    sub_B2C35C(&PurchaseLogic_TypeInfo, v20);
    byte_4187AA6 = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( logErrorOutputActionSampledByRatio )
    {
      System_Action_string__float___Invoke(
        logErrorOutputActionSampledByRatio,
        (System_String_o *)StringLiteral_7624/*"InitiatePurchase: FAIL. PurchasingFramework not initialized."*/,
        0.01,
        (const MethodInfo_24CA190 *)Method_System_Action_string__float__Invoke__);
      v25 = 10;
      goto LABEL_33;
    }
LABEL_39:
    sub_B2C434(logErrorOutputActionSampledByRatio, v20);
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
        (System_Uri_o *)StringLiteral_7627/*"InitiatePurchase: Initialized With Mismatched ObfuscatedAccountId."*/,
        (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
      v25 = 13;
LABEL_33:
      PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, v25, 0, 0, 0, v24);
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
    v31 = &StringLiteral_7625/*"InitiatePurchase: FAIL. StoreController is null."*/;
LABEL_30:
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)logErrorOutputActionSampledByRatio,
      (System_Uri_o *)*v31,
      (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
LABEL_31:
    logErrorOutputActionSampledByRatio = (System_Action_string__float__o *)this->fields._logErrorOutputAction;
    if ( logErrorOutputActionSampledByRatio )
    {
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)logErrorOutputActionSampledByRatio,
        (System_Uri_o *)StringLiteral_7623/*"InitiatePurchase: FAIL. Not purchasing product, either is not found or is not available for purchase"*/,
        (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
      v25 = 11;
      goto LABEL_33;
    }
    goto LABEL_39;
  }
  klass = storeController->klass;
  if ( *(_WORD *)&storeController->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IStoreController_c **)p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      ++v28;
      p_offset += 4;
      if ( v28 >= *(unsigned __int16 *)&storeController->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_AC5258(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL, v22);
  }
  logErrorOutputActionSampledByRatio = (System_Action_string__float__o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))p_method)(
                                                                           storeController,
                                                                           *(_QWORD *)(p_method + 8));
  if ( !logErrorOutputActionSampledByRatio )
  {
    logErrorOutputActionSampledByRatio = (System_Action_string__float__o *)this->fields._logErrorOutputAction;
    if ( !logErrorOutputActionSampledByRatio )
      goto LABEL_39;
    v31 = &StringLiteral_7626/*"InitiatePurchase: FAIL. StoreController.products is null."*/;
    goto LABEL_30;
  }
  v33 = PurchaseLogic_TypeInfo->static_fields->_storeController;
  if ( !v33 )
    goto LABEL_39;
  v34 = v33->klass;
  if ( *(_WORD *)&v33->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IStoreController_c **)v36 - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&v33->klass->_2.bitflags1 )
        goto LABEL_27;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_27:
    v37 = sub_AC5258(v33, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL, v32);
  }
  logErrorOutputActionSampledByRatio = (System_Action_string__float__o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))v37)(
                                                                           v33,
                                                                           *(_QWORD *)(v37 + 8));
  if ( !logErrorOutputActionSampledByRatio )
    goto LABEL_39;
  v38 = UnityEngine_Purchasing_ProductCollection__WithID(
          (UnityEngine_Purchasing_ProductCollection_o *)logErrorOutputActionSampledByRatio,
          productId,
          0LL);
  if ( !v38 )
    goto LABEL_31;
  v20 = v38;
  if ( !v38->fields._availableToPurchase_k__BackingField )
    goto LABEL_31;
  PurchaseLogic__PurchaseIfAvailable(this, v38, price, v39);
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

  if ( (byte_4187AAB & 1) == 0 )
  {
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&value);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    byte_4187AAB = 1;
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

  if ( (byte_4187AAF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Product__Contains__, prodcut);
    byte_4187AAF = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_B2C434(0LL, prodcut);
  return System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
           (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
           (BattleBuffData_BuffData_o *)prodcut,
           (const MethodInfo_2D8C0E0 *)Method_System_Collections_Generic_HashSet_Product__Contains__);
}


bool __fastcall PurchaseLogic__IsPurchasingFrameworkInitialized(PurchaseLogic_o *this, const MethodInfo *method)
{
  struct PurchaseLogic_StaticFields *static_fields; // x8

  if ( (byte_4187AA6 & 1) == 0 )
  {
    sub_B2C35C(&PurchaseLogic_TypeInfo, method);
    byte_4187AA6 = 1;
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

  if ( (byte_4187AB3 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___,
      purchaseResultArray);
    sub_B2C35C(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__, v4);
    sub_B2C35C(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v5);
    sub_B2C35C(&Method_PurchaseLogic___c__IsServerCommitedPurchase_b__40_0__, v6);
    sub_B2C35C(&PurchaseLogic___c_TypeInfo, v7);
    byte_4187AB3 = 1;
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
    _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__40_0,
      v11,
      Method_PurchaseLogic___c__IsServerCommitedPurchase_b__40_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__);
    v12 = PurchaseLogic___c_TypeInfo->static_fields;
    v12->__9__40_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__40_0;
    sub_B2C2F8(
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
           (const MethodInfo_173783C *)Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___);
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
  if ( (byte_4187ABB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string__Invoke__, product);
    this = (PurchaseLogic_o *)sub_B2C35C(&StringLiteral_9983/*"OnDeferred product="*/, v5);
    byte_4187ABB = 1;
  }
  if ( !product
    || (metadata_k__BackingField = product->fields._metadata_k__BackingField) == 0LL
    || (logOutputAction = (System_Action_Uri__o *)v4->fields._logOutputAction,
        this = (PurchaseLogic_o *)System_String__Concat_44305532(
                                    (System_String_o *)StringLiteral_9983/*"OnDeferred product="*/,
                                    metadata_k__BackingField->fields._localizedTitle_k__BackingField,
                                    0LL),
        !logOutputAction) )
  {
    sub_B2C434(this, product);
  }
  System_Action_Uri___Invoke(
    logOutputAction,
    (System_Uri_o *)this,
    (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
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
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_o **v37; // x24
  struct System_Action_string__o *logOutputAction; // x25
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array *v45; // x26
  int32_t *v46; // x0
  System_Int32_array **v47; // x1
  System_String_o *v48; // x28
  System_Int32_array **v49; // x27
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x1
  struct System_Action_string__o *v76; // x20
  System_Collections_Generic_IEnumerable_TSource__o *pendingProducts; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v78; // x21
  WarBoardData_SquareRangeSearch_o *v79; // x0
  UnityEngine_Object_o *Instance; // x21
  Il2CppObject *v81; // x21
  PurchaseLogic_ProductFinishedAction_o *v82; // x22
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  const MethodInfo *v89; // x5
  __int64 v90; // x0
  __int64 v91; // x0
  int32_t chargeStoneNum; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v93; // [xsp+8h] [xbp-58h] BYREF
  int32_t v94; // [xsp+Ch] [xbp-54h] BYREF

  v94 = purchaseResult;
  if ( (byte_4187AB7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string__Invoke__, *(_QWORD *)&purchaseResult);
    sub_B2C35C(&Method_CommonUI_OpenStonePurchaseReciveMenu__, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_Product___, v13);
    sub_B2C35C(&Method_System_Func_Product__bool___ctor__, v14);
    sub_B2C35C(&System_Func_Product__bool__TypeInfo, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    sub_B2C35C(&PurchaseLogic_ProductFinishedAction_TypeInfo, v17);
    sub_B2C35C(&PurchaseBehaviour_Result_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_B2C35C(&string___TypeInfo, v20);
    sub_B2C35C(&Method_PurchaseLogic___c__DisplayClass44_0__OnEndPaymentStore_b__0__, v21);
    sub_B2C35C(&PurchaseLogic___c__DisplayClass44_0_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_15873/*"] "*/, v23);
    sub_B2C35C(&StringLiteral_15636/*"[ "*/, v24);
    sub_B2C35C(&StringLiteral_10840/*"PurchaseLogic:OnEndPaymentStore result "*/, v25);
    sub_B2C35C(&StringLiteral_4228/*"Confirming purchase of "*/, v26);
    sub_B2C35C(&StringLiteral_1/*""*/, v27);
    byte_4187AB7 = 1;
  }
  chargeStoneNum = 0;
  v93 = 0;
  v28 = sub_B2C42C(PurchaseLogic___c__DisplayClass44_0_TypeInfo);
  PurchaseLogic___c__DisplayClass44_0___ctor((PurchaseLogic___c__DisplayClass44_0_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_43;
  *(_QWORD *)(v28 + 16) = productId;
  v37 = (System_String_o **)(v28 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)productId, v31, v32, v33, v34, v35, v36);
  logOutputAction = this->fields._logOutputAction;
  v29 = (System_String_o *)sub_B2C374(string___TypeInfo, 5LL);
  if ( !v29 )
    goto LABEL_43;
  v45 = (System_String_array *)v29;
  v46 = (int32_t *)StringLiteral_10840/*"PurchaseLogic:OnEndPaymentStore result "*/;
  if ( StringLiteral_10840/*"PurchaseLogic:OnEndPaymentStore result "*/ )
  {
    v46 = (int32_t *)sub_B2C41C(StringLiteral_10840/*"PurchaseLogic:OnEndPaymentStore result "*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_44;
    v47 = (System_Int32_array **)StringLiteral_10840/*"PurchaseLogic:OnEndPaymentStore result "*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( !v45->max_length )
    goto LABEL_42;
  v45->m_Items[0] = (System_String_o *)v47;
  sub_B2C2F8((BattleServantConfConponent_o *)v45->m_Items, v47, v39, v40, v41, v42, v43, v44);
  v29 = (System_String_o *)j_il2cpp_value_box_0(PurchaseBehaviour_Result_TypeInfo, &v94);
  if ( !v29 )
    goto LABEL_43;
  v48 = v29;
  v49 = (System_Int32_array **)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))v29->klass->vtable._3_ToString.method)(
                                 v29,
                                 v29->klass->vtable._4_CompareTo.methodPtr);
  v46 = (int32_t *)j_il2cpp_object_unbox_0(v48);
  v94 = *v46;
  if ( v49 )
  {
    v46 = (int32_t *)sub_B2C41C(v49, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_44;
  }
  if ( v45->max_length <= 1 )
    goto LABEL_42;
  v45->m_Items[1] = (System_String_o *)v49;
  sub_B2C2F8((BattleServantConfConponent_o *)&v45->m_Items[1], v49, v50, v51, v52, v53, v54, v55);
  v46 = (int32_t *)StringLiteral_15636/*"[ "*/;
  if ( StringLiteral_15636/*"[ "*/ )
  {
    v46 = (int32_t *)sub_B2C41C(StringLiteral_15636/*"[ "*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_44;
    v62 = (System_Int32_array **)StringLiteral_15636/*"[ "*/;
  }
  else
  {
    v62 = 0LL;
  }
  if ( v45->max_length <= 2 )
    goto LABEL_42;
  v45->m_Items[2] = (System_String_o *)v62;
  sub_B2C2F8((BattleServantConfConponent_o *)&v45->m_Items[2], v62, v56, v57, v58, v59, v60, v61);
  if ( resultData )
  {
    v46 = (int32_t *)sub_B2C41C(resultData, v45->obj.klass->_1.element_class);
    if ( !v46 )
    {
LABEL_44:
      v91 = sub_B2C454(v46);
      sub_B2C400(v91, 0LL);
    }
  }
  if ( v45->max_length <= 3 )
    goto LABEL_42;
  v45->m_Items[3] = resultData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v45->m_Items[3],
    (System_Int32_array **)resultData,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  v46 = (int32_t *)StringLiteral_15873/*"] "*/;
  if ( StringLiteral_15873/*"] "*/ )
  {
    v46 = (int32_t *)sub_B2C41C(StringLiteral_15873/*"] "*/, v45->obj.klass->_1.element_class);
    if ( v46 )
    {
      v75 = (System_Int32_array **)StringLiteral_15873/*"] "*/;
      goto LABEL_26;
    }
    goto LABEL_44;
  }
  v75 = 0LL;
LABEL_26:
  if ( v45->max_length <= 4 )
  {
LABEL_42:
    v90 = sub_B2C460(v46);
    sub_B2C400(v90, 0LL);
  }
  v45->m_Items[4] = (System_String_o *)v75;
  sub_B2C2F8((BattleServantConfConponent_o *)&v45->m_Items[4], v75, v69, v70, v71, v72, v73, v74);
  v29 = System_String__Concat_44385656(v45, 0LL);
  if ( !logOutputAction )
    goto LABEL_43;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)v29,
    (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
  if ( (v94 & 0xFFFFFFFE) != 2 )
    goto LABEL_34;
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._20_UpdateMonthlyPurchasePrice.method)(
    this,
    (unsigned int)bankShopId,
    this->klass->vtable._21_GetPrice.methodPtr);
  if ( System_String__op_Inequality(*v37, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    ((void (__fastcall *)(PurchaseLogic_o *, System_String_o *, System_String_o *, Il2CppMethodPointer))this->klass->vtable._24_SendPurchaseAction.method)(
      this,
      *v37,
      transactionId,
      this->klass->vtable._25_OnDeferred.methodPtr);
  v76 = this->fields._logOutputAction;
  v29 = System_String__Concat_44305532((System_String_o *)StringLiteral_4228/*"Confirming purchase of "*/, *v37, 0LL);
  if ( !v76 )
LABEL_43:
    sub_B2C434(v29, v30);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)v76,
    (System_Uri_o *)v29,
    (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
  pendingProducts = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._pendingProducts;
  v78 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_Product__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v78,
    (Il2CppObject *)v28,
    Method_PurchaseLogic___c__DisplayClass44_0__OnEndPaymentStore_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_Product__bool___ctor__);
  v79 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          pendingProducts,
          (System_Func_TSource__bool__o *)v78,
          (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_Product___);
  if ( v79 )
    ((void (__fastcall *)(PurchaseLogic_o *, WarBoardData_SquareRangeSearch_o *, Il2CppMethodPointer))this->klass->vtable._18_ConfirmPurchase.method)(
      this,
      v79,
      this->klass->vtable._19_ExtractReceiptContents.methodPtr);
LABEL_34:
  if ( !this->fields._buyProductFinishedAction && v94 != 3 )
  {
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    {
      v81 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v82 = (PurchaseLogic_ProductFinishedAction_o *)sub_B2C42C(PurchaseLogic_ProductFinishedAction_TypeInfo);
      PurchaseLogic_ProductFinishedAction___ctor(v82, v81, Method_CommonUI_OpenStonePurchaseReciveMenu__, 0LL);
      this->fields._buyProductFinishedAction = v82;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields._buyProductFinishedAction,
        (System_Int32_array **)v82,
        v83,
        v84,
        v85,
        v86,
        v87,
        v88);
    }
  }
  chargeStoneNum = 0;
  v93 = 0;
  ((void (__fastcall *)(PurchaseLogic_o *, struct PurchaseByBank_UnityIap_Request_PurchaseResult_array *, int32_t *, int32_t *, Il2CppMethodPointer))this->klass->vtable._22_GetAddedStoneNum.method)(
    this,
    this->fields._purchaseResultArray,
    &v93,
    &chargeStoneNum,
    this->klass->vtable._23_ShowPurchaseFailedNotification.methodPtr);
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, v94, 0, v93, chargeStoneNum, v89);
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
  PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray; // x1
  PurchaseLogic_o *v27; // x0
  const MethodInfo *v28; // x2
  System_String_o *return_type; // x20
  const MethodInfo *v30; // x6
  __int64 *v31; // x8
  System_String_o *currentTransactionId; // x5
  int32_t v33; // w1
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

  if ( (byte_4187AB4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string__Invoke__, result);
    sub_B2C35C(&Method_DataManager_GetMasterData_BankShopMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_11319/*"ReceiptError"*/, v8);
    sub_B2C35C(&StringLiteral_21583/*"purchaseResultArray is null."*/, v9);
    sub_B2C35C(&StringLiteral_6990/*"Google Play canceled on restore purchase"*/, v10);
    sub_B2C35C(&StringLiteral_10839/*"PurchaseLogic:EndSendReceiptData ["*/, v11);
    sub_B2C35C(&StringLiteral_21717/*"receipt_error"*/, v12);
    sub_B2C35C(&StringLiteral_17201/*"canceled_purchase_error"*/, v13);
    sub_B2C35C(&StringLiteral_10842/*"PurchaseResult NotFound Error"*/, v14);
    sub_B2C35C(&StringLiteral_10843/*"PurchaseResult NotFound."*/, v15);
    sub_B2C35C(&StringLiteral_10629/*"PaymentOk"*/, v16);
    sub_B2C35C(&StringLiteral_6991/*"Google Play pending on restore purchase"*/, v17);
    sub_B2C35C(&StringLiteral_10838/*"PurchaseBehaviour.Result.SUCCESS_WITHOUT_NOTICE _currentTransactionId="*/, v18);
    sub_B2C35C(&StringLiteral_6138/*"Error["*/, v19);
    sub_B2C35C(&StringLiteral_21451/*"pending_purchase_error"*/, v20);
    sub_B2C35C(&StringLiteral_1/*""*/, v21);
    sub_B2C35C(&StringLiteral_5226/*"DeferredPurchaseProductIds"*/, v22);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v23);
    byte_4187AB4 = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  Instance = System_String__Concat_44307816(
               (System_String_o *)StringLiteral_10839/*"PurchaseLogic:EndSendReceiptData ["*/,
               result,
               (System_String_o *)StringLiteral_15870/*"]"*/,
               0LL);
  if ( !logOutputAction )
    goto LABEL_49;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)Instance,
    (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
  return_type = (System_String_o *)StringLiteral_1/*""*/;
  if ( !result )
    goto LABEL_17;
  if ( !result->fields.m_stringLength )
  {
    purchaseResultArray = this->fields._purchaseResultArray;
    if ( purchaseResultArray )
    {
      IsServerCommitedPurchase = PurchaseLogic__IsServerCommitedPurchase(v27, purchaseResultArray, v28);
      if ( IsServerCommitedPurchase )
      {
        v36 = this->fields._logOutputAction;
        Instance = System_String__Concat_44305532(
                     (System_String_o *)StringLiteral_10838/*"PurchaseBehaviour.Result.SUCCESS_WITHOUT_NOTICE _currentTransactionId="*/,
                     this->fields._currentTransactionId,
                     0LL);
        if ( !v36 )
          goto LABEL_49;
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)v36,
          (System_Uri_o *)Instance,
          (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
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
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_49;
            Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BankShopMaster___);
            if ( !Instance )
              goto LABEL_49;
            Entity = (const MethodInfo *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                           purchasedBankShopId,
                                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
            if ( Entity )
            {
              return_type = (System_String_o *)Entity->return_type;
              if ( PurchaseLogic__IsAppleDevice(Entity) )
              {
                Instance = (void *)UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5226/*"DeferredPurchaseProductIds"*/, 0LL);
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
                        v54 = sub_B2C460(Instance);
                        sub_B2C400(v54, 0LL);
                      }
                      v51 = v45->m_Items[v50];
                      if ( !v51 )
                        break;
                      v52 = v51->fields.purchasedBankShopId;
                      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !Instance )
                        break;
                      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BankShopMaster___);
                      if ( !Instance )
                        break;
                      Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                   v52,
                                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
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
                    sub_B2C434(Instance, purchaseResultArray);
                  }
                }
              }
              if ( UnityEngine_Application__get_platform(0LL) == 11 )
                goto LABEL_37;
            }
LABEL_38:
            currentTransactionId = this->fields._currentTransactionId;
            v47 = this;
            v33 = v37;
            v48 = return_type;
            v38 = (System_String_o *)StringLiteral_10629/*"PaymentOk"*/;
            v49 = purchasedBankShopId;
            goto LABEL_35;
          }
        }
        Instance = this->fields._logErrorOutputAction;
        if ( Instance )
        {
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)Instance,
            (System_Uri_o *)StringLiteral_10843/*"PurchaseResult NotFound."*/,
            (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
          v39 = &StringLiteral_10842/*"PurchaseResult NotFound Error"*/;
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
        (System_Uri_o *)StringLiteral_21583/*"purchaseResultArray is null."*/,
        (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
    }
    v37 = 2;
    goto LABEL_21;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21451/*"pending_purchase_error"*/, 0LL) )
  {
    if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_17201/*"canceled_purchase_error"*/, 0LL) )
    {
      v31 = &StringLiteral_6990/*"Google Play canceled on restore purchase"*/;
      currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
      v33 = 16;
      goto LABEL_14;
    }
    if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21717/*"receipt_error"*/, 0LL) )
    {
      v39 = &StringLiteral_11319/*"ReceiptError"*/;
LABEL_33:
      v38 = (System_String_o *)*v39;
      currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
      v33 = 6;
      goto LABEL_34;
    }
LABEL_17:
    v40 = System_String__Concat_44307816(
            (System_String_o *)StringLiteral_6138/*"Error["*/,
            result,
            (System_String_o *)StringLiteral_15870/*"]"*/,
            0LL);
    currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
    v33 = 6;
    v38 = v40;
    goto LABEL_34;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, __int64, Il2CppMethodPointer))this->klass->vtable._30_SetExistsDeferredPurchase.method)(
    this,
    1LL,
    this->klass->vtable._31_IsDeferredPurchaseExists.methodPtr);
  v31 = &StringLiteral_6991/*"Google Play pending on restore purchase"*/;
  currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
  v33 = 15;
LABEL_14:
  v38 = (System_String_o *)*v31;
LABEL_34:
  v47 = this;
  v48 = return_type;
  v49 = 0;
LABEL_35:
  PurchaseLogic__OnEndPaymentStore(v47, v33, v38, v48, v49, currentTransactionId, v30);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__OnInitializeFailed(PurchaseLogic_o *this, int32_t error, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x19
  System_String_o *v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  System_String_o *v12; // x21
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v14; // x20
  System_String_o *v15; // x21
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  v16 = error;
  if ( (byte_4187ABD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string__Invoke__, *(_QWORD *)&error);
    sub_B2C35C(&Method_System_Action_string__float__Invoke__, v5);
    sub_B2C35C(&UnityEngine_Purchasing_InitializationFailureReason_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_10011/*"OnInitializeFailed InitializationFailureReason:"*/, v7);
    byte_4187ABD = 1;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.method)(
    this,
    this->klass->vtable._30_SetExistsDeferredPurchase.methodPtr,
    method);
  if ( (unsigned int)error <= 1 )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    v9 = (System_String_o *)j_il2cpp_value_box_0(UnityEngine_Purchasing_InitializationFailureReason_TypeInfo, &v16);
    if ( v9 )
    {
      v11 = v9;
      v12 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                                 v9,
                                 v9->klass->vtable._4_CompareTo.methodPtr);
      v16 = *(_DWORD *)j_il2cpp_object_unbox_0(v11);
      v9 = System_String__Concat_44305532((System_String_o *)StringLiteral_10011/*"OnInitializeFailed InitializationFailureReason:"*/, v12, 0LL);
      if ( logErrorOutputActionSampledByRatio )
      {
        System_Action_string__float___Invoke(
          logErrorOutputActionSampledByRatio,
          v9,
          0.01,
          (const MethodInfo_24CA190 *)Method_System_Action_string__float__Invoke__);
        return;
      }
    }
LABEL_10:
    sub_B2C434(v9, v10);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v9 = (System_String_o *)j_il2cpp_value_box_0(UnityEngine_Purchasing_InitializationFailureReason_TypeInfo, &v16);
  if ( !v9 )
    goto LABEL_10;
  v14 = v9;
  v15 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                             v9,
                             v9->klass->vtable._4_CompareTo.methodPtr);
  v16 = *(_DWORD *)j_il2cpp_object_unbox_0(v14);
  v9 = System_String__Concat_44305532((System_String_o *)StringLiteral_10011/*"OnInitializeFailed InitializationFailureReason:"*/, v15, 0LL);
  if ( !logErrorOutputAction )
    goto LABEL_10;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logErrorOutputAction,
    (System_Uri_o *)v9,
    (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
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
  __int64 v12; // x1
  struct System_Action_string__o *logOutputAction; // x0
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct PurchaseLogic_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  PurchaseLogic_o *v28; // x0
  const MethodInfo *v29; // x1
  UnityEngine_Purchasing_IAppleExtensions_o *AppleExtension; // x0
  UnityEngine_Purchasing_IAppleExtensions_o *v31; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v32; // x21
  __int64 v33; // x3
  UnityEngine_Purchasing_IAppleExtensions_c *klass; // x8
  unsigned __int64 v35; // x10
  UnityEngine_Purchasing_IAppleExtensions_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4187ABA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string__Invoke__, controller);
    sub_B2C35C(&Method_System_Action_Product___ctor__, v7);
    sub_B2C35C(&System_Action_Product__TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v9);
    sub_B2C35C(&PurchaseLogic_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_10012/*"OnInitialized: PASS"*/, v11);
    byte_4187ABA = 1;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer, UnityEngine_Purchasing_IExtensionProvider_o *, const MethodInfo *))this->klass->vtable._28_EnableCrashReporterOnInitializeSucceeded.method)(
    this,
    this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.methodPtr,
    extensions,
    method);
  logOutputAction = this->fields._logOutputAction;
  if ( !logOutputAction )
    sub_B2C434(0LL, v12);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)StringLiteral_10012/*"OnInitialized: PASS"*/,
    (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
  static_fields = (BattleServantConfConponent_o *)PurchaseLogic_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)controller;
  sub_B2C2F8(static_fields, (System_Int32_array **)controller, v15, v16, v17, v18, v19, v20);
  v21 = PurchaseLogic_TypeInfo->static_fields;
  v21->_storeExtensionProvider = extensions;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v21->_storeExtensionProvider,
    (System_Int32_array **)extensions,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  AppleExtension = PurchaseLogic__GetAppleExtension(v28, v29);
  if ( AppleExtension )
  {
    v31 = AppleExtension;
    v32 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Product__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v32,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._26_OnInitializeFailed.methodPtr,
      (const MethodInfo_24BBAD8 *)Method_System_Action_Product___ctor__);
    klass = v31->klass;
    if ( *(_WORD *)&v31->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      p_offset = (UnityEngine_Purchasing_IAppleExtensions_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
      {
        ++v35;
        p_offset += 2;
        if ( v35 >= *(unsigned __int16 *)&v31->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(v31, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 2LL, v33);
    }
    (*(void (__fastcall **)(UnityEngine_Purchasing_IAppleExtensions_o *, System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *, _QWORD))p_method)(
      v31,
      v32,
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
  const MethodInfo *v20; // x2
  System_Action_Uri__o *logErrorOutputAction; // x20
  Il2CppObject *v22; // x0
  System_Action_Uri__o *v23; // x23
  Il2CppObject *v24; // x0
  UnityEngine_Object_o *Instance; // x23
  Il2CppObject *v26; // x23
  PurchaseLogic_ProductFinishedAction_o *v27; // x24
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  __int64 v35; // x22
  const MethodInfo *v36; // x5
  int32_t v37; // w1
  int32_t v38; // [xsp+8h] [xbp-38h] BYREF
  int v39; // [xsp+Ch] [xbp-34h] BYREF
  System_Decimal_o v40; // 0:x0.16

  v5 = product;
  v6 = this;
  if ( (byte_4187ABF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string__Invoke__, product);
    sub_B2C35C(&Method_CommonUI_OpenStonePurchaseReciveMenu__, v7);
    sub_B2C35C(&System_Decimal_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&PurchaseLogic_ProductFinishedAction_TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B2C35C(&string_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_10045/*"OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}"*/, v15);
    this = (PurchaseLogic_o *)sub_B2C35C(&StringLiteral_5209/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/, v16);
    byte_4187ABF = 1;
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
                              (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(v6, Empty, v20);
    logErrorOutputAction = (System_Action_Uri__o *)v6->fields._logErrorOutputAction;
    v39 = 4;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, &v39);
    this = (PurchaseLogic_o *)System_String__Format_44301068(
                                (System_String_o *)StringLiteral_5209/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/,
                                (Il2CppObject *)Empty,
                                v22,
                                0LL);
    if ( !logErrorOutputAction )
      goto LABEL_32;
    System_Action_Uri___Invoke(
      logErrorOutputAction,
      (System_Uri_o *)this,
      (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
    failureReason = 4;
  }
  else
  {
LABEL_13:
    if ( failureReason != 4 )
    {
      v23 = (System_Action_Uri__o *)v6->fields._logErrorOutputAction;
      v38 = failureReason;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, &v38);
      this = (PurchaseLogic_o *)System_String__Format_44301068(
                                  (System_String_o *)StringLiteral_10045/*"OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}"*/,
                                  (Il2CppObject *)Empty,
                                  v24,
                                  0LL);
      if ( !v23 )
        goto LABEL_32;
      System_Action_Uri___Invoke(
        v23,
        (System_Uri_o *)this,
        (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
    }
  }
  if ( !v6->fields._buyProductFinishedAction )
  {
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (PurchaseLogic_o *)UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v26 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v27 = (PurchaseLogic_ProductFinishedAction_o *)sub_B2C42C(PurchaseLogic_ProductFinishedAction_TypeInfo);
      PurchaseLogic_ProductFinishedAction___ctor(v27, v26, Method_CommonUI_OpenStonePurchaseReciveMenu__, 0LL);
      v6->fields._buyProductFinishedAction = v27;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v6->fields._buyProductFinishedAction,
        (System_Int32_array **)v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
  }
  if ( v5 )
  {
    metadata_k__BackingField = v5->fields._metadata_k__BackingField;
    if ( metadata_k__BackingField )
    {
      v35 = *(_QWORD *)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.flags;
      v5 = *(UnityEngine_Purchasing_Product_o **)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.lo;
      if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      }
      *(_QWORD *)&v40.fields.flags = v35;
      *(_QWORD *)&v40.fields.lo = v5;
      LODWORD(v5) = System_Decimal__ToInt32(v40, 0LL);
      goto LABEL_28;
    }
LABEL_32:
    sub_B2C434(this, product);
  }
LABEL_28:
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._23_ShowPurchaseFailedNotification.method)(
    v6,
    (unsigned int)failureReason,
    v6->klass->vtable._24_SendPurchaseAction.methodPtr);
  if ( (unsigned int)failureReason > 6 )
    v37 = 6;
  else
    v37 = dword_31A1EF0[failureReason];
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(v6, v37, (int32_t)v5, 0, 0, v36);
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
  PurchaseBehaviour_c *v25; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v27; // x23
  __int64 v28; // x8
  __int64 v29; // x8
  struct System_Action_string__o *logOutputAction; // x21
  Il2CppObject *v31; // x1
  const MethodInfo *v32; // x2
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  struct System_Action_string__o *v34; // x21
  System_String_o *v35; // x0
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  struct System_Decimal_o localizedPrice_k__BackingField; // [xsp+0h] [xbp-40h] BYREF
  System_Decimal_o v40; // 0:x0.16

  if ( (byte_4187ABE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string__Invoke__, purchaseEventArgs);
    sub_B2C35C(&Method_BasicHelper_Any_string___, v5);
    sub_B2C35C(&Method_System_Func_string__bool___ctor__, v6);
    sub_B2C35C(&System_Func_string__bool__TypeInfo, v7);
    sub_B2C35C(&PurchaseBehaviour_TypeInfo, v8);
    sub_B2C35C(&Method_PurchaseLogic___c__DisplayClass57_0__ProcessPurchase_b__0__, v9);
    sub_B2C35C(&PurchaseLogic___c__DisplayClass57_0_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_10791/*"ProcessPurchase: product is null"*/, v11);
    sub_B2C35C(&StringLiteral_10790/*"ProcessPurchase: PASS. Product: '{0}'"*/, v12);
    sub_B2C35C(&StringLiteral_10789/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/, v13);
    sub_B2C35C(&StringLiteral_10756/*"Price: "*/, v14);
    byte_4187ABE = 1;
  }
  localizedPrice_k__BackingField = (struct System_Decimal_o)0LL;
  v15 = sub_B2C42C(PurchaseLogic___c__DisplayClass57_0_TypeInfo);
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
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 16), purchasedProduct_k__BackingField, v17, v18, v19, v20, v21, v22);
  if ( *(_QWORD *)(v15 + 16) )
  {
    v25 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v25 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v25->static_fields->ConsumableProductIdCollection;
    v27 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_string__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v27,
      (Il2CppObject *)v15,
      Method_PurchaseLogic___c__DisplayClass57_0__ProcessPurchase_b__0__,
      (const MethodInfo_2711C04 *)Method_System_Func_string__bool___ctor__);
    logErrorOutputAction = (System_Uri_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                             ConsumableProductIdCollection,
                                             (System_Func_T__bool__o *)v27,
                                             (const MethodInfo_17266AC *)Method_BasicHelper_Any_string___);
    v28 = *(_QWORD *)(v15 + 16);
    if ( v28 )
    {
      v29 = *(_QWORD *)(v28 + 16);
      if ( v29 )
      {
        logOutputAction = this->fields._logOutputAction;
        v31 = *(Il2CppObject **)(v29 + 16);
        if ( ((unsigned __int8)logErrorOutputAction & 1) == 0 )
        {
          logErrorOutputAction = (System_Uri_o *)System_String__Format((System_String_o *)StringLiteral_10789/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/, v31, 0LL);
          if ( !logOutputAction )
            goto LABEL_27;
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)logOutputAction,
            logErrorOutputAction,
            (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
          goto LABEL_25;
        }
        logErrorOutputAction = (System_Uri_o *)System_String__Format((System_String_o *)StringLiteral_10790/*"ProcessPurchase: PASS. Product: '{0}'"*/, v31, 0LL);
        if ( logOutputAction )
        {
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)logOutputAction,
            logErrorOutputAction,
            (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
          if ( *v24 )
          {
            metadata_k__BackingField = (*v24)->fields._metadata_k__BackingField;
            if ( metadata_k__BackingField )
            {
              v34 = this->fields._logOutputAction;
              *(_QWORD *)&v40.fields.flags = &localizedPrice_k__BackingField;
              *(_QWORD *)&v40.fields.lo = 0LL;
              localizedPrice_k__BackingField = metadata_k__BackingField->fields._localizedPrice_k__BackingField;
              v35 = System_Decimal__ToString(v40, v32);
              logErrorOutputAction = (System_Uri_o *)System_String__Concat_44305532(
                                                       (System_String_o *)StringLiteral_10756/*"Price: "*/,
                                                       v35,
                                                       0LL);
              if ( v34 )
              {
                System_Action_Uri___Invoke(
                  (System_Action_Uri__o *)v34,
                  logErrorOutputAction,
                  (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
                if ( *v24 )
                {
                  logErrorOutputAction = (System_Uri_o *)this->fields._logOutputAction;
                  if ( logErrorOutputAction )
                  {
                    System_Action_Uri___Invoke(
                      (System_Action_Uri__o *)logErrorOutputAction,
                      (System_Uri_o *)(*v24)->fields._receipt_k__BackingField,
                      (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
                    PurchaseLogic__ValidateReceipt(this, *v24, v36);
LABEL_25:
                    PurchaseLogic__AddPendingPurchase(this, *v24, v37);
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
    sub_B2C434(logErrorOutputAction, purchasedProduct_k__BackingField);
  }
  logErrorOutputAction = (System_Uri_o *)this->fields._logErrorOutputAction;
  if ( !logErrorOutputAction )
    goto LABEL_27;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logErrorOutputAction,
    (System_Uri_o *)StringLiteral_10791/*"ProcessPurchase: product is null"*/,
    (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
  return 1;
}


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
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x0
  const MethodInfo *v26; // x2
  int32_t CumulativeAmount; // w2
  const MethodInfo *v28; // x5
  NetworkManager_ResultCallbackFunc_o *v29; // x19
  PurchaseLogic_o *v30; // x0
  const MethodInfo *v31; // x2

  if ( (byte_4187AA8 & 1) == 0 )
  {
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, product);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B2C35C(&Method_PurchaseLogic___c__DisplayClass27_0__PurchaseIfAvailable_b__0__, v8);
    sub_B2C35C(&PurchaseLogic___c__DisplayClass27_0_TypeInfo, v9);
    byte_4187AA8 = 1;
  }
  v10 = sub_B2C42C(PurchaseLogic___c__DisplayClass27_0_TypeInfo);
  PurchaseLogic___c__DisplayClass27_0___ctor((PurchaseLogic___c__DisplayClass27_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 32) = product;
  *(_DWORD *)(v10 + 24) = price;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)product, v19, v20, v21, v22, v23, v24);
  if ( PurchaseLogic__IsAppleDevice(v25)
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
    v29 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
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
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v20; // x21
  PurchaseLogic_o *v21; // x0
  const MethodInfo *v22; // x2

  if ( (byte_4187AC3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__RemoveAll__, productId);
    sub_B2C35C(&Method_System_Predicate_string___ctor__, v4);
    sub_B2C35C(&System_Predicate_string__TypeInfo, v5);
    sub_B2C35C(&Method_PurchaseLogic___c__DisplayClass76_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__, v6);
    sub_B2C35C(&PurchaseLogic___c__DisplayClass76_0_TypeInfo, v7);
    byte_4187AC3 = 1;
  }
  v8 = sub_B2C42C(PurchaseLogic___c__DisplayClass76_0_TypeInfo);
  PurchaseLogic___c__DisplayClass76_0___ctor((PurchaseLogic___c__DisplayClass76_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_7;
  *(_QWORD *)(v8 + 16) = productId;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)productId, v11, v12, v13, v14, v15, v16);
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v8 + 16), 0LL);
  if ( IsNullOrEmpty )
    return;
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)IsNullOrEmpty,
                                                v18);
  v20 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_string__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v20,
    (Il2CppObject *)v8,
    Method_PurchaseLogic___c__DisplayClass76_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_string___ctor__);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
LABEL_7:
    sub_B2C434(v9, v10);
  v21 = (PurchaseLogic_o *)System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
                             (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
                             (System_Predicate_T__o *)v20,
                             (const MethodInfo_2EF5FB0 *)Method_System_Collections_Generic_List_string__RemoveAll__);
  PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(v21, DeferredPurchaseProductIdsFromPlayerPrefs, v22);
}


void __fastcall PurchaseLogic__RemovePendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0

  if ( (byte_4187AAE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Product__Contains__, product);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Product__Remove__, v5);
    byte_4187AAE = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_8;
  if ( System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
         (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
         (BattleBuffData_BuffData_o *)product,
         (const MethodInfo_2D8C0E0 *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
  {
    pendingProducts = this->fields._pendingProducts;
    if ( pendingProducts )
    {
      System_Collections_Generic_HashSet_BattleBuffData_BuffData___Remove(
        (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
        (BattleBuffData_BuffData_o *)product,
        (const MethodInfo_2D8C290 *)Method_System_Collections_Generic_HashSet_Product__Remove__);
      return;
    }
LABEL_8:
    sub_B2C434(pendingProducts, product);
  }
}


void __fastcall PurchaseLogic__RequestGameServerBankStatus(
        PurchaseLogic_o *this,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  BankStatusRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v6; // x1

  if ( (byte_4187AA9 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_BankStatusRequest___, callback);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    byte_4187AA9 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (BankStatusRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               callback,
                                                               (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_BankStatusRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B2C434(0LL, v6);
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
  __int64 v15; // x3
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x20
  UnityEngine_Purchasing_IExtensionProvider_c *klass; // x8
  void *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Uri_o *v24; // x1
  const MethodInfo_24BBAEC *v25; // x2
  struct System_Action_string__o *v26; // x19
  System_Action_Uri__o *v27; // x20
  System_String_o *v28; // x21
  __int64 (__fastcall **v29)(struct UnityEngine_Purchasing_IExtensionProvider_o *, _QWORD); // x0
  __int64 v30; // x20
  System_Action_bool__o *v31; // x21
  __int64 v32; // x3
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  UnityEngine_Purchasing_IAppleExtensions_c **v35; // x11
  __int64 v36; // x0
  int32_t platform; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4187AAC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string__Invoke__, method);
    sub_B2C35C(&Method_System_Action_bool___ctor__, v3);
    sub_B2C35C(&System_Action_bool__TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___, v6);
    sub_B2C35C(&Method_PurchaseLogic__RestorePurchases_b__31_0__, v7);
    sub_B2C35C(&PurchaseLogic_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_RuntimePlatform_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_11481/*"RestorePurchases FAIL. Not supported on this platform. Current = "*/, v10);
    sub_B2C35C(&StringLiteral_11483/*"RestorePurchases started ..."*/, v11);
    sub_B2C35C(&StringLiteral_11480/*"RestorePurchases FAIL. Not initialized."*/, v12);
    byte_4187AAC = 1;
  }
  platform = 0;
  if ( (byte_4187AA6 & 1) == 0 )
  {
    sub_B2C35C(&PurchaseLogic_TypeInfo, method);
    byte_4187AA6 = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    logOutputAction = (System_Action_Uri__o *)this->fields._logOutputAction;
    if ( !logOutputAction )
      goto LABEL_31;
    v24 = (System_Uri_o *)StringLiteral_11480/*"RestorePurchases FAIL. Not initialized."*/;
    v25 = (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__;
    goto LABEL_18;
  }
  if ( UnityEngine_Application__get_platform(0LL) != 8 && UnityEngine_Application__get_platform(0LL) != 1 )
  {
    v26 = this->fields._logOutputAction;
    platform = UnityEngine_Application__get_platform(0LL);
    logOutputAction = (System_Action_Uri__o *)j_il2cpp_value_box_0(UnityEngine_RuntimePlatform_TypeInfo, &platform);
    if ( !logOutputAction )
      goto LABEL_31;
    v27 = logOutputAction;
    v28 = (System_String_o *)((__int64 (__fastcall *)(System_Action_Uri__o *, Il2CppMethodPointer))logOutputAction->klass->vtable._3_ToString.method)(
                               logOutputAction,
                               logOutputAction->klass->vtable._4_unknown.methodPtr);
    platform = *(_DWORD *)j_il2cpp_object_unbox_0(v27);
    logOutputAction = (System_Action_Uri__o *)System_String__Concat_44305532(
                                                (System_String_o *)StringLiteral_11481/*"RestorePurchases FAIL. Not supported on this platform. Current = "*/,
                                                v28,
                                                0LL);
    if ( !v26 )
      goto LABEL_31;
    v24 = (System_Uri_o *)logOutputAction;
    logOutputAction = (System_Action_Uri__o *)v26;
    v25 = (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__;
LABEL_18:
    System_Action_Uri___Invoke(logOutputAction, v24, v25);
    return;
  }
  logOutputAction = (System_Action_Uri__o *)this->fields._logOutputAction;
  if ( !logOutputAction )
    goto LABEL_31;
  System_Action_Uri___Invoke(
    logOutputAction,
    (System_Uri_o *)StringLiteral_11483/*"RestorePurchases started ..."*/,
    (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    goto LABEL_31;
  klass = storeExtensionProvider->klass;
  v18 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v19 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 3);
  v20 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 36);
  if ( *(_WORD *)&storeExtensionProvider->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v19 )
    {
      ++v21;
      p_offset += 4;
      if ( v21 >= *(unsigned __int16 *)&storeExtensionProvider->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    p_method = (__int64)&klass->vtable[*p_offset + (int)v20].method;
  }
  else
  {
LABEL_15:
    p_method = sub_AC5258(storeExtensionProvider, v19, v20, v15);
  }
  v29 = (__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, _QWORD))sub_B2C40C(
                                                                                                 *(_QWORD *)(p_method + 8),
                                                                                                 v18);
  v30 = (*v29)(storeExtensionProvider, v29);
  v31 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v31,
    (Il2CppObject *)this,
    Method_PurchaseLogic__RestorePurchases_b__31_0__,
    (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
  if ( !v30 )
LABEL_31:
    sub_B2C434(logOutputAction, method);
  v33 = *(_QWORD *)v30;
  if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
  {
    v34 = 0LL;
    v35 = (UnityEngine_Purchasing_IAppleExtensions_c **)(*(_QWORD *)(v33 + 176) + 8LL);
    while ( *(v35 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      ++v34;
      v35 += 2;
      if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
        goto LABEL_28;
    }
    v36 = v33 + 16LL * (*(_DWORD *)v35 + 1) + 312;
  }
  else
  {
LABEL_28:
    v36 = sub_AC5258(v30, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 1LL, v32);
  }
  (*(void (__fastcall **)(__int64, System_Action_bool__o *, _QWORD))v36)(v30, v31, *(_QWORD *)(v36 + 8));
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
  __int64 v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **current; // x1
  System_String_o **v27; // x20
  System_String_o *v28; // x0
  PurchaseBehaviour_c *v29; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v31; // x23
  System_String_o *v32; // x21
  System_String_o *a; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4187AC1 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_string___, deferredPurchaseProductIdList);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_B2C35C(&Method_System_Func_string__bool___ctor__, v7);
    sub_B2C35C(&System_Func_string__bool__TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v9);
    sub_B2C35C(&PurchaseBehaviour_TypeInfo, v10);
    sub_B2C35C(&string_TypeInfo, v11);
    sub_B2C35C(&Method_PurchaseLogic___c__DisplayClass74_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__, v12);
    sub_B2C35C(&PurchaseLogic___c__DisplayClass74_0_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_1262/*";"*/, v14);
    sub_B2C35C(&StringLiteral_1/*""*/, v15);
    sub_B2C35C(&StringLiteral_5226/*"DeferredPurchaseProductIds"*/, v16);
    byte_4187AC1 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( deferredPurchaseProductIdList )
  {
    a = (System_String_o *)StringLiteral_1/*""*/;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v34,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)deferredPurchaseProductIdList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v35 = v34;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v17 = sub_B2C42C(PurchaseLogic___c__DisplayClass74_0_TypeInfo);
      PurchaseLogic___c__DisplayClass74_0___ctor((PurchaseLogic___c__DisplayClass74_0_o *)v17, 0LL);
      if ( !v17 )
        sub_B2C434(v18, v19);
      current = (System_Int32_array **)v35.fields.current;
      *(_QWORD *)(v17 + 16) = v35.fields.current;
      v27 = (System_String_o **)(v17 + 16);
      sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 16), current, v20, v21, v22, v23, v24, v25);
      if ( *(_QWORD *)(v17 + 16) )
      {
        v28 = System_String__Trim_44292864(*(System_String_o **)(v17 + 16), 0LL);
        if ( !System_String__op_Equality(v28, string_TypeInfo->static_fields->Empty, 0LL) )
        {
          v29 = PurchaseBehaviour_TypeInfo;
          if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
            v29 = PurchaseBehaviour_TypeInfo;
          }
          ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v29->static_fields->ConsumableProductIdCollection;
          v31 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_string__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v31,
            (Il2CppObject *)v17,
            Method_PurchaseLogic___c__DisplayClass74_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__,
            (const MethodInfo_2711C04 *)Method_System_Func_string__bool___ctor__);
          if ( BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                 ConsumableProductIdCollection,
                 (System_Func_T__bool__o *)v31,
                 (const MethodInfo_17266AC *)Method_BasicHelper_Any_string___) )
          {
            v32 = a;
            if ( System_String__op_Inequality(a, string_TypeInfo->static_fields->Empty, 0LL) )
              v32 = System_String__Concat_44305532(a, (System_String_o *)StringLiteral_1262/*";"*/, 0LL);
            a = System_String__Concat_44305532(v32, *v27, 0LL);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( System_String__IsNullOrEmpty(a, 0LL) )
      UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5226/*"DeferredPurchaseProductIds"*/, 0LL);
    else
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_5226/*"DeferredPurchaseProductIds"*/, a, 0LL);
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
  __int64 v10; // x1
  int v11; // w8
  void *v12; // x21
  unsigned int v13; // w22
  __int64 v14; // x23
  int32_t v15; // w20
  int v16; // w21
  __int64 v17; // x0

  if ( (byte_4187AB9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_BankShopMaster___, paymentProductId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_8282/*"JPY"*/, v8);
    byte_4187AB9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = BankShopMaster__GetEnableEntitiyList((BankShopMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_18;
  v11 = *((_DWORD *)Instance + 6);
  v12 = Instance;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= v11 )
      {
        v17 = sub_B2C460(Instance);
        sub_B2C400(v17, 0LL);
      }
      v14 = *((_QWORD *)v12 + (int)v13 + 4);
      if ( !v14 || !paymentProductId )
        goto LABEL_18;
      Instance = (void *)System_String__Equals_44292872(paymentProductId, *(System_String_o **)(v14 + 32), 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      v11 = *((_DWORD *)v12 + 6);
      if ( (int)++v13 >= v11 )
        return;
    }
    v15 = *(_DWORD *)(v14 + 16);
    if ( (v15 & 0x80000000) == 0 )
    {
      v16 = *(_DWORD *)(v14 + 52);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Instance )
      {
        AdManager__TrackPurchase(
          (AdManager_o *)Instance,
          v15,
          (double)v16,
          (System_String_o *)StringLiteral_8282/*"JPY"*/,
          transactionId,
          0LL);
        return;
      }
LABEL_18:
      sub_B2C434(Instance, v10);
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
  __int64 v24; // x1
  struct System_Action_string__o *logOutputAction; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  NetworkManager_ResultCallbackFunc_o *v32; // x22
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_String_o *receiptBase64Str; // x22
  System_String_o *googleSignatureStr; // x21
  System_String_o *payloadJsonStr; // x23
  PurchaseByBank_UnityIap_Request_o *v37; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v38; // x25
  const MethodInfo *v39; // x6
  struct System_Action_string__o *logErrorOutputAction; // x20
  System_String_o *v41; // x0
  const MethodInfo *v42; // x2
  int64_t UserId; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4187AB2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string__Invoke__, receiptContents);
    sub_B2C35C(&Method_System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult_____ctor__, v12);
    sub_B2C35C(&System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo, v13);
    sub_B2C35C(&Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    sub_B2C35C(&Method_PurchaseLogic_OnEndSendReceiptData__, v16);
    sub_B2C35C(&Method_PurchaseLogic__SendReceiptData_b__39_0__, v17);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v18);
    sub_B2C35C(&StringLiteral_23073/*"user_id_error"*/, v19);
    sub_B2C35C(&StringLiteral_10841/*"PurchaseLogic:SendReceiptData ["*/, v20);
    sub_B2C35C(&StringLiteral_15100/*"UserId error: UserId="*/, v21);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v22);
    byte_4187AB2 = 1;
  }
  UserId = 0LL;
  this->fields._currentTransactionId = currentTransactionId;
  sub_B2C2F8(
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
  v23 = System_String__Concat_44307816(
          (System_String_o *)StringLiteral_10841/*"PurchaseLogic:SendReceiptData ["*/,
          receiptContents->fields.payloadJsonStr,
          (System_String_o *)StringLiteral_15870/*"]"*/,
          0LL);
  if ( !logOutputAction )
    goto LABEL_19;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)v23,
    (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( NetworkManager__get_UserId(0LL) > 0 )
  {
    this->fields._purchaseResultArray = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields._purchaseResultArray, 0LL, v26, v27, v28, v29, v30, v31);
    v32 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v32,
      (Il2CppObject *)this,
      Method_PurchaseLogic_OnEndSendReceiptData__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v32,
                                          (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___);
    receiptBase64Str = receiptContents->fields.receiptBase64Str;
    payloadJsonStr = receiptContents->fields.payloadJsonStr;
    googleSignatureStr = receiptContents->fields.googleSignatureStr;
    v37 = (PurchaseByBank_UnityIap_Request_o *)Request_WarBoardWallAttackRequest;
    v38 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v38,
      (Il2CppObject *)this,
      Method_PurchaseLogic__SendReceiptData_b__39_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult_____ctor__);
    if ( v37 )
    {
      PurchaseByBank_UnityIap_Request__beginRequest(
        v37,
        receiptBase64Str,
        payloadJsonStr,
        storeError,
        googleSignatureStr,
        (System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____o *)v38,
        v39);
      return;
    }
LABEL_19:
    sub_B2C434(v23, v24);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v41 = System_Int64__ToString((int64_t)&UserId, 0LL);
  v23 = System_String__Concat_44305532((System_String_o *)StringLiteral_15100/*"UserId error: UserId="*/, v41, 0LL);
  if ( !logErrorOutputAction )
    goto LABEL_19;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logErrorOutputAction,
    (System_Uri_o *)v23,
    (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
  PurchaseLogic__OnEndSendReceiptData(this, (System_String_o *)StringLiteral_23073/*"user_id_error"*/, v42);
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

  if ( (byte_4187AB6 & 1) == 0 )
  {
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&bankShopId);
    byte_4187AB6 = 1;
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
    sub_B2C434(IsAppleDevice, v6);
  if ( v8->fields.isIOSOldStyleReceipt )
    transactionID_k__BackingField = v8->fields.iOSOldStyleTransactionId;
LABEL_6:
  PurchaseLogic__SendReceiptData(this, v8, transactionID_k__BackingField, 0, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic___RestorePurchases_b__31_0(PurchaseLogic_o *this, bool result, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Action_string__o *logOutputAction; // x19
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  bool v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = result;
  if ( (byte_4187AC5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string__Invoke__, result);
    sub_B2C35C(&StringLiteral_11482/*"RestorePurchases continuing: "*/, v4);
    sub_B2C35C(&StringLiteral_805/*". If no further messages, no purchases available to restore."*/, v5);
    byte_4187AC5 = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  v7 = System_Boolean__ToString((bool)&v10, 0LL);
  v8 = System_String__Concat_44307816(
         (System_String_o *)StringLiteral_11482/*"RestorePurchases continuing: "*/,
         v7,
         (System_String_o *)StringLiteral_805/*". If no further messages, no purchases available to restore."*/,
         0LL);
  if ( !logOutputAction )
    sub_B2C434(v8, v9);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)v8,
    (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41852C4 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&purchaseResult);
    sub_B2C35C(&PurchaseBehaviour_Result_TypeInfo, v11);
    byte_41852C4 = 1;
  }
  v13[4] = 0LL;
  v13[0] = j_il2cpp_value_box_0(PurchaseBehaviour_Result_TypeInfo, &v17);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v13[2] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v13[3] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B2C300(this, v13, callback, object);
}


void __fastcall PurchaseLogic_ProductFinishedAction__EndInvoke(
        PurchaseLogic_ProductFinishedAction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v15; // x3
  __int64 v16; // x8
  unsigned int v17; // w25
  unsigned __int64 v18; // x10
  _DWORD *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x0
  void (__fastcall **v23)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  PurchaseLogic_ProductFinishedAction_o *v24; // x8
  __int64 *v25; // x24
  __int64 v26; // x25
  void (__fastcall *v27)(int *, _QWORD, _QWORD, _QWORD, __int64); // x26
  char v28; // w26
  char v29; // w0
  __int64 v30; // x3
  unsigned int v31; // w26
  __int64 v32; // x8
  __int64 v33; // x1
  __int64 v34; // x2
  unsigned __int64 v35; // x10
  _DWORD *v36; // x11
  int v37; // [xsp+4h] [xbp-6Ch] BYREF
  PurchaseLogic_ProductFinishedAction_o *v38; // [xsp+8h] [xbp-68h]
  unsigned int v39; // [xsp+14h] [xbp-5Ch]
  PurchaseLogic_ProductFinishedAction_o *v40; // [xsp+18h] [xbp-58h] BYREF

  v40 = this;
  v39 = purchaseResult;
  v6 = *(_QWORD *)&this[1].fields.method_ptr;
  v38 = this;
  if ( !v6 )
  {
    v11 = &v40;
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
      v24 = v11[v12];
      v25 = *(__int64 **)&v24->fields.method;
      v26 = *(_QWORD *)&v24->fields.extra_arg;
      v27 = *(void (__fastcall **)(int *, _QWORD, _QWORD, _QWORD, __int64))&v24->fields.method_ptr;
      if ( *(__int16 *)(v26 + 72) == -1 )
        sub_B2C418(
          *(_QWORD *)&v24->fields.extra_arg,
          *(_QWORD *)&purchaseResult,
          *(_QWORD *)&perMonthAmount,
          *(_QWORD *)&freeStoneNum);
      if ( (sub_B2C38C(v26) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v26 + 74) != 4 )
        goto LABEL_36;
      v27((int *)v39, (unsigned int)perMonthAmount, (unsigned int)freeStoneNum, (unsigned int)chargeStoneNum, v26);
LABEL_38:
      if ( ++v12 == v10 )
        return;
    }
    if ( !v25 )
    {
      v27(&v37, (unsigned int)perMonthAmount, (unsigned int)freeStoneNum, (unsigned int)chargeStoneNum, v26);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v26 + 72) != -1 && (*(_BYTE *)(*v25 + 277) & 1) == 0 && v38->fields.m_target )
    {
      v28 = sub_B2C384(v26);
      v29 = sub_B2C788(v26);
      if ( (v28 & 1) != 0 )
      {
        v31 = v39;
        if ( (v29 & 1) != 0 )
        {
          v32 = *v25;
          v33 = *(_QWORD *)(v26 + 24);
          v34 = *(unsigned __int16 *)(v26 + 72);
          if ( *(_WORD *)(*v25 + 298) )
          {
            v35 = 0LL;
            v36 = (_DWORD *)(*(_QWORD *)(v32 + 176) + 8LL);
            while ( *((_QWORD *)v36 - 1) != v33 )
            {
              ++v35;
              v36 += 4;
              if ( v35 >= *(unsigned __int16 *)(*v25 + 298) )
                goto LABEL_35;
            }
            v22 = v32 + 16LL * (*v36 + (int)v34) + 312;
          }
          else
          {
LABEL_35:
            v22 = sub_AC5258(v25, v33, v34, v30);
          }
          v21 = *(_QWORD *)(v22 + 8);
        }
        else
        {
          v21 = *(_QWORD *)(*v25 + 16LL * *(unsigned __int16 *)(v26 + 72) + 320);
        }
        v23 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_B2C40C(v21, v26);
        (*v23)(v25, v31, (unsigned int)perMonthAmount, (unsigned int)freeStoneNum, (unsigned int)chargeStoneNum, v23);
      }
      else
      {
        v13 = *(unsigned __int16 *)(v26 + 72);
        if ( (v29 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v26);
          v16 = *v25;
          v17 = v39;
          if ( *(_WORD *)(*v25 + 298) )
          {
            v18 = 0LL;
            v19 = (_DWORD *)(*(_QWORD *)(v16 + 176) + 8LL);
            while ( *((_QWORD *)v19 - 1) != class_0 )
            {
              ++v18;
              v19 += 4;
              if ( v18 >= *(unsigned __int16 *)(*v25 + 298) )
                goto LABEL_11;
            }
            v20 = v16 + 16LL * (int)(*v19 + v13) + 312;
          }
          else
          {
LABEL_11:
            v20 = sub_AC5258(v25, class_0, v13, v15);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v20)(
            v25,
            v17,
            (unsigned int)perMonthAmount,
            (unsigned int)freeStoneNum,
            (unsigned int)chargeStoneNum,
            *(_QWORD *)(v20 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*v25
                                                                                    + 16LL
                                                                                    * *(unsigned __int16 *)(v26 + 72)
                                                                                    + 312))(
            v25,
            v39,
            (unsigned int)perMonthAmount,
            (unsigned int)freeStoneNum,
            (unsigned int)chargeStoneNum,
            *(_QWORD *)(*v25 + 16LL * *(unsigned __int16 *)(v26 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD, __int64))v27)(
      v25,
      v39,
      (unsigned int)perMonthAmount,
      (unsigned int)freeStoneNum,
      (unsigned int)chargeStoneNum,
      v26);
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

  if ( (byte_41852C5 & 1) == 0 )
  {
    sub_B2C35C(&string_TypeInfo, method);
    byte_41852C5 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.payloadJsonStr = static_fields->Empty;
  sub_B2C2F8(&this->fields, Empty);
  v5 = string_TypeInfo->static_fields;
  v6 = v5->Empty;
  this->fields.googleSignatureStr = v5->Empty;
  sub_B2C2F8(&this->fields.googleSignatureStr, v6);
  v7 = string_TypeInfo->static_fields;
  v8 = v7->Empty;
  this->fields.receiptBase64Str = v7->Empty;
  sub_B2C2F8(&this->fields.receiptBase64Str, v8);
  v9 = string_TypeInfo->static_fields;
  v10 = v9->Empty;
  this->fields.purchaseToken = v9->Empty;
  sub_B2C2F8(&this->fields.purchaseToken, v10);
  v11 = string_TypeInfo->static_fields;
  v12 = v11->Empty;
  this->fields.iOSOldStyleTransactionId = v11->Empty;
  sub_B2C2F8(&this->fields.iOSOldStyleTransactionId, v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct PurchaseLogic___c_StaticFields *static_fields; // x0

  if ( (byte_41852C0 & 1) == 0 )
  {
    sub_B2C35C(&PurchaseLogic___c_TypeInfo, v1);
    byte_41852C0 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(PurchaseLogic___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = PurchaseLogic___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PurchaseLogic___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_41852C1 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Debug_TypeInfo, str);
    sub_B2C35C(&StringLiteral_15763/*"[UnityIAP]課金エラー:"*/, v4);
    byte_41852C1 = 1;
  }
  v5 = (Il2CppObject *)System_String__Concat_44305532((System_String_o *)StringLiteral_15763/*"[UnityIAP]課金エラー:"*/, str, 0LL);
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
  if ( (byte_41852C2 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Debug_TypeInfo, str);
    sub_B2C35C(&StringLiteral_15762/*"[UnityIAP]課金エラー(ratio:"*/, v6);
    sub_B2C35C(&StringLiteral_671/*"):"*/, v7);
    byte_41852C2 = 1;
  }
  v8 = UnityEngine_Random__Range(0.0, 1.0, 0LL);
  if ( v8 < ratio )
  {
    v9 = System_Single__ToString(v8, (const MethodInfo *)&v11);
    v10 = (Il2CppObject *)System_String__Concat_44308944(
                            (System_String_o *)StringLiteral_15762/*"[UnityIAP]課金エラー(ratio:"*/,
                            v9,
                            (System_String_o *)StringLiteral_671/*"):"*/,
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
    sub_B2C434(this, 0LL);
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
  __int64 v17; // x3
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x20
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  struct UnityEngine_Purchasing_Product_o *v20; // x19
  unsigned __int64 v21; // x10
  UnityEngine_Purchasing_IStoreController_c **p_offset; // x11
  __int64 p_method; // x0
  struct PurchaseLogic_o *v24; // x8
  System_Action_Uri__o *logErrorOutputAction; // x20
  PurchaseLogic_o *v26; // x21
  System_String_o *v27; // x22
  int v28; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_41852C3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string__Invoke__, requestResultStr);
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Purchasing_IStoreController_TypeInfo, v6);
    sub_B2C35C(&PurchaseLogic_PurchaseAvailablilty_TypeInfo, v7);
    sub_B2C35C(&PurchaseLogic_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_10845/*"Purchasing product asychronously: '{0}'"*/, v9);
    sub_B2C35C(&StringLiteral_14853/*"Unexpected PurchaseAvailablilty value: "*/, v10);
    byte_41852C3 = 1;
  }
  v28 = 0;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_29:
    sub_B2C434(_4__this, requestResultStr);
  _4__this = (PurchaseLogic_o *)PurchaseLogic__CheckBankStatusAndMonthlyLimit(
                                  _4__this,
                                  requestResultStr,
                                  this->fields.price,
                                  0LL);
  v28 = (int)_4__this;
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
                                      (System_String_o *)StringLiteral_10845/*"Purchasing product asychronously: '{0}'"*/,
                                      (Il2CppObject *)definition_k__BackingField->fields._id_k__BackingField,
                                      0LL);
      if ( !logOutputAction )
        goto LABEL_29;
      System_Action_Uri___Invoke(
        logOutputAction,
        (System_Uri_o *)_4__this,
        (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
      storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
      if ( !storeController )
        goto LABEL_29;
      klass = storeController->klass;
      v20 = this->fields.product;
      if ( !*(_WORD *)&storeController->klass->_2.bitflags1 )
        goto LABEL_14;
      v21 = 0LL;
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
      v24 = this->fields.__4__this;
      if ( !v24 )
        goto LABEL_29;
      logErrorOutputAction = (System_Action_Uri__o *)v24->fields._logErrorOutputAction;
      _4__this = (PurchaseLogic_o *)j_il2cpp_value_box_0(PurchaseLogic_PurchaseAvailablilty_TypeInfo, &v28);
      if ( !_4__this )
        goto LABEL_29;
      v26 = _4__this;
      v27 = (System_String_o *)((__int64 (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))_4__this->klass->vtable._3_ToString.method)(
                                 _4__this,
                                 _4__this->klass->vtable._4_OnInitializeFailed.methodPtr);
      v28 = *(_DWORD *)j_il2cpp_object_unbox_0(v26);
      _4__this = (PurchaseLogic_o *)System_String__Concat_44305532((System_String_o *)StringLiteral_14853/*"Unexpected PurchaseAvailablilty value: "*/, v27, 0LL);
      if ( !logErrorOutputAction )
        goto LABEL_29;
      System_Action_Uri___Invoke(
        logErrorOutputAction,
        (System_Uri_o *)_4__this,
        (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
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
    ++v21;
    p_offset += 2;
    if ( v21 >= *(unsigned __int16 *)&storeController->klass->_2.bitflags1 )
    {
LABEL_14:
      p_method = sub_AC5258(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 1LL, v17);
      goto LABEL_28;
    }
  }
  p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
LABEL_28:
  (*(void (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, struct UnityEngine_Purchasing_Product_o *, _QWORD))p_method)(
    storeController,
    v20,
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, p);
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
    sub_B2C434(this, id);
  return System_String__Equals_44364348(definition_k__BackingField->fields._id_k__BackingField, id, 4, 0LL);
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
  return System_String__Equals_44364348(id, this->fields.idStr, 4, 0LL);
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