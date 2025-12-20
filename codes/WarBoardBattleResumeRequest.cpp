void WarBoardBattleResumeRequest__beginRequest(
        WarBoardBattleResumeRequest_o *this,
        int32_t stageId,
        int64_t battleId,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4D2E519 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23877/*"stageId"*/);
    sub_1C94098(&StringLiteral_17158/*"battleId"*/);
    byte_4D2E519 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23877/*"stageId"*/, stageId, method);
  RequestBase__addField_45013228((RequestBase_o *)this, (System_String_o *)StringLiteral_17158/*"battleId"*/, battleId, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
}


System_String_o *WarBoardBattleResumeRequest__getURL(WarBoardBattleResumeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E518 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_24982/*"warBoard/battleResume"*/);
    byte_4D2E518 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_24982/*"warBoard/battleResume"*/, 0);
}