void __fastcall CancelPurchaseByBankRequest___ctor(CancelPurchaseByBankRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CancelPurchaseByBankRequest__beginRequest(
        CancelPurchaseByBankRequest_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  if ( (byte_4A0A380 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_16992/*"bankShopId"*/, *(_QWORD *)&shopId);
    byte_4A0A380 = 1;
  }
  this->fields.cancelShopId = shopId;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16992/*"bankShopId"*/, shopId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CancelPurchaseByBankRequest__getURL(
        CancelPurchaseByBankRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A0A37F & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_23184/*"shop/cancelPurchaseByBank"*/, v2);
    byte_4A0A37F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61419468(BaseUrl, (System_String_o *)StringLiteral_23184/*"shop/cancelPurchaseByBank"*/, 0LL);
}


void __fastcall CancelPurchaseByBankRequest__requestCompleted(
        CancelPurchaseByBankRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ResponseData_o *v8; // x0
  ResponseData_o *v9; // x20
  int32_t cancelShopId; // w21
  Il2CppObject *success; // x20
  System_String_o *v12; // x1

  if ( (byte_4A0A381 & 1) == 0 )
  {
    sub_1B686D4(&JsonManager_TypeInfo, responseList);
    sub_1B686D4(&PurchaseBehaviour_TypeInfo, v5);
    sub_1B686D4(&ResponseCommandKind_TypeInfo, v6);
    sub_1B686D4(&StringLiteral_21981/*"ng"*/, v7);
    byte_4A0A381 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v8 = ResponseCommandKind__SearchData(132, responseList, 0LL);
  if ( v8 && (v9 = v8, ResponseData__checkError_40916448(v8, 0LL)) && v9->fields.success )
  {
    cancelShopId = this->fields.cancelShopId;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    PurchaseBehaviour__RemovePreparePurchaseShopIdsInPlayerPrefs(cancelShopId, 0LL);
    success = (Il2CppObject *)v9->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v12 = (System_String_o *)StringLiteral_21981/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v12, 0LL);
}