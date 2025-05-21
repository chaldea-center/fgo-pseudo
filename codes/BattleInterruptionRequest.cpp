void __fastcall BattleInterruptionRequest___ctor(BattleInterruptionRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


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

  if ( (byte_4B4642E & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22699/*"phase"*/, *(_QWORD *)&questId);
    sub_1BDB878(&StringLiteral_22882/*"questId"*/, v9);
    sub_1BDB878(&StringLiteral_23093/*"restartWave"*/, v10);
    byte_4B4642E = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22882/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22699/*"phase"*/, phase, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23093/*"restartWave"*/, restartWave, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleInterruptionRequest__getURL(
        BattleInterruptionRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B4642D & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_17070/*"battle/interruption"*/, v2);
    byte_4B4642D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62572260(BaseUrl, (System_String_o *)StringLiteral_17070/*"battle/interruption"*/, 0LL);
}


void __fastcall BattleInterruptionRequest__requestCompleted(
        BattleInterruptionRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4B4642F & 1) == 0 )
  {
    sub_1BDB878(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BDB878(&StringLiteral_22401/*"ok"*/, v5);
    sub_1BDB878(&StringLiteral_22233/*"ng"*/, v6);
    byte_4B4642F = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(128, responseList, 0LL);
  if ( v7 && ResponseData__checkError_43151432(v7, 0LL) )
    v8 = &StringLiteral_22401/*"ok"*/;
  else
    v8 = &StringLiteral_22233/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}