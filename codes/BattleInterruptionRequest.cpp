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

  if ( (byte_4AB751C & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_22552/*"phase"*/, *(_QWORD *)&questId);
    sub_1BAB41C(&StringLiteral_22728/*"questId"*/, v9);
    sub_1BAB41C(&StringLiteral_22939/*"restartWave"*/, v10);
    byte_4AB751C = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22728/*"questId"*/,
    questId,
    *(const MethodInfo **)&restartWave);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22552/*"phase"*/, phase, v11);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22939/*"restartWave"*/, restartWave, v12);
  RequestBase__beginRequest((RequestBase_o *)this, v13);
}


System_String_o *__fastcall BattleInterruptionRequest__getURL(
        BattleInterruptionRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4AB751B & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_17125/*"battle/interruption"*/, v2);
    byte_4AB751B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62048128(BaseUrl, (System_String_o *)StringLiteral_17125/*"battle/interruption"*/, 0LL);
}


void __fastcall BattleInterruptionRequest__requestCompleted(
        BattleInterruptionRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4AB751D & 1) == 0 )
  {
    sub_1BAB41C(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BAB41C(&StringLiteral_22261/*"ok"*/, v5);
    sub_1BAB41C(&StringLiteral_22090/*"ng"*/, v6);
    byte_4AB751D = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(128, responseList, 0LL);
  if ( v7 && ResponseData__checkError_41605928(v7, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22261/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22090/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}