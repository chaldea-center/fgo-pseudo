// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseByBank_UnityIap_Request__beginRequest(
        PurchaseByBank_UnityIap_Request_o *this,
        System_String_o *purchaseBaseData,
        System_String_o *purchaseData,
        int32_t storeError,
        System_String_o *extraToken,
        System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____o *callback,
        const MethodInfo *method)
{
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
  __int64 v29; // x1

  if ( (byte_4B17B30 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, purchaseBaseData, purchaseData);
    sub_1BCA7E0(&StringLiteral_23806/*"storeError"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_22894/*"purchaseData"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_22895/*"purchaseDataBase64"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_23569/*"signatureData"*/, v19, v20);
    byte_4B17B30 = 1;
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
  this->fields.passPurchaseResultCallBack = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.passPurchaseResultCallBack,
    (int64_t)callback,
    v22,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27);
  RequestBase__addBaseField((RequestBase_o *)this, v28);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall PurchaseByBank_UnityIap_Request__getURL(
        PurchaseByBank_UnityIap_Request_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17B2F & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23515/*"shop/purchaseByBank"*/, v3, v4);
    byte_4B17B2F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_23515/*"shop/purchaseByBank"*/, 0LL);
}


void __fastcall PurchaseByBank_UnityIap_Request__requestCompleted(
        PurchaseByBank_UnityIap_Request_o *this,
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
  System_Collections_Generic_Dictionary_object__object__o *fail; // x21
  System_Collections_Generic_Dictionary_object__object__o *v34; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v38; // x2
  __int64 v39; // x1
  struct NetworkManager_ResultCallbackFunc_o *v40; // x8

  if ( (byte_4B17B31 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____, responseList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___, v9, v10);
    sub_1BCA7E0(&JsonManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_23150/*"result"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_22898/*"purchaseResults"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    byte_4B17B31 = 1;
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
                    (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___);
            ActionExtensions__Call_object_(
              (System_Action_T__o *)this->fields.passPurchaseResultCallBack,
              &v32->obj,
              (const MethodInfo_2E65588 *)Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____);
          }
LABEL_19:
          CallBack = this->fields.CallBack;
          if ( CallBack )
          {
            m_target = CallBack->fields.m_target;
            original_method_info = CallBack->fields.original_method_info;
            v38 = *(_QWORD *)&CallBack->fields.extra_arg;
            v39 = (__int64)v27;
LABEL_23:
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64))m_target)(
              original_method_info,
              v39,
              v38);
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
        v34 = (System_Collections_Generic_Dictionary_object__object__o *)v24->fields.fail;
        v27 = (void *)StringLiteral_22292/*"ng"*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v34,
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
  v40 = this->fields.CallBack;
  if ( v40 )
  {
    m_target = v40->fields.m_target;
    original_method_info = v40->fields.original_method_info;
    v38 = *(_QWORD *)&v40->fields.extra_arg;
    v39 = StringLiteral_22292/*"ng"*/;
    goto LABEL_23;
  }
}


void __fastcall PurchaseByBank_UnityIap_Request_PurchaseResult___ctor(
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}