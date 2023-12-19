void __fastcall PurchaseLogic___ctor(PurchaseLogic_o *this, const MethodInfo *method)
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
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  PurchaseLogic___c_c *v37; // x0
  struct PurchaseLogic___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__77_0; // x20
  Il2CppObject *v40; // x21
  struct PurchaseLogic___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  PurchaseLogic___c_c *v55; // x0
  struct PurchaseLogic___c_StaticFields *v56; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__77_1; // x20
  Il2CppObject *v58; // x21
  struct PurchaseLogic___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  PurchaseLogic___c_c *v73; // x0
  struct PurchaseLogic___c_StaticFields *v74; // x8
  System_Action_string__float__o *_9__77_2; // x20
  Il2CppObject *v76; // x21
  struct PurchaseLogic___c_StaticFields *v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7

  if ( (byte_40FA07E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string___ctor__, method);
    sub_B16FFC(&System_Action_string__TypeInfo, v6);
    sub_B16FFC(&Method_System_Action_string__float___ctor__, v7);
    sub_B16FFC(&System_Action_string__float__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Product___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_HashSet_Product__TypeInfo, v10);
    sub_B16FFC(&Method_PurchaseLogic___c___ctor_b__77_0__, v11);
    sub_B16FFC(&Method_PurchaseLogic___c___ctor_b__77_1__, v12);
    sub_B16FFC(&Method_PurchaseLogic___c___ctor_b__77_2__, v13);
    sub_B16FFC(&PurchaseLogic___c_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_1, v15);
    byte_40FA07E = 1;
  }
  v16 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                             System_Collections_Generic_HashSet_Product__TypeInfo,
                                                                             method,
                                                                             v2,
                                                                             v3,
                                                                             v4);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v16,
    (const MethodInfo_21DE95C *)Method_System_Collections_Generic_HashSet_Product___ctor__);
  this->fields._pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)v16;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Int32_array **)StringLiteral_1;
  this->fields._currentTransactionId = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._currentTransactionId, v23, v24, v25, v26, v27, v28, v29);
  v37 = PurchaseLogic___c_TypeInfo;
  if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v37 = PurchaseLogic___c_TypeInfo;
  }
  static_fields = v37->static_fields;
  _9__77_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)static_fields->__9;
    _9__77_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_string__TypeInfo,
                                                                                      v30,
                                                                                      v31,
                                                                                      v32,
                                                                                      v33);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__77_0,
      v40,
      Method_PurchaseLogic___c___ctor_b__77_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
    v41 = PurchaseLogic___c_TypeInfo->static_fields;
    v41->__9__77_0 = (struct System_Action_string__o *)_9__77_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v41->__9__77_0,
      (System_Int32_array **)_9__77_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  this->fields._logOutputAction = (struct System_Action_string__o *)_9__77_0;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._logOutputAction,
    (System_Int32_array **)_9__77_0,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v55 = PurchaseLogic___c_TypeInfo;
  if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v55 = PurchaseLogic___c_TypeInfo;
  }
  v56 = v55->static_fields;
  _9__77_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v56->__9__77_1;
  if ( !_9__77_1 )
  {
    if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v56 = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v58 = (Il2CppObject *)v56->__9;
    _9__77_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_string__TypeInfo,
                                                                                      v48,
                                                                                      v49,
                                                                                      v50,
                                                                                      v51);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__77_1,
      v58,
      Method_PurchaseLogic___c___ctor_b__77_1__,
      (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
    v59 = PurchaseLogic___c_TypeInfo->static_fields;
    v59->__9__77_1 = (struct System_Action_string__o *)_9__77_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v59->__9__77_1,
      (System_Int32_array **)_9__77_1,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
  }
  this->fields._logErrorOutputAction = (struct System_Action_string__o *)_9__77_1;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._logErrorOutputAction,
    (System_Int32_array **)_9__77_1,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v73 = PurchaseLogic___c_TypeInfo;
  if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v73 = PurchaseLogic___c_TypeInfo;
  }
  v74 = v73->static_fields;
  _9__77_2 = v74->__9__77_2;
  if ( !_9__77_2 )
  {
    if ( (BYTE3(v73->vtable._0_Equals.methodPtr) & 4) != 0 && !v73->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v73);
      v74 = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v76 = (Il2CppObject *)v74->__9;
    _9__77_2 = (System_Action_string__float__o *)sub_B170CC(System_Action_string__float__TypeInfo, v66, v67, v68, v69);
    System_Action_string__float____ctor(
      _9__77_2,
      v76,
      Method_PurchaseLogic___c___ctor_b__77_2__,
      (const MethodInfo_24C5350 *)Method_System_Action_string__float___ctor__);
    v77 = PurchaseLogic___c_TypeInfo->static_fields;
    v77->__9__77_2 = _9__77_2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v77->__9__77_2,
      (System_Int32_array **)_9__77_2,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
  }
  this->fields._logErrorOutputActionSampledByRatio = _9__77_2;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._logErrorOutputActionSampledByRatio,
    (System_Int32_array **)_9__77_2,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
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

  if ( (byte_40FA07C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Distinct_string___, productId);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_string___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v5);
    byte_40FA07C = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(productId, 0LL);
  if ( !IsNullOrEmpty )
  {
    DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                  (PurchaseLogic_o *)IsNullOrEmpty,
                                                  v7);
    if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
      sub_B170D4();
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)DeferredPurchaseProductIdsFromPlayerPrefs;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
      (EventMissionProgressRequest_Argument_ProgressData_o *)productId,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    v10 = System_Linq_Enumerable__Distinct_string_(
            v9,
            (const MethodInfo_18D4E88 *)Method_System_Linq_Enumerable_Distinct_string___);
    v11 = (PurchaseLogic_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                               v10,
                               (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_string___);
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

  if ( (byte_40FA067 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Product__Add__, product);
    byte_40FA067 = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_B170D4();
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)pendingProducts,
    (WarBoardAIRoute_RouteData_o *)product,
    (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_Product__Add__);
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
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_o *v25; // x0
  int32_t v26; // w21
  PurchaseLogic_o *v27; // x0
  const MethodInfo *v28; // x2
  int32_t v29; // w21
  UnityEngine_Purchasing_IStoreExtension_o *v30; // x0
  System_String_o *v31; // x0
  int32_t v32; // w20
  UnityEngine_Purchasing_IStoreExtension_o *v33; // x0
  System_String_o *v34; // x0
  CommonUI_o *Instance; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  PurchaseLogic___c_c *v40; // x0
  struct PurchaseLogic___c_StaticFields *static_fields; // x8
  System_Action_o *_9__29_0; // x22
  Il2CppObject *v43; // x21
  struct PurchaseLogic___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  CommonUI_o *v51; // x20
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  PurchaseLogic___c_c *v56; // x0
  struct PurchaseLogic___c_StaticFields *v57; // x8
  System_Action_o *_9__29_1; // x21
  Il2CppObject *v59; // x22
  struct PurchaseLogic___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7

  if ( (byte_40FA064 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, result);
    sub_B16FFC(&AgeVerificationMenu_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_B16FFC(&JsonManager_TypeInfo, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B16FFC(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__29_0__, v13);
    sub_B16FFC(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__29_1__, v14);
    sub_B16FFC(&PurchaseLogic___c_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_12330, v16);
    sub_B16FFC(&StringLiteral_21361, v17);
    sub_B16FFC(&StringLiteral_20980, v18);
    sub_B16FFC(&StringLiteral_20390, v19);
    sub_B16FFC(&StringLiteral_16533, v20);
    byte_40FA064 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12330, 0LL);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_20980, 0LL) )
    goto LABEL_39;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0LL);
  v23 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary;
  if ( !Dictionary
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Dictionary,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21361,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    goto LABEL_39;
  }
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           v23,
           (System_Type_o *)StringLiteral_21361,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_57;
  v25 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                             Item,
                             Item->klass->vtable[4].methodPtr);
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
           (System_Xml_XmlQualifiedName_o *)StringLiteral_16533,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v30 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
              v23,
              (System_Type_o *)StringLiteral_16533,
              (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v30 )
        goto LABEL_57;
      v31 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v30->klass->vtable[3].method)(
                                 v30,
                                 v30->klass->vtable[4].methodPtr);
      v32 = System_Int32__Parse(v31, 0LL);
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v23,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_20390,
             (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v33 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                v23,
                (System_Type_o *)StringLiteral_20390,
                (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v33 )
          goto LABEL_57;
        v34 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v33->klass->vtable[3].method)(
                                   v33,
                                   v33->klass->vtable[4].methodPtr);
        v21 = v34;
        if ( !v32 )
        {
          if ( !System_String__IsNullOrEmpty(v34, 0LL) )
          {
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
            {
              v40 = PurchaseLogic___c_TypeInfo;
              if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
                v40 = PurchaseLogic___c_TypeInfo;
              }
              static_fields = v40->static_fields;
              _9__29_0 = static_fields->__9__29_0;
              if ( !_9__29_0 )
              {
                if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v40);
                  static_fields = PurchaseLogic___c_TypeInfo->static_fields;
                }
                v43 = (Il2CppObject *)static_fields->__9;
                _9__29_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
                System_Action___ctor(
                  _9__29_0,
                  v43,
                  Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__29_0__,
                  0LL);
                v44 = PurchaseLogic___c_TypeInfo->static_fields;
                v44->__9__29_0 = _9__29_0;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&v44->__9__29_0,
                  (System_Int32_array **)_9__29_0,
                  v45,
                  v46,
                  v47,
                  v48,
                  v49,
                  v50);
              }
              if ( Instance )
              {
                v29 = 1;
                CommonUI__OpenNotificationDialog(Instance, 0LL, v21, _9__29_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
                return v29;
              }
LABEL_57:
              sub_B170D4();
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
      v51 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v51, 0LL, 0LL) )
      {
        v56 = PurchaseLogic___c_TypeInfo;
        if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
          v56 = PurchaseLogic___c_TypeInfo;
        }
        v57 = v56->static_fields;
        _9__29_1 = v57->__9__29_1;
        if ( !_9__29_1 )
        {
          if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v56);
            v57 = PurchaseLogic___c_TypeInfo->static_fields;
          }
          v59 = (Il2CppObject *)v57->__9;
          _9__29_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v52, v53, v54, v55);
          System_Action___ctor(_9__29_1, v59, Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__29_1__, 0LL);
          v60 = PurchaseLogic___c_TypeInfo->static_fields;
          v60->__9__29_1 = _9__29_1;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v60->__9__29_1,
            (System_Int32_array **)_9__29_1,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66);
        }
        if ( !v51 )
          goto LABEL_57;
        CommonUI__OpenNotificationDialog(v51, 0LL, v21, _9__29_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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
    return dword_3135EC0[failureReason];
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
  struct System_Collections_Generic_HashSet_Product__o *v9; // x0
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x20
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  unsigned __int64 v12; // x10
  UnityEngine_Purchasing_IStoreController_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40FA06A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Product__Contains__, product);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Product__Remove__, v5);
    sub_B16FFC(&UnityEngine_Purchasing_IStoreController_TypeInfo, v6);
    sub_B16FFC(&PurchaseLogic_TypeInfo, v7);
    byte_40FA06A = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_15;
  if ( !System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
          (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
          (BattleBuffData_BuffData_o *)product,
          (const MethodInfo_21DEFE0 *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
    return;
  v9 = this->fields._pendingProducts;
  if ( !v9
    || (System_Collections_Generic_HashSet_BattleBuffData_BuffData___Remove(
          (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)v9,
          (BattleBuffData_BuffData_o *)product,
          (const MethodInfo_21DF190 *)Method_System_Collections_Generic_HashSet_Product__Remove__),
        (storeController = PurchaseLogic_TypeInfo->static_fields->_storeController) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
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
    p_method = sub_AAFEF8(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 2LL);
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
  sub_B16F98(
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
  __int64 v3; // x3
  __int64 v4; // x4
  PurchaseLogic_ReceiptContents_o *v5; // x19

  if ( (byte_40FA06B & 1) == 0 )
  {
    sub_B16FFC(&PurchaseLogic_ReceiptContents_TypeInfo, product);
    byte_40FA06B = 1;
  }
  v5 = (PurchaseLogic_ReceiptContents_o *)sub_B170CC(PurchaseLogic_ReceiptContents_TypeInfo, product, method, v3, v4);
  PurchaseLogic_ReceiptContents___ctor(v5, 0LL);
  return v5;
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
          sub_B170D4();
        }
      }
      sub_B17100(this, purchaseResultArray, freeStoneNum);
      sub_B170A0();
    }
  }
}


UnityEngine_Purchasing_IAppleExtensions_o *__fastcall PurchaseLogic__GetAppleExtension(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x19
  UnityEngine_Purchasing_IExtensionProvider_c *klass; // x8
  void *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 (__fastcall **v12)(struct UnityEngine_Purchasing_IExtensionProvider_o *, _QWORD); // x0

  if ( (byte_40FA076 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___, method);
    this = (PurchaseLogic_o *)sub_B16FFC(&PurchaseLogic_TypeInfo, v2);
    byte_40FA076 = 1;
  }
  if ( !PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider
    || !PurchaseLogic__IsAppleDevice((const MethodInfo *)this) )
  {
    return 0LL;
  }
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_B170D4();
  klass = storeExtensionProvider->klass;
  v5 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v6 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 3);
  v7 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 36);
  if ( *(_WORD *)&storeExtensionProvider->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v6 )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&storeExtensionProvider->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset + (int)v7].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AAFEF8(storeExtensionProvider, v6, v7);
  }
  v12 = (__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, _QWORD))sub_B170AC(
                                                                                                 *(_QWORD *)(p_method + 8),
                                                                                                 v5);
  return (UnityEngine_Purchasing_IAppleExtensions_o *)(*v12)(storeExtensionProvider, v12);
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

  if ( (byte_40FA05F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_IPurchasingModule___, method);
    sub_B16FFC(&UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo, v2);
    byte_40FA05F = 1;
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
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_IPurchasingModule___ + 6));
    v6 = *(_WORD *)(v5 + 306);
  }
  if ( (v6 & 0x400) != 0 )
  {
    v7 = *v4[6];
    if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
      sub_AAFCFC(*v4[6]);
    if ( !*(_DWORD *)(v7 + 224) )
    {
      v8 = *v4[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AAFCFC(*v4[6]);
      j_il2cpp_runtime_class_init_0(v8);
    }
  }
  v9 = *v4[6];
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AAFCFC(*v4[6]);
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
  __int64 v10; // x3
  __int64 v11; // x4
  System_Char_array *v12; // x0
  __int64 v13; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19

  if ( (byte_40FA07A & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_string___, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_B16FFC(&string_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_5207, v6);
    byte_40FA07A = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_5207,
             string_TypeInfo->static_fields->Empty,
             0LL);
  if ( System_String__op_Inequality(String, string_TypeInfo->static_fields->Empty, 0LL) )
  {
    v12 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v9);
    if ( !v12 )
      goto LABEL_10;
    if ( !v12->max_length )
    {
      sub_B17100(v12, v12, v13);
      sub_B170A0();
    }
    v12->m_Items[2] = 59;
    if ( !String )
LABEL_10:
      sub_B170D4();
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String, v12, 0LL);
    return (System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                          v14,
                                                          (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_string___);
  }
  else
  {
    v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_string__TypeInfo,
                                                                                                    v8,
                                                                                                    v9,
                                                                                                    v10,
                                                                                                    v11);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v15,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  }
  return (System_Collections_Generic_List_string__o *)v15;
}


PurchaseByBank_UnityIap_Request_PurchaseResult_o *__fastcall PurchaseLogic__GetFirstPurchaseResult(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x20

  if ( (byte_40FA06F & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____66839632,
      purchaseResultArray);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___, v7);
    sub_B16FFC(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__, v8);
    sub_B16FFC(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v9);
    sub_B16FFC(&Method_PurchaseLogic___c__DisplayClass42_0__GetFirstPurchaseResult_b__0__, v10);
    sub_B16FFC(&PurchaseLogic___c__DisplayClass42_0_TypeInfo, v11);
    byte_40FA06F = 1;
  }
  v12 = sub_B170CC(PurchaseLogic___c__DisplayClass42_0_TypeInfo, purchaseResultArray, transactionId, method, v4);
  PurchaseLogic___c__DisplayClass42_0___ctor((PurchaseLogic___c__DisplayClass42_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  *(_QWORD *)(v12 + 16) = transactionId;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v12 + 16),
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
             (const MethodInfo_18D7980 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___);
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo,
                                                                             v20,
                                                                             v21,
                                                                             v22,
                                                                             v23);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v24,
    (Il2CppObject *)v12,
    Method_PurchaseLogic___c__DisplayClass42_0__GetFirstPurchaseResult_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__);
  return (PurchaseByBank_UnityIap_Request_PurchaseResult_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                               (System_Func_TSource__bool__o *)v24,
                                                               (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____66839632);
}


PurchaseLogic_o *__fastcall PurchaseLogic__GetInstance(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  PurchaseLogic_o *v5; // x19
  const MethodInfo *v6; // x1

  if ( (byte_40FA05D & 1) == 0 )
  {
    sub_B16FFC(&PurchaseLogicAndroid_TypeInfo, v1);
    byte_40FA05D = 1;
  }
  v5 = (PurchaseLogic_o *)sub_B170CC(PurchaseLogicAndroid_TypeInfo, v1, v2, v3, v4);
  PurchaseLogic___ctor(v5, v6);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PurchaseLogic__GetPrice(PurchaseLogic_o *this, int32_t bankShopId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  v16 = bankShopId;
  if ( (byte_40FA072 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__Invoke__, *(_QWORD *)&bankShopId);
    sub_B16FFC(&Method_DataManager_GetMasterData_BankShopMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_6010, v8);
    byte_40FA072 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_9;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             bankShopId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
  if ( Entity )
    return Entity->fields.priority;
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v14 = System_Int32__ToString((int32_t)&v16, 0LL);
  v15 = System_String__Concat_43743732((System_String_o *)StringLiteral_6010, v14, 0LL);
  if ( !logErrorOutputAction )
LABEL_9:
    sub_B170D4();
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logErrorOutputAction,
    (System_Uri_o *)v15,
    (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
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
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FA05E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v5);
    sub_B16FFC(&PurchaseBehaviour_TypeInfo, v6);
    byte_40FA05E = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( (byte_40FA060 & 1) == 0 )
  {
    sub_B16FFC(&PurchaseLogic_TypeInfo, method);
    byte_40FA060 = 1;
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
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      ConsumableProductIdCollection,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      if ( !v8 )
        sub_B170D4();
      UnityEngine_Purchasing_ConfigurationBuilder__AddProduct(v8, (System_String_o *)v11.fields.current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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
    sub_B170D4();
  PurchaseLogic__InitiatePurchase_25232092(
    this,
    bankShop->fields.googleShopId,
    bankShop->fields.googlePrice,
    finishedAction,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__InitiatePurchase_25232092(
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
  struct System_Action_string__o *logErrorOutputAction; // x0
  const MethodInfo *v23; // x5
  int32_t v24; // w1
  System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x0
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x22
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  struct System_Action_string__o *v31; // x0
  __int64 *v32; // x8
  struct UnityEngine_Purchasing_IStoreController_o *v33; // x22
  UnityEngine_Purchasing_IStoreController_c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  struct System_Action_string__o *v38; // x0
  UnityEngine_Purchasing_ProductCollection_o *v39; // x0
  UnityEngine_Purchasing_Product_o *v40; // x0
  const MethodInfo *v41; // x3

  if ( (byte_40FA061 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__Invoke__, productId);
    sub_B16FFC(&Method_System_Action_string__float__Invoke__, v12);
    sub_B16FFC(&UnityEngine_Purchasing_IStoreController_TypeInfo, v13);
    sub_B16FFC(&PurchaseLogic_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_7596, v15);
    sub_B16FFC(&StringLiteral_7597, v16);
    sub_B16FFC(&StringLiteral_7595, v17);
    sub_B16FFC(&StringLiteral_7598, v18);
    sub_B16FFC(&StringLiteral_7599, v19);
    byte_40FA061 = 1;
  }
  this->fields._buyProductFinishedAction = finishedAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._buyProductFinishedAction,
    (System_Int32_array **)finishedAction,
    *(System_String_array ***)&price,
    (System_String_array **)finishedAction,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( (byte_40FA060 & 1) == 0 )
  {
    sub_B16FFC(&PurchaseLogic_TypeInfo, v20);
    byte_40FA060 = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( logErrorOutputActionSampledByRatio )
    {
      System_Action_string__float___Invoke(
        logErrorOutputActionSampledByRatio,
        (System_String_o *)StringLiteral_7596,
        0.01,
        (const MethodInfo_24C5364 *)Method_System_Action_string__float__Invoke__);
      v24 = 10;
      goto LABEL_33;
    }
LABEL_39:
    sub_B170D4();
  }
  if ( (((__int64 (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))this->klass->vtable._16_IsInitializedWithMismatchedObfuscatedAccountId.method)(
          this,
          this->klass->vtable._17_SetInitializedWithMismatchedObfuscatedAccountId.methodPtr) & 1) != 0 )
  {
    logErrorOutputAction = this->fields._logErrorOutputAction;
    if ( logErrorOutputAction )
    {
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)logErrorOutputAction,
        (System_Uri_o *)StringLiteral_7599,
        (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
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
    v31 = this->fields._logErrorOutputAction;
    if ( !v31 )
      goto LABEL_39;
    v32 = &StringLiteral_7597;
LABEL_30:
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)v31,
      (System_Uri_o *)*v32,
      (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
LABEL_31:
    v38 = this->fields._logErrorOutputAction;
    if ( v38 )
    {
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)v38,
        (System_Uri_o *)StringLiteral_7595,
        (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
      v24 = 11;
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
    p_method = sub_AAFEF8(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
  }
  if ( !(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))p_method)(
          storeController,
          *(_QWORD *)(p_method + 8)) )
  {
    v31 = this->fields._logErrorOutputAction;
    if ( !v31 )
      goto LABEL_39;
    v32 = &StringLiteral_7598;
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
    v37 = sub_AAFEF8(v33, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL);
  }
  v39 = (UnityEngine_Purchasing_ProductCollection_o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))v37)(
                                                        v33,
                                                        *(_QWORD *)(v37 + 8));
  if ( !v39 )
    goto LABEL_39;
  v40 = UnityEngine_Purchasing_ProductCollection__WithID(v39, productId, 0LL);
  if ( !v40 || !v40->fields._availableToPurchase_k__BackingField )
    goto LABEL_31;
  PurchaseLogic__PurchaseIfAvailable(this, v40, price, v41);
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

  if ( (byte_40FA065 & 1) == 0 )
  {
    sub_B16FFC(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&value);
    sub_B16FFC(&ManagerConfig_TypeInfo, v4);
    byte_40FA065 = 1;
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

  if ( (byte_40FA069 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Product__Contains__, prodcut);
    byte_40FA069 = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_B170D4();
  return System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
           (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
           (BattleBuffData_BuffData_o *)prodcut,
           (const MethodInfo_21DEFE0 *)Method_System_Collections_Generic_HashSet_Product__Contains__);
}


bool __fastcall PurchaseLogic__IsPurchasingFrameworkInitialized(PurchaseLogic_o *this, const MethodInfo *method)
{
  struct PurchaseLogic_StaticFields *static_fields; // x8

  if ( (byte_40FA060 & 1) == 0 )
  {
    sub_B16FFC(&PurchaseLogic_TypeInfo, method);
    byte_40FA060 = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  return static_fields->_storeController && static_fields->_storeExtensionProvider != 0LL;
}


bool __fastcall PurchaseLogic__IsServerCommitedPurchase(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  PurchaseLogic___c_c *v10; // x0
  struct PurchaseLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__40_0; // x20
  Il2CppObject *v13; // x21
  struct PurchaseLogic___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40FA06D & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___,
      purchaseResultArray);
    sub_B16FFC(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__, v6);
    sub_B16FFC(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v7);
    sub_B16FFC(&Method_PurchaseLogic___c__IsServerCommitedPurchase_b__40_0__, v8);
    sub_B16FFC(&PurchaseLogic___c_TypeInfo, v9);
    byte_40FA06D = 1;
  }
  if ( !purchaseResultArray )
    return 0;
  v10 = PurchaseLogic___c_TypeInfo;
  if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v10 = PurchaseLogic___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo,
                                                                                    purchaseResultArray,
                                                                                    method,
                                                                                    v3,
                                                                                    v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__40_0,
      v13,
      Method_PurchaseLogic___c__IsServerCommitedPurchase_b__40_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__);
    v14 = PurchaseLogic___c_TypeInfo->static_fields;
    v14->__9__40_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__40_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v14->__9__40_0,
      (System_Int32_array **)_9__40_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  return System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
           (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
           (System_Func_TSource__bool__o *)_9__40_0,
           (const MethodInfo_18C70D4 *)Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___);
}


void __fastcall PurchaseLogic__OnDeferred(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  struct System_Action_string__o *logOutputAction; // x19
  System_String_o *v8; // x0

  if ( (byte_40FA075 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__Invoke__, product);
    sub_B16FFC(&StringLiteral_9951, v5);
    byte_40FA075 = 1;
  }
  if ( !product
    || (metadata_k__BackingField = product->fields._metadata_k__BackingField) == 0LL
    || (logOutputAction = this->fields._logOutputAction,
        v8 = System_String__Concat_43743732(
               (System_String_o *)StringLiteral_9951,
               metadata_k__BackingField->fields._localizedTitle_k__BackingField,
               0LL),
        !logOutputAction) )
  {
    sub_B170D4();
  }
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)v8,
    (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
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
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_o **v35; // x24
  struct System_Action_string__o *logOutputAction; // x25
  __int64 v37; // x2
  __int64 v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array *v45; // x26
  int32_t *v46; // x0
  System_Int32_array **v47; // x1
  __int64 v48; // x0
  __int64 v49; // x28
  System_Int32_array **v50; // x27
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_o *v71; // x0
  struct System_Action_string__o *v72; // x20
  System_String_o *v73; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pendingProducts; // x20
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v79; // x21
  WarBoardData_SquareRangeSearch_o *v80; // x0
  UnityEngine_Object_o *Instance; // x21
  Il2CppObject *v82; // x21
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  PurchaseLogic_ProductFinishedAction_o *v87; // x22
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  const MethodInfo *v94; // x5
  int32_t chargeStoneNum; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v96; // [xsp+8h] [xbp-58h] BYREF
  int32_t v97; // [xsp+Ch] [xbp-54h] BYREF

  v97 = purchaseResult;
  if ( (byte_40FA071 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__Invoke__, *(_QWORD *)&purchaseResult);
    sub_B16FFC(&Method_CommonUI_OpenStonePurchaseReciveMenu__, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_Product___, v13);
    sub_B16FFC(&Method_System_Func_Product__bool___ctor__, v14);
    sub_B16FFC(&System_Func_Product__bool__TypeInfo, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&PurchaseLogic_ProductFinishedAction_TypeInfo, v17);
    sub_B16FFC(&PurchaseBehaviour_Result_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_B16FFC(&string___TypeInfo, v20);
    sub_B16FFC(&Method_PurchaseLogic___c__DisplayClass44_0__OnEndPaymentStore_b__0__, v21);
    sub_B16FFC(&PurchaseLogic___c__DisplayClass44_0_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_15810, v23);
    sub_B16FFC(&StringLiteral_15573, v24);
    sub_B16FFC(&StringLiteral_10804, v25);
    sub_B16FFC(&StringLiteral_4210, v26);
    sub_B16FFC(&StringLiteral_1, v27);
    byte_40FA071 = 1;
  }
  chargeStoneNum = 0;
  v96 = 0;
  v28 = sub_B170CC(
          PurchaseLogic___c__DisplayClass44_0_TypeInfo,
          *(_QWORD *)&purchaseResult,
          resultData,
          productId,
          *(_QWORD *)&bankShopId);
  PurchaseLogic___c__DisplayClass44_0___ctor((PurchaseLogic___c__DisplayClass44_0_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_43;
  *(_QWORD *)(v28 + 16) = productId;
  v35 = (System_String_o **)(v28 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)productId, v29, v30, v31, v32, v33, v34);
  logOutputAction = this->fields._logOutputAction;
  v38 = sub_B17014(string___TypeInfo, 5LL, v37);
  if ( !v38 )
    goto LABEL_43;
  v45 = (System_String_array *)v38;
  v46 = (int32_t *)StringLiteral_10804;
  if ( StringLiteral_10804 )
  {
    v46 = (int32_t *)sub_B170BC(StringLiteral_10804, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_44;
    v47 = (System_Int32_array **)StringLiteral_10804;
  }
  else
  {
    v47 = 0LL;
  }
  if ( !v45->max_length )
    goto LABEL_42;
  v45->m_Items[0] = (System_String_o *)v47;
  sub_B16F98((BattleServantConfConponent_o *)v45->m_Items, v47, v39, v40, v41, v42, v43, v44);
  v48 = j_il2cpp_value_box_0(PurchaseBehaviour_Result_TypeInfo, &v97);
  if ( !v48 )
    goto LABEL_43;
  v49 = v48;
  v50 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v48 + 360LL))(
                                 v48,
                                 *(_QWORD *)(*(_QWORD *)v48 + 368LL));
  v46 = (int32_t *)j_il2cpp_object_unbox_0(v49);
  v97 = *v46;
  if ( v50 )
  {
    v46 = (int32_t *)sub_B170BC(v50, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_44;
  }
  if ( v45->max_length <= 1 )
    goto LABEL_42;
  v45->m_Items[1] = (System_String_o *)v50;
  sub_B16F98((BattleServantConfConponent_o *)&v45->m_Items[1], v50, v39, v51, v52, v53, v54, v55);
  v46 = (int32_t *)StringLiteral_15573;
  if ( StringLiteral_15573 )
  {
    v46 = (int32_t *)sub_B170BC(StringLiteral_15573, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_44;
    v47 = (System_Int32_array **)StringLiteral_15573;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 2 )
    goto LABEL_42;
  v45->m_Items[2] = (System_String_o *)v47;
  sub_B16F98((BattleServantConfConponent_o *)&v45->m_Items[2], v47, v39, v56, v57, v58, v59, v60);
  if ( resultData )
  {
    v46 = (int32_t *)sub_B170BC(resultData, v45->obj.klass->_1.element_class);
    if ( !v46 )
    {
LABEL_44:
      sub_B170F4(v46);
      sub_B170A0();
    }
  }
  if ( v45->max_length <= 3 )
    goto LABEL_42;
  v45->m_Items[3] = resultData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v45->m_Items[3],
    (System_Int32_array **)resultData,
    v39,
    v61,
    v62,
    v63,
    v64,
    v65);
  v46 = (int32_t *)StringLiteral_15810;
  if ( StringLiteral_15810 )
  {
    v46 = (int32_t *)sub_B170BC(StringLiteral_15810, v45->obj.klass->_1.element_class);
    if ( v46 )
    {
      v47 = (System_Int32_array **)StringLiteral_15810;
      goto LABEL_26;
    }
    goto LABEL_44;
  }
  v47 = 0LL;
LABEL_26:
  if ( v45->max_length <= 4 )
  {
LABEL_42:
    sub_B17100(v46, v47, v39);
    sub_B170A0();
  }
  v45->m_Items[4] = (System_String_o *)v47;
  sub_B16F98((BattleServantConfConponent_o *)&v45->m_Items[4], v47, v39, v66, v67, v68, v69, v70);
  v71 = System_String__Concat_43823856(v45, 0LL);
  if ( !logOutputAction )
    goto LABEL_43;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)v71,
    (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
  if ( (v97 & 0xFFFFFFFE) != 2 )
    goto LABEL_34;
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._20_UpdateMonthlyPurchasePrice.method)(
    this,
    (unsigned int)bankShopId,
    this->klass->vtable._21_GetPrice.methodPtr);
  if ( System_String__op_Inequality(*v35, (System_String_o *)StringLiteral_1, 0LL) )
    ((void (__fastcall *)(PurchaseLogic_o *, System_String_o *, System_String_o *, Il2CppMethodPointer))this->klass->vtable._24_SendPurchaseAction.method)(
      this,
      *v35,
      transactionId,
      this->klass->vtable._25_OnDeferred.methodPtr);
  v72 = this->fields._logOutputAction;
  v73 = System_String__Concat_43743732((System_String_o *)StringLiteral_4210, *v35, 0LL);
  if ( !v72 )
LABEL_43:
    sub_B170D4();
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)v72,
    (System_Uri_o *)v73,
    (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
  pendingProducts = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._pendingProducts;
  v79 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_Product__bool__TypeInfo,
                                                                             v75,
                                                                             v76,
                                                                             v77,
                                                                             v78);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v79,
    (Il2CppObject *)v28,
    Method_PurchaseLogic___c__DisplayClass44_0__OnEndPaymentStore_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_Product__bool___ctor__);
  v80 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          pendingProducts,
          (System_Func_TSource__bool__o *)v79,
          (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_Product___);
  if ( v80 )
    ((void (__fastcall *)(PurchaseLogic_o *, WarBoardData_SquareRangeSearch_o *, Il2CppMethodPointer))this->klass->vtable._18_ConfirmPurchase.method)(
      this,
      v80,
      this->klass->vtable._19_ExtractReceiptContents.methodPtr);
LABEL_34:
  if ( !this->fields._buyProductFinishedAction && v97 != 3 )
  {
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    {
      v82 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v87 = (PurchaseLogic_ProductFinishedAction_o *)sub_B170CC(
                                                       PurchaseLogic_ProductFinishedAction_TypeInfo,
                                                       v83,
                                                       v84,
                                                       v85,
                                                       v86);
      PurchaseLogic_ProductFinishedAction___ctor(v87, v82, Method_CommonUI_OpenStonePurchaseReciveMenu__, 0LL);
      this->fields._buyProductFinishedAction = v87;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._buyProductFinishedAction,
        (System_Int32_array **)v87,
        v88,
        v89,
        v90,
        v91,
        v92,
        v93);
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
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, v97, 0, v96, chargeStoneNum, v94);
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
  System_String_o *v25; // x0
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
  System_String_o *v37; // x0
  int v38; // w21
  System_String_o *v39; // x2
  __int64 *v40; // x8
  System_String_o *v41; // x0
  struct System_Action_string__o *v42; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *FirstPurchaseResult; // x0
  int32_t purchasedBankShopId; // w22
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *Entity; // x0
  WarEntity_o *HasKey; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x2
  struct PurchaseByBank_UnityIap_Request_PurchaseResult_array *v51; // x27
  int max_length; // w8
  struct System_Action_string__o *logErrorOutputAction; // x0
  PurchaseLogic_o *v54; // x0
  System_String_o *v55; // x3
  int32_t v56; // w4
  __int64 v57; // x28
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v58; // x8
  int32_t v59; // w23
  WebViewManager_o *v60; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v61; // x0

  if ( (byte_40FA06E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__Invoke__, result);
    sub_B16FFC(&Method_DataManager_GetMasterData_BankShopMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_11283, v8);
    sub_B16FFC(&StringLiteral_21491, v9);
    sub_B16FFC(&StringLiteral_6962, v10);
    sub_B16FFC(&StringLiteral_10803, v11);
    sub_B16FFC(&StringLiteral_21625, v12);
    sub_B16FFC(&StringLiteral_17135, v13);
    sub_B16FFC(&StringLiteral_10806, v14);
    sub_B16FFC(&StringLiteral_10807, v15);
    sub_B16FFC(&StringLiteral_10595, v16);
    sub_B16FFC(&StringLiteral_6963, v17);
    sub_B16FFC(&StringLiteral_10802, v18);
    sub_B16FFC(&StringLiteral_6120, v19);
    sub_B16FFC(&StringLiteral_21359, v20);
    sub_B16FFC(&StringLiteral_1, v21);
    sub_B16FFC(&StringLiteral_5207, v22);
    sub_B16FFC(&StringLiteral_15807, v23);
    byte_40FA06E = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  v25 = System_String__Concat_43746016(
          (System_String_o *)StringLiteral_10803,
          result,
          (System_String_o *)StringLiteral_15807,
          0LL);
  if ( !logOutputAction )
    goto LABEL_49;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)v25,
    (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
  return_type = (System_String_o *)StringLiteral_1;
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
        v37 = System_String__Concat_43743732(
                (System_String_o *)StringLiteral_10802,
                this->fields._currentTransactionId,
                0LL);
        if ( !v36 )
          goto LABEL_49;
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)v36,
          (System_Uri_o *)v37,
          (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
        v38 = 3;
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
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_49;
            MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                  (DataManager_o *)Instance,
                                                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BankShopMaster___);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_49;
            Entity = (const MethodInfo *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           MasterData_WarQuestSelectionMaster,
                                           purchasedBankShopId,
                                           (const MethodInfo_266F388 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
            if ( Entity )
            {
              return_type = (System_String_o *)Entity->return_type;
              if ( PurchaseLogic__IsAppleDevice(Entity) )
              {
                HasKey = (WarEntity_o *)UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5207, 0LL);
                if ( ((unsigned __int8)HasKey & 1) != 0 )
                {
                  v51 = this->fields._purchaseResultArray;
                  if ( v51 )
                  {
                    max_length = v51->max_length;
                    if ( max_length == 1 )
                    {
                      PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(this, return_type, v50);
LABEL_37:
                      StoneCountRefreshComponent__RefreshAllStoneCount(0LL);
                      goto LABEL_38;
                    }
                    if ( max_length < 2 )
                      goto LABEL_37;
                    v57 = 0LL;
                    while ( 1 )
                    {
                      if ( (unsigned int)v57 >= max_length )
                      {
                        sub_B17100(HasKey, v49, v50);
                        sub_B170A0();
                      }
                      v58 = v51->m_Items[v57];
                      if ( !v58 )
                        break;
                      v59 = v58->fields.purchasedBankShopId;
                      v60 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !v60 )
                        break;
                      v61 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)v60,
                                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BankShopMaster___);
                      if ( !v61 )
                        break;
                      HasKey = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 v61,
                                 v59,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
                      if ( HasKey )
                        PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(this, HasKey->fields.name, v50);
                      max_length = v51->max_length;
                      if ( (int)++v57 >= max_length )
                        goto LABEL_37;
                    }
LABEL_49:
                    sub_B170D4();
                  }
                }
              }
              if ( UnityEngine_Application__get_platform(0LL) == 11 )
                goto LABEL_37;
            }
LABEL_38:
            currentTransactionId = this->fields._currentTransactionId;
            v54 = this;
            v32 = v38;
            v55 = return_type;
            v39 = (System_String_o *)StringLiteral_10595;
            v56 = purchasedBankShopId;
            goto LABEL_35;
          }
        }
        logErrorOutputAction = this->fields._logErrorOutputAction;
        if ( logErrorOutputAction )
        {
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)logErrorOutputAction,
            (System_Uri_o *)StringLiteral_10807,
            (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
          v40 = &StringLiteral_10806;
          goto LABEL_33;
        }
        goto LABEL_49;
      }
    }
    else
    {
      v42 = this->fields._logErrorOutputAction;
      if ( !v42 )
        goto LABEL_49;
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)v42,
        (System_Uri_o *)StringLiteral_21491,
        (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
    }
    v38 = 2;
    goto LABEL_21;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21359, 0LL) )
  {
    if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_17135, 0LL) )
    {
      v30 = &StringLiteral_6962;
      currentTransactionId = (System_String_o *)StringLiteral_1;
      v32 = 16;
      goto LABEL_14;
    }
    if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21625, 0LL) )
    {
      v40 = &StringLiteral_11283;
LABEL_33:
      v39 = (System_String_o *)*v40;
      currentTransactionId = (System_String_o *)StringLiteral_1;
      v32 = 6;
      goto LABEL_34;
    }
LABEL_17:
    v41 = System_String__Concat_43746016(
            (System_String_o *)StringLiteral_6120,
            result,
            (System_String_o *)StringLiteral_15807,
            0LL);
    currentTransactionId = (System_String_o *)StringLiteral_1;
    v32 = 6;
    v39 = v41;
    goto LABEL_34;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, __int64, Il2CppMethodPointer))this->klass->vtable._30_SetExistsDeferredPurchase.method)(
    this,
    1LL,
    this->klass->vtable._31_IsDeferredPurchaseExists.methodPtr);
  v30 = &StringLiteral_6963;
  currentTransactionId = (System_String_o *)StringLiteral_1;
  v32 = 15;
LABEL_14:
  v39 = (System_String_o *)*v30;
LABEL_34:
  v54 = this;
  v55 = return_type;
  v56 = 0;
LABEL_35:
  PurchaseLogic__OnEndPaymentStore(v54, v32, v39, v55, v56, currentTransactionId, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__OnInitializeFailed(PurchaseLogic_o *this, int32_t error, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x19
  __int64 v9; // x0
  __int64 v10; // x20
  System_String_o *v11; // x21
  System_String_o *v12; // x0
  struct System_Action_string__o *logErrorOutputAction; // x19
  __int64 v14; // x0
  __int64 v15; // x20
  System_String_o *v16; // x21
  System_String_o *v17; // x0
  int32_t v18; // [xsp+Ch] [xbp-14h] BYREF

  v18 = error;
  if ( (byte_40FA077 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__Invoke__, *(_QWORD *)&error);
    sub_B16FFC(&Method_System_Action_string__float__Invoke__, v5);
    sub_B16FFC(&UnityEngine_Purchasing_InitializationFailureReason_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_9979, v7);
    byte_40FA077 = 1;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.method)(
    this,
    this->klass->vtable._30_SetExistsDeferredPurchase.methodPtr,
    method);
  if ( (unsigned int)error <= 1 )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    v9 = j_il2cpp_value_box_0(UnityEngine_Purchasing_InitializationFailureReason_TypeInfo, &v18);
    if ( v9 )
    {
      v10 = v9;
      v11 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 360LL))(
                                 v9,
                                 *(_QWORD *)(*(_QWORD *)v9 + 368LL));
      v18 = *(_DWORD *)j_il2cpp_object_unbox_0(v10);
      v12 = System_String__Concat_43743732((System_String_o *)StringLiteral_9979, v11, 0LL);
      if ( logErrorOutputActionSampledByRatio )
      {
        System_Action_string__float___Invoke(
          logErrorOutputActionSampledByRatio,
          v12,
          0.01,
          (const MethodInfo_24C5364 *)Method_System_Action_string__float__Invoke__);
        return;
      }
    }
LABEL_10:
    sub_B170D4();
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v14 = j_il2cpp_value_box_0(UnityEngine_Purchasing_InitializationFailureReason_TypeInfo, &v18);
  if ( !v14 )
    goto LABEL_10;
  v15 = v14;
  v16 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 360LL))(
                             v14,
                             *(_QWORD *)(*(_QWORD *)v14 + 368LL));
  v18 = *(_DWORD *)j_il2cpp_object_unbox_0(v15);
  v17 = System_String__Concat_43743732((System_String_o *)StringLiteral_9979, v16, 0LL);
  if ( !logErrorOutputAction )
    goto LABEL_10;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logErrorOutputAction,
    (System_Uri_o *)v17,
    (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
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
  __int64 v32; // x3
  __int64 v33; // x4
  UnityEngine_Purchasing_IAppleExtensions_o *v34; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v35; // x21
  UnityEngine_Purchasing_IAppleExtensions_c *klass; // x8
  unsigned __int64 v37; // x10
  UnityEngine_Purchasing_IAppleExtensions_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40FA074 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__Invoke__, controller);
    sub_B16FFC(&Method_System_Action_Product___ctor__, v7);
    sub_B16FFC(&System_Action_Product__TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v9);
    sub_B16FFC(&PurchaseLogic_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_9980, v11);
    byte_40FA074 = 1;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer, UnityEngine_Purchasing_IExtensionProvider_o *, const MethodInfo *))this->klass->vtable._28_EnableCrashReporterOnInitializeSucceeded.method)(
    this,
    this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.methodPtr,
    extensions,
    method);
  logOutputAction = this->fields._logOutputAction;
  if ( !logOutputAction )
    sub_B170D4();
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)StringLiteral_9980,
    (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
  static_fields = (BattleServantConfConponent_o *)PurchaseLogic_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)controller;
  sub_B16F98(static_fields, (System_Int32_array **)controller, v14, v15, v16, v17, v18, v19);
  v20 = PurchaseLogic_TypeInfo->static_fields;
  v20->_storeExtensionProvider = extensions;
  sub_B16F98(
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
    v34 = AppleExtension;
    v35 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_Product__TypeInfo,
                                                                                 v30,
                                                                                 v31,
                                                                                 v32,
                                                                                 v33);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v35,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._26_OnInitializeFailed.methodPtr,
      (const MethodInfo_24B7310 *)Method_System_Action_Product___ctor__);
    klass = v34->klass;
    if ( *(_WORD *)&v34->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      p_offset = (UnityEngine_Purchasing_IAppleExtensions_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
      {
        ++v37;
        p_offset += 2;
        if ( v37 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(v34, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 2LL);
    }
    (*(void (__fastcall **)(UnityEngine_Purchasing_IAppleExtensions_o *, System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *, _QWORD))p_method)(
      v34,
      v35,
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
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v21; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0
  const MethodInfo *v23; // x2
  System_Action_Uri__o *logErrorOutputAction; // x20
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  System_Action_Uri__o *v27; // x23
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  UnityEngine_Object_o *Instance; // x23
  Il2CppObject *v31; // x23
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  PurchaseLogic_ProductFinishedAction_o *v36; // x24
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  __int64 v44; // x22
  const MethodInfo *v45; // x5
  int32_t v46; // w1
  int32_t v47; // [xsp+8h] [xbp-38h] BYREF
  int v48; // [xsp+Ch] [xbp-34h] BYREF
  System_Decimal_o v49; // 0:x0.16

  v5 = product;
  v6 = this;
  if ( (byte_40FA079 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__Invoke__, product);
    sub_B16FFC(&Method_CommonUI_OpenStonePurchaseReciveMenu__, v7);
    sub_B16FFC(&System_Decimal_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&PurchaseLogic_ProductFinishedAction_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B16FFC(&string_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_10013, v15);
    this = (PurchaseLogic_o *)sub_B16FFC(&StringLiteral_5190, v16);
    byte_40FA079 = 1;
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
  if ( !PurchaseLogic__IsAppleDevice((const MethodInfo *)this) )
    goto LABEL_13;
  IsNullOrEmpty = System_String__IsNullOrEmpty(Empty, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_13;
  DeferredPurchaseProductIdsFromPlayerPrefs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs((PurchaseLogic_o *)IsNullOrEmpty, v21);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
    goto LABEL_32;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         DeferredPurchaseProductIdsFromPlayerPrefs,
         (WarBoardManager_TaskList_o *)Empty,
         (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(v6, Empty, v23);
    logErrorOutputAction = (System_Action_Uri__o *)v6->fields._logErrorOutputAction;
    v48 = 4;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, &v48);
    v26 = System_String__Format_43739268((System_String_o *)StringLiteral_5190, (Il2CppObject *)Empty, v25, 0LL);
    if ( !logErrorOutputAction )
      goto LABEL_32;
    System_Action_Uri___Invoke(
      logErrorOutputAction,
      (System_Uri_o *)v26,
      (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
    failureReason = 4;
  }
  else
  {
LABEL_13:
    if ( failureReason != 4 )
    {
      v27 = (System_Action_Uri__o *)v6->fields._logErrorOutputAction;
      v47 = failureReason;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, &v47);
      v29 = System_String__Format_43739268((System_String_o *)StringLiteral_10013, (Il2CppObject *)Empty, v28, 0LL);
      if ( !v27 )
        goto LABEL_32;
      System_Action_Uri___Invoke(
        v27,
        (System_Uri_o *)v29,
        (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
    }
  }
  if ( !v6->fields._buyProductFinishedAction )
  {
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    {
      v31 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v36 = (PurchaseLogic_ProductFinishedAction_o *)sub_B170CC(
                                                       PurchaseLogic_ProductFinishedAction_TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34,
                                                       v35);
      PurchaseLogic_ProductFinishedAction___ctor(v36, v31, Method_CommonUI_OpenStonePurchaseReciveMenu__, 0LL);
      v6->fields._buyProductFinishedAction = v36;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v6->fields._buyProductFinishedAction,
        (System_Int32_array **)v36,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
  }
  if ( v5 )
  {
    metadata_k__BackingField = v5->fields._metadata_k__BackingField;
    if ( metadata_k__BackingField )
    {
      v44 = *(_QWORD *)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.flags;
      v5 = *(UnityEngine_Purchasing_Product_o **)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.lo;
      if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      }
      *(_QWORD *)&v49.fields.flags = v44;
      *(_QWORD *)&v49.fields.lo = v5;
      LODWORD(v5) = System_Decimal__ToInt32(v49, 0LL);
      goto LABEL_28;
    }
LABEL_32:
    sub_B170D4();
  }
LABEL_28:
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._23_ShowPurchaseFailedNotification.method)(
    v6,
    (unsigned int)failureReason,
    v6->klass->vtable._24_SendPurchaseAction.methodPtr);
  if ( (unsigned int)failureReason > 6 )
    v46 = 6;
  else
    v46 = dword_3135EC0[failureReason];
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(v6, v46, (int32_t)v5, 0, 0, v45);
}


int32_t __fastcall PurchaseLogic__ProcessPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_PurchaseEventArgs_o *purchaseEventArgs,
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
  __int64 v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **purchasedProduct_k__BackingField; // x1
  UnityEngine_Purchasing_Product_o **v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  PurchaseBehaviour_c *v30; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v32; // x23
  bool v33; // w0
  __int64 v34; // x8
  __int64 v35; // x8
  struct System_Action_string__o *logOutputAction; // x21
  Il2CppObject *v37; // x1
  System_String_o *v38; // x0
  const MethodInfo *v39; // x2
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  struct System_Action_string__o *v41; // x21
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  struct System_Action_string__o *v44; // x0
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x2
  struct System_Action_string__o *logErrorOutputAction; // x0
  System_String_o *v48; // x0
  struct System_Decimal_o localizedPrice_k__BackingField; // [xsp+0h] [xbp-40h] BYREF
  System_Decimal_o v51; // 0:x0.16

  if ( (byte_40FA078 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__Invoke__, purchaseEventArgs);
    sub_B16FFC(&Method_BasicHelper_Any_string___, v7);
    sub_B16FFC(&Method_System_Func_string__bool___ctor__, v8);
    sub_B16FFC(&System_Func_string__bool__TypeInfo, v9);
    sub_B16FFC(&PurchaseBehaviour_TypeInfo, v10);
    sub_B16FFC(&Method_PurchaseLogic___c__DisplayClass57_0__ProcessPurchase_b__0__, v11);
    sub_B16FFC(&PurchaseLogic___c__DisplayClass57_0_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_10755, v13);
    sub_B16FFC(&StringLiteral_10754, v14);
    sub_B16FFC(&StringLiteral_10753, v15);
    sub_B16FFC(&StringLiteral_10720, v16);
    byte_40FA078 = 1;
  }
  localizedPrice_k__BackingField = (struct System_Decimal_o)0LL;
  v17 = sub_B170CC(PurchaseLogic___c__DisplayClass57_0_TypeInfo, purchaseEventArgs, method, v3, v4);
  PurchaseLogic___c__DisplayClass57_0___ctor((PurchaseLogic___c__DisplayClass57_0_o *)v17, 0LL);
  if ( purchaseEventArgs )
  {
    purchasedProduct_k__BackingField = (System_Int32_array **)purchaseEventArgs->fields._purchasedProduct_k__BackingField;
    if ( !v17 )
      goto LABEL_27;
  }
  else
  {
    purchasedProduct_k__BackingField = 0LL;
    if ( !v17 )
      goto LABEL_27;
  }
  *(_QWORD *)(v17 + 16) = purchasedProduct_k__BackingField;
  v25 = (UnityEngine_Purchasing_Product_o **)(v17 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 16), purchasedProduct_k__BackingField, v18, v19, v20, v21, v22, v23);
  if ( *(_QWORD *)(v17 + 16) )
  {
    v30 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v30 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v30->static_fields->ConsumableProductIdCollection;
    v32 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_string__bool__TypeInfo,
                                                                               v26,
                                                                               v27,
                                                                               v28,
                                                                               v29);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v32,
      (Il2CppObject *)v17,
      Method_PurchaseLogic___c__DisplayClass57_0__ProcessPurchase_b__0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_string__bool___ctor__);
    v33 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
            ConsumableProductIdCollection,
            (System_Func_T__bool__o *)v32,
            (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_string___);
    v34 = *(_QWORD *)(v17 + 16);
    if ( v34 )
    {
      v35 = *(_QWORD *)(v34 + 16);
      if ( v35 )
      {
        logOutputAction = this->fields._logOutputAction;
        v37 = *(Il2CppObject **)(v35 + 16);
        if ( !v33 )
        {
          v48 = System_String__Format((System_String_o *)StringLiteral_10753, v37, 0LL);
          if ( !logOutputAction )
            goto LABEL_27;
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)logOutputAction,
            (System_Uri_o *)v48,
            (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
          goto LABEL_25;
        }
        v38 = System_String__Format((System_String_o *)StringLiteral_10754, v37, 0LL);
        if ( logOutputAction )
        {
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)logOutputAction,
            (System_Uri_o *)v38,
            (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
          if ( *v25 )
          {
            metadata_k__BackingField = (*v25)->fields._metadata_k__BackingField;
            if ( metadata_k__BackingField )
            {
              v41 = this->fields._logOutputAction;
              *(_QWORD *)&v51.fields.flags = &localizedPrice_k__BackingField;
              *(_QWORD *)&v51.fields.lo = 0LL;
              localizedPrice_k__BackingField = metadata_k__BackingField->fields._localizedPrice_k__BackingField;
              v42 = System_Decimal__ToString(v51, v39);
              v43 = System_String__Concat_43743732((System_String_o *)StringLiteral_10720, v42, 0LL);
              if ( v41 )
              {
                System_Action_Uri___Invoke(
                  (System_Action_Uri__o *)v41,
                  (System_Uri_o *)v43,
                  (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
                if ( *v25 )
                {
                  v44 = this->fields._logOutputAction;
                  if ( v44 )
                  {
                    System_Action_Uri___Invoke(
                      (System_Action_Uri__o *)v44,
                      (System_Uri_o *)(*v25)->fields._receipt_k__BackingField,
                      (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
                    PurchaseLogic__ValidateReceipt(this, *v25, v45);
LABEL_25:
                    PurchaseLogic__AddPendingPurchase(this, *v25, v46);
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
    sub_B170D4();
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  if ( !logErrorOutputAction )
    goto LABEL_27;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logErrorOutputAction,
    (System_Uri_o *)StringLiteral_10755,
    (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__PurchaseIfAvailable(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        int32_t price,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
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
  __int64 v27; // x3
  __int64 v28; // x4
  int32_t CumulativeAmount; // w2
  const MethodInfo *v30; // x5
  NetworkManager_ResultCallbackFunc_o *v31; // x19
  PurchaseLogic_o *v32; // x0
  const MethodInfo *v33; // x2

  if ( (byte_40FA062 & 1) == 0 )
  {
    sub_B16FFC(&AgeVerificationMenu_TypeInfo, product);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    sub_B16FFC(&Method_PurchaseLogic___c__DisplayClass27_0__PurchaseIfAvailable_b__0__, v9);
    sub_B16FFC(&PurchaseLogic___c__DisplayClass27_0_TypeInfo, v10);
    byte_40FA062 = 1;
  }
  v11 = sub_B170CC(PurchaseLogic___c__DisplayClass27_0_TypeInfo, product, *(_QWORD *)&price, method, v4);
  PurchaseLogic___c__DisplayClass27_0___ctor((PurchaseLogic___c__DisplayClass27_0_o *)v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 32) = product;
  *(_DWORD *)(v11 + 24) = price;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)product, v18, v19, v20, v21, v22, v23);
  if ( PurchaseLogic__IsAppleDevice(v24)
    && PurchaseLogic__IsPendingPurchase(this, *(UnityEngine_Purchasing_Product_o **)(v11 + 32), v26) )
  {
    if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    }
    CumulativeAmount = AgeVerificationMenu__GetCumulativeAmount(0LL);
    PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, 12, CumulativeAmount, 0, 0, v30);
  }
  else
  {
    v31 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   v25,
                                                   v26,
                                                   v27,
                                                   v28);
    NetworkManager_ResultCallbackFunc___ctor(
      v31,
      (Il2CppObject *)v11,
      Method_PurchaseLogic___c__DisplayClass27_0__PurchaseIfAvailable_b__0__,
      0LL);
    PurchaseLogic__RequestGameServerBankStatus(v32, v31, v33);
  }
}


void __fastcall PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(
        PurchaseLogic_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v24; // x21
  PurchaseLogic_o *v25; // x0
  const MethodInfo *v26; // x2

  if ( (byte_40FA07D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__RemoveAll__, productId);
    sub_B16FFC(&Method_System_Predicate_string___ctor__, v6);
    sub_B16FFC(&System_Predicate_string__TypeInfo, v7);
    sub_B16FFC(&Method_PurchaseLogic___c__DisplayClass76_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__, v8);
    sub_B16FFC(&PurchaseLogic___c__DisplayClass76_0_TypeInfo, v9);
    byte_40FA07D = 1;
  }
  v10 = sub_B170CC(PurchaseLogic___c__DisplayClass76_0_TypeInfo, productId, method, v3, v4);
  PurchaseLogic___c__DisplayClass76_0___ctor((PurchaseLogic___c__DisplayClass76_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_7;
  *(_QWORD *)(v10 + 16) = productId;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)productId, v11, v12, v13, v14, v15, v16);
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v10 + 16), 0LL);
  if ( IsNullOrEmpty )
    return;
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)IsNullOrEmpty,
                                                v18);
  v24 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_string__TypeInfo,
                                                                   v20,
                                                                   v21,
                                                                   v22,
                                                                   v23);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v24,
    (Il2CppObject *)v10,
    Method_PurchaseLogic___c__DisplayClass76_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_string___ctor__);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
LABEL_7:
    sub_B170D4();
  v25 = (PurchaseLogic_o *)System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
                             (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
                             (System_Predicate_T__o *)v24,
                             (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_string__RemoveAll__);
  PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(v25, DeferredPurchaseProductIdsFromPlayerPrefs, v26);
}


void __fastcall PurchaseLogic__RemovePendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0
  struct System_Collections_Generic_HashSet_Product__o *v7; // x0

  if ( (byte_40FA068 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Product__Contains__, product);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Product__Remove__, v5);
    byte_40FA068 = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_8;
  if ( System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
         (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
         (BattleBuffData_BuffData_o *)product,
         (const MethodInfo_21DEFE0 *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
  {
    v7 = this->fields._pendingProducts;
    if ( v7 )
    {
      System_Collections_Generic_HashSet_BattleBuffData_BuffData___Remove(
        (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)v7,
        (BattleBuffData_BuffData_o *)product,
        (const MethodInfo_21DF190 *)Method_System_Collections_Generic_HashSet_Product__Remove__);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
}


void __fastcall PurchaseLogic__RequestGameServerBankStatus(
        PurchaseLogic_o *this,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  BankStatusRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40FA063 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_BankStatusRequest___, callback);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    byte_40FA063 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (BankStatusRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               callback,
                                                               (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_BankStatusRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B170D4();
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
  struct System_Action_string__o *v14; // x0
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x20
  UnityEngine_Purchasing_IExtensionProvider_c *klass; // x8
  void *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  struct System_Action_string__o *logOutputAction; // x0
  System_Uri_o *v24; // x1
  const MethodInfo_24B7324 *v25; // x2
  struct System_Action_string__o *v26; // x19
  __int64 v27; // x0
  __int64 v28; // x20
  System_String_o *v29; // x21
  System_String_o *v30; // x0
  __int64 (__fastcall **v31)(struct UnityEngine_Purchasing_IExtensionProvider_o *, _QWORD); // x0
  __int64 v32; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Action_bool__o *v37; // x21
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  UnityEngine_Purchasing_IAppleExtensions_c **v40; // x11
  __int64 v41; // x0
  int32_t platform; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FA066 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__Invoke__, method);
    sub_B16FFC(&Method_System_Action_bool___ctor__, v3);
    sub_B16FFC(&System_Action_bool__TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___, v6);
    sub_B16FFC(&Method_PurchaseLogic__RestorePurchases_b__31_0__, v7);
    sub_B16FFC(&PurchaseLogic_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_RuntimePlatform_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_11445, v10);
    sub_B16FFC(&StringLiteral_11447, v11);
    sub_B16FFC(&StringLiteral_11444, v12);
    byte_40FA066 = 1;
  }
  platform = 0;
  if ( (byte_40FA060 & 1) == 0 )
  {
    sub_B16FFC(&PurchaseLogic_TypeInfo, method);
    byte_40FA060 = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    logOutputAction = this->fields._logOutputAction;
    if ( !logOutputAction )
      goto LABEL_31;
    v24 = (System_Uri_o *)StringLiteral_11444;
    v25 = (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__;
    goto LABEL_18;
  }
  if ( UnityEngine_Application__get_platform(0LL) != 8 && UnityEngine_Application__get_platform(0LL) != 1 )
  {
    v26 = this->fields._logOutputAction;
    platform = UnityEngine_Application__get_platform(0LL);
    v27 = j_il2cpp_value_box_0(UnityEngine_RuntimePlatform_TypeInfo, &platform);
    if ( !v27 )
      goto LABEL_31;
    v28 = v27;
    v29 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 360LL))(
                               v27,
                               *(_QWORD *)(*(_QWORD *)v27 + 368LL));
    platform = *(_DWORD *)j_il2cpp_object_unbox_0(v28);
    v30 = System_String__Concat_43743732((System_String_o *)StringLiteral_11445, v29, 0LL);
    if ( !v26 )
      goto LABEL_31;
    v24 = (System_Uri_o *)v30;
    logOutputAction = v26;
    v25 = (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__;
LABEL_18:
    System_Action_Uri___Invoke((System_Action_Uri__o *)logOutputAction, v24, v25);
    return;
  }
  v14 = this->fields._logOutputAction;
  if ( !v14 )
    goto LABEL_31;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)v14,
    (System_Uri_o *)StringLiteral_11447,
    (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
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
    p_method = sub_AAFEF8(storeExtensionProvider, v18, v19);
  }
  v31 = (__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, _QWORD))sub_B170AC(
                                                                                                 *(_QWORD *)(p_method + 8),
                                                                                                 v17);
  v32 = (*v31)(storeExtensionProvider, v31);
  v37 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v33, v34, v35, v36);
  System_Action_bool____ctor(
    v37,
    (Il2CppObject *)this,
    Method_PurchaseLogic__RestorePurchases_b__31_0__,
    (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
  if ( !v32 )
LABEL_31:
    sub_B170D4();
  v38 = *(_QWORD *)v32;
  if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
  {
    v39 = 0LL;
    v40 = (UnityEngine_Purchasing_IAppleExtensions_c **)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *(v40 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      ++v39;
      v40 += 2;
      if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
        goto LABEL_28;
    }
    v41 = v38 + 16LL * (*(_DWORD *)v40 + 1) + 312;
  }
  else
  {
LABEL_28:
    v41 = sub_AAFEF8(v32, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(__int64, System_Action_bool__o *, _QWORD))v41)(v32, v37, *(_QWORD *)(v41 + 8));
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
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **current; // x1
  System_String_o **v29; // x20
  System_String_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  PurchaseBehaviour_c *v35; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v37; // x23
  System_String_o *v38; // x21
  System_String_o *a; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FA07B & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_string___, deferredPurchaseProductIdList);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_B16FFC(&Method_System_Func_string__bool___ctor__, v7);
    sub_B16FFC(&System_Func_string__bool__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v9);
    sub_B16FFC(&PurchaseBehaviour_TypeInfo, v10);
    sub_B16FFC(&string_TypeInfo, v11);
    sub_B16FFC(&Method_PurchaseLogic___c__DisplayClass74_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__, v12);
    sub_B16FFC(&PurchaseLogic___c__DisplayClass74_0_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_1260, v14);
    sub_B16FFC(&StringLiteral_1, v15);
    sub_B16FFC(&StringLiteral_5207, v16);
    byte_40FA07B = 1;
  }
  memset(&v41, 0, sizeof(v41));
  if ( deferredPurchaseProductIdList )
  {
    a = (System_String_o *)StringLiteral_1;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v40,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)deferredPurchaseProductIdList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v41 = v40;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v41,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v21 = sub_B170CC(PurchaseLogic___c__DisplayClass74_0_TypeInfo, v17, v18, v19, v20);
      PurchaseLogic___c__DisplayClass74_0___ctor((PurchaseLogic___c__DisplayClass74_0_o *)v21, 0LL);
      if ( !v21 )
        sub_B170D4();
      current = (System_Int32_array **)v41.fields.current;
      *(_QWORD *)(v21 + 16) = v41.fields.current;
      v29 = (System_String_o **)(v21 + 16);
      sub_B16F98((BattleServantConfConponent_o *)(v21 + 16), current, v22, v23, v24, v25, v26, v27);
      if ( *(_QWORD *)(v21 + 16) )
      {
        v30 = System_String__Trim_43731064(*(System_String_o **)(v21 + 16), 0LL);
        if ( !System_String__op_Equality(v30, string_TypeInfo->static_fields->Empty, 0LL) )
        {
          v35 = PurchaseBehaviour_TypeInfo;
          if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
            v35 = PurchaseBehaviour_TypeInfo;
          }
          ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v35->static_fields->ConsumableProductIdCollection;
          v37 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_string__bool__TypeInfo,
                                                                                     v31,
                                                                                     v32,
                                                                                     v33,
                                                                                     v34);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v37,
            (Il2CppObject *)v21,
            Method_PurchaseLogic___c__DisplayClass74_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_string__bool___ctor__);
          if ( BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                 ConsumableProductIdCollection,
                 (System_Func_T__bool__o *)v37,
                 (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_string___) )
          {
            v38 = a;
            if ( System_String__op_Inequality(a, string_TypeInfo->static_fields->Empty, 0LL) )
              v38 = System_String__Concat_43743732(a, (System_String_o *)StringLiteral_1260, 0LL);
            a = System_String__Concat_43743732(v38, *v29, 0LL);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v41,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( System_String__IsNullOrEmpty(a, 0LL) )
      UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5207, 0LL);
    else
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_5207, a, 0LL);
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
  WebViewManager_o *Instance; // x0
  BankShopMaster_o *MasterData_WarQuestSelectionMaster; // x0
  BankShopEntity_array *EnableEntitiyList; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int max_length; // w8
  BankShopEntity_array *v15; // x21
  unsigned int v16; // w22
  BankShopEntity_o *v17; // x23
  int32_t id; // w20
  int googlePrice; // w21
  AdManager_o *v20; // x0

  if ( (byte_40FA073 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_BankShopMaster___, paymentProductId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_8253, v8);
    byte_40FA073 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (BankShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  EnableEntitiyList = BankShopMaster__GetEnableEntitiyList(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !EnableEntitiyList )
    goto LABEL_18;
  max_length = EnableEntitiyList->max_length;
  v15 = EnableEntitiyList;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        sub_B17100(EnableEntitiyList, v12, v13);
        sub_B170A0();
      }
      v17 = v15->m_Items[v16];
      if ( !v17 || !paymentProductId )
        goto LABEL_18;
      EnableEntitiyList = (BankShopEntity_array *)System_String__Equals_43731072(
                                                    paymentProductId,
                                                    v17->fields.googleShopId,
                                                    0LL);
      if ( ((unsigned __int8)EnableEntitiyList & 1) != 0 )
        break;
      max_length = v15->max_length;
      if ( (int)++v16 >= max_length )
        return;
    }
    id = v17->fields.id;
    if ( (id & 0x80000000) == 0 )
    {
      googlePrice = v17->fields.googlePrice;
      v20 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( v20 )
      {
        AdManager__TrackPurchase(
          v20,
          id,
          (double)googlePrice,
          (System_String_o *)StringLiteral_8253,
          transactionId,
          0LL);
        return;
      }
LABEL_18:
      sub_B170D4();
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
  struct System_Action_string__o *logOutputAction; // x22
  System_String_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  NetworkManager_ResultCallbackFunc_o *v35; // x22
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_String_o *receiptBase64Str; // x22
  System_String_o *googleSignatureStr; // x21
  System_String_o *payloadJsonStr; // x23
  PurchaseByBank_UnityIap_Request_o *v40; // x24
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v45; // x25
  const MethodInfo *v46; // x6
  struct System_Action_string__o *logErrorOutputAction; // x20
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  const MethodInfo *v50; // x2
  int64_t UserId; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FA06C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__Invoke__, receiptContents);
    sub_B16FFC(&Method_System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult_____ctor__, v12);
    sub_B16FFC(&System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo, v13);
    sub_B16FFC(&Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&Method_PurchaseLogic_OnEndSendReceiptData__, v16);
    sub_B16FFC(&Method_PurchaseLogic__SendReceiptData_b__39_0__, v17);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_22980, v19);
    sub_B16FFC(&StringLiteral_10805, v20);
    sub_B16FFC(&StringLiteral_15040, v21);
    sub_B16FFC(&StringLiteral_15807, v22);
    byte_40FA06C = 1;
  }
  UserId = 0LL;
  this->fields._currentTransactionId = currentTransactionId;
  sub_B16F98(
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
  v24 = System_String__Concat_43746016(
          (System_String_o *)StringLiteral_10805,
          receiptContents->fields.payloadJsonStr,
          (System_String_o *)StringLiteral_15807,
          0LL);
  if ( !logOutputAction )
    goto LABEL_19;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)v24,
    (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( NetworkManager__get_UserId(0LL) > 0 )
  {
    this->fields._purchaseResultArray = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields._purchaseResultArray, 0LL, v25, v26, v27, v28, v29, v30);
    v35 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   v31,
                                                   v32,
                                                   v33,
                                                   v34);
    NetworkManager_ResultCallbackFunc___ctor(
      v35,
      (Il2CppObject *)this,
      Method_PurchaseLogic_OnEndSendReceiptData__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v35,
                                          (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___);
    receiptBase64Str = receiptContents->fields.receiptBase64Str;
    payloadJsonStr = receiptContents->fields.payloadJsonStr;
    googleSignatureStr = receiptContents->fields.googleSignatureStr;
    v40 = (PurchaseByBank_UnityIap_Request_o *)Request_WarBoardWallAttackRequest;
    v45 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo,
                                                                                 v41,
                                                                                 v42,
                                                                                 v43,
                                                                                 v44);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v45,
      (Il2CppObject *)this,
      Method_PurchaseLogic__SendReceiptData_b__39_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult_____ctor__);
    if ( v40 )
    {
      PurchaseByBank_UnityIap_Request__beginRequest(
        v40,
        receiptBase64Str,
        payloadJsonStr,
        storeError,
        googleSignatureStr,
        (System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____o *)v45,
        v46);
      return;
    }
LABEL_19:
    sub_B170D4();
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v48 = System_Int64__ToString((int64_t)&UserId, 0LL);
  v49 = System_String__Concat_43743732((System_String_o *)StringLiteral_15040, v48, 0LL);
  if ( !logErrorOutputAction )
    goto LABEL_19;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logErrorOutputAction,
    (System_Uri_o *)v49,
    (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
  PurchaseLogic__OnEndSendReceiptData(this, (System_String_o *)StringLiteral_22980, v50);
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

  if ( (byte_40FA070 & 1) == 0 )
  {
    sub_B16FFC(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&bankShopId);
    byte_40FA070 = 1;
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
  const MethodInfo *v5; // x0
  System_String_o *transactionID_k__BackingField; // x21
  PurchaseLogic_ReceiptContents_o *v7; // x20
  const MethodInfo *v8; // x4

  v5 = (const MethodInfo *)((__int64 (__fastcall *)(PurchaseLogic_o *, UnityEngine_Purchasing_Product_o *, Il2CppMethodPointer))this->klass->vtable._19_ExtractReceiptContents.method)(
                             this,
                             product,
                             this->klass->vtable._20_UpdateMonthlyPurchasePrice.methodPtr);
  if ( !product )
    goto LABEL_7;
  transactionID_k__BackingField = product->fields._transactionID_k__BackingField;
  v7 = (PurchaseLogic_ReceiptContents_o *)v5;
  if ( !PurchaseLogic__IsAppleDevice(v5) )
    goto LABEL_6;
  if ( !v7 )
LABEL_7:
    sub_B170D4();
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
  if ( (byte_40FA07F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__Invoke__, result);
    sub_B16FFC(&StringLiteral_11446, v4);
    sub_B16FFC(&StringLiteral_804, v5);
    byte_40FA07F = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  v7 = System_Boolean__ToString((bool)&v9, 0LL);
  v8 = System_String__Concat_43746016(
         (System_String_o *)StringLiteral_11446,
         v7,
         (System_String_o *)StringLiteral_804,
         0LL);
  if ( !logOutputAction )
    sub_B170D4();
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)v8,
    (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  if ( (byte_40FA2CB & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&purchaseResult);
    sub_B16FFC(&PurchaseBehaviour_Result_TypeInfo, v11);
    byte_40FA2CB = 1;
  }
  v13[4] = 0LL;
  v13[0] = j_il2cpp_value_box_0(PurchaseBehaviour_Result_TypeInfo, &v17);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v13[2] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v13[3] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v13, callback, object);
}


void __fastcall PurchaseLogic_ProductFinishedAction__EndInvoke(
        PurchaseLogic_ProductFinishedAction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&purchaseResult, *(_QWORD *)&perMonthAmount);
      if ( (sub_B1702C(v25) & 1) == 0 )
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
      v27 = sub_B17024(v25);
      v28 = sub_B17428(v25);
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
            v21 = sub_AAFEF8(v24, v31, v32);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_B170AC(v20, v25);
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
            v19 = sub_AAFEF8(v24, class_0, v13);
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

  if ( (byte_40FA2CC & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, method);
    byte_40FA2CC = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.payloadJsonStr = static_fields->Empty;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)Empty, v2, v3, v4, v5, v6, v7);
  v11 = string_TypeInfo->static_fields;
  v12 = v11->Empty;
  this->fields.googleSignatureStr = v11->Empty;
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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

  if ( (byte_40F83AA & 1) == 0 )
  {
    sub_B16FFC(&PurchaseLogic___c_TypeInfo, v1);
    byte_40F83AA = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(PurchaseLogic___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)PurchaseLogic___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40F83AB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Debug_TypeInfo, str);
    sub_B16FFC(&StringLiteral_15700, v4);
    byte_40F83AB = 1;
  }
  v5 = (Il2CppObject *)System_String__Concat_43743732((System_String_o *)StringLiteral_15700, str, 0LL);
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
  if ( (byte_40F83AC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Debug_TypeInfo, str);
    sub_B16FFC(&StringLiteral_15699, v6);
    sub_B16FFC(&StringLiteral_670, v7);
    byte_40F83AC = 1;
  }
  v8 = UnityEngine_Random__Range(0.0, 1.0, 0LL);
  if ( v8 < ratio )
  {
    v9 = System_Single__ToString(v8, (const MethodInfo *)&v11);
    v10 = (Il2CppObject *)System_String__Concat_43747144(
                            (System_String_o *)StringLiteral_15699,
                            v9,
                            (System_String_o *)StringLiteral_670,
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
    sub_B170D4();
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
  System_String_o *v17; // x0
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x20
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  struct UnityEngine_Purchasing_Product_o *v20; // x19
  unsigned __int64 v21; // x10
  UnityEngine_Purchasing_IStoreController_c **p_offset; // x11
  __int64 p_method; // x0
  struct PurchaseLogic_o *v24; // x8
  System_Action_Uri__o *logErrorOutputAction; // x20
  __int64 v26; // x0
  __int64 v27; // x21
  System_String_o *v28; // x22
  System_String_o *v29; // x0
  int32_t CumulativeAmount; // w0
  int32_t v31; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F83AD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__Invoke__, requestResultStr);
    sub_B16FFC(&AgeVerificationMenu_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Purchasing_IStoreController_TypeInfo, v6);
    sub_B16FFC(&PurchaseLogic_PurchaseAvailablilty_TypeInfo, v7);
    sub_B16FFC(&PurchaseLogic_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_10809, v9);
    sub_B16FFC(&StringLiteral_14793, v10);
    byte_40F83AD = 1;
  }
  v31 = 0;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_29:
    sub_B170D4();
  v31 = PurchaseLogic__CheckBankStatusAndMonthlyLimit(_4__this, requestResultStr, this->fields.price, 0LL);
  v12 = 9;
  switch ( v31 )
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
      v17 = System_String__Format(
              (System_String_o *)StringLiteral_10809,
              (Il2CppObject *)definition_k__BackingField->fields._id_k__BackingField,
              0LL);
      if ( !logOutputAction )
        goto LABEL_29;
      System_Action_Uri___Invoke(
        logOutputAction,
        (System_Uri_o *)v17,
        (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
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
      v26 = j_il2cpp_value_box_0(PurchaseLogic_PurchaseAvailablilty_TypeInfo, &v31);
      if ( !v26 )
        goto LABEL_29;
      v27 = v26;
      v28 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 360LL))(
                                 v26,
                                 *(_QWORD *)(*(_QWORD *)v26 + 368LL));
      v31 = *(_DWORD *)j_il2cpp_object_unbox_0(v27);
      v29 = System_String__Concat_43743732((System_String_o *)StringLiteral_14793, v28, 0LL);
      if ( !logErrorOutputAction )
        goto LABEL_29;
      System_Action_Uri___Invoke(
        logErrorOutputAction,
        (System_Uri_o *)v29,
        (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
LABEL_20:
      v12 = 6;
LABEL_21:
      if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
      }
      CumulativeAmount = AgeVerificationMenu__GetCumulativeAmount(0LL);
      if ( !this->fields.__4__this )
        goto LABEL_29;
      PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this->fields.__4__this, v12, CumulativeAmount, 0, 0, 0LL);
      return;
  }
  while ( *(p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
  {
    ++v21;
    p_offset += 2;
    if ( v21 >= *(unsigned __int16 *)&storeController->klass->_2.bitflags1 )
    {
LABEL_14:
      p_method = sub_AAFEF8(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 1LL);
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return System_String__Equals_43802548(definition_k__BackingField->fields._id_k__BackingField, id, 4, 0LL);
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
  return System_String__Equals_43802548(id, this->fields.idStr, 4, 0LL);
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