void ContinueDecideRequest___ctor(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void ContinueDecideRequest__beginRequest(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C28D8D & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C28D8D = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


void ContinueDecideRequest__beginRequestCode(
        ContinueDecideRequest_o *this,
        System_String_o *continueKey,
        System_String_o *continuePass,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  if ( (byte_4C28D89 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18244/*"continueKey"*/);
    sub_1C2D490(&StringLiteral_18247/*"continueType"*/);
    sub_1C2D490(&StringLiteral_18246/*"continuePass"*/);
    byte_4C28D89 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18247/*"continueType"*/, 1, 0);
  RequestBase__addField_44009064((RequestBase_o *)this, (System_String_o *)StringLiteral_18244/*"continueKey"*/, continueKey, 0);
  RequestBase__addField_44009064((RequestBase_o *)this, (System_String_o *)StringLiteral_18246/*"continuePass"*/, continuePass, 0);
  ContinueDecideRequest__beginRequest(this, v7);
}


void ContinueDecideRequest__beginRequestFacebook(
        ContinueDecideRequest_o *this,
        System_String_o *facebookId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  if ( (byte_4C28D8B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19365/*"facebookId"*/);
    sub_1C2D490(&StringLiteral_18247/*"continueType"*/);
    sub_1C2D490(&StringLiteral_16636/*"accessToken"*/);
    byte_4C28D8B = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18247/*"continueType"*/, 3, 0);
  RequestBase__addField_44009064((RequestBase_o *)this, (System_String_o *)StringLiteral_19365/*"facebookId"*/, facebookId, 0);
  RequestBase__addField_44009064((RequestBase_o *)this, (System_String_o *)StringLiteral_16636/*"accessToken"*/, accessToken, 0);
  ContinueDecideRequest__beginRequest(this, v7);
}


void ContinueDecideRequest__beginRequestTwitter(
        ContinueDecideRequest_o *this,
        System_String_o *twitterId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  if ( (byte_4C28D8A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24220/*"twitterId"*/);
    sub_1C2D490(&StringLiteral_18247/*"continueType"*/);
    sub_1C2D490(&StringLiteral_16636/*"accessToken"*/);
    byte_4C28D8A = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18247/*"continueType"*/, 2, 0);
  RequestBase__addField_44009064((RequestBase_o *)this, (System_String_o *)StringLiteral_24220/*"twitterId"*/, twitterId, 0);
  RequestBase__addField_44009064((RequestBase_o *)this, (System_String_o *)StringLiteral_16636/*"accessToken"*/, accessToken, 0);
  ContinueDecideRequest__beginRequest(this, v7);
}


System_String_o *ContinueDecideRequest__getMockData(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C28D88 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28D88 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ContinueDecideRequest__getURL(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28D87 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_18241/*"continue/decide"*/);
    byte_4C28D87 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_18241/*"continue/decide"*/, 0);
}


void ContinueDecideRequest__requestCompleted(
        ContinueDecideRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4C28D8C & 1) == 0 )
  {
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28D8C = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(33, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44004292(v5, 0)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22195/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}