// local variable allocation has failed, the output may be wrong!
void __fastcall PlayBackStepLogicTask___ctor(PlayBackStepLogicTask_o *this, int32_t actorId, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, *(const MethodInfo **)&actorId);
  this->fields.actiontype = 71;
  this->fields.isSkipStep = 1;
  this->fields.backStepActorId = actorId;
}


BattleActionData_o *__fastcall PlayBackStepLogicTask__MakeActionData(
        PlayBackStepLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  PlayBackStepLogicTask_o *v4; // x20
  __int64 v5; // x1
  BattleServantData_o *ServantData; // x0
  BattleActionData_o *BackStep; // x20
  BattleLogicTask_o *v8; // x21
  const MethodInfo *v9; // x1

  v4 = this;
  if ( (byte_4BB74BC & 1) == 0 )
  {
    sub_1C13D24(&BattleLogicTask_TypeInfo, logic);
    this = (PlayBackStepLogicTask_o *)sub_1C13D24(&BattlePerformance_TypeInfo, v5);
    byte_4BB74BC = 1;
  }
  if ( !logic )
    goto LABEL_15;
  this = (PlayBackStepLogicTask_o *)logic->fields.data;
  if ( !this )
    goto LABEL_15;
  ServantData = BattleData__getServantData((BattleData_o *)this, v4->fields.backStepActorId, 0LL);
  if ( ServantData && !ServantData->fields.isDeadAnime )
  {
    this = (PlayBackStepLogicTask_o *)logic->fields.logicnomal;
    if ( this )
    {
      BackStep = BattleLogicNomal__createBackStep((BattleLogicNomal_o *)this, v4->fields.backStepActorId, 0LL);
      v8 = (BattleLogicTask_o *)sub_1C13F70(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v8, v9);
      this = (PlayBackStepLogicTask_o *)BattlePerformance_TypeInfo;
      if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
      if ( v8 )
      {
        v8->fields.systemTime = BattlePerformance_TypeInfo->static_fields->AFTER_BACK_STEP_INTERVAL;
        this = (PlayBackStepLogicTask_o *)BattleLogic__createSystem(logic, v8, 0LL);
        if ( BackStep )
        {
          BattleActionData__AddAfterActionData(BackStep, (BattleActionData_o *)this, 0, 0LL);
          return BackStep;
        }
      }
    }
LABEL_15:
    sub_1C13F80(this, logic);
  }
  return 0LL;
}