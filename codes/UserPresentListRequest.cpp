void __fastcall UserPresentListRequest___ctor(UserPresentListRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserPresentListRequest__getMockData(
        UserPresentListRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4AB770A & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_9117/*"MockUserPresentListResponse"*/, v2);
    byte_4AB770A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9117/*"MockUserPresentListResponse"*/, 0LL);
}


System_String_o *__fastcall UserPresentListRequest__getURL(UserPresentListRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4AB7709 & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_22627/*"present/list"*/, v2);
    byte_4AB7709 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62048128(BaseUrl, (System_String_o *)StringLiteral_22627/*"present/list"*/, 0LL);
}