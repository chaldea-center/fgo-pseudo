void __fastcall PurchaseByBank_Legacy_Request___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseByBank_Legacy_Request___ctor(PurchaseByBank_Legacy_Request_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *__fastcall PurchaseByBank_Legacy_Request__CopyPurchaseResults(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PurchaseByBank_Legacy_Request_c *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19

  if ( (byte_4187A9B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Debug_TypeInfo, v1);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_PurchaseByBank_Legacy_Request_PurchaseResult___, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__TypeInfo, v4);
    sub_B2C35C(&PurchaseByBank_Legacy_Request_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_21583/*"purchaseResultArray is null."*/, v6);
    byte_4187A9B = 1;
  }
  v7 = PurchaseByBank_Legacy_Request_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request_TypeInfo);
    v7 = PurchaseByBank_Legacy_Request_TypeInfo;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)v7->static_fields->purchaseResultArray;
  if ( purchaseResultArray )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
    }
    return (System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                                purchaseResultArray,
                                                                                                (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_PurchaseByBank_Legacy_Request_PurchaseResult___);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_21583/*"purchaseResultArray is null."*/, 0LL);
    v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v9,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult___ctor__);
  }
  return (System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *)v9;
}


int32_t __fastcall PurchaseByBank_Legacy_Request__GetTotalAddedChargeStoneNum(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PurchaseByBank_Legacy_Request_c *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x19
  PurchaseByBank_Legacy_Request___c_c *v9; // x0
  struct PurchaseByBank_Legacy_Request___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x20
  Il2CppObject *v12; // x21
  struct PurchaseByBank_Legacy_Request___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v20; // x0

  if ( (byte_4187A9A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___, v1);
    sub_B2C35C(&Method_System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int___ctor__, v2);
    sub_B2C35C(&System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo, v3);
    sub_B2C35C(&PurchaseByBank_Legacy_Request_TypeInfo, v4);
    sub_B2C35C(&Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedChargeStoneNum_b__7_0__, v5);
    sub_B2C35C(&PurchaseByBank_Legacy_Request___c_TypeInfo, v6);
    byte_4187A9A = 1;
  }
  v7 = PurchaseByBank_Legacy_Request_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request_TypeInfo);
    v7 = PurchaseByBank_Legacy_Request_TypeInfo;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)v7->static_fields->purchaseResultArray;
  if ( !purchaseResultArray )
    return 0;
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  }
  v9 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request___c_TypeInfo);
    v9 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v12,
      Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedChargeStoneNum_b__7_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int___ctor__);
    v13 = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    v13->__9__7_0 = (struct System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__o *)_9__7_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
          purchaseResultArray,
          (System_Func_TSource__TResult__o *)_9__7_0,
          (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
  return System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v20, 0LL);
}


int32_t __fastcall PurchaseByBank_Legacy_Request__GetTotalAddedFreeStoneNum(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PurchaseByBank_Legacy_Request_c *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x19
  PurchaseByBank_Legacy_Request___c_c *v9; // x0
  struct PurchaseByBank_Legacy_Request___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x20
  Il2CppObject *v12; // x21
  struct PurchaseByBank_Legacy_Request___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v20; // x0

  if ( (byte_4187A99 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___, v1);
    sub_B2C35C(&Method_System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int___ctor__, v2);
    sub_B2C35C(&System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo, v3);
    sub_B2C35C(&PurchaseByBank_Legacy_Request_TypeInfo, v4);
    sub_B2C35C(&Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedFreeStoneNum_b__6_0__, v5);
    sub_B2C35C(&PurchaseByBank_Legacy_Request___c_TypeInfo, v6);
    byte_4187A99 = 1;
  }
  v7 = PurchaseByBank_Legacy_Request_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request_TypeInfo);
    v7 = PurchaseByBank_Legacy_Request_TypeInfo;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)v7->static_fields->purchaseResultArray;
  if ( !purchaseResultArray )
    return 0;
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  }
  v9 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request___c_TypeInfo);
    v9 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__6_0,
      v12,
      Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedFreeStoneNum_b__6_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int___ctor__);
    v13 = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    v13->__9__6_0 = (struct System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__o *)_9__6_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
          purchaseResultArray,
          (System_Func_TSource__TResult__o *)_9__6_0,
          (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
  return System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v20, 0LL);
}


void __fastcall PurchaseByBank_Legacy_Request__beginRequest(
        PurchaseByBank_Legacy_Request_o *this,
        System_String_o *purchaseBaseData,
        System_String_o *purchaseData,
        int32_t storeError,
        System_String_o *extraToken,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  PurchaseByBank_Legacy_Request_c *v22; // x0
  BattleServantConfConponent_o *static_fields; // x0

  if ( (byte_4187A98 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, purchaseBaseData);
    sub_B2C35C(&PurchaseByBank_Legacy_Request_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_22337/*"storeError"*/, v12);
    sub_B2C35C(&StringLiteral_21580/*"purchaseData"*/, v13);
    sub_B2C35C(&StringLiteral_21581/*"purchaseDataBase64"*/, v14);
    sub_B2C35C(&StringLiteral_22125/*"signatureData"*/, v15);
    byte_4187A98 = 1;
  }
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_21580/*"purchaseData"*/, purchaseData, 0LL);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0LL) )
    RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_21581/*"purchaseDataBase64"*/, purchaseBaseData, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22337/*"storeError"*/, storeError, 0LL);
  if ( !System_String__IsNullOrEmpty(extraToken, 0LL) )
    RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_22125/*"signatureData"*/, extraToken, 0LL);
  v22 = PurchaseByBank_Legacy_Request_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request_TypeInfo);
    v22 = PurchaseByBank_Legacy_Request_TypeInfo;
  }
  static_fields = (BattleServantConfConponent_o *)v22->static_fields;
  static_fields->klass = 0LL;
  sub_B2C2F8(static_fields, 0LL, v16, v17, v18, v19, v20, v21);
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__WriteParameter((RequestBase_o *)this, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall PurchaseByBank_Legacy_Request__getParameterFileName(
        PurchaseByBank_Legacy_Request_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4187A97 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, method);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_4187A97 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(1, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


int32_t __fastcall PurchaseByBank_Legacy_Request__getPurchasedBankShopId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  PurchaseByBank_Legacy_Request_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x8
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v5; // x0

  if ( (byte_4187A95 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_Legacy_Request_PurchaseResult___, v1);
    sub_B2C35C(&PurchaseByBank_Legacy_Request_TypeInfo, v2);
    byte_4187A95 = 1;
  }
  v3 = PurchaseByBank_Legacy_Request_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request_TypeInfo);
    v3 = PurchaseByBank_Legacy_Request_TypeInfo;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)v3->static_fields->purchaseResultArray;
  if ( purchaseResultArray )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
    }
    v5 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
           purchaseResultArray,
           (const MethodInfo_1A9066C *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_Legacy_Request_PurchaseResult___);
    if ( v5 )
      LODWORD(v5) = v5->fields.purchasedBankShopId;
  }
  else
  {
    LODWORD(v5) = 0;
  }
  return (int)v5;
}


System_String_o *__fastcall PurchaseByBank_Legacy_Request__getURL(
        PurchaseByBank_Legacy_Request_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4187A96 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_22106/*"shop/purchaseByBank"*/, v2);
    byte_4187A96 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_22106/*"shop/purchaseByBank"*/, 0LL);
}


void __fastcall PurchaseByBank_Legacy_Request__requestCompleted(
        PurchaseByBank_Legacy_Request_o *this,
        ResponseData_array *responseList,
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
  ResponseData_o *v14; // x0
  ResponseData_o *v15; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x21
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v17; // x0
  System_String_o *v18; // x20
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x21
  PurchaseByBank_Legacy_Request_c *v29; // x8
  BattleServantConfConponent_o *static_fields; // x0
  RequestBase_o *v31; // x0
  System_String_o *v32; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *fail; // x20
  __int64 v34; // x21

  if ( (byte_4187A9C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, responseList);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_B2C35C(&Method_JsonManager_DeserializeArray_PurchaseByBank_Legacy_Request_PurchaseResult___, v6);
    sub_B2C35C(&JsonManager_TypeInfo, v7);
    sub_B2C35C(&PurchaseByBank_Legacy_Request_TypeInfo, v8);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_21798/*"result"*/, v10);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v11);
    sub_B2C35C(&StringLiteral_21584/*"purchaseResults"*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_4187A9C = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v14 = ResponseCommandKind__SearchData(11, responseList, 0LL);
  if ( !v14 )
    goto LABEL_26;
  v15 = v14;
  if ( !ResponseData__checkError_31019724(v14, 0LL) )
  {
    fail = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15->fields.fail;
    if ( fail )
    {
      v34 = StringLiteral_21068/*"ng"*/;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)fail,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_21798/*"result"*/,
             (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 fail,
                 (System_Type_o *)StringLiteral_21798/*"result"*/,
                 (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_28;
        v34 = ((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                Item,
                Item->klass->vtable[4].methodPtr);
      }
      v31 = (RequestBase_o *)this;
      v32 = (System_String_o *)v34;
      goto LABEL_27;
    }
LABEL_26:
    v31 = (RequestBase_o *)this;
    v32 = (System_String_o *)StringLiteral_21068/*"ng"*/;
    goto LABEL_27;
  }
  success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15->fields.success;
  if ( !success )
    goto LABEL_26;
  v17 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v15->fields.success;
  v18 = (System_String_o *)StringLiteral_1/*""*/;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         v17,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21798/*"result"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             success,
             (System_Type_o *)StringLiteral_21798/*"result"*/,
             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( Item )
    {
      v18 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
      goto LABEL_12;
    }
LABEL_28:
    sub_B2C434(Item, v20);
  }
LABEL_12:
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21584/*"purchaseResults"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v21 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            success,
                            (System_Type_o *)StringLiteral_21584/*"purchaseResults"*/,
                            (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v28 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                   v21,
                                   (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_PurchaseByBank_Legacy_Request_PurchaseResult___);
    v29 = PurchaseByBank_Legacy_Request_TypeInfo;
    if ( (BYTE3(PurchaseByBank_Legacy_Request_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseByBank_Legacy_Request_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request_TypeInfo);
      v29 = PurchaseByBank_Legacy_Request_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v29->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v28;
    sub_B2C2F8(static_fields, v28, v22, v23, v24, v25, v26, v27);
  }
  v31 = (RequestBase_o *)this;
  v32 = v18;
LABEL_27:
  RequestBase__completed(v31, v32, 0LL);
}


void __fastcall PurchaseByBank_Legacy_Request_PurchaseResult___ctor(
        PurchaseByBank_Legacy_Request_PurchaseResult_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseByBank_Legacy_Request___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct PurchaseByBank_Legacy_Request___c_StaticFields *static_fields; // x0

  if ( (byte_41852BF & 1) == 0 )
  {
    sub_B2C35C(&PurchaseByBank_Legacy_Request___c_TypeInfo, v1);
    byte_41852BF = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(PurchaseByBank_Legacy_Request___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PurchaseByBank_Legacy_Request___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall PurchaseByBank_Legacy_Request___c___ctor(
        PurchaseByBank_Legacy_Request___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall PurchaseByBank_Legacy_Request___c___GetTotalAddedChargeStoneNum_b__7_0(
        PurchaseByBank_Legacy_Request___c_o *this,
        PurchaseByBank_Legacy_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.chargeStoneNum;
}


int32_t __fastcall PurchaseByBank_Legacy_Request___c___GetTotalAddedFreeStoneNum_b__6_0(
        PurchaseByBank_Legacy_Request___c_o *this,
        PurchaseByBank_Legacy_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.freeStoneNum;
}