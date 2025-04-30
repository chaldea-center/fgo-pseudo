void __fastcall BankStatusRequest___ctor(BankStatusRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall BankStatusRequest__beginRequest(BankStatusRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A4FDF7 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_22388/*"platformType"*/, method);
    byte_4A4FDF7 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22388/*"platformType"*/, 2, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BankStatusRequest__getURL(BankStatusRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A4FDF6 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_23113/*"shop/bankStatus"*/, v2);
    byte_4A4FDF6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61645176(BaseUrl, (System_String_o *)StringLiteral_23113/*"shop/bankStatus"*/, 0LL);
}


void __fastcall BankStatusRequest__requestCompleted(
        BankStatusRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_4A4FDF8 & 1) == 0 )
  {
    sub_1B863B8(&JsonManager_TypeInfo, responseList);
    sub_1B863B8(&ResponseCommandKind_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v6);
    byte_4A4FDF8 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(61, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_42282948(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21893/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}