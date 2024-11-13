// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInterruptionRequest__beginRequest(
        BattleInterruptionRequest_o *this,
        int32_t questId,
        int32_t phase,
        int32_t restartWave,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1

  if ( (byte_4B179E4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22756/*"phase"*/, *(_QWORD *)&questId, *(_QWORD *)&phase);
    sub_1BCA7E0(&StringLiteral_22933/*"questId"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_23146/*"restartWave"*/, v11, v12);
    byte_4B179E4 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22933/*"questId"*/,
    questId,
    *(const MethodInfo **)&restartWave);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22756/*"phase"*/, phase, v13);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23146/*"restartWave"*/, restartWave, v14);
  RequestBase__beginRequest((RequestBase_o *)this, v15);
}


System_String_o *__fastcall BattleInterruptionRequest__getURL(
        BattleInterruptionRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B179E3 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17264/*"battle/interruption"*/, v3, v4);
    byte_4B179E3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_17264/*"battle/interruption"*/, 0LL);
}


void __fastcall BattleInterruptionRequest__requestCompleted(
        BattleInterruptionRequest_o *this,
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

  if ( (byte_4B179E5 & 1) == 0 )
  {
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, responseList, method);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B179E5 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(128, responseList, 0LL);
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