void __fastcall ContinueDecideRequest__beginRequest(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4BFF09A & 1) == 0 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, method);
    byte_4BFF09A = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, method);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, v3);
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
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1

  if ( (byte_4BFF096 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_18564/*"continueKey"*/, continueKey);
    sub_1C2E12C(&StringLiteral_18567/*"continueType"*/, v7);
    sub_1C2E12C(&StringLiteral_18566/*"continuePass"*/, v8);
    byte_4BFF096 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18567/*"continueType"*/, 1, method);
  RequestBase__addField_42503872((RequestBase_o *)this, (System_String_o *)StringLiteral_18564/*"continueKey"*/, continueKey, v9);
  RequestBase__addField_42503872((RequestBase_o *)this, (System_String_o *)StringLiteral_18566/*"continuePass"*/, continuePass, v10);
  ContinueDecideRequest__beginRequest(this, v11);
}


void __fastcall ContinueDecideRequest__beginRequestFacebook(
        ContinueDecideRequest_o *this,
        System_String_o *facebookId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1

  if ( (byte_4BFF098 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_19706/*"facebookId"*/, facebookId);
    sub_1C2E12C(&StringLiteral_18567/*"continueType"*/, v7);
    sub_1C2E12C(&StringLiteral_16923/*"accessToken"*/, v8);
    byte_4BFF098 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18567/*"continueType"*/, 3, method);
  RequestBase__addField_42503872((RequestBase_o *)this, (System_String_o *)StringLiteral_19706/*"facebookId"*/, facebookId, v9);
  RequestBase__addField_42503872((RequestBase_o *)this, (System_String_o *)StringLiteral_16923/*"accessToken"*/, accessToken, v10);
  ContinueDecideRequest__beginRequest(this, v11);
}


void __fastcall ContinueDecideRequest__beginRequestTwitter(
        ContinueDecideRequest_o *this,
        System_String_o *twitterId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1

  if ( (byte_4BFF097 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_24564/*"twitterId"*/, twitterId);
    sub_1C2E12C(&StringLiteral_18567/*"continueType"*/, v7);
    sub_1C2E12C(&StringLiteral_16923/*"accessToken"*/, v8);
    byte_4BFF097 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18567/*"continueType"*/, 2, method);
  RequestBase__addField_42503872((RequestBase_o *)this, (System_String_o *)StringLiteral_24564/*"twitterId"*/, twitterId, v9);
  RequestBase__addField_42503872((RequestBase_o *)this, (System_String_o *)StringLiteral_16923/*"accessToken"*/, accessToken, v10);
  ContinueDecideRequest__beginRequest(this, v11);
}


System_String_o *__fastcall ContinueDecideRequest__getMockData(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4BFF095 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BFF095 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ContinueDecideRequest__getURL(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BFF094 & 1) == 0 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_18561/*"continue/decide"*/, v2);
    byte_4BFF094 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63235584(BaseUrl, (System_String_o *)StringLiteral_18561/*"continue/decide"*/, 0LL);
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
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v12; // x8

  if ( (byte_4BFF099 & 1) == 0 )
  {
    sub_1C2E12C(&JsonManager_TypeInfo, responseList);
    sub_1C2E12C(&ResponseCommandKind_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_22468/*"ng"*/, v6);
    byte_4BFF099 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(33, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_42594652(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v10,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v12 = this->fields.CallBack;
    if ( v12 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v12->fields.m_target)(
        v12->fields.original_method_info,
        StringLiteral_22468/*"ng"*/,
        *(_QWORD *)&v12->fields.extra_arg);
  }
}