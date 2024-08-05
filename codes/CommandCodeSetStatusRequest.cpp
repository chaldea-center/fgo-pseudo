void __fastcall CommandCodeSetStatusRequest___ctor(CommandCodeSetStatusRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall CommandCodeSetStatusRequest__beginRequest(
        CommandCodeSetStatusRequest_o *this,
        int64_t userCommandCodeId,
        bool isLock,
        bool isChoice,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_49FFC4E & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_18086/*"commandCodeId"*/, userCommandCodeId);
    sub_1B64870(&StringLiteral_20720/*"isLock"*/, v9);
    sub_1B64870(&StringLiteral_20705/*"isChoice"*/, v10);
    byte_49FFC4E = 1;
  }
  RequestBase__addField_40854504((RequestBase_o *)this, (System_String_o *)StringLiteral_18086/*"commandCodeId"*/, userCommandCodeId, 0LL);
  if ( !this )
    sub_1B64ACC(v11, v12);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20720/*"isLock"*/, isLock, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20705/*"isChoice"*/, isChoice, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CommandCodeSetStatusRequest__getMockData(
        CommandCodeSetStatusRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_49FFC4D & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, method);
    sub_1B64870(&StringLiteral_1/*""*/, v2);
    byte_49FFC4D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CommandCodeSetStatusRequest__getURL(
        CommandCodeSetStatusRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FFC4C & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, method);
    sub_1B64870(&StringLiteral_18083/*"commandCode/setStatus"*/, v2);
    byte_49FFC4C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61383576(BaseUrl, (System_String_o *)StringLiteral_18083/*"commandCode/setStatus"*/, 0LL);
}


void __fastcall CommandCodeSetStatusRequest__requestCompleted(
        CommandCodeSetStatusRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_49FFC4F & 1) == 0 )
  {
    sub_1B64870(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B64870(&StringLiteral_22140/*"ok"*/, v5);
    sub_1B64870(&StringLiteral_21971/*"ng"*/, v6);
    byte_49FFC4F = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(71, responseList, 0LL);
  if ( v7 && ResponseData__checkError_40851148(v7, 0LL) )
    v8 = &StringLiteral_22140/*"ok"*/;
  else
    v8 = &StringLiteral_21971/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}