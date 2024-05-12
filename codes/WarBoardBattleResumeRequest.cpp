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
  if ( (byte_43899CA & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22736/*"stageId"*/);
    sub_B775C4(&StringLiteral_16979/*"battleId"*/);
    byte_43899CA = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22736/*"stageId"*/, stageId, 0LL);
  RequestBase__addField_32564924((RequestBase_o *)this, (System_String_o *)StringLiteral_16979/*"battleId"*/, battleId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBattleResumeRequest__getURL(
        WarBoardBattleResumeRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_43899C9 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_23683/*"warBoard/battleResume"*/);
    byte_43899C9 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_23683/*"warBoard/battleResume"*/, 0LL);
}