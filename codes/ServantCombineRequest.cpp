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

  if ( (byte_4C239BE & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17415/*"card/statusSync"*/, baseUsrSvtId);
    sub_1C3B764(&StringLiteral_20133/*"img_shopbg05"*/, v11);
    sub_1C3B764(&StringLiteral_24864/*"຀ༀ"*/, v12);
    sub_1C3B764(&StringLiteral_21769/*"noTargetSkipSkill"*/, v13);
    byte_4C239BE = 1;
  }
  RequestBase__addField_42628192((RequestBase_o *)this, (System_String_o *)StringLiteral_17415/*"card/statusSync"*/, baseUsrSvtId, 0LL);
  RequestBase__addField_42621852((RequestBase_o *)this, (System_String_o *)StringLiteral_21769/*"noTargetSkipSkill"*/, materialSvtIds, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24864/*"຀ༀ"*/, useQp, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20133/*"img_shopbg05"*/, getExp, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantCombineRequest__getMockData(ServantCombineRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4C239BD & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_9295/*"Non-exhaustive switch expression failed to match its input."*/, v2);
    byte_4C239BD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9295/*"Non-exhaustive switch expression failed to match its input."*/, 0LL);
}


System_String_o *__fastcall ServantCombineRequest__getURL(ServantCombineRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4C239BC & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_18090/*"d':'h':'mm':'ss'"*/, v2);
    byte_4C239BC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_18090/*"d':'h':'mm':'ss'"*/, 0LL);
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

  if ( (byte_4C239BF & 1) == 0 )
  {
    sub_1C3B764(&JsonManager_TypeInfo, responseList);
    sub_1C3B764(&ResponseCommandKind_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v6);
    byte_4C239BF = 1;
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
    v11 = (System_String_o *)StringLiteral_22507/*"referrerMapId"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0LL);
}