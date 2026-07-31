System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *PurchaseByBank_Legacy_Request__CopyPurchaseResults(
        const MethodInfo *method)
{
  __int64 v1; // x1
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x0
  System_Collections_Generic_List_object__o *v4; // x19

  if ( (byte_593A29E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_PurchaseByBank_Legacy_Request_PurchaseResult___);
    sub_21FFC50(&Method_System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__TypeInfo);
    sub_21FFC50(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_21FFC50(&StringLiteral_23968/*"purchaseResultArray is null."*/);
    byte_593A29E = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( purchaseResultArray )
    return (System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *)System_Linq_Enumerable__ToList_object_(
                                                                                                purchaseResultArray,
                                                                                                (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_PurchaseByBank_Legacy_Request_PurchaseResult___);
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v1);
  UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_23968/*"purchaseResultArray is null."*/, 0);
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult___ctor__);
  return (System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *)v4;
}


int32_t PurchaseByBank_Legacy_Request__GetTotalAddedChargeStoneNum(const MethodInfo *method)
{
  __int64 v1; // x1
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x19
  PurchaseByBank_Legacy_Request___c_c *v3; // x0
  struct PurchaseByBank_Legacy_Request___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__7_0; // x20
  Il2CppObject *v6; // x21
  struct PurchaseByBank_Legacy_Request___c_StaticFields *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_IEnumerable_int__o *v14; // x0

  if ( (byte_593A29D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
    sub_21FFC50(&System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    sub_21FFC50(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_21FFC50(&Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedChargeStoneNum_b__7_0__);
    sub_21FFC50(&PurchaseByBank_Legacy_Request___c_TypeInfo);
    byte_593A29D = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( !purchaseResultArray )
    return 0;
  v3 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  if ( !*(&PurchaseByBank_Legacy_Request___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request___c_TypeInfo, v1);
    v3 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__7_0 = (System_Func_object__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, v1);
      static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_0,
      v6,
      Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedChargeStoneNum_b__7_0__,
      0);
    v7 = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    v7->__9__7_0 = (struct System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__o *)_9__7_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v7->__9__7_0, (int32_t)_9__7_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                           purchaseResultArray,
                                                           (System_Func_TSource__TResult__o *)_9__7_0,
                                                           (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
  return System_Linq_Enumerable__Sum(v14, 0);
}


int32_t PurchaseByBank_Legacy_Request__GetTotalAddedFreeStoneNum(const MethodInfo *method)
{
  __int64 v1; // x1
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x19
  PurchaseByBank_Legacy_Request___c_c *v3; // x0
  struct PurchaseByBank_Legacy_Request___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v6; // x21
  struct PurchaseByBank_Legacy_Request___c_StaticFields *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_IEnumerable_int__o *v14; // x0

  if ( (byte_593A29C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
    sub_21FFC50(&System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    sub_21FFC50(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_21FFC50(&Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedFreeStoneNum_b__6_0__);
    sub_21FFC50(&PurchaseByBank_Legacy_Request___c_TypeInfo);
    byte_593A29C = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( !purchaseResultArray )
    return 0;
  v3 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  if ( !*(&PurchaseByBank_Legacy_Request___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request___c_TypeInfo, v1);
    v3 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__6_0 = (System_Func_object__int__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, v1);
      static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__6_0,
      v6,
      Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedFreeStoneNum_b__6_0__,
      0);
    v7 = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    v7->__9__6_0 = (struct System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__o *)_9__6_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v7->__9__6_0, (int32_t)_9__6_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                           purchaseResultArray,
                                                           (System_Func_TSource__TResult__o *)_9__6_0,
                                                           (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
  return System_Linq_Enumerable__Sum(v14, 0);
}


// local variable allocation has failed, the output may be wrong!
void PurchaseByBank_Legacy_Request__beginRequest(
        PurchaseByBank_Legacy_Request_o *this,
        System_String_o *purchaseBaseData,
        System_String_o *purchaseData,
        int32_t storeError,
        System_String_o *extraToken,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x3
  System_String_o *v12; // x2
  MethodInfo *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  __int64 v20; // x1

  if ( (byte_593A29B & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_21FFC50(&StringLiteral_24932/*"storeError"*/);
    sub_21FFC50(&StringLiteral_23965/*"purchaseData"*/);
    sub_21FFC50(&StringLiteral_23966/*"purchaseDataBase64"*/);
    sub_21FFC50(&StringLiteral_24688/*"signatureData"*/);
    byte_593A29B = 1;
  }
  RequestBase__addField_51187332(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23965/*"purchaseData"*/,
    purchaseData,
    *(const MethodInfo **)&storeError);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0) )
    RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_23966/*"purchaseDataBase64"*/, purchaseBaseData, v11);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24932/*"storeError"*/, storeError, v11);
  if ( !System_String__IsNullOrEmpty(extraToken, 0) )
    RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_24688/*"signatureData"*/, extraToken, v13);
  PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields,
    0,
    v12,
    (System_String_o *)v13,
    v14,
    v15,
    v16,
    v17);
  RequestBase__addBaseField((RequestBase_o *)this, v18);
  RequestBase__WriteParameter((RequestBase_o *)this, v19);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *PurchaseByBank_Legacy_Request__getParameterFileName(
        PurchaseByBank_Legacy_Request_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_593A29A & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_593A29A = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(1, 0);
  return System_String__Concat_75481624(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


int32_t PurchaseByBank_Legacy_Request__getPurchasedBankShopId(const MethodInfo *method)
{
  struct PurchaseByBank_Legacy_Request_PurchaseResult_array *purchaseResultArray; // x0

  if ( (byte_593A298 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_Legacy_Request_PurchaseResult___);
    sub_21FFC50(&PurchaseByBank_Legacy_Request_TypeInfo);
    byte_593A298 = 1;
  }
  purchaseResultArray = PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( purchaseResultArray )
  {
    purchaseResultArray = (struct PurchaseByBank_Legacy_Request_PurchaseResult_array *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                                         (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                                                         (const MethodInfo_384E0B0 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_Legacy_Request_PurchaseResult___);
    if ( purchaseResultArray )
      LODWORD(purchaseResultArray) = purchaseResultArray->bounds;
  }
  return (int)purchaseResultArray;
}


System_String_o *PurchaseByBank_Legacy_Request__getURL(PurchaseByBank_Legacy_Request_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A299 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_24621/*"shop/purchaseByBank"*/);
    byte_593A299 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_24621/*"shop/purchaseByBank"*/, 0);
}


void PurchaseByBank_Legacy_Request__requestCompleted(
        PurchaseByBank_Legacy_Request_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x21
  System_Collections_Generic_Dictionary_object__object__o *v9; // x0
  void *v10; // x20
  Il2CppObject *Item; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *v14; // x21
  System_Object_array *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_Dictionary_object__object__o *fail; // x21
  System_Collections_Generic_Dictionary_object__object__o *v23; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_593A29F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&Method_JsonManager_DeserializeArray_PurchaseByBank_Legacy_Request_PurchaseResult___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_24236/*"result"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_23969/*"purchaseResults"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A29F = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(11, responseList, 0);
  if ( v5 )
  {
    v7 = v5;
    if ( ResponseData__checkError(v5, v5->fields.resCode, v6) )
    {
      success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success;
      if ( success )
      {
        v9 = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success;
        v10 = StringLiteral_1/*""*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v9,
                (Il2CppObject *)StringLiteral_24236/*"result"*/,
                (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_11;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 success,
                 (Il2CppObject *)StringLiteral_24236/*"result"*/,
                 (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( Item )
        {
          v10 = (void *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                          Item,
                          Item->klass->vtable[3].method);
LABEL_11:
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 success,
                 (Il2CppObject *)StringLiteral_23969/*"purchaseResults"*/,
                 (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            v14 = System_Collections_Generic_Dictionary_object__object___get_Item(
                    success,
                    (Il2CppObject *)StringLiteral_23969/*"purchaseResults"*/,
                    (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v13);
            v15 = JsonManager__DeserializeArray_object_(
                    v14,
                    (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_PurchaseByBank_Legacy_Request_PurchaseResult___);
            PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray = (struct PurchaseByBank_Legacy_Request_PurchaseResult_array *)v15;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields,
              (int32_t)v15,
              v16,
              v17,
              v18,
              v19,
              v20,
              v21);
          }
LABEL_19:
          CallBack = this->fields.CallBack;
          if ( !CallBack )
            return;
LABEL_23:
          ((void (__fastcall *)(intptr_t, void *, intptr_t))CallBack->fields.invoke_impl)(
            CallBack->fields.method_code,
            v10,
            CallBack->fields.method);
          return;
        }
LABEL_25:
        sub_21FFECC(Item, v12);
      }
    }
    else
    {
      fail = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.fail;
      if ( fail )
      {
        v23 = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.fail;
        v10 = (void *)StringLiteral_23290/*"ng"*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v23,
                (Il2CppObject *)StringLiteral_24236/*"result"*/,
                (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 fail,
                 (Il2CppObject *)StringLiteral_24236/*"result"*/,
                 (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( Item )
        {
          v10 = (void *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                          Item,
                          Item->klass->vtable[3].method);
          goto LABEL_19;
        }
        goto LABEL_25;
      }
    }
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v10 = (void *)StringLiteral_23290/*"ng"*/;
    goto LABEL_23;
  }
}


void PurchaseByBank_Legacy_Request_PurchaseResult___ctor(
        PurchaseByBank_Legacy_Request_PurchaseResult_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PurchaseByBank_Legacy_Request___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593A2A0 & 1) == 0 )
  {
    sub_21FFC50(&PurchaseByBank_Legacy_Request___c_TypeInfo);
    byte_593A2A0 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(PurchaseByBank_Legacy_Request___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields->__9 = (struct PurchaseByBank_Legacy_Request___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PurchaseByBank_Legacy_Request___c___ctor(PurchaseByBank_Legacy_Request___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t PurchaseByBank_Legacy_Request___c___GetTotalAddedChargeStoneNum_b__7_0(
        PurchaseByBank_Legacy_Request___c_o *this,
        PurchaseByBank_Legacy_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.chargeStoneNum;
}


int32_t PurchaseByBank_Legacy_Request___c___GetTotalAddedFreeStoneNum_b__6_0(
        PurchaseByBank_Legacy_Request___c_o *this,
        PurchaseByBank_Legacy_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.freeStoneNum;
}