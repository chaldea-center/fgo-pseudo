void __fastcall ProfileTopRequest___ctor(ProfileTopRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ProfileTopRequest__beginRequest(
        ProfileTopRequest_o *this,
        System_Int64_array *targetUserIds,
        const MethodInfo *method)
{
  if ( (byte_4351F11 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_22991/*"targetUserIds"*/);
    byte_4351F11 = 1;
  }
  RequestBase__addField_32336684(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22991/*"targetUserIds"*/,
    &targetUserIds->obj,
    0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


void __fastcall ProfileTopRequest__beginRequestFriendCode(
        ProfileTopRequest_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  if ( (byte_4351F12 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_19194/*"friendCode"*/);
    byte_4351F12 = 1;
  }
  RequestBase__addField_32336576((RequestBase_o *)this, (System_String_o *)StringLiteral_19194/*"friendCode"*/, friendCode, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ProfileTopRequest__getURL(ProfileTopRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4351F10 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_21902/*"profile/top"*/);
    byte_4351F10 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44758168(BaseUrl, (System_String_o *)StringLiteral_21902/*"profile/top"*/, 0LL);
}


void __fastcall ProfileTopRequest__requestCompleted(
        ProfileTopRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4351F13 & 1) == 0 )
  {
    sub_B70694(&ResponseCommandKind_TypeInfo);
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    byte_4351F13 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(18, responseList, 0LL);
  if ( v5 && ResponseData__checkError_29653500(v5, 0LL) )
    v6 = &StringLiteral_21560/*"ok"*/;
  else
    v6 = &StringLiteral_21408/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}