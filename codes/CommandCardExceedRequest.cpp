void __fastcall CommandCardExceedRequest___ctor(CommandCardExceedRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall CommandCardExceedRequest__beginRequest(
        CommandCardExceedRequest_o *this,
        int64_t userId,
        int64_t userServantId,
        int32_t index,
        int32_t useItemId,
        int32_t exceedCount,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1

  if ( (byte_4A00262 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_24358/*"userSvtId"*/, userId);
    sub_1B64A00(&StringLiteral_19222/*"exceedCount"*/, v12);
    sub_1B64A00(&StringLiteral_24263/*"useItemId"*/, v13);
    sub_1B64A00(&StringLiteral_20137/*"idx"*/, v14);
    byte_4A00262 = 1;
  }
  RequestBase__addField_40855016((RequestBase_o *)this, (System_String_o *)StringLiteral_24358/*"userSvtId"*/, userServantId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20137/*"idx"*/, index, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24263/*"useItemId"*/, useItemId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19222/*"exceedCount"*/, exceedCount, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CommandCardExceedRequest__getURL(
        CommandCardExceedRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A00261 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_17685/*"card/commandCardExceed"*/, v2);
    byte_4A00261 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61385136(BaseUrl, (System_String_o *)StringLiteral_17685/*"card/commandCardExceed"*/, 0LL);
}


void __fastcall CommandCardExceedRequest__requestCompleted(
        CommandCardExceedRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_4A00263 & 1) == 0 )
  {
    sub_1B64A00(&JsonManager_TypeInfo, responseList);
    sub_1B64A00(&ResponseCommandKind_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_21971/*"ng"*/, v6);
    byte_4A00263 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(84, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_40851660(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21971/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}