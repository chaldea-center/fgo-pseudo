void __fastcall ContinueDecideRequest___ctor(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ContinueDecideRequest__beginRequest(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  if ( (byte_438CCD4 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438CCD4 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


void __fastcall ContinueDecideRequest__beginRequestCode(
        ContinueDecideRequest_o *this,
        System_String_o *continueKey,
        System_String_o *continuePass,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  if ( (byte_438CCD0 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18035/*"continueKey"*/);
    sub_B775C4(&StringLiteral_18038/*"continueType"*/);
    sub_B775C4(&StringLiteral_18037/*"continuePass"*/);
    byte_438CCD0 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18038/*"continueType"*/, 1, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_18035/*"continueKey"*/, continueKey, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_18037/*"continuePass"*/, continuePass, 0LL);
  ContinueDecideRequest__beginRequest(this, v7);
}


void __fastcall ContinueDecideRequest__beginRequestFacebook(
        ContinueDecideRequest_o *this,
        System_String_o *facebookId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  if ( (byte_438CCD2 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19045/*"facebookId"*/);
    sub_B775C4(&StringLiteral_18038/*"continueType"*/);
    sub_B775C4(&StringLiteral_16537/*"accessToken"*/);
    byte_438CCD2 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18038/*"continueType"*/, 3, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_19045/*"facebookId"*/, facebookId, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_16537/*"accessToken"*/, accessToken, 0LL);
  ContinueDecideRequest__beginRequest(this, v7);
}


void __fastcall ContinueDecideRequest__beginRequestTwitter(
        ContinueDecideRequest_o *this,
        System_String_o *twitterId,
        System_String_o *accessToken,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  if ( (byte_438CCD1 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23311/*"twitterId"*/);
    sub_B775C4(&StringLiteral_18038/*"continueType"*/);
    sub_B775C4(&StringLiteral_16537/*"accessToken"*/);
    byte_438CCD1 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18038/*"continueType"*/, 2, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_23311/*"twitterId"*/, twitterId, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_16537/*"accessToken"*/, accessToken, 0LL);
  ContinueDecideRequest__beginRequest(this, v7);
}


System_String_o *__fastcall ContinueDecideRequest__getMockData(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  if ( (byte_438CCCF & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CCCF = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ContinueDecideRequest__getURL(ContinueDecideRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438CCCE & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_18032/*"continue/decide"*/);
    byte_438CCCE = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_18032/*"continue/decide"*/, 0LL);
}


void __fastcall ContinueDecideRequest__requestCompleted(
        ContinueDecideRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_438CCD3 & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438CCD3 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(33, responseList, 0LL);
  if ( v5 && (v6 = v5, ResponseData__checkError_30128096(v5, 0LL)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_21504/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}