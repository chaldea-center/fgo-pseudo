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
  if ( (byte_4CC8ED5 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_18058/*"code"*/);
    sub_1C713B0(&StringLiteral_24216/*"title"*/);
    sub_1C713B0(&StringLiteral_21789/*"msg"*/);
    byte_4CC8ED5 = 1;
  }
  RequestBase__addField_44518324((RequestBase_o *)this, (System_String_o *)StringLiteral_24216/*"title"*/, title, 0);
  RequestBase__addField_44518324((RequestBase_o *)this, (System_String_o *)StringLiteral_21789/*"msg"*/, message, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18058/*"code"*/, code, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *ClientApiOutputLogRequest__getMockData(ClientApiOutputLogRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8ED4 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8ED4 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ClientApiOutputLogRequest__getURL(ClientApiOutputLogRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC8ED3 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_4494/*"ClientApi/OutputLog"*/);
    byte_4CC8ED3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_4494/*"ClientApi/OutputLog"*/, 0);
}


void ClientApiOutputLogRequest__requestCompleted(
        ClientApiOutputLogRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4CC8ED6 & 1) == 0 )
  {
    sub_1C713B0(&ResponseCommandKind_TypeInfo);
    sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    byte_4CC8ED6 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(30, responseList, 0);
  if ( v5 && ResponseData__checkError_44515240(v5, 0) )
    v6 = &StringLiteral_22486/*"ok"*/;
  else
    v6 = &StringLiteral_22316/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}