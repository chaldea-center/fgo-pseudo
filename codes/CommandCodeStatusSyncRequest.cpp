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
  if ( (byte_4C28D7F & 1) == 0 )
  {
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&StringLiteral_17800/*"changeCommandCodeIds"*/);
    sub_1C2D490(&StringLiteral_23082/*"revokeCommandCodeIds"*/);
    sub_1C2D490(&StringLiteral_20916/*"isLock"*/);
    this = (CommandCodeStatusSyncRequest_o *)sub_1C2D490(&StringLiteral_20894/*"isChoice"*/);
    byte_4C28D7F = 1;
  }
  if ( changeCommandCodeIds && changeCommandCodeIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(&changeCommandCodeIds->obj, 0, 0, 0);
    RequestBase__addField_44009064(v10, (System_String_o *)StringLiteral_17800/*"changeCommandCodeIds"*/, v11, 0);
  }
  if ( revokeCommandCodeIds && revokeCommandCodeIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__toJson(&revokeCommandCodeIds->obj, 0, 0, 0);
    RequestBase__addField_44009064(v10, (System_String_o *)StringLiteral_23082/*"revokeCommandCodeIds"*/, v12, 0);
  }
  if ( !v10 )
    sub_1C2D6EC(this, changeCommandCodeIds);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_20916/*"isLock"*/, isLock, 0);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_20894/*"isChoice"*/, isChoice, 0);
  RequestBase__beginRequest(v10, 0);
}


System_String_o *CommandCodeStatusSyncRequest__getMockData(
        CommandCodeStatusSyncRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C28D7E & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28D7E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CommandCodeStatusSyncRequest__getURL(CommandCodeStatusSyncRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28D7D & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_18150/*"commandCode/statusSync"*/);
    byte_4C28D7D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_18150/*"commandCode/statusSync"*/, 0);
}


void CommandCodeStatusSyncRequest__requestCompleted(
        CommandCodeStatusSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4C28D80 & 1) == 0 )
  {
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22362/*"ok"*/);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28D80 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(72, responseList, 0);
  if ( v5 && ResponseData__checkError_44004292(v5, 0) )
    v6 = &StringLiteral_22362/*"ok"*/;
  else
    v6 = &StringLiteral_22195/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}