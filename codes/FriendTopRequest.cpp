void __fastcall FriendTopRequest___ctor(FriendTopRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall FriendTopRequest__getURL(FriendTopRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4354087 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_19193/*"friend/top"*/);
    byte_4354087 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44758168(BaseUrl, (System_String_o *)StringLiteral_19193/*"friend/top"*/, 0LL);
}


void __fastcall FriendTopRequest__requestCompleted(
        FriendTopRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4354088 & 1) == 0 )
  {
    sub_B70694(&ResponseCommandKind_TypeInfo);
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    byte_4354088 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(76, responseList, 0LL);
  if ( v5 && ResponseData__checkError_29653500(v5, 0LL) )
    v6 = &StringLiteral_21560/*"ok"*/;
  else
    v6 = &StringLiteral_21408/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}