void __fastcall ContinueDecideRequest___ctor(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ContinueDecideRequest__beginRequest(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  if ( (byte_49FFC60 & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, method);
    byte_49FFC60 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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

  if ( (byte_49FFC5C & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_18174/*"continueKey"*/, continueKey);
    sub_1B64870(&StringLiteral_18177/*"continueType"*/, v7);
    sub_1B64870(&StringLiteral_18176/*"continuePass"*/, v8);
    byte_49FFC5C = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18177/*"continueType"*/, 1, 0LL);
  RequestBase__addField_40856068((RequestBase_o *)this, (System_String_o *)StringLiteral_18174/*"continueKey"*/, continueKey, 0LL);
  RequestBase__addField_40856068((RequestBase_o *)this, (System_String_o *)StringLiteral_18176/*"continuePass"*/, continuePass, 0LL);
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

  if ( (byte_49FFC5E & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_19284/*"facebookId"*/, facebookId);
    sub_1B64870(&StringLiteral_18177/*"continueType"*/, v7);
    sub_1B64870(&StringLiteral_16564/*"accessToken"*/, v8);
    byte_49FFC5E = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18177/*"continueType"*/, 3, 0LL);
  RequestBase__addField_40856068((RequestBase_o *)this, (System_String_o *)StringLiteral_19284/*"facebookId"*/, facebookId, 0LL);
  RequestBase__addField_40856068((RequestBase_o *)this, (System_String_o *)StringLiteral_16564/*"accessToken"*/, accessToken, 0LL);
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

  if ( (byte_49FFC5D & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_24011/*"twitterId"*/, twitterId);
    sub_1B64870(&StringLiteral_18177/*"continueType"*/, v7);
    sub_1B64870(&StringLiteral_16564/*"accessToken"*/, v8);
    byte_49FFC5D = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18177/*"continueType"*/, 2, 0LL);
  RequestBase__addField_40856068((RequestBase_o *)this, (System_String_o *)StringLiteral_24011/*"twitterId"*/, twitterId, 0LL);
  RequestBase__addField_40856068((RequestBase_o *)this, (System_String_o *)StringLiteral_16564/*"accessToken"*/, accessToken, 0LL);
  ContinueDecideRequest__beginRequest(this, v9);
}


System_String_o *__fastcall ContinueDecideRequest__getMockData(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  if ( (byte_49FFC5B & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_1/*""*/, method);
    byte_49FFC5B = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ContinueDecideRequest__getURL(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FFC5A & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, method);
    sub_1B64870(&StringLiteral_18171/*"continue/decide"*/, v2);
    byte_49FFC5A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61383576(BaseUrl, (System_String_o *)StringLiteral_18171/*"continue/decide"*/, 0LL);
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

  if ( (byte_49FFC5F & 1) == 0 )
  {
    sub_1B64870(&JsonManager_TypeInfo, responseList);
    sub_1B64870(&ResponseCommandKind_TypeInfo, v5);
    sub_1B64870(&StringLiteral_21971/*"ng"*/, v6);
    byte_49FFC5F = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(33, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_40851148(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21971/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}