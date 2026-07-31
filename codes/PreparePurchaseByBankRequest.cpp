// local variable allocation has failed, the output may be wrong!
void PreparePurchaseByBankRequest__beginRequest(
        PreparePurchaseByBankRequest_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_593A291 & 1) == 0 )
  {
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    sub_21FFC50(&StringLiteral_17709/*"bankShopId"*/);
    byte_593A291 = 1;
  }
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, *(_QWORD *)&shopId);
  PurchaseBehaviour__AddPreparePurchaseShopIdsToPlayerPrefs(shopId, 0);
  UnityEngine_PlayerPrefs__Save(0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17709/*"bankShopId"*/, shopId, v5);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *PreparePurchaseByBankRequest__getURL(PreparePurchaseByBankRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A290 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_24619/*"shop/preparePurchaseByBank"*/);
    byte_593A290 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_24619/*"shop/preparePurchaseByBank"*/, 0);
}


void PreparePurchaseByBankRequest__requestCompleted(
        PreparePurchaseByBankRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  __int64 v8; // x1
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v12; // x1

  if ( (byte_593A292 & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A292 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(131, responseList, 0);
  if ( !v5
    || (v7 = v5, !ResponseData__checkError(v5, v5->fields.resCode, v6))
    || (success = (Il2CppObject *)v7->fields.success) == 0 )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v12 = StringLiteral_23290/*"ng"*/;
    goto LABEL_14;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
  v10 = JsonManager__toJson(success, 0, 0, 0);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v12 = (__int64)v10;
LABEL_14:
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      v12,
      CallBack->fields.method);
  }
}