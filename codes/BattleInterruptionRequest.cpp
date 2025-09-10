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
  if ( (byte_4C28CFA & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22660/*"phase"*/);
    sub_1C2D490(&StringLiteral_22840/*"questId"*/);
    sub_1C2D490(&StringLiteral_23050/*"restartWave"*/);
    byte_4C28CFA = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22840/*"questId"*/, questId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22660/*"phase"*/, phase, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23050/*"restartWave"*/, restartWave, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *BattleInterruptionRequest__getURL(BattleInterruptionRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28CF9 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_17049/*"battle/interruption"*/);
    byte_4C28CF9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_17049/*"battle/interruption"*/, 0);
}


void BattleInterruptionRequest__requestCompleted(
        BattleInterruptionRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4C28CFB & 1) == 0 )
  {
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22362/*"ok"*/);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28CFB = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(128, responseList, 0);
  if ( v5 && ResponseData__checkError_44004292(v5, 0) )
    v6 = &StringLiteral_22362/*"ok"*/;
  else
    v6 = &StringLiteral_22195/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}