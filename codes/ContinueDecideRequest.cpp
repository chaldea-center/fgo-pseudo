void __fastcall ContinueDecideRequest___ctor(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ContinueDecideRequest__beginRequest(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA76F & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA76F = 1;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  const MethodInfo *v13; // x1

  if ( (byte_42EA76B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17900/*"continueKey"*/, (_DWORD)continueKey, (_DWORD)continuePass, method);
    sub_B5D5C4(&StringLiteral_17903/*"continueType"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_17902/*"continuePass"*/, v10, v11, v12);
    byte_42EA76B = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17903/*"continueType"*/, 1, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_17900/*"continueKey"*/, continueKey, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_17902/*"continuePass"*/, continuePass, 0LL);
  ContinueDecideRequest__beginRequest(this, v13);
}


void __fastcall ContinueDecideRequest__beginRequestFacebook(
        ContinueDecideRequest_o *this,
        System_String_o *facebookId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  const MethodInfo *v13; // x1

  if ( (byte_42EA76D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18907/*"facebookId"*/, (_DWORD)facebookId, (_DWORD)accessToken, method);
    sub_B5D5C4(&StringLiteral_17903/*"continueType"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_16423/*"accessToken"*/, v10, v11, v12);
    byte_42EA76D = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17903/*"continueType"*/, 3, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_18907/*"facebookId"*/, facebookId, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_16423/*"accessToken"*/, accessToken, 0LL);
  ContinueDecideRequest__beginRequest(this, v13);
}


void __fastcall ContinueDecideRequest__beginRequestTwitter(
        ContinueDecideRequest_o *this,
        System_String_o *twitterId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  const MethodInfo *v13; // x1

  if ( (byte_42EA76C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23138/*"twitterId"*/, (_DWORD)twitterId, (_DWORD)accessToken, method);
    sub_B5D5C4(&StringLiteral_17903/*"continueType"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_16423/*"accessToken"*/, v10, v11, v12);
    byte_42EA76C = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17903/*"continueType"*/, 2, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_23138/*"twitterId"*/, twitterId, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_16423/*"accessToken"*/, accessToken, 0LL);
  ContinueDecideRequest__beginRequest(this, v13);
}


System_String_o *__fastcall ContinueDecideRequest__getMockData(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA76A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EA76A = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ContinueDecideRequest__getURL(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42EA769 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17897/*"continue/decide"*/, v4, v5, v6);
    byte_42EA769 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_17897/*"continue/decide"*/, 0LL);
}


void __fastcall ContinueDecideRequest__requestCompleted(
        ContinueDecideRequest_o *this,
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
  ResponseData_o *v13; // x20
  Il2CppObject *success; // x20
  System_String_o *v15; // x1

  if ( (byte_42EA76E & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v9, v10, v11);
    byte_42EA76E = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v12 = ResponseCommandKind__SearchData(33, responseList, 0LL);
  if ( v12 && (v13 = v12, ResponseData__checkError_29500464(v12, 0LL)) )
  {
    success = (Il2CppObject *)v13->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_21345/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v15, 0LL);
}