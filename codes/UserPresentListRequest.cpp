void __fastcall UserPresentListRequest___ctor(UserPresentListRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserPresentListRequest__getMockData(
        UserPresentListRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5CB10 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9112/*"MockUserPresentListResponse"*/);
    byte_4A5CB10 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9112/*"MockUserPresentListResponse"*/, 0LL);
}


System_String_o *__fastcall UserPresentListRequest__getURL(UserPresentListRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CB0F & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22589/*"present/list"*/);
    byte_4A5CB0F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_22589/*"present/list"*/, 0LL);
}