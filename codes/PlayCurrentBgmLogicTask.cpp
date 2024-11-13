void __fastcall PlayCurrentBgmLogicTask___ctor(PlayCurrentBgmLogicTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, method);
  this->fields.actiontype = 71;
  this->fields.isSkipStep = 1;
}


BattleActionData_o *__fastcall PlayCurrentBgmLogicTask__MakeActionData(
        PlayCurrentBgmLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PlayCurrentBgmActionData_o *v4; // x19

  if ( (byte_4B18F26 & 1) == 0 )
  {
    sub_1BCA7E0(&PlayCurrentBgmActionData_TypeInfo, logic, method);
    byte_4B18F26 = 1;
  }
  v4 = (PlayCurrentBgmActionData_o *)sub_1BCAA2C(PlayCurrentBgmActionData_TypeInfo, logic, method, v3);
  PlayCurrentBgmActionData___ctor(v4, 0LL);
  return (BattleActionData_o *)v4;
}