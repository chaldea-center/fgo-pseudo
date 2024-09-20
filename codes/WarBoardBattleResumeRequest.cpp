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
  if ( (byte_4A5CB1E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23477/*"stageId"*/);
    sub_1B885B0(&StringLiteral_17113/*"battleId"*/);
    byte_4A5CB1E = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23477/*"stageId"*/, stageId, 0LL);
  RequestBase__addField_41133280((RequestBase_o *)this, (System_String_o *)StringLiteral_17113/*"battleId"*/, battleId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBattleResumeRequest__getURL(
        WarBoardBattleResumeRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CB1D & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24611/*"warBoard/battleResume"*/);
    byte_4A5CB1D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_24611/*"warBoard/battleResume"*/, 0LL);
}