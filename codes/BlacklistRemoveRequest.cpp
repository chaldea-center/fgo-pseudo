void __fastcall BlacklistRemoveRequest___ctor(BlacklistRemoveRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


bool __fastcall BlacklistRemoveRequest__beginRequest(
        BlacklistRemoveRequest_o *this,
        int64_t targetUserId,
        const MethodInfo *method)
{
  if ( (byte_4A00225 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_23764/*"targetUserId"*/, targetUserId);
    byte_4A00225 = 1;
  }
  RequestBase__addField_40855016((RequestBase_o *)this, (System_String_o *)StringLiteral_23764/*"targetUserId"*/, targetUserId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
  return 1;
}


System_String_o *__fastcall BlacklistRemoveRequest__getMockData(
        BlacklistRemoveRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A00224 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_1/*""*/, method);
    byte_4A00224 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall BlacklistRemoveRequest__getURL(BlacklistRemoveRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A00223 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_17267/*"blacklist/remove"*/, v2);
    byte_4A00223 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61385136(BaseUrl, (System_String_o *)StringLiteral_17267/*"blacklist/remove"*/, 0LL);
}


void __fastcall BlacklistRemoveRequest__requestCompleted(
        BlacklistRemoveRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4A00226 & 1) == 0 )
  {
    sub_1B64A00(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B64A00(&StringLiteral_22140/*"ok"*/, v5);
    sub_1B64A00(&StringLiteral_21971/*"ng"*/, v6);
    byte_4A00226 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(65, responseList, 0LL);
  if ( v7 && ResponseData__checkError_40851660(v7, 0LL) )
    v8 = &StringLiteral_22140/*"ok"*/;
  else
    v8 = &StringLiteral_21971/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}