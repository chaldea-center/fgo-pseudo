void __fastcall ContinueDecideRequest__beginRequest(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4A5C9B5 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5C9B5 = 1;
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
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1

  if ( (byte_4A5C9B1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18243/*"continueKey"*/);
    sub_1B885B0(&StringLiteral_18246/*"continueType"*/);
    sub_1B885B0(&StringLiteral_18245/*"continuePass"*/);
    byte_4A5C9B1 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18246/*"continueType"*/, 1, method);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_18243/*"continueKey"*/, continueKey, v7);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_18245/*"continuePass"*/, continuePass, v8);
  ContinueDecideRequest__beginRequest(this, v9);
}


void __fastcall ContinueDecideRequest__beginRequestFacebook(
        ContinueDecideRequest_o *this,
        System_String_o *facebookId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1

  if ( (byte_4A5C9B3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19358/*"facebookId"*/);
    sub_1B885B0(&StringLiteral_18246/*"continueType"*/);
    sub_1B885B0(&StringLiteral_16631/*"accessToken"*/);
    byte_4A5C9B3 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18246/*"continueType"*/, 3, method);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_19358/*"facebookId"*/, facebookId, v7);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_16631/*"accessToken"*/, accessToken, v8);
  ContinueDecideRequest__beginRequest(this, v9);
}


void __fastcall ContinueDecideRequest__beginRequestTwitter(
        ContinueDecideRequest_o *this,
        System_String_o *twitterId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1

  if ( (byte_4A5C9B2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24106/*"twitterId"*/);
    sub_1B885B0(&StringLiteral_18246/*"continueType"*/);
    sub_1B885B0(&StringLiteral_16631/*"accessToken"*/);
    byte_4A5C9B2 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18246/*"continueType"*/, 2, method);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_24106/*"twitterId"*/, twitterId, v7);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_16631/*"accessToken"*/, accessToken, v8);
  ContinueDecideRequest__beginRequest(this, v9);
}


System_String_o *__fastcall ContinueDecideRequest__getMockData(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C9B0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C9B0 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ContinueDecideRequest__getURL(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C9AF & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_18240/*"continue/decide"*/);
    byte_4A5C9AF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_18240/*"continue/decide"*/, 0LL);
}


void __fastcall ContinueDecideRequest__requestCompleted(
        ContinueDecideRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v11; // x8

  if ( (byte_4A5C9B4 & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C9B4 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(33, responseList, 0LL);
  if ( v5 && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6)) )
  {
    success = (Il2CppObject *)v7->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v9,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v11 = this->fields.CallBack;
    if ( v11 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v11->fields.m_target)(
        v11->fields.original_method_info,
        StringLiteral_22055/*"ng"*/,
        *(_QWORD *)&v11->fields.extra_arg);
  }
}