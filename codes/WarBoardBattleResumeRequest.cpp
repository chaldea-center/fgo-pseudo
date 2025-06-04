// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBattleResumeRequest__beginRequest(
        WarBoardBattleResumeRequest_o *this,
        int32_t stageId,
        int64_t battleId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1

  if ( (byte_4B03BE7 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_23415/*"stageId"*/, *(_QWORD *)&stageId);
    sub_1BC3008(&StringLiteral_16927/*"battleId"*/, v7);
    byte_4B03BE7 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23415/*"stageId"*/, stageId, method);
  RequestBase__addField_43183652((RequestBase_o *)this, (System_String_o *)StringLiteral_16927/*"battleId"*/, battleId, v8);
  RequestBase__beginRequest((RequestBase_o *)this, v9);
}


System_String_o *__fastcall WarBoardBattleResumeRequest__getURL(
        WarBoardBattleResumeRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B03BE6 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_24491/*"warBoard/battleResume"*/, v2);
    byte_4B03BE6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62348648(BaseUrl, (System_String_o *)StringLiteral_24491/*"warBoard/battleResume"*/, 0LL);
}