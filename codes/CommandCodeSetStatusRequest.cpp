void CommandCodeSetStatusRequest___ctor(CommandCodeSetStatusRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void CommandCodeSetStatusRequest__beginRequest(
        CommandCodeSetStatusRequest_o *this,
        int64_t userCommandCodeId,
        bool isLock,
        bool isChoice,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4D2E38D & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_18256/*"commandCodeId"*/);
    sub_1C94098(&StringLiteral_21113/*"isLock"*/);
    sub_1C94098(&StringLiteral_21088/*"isChoice"*/);
    byte_4D2E38D = 1;
  }
  RequestBase__addField_45013228((RequestBase_o *)this, (System_String_o *)StringLiteral_18256/*"commandCodeId"*/, userCommandCodeId, 0);
  if ( !this )
    sub_1C942F0(v9, v10);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21113/*"isLock"*/, isLock, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21088/*"isChoice"*/, isChoice, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CommandCodeSetStatusRequest__getMockData(
        CommandCodeSetStatusRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2E38C & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2E38C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CommandCodeSetStatusRequest__getURL(CommandCodeSetStatusRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E38B & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_18253/*"commandCode/setStatus"*/);
    byte_4D2E38B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_18253/*"commandCode/setStatus"*/, 0);
}


void CommandCodeSetStatusRequest__requestCompleted(
        CommandCodeSetStatusRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4D2E38E & 1) == 0 )
  {
    sub_1C94098(&ResponseCommandKind_TypeInfo);
    sub_1C94098(&StringLiteral_22594/*"ok"*/);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    byte_4D2E38E = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(71, responseList, 0);
  if ( v5 && ResponseData__checkError_45012660(v5, 0) )
    v6 = &StringLiteral_22594/*"ok"*/;
  else
    v6 = &StringLiteral_22424/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}