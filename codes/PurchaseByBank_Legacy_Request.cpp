System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *__fastcall PurchaseByBank_Legacy_Request__CopyPurchaseResults(
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x0
  System_Collections_Generic_List_object__o *v3; // x19

  if ( (byte_4A5CA6B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Debug_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_PurchaseByBank_Legacy_Request_PurchaseResult___);
    sub_1B885B0(&Method_System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__TypeInfo);
    sub_1B885B0(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_1B885B0(&StringLiteral_22653/*"purchaseResultArray is null."*/);
    byte_4A5CA6B = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( purchaseResultArray )
    return (System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *)System_Linq_Enumerable__ToList_object_(
                                                                                                purchaseResultArray,
                                                                                                (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_PurchaseByBank_Legacy_Request_PurchaseResult___);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_22653/*"purchaseResultArray is null."*/, 0LL);
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult___ctor__);
  return (System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *)v3;
}


int32_t __fastcall PurchaseByBank_Legacy_Request__GetTotalAddedChargeStoneNum(const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x19
  PurchaseByBank_Legacy_Request___c_c *v2; // x0
  System_Func_object__int__o *_9__7_0; // x20
  Il2CppObject *v4; // x21
  struct PurchaseByBank_Legacy_Request___c_StaticFields *static_fields; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_IEnumerable_int__o *v8; // x0

  if ( (byte_4A5CA6A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
    sub_1B885B0(&System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    sub_1B885B0(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_1B885B0(&Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedChargeStoneNum_b__7_0__);
    sub_1B885B0(&PurchaseByBank_Legacy_Request___c_TypeInfo);
    byte_4A5CA6A = 1;
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
    _9__7_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_0,
      v4,
      Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedChargeStoneNum_b__7_0__,
      0LL);
    static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__o *)_9__7_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v6, v7);
  }
  v8 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                          purchaseResultArray,
                                                          (System_Func_TSource__TResult__o *)_9__7_0,
                                                          (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
  return System_Linq_Enumerable__Sum(v8, 0LL);
}


int32_t __fastcall PurchaseByBank_Legacy_Request__GetTotalAddedFreeStoneNum(const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x19
  PurchaseByBank_Legacy_Request___c_c *v2; // x0
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v4; // x21
  struct PurchaseByBank_Legacy_Request___c_StaticFields *static_fields; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_IEnumerable_int__o *v8; // x0

  if ( (byte_4A5CA69 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
    sub_1B885B0(&System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    sub_1B885B0(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_1B885B0(&Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedFreeStoneNum_b__6_0__);
    sub_1B885B0(&PurchaseByBank_Legacy_Request___c_TypeInfo);
    byte_4A5CA69 = 1;
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
    _9__6_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__6_0,
      v4,
      Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedFreeStoneNum_b__6_0__,
      0LL);
    static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__o *)_9__6_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v6, v7);
  }
  v8 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                          purchaseResultArray,
                                                          (System_Func_TSource__TResult__o *)_9__6_0,
                                                          (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
  return System_Linq_Enumerable__Sum(v8, 0LL);
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
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4A5CA68 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_1B885B0(&StringLiteral_23558/*"storeError"*/);
    sub_1B885B0(&StringLiteral_22650/*"purchaseData"*/);
    sub_1B885B0(&StringLiteral_22651/*"purchaseDataBase64"*/);
    sub_1B885B0(&StringLiteral_23321/*"signatureData"*/);
    byte_4A5CA68 = 1;
  }
  RequestBase__addField_41126952(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22650/*"purchaseData"*/,
    purchaseData,
    *(const MethodInfo **)&storeError);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0LL) )
    RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_22651/*"purchaseDataBase64"*/, purchaseBaseData, v11);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23558/*"storeError"*/, storeError, v11);
  if ( !System_String__IsNullOrEmpty(extraToken, 0LL) )
    RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_23321/*"signatureData"*/, extraToken, v13);
  PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields,
    0,
    v12,
    (int32_t)v13);
  RequestBase__addBaseField((RequestBase_o *)this, v14);
  RequestBase__WriteParameter((RequestBase_o *)this, v15);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall PurchaseByBank_Legacy_Request__getParameterFileName(
        PurchaseByBank_Legacy_Request_o *this,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A5CA67 & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5CA67 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(1, 0LL);
  return System_String__Concat_61718292(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


int32_t __fastcall PurchaseByBank_Legacy_Request__getPurchasedBankShopId(const MethodInfo *method)
{
  struct PurchaseByBank_Legacy_Request_PurchaseResult_array *purchaseResultArray; // x0

  if ( (byte_4A5CA65 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_Legacy_Request_PurchaseResult___);
    sub_1B885B0(&PurchaseByBank_Legacy_Request_TypeInfo);
    byte_4A5CA65 = 1;
  }
  purchaseResultArray = PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( purchaseResultArray )
  {
    purchaseResultArray = (struct PurchaseByBank_Legacy_Request_PurchaseResult_array *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                                         (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                                                         (const MethodInfo_2EA3600 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_Legacy_Request_PurchaseResult___);
    if ( purchaseResultArray )
      LODWORD(purchaseResultArray) = purchaseResultArray->bounds;
  }
  return (int)purchaseResultArray;
}


System_String_o *__fastcall PurchaseByBank_Legacy_Request__getURL(
        PurchaseByBank_Legacy_Request_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CA66 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_23269/*"shop/purchaseByBank"*/);
    byte_4A5CA66 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_23269/*"shop/purchaseByBank"*/, 0LL);
}


void __fastcall PurchaseByBank_Legacy_Request__requestCompleted(
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
  Il2CppObject *v13; // x21
  System_Object_array *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_Dictionary_object__object__o *fail; // x21
  System_Collections_Generic_Dictionary_object__object__o *v18; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v22; // x2
  __int64 v23; // x1
  struct NetworkManager_ResultCallbackFunc_o *v24; // x8

  if ( (byte_4A5CA6C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_JsonManager_DeserializeArray_PurchaseByBank_Legacy_Request_PurchaseResult___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22903/*"result"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_22654/*"purchaseResults"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CA6C = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(11, responseList, 0LL);
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
                (Il2CppObject *)StringLiteral_22903/*"result"*/,
                (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_11;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 success,
                 (Il2CppObject *)StringLiteral_22903/*"result"*/,
                 (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( Item )
        {
          v10 = (void *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                          Item,
                          Item->klass->vtable[4].methodPtr);
LABEL_11:
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 success,
                 (Il2CppObject *)StringLiteral_22654/*"purchaseResults"*/,
                 (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            v13 = System_Collections_Generic_Dictionary_object__object___get_Item(
                    success,
                    (Il2CppObject *)StringLiteral_22654/*"purchaseResults"*/,
                    (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v14 = JsonManager__DeserializeArray_object_(
                    v13,
                    (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_PurchaseByBank_Legacy_Request_PurchaseResult___);
            PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray = (struct PurchaseByBank_Legacy_Request_PurchaseResult_array *)v14;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields,
              (int32_t)v14,
              v15,
              v16);
          }
LABEL_19:
          CallBack = this->fields.CallBack;
          if ( CallBack )
          {
            m_target = CallBack->fields.m_target;
            original_method_info = CallBack->fields.original_method_info;
            v22 = *(_QWORD *)&CallBack->fields.extra_arg;
            v23 = (__int64)v10;
LABEL_23:
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64))m_target)(
              original_method_info,
              v23,
              v22);
            return;
          }
          return;
        }
LABEL_25:
        sub_1B8880C(Item, v12);
      }
    }
    else
    {
      fail = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.fail;
      if ( fail )
      {
        v18 = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.fail;
        v10 = (void *)StringLiteral_22055/*"ng"*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v18,
                (Il2CppObject *)StringLiteral_22903/*"result"*/,
                (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 fail,
                 (Il2CppObject *)StringLiteral_22903/*"result"*/,
                 (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( Item )
        {
          v10 = (void *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                          Item,
                          Item->klass->vtable[4].methodPtr);
          goto LABEL_19;
        }
        goto LABEL_25;
      }
    }
  }
  v24 = this->fields.CallBack;
  if ( v24 )
  {
    m_target = v24->fields.m_target;
    original_method_info = v24->fields.original_method_info;
    v22 = *(_QWORD *)&v24->fields.extra_arg;
    v23 = StringLiteral_22055/*"ng"*/;
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5CA6D & 1) == 0 )
  {
    sub_1B885B0(&PurchaseByBank_Legacy_Request___c_TypeInfo);
    byte_4A5CA6D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(PurchaseByBank_Legacy_Request___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields->__9 = (struct PurchaseByBank_Legacy_Request___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return x->fields.chargeStoneNum;
}


int32_t __fastcall PurchaseByBank_Legacy_Request___c___GetTotalAddedFreeStoneNum_b__6_0(
        PurchaseByBank_Legacy_Request___c_o *this,
        PurchaseByBank_Legacy_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.freeStoneNum;
}