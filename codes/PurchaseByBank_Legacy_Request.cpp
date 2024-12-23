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

  if ( (byte_4B6854A & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Debug_TypeInfo, v1);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_PurchaseByBank_Legacy_Request_PurchaseResult___, v2);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult___ctor__, v3);
    sub_1BE4ACC(&System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__TypeInfo, v4);
    sub_1BE4ACC(&PurchaseByBank_Legacy_Request_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_22975/*"purchaseResultArray is null."*/, v6);
    byte_4B6854A = 1;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( purchaseResultArray )
    return (System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *)System_Linq_Enumerable__ToList_object_(
                                                                                                purchaseResultArray,
                                                                                                (const MethodInfo_2F96830 *)Method_System_Linq_Enumerable_ToList_PurchaseByBank_Legacy_Request_PurchaseResult___);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_22975/*"purchaseResultArray is null."*/, 0LL);
  v9 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult___ctor__);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_IEnumerable_int__o *v17; // x0

  if ( (byte_4B68549 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___, v1);
    sub_1BE4ACC(&System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo, v2);
    sub_1BE4ACC(&PurchaseByBank_Legacy_Request_TypeInfo, v3);
    sub_1BE4ACC(&Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedChargeStoneNum_b__7_0__, v4);
    sub_1BE4ACC(&PurchaseByBank_Legacy_Request___c_TypeInfo, v5);
    byte_4B68549 = 1;
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
    _9__7_0 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_0,
      v9,
      Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedChargeStoneNum_b__7_0__,
      0LL);
    static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__o *)_9__7_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                           purchaseResultArray,
                                                           (System_Func_TSource__TResult__o *)_9__7_0,
                                                           (const MethodInfo_2F89FCC *)Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
  return System_Linq_Enumerable__Sum(v17, 0LL);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_IEnumerable_int__o *v17; // x0

  if ( (byte_4B68548 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___, v1);
    sub_1BE4ACC(&System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo, v2);
    sub_1BE4ACC(&PurchaseByBank_Legacy_Request_TypeInfo, v3);
    sub_1BE4ACC(&Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedFreeStoneNum_b__6_0__, v4);
    sub_1BE4ACC(&PurchaseByBank_Legacy_Request___c_TypeInfo, v5);
    byte_4B68548 = 1;
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
    _9__6_0 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__6_0,
      v9,
      Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedFreeStoneNum_b__6_0__,
      0LL);
    static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__o *)_9__6_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)_9__6_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                           purchaseResultArray,
                                                           (System_Func_TSource__TResult__o *)_9__6_0,
                                                           (const MethodInfo_2F89FCC *)Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
  return System_Linq_Enumerable__Sum(v17, 0LL);
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
  int64_t v17; // x2
  const MethodInfo *v18; // x3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1

  if ( (byte_4B68547 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, purchaseBaseData);
    sub_1BE4ACC(&PurchaseByBank_Legacy_Request_TypeInfo, v11);
    sub_1BE4ACC(&StringLiteral_23893/*"storeError"*/, v12);
    sub_1BE4ACC(&StringLiteral_22972/*"purchaseData"*/, v13);
    sub_1BE4ACC(&StringLiteral_22973/*"purchaseDataBase64"*/, v14);
    sub_1BE4ACC(&StringLiteral_23656/*"signatureData"*/, v15);
    byte_4B68547 = 1;
  }
  RequestBase__addField_42104408(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22972/*"purchaseData"*/,
    purchaseData,
    *(const MethodInfo **)&storeError);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0LL) )
    RequestBase__addField_42104408((RequestBase_o *)this, (System_String_o *)StringLiteral_22973/*"purchaseDataBase64"*/, purchaseBaseData, v16);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23893/*"storeError"*/, storeError, v16);
  if ( !System_String__IsNullOrEmpty(extraToken, 0LL) )
    RequestBase__addField_42104408((RequestBase_o *)this, (System_String_o *)StringLiteral_23656/*"signatureData"*/, extraToken, v18);
  PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields,
    0LL,
    v17,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22);
  RequestBase__addBaseField((RequestBase_o *)this, v23);
  RequestBase__WriteParameter((RequestBase_o *)this, v24);
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

  if ( (byte_4B68546 & 1) == 0 )
  {
    sub_1BE4ACC(&AndroidUtil_TypeInfo, method);
    sub_1BE4ACC(&DatFileName_TypeInfo, v2);
    sub_1BE4ACC(&StringLiteral_1120/*"/"*/, v3);
    byte_4B68546 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(1, 0LL);
  return System_String__Concat_62710068(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


int32_t __fastcall PurchaseByBank_Legacy_Request__getPurchasedBankShopId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct PurchaseByBank_Legacy_Request_PurchaseResult_array *purchaseResultArray; // x0

  if ( (byte_4B68544 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_Legacy_Request_PurchaseResult___, v1);
    sub_1BE4ACC(&PurchaseByBank_Legacy_Request_TypeInfo, v2);
    byte_4B68544 = 1;
  }
  purchaseResultArray = PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  if ( purchaseResultArray )
  {
    purchaseResultArray = (struct PurchaseByBank_Legacy_Request_PurchaseResult_array *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                                         (System_Collections_Generic_IEnumerable_TSource__o *)purchaseResultArray,
                                                                                         (const MethodInfo_2F7B9A0 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_Legacy_Request_PurchaseResult___);
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

  if ( (byte_4B68545 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_23601/*"shop/purchaseByBank"*/, v2);
    byte_4B68545 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62698808(BaseUrl, (System_String_o *)StringLiteral_23601/*"shop/purchaseByBank"*/, 0LL);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_Generic_Dictionary_object__object__o *fail; // x21
  System_Collections_Generic_Dictionary_object__object__o *v30; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v34; // x2
  __int64 v35; // x1
  struct NetworkManager_ResultCallbackFunc_o *v36; // x8

  if ( (byte_4B6854B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, responseList);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1BE4ACC(&Method_JsonManager_DeserializeArray_PurchaseByBank_Legacy_Request_PurchaseResult___, v6);
    sub_1BE4ACC(&JsonManager_TypeInfo, v7);
    sub_1BE4ACC(&PurchaseByBank_Legacy_Request_TypeInfo, v8);
    sub_1BE4ACC(&ResponseCommandKind_TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_23229/*"result"*/, v10);
    sub_1BE4ACC(&StringLiteral_22370/*"ng"*/, v11);
    sub_1BE4ACC(&StringLiteral_22976/*"purchaseResults"*/, v12);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v13);
    byte_4B6854B = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v14 = ResponseCommandKind__SearchData(11, responseList, 0LL);
  if ( v14 )
  {
    v15 = v14;
    if ( ResponseData__checkError_42194996(v14, 0LL) )
    {
      success = (System_Collections_Generic_Dictionary_object__object__o *)v15->fields.success;
      if ( success )
      {
        v17 = (System_Collections_Generic_Dictionary_object__object__o *)v15->fields.success;
        v18 = StringLiteral_1/*""*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v17,
                (Il2CppObject *)StringLiteral_23229/*"result"*/,
                (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_11;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 success,
                 (Il2CppObject *)StringLiteral_23229/*"result"*/,
                 (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( Item )
        {
          v18 = (void *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                          Item,
                          Item->klass->vtable[4].methodPtr);
LABEL_11:
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 success,
                 (Il2CppObject *)StringLiteral_22976/*"purchaseResults"*/,
                 (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            v21 = System_Collections_Generic_Dictionary_object__object___get_Item(
                    success,
                    (Il2CppObject *)StringLiteral_22976/*"purchaseResults"*/,
                    (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v22 = JsonManager__DeserializeArray_object_(
                    v21,
                    (const MethodInfo_2FC092C *)Method_JsonManager_DeserializeArray_PurchaseByBank_Legacy_Request_PurchaseResult___);
            PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray = (struct PurchaseByBank_Legacy_Request_PurchaseResult_array *)v22;
            sub_1BE4A70(
              (PartyOrganizationUtility_o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields,
              (int64_t)v22,
              v23,
              v24,
              v25,
              v26,
              v27,
              v28);
          }
LABEL_19:
          CallBack = this->fields.CallBack;
          if ( CallBack )
          {
            m_target = CallBack->fields.m_target;
            original_method_info = CallBack->fields.original_method_info;
            v34 = *(_QWORD *)&CallBack->fields.extra_arg;
            v35 = (__int64)v18;
LABEL_23:
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64))m_target)(
              original_method_info,
              v35,
              v34);
            return;
          }
          return;
        }
LABEL_25:
        sub_1BE4D28(Item, v20);
      }
    }
    else
    {
      fail = (System_Collections_Generic_Dictionary_object__object__o *)v15->fields.fail;
      if ( fail )
      {
        v30 = (System_Collections_Generic_Dictionary_object__object__o *)v15->fields.fail;
        v18 = (void *)StringLiteral_22370/*"ng"*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v30,
                (Il2CppObject *)StringLiteral_23229/*"result"*/,
                (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 fail,
                 (Il2CppObject *)StringLiteral_23229/*"result"*/,
                 (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  v36 = this->fields.CallBack;
  if ( v36 )
  {
    m_target = v36->fields.m_target;
    original_method_info = v36->fields.original_method_info;
    v34 = *(_QWORD *)&v36->fields.extra_arg;
    v35 = StringLiteral_22370/*"ng"*/;
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6854C & 1) == 0 )
  {
    sub_1BE4ACC(&PurchaseByBank_Legacy_Request___c_TypeInfo, v1);
    byte_4B6854C = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(PurchaseByBank_Legacy_Request___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields->__9 = (struct PurchaseByBank_Legacy_Request___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, 0LL);
  return x->fields.chargeStoneNum;
}


int32_t __fastcall PurchaseByBank_Legacy_Request___c___GetTotalAddedFreeStoneNum_b__6_0(
        PurchaseByBank_Legacy_Request___c_o *this,
        PurchaseByBank_Legacy_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BE4D28(this, 0LL);
  return x->fields.freeStoneNum;
}