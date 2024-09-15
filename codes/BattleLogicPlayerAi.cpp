void __fastcall BattleLogicPlayerAi___ctor(BattleLogicPlayerAi_o *this, const MethodInfo *method)
{
  BattleLogicServantAi___ctor((BattleLogicServantAi_o *)this, 0LL);
}


void __fastcall BattleLogicPlayerAi__Initialize(
        BattleLogicPlayerAi_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct BattleLogic_o *logic; // x8
  struct BattleLogicEnemyAi_o *logicEnemyAi; // x8
  struct AiLogic_o *aiLogic; // x1

  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, 0LL);
  logic = this->fields.logic;
  if ( !logic || (logicEnemyAi = logic->fields.logicEnemyAi) == 0LL )
    sub_1B7641C(v4, v5);
  aiLogic = logicEnemyAi->fields.aiLogic;
  this->fields.aiLogic = aiLogic;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.aiLogic, (int32_t)aiLogic, v6, v7);
}


int32_t __fastcall BattleLogicPlayerAi__get_ActorType(BattleLogicPlayerAi_o *this, const MethodInfo *method)
{
  return 2;
}


System_Int32_array *__fastcall BattleLogicPlayerAi__get_OpponentSvtIds(
        BattleLogicPlayerAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1B7641C(0LL, method);
  return BattleData__getFieldEnemyServantIDList(data, 0, 0LL);
}


System_Int32_array *__fastcall BattleLogicPlayerAi__get_PartySvtIds(
        BattleLogicPlayerAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1B7641C(0LL, method);
  return BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicPlayerAi__procAiAct(
        BattleLogicPlayerAi_o *this,
        BattleServantData_o *svtData,
        AiEntity_o *aiEnt,
        int32_t countAct,
        AiLogic_AiInfo_o *aiInfo,
        int32_t procState,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t data_high; // w23
  AiActEntity_o *v14; // x22
  AiState_o *v15; // x0
  System_Collections_Generic_List_object__o *v17; // x24
  ServantAiActArgument_o *v18; // x25

  v9 = (BattleLogicBaseAi_o *)this;
  if ( (byte_4A30B53 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, svtData);
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1B761C0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    this = (BattleLogicPlayerAi_o *)sub_1B761C0(&ServantAiActArgument_TypeInfo, v12);
    byte_4A30B53 = 1;
  }
  if ( !aiEnt )
    goto LABEL_11;
  this = (BattleLogicPlayerAi_o *)BattleLogicBaseAi__GetAiActEntity(v9, aiEnt->fields.aiActId, 0LL);
  if ( !this || !svtData )
    goto LABEL_11;
  data_high = HIDWORD(this->fields.data);
  v14 = (AiActEntity_o *)this;
  v15 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v9, data_high, (AiBaseEntity_o *)aiEnt, v15, 0LL) )
    return v9->fields.emptyTask;
  v17 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this = (BattleLogicPlayerAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                    svtData,
                                    svtData->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( !this
    || (AiState__setBeforeAction((AiState_o *)this, data_high, aiEnt->fields.aiActId, 0LL),
        v18 = (ServantAiActArgument_o *)sub_1B7640C(ServantAiActArgument_TypeInfo),
        ServantAiActArgument___ctor(v18, v14, (AiBaseEntity_o *)aiEnt, svtData, 0, 0LL),
        this = (BattleLogicPlayerAi_o *)BattleLogicBaseAi__SetProcAiActTask(
                                          v9,
                                          (System_Collections_Generic_List_BattleLogicTask__o *)v17,
                                          data_high,
                                          (BaseAiActArgument_o *)v18,
                                          0LL),
        !v17) )
  {
LABEL_11:
    sub_1B7641C(this, svtData);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v17,
                                    (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}