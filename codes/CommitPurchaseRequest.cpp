void CommitPurchaseRequest___ctor(CommitPurchaseRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void CommitPurchaseRequest__beginRequest(
        CommitPurchaseRequest_o *this,
        System_String_o *purchaseToken,
        const MethodInfo *method)
{
  if ( (byte_4C3948E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22824/*"purchaseToken"*/);
    byte_4C3948E = 1;
  }
  RequestBase__addField_44145196((RequestBase_o *)this, (System_String_o *)StringLiteral_22824/*"purchaseToken"*/, purchaseToken, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CommitPurchaseRequest__getURL(CommitPurchaseRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C3948D & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_23430/*"shop/CommitPurchase"*/);
    byte_4C3948D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63518544(BaseUrl, (System_String_o *)StringLiteral_23430/*"shop/CommitPurchase"*/, 0);
}


void CommitPurchaseRequest__requestCompleted(
        CommitPurchaseRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4C3948F & 1) == 0 )
  {
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&ResponseCommandKind_TypeInfo);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    byte_4C3948F = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(9, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44140424(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22212/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}