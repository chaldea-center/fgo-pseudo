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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *v19; // x0
  const MethodInfo *v20; // x3
  System_String_o *v21; // x0
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1

  v10 = (RequestBase_o *)this;
  if ( (byte_4B17A65 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, changeCommandCodeIds, revokeCommandCodeIds);
    sub_1BCA7E0(&StringLiteral_17990/*"changeCommandCodeIds"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_23173/*"revokeCommandCodeIds"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_21025/*"isLock"*/, v15, v16);
    this = (CommandCodeStatusSyncRequest_o *)sub_1BCA7E0(&StringLiteral_21009/*"isChoice"*/, v17, v18);
    byte_4B17A65 = 1;
  }
  if ( changeCommandCodeIds && *(_QWORD *)&changeCommandCodeIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, changeCommandCodeIds);
    v19 = JsonManager__toJson(&changeCommandCodeIds->obj, 0, 0, 0LL);
    RequestBase__addField_41862348(v10, (System_String_o *)StringLiteral_17990/*"changeCommandCodeIds"*/, v19, v20);
  }
  if ( revokeCommandCodeIds && *(_QWORD *)&revokeCommandCodeIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, changeCommandCodeIds);
    v21 = JsonManager__toJson(&revokeCommandCodeIds->obj, 0, 0, 0LL);
    RequestBase__addField_41862348(v10, (System_String_o *)StringLiteral_23173/*"revokeCommandCodeIds"*/, v21, v22);
  }
  if ( !v10 )
    sub_1BCAA3C(this, changeCommandCodeIds);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_21025/*"isLock"*/, isLock, (const MethodInfo *)isLock);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_21009/*"isChoice"*/, isChoice, v23);
  RequestBase__beginRequest(v10, v24);
}


System_String_o *__fastcall CommandCodeStatusSyncRequest__getMockData(
        CommandCodeStatusSyncRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B17A64 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v3, v4);
    byte_4B17A64 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CommandCodeStatusSyncRequest__getURL(
        CommandCodeStatusSyncRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17A63 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_18336/*"commandCode/statusSync"*/, v3, v4);
    byte_4B17A63 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_18336/*"commandCode/statusSync"*/, 0LL);
}


void __fastcall CommandCodeStatusSyncRequest__requestCompleted(
        CommandCodeStatusSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v11; // x9

  if ( (byte_4B17A66 & 1) == 0 )
  {
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, responseList, method);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17A66 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(72, responseList, 0LL);
  if ( v9 && ResponseData__checkError_41952396(v9, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v11 = &StringLiteral_22465/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v11 = &StringLiteral_22292/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v11,
    *(_QWORD *)&CallBack->fields.extra_arg);
}