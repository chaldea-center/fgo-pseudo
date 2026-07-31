void WarBoardBattleResumeRequest__beginRequest(
        WarBoardBattleResumeRequest_o *this,
        int32_t stageId,
        int64_t battleId,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_593A35C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24856/*"stageId"*/);
    sub_21FFC50(&StringLiteral_17769/*"battleId"*/);
    byte_593A35C = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24856/*"stageId"*/, stageId, method);
  RequestBase__addField_51200900((RequestBase_o *)this, (System_String_o *)StringLiteral_17769/*"battleId"*/, battleId, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
}


System_String_o *WarBoardBattleResumeRequest__getURL(WarBoardBattleResumeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A35B & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_26052/*"warBoard/battleResume"*/);
    byte_593A35B = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_26052/*"warBoard/battleResume"*/, 0);
}