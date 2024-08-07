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
  __int64 v15; // x1
  System_String_o *v16; // x2

  if ( (byte_4A00254 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_18988/*"errorMessage"*/, errorTitle);
    sub_1B64A00(&StringLiteral_21121/*"logDetail"*/, v11);
    sub_1B64A00(&StringLiteral_18989/*"errorTitle"*/, v12);
    sub_1B64A00(&StringLiteral_1/*""*/, v13);
    byte_4A00254 = 1;
  }
  RequestBase__addField_40856580((RequestBase_o *)this, (System_String_o *)StringLiteral_18989/*"errorTitle"*/, errorTitle, 0LL);
  RequestBase__addField_40856580((RequestBase_o *)this, (System_String_o *)StringLiteral_18988/*"errorMessage"*/, errorMessage, 0LL);
  if ( !this )
    sub_1B64C5C(v14, v15);
  if ( isSendLogDetail )
    v16 = logDetail;
  else
    v16 = (System_String_o *)StringLiteral_1/*""*/;
  RequestBase__addField_40856580((RequestBase_o *)this, (System_String_o *)StringLiteral_21121/*"logDetail"*/, v16, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ClientApiErrorDialogRequest__getMockData(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A00253 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_1/*""*/, method);
    byte_4A00253 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ClientApiErrorDialogRequest__getURL(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A00252 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_4508/*"ClientApi/ErrorDialog"*/, v2);
    byte_4A00252 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61385136(BaseUrl, (System_String_o *)StringLiteral_4508/*"ClientApi/ErrorDialog"*/, 0LL);
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

  if ( (byte_4A00255 & 1) == 0 )
  {
    sub_1B64A00(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B64A00(&StringLiteral_22140/*"ok"*/, v5);
    sub_1B64A00(&StringLiteral_21971/*"ng"*/, v6);
    byte_4A00255 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(118, responseList, 0LL);
  if ( v7 && ResponseData__checkError_40851660(v7, 0LL) )
    v8 = &StringLiteral_22140/*"ok"*/;
  else
    v8 = &StringLiteral_21971/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}