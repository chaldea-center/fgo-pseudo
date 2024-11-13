System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *__fastcall PurchaseByBank_Legacy_Request__CopyPurchaseResults(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Collections_Generic_List_object__o *v18; // x19

  if ( (byte_4B17B2C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Debug_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_PurchaseByBank_Legacy_Request_PurchaseResult___, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__TypeInfo, v7, v8);
    sub_1BCA7E0(&PurchaseByBank_Legacy_Request_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_22897/*"purchaseResultArray is null."*/, v11, v12);
    byte_4B17B2C = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( purchaseResultArray )
    return (System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *)System_Linq_Enumerable__ToList_object_(
                                                                                                purchaseResultArray,
                                                                                                (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_PurchaseByBank_Legacy_Request_PurchaseResult___);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v1);
  UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_22897/*"purchaseResultArray is null."*/, 0LL);
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__TypeInfo,
                                                       v15,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult___ctor__);
  return (System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *)v18;
}


int32_t __fastcall PurchaseByBank_Legacy_Request__GetTotalAddedChargeStoneNum(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x19
  PurchaseByBank_Legacy_Request___c_c *v13; // x0
  System_Func_object__int__o *_9__7_0; // x20
  Il2CppObject *v15; // x21
  struct PurchaseByBank_Legacy_Request___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_IEnumerable_int__o *v23; // x0

  if ( (byte_4B17B2B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___, v1, v2);
    sub_1BCA7E0(&System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo, v4, v5);
    sub_1BCA7E0(&PurchaseByBank_Legacy_Request_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedChargeStoneNum_b__7_0__, v8, v9);
    sub_1BCA7E0(&PurchaseByBank_Legacy_Request___c_TypeInfo, v10, v11);
    byte_4B17B2B = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( !purchaseResultArray )
    return 0;
  v13 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  if ( !PurchaseByBank_Legacy_Request___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request___c_TypeInfo, v1);
    v13 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  }
  _9__7_0 = (System_Func_object__int__o *)v13->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, v1);
      v13 = PurchaseByBank_Legacy_Request___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo,
                                              v1,
                                              v2,
                                              v3);
    System_Func_object__int____ctor(
      _9__7_0,
      v15,
      Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedChargeStoneNum_b__7_0__,
      0LL);
    static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__o *)_9__7_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v17, v18, v19, v20, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                           purchaseResultArray,
                                                           (System_Func_TSource__TResult__o *)_9__7_0,
                                                           (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
  return System_Linq_Enumerable__Sum(v23, 0LL);
}


int32_t __fastcall PurchaseByBank_Legacy_Request__GetTotalAddedFreeStoneNum(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x19
  PurchaseByBank_Legacy_Request___c_c *v13; // x0
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v15; // x21
  struct PurchaseByBank_Legacy_Request___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_IEnumerable_int__o *v23; // x0

  if ( (byte_4B17B2A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___, v1, v2);
    sub_1BCA7E0(&System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo, v4, v5);
    sub_1BCA7E0(&PurchaseByBank_Legacy_Request_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedFreeStoneNum_b__6_0__, v8, v9);
    sub_1BCA7E0(&PurchaseByBank_Legacy_Request___c_TypeInfo, v10, v11);
    byte_4B17B2A = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( !purchaseResultArray )
    return 0;
  v13 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  if ( !PurchaseByBank_Legacy_Request___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request___c_TypeInfo, v1);
    v13 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  }
  _9__6_0 = (System_Func_object__int__o *)v13->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, v1);
      v13 = PurchaseByBank_Legacy_Request___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__6_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo,
                                              v1,
                                              v2,
                                              v3);
    System_Func_object__int____ctor(
      _9__6_0,
      v15,
      Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedFreeStoneNum_b__6_0__,
      0LL);
    static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__o *)_9__6_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)_9__6_0, v17, v18, v19, v20, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                           purchaseResultArray,
                                                           (System_Func_TSource__TResult__o *)_9__6_0,
                                                           (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
  return System_Linq_Enumerable__Sum(v23, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  const MethodInfo *v21; // x3
  int64_t v22; // x2
  const MethodInfo *v23; // x3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  __int64 v30; // x1

  if ( (byte_4B17B29 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, purchaseBaseData, purchaseData);
    sub_1BCA7E0(&PurchaseByBank_Legacy_Request_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_23806/*"storeError"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_22894/*"purchaseData"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_22895/*"purchaseDataBase64"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_23569/*"signatureData"*/, v19, v20);
    byte_4B17B29 = 1;
  }
  RequestBase__addField_41862348(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22894/*"purchaseData"*/,
    purchaseData,
    *(const MethodInfo **)&storeError);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0LL) )
    RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_22895/*"purchaseDataBase64"*/, purchaseBaseData, v21);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23806/*"storeError"*/, storeError, v21);
  if ( !System_String__IsNullOrEmpty(extraToken, 0LL) )
    RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_23569/*"signatureData"*/, extraToken, v23);
  PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields,
    0LL,
    v22,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27);
  RequestBase__addBaseField((RequestBase_o *)this, v28);
  RequestBase__WriteParameter((RequestBase_o *)this, v29);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall PurchaseByBank_Legacy_Request__getParameterFileName(
        PurchaseByBank_Legacy_Request_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B17B28 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, method, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B17B28 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(1, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


int32_t __fastcall PurchaseByBank_Legacy_Request__getPurchasedBankShopId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  struct PurchaseByBank_Legacy_Request_PurchaseResult_array *purchaseResultArray; // x0

  if ( (byte_4B17B26 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_Legacy_Request_PurchaseResult___, v1, v2);
    sub_1BCA7E0(&PurchaseByBank_Legacy_Request_TypeInfo, v3, v4);
    byte_4B17B26 = 1;
  }
  purchaseResultArray = PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( purchaseResultArray )
  {
    purchaseResultArray = (struct PurchaseByBank_Legacy_Request_PurchaseResult_array *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                                         (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                                                         (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_Legacy_Request_PurchaseResult___);
    if ( purchaseResultArray )
      LODWORD(purchaseResultArray) = purchaseResultArray->bounds;
  }
  return (int)purchaseResultArray;
}


System_String_o *__fastcall PurchaseByBank_Legacy_Request__getURL(
        PurchaseByBank_Legacy_Request_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17B27 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23515/*"shop/purchaseByBank"*/, v3, v4);
    byte_4B17B27 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_23515/*"shop/purchaseByBank"*/, 0LL);
}


void __fastcall PurchaseByBank_Legacy_Request__requestCompleted(
        PurchaseByBank_Legacy_Request_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  ResponseData_o *v23; // x0
  ResponseData_o *v24; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x21
  System_Collections_Generic_Dictionary_object__object__o *v26; // x0
  void *v27; // x20
  Il2CppObject *Item; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  Il2CppObject *v31; // x21
  System_Object_array *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_Dictionary_object__object__o *fail; // x21
  System_Collections_Generic_Dictionary_object__object__o *v40; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v44; // x2
  __int64 v45; // x1
  struct NetworkManager_ResultCallbackFunc_o *v46; // x8

  if ( (byte_4B17B2D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, responseList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_PurchaseByBank_Legacy_Request_PurchaseResult___, v7, v8);
    sub_1BCA7E0(&JsonManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&PurchaseByBank_Legacy_Request_TypeInfo, v11, v12);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_23150/*"result"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_22898/*"purchaseResults"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    byte_4B17B2D = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v23 = ResponseCommandKind__SearchData(11, responseList, 0LL);
  if ( v23 )
  {
    v24 = v23;
    if ( ResponseData__checkError_41952396(v23, 0LL) )
    {
      success = (System_Collections_Generic_Dictionary_object__object__o *)v24->fields.success;
      if ( success )
      {
        v26 = (System_Collections_Generic_Dictionary_object__object__o *)v24->fields.success;
        v27 = StringLiteral_1/*""*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v26,
                (Il2CppObject *)StringLiteral_23150/*"result"*/,
                (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_11;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 success,
                 (Il2CppObject *)StringLiteral_23150/*"result"*/,
                 (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( Item )
        {
          v27 = (void *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                          Item,
                          Item->klass->vtable[4].methodPtr);
LABEL_11:
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 success,
                 (Il2CppObject *)StringLiteral_22898/*"purchaseResults"*/,
                 (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            v31 = System_Collections_Generic_Dictionary_object__object___get_Item(
                    success,
                    (Il2CppObject *)StringLiteral_22898/*"purchaseResults"*/,
                    (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v30);
            v32 = JsonManager__DeserializeArray_object_(
                    v31,
                    (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_PurchaseByBank_Legacy_Request_PurchaseResult___);
            PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray = (struct PurchaseByBank_Legacy_Request_PurchaseResult_array *)v32;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields,
              (int64_t)v32,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38);
          }
LABEL_19:
          CallBack = this->fields.CallBack;
          if ( CallBack )
          {
            m_target = CallBack->fields.m_target;
            original_method_info = CallBack->fields.original_method_info;
            v44 = *(_QWORD *)&CallBack->fields.extra_arg;
            v45 = (__int64)v27;
LABEL_23:
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64))m_target)(
              original_method_info,
              v45,
              v44);
            return;
          }
          return;
        }
LABEL_25:
        sub_1BCAA3C(Item, v29);
      }
    }
    else
    {
      fail = (System_Collections_Generic_Dictionary_object__object__o *)v24->fields.fail;
      if ( fail )
      {
        v40 = (System_Collections_Generic_Dictionary_object__object__o *)v24->fields.fail;
        v27 = (void *)StringLiteral_22292/*"ng"*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v40,
                (Il2CppObject *)StringLiteral_23150/*"result"*/,
                (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 fail,
                 (Il2CppObject *)StringLiteral_23150/*"result"*/,
                 (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( Item )
        {
          v27 = (void *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                          Item,
                          Item->klass->vtable[4].methodPtr);
          goto LABEL_19;
        }
        goto LABEL_25;
      }
    }
  }
  v46 = this->fields.CallBack;
  if ( v46 )
  {
    m_target = v46->fields.m_target;
    original_method_info = v46->fields.original_method_info;
    v44 = *(_QWORD *)&v46->fields.extra_arg;
    v45 = StringLiteral_22292/*"ng"*/;
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B17B2E & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseByBank_Legacy_Request___c_TypeInfo, v1, v2);
    byte_4B17B2E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(PurchaseByBank_Legacy_Request___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields->__9 = (struct PurchaseByBank_Legacy_Request___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.chargeStoneNum;
}


int32_t __fastcall PurchaseByBank_Legacy_Request___c___GetTotalAddedFreeStoneNum_b__6_0(
        PurchaseByBank_Legacy_Request___c_o *this,
        PurchaseByBank_Legacy_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.freeStoneNum;
}