BattleLogicTask_o *BeforeShiftServantReactTaskCreator__Create(
        BeforeShiftServantReactTaskCreator_o *this,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  int32_t ProcState_k__BackingField; // w21
  ShiftBeforeServantAiTask_o *v8; // x22

  if ( (byte_5973CF1 & 1) == 0 )
  {
    sub_2213A60(&ShiftBeforeServantAiTask_TypeInfo);
    byte_5973CF1 = 1;
  }
  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  v8 = (ShiftBeforeServantAiTask_o *)sub_2213CCC(ShiftBeforeServantAiTask_TypeInfo);
  ShiftBeforeServantAiTask___ctor(v8, ProcState_k__BackingField, svtData, logic, 0);
  return (BattleLogicTask_o *)v8;
}


bool BeforeShiftServantReactTaskCreator__IsCreatable(
        BeforeShiftServantReactTaskCreator_o *this,
        BattleLogic_o *logic,
        BattleServantData_o *svtData,
        int32_t priority,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_2213CDC(this, logic);
  return BattleServantData__get_IsNormalStatus(svtData, 0) && BattleServantData__isAlive(svtData, 0, 0);
}