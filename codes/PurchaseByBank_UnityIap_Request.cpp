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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1

  if ( (byte_4A5CA6F & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_23558/*"storeError"*/);
    sub_1B885B0(&StringLiteral_22650/*"purchaseData"*/);
    sub_1B885B0(&StringLiteral_22651/*"purchaseDataBase64"*/);
    sub_1B885B0(&StringLiteral_23321/*"signatureData"*/);
    byte_4A5CA6F = 1;
  }
  RequestBase__addField_41126952(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22650/*"purchaseData"*/,
    purchaseData,
    *(const MethodInfo **)&storeError);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0LL) )
    RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_22651/*"purchaseDataBase64"*/, purchaseBaseData, v13);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23558/*"storeError"*/, storeError, v13);
  if ( !System_String__IsNullOrEmpty(extraToken, 0LL) )
    RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_23321/*"signatureData"*/, extraToken, v15);
  this->fields.passPurchaseResultCallBack = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.passPurchaseResultCallBack,
    (int32_t)callback,
    v14,
    (int32_t)v15);
  RequestBase__addBaseField((RequestBase_o *)this, v16);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall PurchaseByBank_UnityIap_Request__getURL(
        PurchaseByBank_UnityIap_Request_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CA6E & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_23269/*"shop/purchaseByBank"*/);
    byte_4A5CA6E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_23269/*"shop/purchaseByBank"*/, 0LL);
}


void __fastcall PurchaseByBank_UnityIap_Request__requestCompleted(
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
  Il2CppObject *v13; // x21
  System_Object_array *v14; // x0
  System_Collections_Generic_Dictionary_object__object__o *fail; // x21
  System_Collections_Generic_Dictionary_object__object__o *v16; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v20; // x2
  __int64 v21; // x1
  struct NetworkManager_ResultCallbackFunc_o *v22; // x8

  if ( (byte_4A5CA70 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22903/*"result"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_22654/*"purchaseResults"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CA70 = 1;
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
                    (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___);
            ActionExtensions__Call_object_(
              (System_Action_T__o *)this->fields.passPurchaseResultCallBack,
              &v14->obj,
              (const MethodInfo_2DD5858 *)Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____);
          }
LABEL_19:
          CallBack = this->fields.CallBack;
          if ( CallBack )
          {
            m_target = CallBack->fields.m_target;
            original_method_info = CallBack->fields.original_method_info;
            v20 = *(_QWORD *)&CallBack->fields.extra_arg;
            v21 = (__int64)v10;
LABEL_23:
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64))m_target)(
              original_method_info,
              v21,
              v20);
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
        v16 = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.fail;
        v10 = (void *)StringLiteral_22055/*"ng"*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v16,
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
  v22 = this->fields.CallBack;
  if ( v22 )
  {
    m_target = v22->fields.m_target;
    original_method_info = v22->fields.original_method_info;
    v20 = *(_QWORD *)&v22->fields.extra_arg;
    v21 = StringLiteral_22055/*"ng"*/;
    goto LABEL_23;
  }
}


void __fastcall PurchaseByBank_UnityIap_Request_PurchaseResult___ctor(
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}