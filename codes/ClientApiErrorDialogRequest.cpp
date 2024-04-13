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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x2

  if ( (byte_42EA8FD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18629/*"errorMessage"*/, (_DWORD)errorTitle, (_DWORD)errorMessage, logDetail);
    sub_B5D5C4(&StringLiteral_20568/*"logDetail"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_18630/*"errorTitle"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1/*""*/, v17, v18, v19);
    byte_42EA8FD = 1;
  }
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_18630/*"errorTitle"*/, errorTitle, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_18629/*"errorMessage"*/, errorMessage, 0LL);
  if ( !this )
    sub_B5D69C(v20, v21);
  if ( isSendLogDetail )
    v22 = logDetail;
  else
    v22 = (System_String_o *)StringLiteral_1/*""*/;
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_20568/*"logDetail"*/, v22, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ClientApiErrorDialogRequest__getMockData(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA8FC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EA8FC = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ClientApiErrorDialogRequest__getURL(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42EA8FB & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_4102/*"ClientApi/ErrorDialog"*/, v4, v5, v6);
    byte_42EA8FB = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_4102/*"ClientApi/ErrorDialog"*/, 0LL);
}


void __fastcall ClientApiErrorDialogRequest__requestCompleted(
        ClientApiErrorDialogRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ResponseData_o *v12; // x0
  __int64 *v13; // x8

  if ( (byte_42EA8FE & 1) == 0 )
  {
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v9, v10, v11);
    byte_42EA8FE = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v12 = ResponseCommandKind__SearchData(118, responseList, 0LL);
  if ( v12 && ResponseData__checkError_29500464(v12, 0LL) )
    v13 = &StringLiteral_21497/*"ok"*/;
  else
    v13 = &StringLiteral_21345/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v13, 0LL);
}