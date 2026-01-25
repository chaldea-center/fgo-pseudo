BattleLogicTask_o *AliveServantReactTaskCreator__Create(
        AliveServantReactTaskCreator_o *this,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  int32_t ProcState_k__BackingField; // w21
  BattleLogicServantAiTask_o *v8; // x22
  const MethodInfo *v9; // x4

  if ( (byte_4CF193F & 1) == 0 )
  {
    sub_1C7BAE8(&AliveServantAiTask_TypeInfo);
    byte_4CF193F = 1;
  }
  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  v8 = (BattleLogicServantAiTask_o *)sub_1C7BD34(AliveServantAiTask_TypeInfo);
  BattleLogicServantAiTask___ctor(v8, ProcState_k__BackingField, svtData, logic, v9);
  return (BattleLogicTask_o *)v8;
}


bool AliveServantReactTaskCreator__IsCreatable(
        AliveServantReactTaskCreator_o *this,
        BattleLogic_o *logic,
        BattleServantData_o *svtData,
        int32_t priority,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1C7BD40(this, logic);
  return BattleServantData__get_IsNormalStatus(svtData, 0) && BattleServantData__isAlive(svtData, 0, 0);
}