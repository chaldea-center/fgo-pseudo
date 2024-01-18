void __fastcall WarBoardBattleResumeRequest___ctor(WarBoardBattleResumeRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBattleResumeRequest__beginRequest(
        WarBoardBattleResumeRequest_o *this,
        int32_t stageId,
        int64_t battleId,
        const MethodInfo *method)
{
  __int64 v7; // x1

  if ( (byte_41865D0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22263/*"stageId"*/, *(_QWORD *)&stageId);
    sub_B2C35C(&StringLiteral_16649/*"battleId"*/, v7);
    byte_41865D0 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22263/*"stageId"*/, stageId, 0LL);
  RequestBase__addField_31051460((RequestBase_o *)this, (System_String_o *)StringLiteral_16649/*"battleId"*/, battleId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBattleResumeRequest__getURL(
        WarBoardBattleResumeRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_41865CF & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_23200/*"warBoard/battleResume"*/, v2);
    byte_41865CF = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_23200/*"warBoard/battleResume"*/, 0LL);
}