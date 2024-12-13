void __fastcall ContinueDecideRequest__beginRequest(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4B38A42 & 1) == 0 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, method);
    byte_4B38A42 = 1;
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

  if ( (byte_4B38A3E & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_18455/*"continueKey"*/, continueKey);
    sub_1BD3458(&StringLiteral_18458/*"continueType"*/, v7);
    sub_1BD3458(&StringLiteral_18457/*"continuePass"*/, v8);
    byte_4B38A3E = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18458/*"continueType"*/, 1, method);
  RequestBase__addField_41965080((RequestBase_o *)this, (System_String_o *)StringLiteral_18455/*"continueKey"*/, continueKey, v9);
  RequestBase__addField_41965080((RequestBase_o *)this, (System_String_o *)StringLiteral_18457/*"continuePass"*/, continuePass, v10);
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

  if ( (byte_4B38A40 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_19590/*"facebookId"*/, facebookId);
    sub_1BD3458(&StringLiteral_18458/*"continueType"*/, v7);
    sub_1BD3458(&StringLiteral_16821/*"accessToken"*/, v8);
    byte_4B38A40 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18458/*"continueType"*/, 3, method);
  RequestBase__addField_41965080((RequestBase_o *)this, (System_String_o *)StringLiteral_19590/*"facebookId"*/, facebookId, v9);
  RequestBase__addField_41965080((RequestBase_o *)this, (System_String_o *)StringLiteral_16821/*"accessToken"*/, accessToken, v10);
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

  if ( (byte_4B38A3F & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_24393/*"twitterId"*/, twitterId);
    sub_1BD3458(&StringLiteral_18458/*"continueType"*/, v7);
    sub_1BD3458(&StringLiteral_16821/*"accessToken"*/, v8);
    byte_4B38A3F = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18458/*"continueType"*/, 2, method);
  RequestBase__addField_41965080((RequestBase_o *)this, (System_String_o *)StringLiteral_24393/*"twitterId"*/, twitterId, v9);
  RequestBase__addField_41965080((RequestBase_o *)this, (System_String_o *)StringLiteral_16821/*"accessToken"*/, accessToken, v10);
  ContinueDecideRequest__beginRequest(this, v11);
}


System_String_o *__fastcall ContinueDecideRequest__getMockData(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4B38A3D & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_1/*""*/, method);
    byte_4B38A3D = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ContinueDecideRequest__getURL(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B38A3C & 1) == 0 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_18452/*"continue/decide"*/, v2);
    byte_4B38A3C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62525248(BaseUrl, (System_String_o *)StringLiteral_18452/*"continue/decide"*/, 0LL);
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

  if ( (byte_4B38A41 & 1) == 0 )
  {
    sub_1BD3458(&JsonManager_TypeInfo, responseList);
    sub_1BD3458(&ResponseCommandKind_TypeInfo, v5);
    sub_1BD3458(&StringLiteral_22325/*"ng"*/, v6);
    byte_4B38A41 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(33, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_42055668(v7, 0LL)) )
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
        StringLiteral_22325/*"ng"*/,
        *(_QWORD *)&v12->fields.extra_arg);
  }
}