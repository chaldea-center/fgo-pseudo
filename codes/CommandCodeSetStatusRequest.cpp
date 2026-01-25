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

  if ( (byte_4CF00FC & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18256/*"commandCodeId"*/);
    sub_1C7BAE8(&StringLiteral_21108/*"isLock"*/);
    sub_1C7BAE8(&StringLiteral_21082/*"isChoice"*/);
    byte_4CF00FC = 1;
  }
  RequestBase__addField_44745468((RequestBase_o *)this, (System_String_o *)StringLiteral_18256/*"commandCodeId"*/, userCommandCodeId, 0);
  if ( !this )
    sub_1C7BD40(v9, v10);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21108/*"isLock"*/, isLock, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21082/*"isChoice"*/, isChoice, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CommandCodeSetStatusRequest__getMockData(
        CommandCodeSetStatusRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CF00FB & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF00FB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CommandCodeSetStatusRequest__getURL(CommandCodeSetStatusRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CF00FA & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_18253/*"commandCode/setStatus"*/);
    byte_4CF00FA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64176912(BaseUrl, (System_String_o *)StringLiteral_18253/*"commandCode/setStatus"*/, 0);
}


void CommandCodeSetStatusRequest__requestCompleted(
        CommandCodeSetStatusRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4CF00FD & 1) == 0 )
  {
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22590/*"ok"*/);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    byte_4CF00FD = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(71, responseList, 0);
  if ( v5 && ResponseData__checkError_44743216(v5, 0) )
    v6 = &StringLiteral_22590/*"ok"*/;
  else
    v6 = &StringLiteral_22419/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}