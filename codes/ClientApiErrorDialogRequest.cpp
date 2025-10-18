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
  System_String_o *v12; // x2

  if ( (byte_4C44A63 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19073/*"errorMessage"*/);
    sub_1C37058(&StringLiteral_21339/*"logDetail"*/);
    sub_1C37058(&StringLiteral_19074/*"errorTitle"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44A63 = 1;
  }
  RequestBase__addField_44247300((RequestBase_o *)this, (System_String_o *)StringLiteral_19074/*"errorTitle"*/, errorTitle, 0);
  RequestBase__addField_44247300((RequestBase_o *)this, (System_String_o *)StringLiteral_19073/*"errorMessage"*/, errorMessage, 0);
  if ( !this )
    sub_1C372B4(v11);
  if ( isSendLogDetail )
    v12 = logDetail;
  else
    v12 = (System_String_o *)StringLiteral_1/*""*/;
  RequestBase__addField_44247300((RequestBase_o *)this, (System_String_o *)StringLiteral_21339/*"logDetail"*/, v12, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *ClientApiErrorDialogRequest__getMockData(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C44A62 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44A62 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ClientApiErrorDialogRequest__getURL(ClientApiErrorDialogRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C44A61 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_4500/*"ClientApi/ErrorDialog"*/);
    byte_4C44A61 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63561656(BaseUrl, (System_String_o *)StringLiteral_4500/*"ClientApi/ErrorDialog"*/, 0);
}


void ClientApiErrorDialogRequest__requestCompleted(
        ClientApiErrorDialogRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4C44A64 & 1) == 0 )
  {
    sub_1C37058(&ResponseCommandKind_TypeInfo);
    sub_1C37058(&StringLiteral_22382/*"ok"*/);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    byte_4C44A64 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(118, responseList, 0);
  if ( v5 && ResponseData__checkError_44242528(v5, 0) )
    v6 = &StringLiteral_22382/*"ok"*/;
  else
    v6 = &StringLiteral_22215/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}