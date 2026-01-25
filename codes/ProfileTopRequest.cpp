void ProfileTopRequest__beginRequest(
        ProfileTopRequest_o *this,
        System_Int64_array *targetUserIds,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4CF01C0 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_24238/*"targetUserIds"*/);
    byte_4CF01C0 = 1;
  }
  RequestBase__addField_44746712((RequestBase_o *)this, (System_String_o *)StringLiteral_24238/*"targetUserIds"*/, &targetUserIds->obj, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


void ProfileTopRequest__beginRequestFriendCode(
        ProfileTopRequest_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4CF01C1 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19834/*"friendCode"*/);
    byte_4CF01C1 = 1;
  }
  RequestBase__addField_44748720((RequestBase_o *)this, (System_String_o *)StringLiteral_19834/*"friendCode"*/, friendCode, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *ProfileTopRequest__getURL(ProfileTopRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CF01BF & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_23010/*"profile/top"*/);
    byte_4CF01BF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64176912(BaseUrl, (System_String_o *)StringLiteral_23010/*"profile/top"*/, 0);
}


void ProfileTopRequest__requestCompleted(
        ProfileTopRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4CF01C2 & 1) == 0 )
  {
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22590/*"ok"*/);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    byte_4CF01C2 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(18, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22590/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22419/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}