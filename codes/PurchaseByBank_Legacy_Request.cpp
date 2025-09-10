void PurchaseByBank_Legacy_Request___ctor(PurchaseByBank_Legacy_Request_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *PurchaseByBank_Legacy_Request__CopyPurchaseResults(
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x0
  System_Collections_Generic_List_object__o *v3; // x19

  if ( (byte_4C28E46 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Debug_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_PurchaseByBank_Legacy_Request_PurchaseResult___);
    sub_1C2D490(&Method_System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__TypeInfo);
    sub_1C2D490(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_1C2D490(&StringLiteral_22804/*"purchaseResultArray is null."*/);
    byte_4C28E46 = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( purchaseResultArray )
    return (System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *)System_Linq_Enumerable__ToList_object_(
                                                                                                purchaseResultArray,
                                                                                                (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_PurchaseByBank_Legacy_Request_PurchaseResult___);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_22804/*"purchaseResultArray is null."*/, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult___ctor__);
  return (System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *)v3;
}


int32_t PurchaseByBank_Legacy_Request__GetTotalAddedChargeStoneNum(const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x19
  PurchaseByBank_Legacy_Request___c_c *v2; // x0
  System_Func_object__int__o *_9__7_0; // x20
  Il2CppObject *v4; // x21
  struct PurchaseByBank_Legacy_Request___c_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_IEnumerable_int__o *v8; // x0

  if ( (byte_4C28E45 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
    sub_1C2D490(&System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    sub_1C2D490(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_1C2D490(&Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedChargeStoneNum_b__7_0__);
    sub_1C2D490(&PurchaseByBank_Legacy_Request___c_TypeInfo);
    byte_4C28E45 = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( !purchaseResultArray )
    return 0;
  v2 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  if ( !PurchaseByBank_Legacy_Request___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request___c_TypeInfo);
    v2 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  }
  _9__7_0 = (System_Func_object__int__o *)v2->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      v2 = PurchaseByBank_Legacy_Request___c_TypeInfo;
    }
    v4 = (Il2CppObject *)v2->static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_0,
      v4,
      Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedChargeStoneNum_b__7_0__,
      0);
    static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__o *)_9__7_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v6, v7);
  }
  v8 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                          purchaseResultArray,
                                                          (System_Func_TSource__TResult__o *)_9__7_0,
                                                          (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
  return System_Linq_Enumerable__Sum(v8, 0);
}


int32_t PurchaseByBank_Legacy_Request__GetTotalAddedFreeStoneNum(const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x19
  PurchaseByBank_Legacy_Request___c_c *v2; // x0
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v4; // x21
  struct PurchaseByBank_Legacy_Request___c_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_IEnumerable_int__o *v8; // x0

  if ( (byte_4C28E44 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
    sub_1C2D490(&System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    sub_1C2D490(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_1C2D490(&Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedFreeStoneNum_b__6_0__);
    sub_1C2D490(&PurchaseByBank_Legacy_Request___c_TypeInfo);
    byte_4C28E44 = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( !purchaseResultArray )
    return 0;
  v2 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  if ( !PurchaseByBank_Legacy_Request___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request___c_TypeInfo);
    v2 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  }
  _9__6_0 = (System_Func_object__int__o *)v2->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      v2 = PurchaseByBank_Legacy_Request___c_TypeInfo;
    }
    v4 = (Il2CppObject *)v2->static_fields->__9;
    _9__6_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__6_0,
      v4,
      Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedFreeStoneNum_b__6_0__,
      0);
    static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__o *)_9__6_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v6, v7);
  }
  v8 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                          purchaseResultArray,
                                                          (System_Func_TSource__TResult__o *)_9__6_0,
                                                          (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
  return System_Linq_Enumerable__Sum(v8, 0);
}


void PurchaseByBank_Legacy_Request__beginRequest(
        PurchaseByBank_Legacy_Request_o *this,
        System_String_o *purchaseBaseData,
        System_String_o *purchaseData,
        int32_t storeError,
        System_String_o *extraToken,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C28E43 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_1C2D490(&StringLiteral_23698/*"storeError"*/);
    sub_1C2D490(&StringLiteral_22801/*"purchaseData"*/);
    sub_1C2D490(&StringLiteral_22802/*"purchaseDataBase64"*/);
    sub_1C2D490(&StringLiteral_23474/*"signatureData"*/);
    byte_4C28E43 = 1;
  }
  RequestBase__addField_44009064((RequestBase_o *)this, (System_String_o *)StringLiteral_22801/*"purchaseData"*/, purchaseData, 0);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0) )
    RequestBase__addField_44009064((RequestBase_o *)this, (System_String_o *)StringLiteral_22802/*"purchaseDataBase64"*/, purchaseBaseData, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23698/*"storeError"*/, storeError, 0);
  if ( !System_String__IsNullOrEmpty(extraToken, 0) )
    RequestBase__addField_44009064((RequestBase_o *)this, (System_String_o *)StringLiteral_23474/*"signatureData"*/, extraToken, 0);
  PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray = 0;
  sub_1C2D434((CGThumbnailListItem_o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields, 0, v11, v12);
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  RequestBase__WriteParameter((RequestBase_o *)this, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *PurchaseByBank_Legacy_Request__getParameterFileName(
        PurchaseByBank_Legacy_Request_o *this,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C28E42 & 1) == 0 )
  {
    sub_1C2D490(&AndroidUtil_TypeInfo);
    sub_1C2D490(&DatFileName_TypeInfo);
    sub_1C2D490(&StringLiteral_1048/*"/"*/);
    byte_4C28E42 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(1, 0);
  return System_String__Concat_63496112(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


int32_t PurchaseByBank_Legacy_Request__getPurchasedBankShopId(const MethodInfo *method)
{
  struct PurchaseByBank_Legacy_Request_PurchaseResult_array *purchaseResultArray; // x0

  if ( (byte_4C28E40 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_Legacy_Request_PurchaseResult___);
    sub_1C2D490(&PurchaseByBank_Legacy_Request_TypeInfo);
    byte_4C28E40 = 1;
  }
  purchaseResultArray = PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( purchaseResultArray )
  {
    purchaseResultArray = (struct PurchaseByBank_Legacy_Request_PurchaseResult_array *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                                         (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                                                         (const MethodInfo_30F7054 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_Legacy_Request_PurchaseResult___);
    if ( purchaseResultArray )
      LODWORD(purchaseResultArray) = purchaseResultArray->bounds;
  }
  return (int)purchaseResultArray;
}


System_String_o *PurchaseByBank_Legacy_Request__getURL(PurchaseByBank_Legacy_Request_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28E41 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_23419/*"shop/purchaseByBank"*/);
    byte_4C28E41 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_23419/*"shop/purchaseByBank"*/, 0);
}


void PurchaseByBank_Legacy_Request__requestCompleted(
        PurchaseByBank_Legacy_Request_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x21
  System_Collections_Generic_Dictionary_object__object__o *v8; // x0
  __int64 v9; // x20
  Il2CppObject *Item; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x21
  System_Object_array *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_Dictionary_object__object__o *fail; // x21
  RequestBase_o *v17; // x0
  System_String_o *v18; // x1

  if ( (byte_4C28E47 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&Method_JsonManager_DeserializeArray_PurchaseByBank_Legacy_Request_PurchaseResult___);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_23055/*"result"*/);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    sub_1C2D490(&StringLiteral_22805/*"purchaseResults"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28E47 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(11, responseList, 0);
  if ( !v5 )
    goto LABEL_20;
  v6 = v5;
  if ( ResponseData__checkError_44004292(v5, 0) )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success;
    if ( success )
    {
      v8 = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success;
      v9 = StringLiteral_1/*""*/;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              v8,
              (Il2CppObject *)StringLiteral_23055/*"result"*/,
              (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_11;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               success,
               (Il2CppObject *)StringLiteral_23055/*"result"*/,
               (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( Item )
      {
        v9 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
               Item,
               Item->klass->vtable[3].method);
LABEL_11:
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               success,
               (Il2CppObject *)StringLiteral_22805/*"purchaseResults"*/,
               (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          v12 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  success,
                  (Il2CppObject *)StringLiteral_22805/*"purchaseResults"*/,
                  (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v13 = JsonManager__DeserializeArray_object_(
                  v12,
                  (const MethodInfo_313DDBC *)Method_JsonManager_DeserializeArray_PurchaseByBank_Legacy_Request_PurchaseResult___);
          PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray = (struct PurchaseByBank_Legacy_Request_PurchaseResult_array *)v13;
          sub_1C2D434(
            (CGThumbnailListItem_o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields,
            (int32_t)v13,
            v14,
            v15);
        }
        goto LABEL_19;
      }
LABEL_22:
      sub_1C2D6EC(Item, v11);
    }
LABEL_20:
    v18 = (System_String_o *)StringLiteral_22195/*"ng"*/;
    v17 = (RequestBase_o *)this;
    goto LABEL_21;
  }
  fail = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.fail;
  if ( !fail )
    goto LABEL_20;
  v9 = StringLiteral_22195/*"ng"*/;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         fail,
         (Il2CppObject *)StringLiteral_23055/*"result"*/,
         (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             fail,
             (Il2CppObject *)StringLiteral_23055/*"result"*/,
             (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_22;
    v9 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
           Item,
           Item->klass->vtable[3].method);
  }
LABEL_19:
  v17 = (RequestBase_o *)this;
  v18 = (System_String_o *)v9;
LABEL_21:
  RequestBase__completed(v17, v18, 0);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C28E48 & 1) == 0 )
  {
    sub_1C2D490(&PurchaseByBank_Legacy_Request___c_TypeInfo);
    byte_4C28E48 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(PurchaseByBank_Legacy_Request___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields->__9 = (struct PurchaseByBank_Legacy_Request___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
  return x->fields.chargeStoneNum;
}


int32_t PurchaseByBank_Legacy_Request___c___GetTotalAddedFreeStoneNum_b__6_0(
        PurchaseByBank_Legacy_Request___c_o *this,
        PurchaseByBank_Legacy_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.freeStoneNum;
}