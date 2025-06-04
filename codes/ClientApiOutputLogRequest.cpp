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
  __int64 v9; // x1
  __int64 v10; // x1

  if ( (byte_4B03A47 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_17871/*"code"*/, title);
    sub_1BC3008(&StringLiteral_23860/*"title"*/, v9);
    sub_1BC3008(&StringLiteral_21474/*"msg"*/, v10);
    byte_4B03A47 = 1;
  }
  RequestBase__addField_43185568((RequestBase_o *)this, (System_String_o *)StringLiteral_23860/*"title"*/, title, 0LL);
  RequestBase__addField_43185568((RequestBase_o *)this, (System_String_o *)StringLiteral_21474/*"msg"*/, message, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17871/*"code"*/, code, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ClientApiOutputLogRequest__getMockData(
        ClientApiOutputLogRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B03A46 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4B03A46 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ClientApiOutputLogRequest__getURL(
        ClientApiOutputLogRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B03A45 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_4462/*"ClientApi/OutputLog"*/, v2);
    byte_4B03A45 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62348648(BaseUrl, (System_String_o *)StringLiteral_4462/*"ClientApi/OutputLog"*/, 0LL);
}


void __fastcall ClientApiOutputLogRequest__requestCompleted(
        ClientApiOutputLogRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4B03A48 & 1) == 0 )
  {
    sub_1BC3008(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BC3008(&StringLiteral_22163/*"ok"*/, v5);
    sub_1BC3008(&StringLiteral_21997/*"ng"*/, v6);
    byte_4B03A48 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(30, responseList, 0LL);
  if ( v7 && ResponseData__checkError_43184840(v7, 0LL) )
    v8 = &StringLiteral_22163/*"ok"*/;
  else
    v8 = &StringLiteral_21997/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}