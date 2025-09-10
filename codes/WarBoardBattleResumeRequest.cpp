void WarBoardBattleResumeRequest__beginRequest(
        WarBoardBattleResumeRequest_o *this,
        int32_t stageId,
        int64_t battleId,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4C28F04 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23626/*"stageId"*/);
    sub_1C2D490(&StringLiteral_17072/*"battleId"*/);
    byte_4C28F04 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23626/*"stageId"*/, stageId, method);
  RequestBase__addField_44008608((RequestBase_o *)this, (System_String_o *)StringLiteral_17072/*"battleId"*/, battleId, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
}


System_String_o *WarBoardBattleResumeRequest__getURL(WarBoardBattleResumeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28F03 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_24707/*"warBoard/battleResume"*/);
    byte_4C28F03 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_24707/*"warBoard/battleResume"*/, 0);
}