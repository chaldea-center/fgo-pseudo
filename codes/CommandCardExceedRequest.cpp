// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedRequest__beginRequest(
        CommandCardExceedRequest_o *this,
        int64_t userId,
        int64_t userServantId,
        int32_t index,
        int32_t useItemId,
        int32_t exceedCount,
        const MethodInfo *method)
{
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1

  if ( (byte_4A5C996 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24453/*"userSvtId"*/);
    sub_1B885B0(&StringLiteral_19296/*"exceedCount"*/);
    sub_1B885B0(&StringLiteral_24358/*"useItemId"*/);
    sub_1B885B0(&StringLiteral_20214/*"idx"*/);
    byte_4A5C996 = 1;
  }
  RequestBase__addField_41133280(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24453/*"userSvtId"*/,
    userServantId,
    *(const MethodInfo **)&index);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20214/*"idx"*/, index, v12);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24358/*"useItemId"*/, useItemId, v13);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19296/*"exceedCount"*/, exceedCount, v14);
  RequestBase__beginRequest((RequestBase_o *)this, v15);
}


System_String_o *__fastcall CommandCardExceedRequest__getURL(
        CommandCardExceedRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C995 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17752/*"card/commandCardExceed"*/);
    byte_4A5C995 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_17752/*"card/commandCardExceed"*/, 0LL);
}


void __fastcall CommandCardExceedRequest__requestCompleted(
        CommandCardExceedRequest_o *this,
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

  if ( (byte_4A5C997 & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C997 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(84, responseList, 0LL);
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