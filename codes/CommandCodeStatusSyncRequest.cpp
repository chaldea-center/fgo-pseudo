// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCodeStatusSyncRequest__beginRequest(
        CommandCodeStatusSyncRequest_o *this,
        System_Int64_array *changeCommandCodeIds,
        System_Int64_array *revokeCommandCodeIds,
        bool isLock,
        bool isChoice,
        const MethodInfo *method)
{
  RequestBase_o *v10; // x19
  System_String_o *v11; // x0
  const MethodInfo *v12; // x3
  System_String_o *v13; // x0
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1

  v10 = (RequestBase_o *)this;
  if ( (byte_4A5C9A7 & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17807/*"changeCommandCodeIds"*/);
    sub_1B885B0(&StringLiteral_22926/*"revokeCommandCodeIds"*/);
    sub_1B885B0(&StringLiteral_20799/*"isLock"*/);
    this = (CommandCodeStatusSyncRequest_o *)sub_1B885B0(&StringLiteral_20783/*"isChoice"*/);
    byte_4A5C9A7 = 1;
  }
  if ( changeCommandCodeIds && *(_QWORD *)&changeCommandCodeIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(&changeCommandCodeIds->obj, 0, 0, 0LL);
    RequestBase__addField_41126952(v10, (System_String_o *)StringLiteral_17807/*"changeCommandCodeIds"*/, v11, v12);
  }
  if ( revokeCommandCodeIds && *(_QWORD *)&revokeCommandCodeIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v13 = JsonManager__toJson(&revokeCommandCodeIds->obj, 0, 0, 0LL);
    RequestBase__addField_41126952(v10, (System_String_o *)StringLiteral_22926/*"revokeCommandCodeIds"*/, v13, v14);
  }
  if ( !v10 )
    sub_1B8880C(this, changeCommandCodeIds);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_20799/*"isLock"*/, isLock, (const MethodInfo *)isLock);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_20783/*"isChoice"*/, isChoice, v15);
  RequestBase__beginRequest(v10, v16);
}


System_String_o *__fastcall CommandCodeStatusSyncRequest__getMockData(
        CommandCodeStatusSyncRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5C9A6 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C9A6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CommandCodeStatusSyncRequest__getURL(
        CommandCodeStatusSyncRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C9A5 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_18152/*"commandCode/statusSync"*/);
    byte_4A5C9A5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_18152/*"commandCode/statusSync"*/, 0LL);
}


void __fastcall CommandCodeStatusSyncRequest__requestCompleted(
        CommandCodeStatusSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4A5C9A8 & 1) == 0 )
  {
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C9A8 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(72, responseList, 0LL);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22225/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22055/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v8,
    *(_QWORD *)&CallBack->fields.extra_arg);
}