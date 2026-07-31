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
  if ( (byte_593A1D1 & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18558/*"changeCommandCodeIds"*/);
    sub_21FFC50(&StringLiteral_24264/*"revokeCommandCodeIds"*/);
    sub_21FFC50(&StringLiteral_21905/*"isLock"*/);
    this = (CommandCodeStatusSyncRequest_o *)sub_21FFC50(&StringLiteral_21872/*"isChoice"*/);
    byte_593A1D1 = 1;
  }
  if ( changeCommandCodeIds && changeCommandCodeIds->max_length )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, changeCommandCodeIds);
    v11 = JsonManager__toJson(&changeCommandCodeIds->obj, 0, 0, 0);
    RequestBase__addField_51187332(v10, (System_String_o *)StringLiteral_18558/*"changeCommandCodeIds"*/, v11, 0);
  }
  if ( revokeCommandCodeIds && revokeCommandCodeIds->max_length )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, changeCommandCodeIds);
    v12 = JsonManager__toJson(&revokeCommandCodeIds->obj, 0, 0, 0);
    RequestBase__addField_51187332(v10, (System_String_o *)StringLiteral_24264/*"revokeCommandCodeIds"*/, v12, 0);
  }
  if ( !v10 )
    sub_21FFECC(this, changeCommandCodeIds);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_21905/*"isLock"*/, isLock, 0);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_21872/*"isChoice"*/, isChoice, 0);
  RequestBase__beginRequest(v10, 0);
}


System_String_o *CommandCodeStatusSyncRequest__getMockData(
        CommandCodeStatusSyncRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_593A1D0 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A1D0 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CommandCodeStatusSyncRequest__getURL(CommandCodeStatusSyncRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A1CF & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18928/*"commandCode/statusSync"*/);
    byte_593A1CF = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_18928/*"commandCode/statusSync"*/, 0);
}


void CommandCodeStatusSyncRequest__requestCompleted(
        CommandCodeStatusSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_593A1D2 & 1) == 0 )
  {
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A1D2 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(72, responseList, 0);
  if ( v5 && ResponseData__checkError_51190916(v5, 0) )
    v6 = &StringLiteral_23468/*"ok"*/;
  else
    v6 = &StringLiteral_23290/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}