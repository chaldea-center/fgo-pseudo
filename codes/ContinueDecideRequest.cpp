void __fastcall ContinueDecideRequest___ctor(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ContinueDecideRequest__beginRequest(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  if ( (byte_42B1ECA & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B1ECA = 1;
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
  const MethodInfo *v7; // x1

  if ( (byte_42B1EC6 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17806/*"continueKey"*/);
    sub_B52984(&StringLiteral_17809/*"continueType"*/);
    sub_B52984(&StringLiteral_17808/*"continuePass"*/);
    byte_42B1EC6 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17809/*"continueType"*/, 1, 0LL);
  RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_17806/*"continueKey"*/, continueKey, 0LL);
  RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_17808/*"continuePass"*/, continuePass, 0LL);
  ContinueDecideRequest__beginRequest(this, v7);
}


void __fastcall ContinueDecideRequest__beginRequestFacebook(
        ContinueDecideRequest_o *this,
        System_String_o *facebookId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  if ( (byte_42B1EC8 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18812/*"facebookId"*/);
    sub_B52984(&StringLiteral_17809/*"continueType"*/);
    sub_B52984(&StringLiteral_16338/*"accessToken"*/);
    byte_42B1EC8 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17809/*"continueType"*/, 3, 0LL);
  RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_18812/*"facebookId"*/, facebookId, 0LL);
  RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_16338/*"accessToken"*/, accessToken, 0LL);
  ContinueDecideRequest__beginRequest(this, v7);
}


void __fastcall ContinueDecideRequest__beginRequestTwitter(
        ContinueDecideRequest_o *this,
        System_String_o *twitterId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  if ( (byte_42B1EC7 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_23023/*"twitterId"*/);
    sub_B52984(&StringLiteral_17809/*"continueType"*/);
    sub_B52984(&StringLiteral_16338/*"accessToken"*/);
    byte_42B1EC7 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17809/*"continueType"*/, 2, 0LL);
  RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_23023/*"twitterId"*/, twitterId, 0LL);
  RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_16338/*"accessToken"*/, accessToken, 0LL);
  ContinueDecideRequest__beginRequest(this, v7);
}


System_String_o *__fastcall ContinueDecideRequest__getMockData(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  if ( (byte_42B1EC5 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1EC5 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ContinueDecideRequest__getURL(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42B1EC4 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_17803/*"continue/decide"*/);
    byte_42B1EC4 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_17803/*"continue/decide"*/, 0LL);
}


void __fastcall ContinueDecideRequest__requestCompleted(
        ContinueDecideRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_42B1EC9 & 1) == 0 )
  {
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42B1EC9 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(33, responseList, 0LL);
  if ( v5 && (v6 = v5, ResponseData__checkError_29724768(v5, 0LL)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_21239/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}