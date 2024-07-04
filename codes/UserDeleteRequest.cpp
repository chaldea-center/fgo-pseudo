void __fastcall UserDeleteRequest___ctor(UserDeleteRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserDeleteRequest__getURL(UserDeleteRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_48E40CE & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_24028/*"userDelete/top"*/, v2);
    byte_48E40CE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_60325748(BaseUrl, (System_String_o *)StringLiteral_24028/*"userDelete/top"*/, 0LL);
}


void __fastcall UserDeleteRequest__requestCompleted(
        UserDeleteRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_48E40CF & 1) == 0 )
  {
    sub_1B00CCC(&JsonManager_TypeInfo, responseList);
    sub_1B00CCC(&ResponseCommandKind_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_21754/*"ng"*/, v6);
    byte_48E40CF = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(112, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_39752340(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21754/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}