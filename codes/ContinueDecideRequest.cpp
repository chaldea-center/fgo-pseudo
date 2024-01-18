void __fastcall ContinueDecideRequest___ctor(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ContinueDecideRequest__beginRequest(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  if ( (byte_418961F & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_418961F = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


void __fastcall ContinueDecideRequest__beginRequestCode(
        ContinueDecideRequest_o *this,
        System_String_o *continueKey,
        System_String_o *continuePass,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_418961B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17681/*"continueKey"*/, continueKey);
    sub_B2C35C(&StringLiteral_17684/*"continueType"*/, v7);
    sub_B2C35C(&StringLiteral_17683/*"continuePass"*/, v8);
    byte_418961B = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17684/*"continueType"*/, 1, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_17681/*"continueKey"*/, continueKey, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_17683/*"continuePass"*/, continuePass, 0LL);
  ContinueDecideRequest__beginRequest(this, v9);
}


void __fastcall ContinueDecideRequest__beginRequestFacebook(
        ContinueDecideRequest_o *this,
        System_String_o *facebookId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_418961D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18672/*"facebookId"*/, facebookId);
    sub_B2C35C(&StringLiteral_17684/*"continueType"*/, v7);
    sub_B2C35C(&StringLiteral_16229/*"accessToken"*/, v8);
    byte_418961D = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17684/*"continueType"*/, 3, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_18672/*"facebookId"*/, facebookId, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_16229/*"accessToken"*/, accessToken, 0LL);
  ContinueDecideRequest__beginRequest(this, v9);
}


void __fastcall ContinueDecideRequest__beginRequestTwitter(
        ContinueDecideRequest_o *this,
        System_String_o *twitterId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_418961C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22833/*"twitterId"*/, twitterId);
    sub_B2C35C(&StringLiteral_17684/*"continueType"*/, v7);
    sub_B2C35C(&StringLiteral_16229/*"accessToken"*/, v8);
    byte_418961C = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17684/*"continueType"*/, 2, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_22833/*"twitterId"*/, twitterId, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_16229/*"accessToken"*/, accessToken, 0LL);
  ContinueDecideRequest__beginRequest(this, v9);
}


System_String_o *__fastcall ContinueDecideRequest__getMockData(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  if ( (byte_418961A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418961A = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ContinueDecideRequest__getURL(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4189619 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17678/*"continue/decide"*/, v2);
    byte_4189619 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_17678/*"continue/decide"*/, 0LL);
}


void __fastcall ContinueDecideRequest__requestCompleted(
        ContinueDecideRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_418961E & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, responseList);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_418961E = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(33, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_31019724(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21068/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}