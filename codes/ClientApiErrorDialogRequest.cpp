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

  if ( (byte_4C5882E & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_19091/*"errorMessage"*/);
    sub_1C3E564(&StringLiteral_21357/*"logDetail"*/);
    sub_1C3E564(&StringLiteral_19092/*"errorTitle"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5882E = 1;
  }
  RequestBase__addField_44302832((RequestBase_o *)this, (System_String_o *)StringLiteral_19092/*"errorTitle"*/, errorTitle, 0);
  RequestBase__addField_44302832((RequestBase_o *)this, (System_String_o *)StringLiteral_19091/*"errorMessage"*/, errorMessage, 0);
  if ( !this )
    sub_1C3E7C0(v11, v12);
  if ( isSendLogDetail )
    v13 = logDetail;
  else
    v13 = (System_String_o *)StringLiteral_1/*""*/;
  RequestBase__addField_44302832((RequestBase_o *)this, (System_String_o *)StringLiteral_21357/*"logDetail"*/, v13, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *ClientApiErrorDialogRequest__getMockData(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C5882D & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5882D = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ClientApiErrorDialogRequest__getURL(ClientApiErrorDialogRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C5882C & 1) == 0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&StringLiteral_4500/*"ClientApi/ErrorDialog"*/);
    byte_4C5882C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63636468(BaseUrl, (System_String_o *)StringLiteral_4500/*"ClientApi/ErrorDialog"*/, 0);
}


void ClientApiErrorDialogRequest__requestCompleted(
        ClientApiErrorDialogRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4C5882F & 1) == 0 )
  {
    sub_1C3E564(&ResponseCommandKind_TypeInfo);
    sub_1C3E564(&StringLiteral_22400/*"ok"*/);
    sub_1C3E564(&StringLiteral_22233/*"ng"*/);
    byte_4C5882F = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(118, responseList, 0);
  if ( v5 && ResponseData__checkError_44298060(v5, 0) )
    v6 = &StringLiteral_22400/*"ok"*/;
  else
    v6 = &StringLiteral_22233/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}