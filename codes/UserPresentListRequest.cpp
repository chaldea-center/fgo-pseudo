System_String_o *UserPresentListRequest__getMockData(UserPresentListRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4E792FA & 1) == 0 )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_9252/*"MockUserPresentListResponse"*/);
    byte_4E792FA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9252/*"MockUserPresentListResponse"*/, 0);
}


System_String_o *UserPresentListRequest__getURL(UserPresentListRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4E792F9 & 1) == 0 )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_23223/*"present/list"*/);
    byte_4E792F9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65562772(BaseUrl, (System_String_o *)StringLiteral_23223/*"present/list"*/, 0);
}