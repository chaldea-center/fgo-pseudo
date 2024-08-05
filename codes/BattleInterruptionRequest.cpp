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

  if ( (byte_49FFBD1 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22426/*"phase"*/, *(_QWORD *)&questId);
    sub_1B64870(&StringLiteral_22601/*"questId"*/, v9);
    sub_1B64870(&StringLiteral_22808/*"restartWave"*/, v10);
    byte_49FFBD1 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22601/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22426/*"phase"*/, phase, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22808/*"restartWave"*/, restartWave, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleInterruptionRequest__getURL(
        BattleInterruptionRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FFBD0 & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, method);
    sub_1B64870(&StringLiteral_17026/*"battle/interruption"*/, v2);
    byte_49FFBD0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61383576(BaseUrl, (System_String_o *)StringLiteral_17026/*"battle/interruption"*/, 0LL);
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

  if ( (byte_49FFBD2 & 1) == 0 )
  {
    sub_1B64870(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B64870(&StringLiteral_22140/*"ok"*/, v5);
    sub_1B64870(&StringLiteral_21971/*"ng"*/, v6);
    byte_49FFBD2 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(128, responseList, 0LL);
  if ( v7 && ResponseData__checkError_40851148(v7, 0LL) )
    v8 = &StringLiteral_22140/*"ok"*/;
  else
    v8 = &StringLiteral_21971/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}