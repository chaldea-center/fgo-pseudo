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

  if ( (byte_41887FE & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18400/*"errorMessage"*/, errorTitle);
    sub_B2C35C(&StringLiteral_20309/*"logDetail"*/, v11);
    sub_B2C35C(&StringLiteral_18401/*"errorTitle"*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_41887FE = 1;
  }
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_18401/*"errorTitle"*/, errorTitle, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_18400/*"errorMessage"*/, errorMessage, 0LL);
  if ( !this )
    sub_B2C434(v14, v15);
  if ( isSendLogDetail )
    v16 = logDetail;
  else
    v16 = (System_String_o *)StringLiteral_1/*""*/;
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_20309/*"logDetail"*/, v16, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ClientApiErrorDialogRequest__getMockData(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_41887FD & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_41887FD = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ClientApiErrorDialogRequest__getURL(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_41887FC & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_4033/*"ClientApi/ErrorDialog"*/, v2);
    byte_41887FC = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_4033/*"ClientApi/ErrorDialog"*/, 0LL);
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

  if ( (byte_41887FF & 1) == 0 )
  {
    sub_B2C35C(&ResponseCommandKind_TypeInfo, responseList);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_41887FF = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(117, responseList, 0LL);
  if ( v7 && ResponseData__checkError_31019724(v7, 0LL) )
    v8 = &StringLiteral_21218/*"ok"*/;
  else
    v8 = &StringLiteral_21068/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}