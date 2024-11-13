void __fastcall ContinueDecideRequest__beginRequest(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  __int64 v5; // x1

  if ( (byte_4B17A73 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B17A73 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, method);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, v4);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


void __fastcall ContinueDecideRequest__beginRequestCode(
        ContinueDecideRequest_o *this,
        System_String_o *continueKey,
        System_String_o *continuePass,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1

  if ( (byte_4B17A6F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18427/*"continueKey"*/, continueKey, continuePass);
    sub_1BCA7E0(&StringLiteral_18430/*"continueType"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_18429/*"continuePass"*/, v9, v10);
    byte_4B17A6F = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18430/*"continueType"*/, 1, method);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_18427/*"continueKey"*/, continueKey, v11);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_18429/*"continuePass"*/, continuePass, v12);
  ContinueDecideRequest__beginRequest(this, v13);
}


void __fastcall ContinueDecideRequest__beginRequestFacebook(
        ContinueDecideRequest_o *this,
        System_String_o *facebookId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1

  if ( (byte_4B17A71 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19560/*"facebookId"*/, facebookId, accessToken);
    sub_1BCA7E0(&StringLiteral_18430/*"continueType"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_16800/*"accessToken"*/, v9, v10);
    byte_4B17A71 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18430/*"continueType"*/, 3, method);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_19560/*"facebookId"*/, facebookId, v11);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_16800/*"accessToken"*/, accessToken, v12);
  ContinueDecideRequest__beginRequest(this, v13);
}


void __fastcall ContinueDecideRequest__beginRequestTwitter(
        ContinueDecideRequest_o *this,
        System_String_o *twitterId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1

  if ( (byte_4B17A70 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24358/*"twitterId"*/, twitterId, accessToken);
    sub_1BCA7E0(&StringLiteral_18430/*"continueType"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_16800/*"accessToken"*/, v9, v10);
    byte_4B17A70 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18430/*"continueType"*/, 2, method);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_24358/*"twitterId"*/, twitterId, v11);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_16800/*"accessToken"*/, accessToken, v12);
  ContinueDecideRequest__beginRequest(this, v13);
}


System_String_o *__fastcall ContinueDecideRequest__getMockData(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17A6E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17A6E = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ContinueDecideRequest__getURL(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17A6D & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_18424/*"continue/decide"*/, v3, v4);
    byte_4B17A6D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_18424/*"continue/decide"*/, 0LL);
}


void __fastcall ContinueDecideRequest__requestCompleted(
        ContinueDecideRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  ResponseData_o *v10; // x20
  __int64 v11; // x1
  Il2CppObject *success; // x20
  System_String_o *v13; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v15; // x8

  if ( (byte_4B17A72 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17A72 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(33, responseList, 0LL);
  if ( v9 && (v10 = v9, ResponseData__checkError_41952396(v9, 0LL)) )
  {
    success = (Il2CppObject *)v10->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v11);
    v13 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v13,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v15 = this->fields.CallBack;
    if ( v15 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v15->fields.m_target)(
        v15->fields.original_method_info,
        StringLiteral_22292/*"ng"*/,
        *(_QWORD *)&v15->fields.extra_arg);
  }
}