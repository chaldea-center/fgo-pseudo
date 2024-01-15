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
  System_String_o *v14; // x2

  if ( (byte_40F99E3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18331/*"errorMessage"*/, errorTitle);
    sub_B16FFC(&StringLiteral_20226/*"logDetail"*/, v11);
    sub_B16FFC(&StringLiteral_18332/*"errorTitle"*/, v12);
    sub_B16FFC(&StringLiteral_1/*""*/, v13);
    byte_40F99E3 = 1;
  }
  RequestBase__addField_30957164((RequestBase_o *)this, (System_String_o *)StringLiteral_18332/*"errorTitle"*/, errorTitle, 0LL);
  RequestBase__addField_30957164((RequestBase_o *)this, (System_String_o *)StringLiteral_18331/*"errorMessage"*/, errorMessage, 0LL);
  if ( !this )
    sub_B170D4();
  if ( isSendLogDetail )
    v14 = logDetail;
  else
    v14 = (System_String_o *)StringLiteral_1/*""*/;
  RequestBase__addField_30957164((RequestBase_o *)this, (System_String_o *)StringLiteral_20226/*"logDetail"*/, v14, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ClientApiErrorDialogRequest__getMockData(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F99E2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40F99E2 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ClientApiErrorDialogRequest__getURL(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40F99E1 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_4015/*"ClientApi/ErrorDialog"*/, v2);
    byte_40F99E1 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_4015/*"ClientApi/ErrorDialog"*/, 0LL);
}


void __fastcall ClientApiErrorDialogRequest__requestCompleted(
        ClientApiErrorDialogRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  System_String_o **v8; // x8

  if ( (byte_40F99E4 & 1) == 0 )
  {
    sub_B16FFC(&ResponseCommandKind_TypeInfo, responseList);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v5);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v6);
    byte_40F99E4 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(117, responseList, 0LL);
  if ( v7 && ResponseData__checkError_30924960(v7, 0LL) )
    v8 = (System_String_o **)&StringLiteral_21129/*"ok"*/;
  else
    v8 = (System_String_o **)&StringLiteral_20980/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, *v8, 0LL);
}