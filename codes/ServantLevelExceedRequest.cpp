void __fastcall ServantLevelExceedRequest___ctor(ServantLevelExceedRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ServantLevelExceedRequest__beginRequest(
        ServantLevelExceedRequest_o *this,
        int64_t baseUsrSvtId,
        const MethodInfo *method)
{
  if ( (byte_4BFF1A4 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_17385/*"baseUserSvtId"*/, baseUsrSvtId);
    byte_4BFF1A4 = 1;
  }
  RequestBase__addField_42510212((RequestBase_o *)this, (System_String_o *)StringLiteral_17385/*"baseUserSvtId"*/, baseUsrSvtId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantLevelExceedRequest__getURL(
        ServantLevelExceedRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BFF1A3 & 1) == 0 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_18063/*"card/combineExceed"*/, v2);
    byte_4BFF1A3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63235584(BaseUrl, (System_String_o *)StringLiteral_18063/*"card/combineExceed"*/, 0LL);
}


void __fastcall ServantLevelExceedRequest__requestCompleted(
        ServantLevelExceedRequest_o *this,
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

  if ( (byte_4BFF1A5 & 1) == 0 )
  {
    sub_1C2E12C(&JsonManager_TypeInfo, responseList);
    sub_1C2E12C(&ResponseCommandKind_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_22468/*"ng"*/, v6);
    byte_4BFF1A5 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(55, responseList, 0LL);
  if ( v7 && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8)) )
  {
    success = (Il2CppObject *)v9->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_22468/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0LL);
}