void BattleLogicServantAiTask___ctor(
        BattleLogicServantAiTask_o *this,
        int32_t procState,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x0
  __int64 v16; // x1
  struct BattleLogicServantAi_o *v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  BattleLogicServantTask___ctor((BattleLogicServantTask_o *)this, 59, svtData, (const MethodInfo *)logic);
  this->fields.procState = procState;
  this->fields.svtData = svtData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.svtData, (int32_t)svtData, v9, v10, v11, v12, v13, v14);
  if ( !svtData )
    sub_21FFECC(v15, v16);
  v17 = (struct BattleLogicServantAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, BattleLogic_o *, const MethodInfo *))svtData->klass->vtable._20_GetLogicServantAi.methodPtr)(
                                           svtData,
                                           logic,
                                           svtData->klass->vtable._20_GetLogicServantAi.method);
  this->fields.logicAi = v17;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.logicAi, (int32_t)v17, v18, v19, v20, v21, v22, v23);
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

  if ( (byte_593BC21 & 1) == 0 )
  {
    sub_21FFC50(&BattleLogicTask___TypeInfo);
    byte_593BC21 = 1;
  }
  if ( (((__int64 (__fastcall *)(BattleLogicServantAiTask_o *, BattleLogic_o *, const MethodInfo *))this->klass->vtable._12_IsActable.methodPtr)(
          this,
          logic,
          this->klass->vtable._12_IsActable.method)
      & 1) == 0 )
    return (BattleLogicTask_array *)sub_21FFD10(BattleLogicTask___TypeInfo, 0);
  logicAi = this->fields.logicAi;
  if ( !logicAi )
    sub_21FFECC(0, v5);
  return BattleLogicServantAi__TaskAiTargetAct(
           logicAi,
           this->fields.svtData,
           this->fields.procState,
           this->fields._AiTimingPriority_k__BackingField,
           0,
           0);
}