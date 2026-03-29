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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x1

  if ( (byte_4D3255E & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_24013/*"storeError"*/);
    sub_1C93AD4(&StringLiteral_23107/*"purchaseData"*/);
    sub_1C93AD4(&StringLiteral_23108/*"purchaseDataBase64"*/);
    sub_1C93AD4(&StringLiteral_23784/*"signatureData"*/);
    byte_4D3255E = 1;
  }
  RequestBase__addField_44907496(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23107/*"purchaseData"*/,
    purchaseData,
    *(const MethodInfo **)&storeError);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0) )
    RequestBase__addField_44907496((RequestBase_o *)this, (System_String_o *)StringLiteral_23108/*"purchaseDataBase64"*/, purchaseBaseData, v13);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24013/*"storeError"*/, storeError, v13);
  if ( !System_String__IsNullOrEmpty(extraToken, 0) )
    RequestBase__addField_44907496((RequestBase_o *)this, (System_String_o *)StringLiteral_23784/*"signatureData"*/, extraToken, v15);
  this->fields.passPurchaseResultCallBack = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.passPurchaseResultCallBack,
    (int32_t)callback,
    v14,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19);
  RequestBase__addBaseField((RequestBase_o *)this, v20);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *PurchaseByBank_UnityIap_Request__getURL(
        PurchaseByBank_UnityIap_Request_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D3255D & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_23726/*"shop/purchaseByBank"*/);
    byte_4D3255D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_23726/*"shop/purchaseByBank"*/, 0);
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
  __int64 v10; // x20
  Il2CppObject *Item; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  System_Object_array *v14; // x0
  System_Collections_Generic_Dictionary_object__object__o *fail; // x21
  System_Collections_Generic_Dictionary_object__object__o *v16; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  void (__fastcall *invoke_impl)(intptr_t, __int64, intptr_t); // x3
  intptr_t method_code; // x0
  intptr_t v20; // x2
  __int64 v21; // x1
  struct NetworkManager_ResultCallbackFunc_o *v22; // x8

  if ( (byte_4D3255F & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&ResponseCommandKind_TypeInfo);
    sub_1C93AD4(&StringLiteral_23365/*"result"*/);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    sub_1C93AD4(&StringLiteral_23111/*"purchaseResults"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D3255F = 1;
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
                    (const MethodInfo_3213F70 *)Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___);
            ActionExtensions__Call_object_(
              (System_Action_T__o *)this->fields.passPurchaseResultCallBack,
              &v14->obj,
              (const MethodInfo_30EBC54 *)Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____);
          }
LABEL_19:
          CallBack = this->fields.CallBack;
          if ( CallBack )
          {
            invoke_impl = (void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl;
            method_code = CallBack->fields.method_code;
            v20 = CallBack->fields.method;
            v21 = v10;
LABEL_23:
            invoke_impl(method_code, v21, v20);
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
        v16 = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.fail;
        v10 = StringLiteral_22483/*"ng"*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v16,
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
  v22 = this->fields.CallBack;
  if ( v22 )
  {
    invoke_impl = (void (__fastcall *)(intptr_t, __int64, intptr_t))v22->fields.invoke_impl;
    method_code = v22->fields.method_code;
    v20 = v22->fields.method;
    v21 = StringLiteral_22483/*"ng"*/;
    goto LABEL_23;
  }
}


void PurchaseByBank_UnityIap_Request_PurchaseResult___ctor(
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}