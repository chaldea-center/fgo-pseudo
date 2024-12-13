void __fastcall UserPresentHistoryRequest___ctor(UserPresentHistoryRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserPresentHistoryRequest__getURL(
        UserPresentHistoryRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B38BA2 & 1) == 0 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_22863/*"present/history"*/, v2);
    byte_4B38BA2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62525248(BaseUrl, (System_String_o *)StringLiteral_22863/*"present/history"*/, 0LL);
}