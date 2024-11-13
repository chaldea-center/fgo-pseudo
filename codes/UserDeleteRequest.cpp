void __fastcall UserDeleteRequest___ctor(UserDeleteRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserDeleteRequest__getURL(UserDeleteRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17BC8 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_24638/*"userDelete/top"*/, v3, v4);
    byte_4B17BC8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_24638/*"userDelete/top"*/, 0LL);
}


void __fastcall UserDeleteRequest__requestCompleted(
        UserDeleteRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  const MethodInfo *v10; // x2
  ResponseData_o *v11; // x20
  __int64 v12; // x1
  Il2CppObject *success; // x20
  System_String_o *v14; // x1

  if ( (byte_4B17BC9 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17BC9 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(112, responseList, 0LL);
  if ( v9 && (v11 = v9, ResponseData__checkError(v9, v9->fields.resCode, v10)) )
  {
    success = (Il2CppObject *)v11->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v12);
    v14 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v14 = (System_String_o *)StringLiteral_22292/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v14, 0LL);
}