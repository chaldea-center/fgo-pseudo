void ContinueDecideRequest___ctor(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void ContinueDecideRequest__beginRequest(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_593A1DF & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593A1DF = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


void ContinueDecideRequest__beginRequestCode(
        ContinueDecideRequest_o *this,
        System_String_o *continueKey,
        System_String_o *continuePass,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  if ( (byte_593A1DB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19029/*"continueKey"*/);
    sub_21FFC50(&StringLiteral_19032/*"continueType"*/);
    sub_21FFC50(&StringLiteral_19031/*"continuePass"*/);
    byte_593A1DB = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19032/*"continueType"*/, 1, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_19029/*"continueKey"*/, continueKey, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_19031/*"continuePass"*/, continuePass, 0);
  ContinueDecideRequest__beginRequest(this, v7);
}


void ContinueDecideRequest__beginRequestFacebook(
        ContinueDecideRequest_o *this,
        System_String_o *facebookId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  if ( (byte_593A1DD & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20244/*"facebookId"*/);
    sub_21FFC50(&StringLiteral_19032/*"continueType"*/);
    sub_21FFC50(&StringLiteral_17279/*"accessToken"*/);
    byte_593A1DD = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19032/*"continueType"*/, 3, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_20244/*"facebookId"*/, facebookId, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_17279/*"accessToken"*/, accessToken, 0);
  ContinueDecideRequest__beginRequest(this, v7);
}


void ContinueDecideRequest__beginRequestTwitter(
        ContinueDecideRequest_o *this,
        System_String_o *twitterId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  if ( (byte_593A1DC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25507/*"twitterId"*/);
    sub_21FFC50(&StringLiteral_19032/*"continueType"*/);
    sub_21FFC50(&StringLiteral_17279/*"accessToken"*/);
    byte_593A1DC = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19032/*"continueType"*/, 2, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_25507/*"twitterId"*/, twitterId, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_17279/*"accessToken"*/, accessToken, 0);
  ContinueDecideRequest__beginRequest(this, v7);
}


System_String_o *ContinueDecideRequest__getMockData(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A1DA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A1DA = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ContinueDecideRequest__getURL(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A1D9 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_19026/*"continue/decide"*/);
    byte_593A1D9 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_19026/*"continue/decide"*/, 0);
}


void ContinueDecideRequest__requestCompleted(
        ContinueDecideRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  __int64 v7; // x1
  Il2CppObject *success; // x20
  System_String_o *v9; // x1

  if ( (byte_593A1DE & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A1DE = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(33, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_51190916(v5, 0)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v7);
    v9 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v9 = (System_String_o *)StringLiteral_23290/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v9, 0);
}