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

  if ( (byte_48E40E9 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_23130/*"stageId"*/, *(_QWORD *)&stageId);
    sub_1B00CCC(&StringLiteral_16879/*"battleId"*/, v7);
    byte_48E40E9 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23130/*"stageId"*/, stageId, 0LL);
  RequestBase__addField_39759196((RequestBase_o *)this, (System_String_o *)StringLiteral_16879/*"battleId"*/, battleId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBattleResumeRequest__getURL(
        WarBoardBattleResumeRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_48E40E8 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_24248/*"warBoard/battleResume"*/, v2);
    byte_48E40E8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_60325748(BaseUrl, (System_String_o *)StringLiteral_24248/*"warBoard/battleResume"*/, 0LL);
}