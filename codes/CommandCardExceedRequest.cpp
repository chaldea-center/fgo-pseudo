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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1

  if ( (byte_4B17A54 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24707/*"userSvtId"*/, userId, userServantId);
    sub_1BCA7E0(&StringLiteral_19497/*"exceedCount"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_24610/*"useItemId"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_20428/*"idx"*/, v16, v17);
    byte_4B17A54 = 1;
  }
  RequestBase__addField_41868688(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24707/*"userSvtId"*/,
    userServantId,
    *(const MethodInfo **)&index);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20428/*"idx"*/, index, v18);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24610/*"useItemId"*/, useItemId, v19);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19497/*"exceedCount"*/, exceedCount, v20);
  RequestBase__beginRequest((RequestBase_o *)this, v21);
}


System_String_o *__fastcall CommandCardExceedRequest__getURL(
        CommandCardExceedRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17A53 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17933/*"card/commandCardExceed"*/, v3, v4);
    byte_4B17A53 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_17933/*"card/commandCardExceed"*/, 0LL);
}


void __fastcall CommandCardExceedRequest__requestCompleted(
        CommandCardExceedRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  ResponseData_o *v10; // x20
  __int64 v11; // x1
  Il2CppObject *success; // x20
  System_String_o *v13; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v15; // x8

  if ( (byte_4B17A55 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17A55 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(84, responseList, 0LL);
  if ( v9 && (v10 = v9, ResponseData__checkError_41952396(v9, 0LL)) )
  {
    success = (Il2CppObject *)v10->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v11);
    v13 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v13,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v15 = this->fields.CallBack;
    if ( v15 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v15->fields.m_target)(
        v15->fields.original_method_info,
        StringLiteral_22292/*"ng"*/,
        *(_QWORD *)&v15->fields.extra_arg);
  }
}