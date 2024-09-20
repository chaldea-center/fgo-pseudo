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
    sub_1B8880C(v4, v5);
  aiLogic = logicEnemyAi->fields.aiLogic;
  this->fields.aiLogic = aiLogic;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.aiLogic, (int32_t)aiLogic, v6, v7);
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
    sub_1B8880C(0LL, method);
  return BattleData__getFieldEnemyServantIDList(data, 0, 0LL);
}


System_Int32_array *__fastcall BattleLogicPlayerAi__get_PartySvtIds(
        BattleLogicPlayerAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1B8880C(0LL, method);
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
  int32_t data_high; // w23
  AiActEntity_o *v11; // x22
  AiState_o *v12; // x0
  System_Collections_Generic_List_object__o *v14; // x24
  ServantAiActArgument_o *v15; // x25

  v9 = (BattleLogicBaseAi_o *)this;
  if ( (byte_4A5DD99 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    this = (BattleLogicPlayerAi_o *)sub_1B885B0(&ServantAiActArgument_TypeInfo);
    byte_4A5DD99 = 1;
  }
  if ( !aiEnt )
    goto LABEL_11;
  this = (BattleLogicPlayerAi_o *)BattleLogicBaseAi__GetAiActEntity(v9, aiEnt->fields.aiActId, 0LL);
  if ( !this || !svtData )
    goto LABEL_11;
  data_high = HIDWORD(this->fields.data);
  v11 = (AiActEntity_o *)this;
  v12 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v9, data_high, (AiBaseEntity_o *)aiEnt, v12, 0LL) )
    return v9->fields.emptyTask;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this = (BattleLogicPlayerAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                    svtData,
                                    svtData->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( !this
    || (AiState__setBeforeAction((AiState_o *)this, data_high, aiEnt->fields.aiActId, 0LL),
        v15 = (ServantAiActArgument_o *)sub_1B887FC(ServantAiActArgument_TypeInfo),
        ServantAiActArgument___ctor(v15, v11, (AiBaseEntity_o *)aiEnt, svtData, 0, 0LL),
        this = (BattleLogicPlayerAi_o *)BattleLogicBaseAi__SetProcAiActTask(
                                          v9,
                                          (System_Collections_Generic_List_BattleLogicTask__o *)v14,
                                          data_high,
                                          (BaseAiActArgument_o *)v15,
                                          0LL),
        !v14) )
  {
LABEL_11:
    sub_1B8880C(this, svtData);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v14,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}