void ServantRecoverySyncRequest__beginRequest(
        ServantRecoverySyncRequest_o *this,
        int32_t eventId,
        int32_t index,
        int64_t inUserSvtId,
        int64_t outUserSvtId,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1

  if ( (byte_593A2F5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21713/*"index"*/);
    sub_21FFC50(&StringLiteral_19995/*"eventId"*/);
    sub_21FFC50(&StringLiteral_19891/*"enterUserSvtId"*/);
    sub_21FFC50(&StringLiteral_23595/*"outUserSvtId"*/);
    byte_593A2F5 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19995/*"eventId"*/,
    eventId,
    (const MethodInfo *)inUserSvtId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21713/*"index"*/, index, v11);
  RequestBase__addField_51200900((RequestBase_o *)this, (System_String_o *)StringLiteral_19891/*"enterUserSvtId"*/, inUserSvtId, v12);
  RequestBase__addField_51200900((RequestBase_o *)this, (System_String_o *)StringLiteral_23595/*"outUserSvtId"*/, outUserSvtId, v13);
  RequestBase__beginRequest((RequestBase_o *)this, v14);
}


System_String_o *ServantRecoverySyncRequest__getURL(ServantRecoverySyncRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A2F4 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_19983/*"event/recoverySync"*/);
    byte_593A2F4 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_19983/*"event/recoverySync"*/, 0);
}


void ServantRecoverySyncRequest__requestCompleted(
        ServantRecoverySyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  __int64 v8; // x1
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v12; // x1

  if ( (byte_593A2F6 & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A2F6 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(73, responseList, 0);
  if ( !v5 || (v7 = v5, !ResponseData__checkError(v5, v5->fields.resCode, v6)) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v12 = StringLiteral_23290/*"ng"*/;
    goto LABEL_13;
  }
  success = (Il2CppObject *)v7->fields.success;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
  v10 = JsonManager__toJson(success, 0, 0, 0);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v12 = (__int64)v10;
LABEL_13:
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      v12,
      CallBack->fields.method);
  }
}