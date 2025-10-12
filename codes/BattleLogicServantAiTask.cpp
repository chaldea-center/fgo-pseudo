void BattleLogicServantAiTask___ctor(
        BattleLogicServantAiTask_o *this,
        int32_t procState,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  struct BattleLogicServantAi_o *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  BattleLogicServantTask___ctor((BattleLogicServantTask_o *)this, 59, svtData, (const MethodInfo *)logic);
  this->fields.procState = procState;
  this->fields.svtData = svtData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtData, (int32_t)svtData, v9, v10);
  if ( !svtData )
    sub_1C32E7C(v11);
  v12 = (struct BattleLogicServantAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, BattleLogic_o *, const MethodInfo *))svtData->klass->vtable._20_GetLogicServantAi.methodPtr)(
                                           svtData,
                                           logic,
                                           svtData->klass->vtable._20_GetLogicServantAi.method);
  this->fields.logicAi = v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.logicAi, (int32_t)v12, v13, v14);
}


bool BattleLogicServantAiTask__IsActable(
        BattleLogicServantAiTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  return 1;
}


BattleLogicTask_array *BattleLogicServantAiTask__MakeActionTask(
        BattleLogicServantAiTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleLogicServantAi_o *logicAi; // x0

  if ( (byte_4C3AB70 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicTask___TypeInfo);
    byte_4C3AB70 = 1;
  }
  if ( (((__int64 (__fastcall *)(BattleLogicServantAiTask_o *, BattleLogic_o *, const MethodInfo *))this->klass->vtable._11_IsActable.methodPtr)(
          this,
          logic,
          this->klass->vtable._11_IsActable.method)
      & 1) == 0 )
    return (BattleLogicTask_array *)sub_1C32CC8(BattleLogicTask___TypeInfo, 0);
  logicAi = this->fields.logicAi;
  if ( !logicAi )
    sub_1C32E7C(0);
  return BattleLogicServantAi__TaskAiTargetAct(
           logicAi,
           this->fields.svtData,
           this->fields.procState,
           this->fields._AiTimingPriority_k__BackingField,
           0,
           0);
}