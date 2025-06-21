void __fastcall CardCombineLimitSpecialRequest___ctor(CardCombineLimitSpecialRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall CardCombineLimitSpecialRequest__beginRequest(
        CardCombineLimitSpecialRequest_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  if ( (byte_4B1DF2E & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16911/*"baseUserSvtId"*/, userServantId);
    byte_4B1DF2E = 1;
  }
  RequestBase__addField_43346700((RequestBase_o *)this, (System_String_o *)StringLiteral_16911/*"baseUserSvtId"*/, userServantId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CardCombineLimitSpecialRequest__getURL(
        CardCombineLimitSpecialRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B1DF2D & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_17599/*"card/combineLimitSpecial"*/, v2);
    byte_4B1DF2D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62450424(BaseUrl, (System_String_o *)StringLiteral_17599/*"card/combineLimitSpecial"*/, 0LL);
}


void __fastcall CardCombineLimitSpecialRequest__requestCompleted(
        CardCombineLimitSpecialRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_4B1DF2F & 1) == 0 )
  {
    sub_1BCAFF8(&JsonManager_TypeInfo, responseList);
    sub_1BCAFF8(&ResponseCommandKind_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, v6);
    byte_4B1DF2F = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(85, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_43347888(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_22015/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}