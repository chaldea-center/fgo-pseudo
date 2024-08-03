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

  if ( (byte_49FDAD6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22423/*"phase"*/, *(_QWORD *)&questId);
    sub_1B640C8(&StringLiteral_22598/*"questId"*/, v9);
    sub_1B640C8(&StringLiteral_22805/*"restartWave"*/, v10);
    byte_49FDAD6 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22598/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22423/*"phase"*/, phase, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22805/*"restartWave"*/, restartWave, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleInterruptionRequest__getURL(
        BattleInterruptionRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FDAD5 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_17024/*"battle/interruption"*/, v2);
    byte_49FDAD5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61375396(BaseUrl, (System_String_o *)StringLiteral_17024/*"battle/interruption"*/, 0LL);
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

  if ( (byte_49FDAD7 & 1) == 0 )
  {
    sub_1B640C8(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v5);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v6);
    byte_49FDAD7 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(128, responseList, 0LL);
  if ( v7 && ResponseData__checkError_40846016(v7, 0LL) )
    v8 = &StringLiteral_22137/*"ok"*/;
  else
    v8 = &StringLiteral_21968/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}