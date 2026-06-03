BattleLogicTask_o *AliveServantReactTaskCreator__Create(
        AliveServantReactTaskCreator_o *this,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  int32_t ProcState_k__BackingField; // w21
  AliveServantAiTask_o *v8; // x22

  if ( (byte_4E7AA82 & 1) == 0 )
  {
    sub_1D0F0B4(&AliveServantAiTask_TypeInfo);
    byte_4E7AA82 = 1;
  }
  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  v8 = (AliveServantAiTask_o *)sub_1D0F300(AliveServantAiTask_TypeInfo);
  AliveServantAiTask___ctor(v8, ProcState_k__BackingField, svtData, logic, 0);
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
    sub_1D0F30C(this, logic);
  return BattleServantData__get_IsNormalStatus(svtData, 0) && BattleServantData__isAlive(svtData, 0, 0);
}