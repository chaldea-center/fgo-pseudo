void __fastcall BattleResetRequest__beginRequest(BattleResetRequest_o *this, int32_t questId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4BDDDC7 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_23101/*"questId"*/);
    byte_4BDDDC7 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23101/*"questId"*/, questId, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall BattleResetRequest__getURL(BattleResetRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDDC6 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_17380/*"battle/reset"*/);
    byte_4BDDDC6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_17380/*"battle/reset"*/, 0LL);
}


void __fastcall BattleResetRequest__requestCompleted(
        BattleResetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v10; // x8

  if ( (byte_4BDDDC8 & 1) == 0 )
  {
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDDDC8 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(113, responseList, 0LL);
  if ( v5 && (v6 = v5, ResponseData__checkError_42505456(v5, 0LL)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v8,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v10 = this->fields.CallBack;
    if ( v10 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v10->fields.m_target)(
        v10->fields.original_method_info,
        StringLiteral_22456/*"ng"*/,
        *(_QWORD *)&v10->fields.extra_arg);
  }
}