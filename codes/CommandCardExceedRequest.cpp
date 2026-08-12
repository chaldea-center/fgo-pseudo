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
  if ( (byte_597239D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25941/*"userSvtId"*/);
    sub_2213A60(&StringLiteral_25831/*"useItems"*/);
    sub_2213A60(&StringLiteral_21246/*"idx"*/);
    byte_597239D = 1;
  }
  RequestBase__addField_51256716((RequestBase_o *)this, (System_String_o *)StringLiteral_25941/*"userSvtId"*/, userServantId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21246/*"idx"*/, index, 0);
  RequestBase__addField_51259092(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_25831/*"useItems"*/,
    (Il2CppObject *)useItems,
    0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CommandCardExceedRequest__getURL(CommandCardExceedRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_597239C & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_18537/*"card/commandCardExceed"*/);
    byte_597239C = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_18537/*"card/commandCardExceed"*/, 0);
}


void CommandCardExceedRequest__requestCompleted(
        CommandCardExceedRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  __int64 v7; // x1
  Il2CppObject *success; // x20
  System_String_o *v9; // x1

  if ( (byte_597239E & 1) == 0 )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_597239E = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(84, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_51257228(v5, 0)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v7);
    v9 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v9 = (System_String_o *)StringLiteral_23336/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v9, 0);
}