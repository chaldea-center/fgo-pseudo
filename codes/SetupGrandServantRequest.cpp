void SetupGrandServantRequest__beginRequest(
        SetupGrandServantRequest_o *this,
        int32_t grandGraphId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4D2E4BE & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24832/*"userSvtId"*/);
    sub_1C94098(&StringLiteral_20055/*"grandGraphId"*/);
    byte_4D2E4BE = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20055/*"grandGraphId"*/, grandGraphId, method);
  RequestBase__addField_45013228((RequestBase_o *)this, (System_String_o *)StringLiteral_24832/*"userSvtId"*/, userSvtId, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
}


System_String_o *SetupGrandServantRequest__getURL(SetupGrandServantRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E4BD & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_20048/*"grand/SetupSvt"*/);
    byte_4D2E4BD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_20048/*"grand/SetupSvt"*/, 0);
}


void SetupGrandServantRequest__requestCompleted(
        SetupGrandServantRequest_o *this,
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

  if ( (byte_4D2E4BF & 1) == 0 )
  {
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&ResponseCommandKind_TypeInfo);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    byte_4D2E4BF = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(136, responseList, 0);
  if ( v5 && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6)) )
  {
    success = (Il2CppObject *)v7->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        v9,
        CallBack->fields.method);
  }
  else
  {
    v11 = this->fields.CallBack;
    if ( v11 )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v11->fields.invoke_impl)(
        v11->fields.method_code,
        StringLiteral_22424/*"ng"*/,
        v11->fields.method);
  }
}