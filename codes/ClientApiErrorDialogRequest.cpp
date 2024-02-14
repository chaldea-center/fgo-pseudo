void __fastcall ClientApiErrorDialogRequest___ctor(ClientApiErrorDialogRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ClientApiErrorDialogRequest__beginRequest(
        ClientApiErrorDialogRequest_o *this,
        System_String_o *errorTitle,
        System_String_o *errorMessage,
        System_String_o *logDetail,
        bool isSendLogDetail,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x0
  System_String_o *v15; // x2

  if ( (byte_421470F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18457/*"errorMessage"*/, errorTitle);
    sub_B0D8A4(&StringLiteral_20372/*"logDetail"*/, v11);
    sub_B0D8A4(&StringLiteral_18458/*"errorTitle"*/, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_421470F = 1;
  }
  RequestBase__addField_30435648((RequestBase_o *)this, (System_String_o *)StringLiteral_18458/*"errorTitle"*/, errorTitle, 0LL);
  RequestBase__addField_30435648((RequestBase_o *)this, (System_String_o *)StringLiteral_18457/*"errorMessage"*/, errorMessage, 0LL);
  if ( !this )
    sub_B0D97C(v14);
  if ( isSendLogDetail )
    v15 = logDetail;
  else
    v15 = (System_String_o *)StringLiteral_1/*""*/;
  RequestBase__addField_30435648((RequestBase_o *)this, (System_String_o *)StringLiteral_20372/*"logDetail"*/, v15, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ClientApiErrorDialogRequest__getMockData(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_421470E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_421470E = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ClientApiErrorDialogRequest__getURL(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_421470D & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_4046/*"ClientApi/ErrorDialog"*/, v2);
    byte_421470D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43849904(BaseUrl, (System_String_o *)StringLiteral_4046/*"ClientApi/ErrorDialog"*/, 0LL);
}


void __fastcall ClientApiErrorDialogRequest__requestCompleted(
        ClientApiErrorDialogRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4214710 & 1) == 0 )
  {
    sub_B0D8A4(&ResponseCommandKind_TypeInfo, responseList);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v5);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v6);
    byte_4214710 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(117, responseList, 0LL);
  if ( v7 && ResponseData__checkError_30403444(v7, 0LL) )
    v8 = &StringLiteral_21287/*"ok"*/;
  else
    v8 = &StringLiteral_21137/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}