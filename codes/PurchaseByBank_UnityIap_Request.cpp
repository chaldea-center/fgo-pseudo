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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1

  if ( (byte_4A2F83B & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, purchaseBaseData);
    sub_1B761C0(&StringLiteral_23546/*"storeError"*/, v13);
    sub_1B761C0(&StringLiteral_22640/*"purchaseData"*/, v14);
    sub_1B761C0(&StringLiteral_22641/*"purchaseDataBase64"*/, v15);
    sub_1B761C0(&StringLiteral_23309/*"signatureData"*/, v16);
    byte_4A2F83B = 1;
  }
  RequestBase__addField_40941128(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22640/*"purchaseData"*/,
    purchaseData,
    *(const MethodInfo **)&storeError);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0LL) )
    RequestBase__addField_40941128((RequestBase_o *)this, (System_String_o *)StringLiteral_22641/*"purchaseDataBase64"*/, purchaseBaseData, v17);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23546/*"storeError"*/, storeError, v17);
  if ( !System_String__IsNullOrEmpty(extraToken, 0LL) )
    RequestBase__addField_40941128((RequestBase_o *)this, (System_String_o *)StringLiteral_23309/*"signatureData"*/, extraToken, v19);
  this->fields.passPurchaseResultCallBack = callback;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.passPurchaseResultCallBack,
    (int32_t)callback,
    v18,
    (int32_t)v19);
  RequestBase__addBaseField((RequestBase_o *)this, v20);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall PurchaseByBank_UnityIap_Request__getURL(
        PurchaseByBank_UnityIap_Request_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A2F83A & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_23258/*"shop/purchaseByBank"*/, v2);
    byte_4A2F83A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61535060(BaseUrl, (System_String_o *)StringLiteral_23258/*"shop/purchaseByBank"*/, 0LL);
}


void __fastcall PurchaseByBank_UnityIap_Request__requestCompleted(
        PurchaseByBank_UnityIap_Request_o *this,
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
  const MethodInfo *v15; // x2
  ResponseData_o *v16; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x21
  System_Collections_Generic_Dictionary_object__object__o *v18; // x0
  void *v19; // x20
  Il2CppObject *Item; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x21
  System_Object_array *v23; // x0
  System_Collections_Generic_Dictionary_object__object__o *fail; // x21
  System_Collections_Generic_Dictionary_object__object__o *v25; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v29; // x2
  __int64 v30; // x1
  struct NetworkManager_ResultCallbackFunc_o *v31; // x8

  if ( (byte_4A2F83C & 1) == 0 )
  {
    sub_1B761C0(&Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____, responseList);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B761C0(&Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___, v7);
    sub_1B761C0(&JsonManager_TypeInfo, v8);
    sub_1B761C0(&ResponseCommandKind_TypeInfo, v9);
    sub_1B761C0(&StringLiteral_22893/*"result"*/, v10);
    sub_1B761C0(&StringLiteral_22046/*"ng"*/, v11);
    sub_1B761C0(&StringLiteral_22644/*"purchaseResults"*/, v12);
    sub_1B761C0(&StringLiteral_1/*""*/, v13);
    byte_4A2F83C = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v14 = ResponseCommandKind__SearchData(11, responseList, 0LL);
  if ( v14 )
  {
    v16 = v14;
    if ( ResponseData__checkError(v14, v14->fields.resCode, v15) )
    {
      success = (System_Collections_Generic_Dictionary_object__object__o *)v16->fields.success;
      if ( success )
      {
        v18 = (System_Collections_Generic_Dictionary_object__object__o *)v16->fields.success;
        v19 = StringLiteral_1/*""*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v18,
                (Il2CppObject *)StringLiteral_22893/*"result"*/,
                (const MethodInfo_31A5F24 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_11;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 success,
                 (Il2CppObject *)StringLiteral_22893/*"result"*/,
                 (const MethodInfo_31A5CB0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( Item )
        {
          v19 = (void *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                          Item,
                          Item->klass->vtable[4].methodPtr);
LABEL_11:
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 success,
                 (Il2CppObject *)StringLiteral_22644/*"purchaseResults"*/,
                 (const MethodInfo_31A5F24 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            v22 = System_Collections_Generic_Dictionary_object__object___get_Item(
                    success,
                    (Il2CppObject *)StringLiteral_22644/*"purchaseResults"*/,
                    (const MethodInfo_31A5CB0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v23 = JsonManager__DeserializeArray_object_(
                    v22,
                    (const MethodInfo_2EC89B0 *)Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___);
            ActionExtensions__Call_object_(
              (System_Action_T__o *)this->fields.passPurchaseResultCallBack,
              &v23->obj,
              (const MethodInfo_2DB9DF8 *)Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____);
          }
LABEL_19:
          CallBack = this->fields.CallBack;
          if ( CallBack )
          {
            m_target = CallBack->fields.m_target;
            original_method_info = CallBack->fields.original_method_info;
            v29 = *(_QWORD *)&CallBack->fields.extra_arg;
            v30 = (__int64)v19;
LABEL_23:
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64))m_target)(
              original_method_info,
              v30,
              v29);
            return;
          }
          return;
        }
LABEL_25:
        sub_1B7641C(Item, v21);
      }
    }
    else
    {
      fail = (System_Collections_Generic_Dictionary_object__object__o *)v16->fields.fail;
      if ( fail )
      {
        v25 = (System_Collections_Generic_Dictionary_object__object__o *)v16->fields.fail;
        v19 = (void *)StringLiteral_22046/*"ng"*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v25,
                (Il2CppObject *)StringLiteral_22893/*"result"*/,
                (const MethodInfo_31A5F24 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 fail,
                 (Il2CppObject *)StringLiteral_22893/*"result"*/,
                 (const MethodInfo_31A5CB0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( Item )
        {
          v19 = (void *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                          Item,
                          Item->klass->vtable[4].methodPtr);
          goto LABEL_19;
        }
        goto LABEL_25;
      }
    }
  }
  v31 = this->fields.CallBack;
  if ( v31 )
  {
    m_target = v31->fields.m_target;
    original_method_info = v31->fields.original_method_info;
    v29 = *(_QWORD *)&v31->fields.extra_arg;
    v30 = StringLiteral_22046/*"ng"*/;
    goto LABEL_23;
  }
}


void __fastcall PurchaseByBank_UnityIap_Request_PurchaseResult___ctor(
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}