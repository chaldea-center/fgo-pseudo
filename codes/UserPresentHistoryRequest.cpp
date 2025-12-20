System_String_o *UserPresentHistoryRequest__getURL(UserPresentHistoryRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E509 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_22981/*"present/history"*/);
    byte_4D2E509 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_22981/*"present/history"*/, 0);
}