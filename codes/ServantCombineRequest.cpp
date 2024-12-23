void __fastcall ServantCombineRequest___ctor(ServantCombineRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ServantCombineRequest__beginRequest(
        ServantCombineRequest_o *this,
        int64_t baseUsrSvtId,
        System_String_o *materialSvtIds,
        int32_t useQp,
        int32_t getExp,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1

  if ( (byte_4B6858B & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17299/*"baseUserSvtId"*/, baseUsrSvtId);
    sub_1BE4ACC(&StringLiteral_20014/*"getExp"*/, v11);
    sub_1BE4ACC(&StringLiteral_24701/*"useQp"*/, v12);
    sub_1BE4ACC(&StringLiteral_21641/*"materialUserSvtIds"*/, v13);
    byte_4B6858B = 1;
  }
  RequestBase__addField_42110748((RequestBase_o *)this, (System_String_o *)StringLiteral_17299/*"baseUserSvtId"*/, baseUsrSvtId, 0LL);
  RequestBase__addField_42104408((RequestBase_o *)this, (System_String_o *)StringLiteral_21641/*"materialUserSvtIds"*/, materialSvtIds, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24701/*"useQp"*/, useQp, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20014/*"getExp"*/, getExp, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantCombineRequest__getMockData(ServantCombineRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4B6858A & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_9259/*"MockSvtCombineResponse"*/, v2);
    byte_4B6858A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9259/*"MockSvtCombineResponse"*/, 0LL);
}


System_String_o *__fastcall ServantCombineRequest__getURL(ServantCombineRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B68589 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_17976/*"card/combine"*/, v2);
    byte_4B68589 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62698808(BaseUrl, (System_String_o *)StringLiteral_17976/*"card/combine"*/, 0LL);
}


void __fastcall ServantCombineRequest__requestCompleted(
        ServantCombineRequest_o *this,
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

  if ( (byte_4B6858C & 1) == 0 )
  {
    sub_1BE4ACC(&JsonManager_TypeInfo, responseList);
    sub_1BE4ACC(&ResponseCommandKind_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_22370/*"ng"*/, v6);
    byte_4B6858C = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(25, responseList, 0LL);
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