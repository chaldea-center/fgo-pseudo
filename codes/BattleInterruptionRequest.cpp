// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInterruptionRequest__beginRequest(
        BattleInterruptionRequest_o *this,
        int32_t questId,
        int32_t phase,
        int32_t restartWave,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1

  if ( (byte_4A2F6F2 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22504/*"phase"*/, *(_QWORD *)&questId);
    sub_1B761C0(&StringLiteral_22680/*"questId"*/, v9);
    sub_1B761C0(&StringLiteral_22889/*"restartWave"*/, v10);
    byte_4A2F6F2 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22680/*"questId"*/,
    questId,
    *(const MethodInfo **)&restartWave);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22504/*"phase"*/, phase, v11);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22889/*"restartWave"*/, restartWave, v12);
  RequestBase__beginRequest((RequestBase_o *)this, v13);
}


System_String_o *__fastcall BattleInterruptionRequest__getURL(
        BattleInterruptionRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A2F6F1 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_17086/*"battle/interruption"*/, v2);
    byte_4A2F6F1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61535060(BaseUrl, (System_String_o *)StringLiteral_17086/*"battle/interruption"*/, 0LL);
}


void __fastcall BattleInterruptionRequest__requestCompleted(
        BattleInterruptionRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v10; // x9

  if ( (byte_4A2F6F3 & 1) == 0 )
  {
    sub_1B761C0(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B761C0(&StringLiteral_22216/*"ok"*/, v5);
    sub_1B761C0(&StringLiteral_22046/*"ng"*/, v6);
    byte_4A2F6F3 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(128, responseList, 0LL);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_22216/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_22046/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v10,
    *(_QWORD *)&CallBack->fields.extra_arg);
}