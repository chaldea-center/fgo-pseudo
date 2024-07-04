void __fastcall ContinueDecideRequest__beginRequest(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_48E3EBC & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    byte_48E3EBC = 1;
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

  if ( (byte_48E3EB8 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_17996/*"continueKey"*/, continueKey);
    sub_1B00CCC(&StringLiteral_17999/*"continueType"*/, v7);
    sub_1B00CCC(&StringLiteral_17998/*"continuePass"*/, v8);
    byte_48E3EB8 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17999/*"continueType"*/, 1, method);
  RequestBase__addField_39752868((RequestBase_o *)this, (System_String_o *)StringLiteral_17996/*"continueKey"*/, continueKey, v9);
  RequestBase__addField_39752868((RequestBase_o *)this, (System_String_o *)StringLiteral_17998/*"continuePass"*/, continuePass, v10);
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

  if ( (byte_48E3EBA & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_19099/*"facebookId"*/, facebookId);
    sub_1B00CCC(&StringLiteral_17999/*"continueType"*/, v7);
    sub_1B00CCC(&StringLiteral_16397/*"accessToken"*/, v8);
    byte_48E3EBA = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17999/*"continueType"*/, 3, method);
  RequestBase__addField_39752868((RequestBase_o *)this, (System_String_o *)StringLiteral_19099/*"facebookId"*/, facebookId, v9);
  RequestBase__addField_39752868((RequestBase_o *)this, (System_String_o *)StringLiteral_16397/*"accessToken"*/, accessToken, v10);
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

  if ( (byte_48E3EB9 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_23751/*"twitterId"*/, twitterId);
    sub_1B00CCC(&StringLiteral_17999/*"continueType"*/, v7);
    sub_1B00CCC(&StringLiteral_16397/*"accessToken"*/, v8);
    byte_48E3EB9 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17999/*"continueType"*/, 2, method);
  RequestBase__addField_39752868((RequestBase_o *)this, (System_String_o *)StringLiteral_23751/*"twitterId"*/, twitterId, v9);
  RequestBase__addField_39752868((RequestBase_o *)this, (System_String_o *)StringLiteral_16397/*"accessToken"*/, accessToken, v10);
  ContinueDecideRequest__beginRequest(this, v11);
}


System_String_o *__fastcall ContinueDecideRequest__getMockData(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  if ( (byte_48E3EB7 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, method);
    byte_48E3EB7 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ContinueDecideRequest__getURL(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_48E3EB6 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_17993/*"continue/decide"*/, v2);
    byte_48E3EB6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_60325748(BaseUrl, (System_String_o *)StringLiteral_17993/*"continue/decide"*/, 0LL);
}


void __fastcall ContinueDecideRequest__requestCompleted(
        ContinueDecideRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  ResponseData_o *v9; // x20
  Il2CppObject *success; // x20
  System_String_o *v11; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v13; // x8

  if ( (byte_48E3EBB & 1) == 0 )
  {
    sub_1B00CCC(&JsonManager_TypeInfo, responseList);
    sub_1B00CCC(&ResponseCommandKind_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_21754/*"ng"*/, v6);
    byte_48E3EBB = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(33, responseList, 0LL);
  if ( v7 && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8)) )
  {
    success = (Il2CppObject *)v9->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v11,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v13 = this->fields.CallBack;
    if ( v13 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v13->fields.m_target)(
        v13->fields.original_method_info,
        StringLiteral_21754/*"ng"*/,
        *(_QWORD *)&v13->fields.extra_arg);
  }
}