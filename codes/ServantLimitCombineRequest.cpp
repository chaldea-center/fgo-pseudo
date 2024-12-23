void __fastcall ServantLimitCombineRequest___ctor(ServantLimitCombineRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ServantLimitCombineRequest__beginRequest(
        ServantLimitCombineRequest_o *this,
        int64_t baseUsrSvtId,
        const MethodInfo *method)
{
  if ( (byte_4B6859E & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17299/*"baseUserSvtId"*/, baseUsrSvtId);
    byte_4B6859E = 1;
  }
  RequestBase__addField_42110748((RequestBase_o *)this, (System_String_o *)StringLiteral_17299/*"baseUserSvtId"*/, baseUsrSvtId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantLimitCombineRequest__getURL(
        ServantLimitCombineRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B6859D & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_17980/*"card/combineLimit"*/, v2);
    byte_4B6859D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62698808(BaseUrl, (System_String_o *)StringLiteral_17980/*"card/combineLimit"*/, 0LL);
}


void __fastcall ServantLimitCombineRequest__requestCompleted(
        ServantLimitCombineRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  ResponseData_o *v9; // x20
  Il2CppObject *success; // x20
  System_String_o *v11; // x1

  if ( (byte_4B6859F & 1) == 0 )
  {
    sub_1BE4ACC(&JsonManager_TypeInfo, responseList);
    sub_1BE4ACC(&ResponseCommandKind_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_22370/*"ng"*/, v6);
    byte_4B6859F = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(39, responseList, 0LL);
  if ( v7 && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8)) )
  {
    success = (Il2CppObject *)v9->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_22370/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0LL);
}