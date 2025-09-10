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
  if ( (byte_4C28D64 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18028/*"code"*/);
    sub_1C2D490(&StringLiteral_24076/*"title"*/);
    sub_1C2D490(&StringLiteral_21671/*"msg"*/);
    byte_4C28D64 = 1;
  }
  RequestBase__addField_44009064((RequestBase_o *)this, (System_String_o *)StringLiteral_24076/*"title"*/, title, 0);
  RequestBase__addField_44009064((RequestBase_o *)this, (System_String_o *)StringLiteral_21671/*"msg"*/, message, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18028/*"code"*/, code, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *ClientApiOutputLogRequest__getMockData(ClientApiOutputLogRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C28D63 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28D63 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ClientApiOutputLogRequest__getURL(ClientApiOutputLogRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28D62 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_4493/*"ClientApi/OutputLog"*/);
    byte_4C28D62 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_4493/*"ClientApi/OutputLog"*/, 0);
}


void ClientApiOutputLogRequest__requestCompleted(
        ClientApiOutputLogRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4C28D65 & 1) == 0 )
  {
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22362/*"ok"*/);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28D65 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(30, responseList, 0);
  if ( v5 && ResponseData__checkError_44004292(v5, 0) )
    v6 = &StringLiteral_22362/*"ok"*/;
  else
    v6 = &StringLiteral_22195/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}