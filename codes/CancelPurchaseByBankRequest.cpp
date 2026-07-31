void CancelPurchaseByBankRequest___ctor(CancelPurchaseByBankRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void CancelPurchaseByBankRequest__beginRequest(
        CancelPurchaseByBankRequest_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  System_String_o *v5; // x1

  if ( (byte_593A18C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17709/*"bankShopId"*/);
    byte_593A18C = 1;
  }
  v5 = (System_String_o *)StringLiteral_17709/*"bankShopId"*/;
  *((_DWORD *)&this->fields.shouldShowConnect + 1) = shopId;
  RequestBase__addField((RequestBase_o *)this, v5, shopId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CancelPurchaseByBankRequest__getURL(CancelPurchaseByBankRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A18B & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_24616/*"shop/cancelPurchaseByBank"*/);
    byte_593A18B = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_24616/*"shop/cancelPurchaseByBank"*/, 0);
}


void CancelPurchaseByBankRequest__requestCompleted(
        CancelPurchaseByBankRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  __int64 v7; // x1
  int32_t v8; // w21
  __int64 v9; // x1
  Il2CppObject *success; // x20
  System_String_o *v11; // x1

  if ( (byte_593A18D & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A18D = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(132, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_51190916(v5, 0)) && v6->fields.success )
  {
    v8 = *((_DWORD *)&this->fields.shouldShowConnect + 1);
    if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v7);
    PurchaseBehaviour__RemovePreparePurchaseShopIdsInPlayerPrefs(v8, 0);
    success = (Il2CppObject *)v6->fields.success;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v9);
    v11 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_23290/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0);
}