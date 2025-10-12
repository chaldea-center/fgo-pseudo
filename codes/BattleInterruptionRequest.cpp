void BattleInterruptionRequest___ctor(BattleInterruptionRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void BattleInterruptionRequest__beginRequest(
        BattleInterruptionRequest_o *this,
        int32_t questId,
        int32_t phase,
        int32_t restartWave,
        const MethodInfo *method)
{
  if ( (byte_4C39403 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22677/*"phase"*/);
    sub_1C32C20(&StringLiteral_22857/*"questId"*/);
    sub_1C32C20(&StringLiteral_23067/*"restartWave"*/);
    byte_4C39403 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22857/*"questId"*/, questId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22677/*"phase"*/, phase, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23067/*"restartWave"*/, restartWave, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *BattleInterruptionRequest__getURL(BattleInterruptionRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C39402 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_17052/*"battle/interruption"*/);
    byte_4C39402 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63518544(BaseUrl, (System_String_o *)StringLiteral_17052/*"battle/interruption"*/, 0);
}


void BattleInterruptionRequest__requestCompleted(
        BattleInterruptionRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4C39404 & 1) == 0 )
  {
    sub_1C32C20(&ResponseCommandKind_TypeInfo);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    byte_4C39404 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(128, responseList, 0);
  if ( v5 && ResponseData__checkError_44140424(v5, 0) )
    v6 = &StringLiteral_22379/*"ok"*/;
  else
    v6 = &StringLiteral_22212/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}