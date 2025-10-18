void PurchaseByBank_UnityIap_Request___ctor(PurchaseByBank_UnityIap_Request_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void PurchaseByBank_UnityIap_Request__beginRequest(
        PurchaseByBank_UnityIap_Request_o *this,
        System_String_o *purchaseBaseData,
        System_String_o *purchaseData,
        int32_t storeError,
        System_String_o *extraToken,
        System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____o *callback,
        const MethodInfo *method)
{
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C44B4D & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_23720/*"storeError"*/);
    sub_1C37058(&StringLiteral_22822/*"purchaseData"*/);
    sub_1C37058(&StringLiteral_22823/*"purchaseDataBase64"*/);
    sub_1C37058(&StringLiteral_23496/*"signatureData"*/);
    byte_4C44B4D = 1;
  }
  RequestBase__addField_44247300((RequestBase_o *)this, (System_String_o *)StringLiteral_22822/*"purchaseData"*/, purchaseData, 0);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0) )
    RequestBase__addField_44247300((RequestBase_o *)this, (System_String_o *)StringLiteral_22823/*"purchaseDataBase64"*/, purchaseBaseData, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23720/*"storeError"*/, storeError, 0);
  if ( !System_String__IsNullOrEmpty(extraToken, 0) )
    RequestBase__addField_44247300((RequestBase_o *)this, (System_String_o *)StringLiteral_23496/*"signatureData"*/, extraToken, 0);
  this->fields.passPurchaseResultCallBack = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.passPurchaseResultCallBack, (int32_t)callback, v13, v14);
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *PurchaseByBank_UnityIap_Request__getURL(
        PurchaseByBank_UnityIap_Request_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C44B4C & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_23441/*"shop/purchaseByBank"*/);
    byte_4C44B4C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63561656(BaseUrl, (System_String_o *)StringLiteral_23441/*"shop/purchaseByBank"*/, 0);
}


void PurchaseByBank_UnityIap_Request__requestCompleted(
        PurchaseByBank_UnityIap_Request_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x21
  System_Collections_Generic_Dictionary_object__object__o *v8; // x0
  __int64 v9; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v11; // x21
  System_Object_array *v12; // x0
  System_Collections_Generic_Dictionary_object__object__o *fail; // x21
  RequestBase_o *v14; // x0
  System_String_o *v15; // x1

  if ( (byte_4C44B4E & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&ResponseCommandKind_TypeInfo);
    sub_1C37058(&StringLiteral_23076/*"result"*/);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    sub_1C37058(&StringLiteral_22826/*"purchaseResults"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44B4E = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(11, responseList, 0);
  if ( !v5 )
    goto LABEL_20;
  v6 = v5;
  if ( ResponseData__checkError_44242528(v5, 0) )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success;
    if ( success )
    {
      v8 = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success;
      v9 = StringLiteral_1/*""*/;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              v8,
              (Il2CppObject *)StringLiteral_23076/*"result"*/,
              (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_11;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               success,
               (Il2CppObject *)StringLiteral_23076/*"result"*/,
               (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( Item )
      {
        v9 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
               Item,
               Item->klass->vtable[3].method);
LABEL_11:
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               success,
               (Il2CppObject *)StringLiteral_22826/*"purchaseResults"*/,
               (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          v11 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  success,
                  (Il2CppObject *)StringLiteral_22826/*"purchaseResults"*/,
                  (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v12 = JsonManager__DeserializeArray_object_(
                  v11,
                  (const MethodInfo_31570C4 *)Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___);
          ActionExtensions__Call_object_(
            (System_Action_T__o *)this->fields.passPurchaseResultCallBack,
            &v12->obj,
            (const MethodInfo_3034548 *)Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____);
        }
        goto LABEL_19;
      }
LABEL_22:
      sub_1C372B4(Item);
    }
LABEL_20:
    v15 = (System_String_o *)StringLiteral_22215/*"ng"*/;
    v14 = (RequestBase_o *)this;
    goto LABEL_21;
  }
  fail = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.fail;
  if ( !fail )
    goto LABEL_20;
  v9 = StringLiteral_22215/*"ng"*/;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         fail,
         (Il2CppObject *)StringLiteral_23076/*"result"*/,
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             fail,
             (Il2CppObject *)StringLiteral_23076/*"result"*/,
             (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_22;
    v9 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
           Item,
           Item->klass->vtable[3].method);
  }
LABEL_19:
  v14 = (RequestBase_o *)this;
  v15 = (System_String_o *)v9;
LABEL_21:
  RequestBase__completed(v14, v15, 0);
}


void PurchaseByBank_UnityIap_Request_PurchaseResult___ctor(
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}