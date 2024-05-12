void __fastcall BattleInterruptionRequest___ctor(BattleInterruptionRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall BattleInterruptionRequest__beginRequest(
        BattleInterruptionRequest_o *this,
        int32_t questId,
        int32_t phase,
        int32_t restartWave,
        const MethodInfo *method)
{
  if ( (byte_4388109 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21911/*"phase"*/);
    sub_B775C4(&StringLiteral_22069/*"questId"*/);
    sub_B775C4(&StringLiteral_22259/*"restartWave"*/);
    byte_4388109 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22069/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21911/*"phase"*/, phase, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22259/*"restartWave"*/, restartWave, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleInterruptionRequest__getURL(
        BattleInterruptionRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4388108 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_16958/*"battle/interruption"*/);
    byte_4388108 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_16958/*"battle/interruption"*/, 0LL);
}


void __fastcall BattleInterruptionRequest__requestCompleted(
        BattleInterruptionRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_438810A & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438810A = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(128, responseList, 0LL);
  if ( v5 && ResponseData__checkError_30128096(v5, 0LL) )
    v6 = &StringLiteral_21657/*"ok"*/;
  else
    v6 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}