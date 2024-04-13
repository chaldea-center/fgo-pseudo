void __fastcall PurchaseLogic___ctor(PurchaseLogic_o *this, const MethodInfo *method)
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v35; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  PurchaseLogic___c_c *v55; // x0
  struct PurchaseLogic___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__77_0; // x20
  Il2CppObject *v58; // x21
  struct PurchaseLogic___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  PurchaseLogic___c_c *v72; // x0
  struct PurchaseLogic___c_StaticFields *v73; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__77_1; // x20
  Il2CppObject *v75; // x21
  struct PurchaseLogic___c_StaticFields *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  PurchaseLogic___c_c *v89; // x0
  struct PurchaseLogic___c_StaticFields *v90; // x8
  System_Action_string__float__o *_9__77_2; // x20
  Il2CppObject *v92; // x21
  struct PurchaseLogic___c_StaticFields *v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7

  if ( (byte_42E8844 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_string__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Action_string__float___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Action_string__float__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Product___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_HashSet_Product__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_PurchaseLogic___c___ctor_b__77_0__, v20, v21, v22);
    sub_B5D5C4(&Method_PurchaseLogic___c___ctor_b__77_1__, v23, v24, v25);
    sub_B5D5C4(&Method_PurchaseLogic___c___ctor_b__77_2__, v26, v27, v28);
    sub_B5D5C4(&PurchaseLogic___c_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_1/*""*/, v32, v33, v34);
    byte_42E8844 = 1;
  }
  v35 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_HashSet_Product__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v35,
    (const MethodInfo_2505E54 *)Method_System_Collections_Generic_HashSet_Product___ctor__);
  this->fields._pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)v35;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
  v42 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._currentTransactionId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields._currentTransactionId, v42, v43, v44, v45, v46, v47, v48);
  v55 = PurchaseLogic___c_TypeInfo;
  if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v55 = PurchaseLogic___c_TypeInfo;
  }
  static_fields = v55->static_fields;
  _9__77_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v58 = (Il2CppObject *)static_fields->__9;
    _9__77_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__77_0,
      v58,
      Method_PurchaseLogic___c___ctor_b__77_0__,
      (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
    v59 = PurchaseLogic___c_TypeInfo->static_fields;
    v59->__9__77_0 = (struct System_Action_string__o *)_9__77_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v59->__9__77_0,
      (System_Int32_array **)_9__77_0,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
  }
  this->fields._logOutputAction = (struct System_Action_string__o *)_9__77_0;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._logOutputAction,
    (System_Int32_array **)_9__77_0,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v72 = PurchaseLogic___c_TypeInfo;
  if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v72 = PurchaseLogic___c_TypeInfo;
  }
  v73 = v72->static_fields;
  _9__77_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v73->__9__77_1;
  if ( !_9__77_1 )
  {
    if ( (BYTE3(v72->vtable._0_Equals.methodPtr) & 4) != 0 && !v72->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v72);
      v73 = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v75 = (Il2CppObject *)v73->__9;
    _9__77_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__77_1,
      v75,
      Method_PurchaseLogic___c___ctor_b__77_1__,
      (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
    v76 = PurchaseLogic___c_TypeInfo->static_fields;
    v76->__9__77_1 = (struct System_Action_string__o *)_9__77_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v76->__9__77_1,
      (System_Int32_array **)_9__77_1,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82);
  }
  this->fields._logErrorOutputAction = (struct System_Action_string__o *)_9__77_1;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._logErrorOutputAction,
    (System_Int32_array **)_9__77_1,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v89 = PurchaseLogic___c_TypeInfo;
  if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v89 = PurchaseLogic___c_TypeInfo;
  }
  v90 = v89->static_fields;
  _9__77_2 = v90->__9__77_2;
  if ( !_9__77_2 )
  {
    if ( (BYTE3(v89->vtable._0_Equals.methodPtr) & 4) != 0 && !v89->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v89);
      v90 = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v92 = (Il2CppObject *)v90->__9;
    _9__77_2 = (System_Action_string__float__o *)sub_B5D694(System_Action_string__float__TypeInfo);
    System_Action_string__float____ctor(
      _9__77_2,
      v92,
      Method_PurchaseLogic___c___ctor_b__77_2__,
      (const MethodInfo_25999C4 *)Method_System_Action_string__float___ctor__);
    v93 = PurchaseLogic___c_TypeInfo->static_fields;
    v93->__9__77_2 = _9__77_2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v93->__9__77_2,
      (System_Int32_array **)_9__77_2,
      v94,
      v95,
      v96,
      v97,
      v98,
      v99);
  }
  this->fields._logErrorOutputActionSampledByRatio = _9__77_2;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._logErrorOutputActionSampledByRatio,
    (System_Int32_array **)_9__77_2,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogic__AddDeferredPurchaseProductIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  PurchaseLogic_o *v17; // x0
  const MethodInfo *v18; // x2

  if ( (byte_42E8842 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Distinct_string___, (_DWORD)productId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_string___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v8, v9, v10);
    byte_42E8842 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(productId, 0LL);
  if ( !IsNullOrEmpty )
  {
    DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                  (PurchaseLogic_o *)IsNullOrEmpty,
                                                  v12);
    if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
      sub_B5D69C(0LL, v14);
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)DeferredPurchaseProductIdsFromPlayerPrefs;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
      (EventMissionProgressRequest_Argument_ProgressData_o *)productId,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    v16 = System_Linq_Enumerable__Distinct_string_(
            v15,
            (const MethodInfo_1CA8E54 *)Method_System_Linq_Enumerable_Distinct_string___);
    v17 = (PurchaseLogic_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                               v16,
                               (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_string___);
    PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(
      v17,
      (System_Collections_Generic_List_string__o *)v17,
      v18);
  }
}


void __fastcall PurchaseLogic__AddPendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0

  if ( (byte_42E882D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Product__Add__, (_DWORD)product, (_DWORD)method, v3);
    byte_42E882D = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_B5D69C(0LL, product);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)pendingProducts,
    (WarBoardAIRoute_RouteData_o *)product,
    (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_Product__Add__);
}


int32_t __fastcall PurchaseLogic__CheckBankStatusAndMonthlyLimit(
        PurchaseLogic_o *this,
        System_String_o *result,
        int32_t price,
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
  System_String_o *v51; // x19
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v53; // x22
  struct PurchaseLogic___c_StaticFields **Item; // x0
  __int64 v55; // x1
  System_String_o *v56; // x0
  int32_t v57; // w21
  PurchaseLogic_o *v58; // x0
  const MethodInfo *v59; // x2
  int32_t v60; // w21
  System_String_o *v61; // x0
  int32_t v62; // w20
  System_String_o *v63; // x0
  CommonUI_o *Instance; // x20
  struct PurchaseLogic___c_StaticFields *static_fields; // x8
  System_Action_o *_9__29_0; // x22
  Il2CppObject *v67; // x21
  struct PurchaseLogic___c_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  CommonUI_o *v75; // x20
  struct PurchaseLogic___c_StaticFields *v76; // x8
  System_Action_o *_9__29_1; // x21
  Il2CppObject *v78; // x22
  struct PurchaseLogic___c_StaticFields *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7

  if ( (byte_42E882A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)result, price, method);
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v12, v13, v14);
    sub_B5D5C4(&JsonManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__29_0__, v27, v28, v29);
    sub_B5D5C4(&Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__29_1__, v30, v31, v32);
    sub_B5D5C4(&PurchaseLogic___c_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_12533/*"STONE_PURCHASE_RESULT_BLOCK"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_21738/*"perMonthAmount"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_20733/*"message"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_16797/*"bankAvailable"*/, v48, v49, v50);
    byte_42E882A = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12533/*"STONE_PURCHASE_RESULT_BLOCK"*/, 0LL);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
    goto LABEL_39;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0LL);
  v53 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary;
  if ( !Dictionary
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Dictionary,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21738/*"perMonthAmount"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    goto LABEL_39;
  }
  Item = (struct PurchaseLogic___c_StaticFields **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                     v53,
                                                     (System_Type_o *)StringLiteral_21738/*"perMonthAmount"*/,
                                                     (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_57;
  v56 = (System_String_o *)((__int64 (__fastcall *)(struct PurchaseLogic___c_StaticFields **, struct System_Action_string__o *))(*Item)[6].__9__40_0)(
                             Item,
                             (*Item)[6].__9__77_0);
  v57 = System_Int32__Parse(v56, 0LL);
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  }
  AgeVerificationMenu__SaveCumulativeAmount(v57, 0LL);
  if ( !PurchaseLogic__IsLimitOver(v58, v57 + price, v59) )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v53,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_16797/*"bankAvailable"*/,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (struct PurchaseLogic___c_StaticFields **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                         v53,
                                                         (System_Type_o *)StringLiteral_16797/*"bankAvailable"*/,
                                                         (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_57;
      v61 = (System_String_o *)((__int64 (__fastcall *)(struct PurchaseLogic___c_StaticFields **, struct System_Action_string__o *))(*Item)[6].__9__40_0)(
                                 Item,
                                 (*Item)[6].__9__77_0);
      v62 = System_Int32__Parse(v61, 0LL);
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v53,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_20733/*"message"*/,
             (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (struct PurchaseLogic___c_StaticFields **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                           v53,
                                                           (System_Type_o *)StringLiteral_20733/*"message"*/,
                                                           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_57;
        v63 = (System_String_o *)((__int64 (__fastcall *)(struct PurchaseLogic___c_StaticFields **, struct System_Action_string__o *))(*Item)[6].__9__40_0)(
                                   Item,
                                   (*Item)[6].__9__77_0);
        v51 = v63;
        if ( !v62 )
        {
          if ( !System_String__IsNullOrEmpty(v63, 0LL) )
          {
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                v67 = (Il2CppObject *)static_fields->__9;
                _9__29_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                System_Action___ctor(
                  _9__29_0,
                  v67,
                  Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__29_0__,
                  0LL);
                v68 = PurchaseLogic___c_TypeInfo->static_fields;
                v68->__9__29_0 = _9__29_0;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&v68->__9__29_0,
                  (System_Int32_array **)_9__29_0,
                  v69,
                  v70,
                  v71,
                  v72,
                  v73,
                  v74);
              }
              if ( Instance )
              {
                v60 = 1;
                CommonUI__OpenNotificationDialog(Instance, 0LL, v51, _9__29_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
                return v60;
              }
LABEL_57:
              sub_B5D69C(Item, v55);
            }
          }
          return 1;
        }
      }
      else if ( !v62 )
      {
        return 1;
      }
    }
LABEL_39:
    if ( !System_String__IsNullOrEmpty(v51, 0LL) )
    {
      v75 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v75, 0LL, 0LL) )
      {
        Item = (struct PurchaseLogic___c_StaticFields **)PurchaseLogic___c_TypeInfo;
        if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
          Item = (struct PurchaseLogic___c_StaticFields **)PurchaseLogic___c_TypeInfo;
        }
        v76 = Item[23];
        _9__29_1 = v76->__9__29_1;
        if ( !_9__29_1 )
        {
          if ( (*((_BYTE *)Item + 307) & 4) != 0 && !*((_DWORD *)Item + 56) )
          {
            j_il2cpp_runtime_class_init_0(Item);
            v76 = PurchaseLogic___c_TypeInfo->static_fields;
          }
          v78 = (Il2CppObject *)v76->__9;
          _9__29_1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(_9__29_1, v78, Method_PurchaseLogic___c__CheckBankStatusAndMonthlyLimit_b__29_1__, 0LL);
          v79 = PurchaseLogic___c_TypeInfo->static_fields;
          v79->__9__29_1 = _9__29_1;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v79->__9__29_1,
            (System_Int32_array **)_9__29_1,
            v80,
            v81,
            v82,
            v83,
            v84,
            v85);
        }
        if ( !v75 )
          goto LABEL_57;
        CommonUI__OpenNotificationDialog(v75, 0LL, v51, _9__29_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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
    return dword_32A2E40[failureReason];
}


void __fastcall PurchaseLogic__ConfirmPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
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
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0
  __int64 v16; // x3
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x20
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  unsigned __int64 v19; // x10
  UnityEngine_Purchasing_IStoreController_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42E8830 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Product__Contains__, (_DWORD)product, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Product__Remove__, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Purchasing_IStoreController_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&PurchaseLogic_TypeInfo, v12, v13, v14);
    byte_42E8830 = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_15;
  if ( !System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
          (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
          (BattleBuffData_BuffData_o *)product,
          (const MethodInfo_25064D8 *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
    return;
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts
    || (pendingProducts = (struct System_Collections_Generic_HashSet_Product__o *)System_Collections_Generic_HashSet_BattleBuffData_BuffData___Remove(
                                                                                    (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
                                                                                    (BattleBuffData_BuffData_o *)product,
                                                                                    (const MethodInfo_2506688 *)Method_System_Collections_Generic_HashSet_Product__Remove__),
        (storeController = PurchaseLogic_TypeInfo->static_fields->_storeController) == 0LL) )
  {
LABEL_15:
    sub_B5D69C(pendingProducts, product);
  }
  klass = storeController->klass;
  if ( *(_WORD *)&storeController->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    p_offset = (UnityEngine_Purchasing_IStoreController_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      ++v19;
      p_offset += 2;
      if ( v19 >= *(unsigned __int16 *)&storeController->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AF54C0(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 2LL, v16);
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
  sub_B5D560(
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
  PurchaseLogic_ReceiptContents_o *v4; // x19

  if ( (byte_42E8831 & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseLogic_ReceiptContents_TypeInfo, (_DWORD)product, (_DWORD)method, v3);
    byte_42E8831 = 1;
  }
  v4 = (PurchaseLogic_ReceiptContents_o *)sub_B5D694(PurchaseLogic_ReceiptContents_TypeInfo);
  PurchaseLogic_ReceiptContents___ctor(v4, 0LL);
  return v4;
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
          sub_B5D69C(this, purchaseResultArray);
        }
      }
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
    }
  }
}


UnityEngine_Purchasing_IAppleExtensions_o *__fastcall PurchaseLogic__GetAppleExtension(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  _BOOL8 IsAppleDevice; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x19
  UnityEngine_Purchasing_IExtensionProvider_c *klass; // x8
  void *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 (__fastcall **v19)(struct UnityEngine_Purchasing_IExtensionProvider_o *, _QWORD); // x0

  if ( (byte_42E883C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___,
      (_DWORD)method,
      v2,
      v3);
    this = (PurchaseLogic_o *)sub_B5D5C4(&PurchaseLogic_TypeInfo, v4, v5, v6);
    byte_42E883C = 1;
  }
  if ( !PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider )
    return 0LL;
  IsAppleDevice = PurchaseLogic__IsAppleDevice((const MethodInfo *)this);
  if ( !IsAppleDevice )
    return 0LL;
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    sub_B5D69C(IsAppleDevice, v8);
  klass = storeExtensionProvider->klass;
  v12 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v13 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 3);
  v14 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 36);
  if ( *(_WORD *)&storeExtensionProvider->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v13 )
    {
      ++v15;
      p_offset += 4;
      if ( v15 >= *(unsigned __int16 *)&storeExtensionProvider->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset + (int)v14].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AF54C0(storeExtensionProvider, v13, v14, v9);
  }
  v19 = (__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, _QWORD))sub_B5D674(
                                                                                                 *(_QWORD *)(p_method + 8),
                                                                                                 v12);
  return (UnityEngine_Purchasing_IAppleExtensions_o *)(*v19)(storeExtensionProvider, v19);
}


UnityEngine_Purchasing_ConfigurationBuilder_o *__fastcall PurchaseLogic__GetConfigurationBuilder(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  UnityEngine_Purchasing_Extension_IPurchasingModule_o *v7; // x19
  _QWORD **v8; // x21
  __int64 v9; // x20
  __int16 v10; // w8
  __int64 v11; // x20
  __int64 v12; // x20
  __int64 v13; // x20

  if ( (byte_42E8825 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_IPurchasingModule___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo, v4, v5, v6);
    byte_42E8825 = 1;
  }
  if ( (BYTE3(UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo);
  }
  v7 = (UnityEngine_Purchasing_Extension_IPurchasingModule_o *)UnityEngine_Purchasing_StandardPurchasingModule__Instance(0LL);
  v8 = (_QWORD **)Method_System_Array_Empty_IPurchasingModule___;
  v9 = **((_QWORD **)Method_System_Array_Empty_IPurchasingModule___ + 6);
  v10 = *(_WORD *)(v9 + 306);
  if ( (v10 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_IPurchasingModule___ + 6));
    v10 = *(_WORD *)(v9 + 306);
  }
  if ( (v10 & 0x400) != 0 )
  {
    v11 = *v8[6];
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_AF52C4(*v8[6]);
    if ( !*(_DWORD *)(v11 + 224) )
    {
      v12 = *v8[6];
      if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
        sub_AF52C4(*v8[6]);
      j_il2cpp_runtime_class_init_0(v12);
    }
  }
  v13 = *v8[6];
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AF52C4(*v8[6]);
  return UnityEngine_Purchasing_ConfigurationBuilder__Instance(
           v7,
           **(UnityEngine_Purchasing_Extension_IPurchasingModule_array ***)(v13 + 184),
           0LL);
}


System_Collections_Generic_List_string__o *__fastcall PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
        PurchaseLogic_o *this,
        const MethodInfo *method)
{
  int v2; // w2
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
  System_String_o *String; // x19
  System_Char_array *v20; // x0
  System_Char_array *v21; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x19
  __int64 v25; // x0

  if ( (byte_42E8840 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_string___, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&string_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_5300/*"DeferredPurchaseProductIds"*/, v16, v17, v18);
    byte_42E8840 = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_5300/*"DeferredPurchaseProductIds"*/,
             string_TypeInfo->static_fields->Empty,
             0LL);
  if ( System_String__op_Inequality(String, string_TypeInfo->static_fields->Empty, 0LL) )
  {
    v20 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v20 )
      goto LABEL_10;
    v21 = v20;
    if ( !v20->max_length )
    {
      v25 = sub_B5D6C8(v20);
      sub_B5D668(v25, 0LL);
    }
    v20->m_Items[2] = 59;
    if ( !String )
LABEL_10:
      sub_B5D69C(v20, v21);
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String, v20, 0LL);
    return (System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                          v22,
                                                          (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_string___);
  }
  else
  {
    v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v23,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  }
  return (System_Collections_Generic_List_string__o *)v23;
}


PurchaseByBank_UnityIap_Request_PurchaseResult_o *__fastcall PurchaseLogic__GetFirstPurchaseResult(
        PurchaseLogic_o *this,
        PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray,
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v31; // x20

  if ( (byte_42E8835 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____68846080,
      (_DWORD)purchaseResultArray,
      (_DWORD)transactionId,
      method);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___,
      v6,
      v7,
      v8);
    sub_B5D5C4(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_PurchaseLogic___c__DisplayClass42_0__GetFirstPurchaseResult_b__0__, v15, v16, v17);
    sub_B5D5C4(&PurchaseLogic___c__DisplayClass42_0_TypeInfo, v18, v19, v20);
    byte_42E8835 = 1;
  }
  v21 = sub_B5D694(PurchaseLogic___c__DisplayClass42_0_TypeInfo);
  PurchaseLogic___c__DisplayClass42_0___ctor((PurchaseLogic___c__DisplayClass42_0_o *)v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  *(_QWORD *)(v21 + 16) = transactionId;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v21 + 16),
    (System_Int32_array **)transactionId,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( !purchaseResultArray )
    return 0LL;
  if ( !PurchaseLogic__IsAppleDevice(v30) )
    return System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
             (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
             (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult___);
  v31 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v31,
    (Il2CppObject *)v21,
    Method_PurchaseLogic___c__DisplayClass42_0__GetFirstPurchaseResult_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__);
  return (PurchaseByBank_UnityIap_Request_PurchaseResult_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                               (System_Func_TSource__bool__o *)v31,
                                                               (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult____68846080);
}


PurchaseLogic_o *__fastcall PurchaseLogic__GetInstance(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  PurchaseLogic_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_42E8823 & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseLogicAndroid_TypeInfo, v1, v2, v3);
    byte_42E8823 = 1;
  }
  v4 = (PurchaseLogic_o *)sub_B5D694(PurchaseLogicAndroid_TypeInfo);
  PurchaseLogic___ctor(v4, v5);
  return v4;
}


int32_t __fastcall PurchaseLogic__GetPrice(PurchaseLogic_o *this, int32_t bankShopId, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  WarEntity_o *Entity; // x0
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v23; // x0
  int32_t v24; // [xsp+Ch] [xbp-14h] BYREF

  v24 = bankShopId;
  if ( (byte_42E8838 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__Invoke__, bankShopId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BankShopMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_6107/*"Entity is not found. bankShopId="*/, v15, v16, v17);
    byte_42E8838 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             bankShopId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
  if ( Entity )
    return Entity->fields.priority;
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v23 = System_Int32__ToString((int32_t)&v24, 0LL);
  Instance = (DataManager_o *)System_String__Concat_44577788((System_String_o *)StringLiteral_6107/*"Entity is not found. bankShopId="*/, v23, 0LL);
  if ( !logErrorOutputAction )
LABEL_9:
    sub_B5D69C(Instance, v19);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logErrorOutputAction,
    (System_Uri_o *)Instance,
    (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
  return 0;
}


void __fastcall PurchaseLogic__InitializePurchasingFramework(PurchaseLogic_o *this, const MethodInfo *method)
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
  struct PurchaseLogic_StaticFields *static_fields; // x8
  UnityEngine_Purchasing_ConfigurationBuilder_o *v18; // x20
  __int64 v19; // x1
  PurchaseBehaviour_c *v20; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ConsumableProductIdCollection; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8824 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, v14, v15, v16);
    byte_42E8824 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( (byte_42E8826 & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseLogic_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8826 = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    ((void (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))this->klass->vtable._27_DisableCrashReporterOnInitialize.method)(
      this,
      this->klass->vtable._28_EnableCrashReporterOnInitializeSucceeded.methodPtr);
    v18 = (UnityEngine_Purchasing_ConfigurationBuilder_o *)((__int64 (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))this->klass->vtable._10_GetConfigurationBuilder.method)(
                                                             this,
                                                             this->klass->vtable._11_SetObfuscatedAccountId.methodPtr);
    ((void (__fastcall *)(PurchaseLogic_o *, UnityEngine_Purchasing_ConfigurationBuilder_o *, Il2CppMethodPointer))this->klass->vtable._11_SetObfuscatedAccountId.method)(
      this,
      v18,
      this->klass->vtable._12_SetCachedObfuscatedAccountId.methodPtr);
    ((void (__fastcall *)(PurchaseLogic_o *, __int64, Il2CppMethodPointer))this->klass->vtable._15_SetAlreadyInitializedWithObfuscatedAccountId.method)(
      this,
      1LL,
      this->klass->vtable._16_IsInitializedWithMismatchedObfuscatedAccountId.methodPtr);
    v20 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v20 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v20->static_fields->ConsumableProductIdCollection;
    if ( !ConsumableProductIdCollection )
      sub_B5D69C(0LL, v19);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v24,
      ConsumableProductIdCollection,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v24,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
      if ( !v22 )
        break;
      if ( !v18 )
        sub_B5D69C(v22, v23);
      UnityEngine_Purchasing_ConfigurationBuilder__AddProduct(v18, (System_String_o *)v24.fields.current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v24,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    UnityEngine_Purchasing_UnityPurchasing__Initialize((UnityEngine_Purchasing_IStoreListener_o *)this, v18, 0LL);
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
    sub_B5D69C(this, 0LL);
  PurchaseLogic__InitiatePurchase_25113528(
    this,
    bankShop->fields.googleShopId,
    bankShop->fields.googlePrice,
    finishedAction,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogic__InitiatePurchase_25113528(
        PurchaseLogic_o *this,
        System_String_o *productId,
        int32_t price,
        PurchaseLogic_ProductFinishedAction_o *finishedAction,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  UnityEngine_Purchasing_Product_o *v36; // x1
  int v37; // w2
  __int64 v38; // x3
  struct PurchaseLogic_StaticFields *static_fields; // x8
  __int64 v40; // x3
  System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x0
  const MethodInfo *v42; // x5
  int32_t v43; // w1
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x22
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 *v49; // x8
  __int64 v50; // x3
  struct UnityEngine_Purchasing_IStoreController_o *v51; // x22
  UnityEngine_Purchasing_IStoreController_c *v52; // x8
  unsigned __int64 v53; // x10
  int32_t *v54; // x11
  __int64 v55; // x0
  UnityEngine_Purchasing_Product_o *v56; // x0
  const MethodInfo *v57; // x3

  if ( (byte_42E8827 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__Invoke__, (_DWORD)productId, price, finishedAction);
    sub_B5D5C4(&Method_System_Action_string__float__Invoke__, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Purchasing_IStoreController_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&PurchaseLogic_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_7708/*"InitiatePurchase: FAIL. PurchasingFramework not initialized."*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_7709/*"InitiatePurchase: FAIL. StoreController is null."*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_7707/*"InitiatePurchase: FAIL. Not purchasing product, either is not found or is not available for purchase"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_7710/*"InitiatePurchase: FAIL. StoreController.products is null."*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_7711/*"InitiatePurchase: Initialized With Mismatched ObfuscatedAccountId."*/, v33, v34, v35);
    byte_42E8827 = 1;
  }
  this->fields._buyProductFinishedAction = finishedAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._buyProductFinishedAction,
    (System_Int32_array **)finishedAction,
    *(System_String_array ***)&price,
    (System_String_array **)finishedAction,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( (byte_42E8826 & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseLogic_TypeInfo, (_DWORD)v36, v37, v38);
    byte_42E8826 = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    if ( logErrorOutputActionSampledByRatio )
    {
      System_Action_string__float___Invoke(
        logErrorOutputActionSampledByRatio,
        (System_String_o *)StringLiteral_7708/*"InitiatePurchase: FAIL. PurchasingFramework not initialized."*/,
        0.01,
        (const MethodInfo_25999D8 *)Method_System_Action_string__float__Invoke__);
      v43 = 10;
      goto LABEL_33;
    }
LABEL_39:
    sub_B5D69C(logErrorOutputActionSampledByRatio, v36);
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
        (System_Uri_o *)StringLiteral_7711/*"InitiatePurchase: Initialized With Mismatched ObfuscatedAccountId."*/,
        (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
      v43 = 13;
LABEL_33:
      PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, v43, 0, 0, 0, v42);
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
    v49 = &StringLiteral_7709/*"InitiatePurchase: FAIL. StoreController is null."*/;
LABEL_30:
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)logErrorOutputActionSampledByRatio,
      (System_Uri_o *)*v49,
      (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
LABEL_31:
    logErrorOutputActionSampledByRatio = (System_Action_string__float__o *)this->fields._logErrorOutputAction;
    if ( logErrorOutputActionSampledByRatio )
    {
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)logErrorOutputActionSampledByRatio,
        (System_Uri_o *)StringLiteral_7707/*"InitiatePurchase: FAIL. Not purchasing product, either is not found or is not available for purchase"*/,
        (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
      v43 = 11;
      goto LABEL_33;
    }
    goto LABEL_39;
  }
  klass = storeController->klass;
  if ( *(_WORD *)&storeController->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IStoreController_c **)p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      ++v46;
      p_offset += 4;
      if ( v46 >= *(unsigned __int16 *)&storeController->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_AF54C0(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL, v40);
  }
  logErrorOutputActionSampledByRatio = (System_Action_string__float__o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))p_method)(
                                                                           storeController,
                                                                           *(_QWORD *)(p_method + 8));
  if ( !logErrorOutputActionSampledByRatio )
  {
    logErrorOutputActionSampledByRatio = (System_Action_string__float__o *)this->fields._logErrorOutputAction;
    if ( !logErrorOutputActionSampledByRatio )
      goto LABEL_39;
    v49 = &StringLiteral_7710/*"InitiatePurchase: FAIL. StoreController.products is null."*/;
    goto LABEL_30;
  }
  v51 = PurchaseLogic_TypeInfo->static_fields->_storeController;
  if ( !v51 )
    goto LABEL_39;
  v52 = v51->klass;
  if ( *(_WORD *)&v51->klass->_2.bitflags1 )
  {
    v53 = 0LL;
    v54 = &v52->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IStoreController_c **)v54 - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
    {
      ++v53;
      v54 += 4;
      if ( v53 >= *(unsigned __int16 *)&v51->klass->_2.bitflags1 )
        goto LABEL_27;
    }
    v55 = (__int64)&v52->vtable[*v54].method;
  }
  else
  {
LABEL_27:
    v55 = sub_AF54C0(v51, UnityEngine_Purchasing_IStoreController_TypeInfo, 0LL, v50);
  }
  logErrorOutputActionSampledByRatio = (System_Action_string__float__o *)(*(__int64 (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, _QWORD))v55)(
                                                                           v51,
                                                                           *(_QWORD *)(v55 + 8));
  if ( !logErrorOutputActionSampledByRatio )
    goto LABEL_39;
  v56 = UnityEngine_Purchasing_ProductCollection__WithID(
          (UnityEngine_Purchasing_ProductCollection_o *)logErrorOutputActionSampledByRatio,
          productId,
          0LL);
  if ( !v56 )
    goto LABEL_31;
  v36 = v56;
  if ( !v56->fields._availableToPurchase_k__BackingField )
    goto LABEL_31;
  PurchaseLogic__PurchaseIfAvailable(this, v56, price, v57);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ManagerConfig_c *v8; // x0
  int32_t Limit; // w0

  if ( (byte_42E882B & 1) == 0 )
  {
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, value, (_DWORD)method, v3);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v5, v6, v7);
    byte_42E882B = 1;
  }
  v8 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( v8->static_fields->UseMock )
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
  __int64 v3; // x3
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0

  if ( (byte_42E882F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Product__Contains__, (_DWORD)prodcut, (_DWORD)method, v3);
    byte_42E882F = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    sub_B5D69C(0LL, prodcut);
  return System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
           (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
           (BattleBuffData_BuffData_o *)prodcut,
           (const MethodInfo_25064D8 *)Method_System_Collections_Generic_HashSet_Product__Contains__);
}


bool __fastcall PurchaseLogic__IsPurchasingFrameworkInitialized(PurchaseLogic_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct PurchaseLogic_StaticFields *static_fields; // x8

  if ( (byte_42E8826 & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseLogic_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8826 = 1;
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
  PurchaseLogic___c_c *v17; // x0
  struct PurchaseLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__40_0; // x20
  Il2CppObject *v20; // x21
  struct PurchaseLogic___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42E8833 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___,
      (_DWORD)purchaseResultArray,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_PurchaseLogic___c__IsServerCommitedPurchase_b__40_0__, v11, v12, v13);
    sub_B5D5C4(&PurchaseLogic___c_TypeInfo, v14, v15, v16);
    byte_42E8833 = 1;
  }
  if ( !purchaseResultArray )
    return 0;
  v17 = PurchaseLogic___c_TypeInfo;
  if ( (BYTE3(PurchaseLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogic___c_TypeInfo);
    v17 = PurchaseLogic___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = PurchaseLogic___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__40_0,
      v20,
      Method_PurchaseLogic___c__IsServerCommitedPurchase_b__40_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool___ctor__);
    v21 = PurchaseLogic___c_TypeInfo->static_fields;
    v21->__9__40_0 = (struct System_Func_PurchaseByBank_UnityIap_Request_PurchaseResult__bool__o *)_9__40_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v21->__9__40_0,
      (System_Int32_array **)_9__40_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  return System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
           (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
           (System_Func_TSource__bool__o *)_9__40_0,
           (const MethodInfo_1C97E70 *)Method_System_Linq_Enumerable_All_PurchaseByBank_UnityIap_Request_PurchaseResult___);
}


void __fastcall PurchaseLogic__OnDeferred(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PurchaseLogic_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  System_Action_Uri__o *logOutputAction; // x19

  v5 = this;
  if ( (byte_42E883B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__Invoke__, (_DWORD)product, (_DWORD)method, v3);
    this = (PurchaseLogic_o *)sub_B5D5C4(&StringLiteral_10089/*"OnDeferred product="*/, v6, v7, v8);
    byte_42E883B = 1;
  }
  if ( !product
    || (metadata_k__BackingField = product->fields._metadata_k__BackingField) == 0LL
    || (logOutputAction = (System_Action_Uri__o *)v5->fields._logOutputAction,
        this = (PurchaseLogic_o *)System_String__Concat_44577788(
                                    (System_String_o *)StringLiteral_10089/*"OnDeferred product="*/,
                                    metadata_k__BackingField->fields._localizedTitle_k__BackingField,
                                    0LL),
        !logOutputAction) )
  {
    sub_B5D69C(this, product);
  }
  System_Action_Uri___Invoke(
    logOutputAction,
    (System_Uri_o *)this,
    (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
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
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  __int64 v60; // x22
  System_String_o *v61; // x0
  __int64 v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_o **v69; // x24
  struct System_Action_string__o *logOutputAction; // x25
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_String_array *v77; // x26
  int32_t *v78; // x0
  System_Int32_array **v79; // x1
  System_String_o *v80; // x28
  System_Int32_array **v81; // x27
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x1
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Int32_array **v107; // x1
  struct System_Action_string__o *v108; // x20
  System_Collections_Generic_IEnumerable_TSource__o *pendingProducts; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v110; // x21
  WarBoardData_SquareRangeSearch_o *v111; // x0
  UnityEngine_Object_o *Instance; // x21
  Il2CppObject *v113; // x21
  PurchaseLogic_ProductFinishedAction_o *v114; // x22
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  const MethodInfo *v121; // x5
  __int64 v122; // x0
  __int64 v123; // x0
  int32_t chargeStoneNum; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v125; // [xsp+8h] [xbp-58h] BYREF
  int32_t v126; // [xsp+Ch] [xbp-54h] BYREF

  v126 = purchaseResult;
  if ( (byte_42E8837 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__Invoke__, purchaseResult, (_DWORD)resultData, productId);
    sub_B5D5C4(&Method_CommonUI_OpenStonePurchaseReciveMenu__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_Product___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_Product__bool___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_Product__bool__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&PurchaseLogic_ProductFinishedAction_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&PurchaseBehaviour_Result_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&string___TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_PurchaseLogic___c__DisplayClass44_0__OnEndPaymentStore_b__0__, v39, v40, v41);
    sub_B5D5C4(&PurchaseLogic___c__DisplayClass44_0_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_16064/*"] "*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_15826/*"[ "*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_10970/*"PurchaseLogic:OnEndPaymentStore result "*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_4299/*"Confirming purchase of "*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_1/*""*/, v57, v58, v59);
    byte_42E8837 = 1;
  }
  chargeStoneNum = 0;
  v125 = 0;
  v60 = sub_B5D694(PurchaseLogic___c__DisplayClass44_0_TypeInfo);
  PurchaseLogic___c__DisplayClass44_0___ctor((PurchaseLogic___c__DisplayClass44_0_o *)v60, 0LL);
  if ( !v60 )
    goto LABEL_43;
  *(_QWORD *)(v60 + 16) = productId;
  v69 = (System_String_o **)(v60 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v60 + 16), (System_Int32_array **)productId, v63, v64, v65, v66, v67, v68);
  logOutputAction = this->fields._logOutputAction;
  v61 = (System_String_o *)sub_B5D5DC(string___TypeInfo, 5LL);
  if ( !v61 )
    goto LABEL_43;
  v77 = (System_String_array *)v61;
  v78 = (int32_t *)StringLiteral_10970/*"PurchaseLogic:OnEndPaymentStore result "*/;
  if ( StringLiteral_10970/*"PurchaseLogic:OnEndPaymentStore result "*/ )
  {
    v78 = (int32_t *)sub_B5D684(StringLiteral_10970/*"PurchaseLogic:OnEndPaymentStore result "*/, v77->obj.klass->_1.element_class);
    if ( !v78 )
      goto LABEL_44;
    v79 = (System_Int32_array **)StringLiteral_10970/*"PurchaseLogic:OnEndPaymentStore result "*/;
  }
  else
  {
    v79 = 0LL;
  }
  if ( !v77->max_length )
    goto LABEL_42;
  v77->m_Items[0] = (System_String_o *)v79;
  sub_B5D560((BattleServantConfConponent_o *)v77->m_Items, v79, v71, v72, v73, v74, v75, v76);
  v61 = (System_String_o *)j_il2cpp_value_box_0(PurchaseBehaviour_Result_TypeInfo, &v126);
  if ( !v61 )
    goto LABEL_43;
  v80 = v61;
  v81 = (System_Int32_array **)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))v61->klass->vtable._3_ToString.method)(
                                 v61,
                                 v61->klass->vtable._4_CompareTo.methodPtr);
  v78 = (int32_t *)j_il2cpp_object_unbox_0(v80);
  v126 = *v78;
  if ( v81 )
  {
    v78 = (int32_t *)sub_B5D684(v81, v77->obj.klass->_1.element_class);
    if ( !v78 )
      goto LABEL_44;
  }
  if ( v77->max_length <= 1 )
    goto LABEL_42;
  v77->m_Items[1] = (System_String_o *)v81;
  sub_B5D560((BattleServantConfConponent_o *)&v77->m_Items[1], v81, v82, v83, v84, v85, v86, v87);
  v78 = (int32_t *)StringLiteral_15826/*"[ "*/;
  if ( StringLiteral_15826/*"[ "*/ )
  {
    v78 = (int32_t *)sub_B5D684(StringLiteral_15826/*"[ "*/, v77->obj.klass->_1.element_class);
    if ( !v78 )
      goto LABEL_44;
    v94 = (System_Int32_array **)StringLiteral_15826/*"[ "*/;
  }
  else
  {
    v94 = 0LL;
  }
  if ( v77->max_length <= 2 )
    goto LABEL_42;
  v77->m_Items[2] = (System_String_o *)v94;
  sub_B5D560((BattleServantConfConponent_o *)&v77->m_Items[2], v94, v88, v89, v90, v91, v92, v93);
  if ( resultData )
  {
    v78 = (int32_t *)sub_B5D684(resultData, v77->obj.klass->_1.element_class);
    if ( !v78 )
    {
LABEL_44:
      v123 = sub_B5D6BC(v78);
      sub_B5D668(v123, 0LL);
    }
  }
  if ( v77->max_length <= 3 )
    goto LABEL_42;
  v77->m_Items[3] = resultData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v77->m_Items[3],
    (System_Int32_array **)resultData,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  v78 = (int32_t *)StringLiteral_16064/*"] "*/;
  if ( StringLiteral_16064/*"] "*/ )
  {
    v78 = (int32_t *)sub_B5D684(StringLiteral_16064/*"] "*/, v77->obj.klass->_1.element_class);
    if ( v78 )
    {
      v107 = (System_Int32_array **)StringLiteral_16064/*"] "*/;
      goto LABEL_26;
    }
    goto LABEL_44;
  }
  v107 = 0LL;
LABEL_26:
  if ( v77->max_length <= 4 )
  {
LABEL_42:
    v122 = sub_B5D6C8(v78);
    sub_B5D668(v122, 0LL);
  }
  v77->m_Items[4] = (System_String_o *)v107;
  sub_B5D560((BattleServantConfConponent_o *)&v77->m_Items[4], v107, v101, v102, v103, v104, v105, v106);
  v61 = System_String__Concat_44657912(v77, 0LL);
  if ( !logOutputAction )
    goto LABEL_43;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)v61,
    (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
  if ( (v126 & 0xFFFFFFFE) != 2 )
    goto LABEL_34;
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._20_UpdateMonthlyPurchasePrice.method)(
    this,
    (unsigned int)bankShopId,
    this->klass->vtable._21_GetPrice.methodPtr);
  if ( System_String__op_Inequality(*v69, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    ((void (__fastcall *)(PurchaseLogic_o *, System_String_o *, System_String_o *, Il2CppMethodPointer))this->klass->vtable._24_SendPurchaseAction.method)(
      this,
      *v69,
      transactionId,
      this->klass->vtable._25_OnDeferred.methodPtr);
  v108 = this->fields._logOutputAction;
  v61 = System_String__Concat_44577788((System_String_o *)StringLiteral_4299/*"Confirming purchase of "*/, *v69, 0LL);
  if ( !v108 )
LABEL_43:
    sub_B5D69C(v61, v62);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)v108,
    (System_Uri_o *)v61,
    (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
  pendingProducts = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._pendingProducts;
  v110 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_Product__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v110,
    (Il2CppObject *)v60,
    Method_PurchaseLogic___c__DisplayClass44_0__OnEndPaymentStore_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_Product__bool___ctor__);
  v111 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
           pendingProducts,
           (System_Func_TSource__bool__o *)v110,
           (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_Product___);
  if ( v111 )
    ((void (__fastcall *)(PurchaseLogic_o *, WarBoardData_SquareRangeSearch_o *, Il2CppMethodPointer))this->klass->vtable._18_ConfirmPurchase.method)(
      this,
      v111,
      this->klass->vtable._19_ExtractReceiptContents.methodPtr);
LABEL_34:
  if ( !this->fields._buyProductFinishedAction && v126 != 3 )
  {
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    {
      v113 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v114 = (PurchaseLogic_ProductFinishedAction_o *)sub_B5D694(PurchaseLogic_ProductFinishedAction_TypeInfo);
      PurchaseLogic_ProductFinishedAction___ctor(v114, v113, Method_CommonUI_OpenStonePurchaseReciveMenu__, 0LL);
      this->fields._buyProductFinishedAction = v114;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields._buyProductFinishedAction,
        (System_Int32_array **)v114,
        v115,
        v116,
        v117,
        v118,
        v119,
        v120);
    }
  }
  chargeStoneNum = 0;
  v125 = 0;
  ((void (__fastcall *)(PurchaseLogic_o *, struct PurchaseByBank_UnityIap_Request_PurchaseResult_array *, int32_t *, int32_t *, Il2CppMethodPointer))this->klass->vtable._22_GetAddedStoneNum.method)(
    this,
    this->fields._purchaseResultArray,
    &v125,
    &chargeStoneNum,
    this->klass->vtable._23_ShowPurchaseFailedNotification.methodPtr);
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, v126, 0, v125, chargeStoneNum, v121);
}


void __fastcall PurchaseLogic__OnEndSendReceiptData(
        PurchaseLogic_o *this,
        System_String_o *result,
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
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  struct System_Action_string__o *logOutputAction; // x20
  void *Instance; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_array *purchaseResultArray; // x1
  PurchaseLogic_o *v66; // x0
  const MethodInfo *v67; // x2
  System_String_o *return_type; // x20
  const MethodInfo *v69; // x6
  __int64 *v70; // x8
  System_String_o *currentTransactionId; // x5
  int32_t v72; // w1
  _BOOL8 IsServerCommitedPurchase; // x0
  const MethodInfo *v74; // x3
  struct System_Action_string__o *v75; // x21
  int v76; // w21
  System_String_o *v77; // x2
  __int64 *v78; // x8
  System_String_o *v79; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *FirstPurchaseResult; // x0
  int32_t purchasedBankShopId; // w22
  const MethodInfo *Entity; // x0
  const MethodInfo *v83; // x2
  struct PurchaseByBank_UnityIap_Request_PurchaseResult_array *v84; // x27
  int max_length; // w8
  PurchaseLogic_o *v86; // x0
  System_String_o *v87; // x3
  int32_t v88; // w4
  __int64 v89; // x28
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v90; // x8
  int32_t v91; // w23
  const MethodInfo *v92; // x2
  __int64 v93; // x0

  if ( (byte_42E8834 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__Invoke__, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BankShopMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_11452/*"ReceiptError"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_21873/*"purchaseResultArray is null."*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_7073/*"Google Play canceled on restore purchase"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10969/*"PurchaseLogic:EndSendReceiptData ["*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_22011/*"receipt_error"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_17414/*"canceled_purchase_error"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_10972/*"PurchaseResult NotFound Error"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_10973/*"PurchaseResult NotFound."*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_10749/*"PaymentOk"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_7074/*"Google Play pending on restore purchase"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_10968/*"PurchaseBehaviour.Result.SUCCESS_WITHOUT_NOTICE _currentTransactionId="*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_6217/*"Error["*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_21736/*"pending_purchase_error"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_1/*""*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_5300/*"DeferredPurchaseProductIds"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v60, v61, v62);
    byte_42E8834 = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  Instance = System_String__Concat_44580072(
               (System_String_o *)StringLiteral_10969/*"PurchaseLogic:EndSendReceiptData ["*/,
               result,
               (System_String_o *)StringLiteral_16061/*"]"*/,
               0LL);
  if ( !logOutputAction )
    goto LABEL_49;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)Instance,
    (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
  return_type = (System_String_o *)StringLiteral_1/*""*/;
  if ( !result )
    goto LABEL_17;
  if ( !result->fields.m_stringLength )
  {
    purchaseResultArray = this->fields._purchaseResultArray;
    if ( purchaseResultArray )
    {
      IsServerCommitedPurchase = PurchaseLogic__IsServerCommitedPurchase(v66, purchaseResultArray, v67);
      if ( IsServerCommitedPurchase )
      {
        v75 = this->fields._logOutputAction;
        Instance = System_String__Concat_44577788(
                     (System_String_o *)StringLiteral_10968/*"PurchaseBehaviour.Result.SUCCESS_WITHOUT_NOTICE _currentTransactionId="*/,
                     this->fields._currentTransactionId,
                     0LL);
        if ( !v75 )
          goto LABEL_49;
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)v75,
          (System_Uri_o *)Instance,
          (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
        v76 = 3;
LABEL_21:
        FirstPurchaseResult = PurchaseLogic__GetFirstPurchaseResult(
                                (PurchaseLogic_o *)IsServerCommitedPurchase,
                                this->fields._purchaseResultArray,
                                this->fields._currentTransactionId,
                                v74);
        if ( FirstPurchaseResult )
        {
          purchasedBankShopId = FirstPurchaseResult->fields.purchasedBankShopId;
          if ( purchasedBankShopId >= 1 )
          {
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_49;
            Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BankShopMaster___);
            if ( !Instance )
              goto LABEL_49;
            Entity = (const MethodInfo *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                           purchasedBankShopId,
                                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
            if ( Entity )
            {
              return_type = (System_String_o *)Entity->return_type;
              if ( PurchaseLogic__IsAppleDevice(Entity) )
              {
                Instance = (void *)UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5300/*"DeferredPurchaseProductIds"*/, 0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  v84 = this->fields._purchaseResultArray;
                  if ( v84 )
                  {
                    max_length = v84->max_length;
                    if ( max_length == 1 )
                    {
                      PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(this, return_type, v83);
LABEL_37:
                      StoneCountRefreshComponent__RefreshAllStoneCount(0LL);
                      goto LABEL_38;
                    }
                    if ( max_length < 2 )
                      goto LABEL_37;
                    v89 = 0LL;
                    while ( 1 )
                    {
                      if ( (unsigned int)v89 >= max_length )
                      {
                        v93 = sub_B5D6C8(Instance);
                        sub_B5D668(v93, 0LL);
                      }
                      v90 = v84->m_Items[v89];
                      if ( !v90 )
                        break;
                      v91 = v90->fields.purchasedBankShopId;
                      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !Instance )
                        break;
                      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BankShopMaster___);
                      if ( !Instance )
                        break;
                      Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                   v91,
                                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__GetEntity__);
                      if ( Instance )
                        PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(
                          this,
                          *((System_String_o **)Instance + 4),
                          v92);
                      max_length = v84->max_length;
                      if ( (int)++v89 >= max_length )
                        goto LABEL_37;
                    }
LABEL_49:
                    sub_B5D69C(Instance, purchaseResultArray);
                  }
                }
              }
              if ( UnityEngine_Application__get_platform(0LL) == 11 )
                goto LABEL_37;
            }
LABEL_38:
            currentTransactionId = this->fields._currentTransactionId;
            v86 = this;
            v72 = v76;
            v87 = return_type;
            v77 = (System_String_o *)StringLiteral_10749/*"PaymentOk"*/;
            v88 = purchasedBankShopId;
            goto LABEL_35;
          }
        }
        Instance = this->fields._logErrorOutputAction;
        if ( Instance )
        {
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)Instance,
            (System_Uri_o *)StringLiteral_10973/*"PurchaseResult NotFound."*/,
            (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
          v78 = &StringLiteral_10972/*"PurchaseResult NotFound Error"*/;
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
        (System_Uri_o *)StringLiteral_21873/*"purchaseResultArray is null."*/,
        (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
    }
    v76 = 2;
    goto LABEL_21;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21736/*"pending_purchase_error"*/, 0LL) )
  {
    if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_17414/*"canceled_purchase_error"*/, 0LL) )
    {
      v70 = &StringLiteral_7073/*"Google Play canceled on restore purchase"*/;
      currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
      v72 = 16;
      goto LABEL_14;
    }
    if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22011/*"receipt_error"*/, 0LL) )
    {
      v78 = &StringLiteral_11452/*"ReceiptError"*/;
LABEL_33:
      v77 = (System_String_o *)*v78;
      currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
      v72 = 6;
      goto LABEL_34;
    }
LABEL_17:
    v79 = System_String__Concat_44580072(
            (System_String_o *)StringLiteral_6217/*"Error["*/,
            result,
            (System_String_o *)StringLiteral_16061/*"]"*/,
            0LL);
    currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
    v72 = 6;
    v77 = v79;
    goto LABEL_34;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, __int64, Il2CppMethodPointer))this->klass->vtable._30_SetExistsDeferredPurchase.method)(
    this,
    1LL,
    this->klass->vtable._31_IsDeferredPurchaseExists.methodPtr);
  v70 = &StringLiteral_7074/*"Google Play pending on restore purchase"*/;
  currentTransactionId = (System_String_o *)StringLiteral_1/*""*/;
  v72 = 15;
LABEL_14:
  v77 = (System_String_o *)*v70;
LABEL_34:
  v86 = this;
  v87 = return_type;
  v88 = 0;
LABEL_35:
  PurchaseLogic__OnEndPaymentStore(v86, v72, v77, v87, v88, currentTransactionId, v69);
}


void __fastcall PurchaseLogic__OnInitializeFailed(PurchaseLogic_o *this, int32_t error, const MethodInfo *method)
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
  System_Action_string__float__o *logErrorOutputActionSampledByRatio; // x19
  System_String_o *v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x20
  System_String_o *v19; // x21
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v21; // x20
  System_String_o *v22; // x21
  int32_t v23; // [xsp+Ch] [xbp-14h] BYREF

  v23 = error;
  if ( (byte_42E883D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__Invoke__, error, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Action_string__float__Invoke__, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Purchasing_InitializationFailureReason_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_10117/*"OnInitializeFailed InitializationFailureReason:"*/, v12, v13, v14);
    byte_42E883D = 1;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.method)(
    this,
    this->klass->vtable._30_SetExistsDeferredPurchase.methodPtr,
    method);
  if ( (unsigned int)error <= 1 )
  {
    logErrorOutputActionSampledByRatio = this->fields._logErrorOutputActionSampledByRatio;
    v16 = (System_String_o *)j_il2cpp_value_box_0(UnityEngine_Purchasing_InitializationFailureReason_TypeInfo, &v23);
    if ( v16 )
    {
      v18 = v16;
      v19 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))v16->klass->vtable._3_ToString.method)(
                                 v16,
                                 v16->klass->vtable._4_CompareTo.methodPtr);
      v23 = *(_DWORD *)j_il2cpp_object_unbox_0(v18);
      v16 = System_String__Concat_44577788((System_String_o *)StringLiteral_10117/*"OnInitializeFailed InitializationFailureReason:"*/, v19, 0LL);
      if ( logErrorOutputActionSampledByRatio )
      {
        System_Action_string__float___Invoke(
          logErrorOutputActionSampledByRatio,
          v16,
          0.01,
          (const MethodInfo_25999D8 *)Method_System_Action_string__float__Invoke__);
        return;
      }
    }
LABEL_10:
    sub_B5D69C(v16, v17);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  v16 = (System_String_o *)j_il2cpp_value_box_0(UnityEngine_Purchasing_InitializationFailureReason_TypeInfo, &v23);
  if ( !v16 )
    goto LABEL_10;
  v21 = v16;
  v22 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))v16->klass->vtable._3_ToString.method)(
                             v16,
                             v16->klass->vtable._4_CompareTo.methodPtr);
  v23 = *(_DWORD *)j_il2cpp_object_unbox_0(v21);
  v16 = System_String__Concat_44577788((System_String_o *)StringLiteral_10117/*"OnInitializeFailed InitializationFailureReason:"*/, v22, 0LL);
  if ( !logErrorOutputAction )
    goto LABEL_10;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logErrorOutputAction,
    (System_Uri_o *)v16,
    (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
}


void __fastcall PurchaseLogic__OnInitialized(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_IStoreController_o *controller,
        UnityEngine_Purchasing_IExtensionProvider_o *extensions,
        const MethodInfo *method)
{
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v22; // x1
  struct System_Action_string__o *logOutputAction; // x0
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct PurchaseLogic_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  PurchaseLogic_o *v38; // x0
  const MethodInfo *v39; // x1
  UnityEngine_Purchasing_IAppleExtensions_o *AppleExtension; // x0
  UnityEngine_Purchasing_IAppleExtensions_o *v41; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v42; // x21
  __int64 v43; // x3
  UnityEngine_Purchasing_IAppleExtensions_c *klass; // x8
  unsigned __int64 v45; // x10
  UnityEngine_Purchasing_IAppleExtensions_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42E883A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__Invoke__, (_DWORD)controller, (_DWORD)extensions, method);
    sub_B5D5C4(&Method_System_Action_Product___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Action_Product__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&PurchaseLogic_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_10118/*"OnInitialized: PASS"*/, v19, v20, v21);
    byte_42E883A = 1;
  }
  ((void (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer, UnityEngine_Purchasing_IExtensionProvider_o *, const MethodInfo *))this->klass->vtable._28_EnableCrashReporterOnInitializeSucceeded.method)(
    this,
    this->klass->vtable._29_EnableCrashReporterOnInitializeFailed.methodPtr,
    extensions,
    method);
  logOutputAction = this->fields._logOutputAction;
  if ( !logOutputAction )
    sub_B5D69C(0LL, v22);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)StringLiteral_10118/*"OnInitialized: PASS"*/,
    (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
  static_fields = (BattleServantConfConponent_o *)PurchaseLogic_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)controller;
  sub_B5D560(static_fields, (System_Int32_array **)controller, v25, v26, v27, v28, v29, v30);
  v31 = PurchaseLogic_TypeInfo->static_fields;
  v31->_storeExtensionProvider = extensions;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v31->_storeExtensionProvider,
    (System_Int32_array **)extensions,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  AppleExtension = PurchaseLogic__GetAppleExtension(v38, v39);
  if ( AppleExtension )
  {
    v41 = AppleExtension;
    v42 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Product__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v42,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._26_OnInitializeFailed.methodPtr,
      (const MethodInfo_258B320 *)Method_System_Action_Product___ctor__);
    klass = v41->klass;
    if ( *(_WORD *)&v41->klass->_2.bitflags1 )
    {
      v45 = 0LL;
      p_offset = (UnityEngine_Purchasing_IAppleExtensions_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
      {
        ++v45;
        p_offset += 2;
        if ( v45 >= *(unsigned __int16 *)&v41->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(v41, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 2LL, v43);
    }
    (*(void (__fastcall **)(UnityEngine_Purchasing_IAppleExtensions_o *, System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *, _QWORD))p_method)(
      v41,
      v42,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall PurchaseLogic__OnPurchaseFailed(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        int32_t failureReason,
        const MethodInfo *method)
{
  unsigned int v4; // w20
  UnityEngine_Purchasing_Product_o *v5; // x21
  PurchaseLogic_o *v6; // x19
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  struct System_String_StaticFields *p_storeSpecificId_k__BackingField; // x8
  System_String_o *Empty; // x22
  const MethodInfo *v40; // x2
  System_Action_Uri__o *logErrorOutputAction; // x20
  Il2CppObject *v42; // x0
  System_Action_Uri__o *v43; // x23
  Il2CppObject *v44; // x0
  UnityEngine_Object_o *Instance; // x23
  Il2CppObject *v46; // x23
  PurchaseLogic_ProductFinishedAction_o *v47; // x24
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  __int64 v55; // x22
  const MethodInfo *v56; // x5
  int32_t v57; // w1
  unsigned int v58; // [xsp+8h] [xbp-38h] BYREF
  int v59; // [xsp+Ch] [xbp-34h] BYREF
  System_Decimal_o v60; // 0:x0.16

  v4 = failureReason;
  v5 = product;
  v6 = this;
  if ( (byte_42E883F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__Invoke__, (_DWORD)product, failureReason, method);
    sub_B5D5C4(&Method_CommonUI_OpenStonePurchaseReciveMenu__, v7, v8, v9);
    sub_B5D5C4(&System_Decimal_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&PurchaseLogic_ProductFinishedAction_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25, v26, v27);
    sub_B5D5C4(&string_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_10151/*"OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}"*/, v31, v32, v33);
    this = (PurchaseLogic_o *)sub_B5D5C4(&StringLiteral_5283/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/, v34, v35, v36);
    byte_42E883F = 1;
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
                              (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(v6, Empty, v40);
    logErrorOutputAction = (System_Action_Uri__o *)v6->fields._logErrorOutputAction;
    v59 = 4;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, &v59);
    this = (PurchaseLogic_o *)System_String__Format_44573324(
                                (System_String_o *)StringLiteral_5283/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/,
                                (Il2CppObject *)Empty,
                                v42,
                                0LL);
    if ( !logErrorOutputAction )
      goto LABEL_32;
    System_Action_Uri___Invoke(
      logErrorOutputAction,
      (System_Uri_o *)this,
      (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
    v4 = 4;
  }
  else
  {
LABEL_13:
    if ( v4 != 4 )
    {
      v43 = (System_Action_Uri__o *)v6->fields._logErrorOutputAction;
      v58 = v4;
      v44 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo, &v58);
      this = (PurchaseLogic_o *)System_String__Format_44573324(
                                  (System_String_o *)StringLiteral_10151/*"OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}"*/,
                                  (Il2CppObject *)Empty,
                                  v44,
                                  0LL);
      if ( !v43 )
        goto LABEL_32;
      System_Action_Uri___Invoke(
        v43,
        (System_Uri_o *)this,
        (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
    }
  }
  if ( !v6->fields._buyProductFinishedAction )
  {
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (PurchaseLogic_o *)UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v46 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v47 = (PurchaseLogic_ProductFinishedAction_o *)sub_B5D694(PurchaseLogic_ProductFinishedAction_TypeInfo);
      PurchaseLogic_ProductFinishedAction___ctor(v47, v46, Method_CommonUI_OpenStonePurchaseReciveMenu__, 0LL);
      v6->fields._buyProductFinishedAction = v47;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v6->fields._buyProductFinishedAction,
        (System_Int32_array **)v47,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
    }
  }
  if ( v5 )
  {
    metadata_k__BackingField = v5->fields._metadata_k__BackingField;
    if ( metadata_k__BackingField )
    {
      v55 = *(_QWORD *)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.flags;
      v5 = *(UnityEngine_Purchasing_Product_o **)&metadata_k__BackingField->fields._localizedPrice_k__BackingField.fields.lo;
      if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      }
      *(_QWORD *)&v60.fields.flags = v55;
      *(_QWORD *)&v60.fields.lo = v5;
      LODWORD(v5) = System_Decimal__ToInt32(v60, 0LL);
      goto LABEL_28;
    }
LABEL_32:
    sub_B5D69C(this, product);
  }
LABEL_28:
  ((void (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._23_ShowPurchaseFailedNotification.method)(
    v6,
    v4,
    v6->klass->vtable._24_SendPurchaseAction.methodPtr);
  if ( v4 > 6 )
    v57 = 6;
  else
    v57 = dword_32A2E40[v4];
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(v6, v57, (int32_t)v5, 0, 0, v56);
}


int32_t __fastcall PurchaseLogic__ProcessPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_PurchaseEventArgs_o *purchaseEventArgs,
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
  __int64 v36; // x21
  System_Uri_o *logErrorOutputAction; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **purchasedProduct_k__BackingField; // x1
  UnityEngine_Purchasing_Product_o **v45; // x20
  PurchaseBehaviour_c *v46; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v48; // x23
  __int64 v49; // x8
  __int64 v50; // x8
  struct System_Action_string__o *logOutputAction; // x21
  Il2CppObject *v52; // x1
  const MethodInfo *v53; // x2
  struct UnityEngine_Purchasing_ProductMetadata_o *metadata_k__BackingField; // x8
  struct System_Action_string__o *v55; // x21
  System_String_o *v56; // x0
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x2
  struct System_Decimal_o localizedPrice_k__BackingField; // [xsp+0h] [xbp-40h] BYREF
  System_Decimal_o v61; // 0:x0.16

  if ( (byte_42E883E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__Invoke__, (_DWORD)purchaseEventArgs, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BasicHelper_Any_string___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_string__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_string__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_PurchaseLogic___c__DisplayClass57_0__ProcessPurchase_b__0__, v18, v19, v20);
    sub_B5D5C4(&PurchaseLogic___c__DisplayClass57_0_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10920/*"ProcessPurchase: product is null"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_10919/*"ProcessPurchase: PASS. Product: '{0}'"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_10918/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_10885/*"Price: "*/, v33, v34, v35);
    byte_42E883E = 1;
  }
  localizedPrice_k__BackingField = (struct System_Decimal_o)0LL;
  v36 = sub_B5D694(PurchaseLogic___c__DisplayClass57_0_TypeInfo);
  PurchaseLogic___c__DisplayClass57_0___ctor((PurchaseLogic___c__DisplayClass57_0_o *)v36, 0LL);
  if ( purchaseEventArgs )
  {
    purchasedProduct_k__BackingField = (System_Int32_array **)purchaseEventArgs->fields._purchasedProduct_k__BackingField;
    if ( !v36 )
      goto LABEL_27;
  }
  else
  {
    purchasedProduct_k__BackingField = 0LL;
    if ( !v36 )
      goto LABEL_27;
  }
  *(_QWORD *)(v36 + 16) = purchasedProduct_k__BackingField;
  v45 = (UnityEngine_Purchasing_Product_o **)(v36 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 16), purchasedProduct_k__BackingField, v38, v39, v40, v41, v42, v43);
  if ( *(_QWORD *)(v36 + 16) )
  {
    v46 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v46 = PurchaseBehaviour_TypeInfo;
    }
    ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v46->static_fields->ConsumableProductIdCollection;
    v48 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_string__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v48,
      (Il2CppObject *)v36,
      Method_PurchaseLogic___c__DisplayClass57_0__ProcessPurchase_b__0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_string__bool___ctor__);
    logErrorOutputAction = (System_Uri_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                             ConsumableProductIdCollection,
                                             (System_Func_T__bool__o *)v48,
                                             (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_string___);
    v49 = *(_QWORD *)(v36 + 16);
    if ( v49 )
    {
      v50 = *(_QWORD *)(v49 + 16);
      if ( v50 )
      {
        logOutputAction = this->fields._logOutputAction;
        v52 = *(Il2CppObject **)(v50 + 16);
        if ( ((unsigned __int8)logErrorOutputAction & 1) == 0 )
        {
          logErrorOutputAction = (System_Uri_o *)System_String__Format((System_String_o *)StringLiteral_10918/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/, v52, 0LL);
          if ( !logOutputAction )
            goto LABEL_27;
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)logOutputAction,
            logErrorOutputAction,
            (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
          goto LABEL_25;
        }
        logErrorOutputAction = (System_Uri_o *)System_String__Format((System_String_o *)StringLiteral_10919/*"ProcessPurchase: PASS. Product: '{0}'"*/, v52, 0LL);
        if ( logOutputAction )
        {
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)logOutputAction,
            logErrorOutputAction,
            (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
          if ( *v45 )
          {
            metadata_k__BackingField = (*v45)->fields._metadata_k__BackingField;
            if ( metadata_k__BackingField )
            {
              v55 = this->fields._logOutputAction;
              *(_QWORD *)&v61.fields.flags = &localizedPrice_k__BackingField;
              *(_QWORD *)&v61.fields.lo = 0LL;
              localizedPrice_k__BackingField = metadata_k__BackingField->fields._localizedPrice_k__BackingField;
              v56 = System_Decimal__ToString(v61, v53);
              logErrorOutputAction = (System_Uri_o *)System_String__Concat_44577788(
                                                       (System_String_o *)StringLiteral_10885/*"Price: "*/,
                                                       v56,
                                                       0LL);
              if ( v55 )
              {
                System_Action_Uri___Invoke(
                  (System_Action_Uri__o *)v55,
                  logErrorOutputAction,
                  (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
                if ( *v45 )
                {
                  logErrorOutputAction = (System_Uri_o *)this->fields._logOutputAction;
                  if ( logErrorOutputAction )
                  {
                    System_Action_Uri___Invoke(
                      (System_Action_Uri__o *)logErrorOutputAction,
                      (System_Uri_o *)(*v45)->fields._receipt_k__BackingField,
                      (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
                    PurchaseLogic__ValidateReceipt(this, *v45, v57);
LABEL_25:
                    PurchaseLogic__AddPendingPurchase(this, *v45, v58);
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
    sub_B5D69C(logErrorOutputAction, purchasedProduct_k__BackingField);
  }
  logErrorOutputAction = (System_Uri_o *)this->fields._logErrorOutputAction;
  if ( !logErrorOutputAction )
    goto LABEL_27;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logErrorOutputAction,
    (System_Uri_o *)StringLiteral_10920/*"ProcessPurchase: product is null"*/,
    (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
  return 1;
}


void __fastcall PurchaseLogic__PurchaseIfAvailable(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        int32_t price,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  __int64 v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x0
  const MethodInfo *v32; // x2
  int32_t CumulativeAmount; // w2
  const MethodInfo *v34; // x5
  NetworkManager_ResultCallbackFunc_o *v35; // x19
  PurchaseLogic_o *v36; // x0
  const MethodInfo *v37; // x2

  if ( (byte_42E8828 & 1) == 0 )
  {
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, (_DWORD)product, price, method);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_PurchaseLogic___c__DisplayClass27_0__PurchaseIfAvailable_b__0__, v10, v11, v12);
    sub_B5D5C4(&PurchaseLogic___c__DisplayClass27_0_TypeInfo, v13, v14, v15);
    byte_42E8828 = 1;
  }
  v16 = sub_B5D694(PurchaseLogic___c__DisplayClass27_0_TypeInfo);
  PurchaseLogic___c__DisplayClass27_0___ctor((PurchaseLogic___c__DisplayClass27_0_o *)v16, 0LL);
  if ( !v16 )
    sub_B5D69C(v17, v18);
  *(_QWORD *)(v16 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 32) = product;
  *(_DWORD *)(v16 + 24) = price;
  sub_B5D560((BattleServantConfConponent_o *)(v16 + 32), (System_Int32_array **)product, v25, v26, v27, v28, v29, v30);
  if ( PurchaseLogic__IsAppleDevice(v31)
    && PurchaseLogic__IsPendingPurchase(this, *(UnityEngine_Purchasing_Product_o **)(v16 + 32), v32) )
  {
    if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    }
    CumulativeAmount = AgeVerificationMenu__GetCumulativeAmount(0LL);
    PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this, 12, CumulativeAmount, 0, 0, v34);
  }
  else
  {
    v35 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v35,
      (Il2CppObject *)v16,
      Method_PurchaseLogic___c__DisplayClass27_0__PurchaseIfAvailable_b__0__,
      0LL);
    PurchaseLogic__RequestGameServerBankStatus(v36, v35, v37);
  }
}


void __fastcall PurchaseLogic__RemoveDeferredPurchaseProductIdsInPlayerPrefs(
        PurchaseLogic_o *this,
        System_String_o *productId,
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
  __int64 v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v27; // x1
  System_Collections_Generic_List_string__o *DeferredPurchaseProductIdsFromPlayerPrefs; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v29; // x21
  PurchaseLogic_o *v30; // x0
  const MethodInfo *v31; // x2

  if ( (byte_42E8843 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__RemoveAll__, (_DWORD)productId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Predicate_string___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Predicate_string__TypeInfo, v8, v9, v10);
    sub_B5D5C4(
      &Method_PurchaseLogic___c__DisplayClass76_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&PurchaseLogic___c__DisplayClass76_0_TypeInfo, v14, v15, v16);
    byte_42E8843 = 1;
  }
  v17 = sub_B5D694(PurchaseLogic___c__DisplayClass76_0_TypeInfo);
  PurchaseLogic___c__DisplayClass76_0___ctor((PurchaseLogic___c__DisplayClass76_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_7;
  *(_QWORD *)(v17 + 16) = productId;
  sub_B5D560((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)productId, v20, v21, v22, v23, v24, v25);
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v17 + 16), 0LL);
  if ( IsNullOrEmpty )
    return;
  DeferredPurchaseProductIdsFromPlayerPrefs = PurchaseLogic__GetDeferredPurchaseProductIdsFromPlayerPrefs(
                                                (PurchaseLogic_o *)IsNullOrEmpty,
                                                v27);
  v29 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_string__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v29,
    (Il2CppObject *)v17,
    Method_PurchaseLogic___c__DisplayClass76_0__RemoveDeferredPurchaseProductIdsInPlayerPrefs_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_string___ctor__);
  if ( !DeferredPurchaseProductIdsFromPlayerPrefs )
LABEL_7:
    sub_B5D69C(v18, v19);
  v30 = (PurchaseLogic_o *)System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
                             (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)DeferredPurchaseProductIdsFromPlayerPrefs,
                             (System_Predicate_T__o *)v29,
                             (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_string__RemoveAll__);
  PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(v30, DeferredPurchaseProductIdsFromPlayerPrefs, v31);
}


void __fastcall PurchaseLogic__RemovePendingPurchase(
        PurchaseLogic_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_HashSet_Product__o *pendingProducts; // x0

  if ( (byte_42E882E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Product__Contains__, (_DWORD)product, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Product__Remove__, v6, v7, v8);
    byte_42E882E = 1;
  }
  pendingProducts = this->fields._pendingProducts;
  if ( !pendingProducts )
    goto LABEL_8;
  if ( System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
         (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
         (BattleBuffData_BuffData_o *)product,
         (const MethodInfo_25064D8 *)Method_System_Collections_Generic_HashSet_Product__Contains__) )
  {
    pendingProducts = this->fields._pendingProducts;
    if ( pendingProducts )
    {
      System_Collections_Generic_HashSet_BattleBuffData_BuffData___Remove(
        (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)pendingProducts,
        (BattleBuffData_BuffData_o *)product,
        (const MethodInfo_2506688 *)Method_System_Collections_Generic_HashSet_Product__Remove__);
      return;
    }
LABEL_8:
    sub_B5D69C(pendingProducts, product);
  }
}


void __fastcall PurchaseLogic__RequestGameServerBankStatus(
        PurchaseLogic_o *this,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BankStatusRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v9; // x1

  if ( (byte_42E8829 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_BankStatusRequest___, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    byte_42E8829 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (BankStatusRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               callback,
                                                               (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_BankStatusRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B5D69C(0LL, v9);
  BankStatusRequest__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
}


void __fastcall PurchaseLogic__RestorePurchases(PurchaseLogic_o *this, const MethodInfo *method)
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  struct PurchaseLogic_StaticFields *static_fields; // x8
  System_Action_Uri__o *logOutputAction; // x0
  __int64 v37; // x3
  struct UnityEngine_Purchasing_IExtensionProvider_o *storeExtensionProvider; // x20
  UnityEngine_Purchasing_IExtensionProvider_c *klass; // x8
  void *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Uri_o *v46; // x1
  const MethodInfo_258B334 *v47; // x2
  struct System_Action_string__o *v48; // x19
  System_Action_Uri__o *v49; // x20
  System_String_o *v50; // x21
  __int64 (__fastcall **v51)(struct UnityEngine_Purchasing_IExtensionProvider_o *, _QWORD); // x0
  __int64 v52; // x20
  System_Action_bool__o *v53; // x21
  __int64 v54; // x3
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  UnityEngine_Purchasing_IAppleExtensions_c **v57; // x11
  __int64 v58; // x0
  int32_t platform; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E882C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Action_bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Purchasing_IAppleExtensions_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___, v14, v15, v16);
    sub_B5D5C4(&Method_PurchaseLogic__RestorePurchases_b__31_0__, v17, v18, v19);
    sub_B5D5C4(&PurchaseLogic_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_RuntimePlatform_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_11614/*"RestorePurchases FAIL. Not supported on this platform. Current = "*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_11616/*"RestorePurchases started ..."*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_11613/*"RestorePurchases FAIL. Not initialized."*/, v32, v33, v34);
    byte_42E882C = 1;
  }
  platform = 0;
  if ( (byte_42E8826 & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseLogic_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8826 = 1;
  }
  static_fields = PurchaseLogic_TypeInfo->static_fields;
  if ( !static_fields->_storeController || !static_fields->_storeExtensionProvider )
  {
    logOutputAction = (System_Action_Uri__o *)this->fields._logOutputAction;
    if ( !logOutputAction )
      goto LABEL_31;
    v46 = (System_Uri_o *)StringLiteral_11613/*"RestorePurchases FAIL. Not initialized."*/;
    v47 = (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__;
    goto LABEL_18;
  }
  if ( UnityEngine_Application__get_platform(0LL) != 8 && UnityEngine_Application__get_platform(0LL) != 1 )
  {
    v48 = this->fields._logOutputAction;
    platform = UnityEngine_Application__get_platform(0LL);
    logOutputAction = (System_Action_Uri__o *)j_il2cpp_value_box_0(UnityEngine_RuntimePlatform_TypeInfo, &platform);
    if ( !logOutputAction )
      goto LABEL_31;
    v49 = logOutputAction;
    v50 = (System_String_o *)((__int64 (__fastcall *)(System_Action_Uri__o *, Il2CppMethodPointer))logOutputAction->klass->vtable._3_ToString.method)(
                               logOutputAction,
                               logOutputAction->klass->vtable._4_unknown.methodPtr);
    platform = *(_DWORD *)j_il2cpp_object_unbox_0(v49);
    logOutputAction = (System_Action_Uri__o *)System_String__Concat_44577788(
                                                (System_String_o *)StringLiteral_11614/*"RestorePurchases FAIL. Not supported on this platform. Current = "*/,
                                                v50,
                                                0LL);
    if ( !v48 )
      goto LABEL_31;
    v46 = (System_Uri_o *)logOutputAction;
    logOutputAction = (System_Action_Uri__o *)v48;
    v47 = (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__;
LABEL_18:
    System_Action_Uri___Invoke(logOutputAction, v46, v47);
    return;
  }
  logOutputAction = (System_Action_Uri__o *)this->fields._logOutputAction;
  if ( !logOutputAction )
    goto LABEL_31;
  System_Action_Uri___Invoke(
    logOutputAction,
    (System_Uri_o *)StringLiteral_11616/*"RestorePurchases started ..."*/,
    (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
  storeExtensionProvider = PurchaseLogic_TypeInfo->static_fields->_storeExtensionProvider;
  if ( !storeExtensionProvider )
    goto LABEL_31;
  klass = storeExtensionProvider->klass;
  v40 = Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___;
  v41 = *((_QWORD *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 3);
  v42 = *((unsigned __int16 *)Method_UnityEngine_Purchasing_IExtensionProvider_GetExtension_IAppleExtensions___ + 36);
  if ( *(_WORD *)&storeExtensionProvider->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v41 )
    {
      ++v43;
      p_offset += 4;
      if ( v43 >= *(unsigned __int16 *)&storeExtensionProvider->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    p_method = (__int64)&klass->vtable[*p_offset + (int)v42].method;
  }
  else
  {
LABEL_15:
    p_method = sub_AF54C0(storeExtensionProvider, v41, v42, v37);
  }
  v51 = (__int64 (__fastcall **)(struct UnityEngine_Purchasing_IExtensionProvider_o *, _QWORD))sub_B5D674(
                                                                                                 *(_QWORD *)(p_method + 8),
                                                                                                 v40);
  v52 = (*v51)(storeExtensionProvider, v51);
  v53 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v53,
    (Il2CppObject *)this,
    Method_PurchaseLogic__RestorePurchases_b__31_0__,
    (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
  if ( !v52 )
LABEL_31:
    sub_B5D69C(logOutputAction, method);
  v55 = *(_QWORD *)v52;
  if ( *(_WORD *)(*(_QWORD *)v52 + 298LL) )
  {
    v56 = 0LL;
    v57 = (UnityEngine_Purchasing_IAppleExtensions_c **)(*(_QWORD *)(v55 + 176) + 8LL);
    while ( *(v57 - 1) != UnityEngine_Purchasing_IAppleExtensions_TypeInfo )
    {
      ++v56;
      v57 += 2;
      if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)v52 + 298LL) )
        goto LABEL_28;
    }
    v58 = v55 + 16LL * (*(_DWORD *)v57 + 1) + 312;
  }
  else
  {
LABEL_28:
    v58 = sub_AF54C0(v52, UnityEngine_Purchasing_IAppleExtensions_TypeInfo, 1LL, v54);
  }
  (*(void (__fastcall **)(__int64, System_Action_bool__o *, _QWORD))v58)(v52, v53, *(_QWORD *)(v58 + 8));
}


void __fastcall PurchaseLogic__SaveDeferredPurchaseProductIdsToPlayerPrefs(
        PurchaseLogic_o *this,
        System_Collections_Generic_List_string__o *deferredPurchaseProductIdList,
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  __int64 v44; // x21
  __int64 v45; // x0
  __int64 v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **current; // x1
  System_String_o **v54; // x20
  System_String_o *v55; // x0
  PurchaseBehaviour_c *v56; // x0
  System_Collections_Generic_List_T__o *ConsumableProductIdCollection; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v58; // x23
  System_String_o *v59; // x21
  System_String_o *a; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E8841 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_string___, (_DWORD)deferredPurchaseProductIdList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_string__bool___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_string__bool__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&string_TypeInfo, v26, v27, v28);
    sub_B5D5C4(
      &Method_PurchaseLogic___c__DisplayClass74_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__,
      v29,
      v30,
      v31);
    sub_B5D5C4(&PurchaseLogic___c__DisplayClass74_0_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_1282/*";"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_1/*""*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_5300/*"DeferredPurchaseProductIds"*/, v41, v42, v43);
    byte_42E8841 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  if ( deferredPurchaseProductIdList )
  {
    a = (System_String_o *)StringLiteral_1/*""*/;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v61,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)deferredPurchaseProductIdList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v62 = v61;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v62,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v44 = sub_B5D694(PurchaseLogic___c__DisplayClass74_0_TypeInfo);
      PurchaseLogic___c__DisplayClass74_0___ctor((PurchaseLogic___c__DisplayClass74_0_o *)v44, 0LL);
      if ( !v44 )
        sub_B5D69C(v45, v46);
      current = (System_Int32_array **)v62.fields.current;
      *(_QWORD *)(v44 + 16) = v62.fields.current;
      v54 = (System_String_o **)(v44 + 16);
      sub_B5D560((BattleServantConfConponent_o *)(v44 + 16), current, v47, v48, v49, v50, v51, v52);
      if ( *(_QWORD *)(v44 + 16) )
      {
        v55 = System_String__Trim_44565120(*(System_String_o **)(v44 + 16), 0LL);
        if ( !System_String__op_Equality(v55, string_TypeInfo->static_fields->Empty, 0LL) )
        {
          v56 = PurchaseBehaviour_TypeInfo;
          if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
            v56 = PurchaseBehaviour_TypeInfo;
          }
          ConsumableProductIdCollection = (System_Collections_Generic_List_T__o *)v56->static_fields->ConsumableProductIdCollection;
          v58 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_string__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v58,
            (Il2CppObject *)v44,
            Method_PurchaseLogic___c__DisplayClass74_0__SaveDeferredPurchaseProductIdsToPlayerPrefs_b__0__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_string__bool___ctor__);
          if ( BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                 ConsumableProductIdCollection,
                 (System_Func_T__bool__o *)v58,
                 (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_string___) )
          {
            v59 = a;
            if ( System_String__op_Inequality(a, string_TypeInfo->static_fields->Empty, 0LL) )
              v59 = System_String__Concat_44577788(a, (System_String_o *)StringLiteral_1282/*";"*/, 0LL);
            a = System_String__Concat_44577788(v59, *v54, 0LL);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v62,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( System_String__IsNullOrEmpty(a, 0LL) )
      UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5300/*"DeferredPurchaseProductIds"*/, 0LL);
    else
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_5300/*"DeferredPurchaseProductIds"*/, a, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall PurchaseLogic__SendPurchaseAction(
        PurchaseLogic_o *this,
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
  void *Instance; // x0
  __int64 v16; // x1
  int v17; // w8
  void *v18; // x21
  unsigned int v19; // w22
  __int64 v20; // x23
  int32_t v21; // w20
  int v22; // w21
  __int64 v23; // x0

  if ( (byte_42E8839 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_BankShopMaster___,
      (_DWORD)paymentProductId,
      (_DWORD)transactionId,
      method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_8366/*"JPY"*/, v12, v13, v14);
    byte_42E8839 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BankShopMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = BankShopMaster__GetEnableEntitiyList((BankShopMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_18;
  v17 = *((_DWORD *)Instance + 6);
  v18 = Instance;
  if ( v17 >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= v17 )
      {
        v23 = sub_B5D6C8(Instance);
        sub_B5D668(v23, 0LL);
      }
      v20 = *((_QWORD *)v18 + (int)v19 + 4);
      if ( !v20 || !paymentProductId )
        goto LABEL_18;
      Instance = (void *)System_String__Equals_44565128(paymentProductId, *(System_String_o **)(v20 + 32), 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      v17 = *((_DWORD *)v18 + 6);
      if ( (int)++v19 >= v17 )
        return;
    }
    v21 = *(_DWORD *)(v20 + 16);
    if ( (v21 & 0x80000000) == 0 )
    {
      v22 = *(_DWORD *)(v20 + 52);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Instance )
      {
        AdManager__TrackPurchase(
          (AdManager_o *)Instance,
          v21,
          (double)v22,
          (System_String_o *)StringLiteral_8366/*"JPY"*/,
          transactionId,
          0LL);
        return;
      }
LABEL_18:
      sub_B5D69C(Instance, v16);
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
  System_String_o *v45; // x0
  __int64 v46; // x1
  struct System_Action_string__o *logOutputAction; // x22
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  NetworkManager_ResultCallbackFunc_o *v54; // x22
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_String_o *receiptBase64Str; // x22
  System_String_o *googleSignatureStr; // x21
  System_String_o *payloadJsonStr; // x23
  PurchaseByBank_UnityIap_Request_o *v59; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v60; // x25
  const MethodInfo *v61; // x6
  struct System_Action_string__o *logErrorOutputAction; // x20
  System_String_o *v63; // x0
  const MethodInfo *v64; // x2
  int64_t UserId; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8832 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Action_string__Invoke__,
      (_DWORD)receiptContents,
      (_DWORD)currentTransactionId,
      *(_QWORD *)&storeError);
    sub_B5D5C4(&Method_System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult_____ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_PurchaseLogic_OnEndSendReceiptData__, v24, v25, v26);
    sub_B5D5C4(&Method_PurchaseLogic__SendReceiptData_b__39_0__, v27, v28, v29);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_23380/*"user_id_error"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_10971/*"PurchaseLogic:SendReceiptData ["*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_15258/*"UserId error: UserId="*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v42, v43, v44);
    byte_42E8832 = 1;
  }
  UserId = 0LL;
  this->fields._currentTransactionId = currentTransactionId;
  sub_B5D560(
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
  v45 = System_String__Concat_44580072(
          (System_String_o *)StringLiteral_10971/*"PurchaseLogic:SendReceiptData ["*/,
          receiptContents->fields.payloadJsonStr,
          (System_String_o *)StringLiteral_16061/*"]"*/,
          0LL);
  if ( !logOutputAction )
    goto LABEL_19;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)v45,
    (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( NetworkManager__get_UserId(0LL) > 0 )
  {
    this->fields._purchaseResultArray = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields._purchaseResultArray, 0LL, v48, v49, v50, v51, v52, v53);
    v54 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v54,
      (Il2CppObject *)this,
      Method_PurchaseLogic_OnEndSendReceiptData__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v54,
                                          (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_PurchaseByBank_UnityIap_Request___);
    receiptBase64Str = receiptContents->fields.receiptBase64Str;
    payloadJsonStr = receiptContents->fields.payloadJsonStr;
    googleSignatureStr = receiptContents->fields.googleSignatureStr;
    v59 = (PurchaseByBank_UnityIap_Request_o *)Request_WarBoardWallAttackRequest;
    v60 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v60,
      (Il2CppObject *)this,
      Method_PurchaseLogic__SendReceiptData_b__39_0__,
      (const MethodInfo_258B320 *)Method_System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult_____ctor__);
    if ( v59 )
    {
      PurchaseByBank_UnityIap_Request__beginRequest(
        v59,
        receiptBase64Str,
        payloadJsonStr,
        storeError,
        googleSignatureStr,
        (System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____o *)v60,
        v61);
      return;
    }
LABEL_19:
    sub_B5D69C(v45, v46);
  }
  logErrorOutputAction = this->fields._logErrorOutputAction;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v63 = System_Int64__ToString((int64_t)&UserId, 0LL);
  v45 = System_String__Concat_44577788((System_String_o *)StringLiteral_15258/*"UserId error: UserId="*/, v63, 0LL);
  if ( !logErrorOutputAction )
    goto LABEL_19;
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logErrorOutputAction,
    (System_Uri_o *)v45,
    (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
  PurchaseLogic__OnEndSendReceiptData(this, (System_String_o *)StringLiteral_23380/*"user_id_error"*/, v64);
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
  __int64 v3; // x3
  int32_t CumulativeAmount; // w21
  int32_t v7; // w0

  if ( (byte_42E8836 & 1) == 0 )
  {
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, bankShopId, (_DWORD)method, v3);
    byte_42E8836 = 1;
  }
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  }
  CumulativeAmount = AgeVerificationMenu__GetCumulativeAmount(0LL);
  v7 = ((__int64 (__fastcall *)(PurchaseLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._21_GetPrice.method)(
         this,
         (unsigned int)bankShopId,
         this->klass->vtable._22_GetAddedStoneNum.methodPtr)
     + CumulativeAmount;
  AgeVerificationMenu__SaveCumulativeAmount(v7, 0LL);
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
    sub_B5D69C(IsAppleDevice, v6);
  if ( v8->fields.isIOSOldStyleReceipt )
    transactionID_k__BackingField = v8->fields.iOSOldStyleTransactionId;
LABEL_6:
  PurchaseLogic__SendReceiptData(this, v8, transactionID_k__BackingField, 0, v9);
}


void __fastcall PurchaseLogic___RestorePurchases_b__31_0(PurchaseLogic_o *this, bool result, const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Action_string__o *logOutputAction; // x19
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  bool v15; // [xsp+Ch] [xbp-14h] BYREF

  v15 = result;
  if ( (byte_42E8845 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__Invoke__, result, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11615/*"RestorePurchases continuing: "*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_815/*". If no further messages, no purchases available to restore."*/, v8, v9, v10);
    byte_42E8845 = 1;
  }
  logOutputAction = this->fields._logOutputAction;
  v12 = System_Boolean__ToString((bool)&v15, 0LL);
  v13 = System_String__Concat_44580072(
          (System_String_o *)StringLiteral_11615/*"RestorePurchases continuing: "*/,
          v12,
          (System_String_o *)StringLiteral_815/*". If no further messages, no purchases available to restore."*/,
          0LL);
  if ( !logOutputAction )
    sub_B5D69C(v13, v14);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)logOutputAction,
    (System_Uri_o *)v13,
    (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(p_method);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v15[5]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v16; // [xsp+30h] [xbp-30h] BYREF
  int32_t v17; // [xsp+34h] [xbp-2Ch] BYREF
  int32_t v18; // [xsp+38h] [xbp-28h] BYREF
  int32_t v19; // [xsp+3Ch] [xbp-24h] BYREF

  v18 = perMonthAmount;
  v19 = purchaseResult;
  v17 = freeStoneNum;
  v16 = chargeStoneNum;
  if ( (byte_42E5AC2 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, purchaseResult, perMonthAmount, *(_QWORD *)&freeStoneNum);
    sub_B5D5C4(&PurchaseBehaviour_Result_TypeInfo, v11, v12, v13);
    byte_42E5AC2 = 1;
  }
  v15[4] = 0LL;
  v15[0] = j_il2cpp_value_box_0(PurchaseBehaviour_Result_TypeInfo, &v19);
  v15[1] = j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v15[2] = j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v15[3] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  return (System_IAsyncResult_o *)sub_B5D568(this, v15, callback, object);
}


void __fastcall PurchaseLogic_ProductFinishedAction__EndInvoke(
        PurchaseLogic_ProductFinishedAction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v24->fields.extra_arg, *(_QWORD *)&purchaseResult, *(_QWORD *)&perMonthAmount);
      if ( (sub_B5D5F4(v26) & 1) == 0 )
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
      v28 = sub_B5D5EC(v26);
      v29 = sub_B5D9F0(v26);
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
            v22 = sub_AF54C0(v25, v33, v34, v30);
          }
          v21 = *(_QWORD *)(v22 + 8);
        }
        else
        {
          v21 = *(_QWORD *)(*v25 + 16LL * *(unsigned __int16 *)(v26 + 72) + 320);
        }
        v23 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_B5D674(v21, v26);
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
            v20 = sub_AF54C0(v25, class_0, v13, v15);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5AC3 & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5AC3 = 1;
  }
  this->fields.payloadJsonStr = string_TypeInfo->static_fields->Empty;
  sub_B5D560(&this->fields);
  this->fields.googleSignatureStr = string_TypeInfo->static_fields->Empty;
  sub_B5D560(&this->fields.googleSignatureStr);
  this->fields.receiptBase64Str = string_TypeInfo->static_fields->Empty;
  sub_B5D560(&this->fields.receiptBase64Str);
  this->fields.purchaseToken = string_TypeInfo->static_fields->Empty;
  sub_B5D560(&this->fields.purchaseToken);
  this->fields.iOSOldStyleTransactionId = string_TypeInfo->static_fields->Empty;
  sub_B5D560(&this->fields.iOSOldStyleTransactionId);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogic___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct PurchaseLogic___c_StaticFields *static_fields; // x0

  if ( (byte_42E5ABE & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseLogic___c_TypeInfo, v1, v2, v3);
    byte_42E5ABE = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(PurchaseLogic___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = PurchaseLogic___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PurchaseLogic___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x19

  if ( (byte_42E5ABF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Debug_TypeInfo, (_DWORD)str, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_15953/*"[UnityIAP]課金エラー:"*/, v5, v6, v7);
    byte_42E5ABF = 1;
  }
  v8 = (Il2CppObject *)System_String__Concat_44577788((System_String_o *)StringLiteral_15953/*"[UnityIAP]課金エラー:"*/, str, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError(v8, 0LL);
}


void __fastcall PurchaseLogic___c____ctor_b__77_2(
        PurchaseLogic___c_o *this,
        System_String_o *str,
        float ratio,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  float v13; // s0
  System_String_o *v14; // x0
  Il2CppObject *v15; // x19
  float v16; // [xsp+Ch] [xbp-14h] BYREF

  v16 = ratio;
  if ( (byte_42E5AC0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Debug_TypeInfo, (_DWORD)str, (_DWORD)method, v4);
    sub_B5D5C4(&StringLiteral_15952/*"[UnityIAP]課金エラー(ratio:"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_678/*"):"*/, v10, v11, v12);
    byte_42E5AC0 = 1;
  }
  v13 = UnityEngine_Random__Range(0.0, 1.0, 0LL);
  if ( v13 < ratio )
  {
    v14 = System_Single__ToString(v13, (const MethodInfo *)&v16);
    v15 = (Il2CppObject *)System_String__Concat_44581200(
                            (System_String_o *)StringLiteral_15952/*"[UnityIAP]課金エラー(ratio:"*/,
                            v14,
                            (System_String_o *)StringLiteral_678/*"):"*/,
                            str,
                            0LL);
    if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError(v15, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  PurchaseLogic_o *_4__this; // x0
  int32_t v25; // w20
  struct PurchaseLogic_o *v26; // x8
  struct UnityEngine_Purchasing_Product_o *product; // x9
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x9
  System_Action_Uri__o *logOutputAction; // x20
  __int64 v30; // x3
  struct UnityEngine_Purchasing_IStoreController_o *storeController; // x20
  UnityEngine_Purchasing_IStoreController_c *klass; // x8
  struct UnityEngine_Purchasing_Product_o *v33; // x19
  unsigned __int64 v34; // x10
  UnityEngine_Purchasing_IStoreController_c **p_offset; // x11
  __int64 p_method; // x0
  struct PurchaseLogic_o *v37; // x8
  System_Action_Uri__o *logErrorOutputAction; // x20
  PurchaseLogic_o *v39; // x21
  System_String_o *v40; // x22
  int v41; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E5AC1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__Invoke__, (_DWORD)requestResultStr, (_DWORD)method, v3);
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Purchasing_IStoreController_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&PurchaseLogic_PurchaseAvailablilty_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&PurchaseLogic_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_10975/*"Purchasing product asychronously: '{0}'"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_15011/*"Unexpected PurchaseAvailablilty value: "*/, v21, v22, v23);
    byte_42E5AC1 = 1;
  }
  v41 = 0;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_29:
    sub_B5D69C(_4__this, requestResultStr);
  _4__this = (PurchaseLogic_o *)PurchaseLogic__CheckBankStatusAndMonthlyLimit(
                                  _4__this,
                                  requestResultStr,
                                  this->fields.price,
                                  0LL);
  v41 = (int)_4__this;
  v25 = 9;
  switch ( (int)_4__this )
  {
    case 1:
      v26 = this->fields.__4__this;
      if ( !v26 )
        goto LABEL_29;
      product = this->fields.product;
      if ( !product )
        goto LABEL_29;
      definition_k__BackingField = product->fields._definition_k__BackingField;
      if ( !definition_k__BackingField )
        goto LABEL_29;
      logOutputAction = (System_Action_Uri__o *)v26->fields._logOutputAction;
      _4__this = (PurchaseLogic_o *)System_String__Format(
                                      (System_String_o *)StringLiteral_10975/*"Purchasing product asychronously: '{0}'"*/,
                                      (Il2CppObject *)definition_k__BackingField->fields._id_k__BackingField,
                                      0LL);
      if ( !logOutputAction )
        goto LABEL_29;
      System_Action_Uri___Invoke(
        logOutputAction,
        (System_Uri_o *)_4__this,
        (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
      storeController = PurchaseLogic_TypeInfo->static_fields->_storeController;
      if ( !storeController )
        goto LABEL_29;
      klass = storeController->klass;
      v33 = this->fields.product;
      if ( !*(_WORD *)&storeController->klass->_2.bitflags1 )
        goto LABEL_14;
      v34 = 0LL;
      p_offset = (UnityEngine_Purchasing_IStoreController_c **)&klass->_1.interfaceOffsets->offset;
      break;
    case 2:
      v25 = 8;
      goto LABEL_21;
    case 3:
      goto LABEL_21;
    case 4:
      goto LABEL_20;
    default:
      v37 = this->fields.__4__this;
      if ( !v37 )
        goto LABEL_29;
      logErrorOutputAction = (System_Action_Uri__o *)v37->fields._logErrorOutputAction;
      _4__this = (PurchaseLogic_o *)j_il2cpp_value_box_0(PurchaseLogic_PurchaseAvailablilty_TypeInfo, &v41);
      if ( !_4__this )
        goto LABEL_29;
      v39 = _4__this;
      v40 = (System_String_o *)((__int64 (__fastcall *)(PurchaseLogic_o *, Il2CppMethodPointer))_4__this->klass->vtable._3_ToString.method)(
                                 _4__this,
                                 _4__this->klass->vtable._4_OnInitializeFailed.methodPtr);
      v41 = *(_DWORD *)j_il2cpp_object_unbox_0(v39);
      _4__this = (PurchaseLogic_o *)System_String__Concat_44577788((System_String_o *)StringLiteral_15011/*"Unexpected PurchaseAvailablilty value: "*/, v40, 0LL);
      if ( !logErrorOutputAction )
        goto LABEL_29;
      System_Action_Uri___Invoke(
        logErrorOutputAction,
        (System_Uri_o *)_4__this,
        (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
LABEL_20:
      v25 = 6;
LABEL_21:
      if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
      }
      _4__this = (PurchaseLogic_o *)AgeVerificationMenu__GetCumulativeAmount(0LL);
      if ( !this->fields.__4__this )
        goto LABEL_29;
      PurchaseLogic__ExecuteBuyProductFinishedActionAndClear(this->fields.__4__this, v25, (int32_t)_4__this, 0, 0, 0LL);
      return;
  }
  while ( *(p_offset - 1) != UnityEngine_Purchasing_IStoreController_TypeInfo )
  {
    ++v34;
    p_offset += 2;
    if ( v34 >= *(unsigned __int16 *)&storeController->klass->_2.bitflags1 )
    {
LABEL_14:
      p_method = sub_AF54C0(storeController, UnityEngine_Purchasing_IStoreController_TypeInfo, 1LL, v30);
      goto LABEL_28;
    }
  }
  p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
LABEL_28:
  (*(void (__fastcall **)(struct UnityEngine_Purchasing_IStoreController_o *, struct UnityEngine_Purchasing_Product_o *, _QWORD))p_method)(
    storeController,
    v33,
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, p);
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
    sub_B5D69C(this, id);
  return System_String__Equals_44636604(definition_k__BackingField->fields._id_k__BackingField, id, 4, 0LL);
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
  return System_String__Equals_44636604(id, this->fields.idStr, 4, 0LL);
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