void __fastcall TutorialClearRequest___ctor(TutorialClearRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TutorialClearRequest__getMockData(TutorialClearRequest_o *this, const MethodInfo *method)
{
  if ( (byte_40FB8FE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FB8FE = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall TutorialClearRequest__getURL(TutorialClearRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40FB8FD & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_22730/*"tutorial/clear"*/, v2);
    byte_40FB8FD = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_22730/*"tutorial/clear"*/, 0LL);
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
  System_String_o **v10; // x8

  if ( (byte_40FB8FF & 1) == 0 )
  {
    sub_B16FFC(&ResponseCommandKind_TypeInfo, responseList);
    sub_B16FFC(&TopHomeRequest_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v6);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v7);
    byte_40FB8FF = 1;
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
  if ( v9 && ResponseData__checkError_30924960(v9, 0LL) )
    v10 = (System_String_o **)&StringLiteral_21129/*"ok"*/;
  else
    v10 = (System_String_o **)&StringLiteral_20980/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, *v10, 0LL);
}