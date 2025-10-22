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
  __int64 v12; // x1
  struct BattleLogicServantAi_o *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  BattleLogicServantTask___ctor((BattleLogicServantTask_o *)this, 59, svtData, (const MethodInfo *)logic);
  this->fields.procState = procState;
  this->fields.svtData = svtData;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.svtData, (int32_t)svtData, v9, v10);
  if ( !svtData )
    sub_1C3E7C0(v11, v12);
  v13 = (struct BattleLogicServantAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, BattleLogic_o *, const MethodInfo *))svtData->klass->vtable._20_GetLogicServantAi.methodPtr)(
                                           svtData,
                                           logic,
                                           svtData->klass->vtable._20_GetLogicServantAi.method);
  this->fields.logicAi = v13;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.logicAi, (int32_t)v13, v14, v15);
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
  __int64 v5; // x1
  BattleLogicServantAi_o *logicAi; // x0

  if ( (byte_4C5A05C & 1) == 0 )
  {
    sub_1C3E564(&BattleLogicTask___TypeInfo);
    byte_4C5A05C = 1;
  }
  if ( (((__int64 (__fastcall *)(BattleLogicServantAiTask_o *, BattleLogic_o *, const MethodInfo *))this->klass->vtable._11_IsActable.methodPtr)(
          this,
          logic,
          this->klass->vtable._11_IsActable.method)
      & 1) == 0 )
    return (BattleLogicTask_array *)sub_1C3E60C(BattleLogicTask___TypeInfo, 0);
  logicAi = this->fields.logicAi;
  if ( !logicAi )
    sub_1C3E7C0(0, v5);
  return BattleLogicServantAi__TaskAiTargetAct(
           logicAi,
           this->fields.svtData,
           this->fields.procState,
           this->fields._AiTimingPriority_k__BackingField,
           0,
           0);
}