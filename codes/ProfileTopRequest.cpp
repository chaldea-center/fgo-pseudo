void ProfileTopRequest___ctor(ProfileTopRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void ProfileTopRequest__beginRequest(
        ProfileTopRequest_o *this,
        System_Int64_array *targetUserIds,
        const MethodInfo *method)
{
  if ( (byte_4C44B3F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_24003/*"targetUserIds"*/);
    byte_4C44B3F = 1;
  }
  RequestBase__addField_44247404((RequestBase_o *)this, (System_String_o *)StringLiteral_24003/*"targetUserIds"*/, &targetUserIds->obj, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


void ProfileTopRequest__beginRequestFriendCode(
        ProfileTopRequest_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  if ( (byte_4C44B40 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19678/*"friendCode"*/);
    byte_4C44B40 = 1;
  }
  RequestBase__addField_44247300((RequestBase_o *)this, (System_String_o *)StringLiteral_19678/*"friendCode"*/, friendCode, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *ProfileTopRequest__getURL(ProfileTopRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C44B3E & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_22792/*"profile/top"*/);
    byte_4C44B3E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63561656(BaseUrl, (System_String_o *)StringLiteral_22792/*"profile/top"*/, 0);
}


void ProfileTopRequest__requestCompleted(
        ProfileTopRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4C44B41 & 1) == 0 )
  {
    sub_1C37058(&ResponseCommandKind_TypeInfo);
    sub_1C37058(&StringLiteral_22382/*"ok"*/);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    byte_4C44B41 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(18, responseList, 0);
  if ( v5 && ResponseData__checkError_44242528(v5, 0) )
    v6 = &StringLiteral_22382/*"ok"*/;
  else
    v6 = &StringLiteral_22215/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}