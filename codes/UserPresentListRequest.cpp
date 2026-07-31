System_String_o *UserPresentListRequest__getMockData(UserPresentListRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A34E & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9509/*"MockUserPresentListResponse"*/);
    byte_593A34E = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9509/*"MockUserPresentListResponse"*/, 0);
}


System_String_o *UserPresentListRequest__getURL(UserPresentListRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A34D & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_23895/*"present/list"*/);
    byte_593A34D = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_23895/*"present/list"*/, 0);
}