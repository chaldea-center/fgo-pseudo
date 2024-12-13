// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCodeAttachRequest__beginRequest(
        CommandCodeAttachRequest_o *this,
        int32_t servantId,
        int32_t idx,
        int64_t userCommandCodeId,
        int64_t attachedUserCommandCodeId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1

  if ( (byte_4B38A26 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_23990/*"svtId"*/, *(_QWORD *)&servantId);
    sub_1BD3458(&StringLiteral_24668/*"userCommandCodeId"*/, v11);
    sub_1BD3458(&StringLiteral_20458/*"idx"*/, v12);
    sub_1BD3458(&StringLiteral_17142/*"attachedUserCommandCodeId"*/, v13);
    byte_4B38A26 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23990/*"svtId"*/,
    servantId,
    (const MethodInfo *)userCommandCodeId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20458/*"idx"*/, idx, v14);
  RequestBase__addField_41971420((RequestBase_o *)this, (System_String_o *)StringLiteral_24668/*"userCommandCodeId"*/, userCommandCodeId, v15);
  RequestBase__addField_41971420(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17142/*"attachedUserCommandCodeId"*/,
    attachedUserCommandCodeId,
    v16);
  RequestBase__beginRequest((RequestBase_o *)this, v17);
}


System_String_o *__fastcall CommandCodeAttachRequest__getURL(
        CommandCodeAttachRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B38A25 & 1) == 0 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_18360/*"commandCode/attach"*/, v2);
    byte_4B38A25 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62525248(BaseUrl, (System_String_o *)StringLiteral_18360/*"commandCode/attach"*/, 0LL);
}


void __fastcall CommandCodeAttachRequest__requestCompleted(
        CommandCodeAttachRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v12; // x8

  if ( (byte_4B38A27 & 1) == 0 )
  {
    sub_1BD3458(&JsonManager_TypeInfo, responseList);
    sub_1BD3458(&ResponseCommandKind_TypeInfo, v5);
    sub_1BD3458(&StringLiteral_22325/*"ng"*/, v6);
    byte_4B38A27 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(77, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_42055668(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v10,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v12 = this->fields.CallBack;
    if ( v12 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v12->fields.m_target)(
        v12->fields.original_method_info,
        StringLiteral_22325/*"ng"*/,
        *(_QWORD *)&v12->fields.extra_arg);
  }
}