void __fastcall AliveServantReactTaskCreator___ctor(
        AliveServantReactTaskCreator_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  ServantReactTaskCreator___ctor((ServantReactTaskCreator_o *)this, procState, 0LL);
}


BattleLogicTask_o *__fastcall AliveServantReactTaskCreator__Create(
        AliveServantReactTaskCreator_o *this,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  int32_t ProcState_k__BackingField; // w21
  BattleLogicServantAiTask_o *v8; // x22

  if ( (byte_4185A9A & 1) == 0 )
  {
    sub_B2C35C(&AliveServantAiTask_TypeInfo, svtData);
    byte_4185A9A = 1;
  }
  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  v8 = (BattleLogicServantAiTask_o *)sub_B2C42C(AliveServantAiTask_TypeInfo);
  BattleLogicServantAiTask___ctor(v8, ProcState_k__BackingField, svtData, logic, 0LL);
  return (BattleLogicTask_o *)v8;
}


bool __fastcall AliveServantReactTaskCreator__IsCreatable(
        AliveServantReactTaskCreator_o *this,
        BattleLogic_o *logic,
        BattleServantData_o *svtData,
        int32_t priority,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B2C434(this, logic);
  return BattleServantData__get_IsNormalStatus(svtData, 0LL) && BattleServantData__isAlive(svtData, 0, 0LL);
}