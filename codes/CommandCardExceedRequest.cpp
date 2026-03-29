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
  if ( (byte_4D3247C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_24902/*"userSvtId"*/);
    sub_1C93AD4(&StringLiteral_24796/*"useItems"*/);
    sub_1C93AD4(&StringLiteral_20492/*"idx"*/);
    byte_4D3247C = 1;
  }
  RequestBase__addField_44911784((RequestBase_o *)this, (System_String_o *)StringLiteral_24902/*"userSvtId"*/, userServantId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20492/*"idx"*/, index, 0);
  RequestBase__addField_44913028(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24796/*"useItems"*/,
    (Il2CppObject *)useItems,
    0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CommandCardExceedRequest__getURL(CommandCardExceedRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D3247B & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_17892/*"card/commandCardExceed"*/);
    byte_4D3247B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_17892/*"card/commandCardExceed"*/, 0);
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

  if ( (byte_4D3247D & 1) == 0 )
  {
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&ResponseCommandKind_TypeInfo);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    byte_4D3247D = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(84, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44908744(v5, 0)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22483/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}