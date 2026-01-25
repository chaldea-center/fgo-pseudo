// local variable allocation has failed, the output may be wrong!
void PlayBackStepLogicTask___ctor(PlayBackStepLogicTask_o *this, int32_t actorId, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, *(const MethodInfo **)&actorId);
  this->fields.actiontype = 71;
  this->fields.isSkipStep = 1;
  this->fields.backStepActorId = actorId;
}


BattleActionData_o *PlayBackStepLogicTask__MakeActionData(
        PlayBackStepLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  PlayBackStepLogicTask_o *v4; // x20
  BattleServantData_o *ServantData; // x0
  BattleActionData_o *BackStep; // x20
  BattleLogicTask_o *v7; // x21
  const MethodInfo *v8; // x1

  v4 = this;
  if ( (byte_4CF199A & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicTask_TypeInfo);
    this = (PlayBackStepLogicTask_o *)sub_1C7BAE8(&BattlePerformance_TypeInfo);
    byte_4CF199A = 1;
  }
  if ( !logic )
    goto LABEL_15;
  this = (PlayBackStepLogicTask_o *)logic->fields.data;
  if ( !this )
    goto LABEL_15;
  ServantData = BattleData__getServantData((BattleData_o *)this, v4->fields.backStepActorId, 0);
  if ( ServantData && !ServantData->fields.isDeadAnime )
  {
    this = (PlayBackStepLogicTask_o *)logic->fields.logicnomal;
    if ( this )
    {
      BackStep = BattleLogicNomal__createBackStep((BattleLogicNomal_o *)this, v4->fields.backStepActorId, 0);
      v7 = (BattleLogicTask_o *)sub_1C7BD34(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v7, v8);
      this = (PlayBackStepLogicTask_o *)BattlePerformance_TypeInfo;
      if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
      if ( v7 )
      {
        v7->fields.systemTime = BattlePerformance_TypeInfo->static_fields->AFTER_BACK_STEP_INTERVAL;
        this = (PlayBackStepLogicTask_o *)BattleLogic__createSystem(logic, v7, 0);
        if ( BackStep )
        {
          BattleActionData__AddAfterActionData(BackStep, (BattleActionData_o *)this, 0, 0);
          return BackStep;
        }
      }
    }
LABEL_15:
    sub_1C7BD40(this, logic);
  }
  return 0;
}