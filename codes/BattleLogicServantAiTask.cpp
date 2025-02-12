void __fastcall BattleLogicServantAiTask___ctor(
        BattleLogicServantAiTask_o *this,
        int32_t procState,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1
  struct BattleLogicServantAi_o *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  BattleLogicServantTask___ctor((BattleLogicServantTask_o *)this, 59, svtData, (const MethodInfo *)logic);
  this->fields.procState = procState;
  this->fields.svtData = svtData;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.svtData, (int64_t)svtData, v9, v10, v11, v12, v13, v14);
  if ( !svtData )
    sub_1C1AE30(v15, v16);
  v17 = (struct BattleLogicServantAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, BattleLogic_o *, Il2CppMethodPointer))svtData->klass->vtable._20_GetLogicServantAi.method)(
                                           svtData,
                                           logic,
                                           svtData->klass->vtable._21_getThisTurnActCount.methodPtr);
  this->fields.logicAi = v17;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.logicAi, (int64_t)v17, v18, v19, v20, v21, v22, v23);
}


bool __fastcall BattleLogicServantAiTask__IsActable(
        BattleLogicServantAiTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  return 1;
}


BattleLogicTask_array *__fastcall BattleLogicServantAiTask__MakeActionTask(
        BattleLogicServantAiTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleLogicServantAi_o *logicAi; // x0

  if ( (byte_4BCA8A3 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleLogicTask___TypeInfo, logic);
    byte_4BCA8A3 = 1;
  }
  if ( (((__int64 (__fastcall *)(BattleLogicServantAiTask_o *, BattleLogic_o *, void *))this->klass->vtable._10_IsActable.method)(
          this,
          logic,
          this->klass[1]._1.image) & 1) == 0 )
    return (BattleLogicTask_array *)sub_1C1AC7C(BattleLogicTask___TypeInfo, 0LL);
  logicAi = this->fields.logicAi;
  if ( !logicAi )
    sub_1C1AE30(0LL, v5);
  return BattleLogicServantAi__TaskAiTargetAct(
           logicAi,
           this->fields.svtData,
           this->fields.procState,
           this->fields._AiTimingPriority_k__BackingField,
           0,
           0LL);
}