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
  __int64 v13; // x1
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1

  if ( (byte_4AB758C & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_24495/*"userSvtId"*/, userId);
    sub_1BAB41C(&StringLiteral_19326/*"exceedCount"*/, v12);
    sub_1BAB41C(&StringLiteral_24398/*"useItemId"*/, v13);
    sub_1BAB41C(&StringLiteral_20244/*"idx"*/, v14);
    byte_4AB758C = 1;
  }
  RequestBase__addField_41522804(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24495/*"userSvtId"*/,
    userServantId,
    *(const MethodInfo **)&index);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20244/*"idx"*/, index, v15);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24398/*"useItemId"*/, useItemId, v16);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19326/*"exceedCount"*/, exceedCount, v17);
  RequestBase__beginRequest((RequestBase_o *)this, v18);
}


System_String_o *__fastcall CommandCardExceedRequest__getURL(
        CommandCardExceedRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4AB758B & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_17783/*"card/commandCardExceed"*/, v2);
    byte_4AB758B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62048128(BaseUrl, (System_String_o *)StringLiteral_17783/*"card/commandCardExceed"*/, 0LL);
}


void __fastcall CommandCardExceedRequest__requestCompleted(
        CommandCardExceedRequest_o *this,
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

  if ( (byte_4AB758D & 1) == 0 )
  {
    sub_1BAB41C(&JsonManager_TypeInfo, responseList);
    sub_1BAB41C(&ResponseCommandKind_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_22090/*"ng"*/, v6);
    byte_4AB758D = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(84, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_41605928(v7, 0LL)) )
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
        StringLiteral_22090/*"ng"*/,
        *(_QWORD *)&v12->fields.extra_arg);
  }
}