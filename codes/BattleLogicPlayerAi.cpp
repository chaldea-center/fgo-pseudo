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
  int32_t v5; // w2
  int32_t v6; // w3
  struct BattleLogic_o *logic; // x8
  struct BattleLogicEnemyAi_o *logicEnemyAi; // x8
  struct AiLogic_o *aiLogic; // x1

  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, 0LL);
  logic = this->fields.logic;
  if ( !logic || (logicEnemyAi = logic->fields.logicEnemyAi) == 0LL )
    sub_1B64324(v4);
  aiLogic = logicEnemyAi->fields.aiLogic;
  this->fields.aiLogic = aiLogic;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.aiLogic, (int32_t)aiLogic, v5, v6);
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
    sub_1B64324(0LL);
  return BattleData__getFieldEnemyServantIDList(data, 0, 0LL);
}


System_Int32_array *__fastcall BattleLogicPlayerAi__get_PartySvtIds(
        BattleLogicPlayerAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1B64324(0LL);
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v19; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  ServantAiActArgument_o *v22; // x25

  v9 = (BattleLogicBaseAi_o *)this;
  if ( (byte_49FEFDC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, svtData);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    this = (BattleLogicPlayerAi_o *)sub_1B640C8(&ServantAiActArgument_TypeInfo, v12);
    byte_49FEFDC = 1;
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
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this = (BattleLogicPlayerAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                    svtData,
                                    svtData->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( !this
    || (AiState__setBeforeAction((AiState_o *)this, data_high, aiEnt->fields.aiActId, 0LL),
        v22 = (ServantAiActArgument_o *)sub_1B64314(ServantAiActArgument_TypeInfo, v20, v21),
        ServantAiActArgument___ctor(v22, v14, (AiBaseEntity_o *)aiEnt, svtData, 0, 0LL),
        this = (BattleLogicPlayerAi_o *)BattleLogicBaseAi__SetProcAiActTask(
                                          v9,
                                          (System_Collections_Generic_List_BattleLogicTask__o *)v19,
                                          data_high,
                                          (BaseAiActArgument_o *)v22,
                                          0LL),
        !v19) )
  {
LABEL_11:
    sub_1B64324(this);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v19,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}