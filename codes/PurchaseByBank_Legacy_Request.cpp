System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *__fastcall PurchaseByBank_Legacy_Request__CopyPurchaseResults(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x0
  System_Collections_Generic_List_object__o *v9; // x19

  if ( (byte_49BC8AC & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Debug_TypeInfo, v1);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_PurchaseByBank_Legacy_Request_PurchaseResult___, v2);
    sub_1B4CF90(&Method_System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult___ctor__, v3);
    sub_1B4CF90(&System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__TypeInfo, v4);
    sub_1B4CF90(&PurchaseByBank_Legacy_Request_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_22380/*"purchaseResultArray is null."*/, v6);
    byte_49BC8AC = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( purchaseResultArray )
    return (System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *)System_Linq_Enumerable__ToList_object_(
                                                                                                purchaseResultArray,
                                                                                                (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_PurchaseByBank_Legacy_Request_PurchaseResult___);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_22380/*"purchaseResultArray is null."*/, 0LL);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult___ctor__);
  return (System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *)v9;
}


int32_t __fastcall PurchaseByBank_Legacy_Request__GetTotalAddedChargeStoneNum(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x19
  PurchaseByBank_Legacy_Request___c_c *v7; // x0
  System_Func_object__int__o *_9__7_0; // x20
  Il2CppObject *v9; // x21
  struct PurchaseByBank_Legacy_Request___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_int__o *v13; // x0

  if ( (byte_49BC8AB & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___, v1);
    sub_1B4CF90(&System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo, v2);
    sub_1B4CF90(&PurchaseByBank_Legacy_Request_TypeInfo, v3);
    sub_1B4CF90(&Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedChargeStoneNum_b__7_0__, v4);
    sub_1B4CF90(&PurchaseByBank_Legacy_Request___c_TypeInfo, v5);
    byte_49BC8AB = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( !purchaseResultArray )
    return 0;
  v7 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  if ( !PurchaseByBank_Legacy_Request___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request___c_TypeInfo);
    v7 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  }
  _9__7_0 = (System_Func_object__int__o *)v7->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = PurchaseByBank_Legacy_Request___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_0,
      v9,
      Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedChargeStoneNum_b__7_0__,
      0LL);
    static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__o *)_9__7_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v11, v12);
  }
  v13 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                           purchaseResultArray,
                                                           (System_Func_TSource__TResult__o *)_9__7_0,
                                                           (const MethodInfo_2F338DC *)Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
  return System_Linq_Enumerable__Sum(v13, 0LL);
}


int32_t __fastcall PurchaseByBank_Legacy_Request__GetTotalAddedFreeStoneNum(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x19
  PurchaseByBank_Legacy_Request___c_c *v7; // x0
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v9; // x21
  struct PurchaseByBank_Legacy_Request___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_int__o *v13; // x0

  if ( (byte_49BC8AA & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___, v1);
    sub_1B4CF90(&System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo, v2);
    sub_1B4CF90(&PurchaseByBank_Legacy_Request_TypeInfo, v3);
    sub_1B4CF90(&Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedFreeStoneNum_b__6_0__, v4);
    sub_1B4CF90(&PurchaseByBank_Legacy_Request___c_TypeInfo, v5);
    byte_49BC8AA = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( !purchaseResultArray )
    return 0;
  v7 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  if ( !PurchaseByBank_Legacy_Request___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request___c_TypeInfo);
    v7 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  }
  _9__6_0 = (System_Func_object__int__o *)v7->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = PurchaseByBank_Legacy_Request___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__6_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__6_0,
      v9,
      Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedFreeStoneNum_b__6_0__,
      0LL);
    static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__o *)_9__6_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v11, v12);
  }
  v13 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                           purchaseResultArray,
                                                           (System_Func_TSource__TResult__o *)_9__6_0,
                                                           (const MethodInfo_2F338DC *)Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
  return System_Linq_Enumerable__Sum(v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1

  if ( (byte_49BC8A9 & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, purchaseBaseData);
    sub_1B4CF90(&PurchaseByBank_Legacy_Request_TypeInfo, v11);
    sub_1B4CF90(&StringLiteral_23276/*"storeError"*/, v12);
    sub_1B4CF90(&StringLiteral_22377/*"purchaseData"*/, v13);
    sub_1B4CF90(&StringLiteral_22378/*"purchaseDataBase64"*/, v14);
    sub_1B4CF90(&StringLiteral_23050/*"signatureData"*/, v15);
    byte_49BC8A9 = 1;
  }
  RequestBase__addField_41748396(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22377/*"purchaseData"*/,
    purchaseData,
    *(const MethodInfo **)&storeError);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0LL) )
    RequestBase__addField_41748396((RequestBase_o *)this, (System_String_o *)StringLiteral_22378/*"purchaseDataBase64"*/, purchaseBaseData, v16);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23276/*"storeError"*/, storeError, v16);
  if ( !System_String__IsNullOrEmpty(extraToken, 0LL) )
    RequestBase__addField_41748396((RequestBase_o *)this, (System_String_o *)StringLiteral_23050/*"signatureData"*/, extraToken, v18);
  PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields, 0, v17, v18);
  RequestBase__addBaseField((RequestBase_o *)this, v19);
  RequestBase__WriteParameter((RequestBase_o *)this, v20);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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

  if ( (byte_49BC8A8 & 1) == 0 )
  {
    sub_1B4CF90(&AndroidUtil_TypeInfo, method);
    sub_1B4CF90(&DatFileName_TypeInfo, v2);
    sub_1B4CF90(&StringLiteral_1057/*"/"*/, v3);
    byte_49BC8A8 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(1, 0LL);
  return System_String__Concat_61131716(DatFileSavePath, (System_String_o *)StringLiteral_1057/*"/"*/, FileName, 0LL);
}


int32_t __fastcall PurchaseByBank_Legacy_Request__getPurchasedBankShopId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct PurchaseByBank_Legacy_Request_PurchaseResult_array *purchaseResultArray; // x0

  if ( (byte_49BC8A6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_Legacy_Request_PurchaseResult___, v1);
    sub_1B4CF90(&PurchaseByBank_Legacy_Request_TypeInfo, v2);
    byte_49BC8A6 = 1;
  }
  purchaseResultArray = PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( purchaseResultArray )
  {
    purchaseResultArray = (struct PurchaseByBank_Legacy_Request_PurchaseResult_array *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                                         (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                                                         (const MethodInfo_2F26C18 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_Legacy_Request_PurchaseResult___);
    if ( purchaseResultArray )
      LODWORD(purchaseResultArray) = purchaseResultArray->bounds;
  }
  return (int)purchaseResultArray;
}


System_String_o *__fastcall PurchaseByBank_Legacy_Request__getURL(
        PurchaseByBank_Legacy_Request_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49BC8A7 & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_22995/*"shop/purchaseByBank"*/, v2);
    byte_49BC8A7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61093468(BaseUrl, (System_String_o *)StringLiteral_22995/*"shop/purchaseByBank"*/, 0LL);
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
  System_Collections_Generic_Dictionary_object__object__o *success; // x21
  System_Collections_Generic_Dictionary_object__object__o *v17; // x0
  void *v18; // x20
  Il2CppObject *Item; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x21
  System_Object_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_Dictionary_object__object__o *fail; // x21
  System_Collections_Generic_Dictionary_object__object__o *v26; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v30; // x2
  __int64 v31; // x1
  struct NetworkManager_ResultCallbackFunc_o *v32; // x8

  if ( (byte_49BC8AD & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, responseList);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1B4CF90(&Method_JsonManager_DeserializeArray_PurchaseByBank_Legacy_Request_PurchaseResult___, v6);
    sub_1B4CF90(&JsonManager_TypeInfo, v7);
    sub_1B4CF90(&PurchaseByBank_Legacy_Request_TypeInfo, v8);
    sub_1B4CF90(&ResponseCommandKind_TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_22627/*"result"*/, v10);
    sub_1B4CF90(&StringLiteral_21779/*"ng"*/, v11);
    sub_1B4CF90(&StringLiteral_22381/*"purchaseResults"*/, v12);
    sub_1B4CF90(&StringLiteral_1/*""*/, v13);
    byte_49BC8AD = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v14 = ResponseCommandKind__SearchData(11, responseList, 0LL);
  if ( v14 )
  {
    v15 = v14;
    if ( ResponseData__checkError_41839176(v14, 0LL) )
    {
      success = (System_Collections_Generic_Dictionary_object__object__o *)v15->fields.success;
      if ( success )
      {
        v17 = (System_Collections_Generic_Dictionary_object__object__o *)v15->fields.success;
        v18 = StringLiteral_1/*""*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v17,
                (Il2CppObject *)StringLiteral_22627/*"result"*/,
                (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_11;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 success,
                 (Il2CppObject *)StringLiteral_22627/*"result"*/,
                 (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( Item )
        {
          v18 = (void *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                          Item,
                          Item->klass->vtable[4].methodPtr);
LABEL_11:
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 success,
                 (Il2CppObject *)StringLiteral_22381/*"purchaseResults"*/,
                 (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            v21 = System_Collections_Generic_Dictionary_object__object___get_Item(
                    success,
                    (Il2CppObject *)StringLiteral_22381/*"purchaseResults"*/,
                    (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v22 = JsonManager__DeserializeArray_object_(
                    v21,
                    (const MethodInfo_2F6ADF0 *)Method_JsonManager_DeserializeArray_PurchaseByBank_Legacy_Request_PurchaseResult___);
            PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray = (struct PurchaseByBank_Legacy_Request_PurchaseResult_array *)v22;
            sub_1B4CF34(
              (CGThumbnailListItem_o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields,
              (int32_t)v22,
              v23,
              v24);
          }
LABEL_19:
          CallBack = this->fields.CallBack;
          if ( CallBack )
          {
            m_target = CallBack->fields.m_target;
            original_method_info = CallBack->fields.original_method_info;
            v30 = *(_QWORD *)&CallBack->fields.extra_arg;
            v31 = (__int64)v18;
LABEL_23:
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64))m_target)(
              original_method_info,
              v31,
              v30);
            return;
          }
          return;
        }
LABEL_25:
        sub_1B4D1EC(Item, v20);
      }
    }
    else
    {
      fail = (System_Collections_Generic_Dictionary_object__object__o *)v15->fields.fail;
      if ( fail )
      {
        v26 = (System_Collections_Generic_Dictionary_object__object__o *)v15->fields.fail;
        v18 = (void *)StringLiteral_21779/*"ng"*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v26,
                (Il2CppObject *)StringLiteral_22627/*"result"*/,
                (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 fail,
                 (Il2CppObject *)StringLiteral_22627/*"result"*/,
                 (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( Item )
        {
          v18 = (void *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                          Item,
                          Item->klass->vtable[4].methodPtr);
          goto LABEL_19;
        }
        goto LABEL_25;
      }
    }
  }
  v32 = this->fields.CallBack;
  if ( v32 )
  {
    m_target = v32->fields.m_target;
    original_method_info = v32->fields.original_method_info;
    v30 = *(_QWORD *)&v32->fields.extra_arg;
    v31 = StringLiteral_21779/*"ng"*/;
    goto LABEL_23;
  }
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BC8AE & 1) == 0 )
  {
    sub_1B4CF90(&PurchaseByBank_Legacy_Request___c_TypeInfo, v1);
    byte_49BC8AE = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(PurchaseByBank_Legacy_Request___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields->__9 = (struct PurchaseByBank_Legacy_Request___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, 0LL);
  return x->fields.chargeStoneNum;
}


int32_t __fastcall PurchaseByBank_Legacy_Request___c___GetTotalAddedFreeStoneNum_b__6_0(
        PurchaseByBank_Legacy_Request___c_o *this,
        PurchaseByBank_Legacy_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.freeStoneNum;
}