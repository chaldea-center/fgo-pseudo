void BattleLogicServantAiTask___ctor(
        BattleLogicServantAiTask_o *this,
        int32_t procState,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1
  struct BattleLogicServantAi_o *v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  BattleLogicServantTask___ctor((BattleLogicServantTask_o *)this, 59, svtData, (const MethodInfo *)logic);
  this->fields.procState = procState;
  this->fields.svtData = svtData;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.svtData, (int32_t)svtData, v9, v10, v11, v12, v13, v14);
  if ( !svtData )
    sub_1C942F0(v15, v16);
  v17 = (struct BattleLogicServantAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, BattleLogic_o *, const MethodInfo *))svtData->klass->vtable._20_GetLogicServantAi.methodPtr)(
                                           svtData,
                                           logic,
                                           svtData->klass->vtable._20_GetLogicServantAi.method);
  this->fields.logicAi = v17;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.logicAi, (int32_t)v17, v18, v19, v20, v21, v22, v23);
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

  if ( (byte_4D2FC1F & 1) == 0 )
  {
    sub_1C94098(&BattleLogicTask___TypeInfo);
    byte_4D2FC1F = 1;
  }
  if ( (((__int64 (__fastcall *)(BattleLogicServantAiTask_o *, BattleLogic_o *, const MethodInfo *))this->klass->vtable._11_IsActable.methodPtr)(
          this,
          logic,
          this->klass->vtable._11_IsActable.method)
      & 1) == 0 )
    return (BattleLogicTask_array *)sub_1C94140(BattleLogicTask___TypeInfo, 0);
  logicAi = this->fields.logicAi;
  if ( !logicAi )
    sub_1C942F0(0, v5);
  return BattleLogicServantAi__TaskAiTargetAct(
           logicAi,
           this->fields.svtData,
           this->fields.procState,
           this->fields._AiTimingPriority_k__BackingField,
           0,
           0);
}