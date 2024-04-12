void __fastcall PurchaseRequest___ctor(PurchaseRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall PurchaseRequest__beginRequest(
        PurchaseRequest_o *this,
        int32_t id,
        int32_t num,
        int32_t anotherPayFlag,
        const MethodInfo *method)
{
  if ( (byte_42AFC1D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21341/*"num"*/);
    sub_B52984(&StringLiteral_19527/*"id"*/);
    sub_B52984(&StringLiteral_16466/*"anotherPayFlag"*/);
    byte_42AFC1D = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19527/*"id"*/, id, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21341/*"num"*/, num, 0LL);
  if ( anotherPayFlag >= 1 )
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16466/*"anotherPayFlag"*/, anotherPayFlag, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall PurchaseRequest__getURL(PurchaseRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42AFC1C & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_22292/*"shop/purchase"*/);
    byte_42AFC1C = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_22292/*"shop/purchase"*/, 0LL);
}


void __fastcall PurchaseRequest__requestCompleted(
        PurchaseRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_42AFC1E & 1) == 0 )
  {
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42AFC1E = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(9, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_29724768(v5, 0LL))
    && (success = (Il2CppObject *)v6->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_21239/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}