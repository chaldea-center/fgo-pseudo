void __fastcall ProfileTopRequest___ctor(ProfileTopRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ProfileTopRequest__beginRequest(
        ProfileTopRequest_o *this,
        System_Int64_array *targetUserIds,
        const MethodInfo *method)
{
  if ( (byte_4187A57 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22615/*"targetUserIds"*/, targetUserIds);
    byte_4187A57 = 1;
  }
  RequestBase__addField_31052036(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22615/*"targetUserIds"*/,
    &targetUserIds->obj,
    0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


void __fastcall ProfileTopRequest__beginRequestFriendCode(
        ProfileTopRequest_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  if ( (byte_4187A58 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18901/*"friendCode"*/, friendCode);
    byte_4187A58 = 1;
  }
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_18901/*"friendCode"*/, friendCode, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ProfileTopRequest__getURL(ProfileTopRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4187A56 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_21546/*"profile/top"*/, v2);
    byte_4187A56 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_21546/*"profile/top"*/, 0LL);
}


void __fastcall ProfileTopRequest__requestCompleted(
        ProfileTopRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4187A59 & 1) == 0 )
  {
    sub_B2C35C(&ResponseCommandKind_TypeInfo, responseList);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_4187A59 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(18, responseList, 0LL);
  if ( v7 && ResponseData__checkError_31019724(v7, 0LL) )
    v8 = &StringLiteral_21218/*"ok"*/;
  else
    v8 = &StringLiteral_21068/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}