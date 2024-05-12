void __fastcall ClientApiOutputLogRequest___ctor(ClientApiOutputLogRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ClientApiOutputLogRequest__beginRequest(
        ClientApiOutputLogRequest_o *this,
        System_String_o *title,
        System_String_o *message,
        int32_t code,
        const MethodInfo *method)
{
  if ( (byte_438B6A7 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17838/*"code"*/);
    sub_B775C4(&StringLiteral_23180/*"title"*/);
    sub_B775C4(&StringLiteral_21024/*"msg"*/);
    byte_438B6A7 = 1;
  }
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_23180/*"title"*/, title, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_21024/*"msg"*/, message, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17838/*"code"*/, code, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ClientApiOutputLogRequest__getMockData(
        ClientApiOutputLogRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_438B6A6 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438B6A6 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ClientApiOutputLogRequest__getURL(
        ClientApiOutputLogRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438B6A5 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_4163/*"ClientApi/OutputLog"*/);
    byte_438B6A5 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_4163/*"ClientApi/OutputLog"*/, 0LL);
}


void __fastcall ClientApiOutputLogRequest__requestCompleted(
        ClientApiOutputLogRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_438B6A8 & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438B6A8 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(30, responseList, 0LL);
  if ( v5 && ResponseData__checkError_30128096(v5, 0LL) )
    v6 = &StringLiteral_21657/*"ok"*/;
  else
    v6 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}