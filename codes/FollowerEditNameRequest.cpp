void __fastcall FollowerEditNameRequest___ctor(FollowerEditNameRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall FollowerEditNameRequest__beginRequest(
        FollowerEditNameRequest_o *this,
        int64_t supportDeckId,
        System_String_o *deckName,
        const MethodInfo *method)
{
  __int64 v7; // x1

  if ( (byte_4B4651E & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23880/*"supportDeckId"*/, supportDeckId);
    sub_1BDB878(&StringLiteral_18534/*"deckName"*/, v7);
    byte_4B4651E = 1;
  }
  RequestBase__addField_43153704((RequestBase_o *)this, (System_String_o *)StringLiteral_23880/*"supportDeckId"*/, supportDeckId, 0LL);
  RequestBase__addField_43151112((RequestBase_o *)this, (System_String_o *)StringLiteral_18534/*"deckName"*/, deckName, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall FollowerEditNameRequest__getMockData(
        FollowerEditNameRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B4651D & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B4651D = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall FollowerEditNameRequest__getURL(FollowerEditNameRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B4651C & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_19528/*"follower/editName"*/, v2);
    byte_4B4651C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62572260(BaseUrl, (System_String_o *)StringLiteral_19528/*"follower/editName"*/, 0LL);
}


void __fastcall FollowerEditNameRequest__requestCompleted(
        FollowerEditNameRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4B4651F & 1) == 0 )
  {
    sub_1BDB878(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BDB878(&StringLiteral_22401/*"ok"*/, v5);
    sub_1BDB878(&StringLiteral_22233/*"ng"*/, v6);
    byte_4B4651F = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(60, responseList, 0LL);
  if ( v7 && ResponseData__checkError_43151432(v7, 0LL) )
    v8 = &StringLiteral_22401/*"ok"*/;
  else
    v8 = &StringLiteral_22233/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}