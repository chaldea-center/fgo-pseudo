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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *v15; // x0
  const MethodInfo *v16; // x3
  System_String_o *v17; // x0
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1

  v10 = (RequestBase_o *)this;
  if ( (byte_4BC939E & 1) == 0 )
  {
    sub_1C1ABD4(&JsonManager_TypeInfo, changeCommandCodeIds);
    sub_1C1ABD4(&StringLiteral_18097/*"changeCommandCodeIds"*/, v11);
    sub_1C1ABD4(&StringLiteral_23325/*"revokeCommandCodeIds"*/, v12);
    sub_1C1ABD4(&StringLiteral_21158/*"isLock"*/, v13);
    this = (CommandCodeStatusSyncRequest_o *)sub_1C1ABD4(&StringLiteral_21141/*"isChoice"*/, v14);
    byte_4BC939E = 1;
  }
  if ( changeCommandCodeIds && *(_QWORD *)&changeCommandCodeIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson(&changeCommandCodeIds->obj, 0, 0, 0LL);
    RequestBase__addField_42362156(v10, (System_String_o *)StringLiteral_18097/*"changeCommandCodeIds"*/, v15, v16);
  }
  if ( revokeCommandCodeIds && *(_QWORD *)&revokeCommandCodeIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v17 = JsonManager__toJson(&revokeCommandCodeIds->obj, 0, 0, 0LL);
    RequestBase__addField_42362156(v10, (System_String_o *)StringLiteral_23325/*"revokeCommandCodeIds"*/, v17, v18);
  }
  if ( !v10 )
    sub_1C1AE30(this, changeCommandCodeIds);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_21158/*"isLock"*/, isLock, (const MethodInfo *)isLock);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_21141/*"isChoice"*/, isChoice, v19);
  RequestBase__beginRequest(v10, v20);
}


System_String_o *__fastcall CommandCodeStatusSyncRequest__getMockData(
        CommandCodeStatusSyncRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4BC939D & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v2);
    byte_4BC939D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CommandCodeStatusSyncRequest__getURL(
        CommandCodeStatusSyncRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BC939C & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_18447/*"commandCode/statusSync"*/, v2);
    byte_4BC939C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63040368(BaseUrl, (System_String_o *)StringLiteral_18447/*"commandCode/statusSync"*/, 0LL);
}


void __fastcall CommandCodeStatusSyncRequest__requestCompleted(
        CommandCodeStatusSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4BC939F & 1) == 0 )
  {
    sub_1C1ABD4(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C1ABD4(&StringLiteral_22613/*"ok"*/, v5);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v6);
    byte_4BC939F = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(72, responseList, 0LL);
  if ( v7 && ResponseData__checkError_42452820(v7, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22613/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22437/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}