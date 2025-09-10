System_String_o *UserPresentListRequest__getMockData(UserPresentListRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C28EF6 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_9136/*"MockUserPresentListResponse"*/);
    byte_4C28EF6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9136/*"MockUserPresentListResponse"*/, 0);
}


System_String_o *UserPresentListRequest__getURL(UserPresentListRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28EF5 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_22740/*"present/list"*/);
    byte_4C28EF5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_22740/*"present/list"*/, 0);
}