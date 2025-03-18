void __fastcall UserPresentListRequest___ctor(UserPresentListRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserPresentListRequest__getMockData(
        UserPresentListRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4C23A27 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_9299/*"Non-static method requires a target."*/, v2);
    byte_4C23A27 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9299/*"Non-static method requires a target."*/, 0LL);
}


System_String_o *__fastcall UserPresentListRequest__getURL(UserPresentListRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4C23A26 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_23058/*"smj-NO"*/, v2);
    byte_4C23A26 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_23058/*"smj-NO"*/, 0LL);
}