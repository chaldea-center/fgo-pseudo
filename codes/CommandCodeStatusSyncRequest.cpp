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
  if ( (byte_4C238B6 & 1) == 0 )
  {
    sub_1C3B764(&JsonManager_TypeInfo, changeCommandCodeIds);
    sub_1C3B764(&StringLiteral_18155/*"de-CH"*/, v11);
    sub_1C3B764(&StringLiteral_23408/*"sync"*/, v12);
    sub_1C3B764(&StringLiteral_21221/*"mstArea"*/, v13);
    this = (CommandCodeStatusSyncRequest_o *)sub_1C3B764(&StringLiteral_21204/*"ms-BN"*/, v14);
    byte_4C238B6 = 1;
  }
  if ( changeCommandCodeIds && *(_QWORD *)&changeCommandCodeIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson(&changeCommandCodeIds->obj, 0, 0, 0LL);
    RequestBase__addField_42621852(v10, (System_String_o *)StringLiteral_18155/*"de-CH"*/, v15, v16);
  }
  if ( revokeCommandCodeIds && *(_QWORD *)&revokeCommandCodeIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v17 = JsonManager__toJson(&revokeCommandCodeIds->obj, 0, 0, 0LL);
    RequestBase__addField_42621852(v10, (System_String_o *)StringLiteral_23408/*"sync"*/, v17, v18);
  }
  if ( !v10 )
    sub_1C3B9C0(this, changeCommandCodeIds);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_21221/*"mstArea"*/, isLock, (const MethodInfo *)isLock);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_21204/*"ms-BN"*/, isChoice, v19);
  RequestBase__beginRequest(v10, v20);
}


System_String_o *__fastcall CommandCodeStatusSyncRequest__getMockData(
        CommandCodeStatusSyncRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4C238B5 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v2);
    byte_4C238B5 = 1;
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

  if ( (byte_4C238B4 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_18507/*"ef_soundplay"*/, v2);
    byte_4C238B4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_18507/*"ef_soundplay"*/, 0LL);
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

  if ( (byte_4C238B7 & 1) == 0 )
  {
    sub_1C3B764(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v5);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v6);
    byte_4C238B7 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(72, responseList, 0LL);
  if ( v7 && ResponseData__checkError_42712632(v7, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22683/*"sandboxSeurity"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22507/*"referrerMapId"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}