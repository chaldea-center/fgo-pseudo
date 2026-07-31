void ClientApiErrorDialogRequest___ctor(ClientApiErrorDialogRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void ClientApiErrorDialogRequest__beginRequest(
        ClientApiErrorDialogRequest_o *this,
        System_String_o *errorTitle,
        System_String_o *errorMessage,
        System_String_o *logDetail,
        bool isSendLogDetail,
        const MethodInfo *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2

  if ( (byte_593A1B2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19919/*"errorMessage"*/);
    sub_21FFC50(&StringLiteral_22374/*"logDetail"*/);
    sub_21FFC50(&StringLiteral_19920/*"errorTitle"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A1B2 = 1;
  }
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_19920/*"errorTitle"*/, errorTitle, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_19919/*"errorMessage"*/, errorMessage, 0);
  if ( !this )
    sub_21FFECC(v11, v12);
  if ( isSendLogDetail )
    v13 = logDetail;
  else
    v13 = (System_String_o *)StringLiteral_1/*""*/;
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_22374/*"logDetail"*/, v13, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *ClientApiErrorDialogRequest__getMockData(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_593A1B1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A1B1 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ClientApiErrorDialogRequest__getURL(ClientApiErrorDialogRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A1B0 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_4665/*"ClientApi/ErrorDialog"*/);
    byte_593A1B0 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_4665/*"ClientApi/ErrorDialog"*/, 0);
}


void ClientApiErrorDialogRequest__requestCompleted(
        ClientApiErrorDialogRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_593A1B3 & 1) == 0 )
  {
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A1B3 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(118, responseList, 0);
  if ( v5 && ResponseData__checkError_51190916(v5, 0) )
    v6 = &StringLiteral_23468/*"ok"*/;
  else
    v6 = &StringLiteral_23290/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}