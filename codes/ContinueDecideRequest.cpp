void ContinueDecideRequest___ctor(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void ContinueDecideRequest__beginRequest(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4D2E39F & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2E39F = 1;
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

  if ( (byte_4D2E39B & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_18351/*"continueKey"*/);
    sub_1C94098(&StringLiteral_18354/*"continueType"*/);
    sub_1C94098(&StringLiteral_18353/*"continuePass"*/);
    byte_4D2E39B = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18354/*"continueType"*/, 1, 0);
  RequestBase__addField_45016480((RequestBase_o *)this, (System_String_o *)StringLiteral_18351/*"continueKey"*/, continueKey, 0);
  RequestBase__addField_45016480((RequestBase_o *)this, (System_String_o *)StringLiteral_18353/*"continuePass"*/, continuePass, 0);
  ContinueDecideRequest__beginRequest(this, v7);
}


void ContinueDecideRequest__beginRequestFacebook(
        ContinueDecideRequest_o *this,
        System_String_o *facebookId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  if ( (byte_4D2E39D & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19537/*"facebookId"*/);
    sub_1C94098(&StringLiteral_18354/*"continueType"*/);
    sub_1C94098(&StringLiteral_16699/*"accessToken"*/);
    byte_4D2E39D = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18354/*"continueType"*/, 3, 0);
  RequestBase__addField_45016480((RequestBase_o *)this, (System_String_o *)StringLiteral_19537/*"facebookId"*/, facebookId, 0);
  RequestBase__addField_45016480((RequestBase_o *)this, (System_String_o *)StringLiteral_16699/*"accessToken"*/, accessToken, 0);
  ContinueDecideRequest__beginRequest(this, v7);
}


void ContinueDecideRequest__beginRequestTwitter(
        ContinueDecideRequest_o *this,
        System_String_o *twitterId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  if ( (byte_4D2E39C & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24485/*"twitterId"*/);
    sub_1C94098(&StringLiteral_18354/*"continueType"*/);
    sub_1C94098(&StringLiteral_16699/*"accessToken"*/);
    byte_4D2E39C = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18354/*"continueType"*/, 2, 0);
  RequestBase__addField_45016480((RequestBase_o *)this, (System_String_o *)StringLiteral_24485/*"twitterId"*/, twitterId, 0);
  RequestBase__addField_45016480((RequestBase_o *)this, (System_String_o *)StringLiteral_16699/*"accessToken"*/, accessToken, 0);
  ContinueDecideRequest__beginRequest(this, v7);
}


System_String_o *ContinueDecideRequest__getMockData(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4D2E39A & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2E39A = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ContinueDecideRequest__getURL(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E399 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_18348/*"continue/decide"*/);
    byte_4D2E399 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_18348/*"continue/decide"*/, 0);
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

  if ( (byte_4D2E39E & 1) == 0 )
  {
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&ResponseCommandKind_TypeInfo);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    byte_4D2E39E = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(33, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_45012660(v5, 0)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22424/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}