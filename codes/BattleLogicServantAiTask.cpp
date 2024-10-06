void __fastcall BattleLogicServantAiTask___ctor(
        BattleLogicServantAiTask_o *this,
        int32_t procState,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x0
  __int64 v12; // x1
  struct BattleLogicServantAi_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  BattleLogicServantTask___ctor((BattleLogicServantTask_o *)this, 59, svtData, (const MethodInfo *)logic);
  this->fields.svtData = svtData;
  this->fields.procState = procState;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtData, (int32_t)svtData, v9, v10);
  if ( !svtData )
    sub_1B9026C(v11, v12);
  v13 = (struct BattleLogicServantAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, BattleLogic_o *, Il2CppMethodPointer))svtData->klass->vtable._20_GetLogicServantAi.method)(
                                           svtData,
                                           logic,
                                           svtData->klass->vtable._21_getThisTurnActCount.methodPtr);
  this->fields.logicAi = v13;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.logicAi, (int32_t)v13, v14, v15);
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

  if ( (byte_4A72B2C & 1) == 0 )
  {
    sub_1B90010(&BattleLogicTask___TypeInfo, logic);
    byte_4A72B2C = 1;
  }
  if ( (((__int64 (__fastcall *)(BattleLogicServantAiTask_o *, BattleLogic_o *, void *))this->klass->vtable._8_IsActable.method)(
          this,
          logic,
          this->klass[1]._1.image) & 1) == 0 )
    return (BattleLogicTask_array *)sub_1B900B8(BattleLogicTask___TypeInfo, 0LL);
  logicAi = this->fields.logicAi;
  if ( !logicAi )
    sub_1B9026C(0LL, v5);
  return BattleLogicServantAi__TaskAiTargetAct(
           logicAi,
           this->fields.svtData,
           this->fields.procState,
           this->fields._AiTimingPriority_k__BackingField,
           0,
           0LL);
}