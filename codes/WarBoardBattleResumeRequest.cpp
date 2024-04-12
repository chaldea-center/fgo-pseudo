void __fastcall WarBoardBattleResumeRequest___ctor(WarBoardBattleResumeRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall WarBoardBattleResumeRequest__beginRequest(
        WarBoardBattleResumeRequest_o *this,
        int32_t stageId,
        int64_t battleId,
        const MethodInfo *method)
{
  if ( (byte_42AEAFE & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22450/*"stageId"*/);
    sub_B52984(&StringLiteral_16764/*"battleId"*/);
    byte_42AEAFE = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22450/*"stageId"*/, stageId, 0LL);
  RequestBase__addField_32020452((RequestBase_o *)this, (System_String_o *)StringLiteral_16764/*"battleId"*/, battleId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBattleResumeRequest__getURL(
        WarBoardBattleResumeRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42AEAFD & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_23392/*"warBoard/battleResume"*/);
    byte_42AEAFD = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_23392/*"warBoard/battleResume"*/, 0LL);
}