void __fastcall ShopResetPurchaseNumRequest___ctor(ShopResetPurchaseNumRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopResetPurchaseNumRequest__beginRequest(
        ShopResetPurchaseNumRequest_o *this,
        int32_t shopId,
        int32_t resetItemId,
        const MethodInfo *method)
{
  __int64 v7; // x1

  if ( (byte_4AB76C3 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_22926/*"resetItemId"*/, *(_QWORD *)&shopId);
    sub_1BAB41C(&StringLiteral_23310/*"shopId"*/, v7);
    byte_4AB76C3 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23310/*"shopId"*/, shopId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22926/*"resetItemId"*/, resetItemId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ShopResetPurchaseNumRequest__getURL(
        ShopResetPurchaseNumRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4AB76C2 & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_23308/*"shop/resetPurchaseNum"*/, v2);
    byte_4AB76C2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62048128(BaseUrl, (System_String_o *)StringLiteral_23308/*"shop/resetPurchaseNum"*/, 0LL);
}


void __fastcall ShopResetPurchaseNumRequest__requestCompleted(
        ShopResetPurchaseNumRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  ResponseData_o *v9; // x20
  Il2CppObject *success; // x20
  System_String_o *v11; // x1

  if ( (byte_4AB76C4 & 1) == 0 )
  {
    sub_1BAB41C(&JsonManager_TypeInfo, responseList);
    sub_1BAB41C(&ResponseCommandKind_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_22090/*"ng"*/, v6);
    byte_4AB76C4 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(134, responseList, 0LL);
  if ( v7 && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8)) )
  {
    success = (Il2CppObject *)v9->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_22090/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0LL);
}