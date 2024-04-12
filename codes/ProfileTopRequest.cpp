void __fastcall ProfileTopRequest___ctor(ProfileTopRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ProfileTopRequest__beginRequest(
        ProfileTopRequest_o *this,
        System_Int64_array *targetUserIds,
        const MethodInfo *method)
{
  if ( (byte_42AFB92 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22805/*"targetUserIds"*/);
    byte_42AFB92 = 1;
  }
  RequestBase__addField_32021028(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22805/*"targetUserIds"*/,
    &targetUserIds->obj,
    0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


void __fastcall ProfileTopRequest__beginRequestFriendCode(
        ProfileTopRequest_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  if ( (byte_42AFB93 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19042/*"friendCode"*/);
    byte_42AFB93 = 1;
  }
  RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_19042/*"friendCode"*/, friendCode, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ProfileTopRequest__getURL(ProfileTopRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42AFB91 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_21723/*"profile/top"*/);
    byte_42AFB91 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_21723/*"profile/top"*/, 0LL);
}


void __fastcall ProfileTopRequest__requestCompleted(
        ProfileTopRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_42AFB94 & 1) == 0 )
  {
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21388/*"ok"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42AFB94 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(18, responseList, 0LL);
  if ( v5 && ResponseData__checkError_29724768(v5, 0LL) )
    v6 = &StringLiteral_21388/*"ok"*/;
  else
    v6 = &StringLiteral_21239/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}