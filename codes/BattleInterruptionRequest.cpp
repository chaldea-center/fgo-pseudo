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
  if ( (byte_593A146 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23800/*"phase"*/);
    sub_21FFC50(&StringLiteral_24004/*"questId"*/);
    sub_21FFC50(&StringLiteral_24230/*"restartWave"*/);
    byte_593A146 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24004/*"questId"*/, questId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23800/*"phase"*/, phase, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24230/*"restartWave"*/, restartWave, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *BattleInterruptionRequest__getURL(BattleInterruptionRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A145 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_17744/*"battle/interruption"*/);
    byte_593A145 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_17744/*"battle/interruption"*/, 0);
}


void BattleInterruptionRequest__requestCompleted(
        BattleInterruptionRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_593A147 & 1) == 0 )
  {
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A147 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(128, responseList, 0);
  if ( v5 && ResponseData__checkError_51190916(v5, 0) )
    v6 = &StringLiteral_23468/*"ok"*/;
  else
    v6 = &StringLiteral_23290/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}