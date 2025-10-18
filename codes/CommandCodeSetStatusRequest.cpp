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

  if ( (byte_4C44A7E & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18158/*"commandCodeId"*/);
    sub_1C37058(&StringLiteral_20931/*"isLock"*/);
    sub_1C37058(&StringLiteral_20909/*"isChoice"*/);
    byte_4C44A7E = 1;
  }
  RequestBase__addField_44246844((RequestBase_o *)this, (System_String_o *)StringLiteral_18158/*"commandCodeId"*/, userCommandCodeId, 0);
  if ( !this )
    sub_1C372B4(v9);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20931/*"isLock"*/, isLock, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20909/*"isChoice"*/, isChoice, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CommandCodeSetStatusRequest__getMockData(
        CommandCodeSetStatusRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C44A7D & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44A7D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CommandCodeSetStatusRequest__getURL(CommandCodeSetStatusRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C44A7C & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_18155/*"commandCode/setStatus"*/);
    byte_4C44A7C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63561656(BaseUrl, (System_String_o *)StringLiteral_18155/*"commandCode/setStatus"*/, 0);
}


void CommandCodeSetStatusRequest__requestCompleted(
        CommandCodeSetStatusRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4C44A7F & 1) == 0 )
  {
    sub_1C37058(&ResponseCommandKind_TypeInfo);
    sub_1C37058(&StringLiteral_22382/*"ok"*/);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    byte_4C44A7F = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(71, responseList, 0);
  if ( v5 && ResponseData__checkError_44242528(v5, 0) )
    v6 = &StringLiteral_22382/*"ok"*/;
  else
    v6 = &StringLiteral_22215/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}