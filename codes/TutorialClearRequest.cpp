void __fastcall TutorialClearRequest___ctor(TutorialClearRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TutorialClearRequest__getMockData(TutorialClearRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4189A37 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4189A37 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall TutorialClearRequest__getURL(TutorialClearRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4189A36 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_22823/*"tutorial/clear"*/, v2);
    byte_4189A36 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_22823/*"tutorial/clear"*/, 0LL);
}


void __fastcall TutorialClearRequest__requestCompleted(
        TutorialClearRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  TopHomeRequest_c *v8; // x0
  ResponseData_o *v9; // x0
  __int64 *v10; // x8

  if ( (byte_4189A38 & 1) == 0 )
  {
    sub_B2C35C(&ResponseCommandKind_TypeInfo, responseList);
    sub_B2C35C(&TopHomeRequest_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v6);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v7);
    byte_4189A38 = 1;
  }
  v8 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__clearExpirationDate((const MethodInfo *)v8);
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v9 = ResponseCommandKind__SearchData(36, responseList, 0LL);
  if ( v9 && ResponseData__checkError_31019724(v9, 0LL) )
    v10 = &StringLiteral_21218/*"ok"*/;
  else
    v10 = &StringLiteral_21068/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v10, 0LL);
}