void PlayerComboEndServantReactTaskCreator___ctor(
        PlayerComboEndServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantReactTaskCreator___ctor((ServantReactTaskCreator_o *)this, 26, v2);
}


BattleLogicTask_o *PlayerComboEndServantReactTaskCreator__Create(
        PlayerComboEndServantReactTaskCreator_o *this,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  int32_t ProcState_k__BackingField; // w21
  PlayerComboEndServantAiTask_o *v8; // x22

  if ( (byte_593BAE4 & 1) == 0 )
  {
    sub_21FFC50(&PlayerComboEndServantAiTask_TypeInfo);
    byte_593BAE4 = 1;
  }
  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  v8 = (PlayerComboEndServantAiTask_o *)sub_21FFEBC(PlayerComboEndServantAiTask_TypeInfo);
  PlayerComboEndServantAiTask___ctor(v8, ProcState_k__BackingField, svtData, logic, 0);
  return (BattleLogicTask_o *)v8;
}