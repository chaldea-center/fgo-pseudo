// local variable allocation has failed, the output may be wrong!
void PurchaseByBank_UnityIap_Request__beginRequest(
        PurchaseByBank_UnityIap_Request_o *this,
        System_String_o *purchaseBaseData,
        System_String_o *purchaseData,
        int32_t storeError,
        System_String_o *extraToken,
        System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x3
  System_String_o *v14; // x2
  MethodInfo *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x1
  __int64 v21; // x1

  if ( (byte_597247F & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_24980/*"storeError"*/);
    sub_2213A60(&StringLiteral_24012/*"purchaseData"*/);
    sub_2213A60(&StringLiteral_24013/*"purchaseDataBase64"*/);
    sub_2213A60(&StringLiteral_24736/*"signatureData"*/);
    byte_597247F = 1;
  }
  RequestBase__addField_51259256(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24012/*"purchaseData"*/,
    purchaseData,
    *(const MethodInfo **)&storeError);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0) )
    RequestBase__addField_51259256((RequestBase_o *)this, (System_String_o *)StringLiteral_24013/*"purchaseDataBase64"*/, purchaseBaseData, v13);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24980/*"storeError"*/, storeError, v13);
  if ( !System_String__IsNullOrEmpty(extraToken, 0) )
    RequestBase__addField_51259256((RequestBase_o *)this, (System_String_o *)StringLiteral_24736/*"signatureData"*/, extraToken, v15);
  this->fields.passPurchaseResultCallBack = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.passPurchaseResultCallBack,
    (int32_t)callback,
    v14,
    (System_String_o *)v15,
    v16,
    v17,
    v18,
    v19);
  RequestBase__addBaseField((RequestBase_o *)this, v20);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *PurchaseByBank_UnityIap_Request__getURL(
        PurchaseByBank_UnityIap_Request_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_597247E & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_24669/*"shop/purchaseByBank"*/);
    byte_597247E = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_24669/*"shop/purchaseByBank"*/, 0);
}


void PurchaseByBank_UnityIap_Request__requestCompleted(
        PurchaseByBank_UnityIap_Request_o *this,
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
  System_Collections_Generic_Dictionary_object__object__o *fail; // x21
  System_Collections_Generic_Dictionary_object__object__o *v17; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_5972480 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_24284/*"result"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    sub_2213A60(&StringLiteral_24016/*"purchaseResults"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972480 = 1;
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
                (Il2CppObject *)StringLiteral_24284/*"result"*/,
                (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_11;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 success,
                 (Il2CppObject *)StringLiteral_24284/*"result"*/,
                 (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( Item )
        {
          v10 = (void *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                          Item,
                          Item->klass->vtable[3].method);
LABEL_11:
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 success,
                 (Il2CppObject *)StringLiteral_24016/*"purchaseResults"*/,
                 (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            v14 = System_Collections_Generic_Dictionary_object__object___get_Item(
                    success,
                    (Il2CppObject *)StringLiteral_24016/*"purchaseResults"*/,
                    (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v13);
            v15 = JsonManager__DeserializeArray_object_(
                    v14,
                    (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___);
            ActionExtensions__Call_object_(
              (System_Action_T__o *)this->fields.passPurchaseResultCallBack,
              &v15->obj,
              (const MethodInfo_36FFECC *)Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____);
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
        sub_2213CDC(Item, v12);
      }
    }
    else
    {
      fail = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.fail;
      if ( fail )
      {
        v17 = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.fail;
        v10 = (void *)StringLiteral_23336/*"ng"*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v17,
                (Il2CppObject *)StringLiteral_24284/*"result"*/,
                (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 fail,
                 (Il2CppObject *)StringLiteral_24284/*"result"*/,
                 (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
    v10 = (void *)StringLiteral_23336/*"ng"*/;
    goto LABEL_23;
  }
}


void PurchaseByBank_UnityIap_Request_PurchaseResult___ctor(
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}