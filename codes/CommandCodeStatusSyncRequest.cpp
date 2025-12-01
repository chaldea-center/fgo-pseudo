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
  RequestBase_o *v10; // x19
  System_String_o *v11; // x0
  System_String_o *v12; // x0

  v10 = (RequestBase_o *)this;
  if ( (byte_4CC8EF0 & 1) == 0 )
  {
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&StringLiteral_17832/*"changeCommandCodeIds"*/);
    sub_1C713B0(&StringLiteral_23219/*"revokeCommandCodeIds"*/);
    sub_1C713B0(&StringLiteral_21010/*"isLock"*/);
    this = (CommandCodeStatusSyncRequest_o *)sub_1C713B0(&StringLiteral_20988/*"isChoice"*/);
    byte_4CC8EF0 = 1;
  }
  if ( changeCommandCodeIds && changeCommandCodeIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(&changeCommandCodeIds->obj, 0, 0, 0);
    RequestBase__addField_44518324(v10, (System_String_o *)StringLiteral_17832/*"changeCommandCodeIds"*/, v11, 0);
  }
  if ( revokeCommandCodeIds && revokeCommandCodeIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__toJson(&revokeCommandCodeIds->obj, 0, 0, 0);
    RequestBase__addField_44518324(v10, (System_String_o *)StringLiteral_23219/*"revokeCommandCodeIds"*/, v12, 0);
  }
  if ( !v10 )
    sub_1C71608(this, changeCommandCodeIds);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_21010/*"isLock"*/, isLock, 0);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_20988/*"isChoice"*/, isChoice, 0);
  RequestBase__beginRequest(v10, 0);
}


System_String_o *CommandCodeStatusSyncRequest__getMockData(
        CommandCodeStatusSyncRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC8EEF & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8EEF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CommandCodeStatusSyncRequest__getURL(CommandCodeStatusSyncRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC8EEE & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_18188/*"commandCode/statusSync"*/);
    byte_4CC8EEE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_18188/*"commandCode/statusSync"*/, 0);
}


void CommandCodeStatusSyncRequest__requestCompleted(
        CommandCodeStatusSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4CC8EF1 & 1) == 0 )
  {
    sub_1C713B0(&ResponseCommandKind_TypeInfo);
    sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    byte_4CC8EF1 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(72, responseList, 0);
  if ( v5 && ResponseData__checkError_44515240(v5, 0) )
    v6 = &StringLiteral_22486/*"ok"*/;
  else
    v6 = &StringLiteral_22316/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}