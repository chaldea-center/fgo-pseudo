void BattleLogicPlayerAi___ctor(BattleLogicPlayerAi_o *this, const MethodInfo *method)
{
  BattleLogicServantAi___ctor((BattleLogicServantAi_o *)this, 0);
}


void BattleLogicPlayerAi__Initialize(BattleLogicPlayerAi_o *this, BattleData_o *data, const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct BattleLogic_o *logic; // x8
  struct BattleLogicEnemyAi_o *logicEnemyAi; // x8
  struct AiLogic_o *aiLogic; // x1

  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, 0);
  logic = this->fields.logic;
  if ( !logic || (logicEnemyAi = logic->fields.logicEnemyAi) == 0 )
    sub_2213CDC(v4, v5);
  aiLogic = logicEnemyAi->fields.aiLogic;
  this->fields.aiLogic = aiLogic;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.aiLogic, (int32_t)aiLogic, v6, v7, v8, v9, v10, v11);
}


int32_t BattleLogicPlayerAi__get_ActorType(BattleLogicPlayerAi_o *this, const MethodInfo *method)
{
  return 2;
}


System_Int32_array *BattleLogicPlayerAi__get_OpponentSvtIds(BattleLogicPlayerAi_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(0, method);
  return BattleData__getFieldEnemyServantIDList(data, 0, 0);
}


System_Int32_array *BattleLogicPlayerAi__get_PartySvtIds(BattleLogicPlayerAi_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(0, method);
  return BattleData__getFieldPlayerServantIDList(data, 0, 0);
}


BattleLogicTask_array *BattleLogicPlayerAi__procAiAct(
        BattleLogicPlayerAi_o *this,
        BattleServantData_o *svtData,
        AiEntity_o *aiEnt,
        int32_t countAct,
        AiLogic_AiInfo_o *aiInfo,
        int32_t procState,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v10; // x19
  AiActEntity_o *v11; // x23
  int32_t data_high; // w24
  AiState_o *v13; // x0
  System_Collections_Generic_List_object__o *v15; // x25
  ServantAiActArgument_o *v16; // x26

  v10 = (BattleLogicBaseAi_o *)this;
  if ( (byte_5973CBB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    this = (BattleLogicPlayerAi_o *)sub_2213A60(&ServantAiActArgument_TypeInfo);
    byte_5973CBB = 1;
  }
  if ( !aiEnt )
    goto LABEL_11;
  this = (BattleLogicPlayerAi_o *)BattleLogicBaseAi__GetAiActEntity(v10, aiEnt->fields.aiActId, 0);
  if ( !this || !svtData )
    goto LABEL_11;
  v11 = (AiActEntity_o *)this;
  data_high = HIDWORD(this->fields.data);
  v13 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))svtData->klass->vtable._18_getAiState.methodPtr)(
                       svtData,
                       svtData->klass->vtable._18_getAiState.method);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v10, data_high, (AiBaseEntity_o *)aiEnt, v13, 0) )
    return v10->fields.emptyTask;
  v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this = (BattleLogicPlayerAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))svtData->klass->vtable._18_getAiState.methodPtr)(
                                    svtData,
                                    svtData->klass->vtable._18_getAiState.method);
  if ( !this
    || (AiState__setBeforeAction((AiState_o *)this, data_high, aiEnt->fields.aiActId, 0),
        v16 = (ServantAiActArgument_o *)sub_2213CCC(ServantAiActArgument_TypeInfo),
        ServantAiActArgument___ctor(v16, v11, (AiBaseEntity_o *)aiEnt, svtData, procState, 0, 0),
        this = (BattleLogicPlayerAi_o *)BattleLogicBaseAi__SetProcAiActTask(
                                          v10,
                                          (System_Collections_Generic_List_BattleLogicTask__o *)v15,
                                          data_high,
                                          (BaseAiActArgument_o *)v16,
                                          0),
        !v15) )
  {
LABEL_11:
    sub_2213CDC(this, svtData);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v15,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}