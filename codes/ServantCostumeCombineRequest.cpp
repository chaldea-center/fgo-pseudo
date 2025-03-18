void __fastcall ServantCostumeCombineRequest___ctor(ServantCostumeCombineRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ServantCostumeCombineRequest__beginRequest(
        ServantCostumeCombineRequest_o *this,
        int64_t baseUserSvtId,
        int32_t costumeId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1

  if ( (byte_4C239C1 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17415/*"card/statusSync"*/, baseUserSvtId);
    sub_1C3B764(&StringLiteral_19507/*"graphic.shader"*/, v9);
    sub_1C3B764(&StringLiteral_18632/*"en_text01"*/, v10);
    byte_4C239C1 = 1;
  }
  RequestBase__addField_42628192((RequestBase_o *)this, (System_String_o *)StringLiteral_17415/*"card/statusSync"*/, baseUserSvtId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18632/*"en_text01"*/, costumeId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19507/*"graphic.shader"*/, eventId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantCostumeCombineRequest__getURL(
        ServantCostumeCombineRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4C239C0 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_18092/*"dBanner"*/, v2);
    byte_4C239C0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_18092/*"dBanner"*/, 0LL);
}


void __fastcall ServantCostumeCombineRequest__requestCompleted(
        ServantCostumeCombineRequest_o *this,
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

  if ( (byte_4C239C2 & 1) == 0 )
  {
    sub_1C3B764(&JsonManager_TypeInfo, responseList);
    sub_1C3B764(&ResponseCommandKind_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v6);
    byte_4C239C2 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(62, responseList, 0LL);
  if ( v7 && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8)) )
  {
    success = (Il2CppObject *)v9->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_22507/*"referrerMapId"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0LL);
}