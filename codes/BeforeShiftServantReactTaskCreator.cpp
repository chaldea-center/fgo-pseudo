BattleLogicTask_o *__fastcall BeforeShiftServantReactTaskCreator__Create(
        BeforeShiftServantReactTaskCreator_o *this,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  int32_t ProcState_k__BackingField; // w21
  ShiftBeforeServantAiTask_o *v8; // x22

  if ( (byte_4A72AE3 & 1) == 0 )
  {
    sub_1B90010(&ShiftBeforeServantAiTask_TypeInfo, svtData);
    byte_4A72AE3 = 1;
  }
  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  v8 = (ShiftBeforeServantAiTask_o *)sub_1B9025C(ShiftBeforeServantAiTask_TypeInfo);
  ShiftBeforeServantAiTask___ctor(v8, ProcState_k__BackingField, svtData, logic, 0LL);
  return (BattleLogicTask_o *)v8;
}


bool __fastcall BeforeShiftServantReactTaskCreator__IsCreatable(
        BeforeShiftServantReactTaskCreator_o *this,
        BattleLogic_o *logic,
        BattleServantData_o *svtData,
        int32_t priority,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1B9026C(this, logic);
  return BattleServantData__get_IsNormalStatus(svtData, 0LL) && BattleServantData__isAlive(svtData, 0, 0LL);
}