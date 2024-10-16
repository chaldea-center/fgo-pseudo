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
  PlayCurrentBgmActionData_o *v3; // x19

  if ( (byte_4AB8A46 & 1) == 0 )
  {
    sub_1BAB41C(&PlayCurrentBgmActionData_TypeInfo, logic);
    byte_4AB8A46 = 1;
  }
  v3 = (PlayCurrentBgmActionData_o *)sub_1BAB668(PlayCurrentBgmActionData_TypeInfo);
  PlayCurrentBgmActionData___ctor(v3, 0LL);
  return (BattleActionData_o *)v3;
}