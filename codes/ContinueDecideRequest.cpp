void ContinueDecideRequest___ctor(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void ContinueDecideRequest__beginRequest(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4E7918B & 1) == 0 )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    byte_4E7918B = 1;
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

  if ( (byte_4E79187 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_18539/*"continueKey"*/);
    sub_1D0F0B4(&StringLiteral_18542/*"continueType"*/);
    sub_1D0F0B4(&StringLiteral_18541/*"continuePass"*/);
    byte_4E79187 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18542/*"continueType"*/, 1, 0);
  RequestBase__addField_45601604((RequestBase_o *)this, (System_String_o *)StringLiteral_18539/*"continueKey"*/, continueKey, 0);
  RequestBase__addField_45601604((RequestBase_o *)this, (System_String_o *)StringLiteral_18541/*"continuePass"*/, continuePass, 0);
  ContinueDecideRequest__beginRequest(this, v7);
}


void ContinueDecideRequest__beginRequestFacebook(
        ContinueDecideRequest_o *this,
        System_String_o *facebookId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  if ( (byte_4E79189 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19727/*"facebookId"*/);
    sub_1D0F0B4(&StringLiteral_18542/*"continueType"*/);
    sub_1D0F0B4(&StringLiteral_16866/*"accessToken"*/);
    byte_4E79189 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18542/*"continueType"*/, 3, 0);
  RequestBase__addField_45601604((RequestBase_o *)this, (System_String_o *)StringLiteral_19727/*"facebookId"*/, facebookId, 0);
  RequestBase__addField_45601604((RequestBase_o *)this, (System_String_o *)StringLiteral_16866/*"accessToken"*/, accessToken, 0);
  ContinueDecideRequest__beginRequest(this, v7);
}


void ContinueDecideRequest__beginRequestTwitter(
        ContinueDecideRequest_o *this,
        System_String_o *twitterId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  if ( (byte_4E79188 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24747/*"twitterId"*/);
    sub_1D0F0B4(&StringLiteral_18542/*"continueType"*/);
    sub_1D0F0B4(&StringLiteral_16866/*"accessToken"*/);
    byte_4E79188 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18542/*"continueType"*/, 2, 0);
  RequestBase__addField_45601604((RequestBase_o *)this, (System_String_o *)StringLiteral_24747/*"twitterId"*/, twitterId, 0);
  RequestBase__addField_45601604((RequestBase_o *)this, (System_String_o *)StringLiteral_16866/*"accessToken"*/, accessToken, 0);
  ContinueDecideRequest__beginRequest(this, v7);
}


System_String_o *ContinueDecideRequest__getMockData(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4E79186 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E79186 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ContinueDecideRequest__getURL(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4E79185 & 1) == 0 )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_18536/*"continue/decide"*/);
    byte_4E79185 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65562772(BaseUrl, (System_String_o *)StringLiteral_18536/*"continue/decide"*/, 0);
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

  if ( (byte_4E7918A & 1) == 0 )
  {
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&ResponseCommandKind_TypeInfo);
    sub_1D0F0B4(&StringLiteral_22648/*"ng"*/);
    byte_4E7918A = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(33, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_45600864(v5, 0)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22648/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}