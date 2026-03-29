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
  BattleLogicServantAiTask_o *v8; // x22
  const MethodInfo *v9; // x4

  if ( (byte_4D33D23 & 1) == 0 )
  {
    sub_1C93AD4(&PlayerComboEndServantAiTask_TypeInfo);
    byte_4D33D23 = 1;
  }
  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  v8 = (BattleLogicServantAiTask_o *)sub_1C93D20(PlayerComboEndServantAiTask_TypeInfo);
  BattleLogicServantAiTask___ctor(v8, ProcState_k__BackingField, svtData, logic, v9);
  return (BattleLogicTask_o *)v8;
}