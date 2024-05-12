void __fastcall ProfileTopRequest___ctor(ProfileTopRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ProfileTopRequest__beginRequest(
        ProfileTopRequest_o *this,
        System_Int64_array *targetUserIds,
        const MethodInfo *method)
{
  if ( (byte_438B5D4 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23092/*"targetUserIds"*/);
    byte_438B5D4 = 1;
  }
  RequestBase__addField_32565500(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23092/*"targetUserIds"*/,
    &targetUserIds->obj,
    0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


void __fastcall ProfileTopRequest__beginRequestFriendCode(
        ProfileTopRequest_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  if ( (byte_438B5D5 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19282/*"friendCode"*/);
    byte_438B5D5 = 1;
  }
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_19282/*"friendCode"*/, friendCode, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ProfileTopRequest__getURL(ProfileTopRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438B5D3 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_22001/*"profile/top"*/);
    byte_438B5D3 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_22001/*"profile/top"*/, 0LL);
}


void __fastcall ProfileTopRequest__requestCompleted(
        ProfileTopRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_438B5D6 & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438B5D6 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(18, responseList, 0LL);
  if ( v5 && ResponseData__checkError_30128096(v5, 0LL) )
    v6 = &StringLiteral_21657/*"ok"*/;
  else
    v6 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}