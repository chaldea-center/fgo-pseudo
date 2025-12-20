void CancelPurchaseByBankRequest___ctor(CancelPurchaseByBankRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void CancelPurchaseByBankRequest__beginRequest(
        CancelPurchaseByBankRequest_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  if ( (byte_4D2E34F & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17100/*"bankShopId"*/);
    byte_4D2E34F = 1;
  }
  this->fields.cancelShopId = shopId;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17100/*"bankShopId"*/, shopId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CancelPurchaseByBankRequest__getURL(CancelPurchaseByBankRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E34E & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_23660/*"shop/cancelPurchaseByBank"*/);
    byte_4D2E34E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_23660/*"shop/cancelPurchaseByBank"*/, 0);
}


void CancelPurchaseByBankRequest__requestCompleted(
        CancelPurchaseByBankRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  int32_t cancelShopId; // w21
  Il2CppObject *success; // x20
  System_String_o *v9; // x1

  if ( (byte_4D2E350 & 1) == 0 )
  {
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&PurchaseBehaviour_TypeInfo);
    sub_1C94098(&ResponseCommandKind_TypeInfo);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    byte_4D2E350 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(132, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_45012660(v5, 0)) && v6->fields.success )
  {
    cancelShopId = this->fields.cancelShopId;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    PurchaseBehaviour__RemovePreparePurchaseShopIdsInPlayerPrefs(cancelShopId, 0);
    success = (Il2CppObject *)v6->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v9 = (System_String_o *)StringLiteral_22424/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v9, 0);
}