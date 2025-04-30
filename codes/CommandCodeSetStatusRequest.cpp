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

  if ( (byte_4A4FE80 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_17927/*"commandCodeId"*/, userCommandCodeId);
    sub_1B863B8(&StringLiteral_20614/*"isLock"*/, v9);
    sub_1B863B8(&StringLiteral_20595/*"isChoice"*/, v10);
    byte_4A4FE80 = 1;
  }
  RequestBase__addField_42287768((RequestBase_o *)this, (System_String_o *)StringLiteral_17927/*"commandCodeId"*/, userCommandCodeId, 0LL);
  if ( !this )
    sub_1B86614(v11, v12);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20614/*"isLock"*/, isLock, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20595/*"isChoice"*/, isChoice, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CommandCodeSetStatusRequest__getMockData(
        CommandCodeSetStatusRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A4FE7F & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_1/*""*/, v2);
    byte_4A4FE7F = 1;
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

  if ( (byte_4A4FE7E & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_17924/*"commandCode/setStatus"*/, v2);
    byte_4A4FE7E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61645176(BaseUrl, (System_String_o *)StringLiteral_17924/*"commandCode/setStatus"*/, 0LL);
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

  if ( (byte_4A4FE81 & 1) == 0 )
  {
    sub_1B863B8(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B863B8(&StringLiteral_22061/*"ok"*/, v5);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v6);
    byte_4A4FE81 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(71, responseList, 0LL);
  if ( v7 && ResponseData__checkError_42282948(v7, 0LL) )
    v8 = &StringLiteral_22061/*"ok"*/;
  else
    v8 = &StringLiteral_21893/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}