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
  PurchaseByBank_Legacy_Request_c *v1; // x0
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19

  if ( (byte_42AFBD6 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Debug_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_PurchaseByBank_Legacy_Request_PurchaseResult___);
    sub_B52984(&Method_System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult___ctor__);
    sub_B52984(&System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__TypeInfo);
    sub_B52984(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_B52984(&StringLiteral_21760/*"purchaseResultArray is null."*/);
    byte_42AFBD6 = 1;
  }
  v1 = PurchaseByBank_Legacy_Request_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request_TypeInfo);
    v1 = PurchaseByBank_Legacy_Request_TypeInfo;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)v1->static_fields->purchaseResultArray;
  if ( purchaseResultArray )
  {
    if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v1);
      purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
    }
    return (System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                                purchaseResultArray,
                                                                                                (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_PurchaseByBank_Legacy_Request_PurchaseResult___);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_21760/*"purchaseResultArray is null."*/, 0LL);
    v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v3,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult___ctor__);
  }
  return (System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *)v3;
}


int32_t __fastcall PurchaseByBank_Legacy_Request__GetTotalAddedChargeStoneNum(const MethodInfo *method)
{
  PurchaseByBank_Legacy_Request_c *v1; // x0
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x19
  PurchaseByBank_Legacy_Request___c_c *v3; // x0
  struct PurchaseByBank_Legacy_Request___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x20
  Il2CppObject *v6; // x21
  struct PurchaseByBank_Legacy_Request___c_StaticFields *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x0

  if ( (byte_42AFBD5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
    sub_B52984(&Method_System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int___ctor__);
    sub_B52984(&System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    sub_B52984(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_B52984(&Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedChargeStoneNum_b__7_0__);
    sub_B52984(&PurchaseByBank_Legacy_Request___c_TypeInfo);
    byte_42AFBD5 = 1;
  }
  v1 = PurchaseByBank_Legacy_Request_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request_TypeInfo);
    v1 = PurchaseByBank_Legacy_Request_TypeInfo;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)v1->static_fields->purchaseResultArray;
  if ( !purchaseResultArray )
    return 0;
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  }
  v3 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request___c_TypeInfo);
    v3 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v6,
      Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedChargeStoneNum_b__7_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int___ctor__);
    v7 = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    v7->__9__7_0 = (struct System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__o *)_9__7_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v7->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
          purchaseResultArray,
          (System_Func_TSource__TResult__o *)_9__7_0,
          (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
  return System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v14, 0LL);
}


int32_t __fastcall PurchaseByBank_Legacy_Request__GetTotalAddedFreeStoneNum(const MethodInfo *method)
{
  PurchaseByBank_Legacy_Request_c *v1; // x0
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x19
  PurchaseByBank_Legacy_Request___c_c *v3; // x0
  struct PurchaseByBank_Legacy_Request___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x20
  Il2CppObject *v6; // x21
  struct PurchaseByBank_Legacy_Request___c_StaticFields *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x0

  if ( (byte_42AFBD4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
    sub_B52984(&Method_System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int___ctor__);
    sub_B52984(&System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    sub_B52984(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_B52984(&Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedFreeStoneNum_b__6_0__);
    sub_B52984(&PurchaseByBank_Legacy_Request___c_TypeInfo);
    byte_42AFBD4 = 1;
  }
  v1 = PurchaseByBank_Legacy_Request_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request_TypeInfo);
    v1 = PurchaseByBank_Legacy_Request_TypeInfo;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)v1->static_fields->purchaseResultArray;
  if ( !purchaseResultArray )
    return 0;
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  }
  v3 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request___c_TypeInfo);
    v3 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__6_0,
      v6,
      Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedFreeStoneNum_b__6_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int___ctor__);
    v7 = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    v7->__9__6_0 = (struct System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__o *)_9__6_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v7->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
          purchaseResultArray,
          (System_Func_TSource__TResult__o *)_9__6_0,
          (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
  return System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v14, 0LL);
}


void __fastcall PurchaseByBank_Legacy_Request__beginRequest(
        PurchaseByBank_Legacy_Request_o *this,
        System_String_o *purchaseBaseData,
        System_String_o *purchaseData,
        int32_t storeError,
        System_String_o *extraToken,
        const MethodInfo *method)
{
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  PurchaseByBank_Legacy_Request_c *v17; // x0
  BattleServantConfConponent_o *static_fields; // x0

  if ( (byte_42AFBD3 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_B52984(&StringLiteral_22525/*"storeError"*/);
    sub_B52984(&StringLiteral_21757/*"purchaseData"*/);
    sub_B52984(&StringLiteral_21758/*"purchaseDataBase64"*/);
    sub_B52984(&StringLiteral_22312/*"signatureData"*/);
    byte_42AFBD3 = 1;
  }
  RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_21757/*"purchaseData"*/, purchaseData, 0LL);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0LL) )
    RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_21758/*"purchaseDataBase64"*/, purchaseBaseData, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22525/*"storeError"*/, storeError, 0LL);
  if ( !System_String__IsNullOrEmpty(extraToken, 0LL) )
    RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_22312/*"signatureData"*/, extraToken, 0LL);
  v17 = PurchaseByBank_Legacy_Request_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request_TypeInfo);
    v17 = PurchaseByBank_Legacy_Request_TypeInfo;
  }
  static_fields = (BattleServantConfConponent_o *)v17->static_fields;
  static_fields->klass = 0LL;
  sub_B52920(static_fields, 0LL, v11, v12, v13, v14, v15, v16);
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
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42AFBD2 & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42AFBD2 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(1, 0LL);
  return System_String__Concat_44570600(DatFileSavePath, (System_String_o *)StringLiteral_886/*"/"*/, FileName, 0LL);
}


int32_t __fastcall PurchaseByBank_Legacy_Request__getPurchasedBankShopId(const MethodInfo *method)
{
  PurchaseByBank_Legacy_Request_c *v1; // x0
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x8
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v3; // x0

  if ( (byte_42AFBD0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_Legacy_Request_PurchaseResult___);
    sub_B52984(&PurchaseByBank_Legacy_Request_TypeInfo);
    byte_42AFBD0 = 1;
  }
  v1 = PurchaseByBank_Legacy_Request_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request_TypeInfo);
    v1 = PurchaseByBank_Legacy_Request_TypeInfo;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)v1->static_fields->purchaseResultArray;
  if ( purchaseResultArray )
  {
    if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v1);
      purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
    }
    v3 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
           purchaseResultArray,
           (const MethodInfo_1B62EA8 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_Legacy_Request_PurchaseResult___);
    if ( v3 )
      LODWORD(v3) = v3->fields.purchasedBankShopId;
  }
  else
  {
    LODWORD(v3) = 0;
  }
  return (int)v3;
}


System_String_o *__fastcall PurchaseByBank_Legacy_Request__getURL(
        PurchaseByBank_Legacy_Request_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42AFBD1 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_22293/*"shop/purchaseByBank"*/);
    byte_42AFBD1 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_22293/*"shop/purchaseByBank"*/, 0LL);
}


void __fastcall PurchaseByBank_Legacy_Request__requestCompleted(
        PurchaseByBank_Legacy_Request_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x21
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v8; // x0
  System_String_o *v9; // x20
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x21
  PurchaseByBank_Legacy_Request_c *v20; // x8
  BattleServantConfConponent_o *static_fields; // x0
  RequestBase_o *v22; // x0
  System_String_o *v23; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *fail; // x20
  __int64 v25; // x21

  if ( (byte_42AFBD7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&Method_JsonManager_DeserializeArray_PurchaseByBank_Legacy_Request_PurchaseResult___);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21980/*"result"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    sub_B52984(&StringLiteral_21761/*"purchaseResults"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AFBD7 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(11, responseList, 0LL);
  if ( !v5 )
    goto LABEL_26;
  v6 = v5;
  if ( !ResponseData__checkError_29724768(v5, 0LL) )
  {
    fail = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6->fields.fail;
    if ( fail )
    {
      v25 = StringLiteral_21239/*"ng"*/;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)fail,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_21980/*"result"*/,
             (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 fail,
                 (System_Type_o *)StringLiteral_21980/*"result"*/,
                 (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_28;
        v25 = ((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                Item,
                Item->klass->vtable[4].methodPtr);
      }
      v22 = (RequestBase_o *)this;
      v23 = (System_String_o *)v25;
      goto LABEL_27;
    }
LABEL_26:
    v22 = (RequestBase_o *)this;
    v23 = (System_String_o *)StringLiteral_21239/*"ng"*/;
    goto LABEL_27;
  }
  success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6->fields.success;
  if ( !success )
    goto LABEL_26;
  v8 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.success;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         v8,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21980/*"result"*/,
         (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             success,
             (System_Type_o *)StringLiteral_21980/*"result"*/,
             (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( Item )
    {
      v9 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                Item,
                                Item->klass->vtable[4].methodPtr);
      goto LABEL_12;
    }
LABEL_28:
    sub_B52A5C(Item, v11);
  }
LABEL_12:
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21761/*"purchaseResults"*/,
         (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v12 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            success,
                            (System_Type_o *)StringLiteral_21761/*"purchaseResults"*/,
                            (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v19 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                   v12,
                                   (const MethodInfo_1F690B0 *)Method_JsonManager_DeserializeArray_PurchaseByBank_Legacy_Request_PurchaseResult___);
    v20 = PurchaseByBank_Legacy_Request_TypeInfo;
    if ( (BYTE3(PurchaseByBank_Legacy_Request_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseByBank_Legacy_Request_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request_TypeInfo);
      v20 = PurchaseByBank_Legacy_Request_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v20->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v19;
    sub_B52920(static_fields, v19, v13, v14, v15, v16, v17, v18);
  }
  v22 = (RequestBase_o *)this;
  v23 = v9;
LABEL_27:
  RequestBase__completed(v22, v23, 0LL);
}


void __fastcall PurchaseByBank_Legacy_Request_PurchaseResult___ctor(
        PurchaseByBank_Legacy_Request_PurchaseResult_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseByBank_Legacy_Request___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct PurchaseByBank_Legacy_Request___c_StaticFields *static_fields; // x0

  if ( (byte_42AD449 & 1) == 0 )
  {
    sub_B52984(&PurchaseByBank_Legacy_Request___c_TypeInfo);
    byte_42AD449 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(PurchaseByBank_Legacy_Request___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PurchaseByBank_Legacy_Request___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  return x->fields.chargeStoneNum;
}


int32_t __fastcall PurchaseByBank_Legacy_Request___c___GetTotalAddedFreeStoneNum_b__6_0(
        PurchaseByBank_Legacy_Request___c_o *this,
        PurchaseByBank_Legacy_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.freeStoneNum;
}