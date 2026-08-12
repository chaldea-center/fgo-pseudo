void ContinueDecideRequest___ctor(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void ContinueDecideRequest__beginRequest(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_59723BC & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59723BC = 1;
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

  if ( (byte_59723B8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19069/*"continueKey"*/);
    sub_2213A60(&StringLiteral_19073/*"continueType"*/);
    sub_2213A60(&StringLiteral_19071/*"continuePass"*/);
    byte_59723B8 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19073/*"continueType"*/, 1, 0);
  RequestBase__addField_51259256((RequestBase_o *)this, (System_String_o *)StringLiteral_19069/*"continueKey"*/, continueKey, 0);
  RequestBase__addField_51259256((RequestBase_o *)this, (System_String_o *)StringLiteral_19071/*"continuePass"*/, continuePass, 0);
  ContinueDecideRequest__beginRequest(this, v7);
}


void ContinueDecideRequest__beginRequestFacebook(
        ContinueDecideRequest_o *this,
        System_String_o *facebookId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  if ( (byte_59723BA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20286/*"facebookId"*/);
    sub_2213A60(&StringLiteral_19073/*"continueType"*/);
    sub_2213A60(&StringLiteral_17315/*"accessToken"*/);
    byte_59723BA = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19073/*"continueType"*/, 3, 0);
  RequestBase__addField_51259256((RequestBase_o *)this, (System_String_o *)StringLiteral_20286/*"facebookId"*/, facebookId, 0);
  RequestBase__addField_51259256((RequestBase_o *)this, (System_String_o *)StringLiteral_17315/*"accessToken"*/, accessToken, 0);
  ContinueDecideRequest__beginRequest(this, v7);
}


void ContinueDecideRequest__beginRequestTwitter(
        ContinueDecideRequest_o *this,
        System_String_o *twitterId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  if ( (byte_59723B9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25555/*"twitterId"*/);
    sub_2213A60(&StringLiteral_19073/*"continueType"*/);
    sub_2213A60(&StringLiteral_17315/*"accessToken"*/);
    byte_59723B9 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19073/*"continueType"*/, 2, 0);
  RequestBase__addField_51259256((RequestBase_o *)this, (System_String_o *)StringLiteral_25555/*"twitterId"*/, twitterId, 0);
  RequestBase__addField_51259256((RequestBase_o *)this, (System_String_o *)StringLiteral_17315/*"accessToken"*/, accessToken, 0);
  ContinueDecideRequest__beginRequest(this, v7);
}


System_String_o *ContinueDecideRequest__getMockData(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  if ( (byte_59723B7 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59723B7 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ContinueDecideRequest__getURL(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_59723B6 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_19066/*"continue/decide"*/);
    byte_59723B6 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_19066/*"continue/decide"*/, 0);
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

  if ( (byte_59723BB & 1) == 0 )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_59723BB = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(33, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_51257228(v5, 0)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v7);
    v9 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v9 = (System_String_o *)StringLiteral_23336/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v9, 0);
}