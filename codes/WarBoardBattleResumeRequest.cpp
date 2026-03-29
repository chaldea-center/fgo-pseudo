void WarBoardBattleResumeRequest__beginRequest(
        WarBoardBattleResumeRequest_o *this,
        int32_t stageId,
        int64_t battleId,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4D32618 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_23940/*"stageId"*/);
    sub_1C93AD4(&StringLiteral_17203/*"battleId"*/);
    byte_4D32618 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23940/*"stageId"*/, stageId, method);
  RequestBase__addField_44911784((RequestBase_o *)this, (System_String_o *)StringLiteral_17203/*"battleId"*/, battleId, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
}


System_String_o *WarBoardBattleResumeRequest__getURL(WarBoardBattleResumeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D32617 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_25052/*"warBoard/battleResume"*/);
    byte_4D32617 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_25052/*"warBoard/battleResume"*/, 0);
}