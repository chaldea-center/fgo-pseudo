void CommandCodeStatusSyncRequest___ctor(CommandCodeStatusSyncRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void CommandCodeStatusSyncRequest__beginRequest(
        CommandCodeStatusSyncRequest_o *this,
        System_Int64_array *changeCommandCodeIds,
        System_Int64_array *revokeCommandCodeIds,
        bool isLock,
        bool isChoice,
        const MethodInfo *method)
{
  RequestBase_o *v10; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x0

  v10 = (RequestBase_o *)this;
  if ( (byte_59723AE & 1) == 0 )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_18596/*"changeCommandCodeIds"*/);
    sub_2213A60(&StringLiteral_24312/*"revokeCommandCodeIds"*/);
    sub_2213A60(&StringLiteral_21947/*"isLock"*/);
    this = (CommandCodeStatusSyncRequest_o *)sub_2213A60(&StringLiteral_21914/*"isChoice"*/);
    byte_59723AE = 1;
  }
  if ( changeCommandCodeIds && changeCommandCodeIds->max_length )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, changeCommandCodeIds);
    v11 = JsonManager__toJson(&changeCommandCodeIds->obj, 0, 0, 0);
    RequestBase__addField_51259256(v10, (System_String_o *)StringLiteral_18596/*"changeCommandCodeIds"*/, v11, 0);
  }
  if ( revokeCommandCodeIds && revokeCommandCodeIds->max_length )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, changeCommandCodeIds);
    v12 = JsonManager__toJson(&revokeCommandCodeIds->obj, 0, 0, 0);
    RequestBase__addField_51259256(v10, (System_String_o *)StringLiteral_24312/*"revokeCommandCodeIds"*/, v12, 0);
  }
  if ( !v10 )
    sub_2213CDC(this, changeCommandCodeIds);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_21947/*"isLock"*/, isLock, 0);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_21914/*"isChoice"*/, isChoice, 0);
  RequestBase__beginRequest(v10, 0);
}


System_String_o *CommandCodeStatusSyncRequest__getMockData(
        CommandCodeStatusSyncRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_59723AD & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59723AD = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CommandCodeStatusSyncRequest__getURL(CommandCodeStatusSyncRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_59723AC & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_18966/*"commandCode/statusSync"*/);
    byte_59723AC = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_18966/*"commandCode/statusSync"*/, 0);
}


void CommandCodeStatusSyncRequest__requestCompleted(
        CommandCodeStatusSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_59723AF & 1) == 0 )
  {
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_59723AF = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(72, responseList, 0);
  if ( v5 && ResponseData__checkError_51257228(v5, 0) )
    v6 = &StringLiteral_23515/*"ok"*/;
  else
    v6 = &StringLiteral_23336/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}