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
  const MethodInfo *v13; // x3
  int64_t v14; // x2
  const MethodInfo *v15; // x3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x1

  if ( (byte_4BDDF13 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_23986/*"storeError"*/);
    sub_1C21E38(&StringLiteral_23062/*"purchaseData"*/);
    sub_1C21E38(&StringLiteral_23063/*"purchaseDataBase64"*/);
    sub_1C21E38(&StringLiteral_23749/*"signatureData"*/);
    byte_4BDDF13 = 1;
  }
  RequestBase__addField_42414744(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23062/*"purchaseData"*/,
    purchaseData,
    *(const MethodInfo **)&storeError);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0LL) )
    RequestBase__addField_42414744((RequestBase_o *)this, (System_String_o *)StringLiteral_23063/*"purchaseDataBase64"*/, purchaseBaseData, v13);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23986/*"storeError"*/, storeError, v13);
  if ( !System_String__IsNullOrEmpty(extraToken, 0LL) )
    RequestBase__addField_42414744((RequestBase_o *)this, (System_String_o *)StringLiteral_23749/*"signatureData"*/, extraToken, v15);
  this->fields.passPurchaseResultCallBack = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.passPurchaseResultCallBack,
    (int64_t)callback,
    v14,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19);
  RequestBase__addBaseField((RequestBase_o *)this, v20);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall PurchaseByBank_UnityIap_Request__getURL(
        PurchaseByBank_UnityIap_Request_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDF12 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_23694/*"shop/purchaseByBank"*/);
    byte_4BDDF12 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_23694/*"shop/purchaseByBank"*/, 0LL);
}


void __fastcall PurchaseByBank_UnityIap_Request__requestCompleted(
        PurchaseByBank_UnityIap_Request_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x21
  System_Collections_Generic_Dictionary_object__object__o *v8; // x0
  void *v9; // x20
  Il2CppObject *Item; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x21
  System_Object_array *v13; // x0
  System_Collections_Generic_Dictionary_object__object__o *fail; // x21
  System_Collections_Generic_Dictionary_object__object__o *v15; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v19; // x2
  __int64 v20; // x1
  struct NetworkManager_ResultCallbackFunc_o *v21; // x8

  if ( (byte_4BDDF14 & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&StringLiteral_23322/*"result"*/);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    sub_1C21E38(&StringLiteral_23066/*"purchaseResults"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDDF14 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(11, responseList, 0LL);
  if ( v5 )
  {
    v6 = v5;
    if ( ResponseData__checkError_42505456(v5, 0LL) )
    {
      success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success;
      if ( success )
      {
        v8 = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success;
        v9 = StringLiteral_1/*""*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v8,
                (Il2CppObject *)StringLiteral_23322/*"result"*/,
                (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_11;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 success,
                 (Il2CppObject *)StringLiteral_23322/*"result"*/,
                 (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( Item )
        {
          v9 = (void *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                         Item,
                         Item->klass->vtable[4].methodPtr);
LABEL_11:
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 success,
                 (Il2CppObject *)StringLiteral_23066/*"purchaseResults"*/,
                 (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            v12 = System_Collections_Generic_Dictionary_object__object___get_Item(
                    success,
                    (Il2CppObject *)StringLiteral_23066/*"purchaseResults"*/,
                    (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v13 = JsonManager__DeserializeArray_object_(
                    v12,
                    (const MethodInfo_3017804 *)Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___);
            ActionExtensions__Call_object_(
              (System_Action_T__o *)this->fields.passPurchaseResultCallBack,
              &v13->obj,
              (const MethodInfo_2F02610 *)Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____);
          }
LABEL_19:
          CallBack = this->fields.CallBack;
          if ( CallBack )
          {
            m_target = CallBack->fields.m_target;
            original_method_info = CallBack->fields.original_method_info;
            v19 = *(_QWORD *)&CallBack->fields.extra_arg;
            v20 = (__int64)v9;
LABEL_23:
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64))m_target)(
              original_method_info,
              v20,
              v19);
            return;
          }
          return;
        }
LABEL_25:
        sub_1C22094(Item, v11);
      }
    }
    else
    {
      fail = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.fail;
      if ( fail )
      {
        v15 = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.fail;
        v9 = (void *)StringLiteral_22456/*"ng"*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v15,
                (Il2CppObject *)StringLiteral_23322/*"result"*/,
                (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 fail,
                 (Il2CppObject *)StringLiteral_23322/*"result"*/,
                 (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( Item )
        {
          v9 = (void *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                         Item,
                         Item->klass->vtable[4].methodPtr);
          goto LABEL_19;
        }
        goto LABEL_25;
      }
    }
  }
  v21 = this->fields.CallBack;
  if ( v21 )
  {
    m_target = v21->fields.m_target;
    original_method_info = v21->fields.original_method_info;
    v19 = *(_QWORD *)&v21->fields.extra_arg;
    v20 = StringLiteral_22456/*"ng"*/;
    goto LABEL_23;
  }
}


void __fastcall PurchaseByBank_UnityIap_Request_PurchaseResult___ctor(
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}