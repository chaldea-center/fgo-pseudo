void ClientApiOutputLogRequest___ctor(ClientApiOutputLogRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void ClientApiOutputLogRequest__beginRequest(
        ClientApiOutputLogRequest_o *this,
        System_String_o *title,
        System_String_o *message,
        int32_t code,
        const MethodInfo *method)
{
  if ( (byte_593A1B6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18791/*"code"*/);
    sub_21FFC50(&StringLiteral_25345/*"title"*/);
    sub_21FFC50(&StringLiteral_22751/*"msg"*/);
    byte_593A1B6 = 1;
  }
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_25345/*"title"*/, title, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_22751/*"msg"*/, message, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18791/*"code"*/, code, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *ClientApiOutputLogRequest__getMockData(ClientApiOutputLogRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A1B5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A1B5 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ClientApiOutputLogRequest__getURL(ClientApiOutputLogRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A1B4 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_4666/*"ClientApi/OutputLog"*/);
    byte_593A1B4 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_4666/*"ClientApi/OutputLog"*/, 0);
}


void ClientApiOutputLogRequest__requestCompleted(
        ClientApiOutputLogRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_593A1B7 & 1) == 0 )
  {
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A1B7 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(30, responseList, 0);
  if ( v5 && ResponseData__checkError_51190916(v5, 0) )
    v6 = &StringLiteral_23468/*"ok"*/;
  else
    v6 = &StringLiteral_23290/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}