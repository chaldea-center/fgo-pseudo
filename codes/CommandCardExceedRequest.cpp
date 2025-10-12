void CommandCardExceedRequest___ctor(CommandCardExceedRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void CommandCardExceedRequest__beginRequest(
        CommandCardExceedRequest_o *this,
        int64_t userId,
        int64_t userServantId,
        int32_t index,
        System_Collections_Generic_Dictionary_int__int__o *useItems,
        const MethodInfo *method)
{
  if ( (byte_4C39477 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_24582/*"userSvtId"*/);
    sub_1C32C20(&StringLiteral_24479/*"useItems"*/);
    sub_1C32C20(&StringLiteral_20264/*"idx"*/);
    byte_4C39477 = 1;
  }
  RequestBase__addField_44144740((RequestBase_o *)this, (System_String_o *)StringLiteral_24582/*"userSvtId"*/, userServantId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20264/*"idx"*/, index, 0);
  RequestBase__addField_44145300(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24479/*"useItems"*/,
    (Il2CppObject *)useItems,
    0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CommandCardExceedRequest__getURL(CommandCardExceedRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C39476 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_17747/*"card/commandCardExceed"*/);
    byte_4C39476 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63518544(BaseUrl, (System_String_o *)StringLiteral_17747/*"card/commandCardExceed"*/, 0);
}


void CommandCardExceedRequest__requestCompleted(
        CommandCardExceedRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4C39478 & 1) == 0 )
  {
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&ResponseCommandKind_TypeInfo);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    byte_4C39478 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(84, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44140424(v5, 0)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22212/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}