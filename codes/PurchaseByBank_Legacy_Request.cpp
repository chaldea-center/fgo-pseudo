System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *PurchaseByBank_Legacy_Request__CopyPurchaseResults(
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x0
  System_Collections_Generic_List_object__o *v3; // x19

  if ( (byte_4D3255A & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_PurchaseByBank_Legacy_Request_PurchaseResult___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__TypeInfo);
    sub_1C93AD4(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_1C93AD4(&StringLiteral_23110/*"purchaseResultArray is null."*/);
    byte_4D3255A = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( purchaseResultArray )
    return (System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *)System_Linq_Enumerable__ToList_object_(
                                                                                                purchaseResultArray,
                                                                                                (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_PurchaseByBank_Legacy_Request_PurchaseResult___);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_23110/*"purchaseResultArray is null."*/, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult___ctor__);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_IEnumerable_int__o *v12; // x0

  if ( (byte_4D32559 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
    sub_1C93AD4(&System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    sub_1C93AD4(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_1C93AD4(&Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedChargeStoneNum_b__7_0__);
    sub_1C93AD4(&PurchaseByBank_Legacy_Request___c_TypeInfo);
    byte_4D32559 = 1;
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
    _9__7_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_0,
      v4,
      Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedChargeStoneNum_b__7_0__,
      0);
    static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__o *)_9__7_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v6, v7, v8, v9, v10, v11);
  }
  v12 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                           purchaseResultArray,
                                                           (System_Func_TSource__TResult__o *)_9__7_0,
                                                           (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
  return System_Linq_Enumerable__Sum(v12, 0);
}


int32_t PurchaseByBank_Legacy_Request__GetTotalAddedFreeStoneNum(const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x19
  PurchaseByBank_Legacy_Request___c_c *v2; // x0
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v4; // x21
  struct PurchaseByBank_Legacy_Request___c_StaticFields *static_fields; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_IEnumerable_int__o *v12; // x0

  if ( (byte_4D32558 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
    sub_1C93AD4(&System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    sub_1C93AD4(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_1C93AD4(&Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedFreeStoneNum_b__6_0__);
    sub_1C93AD4(&PurchaseByBank_Legacy_Request___c_TypeInfo);
    byte_4D32558 = 1;
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
    _9__6_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__6_0,
      v4,
      Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedFreeStoneNum_b__6_0__,
      0);
    static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__o *)_9__6_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v6, v7, v8, v9, v10, v11);
  }
  v12 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                           purchaseResultArray,
                                                           (System_Func_TSource__TResult__o *)_9__6_0,
                                                           (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
  return System_Linq_Enumerable__Sum(v12, 0);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1

  if ( (byte_4D32557 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_1C93AD4(&StringLiteral_24013/*"storeError"*/);
    sub_1C93AD4(&StringLiteral_23107/*"purchaseData"*/);
    sub_1C93AD4(&StringLiteral_23108/*"purchaseDataBase64"*/);
    sub_1C93AD4(&StringLiteral_23784/*"signatureData"*/);
    byte_4D32557 = 1;
  }
  RequestBase__addField_44907496(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23107/*"purchaseData"*/,
    purchaseData,
    *(const MethodInfo **)&storeError);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0) )
    RequestBase__addField_44907496((RequestBase_o *)this, (System_String_o *)StringLiteral_23108/*"purchaseDataBase64"*/, purchaseBaseData, v11);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24013/*"storeError"*/, storeError, v11);
  if ( !System_String__IsNullOrEmpty(extraToken, 0) )
    RequestBase__addField_44907496((RequestBase_o *)this, (System_String_o *)StringLiteral_23784/*"signatureData"*/, extraToken, v13);
  PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray = 0;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields,
    0,
    v12,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17);
  RequestBase__addBaseField((RequestBase_o *)this, v18);
  RequestBase__WriteParameter((RequestBase_o *)this, v19);
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

  if ( (byte_4D32556 & 1) == 0 )
  {
    sub_1C93AD4(&AndroidUtil_TypeInfo);
    sub_1C93AD4(&DatFileName_TypeInfo);
    sub_1C93AD4(&StringLiteral_1042/*"/"*/);
    byte_4D32556 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(1, 0);
  return System_String__Concat_64463988(DatFileSavePath, (System_String_o *)StringLiteral_1042/*"/"*/, FileName, 0);
}


int32_t PurchaseByBank_Legacy_Request__getPurchasedBankShopId(const MethodInfo *method)
{
  struct PurchaseByBank_Legacy_Request_PurchaseResult_array *purchaseResultArray; // x0

  if ( (byte_4D32554 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_Legacy_Request_PurchaseResult___);
    sub_1C93AD4(&PurchaseByBank_Legacy_Request_TypeInfo);
    byte_4D32554 = 1;
  }
  purchaseResultArray = PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( purchaseResultArray )
  {
    purchaseResultArray = (struct PurchaseByBank_Legacy_Request_PurchaseResult_array *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                                         (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                                                         (const MethodInfo_31CC378 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_Legacy_Request_PurchaseResult___);
    if ( purchaseResultArray )
      LODWORD(purchaseResultArray) = purchaseResultArray->bounds;
  }
  return (int)purchaseResultArray;
}


System_String_o *PurchaseByBank_Legacy_Request__getURL(PurchaseByBank_Legacy_Request_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D32555 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_23726/*"shop/purchaseByBank"*/);
    byte_4D32555 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_23726/*"shop/purchaseByBank"*/, 0);
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
  __int64 v10; // x20
  Il2CppObject *Item; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  System_Object_array *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Collections_Generic_Dictionary_object__object__o *fail; // x21
  System_Collections_Generic_Dictionary_object__object__o *v22; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  void (__fastcall *invoke_impl)(intptr_t, __int64, intptr_t); // x3
  intptr_t method_code; // x0
  intptr_t v26; // x2
  __int64 v27; // x1
  struct NetworkManager_ResultCallbackFunc_o *v28; // x8

  if ( (byte_4D3255B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&Method_JsonManager_DeserializeArray_PurchaseByBank_Legacy_Request_PurchaseResult___);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_1C93AD4(&ResponseCommandKind_TypeInfo);
    sub_1C93AD4(&StringLiteral_23365/*"result"*/);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    sub_1C93AD4(&StringLiteral_23111/*"purchaseResults"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D3255B = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
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
                (Il2CppObject *)StringLiteral_23365/*"result"*/,
                (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_11;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 success,
                 (Il2CppObject *)StringLiteral_23365/*"result"*/,
                 (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( Item )
        {
          v10 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                  Item,
                  Item->klass->vtable[3].method);
LABEL_11:
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 success,
                 (Il2CppObject *)StringLiteral_23111/*"purchaseResults"*/,
                 (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            v13 = System_Collections_Generic_Dictionary_object__object___get_Item(
                    success,
                    (Il2CppObject *)StringLiteral_23111/*"purchaseResults"*/,
                    (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v14 = JsonManager__DeserializeArray_object_(
                    v13,
                    (const MethodInfo_3213F70 *)Method_JsonManager_DeserializeArray_PurchaseByBank_Legacy_Request_PurchaseResult___);
            PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray = (struct PurchaseByBank_Legacy_Request_PurchaseResult_array *)v14;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields,
              (int32_t)v14,
              v15,
              v16,
              v17,
              v18,
              v19,
              v20);
          }
LABEL_19:
          CallBack = this->fields.CallBack;
          if ( CallBack )
          {
            invoke_impl = (void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl;
            method_code = CallBack->fields.method_code;
            v26 = CallBack->fields.method;
            v27 = v10;
LABEL_23:
            invoke_impl(method_code, v27, v26);
            return;
          }
          return;
        }
LABEL_25:
        sub_1C93D2C(Item, v12);
      }
    }
    else
    {
      fail = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.fail;
      if ( fail )
      {
        v22 = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.fail;
        v10 = StringLiteral_22483/*"ng"*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v22,
                (Il2CppObject *)StringLiteral_23365/*"result"*/,
                (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 fail,
                 (Il2CppObject *)StringLiteral_23365/*"result"*/,
                 (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( Item )
        {
          v10 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                  Item,
                  Item->klass->vtable[3].method);
          goto LABEL_19;
        }
        goto LABEL_25;
      }
    }
  }
  v28 = this->fields.CallBack;
  if ( v28 )
  {
    invoke_impl = (void (__fastcall *)(intptr_t, __int64, intptr_t))v28->fields.invoke_impl;
    method_code = v28->fields.method_code;
    v26 = v28->fields.method;
    v27 = StringLiteral_22483/*"ng"*/;
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3255C & 1) == 0 )
  {
    sub_1C93AD4(&PurchaseByBank_Legacy_Request___c_TypeInfo);
    byte_4D3255C = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(PurchaseByBank_Legacy_Request___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields->__9 = (struct PurchaseByBank_Legacy_Request___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields,
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
    sub_1C93D2C(this, 0);
  return x->fields.chargeStoneNum;
}


int32_t PurchaseByBank_Legacy_Request___c___GetTotalAddedFreeStoneNum_b__6_0(
        PurchaseByBank_Legacy_Request___c_o *this,
        PurchaseByBank_Legacy_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.freeStoneNum;
}