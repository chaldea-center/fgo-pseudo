void __fastcall CommandCodeAttachRequest__beginRequest(
        CommandCodeAttachRequest_o *this,
        int32_t servantId,
        int32_t idx,
        int64_t userCommandCodeId,
        int64_t attachedUserCommandCodeId,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1

  if ( (byte_4A5C999 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23707/*"svtId"*/);
    sub_1B885B0(&StringLiteral_24379/*"userCommandCodeId"*/);
    sub_1B885B0(&StringLiteral_20214/*"idx"*/);
    sub_1B885B0(&StringLiteral_16950/*"attachedUserCommandCodeId"*/);
    byte_4A5C999 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23707/*"svtId"*/,
    servantId,
    (const MethodInfo *)userCommandCodeId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20214/*"idx"*/, idx, v11);
  RequestBase__addField_41133280((RequestBase_o *)this, (System_String_o *)StringLiteral_24379/*"userCommandCodeId"*/, userCommandCodeId, v12);
  RequestBase__addField_41133280(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_16950/*"attachedUserCommandCodeId"*/,
    attachedUserCommandCodeId,
    v13);
  RequestBase__beginRequest((RequestBase_o *)this, v14);
}


System_String_o *__fastcall CommandCodeAttachRequest__getURL(
        CommandCodeAttachRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C998 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_18148/*"commandCode/attach"*/);
    byte_4A5C998 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_18148/*"commandCode/attach"*/, 0LL);
}


void __fastcall CommandCodeAttachRequest__requestCompleted(
        CommandCodeAttachRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v11; // x8

  if ( (byte_4A5C99A & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C99A = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(77, responseList, 0LL);
  if ( v5 && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6)) )
  {
    success = (Il2CppObject *)v7->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v9,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v11 = this->fields.CallBack;
    if ( v11 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v11->fields.m_target)(
        v11->fields.original_method_info,
        StringLiteral_22055/*"ng"*/,
        *(_QWORD *)&v11->fields.extra_arg);
  }
}