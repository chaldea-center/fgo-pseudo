void __fastcall PlayCurrentBgmLogicTask___ctor(PlayCurrentBgmLogicTask_o *this, const MethodInfo *method)
{
  CreateActionDataLogicTask___ctor((CreateActionDataLogicTask_o *)this, 0LL);
}


BattleActionData_o *__fastcall PlayCurrentBgmLogicTask__MakeActionData(
        PlayCurrentBgmLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  ExecInActionData_o *v3; // x19

  if ( (byte_438B32B & 1) == 0 )
  {
    sub_B775C4(&PlayCurrentBgmActionData_TypeInfo);
    byte_438B32B = 1;
  }
  v3 = (ExecInActionData_o *)sub_B77694(PlayCurrentBgmActionData_TypeInfo);
  ExecInActionData___ctor(v3, 0LL);
  return (BattleActionData_o *)v3;
}