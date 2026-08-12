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

  if ( (byte_59723AA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18968/*"commandCodeId"*/);
    sub_2213A60(&StringLiteral_21947/*"isLock"*/);
    sub_2213A60(&StringLiteral_21914/*"isChoice"*/);
    byte_59723AA = 1;
  }
  RequestBase__addField_51256716((RequestBase_o *)this, (System_String_o *)StringLiteral_18968/*"commandCodeId"*/, userCommandCodeId, 0);
  if ( !this )
    sub_2213CDC(v9, v10);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21947/*"isLock"*/, isLock, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21914/*"isChoice"*/, isChoice, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CommandCodeSetStatusRequest__getMockData(
        CommandCodeSetStatusRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_59723A9 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59723A9 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CommandCodeSetStatusRequest__getURL(CommandCodeSetStatusRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_59723A8 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_18965/*"commandCode/setStatus"*/);
    byte_59723A8 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_18965/*"commandCode/setStatus"*/, 0);
}


void CommandCodeSetStatusRequest__requestCompleted(
        CommandCodeSetStatusRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_59723AB & 1) == 0 )
  {
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_59723AB = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(71, responseList, 0);
  if ( v5 && ResponseData__checkError_51257228(v5, 0) )
    v6 = &StringLiteral_23515/*"ok"*/;
  else
    v6 = &StringLiteral_23336/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}