void __fastcall UserPresentHistoryRequest___ctor(UserPresentHistoryRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserPresentHistoryRequest__getURL(
        UserPresentHistoryRequest_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E6A5B & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_21810/*"present/history"*/, v4, v5, v6);
    byte_42E6A5B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_21810/*"present/history"*/, 0LL);
}